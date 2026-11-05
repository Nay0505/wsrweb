#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "cpu/cpu.h"
#include "../output/RZTE01_generated/RZTE01.h"

#ifdef __EMSCRIPTEN__
#include <emscripten.h>
#define WASM_EXPORT EMSCRIPTEN_KEEPALIVE
#else
#define WASM_EXPORT
#endif

static CPUState g_cpu;
static int g_initialized;
static u32 g_external_read_count;
static u32 g_external_write_count;
static u32 g_host_call_count;

#define RZ_MAX_UNKNOWN_MMIOS 64u
static u32 g_unknown_mmio_reads[RZ_MAX_UNKNOWN_MMIOS];
static u32 g_unknown_mmio_writes[RZ_MAX_UNKNOWN_MMIOS];
static u32 g_unknown_host_calls[RZ_MAX_UNKNOWN_MMIOS];

#define RZ_MMIO_STATE_SIZE 128u
static u32 g_mmio_state_addresses[RZ_MMIO_STATE_SIZE];
static u64 g_mmio_state_values[RZ_MMIO_STATE_SIZE];
static u32 g_mmio_state_count;
typedef struct {
    u64 offset;
    u64 length;
    char path[1024];
} RzDiscRegion;

#define RZ_DISC_REGION_MAX 8192u
static RzDiscRegion g_disc_regions[RZ_DISC_REGION_MAX];
static u32 g_disc_region_count;
static int g_disc_open;
static u32 g_di_dma_address;
static u32 g_di_dma_length;
static u32 g_di_cmd0;
static u32 g_di_cmd1;
static u32 g_di_cmd2;
static u32 g_di_status;
static u64 g_gx_bytes;
static u32 g_vi_xfb_address;
static u32 g_vi_frames;

static u32 rz_read_be32(const u8* p) {
    return ((u32)p[0] << 24) | ((u32)p[1] << 16) | ((u32)p[2] << 8) | p[3];
}

static void rz_disc_add(u64 offset, u64 length, const char* path) {
    FILE* file;
    if (!length || g_disc_region_count >= RZ_DISC_REGION_MAX)
        return;
    file = fopen(path, "rb");
    if (!file)
        return;
    fclose(file);
    g_disc_regions[g_disc_region_count].offset = offset;
    g_disc_regions[g_disc_region_count].length = length;
    snprintf(g_disc_regions[g_disc_region_count].path,
             sizeof(g_disc_regions[g_disc_region_count].path), "%s", path);
    g_disc_region_count++;
}

static int rz_disc_open_partition(void) {
    const char* prefixes[] = {"/DATA/sys", "/data/sys", "extracted/DATA/sys", "DATA/sys"};
    char boot_path[1024] = {0};
    char fst_path[1024] = {0};
    char files_root[1024] = {0};
    for (u32 i = 0; i < sizeof(prefixes) / sizeof(prefixes[0]); ++i) {
        char candidate[1024];
        snprintf(candidate, sizeof(candidate), "%s/boot.bin", prefixes[i]);
        FILE* file = fopen(candidate, "rb");
        if (file) {
            snprintf(boot_path, sizeof(boot_path), "%s/boot.bin", prefixes[i]);
            snprintf(fst_path, sizeof(fst_path), "%s/fst.bin", prefixes[i]);
            const char* sys_marker = strstr(prefixes[i], "/sys");
            if (sys_marker)
                snprintf(files_root, sizeof(files_root), "%.*s/files",
                         (int)(sys_marker - prefixes[i]), prefixes[i]);
            else
                snprintf(files_root, sizeof(files_root), "%.*s/files",
                         (int)(strlen(prefixes[i]) - 4u), prefixes[i]);
            fclose(file);
            break;
        }
    }
    if (!boot_path[0])
        return 0;

    FILE* boot = fopen(boot_path, "rb");
    u8 boot_header[0x440];
    if (!boot || fread(boot_header, 1, sizeof(boot_header), boot) != sizeof(boot_header)) {
        if (boot) fclose(boot);
        return 0;
    }
    fclose(boot);
    u64 dol_offset = (u64)rz_read_be32(boot_header + 0x420) << 2;
    u64 fst_offset = (u64)rz_read_be32(boot_header + 0x424) << 2;
    u64 fst_size = (u64)rz_read_be32(boot_header + 0x428) << 2;

    FILE* fst_file = fopen(fst_path, "rb");
    if (!fst_file)
        return 0;
    u32 fst_bytes = 0;
    fseek(fst_file, 0, SEEK_END);
    long fst_length = ftell(fst_file);
    rewind(fst_file);
    if (fst_length <= 0) {
        fclose(fst_file);
        return 0;
    }
    u8* fst = (u8*)malloc((size_t)fst_length);
    if (!fst) {
        fclose(fst_file);
        return 0;
    }
    fst_bytes = (u32)fread(fst, 1, (size_t)fst_length, fst_file);
    fclose(fst_file);
    if (fst_bytes < 12) {
        free(fst);
        return 0;
    }

    rz_disc_add(0, 0x440, boot_path);
    char main_path[1024];
    char parent_root[1024];
    const char* sys_marker = strstr(prefixes[0], "sys"); /* replaced below after boot source discovery */
    (void)sys_marker;
    snprintf(parent_root, sizeof(parent_root), "%s", files_root);
    size_t slash = strlen(parent_root);
    while (slash && parent_root[slash] != '/') slash--;
    if (slash) parent_root[slash] = '\0';
    snprintf(main_path, sizeof(main_path), "%s/sys/main.dol", parent_root);
    FILE* main_file_check = fopen(main_path, "rb");
    if (main_file_check) {
        fclose(main_file_check);
        FILE* main_file = fopen(main_path, "rb");
        fseek(main_file, 0, SEEK_END);
        long main_size = ftell(main_file);
        fclose(main_file);
        if (main_size > 0)
            rz_disc_add(dol_offset, (u64)main_size, main_path);
    }
    if (!fopen(main_path, "rb"))
        rz_disc_add(dol_offset, 0x1000000, boot_path);
    rz_disc_add(fst_offset, fst_size, fst_path);

    u32 entry_count = rz_read_be32(fst + 8);
    if ((u64)entry_count * 12u > fst_bytes) {
        free(fst);
        return 0;
    }
    const char* strings = (const char*)fst + entry_count * 12u;
    struct DiscDirStack { u32 end; char path[1024]; } stack[64];
    int stack_count = 1;
    snprintf(stack[0].path, sizeof(stack[0].path), "%s", files_root);
    stack[0].end = entry_count;
    for (u32 i = 1; i < entry_count; ++i) {
        while (stack_count > 1 && i >= stack[stack_count - 1].end)
            stack_count--;
        const u8* entry = fst + i * 12u;
        u32 name_offset = rz_read_be32(entry) & 0xFFFFFFu;
        if (name_offset > (u32)(fst_bytes - entry_count * 12u))
            continue;
        const char* name = strings + name_offset;
        u64 file_offset = (u64)rz_read_be32(entry + 4) << 2;
        u32 file_size = rz_read_be32(entry + 8);
        if (entry[0] != 0) {
            if (stack_count < 64 && i < file_size) {
                stack_count++;
                snprintf(stack[stack_count - 1].path, sizeof(stack[stack_count - 1].path),
                         "%s/%s", stack[stack_count - 2].path, name);
                stack[stack_count - 1].end = file_size;
            }
            continue;
        }
        char path[1024];
        snprintf(path, sizeof(path), "%s/%s", stack[stack_count - 1].path, name);
        rz_disc_add(file_offset, file_size, path);
    }
    free(fst);
    g_disc_open = g_disc_region_count > 0;
    fprintf(stderr, "RZ disc partition initialized: %u regions\n", g_disc_region_count);
    return g_disc_open;
}

static int rz_disc_read(u64 offset, u32 length, u32 guest_address) {
    if (!g_disc_open || guest_address >= g_cpu.ram_size + GC_RAM_BASE)
        return 0;
    for (u32 i = 0; i < g_disc_region_count; ++i) {
        RzDiscRegion* region = &g_disc_regions[i];
        if (offset < region->offset || offset >= region->offset + region->length)
            continue;
        u64 region_offset = offset - region->offset;
        u32 available = (u32)(region->length - region_offset);
        if (available > length)
            available = length;
        FILE* file = fopen(region->path, "rb");
        if (!file)
            return 0;
        fseek(file, (long)region_offset, SEEK_SET);
        u32 remaining = available;
        while (remaining) {
            u32 chunk = remaining;
            u8 buffer[4096];
            if (chunk > sizeof(buffer))
                chunk = sizeof(buffer);
            u32 got = (u32)fread(buffer, 1, chunk, file);
            for (u32 j = 0; j < got; ++j)
                mem_write8(&g_cpu, guest_address + j, buffer[j]);
            guest_address += got;
            remaining -= got;
            if (got != chunk)
                break;
        }
        fclose(file);
        return 1;
    }
    return 0;
}

static u64 rz_mmio_read_state(u32 address, u64 default_value) {
    for (u32 i = 0; i < g_mmio_state_count; ++i) {
        if (g_mmio_state_addresses[i] == address)
            return g_mmio_state_values[i];
    }
    return default_value;
}

static void rz_mmio_write_state(u32 address, u64 value) {
    for (u32 i = 0; i < g_mmio_state_count; ++i) {
        if (g_mmio_state_addresses[i] == address) {
            g_mmio_state_values[i] = value;
            return;
        }
    }
    if (g_mmio_state_count < RZ_MMIO_STATE_SIZE) {
        g_mmio_state_addresses[g_mmio_state_count] = address;
        g_mmio_state_values[g_mmio_state_count] = value;
        g_mmio_state_count++;
    }
}

static int rz_record_unique(u32* entries, u32 address) {
    for (u32 i = 0; i < RZ_MAX_UNKNOWN_MMIOS; ++i) {
        if (entries[i] == address)
            return 0;
        if (entries[i] == 0) {
            entries[i] = address;
            return 1;
        }
    }
    return 0;
}

static u32 read_be32_file(const u8* data) {
    return read_be32(data);
}

static void rz_instruction_fallback(CPUState* cpu, u32 raw, u32 cia) {
    u32 primary = raw >> 26;
    u32 xo = (raw >> 1) & 1023u;

    if (primary == 31u && ((xo == 54u) || (xo == 86u) || (xo == 278u) ||
                           (xo == 470u) || (xo == 982u) || (xo == 1014u))) {
        if (cpu->cache_control)
            cpu->cache_control(cpu, 0, cpu->gpr[(raw >> 16) & 31u], cia);
        cpu->pc = cia + 4u;
        return;
    }

    if (primary == 31u && xo == 339u) {
        u32 rd = (raw >> 21) & 31u;
        u32 spr = ((raw >> 16) & 31u) | ((raw >> 6) & 0x3E0u);
        if ((spr >= 528u && spr <= 575u) || (spr >= 952u && spr <= 958u) || (spr >= 1008u && spr <= 1022u)) {
            cpu->gpr[rd] = 0;
            cpu->pc = cia + 4u;
            return;
        }
    }

    if (primary == 31u && xo == 467u) {
        u32 spr = ((raw >> 16) & 31u) | ((raw >> 6) & 0x3E0u);
        if ((spr >= 528u && spr <= 575u) || (spr >= 952u && spr <= 958u) || (spr >= 1008u && spr <= 1022u)) {
            cpu->pc = cia + 4u;
            return;
        }
    }

    fprintf(stderr, "Unsupported PPC instruction 0x%08X at 0x%08X\n", raw, cia);
    ppc_program_exception(cpu, PPC_PROGRAM_ILLEGAL, cia);
}

static u64 rz_external_read(CPUState* cpu, u32 address, u8 size) {
    static u32 dsp_status_reads;
    g_external_read_count++;

    if (address == 0xCD00680Cu)
        return 1u;
    if (address == 0xCC00500Au)
        return 0x20u;
    if (address == 0xCC005004u) {
        dsp_status_reads++;
        return dsp_status_reads <= 2u ? 0u : 0x8000u;
    }
    if (address >= 0xCD000000u && address < 0xCD001000u) {
        if ((address & 0xFFFFu) == 0x001Cu)
            return g_vi_xfb_address;
        return rz_mmio_read_state(address, 0);
    }
    if (address >= 0xCD006000u && address < 0xCD006040u) {
        switch (address - 0xCD006000u) {
            case 0x00: return g_di_status;
            case 0x04: return 0u;
            case 0x08: return g_di_cmd0;
            case 0x0C: return g_di_cmd1;
            case 0x10: return g_di_cmd2;
            case 0x14: return g_di_dma_address;
            case 0x18: return g_di_dma_length;
            case 0x24: return 0u;
            default: return rz_mmio_read_state(address, 0);
        }
    }

    /* Common Wii clock/clock-counter and interrupt MMIO: zero is a stable
       bootstrap default, while real values can be supplied later as they are
       emulated. */
    if ((address >= 0xCC000000u && address < 0xCE000000u)) {
        u64 value = rz_mmio_read_state(address, 0);
        if (address == 0xCD006024u)
            value |= 0x00000002u;
        return value;
    }

    if (rz_record_unique(g_unknown_mmio_reads, address)) {
        fprintf(stderr, "Unimplemented Wii MMIO read 0x%08X size=%u from PC 0x%08X\n",
                address, size, cpu ? cpu->pc : 0u);
    }
    return 0;
}

static void rz_external_write(CPUState* cpu, u32 address, u64 value, u8 size) {
    g_external_write_count++;

    if (address == 0xCC008000u) {
        g_gx_bytes += size;
        return;
    }

    if (address >= 0xCD000000u && address < 0xCD001000u) {
        if ((address & 0xFFFFu) == 0x001Cu)
            g_vi_xfb_address = (u32)value;
        rz_mmio_write_state(address, value);
        return;
    }
    if (address >= 0xCC008000u && address < 0xCC009000u) {
        g_gx_bytes += size;
        rz_mmio_write_state(address, value);
        return;
    }

    if (address >= 0xCD006000u && address < 0xCD006040u) {
        u32 uvalue = (u32)value;
        u32 reg = address - 0xCD006000u;
        switch (reg) {
            case 0x00: g_di_status = uvalue; break;
            case 0x08: g_di_cmd0 = uvalue; break;
            case 0x0C: g_di_cmd1 = uvalue; break;
            case 0x10: g_di_cmd2 = uvalue; break;
            case 0x14: g_di_dma_address = uvalue; break;
            case 0x18: g_di_dma_length = uvalue; break;
            case 0x1C:
                if (uvalue & 1u) {
                    u64 disc_offset;
                    u32 length = g_di_dma_length ? g_di_dma_length : g_di_cmd1;
                    if (!length)
                        length = g_di_cmd2;
                    if ((g_di_cmd0 & 0xFF000000u) == 0xA8000000u ||
                        (g_di_cmd0 & 0xFF000000u) == 0xD0000000u ||
                        (g_di_cmd0 & 0xFF000000u) == 0xE0000000u) {
                        disc_offset = (u64)(g_di_cmd0 & 0x00FFFFFFu) << 2;
                        if ((g_di_cmd0 & 0xFF000000u) == 0xA8000000u &&
                            g_di_cmd1 && g_di_cmd1 != length)
                            disc_offset = (u64)g_di_cmd1 << 2;
                        if (g_di_cmd2 && length == g_di_dma_length)
                            length = g_di_cmd2;
                        if (length && g_di_dma_address)
                            rz_disc_read(disc_offset, length, g_di_dma_address);
                    }
                    g_di_status |= 4u;
                }
                break;
            default: rz_mmio_write_state(address, value); break;
        }
        return;
    }

    if ((address >= 0xCC000000u && address < 0xCE000000u) ||
        address < 0x100000u ||
        address >= 0xFFFFFFE0u) {
        if (address >= 0xCC000000u && address < 0xCE000000u)
            rz_mmio_write_state(address, value);
        (void)value;
        (void)size;
        return;
    }

    if (rz_record_unique(g_unknown_mmio_writes, address)) {
        fprintf(stderr, "Unimplemented Wii MMIO write 0x%08X value=0x%llX size=%u from PC 0x%08X\n",
                address, (unsigned long long)value, size, cpu ? cpu->pc : 0u);
    }
}

static u32 rz_spr_read(CPUState* cpu, u16 spr, u32 cia) {
    (void)cia;
    switch (spr) {
        case 268:
        case 269:
            return (u32)cpu->timebase;
        case 287:
            return PPC_GEKKO_PVR;
        default:
            return 0;
    }
}

static void rz_spr_write(CPUState* cpu, u16 spr, u32 value, u32 cia) {
    (void)cpu;
    (void)spr;
    (void)value;
    (void)cia;
}

static void rz_cache_control(CPUState* cpu, u8 operation, u32 address, u32 cia) {
    (void)cpu;
    (void)operation;
    (void)address;
    (void)cia;
}

static bool rz_host_call(CPUState* cpu, u32 address) {
    if (address == PPC_HOST_CALL_NATIVE_REGION_QUERY) {
        if (dolrecomp_find_original(cpu->external_addr))
            cpu->external_rid = PPC_NATIVE_REGION_QUERY_HANDLED;
        return 0;
    }

    if (address >= 0x80000000u && !dolrecomp_find_original(address)) {
        g_host_call_count++;
        if (rz_record_unique(g_unknown_host_calls, address)) {
            fprintf(stderr, "Unimplemented Wii host call 0x%08X from PC 0x%08X\n",
                    address, cpu->pc);
        }
    }
    return 0;
}

static int copy_dol_section(CPUState* cpu, const u8* dol, u32 file_offset,
                            u32 guest_address, u32 size) {
    if (size == 0)
        return 1;

    u8* destination = NULL;
    u32 destination_size = 0;
    u32 offset = 0;

    if (guest_address >= GC_RAM_BASE && guest_address < GC_RAM_BASE + cpu->ram_size) {
        offset = guest_address - GC_RAM_BASE;
        destination = cpu->ram;
        destination_size = cpu->ram_size;
    } else if (guest_address >= GC_RAM_UNCACHED && guest_address < GC_RAM_UNCACHED + cpu->ram_size) {
        offset = guest_address - GC_RAM_UNCACHED;
        destination = cpu->ram;
        destination_size = cpu->ram_size;
    } else if (guest_address >= WII_MEM2_BASE && guest_address < WII_MEM2_BASE + cpu->mem2_size) {
        offset = guest_address - WII_MEM2_BASE;
        destination = cpu->mem2;
        destination_size = cpu->mem2_size;
    } else if (guest_address >= WII_MEM2_UNCACHED && guest_address < WII_MEM2_UNCACHED + cpu->mem2_size) {
        offset = guest_address - WII_MEM2_UNCACHED;
        destination = cpu->mem2;
        destination_size = cpu->mem2_size;
    } else {
        fprintf(stderr, "DOL section outside guest RAM: address=0x%08X size=0x%08X\n",
                guest_address, size);
        return 0;
    }

    if (offset > destination_size || size > destination_size - offset) {
        fprintf(stderr, "DOL section outside guest RAM: address=0x%08X size=0x%08X\n",
                guest_address, size);
        return 0;
    }

    memcpy(destination + offset, dol + file_offset, size);
    return 1;
}

WASM_EXPORT int rz_runtime_init(const char* dol_path) {
    FILE* file = fopen(dol_path, "rb");
    if (!file) {
        fprintf(stderr, "Cannot open DOL: %s\n", dol_path);
        return 0;
    }

    if (fseek(file, 0, SEEK_END) != 0) {
        fclose(file);
        return 0;
    }

    long file_length = ftell(file);
    if (file_length < 0x100) {
        fclose(file);
        return 0;
    }

    rewind(file);
    u8* dol = (u8*)malloc((size_t)file_length);
    if (!dol) {
        fclose(file);
        return 0;
    }

    if (fread(dol, 1, (size_t)file_length, file) != (size_t)file_length) {
        free(dol);
        fclose(file);
        return 0;
    }
    fclose(file);

    if (g_initialized)
        cpu_free(&g_cpu);

    g_mmio_state_count = 0;
    g_external_read_count = 0;
    g_external_write_count = 0;
    g_host_call_count = 0;
    g_disc_region_count = 0;
    g_disc_open = 0;
    g_gx_bytes = 0;
    g_vi_xfb_address = 0;

    memset(&g_cpu, 0, sizeof(g_cpu));
    if (!cpu_init(&g_cpu)) {
        free(dol);
        return 0;
    }
    if (!cpu_alloc_mem2(&g_cpu, WII_MEM2_SIZE)) {
        free(dol);
        cpu_free(&g_cpu);
        return 0;
    }

    for (int i = 0; i < 7; ++i) {
        u32 file_offset = read_be32_file(dol + i * 4);
        u32 guest_address = read_be32_file(dol + 0x48 + i * 4);
        u32 size = read_be32_file(dol + 0x90 + i * 4);
        if (!copy_dol_section(&g_cpu, dol, file_offset, guest_address, size)) {
            free(dol);
            cpu_free(&g_cpu);
            return 0;
        }
    }

    for (int i = 0; i < 11; ++i) {
        u32 file_offset = read_be32_file(dol + 0x1C + i * 4);
        u32 guest_address = read_be32_file(dol + 0x64 + i * 4);
        u32 size = read_be32_file(dol + 0xAC + i * 4);
        if (!copy_dol_section(&g_cpu, dol, file_offset, guest_address, size)) {
            free(dol);
            cpu_free(&g_cpu);
            return 0;
        }
    }

    u32 bss_address = read_be32_file(dol + 0xD8);
    u32 bss_size = read_be32_file(dol + 0xDC);
    if (bss_size != 0) {
        if (bss_address >= GC_RAM_BASE && bss_address < GC_RAM_BASE + g_cpu.ram_size) {
            u32 offset = bss_address - GC_RAM_BASE;
            if (bss_size <= g_cpu.ram_size - offset)
                memset(g_cpu.ram + offset, 0, bss_size);
            else {
                free(dol);
                cpu_free(&g_cpu);
                return 0;
            }
        } else if (g_cpu.mem2 && bss_address >= WII_MEM2_BASE && bss_address < WII_MEM2_BASE + g_cpu.mem2_size) {
            u32 offset = bss_address - WII_MEM2_BASE;
            if (bss_size <= g_cpu.mem2_size - offset)
                memset(g_cpu.mem2 + offset, 0, bss_size);
            else {
                free(dol);
                cpu_free(&g_cpu);
                return 0;
            }
        } else {
            free(dol);
            cpu_free(&g_cpu);
            return 0;
        }
    }

    u32 entry_point = read_be32_file(dol + 0xE0);
    free(dol);

    mem_write32(&g_cpu, 0x800000F8u, 162000000u);
    mem_write32(&g_cpu, 0x800000FCu, 729000000u);

    g_cpu.pc = entry_point;
    g_cpu.lr = 0;
    g_cpu.instruction_fallback = rz_instruction_fallback;
    g_cpu.host_call = rz_host_call;
    g_cpu.external_user_data = &g_cpu;
    g_cpu.external_read = rz_external_read;
    g_cpu.external_write = rz_external_write;
    g_cpu.spr_read = rz_spr_read;
    g_cpu.spr_write = rz_spr_write;
    g_cpu.cache_control = rz_cache_control;
    g_cpu.gpr[1] = 0x81600000u;
    g_cpu.msr = 0x00002000u;
    g_cpu.fpscr = 0;
    g_initialized = 1;
    rz_disc_open_partition();

    printf("RZ runtime initialized: DOL entry=0x%08X generated entry=0x%08X\n",
           entry_point, DOLRECOMP_ENTRY_POINT);
    return 1;
}

WASM_EXPORT int rz_runtime_step(u32 max_blocks) {
    if (!g_initialized)
        return 0;

    g_cpu.msr |= 0x00002000u;
    int ran = dolrecomp_run_blocks(&g_cpu, max_blocks);
    g_cpu.timebase += (u64)(max_blocks ? max_blocks : 1);
    return ran;
}

WASM_EXPORT u32 rz_runtime_pc(void) {
    return g_initialized ? g_cpu.pc : 0;
}

WASM_EXPORT u32 rz_runtime_register(u32 index) {
    if (!g_initialized || index >= 32)
        return 0;
    return g_cpu.gpr[index];
}

WASM_EXPORT u32 rz_runtime_lr(void) {
    return g_initialized ? g_cpu.lr : 0;
}

WASM_EXPORT u32 rz_runtime_exception(void) {
    return g_initialized ? g_cpu.exception : 0;
}

WASM_EXPORT u32 rz_runtime_srr0(void) {
    return g_initialized ? g_cpu.srr0 : 0;
}

WASM_EXPORT u32 rz_runtime_external_read_count(void) {
    return g_external_read_count;
}

WASM_EXPORT u32 rz_runtime_external_write_count(void) {
    return g_external_write_count;
}

WASM_EXPORT u32 rz_runtime_host_call_count(void) {
    return g_host_call_count;
}

WASM_EXPORT u32 rz_runtime_disc_region_count(void) {
    return g_disc_region_count;
}

WASM_EXPORT u64 rz_runtime_gx_bytes(void) {
    return g_gx_bytes;
}

WASM_EXPORT u32 rz_runtime_vi_xfb_address(void) {
    return g_vi_xfb_address;
}

WASM_EXPORT u32 rz_runtime_mmio_read(u32 address) {
    return (u32)rz_external_read(&g_cpu, address, 4u);
}

WASM_EXPORT u32 rz_runtime_peek(u32 address) {
    if (!g_initialized)
        return 0;

    if (address >= GC_RAM_BASE && address < GC_RAM_BASE + g_cpu.ram_size)
        return mem_read32(&g_cpu, address);
    if (address >= WII_MEM2_BASE && address < WII_MEM2_BASE + g_cpu.mem2_size)
        return mem_read32(&g_cpu, address);
    return 0;
}

WASM_EXPORT u32 rz_runtime_peek8(u32 address) {
    if (!g_initialized)
        return 0;
    if (address >= GC_RAM_BASE && address < GC_RAM_BASE + g_cpu.ram_size)
        return mem_read8(&g_cpu, address);
    if (address >= WII_MEM2_BASE && address < WII_MEM2_BASE + g_cpu.mem2_size)
        return mem_read8(&g_cpu, address);
    return 0;
}

WASM_EXPORT u32 rz_runtime_memory_ptr(u32 address) {
    if (!g_initialized)
        return 0;
    if (address >= GC_RAM_BASE && address < GC_RAM_BASE + g_cpu.ram_size)
        return (u32)(g_cpu.ram + (address - GC_RAM_BASE));
    if (address >= GC_RAM_UNCACHED && address < GC_RAM_UNCACHED + g_cpu.ram_size)
        return (u32)(g_cpu.ram + (address - GC_RAM_UNCACHED));
    if (g_cpu.mem2 && address >= WII_MEM2_BASE && address < WII_MEM2_BASE + g_cpu.mem2_size)
        return (u32)(g_cpu.mem2 + (address - WII_MEM2_BASE));
    if (g_cpu.mem2 && address >= WII_MEM2_UNCACHED && address < WII_MEM2_UNCACHED + g_cpu.mem2_size)
        return (u32)(g_cpu.mem2 + (address - WII_MEM2_UNCACHED));
    return 0;
}

#ifndef __EMSCRIPTEN__
int main(int argc, char** argv) {
    const char* dol_path = argc > 1 ? argv[1] : "main.dol";
    printf("Wii Sports Resort WASM runtime probe\n");
    if (!rz_runtime_init(dol_path))
        return 1;

    if (!rz_runtime_step(1)) {
        fprintf(stderr, "First dispatch could not find an entry function at 0x%08X\n",
                rz_runtime_pc());
        return 2;
    }

    printf("PC=0x%08X exception=0x%08X r3=0x%08X\n",
           rz_runtime_pc(), rz_runtime_exception(), rz_runtime_register(3));
    return 0;
}
#endif
