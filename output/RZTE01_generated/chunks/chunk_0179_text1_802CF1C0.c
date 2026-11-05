// DolRecomp output
#include "../RZTE01.h"

static void loop_802D014C(CPUState* ctx) {
label_802D014C:
    ctx->downcount -= 26;
    ctx->pc = 0x802D014Cu;
    // 802D014C: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802D0150: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802D0154u;
    // 802D0154: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D0158: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D015Cu;
    // 802D015C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D0160u;
    // 802D0160: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D0164u;
    // 802D0164: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D0168u;
    // 802D0168: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D016Cu;
    // 802D016C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D0170u;
    // 802D0170: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D0174u;
    // 802D0174: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D0178: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D017Cu;
    // 802D017C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D0180u;
    // 802D0180: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D0184u;
    // 802D0184: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D0188u;
    // 802D0188: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D018Cu;
    // 802D018C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D0190u;
    // 802D0190: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D0194u;
    // 802D0194: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D0198: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D019Cu;
    // 802D019C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D01A0u;
    // 802D01A0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802D01A4: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802D01A8u;
    // 802D01A8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D01ACu;
    // 802D01AC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D01B0u;
    // 802D01B0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D01B4u;
    // 802D01B4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D01B8: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 802D01BC: bc    12, 0, 0x802D014C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D014Cu;
                return;
            }
            goto label_802D014C;
        }
    }

    ctx->pc = 0x802D01C0u;
}

static void loop_802D1BD4(CPUState* ctx) {
label_802D1BD4:
    ctx->downcount -= 26;
    ctx->pc = 0x802D1BD4u;
    // 802D1BD4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802D1BD8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802D1BDCu;
    // 802D1BDC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D1BE0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D1BE4u;
    // 802D1BE4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1BE8u;
    // 802D1BE8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D1BECu;
    // 802D1BEC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1BF0u;
    // 802D1BF0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1BF4u;
    // 802D1BF4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1BF8u;
    // 802D1BF8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1BFCu;
    // 802D1BFC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D1C00: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D1C04u;
    // 802D1C04: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1C08u;
    // 802D1C08: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D1C0Cu;
    // 802D1C0C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1C10u;
    // 802D1C10: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1C14u;
    // 802D1C14: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1C18u;
    // 802D1C18: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1C1Cu;
    // 802D1C1C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D1C20: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D1C24u;
    // 802D1C24: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1C28u;
    // 802D1C28: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802D1C2C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802D1C30u;
    // 802D1C30: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1C34u;
    // 802D1C34: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D1C38u;
    // 802D1C38: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D1C3Cu;
    // 802D1C3C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D1C40: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 802D1C44: bc    12, 0, 0x802D1BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1BD4u;
                return;
            }
            goto label_802D1BD4;
        }
    }

    ctx->pc = 0x802D1C48u;
}

static void loop_802D22D4(CPUState* ctx) {
label_802D22D4:
    ctx->downcount -= 26;
    ctx->pc = 0x802D22D4u;
    // 802D22D4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802D22D8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802D22DCu;
    // 802D22DC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D22E0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D22E4u;
    // 802D22E4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D22E8u;
    // 802D22E8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D22ECu;
    // 802D22EC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D22F0u;
    // 802D22F0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D22F4u;
    // 802D22F4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D22F8u;
    // 802D22F8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D22FCu;
    // 802D22FC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D2300: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D2304u;
    // 802D2304: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D2308u;
    // 802D2308: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802D230Cu;
    // 802D230C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D2310u;
    // 802D2310: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D2314u;
    // 802D2314: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D2318u;
    // 802D2318: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D231Cu;
    // 802D231C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D2320: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802D2324u;
    // 802D2324: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D2328u;
    // 802D2328: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802D232C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802D2330u;
    // 802D2330: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D2334u;
    // 802D2334: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802D2338u;
    // 802D2338: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802D233Cu;
    // 802D233C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802D2340: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 802D2344: bc    12, 0, 0x802D22D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D22D4u;
                return;
            }
            goto label_802D22D4;
        }
    }

    ctx->pc = 0x802D2348u;
}

void func_802CF1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x802CF1C0u: goto label_802CF1C0;
    case 0x802CF1C4u: goto label_802CF1C4;
    case 0x802CF1C8u: goto label_802CF1C8;
    case 0x802CF1CCu: goto label_802CF1CC;
    case 0x802CF1D0u: goto label_802CF1D0;
    case 0x802CF1D4u: goto label_802CF1D4;
    case 0x802CF1D8u: goto label_802CF1D8;
    case 0x802CF1DCu: goto label_802CF1DC;
    case 0x802CF1E0u: goto label_802CF1E0;
    case 0x802CF1E4u: goto label_802CF1E4;
    case 0x802CF1E8u: goto label_802CF1E8;
    case 0x802CF1ECu: goto label_802CF1EC;
    case 0x802CF1F0u: goto label_802CF1F0;
    case 0x802CF1F4u: goto label_802CF1F4;
    case 0x802CF1F8u: goto label_802CF1F8;
    case 0x802CF1FCu: goto label_802CF1FC;
    case 0x802CF200u: goto label_802CF200;
    case 0x802CF204u: goto label_802CF204;
    case 0x802CF208u: goto label_802CF208;
    case 0x802CF20Cu: goto label_802CF20C;
    case 0x802CF210u: goto label_802CF210;
    case 0x802CF214u: goto label_802CF214;
    case 0x802CF218u: goto label_802CF218;
    case 0x802CF21Cu: goto label_802CF21C;
    case 0x802CF220u: goto label_802CF220;
    case 0x802CF224u: goto label_802CF224;
    case 0x802CF228u: goto label_802CF228;
    case 0x802CF22Cu: goto label_802CF22C;
    case 0x802CF230u: goto label_802CF230;
    case 0x802CF234u: goto label_802CF234;
    case 0x802CF238u: goto label_802CF238;
    case 0x802CF23Cu: goto label_802CF23C;
    case 0x802CF240u: goto label_802CF240;
    case 0x802CF244u: goto label_802CF244;
    case 0x802CF248u: goto label_802CF248;
    case 0x802CF24Cu: goto label_802CF24C;
    case 0x802CF250u: goto label_802CF250;
    case 0x802CF254u: goto label_802CF254;
    case 0x802CF258u: goto label_802CF258;
    case 0x802CF25Cu: goto label_802CF25C;
    case 0x802CF260u: goto label_802CF260;
    case 0x802CF264u: goto label_802CF264;
    case 0x802CF268u: goto label_802CF268;
    case 0x802CF26Cu: goto label_802CF26C;
    case 0x802CF270u: goto label_802CF270;
    case 0x802CF274u: goto label_802CF274;
    case 0x802CF278u: goto label_802CF278;
    case 0x802CF27Cu: goto label_802CF27C;
    case 0x802CF280u: goto label_802CF280;
    case 0x802CF284u: goto label_802CF284;
    case 0x802CF288u: goto label_802CF288;
    case 0x802CF28Cu: goto label_802CF28C;
    case 0x802CF290u: goto label_802CF290;
    case 0x802CF294u: goto label_802CF294;
    case 0x802CF298u: goto label_802CF298;
    case 0x802CF29Cu: goto label_802CF29C;
    case 0x802CF2A0u: goto label_802CF2A0;
    case 0x802CF2A4u: goto label_802CF2A4;
    case 0x802CF2A8u: goto label_802CF2A8;
    case 0x802CF2ACu: goto label_802CF2AC;
    case 0x802CF2B0u: goto label_802CF2B0;
    case 0x802CF2B4u: goto label_802CF2B4;
    case 0x802CF2B8u: goto label_802CF2B8;
    case 0x802CF2BCu: goto label_802CF2BC;
    case 0x802CF2C0u: goto label_802CF2C0;
    case 0x802CF2C4u: goto label_802CF2C4;
    case 0x802CF2C8u: goto label_802CF2C8;
    case 0x802CF2CCu: goto label_802CF2CC;
    case 0x802CF2D0u: goto label_802CF2D0;
    case 0x802CF2D4u: goto label_802CF2D4;
    case 0x802CF2D8u: goto label_802CF2D8;
    case 0x802CF2DCu: goto label_802CF2DC;
    case 0x802CF2E0u: goto label_802CF2E0;
    case 0x802CF2E4u: goto label_802CF2E4;
    case 0x802CF2E8u: goto label_802CF2E8;
    case 0x802CF2ECu: goto label_802CF2EC;
    case 0x802CF2F0u: goto label_802CF2F0;
    case 0x802CF2F4u: goto label_802CF2F4;
    case 0x802CF2F8u: goto label_802CF2F8;
    case 0x802CF2FCu: goto label_802CF2FC;
    case 0x802CF300u: goto label_802CF300;
    case 0x802CF304u: goto label_802CF304;
    case 0x802CF308u: goto label_802CF308;
    case 0x802CF30Cu: goto label_802CF30C;
    case 0x802CF310u: goto label_802CF310;
    case 0x802CF314u: goto label_802CF314;
    case 0x802CF318u: goto label_802CF318;
    case 0x802CF31Cu: goto label_802CF31C;
    case 0x802CF320u: goto label_802CF320;
    case 0x802CF324u: goto label_802CF324;
    case 0x802CF328u: goto label_802CF328;
    case 0x802CF32Cu: goto label_802CF32C;
    case 0x802CF330u: goto label_802CF330;
    case 0x802CF334u: goto label_802CF334;
    case 0x802CF338u: goto label_802CF338;
    case 0x802CF33Cu: goto label_802CF33C;
    case 0x802CF340u: goto label_802CF340;
    case 0x802CF344u: goto label_802CF344;
    case 0x802CF348u: goto label_802CF348;
    case 0x802CF34Cu: goto label_802CF34C;
    case 0x802CF350u: goto label_802CF350;
    case 0x802CF354u: goto label_802CF354;
    case 0x802CF358u: goto label_802CF358;
    case 0x802CF35Cu: goto label_802CF35C;
    case 0x802CF360u: goto label_802CF360;
    case 0x802CF364u: goto label_802CF364;
    case 0x802CF368u: goto label_802CF368;
    case 0x802CF36Cu: goto label_802CF36C;
    case 0x802CF370u: goto label_802CF370;
    case 0x802CF374u: goto label_802CF374;
    case 0x802CF378u: goto label_802CF378;
    case 0x802CF37Cu: goto label_802CF37C;
    case 0x802CF380u: goto label_802CF380;
    case 0x802CF384u: goto label_802CF384;
    case 0x802CF388u: goto label_802CF388;
    case 0x802CF38Cu: goto label_802CF38C;
    case 0x802CF390u: goto label_802CF390;
    case 0x802CF394u: goto label_802CF394;
    case 0x802CF398u: goto label_802CF398;
    case 0x802CF39Cu: goto label_802CF39C;
    case 0x802CF3A0u: goto label_802CF3A0;
    case 0x802CF3A4u: goto label_802CF3A4;
    case 0x802CF3A8u: goto label_802CF3A8;
    case 0x802CF3ACu: goto label_802CF3AC;
    case 0x802CF3B0u: goto label_802CF3B0;
    case 0x802CF3B4u: goto label_802CF3B4;
    case 0x802CF3B8u: goto label_802CF3B8;
    case 0x802CF3BCu: goto label_802CF3BC;
    case 0x802CF3C0u: goto label_802CF3C0;
    case 0x802CF3C4u: goto label_802CF3C4;
    case 0x802CF3C8u: goto label_802CF3C8;
    case 0x802CF3CCu: goto label_802CF3CC;
    case 0x802CF3D0u: goto label_802CF3D0;
    case 0x802CF3D4u: goto label_802CF3D4;
    case 0x802CF3D8u: goto label_802CF3D8;
    case 0x802CF3DCu: goto label_802CF3DC;
    case 0x802CF3E0u: goto label_802CF3E0;
    case 0x802CF3E4u: goto label_802CF3E4;
    case 0x802CF3E8u: goto label_802CF3E8;
    case 0x802CF3ECu: goto label_802CF3EC;
    case 0x802CF3F0u: goto label_802CF3F0;
    case 0x802CF3F4u: goto label_802CF3F4;
    case 0x802CF3F8u: goto label_802CF3F8;
    case 0x802CF3FCu: goto label_802CF3FC;
    case 0x802CF400u: goto label_802CF400;
    case 0x802CF404u: goto label_802CF404;
    case 0x802CF408u: goto label_802CF408;
    case 0x802CF40Cu: goto label_802CF40C;
    case 0x802CF410u: goto label_802CF410;
    case 0x802CF414u: goto label_802CF414;
    case 0x802CF418u: goto label_802CF418;
    case 0x802CF41Cu: goto label_802CF41C;
    case 0x802CF420u: goto label_802CF420;
    case 0x802CF424u: goto label_802CF424;
    case 0x802CF428u: goto label_802CF428;
    case 0x802CF42Cu: goto label_802CF42C;
    case 0x802CF430u: goto label_802CF430;
    case 0x802CF434u: goto label_802CF434;
    case 0x802CF438u: goto label_802CF438;
    case 0x802CF43Cu: goto label_802CF43C;
    case 0x802CF440u: goto label_802CF440;
    case 0x802CF444u: goto label_802CF444;
    case 0x802CF448u: goto label_802CF448;
    case 0x802CF44Cu: goto label_802CF44C;
    case 0x802CF450u: goto label_802CF450;
    case 0x802CF454u: goto label_802CF454;
    case 0x802CF458u: goto label_802CF458;
    case 0x802CF45Cu: goto label_802CF45C;
    case 0x802CF460u: goto label_802CF460;
    case 0x802CF464u: goto label_802CF464;
    case 0x802CF468u: goto label_802CF468;
    case 0x802CF46Cu: goto label_802CF46C;
    case 0x802CF470u: goto label_802CF470;
    case 0x802CF474u: goto label_802CF474;
    case 0x802CF478u: goto label_802CF478;
    case 0x802CF47Cu: goto label_802CF47C;
    case 0x802CF480u: goto label_802CF480;
    case 0x802CF484u: goto label_802CF484;
    case 0x802CF488u: goto label_802CF488;
    case 0x802CF48Cu: goto label_802CF48C;
    case 0x802CF490u: goto label_802CF490;
    case 0x802CF494u: goto label_802CF494;
    case 0x802CF498u: goto label_802CF498;
    case 0x802CF49Cu: goto label_802CF49C;
    case 0x802CF4A0u: goto label_802CF4A0;
    case 0x802CF4A4u: goto label_802CF4A4;
    case 0x802CF4A8u: goto label_802CF4A8;
    case 0x802CF4ACu: goto label_802CF4AC;
    case 0x802CF4B0u: goto label_802CF4B0;
    case 0x802CF4B4u: goto label_802CF4B4;
    case 0x802CF4B8u: goto label_802CF4B8;
    case 0x802CF4BCu: goto label_802CF4BC;
    case 0x802CF4C0u: goto label_802CF4C0;
    case 0x802CF4C4u: goto label_802CF4C4;
    case 0x802CF4C8u: goto label_802CF4C8;
    case 0x802CF4CCu: goto label_802CF4CC;
    case 0x802CF4D0u: goto label_802CF4D0;
    case 0x802CF4D4u: goto label_802CF4D4;
    case 0x802CF4D8u: goto label_802CF4D8;
    case 0x802CF4DCu: goto label_802CF4DC;
    case 0x802CF4E0u: goto label_802CF4E0;
    case 0x802CF4E4u: goto label_802CF4E4;
    case 0x802CF4E8u: goto label_802CF4E8;
    case 0x802CF4ECu: goto label_802CF4EC;
    case 0x802CF4F0u: goto label_802CF4F0;
    case 0x802CF4F4u: goto label_802CF4F4;
    case 0x802CF4F8u: goto label_802CF4F8;
    case 0x802CF4FCu: goto label_802CF4FC;
    case 0x802CF500u: goto label_802CF500;
    case 0x802CF504u: goto label_802CF504;
    case 0x802CF508u: goto label_802CF508;
    case 0x802CF50Cu: goto label_802CF50C;
    case 0x802CF510u: goto label_802CF510;
    case 0x802CF514u: goto label_802CF514;
    case 0x802CF518u: goto label_802CF518;
    case 0x802CF51Cu: goto label_802CF51C;
    case 0x802CF520u: goto label_802CF520;
    case 0x802CF524u: goto label_802CF524;
    case 0x802CF528u: goto label_802CF528;
    case 0x802CF52Cu: goto label_802CF52C;
    case 0x802CF530u: goto label_802CF530;
    case 0x802CF534u: goto label_802CF534;
    case 0x802CF538u: goto label_802CF538;
    case 0x802CF53Cu: goto label_802CF53C;
    case 0x802CF540u: goto label_802CF540;
    case 0x802CF544u: goto label_802CF544;
    case 0x802CF548u: goto label_802CF548;
    case 0x802CF54Cu: goto label_802CF54C;
    case 0x802CF550u: goto label_802CF550;
    case 0x802CF554u: goto label_802CF554;
    case 0x802CF558u: goto label_802CF558;
    case 0x802CF55Cu: goto label_802CF55C;
    case 0x802CF560u: goto label_802CF560;
    case 0x802CF564u: goto label_802CF564;
    case 0x802CF568u: goto label_802CF568;
    case 0x802CF56Cu: goto label_802CF56C;
    case 0x802CF570u: goto label_802CF570;
    case 0x802CF574u: goto label_802CF574;
    case 0x802CF578u: goto label_802CF578;
    case 0x802CF57Cu: goto label_802CF57C;
    case 0x802CF580u: goto label_802CF580;
    case 0x802CF584u: goto label_802CF584;
    case 0x802CF588u: goto label_802CF588;
    case 0x802CF58Cu: goto label_802CF58C;
    case 0x802CF590u: goto label_802CF590;
    case 0x802CF594u: goto label_802CF594;
    case 0x802CF598u: goto label_802CF598;
    case 0x802CF59Cu: goto label_802CF59C;
    case 0x802CF5A0u: goto label_802CF5A0;
    case 0x802CF5A4u: goto label_802CF5A4;
    case 0x802CF5A8u: goto label_802CF5A8;
    case 0x802CF5ACu: goto label_802CF5AC;
    case 0x802CF5B0u: goto label_802CF5B0;
    case 0x802CF5B4u: goto label_802CF5B4;
    case 0x802CF5B8u: goto label_802CF5B8;
    case 0x802CF5BCu: goto label_802CF5BC;
    case 0x802CF5C0u: goto label_802CF5C0;
    case 0x802CF5C4u: goto label_802CF5C4;
    case 0x802CF5C8u: goto label_802CF5C8;
    case 0x802CF5CCu: goto label_802CF5CC;
    case 0x802CF5D0u: goto label_802CF5D0;
    case 0x802CF5D4u: goto label_802CF5D4;
    case 0x802CF5D8u: goto label_802CF5D8;
    case 0x802CF5DCu: goto label_802CF5DC;
    case 0x802CF5E0u: goto label_802CF5E0;
    case 0x802CF5E4u: goto label_802CF5E4;
    case 0x802CF5E8u: goto label_802CF5E8;
    case 0x802CF5ECu: goto label_802CF5EC;
    case 0x802CF5F0u: goto label_802CF5F0;
    case 0x802CF5F4u: goto label_802CF5F4;
    case 0x802CF5F8u: goto label_802CF5F8;
    case 0x802CF5FCu: goto label_802CF5FC;
    case 0x802CF600u: goto label_802CF600;
    case 0x802CF604u: goto label_802CF604;
    case 0x802CF608u: goto label_802CF608;
    case 0x802CF60Cu: goto label_802CF60C;
    case 0x802CF610u: goto label_802CF610;
    case 0x802CF614u: goto label_802CF614;
    case 0x802CF618u: goto label_802CF618;
    case 0x802CF61Cu: goto label_802CF61C;
    case 0x802CF620u: goto label_802CF620;
    case 0x802CF624u: goto label_802CF624;
    case 0x802CF628u: goto label_802CF628;
    case 0x802CF62Cu: goto label_802CF62C;
    case 0x802CF630u: goto label_802CF630;
    case 0x802CF634u: goto label_802CF634;
    case 0x802CF638u: goto label_802CF638;
    case 0x802CF63Cu: goto label_802CF63C;
    case 0x802CF640u: goto label_802CF640;
    case 0x802CF644u: goto label_802CF644;
    case 0x802CF648u: goto label_802CF648;
    case 0x802CF64Cu: goto label_802CF64C;
    case 0x802CF650u: goto label_802CF650;
    case 0x802CF654u: goto label_802CF654;
    case 0x802CF658u: goto label_802CF658;
    case 0x802CF65Cu: goto label_802CF65C;
    case 0x802CF660u: goto label_802CF660;
    case 0x802CF664u: goto label_802CF664;
    case 0x802CF668u: goto label_802CF668;
    case 0x802CF66Cu: goto label_802CF66C;
    case 0x802CF670u: goto label_802CF670;
    case 0x802CF674u: goto label_802CF674;
    case 0x802CF678u: goto label_802CF678;
    case 0x802CF67Cu: goto label_802CF67C;
    case 0x802CF680u: goto label_802CF680;
    case 0x802CF684u: goto label_802CF684;
    case 0x802CF688u: goto label_802CF688;
    case 0x802CF68Cu: goto label_802CF68C;
    case 0x802CF690u: goto label_802CF690;
    case 0x802CF694u: goto label_802CF694;
    case 0x802CF698u: goto label_802CF698;
    case 0x802CF69Cu: goto label_802CF69C;
    case 0x802CF6A0u: goto label_802CF6A0;
    case 0x802CF6A4u: goto label_802CF6A4;
    case 0x802CF6A8u: goto label_802CF6A8;
    case 0x802CF6ACu: goto label_802CF6AC;
    case 0x802CF6B0u: goto label_802CF6B0;
    case 0x802CF6B4u: goto label_802CF6B4;
    case 0x802CF6B8u: goto label_802CF6B8;
    case 0x802CF6BCu: goto label_802CF6BC;
    case 0x802CF6C0u: goto label_802CF6C0;
    case 0x802CF6C4u: goto label_802CF6C4;
    case 0x802CF6C8u: goto label_802CF6C8;
    case 0x802CF6CCu: goto label_802CF6CC;
    case 0x802CF6D0u: goto label_802CF6D0;
    case 0x802CF6D4u: goto label_802CF6D4;
    case 0x802CF6D8u: goto label_802CF6D8;
    case 0x802CF6DCu: goto label_802CF6DC;
    case 0x802CF6E0u: goto label_802CF6E0;
    case 0x802CF6E4u: goto label_802CF6E4;
    case 0x802CF6E8u: goto label_802CF6E8;
    case 0x802CF6ECu: goto label_802CF6EC;
    case 0x802CF6F0u: goto label_802CF6F0;
    case 0x802CF6F4u: goto label_802CF6F4;
    case 0x802CF6F8u: goto label_802CF6F8;
    case 0x802CF6FCu: goto label_802CF6FC;
    case 0x802CF700u: goto label_802CF700;
    case 0x802CF704u: goto label_802CF704;
    case 0x802CF708u: goto label_802CF708;
    case 0x802CF70Cu: goto label_802CF70C;
    case 0x802CF710u: goto label_802CF710;
    case 0x802CF714u: goto label_802CF714;
    case 0x802CF718u: goto label_802CF718;
    case 0x802CF71Cu: goto label_802CF71C;
    case 0x802CF720u: goto label_802CF720;
    case 0x802CF724u: goto label_802CF724;
    case 0x802CF728u: goto label_802CF728;
    case 0x802CF72Cu: goto label_802CF72C;
    case 0x802CF730u: goto label_802CF730;
    case 0x802CF734u: goto label_802CF734;
    case 0x802CF738u: goto label_802CF738;
    case 0x802CF73Cu: goto label_802CF73C;
    case 0x802CF740u: goto label_802CF740;
    case 0x802CF744u: goto label_802CF744;
    case 0x802CF748u: goto label_802CF748;
    case 0x802CF74Cu: goto label_802CF74C;
    case 0x802CF750u: goto label_802CF750;
    case 0x802CF754u: goto label_802CF754;
    case 0x802CF758u: goto label_802CF758;
    case 0x802CF75Cu: goto label_802CF75C;
    case 0x802CF760u: goto label_802CF760;
    case 0x802CF764u: goto label_802CF764;
    case 0x802CF768u: goto label_802CF768;
    case 0x802CF76Cu: goto label_802CF76C;
    case 0x802CF770u: goto label_802CF770;
    case 0x802CF774u: goto label_802CF774;
    case 0x802CF778u: goto label_802CF778;
    case 0x802CF77Cu: goto label_802CF77C;
    case 0x802CF780u: goto label_802CF780;
    case 0x802CF784u: goto label_802CF784;
    case 0x802CF788u: goto label_802CF788;
    case 0x802CF78Cu: goto label_802CF78C;
    case 0x802CF790u: goto label_802CF790;
    case 0x802CF794u: goto label_802CF794;
    case 0x802CF798u: goto label_802CF798;
    case 0x802CF79Cu: goto label_802CF79C;
    case 0x802CF7A0u: goto label_802CF7A0;
    case 0x802CF7A4u: goto label_802CF7A4;
    case 0x802CF7A8u: goto label_802CF7A8;
    case 0x802CF7ACu: goto label_802CF7AC;
    case 0x802CF7B0u: goto label_802CF7B0;
    case 0x802CF7B4u: goto label_802CF7B4;
    case 0x802CF7B8u: goto label_802CF7B8;
    case 0x802CF7BCu: goto label_802CF7BC;
    case 0x802CF7C0u: goto label_802CF7C0;
    case 0x802CF7C4u: goto label_802CF7C4;
    case 0x802CF7C8u: goto label_802CF7C8;
    case 0x802CF7CCu: goto label_802CF7CC;
    case 0x802CF7D0u: goto label_802CF7D0;
    case 0x802CF7D4u: goto label_802CF7D4;
    case 0x802CF7D8u: goto label_802CF7D8;
    case 0x802CF7DCu: goto label_802CF7DC;
    case 0x802CF7E0u: goto label_802CF7E0;
    case 0x802CF7E4u: goto label_802CF7E4;
    case 0x802CF7E8u: goto label_802CF7E8;
    case 0x802CF7ECu: goto label_802CF7EC;
    case 0x802CF7F0u: goto label_802CF7F0;
    case 0x802CF7F4u: goto label_802CF7F4;
    case 0x802CF7F8u: goto label_802CF7F8;
    case 0x802CF7FCu: goto label_802CF7FC;
    case 0x802CF800u: goto label_802CF800;
    case 0x802CF804u: goto label_802CF804;
    case 0x802CF808u: goto label_802CF808;
    case 0x802CF80Cu: goto label_802CF80C;
    case 0x802CF810u: goto label_802CF810;
    case 0x802CF814u: goto label_802CF814;
    case 0x802CF818u: goto label_802CF818;
    case 0x802CF81Cu: goto label_802CF81C;
    case 0x802CF820u: goto label_802CF820;
    case 0x802CF824u: goto label_802CF824;
    case 0x802CF828u: goto label_802CF828;
    case 0x802CF82Cu: goto label_802CF82C;
    case 0x802CF830u: goto label_802CF830;
    case 0x802CF834u: goto label_802CF834;
    case 0x802CF838u: goto label_802CF838;
    case 0x802CF83Cu: goto label_802CF83C;
    case 0x802CF840u: goto label_802CF840;
    case 0x802CF844u: goto label_802CF844;
    case 0x802CF848u: goto label_802CF848;
    case 0x802CF84Cu: goto label_802CF84C;
    case 0x802CF850u: goto label_802CF850;
    case 0x802CF854u: goto label_802CF854;
    case 0x802CF858u: goto label_802CF858;
    case 0x802CF85Cu: goto label_802CF85C;
    case 0x802CF860u: goto label_802CF860;
    case 0x802CF864u: goto label_802CF864;
    case 0x802CF868u: goto label_802CF868;
    case 0x802CF86Cu: goto label_802CF86C;
    case 0x802CF870u: goto label_802CF870;
    case 0x802CF874u: goto label_802CF874;
    case 0x802CF878u: goto label_802CF878;
    case 0x802CF87Cu: goto label_802CF87C;
    case 0x802CF880u: goto label_802CF880;
    case 0x802CF884u: goto label_802CF884;
    case 0x802CF888u: goto label_802CF888;
    case 0x802CF88Cu: goto label_802CF88C;
    case 0x802CF890u: goto label_802CF890;
    case 0x802CF894u: goto label_802CF894;
    case 0x802CF898u: goto label_802CF898;
    case 0x802CF89Cu: goto label_802CF89C;
    case 0x802CF8A0u: goto label_802CF8A0;
    case 0x802CF8A4u: goto label_802CF8A4;
    case 0x802CF8A8u: goto label_802CF8A8;
    case 0x802CF8ACu: goto label_802CF8AC;
    case 0x802CF8B0u: goto label_802CF8B0;
    case 0x802CF8B4u: goto label_802CF8B4;
    case 0x802CF8B8u: goto label_802CF8B8;
    case 0x802CF8BCu: goto label_802CF8BC;
    case 0x802CF8C0u: goto label_802CF8C0;
    case 0x802CF8C4u: goto label_802CF8C4;
    case 0x802CF8C8u: goto label_802CF8C8;
    case 0x802CF8CCu: goto label_802CF8CC;
    case 0x802CF8D0u: goto label_802CF8D0;
    case 0x802CF8D4u: goto label_802CF8D4;
    case 0x802CF8D8u: goto label_802CF8D8;
    case 0x802CF8DCu: goto label_802CF8DC;
    case 0x802CF8E0u: goto label_802CF8E0;
    case 0x802CF8E4u: goto label_802CF8E4;
    case 0x802CF8E8u: goto label_802CF8E8;
    case 0x802CF8ECu: goto label_802CF8EC;
    case 0x802CF8F0u: goto label_802CF8F0;
    case 0x802CF8F4u: goto label_802CF8F4;
    case 0x802CF8F8u: goto label_802CF8F8;
    case 0x802CF8FCu: goto label_802CF8FC;
    case 0x802CF900u: goto label_802CF900;
    case 0x802CF904u: goto label_802CF904;
    case 0x802CF908u: goto label_802CF908;
    case 0x802CF90Cu: goto label_802CF90C;
    case 0x802CF910u: goto label_802CF910;
    case 0x802CF914u: goto label_802CF914;
    case 0x802CF918u: goto label_802CF918;
    case 0x802CF91Cu: goto label_802CF91C;
    case 0x802CF920u: goto label_802CF920;
    case 0x802CF924u: goto label_802CF924;
    case 0x802CF928u: goto label_802CF928;
    case 0x802CF92Cu: goto label_802CF92C;
    case 0x802CF930u: goto label_802CF930;
    case 0x802CF934u: goto label_802CF934;
    case 0x802CF938u: goto label_802CF938;
    case 0x802CF93Cu: goto label_802CF93C;
    case 0x802CF940u: goto label_802CF940;
    case 0x802CF944u: goto label_802CF944;
    case 0x802CF948u: goto label_802CF948;
    case 0x802CF94Cu: goto label_802CF94C;
    case 0x802CF950u: goto label_802CF950;
    case 0x802CF954u: goto label_802CF954;
    case 0x802CF958u: goto label_802CF958;
    case 0x802CF95Cu: goto label_802CF95C;
    case 0x802CF960u: goto label_802CF960;
    case 0x802CF964u: goto label_802CF964;
    case 0x802CF968u: goto label_802CF968;
    case 0x802CF96Cu: goto label_802CF96C;
    case 0x802CF970u: goto label_802CF970;
    case 0x802CF974u: goto label_802CF974;
    case 0x802CF978u: goto label_802CF978;
    case 0x802CF97Cu: goto label_802CF97C;
    case 0x802CF980u: goto label_802CF980;
    case 0x802CF984u: goto label_802CF984;
    case 0x802CF988u: goto label_802CF988;
    case 0x802CF98Cu: goto label_802CF98C;
    case 0x802CF990u: goto label_802CF990;
    case 0x802CF994u: goto label_802CF994;
    case 0x802CF998u: goto label_802CF998;
    case 0x802CF99Cu: goto label_802CF99C;
    case 0x802CF9A0u: goto label_802CF9A0;
    case 0x802CF9A4u: goto label_802CF9A4;
    case 0x802CF9A8u: goto label_802CF9A8;
    case 0x802CF9ACu: goto label_802CF9AC;
    case 0x802CF9B0u: goto label_802CF9B0;
    case 0x802CF9B4u: goto label_802CF9B4;
    case 0x802CF9B8u: goto label_802CF9B8;
    case 0x802CF9BCu: goto label_802CF9BC;
    case 0x802CF9C0u: goto label_802CF9C0;
    case 0x802CF9C4u: goto label_802CF9C4;
    case 0x802CF9C8u: goto label_802CF9C8;
    case 0x802CF9CCu: goto label_802CF9CC;
    case 0x802CF9D0u: goto label_802CF9D0;
    case 0x802CF9D4u: goto label_802CF9D4;
    case 0x802CF9D8u: goto label_802CF9D8;
    case 0x802CF9DCu: goto label_802CF9DC;
    case 0x802CF9E0u: goto label_802CF9E0;
    case 0x802CF9E4u: goto label_802CF9E4;
    case 0x802CF9E8u: goto label_802CF9E8;
    case 0x802CF9ECu: goto label_802CF9EC;
    case 0x802CF9F0u: goto label_802CF9F0;
    case 0x802CF9F4u: goto label_802CF9F4;
    case 0x802CF9F8u: goto label_802CF9F8;
    case 0x802CF9FCu: goto label_802CF9FC;
    case 0x802CFA00u: goto label_802CFA00;
    case 0x802CFA04u: goto label_802CFA04;
    case 0x802CFA08u: goto label_802CFA08;
    case 0x802CFA0Cu: goto label_802CFA0C;
    case 0x802CFA10u: goto label_802CFA10;
    case 0x802CFA14u: goto label_802CFA14;
    case 0x802CFA18u: goto label_802CFA18;
    case 0x802CFA1Cu: goto label_802CFA1C;
    case 0x802CFA20u: goto label_802CFA20;
    case 0x802CFA24u: goto label_802CFA24;
    case 0x802CFA28u: goto label_802CFA28;
    case 0x802CFA2Cu: goto label_802CFA2C;
    case 0x802CFA30u: goto label_802CFA30;
    case 0x802CFA34u: goto label_802CFA34;
    case 0x802CFA38u: goto label_802CFA38;
    case 0x802CFA3Cu: goto label_802CFA3C;
    case 0x802CFA40u: goto label_802CFA40;
    case 0x802CFA44u: goto label_802CFA44;
    case 0x802CFA48u: goto label_802CFA48;
    case 0x802CFA4Cu: goto label_802CFA4C;
    case 0x802CFA50u: goto label_802CFA50;
    case 0x802CFA54u: goto label_802CFA54;
    case 0x802CFA58u: goto label_802CFA58;
    case 0x802CFA5Cu: goto label_802CFA5C;
    case 0x802CFA60u: goto label_802CFA60;
    case 0x802CFA64u: goto label_802CFA64;
    case 0x802CFA68u: goto label_802CFA68;
    case 0x802CFA6Cu: goto label_802CFA6C;
    case 0x802CFA70u: goto label_802CFA70;
    case 0x802CFA74u: goto label_802CFA74;
    case 0x802CFA78u: goto label_802CFA78;
    case 0x802CFA7Cu: goto label_802CFA7C;
    case 0x802CFA80u: goto label_802CFA80;
    case 0x802CFA84u: goto label_802CFA84;
    case 0x802CFA88u: goto label_802CFA88;
    case 0x802CFA8Cu: goto label_802CFA8C;
    case 0x802CFA90u: goto label_802CFA90;
    case 0x802CFA94u: goto label_802CFA94;
    case 0x802CFA98u: goto label_802CFA98;
    case 0x802CFA9Cu: goto label_802CFA9C;
    case 0x802CFAA0u: goto label_802CFAA0;
    case 0x802CFAA4u: goto label_802CFAA4;
    case 0x802CFAA8u: goto label_802CFAA8;
    case 0x802CFAACu: goto label_802CFAAC;
    case 0x802CFAB0u: goto label_802CFAB0;
    case 0x802CFAB4u: goto label_802CFAB4;
    case 0x802CFAB8u: goto label_802CFAB8;
    case 0x802CFABCu: goto label_802CFABC;
    case 0x802CFAC0u: goto label_802CFAC0;
    case 0x802CFAC4u: goto label_802CFAC4;
    case 0x802CFAC8u: goto label_802CFAC8;
    case 0x802CFACCu: goto label_802CFACC;
    case 0x802CFAD0u: goto label_802CFAD0;
    case 0x802CFAD4u: goto label_802CFAD4;
    case 0x802CFAD8u: goto label_802CFAD8;
    case 0x802CFADCu: goto label_802CFADC;
    case 0x802CFAE0u: goto label_802CFAE0;
    case 0x802CFAE4u: goto label_802CFAE4;
    case 0x802CFAE8u: goto label_802CFAE8;
    case 0x802CFAECu: goto label_802CFAEC;
    case 0x802CFAF0u: goto label_802CFAF0;
    case 0x802CFAF4u: goto label_802CFAF4;
    case 0x802CFAF8u: goto label_802CFAF8;
    case 0x802CFAFCu: goto label_802CFAFC;
    case 0x802CFB00u: goto label_802CFB00;
    case 0x802CFB04u: goto label_802CFB04;
    case 0x802CFB08u: goto label_802CFB08;
    case 0x802CFB0Cu: goto label_802CFB0C;
    case 0x802CFB10u: goto label_802CFB10;
    case 0x802CFB14u: goto label_802CFB14;
    case 0x802CFB18u: goto label_802CFB18;
    case 0x802CFB1Cu: goto label_802CFB1C;
    case 0x802CFB20u: goto label_802CFB20;
    case 0x802CFB24u: goto label_802CFB24;
    case 0x802CFB28u: goto label_802CFB28;
    case 0x802CFB2Cu: goto label_802CFB2C;
    case 0x802CFB30u: goto label_802CFB30;
    case 0x802CFB34u: goto label_802CFB34;
    case 0x802CFB38u: goto label_802CFB38;
    case 0x802CFB3Cu: goto label_802CFB3C;
    case 0x802CFB40u: goto label_802CFB40;
    case 0x802CFB44u: goto label_802CFB44;
    case 0x802CFB48u: goto label_802CFB48;
    case 0x802CFB4Cu: goto label_802CFB4C;
    case 0x802CFB50u: goto label_802CFB50;
    case 0x802CFB54u: goto label_802CFB54;
    case 0x802CFB58u: goto label_802CFB58;
    case 0x802CFB5Cu: goto label_802CFB5C;
    case 0x802CFB60u: goto label_802CFB60;
    case 0x802CFB64u: goto label_802CFB64;
    case 0x802CFB68u: goto label_802CFB68;
    case 0x802CFB6Cu: goto label_802CFB6C;
    case 0x802CFB70u: goto label_802CFB70;
    case 0x802CFB74u: goto label_802CFB74;
    case 0x802CFB78u: goto label_802CFB78;
    case 0x802CFB7Cu: goto label_802CFB7C;
    case 0x802CFB80u: goto label_802CFB80;
    case 0x802CFB84u: goto label_802CFB84;
    case 0x802CFB88u: goto label_802CFB88;
    case 0x802CFB8Cu: goto label_802CFB8C;
    case 0x802CFB90u: goto label_802CFB90;
    case 0x802CFB94u: goto label_802CFB94;
    case 0x802CFB98u: goto label_802CFB98;
    case 0x802CFB9Cu: goto label_802CFB9C;
    case 0x802CFBA0u: goto label_802CFBA0;
    case 0x802CFBA4u: goto label_802CFBA4;
    case 0x802CFBA8u: goto label_802CFBA8;
    case 0x802CFBACu: goto label_802CFBAC;
    case 0x802CFBB0u: goto label_802CFBB0;
    case 0x802CFBB4u: goto label_802CFBB4;
    case 0x802CFBB8u: goto label_802CFBB8;
    case 0x802CFBBCu: goto label_802CFBBC;
    case 0x802CFBC0u: goto label_802CFBC0;
    case 0x802CFBC4u: goto label_802CFBC4;
    case 0x802CFBC8u: goto label_802CFBC8;
    case 0x802CFBCCu: goto label_802CFBCC;
    case 0x802CFBD0u: goto label_802CFBD0;
    case 0x802CFBD4u: goto label_802CFBD4;
    case 0x802CFBD8u: goto label_802CFBD8;
    case 0x802CFBDCu: goto label_802CFBDC;
    case 0x802CFBE0u: goto label_802CFBE0;
    case 0x802CFBE4u: goto label_802CFBE4;
    case 0x802CFBE8u: goto label_802CFBE8;
    case 0x802CFBECu: goto label_802CFBEC;
    case 0x802CFBF0u: goto label_802CFBF0;
    case 0x802CFBF4u: goto label_802CFBF4;
    case 0x802CFBF8u: goto label_802CFBF8;
    case 0x802CFBFCu: goto label_802CFBFC;
    case 0x802CFC00u: goto label_802CFC00;
    case 0x802CFC04u: goto label_802CFC04;
    case 0x802CFC08u: goto label_802CFC08;
    case 0x802CFC0Cu: goto label_802CFC0C;
    case 0x802CFC10u: goto label_802CFC10;
    case 0x802CFC14u: goto label_802CFC14;
    case 0x802CFC18u: goto label_802CFC18;
    case 0x802CFC1Cu: goto label_802CFC1C;
    case 0x802CFC20u: goto label_802CFC20;
    case 0x802CFC24u: goto label_802CFC24;
    case 0x802CFC28u: goto label_802CFC28;
    case 0x802CFC2Cu: goto label_802CFC2C;
    case 0x802CFC30u: goto label_802CFC30;
    case 0x802CFC34u: goto label_802CFC34;
    case 0x802CFC38u: goto label_802CFC38;
    case 0x802CFC3Cu: goto label_802CFC3C;
    case 0x802CFC40u: goto label_802CFC40;
    case 0x802CFC44u: goto label_802CFC44;
    case 0x802CFC48u: goto label_802CFC48;
    case 0x802CFC4Cu: goto label_802CFC4C;
    case 0x802CFC50u: goto label_802CFC50;
    case 0x802CFC54u: goto label_802CFC54;
    case 0x802CFC58u: goto label_802CFC58;
    case 0x802CFC5Cu: goto label_802CFC5C;
    case 0x802CFC60u: goto label_802CFC60;
    case 0x802CFC64u: goto label_802CFC64;
    case 0x802CFC68u: goto label_802CFC68;
    case 0x802CFC6Cu: goto label_802CFC6C;
    case 0x802CFC70u: goto label_802CFC70;
    case 0x802CFC74u: goto label_802CFC74;
    case 0x802CFC78u: goto label_802CFC78;
    case 0x802CFC7Cu: goto label_802CFC7C;
    case 0x802CFC80u: goto label_802CFC80;
    case 0x802CFC84u: goto label_802CFC84;
    case 0x802CFC88u: goto label_802CFC88;
    case 0x802CFC8Cu: goto label_802CFC8C;
    case 0x802CFC90u: goto label_802CFC90;
    case 0x802CFC94u: goto label_802CFC94;
    case 0x802CFC98u: goto label_802CFC98;
    case 0x802CFC9Cu: goto label_802CFC9C;
    case 0x802CFCA0u: goto label_802CFCA0;
    case 0x802CFCA4u: goto label_802CFCA4;
    case 0x802CFCA8u: goto label_802CFCA8;
    case 0x802CFCACu: goto label_802CFCAC;
    case 0x802CFCB0u: goto label_802CFCB0;
    case 0x802CFCB4u: goto label_802CFCB4;
    case 0x802CFCB8u: goto label_802CFCB8;
    case 0x802CFCBCu: goto label_802CFCBC;
    case 0x802CFCC0u: goto label_802CFCC0;
    case 0x802CFCC4u: goto label_802CFCC4;
    case 0x802CFCC8u: goto label_802CFCC8;
    case 0x802CFCCCu: goto label_802CFCCC;
    case 0x802CFCD0u: goto label_802CFCD0;
    case 0x802CFCD4u: goto label_802CFCD4;
    case 0x802CFCD8u: goto label_802CFCD8;
    case 0x802CFCDCu: goto label_802CFCDC;
    case 0x802CFCE0u: goto label_802CFCE0;
    case 0x802CFCE4u: goto label_802CFCE4;
    case 0x802CFCE8u: goto label_802CFCE8;
    case 0x802CFCECu: goto label_802CFCEC;
    case 0x802CFCF0u: goto label_802CFCF0;
    case 0x802CFCF4u: goto label_802CFCF4;
    case 0x802CFCF8u: goto label_802CFCF8;
    case 0x802CFCFCu: goto label_802CFCFC;
    case 0x802CFD00u: goto label_802CFD00;
    case 0x802CFD04u: goto label_802CFD04;
    case 0x802CFD08u: goto label_802CFD08;
    case 0x802CFD0Cu: goto label_802CFD0C;
    case 0x802CFD10u: goto label_802CFD10;
    case 0x802CFD14u: goto label_802CFD14;
    case 0x802CFD18u: goto label_802CFD18;
    case 0x802CFD1Cu: goto label_802CFD1C;
    case 0x802CFD20u: goto label_802CFD20;
    case 0x802CFD24u: goto label_802CFD24;
    case 0x802CFD28u: goto label_802CFD28;
    case 0x802CFD2Cu: goto label_802CFD2C;
    case 0x802CFD30u: goto label_802CFD30;
    case 0x802CFD34u: goto label_802CFD34;
    case 0x802CFD38u: goto label_802CFD38;
    case 0x802CFD3Cu: goto label_802CFD3C;
    case 0x802CFD40u: goto label_802CFD40;
    case 0x802CFD44u: goto label_802CFD44;
    case 0x802CFD48u: goto label_802CFD48;
    case 0x802CFD4Cu: goto label_802CFD4C;
    case 0x802CFD50u: goto label_802CFD50;
    case 0x802CFD54u: goto label_802CFD54;
    case 0x802CFD58u: goto label_802CFD58;
    case 0x802CFD5Cu: goto label_802CFD5C;
    case 0x802CFD60u: goto label_802CFD60;
    case 0x802CFD64u: goto label_802CFD64;
    case 0x802CFD68u: goto label_802CFD68;
    case 0x802CFD6Cu: goto label_802CFD6C;
    case 0x802CFD70u: goto label_802CFD70;
    case 0x802CFD74u: goto label_802CFD74;
    case 0x802CFD78u: goto label_802CFD78;
    case 0x802CFD7Cu: goto label_802CFD7C;
    case 0x802CFD80u: goto label_802CFD80;
    case 0x802CFD84u: goto label_802CFD84;
    case 0x802CFD88u: goto label_802CFD88;
    case 0x802CFD8Cu: goto label_802CFD8C;
    case 0x802CFD90u: goto label_802CFD90;
    case 0x802CFD94u: goto label_802CFD94;
    case 0x802CFD98u: goto label_802CFD98;
    case 0x802CFD9Cu: goto label_802CFD9C;
    case 0x802CFDA0u: goto label_802CFDA0;
    case 0x802CFDA4u: goto label_802CFDA4;
    case 0x802CFDA8u: goto label_802CFDA8;
    case 0x802CFDACu: goto label_802CFDAC;
    case 0x802CFDB0u: goto label_802CFDB0;
    case 0x802CFDB4u: goto label_802CFDB4;
    case 0x802CFDB8u: goto label_802CFDB8;
    case 0x802CFDBCu: goto label_802CFDBC;
    case 0x802CFDC0u: goto label_802CFDC0;
    case 0x802CFDC4u: goto label_802CFDC4;
    case 0x802CFDC8u: goto label_802CFDC8;
    case 0x802CFDCCu: goto label_802CFDCC;
    case 0x802CFDD0u: goto label_802CFDD0;
    case 0x802CFDD4u: goto label_802CFDD4;
    case 0x802CFDD8u: goto label_802CFDD8;
    case 0x802CFDDCu: goto label_802CFDDC;
    case 0x802CFDE0u: goto label_802CFDE0;
    case 0x802CFDE4u: goto label_802CFDE4;
    case 0x802CFDE8u: goto label_802CFDE8;
    case 0x802CFDECu: goto label_802CFDEC;
    case 0x802CFDF0u: goto label_802CFDF0;
    case 0x802CFDF4u: goto label_802CFDF4;
    case 0x802CFDF8u: goto label_802CFDF8;
    case 0x802CFDFCu: goto label_802CFDFC;
    case 0x802CFE00u: goto label_802CFE00;
    case 0x802CFE04u: goto label_802CFE04;
    case 0x802CFE08u: goto label_802CFE08;
    case 0x802CFE0Cu: goto label_802CFE0C;
    case 0x802CFE10u: goto label_802CFE10;
    case 0x802CFE14u: goto label_802CFE14;
    case 0x802CFE18u: goto label_802CFE18;
    case 0x802CFE1Cu: goto label_802CFE1C;
    case 0x802CFE20u: goto label_802CFE20;
    case 0x802CFE24u: goto label_802CFE24;
    case 0x802CFE28u: goto label_802CFE28;
    case 0x802CFE2Cu: goto label_802CFE2C;
    case 0x802CFE30u: goto label_802CFE30;
    case 0x802CFE34u: goto label_802CFE34;
    case 0x802CFE38u: goto label_802CFE38;
    case 0x802CFE3Cu: goto label_802CFE3C;
    case 0x802CFE40u: goto label_802CFE40;
    case 0x802CFE44u: goto label_802CFE44;
    case 0x802CFE48u: goto label_802CFE48;
    case 0x802CFE4Cu: goto label_802CFE4C;
    case 0x802CFE50u: goto label_802CFE50;
    case 0x802CFE54u: goto label_802CFE54;
    case 0x802CFE58u: goto label_802CFE58;
    case 0x802CFE5Cu: goto label_802CFE5C;
    case 0x802CFE60u: goto label_802CFE60;
    case 0x802CFE64u: goto label_802CFE64;
    case 0x802CFE68u: goto label_802CFE68;
    case 0x802CFE6Cu: goto label_802CFE6C;
    case 0x802CFE70u: goto label_802CFE70;
    case 0x802CFE74u: goto label_802CFE74;
    case 0x802CFE78u: goto label_802CFE78;
    case 0x802CFE7Cu: goto label_802CFE7C;
    case 0x802CFE80u: goto label_802CFE80;
    case 0x802CFE84u: goto label_802CFE84;
    case 0x802CFE88u: goto label_802CFE88;
    case 0x802CFE8Cu: goto label_802CFE8C;
    case 0x802CFE90u: goto label_802CFE90;
    case 0x802CFE94u: goto label_802CFE94;
    case 0x802CFE98u: goto label_802CFE98;
    case 0x802CFE9Cu: goto label_802CFE9C;
    case 0x802CFEA0u: goto label_802CFEA0;
    case 0x802CFEA4u: goto label_802CFEA4;
    case 0x802CFEA8u: goto label_802CFEA8;
    case 0x802CFEACu: goto label_802CFEAC;
    case 0x802CFEB0u: goto label_802CFEB0;
    case 0x802CFEB4u: goto label_802CFEB4;
    case 0x802CFEB8u: goto label_802CFEB8;
    case 0x802CFEBCu: goto label_802CFEBC;
    case 0x802CFEC0u: goto label_802CFEC0;
    case 0x802CFEC4u: goto label_802CFEC4;
    case 0x802CFEC8u: goto label_802CFEC8;
    case 0x802CFECCu: goto label_802CFECC;
    case 0x802CFED0u: goto label_802CFED0;
    case 0x802CFED4u: goto label_802CFED4;
    case 0x802CFED8u: goto label_802CFED8;
    case 0x802CFEDCu: goto label_802CFEDC;
    case 0x802CFEE0u: goto label_802CFEE0;
    case 0x802CFEE4u: goto label_802CFEE4;
    case 0x802CFEE8u: goto label_802CFEE8;
    case 0x802CFEECu: goto label_802CFEEC;
    case 0x802CFEF0u: goto label_802CFEF0;
    case 0x802CFEF4u: goto label_802CFEF4;
    case 0x802CFEF8u: goto label_802CFEF8;
    case 0x802CFEFCu: goto label_802CFEFC;
    case 0x802CFF00u: goto label_802CFF00;
    case 0x802CFF04u: goto label_802CFF04;
    case 0x802CFF08u: goto label_802CFF08;
    case 0x802CFF0Cu: goto label_802CFF0C;
    case 0x802CFF10u: goto label_802CFF10;
    case 0x802CFF14u: goto label_802CFF14;
    case 0x802CFF18u: goto label_802CFF18;
    case 0x802CFF1Cu: goto label_802CFF1C;
    case 0x802CFF20u: goto label_802CFF20;
    case 0x802CFF24u: goto label_802CFF24;
    case 0x802CFF28u: goto label_802CFF28;
    case 0x802CFF2Cu: goto label_802CFF2C;
    case 0x802CFF30u: goto label_802CFF30;
    case 0x802CFF34u: goto label_802CFF34;
    case 0x802CFF38u: goto label_802CFF38;
    case 0x802CFF3Cu: goto label_802CFF3C;
    case 0x802CFF40u: goto label_802CFF40;
    case 0x802CFF44u: goto label_802CFF44;
    case 0x802CFF48u: goto label_802CFF48;
    case 0x802CFF4Cu: goto label_802CFF4C;
    case 0x802CFF50u: goto label_802CFF50;
    case 0x802CFF54u: goto label_802CFF54;
    case 0x802CFF58u: goto label_802CFF58;
    case 0x802CFF5Cu: goto label_802CFF5C;
    case 0x802CFF60u: goto label_802CFF60;
    case 0x802CFF64u: goto label_802CFF64;
    case 0x802CFF68u: goto label_802CFF68;
    case 0x802CFF6Cu: goto label_802CFF6C;
    case 0x802CFF70u: goto label_802CFF70;
    case 0x802CFF74u: goto label_802CFF74;
    case 0x802CFF78u: goto label_802CFF78;
    case 0x802CFF7Cu: goto label_802CFF7C;
    case 0x802CFF80u: goto label_802CFF80;
    case 0x802CFF84u: goto label_802CFF84;
    case 0x802CFF88u: goto label_802CFF88;
    case 0x802CFF8Cu: goto label_802CFF8C;
    case 0x802CFF90u: goto label_802CFF90;
    case 0x802CFF94u: goto label_802CFF94;
    case 0x802CFF98u: goto label_802CFF98;
    case 0x802CFF9Cu: goto label_802CFF9C;
    case 0x802CFFA0u: goto label_802CFFA0;
    case 0x802CFFA4u: goto label_802CFFA4;
    case 0x802CFFA8u: goto label_802CFFA8;
    case 0x802CFFACu: goto label_802CFFAC;
    case 0x802CFFB0u: goto label_802CFFB0;
    case 0x802CFFB4u: goto label_802CFFB4;
    case 0x802CFFB8u: goto label_802CFFB8;
    case 0x802CFFBCu: goto label_802CFFBC;
    case 0x802CFFC0u: goto label_802CFFC0;
    case 0x802CFFC4u: goto label_802CFFC4;
    case 0x802CFFC8u: goto label_802CFFC8;
    case 0x802CFFCCu: goto label_802CFFCC;
    case 0x802CFFD0u: goto label_802CFFD0;
    case 0x802CFFD4u: goto label_802CFFD4;
    case 0x802CFFD8u: goto label_802CFFD8;
    case 0x802CFFDCu: goto label_802CFFDC;
    case 0x802CFFE0u: goto label_802CFFE0;
    case 0x802CFFE4u: goto label_802CFFE4;
    case 0x802CFFE8u: goto label_802CFFE8;
    case 0x802CFFECu: goto label_802CFFEC;
    case 0x802CFFF0u: goto label_802CFFF0;
    case 0x802CFFF4u: goto label_802CFFF4;
    case 0x802CFFF8u: goto label_802CFFF8;
    case 0x802CFFFCu: goto label_802CFFFC;
    case 0x802D0000u: goto label_802D0000;
    case 0x802D0004u: goto label_802D0004;
    case 0x802D0008u: goto label_802D0008;
    case 0x802D000Cu: goto label_802D000C;
    case 0x802D0010u: goto label_802D0010;
    case 0x802D0014u: goto label_802D0014;
    case 0x802D0018u: goto label_802D0018;
    case 0x802D001Cu: goto label_802D001C;
    case 0x802D0020u: goto label_802D0020;
    case 0x802D0024u: goto label_802D0024;
    case 0x802D0028u: goto label_802D0028;
    case 0x802D002Cu: goto label_802D002C;
    case 0x802D0030u: goto label_802D0030;
    case 0x802D0034u: goto label_802D0034;
    case 0x802D0038u: goto label_802D0038;
    case 0x802D003Cu: goto label_802D003C;
    case 0x802D0040u: goto label_802D0040;
    case 0x802D0044u: goto label_802D0044;
    case 0x802D0048u: goto label_802D0048;
    case 0x802D004Cu: goto label_802D004C;
    case 0x802D0050u: goto label_802D0050;
    case 0x802D0054u: goto label_802D0054;
    case 0x802D0058u: goto label_802D0058;
    case 0x802D005Cu: goto label_802D005C;
    case 0x802D0060u: goto label_802D0060;
    case 0x802D0064u: goto label_802D0064;
    case 0x802D0068u: goto label_802D0068;
    case 0x802D006Cu: goto label_802D006C;
    case 0x802D0070u: goto label_802D0070;
    case 0x802D0074u: goto label_802D0074;
    case 0x802D0078u: goto label_802D0078;
    case 0x802D007Cu: goto label_802D007C;
    case 0x802D0080u: goto label_802D0080;
    case 0x802D0084u: goto label_802D0084;
    case 0x802D0088u: goto label_802D0088;
    case 0x802D008Cu: goto label_802D008C;
    case 0x802D0090u: goto label_802D0090;
    case 0x802D0094u: goto label_802D0094;
    case 0x802D0098u: goto label_802D0098;
    case 0x802D009Cu: goto label_802D009C;
    case 0x802D00A0u: goto label_802D00A0;
    case 0x802D00A4u: goto label_802D00A4;
    case 0x802D00A8u: goto label_802D00A8;
    case 0x802D00ACu: goto label_802D00AC;
    case 0x802D00B0u: goto label_802D00B0;
    case 0x802D00B4u: goto label_802D00B4;
    case 0x802D00B8u: goto label_802D00B8;
    case 0x802D00BCu: goto label_802D00BC;
    case 0x802D00C0u: goto label_802D00C0;
    case 0x802D00C4u: goto label_802D00C4;
    case 0x802D00C8u: goto label_802D00C8;
    case 0x802D00CCu: goto label_802D00CC;
    case 0x802D00D0u: goto label_802D00D0;
    case 0x802D00D4u: goto label_802D00D4;
    case 0x802D00D8u: goto label_802D00D8;
    case 0x802D00DCu: goto label_802D00DC;
    case 0x802D00E0u: goto label_802D00E0;
    case 0x802D00E4u: goto label_802D00E4;
    case 0x802D00E8u: goto label_802D00E8;
    case 0x802D00ECu: goto label_802D00EC;
    case 0x802D00F0u: goto label_802D00F0;
    case 0x802D00F4u: goto label_802D00F4;
    case 0x802D00F8u: goto label_802D00F8;
    case 0x802D00FCu: goto label_802D00FC;
    case 0x802D0100u: goto label_802D0100;
    case 0x802D0104u: goto label_802D0104;
    case 0x802D0108u: goto label_802D0108;
    case 0x802D010Cu: goto label_802D010C;
    case 0x802D0110u: goto label_802D0110;
    case 0x802D0114u: goto label_802D0114;
    case 0x802D0118u: goto label_802D0118;
    case 0x802D011Cu: goto label_802D011C;
    case 0x802D0120u: goto label_802D0120;
    case 0x802D0124u: goto label_802D0124;
    case 0x802D0128u: goto label_802D0128;
    case 0x802D012Cu: goto label_802D012C;
    case 0x802D0130u: goto label_802D0130;
    case 0x802D0134u: goto label_802D0134;
    case 0x802D0138u: goto label_802D0138;
    case 0x802D013Cu: goto label_802D013C;
    case 0x802D0140u: goto label_802D0140;
    case 0x802D0144u: goto label_802D0144;
    case 0x802D0148u: goto label_802D0148;
    case 0x802D014Cu: goto label_802D014C;
    case 0x802D0150u: goto label_802D0150;
    case 0x802D0154u: goto label_802D0154;
    case 0x802D0158u: goto label_802D0158;
    case 0x802D015Cu: goto label_802D015C;
    case 0x802D0160u: goto label_802D0160;
    case 0x802D0164u: goto label_802D0164;
    case 0x802D0168u: goto label_802D0168;
    case 0x802D016Cu: goto label_802D016C;
    case 0x802D0170u: goto label_802D0170;
    case 0x802D0174u: goto label_802D0174;
    case 0x802D0178u: goto label_802D0178;
    case 0x802D017Cu: goto label_802D017C;
    case 0x802D0180u: goto label_802D0180;
    case 0x802D0184u: goto label_802D0184;
    case 0x802D0188u: goto label_802D0188;
    case 0x802D018Cu: goto label_802D018C;
    case 0x802D0190u: goto label_802D0190;
    case 0x802D0194u: goto label_802D0194;
    case 0x802D0198u: goto label_802D0198;
    case 0x802D019Cu: goto label_802D019C;
    case 0x802D01A0u: goto label_802D01A0;
    case 0x802D01A4u: goto label_802D01A4;
    case 0x802D01A8u: goto label_802D01A8;
    case 0x802D01ACu: goto label_802D01AC;
    case 0x802D01B0u: goto label_802D01B0;
    case 0x802D01B4u: goto label_802D01B4;
    case 0x802D01B8u: goto label_802D01B8;
    case 0x802D01BCu: goto label_802D01BC;
    case 0x802D01C0u: goto label_802D01C0;
    case 0x802D01C4u: goto label_802D01C4;
    case 0x802D01C8u: goto label_802D01C8;
    case 0x802D01CCu: goto label_802D01CC;
    case 0x802D01D0u: goto label_802D01D0;
    case 0x802D01D4u: goto label_802D01D4;
    case 0x802D01D8u: goto label_802D01D8;
    case 0x802D01DCu: goto label_802D01DC;
    case 0x802D01E0u: goto label_802D01E0;
    case 0x802D01E4u: goto label_802D01E4;
    case 0x802D01E8u: goto label_802D01E8;
    case 0x802D01ECu: goto label_802D01EC;
    case 0x802D01F0u: goto label_802D01F0;
    case 0x802D01F4u: goto label_802D01F4;
    case 0x802D01F8u: goto label_802D01F8;
    case 0x802D01FCu: goto label_802D01FC;
    case 0x802D0200u: goto label_802D0200;
    case 0x802D0204u: goto label_802D0204;
    case 0x802D0208u: goto label_802D0208;
    case 0x802D020Cu: goto label_802D020C;
    case 0x802D0210u: goto label_802D0210;
    case 0x802D0214u: goto label_802D0214;
    case 0x802D0218u: goto label_802D0218;
    case 0x802D021Cu: goto label_802D021C;
    case 0x802D0220u: goto label_802D0220;
    case 0x802D0224u: goto label_802D0224;
    case 0x802D0228u: goto label_802D0228;
    case 0x802D022Cu: goto label_802D022C;
    case 0x802D0230u: goto label_802D0230;
    case 0x802D0234u: goto label_802D0234;
    case 0x802D0238u: goto label_802D0238;
    case 0x802D023Cu: goto label_802D023C;
    case 0x802D0240u: goto label_802D0240;
    case 0x802D0244u: goto label_802D0244;
    case 0x802D0248u: goto label_802D0248;
    case 0x802D024Cu: goto label_802D024C;
    case 0x802D0250u: goto label_802D0250;
    case 0x802D0254u: goto label_802D0254;
    case 0x802D0258u: goto label_802D0258;
    case 0x802D025Cu: goto label_802D025C;
    case 0x802D0260u: goto label_802D0260;
    case 0x802D0264u: goto label_802D0264;
    case 0x802D0268u: goto label_802D0268;
    case 0x802D026Cu: goto label_802D026C;
    case 0x802D0270u: goto label_802D0270;
    case 0x802D0274u: goto label_802D0274;
    case 0x802D0278u: goto label_802D0278;
    case 0x802D027Cu: goto label_802D027C;
    case 0x802D0280u: goto label_802D0280;
    case 0x802D0284u: goto label_802D0284;
    case 0x802D0288u: goto label_802D0288;
    case 0x802D028Cu: goto label_802D028C;
    case 0x802D0290u: goto label_802D0290;
    case 0x802D0294u: goto label_802D0294;
    case 0x802D0298u: goto label_802D0298;
    case 0x802D029Cu: goto label_802D029C;
    case 0x802D02A0u: goto label_802D02A0;
    case 0x802D02A4u: goto label_802D02A4;
    case 0x802D02A8u: goto label_802D02A8;
    case 0x802D02ACu: goto label_802D02AC;
    case 0x802D02B0u: goto label_802D02B0;
    case 0x802D02B4u: goto label_802D02B4;
    case 0x802D02B8u: goto label_802D02B8;
    case 0x802D02BCu: goto label_802D02BC;
    case 0x802D02C0u: goto label_802D02C0;
    case 0x802D02C4u: goto label_802D02C4;
    case 0x802D02C8u: goto label_802D02C8;
    case 0x802D02CCu: goto label_802D02CC;
    case 0x802D02D0u: goto label_802D02D0;
    case 0x802D02D4u: goto label_802D02D4;
    case 0x802D02D8u: goto label_802D02D8;
    case 0x802D02DCu: goto label_802D02DC;
    case 0x802D02E0u: goto label_802D02E0;
    case 0x802D02E4u: goto label_802D02E4;
    case 0x802D02E8u: goto label_802D02E8;
    case 0x802D02ECu: goto label_802D02EC;
    case 0x802D02F0u: goto label_802D02F0;
    case 0x802D02F4u: goto label_802D02F4;
    case 0x802D02F8u: goto label_802D02F8;
    case 0x802D02FCu: goto label_802D02FC;
    case 0x802D0300u: goto label_802D0300;
    case 0x802D0304u: goto label_802D0304;
    case 0x802D0308u: goto label_802D0308;
    case 0x802D030Cu: goto label_802D030C;
    case 0x802D0310u: goto label_802D0310;
    case 0x802D0314u: goto label_802D0314;
    case 0x802D0318u: goto label_802D0318;
    case 0x802D031Cu: goto label_802D031C;
    case 0x802D0320u: goto label_802D0320;
    case 0x802D0324u: goto label_802D0324;
    case 0x802D0328u: goto label_802D0328;
    case 0x802D032Cu: goto label_802D032C;
    case 0x802D0330u: goto label_802D0330;
    case 0x802D0334u: goto label_802D0334;
    case 0x802D0338u: goto label_802D0338;
    case 0x802D033Cu: goto label_802D033C;
    case 0x802D0340u: goto label_802D0340;
    case 0x802D0344u: goto label_802D0344;
    case 0x802D0348u: goto label_802D0348;
    case 0x802D034Cu: goto label_802D034C;
    case 0x802D0350u: goto label_802D0350;
    case 0x802D0354u: goto label_802D0354;
    case 0x802D0358u: goto label_802D0358;
    case 0x802D035Cu: goto label_802D035C;
    case 0x802D0360u: goto label_802D0360;
    case 0x802D0364u: goto label_802D0364;
    case 0x802D0368u: goto label_802D0368;
    case 0x802D036Cu: goto label_802D036C;
    case 0x802D0370u: goto label_802D0370;
    case 0x802D0374u: goto label_802D0374;
    case 0x802D0378u: goto label_802D0378;
    case 0x802D037Cu: goto label_802D037C;
    case 0x802D0380u: goto label_802D0380;
    case 0x802D0384u: goto label_802D0384;
    case 0x802D0388u: goto label_802D0388;
    case 0x802D038Cu: goto label_802D038C;
    case 0x802D0390u: goto label_802D0390;
    case 0x802D0394u: goto label_802D0394;
    case 0x802D0398u: goto label_802D0398;
    case 0x802D039Cu: goto label_802D039C;
    case 0x802D03A0u: goto label_802D03A0;
    case 0x802D03A4u: goto label_802D03A4;
    case 0x802D03A8u: goto label_802D03A8;
    case 0x802D03ACu: goto label_802D03AC;
    case 0x802D03B0u: goto label_802D03B0;
    case 0x802D03B4u: goto label_802D03B4;
    case 0x802D03B8u: goto label_802D03B8;
    case 0x802D03BCu: goto label_802D03BC;
    case 0x802D03C0u: goto label_802D03C0;
    case 0x802D03C4u: goto label_802D03C4;
    case 0x802D03C8u: goto label_802D03C8;
    case 0x802D03CCu: goto label_802D03CC;
    case 0x802D03D0u: goto label_802D03D0;
    case 0x802D03D4u: goto label_802D03D4;
    case 0x802D03D8u: goto label_802D03D8;
    case 0x802D03DCu: goto label_802D03DC;
    case 0x802D03E0u: goto label_802D03E0;
    case 0x802D03E4u: goto label_802D03E4;
    case 0x802D03E8u: goto label_802D03E8;
    case 0x802D03ECu: goto label_802D03EC;
    case 0x802D03F0u: goto label_802D03F0;
    case 0x802D03F4u: goto label_802D03F4;
    case 0x802D03F8u: goto label_802D03F8;
    case 0x802D03FCu: goto label_802D03FC;
    case 0x802D0400u: goto label_802D0400;
    case 0x802D0404u: goto label_802D0404;
    case 0x802D0408u: goto label_802D0408;
    case 0x802D040Cu: goto label_802D040C;
    case 0x802D0410u: goto label_802D0410;
    case 0x802D0414u: goto label_802D0414;
    case 0x802D0418u: goto label_802D0418;
    case 0x802D041Cu: goto label_802D041C;
    case 0x802D0420u: goto label_802D0420;
    case 0x802D0424u: goto label_802D0424;
    case 0x802D0428u: goto label_802D0428;
    case 0x802D042Cu: goto label_802D042C;
    case 0x802D0430u: goto label_802D0430;
    case 0x802D0434u: goto label_802D0434;
    case 0x802D0438u: goto label_802D0438;
    case 0x802D043Cu: goto label_802D043C;
    case 0x802D0440u: goto label_802D0440;
    case 0x802D0444u: goto label_802D0444;
    case 0x802D0448u: goto label_802D0448;
    case 0x802D044Cu: goto label_802D044C;
    case 0x802D0450u: goto label_802D0450;
    case 0x802D0454u: goto label_802D0454;
    case 0x802D0458u: goto label_802D0458;
    case 0x802D045Cu: goto label_802D045C;
    case 0x802D0460u: goto label_802D0460;
    case 0x802D0464u: goto label_802D0464;
    case 0x802D0468u: goto label_802D0468;
    case 0x802D046Cu: goto label_802D046C;
    case 0x802D0470u: goto label_802D0470;
    case 0x802D0474u: goto label_802D0474;
    case 0x802D0478u: goto label_802D0478;
    case 0x802D047Cu: goto label_802D047C;
    case 0x802D0480u: goto label_802D0480;
    case 0x802D0484u: goto label_802D0484;
    case 0x802D0488u: goto label_802D0488;
    case 0x802D048Cu: goto label_802D048C;
    case 0x802D0490u: goto label_802D0490;
    case 0x802D0494u: goto label_802D0494;
    case 0x802D0498u: goto label_802D0498;
    case 0x802D049Cu: goto label_802D049C;
    case 0x802D04A0u: goto label_802D04A0;
    case 0x802D04A4u: goto label_802D04A4;
    case 0x802D04A8u: goto label_802D04A8;
    case 0x802D04ACu: goto label_802D04AC;
    case 0x802D04B0u: goto label_802D04B0;
    case 0x802D04B4u: goto label_802D04B4;
    case 0x802D04B8u: goto label_802D04B8;
    case 0x802D04BCu: goto label_802D04BC;
    case 0x802D04C0u: goto label_802D04C0;
    case 0x802D04C4u: goto label_802D04C4;
    case 0x802D04C8u: goto label_802D04C8;
    case 0x802D04CCu: goto label_802D04CC;
    case 0x802D04D0u: goto label_802D04D0;
    case 0x802D04D4u: goto label_802D04D4;
    case 0x802D04D8u: goto label_802D04D8;
    case 0x802D04DCu: goto label_802D04DC;
    case 0x802D04E0u: goto label_802D04E0;
    case 0x802D04E4u: goto label_802D04E4;
    case 0x802D04E8u: goto label_802D04E8;
    case 0x802D04ECu: goto label_802D04EC;
    case 0x802D04F0u: goto label_802D04F0;
    case 0x802D04F4u: goto label_802D04F4;
    case 0x802D04F8u: goto label_802D04F8;
    case 0x802D04FCu: goto label_802D04FC;
    case 0x802D0500u: goto label_802D0500;
    case 0x802D0504u: goto label_802D0504;
    case 0x802D0508u: goto label_802D0508;
    case 0x802D050Cu: goto label_802D050C;
    case 0x802D0510u: goto label_802D0510;
    case 0x802D0514u: goto label_802D0514;
    case 0x802D0518u: goto label_802D0518;
    case 0x802D051Cu: goto label_802D051C;
    case 0x802D0520u: goto label_802D0520;
    case 0x802D0524u: goto label_802D0524;
    case 0x802D0528u: goto label_802D0528;
    case 0x802D052Cu: goto label_802D052C;
    case 0x802D0530u: goto label_802D0530;
    case 0x802D0534u: goto label_802D0534;
    case 0x802D0538u: goto label_802D0538;
    case 0x802D053Cu: goto label_802D053C;
    case 0x802D0540u: goto label_802D0540;
    case 0x802D0544u: goto label_802D0544;
    case 0x802D0548u: goto label_802D0548;
    case 0x802D054Cu: goto label_802D054C;
    case 0x802D0550u: goto label_802D0550;
    case 0x802D0554u: goto label_802D0554;
    case 0x802D0558u: goto label_802D0558;
    case 0x802D055Cu: goto label_802D055C;
    case 0x802D0560u: goto label_802D0560;
    case 0x802D0564u: goto label_802D0564;
    case 0x802D0568u: goto label_802D0568;
    case 0x802D056Cu: goto label_802D056C;
    case 0x802D0570u: goto label_802D0570;
    case 0x802D0574u: goto label_802D0574;
    case 0x802D0578u: goto label_802D0578;
    case 0x802D057Cu: goto label_802D057C;
    case 0x802D0580u: goto label_802D0580;
    case 0x802D0584u: goto label_802D0584;
    case 0x802D0588u: goto label_802D0588;
    case 0x802D058Cu: goto label_802D058C;
    case 0x802D0590u: goto label_802D0590;
    case 0x802D0594u: goto label_802D0594;
    case 0x802D0598u: goto label_802D0598;
    case 0x802D059Cu: goto label_802D059C;
    case 0x802D05A0u: goto label_802D05A0;
    case 0x802D05A4u: goto label_802D05A4;
    case 0x802D05A8u: goto label_802D05A8;
    case 0x802D05ACu: goto label_802D05AC;
    case 0x802D05B0u: goto label_802D05B0;
    case 0x802D05B4u: goto label_802D05B4;
    case 0x802D05B8u: goto label_802D05B8;
    case 0x802D05BCu: goto label_802D05BC;
    case 0x802D05C0u: goto label_802D05C0;
    case 0x802D05C4u: goto label_802D05C4;
    case 0x802D05C8u: goto label_802D05C8;
    case 0x802D05CCu: goto label_802D05CC;
    case 0x802D05D0u: goto label_802D05D0;
    case 0x802D05D4u: goto label_802D05D4;
    case 0x802D05D8u: goto label_802D05D8;
    case 0x802D05DCu: goto label_802D05DC;
    case 0x802D05E0u: goto label_802D05E0;
    case 0x802D05E4u: goto label_802D05E4;
    case 0x802D05E8u: goto label_802D05E8;
    case 0x802D05ECu: goto label_802D05EC;
    case 0x802D05F0u: goto label_802D05F0;
    case 0x802D05F4u: goto label_802D05F4;
    case 0x802D05F8u: goto label_802D05F8;
    case 0x802D05FCu: goto label_802D05FC;
    case 0x802D0600u: goto label_802D0600;
    case 0x802D0604u: goto label_802D0604;
    case 0x802D0608u: goto label_802D0608;
    case 0x802D060Cu: goto label_802D060C;
    case 0x802D0610u: goto label_802D0610;
    case 0x802D0614u: goto label_802D0614;
    case 0x802D0618u: goto label_802D0618;
    case 0x802D061Cu: goto label_802D061C;
    case 0x802D0620u: goto label_802D0620;
    case 0x802D0624u: goto label_802D0624;
    case 0x802D0628u: goto label_802D0628;
    case 0x802D062Cu: goto label_802D062C;
    case 0x802D0630u: goto label_802D0630;
    case 0x802D0634u: goto label_802D0634;
    case 0x802D0638u: goto label_802D0638;
    case 0x802D063Cu: goto label_802D063C;
    case 0x802D0640u: goto label_802D0640;
    case 0x802D0644u: goto label_802D0644;
    case 0x802D0648u: goto label_802D0648;
    case 0x802D064Cu: goto label_802D064C;
    case 0x802D0650u: goto label_802D0650;
    case 0x802D0654u: goto label_802D0654;
    case 0x802D0658u: goto label_802D0658;
    case 0x802D065Cu: goto label_802D065C;
    case 0x802D0660u: goto label_802D0660;
    case 0x802D0664u: goto label_802D0664;
    case 0x802D0668u: goto label_802D0668;
    case 0x802D066Cu: goto label_802D066C;
    case 0x802D0670u: goto label_802D0670;
    case 0x802D0674u: goto label_802D0674;
    case 0x802D0678u: goto label_802D0678;
    case 0x802D067Cu: goto label_802D067C;
    case 0x802D0680u: goto label_802D0680;
    case 0x802D0684u: goto label_802D0684;
    case 0x802D0688u: goto label_802D0688;
    case 0x802D068Cu: goto label_802D068C;
    case 0x802D0690u: goto label_802D0690;
    case 0x802D0694u: goto label_802D0694;
    case 0x802D0698u: goto label_802D0698;
    case 0x802D069Cu: goto label_802D069C;
    case 0x802D06A0u: goto label_802D06A0;
    case 0x802D06A4u: goto label_802D06A4;
    case 0x802D06A8u: goto label_802D06A8;
    case 0x802D06ACu: goto label_802D06AC;
    case 0x802D06B0u: goto label_802D06B0;
    case 0x802D06B4u: goto label_802D06B4;
    case 0x802D06B8u: goto label_802D06B8;
    case 0x802D06BCu: goto label_802D06BC;
    case 0x802D06C0u: goto label_802D06C0;
    case 0x802D06C4u: goto label_802D06C4;
    case 0x802D06C8u: goto label_802D06C8;
    case 0x802D06CCu: goto label_802D06CC;
    case 0x802D06D0u: goto label_802D06D0;
    case 0x802D06D4u: goto label_802D06D4;
    case 0x802D06D8u: goto label_802D06D8;
    case 0x802D06DCu: goto label_802D06DC;
    case 0x802D06E0u: goto label_802D06E0;
    case 0x802D06E4u: goto label_802D06E4;
    case 0x802D06E8u: goto label_802D06E8;
    case 0x802D06ECu: goto label_802D06EC;
    case 0x802D06F0u: goto label_802D06F0;
    case 0x802D06F4u: goto label_802D06F4;
    case 0x802D06F8u: goto label_802D06F8;
    case 0x802D06FCu: goto label_802D06FC;
    case 0x802D0700u: goto label_802D0700;
    case 0x802D0704u: goto label_802D0704;
    case 0x802D0708u: goto label_802D0708;
    case 0x802D070Cu: goto label_802D070C;
    case 0x802D0710u: goto label_802D0710;
    case 0x802D0714u: goto label_802D0714;
    case 0x802D0718u: goto label_802D0718;
    case 0x802D071Cu: goto label_802D071C;
    case 0x802D0720u: goto label_802D0720;
    case 0x802D0724u: goto label_802D0724;
    case 0x802D0728u: goto label_802D0728;
    case 0x802D072Cu: goto label_802D072C;
    case 0x802D0730u: goto label_802D0730;
    case 0x802D0734u: goto label_802D0734;
    case 0x802D0738u: goto label_802D0738;
    case 0x802D073Cu: goto label_802D073C;
    case 0x802D0740u: goto label_802D0740;
    case 0x802D0744u: goto label_802D0744;
    case 0x802D0748u: goto label_802D0748;
    case 0x802D074Cu: goto label_802D074C;
    case 0x802D0750u: goto label_802D0750;
    case 0x802D0754u: goto label_802D0754;
    case 0x802D0758u: goto label_802D0758;
    case 0x802D075Cu: goto label_802D075C;
    case 0x802D0760u: goto label_802D0760;
    case 0x802D0764u: goto label_802D0764;
    case 0x802D0768u: goto label_802D0768;
    case 0x802D076Cu: goto label_802D076C;
    case 0x802D0770u: goto label_802D0770;
    case 0x802D0774u: goto label_802D0774;
    case 0x802D0778u: goto label_802D0778;
    case 0x802D077Cu: goto label_802D077C;
    case 0x802D0780u: goto label_802D0780;
    case 0x802D0784u: goto label_802D0784;
    case 0x802D0788u: goto label_802D0788;
    case 0x802D078Cu: goto label_802D078C;
    case 0x802D0790u: goto label_802D0790;
    case 0x802D0794u: goto label_802D0794;
    case 0x802D0798u: goto label_802D0798;
    case 0x802D079Cu: goto label_802D079C;
    case 0x802D07A0u: goto label_802D07A0;
    case 0x802D07A4u: goto label_802D07A4;
    case 0x802D07A8u: goto label_802D07A8;
    case 0x802D07ACu: goto label_802D07AC;
    case 0x802D07B0u: goto label_802D07B0;
    case 0x802D07B4u: goto label_802D07B4;
    case 0x802D07B8u: goto label_802D07B8;
    case 0x802D07BCu: goto label_802D07BC;
    case 0x802D07C0u: goto label_802D07C0;
    case 0x802D07C4u: goto label_802D07C4;
    case 0x802D07C8u: goto label_802D07C8;
    case 0x802D07CCu: goto label_802D07CC;
    case 0x802D07D0u: goto label_802D07D0;
    case 0x802D07D4u: goto label_802D07D4;
    case 0x802D07D8u: goto label_802D07D8;
    case 0x802D07DCu: goto label_802D07DC;
    case 0x802D07E0u: goto label_802D07E0;
    case 0x802D07E4u: goto label_802D07E4;
    case 0x802D07E8u: goto label_802D07E8;
    case 0x802D07ECu: goto label_802D07EC;
    case 0x802D07F0u: goto label_802D07F0;
    case 0x802D07F4u: goto label_802D07F4;
    case 0x802D07F8u: goto label_802D07F8;
    case 0x802D07FCu: goto label_802D07FC;
    case 0x802D0800u: goto label_802D0800;
    case 0x802D0804u: goto label_802D0804;
    case 0x802D0808u: goto label_802D0808;
    case 0x802D080Cu: goto label_802D080C;
    case 0x802D0810u: goto label_802D0810;
    case 0x802D0814u: goto label_802D0814;
    case 0x802D0818u: goto label_802D0818;
    case 0x802D081Cu: goto label_802D081C;
    case 0x802D0820u: goto label_802D0820;
    case 0x802D0824u: goto label_802D0824;
    case 0x802D0828u: goto label_802D0828;
    case 0x802D082Cu: goto label_802D082C;
    case 0x802D0830u: goto label_802D0830;
    case 0x802D0834u: goto label_802D0834;
    case 0x802D0838u: goto label_802D0838;
    case 0x802D083Cu: goto label_802D083C;
    case 0x802D0840u: goto label_802D0840;
    case 0x802D0844u: goto label_802D0844;
    case 0x802D0848u: goto label_802D0848;
    case 0x802D084Cu: goto label_802D084C;
    case 0x802D0850u: goto label_802D0850;
    case 0x802D0854u: goto label_802D0854;
    case 0x802D0858u: goto label_802D0858;
    case 0x802D085Cu: goto label_802D085C;
    case 0x802D0860u: goto label_802D0860;
    case 0x802D0864u: goto label_802D0864;
    case 0x802D0868u: goto label_802D0868;
    case 0x802D086Cu: goto label_802D086C;
    case 0x802D0870u: goto label_802D0870;
    case 0x802D0874u: goto label_802D0874;
    case 0x802D0878u: goto label_802D0878;
    case 0x802D087Cu: goto label_802D087C;
    case 0x802D0880u: goto label_802D0880;
    case 0x802D0884u: goto label_802D0884;
    case 0x802D0888u: goto label_802D0888;
    case 0x802D088Cu: goto label_802D088C;
    case 0x802D0890u: goto label_802D0890;
    case 0x802D0894u: goto label_802D0894;
    case 0x802D0898u: goto label_802D0898;
    case 0x802D089Cu: goto label_802D089C;
    case 0x802D08A0u: goto label_802D08A0;
    case 0x802D08A4u: goto label_802D08A4;
    case 0x802D08A8u: goto label_802D08A8;
    case 0x802D08ACu: goto label_802D08AC;
    case 0x802D08B0u: goto label_802D08B0;
    case 0x802D08B4u: goto label_802D08B4;
    case 0x802D08B8u: goto label_802D08B8;
    case 0x802D08BCu: goto label_802D08BC;
    case 0x802D08C0u: goto label_802D08C0;
    case 0x802D08C4u: goto label_802D08C4;
    case 0x802D08C8u: goto label_802D08C8;
    case 0x802D08CCu: goto label_802D08CC;
    case 0x802D08D0u: goto label_802D08D0;
    case 0x802D08D4u: goto label_802D08D4;
    case 0x802D08D8u: goto label_802D08D8;
    case 0x802D08DCu: goto label_802D08DC;
    case 0x802D08E0u: goto label_802D08E0;
    case 0x802D08E4u: goto label_802D08E4;
    case 0x802D08E8u: goto label_802D08E8;
    case 0x802D08ECu: goto label_802D08EC;
    case 0x802D08F0u: goto label_802D08F0;
    case 0x802D08F4u: goto label_802D08F4;
    case 0x802D08F8u: goto label_802D08F8;
    case 0x802D08FCu: goto label_802D08FC;
    case 0x802D0900u: goto label_802D0900;
    case 0x802D0904u: goto label_802D0904;
    case 0x802D0908u: goto label_802D0908;
    case 0x802D090Cu: goto label_802D090C;
    case 0x802D0910u: goto label_802D0910;
    case 0x802D0914u: goto label_802D0914;
    case 0x802D0918u: goto label_802D0918;
    case 0x802D091Cu: goto label_802D091C;
    case 0x802D0920u: goto label_802D0920;
    case 0x802D0924u: goto label_802D0924;
    case 0x802D0928u: goto label_802D0928;
    case 0x802D092Cu: goto label_802D092C;
    case 0x802D0930u: goto label_802D0930;
    case 0x802D0934u: goto label_802D0934;
    case 0x802D0938u: goto label_802D0938;
    case 0x802D093Cu: goto label_802D093C;
    case 0x802D0940u: goto label_802D0940;
    case 0x802D0944u: goto label_802D0944;
    case 0x802D0948u: goto label_802D0948;
    case 0x802D094Cu: goto label_802D094C;
    case 0x802D0950u: goto label_802D0950;
    case 0x802D0954u: goto label_802D0954;
    case 0x802D0958u: goto label_802D0958;
    case 0x802D095Cu: goto label_802D095C;
    case 0x802D0960u: goto label_802D0960;
    case 0x802D0964u: goto label_802D0964;
    case 0x802D0968u: goto label_802D0968;
    case 0x802D096Cu: goto label_802D096C;
    case 0x802D0970u: goto label_802D0970;
    case 0x802D0974u: goto label_802D0974;
    case 0x802D0978u: goto label_802D0978;
    case 0x802D097Cu: goto label_802D097C;
    case 0x802D0980u: goto label_802D0980;
    case 0x802D0984u: goto label_802D0984;
    case 0x802D0988u: goto label_802D0988;
    case 0x802D098Cu: goto label_802D098C;
    case 0x802D0990u: goto label_802D0990;
    case 0x802D0994u: goto label_802D0994;
    case 0x802D0998u: goto label_802D0998;
    case 0x802D099Cu: goto label_802D099C;
    case 0x802D09A0u: goto label_802D09A0;
    case 0x802D09A4u: goto label_802D09A4;
    case 0x802D09A8u: goto label_802D09A8;
    case 0x802D09ACu: goto label_802D09AC;
    case 0x802D09B0u: goto label_802D09B0;
    case 0x802D09B4u: goto label_802D09B4;
    case 0x802D09B8u: goto label_802D09B8;
    case 0x802D09BCu: goto label_802D09BC;
    case 0x802D09C0u: goto label_802D09C0;
    case 0x802D09C4u: goto label_802D09C4;
    case 0x802D09C8u: goto label_802D09C8;
    case 0x802D09CCu: goto label_802D09CC;
    case 0x802D09D0u: goto label_802D09D0;
    case 0x802D09D4u: goto label_802D09D4;
    case 0x802D09D8u: goto label_802D09D8;
    case 0x802D09DCu: goto label_802D09DC;
    case 0x802D09E0u: goto label_802D09E0;
    case 0x802D09E4u: goto label_802D09E4;
    case 0x802D09E8u: goto label_802D09E8;
    case 0x802D09ECu: goto label_802D09EC;
    case 0x802D09F0u: goto label_802D09F0;
    case 0x802D09F4u: goto label_802D09F4;
    case 0x802D09F8u: goto label_802D09F8;
    case 0x802D09FCu: goto label_802D09FC;
    case 0x802D0A00u: goto label_802D0A00;
    case 0x802D0A04u: goto label_802D0A04;
    case 0x802D0A08u: goto label_802D0A08;
    case 0x802D0A0Cu: goto label_802D0A0C;
    case 0x802D0A10u: goto label_802D0A10;
    case 0x802D0A14u: goto label_802D0A14;
    case 0x802D0A18u: goto label_802D0A18;
    case 0x802D0A1Cu: goto label_802D0A1C;
    case 0x802D0A20u: goto label_802D0A20;
    case 0x802D0A24u: goto label_802D0A24;
    case 0x802D0A28u: goto label_802D0A28;
    case 0x802D0A2Cu: goto label_802D0A2C;
    case 0x802D0A30u: goto label_802D0A30;
    case 0x802D0A34u: goto label_802D0A34;
    case 0x802D0A38u: goto label_802D0A38;
    case 0x802D0A3Cu: goto label_802D0A3C;
    case 0x802D0A40u: goto label_802D0A40;
    case 0x802D0A44u: goto label_802D0A44;
    case 0x802D0A48u: goto label_802D0A48;
    case 0x802D0A4Cu: goto label_802D0A4C;
    case 0x802D0A50u: goto label_802D0A50;
    case 0x802D0A54u: goto label_802D0A54;
    case 0x802D0A58u: goto label_802D0A58;
    case 0x802D0A5Cu: goto label_802D0A5C;
    case 0x802D0A60u: goto label_802D0A60;
    case 0x802D0A64u: goto label_802D0A64;
    case 0x802D0A68u: goto label_802D0A68;
    case 0x802D0A6Cu: goto label_802D0A6C;
    case 0x802D0A70u: goto label_802D0A70;
    case 0x802D0A74u: goto label_802D0A74;
    case 0x802D0A78u: goto label_802D0A78;
    case 0x802D0A7Cu: goto label_802D0A7C;
    case 0x802D0A80u: goto label_802D0A80;
    case 0x802D0A84u: goto label_802D0A84;
    case 0x802D0A88u: goto label_802D0A88;
    case 0x802D0A8Cu: goto label_802D0A8C;
    case 0x802D0A90u: goto label_802D0A90;
    case 0x802D0A94u: goto label_802D0A94;
    case 0x802D0A98u: goto label_802D0A98;
    case 0x802D0A9Cu: goto label_802D0A9C;
    case 0x802D0AA0u: goto label_802D0AA0;
    case 0x802D0AA4u: goto label_802D0AA4;
    case 0x802D0AA8u: goto label_802D0AA8;
    case 0x802D0AACu: goto label_802D0AAC;
    case 0x802D0AB0u: goto label_802D0AB0;
    case 0x802D0AB4u: goto label_802D0AB4;
    case 0x802D0AB8u: goto label_802D0AB8;
    case 0x802D0ABCu: goto label_802D0ABC;
    case 0x802D0AC0u: goto label_802D0AC0;
    case 0x802D0AC4u: goto label_802D0AC4;
    case 0x802D0AC8u: goto label_802D0AC8;
    case 0x802D0ACCu: goto label_802D0ACC;
    case 0x802D0AD0u: goto label_802D0AD0;
    case 0x802D0AD4u: goto label_802D0AD4;
    case 0x802D0AD8u: goto label_802D0AD8;
    case 0x802D0ADCu: goto label_802D0ADC;
    case 0x802D0AE0u: goto label_802D0AE0;
    case 0x802D0AE4u: goto label_802D0AE4;
    case 0x802D0AE8u: goto label_802D0AE8;
    case 0x802D0AECu: goto label_802D0AEC;
    case 0x802D0AF0u: goto label_802D0AF0;
    case 0x802D0AF4u: goto label_802D0AF4;
    case 0x802D0AF8u: goto label_802D0AF8;
    case 0x802D0AFCu: goto label_802D0AFC;
    case 0x802D0B00u: goto label_802D0B00;
    case 0x802D0B04u: goto label_802D0B04;
    case 0x802D0B08u: goto label_802D0B08;
    case 0x802D0B0Cu: goto label_802D0B0C;
    case 0x802D0B10u: goto label_802D0B10;
    case 0x802D0B14u: goto label_802D0B14;
    case 0x802D0B18u: goto label_802D0B18;
    case 0x802D0B1Cu: goto label_802D0B1C;
    case 0x802D0B20u: goto label_802D0B20;
    case 0x802D0B24u: goto label_802D0B24;
    case 0x802D0B28u: goto label_802D0B28;
    case 0x802D0B2Cu: goto label_802D0B2C;
    case 0x802D0B30u: goto label_802D0B30;
    case 0x802D0B34u: goto label_802D0B34;
    case 0x802D0B38u: goto label_802D0B38;
    case 0x802D0B3Cu: goto label_802D0B3C;
    case 0x802D0B40u: goto label_802D0B40;
    case 0x802D0B44u: goto label_802D0B44;
    case 0x802D0B48u: goto label_802D0B48;
    case 0x802D0B4Cu: goto label_802D0B4C;
    case 0x802D0B50u: goto label_802D0B50;
    case 0x802D0B54u: goto label_802D0B54;
    case 0x802D0B58u: goto label_802D0B58;
    case 0x802D0B5Cu: goto label_802D0B5C;
    case 0x802D0B60u: goto label_802D0B60;
    case 0x802D0B64u: goto label_802D0B64;
    case 0x802D0B68u: goto label_802D0B68;
    case 0x802D0B6Cu: goto label_802D0B6C;
    case 0x802D0B70u: goto label_802D0B70;
    case 0x802D0B74u: goto label_802D0B74;
    case 0x802D0B78u: goto label_802D0B78;
    case 0x802D0B7Cu: goto label_802D0B7C;
    case 0x802D0B80u: goto label_802D0B80;
    case 0x802D0B84u: goto label_802D0B84;
    case 0x802D0B88u: goto label_802D0B88;
    case 0x802D0B8Cu: goto label_802D0B8C;
    case 0x802D0B90u: goto label_802D0B90;
    case 0x802D0B94u: goto label_802D0B94;
    case 0x802D0B98u: goto label_802D0B98;
    case 0x802D0B9Cu: goto label_802D0B9C;
    case 0x802D0BA0u: goto label_802D0BA0;
    case 0x802D0BA4u: goto label_802D0BA4;
    case 0x802D0BA8u: goto label_802D0BA8;
    case 0x802D0BACu: goto label_802D0BAC;
    case 0x802D0BB0u: goto label_802D0BB0;
    case 0x802D0BB4u: goto label_802D0BB4;
    case 0x802D0BB8u: goto label_802D0BB8;
    case 0x802D0BBCu: goto label_802D0BBC;
    case 0x802D0BC0u: goto label_802D0BC0;
    case 0x802D0BC4u: goto label_802D0BC4;
    case 0x802D0BC8u: goto label_802D0BC8;
    case 0x802D0BCCu: goto label_802D0BCC;
    case 0x802D0BD0u: goto label_802D0BD0;
    case 0x802D0BD4u: goto label_802D0BD4;
    case 0x802D0BD8u: goto label_802D0BD8;
    case 0x802D0BDCu: goto label_802D0BDC;
    case 0x802D0BE0u: goto label_802D0BE0;
    case 0x802D0BE4u: goto label_802D0BE4;
    case 0x802D0BE8u: goto label_802D0BE8;
    case 0x802D0BECu: goto label_802D0BEC;
    case 0x802D0BF0u: goto label_802D0BF0;
    case 0x802D0BF4u: goto label_802D0BF4;
    case 0x802D0BF8u: goto label_802D0BF8;
    case 0x802D0BFCu: goto label_802D0BFC;
    case 0x802D0C00u: goto label_802D0C00;
    case 0x802D0C04u: goto label_802D0C04;
    case 0x802D0C08u: goto label_802D0C08;
    case 0x802D0C0Cu: goto label_802D0C0C;
    case 0x802D0C10u: goto label_802D0C10;
    case 0x802D0C14u: goto label_802D0C14;
    case 0x802D0C18u: goto label_802D0C18;
    case 0x802D0C1Cu: goto label_802D0C1C;
    case 0x802D0C20u: goto label_802D0C20;
    case 0x802D0C24u: goto label_802D0C24;
    case 0x802D0C28u: goto label_802D0C28;
    case 0x802D0C2Cu: goto label_802D0C2C;
    case 0x802D0C30u: goto label_802D0C30;
    case 0x802D0C34u: goto label_802D0C34;
    case 0x802D0C38u: goto label_802D0C38;
    case 0x802D0C3Cu: goto label_802D0C3C;
    case 0x802D0C40u: goto label_802D0C40;
    case 0x802D0C44u: goto label_802D0C44;
    case 0x802D0C48u: goto label_802D0C48;
    case 0x802D0C4Cu: goto label_802D0C4C;
    case 0x802D0C50u: goto label_802D0C50;
    case 0x802D0C54u: goto label_802D0C54;
    case 0x802D0C58u: goto label_802D0C58;
    case 0x802D0C5Cu: goto label_802D0C5C;
    case 0x802D0C60u: goto label_802D0C60;
    case 0x802D0C64u: goto label_802D0C64;
    case 0x802D0C68u: goto label_802D0C68;
    case 0x802D0C6Cu: goto label_802D0C6C;
    case 0x802D0C70u: goto label_802D0C70;
    case 0x802D0C74u: goto label_802D0C74;
    case 0x802D0C78u: goto label_802D0C78;
    case 0x802D0C7Cu: goto label_802D0C7C;
    case 0x802D0C80u: goto label_802D0C80;
    case 0x802D0C84u: goto label_802D0C84;
    case 0x802D0C88u: goto label_802D0C88;
    case 0x802D0C8Cu: goto label_802D0C8C;
    case 0x802D0C90u: goto label_802D0C90;
    case 0x802D0C94u: goto label_802D0C94;
    case 0x802D0C98u: goto label_802D0C98;
    case 0x802D0C9Cu: goto label_802D0C9C;
    case 0x802D0CA0u: goto label_802D0CA0;
    case 0x802D0CA4u: goto label_802D0CA4;
    case 0x802D0CA8u: goto label_802D0CA8;
    case 0x802D0CACu: goto label_802D0CAC;
    case 0x802D0CB0u: goto label_802D0CB0;
    case 0x802D0CB4u: goto label_802D0CB4;
    case 0x802D0CB8u: goto label_802D0CB8;
    case 0x802D0CBCu: goto label_802D0CBC;
    case 0x802D0CC0u: goto label_802D0CC0;
    case 0x802D0CC4u: goto label_802D0CC4;
    case 0x802D0CC8u: goto label_802D0CC8;
    case 0x802D0CCCu: goto label_802D0CCC;
    case 0x802D0CD0u: goto label_802D0CD0;
    case 0x802D0CD4u: goto label_802D0CD4;
    case 0x802D0CD8u: goto label_802D0CD8;
    case 0x802D0CDCu: goto label_802D0CDC;
    case 0x802D0CE0u: goto label_802D0CE0;
    case 0x802D0CE4u: goto label_802D0CE4;
    case 0x802D0CE8u: goto label_802D0CE8;
    case 0x802D0CECu: goto label_802D0CEC;
    case 0x802D0CF0u: goto label_802D0CF0;
    case 0x802D0CF4u: goto label_802D0CF4;
    case 0x802D0CF8u: goto label_802D0CF8;
    case 0x802D0CFCu: goto label_802D0CFC;
    case 0x802D0D00u: goto label_802D0D00;
    case 0x802D0D04u: goto label_802D0D04;
    case 0x802D0D08u: goto label_802D0D08;
    case 0x802D0D0Cu: goto label_802D0D0C;
    case 0x802D0D10u: goto label_802D0D10;
    case 0x802D0D14u: goto label_802D0D14;
    case 0x802D0D18u: goto label_802D0D18;
    case 0x802D0D1Cu: goto label_802D0D1C;
    case 0x802D0D20u: goto label_802D0D20;
    case 0x802D0D24u: goto label_802D0D24;
    case 0x802D0D28u: goto label_802D0D28;
    case 0x802D0D2Cu: goto label_802D0D2C;
    case 0x802D0D30u: goto label_802D0D30;
    case 0x802D0D34u: goto label_802D0D34;
    case 0x802D0D38u: goto label_802D0D38;
    case 0x802D0D3Cu: goto label_802D0D3C;
    case 0x802D0D40u: goto label_802D0D40;
    case 0x802D0D44u: goto label_802D0D44;
    case 0x802D0D48u: goto label_802D0D48;
    case 0x802D0D4Cu: goto label_802D0D4C;
    case 0x802D0D50u: goto label_802D0D50;
    case 0x802D0D54u: goto label_802D0D54;
    case 0x802D0D58u: goto label_802D0D58;
    case 0x802D0D5Cu: goto label_802D0D5C;
    case 0x802D0D60u: goto label_802D0D60;
    case 0x802D0D64u: goto label_802D0D64;
    case 0x802D0D68u: goto label_802D0D68;
    case 0x802D0D6Cu: goto label_802D0D6C;
    case 0x802D0D70u: goto label_802D0D70;
    case 0x802D0D74u: goto label_802D0D74;
    case 0x802D0D78u: goto label_802D0D78;
    case 0x802D0D7Cu: goto label_802D0D7C;
    case 0x802D0D80u: goto label_802D0D80;
    case 0x802D0D84u: goto label_802D0D84;
    case 0x802D0D88u: goto label_802D0D88;
    case 0x802D0D8Cu: goto label_802D0D8C;
    case 0x802D0D90u: goto label_802D0D90;
    case 0x802D0D94u: goto label_802D0D94;
    case 0x802D0D98u: goto label_802D0D98;
    case 0x802D0D9Cu: goto label_802D0D9C;
    case 0x802D0DA0u: goto label_802D0DA0;
    case 0x802D0DA4u: goto label_802D0DA4;
    case 0x802D0DA8u: goto label_802D0DA8;
    case 0x802D0DACu: goto label_802D0DAC;
    case 0x802D0DB0u: goto label_802D0DB0;
    case 0x802D0DB4u: goto label_802D0DB4;
    case 0x802D0DB8u: goto label_802D0DB8;
    case 0x802D0DBCu: goto label_802D0DBC;
    case 0x802D0DC0u: goto label_802D0DC0;
    case 0x802D0DC4u: goto label_802D0DC4;
    case 0x802D0DC8u: goto label_802D0DC8;
    case 0x802D0DCCu: goto label_802D0DCC;
    case 0x802D0DD0u: goto label_802D0DD0;
    case 0x802D0DD4u: goto label_802D0DD4;
    case 0x802D0DD8u: goto label_802D0DD8;
    case 0x802D0DDCu: goto label_802D0DDC;
    case 0x802D0DE0u: goto label_802D0DE0;
    case 0x802D0DE4u: goto label_802D0DE4;
    case 0x802D0DE8u: goto label_802D0DE8;
    case 0x802D0DECu: goto label_802D0DEC;
    case 0x802D0DF0u: goto label_802D0DF0;
    case 0x802D0DF4u: goto label_802D0DF4;
    case 0x802D0DF8u: goto label_802D0DF8;
    case 0x802D0DFCu: goto label_802D0DFC;
    case 0x802D0E00u: goto label_802D0E00;
    case 0x802D0E04u: goto label_802D0E04;
    case 0x802D0E08u: goto label_802D0E08;
    case 0x802D0E0Cu: goto label_802D0E0C;
    case 0x802D0E10u: goto label_802D0E10;
    case 0x802D0E14u: goto label_802D0E14;
    case 0x802D0E18u: goto label_802D0E18;
    case 0x802D0E1Cu: goto label_802D0E1C;
    case 0x802D0E20u: goto label_802D0E20;
    case 0x802D0E24u: goto label_802D0E24;
    case 0x802D0E28u: goto label_802D0E28;
    case 0x802D0E2Cu: goto label_802D0E2C;
    case 0x802D0E30u: goto label_802D0E30;
    case 0x802D0E34u: goto label_802D0E34;
    case 0x802D0E38u: goto label_802D0E38;
    case 0x802D0E3Cu: goto label_802D0E3C;
    case 0x802D0E40u: goto label_802D0E40;
    case 0x802D0E44u: goto label_802D0E44;
    case 0x802D0E48u: goto label_802D0E48;
    case 0x802D0E4Cu: goto label_802D0E4C;
    case 0x802D0E50u: goto label_802D0E50;
    case 0x802D0E54u: goto label_802D0E54;
    case 0x802D0E58u: goto label_802D0E58;
    case 0x802D0E5Cu: goto label_802D0E5C;
    case 0x802D0E60u: goto label_802D0E60;
    case 0x802D0E64u: goto label_802D0E64;
    case 0x802D0E68u: goto label_802D0E68;
    case 0x802D0E6Cu: goto label_802D0E6C;
    case 0x802D0E70u: goto label_802D0E70;
    case 0x802D0E74u: goto label_802D0E74;
    case 0x802D0E78u: goto label_802D0E78;
    case 0x802D0E7Cu: goto label_802D0E7C;
    case 0x802D0E80u: goto label_802D0E80;
    case 0x802D0E84u: goto label_802D0E84;
    case 0x802D0E88u: goto label_802D0E88;
    case 0x802D0E8Cu: goto label_802D0E8C;
    case 0x802D0E90u: goto label_802D0E90;
    case 0x802D0E94u: goto label_802D0E94;
    case 0x802D0E98u: goto label_802D0E98;
    case 0x802D0E9Cu: goto label_802D0E9C;
    case 0x802D0EA0u: goto label_802D0EA0;
    case 0x802D0EA4u: goto label_802D0EA4;
    case 0x802D0EA8u: goto label_802D0EA8;
    case 0x802D0EACu: goto label_802D0EAC;
    case 0x802D0EB0u: goto label_802D0EB0;
    case 0x802D0EB4u: goto label_802D0EB4;
    case 0x802D0EB8u: goto label_802D0EB8;
    case 0x802D0EBCu: goto label_802D0EBC;
    case 0x802D0EC0u: goto label_802D0EC0;
    case 0x802D0EC4u: goto label_802D0EC4;
    case 0x802D0EC8u: goto label_802D0EC8;
    case 0x802D0ECCu: goto label_802D0ECC;
    case 0x802D0ED0u: goto label_802D0ED0;
    case 0x802D0ED4u: goto label_802D0ED4;
    case 0x802D0ED8u: goto label_802D0ED8;
    case 0x802D0EDCu: goto label_802D0EDC;
    case 0x802D0EE0u: goto label_802D0EE0;
    case 0x802D0EE4u: goto label_802D0EE4;
    case 0x802D0EE8u: goto label_802D0EE8;
    case 0x802D0EECu: goto label_802D0EEC;
    case 0x802D0EF0u: goto label_802D0EF0;
    case 0x802D0EF4u: goto label_802D0EF4;
    case 0x802D0EF8u: goto label_802D0EF8;
    case 0x802D0EFCu: goto label_802D0EFC;
    case 0x802D0F00u: goto label_802D0F00;
    case 0x802D0F04u: goto label_802D0F04;
    case 0x802D0F08u: goto label_802D0F08;
    case 0x802D0F0Cu: goto label_802D0F0C;
    case 0x802D0F10u: goto label_802D0F10;
    case 0x802D0F14u: goto label_802D0F14;
    case 0x802D0F18u: goto label_802D0F18;
    case 0x802D0F1Cu: goto label_802D0F1C;
    case 0x802D0F20u: goto label_802D0F20;
    case 0x802D0F24u: goto label_802D0F24;
    case 0x802D0F28u: goto label_802D0F28;
    case 0x802D0F2Cu: goto label_802D0F2C;
    case 0x802D0F30u: goto label_802D0F30;
    case 0x802D0F34u: goto label_802D0F34;
    case 0x802D0F38u: goto label_802D0F38;
    case 0x802D0F3Cu: goto label_802D0F3C;
    case 0x802D0F40u: goto label_802D0F40;
    case 0x802D0F44u: goto label_802D0F44;
    case 0x802D0F48u: goto label_802D0F48;
    case 0x802D0F4Cu: goto label_802D0F4C;
    case 0x802D0F50u: goto label_802D0F50;
    case 0x802D0F54u: goto label_802D0F54;
    case 0x802D0F58u: goto label_802D0F58;
    case 0x802D0F5Cu: goto label_802D0F5C;
    case 0x802D0F60u: goto label_802D0F60;
    case 0x802D0F64u: goto label_802D0F64;
    case 0x802D0F68u: goto label_802D0F68;
    case 0x802D0F6Cu: goto label_802D0F6C;
    case 0x802D0F70u: goto label_802D0F70;
    case 0x802D0F74u: goto label_802D0F74;
    case 0x802D0F78u: goto label_802D0F78;
    case 0x802D0F7Cu: goto label_802D0F7C;
    case 0x802D0F80u: goto label_802D0F80;
    case 0x802D0F84u: goto label_802D0F84;
    case 0x802D0F88u: goto label_802D0F88;
    case 0x802D0F8Cu: goto label_802D0F8C;
    case 0x802D0F90u: goto label_802D0F90;
    case 0x802D0F94u: goto label_802D0F94;
    case 0x802D0F98u: goto label_802D0F98;
    case 0x802D0F9Cu: goto label_802D0F9C;
    case 0x802D0FA0u: goto label_802D0FA0;
    case 0x802D0FA4u: goto label_802D0FA4;
    case 0x802D0FA8u: goto label_802D0FA8;
    case 0x802D0FACu: goto label_802D0FAC;
    case 0x802D0FB0u: goto label_802D0FB0;
    case 0x802D0FB4u: goto label_802D0FB4;
    case 0x802D0FB8u: goto label_802D0FB8;
    case 0x802D0FBCu: goto label_802D0FBC;
    case 0x802D0FC0u: goto label_802D0FC0;
    case 0x802D0FC4u: goto label_802D0FC4;
    case 0x802D0FC8u: goto label_802D0FC8;
    case 0x802D0FCCu: goto label_802D0FCC;
    case 0x802D0FD0u: goto label_802D0FD0;
    case 0x802D0FD4u: goto label_802D0FD4;
    case 0x802D0FD8u: goto label_802D0FD8;
    case 0x802D0FDCu: goto label_802D0FDC;
    case 0x802D0FE0u: goto label_802D0FE0;
    case 0x802D0FE4u: goto label_802D0FE4;
    case 0x802D0FE8u: goto label_802D0FE8;
    case 0x802D0FECu: goto label_802D0FEC;
    case 0x802D0FF0u: goto label_802D0FF0;
    case 0x802D0FF4u: goto label_802D0FF4;
    case 0x802D0FF8u: goto label_802D0FF8;
    case 0x802D0FFCu: goto label_802D0FFC;
    case 0x802D1000u: goto label_802D1000;
    case 0x802D1004u: goto label_802D1004;
    case 0x802D1008u: goto label_802D1008;
    case 0x802D100Cu: goto label_802D100C;
    case 0x802D1010u: goto label_802D1010;
    case 0x802D1014u: goto label_802D1014;
    case 0x802D1018u: goto label_802D1018;
    case 0x802D101Cu: goto label_802D101C;
    case 0x802D1020u: goto label_802D1020;
    case 0x802D1024u: goto label_802D1024;
    case 0x802D1028u: goto label_802D1028;
    case 0x802D102Cu: goto label_802D102C;
    case 0x802D1030u: goto label_802D1030;
    case 0x802D1034u: goto label_802D1034;
    case 0x802D1038u: goto label_802D1038;
    case 0x802D103Cu: goto label_802D103C;
    case 0x802D1040u: goto label_802D1040;
    case 0x802D1044u: goto label_802D1044;
    case 0x802D1048u: goto label_802D1048;
    case 0x802D104Cu: goto label_802D104C;
    case 0x802D1050u: goto label_802D1050;
    case 0x802D1054u: goto label_802D1054;
    case 0x802D1058u: goto label_802D1058;
    case 0x802D105Cu: goto label_802D105C;
    case 0x802D1060u: goto label_802D1060;
    case 0x802D1064u: goto label_802D1064;
    case 0x802D1068u: goto label_802D1068;
    case 0x802D106Cu: goto label_802D106C;
    case 0x802D1070u: goto label_802D1070;
    case 0x802D1074u: goto label_802D1074;
    case 0x802D1078u: goto label_802D1078;
    case 0x802D107Cu: goto label_802D107C;
    case 0x802D1080u: goto label_802D1080;
    case 0x802D1084u: goto label_802D1084;
    case 0x802D1088u: goto label_802D1088;
    case 0x802D108Cu: goto label_802D108C;
    case 0x802D1090u: goto label_802D1090;
    case 0x802D1094u: goto label_802D1094;
    case 0x802D1098u: goto label_802D1098;
    case 0x802D109Cu: goto label_802D109C;
    case 0x802D10A0u: goto label_802D10A0;
    case 0x802D10A4u: goto label_802D10A4;
    case 0x802D10A8u: goto label_802D10A8;
    case 0x802D10ACu: goto label_802D10AC;
    case 0x802D10B0u: goto label_802D10B0;
    case 0x802D10B4u: goto label_802D10B4;
    case 0x802D10B8u: goto label_802D10B8;
    case 0x802D10BCu: goto label_802D10BC;
    case 0x802D10C0u: goto label_802D10C0;
    case 0x802D10C4u: goto label_802D10C4;
    case 0x802D10C8u: goto label_802D10C8;
    case 0x802D10CCu: goto label_802D10CC;
    case 0x802D10D0u: goto label_802D10D0;
    case 0x802D10D4u: goto label_802D10D4;
    case 0x802D10D8u: goto label_802D10D8;
    case 0x802D10DCu: goto label_802D10DC;
    case 0x802D10E0u: goto label_802D10E0;
    case 0x802D10E4u: goto label_802D10E4;
    case 0x802D10E8u: goto label_802D10E8;
    case 0x802D10ECu: goto label_802D10EC;
    case 0x802D10F0u: goto label_802D10F0;
    case 0x802D10F4u: goto label_802D10F4;
    case 0x802D10F8u: goto label_802D10F8;
    case 0x802D10FCu: goto label_802D10FC;
    case 0x802D1100u: goto label_802D1100;
    case 0x802D1104u: goto label_802D1104;
    case 0x802D1108u: goto label_802D1108;
    case 0x802D110Cu: goto label_802D110C;
    case 0x802D1110u: goto label_802D1110;
    case 0x802D1114u: goto label_802D1114;
    case 0x802D1118u: goto label_802D1118;
    case 0x802D111Cu: goto label_802D111C;
    case 0x802D1120u: goto label_802D1120;
    case 0x802D1124u: goto label_802D1124;
    case 0x802D1128u: goto label_802D1128;
    case 0x802D112Cu: goto label_802D112C;
    case 0x802D1130u: goto label_802D1130;
    case 0x802D1134u: goto label_802D1134;
    case 0x802D1138u: goto label_802D1138;
    case 0x802D113Cu: goto label_802D113C;
    case 0x802D1140u: goto label_802D1140;
    case 0x802D1144u: goto label_802D1144;
    case 0x802D1148u: goto label_802D1148;
    case 0x802D114Cu: goto label_802D114C;
    case 0x802D1150u: goto label_802D1150;
    case 0x802D1154u: goto label_802D1154;
    case 0x802D1158u: goto label_802D1158;
    case 0x802D115Cu: goto label_802D115C;
    case 0x802D1160u: goto label_802D1160;
    case 0x802D1164u: goto label_802D1164;
    case 0x802D1168u: goto label_802D1168;
    case 0x802D116Cu: goto label_802D116C;
    case 0x802D1170u: goto label_802D1170;
    case 0x802D1174u: goto label_802D1174;
    case 0x802D1178u: goto label_802D1178;
    case 0x802D117Cu: goto label_802D117C;
    case 0x802D1180u: goto label_802D1180;
    case 0x802D1184u: goto label_802D1184;
    case 0x802D1188u: goto label_802D1188;
    case 0x802D118Cu: goto label_802D118C;
    case 0x802D1190u: goto label_802D1190;
    case 0x802D1194u: goto label_802D1194;
    case 0x802D1198u: goto label_802D1198;
    case 0x802D119Cu: goto label_802D119C;
    case 0x802D11A0u: goto label_802D11A0;
    case 0x802D11A4u: goto label_802D11A4;
    case 0x802D11A8u: goto label_802D11A8;
    case 0x802D11ACu: goto label_802D11AC;
    case 0x802D11B0u: goto label_802D11B0;
    case 0x802D11B4u: goto label_802D11B4;
    case 0x802D11B8u: goto label_802D11B8;
    case 0x802D11BCu: goto label_802D11BC;
    case 0x802D11C0u: goto label_802D11C0;
    case 0x802D11C4u: goto label_802D11C4;
    case 0x802D11C8u: goto label_802D11C8;
    case 0x802D11CCu: goto label_802D11CC;
    case 0x802D11D0u: goto label_802D11D0;
    case 0x802D11D4u: goto label_802D11D4;
    case 0x802D11D8u: goto label_802D11D8;
    case 0x802D11DCu: goto label_802D11DC;
    case 0x802D11E0u: goto label_802D11E0;
    case 0x802D11E4u: goto label_802D11E4;
    case 0x802D11E8u: goto label_802D11E8;
    case 0x802D11ECu: goto label_802D11EC;
    case 0x802D11F0u: goto label_802D11F0;
    case 0x802D11F4u: goto label_802D11F4;
    case 0x802D11F8u: goto label_802D11F8;
    case 0x802D11FCu: goto label_802D11FC;
    case 0x802D1200u: goto label_802D1200;
    case 0x802D1204u: goto label_802D1204;
    case 0x802D1208u: goto label_802D1208;
    case 0x802D120Cu: goto label_802D120C;
    case 0x802D1210u: goto label_802D1210;
    case 0x802D1214u: goto label_802D1214;
    case 0x802D1218u: goto label_802D1218;
    case 0x802D121Cu: goto label_802D121C;
    case 0x802D1220u: goto label_802D1220;
    case 0x802D1224u: goto label_802D1224;
    case 0x802D1228u: goto label_802D1228;
    case 0x802D122Cu: goto label_802D122C;
    case 0x802D1230u: goto label_802D1230;
    case 0x802D1234u: goto label_802D1234;
    case 0x802D1238u: goto label_802D1238;
    case 0x802D123Cu: goto label_802D123C;
    case 0x802D1240u: goto label_802D1240;
    case 0x802D1244u: goto label_802D1244;
    case 0x802D1248u: goto label_802D1248;
    case 0x802D124Cu: goto label_802D124C;
    case 0x802D1250u: goto label_802D1250;
    case 0x802D1254u: goto label_802D1254;
    case 0x802D1258u: goto label_802D1258;
    case 0x802D125Cu: goto label_802D125C;
    case 0x802D1260u: goto label_802D1260;
    case 0x802D1264u: goto label_802D1264;
    case 0x802D1268u: goto label_802D1268;
    case 0x802D126Cu: goto label_802D126C;
    case 0x802D1270u: goto label_802D1270;
    case 0x802D1274u: goto label_802D1274;
    case 0x802D1278u: goto label_802D1278;
    case 0x802D127Cu: goto label_802D127C;
    case 0x802D1280u: goto label_802D1280;
    case 0x802D1284u: goto label_802D1284;
    case 0x802D1288u: goto label_802D1288;
    case 0x802D128Cu: goto label_802D128C;
    case 0x802D1290u: goto label_802D1290;
    case 0x802D1294u: goto label_802D1294;
    case 0x802D1298u: goto label_802D1298;
    case 0x802D129Cu: goto label_802D129C;
    case 0x802D12A0u: goto label_802D12A0;
    case 0x802D12A4u: goto label_802D12A4;
    case 0x802D12A8u: goto label_802D12A8;
    case 0x802D12ACu: goto label_802D12AC;
    case 0x802D12B0u: goto label_802D12B0;
    case 0x802D12B4u: goto label_802D12B4;
    case 0x802D12B8u: goto label_802D12B8;
    case 0x802D12BCu: goto label_802D12BC;
    case 0x802D12C0u: goto label_802D12C0;
    case 0x802D12C4u: goto label_802D12C4;
    case 0x802D12C8u: goto label_802D12C8;
    case 0x802D12CCu: goto label_802D12CC;
    case 0x802D12D0u: goto label_802D12D0;
    case 0x802D12D4u: goto label_802D12D4;
    case 0x802D12D8u: goto label_802D12D8;
    case 0x802D12DCu: goto label_802D12DC;
    case 0x802D12E0u: goto label_802D12E0;
    case 0x802D12E4u: goto label_802D12E4;
    case 0x802D12E8u: goto label_802D12E8;
    case 0x802D12ECu: goto label_802D12EC;
    case 0x802D12F0u: goto label_802D12F0;
    case 0x802D12F4u: goto label_802D12F4;
    case 0x802D12F8u: goto label_802D12F8;
    case 0x802D12FCu: goto label_802D12FC;
    case 0x802D1300u: goto label_802D1300;
    case 0x802D1304u: goto label_802D1304;
    case 0x802D1308u: goto label_802D1308;
    case 0x802D130Cu: goto label_802D130C;
    case 0x802D1310u: goto label_802D1310;
    case 0x802D1314u: goto label_802D1314;
    case 0x802D1318u: goto label_802D1318;
    case 0x802D131Cu: goto label_802D131C;
    case 0x802D1320u: goto label_802D1320;
    case 0x802D1324u: goto label_802D1324;
    case 0x802D1328u: goto label_802D1328;
    case 0x802D132Cu: goto label_802D132C;
    case 0x802D1330u: goto label_802D1330;
    case 0x802D1334u: goto label_802D1334;
    case 0x802D1338u: goto label_802D1338;
    case 0x802D133Cu: goto label_802D133C;
    case 0x802D1340u: goto label_802D1340;
    case 0x802D1344u: goto label_802D1344;
    case 0x802D1348u: goto label_802D1348;
    case 0x802D134Cu: goto label_802D134C;
    case 0x802D1350u: goto label_802D1350;
    case 0x802D1354u: goto label_802D1354;
    case 0x802D1358u: goto label_802D1358;
    case 0x802D135Cu: goto label_802D135C;
    case 0x802D1360u: goto label_802D1360;
    case 0x802D1364u: goto label_802D1364;
    case 0x802D1368u: goto label_802D1368;
    case 0x802D136Cu: goto label_802D136C;
    case 0x802D1370u: goto label_802D1370;
    case 0x802D1374u: goto label_802D1374;
    case 0x802D1378u: goto label_802D1378;
    case 0x802D137Cu: goto label_802D137C;
    case 0x802D1380u: goto label_802D1380;
    case 0x802D1384u: goto label_802D1384;
    case 0x802D1388u: goto label_802D1388;
    case 0x802D138Cu: goto label_802D138C;
    case 0x802D1390u: goto label_802D1390;
    case 0x802D1394u: goto label_802D1394;
    case 0x802D1398u: goto label_802D1398;
    case 0x802D139Cu: goto label_802D139C;
    case 0x802D13A0u: goto label_802D13A0;
    case 0x802D13A4u: goto label_802D13A4;
    case 0x802D13A8u: goto label_802D13A8;
    case 0x802D13ACu: goto label_802D13AC;
    case 0x802D13B0u: goto label_802D13B0;
    case 0x802D13B4u: goto label_802D13B4;
    case 0x802D13B8u: goto label_802D13B8;
    case 0x802D13BCu: goto label_802D13BC;
    case 0x802D13C0u: goto label_802D13C0;
    case 0x802D13C4u: goto label_802D13C4;
    case 0x802D13C8u: goto label_802D13C8;
    case 0x802D13CCu: goto label_802D13CC;
    case 0x802D13D0u: goto label_802D13D0;
    case 0x802D13D4u: goto label_802D13D4;
    case 0x802D13D8u: goto label_802D13D8;
    case 0x802D13DCu: goto label_802D13DC;
    case 0x802D13E0u: goto label_802D13E0;
    case 0x802D13E4u: goto label_802D13E4;
    case 0x802D13E8u: goto label_802D13E8;
    case 0x802D13ECu: goto label_802D13EC;
    case 0x802D13F0u: goto label_802D13F0;
    case 0x802D13F4u: goto label_802D13F4;
    case 0x802D13F8u: goto label_802D13F8;
    case 0x802D13FCu: goto label_802D13FC;
    case 0x802D1400u: goto label_802D1400;
    case 0x802D1404u: goto label_802D1404;
    case 0x802D1408u: goto label_802D1408;
    case 0x802D140Cu: goto label_802D140C;
    case 0x802D1410u: goto label_802D1410;
    case 0x802D1414u: goto label_802D1414;
    case 0x802D1418u: goto label_802D1418;
    case 0x802D141Cu: goto label_802D141C;
    case 0x802D1420u: goto label_802D1420;
    case 0x802D1424u: goto label_802D1424;
    case 0x802D1428u: goto label_802D1428;
    case 0x802D142Cu: goto label_802D142C;
    case 0x802D1430u: goto label_802D1430;
    case 0x802D1434u: goto label_802D1434;
    case 0x802D1438u: goto label_802D1438;
    case 0x802D143Cu: goto label_802D143C;
    case 0x802D1440u: goto label_802D1440;
    case 0x802D1444u: goto label_802D1444;
    case 0x802D1448u: goto label_802D1448;
    case 0x802D144Cu: goto label_802D144C;
    case 0x802D1450u: goto label_802D1450;
    case 0x802D1454u: goto label_802D1454;
    case 0x802D1458u: goto label_802D1458;
    case 0x802D145Cu: goto label_802D145C;
    case 0x802D1460u: goto label_802D1460;
    case 0x802D1464u: goto label_802D1464;
    case 0x802D1468u: goto label_802D1468;
    case 0x802D146Cu: goto label_802D146C;
    case 0x802D1470u: goto label_802D1470;
    case 0x802D1474u: goto label_802D1474;
    case 0x802D1478u: goto label_802D1478;
    case 0x802D147Cu: goto label_802D147C;
    case 0x802D1480u: goto label_802D1480;
    case 0x802D1484u: goto label_802D1484;
    case 0x802D1488u: goto label_802D1488;
    case 0x802D148Cu: goto label_802D148C;
    case 0x802D1490u: goto label_802D1490;
    case 0x802D1494u: goto label_802D1494;
    case 0x802D1498u: goto label_802D1498;
    case 0x802D149Cu: goto label_802D149C;
    case 0x802D14A0u: goto label_802D14A0;
    case 0x802D14A4u: goto label_802D14A4;
    case 0x802D14A8u: goto label_802D14A8;
    case 0x802D14ACu: goto label_802D14AC;
    case 0x802D14B0u: goto label_802D14B0;
    case 0x802D14B4u: goto label_802D14B4;
    case 0x802D14B8u: goto label_802D14B8;
    case 0x802D14BCu: goto label_802D14BC;
    case 0x802D14C0u: goto label_802D14C0;
    case 0x802D14C4u: goto label_802D14C4;
    case 0x802D14C8u: goto label_802D14C8;
    case 0x802D14CCu: goto label_802D14CC;
    case 0x802D14D0u: goto label_802D14D0;
    case 0x802D14D4u: goto label_802D14D4;
    case 0x802D14D8u: goto label_802D14D8;
    case 0x802D14DCu: goto label_802D14DC;
    case 0x802D14E0u: goto label_802D14E0;
    case 0x802D14E4u: goto label_802D14E4;
    case 0x802D14E8u: goto label_802D14E8;
    case 0x802D14ECu: goto label_802D14EC;
    case 0x802D14F0u: goto label_802D14F0;
    case 0x802D14F4u: goto label_802D14F4;
    case 0x802D14F8u: goto label_802D14F8;
    case 0x802D14FCu: goto label_802D14FC;
    case 0x802D1500u: goto label_802D1500;
    case 0x802D1504u: goto label_802D1504;
    case 0x802D1508u: goto label_802D1508;
    case 0x802D150Cu: goto label_802D150C;
    case 0x802D1510u: goto label_802D1510;
    case 0x802D1514u: goto label_802D1514;
    case 0x802D1518u: goto label_802D1518;
    case 0x802D151Cu: goto label_802D151C;
    case 0x802D1520u: goto label_802D1520;
    case 0x802D1524u: goto label_802D1524;
    case 0x802D1528u: goto label_802D1528;
    case 0x802D152Cu: goto label_802D152C;
    case 0x802D1530u: goto label_802D1530;
    case 0x802D1534u: goto label_802D1534;
    case 0x802D1538u: goto label_802D1538;
    case 0x802D153Cu: goto label_802D153C;
    case 0x802D1540u: goto label_802D1540;
    case 0x802D1544u: goto label_802D1544;
    case 0x802D1548u: goto label_802D1548;
    case 0x802D154Cu: goto label_802D154C;
    case 0x802D1550u: goto label_802D1550;
    case 0x802D1554u: goto label_802D1554;
    case 0x802D1558u: goto label_802D1558;
    case 0x802D155Cu: goto label_802D155C;
    case 0x802D1560u: goto label_802D1560;
    case 0x802D1564u: goto label_802D1564;
    case 0x802D1568u: goto label_802D1568;
    case 0x802D156Cu: goto label_802D156C;
    case 0x802D1570u: goto label_802D1570;
    case 0x802D1574u: goto label_802D1574;
    case 0x802D1578u: goto label_802D1578;
    case 0x802D157Cu: goto label_802D157C;
    case 0x802D1580u: goto label_802D1580;
    case 0x802D1584u: goto label_802D1584;
    case 0x802D1588u: goto label_802D1588;
    case 0x802D158Cu: goto label_802D158C;
    case 0x802D1590u: goto label_802D1590;
    case 0x802D1594u: goto label_802D1594;
    case 0x802D1598u: goto label_802D1598;
    case 0x802D159Cu: goto label_802D159C;
    case 0x802D15A0u: goto label_802D15A0;
    case 0x802D15A4u: goto label_802D15A4;
    case 0x802D15A8u: goto label_802D15A8;
    case 0x802D15ACu: goto label_802D15AC;
    case 0x802D15B0u: goto label_802D15B0;
    case 0x802D15B4u: goto label_802D15B4;
    case 0x802D15B8u: goto label_802D15B8;
    case 0x802D15BCu: goto label_802D15BC;
    case 0x802D15C0u: goto label_802D15C0;
    case 0x802D15C4u: goto label_802D15C4;
    case 0x802D15C8u: goto label_802D15C8;
    case 0x802D15CCu: goto label_802D15CC;
    case 0x802D15D0u: goto label_802D15D0;
    case 0x802D15D4u: goto label_802D15D4;
    case 0x802D15D8u: goto label_802D15D8;
    case 0x802D15DCu: goto label_802D15DC;
    case 0x802D15E0u: goto label_802D15E0;
    case 0x802D15E4u: goto label_802D15E4;
    case 0x802D15E8u: goto label_802D15E8;
    case 0x802D15ECu: goto label_802D15EC;
    case 0x802D15F0u: goto label_802D15F0;
    case 0x802D15F4u: goto label_802D15F4;
    case 0x802D15F8u: goto label_802D15F8;
    case 0x802D15FCu: goto label_802D15FC;
    case 0x802D1600u: goto label_802D1600;
    case 0x802D1604u: goto label_802D1604;
    case 0x802D1608u: goto label_802D1608;
    case 0x802D160Cu: goto label_802D160C;
    case 0x802D1610u: goto label_802D1610;
    case 0x802D1614u: goto label_802D1614;
    case 0x802D1618u: goto label_802D1618;
    case 0x802D161Cu: goto label_802D161C;
    case 0x802D1620u: goto label_802D1620;
    case 0x802D1624u: goto label_802D1624;
    case 0x802D1628u: goto label_802D1628;
    case 0x802D162Cu: goto label_802D162C;
    case 0x802D1630u: goto label_802D1630;
    case 0x802D1634u: goto label_802D1634;
    case 0x802D1638u: goto label_802D1638;
    case 0x802D163Cu: goto label_802D163C;
    case 0x802D1640u: goto label_802D1640;
    case 0x802D1644u: goto label_802D1644;
    case 0x802D1648u: goto label_802D1648;
    case 0x802D164Cu: goto label_802D164C;
    case 0x802D1650u: goto label_802D1650;
    case 0x802D1654u: goto label_802D1654;
    case 0x802D1658u: goto label_802D1658;
    case 0x802D165Cu: goto label_802D165C;
    case 0x802D1660u: goto label_802D1660;
    case 0x802D1664u: goto label_802D1664;
    case 0x802D1668u: goto label_802D1668;
    case 0x802D166Cu: goto label_802D166C;
    case 0x802D1670u: goto label_802D1670;
    case 0x802D1674u: goto label_802D1674;
    case 0x802D1678u: goto label_802D1678;
    case 0x802D167Cu: goto label_802D167C;
    case 0x802D1680u: goto label_802D1680;
    case 0x802D1684u: goto label_802D1684;
    case 0x802D1688u: goto label_802D1688;
    case 0x802D168Cu: goto label_802D168C;
    case 0x802D1690u: goto label_802D1690;
    case 0x802D1694u: goto label_802D1694;
    case 0x802D1698u: goto label_802D1698;
    case 0x802D169Cu: goto label_802D169C;
    case 0x802D16A0u: goto label_802D16A0;
    case 0x802D16A4u: goto label_802D16A4;
    case 0x802D16A8u: goto label_802D16A8;
    case 0x802D16ACu: goto label_802D16AC;
    case 0x802D16B0u: goto label_802D16B0;
    case 0x802D16B4u: goto label_802D16B4;
    case 0x802D16B8u: goto label_802D16B8;
    case 0x802D16BCu: goto label_802D16BC;
    case 0x802D16C0u: goto label_802D16C0;
    case 0x802D16C4u: goto label_802D16C4;
    case 0x802D16C8u: goto label_802D16C8;
    case 0x802D16CCu: goto label_802D16CC;
    case 0x802D16D0u: goto label_802D16D0;
    case 0x802D16D4u: goto label_802D16D4;
    case 0x802D16D8u: goto label_802D16D8;
    case 0x802D16DCu: goto label_802D16DC;
    case 0x802D16E0u: goto label_802D16E0;
    case 0x802D16E4u: goto label_802D16E4;
    case 0x802D16E8u: goto label_802D16E8;
    case 0x802D16ECu: goto label_802D16EC;
    case 0x802D16F0u: goto label_802D16F0;
    case 0x802D16F4u: goto label_802D16F4;
    case 0x802D16F8u: goto label_802D16F8;
    case 0x802D16FCu: goto label_802D16FC;
    case 0x802D1700u: goto label_802D1700;
    case 0x802D1704u: goto label_802D1704;
    case 0x802D1708u: goto label_802D1708;
    case 0x802D170Cu: goto label_802D170C;
    case 0x802D1710u: goto label_802D1710;
    case 0x802D1714u: goto label_802D1714;
    case 0x802D1718u: goto label_802D1718;
    case 0x802D171Cu: goto label_802D171C;
    case 0x802D1720u: goto label_802D1720;
    case 0x802D1724u: goto label_802D1724;
    case 0x802D1728u: goto label_802D1728;
    case 0x802D172Cu: goto label_802D172C;
    case 0x802D1730u: goto label_802D1730;
    case 0x802D1734u: goto label_802D1734;
    case 0x802D1738u: goto label_802D1738;
    case 0x802D173Cu: goto label_802D173C;
    case 0x802D1740u: goto label_802D1740;
    case 0x802D1744u: goto label_802D1744;
    case 0x802D1748u: goto label_802D1748;
    case 0x802D174Cu: goto label_802D174C;
    case 0x802D1750u: goto label_802D1750;
    case 0x802D1754u: goto label_802D1754;
    case 0x802D1758u: goto label_802D1758;
    case 0x802D175Cu: goto label_802D175C;
    case 0x802D1760u: goto label_802D1760;
    case 0x802D1764u: goto label_802D1764;
    case 0x802D1768u: goto label_802D1768;
    case 0x802D176Cu: goto label_802D176C;
    case 0x802D1770u: goto label_802D1770;
    case 0x802D1774u: goto label_802D1774;
    case 0x802D1778u: goto label_802D1778;
    case 0x802D177Cu: goto label_802D177C;
    case 0x802D1780u: goto label_802D1780;
    case 0x802D1784u: goto label_802D1784;
    case 0x802D1788u: goto label_802D1788;
    case 0x802D178Cu: goto label_802D178C;
    case 0x802D1790u: goto label_802D1790;
    case 0x802D1794u: goto label_802D1794;
    case 0x802D1798u: goto label_802D1798;
    case 0x802D179Cu: goto label_802D179C;
    case 0x802D17A0u: goto label_802D17A0;
    case 0x802D17A4u: goto label_802D17A4;
    case 0x802D17A8u: goto label_802D17A8;
    case 0x802D17ACu: goto label_802D17AC;
    case 0x802D17B0u: goto label_802D17B0;
    case 0x802D17B4u: goto label_802D17B4;
    case 0x802D17B8u: goto label_802D17B8;
    case 0x802D17BCu: goto label_802D17BC;
    case 0x802D17C0u: goto label_802D17C0;
    case 0x802D17C4u: goto label_802D17C4;
    case 0x802D17C8u: goto label_802D17C8;
    case 0x802D17CCu: goto label_802D17CC;
    case 0x802D17D0u: goto label_802D17D0;
    case 0x802D17D4u: goto label_802D17D4;
    case 0x802D17D8u: goto label_802D17D8;
    case 0x802D17DCu: goto label_802D17DC;
    case 0x802D17E0u: goto label_802D17E0;
    case 0x802D17E4u: goto label_802D17E4;
    case 0x802D17E8u: goto label_802D17E8;
    case 0x802D17ECu: goto label_802D17EC;
    case 0x802D17F0u: goto label_802D17F0;
    case 0x802D17F4u: goto label_802D17F4;
    case 0x802D17F8u: goto label_802D17F8;
    case 0x802D17FCu: goto label_802D17FC;
    case 0x802D1800u: goto label_802D1800;
    case 0x802D1804u: goto label_802D1804;
    case 0x802D1808u: goto label_802D1808;
    case 0x802D180Cu: goto label_802D180C;
    case 0x802D1810u: goto label_802D1810;
    case 0x802D1814u: goto label_802D1814;
    case 0x802D1818u: goto label_802D1818;
    case 0x802D181Cu: goto label_802D181C;
    case 0x802D1820u: goto label_802D1820;
    case 0x802D1824u: goto label_802D1824;
    case 0x802D1828u: goto label_802D1828;
    case 0x802D182Cu: goto label_802D182C;
    case 0x802D1830u: goto label_802D1830;
    case 0x802D1834u: goto label_802D1834;
    case 0x802D1838u: goto label_802D1838;
    case 0x802D183Cu: goto label_802D183C;
    case 0x802D1840u: goto label_802D1840;
    case 0x802D1844u: goto label_802D1844;
    case 0x802D1848u: goto label_802D1848;
    case 0x802D184Cu: goto label_802D184C;
    case 0x802D1850u: goto label_802D1850;
    case 0x802D1854u: goto label_802D1854;
    case 0x802D1858u: goto label_802D1858;
    case 0x802D185Cu: goto label_802D185C;
    case 0x802D1860u: goto label_802D1860;
    case 0x802D1864u: goto label_802D1864;
    case 0x802D1868u: goto label_802D1868;
    case 0x802D186Cu: goto label_802D186C;
    case 0x802D1870u: goto label_802D1870;
    case 0x802D1874u: goto label_802D1874;
    case 0x802D1878u: goto label_802D1878;
    case 0x802D187Cu: goto label_802D187C;
    case 0x802D1880u: goto label_802D1880;
    case 0x802D1884u: goto label_802D1884;
    case 0x802D1888u: goto label_802D1888;
    case 0x802D188Cu: goto label_802D188C;
    case 0x802D1890u: goto label_802D1890;
    case 0x802D1894u: goto label_802D1894;
    case 0x802D1898u: goto label_802D1898;
    case 0x802D189Cu: goto label_802D189C;
    case 0x802D18A0u: goto label_802D18A0;
    case 0x802D18A4u: goto label_802D18A4;
    case 0x802D18A8u: goto label_802D18A8;
    case 0x802D18ACu: goto label_802D18AC;
    case 0x802D18B0u: goto label_802D18B0;
    case 0x802D18B4u: goto label_802D18B4;
    case 0x802D18B8u: goto label_802D18B8;
    case 0x802D18BCu: goto label_802D18BC;
    case 0x802D18C0u: goto label_802D18C0;
    case 0x802D18C4u: goto label_802D18C4;
    case 0x802D18C8u: goto label_802D18C8;
    case 0x802D18CCu: goto label_802D18CC;
    case 0x802D18D0u: goto label_802D18D0;
    case 0x802D18D4u: goto label_802D18D4;
    case 0x802D18D8u: goto label_802D18D8;
    case 0x802D18DCu: goto label_802D18DC;
    case 0x802D18E0u: goto label_802D18E0;
    case 0x802D18E4u: goto label_802D18E4;
    case 0x802D18E8u: goto label_802D18E8;
    case 0x802D18ECu: goto label_802D18EC;
    case 0x802D18F0u: goto label_802D18F0;
    case 0x802D18F4u: goto label_802D18F4;
    case 0x802D18F8u: goto label_802D18F8;
    case 0x802D18FCu: goto label_802D18FC;
    case 0x802D1900u: goto label_802D1900;
    case 0x802D1904u: goto label_802D1904;
    case 0x802D1908u: goto label_802D1908;
    case 0x802D190Cu: goto label_802D190C;
    case 0x802D1910u: goto label_802D1910;
    case 0x802D1914u: goto label_802D1914;
    case 0x802D1918u: goto label_802D1918;
    case 0x802D191Cu: goto label_802D191C;
    case 0x802D1920u: goto label_802D1920;
    case 0x802D1924u: goto label_802D1924;
    case 0x802D1928u: goto label_802D1928;
    case 0x802D192Cu: goto label_802D192C;
    case 0x802D1930u: goto label_802D1930;
    case 0x802D1934u: goto label_802D1934;
    case 0x802D1938u: goto label_802D1938;
    case 0x802D193Cu: goto label_802D193C;
    case 0x802D1940u: goto label_802D1940;
    case 0x802D1944u: goto label_802D1944;
    case 0x802D1948u: goto label_802D1948;
    case 0x802D194Cu: goto label_802D194C;
    case 0x802D1950u: goto label_802D1950;
    case 0x802D1954u: goto label_802D1954;
    case 0x802D1958u: goto label_802D1958;
    case 0x802D195Cu: goto label_802D195C;
    case 0x802D1960u: goto label_802D1960;
    case 0x802D1964u: goto label_802D1964;
    case 0x802D1968u: goto label_802D1968;
    case 0x802D196Cu: goto label_802D196C;
    case 0x802D1970u: goto label_802D1970;
    case 0x802D1974u: goto label_802D1974;
    case 0x802D1978u: goto label_802D1978;
    case 0x802D197Cu: goto label_802D197C;
    case 0x802D1980u: goto label_802D1980;
    case 0x802D1984u: goto label_802D1984;
    case 0x802D1988u: goto label_802D1988;
    case 0x802D198Cu: goto label_802D198C;
    case 0x802D1990u: goto label_802D1990;
    case 0x802D1994u: goto label_802D1994;
    case 0x802D1998u: goto label_802D1998;
    case 0x802D199Cu: goto label_802D199C;
    case 0x802D19A0u: goto label_802D19A0;
    case 0x802D19A4u: goto label_802D19A4;
    case 0x802D19A8u: goto label_802D19A8;
    case 0x802D19ACu: goto label_802D19AC;
    case 0x802D19B0u: goto label_802D19B0;
    case 0x802D19B4u: goto label_802D19B4;
    case 0x802D19B8u: goto label_802D19B8;
    case 0x802D19BCu: goto label_802D19BC;
    case 0x802D19C0u: goto label_802D19C0;
    case 0x802D19C4u: goto label_802D19C4;
    case 0x802D19C8u: goto label_802D19C8;
    case 0x802D19CCu: goto label_802D19CC;
    case 0x802D19D0u: goto label_802D19D0;
    case 0x802D19D4u: goto label_802D19D4;
    case 0x802D19D8u: goto label_802D19D8;
    case 0x802D19DCu: goto label_802D19DC;
    case 0x802D19E0u: goto label_802D19E0;
    case 0x802D19E4u: goto label_802D19E4;
    case 0x802D19E8u: goto label_802D19E8;
    case 0x802D19ECu: goto label_802D19EC;
    case 0x802D19F0u: goto label_802D19F0;
    case 0x802D19F4u: goto label_802D19F4;
    case 0x802D19F8u: goto label_802D19F8;
    case 0x802D19FCu: goto label_802D19FC;
    case 0x802D1A00u: goto label_802D1A00;
    case 0x802D1A04u: goto label_802D1A04;
    case 0x802D1A08u: goto label_802D1A08;
    case 0x802D1A0Cu: goto label_802D1A0C;
    case 0x802D1A10u: goto label_802D1A10;
    case 0x802D1A14u: goto label_802D1A14;
    case 0x802D1A18u: goto label_802D1A18;
    case 0x802D1A1Cu: goto label_802D1A1C;
    case 0x802D1A20u: goto label_802D1A20;
    case 0x802D1A24u: goto label_802D1A24;
    case 0x802D1A28u: goto label_802D1A28;
    case 0x802D1A2Cu: goto label_802D1A2C;
    case 0x802D1A30u: goto label_802D1A30;
    case 0x802D1A34u: goto label_802D1A34;
    case 0x802D1A38u: goto label_802D1A38;
    case 0x802D1A3Cu: goto label_802D1A3C;
    case 0x802D1A40u: goto label_802D1A40;
    case 0x802D1A44u: goto label_802D1A44;
    case 0x802D1A48u: goto label_802D1A48;
    case 0x802D1A4Cu: goto label_802D1A4C;
    case 0x802D1A50u: goto label_802D1A50;
    case 0x802D1A54u: goto label_802D1A54;
    case 0x802D1A58u: goto label_802D1A58;
    case 0x802D1A5Cu: goto label_802D1A5C;
    case 0x802D1A60u: goto label_802D1A60;
    case 0x802D1A64u: goto label_802D1A64;
    case 0x802D1A68u: goto label_802D1A68;
    case 0x802D1A6Cu: goto label_802D1A6C;
    case 0x802D1A70u: goto label_802D1A70;
    case 0x802D1A74u: goto label_802D1A74;
    case 0x802D1A78u: goto label_802D1A78;
    case 0x802D1A7Cu: goto label_802D1A7C;
    case 0x802D1A80u: goto label_802D1A80;
    case 0x802D1A84u: goto label_802D1A84;
    case 0x802D1A88u: goto label_802D1A88;
    case 0x802D1A8Cu: goto label_802D1A8C;
    case 0x802D1A90u: goto label_802D1A90;
    case 0x802D1A94u: goto label_802D1A94;
    case 0x802D1A98u: goto label_802D1A98;
    case 0x802D1A9Cu: goto label_802D1A9C;
    case 0x802D1AA0u: goto label_802D1AA0;
    case 0x802D1AA4u: goto label_802D1AA4;
    case 0x802D1AA8u: goto label_802D1AA8;
    case 0x802D1AACu: goto label_802D1AAC;
    case 0x802D1AB0u: goto label_802D1AB0;
    case 0x802D1AB4u: goto label_802D1AB4;
    case 0x802D1AB8u: goto label_802D1AB8;
    case 0x802D1ABCu: goto label_802D1ABC;
    case 0x802D1AC0u: goto label_802D1AC0;
    case 0x802D1AC4u: goto label_802D1AC4;
    case 0x802D1AC8u: goto label_802D1AC8;
    case 0x802D1ACCu: goto label_802D1ACC;
    case 0x802D1AD0u: goto label_802D1AD0;
    case 0x802D1AD4u: goto label_802D1AD4;
    case 0x802D1AD8u: goto label_802D1AD8;
    case 0x802D1ADCu: goto label_802D1ADC;
    case 0x802D1AE0u: goto label_802D1AE0;
    case 0x802D1AE4u: goto label_802D1AE4;
    case 0x802D1AE8u: goto label_802D1AE8;
    case 0x802D1AECu: goto label_802D1AEC;
    case 0x802D1AF0u: goto label_802D1AF0;
    case 0x802D1AF4u: goto label_802D1AF4;
    case 0x802D1AF8u: goto label_802D1AF8;
    case 0x802D1AFCu: goto label_802D1AFC;
    case 0x802D1B00u: goto label_802D1B00;
    case 0x802D1B04u: goto label_802D1B04;
    case 0x802D1B08u: goto label_802D1B08;
    case 0x802D1B0Cu: goto label_802D1B0C;
    case 0x802D1B10u: goto label_802D1B10;
    case 0x802D1B14u: goto label_802D1B14;
    case 0x802D1B18u: goto label_802D1B18;
    case 0x802D1B1Cu: goto label_802D1B1C;
    case 0x802D1B20u: goto label_802D1B20;
    case 0x802D1B24u: goto label_802D1B24;
    case 0x802D1B28u: goto label_802D1B28;
    case 0x802D1B2Cu: goto label_802D1B2C;
    case 0x802D1B30u: goto label_802D1B30;
    case 0x802D1B34u: goto label_802D1B34;
    case 0x802D1B38u: goto label_802D1B38;
    case 0x802D1B3Cu: goto label_802D1B3C;
    case 0x802D1B40u: goto label_802D1B40;
    case 0x802D1B44u: goto label_802D1B44;
    case 0x802D1B48u: goto label_802D1B48;
    case 0x802D1B4Cu: goto label_802D1B4C;
    case 0x802D1B50u: goto label_802D1B50;
    case 0x802D1B54u: goto label_802D1B54;
    case 0x802D1B58u: goto label_802D1B58;
    case 0x802D1B5Cu: goto label_802D1B5C;
    case 0x802D1B60u: goto label_802D1B60;
    case 0x802D1B64u: goto label_802D1B64;
    case 0x802D1B68u: goto label_802D1B68;
    case 0x802D1B6Cu: goto label_802D1B6C;
    case 0x802D1B70u: goto label_802D1B70;
    case 0x802D1B74u: goto label_802D1B74;
    case 0x802D1B78u: goto label_802D1B78;
    case 0x802D1B7Cu: goto label_802D1B7C;
    case 0x802D1B80u: goto label_802D1B80;
    case 0x802D1B84u: goto label_802D1B84;
    case 0x802D1B88u: goto label_802D1B88;
    case 0x802D1B8Cu: goto label_802D1B8C;
    case 0x802D1B90u: goto label_802D1B90;
    case 0x802D1B94u: goto label_802D1B94;
    case 0x802D1B98u: goto label_802D1B98;
    case 0x802D1B9Cu: goto label_802D1B9C;
    case 0x802D1BA0u: goto label_802D1BA0;
    case 0x802D1BA4u: goto label_802D1BA4;
    case 0x802D1BA8u: goto label_802D1BA8;
    case 0x802D1BACu: goto label_802D1BAC;
    case 0x802D1BB0u: goto label_802D1BB0;
    case 0x802D1BB4u: goto label_802D1BB4;
    case 0x802D1BB8u: goto label_802D1BB8;
    case 0x802D1BBCu: goto label_802D1BBC;
    case 0x802D1BC0u: goto label_802D1BC0;
    case 0x802D1BC4u: goto label_802D1BC4;
    case 0x802D1BC8u: goto label_802D1BC8;
    case 0x802D1BCCu: goto label_802D1BCC;
    case 0x802D1BD0u: goto label_802D1BD0;
    case 0x802D1BD4u: goto label_802D1BD4;
    case 0x802D1BD8u: goto label_802D1BD8;
    case 0x802D1BDCu: goto label_802D1BDC;
    case 0x802D1BE0u: goto label_802D1BE0;
    case 0x802D1BE4u: goto label_802D1BE4;
    case 0x802D1BE8u: goto label_802D1BE8;
    case 0x802D1BECu: goto label_802D1BEC;
    case 0x802D1BF0u: goto label_802D1BF0;
    case 0x802D1BF4u: goto label_802D1BF4;
    case 0x802D1BF8u: goto label_802D1BF8;
    case 0x802D1BFCu: goto label_802D1BFC;
    case 0x802D1C00u: goto label_802D1C00;
    case 0x802D1C04u: goto label_802D1C04;
    case 0x802D1C08u: goto label_802D1C08;
    case 0x802D1C0Cu: goto label_802D1C0C;
    case 0x802D1C10u: goto label_802D1C10;
    case 0x802D1C14u: goto label_802D1C14;
    case 0x802D1C18u: goto label_802D1C18;
    case 0x802D1C1Cu: goto label_802D1C1C;
    case 0x802D1C20u: goto label_802D1C20;
    case 0x802D1C24u: goto label_802D1C24;
    case 0x802D1C28u: goto label_802D1C28;
    case 0x802D1C2Cu: goto label_802D1C2C;
    case 0x802D1C30u: goto label_802D1C30;
    case 0x802D1C34u: goto label_802D1C34;
    case 0x802D1C38u: goto label_802D1C38;
    case 0x802D1C3Cu: goto label_802D1C3C;
    case 0x802D1C40u: goto label_802D1C40;
    case 0x802D1C44u: goto label_802D1C44;
    case 0x802D1C48u: goto label_802D1C48;
    case 0x802D1C4Cu: goto label_802D1C4C;
    case 0x802D1C50u: goto label_802D1C50;
    case 0x802D1C54u: goto label_802D1C54;
    case 0x802D1C58u: goto label_802D1C58;
    case 0x802D1C5Cu: goto label_802D1C5C;
    case 0x802D1C60u: goto label_802D1C60;
    case 0x802D1C64u: goto label_802D1C64;
    case 0x802D1C68u: goto label_802D1C68;
    case 0x802D1C6Cu: goto label_802D1C6C;
    case 0x802D1C70u: goto label_802D1C70;
    case 0x802D1C74u: goto label_802D1C74;
    case 0x802D1C78u: goto label_802D1C78;
    case 0x802D1C7Cu: goto label_802D1C7C;
    case 0x802D1C80u: goto label_802D1C80;
    case 0x802D1C84u: goto label_802D1C84;
    case 0x802D1C88u: goto label_802D1C88;
    case 0x802D1C8Cu: goto label_802D1C8C;
    case 0x802D1C90u: goto label_802D1C90;
    case 0x802D1C94u: goto label_802D1C94;
    case 0x802D1C98u: goto label_802D1C98;
    case 0x802D1C9Cu: goto label_802D1C9C;
    case 0x802D1CA0u: goto label_802D1CA0;
    case 0x802D1CA4u: goto label_802D1CA4;
    case 0x802D1CA8u: goto label_802D1CA8;
    case 0x802D1CACu: goto label_802D1CAC;
    case 0x802D1CB0u: goto label_802D1CB0;
    case 0x802D1CB4u: goto label_802D1CB4;
    case 0x802D1CB8u: goto label_802D1CB8;
    case 0x802D1CBCu: goto label_802D1CBC;
    case 0x802D1CC0u: goto label_802D1CC0;
    case 0x802D1CC4u: goto label_802D1CC4;
    case 0x802D1CC8u: goto label_802D1CC8;
    case 0x802D1CCCu: goto label_802D1CCC;
    case 0x802D1CD0u: goto label_802D1CD0;
    case 0x802D1CD4u: goto label_802D1CD4;
    case 0x802D1CD8u: goto label_802D1CD8;
    case 0x802D1CDCu: goto label_802D1CDC;
    case 0x802D1CE0u: goto label_802D1CE0;
    case 0x802D1CE4u: goto label_802D1CE4;
    case 0x802D1CE8u: goto label_802D1CE8;
    case 0x802D1CECu: goto label_802D1CEC;
    case 0x802D1CF0u: goto label_802D1CF0;
    case 0x802D1CF4u: goto label_802D1CF4;
    case 0x802D1CF8u: goto label_802D1CF8;
    case 0x802D1CFCu: goto label_802D1CFC;
    case 0x802D1D00u: goto label_802D1D00;
    case 0x802D1D04u: goto label_802D1D04;
    case 0x802D1D08u: goto label_802D1D08;
    case 0x802D1D0Cu: goto label_802D1D0C;
    case 0x802D1D10u: goto label_802D1D10;
    case 0x802D1D14u: goto label_802D1D14;
    case 0x802D1D18u: goto label_802D1D18;
    case 0x802D1D1Cu: goto label_802D1D1C;
    case 0x802D1D20u: goto label_802D1D20;
    case 0x802D1D24u: goto label_802D1D24;
    case 0x802D1D28u: goto label_802D1D28;
    case 0x802D1D2Cu: goto label_802D1D2C;
    case 0x802D1D30u: goto label_802D1D30;
    case 0x802D1D34u: goto label_802D1D34;
    case 0x802D1D38u: goto label_802D1D38;
    case 0x802D1D3Cu: goto label_802D1D3C;
    case 0x802D1D40u: goto label_802D1D40;
    case 0x802D1D44u: goto label_802D1D44;
    case 0x802D1D48u: goto label_802D1D48;
    case 0x802D1D4Cu: goto label_802D1D4C;
    case 0x802D1D50u: goto label_802D1D50;
    case 0x802D1D54u: goto label_802D1D54;
    case 0x802D1D58u: goto label_802D1D58;
    case 0x802D1D5Cu: goto label_802D1D5C;
    case 0x802D1D60u: goto label_802D1D60;
    case 0x802D1D64u: goto label_802D1D64;
    case 0x802D1D68u: goto label_802D1D68;
    case 0x802D1D6Cu: goto label_802D1D6C;
    case 0x802D1D70u: goto label_802D1D70;
    case 0x802D1D74u: goto label_802D1D74;
    case 0x802D1D78u: goto label_802D1D78;
    case 0x802D1D7Cu: goto label_802D1D7C;
    case 0x802D1D80u: goto label_802D1D80;
    case 0x802D1D84u: goto label_802D1D84;
    case 0x802D1D88u: goto label_802D1D88;
    case 0x802D1D8Cu: goto label_802D1D8C;
    case 0x802D1D90u: goto label_802D1D90;
    case 0x802D1D94u: goto label_802D1D94;
    case 0x802D1D98u: goto label_802D1D98;
    case 0x802D1D9Cu: goto label_802D1D9C;
    case 0x802D1DA0u: goto label_802D1DA0;
    case 0x802D1DA4u: goto label_802D1DA4;
    case 0x802D1DA8u: goto label_802D1DA8;
    case 0x802D1DACu: goto label_802D1DAC;
    case 0x802D1DB0u: goto label_802D1DB0;
    case 0x802D1DB4u: goto label_802D1DB4;
    case 0x802D1DB8u: goto label_802D1DB8;
    case 0x802D1DBCu: goto label_802D1DBC;
    case 0x802D1DC0u: goto label_802D1DC0;
    case 0x802D1DC4u: goto label_802D1DC4;
    case 0x802D1DC8u: goto label_802D1DC8;
    case 0x802D1DCCu: goto label_802D1DCC;
    case 0x802D1DD0u: goto label_802D1DD0;
    case 0x802D1DD4u: goto label_802D1DD4;
    case 0x802D1DD8u: goto label_802D1DD8;
    case 0x802D1DDCu: goto label_802D1DDC;
    case 0x802D1DE0u: goto label_802D1DE0;
    case 0x802D1DE4u: goto label_802D1DE4;
    case 0x802D1DE8u: goto label_802D1DE8;
    case 0x802D1DECu: goto label_802D1DEC;
    case 0x802D1DF0u: goto label_802D1DF0;
    case 0x802D1DF4u: goto label_802D1DF4;
    case 0x802D1DF8u: goto label_802D1DF8;
    case 0x802D1DFCu: goto label_802D1DFC;
    case 0x802D1E00u: goto label_802D1E00;
    case 0x802D1E04u: goto label_802D1E04;
    case 0x802D1E08u: goto label_802D1E08;
    case 0x802D1E0Cu: goto label_802D1E0C;
    case 0x802D1E10u: goto label_802D1E10;
    case 0x802D1E14u: goto label_802D1E14;
    case 0x802D1E18u: goto label_802D1E18;
    case 0x802D1E1Cu: goto label_802D1E1C;
    case 0x802D1E20u: goto label_802D1E20;
    case 0x802D1E24u: goto label_802D1E24;
    case 0x802D1E28u: goto label_802D1E28;
    case 0x802D1E2Cu: goto label_802D1E2C;
    case 0x802D1E30u: goto label_802D1E30;
    case 0x802D1E34u: goto label_802D1E34;
    case 0x802D1E38u: goto label_802D1E38;
    case 0x802D1E3Cu: goto label_802D1E3C;
    case 0x802D1E40u: goto label_802D1E40;
    case 0x802D1E44u: goto label_802D1E44;
    case 0x802D1E48u: goto label_802D1E48;
    case 0x802D1E4Cu: goto label_802D1E4C;
    case 0x802D1E50u: goto label_802D1E50;
    case 0x802D1E54u: goto label_802D1E54;
    case 0x802D1E58u: goto label_802D1E58;
    case 0x802D1E5Cu: goto label_802D1E5C;
    case 0x802D1E60u: goto label_802D1E60;
    case 0x802D1E64u: goto label_802D1E64;
    case 0x802D1E68u: goto label_802D1E68;
    case 0x802D1E6Cu: goto label_802D1E6C;
    case 0x802D1E70u: goto label_802D1E70;
    case 0x802D1E74u: goto label_802D1E74;
    case 0x802D1E78u: goto label_802D1E78;
    case 0x802D1E7Cu: goto label_802D1E7C;
    case 0x802D1E80u: goto label_802D1E80;
    case 0x802D1E84u: goto label_802D1E84;
    case 0x802D1E88u: goto label_802D1E88;
    case 0x802D1E8Cu: goto label_802D1E8C;
    case 0x802D1E90u: goto label_802D1E90;
    case 0x802D1E94u: goto label_802D1E94;
    case 0x802D1E98u: goto label_802D1E98;
    case 0x802D1E9Cu: goto label_802D1E9C;
    case 0x802D1EA0u: goto label_802D1EA0;
    case 0x802D1EA4u: goto label_802D1EA4;
    case 0x802D1EA8u: goto label_802D1EA8;
    case 0x802D1EACu: goto label_802D1EAC;
    case 0x802D1EB0u: goto label_802D1EB0;
    case 0x802D1EB4u: goto label_802D1EB4;
    case 0x802D1EB8u: goto label_802D1EB8;
    case 0x802D1EBCu: goto label_802D1EBC;
    case 0x802D1EC0u: goto label_802D1EC0;
    case 0x802D1EC4u: goto label_802D1EC4;
    case 0x802D1EC8u: goto label_802D1EC8;
    case 0x802D1ECCu: goto label_802D1ECC;
    case 0x802D1ED0u: goto label_802D1ED0;
    case 0x802D1ED4u: goto label_802D1ED4;
    case 0x802D1ED8u: goto label_802D1ED8;
    case 0x802D1EDCu: goto label_802D1EDC;
    case 0x802D1EE0u: goto label_802D1EE0;
    case 0x802D1EE4u: goto label_802D1EE4;
    case 0x802D1EE8u: goto label_802D1EE8;
    case 0x802D1EECu: goto label_802D1EEC;
    case 0x802D1EF0u: goto label_802D1EF0;
    case 0x802D1EF4u: goto label_802D1EF4;
    case 0x802D1EF8u: goto label_802D1EF8;
    case 0x802D1EFCu: goto label_802D1EFC;
    case 0x802D1F00u: goto label_802D1F00;
    case 0x802D1F04u: goto label_802D1F04;
    case 0x802D1F08u: goto label_802D1F08;
    case 0x802D1F0Cu: goto label_802D1F0C;
    case 0x802D1F10u: goto label_802D1F10;
    case 0x802D1F14u: goto label_802D1F14;
    case 0x802D1F18u: goto label_802D1F18;
    case 0x802D1F1Cu: goto label_802D1F1C;
    case 0x802D1F20u: goto label_802D1F20;
    case 0x802D1F24u: goto label_802D1F24;
    case 0x802D1F28u: goto label_802D1F28;
    case 0x802D1F2Cu: goto label_802D1F2C;
    case 0x802D1F30u: goto label_802D1F30;
    case 0x802D1F34u: goto label_802D1F34;
    case 0x802D1F38u: goto label_802D1F38;
    case 0x802D1F3Cu: goto label_802D1F3C;
    case 0x802D1F40u: goto label_802D1F40;
    case 0x802D1F44u: goto label_802D1F44;
    case 0x802D1F48u: goto label_802D1F48;
    case 0x802D1F4Cu: goto label_802D1F4C;
    case 0x802D1F50u: goto label_802D1F50;
    case 0x802D1F54u: goto label_802D1F54;
    case 0x802D1F58u: goto label_802D1F58;
    case 0x802D1F5Cu: goto label_802D1F5C;
    case 0x802D1F60u: goto label_802D1F60;
    case 0x802D1F64u: goto label_802D1F64;
    case 0x802D1F68u: goto label_802D1F68;
    case 0x802D1F6Cu: goto label_802D1F6C;
    case 0x802D1F70u: goto label_802D1F70;
    case 0x802D1F74u: goto label_802D1F74;
    case 0x802D1F78u: goto label_802D1F78;
    case 0x802D1F7Cu: goto label_802D1F7C;
    case 0x802D1F80u: goto label_802D1F80;
    case 0x802D1F84u: goto label_802D1F84;
    case 0x802D1F88u: goto label_802D1F88;
    case 0x802D1F8Cu: goto label_802D1F8C;
    case 0x802D1F90u: goto label_802D1F90;
    case 0x802D1F94u: goto label_802D1F94;
    case 0x802D1F98u: goto label_802D1F98;
    case 0x802D1F9Cu: goto label_802D1F9C;
    case 0x802D1FA0u: goto label_802D1FA0;
    case 0x802D1FA4u: goto label_802D1FA4;
    case 0x802D1FA8u: goto label_802D1FA8;
    case 0x802D1FACu: goto label_802D1FAC;
    case 0x802D1FB0u: goto label_802D1FB0;
    case 0x802D1FB4u: goto label_802D1FB4;
    case 0x802D1FB8u: goto label_802D1FB8;
    case 0x802D1FBCu: goto label_802D1FBC;
    case 0x802D1FC0u: goto label_802D1FC0;
    case 0x802D1FC4u: goto label_802D1FC4;
    case 0x802D1FC8u: goto label_802D1FC8;
    case 0x802D1FCCu: goto label_802D1FCC;
    case 0x802D1FD0u: goto label_802D1FD0;
    case 0x802D1FD4u: goto label_802D1FD4;
    case 0x802D1FD8u: goto label_802D1FD8;
    case 0x802D1FDCu: goto label_802D1FDC;
    case 0x802D1FE0u: goto label_802D1FE0;
    case 0x802D1FE4u: goto label_802D1FE4;
    case 0x802D1FE8u: goto label_802D1FE8;
    case 0x802D1FECu: goto label_802D1FEC;
    case 0x802D1FF0u: goto label_802D1FF0;
    case 0x802D1FF4u: goto label_802D1FF4;
    case 0x802D1FF8u: goto label_802D1FF8;
    case 0x802D1FFCu: goto label_802D1FFC;
    case 0x802D2000u: goto label_802D2000;
    case 0x802D2004u: goto label_802D2004;
    case 0x802D2008u: goto label_802D2008;
    case 0x802D200Cu: goto label_802D200C;
    case 0x802D2010u: goto label_802D2010;
    case 0x802D2014u: goto label_802D2014;
    case 0x802D2018u: goto label_802D2018;
    case 0x802D201Cu: goto label_802D201C;
    case 0x802D2020u: goto label_802D2020;
    case 0x802D2024u: goto label_802D2024;
    case 0x802D2028u: goto label_802D2028;
    case 0x802D202Cu: goto label_802D202C;
    case 0x802D2030u: goto label_802D2030;
    case 0x802D2034u: goto label_802D2034;
    case 0x802D2038u: goto label_802D2038;
    case 0x802D203Cu: goto label_802D203C;
    case 0x802D2040u: goto label_802D2040;
    case 0x802D2044u: goto label_802D2044;
    case 0x802D2048u: goto label_802D2048;
    case 0x802D204Cu: goto label_802D204C;
    case 0x802D2050u: goto label_802D2050;
    case 0x802D2054u: goto label_802D2054;
    case 0x802D2058u: goto label_802D2058;
    case 0x802D205Cu: goto label_802D205C;
    case 0x802D2060u: goto label_802D2060;
    case 0x802D2064u: goto label_802D2064;
    case 0x802D2068u: goto label_802D2068;
    case 0x802D206Cu: goto label_802D206C;
    case 0x802D2070u: goto label_802D2070;
    case 0x802D2074u: goto label_802D2074;
    case 0x802D2078u: goto label_802D2078;
    case 0x802D207Cu: goto label_802D207C;
    case 0x802D2080u: goto label_802D2080;
    case 0x802D2084u: goto label_802D2084;
    case 0x802D2088u: goto label_802D2088;
    case 0x802D208Cu: goto label_802D208C;
    case 0x802D2090u: goto label_802D2090;
    case 0x802D2094u: goto label_802D2094;
    case 0x802D2098u: goto label_802D2098;
    case 0x802D209Cu: goto label_802D209C;
    case 0x802D20A0u: goto label_802D20A0;
    case 0x802D20A4u: goto label_802D20A4;
    case 0x802D20A8u: goto label_802D20A8;
    case 0x802D20ACu: goto label_802D20AC;
    case 0x802D20B0u: goto label_802D20B0;
    case 0x802D20B4u: goto label_802D20B4;
    case 0x802D20B8u: goto label_802D20B8;
    case 0x802D20BCu: goto label_802D20BC;
    case 0x802D20C0u: goto label_802D20C0;
    case 0x802D20C4u: goto label_802D20C4;
    case 0x802D20C8u: goto label_802D20C8;
    case 0x802D20CCu: goto label_802D20CC;
    case 0x802D20D0u: goto label_802D20D0;
    case 0x802D20D4u: goto label_802D20D4;
    case 0x802D20D8u: goto label_802D20D8;
    case 0x802D20DCu: goto label_802D20DC;
    case 0x802D20E0u: goto label_802D20E0;
    case 0x802D20E4u: goto label_802D20E4;
    case 0x802D20E8u: goto label_802D20E8;
    case 0x802D20ECu: goto label_802D20EC;
    case 0x802D20F0u: goto label_802D20F0;
    case 0x802D20F4u: goto label_802D20F4;
    case 0x802D20F8u: goto label_802D20F8;
    case 0x802D20FCu: goto label_802D20FC;
    case 0x802D2100u: goto label_802D2100;
    case 0x802D2104u: goto label_802D2104;
    case 0x802D2108u: goto label_802D2108;
    case 0x802D210Cu: goto label_802D210C;
    case 0x802D2110u: goto label_802D2110;
    case 0x802D2114u: goto label_802D2114;
    case 0x802D2118u: goto label_802D2118;
    case 0x802D211Cu: goto label_802D211C;
    case 0x802D2120u: goto label_802D2120;
    case 0x802D2124u: goto label_802D2124;
    case 0x802D2128u: goto label_802D2128;
    case 0x802D212Cu: goto label_802D212C;
    case 0x802D2130u: goto label_802D2130;
    case 0x802D2134u: goto label_802D2134;
    case 0x802D2138u: goto label_802D2138;
    case 0x802D213Cu: goto label_802D213C;
    case 0x802D2140u: goto label_802D2140;
    case 0x802D2144u: goto label_802D2144;
    case 0x802D2148u: goto label_802D2148;
    case 0x802D214Cu: goto label_802D214C;
    case 0x802D2150u: goto label_802D2150;
    case 0x802D2154u: goto label_802D2154;
    case 0x802D2158u: goto label_802D2158;
    case 0x802D215Cu: goto label_802D215C;
    case 0x802D2160u: goto label_802D2160;
    case 0x802D2164u: goto label_802D2164;
    case 0x802D2168u: goto label_802D2168;
    case 0x802D216Cu: goto label_802D216C;
    case 0x802D2170u: goto label_802D2170;
    case 0x802D2174u: goto label_802D2174;
    case 0x802D2178u: goto label_802D2178;
    case 0x802D217Cu: goto label_802D217C;
    case 0x802D2180u: goto label_802D2180;
    case 0x802D2184u: goto label_802D2184;
    case 0x802D2188u: goto label_802D2188;
    case 0x802D218Cu: goto label_802D218C;
    case 0x802D2190u: goto label_802D2190;
    case 0x802D2194u: goto label_802D2194;
    case 0x802D2198u: goto label_802D2198;
    case 0x802D219Cu: goto label_802D219C;
    case 0x802D21A0u: goto label_802D21A0;
    case 0x802D21A4u: goto label_802D21A4;
    case 0x802D21A8u: goto label_802D21A8;
    case 0x802D21ACu: goto label_802D21AC;
    case 0x802D21B0u: goto label_802D21B0;
    case 0x802D21B4u: goto label_802D21B4;
    case 0x802D21B8u: goto label_802D21B8;
    case 0x802D21BCu: goto label_802D21BC;
    case 0x802D21C0u: goto label_802D21C0;
    case 0x802D21C4u: goto label_802D21C4;
    case 0x802D21C8u: goto label_802D21C8;
    case 0x802D21CCu: goto label_802D21CC;
    case 0x802D21D0u: goto label_802D21D0;
    case 0x802D21D4u: goto label_802D21D4;
    case 0x802D21D8u: goto label_802D21D8;
    case 0x802D21DCu: goto label_802D21DC;
    case 0x802D21E0u: goto label_802D21E0;
    case 0x802D21E4u: goto label_802D21E4;
    case 0x802D21E8u: goto label_802D21E8;
    case 0x802D21ECu: goto label_802D21EC;
    case 0x802D21F0u: goto label_802D21F0;
    case 0x802D21F4u: goto label_802D21F4;
    case 0x802D21F8u: goto label_802D21F8;
    case 0x802D21FCu: goto label_802D21FC;
    case 0x802D2200u: goto label_802D2200;
    case 0x802D2204u: goto label_802D2204;
    case 0x802D2208u: goto label_802D2208;
    case 0x802D220Cu: goto label_802D220C;
    case 0x802D2210u: goto label_802D2210;
    case 0x802D2214u: goto label_802D2214;
    case 0x802D2218u: goto label_802D2218;
    case 0x802D221Cu: goto label_802D221C;
    case 0x802D2220u: goto label_802D2220;
    case 0x802D2224u: goto label_802D2224;
    case 0x802D2228u: goto label_802D2228;
    case 0x802D222Cu: goto label_802D222C;
    case 0x802D2230u: goto label_802D2230;
    case 0x802D2234u: goto label_802D2234;
    case 0x802D2238u: goto label_802D2238;
    case 0x802D223Cu: goto label_802D223C;
    case 0x802D2240u: goto label_802D2240;
    case 0x802D2244u: goto label_802D2244;
    case 0x802D2248u: goto label_802D2248;
    case 0x802D224Cu: goto label_802D224C;
    case 0x802D2250u: goto label_802D2250;
    case 0x802D2254u: goto label_802D2254;
    case 0x802D2258u: goto label_802D2258;
    case 0x802D225Cu: goto label_802D225C;
    case 0x802D2260u: goto label_802D2260;
    case 0x802D2264u: goto label_802D2264;
    case 0x802D2268u: goto label_802D2268;
    case 0x802D226Cu: goto label_802D226C;
    case 0x802D2270u: goto label_802D2270;
    case 0x802D2274u: goto label_802D2274;
    case 0x802D2278u: goto label_802D2278;
    case 0x802D227Cu: goto label_802D227C;
    case 0x802D2280u: goto label_802D2280;
    case 0x802D2284u: goto label_802D2284;
    case 0x802D2288u: goto label_802D2288;
    case 0x802D228Cu: goto label_802D228C;
    case 0x802D2290u: goto label_802D2290;
    case 0x802D2294u: goto label_802D2294;
    case 0x802D2298u: goto label_802D2298;
    case 0x802D229Cu: goto label_802D229C;
    case 0x802D22A0u: goto label_802D22A0;
    case 0x802D22A4u: goto label_802D22A4;
    case 0x802D22A8u: goto label_802D22A8;
    case 0x802D22ACu: goto label_802D22AC;
    case 0x802D22B0u: goto label_802D22B0;
    case 0x802D22B4u: goto label_802D22B4;
    case 0x802D22B8u: goto label_802D22B8;
    case 0x802D22BCu: goto label_802D22BC;
    case 0x802D22C0u: goto label_802D22C0;
    case 0x802D22C4u: goto label_802D22C4;
    case 0x802D22C8u: goto label_802D22C8;
    case 0x802D22CCu: goto label_802D22CC;
    case 0x802D22D0u: goto label_802D22D0;
    case 0x802D22D4u: goto label_802D22D4;
    case 0x802D22D8u: goto label_802D22D8;
    case 0x802D22DCu: goto label_802D22DC;
    case 0x802D22E0u: goto label_802D22E0;
    case 0x802D22E4u: goto label_802D22E4;
    case 0x802D22E8u: goto label_802D22E8;
    case 0x802D22ECu: goto label_802D22EC;
    case 0x802D22F0u: goto label_802D22F0;
    case 0x802D22F4u: goto label_802D22F4;
    case 0x802D22F8u: goto label_802D22F8;
    case 0x802D22FCu: goto label_802D22FC;
    case 0x802D2300u: goto label_802D2300;
    case 0x802D2304u: goto label_802D2304;
    case 0x802D2308u: goto label_802D2308;
    case 0x802D230Cu: goto label_802D230C;
    case 0x802D2310u: goto label_802D2310;
    case 0x802D2314u: goto label_802D2314;
    case 0x802D2318u: goto label_802D2318;
    case 0x802D231Cu: goto label_802D231C;
    case 0x802D2320u: goto label_802D2320;
    case 0x802D2324u: goto label_802D2324;
    case 0x802D2328u: goto label_802D2328;
    case 0x802D232Cu: goto label_802D232C;
    case 0x802D2330u: goto label_802D2330;
    case 0x802D2334u: goto label_802D2334;
    case 0x802D2338u: goto label_802D2338;
    case 0x802D233Cu: goto label_802D233C;
    case 0x802D2340u: goto label_802D2340;
    case 0x802D2344u: goto label_802D2344;
    case 0x802D2348u: goto label_802D2348;
    case 0x802D234Cu: goto label_802D234C;
    case 0x802D2350u: goto label_802D2350;
    case 0x802D2354u: goto label_802D2354;
    case 0x802D2358u: goto label_802D2358;
    case 0x802D235Cu: goto label_802D235C;
    case 0x802D2360u: goto label_802D2360;
    case 0x802D2364u: goto label_802D2364;
    case 0x802D2368u: goto label_802D2368;
    case 0x802D236Cu: goto label_802D236C;
    case 0x802D2370u: goto label_802D2370;
    case 0x802D2374u: goto label_802D2374;
    case 0x802D2378u: goto label_802D2378;
    case 0x802D237Cu: goto label_802D237C;
    case 0x802D2380u: goto label_802D2380;
    case 0x802D2384u: goto label_802D2384;
    case 0x802D2388u: goto label_802D2388;
    case 0x802D238Cu: goto label_802D238C;
    case 0x802D2390u: goto label_802D2390;
    case 0x802D2394u: goto label_802D2394;
    case 0x802D2398u: goto label_802D2398;
    case 0x802D239Cu: goto label_802D239C;
    case 0x802D23A0u: goto label_802D23A0;
    case 0x802D23A4u: goto label_802D23A4;
    case 0x802D23A8u: goto label_802D23A8;
    case 0x802D23ACu: goto label_802D23AC;
    case 0x802D23B0u: goto label_802D23B0;
    case 0x802D23B4u: goto label_802D23B4;
    case 0x802D23B8u: goto label_802D23B8;
    case 0x802D23BCu: goto label_802D23BC;
    case 0x802D23C0u: goto label_802D23C0;
    case 0x802D23C4u: goto label_802D23C4;
    case 0x802D23C8u: goto label_802D23C8;
    case 0x802D23CCu: goto label_802D23CC;
    case 0x802D23D0u: goto label_802D23D0;
    case 0x802D23D4u: goto label_802D23D4;
    case 0x802D23D8u: goto label_802D23D8;
    case 0x802D23DCu: goto label_802D23DC;
    case 0x802D23E0u: goto label_802D23E0;
    case 0x802D23E4u: goto label_802D23E4;
    case 0x802D23E8u: goto label_802D23E8;
    case 0x802D23ECu: goto label_802D23EC;
    case 0x802D23F0u: goto label_802D23F0;
    case 0x802D23F4u: goto label_802D23F4;
    case 0x802D23F8u: goto label_802D23F8;
    case 0x802D23FCu: goto label_802D23FC;
    case 0x802D2400u: goto label_802D2400;
    case 0x802D2404u: goto label_802D2404;
    case 0x802D2408u: goto label_802D2408;
    case 0x802D240Cu: goto label_802D240C;
    case 0x802D2410u: goto label_802D2410;
    case 0x802D2414u: goto label_802D2414;
    case 0x802D2418u: goto label_802D2418;
    case 0x802D241Cu: goto label_802D241C;
    case 0x802D2420u: goto label_802D2420;
    case 0x802D2424u: goto label_802D2424;
    case 0x802D2428u: goto label_802D2428;
    case 0x802D242Cu: goto label_802D242C;
    case 0x802D2430u: goto label_802D2430;
    case 0x802D2434u: goto label_802D2434;
    case 0x802D2438u: goto label_802D2438;
    case 0x802D243Cu: goto label_802D243C;
    case 0x802D2440u: goto label_802D2440;
    case 0x802D2444u: goto label_802D2444;
    case 0x802D2448u: goto label_802D2448;
    case 0x802D244Cu: goto label_802D244C;
    case 0x802D2450u: goto label_802D2450;
    case 0x802D2454u: goto label_802D2454;
    case 0x802D2458u: goto label_802D2458;
    case 0x802D245Cu: goto label_802D245C;
    case 0x802D2460u: goto label_802D2460;
    case 0x802D2464u: goto label_802D2464;
    case 0x802D2468u: goto label_802D2468;
    case 0x802D246Cu: goto label_802D246C;
    case 0x802D2470u: goto label_802D2470;
    case 0x802D2474u: goto label_802D2474;
    case 0x802D2478u: goto label_802D2478;
    case 0x802D247Cu: goto label_802D247C;
    case 0x802D2480u: goto label_802D2480;
    case 0x802D2484u: goto label_802D2484;
    case 0x802D2488u: goto label_802D2488;
    case 0x802D248Cu: goto label_802D248C;
    case 0x802D2490u: goto label_802D2490;
    case 0x802D2494u: goto label_802D2494;
    case 0x802D2498u: goto label_802D2498;
    case 0x802D249Cu: goto label_802D249C;
    case 0x802D24A0u: goto label_802D24A0;
    case 0x802D24A4u: goto label_802D24A4;
    case 0x802D24A8u: goto label_802D24A8;
    case 0x802D24ACu: goto label_802D24AC;
    case 0x802D24B0u: goto label_802D24B0;
    case 0x802D24B4u: goto label_802D24B4;
    case 0x802D24B8u: goto label_802D24B8;
    case 0x802D24BCu: goto label_802D24BC;
    case 0x802D24C0u: goto label_802D24C0;
    case 0x802D24C4u: goto label_802D24C4;
    case 0x802D24C8u: goto label_802D24C8;
    case 0x802D24CCu: goto label_802D24CC;
    case 0x802D24D0u: goto label_802D24D0;
    case 0x802D24D4u: goto label_802D24D4;
    case 0x802D24D8u: goto label_802D24D8;
    case 0x802D24DCu: goto label_802D24DC;
    case 0x802D24E0u: goto label_802D24E0;
    case 0x802D24E4u: goto label_802D24E4;
    case 0x802D24E8u: goto label_802D24E8;
    case 0x802D24ECu: goto label_802D24EC;
    case 0x802D24F0u: goto label_802D24F0;
    case 0x802D24F4u: goto label_802D24F4;
    case 0x802D24F8u: goto label_802D24F8;
    case 0x802D24FCu: goto label_802D24FC;
    case 0x802D2500u: goto label_802D2500;
    case 0x802D2504u: goto label_802D2504;
    case 0x802D2508u: goto label_802D2508;
    case 0x802D250Cu: goto label_802D250C;
    case 0x802D2510u: goto label_802D2510;
    case 0x802D2514u: goto label_802D2514;
    case 0x802D2518u: goto label_802D2518;
    case 0x802D251Cu: goto label_802D251C;
    case 0x802D2520u: goto label_802D2520;
    case 0x802D2524u: goto label_802D2524;
    case 0x802D2528u: goto label_802D2528;
    case 0x802D252Cu: goto label_802D252C;
    case 0x802D2530u: goto label_802D2530;
    case 0x802D2534u: goto label_802D2534;
    case 0x802D2538u: goto label_802D2538;
    case 0x802D253Cu: goto label_802D253C;
    case 0x802D2540u: goto label_802D2540;
    case 0x802D2544u: goto label_802D2544;
    case 0x802D2548u: goto label_802D2548;
    case 0x802D254Cu: goto label_802D254C;
    case 0x802D2550u: goto label_802D2550;
    case 0x802D2554u: goto label_802D2554;
    case 0x802D2558u: goto label_802D2558;
    case 0x802D255Cu: goto label_802D255C;
    case 0x802D2560u: goto label_802D2560;
    case 0x802D2564u: goto label_802D2564;
    case 0x802D2568u: goto label_802D2568;
    case 0x802D256Cu: goto label_802D256C;
    case 0x802D2570u: goto label_802D2570;
    case 0x802D2574u: goto label_802D2574;
    case 0x802D2578u: goto label_802D2578;
    case 0x802D257Cu: goto label_802D257C;
    case 0x802D2580u: goto label_802D2580;
    case 0x802D2584u: goto label_802D2584;
    case 0x802D2588u: goto label_802D2588;
    case 0x802D258Cu: goto label_802D258C;
    case 0x802D2590u: goto label_802D2590;
    case 0x802D2594u: goto label_802D2594;
    case 0x802D2598u: goto label_802D2598;
    case 0x802D259Cu: goto label_802D259C;
    case 0x802D25A0u: goto label_802D25A0;
    case 0x802D25A4u: goto label_802D25A4;
    case 0x802D25A8u: goto label_802D25A8;
    case 0x802D25ACu: goto label_802D25AC;
    case 0x802D25B0u: goto label_802D25B0;
    case 0x802D25B4u: goto label_802D25B4;
    case 0x802D25B8u: goto label_802D25B8;
    case 0x802D25BCu: goto label_802D25BC;
    case 0x802D25C0u: goto label_802D25C0;
    case 0x802D25C4u: goto label_802D25C4;
    case 0x802D25C8u: goto label_802D25C8;
    case 0x802D25CCu: goto label_802D25CC;
    case 0x802D25D0u: goto label_802D25D0;
    case 0x802D25D4u: goto label_802D25D4;
    case 0x802D25D8u: goto label_802D25D8;
    case 0x802D25DCu: goto label_802D25DC;
    case 0x802D25E0u: goto label_802D25E0;
    case 0x802D25E4u: goto label_802D25E4;
    case 0x802D25E8u: goto label_802D25E8;
    case 0x802D25ECu: goto label_802D25EC;
    case 0x802D25F0u: goto label_802D25F0;
    case 0x802D25F4u: goto label_802D25F4;
    case 0x802D25F8u: goto label_802D25F8;
    case 0x802D25FCu: goto label_802D25FC;
    case 0x802D2600u: goto label_802D2600;
    case 0x802D2604u: goto label_802D2604;
    case 0x802D2608u: goto label_802D2608;
    case 0x802D260Cu: goto label_802D260C;
    case 0x802D2610u: goto label_802D2610;
    case 0x802D2614u: goto label_802D2614;
    case 0x802D2618u: goto label_802D2618;
    case 0x802D261Cu: goto label_802D261C;
    case 0x802D2620u: goto label_802D2620;
    case 0x802D2624u: goto label_802D2624;
    case 0x802D2628u: goto label_802D2628;
    case 0x802D262Cu: goto label_802D262C;
    case 0x802D2630u: goto label_802D2630;
    case 0x802D2634u: goto label_802D2634;
    case 0x802D2638u: goto label_802D2638;
    case 0x802D263Cu: goto label_802D263C;
    case 0x802D2640u: goto label_802D2640;
    case 0x802D2644u: goto label_802D2644;
    case 0x802D2648u: goto label_802D2648;
    case 0x802D264Cu: goto label_802D264C;
    case 0x802D2650u: goto label_802D2650;
    case 0x802D2654u: goto label_802D2654;
    case 0x802D2658u: goto label_802D2658;
    case 0x802D265Cu: goto label_802D265C;
    case 0x802D2660u: goto label_802D2660;
    case 0x802D2664u: goto label_802D2664;
    case 0x802D2668u: goto label_802D2668;
    case 0x802D266Cu: goto label_802D266C;
    case 0x802D2670u: goto label_802D2670;
    case 0x802D2674u: goto label_802D2674;
    case 0x802D2678u: goto label_802D2678;
    case 0x802D267Cu: goto label_802D267C;
    case 0x802D2680u: goto label_802D2680;
    case 0x802D2684u: goto label_802D2684;
    case 0x802D2688u: goto label_802D2688;
    case 0x802D268Cu: goto label_802D268C;
    case 0x802D2690u: goto label_802D2690;
    case 0x802D2694u: goto label_802D2694;
    case 0x802D2698u: goto label_802D2698;
    case 0x802D269Cu: goto label_802D269C;
    case 0x802D26A0u: goto label_802D26A0;
    case 0x802D26A4u: goto label_802D26A4;
    case 0x802D26A8u: goto label_802D26A8;
    case 0x802D26ACu: goto label_802D26AC;
    case 0x802D26B0u: goto label_802D26B0;
    case 0x802D26B4u: goto label_802D26B4;
    case 0x802D26B8u: goto label_802D26B8;
    case 0x802D26BCu: goto label_802D26BC;
    case 0x802D26C0u: goto label_802D26C0;
    case 0x802D26C4u: goto label_802D26C4;
    case 0x802D26C8u: goto label_802D26C8;
    case 0x802D26CCu: goto label_802D26CC;
    case 0x802D26D0u: goto label_802D26D0;
    case 0x802D26D4u: goto label_802D26D4;
    case 0x802D26D8u: goto label_802D26D8;
    case 0x802D26DCu: goto label_802D26DC;
    case 0x802D26E0u: goto label_802D26E0;
    case 0x802D26E4u: goto label_802D26E4;
    case 0x802D26E8u: goto label_802D26E8;
    case 0x802D26ECu: goto label_802D26EC;
    case 0x802D26F0u: goto label_802D26F0;
    case 0x802D26F4u: goto label_802D26F4;
    case 0x802D26F8u: goto label_802D26F8;
    case 0x802D26FCu: goto label_802D26FC;
    case 0x802D2700u: goto label_802D2700;
    case 0x802D2704u: goto label_802D2704;
    case 0x802D2708u: goto label_802D2708;
    case 0x802D270Cu: goto label_802D270C;
    case 0x802D2710u: goto label_802D2710;
    case 0x802D2714u: goto label_802D2714;
    case 0x802D2718u: goto label_802D2718;
    case 0x802D271Cu: goto label_802D271C;
    case 0x802D2720u: goto label_802D2720;
    case 0x802D2724u: goto label_802D2724;
    case 0x802D2728u: goto label_802D2728;
    case 0x802D272Cu: goto label_802D272C;
    case 0x802D2730u: goto label_802D2730;
    case 0x802D2734u: goto label_802D2734;
    case 0x802D2738u: goto label_802D2738;
    case 0x802D273Cu: goto label_802D273C;
    case 0x802D2740u: goto label_802D2740;
    case 0x802D2744u: goto label_802D2744;
    case 0x802D2748u: goto label_802D2748;
    case 0x802D274Cu: goto label_802D274C;
    case 0x802D2750u: goto label_802D2750;
    case 0x802D2754u: goto label_802D2754;
    case 0x802D2758u: goto label_802D2758;
    case 0x802D275Cu: goto label_802D275C;
    case 0x802D2760u: goto label_802D2760;
    case 0x802D2764u: goto label_802D2764;
    case 0x802D2768u: goto label_802D2768;
    case 0x802D276Cu: goto label_802D276C;
    case 0x802D2770u: goto label_802D2770;
    case 0x802D2774u: goto label_802D2774;
    case 0x802D2778u: goto label_802D2778;
    case 0x802D277Cu: goto label_802D277C;
    case 0x802D2780u: goto label_802D2780;
    case 0x802D2784u: goto label_802D2784;
    case 0x802D2788u: goto label_802D2788;
    case 0x802D278Cu: goto label_802D278C;
    case 0x802D2790u: goto label_802D2790;
    case 0x802D2794u: goto label_802D2794;
    case 0x802D2798u: goto label_802D2798;
    case 0x802D279Cu: goto label_802D279C;
    case 0x802D27A0u: goto label_802D27A0;
    case 0x802D27A4u: goto label_802D27A4;
    case 0x802D27A8u: goto label_802D27A8;
    case 0x802D27ACu: goto label_802D27AC;
    case 0x802D27B0u: goto label_802D27B0;
    case 0x802D27B4u: goto label_802D27B4;
    case 0x802D27B8u: goto label_802D27B8;
    case 0x802D27BCu: goto label_802D27BC;
    case 0x802D27C0u: goto label_802D27C0;
    case 0x802D27C4u: goto label_802D27C4;
    case 0x802D27C8u: goto label_802D27C8;
    case 0x802D27CCu: goto label_802D27CC;
    case 0x802D27D0u: goto label_802D27D0;
    case 0x802D27D4u: goto label_802D27D4;
    case 0x802D27D8u: goto label_802D27D8;
    case 0x802D27DCu: goto label_802D27DC;
    case 0x802D27E0u: goto label_802D27E0;
    case 0x802D27E4u: goto label_802D27E4;
    case 0x802D27E8u: goto label_802D27E8;
    case 0x802D27ECu: goto label_802D27EC;
    case 0x802D27F0u: goto label_802D27F0;
    case 0x802D27F4u: goto label_802D27F4;
    case 0x802D27F8u: goto label_802D27F8;
    case 0x802D27FCu: goto label_802D27FC;
    case 0x802D2800u: goto label_802D2800;
    case 0x802D2804u: goto label_802D2804;
    case 0x802D2808u: goto label_802D2808;
    case 0x802D280Cu: goto label_802D280C;
    case 0x802D2810u: goto label_802D2810;
    case 0x802D2814u: goto label_802D2814;
    case 0x802D2818u: goto label_802D2818;
    case 0x802D281Cu: goto label_802D281C;
    case 0x802D2820u: goto label_802D2820;
    case 0x802D2824u: goto label_802D2824;
    case 0x802D2828u: goto label_802D2828;
    case 0x802D282Cu: goto label_802D282C;
    case 0x802D2830u: goto label_802D2830;
    case 0x802D2834u: goto label_802D2834;
    case 0x802D2838u: goto label_802D2838;
    case 0x802D283Cu: goto label_802D283C;
    case 0x802D2840u: goto label_802D2840;
    case 0x802D2844u: goto label_802D2844;
    case 0x802D2848u: goto label_802D2848;
    case 0x802D284Cu: goto label_802D284C;
    case 0x802D2850u: goto label_802D2850;
    case 0x802D2854u: goto label_802D2854;
    case 0x802D2858u: goto label_802D2858;
    case 0x802D285Cu: goto label_802D285C;
    case 0x802D2860u: goto label_802D2860;
    case 0x802D2864u: goto label_802D2864;
    case 0x802D2868u: goto label_802D2868;
    case 0x802D286Cu: goto label_802D286C;
    case 0x802D2870u: goto label_802D2870;
    case 0x802D2874u: goto label_802D2874;
    case 0x802D2878u: goto label_802D2878;
    case 0x802D287Cu: goto label_802D287C;
    case 0x802D2880u: goto label_802D2880;
    case 0x802D2884u: goto label_802D2884;
    case 0x802D2888u: goto label_802D2888;
    case 0x802D288Cu: goto label_802D288C;
    case 0x802D2890u: goto label_802D2890;
    case 0x802D2894u: goto label_802D2894;
    case 0x802D2898u: goto label_802D2898;
    case 0x802D289Cu: goto label_802D289C;
    case 0x802D28A0u: goto label_802D28A0;
    case 0x802D28A4u: goto label_802D28A4;
    case 0x802D28A8u: goto label_802D28A8;
    case 0x802D28ACu: goto label_802D28AC;
    case 0x802D28B0u: goto label_802D28B0;
    case 0x802D28B4u: goto label_802D28B4;
    case 0x802D28B8u: goto label_802D28B8;
    case 0x802D28BCu: goto label_802D28BC;
    case 0x802D28C0u: goto label_802D28C0;
    case 0x802D28C4u: goto label_802D28C4;
    case 0x802D28C8u: goto label_802D28C8;
    case 0x802D28CCu: goto label_802D28CC;
    case 0x802D28D0u: goto label_802D28D0;
    case 0x802D28D4u: goto label_802D28D4;
    case 0x802D28D8u: goto label_802D28D8;
    case 0x802D28DCu: goto label_802D28DC;
    case 0x802D28E0u: goto label_802D28E0;
    case 0x802D28E4u: goto label_802D28E4;
    case 0x802D28E8u: goto label_802D28E8;
    case 0x802D28ECu: goto label_802D28EC;
    case 0x802D28F0u: goto label_802D28F0;
    case 0x802D28F4u: goto label_802D28F4;
    case 0x802D28F8u: goto label_802D28F8;
    case 0x802D28FCu: goto label_802D28FC;
    case 0x802D2900u: goto label_802D2900;
    case 0x802D2904u: goto label_802D2904;
    case 0x802D2908u: goto label_802D2908;
    case 0x802D290Cu: goto label_802D290C;
    case 0x802D2910u: goto label_802D2910;
    case 0x802D2914u: goto label_802D2914;
    case 0x802D2918u: goto label_802D2918;
    case 0x802D291Cu: goto label_802D291C;
    case 0x802D2920u: goto label_802D2920;
    case 0x802D2924u: goto label_802D2924;
    case 0x802D2928u: goto label_802D2928;
    case 0x802D292Cu: goto label_802D292C;
    case 0x802D2930u: goto label_802D2930;
    case 0x802D2934u: goto label_802D2934;
    case 0x802D2938u: goto label_802D2938;
    case 0x802D293Cu: goto label_802D293C;
    case 0x802D2940u: goto label_802D2940;
    case 0x802D2944u: goto label_802D2944;
    case 0x802D2948u: goto label_802D2948;
    case 0x802D294Cu: goto label_802D294C;
    case 0x802D2950u: goto label_802D2950;
    case 0x802D2954u: goto label_802D2954;
    case 0x802D2958u: goto label_802D2958;
    case 0x802D295Cu: goto label_802D295C;
    case 0x802D2960u: goto label_802D2960;
    case 0x802D2964u: goto label_802D2964;
    case 0x802D2968u: goto label_802D2968;
    case 0x802D296Cu: goto label_802D296C;
    case 0x802D2970u: goto label_802D2970;
    case 0x802D2974u: goto label_802D2974;
    case 0x802D2978u: goto label_802D2978;
    case 0x802D297Cu: goto label_802D297C;
    case 0x802D2980u: goto label_802D2980;
    case 0x802D2984u: goto label_802D2984;
    case 0x802D2988u: goto label_802D2988;
    case 0x802D298Cu: goto label_802D298C;
    case 0x802D2990u: goto label_802D2990;
    case 0x802D2994u: goto label_802D2994;
    case 0x802D2998u: goto label_802D2998;
    case 0x802D299Cu: goto label_802D299C;
    case 0x802D29A0u: goto label_802D29A0;
    case 0x802D29A4u: goto label_802D29A4;
    case 0x802D29A8u: goto label_802D29A8;
    case 0x802D29ACu: goto label_802D29AC;
    case 0x802D29B0u: goto label_802D29B0;
    case 0x802D29B4u: goto label_802D29B4;
    case 0x802D29B8u: goto label_802D29B8;
    case 0x802D29BCu: goto label_802D29BC;
    case 0x802D29C0u: goto label_802D29C0;
    case 0x802D29C4u: goto label_802D29C4;
    case 0x802D29C8u: goto label_802D29C8;
    case 0x802D29CCu: goto label_802D29CC;
    case 0x802D29D0u: goto label_802D29D0;
    case 0x802D29D4u: goto label_802D29D4;
    case 0x802D29D8u: goto label_802D29D8;
    case 0x802D29DCu: goto label_802D29DC;
    case 0x802D29E0u: goto label_802D29E0;
    case 0x802D29E4u: goto label_802D29E4;
    case 0x802D29E8u: goto label_802D29E8;
    case 0x802D29ECu: goto label_802D29EC;
    case 0x802D29F0u: goto label_802D29F0;
    case 0x802D29F4u: goto label_802D29F4;
    case 0x802D29F8u: goto label_802D29F8;
    case 0x802D29FCu: goto label_802D29FC;
    case 0x802D2A00u: goto label_802D2A00;
    case 0x802D2A04u: goto label_802D2A04;
    case 0x802D2A08u: goto label_802D2A08;
    case 0x802D2A0Cu: goto label_802D2A0C;
    case 0x802D2A10u: goto label_802D2A10;
    case 0x802D2A14u: goto label_802D2A14;
    case 0x802D2A18u: goto label_802D2A18;
    case 0x802D2A1Cu: goto label_802D2A1C;
    case 0x802D2A20u: goto label_802D2A20;
    case 0x802D2A24u: goto label_802D2A24;
    case 0x802D2A28u: goto label_802D2A28;
    case 0x802D2A2Cu: goto label_802D2A2C;
    case 0x802D2A30u: goto label_802D2A30;
    case 0x802D2A34u: goto label_802D2A34;
    case 0x802D2A38u: goto label_802D2A38;
    case 0x802D2A3Cu: goto label_802D2A3C;
    case 0x802D2A40u: goto label_802D2A40;
    case 0x802D2A44u: goto label_802D2A44;
    case 0x802D2A48u: goto label_802D2A48;
    case 0x802D2A4Cu: goto label_802D2A4C;
    case 0x802D2A50u: goto label_802D2A50;
    case 0x802D2A54u: goto label_802D2A54;
    case 0x802D2A58u: goto label_802D2A58;
    case 0x802D2A5Cu: goto label_802D2A5C;
    case 0x802D2A60u: goto label_802D2A60;
    case 0x802D2A64u: goto label_802D2A64;
    case 0x802D2A68u: goto label_802D2A68;
    case 0x802D2A6Cu: goto label_802D2A6C;
    case 0x802D2A70u: goto label_802D2A70;
    case 0x802D2A74u: goto label_802D2A74;
    case 0x802D2A78u: goto label_802D2A78;
    case 0x802D2A7Cu: goto label_802D2A7C;
    case 0x802D2A80u: goto label_802D2A80;
    case 0x802D2A84u: goto label_802D2A84;
    case 0x802D2A88u: goto label_802D2A88;
    case 0x802D2A8Cu: goto label_802D2A8C;
    case 0x802D2A90u: goto label_802D2A90;
    case 0x802D2A94u: goto label_802D2A94;
    case 0x802D2A98u: goto label_802D2A98;
    case 0x802D2A9Cu: goto label_802D2A9C;
    case 0x802D2AA0u: goto label_802D2AA0;
    case 0x802D2AA4u: goto label_802D2AA4;
    case 0x802D2AA8u: goto label_802D2AA8;
    case 0x802D2AACu: goto label_802D2AAC;
    case 0x802D2AB0u: goto label_802D2AB0;
    case 0x802D2AB4u: goto label_802D2AB4;
    case 0x802D2AB8u: goto label_802D2AB8;
    case 0x802D2ABCu: goto label_802D2ABC;
    case 0x802D2AC0u: goto label_802D2AC0;
    case 0x802D2AC4u: goto label_802D2AC4;
    case 0x802D2AC8u: goto label_802D2AC8;
    case 0x802D2ACCu: goto label_802D2ACC;
    case 0x802D2AD0u: goto label_802D2AD0;
    case 0x802D2AD4u: goto label_802D2AD4;
    case 0x802D2AD8u: goto label_802D2AD8;
    case 0x802D2ADCu: goto label_802D2ADC;
    case 0x802D2AE0u: goto label_802D2AE0;
    case 0x802D2AE4u: goto label_802D2AE4;
    case 0x802D2AE8u: goto label_802D2AE8;
    case 0x802D2AECu: goto label_802D2AEC;
    case 0x802D2AF0u: goto label_802D2AF0;
    case 0x802D2AF4u: goto label_802D2AF4;
    case 0x802D2AF8u: goto label_802D2AF8;
    case 0x802D2AFCu: goto label_802D2AFC;
    case 0x802D2B00u: goto label_802D2B00;
    case 0x802D2B04u: goto label_802D2B04;
    case 0x802D2B08u: goto label_802D2B08;
    case 0x802D2B0Cu: goto label_802D2B0C;
    case 0x802D2B10u: goto label_802D2B10;
    case 0x802D2B14u: goto label_802D2B14;
    case 0x802D2B18u: goto label_802D2B18;
    case 0x802D2B1Cu: goto label_802D2B1C;
    case 0x802D2B20u: goto label_802D2B20;
    case 0x802D2B24u: goto label_802D2B24;
    case 0x802D2B28u: goto label_802D2B28;
    case 0x802D2B2Cu: goto label_802D2B2C;
    case 0x802D2B30u: goto label_802D2B30;
    case 0x802D2B34u: goto label_802D2B34;
    case 0x802D2B38u: goto label_802D2B38;
    case 0x802D2B3Cu: goto label_802D2B3C;
    case 0x802D2B40u: goto label_802D2B40;
    case 0x802D2B44u: goto label_802D2B44;
    case 0x802D2B48u: goto label_802D2B48;
    case 0x802D2B4Cu: goto label_802D2B4C;
    case 0x802D2B50u: goto label_802D2B50;
    case 0x802D2B54u: goto label_802D2B54;
    case 0x802D2B58u: goto label_802D2B58;
    case 0x802D2B5Cu: goto label_802D2B5C;
    case 0x802D2B60u: goto label_802D2B60;
    case 0x802D2B64u: goto label_802D2B64;
    case 0x802D2B68u: goto label_802D2B68;
    case 0x802D2B6Cu: goto label_802D2B6C;
    case 0x802D2B70u: goto label_802D2B70;
    case 0x802D2B74u: goto label_802D2B74;
    case 0x802D2B78u: goto label_802D2B78;
    case 0x802D2B7Cu: goto label_802D2B7C;
    case 0x802D2B80u: goto label_802D2B80;
    case 0x802D2B84u: goto label_802D2B84;
    case 0x802D2B88u: goto label_802D2B88;
    case 0x802D2B8Cu: goto label_802D2B8C;
    case 0x802D2B90u: goto label_802D2B90;
    case 0x802D2B94u: goto label_802D2B94;
    case 0x802D2B98u: goto label_802D2B98;
    case 0x802D2B9Cu: goto label_802D2B9C;
    case 0x802D2BA0u: goto label_802D2BA0;
    case 0x802D2BA4u: goto label_802D2BA4;
    case 0x802D2BA8u: goto label_802D2BA8;
    case 0x802D2BACu: goto label_802D2BAC;
    case 0x802D2BB0u: goto label_802D2BB0;
    case 0x802D2BB4u: goto label_802D2BB4;
    case 0x802D2BB8u: goto label_802D2BB8;
    case 0x802D2BBCu: goto label_802D2BBC;
    case 0x802D2BC0u: goto label_802D2BC0;
    case 0x802D2BC4u: goto label_802D2BC4;
    case 0x802D2BC8u: goto label_802D2BC8;
    case 0x802D2BCCu: goto label_802D2BCC;
    case 0x802D2BD0u: goto label_802D2BD0;
    case 0x802D2BD4u: goto label_802D2BD4;
    case 0x802D2BD8u: goto label_802D2BD8;
    case 0x802D2BDCu: goto label_802D2BDC;
    case 0x802D2BE0u: goto label_802D2BE0;
    case 0x802D2BE4u: goto label_802D2BE4;
    case 0x802D2BE8u: goto label_802D2BE8;
    case 0x802D2BECu: goto label_802D2BEC;
    case 0x802D2BF0u: goto label_802D2BF0;
    case 0x802D2BF4u: goto label_802D2BF4;
    case 0x802D2BF8u: goto label_802D2BF8;
    case 0x802D2BFCu: goto label_802D2BFC;
    case 0x802D2C00u: goto label_802D2C00;
    case 0x802D2C04u: goto label_802D2C04;
    case 0x802D2C08u: goto label_802D2C08;
    case 0x802D2C0Cu: goto label_802D2C0C;
    case 0x802D2C10u: goto label_802D2C10;
    case 0x802D2C14u: goto label_802D2C14;
    case 0x802D2C18u: goto label_802D2C18;
    case 0x802D2C1Cu: goto label_802D2C1C;
    case 0x802D2C20u: goto label_802D2C20;
    case 0x802D2C24u: goto label_802D2C24;
    case 0x802D2C28u: goto label_802D2C28;
    case 0x802D2C2Cu: goto label_802D2C2C;
    case 0x802D2C30u: goto label_802D2C30;
    case 0x802D2C34u: goto label_802D2C34;
    case 0x802D2C38u: goto label_802D2C38;
    case 0x802D2C3Cu: goto label_802D2C3C;
    case 0x802D2C40u: goto label_802D2C40;
    case 0x802D2C44u: goto label_802D2C44;
    case 0x802D2C48u: goto label_802D2C48;
    case 0x802D2C4Cu: goto label_802D2C4C;
    case 0x802D2C50u: goto label_802D2C50;
    case 0x802D2C54u: goto label_802D2C54;
    case 0x802D2C58u: goto label_802D2C58;
    case 0x802D2C5Cu: goto label_802D2C5C;
    case 0x802D2C60u: goto label_802D2C60;
    case 0x802D2C64u: goto label_802D2C64;
    case 0x802D2C68u: goto label_802D2C68;
    case 0x802D2C6Cu: goto label_802D2C6C;
    case 0x802D2C70u: goto label_802D2C70;
    case 0x802D2C74u: goto label_802D2C74;
    case 0x802D2C78u: goto label_802D2C78;
    case 0x802D2C7Cu: goto label_802D2C7C;
    case 0x802D2C80u: goto label_802D2C80;
    case 0x802D2C84u: goto label_802D2C84;
    case 0x802D2C88u: goto label_802D2C88;
    case 0x802D2C8Cu: goto label_802D2C8C;
    case 0x802D2C90u: goto label_802D2C90;
    case 0x802D2C94u: goto label_802D2C94;
    case 0x802D2C98u: goto label_802D2C98;
    case 0x802D2C9Cu: goto label_802D2C9C;
    case 0x802D2CA0u: goto label_802D2CA0;
    case 0x802D2CA4u: goto label_802D2CA4;
    case 0x802D2CA8u: goto label_802D2CA8;
    case 0x802D2CACu: goto label_802D2CAC;
    case 0x802D2CB0u: goto label_802D2CB0;
    case 0x802D2CB4u: goto label_802D2CB4;
    case 0x802D2CB8u: goto label_802D2CB8;
    case 0x802D2CBCu: goto label_802D2CBC;
    case 0x802D2CC0u: goto label_802D2CC0;
    case 0x802D2CC4u: goto label_802D2CC4;
    case 0x802D2CC8u: goto label_802D2CC8;
    case 0x802D2CCCu: goto label_802D2CCC;
    case 0x802D2CD0u: goto label_802D2CD0;
    case 0x802D2CD4u: goto label_802D2CD4;
    case 0x802D2CD8u: goto label_802D2CD8;
    case 0x802D2CDCu: goto label_802D2CDC;
    case 0x802D2CE0u: goto label_802D2CE0;
    case 0x802D2CE4u: goto label_802D2CE4;
    case 0x802D2CE8u: goto label_802D2CE8;
    case 0x802D2CECu: goto label_802D2CEC;
    case 0x802D2CF0u: goto label_802D2CF0;
    case 0x802D2CF4u: goto label_802D2CF4;
    case 0x802D2CF8u: goto label_802D2CF8;
    case 0x802D2CFCu: goto label_802D2CFC;
    case 0x802D2D00u: goto label_802D2D00;
    case 0x802D2D04u: goto label_802D2D04;
    case 0x802D2D08u: goto label_802D2D08;
    case 0x802D2D0Cu: goto label_802D2D0C;
    case 0x802D2D10u: goto label_802D2D10;
    case 0x802D2D14u: goto label_802D2D14;
    case 0x802D2D18u: goto label_802D2D18;
    case 0x802D2D1Cu: goto label_802D2D1C;
    case 0x802D2D20u: goto label_802D2D20;
    case 0x802D2D24u: goto label_802D2D24;
    case 0x802D2D28u: goto label_802D2D28;
    case 0x802D2D2Cu: goto label_802D2D2C;
    case 0x802D2D30u: goto label_802D2D30;
    case 0x802D2D34u: goto label_802D2D34;
    case 0x802D2D38u: goto label_802D2D38;
    case 0x802D2D3Cu: goto label_802D2D3C;
    case 0x802D2D40u: goto label_802D2D40;
    case 0x802D2D44u: goto label_802D2D44;
    case 0x802D2D48u: goto label_802D2D48;
    case 0x802D2D4Cu: goto label_802D2D4C;
    case 0x802D2D50u: goto label_802D2D50;
    case 0x802D2D54u: goto label_802D2D54;
    case 0x802D2D58u: goto label_802D2D58;
    case 0x802D2D5Cu: goto label_802D2D5C;
    case 0x802D2D60u: goto label_802D2D60;
    case 0x802D2D64u: goto label_802D2D64;
    case 0x802D2D68u: goto label_802D2D68;
    case 0x802D2D6Cu: goto label_802D2D6C;
    case 0x802D2D70u: goto label_802D2D70;
    case 0x802D2D74u: goto label_802D2D74;
    case 0x802D2D78u: goto label_802D2D78;
    case 0x802D2D7Cu: goto label_802D2D7C;
    case 0x802D2D80u: goto label_802D2D80;
    case 0x802D2D84u: goto label_802D2D84;
    case 0x802D2D88u: goto label_802D2D88;
    case 0x802D2D8Cu: goto label_802D2D8C;
    case 0x802D2D90u: goto label_802D2D90;
    case 0x802D2D94u: goto label_802D2D94;
    case 0x802D2D98u: goto label_802D2D98;
    case 0x802D2D9Cu: goto label_802D2D9C;
    case 0x802D2DA0u: goto label_802D2DA0;
    case 0x802D2DA4u: goto label_802D2DA4;
    case 0x802D2DA8u: goto label_802D2DA8;
    case 0x802D2DACu: goto label_802D2DAC;
    case 0x802D2DB0u: goto label_802D2DB0;
    case 0x802D2DB4u: goto label_802D2DB4;
    case 0x802D2DB8u: goto label_802D2DB8;
    case 0x802D2DBCu: goto label_802D2DBC;
    case 0x802D2DC0u: goto label_802D2DC0;
    case 0x802D2DC4u: goto label_802D2DC4;
    case 0x802D2DC8u: goto label_802D2DC8;
    case 0x802D2DCCu: goto label_802D2DCC;
    case 0x802D2DD0u: goto label_802D2DD0;
    case 0x802D2DD4u: goto label_802D2DD4;
    case 0x802D2DD8u: goto label_802D2DD8;
    case 0x802D2DDCu: goto label_802D2DDC;
    case 0x802D2DE0u: goto label_802D2DE0;
    case 0x802D2DE4u: goto label_802D2DE4;
    case 0x802D2DE8u: goto label_802D2DE8;
    case 0x802D2DECu: goto label_802D2DEC;
    case 0x802D2DF0u: goto label_802D2DF0;
    case 0x802D2DF4u: goto label_802D2DF4;
    case 0x802D2DF8u: goto label_802D2DF8;
    case 0x802D2DFCu: goto label_802D2DFC;
    case 0x802D2E00u: goto label_802D2E00;
    case 0x802D2E04u: goto label_802D2E04;
    case 0x802D2E08u: goto label_802D2E08;
    case 0x802D2E0Cu: goto label_802D2E0C;
    case 0x802D2E10u: goto label_802D2E10;
    case 0x802D2E14u: goto label_802D2E14;
    case 0x802D2E18u: goto label_802D2E18;
    case 0x802D2E1Cu: goto label_802D2E1C;
    case 0x802D2E20u: goto label_802D2E20;
    case 0x802D2E24u: goto label_802D2E24;
    case 0x802D2E28u: goto label_802D2E28;
    case 0x802D2E2Cu: goto label_802D2E2C;
    case 0x802D2E30u: goto label_802D2E30;
    case 0x802D2E34u: goto label_802D2E34;
    case 0x802D2E38u: goto label_802D2E38;
    case 0x802D2E3Cu: goto label_802D2E3C;
    case 0x802D2E40u: goto label_802D2E40;
    case 0x802D2E44u: goto label_802D2E44;
    case 0x802D2E48u: goto label_802D2E48;
    case 0x802D2E4Cu: goto label_802D2E4C;
    case 0x802D2E50u: goto label_802D2E50;
    case 0x802D2E54u: goto label_802D2E54;
    case 0x802D2E58u: goto label_802D2E58;
    case 0x802D2E5Cu: goto label_802D2E5C;
    case 0x802D2E60u: goto label_802D2E60;
    case 0x802D2E64u: goto label_802D2E64;
    case 0x802D2E68u: goto label_802D2E68;
    case 0x802D2E6Cu: goto label_802D2E6C;
    case 0x802D2E70u: goto label_802D2E70;
    case 0x802D2E74u: goto label_802D2E74;
    case 0x802D2E78u: goto label_802D2E78;
    case 0x802D2E7Cu: goto label_802D2E7C;
    case 0x802D2E80u: goto label_802D2E80;
    case 0x802D2E84u: goto label_802D2E84;
    case 0x802D2E88u: goto label_802D2E88;
    case 0x802D2E8Cu: goto label_802D2E8C;
    case 0x802D2E90u: goto label_802D2E90;
    case 0x802D2E94u: goto label_802D2E94;
    case 0x802D2E98u: goto label_802D2E98;
    case 0x802D2E9Cu: goto label_802D2E9C;
    case 0x802D2EA0u: goto label_802D2EA0;
    case 0x802D2EA4u: goto label_802D2EA4;
    case 0x802D2EA8u: goto label_802D2EA8;
    case 0x802D2EACu: goto label_802D2EAC;
    case 0x802D2EB0u: goto label_802D2EB0;
    case 0x802D2EB4u: goto label_802D2EB4;
    case 0x802D2EB8u: goto label_802D2EB8;
    case 0x802D2EBCu: goto label_802D2EBC;
    case 0x802D2EC0u: goto label_802D2EC0;
    case 0x802D2EC4u: goto label_802D2EC4;
    case 0x802D2EC8u: goto label_802D2EC8;
    case 0x802D2ECCu: goto label_802D2ECC;
    case 0x802D2ED0u: goto label_802D2ED0;
    case 0x802D2ED4u: goto label_802D2ED4;
    case 0x802D2ED8u: goto label_802D2ED8;
    case 0x802D2EDCu: goto label_802D2EDC;
    case 0x802D2EE0u: goto label_802D2EE0;
    case 0x802D2EE4u: goto label_802D2EE4;
    case 0x802D2EE8u: goto label_802D2EE8;
    case 0x802D2EECu: goto label_802D2EEC;
    case 0x802D2EF0u: goto label_802D2EF0;
    case 0x802D2EF4u: goto label_802D2EF4;
    case 0x802D2EF8u: goto label_802D2EF8;
    case 0x802D2EFCu: goto label_802D2EFC;
    case 0x802D2F00u: goto label_802D2F00;
    case 0x802D2F04u: goto label_802D2F04;
    case 0x802D2F08u: goto label_802D2F08;
    case 0x802D2F0Cu: goto label_802D2F0C;
    case 0x802D2F10u: goto label_802D2F10;
    case 0x802D2F14u: goto label_802D2F14;
    case 0x802D2F18u: goto label_802D2F18;
    case 0x802D2F1Cu: goto label_802D2F1C;
    case 0x802D2F20u: goto label_802D2F20;
    case 0x802D2F24u: goto label_802D2F24;
    case 0x802D2F28u: goto label_802D2F28;
    case 0x802D2F2Cu: goto label_802D2F2C;
    case 0x802D2F30u: goto label_802D2F30;
    case 0x802D2F34u: goto label_802D2F34;
    case 0x802D2F38u: goto label_802D2F38;
    case 0x802D2F3Cu: goto label_802D2F3C;
    case 0x802D2F40u: goto label_802D2F40;
    case 0x802D2F44u: goto label_802D2F44;
    case 0x802D2F48u: goto label_802D2F48;
    case 0x802D2F4Cu: goto label_802D2F4C;
    case 0x802D2F50u: goto label_802D2F50;
    case 0x802D2F54u: goto label_802D2F54;
    case 0x802D2F58u: goto label_802D2F58;
    case 0x802D2F5Cu: goto label_802D2F5C;
    case 0x802D2F60u: goto label_802D2F60;
    case 0x802D2F64u: goto label_802D2F64;
    case 0x802D2F68u: goto label_802D2F68;
    case 0x802D2F6Cu: goto label_802D2F6C;
    case 0x802D2F70u: goto label_802D2F70;
    case 0x802D2F74u: goto label_802D2F74;
    case 0x802D2F78u: goto label_802D2F78;
    case 0x802D2F7Cu: goto label_802D2F7C;
    case 0x802D2F80u: goto label_802D2F80;
    case 0x802D2F84u: goto label_802D2F84;
    case 0x802D2F88u: goto label_802D2F88;
    case 0x802D2F8Cu: goto label_802D2F8C;
    case 0x802D2F90u: goto label_802D2F90;
    case 0x802D2F94u: goto label_802D2F94;
    case 0x802D2F98u: goto label_802D2F98;
    case 0x802D2F9Cu: goto label_802D2F9C;
    case 0x802D2FA0u: goto label_802D2FA0;
    case 0x802D2FA4u: goto label_802D2FA4;
    case 0x802D2FA8u: goto label_802D2FA8;
    case 0x802D2FACu: goto label_802D2FAC;
    case 0x802D2FB0u: goto label_802D2FB0;
    case 0x802D2FB4u: goto label_802D2FB4;
    case 0x802D2FB8u: goto label_802D2FB8;
    case 0x802D2FBCu: goto label_802D2FBC;
    case 0x802D2FC0u: goto label_802D2FC0;
    case 0x802D2FC4u: goto label_802D2FC4;
    case 0x802D2FC8u: goto label_802D2FC8;
    case 0x802D2FCCu: goto label_802D2FCC;
    case 0x802D2FD0u: goto label_802D2FD0;
    case 0x802D2FD4u: goto label_802D2FD4;
    case 0x802D2FD8u: goto label_802D2FD8;
    case 0x802D2FDCu: goto label_802D2FDC;
    case 0x802D2FE0u: goto label_802D2FE0;
    case 0x802D2FE4u: goto label_802D2FE4;
    case 0x802D2FE8u: goto label_802D2FE8;
    case 0x802D2FECu: goto label_802D2FEC;
    case 0x802D2FF0u: goto label_802D2FF0;
    case 0x802D2FF4u: goto label_802D2FF4;
    case 0x802D2FF8u: goto label_802D2FF8;
    case 0x802D2FFCu: goto label_802D2FFC;
    case 0x802D3000u: goto label_802D3000;
    case 0x802D3004u: goto label_802D3004;
    case 0x802D3008u: goto label_802D3008;
    case 0x802D300Cu: goto label_802D300C;
    case 0x802D3010u: goto label_802D3010;
    case 0x802D3014u: goto label_802D3014;
    case 0x802D3018u: goto label_802D3018;
    case 0x802D301Cu: goto label_802D301C;
    case 0x802D3020u: goto label_802D3020;
    case 0x802D3024u: goto label_802D3024;
    case 0x802D3028u: goto label_802D3028;
    case 0x802D302Cu: goto label_802D302C;
    case 0x802D3030u: goto label_802D3030;
    case 0x802D3034u: goto label_802D3034;
    case 0x802D3038u: goto label_802D3038;
    case 0x802D303Cu: goto label_802D303C;
    case 0x802D3040u: goto label_802D3040;
    case 0x802D3044u: goto label_802D3044;
    case 0x802D3048u: goto label_802D3048;
    case 0x802D304Cu: goto label_802D304C;
    case 0x802D3050u: goto label_802D3050;
    case 0x802D3054u: goto label_802D3054;
    case 0x802D3058u: goto label_802D3058;
    case 0x802D305Cu: goto label_802D305C;
    case 0x802D3060u: goto label_802D3060;
    case 0x802D3064u: goto label_802D3064;
    case 0x802D3068u: goto label_802D3068;
    case 0x802D306Cu: goto label_802D306C;
    case 0x802D3070u: goto label_802D3070;
    case 0x802D3074u: goto label_802D3074;
    case 0x802D3078u: goto label_802D3078;
    case 0x802D307Cu: goto label_802D307C;
    case 0x802D3080u: goto label_802D3080;
    case 0x802D3084u: goto label_802D3084;
    case 0x802D3088u: goto label_802D3088;
    case 0x802D308Cu: goto label_802D308C;
    case 0x802D3090u: goto label_802D3090;
    case 0x802D3094u: goto label_802D3094;
    case 0x802D3098u: goto label_802D3098;
    case 0x802D309Cu: goto label_802D309C;
    case 0x802D30A0u: goto label_802D30A0;
    case 0x802D30A4u: goto label_802D30A4;
    case 0x802D30A8u: goto label_802D30A8;
    case 0x802D30ACu: goto label_802D30AC;
    case 0x802D30B0u: goto label_802D30B0;
    case 0x802D30B4u: goto label_802D30B4;
    case 0x802D30B8u: goto label_802D30B8;
    case 0x802D30BCu: goto label_802D30BC;
    case 0x802D30C0u: goto label_802D30C0;
    case 0x802D30C4u: goto label_802D30C4;
    case 0x802D30C8u: goto label_802D30C8;
    case 0x802D30CCu: goto label_802D30CC;
    case 0x802D30D0u: goto label_802D30D0;
    case 0x802D30D4u: goto label_802D30D4;
    case 0x802D30D8u: goto label_802D30D8;
    case 0x802D30DCu: goto label_802D30DC;
    case 0x802D30E0u: goto label_802D30E0;
    case 0x802D30E4u: goto label_802D30E4;
    case 0x802D30E8u: goto label_802D30E8;
    case 0x802D30ECu: goto label_802D30EC;
    case 0x802D30F0u: goto label_802D30F0;
    case 0x802D30F4u: goto label_802D30F4;
    case 0x802D30F8u: goto label_802D30F8;
    case 0x802D30FCu: goto label_802D30FC;
    case 0x802D3100u: goto label_802D3100;
    case 0x802D3104u: goto label_802D3104;
    case 0x802D3108u: goto label_802D3108;
    case 0x802D310Cu: goto label_802D310C;
    case 0x802D3110u: goto label_802D3110;
    case 0x802D3114u: goto label_802D3114;
    case 0x802D3118u: goto label_802D3118;
    case 0x802D311Cu: goto label_802D311C;
    case 0x802D3120u: goto label_802D3120;
    case 0x802D3124u: goto label_802D3124;
    case 0x802D3128u: goto label_802D3128;
    case 0x802D312Cu: goto label_802D312C;
    case 0x802D3130u: goto label_802D3130;
    case 0x802D3134u: goto label_802D3134;
    case 0x802D3138u: goto label_802D3138;
    case 0x802D313Cu: goto label_802D313C;
    case 0x802D3140u: goto label_802D3140;
    case 0x802D3144u: goto label_802D3144;
    case 0x802D3148u: goto label_802D3148;
    case 0x802D314Cu: goto label_802D314C;
    case 0x802D3150u: goto label_802D3150;
    case 0x802D3154u: goto label_802D3154;
    case 0x802D3158u: goto label_802D3158;
    case 0x802D315Cu: goto label_802D315C;
    case 0x802D3160u: goto label_802D3160;
    case 0x802D3164u: goto label_802D3164;
    case 0x802D3168u: goto label_802D3168;
    case 0x802D316Cu: goto label_802D316C;
    case 0x802D3170u: goto label_802D3170;
    case 0x802D3174u: goto label_802D3174;
    case 0x802D3178u: goto label_802D3178;
    case 0x802D317Cu: goto label_802D317C;
    case 0x802D3180u: goto label_802D3180;
    case 0x802D3184u: goto label_802D3184;
    case 0x802D3188u: goto label_802D3188;
    case 0x802D318Cu: goto label_802D318C;
    case 0x802D3190u: goto label_802D3190;
    case 0x802D3194u: goto label_802D3194;
    case 0x802D3198u: goto label_802D3198;
    case 0x802D319Cu: goto label_802D319C;
    case 0x802D31A0u: goto label_802D31A0;
    case 0x802D31A4u: goto label_802D31A4;
    case 0x802D31A8u: goto label_802D31A8;
    case 0x802D31ACu: goto label_802D31AC;
    case 0x802D31B0u: goto label_802D31B0;
    case 0x802D31B4u: goto label_802D31B4;
    case 0x802D31B8u: goto label_802D31B8;
    case 0x802D31BCu: goto label_802D31BC;
    default: return;
    }
label_802CF1C0:
    ctx->pc = 0x802CF1C0u;
    ctx->downcount -= 2;
    // 802CF1C0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802CF1C4:
    ctx->pc = 0x802CF1C4u;
    // 802CF1C4: bl      0x8026F4F4
    {
            ctx->lr = 0x802CF1C8u;
            ctx->pc = 0x8026F4F4u;
            return;
    }

label_802CF1C8:
    ctx->pc = 0x802CF1C8u;
    ctx->downcount -= 2;
    // 802CF1C8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF1CC:
    ctx->pc = 0x802CF1CCu;
    // 802CF1CC: bc    12, 2, 0x802CF214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF214;
        }
    }

label_802CF1D0:
    ctx->pc = 0x802CF1D0u;
    ctx->downcount -= 3;
    // 802CF1D0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF1D4:
    ctx->pc = 0x802CF1D4u;
    // 802CF1D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF1D8:
    ctx->pc = 0x802CF1D8u;
    // 802CF1D8: bl      0x80240DD4
    {
            ctx->lr = 0x802CF1DCu;
            ctx->pc = 0x80240DD4u;
            return;
    }

label_802CF1DC:
    ctx->pc = 0x802CF1DCu;
    ctx->downcount -= 2;
    // 802CF1DC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802CF1E0:
    ctx->pc = 0x802CF1E0u;
    // 802CF1E0: bl      0x8026F6CC
    {
            ctx->lr = 0x802CF1E4u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802CF1E4:
    ctx->pc = 0x802CF1E4u;
    ctx->downcount -= 4;
    // 802CF1E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF1E8:
    ctx->pc = 0x802CF1E8u;
    // 802CF1E8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF1EC:
    ctx->pc = 0x802CF1ECu;
    // 802CF1EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802CF1F0:
    ctx->pc = 0x802CF1F0u;
    // 802CF1F0: bl      0x8025D584
    {
            ctx->lr = 0x802CF1F4u;
            ctx->pc = 0x8025D584u;
            return;
    }

label_802CF1F4:
    ctx->pc = 0x802CF1F4u;
    ctx->downcount -= 9;
    // 802CF1F4: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CF1F8:
    ctx->pc = 0x802CF1F8u;
    // 802CF1F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802CF1FC:
    ctx->pc = 0x802CF1FCu;
    // 802CF1FC: lfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802CF1FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF200:
    ctx->pc = 0x802CF200u;
    // 802CF200: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF204:
    ctx->pc = 0x802CF204u;
    // 802CF204: lwz     r12, 268(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(268);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CF208:
    ctx->pc = 0x802CF208u;
    // 802CF208: li      r5, -1
    ctx->gpr[5] = (u32)(s32)(-1);

label_802CF20C:
    ctx->pc = 0x802CF20Cu;
    // 802CF20C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CF210:
    ctx->pc = 0x802CF210u;
    // 802CF210: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CF214u;
            ctx->pc = target;
            return;
        }
    }

label_802CF214:
    ctx->pc = 0x802CF214u;
    ctx->downcount -= 4;
    // 802CF214: addic   r0, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802CF218:
    ctx->pc = 0x802CF218u;
    // 802CF218: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802CF21C:
    ctx->pc = 0x802CF21Cu;
    // 802CF21C: subfe   r3, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802CF220:
    ctx->pc = 0x802CF220u;
    // 802CF220: bl      0x800078AC
    {
            ctx->lr = 0x802CF224u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_802CF224:
    ctx->pc = 0x802CF224u;
    ctx->downcount -= 5;
    // 802CF224: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF228:
    ctx->pc = 0x802CF228u;
    // 802CF228: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF22C:
    ctx->pc = 0x802CF22Cu;
    // 802CF22C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802CF230:
    ctx->pc = 0x802CF230u;
    // 802CF230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF234:
    ctx->pc = 0x802CF234u;
    ctx->downcount -= 5;
    // 802CF234: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF238:
    ctx->pc = 0x802CF238u;
    // 802CF238: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF23C:
    ctx->pc = 0x802CF23Cu;
    // 802CF23C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF240:
    ctx->pc = 0x802CF240u;
    // 802CF240: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802CF244:
    ctx->pc = 0x802CF244u;
    // 802CF244: bl      0x8000785C
    {
            ctx->lr = 0x802CF248u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802CF248:
    ctx->pc = 0x802CF248u;
    ctx->downcount -= 10;
    // 802CF248: lwz     r8, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_802CF24C:
    ctx->pc = 0x802CF24Cu;
    // 802CF24C: lis     r7, -32661
    ctx->gpr[7] = ((u32)(s32)(-32661) << 16);

label_802CF250:
    ctx->pc = 0x802CF250u;
    // 802CF250: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CF254:
    ctx->pc = 0x802CF254u;
    // 802CF254: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF258:
    ctx->pc = 0x802CF258u;
    // 802CF258: addic   r0, r8, -1
    {
        u64 a = ctx->gpr[8];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802CF25C:
    ctx->pc = 0x802CF25Cu;
    // 802CF25C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802CF260:
    ctx->pc = 0x802CF260u;
    // 802CF260: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802CF264:
    ctx->pc = 0x802CF264u;
    // 802CF264: addi    r4, r7, 21472
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(21472);

label_802CF268:
    ctx->pc = 0x802CF268u;
    // 802CF268: subfe   r3, r0, r8
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802CF26C:
    ctx->pc = 0x802CF26Cu;
    // 802CF26C: bl      0x80370BD4
    {
            ctx->lr = 0x802CF270u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802CF270:
    ctx->pc = 0x802CF270u;
    ctx->downcount -= 2;
    // 802CF270: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802CF274:
    ctx->pc = 0x802CF274u;
    // 802CF274: bl      0x80277994
    {
            ctx->lr = 0x802CF278u;
            ctx->pc = 0x80277994u;
            return;
    }

label_802CF278:
    ctx->pc = 0x802CF278u;
    ctx->downcount -= 3;
    // 802CF278: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF27C:
    ctx->pc = 0x802CF27Cu;
    // 802CF27C: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802CF280:
    ctx->pc = 0x802CF280u;
    // 802CF280: bc    12, 2, 0x802CF2AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF2AC;
        }
    }

label_802CF284:
    ctx->pc = 0x802CF284u;
    ctx->downcount -= 4;
    // 802CF284: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF288:
    ctx->pc = 0x802CF288u;
    // 802CF288: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF28C:
    ctx->pc = 0x802CF28Cu;
    // 802CF28C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF290:
    ctx->pc = 0x802CF290u;
    // 802CF290: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF294u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF294:
    ctx->pc = 0x802CF294u;
    ctx->downcount -= 3;
    // 802CF294: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF298:
    ctx->pc = 0x802CF298u;
    // 802CF298: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF29C:
    ctx->pc = 0x802CF29Cu;
    // 802CF29C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF2A0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF2A0:
    ctx->pc = 0x802CF2A0u;
    ctx->downcount -= 2;
    // 802CF2A0: lfs     f1, -12860(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF2A0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF2A4:
    ctx->pc = 0x802CF2A4u;
    // 802CF2A4: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF2A8u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF2A8:
    ctx->pc = 0x802CF2A8u;
    ctx->downcount -= 1;
    // 802CF2A8: b       0x802CF2E4
    {
            goto label_802CF2E4;
    }

label_802CF2AC:
    ctx->pc = 0x802CF2ACu;
    ctx->downcount -= 3;
    // 802CF2AC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF2B0:
    ctx->pc = 0x802CF2B0u;
    // 802CF2B0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF2B4:
    ctx->pc = 0x802CF2B4u;
    // 802CF2B4: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF2B8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF2B8:
    ctx->pc = 0x802CF2B8u;
    ctx->downcount -= 2;
    // 802CF2B8: lfs     f1, -12864(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF2B8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF2BC:
    ctx->pc = 0x802CF2BCu;
    // 802CF2BC: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF2C0u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF2C0:
    ctx->pc = 0x802CF2C0u;
    ctx->downcount -= 3;
    // 802CF2C0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF2C4:
    ctx->pc = 0x802CF2C4u;
    // 802CF2C4: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF2C8:
    ctx->pc = 0x802CF2C8u;
    // 802CF2C8: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF2CCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF2CC:
    ctx->pc = 0x802CF2CCu;
    ctx->downcount -= 1;
    // 802CF2CC: bl      0x8025EAF8
    {
            ctx->lr = 0x802CF2D0u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_802CF2D0:
    ctx->pc = 0x802CF2D0u;
    ctx->downcount -= 2;
    // 802CF2D0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF2D4:
    ctx->pc = 0x802CF2D4u;
    // 802CF2D4: bc    12, 2, 0x802CF2E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF2E4;
        }
    }

label_802CF2D8:
    ctx->pc = 0x802CF2D8u;
    ctx->downcount -= 3;
    // 802CF2D8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF2DC:
    ctx->pc = 0x802CF2DCu;
    // 802CF2DC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF2E0:
    ctx->pc = 0x802CF2E0u;
    // 802CF2E0: bl      0x8026FEDC
    {
            ctx->lr = 0x802CF2E4u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802CF2E4:
    ctx->pc = 0x802CF2E4u;
    ctx->downcount -= 6;
    // 802CF2E4: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802CF2E8:
    ctx->pc = 0x802CF2E8u;
    // 802CF2E8: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802CF2EC:
    ctx->pc = 0x802CF2ECu;
    // 802CF2EC: addi    r4, r4, 21472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21472);

label_802CF2F0:
    ctx->pc = 0x802CF2F0u;
    // 802CF2F0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802CF2F4:
    ctx->pc = 0x802CF2F4u;
    // 802CF2F4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802CF2F8:
    ctx->pc = 0x802CF2F8u;
    // 802CF2F8: bl      0x80370BD4
    {
            ctx->lr = 0x802CF2FCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802CF2FC:
    ctx->pc = 0x802CF2FCu;
    ctx->downcount -= 2;
    // 802CF2FC: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802CF300:
    ctx->pc = 0x802CF300u;
    // 802CF300: bl      0x80277994
    {
            ctx->lr = 0x802CF304u;
            ctx->pc = 0x80277994u;
            return;
    }

label_802CF304:
    ctx->pc = 0x802CF304u;
    ctx->downcount -= 3;
    // 802CF304: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF308:
    ctx->pc = 0x802CF308u;
    // 802CF308: and.   r0, r29, r0
    {
        ctx->gpr[0] = ctx->gpr[29] & ctx->gpr[0];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802CF30C:
    ctx->pc = 0x802CF30Cu;
    // 802CF30C: bc    12, 2, 0x802CF348
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF348;
        }
    }

label_802CF310:
    ctx->pc = 0x802CF310u;
    ctx->downcount -= 3;
    // 802CF310: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF314:
    ctx->pc = 0x802CF314u;
    // 802CF314: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF318:
    ctx->pc = 0x802CF318u;
    // 802CF318: bl      0x8026FEDC
    {
            ctx->lr = 0x802CF31Cu;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802CF31C:
    ctx->pc = 0x802CF31Cu;
    ctx->downcount -= 4;
    // 802CF31C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF320:
    ctx->pc = 0x802CF320u;
    // 802CF320: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF324:
    ctx->pc = 0x802CF324u;
    // 802CF324: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF328:
    ctx->pc = 0x802CF328u;
    // 802CF328: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF32Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF32C:
    ctx->pc = 0x802CF32Cu;
    ctx->downcount -= 3;
    // 802CF32C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF330:
    ctx->pc = 0x802CF330u;
    // 802CF330: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF334:
    ctx->pc = 0x802CF334u;
    // 802CF334: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF338u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF338:
    ctx->pc = 0x802CF338u;
    ctx->downcount -= 1;
    // 802CF338: bl      0x8025EC94
    {
            ctx->lr = 0x802CF33Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF33C:
    ctx->pc = 0x802CF33Cu;
    ctx->downcount -= 3;
    // 802CF33C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802CF340:
    ctx->pc = 0x802CF340u;
    // 802CF340: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802CF344:
    ctx->pc = 0x802CF344u;
    // 802CF344: bl      0x802CF4CC
    {
            ctx->lr = 0x802CF348u;
            goto label_802CF4CC;
    }

label_802CF348:
    ctx->pc = 0x802CF348u;
    ctx->downcount -= 3;
    // 802CF348: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF34C:
    ctx->pc = 0x802CF34Cu;
    // 802CF34C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF350:
    ctx->pc = 0x802CF350u;
    // 802CF350: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF354u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF354:
    ctx->pc = 0x802CF354u;
    ctx->downcount -= 1;
    // 802CF354: bl      0x8025EA58
    {
            ctx->lr = 0x802CF358u;
            ctx->pc = 0x8025EA58u;
            return;
    }

label_802CF358:
    ctx->pc = 0x802CF358u;
    ctx->downcount -= 2;
    // 802CF358: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF35C:
    ctx->pc = 0x802CF35Cu;
    // 802CF35C: bc    12, 2, 0x802CF3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF3A4;
        }
    }

label_802CF360:
    ctx->pc = 0x802CF360u;
    ctx->downcount -= 3;
    // 802CF360: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF364:
    ctx->pc = 0x802CF364u;
    // 802CF364: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF368:
    ctx->pc = 0x802CF368u;
    // 802CF368: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF36Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF36C:
    ctx->pc = 0x802CF36Cu;
    ctx->downcount -= 1;
    // 802CF36C: bl      0x8025EAF8
    {
            ctx->lr = 0x802CF370u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_802CF370:
    ctx->pc = 0x802CF370u;
    ctx->downcount -= 2;
    // 802CF370: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF374:
    ctx->pc = 0x802CF374u;
    // 802CF374: bc    12, 2, 0x802CF3A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF3A4;
        }
    }

label_802CF378:
    ctx->pc = 0x802CF378u;
    ctx->downcount -= 3;
    // 802CF378: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF37C:
    ctx->pc = 0x802CF37Cu;
    // 802CF37C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF380:
    ctx->pc = 0x802CF380u;
    // 802CF380: bl      0x8026FEDC
    {
            ctx->lr = 0x802CF384u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802CF384:
    ctx->pc = 0x802CF384u;
    ctx->downcount -= 4;
    // 802CF384: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF388:
    ctx->pc = 0x802CF388u;
    // 802CF388: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF38C:
    ctx->pc = 0x802CF38Cu;
    // 802CF38C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF390:
    ctx->pc = 0x802CF390u;
    // 802CF390: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF394u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF394:
    ctx->pc = 0x802CF394u;
    ctx->downcount -= 3;
    // 802CF394: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802CF398:
    ctx->pc = 0x802CF398u;
    // 802CF398: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF39C:
    ctx->pc = 0x802CF39Cu;
    // 802CF39C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF3A0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF3A0:
    ctx->pc = 0x802CF3A0u;
    ctx->downcount -= 1;
    // 802CF3A0: bl      0x8025EC94
    {
            ctx->lr = 0x802CF3A4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF3A4:
    ctx->pc = 0x802CF3A4u;
    ctx->downcount -= 2;
    // 802CF3A4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802CF3A8:
    ctx->pc = 0x802CF3A8u;
    // 802CF3A8: bl      0x800078A8
    {
            ctx->lr = 0x802CF3ACu;
            ctx->pc = 0x800078A8u;
            return;
    }

label_802CF3AC:
    ctx->pc = 0x802CF3ACu;
    ctx->downcount -= 5;
    // 802CF3AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF3B0:
    ctx->pc = 0x802CF3B0u;
    // 802CF3B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF3B4:
    ctx->pc = 0x802CF3B4u;
    // 802CF3B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802CF3B8:
    ctx->pc = 0x802CF3B8u;
    // 802CF3B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF3BC:
    ctx->pc = 0x802CF3BCu;
    ctx->downcount -= 20;
    // 802CF3BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF3C0:
    ctx->pc = 0x802CF3C0u;
    // 802CF3C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF3C4:
    ctx->pc = 0x802CF3C4u;
    // 802CF3C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF3C8:
    ctx->pc = 0x802CF3C8u;
    // 802CF3C8: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CF3CC:
    ctx->pc = 0x802CF3CCu;
    // 802CF3CC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF3D0:
    ctx->pc = 0x802CF3D0u;
    // 802CF3D0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_802CF3D4:
    ctx->pc = 0x802CF3D4u;
    // 802CF3D4: lwz     r4, -13440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13440);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802CF3D8:
    ctx->pc = 0x802CF3D8u;
    // 802CF3D8: lwz     r27, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_802CF3DC:
    ctx->pc = 0x802CF3DCu;
    // 802CF3DC: cmpwi   r27, 0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF3E0:
    ctx->pc = 0x802CF3E0u;
    // 802CF3E0: bc    12, 2, 0x802CF3F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF3F0;
        }
    }

label_802CF3E4:
    ctx->pc = 0x802CF3E4u;
    ctx->downcount -= 2;
    // 802CF3E4: cmpwi   r27, 2
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF3E8:
    ctx->pc = 0x802CF3E8u;
    // 802CF3E8: bc    12, 2, 0x802CF3F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF3F0;
        }
    }

label_802CF3EC:
    ctx->pc = 0x802CF3ECu;
    ctx->downcount -= 1;
    // 802CF3EC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802CF3F0:
    ctx->pc = 0x802CF3F0u;
    ctx->downcount -= 8;
    // 802CF3F0: addi    r0, r27, -1
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(-1);

label_802CF3F4:
    ctx->pc = 0x802CF3F4u;
    // 802CF3F4: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_802CF3F8:
    ctx->pc = 0x802CF3F8u;
    // 802CF3F8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802CF3FC:
    ctx->pc = 0x802CF3FCu;
    // 802CF3FC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CF400:
    ctx->pc = 0x802CF400u;
    // 802CF400: addi    r28, r28, 7184
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7184);

label_802CF404:
    ctx->pc = 0x802CF404u;
    // 802CF404: rlwinm r30, r0, 27, 5, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802CF408:
    ctx->pc = 0x802CF408u;
    // 802CF408: addi    r4, r28, 9
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(9);

label_802CF40C:
    ctx->pc = 0x802CF40Cu;
    // 802CF40C: bl      0x8026F970
    {
            ctx->lr = 0x802CF410u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802CF410:
    ctx->pc = 0x802CF410u;
    ctx->downcount -= 9;
    // 802CF410: addi    r0, r27, -3
    ctx->gpr[0] = ctx->gpr[27] + (u32)(s32)(-3);

label_802CF414:
    ctx->pc = 0x802CF414u;
    // 802CF414: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802CF418:
    ctx->pc = 0x802CF418u;
    // 802CF418: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802CF41C:
    ctx->pc = 0x802CF41Cu;
    // 802CF41C: addi    r4, r28, 23
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(23);

label_802CF420:
    ctx->pc = 0x802CF420u;
    // 802CF420: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802CF424:
    ctx->pc = 0x802CF424u;
    // 802CF424: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802CF428:
    ctx->pc = 0x802CF428u;
    // 802CF428: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF42C:
    ctx->pc = 0x802CF42Cu;
    // 802CF42C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802CF430:
    ctx->pc = 0x802CF430u;
    // 802CF430: bl      0x8026F970
    {
            ctx->lr = 0x802CF434u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802CF434:
    ctx->pc = 0x802CF434u;
    ctx->downcount -= 6;
    // 802CF434: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802CF438:
    ctx->pc = 0x802CF438u;
    // 802CF438: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF43C:
    ctx->pc = 0x802CF43Cu;
    // 802CF43C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF440:
    ctx->pc = 0x802CF440u;
    // 802CF440: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802CF444:
    ctx->pc = 0x802CF444u;
    // 802CF444: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF448:
    ctx->pc = 0x802CF448u;
    // 802CF448: bc    4, 2, 0x802CF454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CF454;
        }
    }

label_802CF44C:
    ctx->pc = 0x802CF44Cu;
    ctx->downcount -= 2;
    // 802CF44C: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF450:
    ctx->pc = 0x802CF450u;
    // 802CF450: bc    12, 2, 0x802CF458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF458;
        }
    }

label_802CF454:
    ctx->pc = 0x802CF454u;
    ctx->downcount -= 1;
    // 802CF454: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802CF458:
    ctx->pc = 0x802CF458u;
    ctx->downcount -= 8;
    // 802CF458: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802CF45C:
    ctx->pc = 0x802CF45Cu;
    // 802CF45C: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_802CF460:
    ctx->pc = 0x802CF460u;
    // 802CF460: addi    r28, r28, 7184
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7184);

label_802CF464:
    ctx->pc = 0x802CF464u;
    // 802CF464: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_802CF468:
    ctx->pc = 0x802CF468u;
    // 802CF468: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF46C:
    ctx->pc = 0x802CF46Cu;
    // 802CF46C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802CF470:
    ctx->pc = 0x802CF470u;
    // 802CF470: addi    r4, r28, 33
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(33);

label_802CF474:
    ctx->pc = 0x802CF474u;
    // 802CF474: bl      0x8026F970
    {
            ctx->lr = 0x802CF478u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802CF478:
    ctx->pc = 0x802CF478u;
    ctx->downcount -= 7;
    // 802CF478: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802CF47C:
    ctx->pc = 0x802CF47Cu;
    // 802CF47C: addi    r4, r28, 45
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(45);

label_802CF480:
    ctx->pc = 0x802CF480u;
    // 802CF480: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802CF484:
    ctx->pc = 0x802CF484u;
    // 802CF484: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_802CF488:
    ctx->pc = 0x802CF488u;
    // 802CF488: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF48C:
    ctx->pc = 0x802CF48Cu;
    // 802CF48C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802CF490:
    ctx->pc = 0x802CF490u;
    // 802CF490: bl      0x8026F970
    {
            ctx->lr = 0x802CF494u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802CF494:
    ctx->pc = 0x802CF494u;
    ctx->downcount -= 20;
    // 802CF494: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802CF498:
    ctx->pc = 0x802CF498u;
    // 802CF498: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802CF49C:
    ctx->pc = 0x802CF49Cu;
    // 802CF49C: or   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[30];
    }

label_802CF4A0:
    ctx->pc = 0x802CF4A0u;
    // 802CF4A0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF4A4:
    ctx->pc = 0x802CF4A4u;
    // 802CF4A4: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CF4A8:
    ctx->pc = 0x802CF4A8u;
    // 802CF4A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF4AC:
    ctx->pc = 0x802CF4ACu;
    // 802CF4AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF4B0:
    ctx->pc = 0x802CF4B0u;
    // 802CF4B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802CF4B4:
    ctx->pc = 0x802CF4B4u;
    // 802CF4B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF4B8:
    ctx->pc = 0x802CF4B8u;
    ctx->downcount -= 5;
    // 802CF4B8: lfs     f1, -12856(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF4B8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12856);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF4BC:
    // 802CF4BC: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_802CF4C0:
    ctx->pc = 0x802CF4C0u;
    // 802CF4C0: lfs     f2, -12860(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF4C0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802CF4C4:
    // 802CF4C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF4C8:
    // 802CF4C8: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_802CF4CC:
    ctx->downcount -= 2;
    // 802CF4CC: cmplwi  r4, 0x0800
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0800u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF4D0:
    // 802CF4D0: bc    4, 2, 0x802CF4DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CF4DC;
        }
    }

label_802CF4D4:
    ctx->downcount -= 2;
    // 802CF4D4: li      r3, 126
    ctx->gpr[3] = (u32)(s32)(126);

label_802CF4D8:
    // 802CF4D8: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802CF4DC:
    ctx->downcount -= 2;
    // 802CF4DC: cmplwi  r4, 0x0400
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0400u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF4E0:
    ctx->pc = 0x802CF4E0u;
    // 802CF4E0: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF4E4:
    ctx->downcount -= 2;
    // 802CF4E4: li      r3, 127
    ctx->gpr[3] = (u32)(s32)(127);

label_802CF4E8:
    // 802CF4E8: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802CF4EC:
    ctx->pc = 0x802CF4ECu;
    ctx->downcount -= 1;
    // 802CF4EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF4F0:
    ctx->pc = 0x802CF4F0u;
    ctx->downcount -= 9;
    // 802CF4F0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF4F4:
    ctx->pc = 0x802CF4F4u;
    // 802CF4F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF4F8:
    // 802CF4F8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF4FC:
    // 802CF4FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF500:
    ctx->pc = 0x802CF500u;
    // 802CF500: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF504:
    ctx->pc = 0x802CF504u;
    // 802CF504: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CF508:
    // 802CF508: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF50C:
    // 802CF50C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CF510:
    // 802CF510: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF514u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF514:
    ctx->downcount -= 3;
    // 802CF514: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CF518:
    // 802CF518: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF51C:
    // 802CF51C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF520u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF520:
    ctx->downcount -= 1;
    // 802CF520: bl      0x8025EC94
    {
            ctx->lr = 0x802CF524u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF524:
    ctx->downcount -= 4;
    // 802CF524: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CF528:
    // 802CF528: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_802CF52C:
    // 802CF52C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF530:
    // 802CF530: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF534u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF534:
    ctx->downcount -= 3;
    // 802CF534: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CF538:
    // 802CF538: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_802CF53C:
    // 802CF53C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF540u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF540:
    ctx->downcount -= 1;
    // 802CF540: bl      0x8025EC94
    {
            ctx->lr = 0x802CF544u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF544:
    ctx->downcount -= 3;
    // 802CF544: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802CF548:
    // 802CF548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF54C:
    // 802CF54C: bl      0x803457B8
    {
            ctx->lr = 0x802CF550u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802CF550:
    ctx->pc = 0x802CF550u;
    ctx->downcount -= 6;
    // 802CF550: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF554:
    ctx->pc = 0x802CF554u;
    // 802CF554: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CF558:
    ctx->pc = 0x802CF558u;
    // 802CF558: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF55C:
    // 802CF55C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF560:
    ctx->pc = 0x802CF560u;
    // 802CF560: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF564:
    ctx->pc = 0x802CF564u;
    ctx->downcount -= 24;
    // 802CF564: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF568:
    ctx->pc = 0x802CF568u;
    // 802CF568: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF56C:
    // 802CF56C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802CF570:
    // 802CF570: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF574:
    ctx->pc = 0x802CF574u;
    // 802CF574: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF578:
    // 802CF578: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802CF57C:
    ctx->pc = 0x802CF57Cu;
    // 802CF57C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CF580:
    // 802CF580: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802CF584:
    // 802CF584: addi    r31, r31, 7184
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(7184);

label_802CF588:
    // 802CF588: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF58C:
    // 802CF58C: addi    r4, r31, 57
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(57);

label_802CF590:
    // 802CF590: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CF594:
    // 802CF594: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_802CF598:
    // 802CF598: bl      0x802703A8
    {
            ctx->lr = 0x802CF59Cu;
            ctx->pc = 0x802703A8u;
            return;
    }

label_802CF59C:
    ctx->downcount -= 6;
    // 802CF59C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF5A0:
    // 802CF5A0: addi    r5, r31, 84
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(84);

label_802CF5A4:
    // 802CF5A4: addi    r6, r31, 87
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(87);

label_802CF5A8:
    // 802CF5A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF5AC:
    // 802CF5AC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF5B0:
    // 802CF5B0: bl      0x8027035C
    {
            ctx->lr = 0x802CF5B4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF5B4:
    ctx->downcount -= 6;
    // 802CF5B4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF5B8:
    // 802CF5B8: addi    r5, r31, 98
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(98);

label_802CF5BC:
    // 802CF5BC: addi    r6, r31, 87
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(87);

label_802CF5C0:
    // 802CF5C0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802CF5C4:
    // 802CF5C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF5C8:
    // 802CF5C8: bl      0x8027035C
    {
            ctx->lr = 0x802CF5CCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF5CC:
    ctx->downcount -= 6;
    // 802CF5CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF5D0:
    // 802CF5D0: addi    r5, r31, 102
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(102);

label_802CF5D4:
    // 802CF5D4: addi    r6, r31, 121
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(121);

label_802CF5D8:
    // 802CF5D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF5DC:
    // 802CF5DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF5E0:
    // 802CF5E0: bl      0x8027035C
    {
            ctx->lr = 0x802CF5E4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF5E4:
    ctx->downcount -= 6;
    // 802CF5E4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF5E8:
    // 802CF5E8: addi    r5, r31, 132
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(132);

label_802CF5EC:
    // 802CF5EC: addi    r6, r31, 139
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(139);

label_802CF5F0:
    // 802CF5F0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802CF5F4:
    // 802CF5F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF5F8:
    // 802CF5F8: bl      0x8027035C
    {
            ctx->lr = 0x802CF5FCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF5FC:
    ctx->downcount -= 6;
    // 802CF5FC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF600:
    // 802CF600: addi    r5, r31, 132
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(132);

label_802CF604:
    // 802CF604: addi    r6, r31, 149
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(149);

label_802CF608:
    // 802CF608: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802CF60C:
    // 802CF60C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF610:
    // 802CF610: bl      0x8027035C
    {
            ctx->lr = 0x802CF614u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF614:
    ctx->downcount -= 6;
    // 802CF614: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF618:
    // 802CF618: addi    r5, r31, 132
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(132);

label_802CF61C:
    // 802CF61C: addi    r6, r31, 159
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(159);

label_802CF620:
    // 802CF620: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802CF624:
    // 802CF624: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF628:
    // 802CF628: bl      0x8027035C
    {
            ctx->lr = 0x802CF62Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF62C:
    ctx->downcount -= 6;
    // 802CF62C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF630:
    // 802CF630: addi    r5, r31, 171
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(171);

label_802CF634:
    // 802CF634: addi    r6, r31, 183
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(183);

label_802CF638:
    // 802CF638: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_802CF63C:
    // 802CF63C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF640:
    // 802CF640: bl      0x8027035C
    {
            ctx->lr = 0x802CF644u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF644:
    ctx->downcount -= 6;
    // 802CF644: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF648:
    // 802CF648: addi    r5, r31, 193
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(193);

label_802CF64C:
    // 802CF64C: addi    r6, r31, 205
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(205);

label_802CF650:
    // 802CF650: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_802CF654:
    // 802CF654: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF658:
    // 802CF658: bl      0x8027035C
    {
            ctx->lr = 0x802CF65Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF65C:
    ctx->downcount -= 6;
    // 802CF65C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF660:
    // 802CF660: addi    r5, r31, 215
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(215);

label_802CF664:
    // 802CF664: addi    r6, r31, 230
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(230);

label_802CF668:
    // 802CF668: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_802CF66C:
    // 802CF66C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF670:
    // 802CF670: bl      0x8027035C
    {
            ctx->lr = 0x802CF674u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF674:
    ctx->downcount -= 6;
    // 802CF674: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF678:
    // 802CF678: addi    r5, r31, 243
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(243);

label_802CF67C:
    // 802CF67C: addi    r6, r31, 139
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(139);

label_802CF680:
    // 802CF680: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_802CF684:
    // 802CF684: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF688:
    // 802CF688: bl      0x8027035C
    {
            ctx->lr = 0x802CF68Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF68C:
    ctx->downcount -= 6;
    // 802CF68C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF690:
    // 802CF690: addi    r5, r31, 256
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(256);

label_802CF694:
    // 802CF694: addi    r6, r31, 149
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(149);

label_802CF698:
    // 802CF698: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_802CF69C:
    // 802CF69C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF6A0:
    // 802CF6A0: bl      0x8027035C
    {
            ctx->lr = 0x802CF6A4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF6A4:
    ctx->downcount -= 6;
    // 802CF6A4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF6A8:
    // 802CF6A8: addi    r5, r31, 269
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(269);

label_802CF6AC:
    // 802CF6AC: addi    r6, r31, 159
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(159);

label_802CF6B0:
    // 802CF6B0: li      r4, 11
    ctx->gpr[4] = (u32)(s32)(11);

label_802CF6B4:
    // 802CF6B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF6B8:
    // 802CF6B8: bl      0x8027035C
    {
            ctx->lr = 0x802CF6BCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF6BC:
    ctx->downcount -= 6;
    // 802CF6BC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF6C0:
    // 802CF6C0: addi    r5, r31, 282
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(282);

label_802CF6C4:
    // 802CF6C4: addi    r6, r31, 159
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(159);

label_802CF6C8:
    // 802CF6C8: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_802CF6CC:
    // 802CF6CC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF6D0:
    // 802CF6D0: bl      0x8027035C
    {
            ctx->lr = 0x802CF6D4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF6D4:
    ctx->downcount -= 6;
    // 802CF6D4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF6D8:
    // 802CF6D8: addi    r5, r31, 295
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(295);

label_802CF6DC:
    // 802CF6DC: addi    r6, r31, 305
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(305);

label_802CF6E0:
    // 802CF6E0: li      r4, 13
    ctx->gpr[4] = (u32)(s32)(13);

label_802CF6E4:
    // 802CF6E4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF6E8:
    // 802CF6E8: bl      0x8027035C
    {
            ctx->lr = 0x802CF6ECu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF6EC:
    ctx->downcount -= 6;
    // 802CF6EC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF6F0:
    // 802CF6F0: addi    r5, r31, 316
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(316);

label_802CF6F4:
    // 802CF6F4: addi    r6, r31, 323
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(323);

label_802CF6F8:
    // 802CF6F8: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_802CF6FC:
    // 802CF6FC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF700:
    // 802CF700: bl      0x8027035C
    {
            ctx->lr = 0x802CF704u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF704:
    ctx->downcount -= 6;
    // 802CF704: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF708:
    // 802CF708: addi    r5, r31, 332
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(332);

label_802CF70C:
    // 802CF70C: addi    r6, r31, 323
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(323);

label_802CF710:
    // 802CF710: li      r4, 15
    ctx->gpr[4] = (u32)(s32)(15);

label_802CF714:
    // 802CF714: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802CF718:
    // 802CF718: bl      0x8027035C
    {
            ctx->lr = 0x802CF71Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802CF71C:
    ctx->downcount -= 4;
    // 802CF71C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF720:
    // 802CF720: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CF724:
    // 802CF724: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802CF728:
    // 802CF728: bl      0x80270194
    {
            ctx->lr = 0x802CF72Cu;
            ctx->pc = 0x80270194u;
            return;
    }

label_802CF72C:
    ctx->downcount -= 2;
    // 802CF72C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF730:
    // 802CF730: bl      0x802CF3BC
    {
            ctx->lr = 0x802CF734u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF3BCu;
                return;
            }
            goto label_802CF3BC;
    }

label_802CF734:
    ctx->pc = 0x802CF734u;
    ctx->downcount -= 16;
    // 802CF734: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CF738:
    ctx->pc = 0x802CF738u;
    // 802CF738: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF73C:
    ctx->pc = 0x802CF73Cu;
    // 802CF73C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF740:
    // 802CF740: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF744:
    ctx->pc = 0x802CF744u;
    // 802CF744: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF748:
    ctx->pc = 0x802CF748u;
    ctx->downcount -= 7;
    // 802CF748: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF74C:
    ctx->pc = 0x802CF74Cu;
    // 802CF74C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF750:
    ctx->pc = 0x802CF750u;
    // 802CF750: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF754:
    ctx->pc = 0x802CF754u;
    // 802CF754: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CF758:
    // 802CF758: li      r31, 6
    ctx->gpr[31] = (u32)(s32)(6);

label_802CF75C:
    ctx->pc = 0x802CF75Cu;
    // 802CF75C: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802CF760:
    // 802CF760: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF764:
    ctx->downcount -= 4;
    // 802CF764: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF768:
    // 802CF768: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF76C:
    // 802CF76C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF770:
    // 802CF770: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF774u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF774:
    ctx->downcount -= 3;
    // 802CF774: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF778:
    // 802CF778: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF77C:
    // 802CF77C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF780u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF780:
    ctx->pc = 0x802CF780u;
    ctx->downcount -= 2;
    // 802CF780: lfs     f1, -12860(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF780u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF784:
    // 802CF784: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF788u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF788:
    ctx->downcount -= 3;
    // 802CF788: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802CF78C:
    // 802CF78C: cmpwi   r31, 9
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF790:
    // 802CF790: bc    12, 0, 0x802CF764
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF764u;
                return;
            }
            goto label_802CF764;
        }
    }

label_802CF794:
    ctx->downcount -= 1;
    // 802CF794: li      r31, 9
    ctx->gpr[31] = (u32)(s32)(9);

label_802CF798:
    ctx->downcount -= 2;
    // 802CF798: cmpwi   r31, 15
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF79C:
    // 802CF79C: bc    12, 2, 0x802CF7C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF7C8;
        }
    }

label_802CF7A0:
    ctx->downcount -= 4;
    // 802CF7A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF7A4:
    // 802CF7A4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF7A8:
    // 802CF7A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF7AC:
    // 802CF7AC: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF7B0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF7B0:
    ctx->downcount -= 3;
    // 802CF7B0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF7B4:
    // 802CF7B4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF7B8:
    // 802CF7B8: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF7BCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF7BC:
    ctx->pc = 0x802CF7BCu;
    ctx->downcount -= 2;
    // 802CF7BC: lfs     f1, -12864(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF7BCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12864);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF7C0:
    // 802CF7C0: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF7C4u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF7C4:
    ctx->downcount -= 1;
    // 802CF7C4: b       0x802CF7D4
    {
            goto label_802CF7D4;
    }

label_802CF7C8:
    ctx->downcount -= 3;
    // 802CF7C8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF7CC:
    // 802CF7CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF7D0:
    // 802CF7D0: bl      0x8026FEDC
    {
            ctx->lr = 0x802CF7D4u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802CF7D4:
    ctx->downcount -= 3;
    // 802CF7D4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802CF7D8:
    // 802CF7D8: cmpwi   r31, 16
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF7DC:
    // 802CF7DC: bc    12, 0, 0x802CF798
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF798u;
                return;
            }
            goto label_802CF798;
        }
    }

label_802CF7E0:
    ctx->downcount -= 10;
    // 802CF7E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802CF7E4:
    ctx->pc = 0x802CF7E4u;
    // 802CF7E4: stw     r0, 256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF7E8:
    // 802CF7E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CF7EC:
    ctx->pc = 0x802CF7ECu;
    // 802CF7EC: stb     r0, 260(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF7F0:
    ctx->pc = 0x802CF7F0u;
    // 802CF7F0: stb     r0, 261(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(261);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF7F4:
    ctx->pc = 0x802CF7F4u;
    // 802CF7F4: lwz     r12, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CF7F8:
    ctx->pc = 0x802CF7F8u;
    // 802CF7F8: lwz     r12, 264(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(264);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CF7FC:
    ctx->pc = 0x802CF7FCu;
    // 802CF7FC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CF800:
    ctx->pc = 0x802CF800u;
    // 802CF800: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CF804u;
            ctx->pc = target;
            return;
        }
    }

label_802CF804:
    ctx->pc = 0x802CF804u;
    ctx->downcount -= 7;
    // 802CF804: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF808:
    ctx->pc = 0x802CF808u;
    // 802CF808: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CF80C:
    ctx->pc = 0x802CF80Cu;
    // 802CF80C: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802CF810:
    ctx->pc = 0x802CF810u;
    // 802CF810: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF814:
    // 802CF814: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF818:
    ctx->pc = 0x802CF818u;
    // 802CF818: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF81C:
    ctx->pc = 0x802CF81Cu;
    ctx->downcount -= 8;
    // 802CF81C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF820:
    ctx->pc = 0x802CF820u;
    // 802CF820: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF824:
    // 802CF824: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF828:
    ctx->pc = 0x802CF828u;
    // 802CF828: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF82C:
    ctx->pc = 0x802CF82Cu;
    // 802CF82C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CF830:
    // 802CF830: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF834:
    // 802CF834: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CF838:
    // 802CF838: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF83Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF83C:
    ctx->downcount -= 1;
    // 802CF83C: bl      0x8025EAF8
    {
            ctx->lr = 0x802CF840u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_802CF840:
    ctx->downcount -= 2;
    // 802CF840: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF844:
    // 802CF844: bc    12, 2, 0x802CF85C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF85C;
        }
    }

label_802CF848:
    ctx->downcount -= 3;
    // 802CF848: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CF84C:
    // 802CF84C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF850:
    // 802CF850: bl      0x8026FEDC
    {
            ctx->lr = 0x802CF854u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802CF854:
    ctx->downcount -= 2;
    // 802CF854: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802CF858:
    // 802CF858: b       0x802CF860
    {
            goto label_802CF860;
    }

label_802CF85C:
    ctx->downcount -= 1;
    // 802CF85C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802CF860:
    ctx->pc = 0x802CF860u;
    ctx->downcount -= 6;
    // 802CF860: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF864:
    ctx->pc = 0x802CF864u;
    // 802CF864: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CF868:
    ctx->pc = 0x802CF868u;
    // 802CF868: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF86C:
    // 802CF86C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF870:
    ctx->pc = 0x802CF870u;
    // 802CF870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF874:
    ctx->pc = 0x802CF874u;
    ctx->downcount -= 9;
    // 802CF874: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF878:
    ctx->pc = 0x802CF878u;
    // 802CF878: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF87C:
    // 802CF87C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF880:
    // 802CF880: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF884:
    ctx->pc = 0x802CF884u;
    // 802CF884: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF888:
    ctx->pc = 0x802CF888u;
    // 802CF888: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CF88C:
    // 802CF88C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF890:
    // 802CF890: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CF894:
    // 802CF894: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF898u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF898:
    ctx->downcount -= 3;
    // 802CF898: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CF89C:
    // 802CF89C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF8A0:
    // 802CF8A0: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF8A4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF8A4:
    ctx->downcount -= 1;
    // 802CF8A4: bl      0x8025EC94
    {
            ctx->lr = 0x802CF8A8u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF8A8:
    ctx->pc = 0x802CF8A8u;
    ctx->downcount -= 6;
    // 802CF8A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF8AC:
    ctx->pc = 0x802CF8ACu;
    // 802CF8AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CF8B0:
    ctx->pc = 0x802CF8B0u;
    // 802CF8B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF8B4:
    // 802CF8B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF8B8:
    ctx->pc = 0x802CF8B8u;
    // 802CF8B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF8BC:
    ctx->downcount -= 1;
    // 802CF8BC: b       0x802CFDC4
    {
            goto label_802CFDC4;
    }

label_802CF8C0:
    ctx->pc = 0x802CF8C0u;
    ctx->downcount -= 7;
    // 802CF8C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF8C4:
    ctx->pc = 0x802CF8C4u;
    // 802CF8C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF8C8:
    ctx->pc = 0x802CF8C8u;
    // 802CF8C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF8CC:
    ctx->pc = 0x802CF8CCu;
    // 802CF8CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CF8D0:
    ctx->pc = 0x802CF8D0u;
    // 802CF8D0: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802CF8D4:
    // 802CF8D4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF8D8:
    // 802CF8D8: bl      0x802CFE14
    {
            ctx->lr = 0x802CF8DCu;
            goto label_802CFE14;
    }

label_802CF8DC:
    ctx->downcount -= 4;
    // 802CF8DC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF8E0:
    // 802CF8E0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF8E4:
    // 802CF8E4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF8E8:
    // 802CF8E8: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF8ECu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF8EC:
    ctx->downcount -= 3;
    // 802CF8EC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF8F0:
    // 802CF8F0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF8F4:
    // 802CF8F4: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF8F8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF8F8:
    ctx->downcount -= 1;
    // 802CF8F8: bl      0x8025EC94
    {
            ctx->lr = 0x802CF8FCu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF8FC:
    ctx->downcount -= 3;
    // 802CF8FC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF900:
    // 802CF900: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802CF904:
    // 802CF904: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF908u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF908:
    ctx->pc = 0x802CF908u;
    ctx->downcount -= 2;
    // 802CF908: lfs     f1, -12852(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF908u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF90C:
    // 802CF90C: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF910u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF910:
    ctx->downcount -= 1;
    // 802CF910: li      r31, 6
    ctx->gpr[31] = (u32)(s32)(6);

label_802CF914:
    ctx->downcount -= 4;
    // 802CF914: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF918:
    // 802CF918: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF91C:
    // 802CF91C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF920:
    // 802CF920: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF924u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF924:
    ctx->downcount -= 3;
    // 802CF924: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF928:
    // 802CF928: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF92C:
    // 802CF92C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF930u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF930:
    ctx->downcount -= 1;
    // 802CF930: bl      0x8025EBF0
    {
            ctx->lr = 0x802CF934u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_802CF934:
    ctx->downcount -= 3;
    // 802CF934: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF938:
    // 802CF938: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF93C:
    // 802CF93C: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF940u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF940:
    ctx->pc = 0x802CF940u;
    ctx->downcount -= 2;
    // 802CF940: lfs     f1, -12860(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF940u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12860);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF944:
    // 802CF944: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF948u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF948:
    ctx->downcount -= 3;
    // 802CF948: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802CF94C:
    // 802CF94C: cmpwi   r31, 9
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF950:
    // 802CF950: bc    12, 0, 0x802CF914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF914u;
                return;
            }
            goto label_802CF914;
        }
    }

label_802CF954:
    ctx->downcount -= 1;
    // 802CF954: li      r31, 9
    ctx->gpr[31] = (u32)(s32)(9);

label_802CF958:
    ctx->downcount -= 2;
    // 802CF958: cmpwi   r31, 15
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF95C:
    // 802CF95C: bc    12, 2, 0x802CF994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CF994;
        }
    }

label_802CF960:
    ctx->downcount -= 4;
    // 802CF960: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF964:
    // 802CF964: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF968:
    // 802CF968: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CF96C:
    // 802CF96C: bl      0x8026FEF0
    {
            ctx->lr = 0x802CF970u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802CF970:
    ctx->downcount -= 3;
    // 802CF970: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF974:
    // 802CF974: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF978:
    // 802CF978: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF97Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF97C:
    ctx->downcount -= 1;
    // 802CF97C: bl      0x8025EC94
    {
            ctx->lr = 0x802CF980u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802CF980:
    ctx->downcount -= 3;
    // 802CF980: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CF984:
    // 802CF984: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802CF988:
    // 802CF988: bl      0x8026F6AC
    {
            ctx->lr = 0x802CF98Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802CF98C:
    ctx->pc = 0x802CF98Cu;
    ctx->downcount -= 2;
    // 802CF98C: lfs     f1, -12852(r2)
    if (!ppc_fp_available_inline(ctx, 0x802CF98Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12852);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802CF990:
    // 802CF990: bl      0x8025EBE8
    {
            ctx->lr = 0x802CF994u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802CF994:
    ctx->downcount -= 3;
    // 802CF994: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802CF998:
    // 802CF998: cmpwi   r31, 16
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(16);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CF99C:
    // 802CF99C: bc    12, 0, 0x802CF958
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF958u;
                return;
            }
            goto label_802CF958;
        }
    }

label_802CF9A0:
    ctx->downcount -= 11;
    // 802CF9A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802CF9A4:
    ctx->pc = 0x802CF9A4u;
    // 802CF9A4: stw     r0, 256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF9A8:
    ctx->pc = 0x802CF9A8u;
    // 802CF9A8: stb     r0, 260(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF9AC:
    ctx->pc = 0x802CF9ACu;
    // 802CF9AC: stb     r0, 261(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(261);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CF9B0:
    ctx->pc = 0x802CF9B0u;
    // 802CF9B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CF9B4:
    ctx->pc = 0x802CF9B4u;
    // 802CF9B4: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802CF9B8:
    ctx->pc = 0x802CF9B8u;
    // 802CF9B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CF9BC:
    ctx->pc = 0x802CF9BCu;
    // 802CF9BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CF9C0:
    // 802CF9C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CF9C4:
    ctx->pc = 0x802CF9C4u;
    // 802CF9C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CF9C8:
    ctx->pc = 0x802CF9C8u;
    ctx->downcount -= 22;
    // 802CF9C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CF9CC:
    ctx->pc = 0x802CF9CCu;
    // 802CF9CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CF9D0:
    // 802CF9D0: or   r7, r4, r4
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CF9D4:
    // 802CF9D4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802CF9D8:
    ctx->pc = 0x802CF9D8u;
    // 802CF9D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CF9DC:
    // 802CF9DC: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_802CF9E0:
    // 802CF9E0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802CF9E4:
    ctx->pc = 0x802CF9E4u;
    // 802CF9E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CF9E8:
    // 802CF9E8: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802CF9EC:
    // 802CF9EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CF9F0:
    // 802CF9F0: addi    r31, r31, 392
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(392);

label_802CF9F4:
    // 802CF9F4: bl      0x802CFE70
    {
            ctx->lr = 0x802CF9F8u;
            goto label_802CFE70;
    }

label_802CF9F8:
    ctx->downcount -= 14;
    // 802CF9F8: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_802CF9FC:
    // 802CF9FC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802CFA00:
    // 802CFA00: addi    r6, r6, 480
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(480);

label_802CFA04:
    ctx->pc = 0x802CFA04u;
    // 802CFA04: stw     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802CFA08:
    // 802CFA08: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_802CFA0C:
    // 802CFA0C: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_802CFA10:
    // 802CFA10: addi    r7, r6, 120
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(120);

label_802CFA14:
    // 802CFA14: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_802CFA18:
    ctx->pc = 0x802CFA18u;
    // 802CFA18: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802CFA1C:
    // 802CFA1C: addi    r5, r31, 12
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(12);

label_802CFA20:
    // 802CFA20: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802CFA24:
    ctx->pc = 0x802CFA24u;
    // 802CFA24: stw     r7, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802CFA28:
    ctx->pc = 0x802CFA28u;
    // 802CFA28: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFA2C:
    // 802CFA2C: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFA30u;
            goto label_802CFBA4;
    }

label_802CFA30:
    ctx->downcount -= 6;
    // 802CFA30: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_802CFA34:
    // 802CFA34: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802CFA38:
    // 802CFA38: addi    r4, r4, 22144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22144);

label_802CFA3C:
    // 802CFA3C: addi    r5, r31, 24
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(24);

label_802CFA40:
    // 802CFA40: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802CFA44:
    // 802CFA44: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFA48u;
            goto label_802CFBA4;
    }

label_802CFA48:
    ctx->downcount -= 5;
    // 802CFA48: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802CFA4C:
    // 802CFA4C: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_802CFA50:
    // 802CFA50: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_802CFA54:
    // 802CFA54: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_802CFA58:
    // 802CFA58: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFA5Cu;
            goto label_802CFBA4;
    }

label_802CFA5C:
    ctx->downcount -= 5;
    // 802CFA5C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802CFA60:
    // 802CFA60: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_802CFA64:
    // 802CFA64: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_802CFA68:
    // 802CFA68: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_802CFA6C:
    // 802CFA6C: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFA70u;
            goto label_802CFBA4;
    }

label_802CFA70:
    ctx->downcount -= 21;
    // 802CFA70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802CFA74:
    ctx->pc = 0x802CFA74u;
    // 802CFA74: stw     r0, 256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFA78:
    // 802CFA78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFA7C:
    ctx->pc = 0x802CFA7Cu;
    // 802CFA7C: stb     r0, 260(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CFA80:
    ctx->pc = 0x802CFA80u;
    // 802CFA80: stb     r0, 261(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(261);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802CFA84:
    ctx->pc = 0x802CFA84u;
    // 802CFA84: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CFA88:
    ctx->pc = 0x802CFA88u;
    // 802CFA88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFA8C:
    ctx->pc = 0x802CFA8Cu;
    // 802CFA8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFA90:
    // 802CFA90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFA94:
    ctx->pc = 0x802CFA94u;
    // 802CFA94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFA98:
    ctx->pc = 0x802CFA98u;
    ctx->downcount -= 18;
    // 802CFA98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFA9C:
    ctx->pc = 0x802CFA9Cu;
    // 802CFA9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFAA0:
    // 802CFAA0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFAA4:
    ctx->pc = 0x802CFAA4u;
    // 802CFAA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFAA8:
    ctx->pc = 0x802CFAA8u;
    // 802CFAA8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CFAAC:
    // 802CFAAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFAB0:
    // 802CFAB0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CFAB4:
    // 802CFAB4: bc    12, 2, 0x802CFAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFAE4;
        }
    }

label_802CFAB8:
    ctx->downcount -= 1;
    // 802CFAB8: bc    12, 2, 0x802CFAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFAD4;
        }
    }

label_802CFABC:
    ctx->downcount -= 3;
    // 802CFABC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802CFAC0:
    // 802CFAC0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802CFAC4:
    // 802CFAC4: bl      0x802CFB64
    {
            ctx->lr = 0x802CFAC8u;
            goto label_802CFB64;
    }

label_802CFAC8:
    ctx->downcount -= 3;
    // 802CFAC8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFACC:
    // 802CFACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CFAD0:
    // 802CFAD0: bl      0x801ED118
    {
            ctx->lr = 0x802CFAD4u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802CFAD4:
    ctx->downcount -= 2;
    // 802CFAD4: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFAD8:
    // 802CFAD8: bc    4, 1, 0x802CFAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CFAE4;
        }
    }

label_802CFADC:
    ctx->downcount -= 2;
    // 802CFADC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFAE0:
    // 802CFAE0: bl      0x801C1C90
    {
            ctx->lr = 0x802CFAE4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802CFAE4:
    ctx->downcount -= 17;
    // 802CFAE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFAE8:
    ctx->pc = 0x802CFAE8u;
    // 802CFAE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CFAEC:
    ctx->pc = 0x802CFAECu;
    // 802CFAEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFAF0:
    ctx->pc = 0x802CFAF0u;
    // 802CFAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFAF4:
    // 802CFAF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFAF8:
    ctx->pc = 0x802CFAF8u;
    // 802CFAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFAFC:
    ctx->pc = 0x802CFAFCu;
    ctx->downcount -= 18;
    // 802CFAFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFB00:
    ctx->pc = 0x802CFB00u;
    // 802CFB00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFB04:
    // 802CFB04: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFB08:
    ctx->pc = 0x802CFB08u;
    // 802CFB08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFB0C:
    ctx->pc = 0x802CFB0Cu;
    // 802CFB0C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CFB10:
    // 802CFB10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFB14:
    // 802CFB14: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CFB18:
    // 802CFB18: bc    12, 2, 0x802CFB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFB4C;
        }
    }

label_802CFB1C:
    ctx->downcount -= 1;
    // 802CFB1C: bc    12, 2, 0x802CFB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFB3C;
        }
    }

label_802CFB20:
    ctx->downcount -= 1;
    // 802CFB20: bc    12, 2, 0x802CFB3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFB3C;
        }
    }

label_802CFB24:
    ctx->downcount -= 3;
    // 802CFB24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CFB28:
    // 802CFB28: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802CFB2C:
    // 802CFB2C: bl      0x801ED098
    {
            ctx->lr = 0x802CFB30u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802CFB30:
    ctx->downcount -= 3;
    // 802CFB30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFB34:
    // 802CFB34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CFB38:
    // 802CFB38: bl      0x801ED058
    {
            ctx->lr = 0x802CFB3Cu;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802CFB3C:
    ctx->downcount -= 2;
    // 802CFB3C: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFB40:
    // 802CFB40: bc    4, 1, 0x802CFB4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CFB4C;
        }
    }

label_802CFB44:
    ctx->downcount -= 2;
    // 802CFB44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFB48:
    // 802CFB48: bl      0x801C1C90
    {
            ctx->lr = 0x802CFB4Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802CFB4C:
    ctx->downcount -= 17;
    // 802CFB4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802CFB50:
    ctx->pc = 0x802CFB50u;
    // 802CFB50: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CFB54:
    ctx->pc = 0x802CFB54u;
    // 802CFB54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFB58:
    ctx->pc = 0x802CFB58u;
    // 802CFB58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFB5C:
    // 802CFB5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFB60:
    ctx->pc = 0x802CFB60u;
    // 802CFB60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFB64:
    ctx->pc = 0x802CFB64u;
    ctx->downcount -= 7;
    // 802CFB64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFB68:
    ctx->pc = 0x802CFB68u;
    // 802CFB68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFB6C:
    // 802CFB6C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFB70:
    ctx->pc = 0x802CFB70u;
    // 802CFB70: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFB74:
    ctx->pc = 0x802CFB74u;
    // 802CFB74: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFB78:
    // 802CFB78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFB7C:
    // 802CFB7C: bc    12, 2, 0x802CFB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFB8C;
        }
    }

label_802CFB80:
    ctx->downcount -= 2;
    // 802CFB80: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFB84:
    // 802CFB84: bc    4, 1, 0x802CFB8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CFB8C;
        }
    }

label_802CFB88:
    ctx->downcount -= 1;
    // 802CFB88: bl      0x801C1C90
    {
            ctx->lr = 0x802CFB8Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802CFB8C:
    ctx->downcount -= 7;
    // 802CFB8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFB90:
    ctx->pc = 0x802CFB90u;
    // 802CFB90: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFB94:
    ctx->pc = 0x802CFB94u;
    // 802CFB94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFB98:
    ctx->pc = 0x802CFB98u;
    // 802CFB98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFB9C:
    // 802CFB9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFBA0:
    ctx->pc = 0x802CFBA0u;
    // 802CFBA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFBA4:
    ctx->pc = 0x802CFBA4u;
    ctx->downcount -= 20;
    // 802CFBA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFBA8:
    ctx->pc = 0x802CFBA8u;
    // 802CFBA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFBAC:
    ctx->pc = 0x802CFBACu;
    // 802CFBAC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFBB0:
    ctx->pc = 0x802CFBB0u;
    // 802CFBB0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CFBB4:
    // 802CFBB4: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802CFBB8:
    // 802CFBB8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CFBBC:
    // 802CFBBC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFBC0:
    // 802CFBC0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802CFBC4:
    // 802CFBC4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFBC8:
    // 802CFBC8: bl      0x803456D0
    {
            ctx->lr = 0x802CFBCCu;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802CFBCC:
    ctx->downcount -= 34;
    // 802CFBCC: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802CFBD0:
    ctx->pc = 0x802CFBD0u;
    // 802CFBD0: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFBD4:
    ctx->pc = 0x802CFBD4u;
    // 802CFBD4: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802CFBD8:
    ctx->pc = 0x802CFBD8u;
    // 802CFBD8: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802CFBDC:
    // 802CFBDC: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802CFBE0:
    ctx->pc = 0x802CFBE0u;
    // 802CFBE0: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFBE4:
    ctx->pc = 0x802CFBE4u;
    // 802CFBE4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802CFBE8:
    ctx->pc = 0x802CFBE8u;
    // 802CFBE8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802CFBEC:
    ctx->pc = 0x802CFBECu;
    // 802CFBEC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802CFBF0:
    ctx->pc = 0x802CFBF0u;
    // 802CFBF0: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802CFBF4:
    ctx->pc = 0x802CFBF4u;
    // 802CFBF4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFBF8:
    ctx->pc = 0x802CFBF8u;
    // 802CFBF8: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFBFC:
    ctx->pc = 0x802CFBFCu;
    // 802CFBFC: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802CFC00:
    ctx->pc = 0x802CFC00u;
    // 802CFC00: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802CFC04:
    ctx->pc = 0x802CFC04u;
    // 802CFC04: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802CFC08:
    ctx->pc = 0x802CFC08u;
    // 802CFC08: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFC0C:
    ctx->pc = 0x802CFC0Cu;
    // 802CFC0C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CFC10:
    ctx->pc = 0x802CFC10u;
    // 802CFC10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFC14:
    ctx->pc = 0x802CFC14u;
    // 802CFC14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFC18:
    // 802CFC18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802CFC1C:
    ctx->pc = 0x802CFC1Cu;
    // 802CFC1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC20:
    ctx->downcount -= 2;
    // 802CFC20: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802CFC24:
    ctx->pc = 0x802CFC24u;
    // 802CFC24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC28:
    ctx->downcount -= 2;
    // 802CFC28: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802CFC2C:
    ctx->pc = 0x802CFC2Cu;
    // 802CFC2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC30:
    ctx->pc = 0x802CFC30u;
    ctx->downcount -= 10;
    // 802CFC30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFC34:
    ctx->pc = 0x802CFC34u;
    // 802CFC34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFC38:
    ctx->pc = 0x802CFC38u;
    // 802CFC38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFC3C:
    ctx->pc = 0x802CFC3Cu;
    // 802CFC3C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFC40:
    // 802CFC40: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFC44:
    ctx->pc = 0x802CFC44u;
    // 802CFC44: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFC48:
    ctx->pc = 0x802CFC48u;
    // 802CFC48: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFC4C:
    ctx->pc = 0x802CFC4Cu;
    // 802CFC4C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFC50:
    ctx->pc = 0x802CFC50u;
    // 802CFC50: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFC54u;
            ctx->pc = target;
            return;
        }
    }

label_802CFC54:
    ctx->downcount -= 2;
    // 802CFC54: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802CFC58:
    // 802CFC58: bl      0x802D0240
    {
            ctx->lr = 0x802CFC5Cu;
            goto label_802D0240;
    }

label_802CFC5C:
    ctx->pc = 0x802CFC5Cu;
    ctx->downcount -= 6;
    // 802CFC5C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFC60:
    // 802CFC60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFC64:
    ctx->pc = 0x802CFC64u;
    // 802CFC64: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFC68:
    ctx->pc = 0x802CFC68u;
    // 802CFC68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFC6C:
    ctx->pc = 0x802CFC6Cu;
    // 802CFC6C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFC70u;
            ctx->pc = target;
            return;
        }
    }

label_802CFC70:
    ctx->pc = 0x802CFC70u;
    ctx->downcount -= 6;
    // 802CFC70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFC74:
    ctx->pc = 0x802CFC74u;
    // 802CFC74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFC78:
    ctx->pc = 0x802CFC78u;
    // 802CFC78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFC7C:
    // 802CFC7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFC80:
    ctx->pc = 0x802CFC80u;
    // 802CFC80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC84:
    ctx->downcount -= 2;
    // 802CFC84: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802CFC88:
    ctx->pc = 0x802CFC88u;
    // 802CFC88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC8C:
    ctx->downcount -= 2;
    // 802CFC8C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802CFC90:
    ctx->pc = 0x802CFC90u;
    // 802CFC90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFC94:
    ctx->pc = 0x802CFC94u;
    ctx->downcount -= 7;
    // 802CFC94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFC98:
    ctx->pc = 0x802CFC98u;
    // 802CFC98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFC9C:
    ctx->pc = 0x802CFC9Cu;
    // 802CFC9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFCA0:
    ctx->pc = 0x802CFCA0u;
    // 802CFCA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFCA4:
    // 802CFCA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFCA8:
    // 802CFCA8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CFCAC:
    // 802CFCAC: bl      0x8026FF08
    {
            ctx->lr = 0x802CFCB0u;
            ctx->pc = 0x8026FF08u;
            return;
    }

label_802CFCB0:
    ctx->downcount -= 2;
    // 802CFCB0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFCB4:
    // 802CFCB4: bc    12, 2, 0x802CFCE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802CFCE0;
        }
    }

label_802CFCB8:
    ctx->pc = 0x802CFCB8u;
    ctx->downcount -= 6;
    // 802CFCB8: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFCBC:
    // 802CFCBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFCC0:
    ctx->pc = 0x802CFCC0u;
    // 802CFCC0: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFCC4:
    ctx->pc = 0x802CFCC4u;
    // 802CFCC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFCC8:
    ctx->pc = 0x802CFCC8u;
    // 802CFCC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFCCCu;
            ctx->pc = target;
            return;
        }
    }

label_802CFCCC:
    ctx->pc = 0x802CFCCCu;
    ctx->downcount -= 6;
    // 802CFCCC: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFCD0:
    // 802CFCD0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFCD4:
    ctx->pc = 0x802CFCD4u;
    // 802CFCD4: lwz     r12, 112(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(112);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFCD8:
    ctx->pc = 0x802CFCD8u;
    // 802CFCD8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFCDC:
    ctx->pc = 0x802CFCDCu;
    // 802CFCDC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFCE0u;
            ctx->pc = target;
            return;
        }
    }

label_802CFCE0:
    ctx->pc = 0x802CFCE0u;
    ctx->downcount -= 6;
    // 802CFCE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFCE4:
    ctx->pc = 0x802CFCE4u;
    // 802CFCE4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFCE8:
    ctx->pc = 0x802CFCE8u;
    // 802CFCE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFCEC:
    // 802CFCEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFCF0:
    ctx->pc = 0x802CFCF0u;
    // 802CFCF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFCF4:
    ctx->downcount -= 2;
    // 802CFCF4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CFCF8:
    // 802CFCF8: b       0x80277724
    {
            ctx->pc = 0x80277724u;
            return;
    }

label_802CFCFC:
    ctx->pc = 0x802CFCFCu;
    ctx->downcount -= 10;
    // 802CFCFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFD00:
    ctx->pc = 0x802CFD00u;
    // 802CFD00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFD04:
    ctx->pc = 0x802CFD04u;
    // 802CFD04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFD08:
    ctx->pc = 0x802CFD08u;
    // 802CFD08: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFD0C:
    // 802CFD0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFD10:
    ctx->pc = 0x802CFD10u;
    // 802CFD10: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFD14:
    ctx->pc = 0x802CFD14u;
    // 802CFD14: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFD18:
    ctx->pc = 0x802CFD18u;
    // 802CFD18: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFD1C:
    ctx->pc = 0x802CFD1Cu;
    // 802CFD1C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFD20u;
            ctx->pc = target;
            return;
        }
    }

label_802CFD20:
    ctx->downcount -= 2;
    // 802CFD20: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFD24:
    // 802CFD24: bc    4, 2, 0x802CFD30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CFD30;
        }
    }

label_802CFD28:
    ctx->downcount -= 2;
    // 802CFD28: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFD2C:
    // 802CFD2C: bl      0x802777A8
    {
            ctx->lr = 0x802CFD30u;
            ctx->pc = 0x802777A8u;
            return;
    }

label_802CFD30:
    ctx->pc = 0x802CFD30u;
    ctx->downcount -= 6;
    // 802CFD30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFD34:
    ctx->pc = 0x802CFD34u;
    // 802CFD34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFD38:
    ctx->pc = 0x802CFD38u;
    // 802CFD38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFD3C:
    // 802CFD3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFD40:
    ctx->pc = 0x802CFD40u;
    // 802CFD40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFD44:
    ctx->pc = 0x802CFD44u;
    ctx->downcount -= 10;
    // 802CFD44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFD48:
    ctx->pc = 0x802CFD48u;
    // 802CFD48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFD4C:
    ctx->pc = 0x802CFD4Cu;
    // 802CFD4C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFD50:
    ctx->pc = 0x802CFD50u;
    // 802CFD50: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFD54:
    // 802CFD54: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFD58:
    ctx->pc = 0x802CFD58u;
    // 802CFD58: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFD5C:
    ctx->pc = 0x802CFD5Cu;
    // 802CFD5C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFD60:
    ctx->pc = 0x802CFD60u;
    // 802CFD60: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFD64:
    ctx->pc = 0x802CFD64u;
    // 802CFD64: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFD68u;
            ctx->pc = target;
            return;
        }
    }

label_802CFD68:
    ctx->downcount -= 2;
    // 802CFD68: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFD6C:
    // 802CFD6C: bc    4, 2, 0x802CFD78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802CFD78;
        }
    }

label_802CFD70:
    ctx->downcount -= 2;
    // 802CFD70: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFD74:
    // 802CFD74: bl      0x80277808
    {
            ctx->lr = 0x802CFD78u;
            ctx->pc = 0x80277808u;
            return;
    }

label_802CFD78:
    ctx->pc = 0x802CFD78u;
    ctx->downcount -= 6;
    // 802CFD78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFD7C:
    ctx->pc = 0x802CFD7Cu;
    // 802CFD7C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFD80:
    ctx->pc = 0x802CFD80u;
    // 802CFD80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFD84:
    // 802CFD84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFD88:
    ctx->pc = 0x802CFD88u;
    // 802CFD88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFD8C:
    ctx->pc = 0x802CFD8Cu;
    ctx->downcount -= 7;
    // 802CFD8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFD90:
    ctx->pc = 0x802CFD90u;
    // 802CFD90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFD94:
    ctx->pc = 0x802CFD94u;
    // 802CFD94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFD98:
    ctx->pc = 0x802CFD98u;
    // 802CFD98: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFD9C:
    // 802CFD9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFDA0:
    // 802CFDA0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CFDA4:
    // 802CFDA4: bl      0x802700EC
    {
            ctx->lr = 0x802CFDA8u;
            ctx->pc = 0x802700ECu;
            return;
    }

label_802CFDA8:
    ctx->downcount -= 2;
    // 802CFDA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFDAC:
    // 802CFDAC: bl      0x802A609C
    {
            ctx->lr = 0x802CFDB0u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802CFDB0:
    ctx->pc = 0x802CFDB0u;
    ctx->downcount -= 6;
    // 802CFDB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFDB4:
    ctx->pc = 0x802CFDB4u;
    // 802CFDB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFDB8:
    ctx->pc = 0x802CFDB8u;
    // 802CFDB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFDBC:
    // 802CFDBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFDC0:
    ctx->pc = 0x802CFDC0u;
    // 802CFDC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFDC4:
    ctx->pc = 0x802CFDC4u;
    ctx->downcount -= 9;
    // 802CFDC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFDC8:
    ctx->pc = 0x802CFDC8u;
    // 802CFDC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFDCC:
    // 802CFDCC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802CFDD0:
    ctx->pc = 0x802CFDD0u;
    // 802CFDD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFDD4:
    ctx->pc = 0x802CFDD4u;
    // 802CFDD4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFDD8:
    // 802CFDD8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFDDC:
    ctx->pc = 0x802CFDDCu;
    // 802CFDDC: lbz     r4, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802CFDE0:
    // 802CFDE0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802CFDE4:
    // 802CFDE4: bl      0x8027765C
    {
            ctx->lr = 0x802CFDE8u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_802CFDE8:
    ctx->downcount -= 2;
    // 802CFDE8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFDEC:
    // 802CFDEC: bl      0x8026FFE0
    {
            ctx->lr = 0x802CFDF0u;
            ctx->pc = 0x8026FFE0u;
            return;
    }

label_802CFDF0:
    ctx->pc = 0x802CFDF0u;
    ctx->downcount -= 4;
    // 802CFDF0: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802CFDF4:
    // 802CFDF4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802CFDF8:
    // 802CFDF8: addi    r4, r4, 3
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3);

label_802CFDFC:
    // 802CFDFC: bl      0x803457B8
    {
            ctx->lr = 0x802CFE00u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802CFE00:
    ctx->pc = 0x802CFE00u;
    ctx->downcount -= 6;
    // 802CFE00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFE04:
    ctx->pc = 0x802CFE04u;
    // 802CFE04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFE08:
    ctx->pc = 0x802CFE08u;
    // 802CFE08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFE0C:
    // 802CFE0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFE10:
    ctx->pc = 0x802CFE10u;
    // 802CFE10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFE14:
    ctx->pc = 0x802CFE14u;
    ctx->downcount -= 10;
    // 802CFE14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFE18:
    ctx->pc = 0x802CFE18u;
    // 802CFE18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFE1C:
    ctx->pc = 0x802CFE1Cu;
    // 802CFE1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFE20:
    ctx->pc = 0x802CFE20u;
    // 802CFE20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802CFE24:
    // 802CFE24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFE28:
    ctx->pc = 0x802CFE28u;
    // 802CFE28: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFE2C:
    ctx->pc = 0x802CFE2Cu;
    // 802CFE2C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802CFE30:
    ctx->pc = 0x802CFE30u;
    // 802CFE30: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802CFE34:
    ctx->pc = 0x802CFE34u;
    // 802CFE34: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802CFE38u;
            ctx->pc = target;
            return;
        }
    }

label_802CFE38:
    ctx->downcount -= 4;
    // 802CFE38: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFE3C:
    // 802CFE3C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFE40:
    // 802CFE40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802CFE44:
    // 802CFE44: bl      0x8027765C
    {
            ctx->lr = 0x802CFE48u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_802CFE48:
    ctx->downcount -= 2;
    // 802CFE48: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802CFE4C:
    // 802CFE4C: bl      0x80277768
    {
            ctx->lr = 0x802CFE50u;
            ctx->pc = 0x80277768u;
            return;
    }

label_802CFE50:
    ctx->pc = 0x802CFE50u;
    ctx->downcount -= 3;
    // 802CFE50: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802CFE54:
    // 802CFE54: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802CFE58:
    // 802CFE58: bl      0x803457B8
    {
            ctx->lr = 0x802CFE5Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802CFE5C:
    ctx->pc = 0x802CFE5Cu;
    ctx->downcount -= 6;
    // 802CFE5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFE60:
    ctx->pc = 0x802CFE60u;
    // 802CFE60: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802CFE64:
    ctx->pc = 0x802CFE64u;
    // 802CFE64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFE68:
    // 802CFE68: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802CFE6C:
    ctx->pc = 0x802CFE6Cu;
    // 802CFE6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFE70:
    ctx->pc = 0x802CFE70u;
    ctx->downcount -= 23;
    // 802CFE70: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFE74:
    ctx->pc = 0x802CFE74u;
    // 802CFE74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFE78:
    ctx->pc = 0x802CFE78u;
    // 802CFE78: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFE7C:
    ctx->pc = 0x802CFE7Cu;
    // 802CFE7C: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CFE80:
    // 802CFE80: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802CFE84:
    // 802CFE84: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802CFE88:
    // 802CFE88: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802CFE8C:
    // 802CFE8C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFE90:
    // 802CFE90: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802CFE94:
    // 802CFE94: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802CFE98:
    // 802CFE98: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFE9C:
    // 802CFE9C: addi    r30, r30, 392
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(392);

label_802CFEA0:
    // 802CFEA0: bl      0x802A6748
    {
            ctx->lr = 0x802CFEA4u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802CFEA4:
    ctx->downcount -= 7;
    // 802CFEA4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802CFEA8:
    // 802CFEA8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802CFEAC:
    // 802CFEAC: addi    r4, r4, 1104
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1104);

label_802CFEB0:
    ctx->pc = 0x802CFEB0u;
    // 802CFEB0: stw     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802CFEB4:
    // 802CFEB4: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802CFEB8:
    ctx->pc = 0x802CFEB8u;
    // 802CFEB8: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFEBC:
    // 802CFEBC: bl      0x801ED17C
    {
            ctx->lr = 0x802CFEC0u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802CFEC0:
    ctx->downcount -= 6;
    // 802CFEC0: add   r5, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802CFEC4:
    // 802CFEC4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802CFEC8:
    // 802CFEC8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFECC:
    // 802CFECC: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFED0:
    // 802CFED0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_802CFED4:
    // 802CFED4: bl      0x802D00C4
    {
            ctx->lr = 0x802CFED8u;
            goto label_802D00C4;
    }

label_802CFED8:
    ctx->downcount -= 3;
    // 802CFED8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802CFEDC:
    // 802CFEDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802CFEE0:
    // 802CFEE0: bl      0x802A5D48
    {
            ctx->lr = 0x802CFEE4u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802CFEE4:
    ctx->downcount -= 6;
    // 802CFEE4: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFEE8:
    // 802CFEE8: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFEEC:
    // 802CFEEC: addi    r4, r30, 408
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(408);

label_802CFEF0:
    // 802CFEF0: addi    r5, r30, 420
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(420);

label_802CFEF4:
    // 802CFEF4: addi    r6, r30, 432
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(432);

label_802CFEF8:
    // 802CFEF8: bl      0x802D01E4
    {
            ctx->lr = 0x802CFEFCu;
            goto label_802D01E4;
    }

label_802CFEFC:
    ctx->downcount -= 2;
    // 802CFEFC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802CFF00:
    // 802CFF00: bl      0x802A609C
    {
            ctx->lr = 0x802CFF04u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802CFF04:
    ctx->downcount -= 5;
    // 802CFF04: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802CFF08:
    // 802CFF08: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802CFF0C:
    // 802CFF0C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802CFF10:
    // 802CFF10: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802CFF14:
    // 802CFF14: bl      0x8027055C
    {
            ctx->lr = 0x802CFF18u;
            ctx->pc = 0x8027055Cu;
            return;
    }

label_802CFF18:
    ctx->downcount -= 14;
    // 802CFF18: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_802CFF1C:
    ctx->pc = 0x802CFF1Cu;
    // 802CFF1C: stw     r27, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_802CFF20:
    // 802CFF20: addi    r5, r5, 840
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(840);

label_802CFF24:
    // 802CFF24: addi    r4, r30, 360
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(360);

label_802CFF28:
    // 802CFF28: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_802CFF2C:
    ctx->pc = 0x802CFF2Cu;
    // 802CFF2C: stw     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802CFF30:
    // 802CFF30: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_802CFF34:
    // 802CFF34: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_802CFF38:
    ctx->pc = 0x802CFF38u;
    // 802CFF38: stw     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802CFF3C:
    // 802CFF3C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_802CFF40:
    // 802CFF40: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_802CFF44:
    ctx->pc = 0x802CFF44u;
    // 802CFF44: stw     r6, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802CFF48:
    ctx->pc = 0x802CFF48u;
    // 802CFF48: stw     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFF4C:
    // 802CFF4C: bl      0x8000770C
    {
            ctx->lr = 0x802CFF50u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_802CFF50:
    ctx->downcount -= 6;
    // 802CFF50: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_802CFF54:
    ctx->pc = 0x802CFF54u;
    // 802CFF54: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802CFF58:
    // 802CFF58: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFF5C:
    // 802CFF5C: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFF60:
    // 802CFF60: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802CFF64:
    // 802CFF64: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFF68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFBA4u;
                return;
            }
            goto label_802CFBA4;
    }

label_802CFF68:
    ctx->downcount -= 4;
    // 802CFF68: addi    r4, r30, 372
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(372);

label_802CFF6C:
    // 802CFF6C: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_802CFF70:
    // 802CFF70: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_802CFF74:
    // 802CFF74: bl      0x8000770C
    {
            ctx->lr = 0x802CFF78u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_802CFF78:
    ctx->pc = 0x802CFF78u;
    ctx->downcount -= 6;
    // 802CFF78: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802CFF7C:
    // 802CFF7C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFF80:
    // 802CFF80: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFF84:
    // 802CFF84: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802CFF88:
    // 802CFF88: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802CFF8C:
    // 802CFF8C: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFF90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFBA4u;
                return;
            }
            goto label_802CFBA4;
    }

label_802CFF90:
    ctx->downcount -= 4;
    // 802CFF90: addi    r4, r30, 384
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(384);

label_802CFF94:
    // 802CFF94: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_802CFF98:
    // 802CFF98: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_802CFF9C:
    // 802CFF9C: bl      0x8000770C
    {
            ctx->lr = 0x802CFFA0u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_802CFFA0:
    ctx->pc = 0x802CFFA0u;
    ctx->downcount -= 6;
    // 802CFFA0: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802CFFA4:
    // 802CFFA4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802CFFA8:
    // 802CFFA8: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFFAC:
    // 802CFFAC: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802CFFB0:
    // 802CFFB0: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_802CFFB4:
    // 802CFFB4: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFFB8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFBA4u;
                return;
            }
            goto label_802CFBA4;
    }

label_802CFFB8:
    ctx->pc = 0x802CFFB8u;
    ctx->downcount -= 6;
    // 802CFFB8: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802CFFBC:
    // 802CFFBC: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_802CFFC0:
    // 802CFFC0: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802CFFC4:
    // 802CFFC4: addi    r5, r30, 396
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(396);

label_802CFFC8:
    // 802CFFC8: addi    r6, r6, 3
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3);

label_802CFFCC:
    // 802CFFCC: bl      0x802CFBA4
    {
            ctx->lr = 0x802CFFD0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFBA4u;
                return;
            }
            goto label_802CFBA4;
    }

label_802CFFD0:
    ctx->downcount -= 17;
    // 802CFFD0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802CFFD4:
    ctx->pc = 0x802CFFD4u;
    // 802CFFD4: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802CFFD8:
    ctx->pc = 0x802CFFD8u;
    // 802CFFD8: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802CFFDC:
    ctx->pc = 0x802CFFDCu;
    // 802CFFDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802CFFE0:
    // 802CFFE0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_802CFFE4:
    ctx->pc = 0x802CFFE4u;
    // 802CFFE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802CFFE8:
    ctx->pc = 0x802CFFE8u;
    ctx->downcount -= 18;
    // 802CFFE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802CFFEC:
    ctx->pc = 0x802CFFECu;
    // 802CFFEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802CFFF0:
    // 802CFFF0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802CFFF4:
    ctx->pc = 0x802CFFF4u;
    // 802CFFF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802CFFF8:
    ctx->pc = 0x802CFFF8u;
    // 802CFFF8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802CFFFC:
    // 802CFFFC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0000:
    // 802D0000: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D0004:
    // 802D0004: bc    12, 2, 0x802D0034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0034;
        }
    }

label_802D0008:
    ctx->downcount -= 1;
    // 802D0008: bc    12, 2, 0x802D0024
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0024;
        }
    }

label_802D000C:
    ctx->downcount -= 3;
    // 802D000C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0010:
    // 802D0010: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802D0014:
    // 802D0014: bl      0x801F5C24
    {
            ctx->lr = 0x802D0018u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802D0018:
    ctx->downcount -= 3;
    // 802D0018: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D001C:
    // 802D001C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0020:
    // 802D0020: bl      0x802CFAFC
    {
            ctx->lr = 0x802D0024u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFAFCu;
                return;
            }
            goto label_802CFAFC;
    }

label_802D0024:
    ctx->downcount -= 2;
    // 802D0024: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0028:
    // 802D0028: bc    4, 1, 0x802D0034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0034;
        }
    }

label_802D002C:
    ctx->downcount -= 2;
    // 802D002C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0030:
    // 802D0030: bl      0x801C1C90
    {
            ctx->lr = 0x802D0034u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D0034:
    ctx->downcount -= 17;
    // 802D0034: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0038:
    ctx->pc = 0x802D0038u;
    // 802D0038: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D003C:
    ctx->pc = 0x802D003Cu;
    // 802D003C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0040:
    ctx->pc = 0x802D0040u;
    // 802D0040: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0044:
    // 802D0044: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0048:
    ctx->pc = 0x802D0048u;
    // 802D0048: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D004C:
    ctx->pc = 0x802D004Cu;
    ctx->downcount -= 9;
    // 802D004C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0050:
    ctx->pc = 0x802D0050u;
    // 802D0050: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0054:
    // 802D0054: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_802D0058:
    ctx->pc = 0x802D0058u;
    // 802D0058: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D005C:
    ctx->pc = 0x802D005Cu;
    // 802D005C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0060:
    // 802D0060: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0064:
    ctx->pc = 0x802D0064u;
    // 802D0064: lbz     r4, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802D0068:
    // 802D0068: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802D006C:
    // 802D006C: bl      0x8027765C
    {
            ctx->lr = 0x802D0070u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_802D0070:
    ctx->downcount -= 2;
    // 802D0070: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802D0074:
    // 802D0074: bl      0x802704F8
    {
            ctx->lr = 0x802D0078u;
            ctx->pc = 0x802704F8u;
            return;
    }

label_802D0078:
    ctx->pc = 0x802D0078u;
    ctx->downcount -= 6;
    // 802D0078: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D007C:
    // 802D007C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0080:
    ctx->pc = 0x802D0080u;
    // 802D0080: lwz     r12, 256(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(256);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0084:
    ctx->pc = 0x802D0084u;
    // 802D0084: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0088:
    ctx->pc = 0x802D0088u;
    // 802D0088: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D008Cu;
            ctx->pc = target;
            return;
        }
    }

label_802D008C:
    ctx->pc = 0x802D008Cu;
    ctx->downcount -= 3;
    // 802D008C: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0090:
    // 802D0090: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_802D0094:
    // 802D0094: bl      0x803457B8
    {
            ctx->lr = 0x802D0098u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D0098:
    ctx->pc = 0x802D0098u;
    ctx->downcount -= 6;
    // 802D0098: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D009C:
    // 802D009C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802D00A0:
    ctx->pc = 0x802D00A0u;
    // 802D00A0: lwz     r12, 108(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(108);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D00A4:
    ctx->pc = 0x802D00A4u;
    // 802D00A4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D00A8:
    ctx->pc = 0x802D00A8u;
    // 802D00A8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D00ACu;
            ctx->pc = target;
            return;
        }
    }

label_802D00AC:
    ctx->pc = 0x802D00ACu;
    ctx->downcount -= 6;
    // 802D00AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D00B0:
    ctx->pc = 0x802D00B0u;
    // 802D00B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D00B4:
    ctx->pc = 0x802D00B4u;
    // 802D00B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D00B8:
    // 802D00B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D00BC:
    ctx->pc = 0x802D00BCu;
    // 802D00BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D00C0:
    ctx->pc = 0x802D00C0u;
    ctx->downcount -= 1;
    // 802D00C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D00C4:
    ctx->pc = 0x802D00C4u;
    ctx->downcount -= 17;
    // 802D00C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D00C8:
    ctx->pc = 0x802D00C8u;
    // 802D00C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D00CC:
    ctx->pc = 0x802D00CCu;
    // 802D00CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D00D0:
    ctx->pc = 0x802D00D0u;
    // 802D00D0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D00D4:
    // 802D00D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D00D8:
    // 802D00D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D00DC:
    // 802D00DC: bl      0x803457F4
    {
            ctx->lr = 0x802D00E0u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802D00E0:
    ctx->pc = 0x802D00E0u;
    ctx->downcount -= 11;
    // 802D00E0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D00E4:
    // 802D00E4: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D00E8:
    // 802D00E8: addi    r3, r3, 1348
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1348);

label_802D00EC:
    ctx->pc = 0x802D00ECu;
    // 802D00EC: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D00F0:
    // 802D00F0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D00F4:
    ctx->pc = 0x802D00F4u;
    // 802D00F4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D00F8:
    ctx->pc = 0x802D00F8u;
    // 802D00F8: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802D00FC:
    // 802D00FC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D0100:
    // 802D0100: bl      0x801C1C80
    {
            ctx->lr = 0x802D0104u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D0104:
    ctx->pc = 0x802D0104u;
    ctx->downcount -= 8;
    // 802D0104: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0108:
    // 802D0108: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D010C:
    ctx->pc = 0x802D010Cu;
    // 802D010C: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0110:
    // 802D0110: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D0114:
    ctx->pc = 0x802D0114u;
    // 802D0114: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0118:
    // 802D0118: bl      0x801C1C80
    {
            ctx->lr = 0x802D011Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D011C:
    ctx->pc = 0x802D011Cu;
    ctx->downcount -= 8;
    // 802D011C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0120:
    // 802D0120: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D0124:
    ctx->pc = 0x802D0124u;
    // 802D0124: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0128:
    // 802D0128: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D012C:
    ctx->pc = 0x802D012Cu;
    // 802D012C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0130:
    // 802D0130: bl      0x801C1C80
    {
            ctx->lr = 0x802D0134u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D0134:
    ctx->downcount -= 6;
    // 802D0134: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802D0138:
    ctx->pc = 0x802D0138u;
    // 802D0138: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D013C:
    // 802D013C: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802D0140:
    // 802D0140: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D0144:
    // 802D0144: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D0148:
    // 802D0148: b       0x802D01B4
    {
            goto label_802D01B4;
    }

label_802D014C:
    loop_802D014C(ctx);
    if (ctx->pc == 0x802D01C0u) goto label_802D01C0;
    return;
label_802D0150:
    // 802D0150: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802D0154:
    ctx->pc = 0x802D0154u;
    // 802D0154: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0158:
    // 802D0158: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D015C:
    ctx->pc = 0x802D015Cu;
    // 802D015C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0160:
    ctx->pc = 0x802D0160u;
    // 802D0160: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D0164:
    ctx->pc = 0x802D0164u;
    // 802D0164: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0168:
    ctx->pc = 0x802D0168u;
    // 802D0168: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D016C:
    ctx->pc = 0x802D016Cu;
    // 802D016C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0170:
    ctx->pc = 0x802D0170u;
    // 802D0170: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0174:
    ctx->pc = 0x802D0174u;
    // 802D0174: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0178:
    // 802D0178: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D017C:
    ctx->pc = 0x802D017Cu;
    // 802D017C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0180:
    ctx->pc = 0x802D0180u;
    // 802D0180: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D0184:
    ctx->pc = 0x802D0184u;
    // 802D0184: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0188:
    ctx->pc = 0x802D0188u;
    // 802D0188: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D018C:
    ctx->pc = 0x802D018Cu;
    // 802D018C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0190:
    ctx->pc = 0x802D0190u;
    // 802D0190: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0194:
    ctx->pc = 0x802D0194u;
    // 802D0194: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0198:
    // 802D0198: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D019C:
    ctx->pc = 0x802D019Cu;
    // 802D019C: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D01A0:
    ctx->pc = 0x802D01A0u;
    // 802D01A0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D01A4:
    // 802D01A4: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802D01A8:
    ctx->pc = 0x802D01A8u;
    // 802D01A8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D01AC:
    ctx->pc = 0x802D01ACu;
    // 802D01AC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D01B0:
    ctx->pc = 0x802D01B0u;
    // 802D01B0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D01B4:
    ctx->pc = 0x802D01B4u;
    ctx->downcount -= 3;
    // 802D01B4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D01B8:
    // 802D01B8: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D01BC:
    // 802D01BC: bc    12, 0, 0x802D014C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D014Cu;
                return;
            }
            goto label_802D014C;
        }
    }

label_802D01C0:
    ctx->downcount -= 3;
    // 802D01C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D01C4:
    // 802D01C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D01C8:
    // 802D01C8: bl      0x803457CC
    {
            ctx->lr = 0x802D01CCu;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802D01CC:
    ctx->downcount -= 17;
    // 802D01CC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D01D0:
    ctx->pc = 0x802D01D0u;
    // 802D01D0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D01D4:
    ctx->pc = 0x802D01D4u;
    // 802D01D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D01D8:
    ctx->pc = 0x802D01D8u;
    // 802D01D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D01DC:
    // 802D01DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D01E0:
    ctx->pc = 0x802D01E0u;
    // 802D01E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D01E4:
    ctx->pc = 0x802D01E4u;
    ctx->downcount -= 19;
    // 802D01E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D01E8:
    ctx->pc = 0x802D01E8u;
    // 802D01E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D01EC:
    ctx->pc = 0x802D01ECu;
    // 802D01EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D01F0:
    ctx->pc = 0x802D01F0u;
    // 802D01F0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D01F4:
    // 802D01F4: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802D01F8:
    // 802D01F8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D01FC:
    // 802D01FC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0200:
    // 802D0200: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0204:
    // 802D0204: bl      0x802CFBA4
    {
            ctx->lr = 0x802D0208u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFBA4u;
                return;
            }
            goto label_802CFBA4;
    }

label_802D0208:
    ctx->downcount -= 27;
    // 802D0208: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802D020C:
    ctx->pc = 0x802D020Cu;
    // 802D020C: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0210:
    ctx->pc = 0x802D0210u;
    // 802D0210: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0214:
    ctx->pc = 0x802D0214u;
    // 802D0214: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0218:
    // 802D0218: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D021C:
    ctx->pc = 0x802D021Cu;
    // 802D021C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0220:
    ctx->pc = 0x802D0220u;
    // 802D0220: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D0224:
    ctx->pc = 0x802D0224u;
    // 802D0224: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0228:
    ctx->pc = 0x802D0228u;
    // 802D0228: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D022C:
    ctx->pc = 0x802D022Cu;
    // 802D022C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D0230:
    ctx->pc = 0x802D0230u;
    // 802D0230: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0234:
    ctx->pc = 0x802D0234u;
    // 802D0234: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0238:
    // 802D0238: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D023C:
    ctx->pc = 0x802D023Cu;
    // 802D023C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0240:
    ctx->pc = 0x802D0240u;
    ctx->downcount -= 8;
    // 802D0240: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0244:
    ctx->pc = 0x802D0244u;
    // 802D0244: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0248:
    ctx->pc = 0x802D0248u;
    // 802D0248: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D024C:
    ctx->pc = 0x802D024Cu;
    // 802D024C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0250:
    // 802D0250: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0254:
    ctx->pc = 0x802D0254u;
    // 802D0254: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D0258:
    // 802D0258: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D025C:
    // 802D025C: bc    12, 2, 0x802D0280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0280;
        }
    }

label_802D0260:
    ctx->pc = 0x802D0260u;
    ctx->downcount -= 3;
    // 802D0260: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D0264:
    // 802D0264: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0268:
    // 802D0268: bc    12, 2, 0x802D0270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0270;
        }
    }

label_802D026C:
    ctx->downcount -= 1;
    // 802D026C: bl      0x802D0364
    {
            ctx->lr = 0x802D0270u;
            goto label_802D0364;
    }

label_802D0270:
    ctx->downcount -= 2;
    // 802D0270: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0274:
    // 802D0274: bl      0x803456D4
    {
            ctx->lr = 0x802D0278u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802D0278:
    ctx->downcount -= 2;
    // 802D0278: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D027C:
    // 802D027C: bl      0x802D02A4
    {
            ctx->lr = 0x802D0280u;
            goto label_802D02A4;
    }

label_802D0280:
    ctx->downcount -= 2;
    // 802D0280: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0284:
    // 802D0284: bl      0x802D0304
    {
            ctx->lr = 0x802D0288u;
            goto label_802D0304;
    }

label_802D0288:
    ctx->downcount -= 2;
    // 802D0288: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D028C:
    // 802D028C: bl      0x803456F8
    {
            ctx->lr = 0x802D0290u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802D0290:
    ctx->pc = 0x802D0290u;
    ctx->downcount -= 6;
    // 802D0290: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0294:
    ctx->pc = 0x802D0294u;
    // 802D0294: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0298:
    ctx->pc = 0x802D0298u;
    // 802D0298: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D029C:
    // 802D029C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D02A0:
    ctx->pc = 0x802D02A0u;
    // 802D02A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D02A4:
    ctx->pc = 0x802D02A4u;
    ctx->downcount -= 12;
    // 802D02A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D02A8:
    ctx->pc = 0x802D02A8u;
    // 802D02A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D02AC:
    ctx->pc = 0x802D02ACu;
    // 802D02AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D02B0:
    ctx->pc = 0x802D02B0u;
    // 802D02B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D02B4:
    // 802D02B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D02B8:
    ctx->pc = 0x802D02B8u;
    // 802D02B8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D02BC:
    ctx->pc = 0x802D02BCu;
    // 802D02BC: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D02C0:
    // 802D02C0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D02C4:
    // 802D02C4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D02C8:
    // 802D02C8: bl      0x800076B4
    {
            ctx->lr = 0x802D02CCu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D02CC:
    ctx->downcount -= 2;
    // 802D02CC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D02D0:
    // 802D02D0: bc    12, 2, 0x802D02F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D02F0;
        }
    }

label_802D02D4:
    ctx->pc = 0x802D02D4u;
    ctx->downcount -= 8;
    // 802D02D4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D02D8:
    ctx->pc = 0x802D02D8u;
    // 802D02D8: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D02DC:
    // 802D02DC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D02E0:
    ctx->pc = 0x802D02E0u;
    // 802D02E0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D02E4:
    // 802D02E4: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D02E8:
    // 802D02E8: bl      0x800076E4
    {
            ctx->lr = 0x802D02ECu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D02EC:
    ctx->downcount -= 1;
    // 802D02EC: nop
    // nop

label_802D02F0:
    ctx->pc = 0x802D02F0u;
    ctx->downcount -= 6;
    // 802D02F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D02F4:
    ctx->pc = 0x802D02F4u;
    // 802D02F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D02F8:
    ctx->pc = 0x802D02F8u;
    // 802D02F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D02FC:
    // 802D02FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0300:
    ctx->pc = 0x802D0300u;
    // 802D0300: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0304:
    ctx->pc = 0x802D0304u;
    ctx->downcount -= 12;
    // 802D0304: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0308:
    ctx->pc = 0x802D0308u;
    // 802D0308: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D030C:
    ctx->pc = 0x802D030Cu;
    // 802D030C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0310:
    ctx->pc = 0x802D0310u;
    // 802D0310: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0314:
    // 802D0314: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0318:
    ctx->pc = 0x802D0318u;
    // 802D0318: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D031C:
    ctx->pc = 0x802D031Cu;
    // 802D031C: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0320:
    // 802D0320: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D0324:
    // 802D0324: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D0328:
    // 802D0328: bl      0x800076B4
    {
            ctx->lr = 0x802D032Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D032C:
    ctx->downcount -= 2;
    // 802D032C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0330:
    // 802D0330: bc    12, 2, 0x802D0350
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0350;
        }
    }

label_802D0334:
    ctx->pc = 0x802D0334u;
    ctx->downcount -= 8;
    // 802D0334: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0338:
    ctx->pc = 0x802D0338u;
    // 802D0338: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D033C:
    // 802D033C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D0340:
    ctx->pc = 0x802D0340u;
    // 802D0340: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0344:
    // 802D0344: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D0348:
    // 802D0348: bl      0x800076E4
    {
            ctx->lr = 0x802D034Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D034C:
    ctx->downcount -= 1;
    // 802D034C: nop
    // nop

label_802D0350:
    ctx->pc = 0x802D0350u;
    ctx->downcount -= 6;
    // 802D0350: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0354:
    ctx->pc = 0x802D0354u;
    // 802D0354: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0358:
    ctx->pc = 0x802D0358u;
    // 802D0358: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D035C:
    // 802D035C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0360:
    ctx->pc = 0x802D0360u;
    // 802D0360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0364:
    ctx->pc = 0x802D0364u;
    ctx->downcount -= 12;
    // 802D0364: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0368:
    ctx->pc = 0x802D0368u;
    // 802D0368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D036C:
    ctx->pc = 0x802D036Cu;
    // 802D036C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0370:
    ctx->pc = 0x802D0370u;
    // 802D0370: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0374:
    // 802D0374: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0378:
    ctx->pc = 0x802D0378u;
    // 802D0378: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D037C:
    ctx->pc = 0x802D037Cu;
    // 802D037C: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0380:
    // 802D0380: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D0384:
    // 802D0384: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D0388:
    // 802D0388: bl      0x800076B4
    {
            ctx->lr = 0x802D038Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D038C:
    ctx->downcount -= 2;
    // 802D038C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0390:
    // 802D0390: bc    12, 2, 0x802D03B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D03B0;
        }
    }

label_802D0394:
    ctx->pc = 0x802D0394u;
    ctx->downcount -= 8;
    // 802D0394: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0398:
    ctx->pc = 0x802D0398u;
    // 802D0398: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D039C:
    // 802D039C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D03A0:
    ctx->pc = 0x802D03A0u;
    // 802D03A0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D03A4:
    // 802D03A4: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D03A8:
    // 802D03A8: bl      0x800076E4
    {
            ctx->lr = 0x802D03ACu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D03AC:
    ctx->downcount -= 1;
    // 802D03AC: nop
    // nop

label_802D03B0:
    ctx->pc = 0x802D03B0u;
    ctx->downcount -= 6;
    // 802D03B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D03B4:
    ctx->pc = 0x802D03B4u;
    // 802D03B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D03B8:
    ctx->pc = 0x802D03B8u;
    // 802D03B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D03BC:
    // 802D03BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D03C0:
    ctx->pc = 0x802D03C0u;
    // 802D03C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D03C4:
    ctx->downcount -= 2;
    // 802D03C4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D03C8:
    // 802D03C8: b       0x802CFAFC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFAFCu;
                return;
            }
            goto label_802CFAFC;
    }

label_802D03CC:
    ctx->downcount -= 2;
    // 802D03CC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D03D0:
    // 802D03D0: b       0x802CFA98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFA98u;
                return;
            }
            goto label_802CFA98;
    }

label_802D03D4:
    ctx->downcount -= 2;
    // 802D03D4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D03D8:
    // 802D03D8: b       0x802D004C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D004Cu;
                return;
            }
            goto label_802D004C;
    }

label_802D03DC:
    ctx->downcount -= 2;
    // 802D03DC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D03E0:
    // 802D03E0: b       0x802CFA98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFA98u;
                return;
            }
            goto label_802CFA98;
    }

label_802D03E4:
    ctx->downcount -= 2;
    // 802D03E4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D03E8:
    // 802D03E8: b       0x802CFFE8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFFE8u;
                return;
            }
            goto label_802CFFE8;
    }

label_802D03EC:
    ctx->downcount -= 2;
    // 802D03EC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D03F0:
    // 802D03F0: b       0x802CF4B8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF4B8u;
                return;
            }
            goto label_802CF4B8;
    }

label_802D03F4:
    ctx->downcount -= 2;
    // 802D03F4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D03F8:
    // 802D03F8: b       0x802CF748
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF748u;
                return;
            }
            goto label_802CF748;
    }

label_802D03FC:
    ctx->downcount -= 2;
    // 802D03FC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D0400:
    // 802D0400: b       0x802CFFE8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFFE8u;
                return;
            }
            goto label_802CFFE8;
    }

label_802D0404:
    ctx->downcount -= 2;
    // 802D0404: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D0408:
    // 802D0408: b       0x802CFC8C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFC8Cu;
                return;
            }
            goto label_802CFC8C;
    }

label_802D040C:
    ctx->downcount -= 2;
    // 802D040C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D0410:
    // 802D0410: b       0x802CFC84
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CFC84u;
                return;
            }
            goto label_802CFC84;
    }

label_802D0414:
    ctx->downcount -= 2;
    // 802D0414: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802D0418:
    // 802D0418: b       0x802CF4F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802CF4F0u;
                return;
            }
            goto label_802CF4F0;
    }

label_802D041C:
    ctx->pc = 0x802D041Cu;
    ctx->downcount -= 7;
    // 802D041C: lwz     r4, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0420:
    ctx->pc = 0x802D0420u;
    // 802D0420: lwz     r5, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0424:
    ctx->pc = 0x802D0424u;
    // 802D0424: lwz     r3, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0428:
    ctx->pc = 0x802D0428u;
    // 802D0428: lbz     r0, 332(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(332);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D042C:
    ctx->pc = 0x802D042Cu;
    // 802D042C: lwz     r3, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0430:
    ctx->pc = 0x802D0430u;
    // 802D0430: stb     r0, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D0434:
    ctx->pc = 0x802D0434u;
    // 802D0434: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0438:
    ctx->pc = 0x802D0438u;
    ctx->downcount -= 5;
    // 802D0438: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D043C:
    ctx->pc = 0x802D043Cu;
    // 802D043C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0440:
    ctx->pc = 0x802D0440u;
    // 802D0440: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0444:
    ctx->pc = 0x802D0444u;
    // 802D0444: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802D0448:
    ctx->pc = 0x802D0448u;
    // 802D0448: bl      0x80007854
    {
            ctx->lr = 0x802D044Cu;
            ctx->pc = 0x80007854u;
            return;
    }

label_802D044C:
    ctx->pc = 0x802D044Cu;
    ctx->downcount -= 6;
    // 802D044C: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802D0450:
    ctx->pc = 0x802D0450u;
    // 802D0450: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0454:
    ctx->pc = 0x802D0454u;
    // 802D0454: addi    r3, r31, 7520
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7520);

label_802D0458:
    ctx->pc = 0x802D0458u;
    // 802D0458: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D045C:
    ctx->pc = 0x802D045Cu;
    // 802D045C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0460:
    ctx->pc = 0x802D0460u;
    // 802D0460: bl      0x80231700
    {
            ctx->lr = 0x802D0464u;
            ctx->pc = 0x80231700u;
            return;
    }

label_802D0464:
    ctx->pc = 0x802D0464u;
    ctx->downcount -= 5;
    // 802D0464: lwz     r29, -13112(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13112);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D0468:
    ctx->pc = 0x802D0468u;
    // 802D0468: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D046C:
    ctx->pc = 0x802D046Cu;
    // 802D046C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0470:
    ctx->pc = 0x802D0470u;
    // 802D0470: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D0474:
    ctx->pc = 0x802D0474u;
    // 802D0474: bl      0x802523DC
    {
            ctx->lr = 0x802D0478u;
            ctx->pc = 0x802523DCu;
            return;
    }

label_802D0478:
    ctx->pc = 0x802D0478u;
    ctx->downcount -= 3;
    // 802D0478: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D047C:
    ctx->pc = 0x802D047Cu;
    // 802D047C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802D0480:
    ctx->pc = 0x802D0480u;
    // 802D0480: bl      0x80268EF0
    {
            ctx->lr = 0x802D0484u;
            ctx->pc = 0x80268EF0u;
            return;
    }

label_802D0484:
    ctx->pc = 0x802D0484u;
    ctx->downcount -= 3;
    // 802D0484: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0488:
    ctx->pc = 0x802D0488u;
    // 802D0488: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802D048C:
    ctx->pc = 0x802D048Cu;
    // 802D048C: bl      0x80268F00
    {
            ctx->lr = 0x802D0490u;
            ctx->pc = 0x80268F00u;
            return;
    }

label_802D0490:
    ctx->pc = 0x802D0490u;
    ctx->downcount -= 7;
    // 802D0490: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0494:
    ctx->pc = 0x802D0494u;
    // 802D0494: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0494u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D0498:
    ctx->pc = 0x802D0498u;
    // 802D0498: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D049C:
    ctx->pc = 0x802D049Cu;
    // 802D049C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D04A0:
    ctx->pc = 0x802D04A0u;
    // 802D04A0: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_802D04A4:
    ctx->pc = 0x802D04A4u;
    // 802D04A4: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_802D04A8:
    ctx->pc = 0x802D04A8u;
    // 802D04A8: bl      0x8024DB34
    {
            ctx->lr = 0x802D04ACu;
            ctx->pc = 0x8024DB34u;
            return;
    }

label_802D04AC:
    ctx->pc = 0x802D04ACu;
    ctx->downcount -= 5;
    // 802D04AC: addi    r30, r31, 7520
    ctx->gpr[30] = ctx->gpr[31] + (u32)(s32)(7520);

label_802D04B0:
    ctx->pc = 0x802D04B0u;
    // 802D04B0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D04B4:
    ctx->pc = 0x802D04B4u;
    // 802D04B4: addi    r4, r30, 13
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(13);

label_802D04B8:
    ctx->pc = 0x802D04B8u;
    // 802D04B8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D04BC:
    ctx->pc = 0x802D04BCu;
    // 802D04BC: bl      0x80232594
    {
            ctx->lr = 0x802D04C0u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D04C0:
    ctx->pc = 0x802D04C0u;
    ctx->downcount -= 3;
    // 802D04C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D04C4:
    ctx->pc = 0x802D04C4u;
    // 802D04C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D04C8:
    ctx->pc = 0x802D04C8u;
    // 802D04C8: bl      0x801D0BC8
    {
            ctx->lr = 0x802D04CCu;
            ctx->pc = 0x801D0BC8u;
            return;
    }

label_802D04CC:
    ctx->pc = 0x802D04CCu;
    ctx->downcount -= 3;
    // 802D04CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D04D0:
    ctx->pc = 0x802D04D0u;
    // 802D04D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D04D4:
    ctx->pc = 0x802D04D4u;
    // 802D04D4: bl      0x802523DC
    {
            ctx->lr = 0x802D04D8u;
            ctx->pc = 0x802523DCu;
            return;
    }

label_802D04D8:
    ctx->pc = 0x802D04D8u;
    ctx->downcount -= 3;
    // 802D04D8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D04DC:
    ctx->pc = 0x802D04DCu;
    // 802D04DC: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802D04E0:
    ctx->pc = 0x802D04E0u;
    // 802D04E0: bl      0x80268EF0
    {
            ctx->lr = 0x802D04E4u;
            ctx->pc = 0x80268EF0u;
            return;
    }

label_802D04E4:
    ctx->pc = 0x802D04E4u;
    ctx->downcount -= 3;
    // 802D04E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D04E8:
    ctx->pc = 0x802D04E8u;
    // 802D04E8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802D04EC:
    ctx->pc = 0x802D04ECu;
    // 802D04EC: bl      0x80268F00
    {
            ctx->lr = 0x802D04F0u;
            ctx->pc = 0x80268F00u;
            return;
    }

label_802D04F0:
    ctx->pc = 0x802D04F0u;
    ctx->downcount -= 7;
    // 802D04F0: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D04F4:
    ctx->pc = 0x802D04F4u;
    // 802D04F4: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D04F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D04F8:
    ctx->pc = 0x802D04F8u;
    // 802D04F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D04FC:
    ctx->pc = 0x802D04FCu;
    // 802D04FC: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0500:
    ctx->pc = 0x802D0500u;
    // 802D0500: rlwinm r4, r0, 0, 16, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x0000FFFFu;
    }

label_802D0504:
    ctx->pc = 0x802D0504u;
    // 802D0504: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_802D0508:
    ctx->pc = 0x802D0508u;
    // 802D0508: bl      0x8024DB34
    {
            ctx->lr = 0x802D050Cu;
            ctx->pc = 0x8024DB34u;
            return;
    }

label_802D050C:
    ctx->pc = 0x802D050Cu;
    ctx->downcount -= 4;
    // 802D050C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D0510:
    ctx->pc = 0x802D0510u;
    // 802D0510: addi    r4, r30, 39
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(39);

label_802D0514:
    ctx->pc = 0x802D0514u;
    // 802D0514: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0518:
    ctx->pc = 0x802D0518u;
    // 802D0518: bl      0x80232594
    {
            ctx->lr = 0x802D051Cu;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D051C:
    ctx->pc = 0x802D051Cu;
    ctx->downcount -= 3;
    // 802D051C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0520:
    ctx->pc = 0x802D0520u;
    // 802D0520: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D0524:
    ctx->pc = 0x802D0524u;
    // 802D0524: bl      0x801D0BC8
    {
            ctx->lr = 0x802D0528u;
            ctx->pc = 0x801D0BC8u;
            return;
    }

label_802D0528:
    ctx->pc = 0x802D0528u;
    ctx->downcount -= 3;
    // 802D0528: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D052C:
    ctx->pc = 0x802D052Cu;
    // 802D052C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0530:
    ctx->pc = 0x802D0530u;
    // 802D0530: bl      0x802523B8
    {
            ctx->lr = 0x802D0534u;
            ctx->pc = 0x802523B8u;
            return;
    }

label_802D0534:
    ctx->pc = 0x802D0534u;
    ctx->downcount -= 5;
    // 802D0534: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0538:
    ctx->pc = 0x802D0538u;
    // 802D0538: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D053C:
    ctx->pc = 0x802D053Cu;
    // 802D053C: addi    r4, r30, 65
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(65);

label_802D0540:
    ctx->pc = 0x802D0540u;
    // 802D0540: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0544:
    ctx->pc = 0x802D0544u;
    // 802D0544: bl      0x80232594
    {
            ctx->lr = 0x802D0548u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D0548:
    ctx->pc = 0x802D0548u;
    ctx->downcount -= 3;
    // 802D0548: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D054C:
    ctx->pc = 0x802D054Cu;
    // 802D054C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D0550:
    ctx->pc = 0x802D0550u;
    // 802D0550: bl      0x801D0BD8
    {
            ctx->lr = 0x802D0554u;
            ctx->pc = 0x801D0BD8u;
            return;
    }

label_802D0554:
    ctx->pc = 0x802D0554u;
    ctx->downcount -= 3;
    // 802D0554: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D0558:
    ctx->pc = 0x802D0558u;
    // 802D0558: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D055C:
    ctx->pc = 0x802D055Cu;
    // 802D055C: bl      0x802523B8
    {
            ctx->lr = 0x802D0560u;
            ctx->pc = 0x802523B8u;
            return;
    }

label_802D0560:
    ctx->pc = 0x802D0560u;
    ctx->downcount -= 5;
    // 802D0560: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0564:
    ctx->pc = 0x802D0564u;
    // 802D0564: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D0568:
    ctx->pc = 0x802D0568u;
    // 802D0568: addi    r4, r30, 65
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(65);

label_802D056C:
    ctx->pc = 0x802D056Cu;
    // 802D056C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0570:
    ctx->pc = 0x802D0570u;
    // 802D0570: bl      0x80232594
    {
            ctx->lr = 0x802D0574u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D0574:
    ctx->pc = 0x802D0574u;
    ctx->downcount -= 3;
    // 802D0574: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0578:
    ctx->pc = 0x802D0578u;
    // 802D0578: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D057C:
    ctx->pc = 0x802D057Cu;
    // 802D057C: bl      0x801D0BD8
    {
            ctx->lr = 0x802D0580u;
            ctx->pc = 0x801D0BD8u;
            return;
    }

label_802D0580:
    ctx->pc = 0x802D0580u;
    ctx->downcount -= 3;
    // 802D0580: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D0584:
    ctx->pc = 0x802D0584u;
    // 802D0584: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0588:
    ctx->pc = 0x802D0588u;
    // 802D0588: bl      0x80252400
    {
            ctx->lr = 0x802D058Cu;
            ctx->pc = 0x80252400u;
            return;
    }

label_802D058C:
    ctx->pc = 0x802D058Cu;
    ctx->downcount -= 5;
    // 802D058C: lwz     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0590:
    ctx->pc = 0x802D0590u;
    // 802D0590: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D0594:
    ctx->pc = 0x802D0594u;
    // 802D0594: addi    r4, r30, 87
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(87);

label_802D0598:
    ctx->pc = 0x802D0598u;
    // 802D0598: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D059C:
    ctx->pc = 0x802D059Cu;
    // 802D059C: bl      0x80232594
    {
            ctx->lr = 0x802D05A0u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D05A0:
    ctx->pc = 0x802D05A0u;
    ctx->downcount -= 3;
    // 802D05A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D05A4:
    ctx->pc = 0x802D05A4u;
    // 802D05A4: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D05A8:
    ctx->pc = 0x802D05A8u;
    // 802D05A8: bl      0x801D0BB8
    {
            ctx->lr = 0x802D05ACu;
            ctx->pc = 0x801D0BB8u;
            return;
    }

label_802D05AC:
    ctx->pc = 0x802D05ACu;
    ctx->downcount -= 3;
    // 802D05AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D05B0:
    ctx->pc = 0x802D05B0u;
    // 802D05B0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D05B4:
    ctx->pc = 0x802D05B4u;
    // 802D05B4: bl      0x80252400
    {
            ctx->lr = 0x802D05B8u;
            ctx->pc = 0x80252400u;
            return;
    }

label_802D05B8:
    ctx->pc = 0x802D05B8u;
    ctx->downcount -= 5;
    // 802D05B8: lwz     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D05BC:
    ctx->pc = 0x802D05BCu;
    // 802D05BC: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D05C0:
    ctx->pc = 0x802D05C0u;
    // 802D05C0: addi    r4, r30, 116
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(116);

label_802D05C4:
    ctx->pc = 0x802D05C4u;
    // 802D05C4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D05C8:
    ctx->pc = 0x802D05C8u;
    // 802D05C8: bl      0x80232594
    {
            ctx->lr = 0x802D05CCu;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D05CC:
    ctx->pc = 0x802D05CCu;
    ctx->downcount -= 3;
    // 802D05CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D05D0:
    ctx->pc = 0x802D05D0u;
    // 802D05D0: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D05D4:
    ctx->pc = 0x802D05D4u;
    // 802D05D4: bl      0x801D0BB8
    {
            ctx->lr = 0x802D05D8u;
            ctx->pc = 0x801D0BB8u;
            return;
    }

label_802D05D8:
    ctx->pc = 0x802D05D8u;
    ctx->downcount -= 3;
    // 802D05D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D05DC:
    ctx->pc = 0x802D05DCu;
    // 802D05DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D05E0:
    ctx->pc = 0x802D05E0u;
    // 802D05E0: bl      0x80252400
    {
            ctx->lr = 0x802D05E4u;
            ctx->pc = 0x80252400u;
            return;
    }

label_802D05E4:
    ctx->pc = 0x802D05E4u;
    ctx->downcount -= 5;
    // 802D05E4: lwz     r31, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D05E8:
    ctx->pc = 0x802D05E8u;
    // 802D05E8: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D05EC:
    ctx->pc = 0x802D05ECu;
    // 802D05EC: addi    r4, r30, 145
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(145);

label_802D05F0:
    ctx->pc = 0x802D05F0u;
    // 802D05F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D05F4:
    ctx->pc = 0x802D05F4u;
    // 802D05F4: bl      0x80232594
    {
            ctx->lr = 0x802D05F8u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D05F8:
    ctx->pc = 0x802D05F8u;
    ctx->downcount -= 4;
    // 802D05F8: lwz     r5, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D05FC:
    ctx->pc = 0x802D05FCu;
    // 802D05FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0600:
    ctx->pc = 0x802D0600u;
    // 802D0600: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_802D0604:
    ctx->pc = 0x802D0604u;
    // 802D0604: bl      0x801D0C08
    {
            ctx->lr = 0x802D0608u;
            ctx->pc = 0x801D0C08u;
            return;
    }

label_802D0608:
    ctx->pc = 0x802D0608u;
    ctx->downcount -= 2;
    // 802D0608: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802D060C:
    ctx->pc = 0x802D060Cu;
    // 802D060C: bl      0x800078A0
    {
            ctx->lr = 0x802D0610u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_802D0610:
    ctx->pc = 0x802D0610u;
    ctx->downcount -= 5;
    // 802D0610: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0614:
    ctx->pc = 0x802D0614u;
    // 802D0614: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0618:
    ctx->pc = 0x802D0618u;
    // 802D0618: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D061C:
    ctx->pc = 0x802D061Cu;
    // 802D061C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0620:
    ctx->pc = 0x802D0620u;
    ctx->downcount -= 5;
    // 802D0620: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0624:
    ctx->pc = 0x802D0624u;
    // 802D0624: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0628:
    ctx->pc = 0x802D0628u;
    // 802D0628: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D062C:
    ctx->pc = 0x802D062Cu;
    // 802D062C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_802D0630:
    ctx->pc = 0x802D0630u;
    // 802D0630: bl      0x80007850
    {
            ctx->lr = 0x802D0634u;
            ctx->pc = 0x80007850u;
            return;
    }

label_802D0634:
    ctx->pc = 0x802D0634u;
    ctx->downcount -= 14;
    // 802D0634: lwz     r0, -14312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0638:
    ctx->pc = 0x802D0638u;
    // 802D0638: lis     r4, 17200
    ctx->gpr[4] = ((u32)(s32)(17200) << 16);

label_802D063C:
    ctx->pc = 0x802D063Cu;
    // 802D063C: lis     r5, -32661
    ctx->gpr[5] = ((u32)(s32)(-32661) << 16);

label_802D0640:
    ctx->pc = 0x802D0640u;
    // 802D0640: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D0644:
    ctx->pc = 0x802D0644u;
    // 802D0644: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D0648:
    ctx->pc = 0x802D0648u;
    // 802D0648: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_802D064C:
    ctx->pc = 0x802D064Cu;
    // 802D064C: addi    r5, r5, 19160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19160);

label_802D0650:
    ctx->pc = 0x802D0650u;
    // 802D0650: stw     r4, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D0654:
    ctx->pc = 0x802D0654u;
    // 802D0654: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802D0658:
    ctx->pc = 0x802D0658u;
    // 802D0658: lhzx    r29, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[29] = mem_read16(ctx, ea);
    }

label_802D065C:
    ctx->pc = 0x802D065Cu;
    // 802D065C: lhz     r26, 2(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(2);
        ctx->gpr[26] = mem_read16(ctx, ea);
    }

label_802D0660:
    ctx->pc = 0x802D0660u;
    // 802D0660: bl      0x801C1C48
    {
            ctx->lr = 0x802D0664u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802D0664:
    ctx->pc = 0x802D0664u;
    ctx->downcount -= 3;
    // 802D0664: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0668:
    ctx->pc = 0x802D0668u;
    // 802D0668: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D066C:
    ctx->pc = 0x802D066Cu;
    // 802D066C: bc    12, 2, 0x802D06AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D06AC;
        }
    }

label_802D0670:
    ctx->pc = 0x802D0670u;
    ctx->downcount -= 12;
    // 802D0670: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802D0674:
    ctx->pc = 0x802D0674u;
    // 802D0674: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0678:
    ctx->pc = 0x802D0678u;
    // 802D0678: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0678u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D067C:
    ctx->pc = 0x802D067Cu;
    // 802D067C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D0680:
    ctx->pc = 0x802D0680u;
    // 802D0680: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_802D0684:
    ctx->pc = 0x802D0684u;
    // 802D0684: lfd     f4, -12824(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0684u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12824);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0688:
    ctx->pc = 0x802D0688u;
    // 802D0688: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x802D0688u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_802D068C:
    ctx->pc = 0x802D068Cu;
    // 802D068C: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D068Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0690:
    ctx->pc = 0x802D0690u;
    // 802D0690: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D0690u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0694:
    ctx->pc = 0x802D0694u;
    // 802D0694: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x802D0694u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_802D0698:
    ctx->pc = 0x802D0698u;
    // 802D0698: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x802D0698u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_802D069C:
    ctx->pc = 0x802D069Cu;
    // 802D069C: bl      0x801B849C
    {
            ctx->lr = 0x802D06A0u;
            ctx->pc = 0x801B849Cu;
            return;
    }

label_802D06A0:
    ctx->pc = 0x802D06A0u;
    ctx->downcount -= 3;
    // 802D06A0: lis     r3, -32661
    ctx->gpr[3] = ((u32)(s32)(-32661) << 16);

label_802D06A4:
    ctx->pc = 0x802D06A4u;
    // 802D06A4: addi    r3, r3, 21336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21336);

label_802D06A8:
    ctx->pc = 0x802D06A8u;
    // 802D06A8: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D06AC:
    ctx->pc = 0x802D06ACu;
    ctx->downcount -= 3;
    // 802D06AC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D06B0:
    ctx->pc = 0x802D06B0u;
    // 802D06B0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D06B4:
    ctx->pc = 0x802D06B4u;
    // 802D06B4: bc    12, 2, 0x802D06C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D06C8;
        }
    }

label_802D06B8:
    ctx->pc = 0x802D06B8u;
    ctx->downcount -= 2;
    // 802D06B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D06BC:
    ctx->pc = 0x802D06BCu;
    // 802D06BC: bl      0x801D0A34
    {
            ctx->lr = 0x802D06C0u;
            ctx->pc = 0x801D0A34u;
            return;
    }

label_802D06C0:
    ctx->pc = 0x802D06C0u;
    ctx->downcount -= 2;
    // 802D06C0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D06C4:
    ctx->pc = 0x802D06C4u;
    // 802D06C4: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D06C8:
    ctx->pc = 0x802D06C8u;
    ctx->downcount -= 6;
    // 802D06C8: lfs     f0, -12844(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D06C8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12844);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D06CC:
    ctx->pc = 0x802D06CCu;
    // 802D06CC: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_802D06D0:
    ctx->pc = 0x802D06D0u;
    // 802D06D0: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x802D06D0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D06D4:
    ctx->pc = 0x802D06D4u;
    // 802D06D4: lfs     f0, -12840(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D06D4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12840);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D06D8:
    ctx->pc = 0x802D06D8u;
    // 802D06D8: stfs     f0, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x802D06D8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D06DC:
    ctx->pc = 0x802D06DCu;
    // 802D06DC: bl      0x801C1C48
    {
            ctx->lr = 0x802D06E0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802D06E0:
    ctx->pc = 0x802D06E0u;
    ctx->downcount -= 3;
    // 802D06E0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D06E4:
    ctx->pc = 0x802D06E4u;
    // 802D06E4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D06E8:
    ctx->pc = 0x802D06E8u;
    // 802D06E8: bc    12, 2, 0x802D0728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0728;
        }
    }

label_802D06EC:
    ctx->pc = 0x802D06ECu;
    ctx->downcount -= 12;
    // 802D06EC: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802D06F0:
    ctx->pc = 0x802D06F0u;
    // 802D06F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D06F4:
    ctx->pc = 0x802D06F4u;
    // 802D06F4: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D06F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D06F8:
    ctx->pc = 0x802D06F8u;
    // 802D06F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D06FC:
    ctx->pc = 0x802D06FCu;
    // 802D06FC: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_802D0700:
    ctx->pc = 0x802D0700u;
    // 802D0700: lfd     f4, -12824(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0700u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12824);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0704:
    ctx->pc = 0x802D0704u;
    // 802D0704: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x802D0704u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_802D0708:
    ctx->pc = 0x802D0708u;
    // 802D0708: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D0708u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D070C:
    ctx->pc = 0x802D070Cu;
    // 802D070C: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D070Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0710:
    ctx->pc = 0x802D0710u;
    // 802D0710: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x802D0710u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_802D0714:
    ctx->pc = 0x802D0714u;
    // 802D0714: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x802D0714u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_802D0718:
    ctx->pc = 0x802D0718u;
    // 802D0718: bl      0x801B849C
    {
            ctx->lr = 0x802D071Cu;
            ctx->pc = 0x801B849Cu;
            return;
    }

label_802D071C:
    ctx->pc = 0x802D071Cu;
    ctx->downcount -= 3;
    // 802D071C: lis     r3, -32661
    ctx->gpr[3] = ((u32)(s32)(-32661) << 16);

label_802D0720:
    ctx->pc = 0x802D0720u;
    // 802D0720: addi    r3, r3, 21336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21336);

label_802D0724:
    ctx->pc = 0x802D0724u;
    // 802D0724: stw     r3, 56(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0728:
    ctx->pc = 0x802D0728u;
    ctx->downcount -= 3;
    // 802D0728: lwz     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D072C:
    ctx->pc = 0x802D072Cu;
    // 802D072C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0730:
    ctx->pc = 0x802D0730u;
    // 802D0730: bc    12, 2, 0x802D0744
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0744;
        }
    }

label_802D0734:
    ctx->pc = 0x802D0734u;
    ctx->downcount -= 2;
    // 802D0734: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0738:
    ctx->pc = 0x802D0738u;
    // 802D0738: bl      0x801D0A34
    {
            ctx->lr = 0x802D073Cu;
            ctx->pc = 0x801D0A34u;
            return;
    }

label_802D073C:
    ctx->pc = 0x802D073Cu;
    ctx->downcount -= 2;
    // 802D073C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0740:
    ctx->pc = 0x802D0740u;
    // 802D0740: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0744:
    ctx->pc = 0x802D0744u;
    ctx->downcount -= 2;
    // 802D0744: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_802D0748:
    ctx->pc = 0x802D0748u;
    // 802D0748: bl      0x801C1C48
    {
            ctx->lr = 0x802D074Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802D074C:
    ctx->pc = 0x802D074Cu;
    ctx->downcount -= 3;
    // 802D074C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0750:
    ctx->pc = 0x802D0750u;
    // 802D0750: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0754:
    ctx->pc = 0x802D0754u;
    // 802D0754: bc    12, 2, 0x802D0794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0794;
        }
    }

label_802D0758:
    ctx->pc = 0x802D0758u;
    ctx->downcount -= 12;
    // 802D0758: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802D075C:
    ctx->pc = 0x802D075Cu;
    // 802D075C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0760:
    ctx->pc = 0x802D0760u;
    // 802D0760: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0760u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D0764:
    ctx->pc = 0x802D0764u;
    // 802D0764: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D0768:
    ctx->pc = 0x802D0768u;
    // 802D0768: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_802D076C:
    ctx->pc = 0x802D076Cu;
    // 802D076C: lfd     f4, -12824(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D076Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12824);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0770:
    ctx->pc = 0x802D0770u;
    // 802D0770: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x802D0770u)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_802D0774:
    ctx->pc = 0x802D0774u;
    // 802D0774: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D0774u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D0778:
    ctx->pc = 0x802D0778u;
    // 802D0778: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D0778u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D077C:
    ctx->pc = 0x802D077Cu;
    // 802D077C: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x802D077Cu)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_802D0780:
    ctx->pc = 0x802D0780u;
    // 802D0780: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x802D0780u)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_802D0784:
    ctx->pc = 0x802D0784u;
    // 802D0784: bl      0x801B849C
    {
            ctx->lr = 0x802D0788u;
            ctx->pc = 0x801B849Cu;
            return;
    }

label_802D0788:
    ctx->pc = 0x802D0788u;
    ctx->downcount -= 3;
    // 802D0788: lis     r3, -32661
    ctx->gpr[3] = ((u32)(s32)(-32661) << 16);

label_802D078C:
    ctx->pc = 0x802D078Cu;
    // 802D078C: addi    r3, r3, 21336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21336);

label_802D0790:
    ctx->pc = 0x802D0790u;
    // 802D0790: stw     r3, 56(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0794:
    ctx->pc = 0x802D0794u;
    ctx->downcount -= 3;
    // 802D0794: lwz     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0798:
    ctx->pc = 0x802D0798u;
    // 802D0798: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D079C:
    ctx->pc = 0x802D079Cu;
    // 802D079C: bc    12, 2, 0x802D07B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D07B0;
        }
    }

label_802D07A0:
    ctx->pc = 0x802D07A0u;
    ctx->downcount -= 2;
    // 802D07A0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D07A4:
    ctx->pc = 0x802D07A4u;
    // 802D07A4: bl      0x801D0A34
    {
            ctx->lr = 0x802D07A8u;
            ctx->pc = 0x801D0A34u;
            return;
    }

label_802D07A8:
    ctx->pc = 0x802D07A8u;
    ctx->downcount -= 2;
    // 802D07A8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D07AC:
    ctx->pc = 0x802D07ACu;
    // 802D07AC: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D07B0:
    ctx->pc = 0x802D07B0u;
    ctx->downcount -= 2;
    // 802D07B0: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_802D07B4:
    ctx->pc = 0x802D07B4u;
    // 802D07B4: bl      0x801C1C48
    {
            ctx->lr = 0x802D07B8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802D07B8:
    ctx->pc = 0x802D07B8u;
    ctx->downcount -= 3;
    // 802D07B8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D07BC:
    ctx->pc = 0x802D07BCu;
    // 802D07BC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D07C0:
    ctx->pc = 0x802D07C0u;
    // 802D07C0: bc    12, 2, 0x802D0800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0800;
        }
    }

label_802D07C4:
    ctx->pc = 0x802D07C4u;
    ctx->downcount -= 12;
    // 802D07C4: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802D07C8:
    ctx->pc = 0x802D07C8u;
    // 802D07C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D07CC:
    ctx->pc = 0x802D07CCu;
    // 802D07CC: lfs     f1, -12848(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D07CCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12848);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D07D0:
    ctx->pc = 0x802D07D0u;
    // 802D07D0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D07D4:
    ctx->pc = 0x802D07D4u;
    // 802D07D4: stw     r26, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_802D07D8:
    ctx->pc = 0x802D07D8u;
    // 802D07D8: lfd     f4, -12824(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D07D8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12824);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D07DC:
    ctx->pc = 0x802D07DCu;
    // 802D07DC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x802D07DCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_802D07E0:
    ctx->pc = 0x802D07E0u;
    // 802D07E0: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D07E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D07E4:
    ctx->pc = 0x802D07E4u;
    // 802D07E4: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D07E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D07E8:
    ctx->pc = 0x802D07E8u;
    // 802D07E8: fsubs   f3, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x802D07E8u)) return;
    ppc_fsubs(ctx, 3, 3, 4);

label_802D07EC:
    ctx->pc = 0x802D07ECu;
    // 802D07EC: fsubs   f4, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x802D07ECu)) return;
    ppc_fsubs(ctx, 4, 0, 4);

label_802D07F0:
    ctx->pc = 0x802D07F0u;
    // 802D07F0: bl      0x801B849C
    {
            ctx->lr = 0x802D07F4u;
            ctx->pc = 0x801B849Cu;
            return;
    }

label_802D07F4:
    ctx->pc = 0x802D07F4u;
    ctx->downcount -= 3;
    // 802D07F4: lis     r3, -32661
    ctx->gpr[3] = ((u32)(s32)(-32661) << 16);

label_802D07F8:
    ctx->pc = 0x802D07F8u;
    // 802D07F8: addi    r3, r3, 21336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21336);

label_802D07FC:
    ctx->pc = 0x802D07FCu;
    // 802D07FC: stw     r3, 56(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0800:
    ctx->pc = 0x802D0800u;
    ctx->downcount -= 3;
    // 802D0800: lwz     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0804:
    ctx->pc = 0x802D0804u;
    // 802D0804: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0808:
    ctx->pc = 0x802D0808u;
    // 802D0808: bc    12, 2, 0x802D081C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D081C;
        }
    }

label_802D080C:
    ctx->pc = 0x802D080Cu;
    ctx->downcount -= 2;
    // 802D080C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D0810:
    ctx->pc = 0x802D0810u;
    // 802D0810: bl      0x801D0A34
    {
            ctx->lr = 0x802D0814u;
            ctx->pc = 0x801D0A34u;
            return;
    }

label_802D0814:
    ctx->pc = 0x802D0814u;
    ctx->downcount -= 2;
    // 802D0814: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0818:
    ctx->pc = 0x802D0818u;
    // 802D0818: stw     r0, 4(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D081C:
    ctx->pc = 0x802D081Cu;
    ctx->downcount -= 6;
    // 802D081C: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0820:
    ctx->pc = 0x802D0820u;
    // 802D0820: lis     r29, -32660
    ctx->gpr[29] = ((u32)(s32)(-32660) << 16);

label_802D0824:
    ctx->pc = 0x802D0824u;
    // 802D0824: addi    r4, r29, 1560
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1560);

label_802D0828:
    ctx->pc = 0x802D0828u;
    // 802D0828: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D082C:
    ctx->pc = 0x802D082Cu;
    // 802D082C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0830:
    ctx->pc = 0x802D0830u;
    // 802D0830: bl      0x80370BD4
    {
            ctx->lr = 0x802D0834u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0834:
    ctx->pc = 0x802D0834u;
    ctx->downcount -= 6;
    // 802D0834: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0838:
    ctx->pc = 0x802D0838u;
    // 802D0838: addi    r4, r29, 1560
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1560);

label_802D083C:
    ctx->pc = 0x802D083Cu;
    // 802D083C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0840:
    ctx->pc = 0x802D0840u;
    // 802D0840: lwz     r26, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_802D0844:
    ctx->pc = 0x802D0844u;
    // 802D0844: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0848:
    ctx->pc = 0x802D0848u;
    // 802D0848: bl      0x80370BD4
    {
            ctx->lr = 0x802D084Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D084C:
    ctx->pc = 0x802D084Cu;
    ctx->downcount -= 6;
    // 802D084C: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0850:
    ctx->pc = 0x802D0850u;
    // 802D0850: addi    r4, r29, 1560
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(1560);

label_802D0854:
    ctx->pc = 0x802D0854u;
    // 802D0854: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0858:
    ctx->pc = 0x802D0858u;
    // 802D0858: lwz     r29, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D085C:
    ctx->pc = 0x802D085Cu;
    // 802D085C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0860:
    ctx->pc = 0x802D0860u;
    // 802D0860: bl      0x80370BD4
    {
            ctx->lr = 0x802D0864u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0864:
    ctx->pc = 0x802D0864u;
    ctx->downcount -= 6;
    // 802D0864: lwz     r6, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D0868:
    ctx->pc = 0x802D0868u;
    // 802D0868: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D086C:
    ctx->pc = 0x802D086Cu;
    // 802D086C: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0870:
    ctx->pc = 0x802D0870u;
    // 802D0870: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0874:
    ctx->pc = 0x802D0874u;
    // 802D0874: lwz     r25, 28(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(28);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_802D0878:
    ctx->pc = 0x802D0878u;
    // 802D0878: bl      0x80253E1C
    {
            ctx->lr = 0x802D087Cu;
            ctx->pc = 0x80253E1Cu;
            return;
    }

label_802D087C:
    ctx->pc = 0x802D087Cu;
    ctx->downcount -= 5;
    // 802D087C: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0880:
    ctx->pc = 0x802D0880u;
    // 802D0880: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802D0884:
    ctx->pc = 0x802D0884u;
    // 802D0884: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0888:
    ctx->pc = 0x802D0888u;
    // 802D0888: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D088C:
    ctx->pc = 0x802D088Cu;
    // 802D088C: bl      0x80253E90
    {
            ctx->lr = 0x802D0890u;
            ctx->pc = 0x80253E90u;
            return;
    }

label_802D0890:
    ctx->pc = 0x802D0890u;
    ctx->downcount -= 6;
    // 802D0890: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0894:
    ctx->pc = 0x802D0894u;
    // 802D0894: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D0898:
    ctx->pc = 0x802D0898u;
    // 802D0898: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D089C:
    ctx->pc = 0x802D089Cu;
    // 802D089C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D08A0:
    ctx->pc = 0x802D08A0u;
    // 802D08A0: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D08A4:
    ctx->pc = 0x802D08A4u;
    // 802D08A4: bl      0x80253E1C
    {
            ctx->lr = 0x802D08A8u;
            ctx->pc = 0x80253E1Cu;
            return;
    }

label_802D08A8:
    ctx->pc = 0x802D08A8u;
    ctx->downcount -= 1;
    // 802D08A8: bl      0x80255F14
    {
            ctx->lr = 0x802D08ACu;
            ctx->pc = 0x80255F14u;
            return;
    }

label_802D08AC:
    ctx->pc = 0x802D08ACu;
    ctx->downcount -= 5;
    // 802D08AC: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D08B0:
    ctx->pc = 0x802D08B0u;
    // 802D08B0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D08B4:
    ctx->pc = 0x802D08B4u;
    // 802D08B4: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D08B8:
    ctx->pc = 0x802D08B8u;
    // 802D08B8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D08BC:
    ctx->pc = 0x802D08BCu;
    // 802D08BC: bl      0x80253E90
    {
            ctx->lr = 0x802D08C0u;
            ctx->pc = 0x80253E90u;
            return;
    }

label_802D08C0:
    ctx->pc = 0x802D08C0u;
    ctx->downcount -= 6;
    // 802D08C0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802D08C4:
    ctx->pc = 0x802D08C4u;
    // 802D08C4: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D08C8:
    ctx->pc = 0x802D08C8u;
    // 802D08C8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D08CC:
    ctx->pc = 0x802D08CCu;
    // 802D08CC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802D08D0:
    ctx->pc = 0x802D08D0u;
    // 802D08D0: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D08D4:
    ctx->pc = 0x802D08D4u;
    // 802D08D4: bl      0x80253E1C
    {
            ctx->lr = 0x802D08D8u;
            ctx->pc = 0x80253E1Cu;
            return;
    }

label_802D08D8:
    ctx->pc = 0x802D08D8u;
    ctx->downcount -= 7;
    // 802D08D8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_802D08DC:
    ctx->pc = 0x802D08DCu;
    // 802D08DC: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D08E0:
    ctx->pc = 0x802D08E0u;
    // 802D08E0: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802D08E4:
    ctx->pc = 0x802D08E4u;
    // 802D08E4: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802D08E8:
    ctx->pc = 0x802D08E8u;
    // 802D08E8: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D08EC:
    ctx->pc = 0x802D08ECu;
    // 802D08EC: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802D08F0:
    ctx->pc = 0x802D08F0u;
    // 802D08F0: bl      0x80253E90
    {
            ctx->lr = 0x802D08F4u;
            ctx->pc = 0x80253E90u;
            return;
    }

label_802D08F4:
    ctx->pc = 0x802D08F4u;
    ctx->downcount -= 7;
    // 802D08F4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_802D08F8:
    ctx->pc = 0x802D08F8u;
    // 802D08F8: stb     r0, 1(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D08FC:
    ctx->pc = 0x802D08FCu;
    // 802D08FC: lfs     f1, -12836(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D08FCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12836);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D0900:
    ctx->pc = 0x802D0900u;
    // 802D0900: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0904:
    ctx->pc = 0x802D0904u;
    // 802D0904: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0908:
    ctx->pc = 0x802D0908u;
    // 802D0908: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D090C:
    ctx->pc = 0x802D090Cu;
    // 802D090C: bl      0x801BE894
    {
            ctx->lr = 0x802D0910u;
            ctx->pc = 0x801BE894u;
            return;
    }

label_802D0910:
    ctx->pc = 0x802D0910u;
    ctx->downcount -= 5;
    // 802D0910: lwz     r3, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0914:
    ctx->pc = 0x802D0914u;
    // 802D0914: lfs     f1, -12832(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D0914u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12832);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D0918:
    ctx->pc = 0x802D0918u;
    // 802D0918: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D091C:
    ctx->pc = 0x802D091Cu;
    // 802D091C: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0920:
    ctx->pc = 0x802D0920u;
    // 802D0920: bl      0x801BE894
    {
            ctx->lr = 0x802D0924u;
            ctx->pc = 0x801BE894u;
            return;
    }

label_802D0924:
    ctx->pc = 0x802D0924u;
    ctx->downcount -= 2;
    // 802D0924: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_802D0928:
    ctx->pc = 0x802D0928u;
    // 802D0928: bl      0x8000789C
    {
            ctx->lr = 0x802D092Cu;
            ctx->pc = 0x8000789Cu;
            return;
    }

label_802D092C:
    ctx->pc = 0x802D092Cu;
    ctx->downcount -= 5;
    // 802D092C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0930:
    ctx->pc = 0x802D0930u;
    // 802D0930: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0934:
    ctx->pc = 0x802D0934u;
    // 802D0934: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802D0938:
    ctx->pc = 0x802D0938u;
    // 802D0938: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D093C:
    ctx->pc = 0x802D093Cu;
    ctx->downcount -= 6;
    // 802D093C: lwz     r3, 128(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0940:
    ctx->pc = 0x802D0940u;
    // 802D0940: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0944:
    ctx->pc = 0x802D0944u;
    // 802D0944: lwz     r12, 68(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(68);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0948:
    ctx->pc = 0x802D0948u;
    // 802D0948: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D094C:
    ctx->pc = 0x802D094Cu;
    // 802D094C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802D0950:
    ctx->pc = 0x802D0950u;
    ctx->downcount -= 6;
    // 802D0950: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0954:
    ctx->pc = 0x802D0954u;
    // 802D0954: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0958:
    ctx->pc = 0x802D0958u;
    // 802D0958: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D095C:
    ctx->pc = 0x802D095Cu;
    // 802D095C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0960:
    ctx->pc = 0x802D0960u;
    // 802D0960: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0964:
    ctx->pc = 0x802D0964u;
    // 802D0964: bl      0x8024BCAC
    {
            ctx->lr = 0x802D0968u;
            ctx->pc = 0x8024BCACu;
            return;
    }

label_802D0968:
    ctx->pc = 0x802D0968u;
    ctx->downcount -= 3;
    // 802D0968: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_802D096C:
    ctx->pc = 0x802D096Cu;
    // 802D096C: cmplwi  r0, 0x001C
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x001Cu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0970:
    ctx->pc = 0x802D0970u;
    // 802D0970: bc    4, 2, 0x802D0988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0988;
        }
    }

label_802D0974:
    ctx->pc = 0x802D0974u;
    ctx->downcount -= 1;
    // 802D0974: bl      0x8024BCB8
    {
            ctx->lr = 0x802D0978u;
            ctx->pc = 0x8024BCB8u;
            return;
    }

label_802D0978:
    ctx->pc = 0x802D0978u;
    ctx->downcount -= 2;
    // 802D0978: cmpwi   r3, 5
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D097C:
    ctx->pc = 0x802D097Cu;
    // 802D097C: bc    4, 2, 0x802D0988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0988;
        }
    }

label_802D0980:
    ctx->pc = 0x802D0980u;
    ctx->downcount -= 2;
    // 802D0980: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0984:
    ctx->pc = 0x802D0984u;
    // 802D0984: bl      0x802D121C
    {
            ctx->lr = 0x802D0988u;
            goto label_802D121C;
    }

label_802D0988:
    ctx->pc = 0x802D0988u;
    ctx->downcount -= 6;
    // 802D0988: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D098C:
    ctx->pc = 0x802D098Cu;
    // 802D098C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0990:
    ctx->pc = 0x802D0990u;
    // 802D0990: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0994:
    ctx->pc = 0x802D0994u;
    // 802D0994: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0998:
    ctx->pc = 0x802D0998u;
    // 802D0998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D099C:
    ctx->pc = 0x802D099Cu;
    ctx->downcount -= 11;
    // 802D099C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D09A0:
    ctx->pc = 0x802D09A0u;
    // 802D09A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D09A4:
    ctx->pc = 0x802D09A4u;
    // 802D09A4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D09A8:
    ctx->pc = 0x802D09A8u;
    // 802D09A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D09AC:
    ctx->pc = 0x802D09ACu;
    // 802D09AC: addi    r4, r4, 1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1560);

label_802D09B0:
    ctx->pc = 0x802D09B0u;
    // 802D09B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D09B4:
    ctx->pc = 0x802D09B4u;
    // 802D09B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D09B8:
    ctx->pc = 0x802D09B8u;
    // 802D09B8: lwz     r5, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D09BC:
    ctx->pc = 0x802D09BCu;
    // 802D09BC: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D09C0:
    ctx->pc = 0x802D09C0u;
    // 802D09C0: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D09C4:
    ctx->pc = 0x802D09C4u;
    // 802D09C4: bl      0x80370BD4
    {
            ctx->lr = 0x802D09C8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D09C8:
    ctx->pc = 0x802D09C8u;
    ctx->downcount -= 2;
    // 802D09C8: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D09CC:
    ctx->pc = 0x802D09CCu;
    // 802D09CC: bl      0x802DC79C
    {
            ctx->lr = 0x802D09D0u;
            ctx->pc = 0x802DC79Cu;
            return;
    }

label_802D09D0:
    ctx->pc = 0x802D09D0u;
    ctx->downcount -= 6;
    // 802D09D0: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D09D4:
    ctx->pc = 0x802D09D4u;
    // 802D09D4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D09D8:
    ctx->pc = 0x802D09D8u;
    // 802D09D8: lwz     r12, 52(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D09DC:
    ctx->pc = 0x802D09DCu;
    // 802D09DC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D09E0:
    ctx->pc = 0x802D09E0u;
    // 802D09E0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D09E4u;
            ctx->pc = target;
            return;
        }
    }

label_802D09E4:
    ctx->pc = 0x802D09E4u;
    ctx->downcount -= 2;
    // 802D09E4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D09E8:
    ctx->pc = 0x802D09E8u;
    // 802D09E8: bl      0x802D041C
    {
            ctx->lr = 0x802D09ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D041Cu;
                return;
            }
            goto label_802D041C;
    }

label_802D09EC:
    ctx->pc = 0x802D09ECu;
    ctx->downcount -= 6;
    // 802D09EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D09F0:
    ctx->pc = 0x802D09F0u;
    // 802D09F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D09F4:
    ctx->pc = 0x802D09F4u;
    // 802D09F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D09F8:
    ctx->pc = 0x802D09F8u;
    // 802D09F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D09FC:
    ctx->pc = 0x802D09FCu;
    // 802D09FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0A00:
    ctx->pc = 0x802D0A00u;
    ctx->downcount -= 11;
    // 802D0A00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0A04:
    ctx->pc = 0x802D0A04u;
    // 802D0A04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0A08:
    ctx->pc = 0x802D0A08u;
    // 802D0A08: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D0A0C:
    ctx->pc = 0x802D0A0Cu;
    // 802D0A0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0A10:
    ctx->pc = 0x802D0A10u;
    // 802D0A10: addi    r4, r4, 1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1560);

label_802D0A14:
    ctx->pc = 0x802D0A14u;
    // 802D0A14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0A18:
    ctx->pc = 0x802D0A18u;
    // 802D0A18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0A1C:
    ctx->pc = 0x802D0A1Cu;
    // 802D0A1C: lwz     r5, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0A20:
    ctx->pc = 0x802D0A20u;
    // 802D0A20: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0A24:
    ctx->pc = 0x802D0A24u;
    // 802D0A24: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0A28:
    ctx->pc = 0x802D0A28u;
    // 802D0A28: bl      0x80370BD4
    {
            ctx->lr = 0x802D0A2Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0A2C:
    ctx->pc = 0x802D0A2Cu;
    ctx->downcount -= 2;
    // 802D0A2C: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0A30:
    ctx->pc = 0x802D0A30u;
    // 802D0A30: bl      0x802DC7DC
    {
            ctx->lr = 0x802D0A34u;
            ctx->pc = 0x802DC7DCu;
            return;
    }

label_802D0A34:
    ctx->pc = 0x802D0A34u;
    ctx->downcount -= 6;
    // 802D0A34: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0A38:
    ctx->pc = 0x802D0A38u;
    // 802D0A38: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0A3C:
    ctx->pc = 0x802D0A3Cu;
    // 802D0A3C: lwz     r12, 44(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0A40:
    ctx->pc = 0x802D0A40u;
    // 802D0A40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0A44:
    ctx->pc = 0x802D0A44u;
    // 802D0A44: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0A48u;
            ctx->pc = target;
            return;
        }
    }

label_802D0A48:
    ctx->pc = 0x802D0A48u;
    ctx->downcount -= 2;
    // 802D0A48: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0A4C:
    ctx->pc = 0x802D0A4Cu;
    // 802D0A4C: bl      0x802D1350
    {
            ctx->lr = 0x802D0A50u;
            goto label_802D1350;
    }

label_802D0A50:
    ctx->pc = 0x802D0A50u;
    ctx->downcount -= 6;
    // 802D0A50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0A54:
    ctx->pc = 0x802D0A54u;
    // 802D0A54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0A58:
    ctx->pc = 0x802D0A58u;
    // 802D0A58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0A5C:
    ctx->pc = 0x802D0A5Cu;
    // 802D0A5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0A60:
    ctx->pc = 0x802D0A60u;
    // 802D0A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0A64:
    ctx->pc = 0x802D0A64u;
    ctx->downcount -= 6;
    // 802D0A64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0A68:
    ctx->pc = 0x802D0A68u;
    // 802D0A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0A6C:
    ctx->pc = 0x802D0A6Cu;
    // 802D0A6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0A70:
    ctx->pc = 0x802D0A70u;
    // 802D0A70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0A74:
    ctx->pc = 0x802D0A74u;
    // 802D0A74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0A78:
    ctx->pc = 0x802D0A78u;
    // 802D0A78: bl      0x802D0438
    {
            ctx->lr = 0x802D0A7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0438u;
                return;
            }
            goto label_802D0438;
    }

label_802D0A7C:
    ctx->pc = 0x802D0A7Cu;
    ctx->downcount -= 6;
    // 802D0A7C: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0A80:
    ctx->pc = 0x802D0A80u;
    // 802D0A80: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D0A84:
    ctx->pc = 0x802D0A84u;
    // 802D0A84: addi    r4, r4, 1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1560);

label_802D0A88:
    ctx->pc = 0x802D0A88u;
    // 802D0A88: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0A8C:
    ctx->pc = 0x802D0A8Cu;
    // 802D0A8C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0A90:
    ctx->pc = 0x802D0A90u;
    // 802D0A90: bl      0x80370BD4
    {
            ctx->lr = 0x802D0A94u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0A94:
    ctx->pc = 0x802D0A94u;
    ctx->downcount -= 2;
    // 802D0A94: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0A98:
    ctx->pc = 0x802D0A98u;
    // 802D0A98: bl      0x802DC7E8
    {
            ctx->lr = 0x802D0A9Cu;
            ctx->pc = 0x802DC7E8u;
            return;
    }

label_802D0A9C:
    ctx->pc = 0x802D0A9Cu;
    ctx->downcount -= 6;
    // 802D0A9C: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0AA0:
    ctx->pc = 0x802D0AA0u;
    // 802D0AA0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0AA4:
    ctx->pc = 0x802D0AA4u;
    // 802D0AA4: lwz     r12, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0AA8:
    ctx->pc = 0x802D0AA8u;
    // 802D0AA8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0AAC:
    ctx->pc = 0x802D0AACu;
    // 802D0AAC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0AB0u;
            ctx->pc = target;
            return;
        }
    }

label_802D0AB0:
    ctx->pc = 0x802D0AB0u;
    ctx->downcount -= 6;
    // 802D0AB0: lwz     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0AB4:
    ctx->pc = 0x802D0AB4u;
    // 802D0AB4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0AB8:
    ctx->pc = 0x802D0AB8u;
    // 802D0AB8: lwz     r12, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0ABC:
    ctx->pc = 0x802D0ABCu;
    // 802D0ABC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0AC0:
    ctx->pc = 0x802D0AC0u;
    // 802D0AC0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0AC4u;
            ctx->pc = target;
            return;
        }
    }

label_802D0AC4:
    ctx->pc = 0x802D0AC4u;
    ctx->downcount -= 6;
    // 802D0AC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0AC8:
    ctx->pc = 0x802D0AC8u;
    // 802D0AC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0ACC:
    ctx->pc = 0x802D0ACCu;
    // 802D0ACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0AD0:
    ctx->pc = 0x802D0AD0u;
    // 802D0AD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0AD4:
    ctx->pc = 0x802D0AD4u;
    // 802D0AD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0AD8:
    ctx->pc = 0x802D0AD8u;
    ctx->downcount -= 23;
    // 802D0AD8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0ADC:
    ctx->pc = 0x802D0ADCu;
    // 802D0ADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0AE0:
    ctx->pc = 0x802D0AE0u;
    // 802D0AE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0AE4:
    ctx->pc = 0x802D0AE4u;
    // 802D0AE4: li      r5, 65
    ctx->gpr[5] = (u32)(s32)(65);

label_802D0AE8:
    ctx->pc = 0x802D0AE8u;
    // 802D0AE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0AEC:
    ctx->pc = 0x802D0AECu;
    // 802D0AEC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802D0AF0:
    ctx->pc = 0x802D0AF0u;
    // 802D0AF0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D0AF4:
    ctx->pc = 0x802D0AF4u;
    // 802D0AF4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802D0AF8:
    ctx->pc = 0x802D0AF8u;
    // 802D0AF8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D0AFC:
    ctx->pc = 0x802D0AFCu;
    // 802D0AFC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0B00:
    ctx->pc = 0x802D0B00u;
    // 802D0B00: lwz     r30, -13112(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13112);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D0B04:
    ctx->pc = 0x802D0B04u;
    // 802D0B04: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0B08:
    ctx->pc = 0x802D0B08u;
    // 802D0B08: bl      0x80252788
    {
            ctx->lr = 0x802D0B0Cu;
            ctx->pc = 0x80252788u;
            return;
    }

label_802D0B0C:
    ctx->pc = 0x802D0B0Cu;
    ctx->downcount -= 7;
    // 802D0B0C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0B10:
    ctx->pc = 0x802D0B10u;
    // 802D0B10: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D0B14:
    ctx->pc = 0x802D0B14u;
    // 802D0B14: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_802D0B18:
    ctx->pc = 0x802D0B18u;
    // 802D0B18: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802D0B1C:
    ctx->pc = 0x802D0B1Cu;
    // 802D0B1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D0B20:
    ctx->pc = 0x802D0B20u;
    // 802D0B20: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802D0B24:
    ctx->pc = 0x802D0B24u;
    // 802D0B24: bl      0x80252788
    {
            ctx->lr = 0x802D0B28u;
            ctx->pc = 0x80252788u;
            return;
    }

label_802D0B28:
    ctx->pc = 0x802D0B28u;
    ctx->downcount -= 7;
    // 802D0B28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0B2C:
    ctx->pc = 0x802D0B2Cu;
    // 802D0B2C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D0B30:
    ctx->pc = 0x802D0B30u;
    // 802D0B30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0B34:
    ctx->pc = 0x802D0B34u;
    // 802D0B34: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802D0B38:
    ctx->pc = 0x802D0B38u;
    // 802D0B38: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D0B3C:
    ctx->pc = 0x802D0B3Cu;
    // 802D0B3C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802D0B40:
    ctx->pc = 0x802D0B40u;
    // 802D0B40: bl      0x80252788
    {
            ctx->lr = 0x802D0B44u;
            ctx->pc = 0x80252788u;
            return;
    }

label_802D0B44:
    ctx->pc = 0x802D0B44u;
    ctx->downcount -= 7;
    // 802D0B44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0B48:
    ctx->pc = 0x802D0B48u;
    // 802D0B48: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D0B4C:
    ctx->pc = 0x802D0B4Cu;
    // 802D0B4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0B50:
    ctx->pc = 0x802D0B50u;
    // 802D0B50: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802D0B54:
    ctx->pc = 0x802D0B54u;
    // 802D0B54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D0B58:
    ctx->pc = 0x802D0B58u;
    // 802D0B58: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802D0B5C:
    ctx->pc = 0x802D0B5Cu;
    // 802D0B5C: bl      0x80252788
    {
            ctx->lr = 0x802D0B60u;
            ctx->pc = 0x80252788u;
            return;
    }

label_802D0B60:
    ctx->pc = 0x802D0B60u;
    ctx->downcount -= 3;
    // 802D0B60: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0B64:
    ctx->pc = 0x802D0B64u;
    // 802D0B64: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D0B68:
    ctx->pc = 0x802D0B68u;
    // 802D0B68: bl      0x80252400
    {
            ctx->lr = 0x802D0B6Cu;
            ctx->pc = 0x80252400u;
            return;
    }

label_802D0B6C:
    ctx->pc = 0x802D0B6Cu;
    ctx->downcount -= 7;
    // 802D0B6C: lwz     r4, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0B70:
    ctx->pc = 0x802D0B70u;
    // 802D0B70: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802D0B74:
    ctx->pc = 0x802D0B74u;
    // 802D0B74: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0B78:
    ctx->pc = 0x802D0B78u;
    // 802D0B78: lbz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D0B7C:
    ctx->pc = 0x802D0B7Cu;
    // 802D0B7C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802D0B80:
    ctx->pc = 0x802D0B80u;
    // 802D0B80: stb     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D0B84:
    ctx->pc = 0x802D0B84u;
    // 802D0B84: bl      0x802466E4
    {
            ctx->lr = 0x802D0B88u;
            ctx->pc = 0x802466E4u;
            return;
    }

label_802D0B88:
    ctx->pc = 0x802D0B88u;
    ctx->downcount -= 2;
    // 802D0B88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D0B8C:
    ctx->pc = 0x802D0B8Cu;
    // 802D0B8C: bl      0x802DCAC4
    {
            ctx->lr = 0x802D0B90u;
            ctx->pc = 0x802DCAC4u;
            return;
    }

label_802D0B90:
    ctx->pc = 0x802D0B90u;
    ctx->downcount -= 2;
    // 802D0B90: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D0B94:
    ctx->pc = 0x802D0B94u;
    // 802D0B94: bl      0x802D0620
    {
            ctx->lr = 0x802D0B98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0620u;
                return;
            }
            goto label_802D0620;
    }

label_802D0B98:
    ctx->pc = 0x802D0B98u;
    ctx->downcount -= 2;
    // 802D0B98: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D0B9C:
    ctx->pc = 0x802D0B9Cu;
    // 802D0B9C: bl      0x8027DD98
    {
            ctx->lr = 0x802D0BA0u;
            ctx->pc = 0x8027DD98u;
            return;
    }

label_802D0BA0:
    ctx->pc = 0x802D0BA0u;
    ctx->downcount -= 6;
    // 802D0BA0: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0BA4:
    ctx->pc = 0x802D0BA4u;
    // 802D0BA4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802D0BA8:
    ctx->pc = 0x802D0BA8u;
    // 802D0BA8: addi    r4, r4, 21316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21316);

label_802D0BAC:
    ctx->pc = 0x802D0BACu;
    // 802D0BAC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0BB0:
    ctx->pc = 0x802D0BB0u;
    // 802D0BB0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0BB4:
    ctx->pc = 0x802D0BB4u;
    // 802D0BB4: bl      0x80370BD4
    {
            ctx->lr = 0x802D0BB8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0BB8:
    ctx->pc = 0x802D0BB8u;
    ctx->downcount -= 4;
    // 802D0BB8: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0BBC:
    ctx->pc = 0x802D0BBCu;
    // 802D0BBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0BC0:
    ctx->pc = 0x802D0BC0u;
    // 802D0BC0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D0BC4:
    ctx->pc = 0x802D0BC4u;
    // 802D0BC4: bl      0x8026CE6C
    {
            ctx->lr = 0x802D0BC8u;
            ctx->pc = 0x8026CE6Cu;
            return;
    }

label_802D0BC8:
    ctx->pc = 0x802D0BC8u;
    ctx->downcount -= 7;
    // 802D0BC8: lwz     r4, -13084(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13084);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0BCC:
    ctx->pc = 0x802D0BCCu;
    // 802D0BCC: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_802D0BD0:
    ctx->pc = 0x802D0BD0u;
    // 802D0BD0: lwz     r31, 72(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(72);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0BD4:
    ctx->pc = 0x802D0BD4u;
    // 802D0BD4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D0BD8:
    ctx->pc = 0x802D0BD8u;
    // 802D0BD8: lwz     r30, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D0BDC:
    ctx->pc = 0x802D0BDCu;
    // 802D0BDC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0BE0:
    ctx->pc = 0x802D0BE0u;
    // 802D0BE0: bl      0x801C1C5C
    {
            ctx->lr = 0x802D0BE4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D0BE4:
    ctx->pc = 0x802D0BE4u;
    ctx->downcount -= 2;
    // 802D0BE4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0BE8:
    ctx->pc = 0x802D0BE8u;
    // 802D0BE8: bc    12, 2, 0x802D0BF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0BF4;
        }
    }

label_802D0BEC:
    ctx->pc = 0x802D0BECu;
    ctx->downcount -= 2;
    // 802D0BEC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0BF0:
    ctx->pc = 0x802D0BF0u;
    // 802D0BF0: bl      0x80353C7C
    {
            ctx->lr = 0x802D0BF4u;
            ctx->pc = 0x80353C7Cu;
            return;
    }

label_802D0BF4:
    ctx->pc = 0x802D0BF4u;
    ctx->downcount -= 5;
    // 802D0BF4: stw     r3, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0BF8:
    ctx->pc = 0x802D0BF8u;
    // 802D0BF8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0BFC:
    ctx->pc = 0x802D0BFCu;
    // 802D0BFC: li      r3, 336
    ctx->gpr[3] = (u32)(s32)(336);

label_802D0C00:
    ctx->pc = 0x802D0C00u;
    // 802D0C00: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D0C04:
    ctx->pc = 0x802D0C04u;
    // 802D0C04: bl      0x801C1C5C
    {
            ctx->lr = 0x802D0C08u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D0C08:
    ctx->pc = 0x802D0C08u;
    ctx->downcount -= 2;
    // 802D0C08: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0C0C:
    ctx->pc = 0x802D0C0Cu;
    // 802D0C0C: bc    12, 2, 0x802D0C18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0C18;
        }
    }

label_802D0C10:
    ctx->pc = 0x802D0C10u;
    ctx->downcount -= 2;
    // 802D0C10: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0C14:
    ctx->pc = 0x802D0C14u;
    // 802D0C14: bl      0x802D1410
    {
            ctx->lr = 0x802D0C18u;
            goto label_802D1410;
    }

label_802D0C18:
    ctx->pc = 0x802D0C18u;
    ctx->downcount -= 2;
    // 802D0C18: stw     r3, 128(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D0C1C:
    ctx->pc = 0x802D0C1Cu;
    // 802D0C1C: bl      0x802D0C4C
    {
            ctx->lr = 0x802D0C20u;
            goto label_802D0C4C;
    }

label_802D0C20:
    ctx->pc = 0x802D0C20u;
    ctx->downcount -= 4;
    // 802D0C20: lwz     r30, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D0C24:
    ctx->pc = 0x802D0C24u;
    // 802D0C24: lwz     r4, 124(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D0C28:
    ctx->pc = 0x802D0C28u;
    // 802D0C28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0C2C:
    ctx->pc = 0x802D0C2Cu;
    // 802D0C2C: bl      0x802D33C0
    {
            ctx->lr = 0x802D0C30u;
            ctx->pc = 0x802D33C0u;
            return;
    }

label_802D0C30:
    ctx->pc = 0x802D0C30u;
    ctx->downcount -= 18;
    // 802D0C30: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802D0C34:
    ctx->pc = 0x802D0C34u;
    // 802D0C34: stb     r0, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D0C38:
    ctx->pc = 0x802D0C38u;
    // 802D0C38: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D0C3C:
    ctx->pc = 0x802D0C3Cu;
    // 802D0C3C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0C40:
    ctx->pc = 0x802D0C40u;
    // 802D0C40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0C44:
    ctx->pc = 0x802D0C44u;
    // 802D0C44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D0C48:
    ctx->pc = 0x802D0C48u;
    // 802D0C48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0C4C:
    ctx->pc = 0x802D0C4Cu;
    ctx->downcount -= 2;
    // 802D0C4C: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0C50:
    ctx->pc = 0x802D0C50u;
    // 802D0C50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0C54:
    ctx->pc = 0x802D0C54u;
    ctx->downcount -= 18;
    // 802D0C54: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0C58:
    ctx->pc = 0x802D0C58u;
    // 802D0C58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0C5C:
    // 802D0C5C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0C60:
    ctx->pc = 0x802D0C60u;
    // 802D0C60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0C64:
    ctx->pc = 0x802D0C64u;
    // 802D0C64: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D0C68:
    // 802D0C68: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0C6C:
    // 802D0C6C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D0C70:
    // 802D0C70: bc    12, 2, 0x802D0CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0CA8;
        }
    }

label_802D0C74:
    ctx->downcount -= 1;
    // 802D0C74: bc    12, 2, 0x802D0C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0C98;
        }
    }

label_802D0C78:
    ctx->downcount -= 1;
    // 802D0C78: bc    12, 2, 0x802D0C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0C98;
        }
    }

label_802D0C7C:
    ctx->downcount -= 1;
    // 802D0C7C: bc    12, 2, 0x802D0C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0C98;
        }
    }

label_802D0C80:
    ctx->downcount -= 3;
    // 802D0C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0C84:
    // 802D0C84: addi    r3, r3, 48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(48);

label_802D0C88:
    // 802D0C88: bl      0x801CF6F4
    {
            ctx->lr = 0x802D0C8Cu;
            ctx->pc = 0x801CF6F4u;
            return;
    }

label_802D0C8C:
    ctx->downcount -= 3;
    // 802D0C8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0C90:
    // 802D0C90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D0C94:
    // 802D0C94: bl      0x801C8318
    {
            ctx->lr = 0x802D0C98u;
            ctx->pc = 0x801C8318u;
            return;
    }

label_802D0C98:
    ctx->downcount -= 2;
    // 802D0C98: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0C9C:
    // 802D0C9C: bc    4, 1, 0x802D0CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0CA8;
        }
    }

label_802D0CA0:
    ctx->downcount -= 2;
    // 802D0CA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0CA4:
    // 802D0CA4: bl      0x801C1C90
    {
            ctx->lr = 0x802D0CA8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D0CA8:
    ctx->downcount -= 17;
    // 802D0CA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D0CAC:
    ctx->pc = 0x802D0CACu;
    // 802D0CAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D0CB0:
    ctx->pc = 0x802D0CB0u;
    // 802D0CB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0CB4:
    ctx->pc = 0x802D0CB4u;
    // 802D0CB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0CB8:
    // 802D0CB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0CBC:
    ctx->pc = 0x802D0CBCu;
    // 802D0CBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0CC0:
    ctx->downcount -= 2;
    // 802D0CC0: addi    r3, r3, -48
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-48);

label_802D0CC4:
    // 802D0CC4: b       0x802D0C54
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0C54u;
                return;
            }
            goto label_802D0C54;
    }

label_802D0CC8:
    ctx->pc = 0x802D0CC8u;
    ctx->downcount -= 11;
    // 802D0CC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0CCC:
    ctx->pc = 0x802D0CCCu;
    // 802D0CCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0CD0:
    ctx->pc = 0x802D0CD0u;
    // 802D0CD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0CD4:
    ctx->pc = 0x802D0CD4u;
    // 802D0CD4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0CD8:
    ctx->pc = 0x802D0CD8u;
    // 802D0CD8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0CDC:
    ctx->pc = 0x802D0CDCu;
    // 802D0CDC: lwz     r3, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0CE0:
    ctx->pc = 0x802D0CE0u;
    // 802D0CE0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0CE4:
    ctx->pc = 0x802D0CE4u;
    // 802D0CE4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0CE8:
    ctx->pc = 0x802D0CE8u;
    // 802D0CE8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0CEC:
    ctx->pc = 0x802D0CECu;
    // 802D0CEC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0CF0u;
            ctx->pc = target;
            return;
        }
    }

label_802D0CF0:
    ctx->pc = 0x802D0CF0u;
    ctx->downcount -= 2;
    // 802D0CF0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0CF4:
    ctx->pc = 0x802D0CF4u;
    // 802D0CF4: bc    12, 2, 0x802D0D0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0D0C;
        }
    }

label_802D0CF8:
    ctx->pc = 0x802D0CF8u;
    ctx->downcount -= 2;
    // 802D0CF8: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0CFC:
    ctx->pc = 0x802D0CFCu;
    // 802D0CFC: bl      0x802D0D60
    {
            ctx->lr = 0x802D0D00u;
            goto label_802D0D60;
    }

label_802D0D00:
    ctx->pc = 0x802D0D00u;
    ctx->downcount -= 3;
    // 802D0D00: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0D04:
    ctx->pc = 0x802D0D04u;
    // 802D0D04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0D08:
    ctx->pc = 0x802D0D08u;
    // 802D0D08: bl      0x802D0D28
    {
            ctx->lr = 0x802D0D0Cu;
            goto label_802D0D28;
    }

label_802D0D0C:
    ctx->pc = 0x802D0D0Cu;
    ctx->downcount -= 2;
    // 802D0D0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0D10:
    ctx->pc = 0x802D0D10u;
    // 802D0D10: bl      0x802D0F70
    {
            ctx->lr = 0x802D0D14u;
            goto label_802D0F70;
    }

label_802D0D14:
    ctx->pc = 0x802D0D14u;
    ctx->downcount -= 6;
    // 802D0D14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0D18:
    ctx->pc = 0x802D0D18u;
    // 802D0D18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0D1C:
    ctx->pc = 0x802D0D1Cu;
    // 802D0D1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0D20:
    ctx->pc = 0x802D0D20u;
    // 802D0D20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0D24:
    ctx->pc = 0x802D0D24u;
    // 802D0D24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0D28:
    ctx->pc = 0x802D0D28u;
    ctx->downcount -= 4;
    // 802D0D28: lwz     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0D2C:
    ctx->pc = 0x802D0D2Cu;
    // 802D0D2C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0D30:
    ctx->pc = 0x802D0D30u;
    // 802D0D30: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0D34:
    ctx->pc = 0x802D0D34u;
    // 802D0D34: bc    4, 2, 0x802D0D48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0D48;
        }
    }

label_802D0D38:
    ctx->pc = 0x802D0D38u;
    ctx->downcount -= 4;
    // 802D0D38: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0D3C:
    ctx->pc = 0x802D0D3Cu;
    // 802D0D3C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0D40:
    ctx->pc = 0x802D0D40u;
    // 802D0D40: stw     r5, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802D0D44:
    ctx->pc = 0x802D0D44u;
    // 802D0D44: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0D48:
    ctx->pc = 0x802D0D48u;
    ctx->downcount -= 7;
    // 802D0D48: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0D4C:
    ctx->pc = 0x802D0D4Cu;
    // 802D0D4C: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D0D50:
    ctx->pc = 0x802D0D50u;
    // 802D0D50: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0D54:
    ctx->pc = 0x802D0D54u;
    // 802D0D54: lwz     r12, 80(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(80);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0D58:
    ctx->pc = 0x802D0D58u;
    // 802D0D58: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0D5C:
    ctx->pc = 0x802D0D5Cu;
    // 802D0D5C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802D0D60:
    ctx->pc = 0x802D0D60u;
    ctx->downcount -= 11;
    // 802D0D60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0D64:
    ctx->pc = 0x802D0D64u;
    // 802D0D64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0D68:
    ctx->pc = 0x802D0D68u;
    // 802D0D68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0D6C:
    ctx->pc = 0x802D0D6Cu;
    // 802D0D6C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0D70:
    ctx->pc = 0x802D0D70u;
    // 802D0D70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0D74:
    ctx->pc = 0x802D0D74u;
    // 802D0D74: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0D78:
    ctx->pc = 0x802D0D78u;
    // 802D0D78: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0D7C:
    ctx->pc = 0x802D0D7Cu;
    // 802D0D7C: lwz     r12, 88(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(88);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0D80:
    ctx->pc = 0x802D0D80u;
    // 802D0D80: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0D84:
    ctx->pc = 0x802D0D84u;
    // 802D0D84: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0D88u;
            ctx->pc = target;
            return;
        }
    }

label_802D0D88:
    ctx->pc = 0x802D0D88u;
    ctx->downcount -= 7;
    // 802D0D88: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802D0D8C:
    ctx->pc = 0x802D0D8Cu;
    // 802D0D8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0D90:
    ctx->pc = 0x802D0D90u;
    // 802D0D90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0D94:
    ctx->pc = 0x802D0D94u;
    // 802D0D94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0D98:
    ctx->pc = 0x802D0D98u;
    // 802D0D98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0D9C:
    ctx->pc = 0x802D0D9Cu;
    // 802D0D9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0DA0:
    ctx->pc = 0x802D0DA0u;
    ctx->downcount -= 6;
    // 802D0DA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0DA4:
    ctx->pc = 0x802D0DA4u;
    // 802D0DA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0DA8:
    ctx->pc = 0x802D0DA8u;
    // 802D0DA8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0DAC:
    ctx->pc = 0x802D0DACu;
    // 802D0DAC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0DB0:
    ctx->pc = 0x802D0DB0u;
    // 802D0DB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0DB4:
    ctx->pc = 0x802D0DB4u;
    // 802D0DB4: bl      0x802D0E18
    {
            ctx->lr = 0x802D0DB8u;
            goto label_802D0E18;
    }

label_802D0DB8:
    ctx->pc = 0x802D0DB8u;
    ctx->downcount -= 3;
    // 802D0DB8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0DBC:
    ctx->pc = 0x802D0DBCu;
    // 802D0DBC: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0DC0:
    ctx->pc = 0x802D0DC0u;
    // 802D0DC0: bl      0x802D0DE0
    {
            ctx->lr = 0x802D0DC4u;
            goto label_802D0DE0;
    }

label_802D0DC4:
    ctx->pc = 0x802D0DC4u;
    ctx->downcount -= 2;
    // 802D0DC4: lwz     r3, 324(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(324);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0DC8:
    ctx->pc = 0x802D0DC8u;
    // 802D0DC8: bl      0x80308170
    {
            ctx->lr = 0x802D0DCCu;
            ctx->pc = 0x80308170u;
            return;
    }

label_802D0DCC:
    ctx->pc = 0x802D0DCCu;
    ctx->downcount -= 6;
    // 802D0DCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0DD0:
    ctx->pc = 0x802D0DD0u;
    // 802D0DD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0DD4:
    ctx->pc = 0x802D0DD4u;
    // 802D0DD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0DD8:
    ctx->pc = 0x802D0DD8u;
    // 802D0DD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0DDC:
    ctx->pc = 0x802D0DDCu;
    // 802D0DDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0DE0:
    ctx->pc = 0x802D0DE0u;
    ctx->downcount -= 4;
    // 802D0DE0: lwz     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0DE4:
    ctx->pc = 0x802D0DE4u;
    // 802D0DE4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0DE8:
    ctx->pc = 0x802D0DE8u;
    // 802D0DE8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0DEC:
    ctx->pc = 0x802D0DECu;
    // 802D0DEC: bc    4, 2, 0x802D0E00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0E00;
        }
    }

label_802D0DF0:
    ctx->pc = 0x802D0DF0u;
    ctx->downcount -= 4;
    // 802D0DF0: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0DF4:
    ctx->pc = 0x802D0DF4u;
    // 802D0DF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0DF8:
    ctx->pc = 0x802D0DF8u;
    // 802D0DF8: stw     r5, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802D0DFC:
    ctx->pc = 0x802D0DFCu;
    // 802D0DFC: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0E00:
    ctx->pc = 0x802D0E00u;
    ctx->downcount -= 7;
    // 802D0E00: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0E04:
    ctx->pc = 0x802D0E04u;
    // 802D0E04: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D0E08:
    ctx->pc = 0x802D0E08u;
    // 802D0E08: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E0C:
    ctx->pc = 0x802D0E0Cu;
    // 802D0E0C: lwz     r12, 80(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(80);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E10:
    ctx->pc = 0x802D0E10u;
    // 802D0E10: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0E14:
    ctx->pc = 0x802D0E14u;
    // 802D0E14: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802D0E18:
    ctx->pc = 0x802D0E18u;
    ctx->downcount -= 11;
    // 802D0E18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0E1C:
    ctx->pc = 0x802D0E1Cu;
    // 802D0E1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0E20:
    ctx->pc = 0x802D0E20u;
    // 802D0E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0E24:
    ctx->pc = 0x802D0E24u;
    // 802D0E24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0E28:
    ctx->pc = 0x802D0E28u;
    // 802D0E28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0E2C:
    ctx->pc = 0x802D0E2Cu;
    // 802D0E2C: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0E30:
    ctx->pc = 0x802D0E30u;
    // 802D0E30: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E34:
    ctx->pc = 0x802D0E34u;
    // 802D0E34: lwz     r12, 88(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(88);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E38:
    ctx->pc = 0x802D0E38u;
    // 802D0E38: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0E3C:
    ctx->pc = 0x802D0E3Cu;
    // 802D0E3C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0E40u;
            ctx->pc = target;
            return;
        }
    }

label_802D0E40:
    ctx->pc = 0x802D0E40u;
    ctx->downcount -= 7;
    // 802D0E40: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802D0E44:
    ctx->pc = 0x802D0E44u;
    // 802D0E44: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0E48:
    ctx->pc = 0x802D0E48u;
    // 802D0E48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0E4C:
    ctx->pc = 0x802D0E4Cu;
    // 802D0E4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0E50:
    ctx->pc = 0x802D0E50u;
    // 802D0E50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0E54:
    ctx->pc = 0x802D0E54u;
    // 802D0E54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0E58:
    ctx->pc = 0x802D0E58u;
    ctx->downcount -= 11;
    // 802D0E58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0E5C:
    ctx->pc = 0x802D0E5Cu;
    // 802D0E5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0E60:
    ctx->pc = 0x802D0E60u;
    // 802D0E60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0E64:
    ctx->pc = 0x802D0E64u;
    // 802D0E64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0E68:
    ctx->pc = 0x802D0E68u;
    // 802D0E68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0E6C:
    ctx->pc = 0x802D0E6Cu;
    // 802D0E6C: lwz     r3, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0E70:
    ctx->pc = 0x802D0E70u;
    // 802D0E70: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E74:
    ctx->pc = 0x802D0E74u;
    // 802D0E74: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0E78:
    ctx->pc = 0x802D0E78u;
    // 802D0E78: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0E7C:
    ctx->pc = 0x802D0E7Cu;
    // 802D0E7C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0E80u;
            ctx->pc = target;
            return;
        }
    }

label_802D0E80:
    ctx->pc = 0x802D0E80u;
    ctx->downcount -= 2;
    // 802D0E80: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0E84:
    ctx->pc = 0x802D0E84u;
    // 802D0E84: bc    12, 2, 0x802D0E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0E9C;
        }
    }

label_802D0E88:
    ctx->pc = 0x802D0E88u;
    ctx->downcount -= 2;
    // 802D0E88: lwz     r3, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0E8C:
    ctx->pc = 0x802D0E8Cu;
    // 802D0E8C: bl      0x802D0EB8
    {
            ctx->lr = 0x802D0E90u;
            goto label_802D0EB8;
    }

label_802D0E90:
    ctx->pc = 0x802D0E90u;
    ctx->downcount -= 3;
    // 802D0E90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0E94:
    ctx->pc = 0x802D0E94u;
    // 802D0E94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0E98:
    ctx->pc = 0x802D0E98u;
    // 802D0E98: bl      0x802D0D28
    {
            ctx->lr = 0x802D0E9Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0D28u;
                return;
            }
            goto label_802D0D28;
    }

label_802D0E9C:
    ctx->pc = 0x802D0E9Cu;
    ctx->downcount -= 2;
    // 802D0E9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D0EA0:
    ctx->pc = 0x802D0EA0u;
    // 802D0EA0: bl      0x802D0F70
    {
            ctx->lr = 0x802D0EA4u;
            goto label_802D0F70;
    }

label_802D0EA4:
    ctx->pc = 0x802D0EA4u;
    ctx->downcount -= 6;
    // 802D0EA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0EA8:
    ctx->pc = 0x802D0EA8u;
    // 802D0EA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0EAC:
    ctx->pc = 0x802D0EACu;
    // 802D0EAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0EB0:
    ctx->pc = 0x802D0EB0u;
    // 802D0EB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0EB4:
    ctx->pc = 0x802D0EB4u;
    // 802D0EB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0EB8:
    ctx->pc = 0x802D0EB8u;
    ctx->downcount -= 11;
    // 802D0EB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0EBC:
    ctx->pc = 0x802D0EBCu;
    // 802D0EBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0EC0:
    ctx->pc = 0x802D0EC0u;
    // 802D0EC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0EC4:
    ctx->pc = 0x802D0EC4u;
    // 802D0EC4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0EC8:
    ctx->pc = 0x802D0EC8u;
    // 802D0EC8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0ECC:
    ctx->pc = 0x802D0ECCu;
    // 802D0ECC: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0ED0:
    ctx->pc = 0x802D0ED0u;
    // 802D0ED0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0ED4:
    ctx->pc = 0x802D0ED4u;
    // 802D0ED4: lwz     r12, 88(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(88);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0ED8:
    ctx->pc = 0x802D0ED8u;
    // 802D0ED8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0EDC:
    ctx->pc = 0x802D0EDCu;
    // 802D0EDC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D0EE0u;
            ctx->pc = target;
            return;
        }
    }

label_802D0EE0:
    ctx->pc = 0x802D0EE0u;
    ctx->downcount -= 7;
    // 802D0EE0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802D0EE4:
    ctx->pc = 0x802D0EE4u;
    // 802D0EE4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0EE8:
    ctx->pc = 0x802D0EE8u;
    // 802D0EE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0EEC:
    ctx->pc = 0x802D0EECu;
    // 802D0EEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0EF0:
    ctx->pc = 0x802D0EF0u;
    // 802D0EF0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0EF4:
    ctx->pc = 0x802D0EF4u;
    // 802D0EF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0EF8:
    ctx->pc = 0x802D0EF8u;
    ctx->downcount -= 6;
    // 802D0EF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0EFC:
    ctx->pc = 0x802D0EFCu;
    // 802D0EFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0F00:
    ctx->pc = 0x802D0F00u;
    // 802D0F00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0F04:
    ctx->pc = 0x802D0F04u;
    // 802D0F04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0F08:
    ctx->pc = 0x802D0F08u;
    // 802D0F08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0F0C:
    ctx->pc = 0x802D0F0Cu;
    // 802D0F0C: bl      0x802D0E18
    {
            ctx->lr = 0x802D0F10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0E18u;
                return;
            }
            goto label_802D0E18;
    }

label_802D0F10:
    ctx->pc = 0x802D0F10u;
    ctx->downcount -= 3;
    // 802D0F10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0F14:
    ctx->pc = 0x802D0F14u;
    // 802D0F14: lwz     r3, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0F18:
    ctx->pc = 0x802D0F18u;
    // 802D0F18: bl      0x802D0F38
    {
            ctx->lr = 0x802D0F1Cu;
            goto label_802D0F38;
    }

label_802D0F1C:
    ctx->pc = 0x802D0F1Cu;
    ctx->downcount -= 2;
    // 802D0F1C: lwz     r3, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0F20:
    ctx->pc = 0x802D0F20u;
    // 802D0F20: bl      0x80307360
    {
            ctx->lr = 0x802D0F24u;
            ctx->pc = 0x80307360u;
            return;
    }

label_802D0F24:
    ctx->pc = 0x802D0F24u;
    ctx->downcount -= 6;
    // 802D0F24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0F28:
    ctx->pc = 0x802D0F28u;
    // 802D0F28: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D0F2C:
    ctx->pc = 0x802D0F2Cu;
    // 802D0F2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0F30:
    ctx->pc = 0x802D0F30u;
    // 802D0F30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0F34:
    ctx->pc = 0x802D0F34u;
    // 802D0F34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0F38:
    ctx->pc = 0x802D0F38u;
    ctx->downcount -= 4;
    // 802D0F38: lwz     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0F3C:
    ctx->pc = 0x802D0F3Cu;
    // 802D0F3C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0F40:
    ctx->pc = 0x802D0F40u;
    // 802D0F40: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0F44:
    ctx->pc = 0x802D0F44u;
    // 802D0F44: bc    4, 2, 0x802D0F58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0F58;
        }
    }

label_802D0F48:
    ctx->pc = 0x802D0F48u;
    ctx->downcount -= 4;
    // 802D0F48: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D0F4C:
    ctx->pc = 0x802D0F4Cu;
    // 802D0F4C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D0F50:
    ctx->pc = 0x802D0F50u;
    // 802D0F50: stw     r5, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802D0F54:
    ctx->pc = 0x802D0F54u;
    // 802D0F54: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0F58:
    ctx->pc = 0x802D0F58u;
    ctx->downcount -= 7;
    // 802D0F58: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0F5C:
    ctx->pc = 0x802D0F5Cu;
    // 802D0F5C: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D0F60:
    ctx->pc = 0x802D0F60u;
    // 802D0F60: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0F64:
    ctx->pc = 0x802D0F64u;
    // 802D0F64: lwz     r12, 80(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(80);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D0F68:
    ctx->pc = 0x802D0F68u;
    // 802D0F68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D0F6C:
    ctx->pc = 0x802D0F6Cu;
    // 802D0F6C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802D0F70:
    ctx->pc = 0x802D0F70u;
    ctx->downcount -= 16;
    // 802D0F70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0F74:
    ctx->pc = 0x802D0F74u;
    // 802D0F74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0F78:
    ctx->pc = 0x802D0F78u;
    // 802D0F78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0F7C:
    ctx->pc = 0x802D0F7Cu;
    // 802D0F7C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D0F80:
    ctx->pc = 0x802D0F80u;
    // 802D0F80: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0F84:
    ctx->pc = 0x802D0F84u;
    // 802D0F84: bl      0x80300A7C
    {
            ctx->lr = 0x802D0F88u;
            ctx->pc = 0x80300A7Cu;
            return;
    }

label_802D0F88:
    ctx->pc = 0x802D0F88u;
    ctx->downcount -= 3;
    // 802D0F88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D0F8C:
    ctx->pc = 0x802D0F8Cu;
    // 802D0F8C: lwz     r3, -13448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0F90:
    ctx->pc = 0x802D0F90u;
    // 802D0F90: bl      0x802309F4
    {
            ctx->lr = 0x802D0F94u;
            ctx->pc = 0x802309F4u;
            return;
    }

label_802D0F94:
    ctx->pc = 0x802D0F94u;
    ctx->downcount -= 1;
    // 802D0F94: bl      0x8022FE18
    {
            ctx->lr = 0x802D0F98u;
            ctx->pc = 0x8022FE18u;
            return;
    }

label_802D0F98:
    ctx->pc = 0x802D0F98u;
    ctx->downcount -= 2;
    // 802D0F98: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0F9C:
    ctx->pc = 0x802D0F9Cu;
    // 802D0F9C: bc    12, 2, 0x802D0FBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D0FBC;
        }
    }

label_802D0FA0:
    ctx->pc = 0x802D0FA0u;
    ctx->downcount -= 5;
    // 802D0FA0: lbz     r3, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802D0FA4:
    ctx->pc = 0x802D0FA4u;
    // 802D0FA4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_802D0FA8:
    ctx->pc = 0x802D0FA8u;
    // 802D0FA8: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_802D0FAC:
    ctx->pc = 0x802D0FACu;
    // 802D0FAC: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D0FB0:
    ctx->pc = 0x802D0FB0u;
    // 802D0FB0: bc    4, 1, 0x802D0FB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D0FB8;
        }
    }

label_802D0FB4:
    ctx->pc = 0x802D0FB4u;
    ctx->downcount -= 1;
    // 802D0FB4: or   r3, r0, r0
    {
        ctx->gpr[3] = ctx->gpr[0] | ctx->gpr[0];
    }

label_802D0FB8:
    ctx->pc = 0x802D0FB8u;
    ctx->downcount -= 1;
    // 802D0FB8: stb     r3, 332(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_802D0FBC:
    ctx->pc = 0x802D0FBCu;
    ctx->downcount -= 16;
    // 802D0FBC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D0FC0:
    ctx->pc = 0x802D0FC0u;
    // 802D0FC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D0FC4:
    ctx->pc = 0x802D0FC4u;
    // 802D0FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D0FC8:
    ctx->pc = 0x802D0FC8u;
    // 802D0FC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D0FCC:
    ctx->pc = 0x802D0FCCu;
    // 802D0FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D0FD0:
    ctx->pc = 0x802D0FD0u;
    ctx->downcount -= 10;
    // 802D0FD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D0FD4:
    ctx->pc = 0x802D0FD4u;
    // 802D0FD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D0FD8:
    ctx->pc = 0x802D0FD8u;
    // 802D0FD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D0FDC:
    ctx->pc = 0x802D0FDCu;
    // 802D0FDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D0FE0:
    // 802D0FE0: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_802D0FE4:
    // 802D0FE4: addi    r4, r31, 21316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21316);

label_802D0FE8:
    ctx->pc = 0x802D0FE8u;
    // 802D0FE8: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0FEC:
    // 802D0FEC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D0FF0:
    // 802D0FF0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D0FF4:
    // 802D0FF4: bl      0x80370BD4
    {
            ctx->lr = 0x802D0FF8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D0FF8:
    ctx->pc = 0x802D0FF8u;
    ctx->downcount -= 3;
    // 802D0FF8: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D0FFC:
    // 802D0FFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1000:
    // 802D1000: bl      0x8026E154
    {
            ctx->lr = 0x802D1004u;
            ctx->pc = 0x8026E154u;
            return;
    }

label_802D1004:
    ctx->downcount -= 3;
    // 802D1004: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1008:
    // 802D1008: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D100C:
    // 802D100C: bl      0x80272F30
    {
            ctx->lr = 0x802D1010u;
            ctx->pc = 0x80272F30u;
            return;
    }

label_802D1010:
    ctx->pc = 0x802D1010u;
    ctx->downcount -= 5;
    // 802D1010: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1014:
    // 802D1014: addi    r4, r31, 21316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21316);

label_802D1018:
    // 802D1018: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D101C:
    // 802D101C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D1020:
    // 802D1020: bl      0x80370BD4
    {
            ctx->lr = 0x802D1024u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D1024:
    ctx->pc = 0x802D1024u;
    ctx->downcount -= 3;
    // 802D1024: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1028:
    // 802D1028: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D102C:
    // 802D102C: bl      0x8026E140
    {
            ctx->lr = 0x802D1030u;
            ctx->pc = 0x8026E140u;
            return;
    }

label_802D1030:
    ctx->downcount -= 17;
    // 802D1030: lis     r4, -32643
    ctx->gpr[4] = ((u32)(s32)(-32643) << 16);

label_802D1034:
    ctx->pc = 0x802D1034u;
    // 802D1034: lfs     f0, 624(r4)
    if (!ppc_fp_available_inline(ctx, 0x802D1034u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(624);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D1038:
    // 802D1038: addi    r4, r4, 624
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(624);

label_802D103C:
    ctx->pc = 0x802D103Cu;
    // 802D103C: stfs     f0, 100(r3)
    if (!ppc_fp_available_inline(ctx, 0x802D103Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1040:
    ctx->pc = 0x802D1040u;
    // 802D1040: lfs     f0, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x802D1040u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D1044:
    ctx->pc = 0x802D1044u;
    // 802D1044: stfs     f0, 104(r3)
    if (!ppc_fp_available_inline(ctx, 0x802D1044u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1048:
    ctx->pc = 0x802D1048u;
    // 802D1048: lfs     f0, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x802D1048u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D104C:
    ctx->pc = 0x802D104Cu;
    // 802D104C: stfs     f0, 108(r3)
    if (!ppc_fp_available_inline(ctx, 0x802D104Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1050:
    ctx->pc = 0x802D1050u;
    // 802D1050: lbz     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D1054:
    // 802D1054: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802D1058:
    ctx->pc = 0x802D1058u;
    // 802D1058: stb     r0, 132(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(132);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D105C:
    ctx->pc = 0x802D105Cu;
    // 802D105C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1060:
    ctx->pc = 0x802D1060u;
    // 802D1060: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1064:
    ctx->pc = 0x802D1064u;
    // 802D1064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1068:
    // 802D1068: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D106C:
    ctx->pc = 0x802D106Cu;
    // 802D106C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1070:
    ctx->pc = 0x802D1070u;
    ctx->downcount -= 9;
    // 802D1070: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1074:
    ctx->pc = 0x802D1074u;
    // 802D1074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1078:
    // 802D1078: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D107C:
    // 802D107C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D1080:
    ctx->pc = 0x802D1080u;
    // 802D1080: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1084:
    ctx->pc = 0x802D1084u;
    // 802D1084: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1088:
    // 802D1088: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802D108C:
    // 802D108C: addi    r3, r31, 7696
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(7696);

label_802D1090:
    // 802D1090: bl      0x80231700
    {
            ctx->lr = 0x802D1094u;
            ctx->pc = 0x80231700u;
            return;
    }

label_802D1094:
    ctx->downcount -= 4;
    // 802D1094: addi    r4, r31, 7696
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(7696);

label_802D1098:
    // 802D1098: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D109C:
    // 802D109C: addi    r4, r4, 13
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13);

label_802D10A0:
    // 802D10A0: bl      0x80232594
    {
            ctx->lr = 0x802D10A4u;
            ctx->pc = 0x80232594u;
            return;
    }

label_802D10A4:
    ctx->pc = 0x802D10A4u;
    ctx->downcount -= 2;
    // 802D10A4: lwz     r4, -14192(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D10A8:
    // 802D10A8: bl      0x8025C778
    {
            ctx->lr = 0x802D10ACu;
            ctx->pc = 0x8025C778u;
            return;
    }

label_802D10AC:
    ctx->pc = 0x802D10ACu;
    ctx->downcount -= 7;
    // 802D10AC: lwz     r5, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D10B0:
    // 802D10B0: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802D10B4:
    // 802D10B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D10B8:
    // 802D10B8: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D10BC:
    // 802D10BC: addi    r4, r4, 21316
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21316);

label_802D10C0:
    // 802D10C0: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D10C4:
    // 802D10C4: bl      0x80370BD4
    {
            ctx->lr = 0x802D10C8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D10C8:
    ctx->pc = 0x802D10C8u;
    ctx->downcount -= 7;
    // 802D10C8: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D10CC:
    // 802D10CC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D10D0:
    // 802D10D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D10D4:
    // 802D10D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D10D8:
    // 802D10D8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D10DC:
    // 802D10DC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802D10E0:
    // 802D10E0: bl      0x8026CDCC
    {
            ctx->lr = 0x802D10E4u;
            ctx->pc = 0x8026CDCCu;
            return;
    }

label_802D10E4:
    ctx->pc = 0x802D10E4u;
    ctx->downcount -= 6;
    // 802D10E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D10E8:
    ctx->pc = 0x802D10E8u;
    // 802D10E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D10EC:
    ctx->pc = 0x802D10ECu;
    // 802D10EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D10F0:
    // 802D10F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D10F4:
    ctx->pc = 0x802D10F4u;
    // 802D10F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D10F8:
    ctx->pc = 0x802D10F8u;
    ctx->downcount -= 6;
    // 802D10F8: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D10FC:
    ctx->pc = 0x802D10FCu;
    // 802D10FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1100:
    ctx->pc = 0x802D1100u;
    // 802D1100: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1104:
    // 802D1104: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_802D1108:
    ctx->pc = 0x802D1108u;
    // 802D1108: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D110C:
    // 802D110C: bl      0x8012FA60
    {
            ctx->lr = 0x802D1110u;
            ctx->pc = 0x8012FA60u;
            return;
    }

label_802D1110:
    ctx->downcount -= 2;
    // 802D1110: addi    r3, r1, 80
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(80);

label_802D1114:
    // 802D1114: bl      0x8012FA60
    {
            ctx->lr = 0x802D1118u;
            ctx->pc = 0x8012FA60u;
            return;
    }

label_802D1118:
    ctx->downcount -= 2;
    // 802D1118: addi    r3, r1, 92
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(92);

label_802D111C:
    // 802D111C: bl      0x8012FA60
    {
            ctx->lr = 0x802D1120u;
            ctx->pc = 0x8012FA60u;
            return;
    }

label_802D1120:
    ctx->downcount -= 2;
    // 802D1120: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802D1124:
    // 802D1124: bl      0x8012FA60
    {
            ctx->lr = 0x802D1128u;
            ctx->pc = 0x8012FA60u;
            return;
    }

label_802D1128:
    ctx->downcount -= 2;
    // 802D1128: addi    r3, r1, 116
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(116);

label_802D112C:
    // 802D112C: bl      0x8012FA60
    {
            ctx->lr = 0x802D1130u;
            ctx->pc = 0x8012FA60u;
            return;
    }

label_802D1130:
    ctx->pc = 0x802D1130u;
    ctx->downcount -= 38;
    // 802D1130: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1134:
    // 802D1134: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_802D1138:
    ctx->pc = 0x802D1138u;
    // 802D1138: lfs     f1, -12816(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D1138u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12816);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D113C:
    // 802D113C: addi    r4, r31, 21316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21316);

label_802D1140:
    ctx->pc = 0x802D1140u;
    // 802D1140: lfs     f0, -12812(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D1140u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12812);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D1144:
    // 802D1144: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D1148:
    ctx->pc = 0x802D1148u;
    // 802D1148: stfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1148u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D114C:
    // 802D114C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D1150:
    ctx->pc = 0x802D1150u;
    // 802D1150: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1154:
    ctx->pc = 0x802D1154u;
    // 802D1154: stfs     f1, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1154u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1158:
    ctx->pc = 0x802D1158u;
    // 802D1158: stfs     f1, 68(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1158u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D115C:
    ctx->pc = 0x802D115Cu;
    // 802D115C: stfs     f1, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D115Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1160:
    ctx->pc = 0x802D1160u;
    // 802D1160: stfs     f1, 76(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1164:
    ctx->pc = 0x802D1164u;
    // 802D1164: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1164u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1168:
    ctx->pc = 0x802D1168u;
    // 802D1168: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D116C:
    ctx->pc = 0x802D116Cu;
    // 802D116C: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D116Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1170:
    ctx->pc = 0x802D1170u;
    // 802D1170: stfs     f0, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1174:
    ctx->pc = 0x802D1174u;
    // 802D1174: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1178:
    ctx->pc = 0x802D1178u;
    // 802D1178: stfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D117C:
    ctx->pc = 0x802D117Cu;
    // 802D117C: stfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D117Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1180:
    ctx->pc = 0x802D1180u;
    // 802D1180: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1180u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1184:
    ctx->pc = 0x802D1184u;
    // 802D1184: stfs     f1, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1188:
    ctx->pc = 0x802D1188u;
    // 802D1188: stfs     f1, 92(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1188u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D118C:
    ctx->pc = 0x802D118Cu;
    // 802D118C: stfs     f0, 96(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D118Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1190:
    ctx->pc = 0x802D1190u;
    // 802D1190: stfs     f1, 100(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1190u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1194:
    ctx->pc = 0x802D1194u;
    // 802D1194: stfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1194u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1198:
    ctx->pc = 0x802D1198u;
    // 802D1198: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D1198u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D119C:
    ctx->pc = 0x802D119Cu;
    // 802D119C: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D119Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11A0:
    ctx->pc = 0x802D11A0u;
    // 802D11A0: stfs     f1, 104(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D11A4:
    ctx->pc = 0x802D11A4u;
    // 802D11A4: stfs     f1, 108(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D11A8:
    ctx->pc = 0x802D11A8u;
    // 802D11A8: stfs     f0, 112(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(112);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11AC:
    ctx->pc = 0x802D11ACu;
    // 802D11AC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11B0:
    ctx->pc = 0x802D11B0u;
    // 802D11B0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11B4:
    ctx->pc = 0x802D11B4u;
    // 802D11B4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11B8:
    ctx->pc = 0x802D11B8u;
    // 802D11B8: stfs     f0, 116(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11BC:
    ctx->pc = 0x802D11BCu;
    // 802D11BC: stfs     f0, 120(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11C0:
    ctx->pc = 0x802D11C0u;
    // 802D11C0: stfs     f0, 124(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D11C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D11C4:
    // 802D11C4: bl      0x80370BD4
    {
            ctx->lr = 0x802D11C8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D11C8:
    ctx->pc = 0x802D11C8u;
    ctx->downcount -= 5;
    // 802D11C8: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D11CC:
    // 802D11CC: addi    r5, r1, 68
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(68);

label_802D11D0:
    // 802D11D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D11D4:
    // 802D11D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D11D8:
    // 802D11D8: bl      0x8026BAC4
    {
            ctx->lr = 0x802D11DCu;
            ctx->pc = 0x8026BAC4u;
            return;
    }

label_802D11DC:
    ctx->pc = 0x802D11DCu;
    ctx->downcount -= 5;
    // 802D11DC: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D11E0:
    // 802D11E0: addi    r4, r31, 21316
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21316);

label_802D11E4:
    // 802D11E4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D11E8:
    // 802D11E8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D11EC:
    // 802D11EC: bl      0x80370BD4
    {
            ctx->lr = 0x802D11F0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D11F0:
    ctx->pc = 0x802D11F0u;
    ctx->downcount -= 4;
    // 802D11F0: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D11F4:
    // 802D11F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D11F8:
    // 802D11F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D11FC:
    // 802D11FC: bl      0x8026BA7C
    {
            ctx->lr = 0x802D1200u;
            ctx->pc = 0x8026BA7Cu;
            return;
    }

label_802D1200:
    ctx->downcount -= 2;
    // 802D1200: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802D1204:
    // 802D1204: bl      0x80281A10
    {
            ctx->lr = 0x802D1208u;
            ctx->pc = 0x80281A10u;
            return;
    }

label_802D1208:
    ctx->pc = 0x802D1208u;
    ctx->downcount -= 6;
    // 802D1208: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D120C:
    ctx->pc = 0x802D120Cu;
    // 802D120C: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1210:
    ctx->pc = 0x802D1210u;
    // 802D1210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1214:
    // 802D1214: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_802D1218:
    ctx->pc = 0x802D1218u;
    // 802D1218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D121C:
    ctx->pc = 0x802D121Cu;
    ctx->downcount -= 2;
    // 802D121C: lwz     r3, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1220:
    // 802D1220: b       0x80307358
    {
            ctx->pc = 0x80307358u;
            return;
    }

label_802D1224:
    ctx->pc = 0x802D1224u;
    ctx->downcount -= 7;
    // 802D1224: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1228:
    ctx->pc = 0x802D1228u;
    // 802D1228: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D122C:
    ctx->pc = 0x802D122Cu;
    // 802D122C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1230:
    ctx->pc = 0x802D1230u;
    // 802D1230: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1234:
    // 802D1234: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1238:
    // 802D1238: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D123C:
    // 802D123C: bl      0x80245930
    {
            ctx->lr = 0x802D1240u;
            ctx->pc = 0x80245930u;
            return;
    }

label_802D1240:
    ctx->pc = 0x802D1240u;
    ctx->downcount -= 5;
    // 802D1240: lwz     r4, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1244:
    // 802D1244: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1248:
    // 802D1248: addi    r0, r4, 300
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(300);

label_802D124C:
    // 802D124C: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1250:
    // 802D1250: bc    12, 0, 0x802D1274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1274;
        }
    }

label_802D1254:
    ctx->pc = 0x802D1254u;
    ctx->downcount -= 6;
    // 802D1254: lwz     r3, -13360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1258:
    // 802D1258: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D125C:
    // 802D125C: addi    r4, r4, -30888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30888);

label_802D1260:
    // 802D1260: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D1264:
    // 802D1264: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D1268:
    // 802D1268: bl      0x80370BD4
    {
            ctx->lr = 0x802D126Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D126C:
    ctx->pc = 0x802D126Cu;
    ctx->downcount -= 2;
    // 802D126C: lwz     r3, -13360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1270:
    ctx->pc = 0x802D1270u;
    // 802D1270: stw     r31, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1274:
    ctx->pc = 0x802D1274u;
    ctx->downcount -= 6;
    // 802D1274: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1278:
    ctx->pc = 0x802D1278u;
    // 802D1278: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D127C:
    ctx->pc = 0x802D127Cu;
    // 802D127C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1280:
    // 802D1280: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1284:
    ctx->pc = 0x802D1284u;
    // 802D1284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1288:
    ctx->downcount -= 1;
    // 802D1288: b       0x802D0FD0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0FD0u;
                return;
            }
            goto label_802D0FD0;
    }

label_802D128C:
    ctx->pc = 0x802D128Cu;
    ctx->downcount -= 16;
    // 802D128C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1290:
    ctx->pc = 0x802D1290u;
    // 802D1290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1294:
    ctx->pc = 0x802D1294u;
    // 802D1294: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1298:
    ctx->pc = 0x802D1298u;
    // 802D1298: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D129C:
    // 802D129C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D12A0:
    // 802D12A0: bl      0x802D0C4C
    {
            ctx->lr = 0x802D12A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0C4Cu;
                return;
            }
            goto label_802D0C4C;
    }

label_802D12A4:
    ctx->pc = 0x802D12A4u;
    ctx->downcount -= 7;
    // 802D12A4: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D12A8:
    // 802D12A8: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_802D12AC:
    ctx->pc = 0x802D12ACu;
    // 802D12AC: lwz     r30, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D12B0:
    // 802D12B0: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_802D12B4:
    // 802D12B4: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D12B8:
    // 802D12B8: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D12BC:
    // 802D12BC: bl      0x80370BD4
    {
            ctx->lr = 0x802D12C0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D12C0:
    ctx->downcount -= 7;
    // 802D12C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D12C4:
    ctx->pc = 0x802D12C4u;
    // 802D12C4: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D12C8:
    ctx->pc = 0x802D12C8u;
    // 802D12C8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D12CC:
    ctx->pc = 0x802D12CCu;
    // 802D12CC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D12D0:
    ctx->pc = 0x802D12D0u;
    // 802D12D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D12D4:
    ctx->pc = 0x802D12D4u;
    // 802D12D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D12D8u;
            ctx->pc = target;
            return;
        }
    }

label_802D12D8:
    ctx->downcount -= 5;
    // 802D12D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D12DC:
    // 802D12DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D12E0:
    // 802D12E0: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802D12E4:
    // 802D12E4: li      r6, 100
    ctx->gpr[6] = (u32)(s32)(100);

label_802D12E8:
    // 802D12E8: bl      0x8027714C
    {
            ctx->lr = 0x802D12ECu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802D12EC:
    ctx->downcount -= 2;
    // 802D12EC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D12F0:
    // 802D12F0: bl      0x802D0C4C
    {
            ctx->lr = 0x802D12F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0C4Cu;
                return;
            }
            goto label_802D0C4C;
    }

label_802D12F4:
    ctx->pc = 0x802D12F4u;
    ctx->downcount -= 6;
    // 802D12F4: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D12F8:
    // 802D12F8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_802D12FC:
    ctx->pc = 0x802D12FCu;
    // 802D12FC: lwz     r30, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D1300:
    // 802D1300: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D1304:
    // 802D1304: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D1308:
    // 802D1308: bl      0x80370BD4
    {
            ctx->lr = 0x802D130Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D130C:
    ctx->downcount -= 7;
    // 802D130C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1310:
    ctx->pc = 0x802D1310u;
    // 802D1310: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802D1314:
    ctx->pc = 0x802D1314u;
    // 802D1314: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D1318:
    ctx->pc = 0x802D1318u;
    // 802D1318: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D131C:
    ctx->pc = 0x802D131Cu;
    // 802D131C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D1320:
    ctx->pc = 0x802D1320u;
    // 802D1320: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D1324u;
            ctx->pc = target;
            return;
        }
    }

label_802D1324:
    ctx->downcount -= 5;
    // 802D1324: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1328:
    // 802D1328: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D132C:
    // 802D132C: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802D1330:
    // 802D1330: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D1334:
    // 802D1334: bl      0x8027714C
    {
            ctx->lr = 0x802D1338u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802D1338:
    ctx->pc = 0x802D1338u;
    ctx->downcount -= 16;
    // 802D1338: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D133C:
    ctx->pc = 0x802D133Cu;
    // 802D133C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1340:
    ctx->pc = 0x802D1340u;
    // 802D1340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1344:
    // 802D1344: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1348:
    ctx->pc = 0x802D1348u;
    // 802D1348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D134C:
    ctx->downcount -= 1;
    // 802D134C: b       0x802D1070
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1070u;
                return;
            }
            goto label_802D1070;
    }

label_802D1350:
    ctx->pc = 0x802D1350u;
    ctx->downcount -= 9;
    // 802D1350: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1354:
    ctx->pc = 0x802D1354u;
    // 802D1354: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1358:
    ctx->pc = 0x802D1358u;
    // 802D1358: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D135C:
    ctx->pc = 0x802D135Cu;
    // 802D135C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D1360:
    ctx->pc = 0x802D1360u;
    // 802D1360: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1364:
    ctx->pc = 0x802D1364u;
    // 802D1364: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1368:
    ctx->pc = 0x802D1368u;
    // 802D1368: stb     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D136C:
    ctx->pc = 0x802D136Cu;
    // 802D136C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D1370:
    ctx->pc = 0x802D1370u;
    // 802D1370: bl      0x80245930
    {
            ctx->lr = 0x802D1374u;
            ctx->pc = 0x80245930u;
            return;
    }

label_802D1374:
    ctx->pc = 0x802D1374u;
    ctx->downcount -= 7;
    // 802D1374: stw     r3, 328(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1378:
    ctx->pc = 0x802D1378u;
    // 802D1378: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802D137C:
    ctx->pc = 0x802D137Cu;
    // 802D137C: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_802D1380:
    ctx->pc = 0x802D1380u;
    // 802D1380: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1384:
    ctx->pc = 0x802D1384u;
    // 802D1384: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D1388:
    ctx->pc = 0x802D1388u;
    // 802D1388: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D138C:
    ctx->pc = 0x802D138Cu;
    // 802D138C: bl      0x80370BD4
    {
            ctx->lr = 0x802D1390u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D1390:
    ctx->pc = 0x802D1390u;
    ctx->downcount -= 4;
    // 802D1390: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1394:
    ctx->pc = 0x802D1394u;
    // 802D1394: lbz     r0, 2720(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2720);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D1398:
    ctx->pc = 0x802D1398u;
    // 802D1398: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D139C:
    ctx->pc = 0x802D139Cu;
    // 802D139C: bc    12, 2, 0x802D13D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D13D0;
        }
    }

label_802D13A0:
    ctx->pc = 0x802D13A0u;
    ctx->downcount -= 6;
    // 802D13A0: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D13A4:
    ctx->pc = 0x802D13A4u;
    // 802D13A4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D13A8:
    ctx->pc = 0x802D13A8u;
    // 802D13A8: addi    r4, r4, 1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1560);

label_802D13AC:
    ctx->pc = 0x802D13ACu;
    // 802D13AC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D13B0:
    ctx->pc = 0x802D13B0u;
    // 802D13B0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D13B4:
    ctx->pc = 0x802D13B4u;
    // 802D13B4: bl      0x80370BD4
    {
            ctx->lr = 0x802D13B8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D13B8:
    ctx->pc = 0x802D13B8u;
    ctx->downcount -= 2;
    // 802D13B8: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D13BC:
    ctx->pc = 0x802D13BCu;
    // 802D13BC: bl      0x802DC824
    {
            ctx->lr = 0x802D13C0u;
            ctx->pc = 0x802DC824u;
            return;
    }

label_802D13C0:
    ctx->pc = 0x802D13C0u;
    ctx->downcount -= 3;
    // 802D13C0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D13C4:
    ctx->pc = 0x802D13C4u;
    // 802D13C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D13C8:
    ctx->pc = 0x802D13C8u;
    // 802D13C8: bl      0x803457B8
    {
            ctx->lr = 0x802D13CCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D13CC:
    ctx->pc = 0x802D13CCu;
    ctx->downcount -= 1;
    // 802D13CC: b       0x802D13FC
    {
            goto label_802D13FC;
    }

label_802D13D0:
    ctx->pc = 0x802D13D0u;
    ctx->downcount -= 6;
    // 802D13D0: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D13D4:
    ctx->pc = 0x802D13D4u;
    // 802D13D4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D13D8:
    ctx->pc = 0x802D13D8u;
    // 802D13D8: addi    r4, r4, 1560
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1560);

label_802D13DC:
    ctx->pc = 0x802D13DCu;
    // 802D13DC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D13E0:
    ctx->pc = 0x802D13E0u;
    // 802D13E0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D13E4:
    ctx->pc = 0x802D13E4u;
    // 802D13E4: bl      0x80370BD4
    {
            ctx->lr = 0x802D13E8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802D13E8:
    ctx->pc = 0x802D13E8u;
    ctx->downcount -= 2;
    // 802D13E8: lwz     r3, -12392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D13EC:
    ctx->pc = 0x802D13ECu;
    // 802D13EC: bl      0x802DC830
    {
            ctx->lr = 0x802D13F0u;
            ctx->pc = 0x802DC830u;
            return;
    }

label_802D13F0:
    ctx->pc = 0x802D13F0u;
    ctx->downcount -= 3;
    // 802D13F0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D13F4:
    ctx->pc = 0x802D13F4u;
    // 802D13F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D13F8:
    ctx->pc = 0x802D13F8u;
    // 802D13F8: bl      0x803457B8
    {
            ctx->lr = 0x802D13FCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D13FC:
    ctx->pc = 0x802D13FCu;
    ctx->downcount -= 6;
    // 802D13FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1400:
    ctx->pc = 0x802D1400u;
    // 802D1400: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1404:
    ctx->pc = 0x802D1404u;
    // 802D1404: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1408:
    ctx->pc = 0x802D1408u;
    // 802D1408: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D140C:
    ctx->pc = 0x802D140Cu;
    // 802D140C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1410:
    ctx->pc = 0x802D1410u;
    ctx->downcount -= 21;
    // 802D1410: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1414:
    ctx->pc = 0x802D1414u;
    // 802D1414: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1418:
    ctx->pc = 0x802D1418u;
    // 802D1418: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D141C:
    ctx->pc = 0x802D141Cu;
    // 802D141C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1420:
    ctx->pc = 0x802D1420u;
    // 802D1420: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1424:
    ctx->pc = 0x802D1424u;
    // 802D1424: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802D1428:
    ctx->pc = 0x802D1428u;
    // 802D1428: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D142C:
    ctx->pc = 0x802D142Cu;
    // 802D142C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D1430:
    ctx->pc = 0x802D1430u;
    // 802D1430: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1434:
    ctx->pc = 0x802D1434u;
    // 802D1434: addi    r31, r31, 1576
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1576);

label_802D1438:
    ctx->pc = 0x802D1438u;
    // 802D1438: bl      0x802D18F8
    {
            ctx->lr = 0x802D143Cu;
            goto label_802D18F8;
    }

label_802D143C:
    ctx->pc = 0x802D143Cu;
    ctx->downcount -= 10;
    // 802D143C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D1440:
    ctx->pc = 0x802D1440u;
    // 802D1440: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802D1444:
    ctx->pc = 0x802D1444u;
    // 802D1444: addi    r4, r4, 1664
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1664);

label_802D1448:
    ctx->pc = 0x802D1448u;
    // 802D1448: stw     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D144C:
    ctx->pc = 0x802D144Cu;
    // 802D144C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802D1450:
    ctx->pc = 0x802D1450u;
    // 802D1450: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_802D1454:
    ctx->pc = 0x802D1454u;
    // 802D1454: stw     r0, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1458:
    ctx->pc = 0x802D1458u;
    // 802D1458: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_802D145C:
    ctx->pc = 0x802D145Cu;
    // 802D145C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D1460:
    ctx->pc = 0x802D1460u;
    // 802D1460: bl      0x802D1818
    {
            ctx->lr = 0x802D1464u;
            goto label_802D1818;
    }

label_802D1464:
    ctx->pc = 0x802D1464u;
    ctx->downcount -= 5;
    // 802D1464: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802D1468:
    ctx->pc = 0x802D1468u;
    // 802D1468: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_802D146C:
    ctx->pc = 0x802D146Cu;
    // 802D146C: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_802D1470:
    ctx->pc = 0x802D1470u;
    // 802D1470: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802D1474:
    ctx->pc = 0x802D1474u;
    // 802D1474: bl      0x802D1818
    {
            ctx->lr = 0x802D1478u;
            goto label_802D1818;
    }

label_802D1478:
    ctx->pc = 0x802D1478u;
    ctx->downcount -= 2;
    // 802D1478: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D147C:
    ctx->pc = 0x802D147Cu;
    // 802D147C: bl      0x802D10F8
    {
            ctx->lr = 0x802D1480u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D10F8u;
                return;
            }
            goto label_802D10F8;
    }

label_802D1480:
    ctx->pc = 0x802D1480u;
    ctx->downcount -= 4;
    // 802D1480: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1484:
    ctx->pc = 0x802D1484u;
    // 802D1484: li      r3, 248
    ctx->gpr[3] = (u32)(s32)(248);

label_802D1488:
    ctx->pc = 0x802D1488u;
    // 802D1488: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D148C:
    ctx->pc = 0x802D148Cu;
    // 802D148C: bl      0x801C1C5C
    {
            ctx->lr = 0x802D1490u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D1490:
    ctx->pc = 0x802D1490u;
    ctx->downcount -= 2;
    // 802D1490: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1494:
    ctx->pc = 0x802D1494u;
    // 802D1494: bc    12, 2, 0x802D14A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D14A0;
        }
    }

label_802D1498:
    ctx->pc = 0x802D1498u;
    ctx->downcount -= 2;
    // 802D1498: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D149C:
    ctx->pc = 0x802D149Cu;
    // 802D149C: bl      0x803075BC
    {
            ctx->lr = 0x802D14A0u;
            ctx->pc = 0x803075BCu;
            return;
    }

label_802D14A0:
    ctx->pc = 0x802D14A0u;
    ctx->downcount -= 5;
    // 802D14A0: stw     r3, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D14A4:
    ctx->pc = 0x802D14A4u;
    // 802D14A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D14A8:
    ctx->pc = 0x802D14A8u;
    // 802D14A8: li      r3, 160
    ctx->gpr[3] = (u32)(s32)(160);

label_802D14AC:
    ctx->pc = 0x802D14ACu;
    // 802D14AC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D14B0:
    ctx->pc = 0x802D14B0u;
    // 802D14B0: bl      0x801C1C5C
    {
            ctx->lr = 0x802D14B4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D14B4:
    ctx->pc = 0x802D14B4u;
    ctx->downcount -= 2;
    // 802D14B4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D14B8:
    ctx->pc = 0x802D14B8u;
    // 802D14B8: bc    12, 2, 0x802D14C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D14C4;
        }
    }

label_802D14BC:
    ctx->pc = 0x802D14BCu;
    ctx->downcount -= 2;
    // 802D14BC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D14C0:
    ctx->pc = 0x802D14C0u;
    // 802D14C0: bl      0x8030822C
    {
            ctx->lr = 0x802D14C4u;
            ctx->pc = 0x8030822Cu;
            return;
    }

label_802D14C4:
    ctx->pc = 0x802D14C4u;
    ctx->downcount -= 4;
    // 802D14C4: stw     r3, 324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D14C8:
    ctx->pc = 0x802D14C8u;
    // 802D14C8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D14CC:
    ctx->pc = 0x802D14CCu;
    // 802D14CC: lwz     r4, 320(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D14D0:
    ctx->pc = 0x802D14D0u;
    // 802D14D0: bl      0x802A6408
    {
            ctx->lr = 0x802D14D4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D14D4:
    ctx->pc = 0x802D14D4u;
    ctx->downcount -= 3;
    // 802D14D4: lwz     r4, 324(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(324);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D14D8:
    ctx->pc = 0x802D14D8u;
    // 802D14D8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D14DC:
    ctx->pc = 0x802D14DCu;
    // 802D14DC: bl      0x802A6408
    {
            ctx->lr = 0x802D14E0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D14E0:
    ctx->pc = 0x802D14E0u;
    ctx->downcount -= 20;
    // 802D14E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D14E4:
    ctx->pc = 0x802D14E4u;
    // 802D14E4: stw     r0, 328(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D14E8:
    ctx->pc = 0x802D14E8u;
    // 802D14E8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D14EC:
    ctx->pc = 0x802D14ECu;
    // 802D14EC: stb     r0, 332(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802D14F0:
    ctx->pc = 0x802D14F0u;
    // 802D14F0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D14F4:
    ctx->pc = 0x802D14F4u;
    // 802D14F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D14F8:
    ctx->pc = 0x802D14F8u;
    // 802D14F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D14FC:
    ctx->pc = 0x802D14FCu;
    // 802D14FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1500:
    ctx->pc = 0x802D1500u;
    // 802D1500: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1504:
    ctx->pc = 0x802D1504u;
    ctx->downcount -= 18;
    // 802D1504: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1508:
    ctx->pc = 0x802D1508u;
    // 802D1508: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D150C:
    // 802D150C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1510:
    ctx->pc = 0x802D1510u;
    // 802D1510: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1514:
    ctx->pc = 0x802D1514u;
    // 802D1514: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1518:
    // 802D1518: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D151C:
    // 802D151C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1520:
    // 802D1520: bc    12, 2, 0x802D1580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1580;
        }
    }

label_802D1524:
    ctx->downcount -= 2;
    // 802D1524: addic.  r31, r3, 152
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(152);
        u64 res = a + b;
        ctx->gpr[31] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[31];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802D1528:
    // 802D1528: bc    12, 2, 0x802D154C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D154C;
        }
    }

label_802D152C:
    ctx->downcount -= 1;
    // 802D152C: bc    12, 2, 0x802D154C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D154C;
        }
    }

label_802D1530:
    ctx->downcount -= 1;
    // 802D1530: bc    12, 2, 0x802D154C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D154C;
        }
    }

label_802D1534:
    ctx->downcount -= 3;
    // 802D1534: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D1538:
    // 802D1538: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D153C:
    // 802D153C: bl      0x802D17D8
    {
            ctx->lr = 0x802D1540u;
            goto label_802D17D8;
    }

label_802D1540:
    ctx->downcount -= 3;
    // 802D1540: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1544:
    // 802D1544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1548:
    // 802D1548: bl      0x801ED118
    {
            ctx->lr = 0x802D154Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802D154C:
    ctx->downcount -= 2;
    // 802D154C: cmpwi   r29, 0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1550:
    // 802D1550: bc    12, 2, 0x802D1570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1570;
        }
    }

label_802D1554:
    ctx->downcount -= 1;
    // 802D1554: bc    12, 2, 0x802D1570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1570;
        }
    }

label_802D1558:
    ctx->downcount -= 3;
    // 802D1558: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802D155C:
    // 802D155C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D1560:
    // 802D1560: bl      0x802D1798
    {
            ctx->lr = 0x802D1564u;
            goto label_802D1798;
    }

label_802D1564:
    ctx->downcount -= 3;
    // 802D1564: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1568:
    // 802D1568: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D156C:
    // 802D156C: bl      0x801ED118
    {
            ctx->lr = 0x802D1570u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802D1570:
    ctx->downcount -= 2;
    // 802D1570: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1574:
    // 802D1574: bc    4, 1, 0x802D1580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1580;
        }
    }

label_802D1578:
    ctx->downcount -= 2;
    // 802D1578: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D157C:
    // 802D157C: bl      0x801C1C90
    {
            ctx->lr = 0x802D1580u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D1580:
    ctx->downcount -= 17;
    // 802D1580: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1584:
    ctx->pc = 0x802D1584u;
    // 802D1584: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1588:
    ctx->pc = 0x802D1588u;
    // 802D1588: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D158C:
    ctx->pc = 0x802D158Cu;
    // 802D158C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1590:
    // 802D1590: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1594:
    ctx->pc = 0x802D1594u;
    // 802D1594: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1598:
    ctx->pc = 0x802D1598u;
    ctx->downcount -= 18;
    // 802D1598: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D159C:
    ctx->pc = 0x802D159Cu;
    // 802D159C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D15A0:
    // 802D15A0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D15A4:
    ctx->pc = 0x802D15A4u;
    // 802D15A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D15A8:
    ctx->pc = 0x802D15A8u;
    // 802D15A8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D15AC:
    // 802D15AC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D15B0:
    // 802D15B0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D15B4:
    // 802D15B4: bc    12, 2, 0x802D15E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D15E8;
        }
    }

label_802D15B8:
    ctx->downcount -= 1;
    // 802D15B8: bc    12, 2, 0x802D15D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D15D8;
        }
    }

label_802D15BC:
    ctx->downcount -= 1;
    // 802D15BC: bc    12, 2, 0x802D15D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D15D8;
        }
    }

label_802D15C0:
    ctx->downcount -= 3;
    // 802D15C0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D15C4:
    // 802D15C4: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802D15C8:
    // 802D15C8: bl      0x801ED098
    {
            ctx->lr = 0x802D15CCu;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802D15CC:
    ctx->downcount -= 3;
    // 802D15CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D15D0:
    // 802D15D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D15D4:
    // 802D15D4: bl      0x801ED058
    {
            ctx->lr = 0x802D15D8u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802D15D8:
    ctx->downcount -= 2;
    // 802D15D8: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D15DC:
    // 802D15DC: bc    4, 1, 0x802D15E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D15E8;
        }
    }

label_802D15E0:
    ctx->downcount -= 2;
    // 802D15E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D15E4:
    // 802D15E4: bl      0x801C1C90
    {
            ctx->lr = 0x802D15E8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D15E8:
    ctx->downcount -= 17;
    // 802D15E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D15EC:
    ctx->pc = 0x802D15ECu;
    // 802D15EC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D15F0:
    ctx->pc = 0x802D15F0u;
    // 802D15F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D15F4:
    ctx->pc = 0x802D15F4u;
    // 802D15F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D15F8:
    // 802D15F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D15FC:
    ctx->pc = 0x802D15FCu;
    // 802D15FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1600:
    ctx->pc = 0x802D1600u;
    ctx->downcount -= 18;
    // 802D1600: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1604:
    ctx->pc = 0x802D1604u;
    // 802D1604: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1608:
    // 802D1608: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D160C:
    ctx->pc = 0x802D160Cu;
    // 802D160C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1610:
    ctx->pc = 0x802D1610u;
    // 802D1610: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1614:
    // 802D1614: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1618:
    // 802D1618: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D161C:
    // 802D161C: bc    12, 2, 0x802D1650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1650;
        }
    }

label_802D1620:
    ctx->downcount -= 1;
    // 802D1620: bc    12, 2, 0x802D1640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1640;
        }
    }

label_802D1624:
    ctx->downcount -= 1;
    // 802D1624: bc    12, 2, 0x802D1640
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1640;
        }
    }

label_802D1628:
    ctx->downcount -= 3;
    // 802D1628: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D162C:
    // 802D162C: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802D1630:
    // 802D1630: bl      0x801ED098
    {
            ctx->lr = 0x802D1634u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802D1634:
    ctx->downcount -= 3;
    // 802D1634: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1638:
    // 802D1638: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D163C:
    // 802D163C: bl      0x801ED058
    {
            ctx->lr = 0x802D1640u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802D1640:
    ctx->downcount -= 2;
    // 802D1640: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1644:
    // 802D1644: bc    4, 1, 0x802D1650
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1650;
        }
    }

label_802D1648:
    ctx->downcount -= 2;
    // 802D1648: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D164C:
    // 802D164C: bl      0x801C1C90
    {
            ctx->lr = 0x802D1650u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D1650:
    ctx->downcount -= 17;
    // 802D1650: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1654:
    ctx->pc = 0x802D1654u;
    // 802D1654: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1658:
    ctx->pc = 0x802D1658u;
    // 802D1658: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D165C:
    ctx->pc = 0x802D165Cu;
    // 802D165C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1660:
    // 802D1660: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1664:
    ctx->pc = 0x802D1664u;
    // 802D1664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1668:
    ctx->pc = 0x802D1668u;
    ctx->downcount -= 18;
    // 802D1668: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D166C:
    ctx->pc = 0x802D166Cu;
    // 802D166C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1670:
    // 802D1670: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1674:
    ctx->pc = 0x802D1674u;
    // 802D1674: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1678:
    ctx->pc = 0x802D1678u;
    // 802D1678: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D167C:
    // 802D167C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1680:
    // 802D1680: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1684:
    // 802D1684: bc    12, 2, 0x802D16B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D16B4;
        }
    }

label_802D1688:
    ctx->downcount -= 1;
    // 802D1688: bc    12, 2, 0x802D16A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D16A4;
        }
    }

label_802D168C:
    ctx->downcount -= 3;
    // 802D168C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D1690:
    // 802D1690: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D1694:
    // 802D1694: bl      0x802D17D8
    {
            ctx->lr = 0x802D1698u;
            goto label_802D17D8;
    }

label_802D1698:
    ctx->downcount -= 3;
    // 802D1698: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D169C:
    // 802D169C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D16A0:
    // 802D16A0: bl      0x801ED118
    {
            ctx->lr = 0x802D16A4u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802D16A4:
    ctx->downcount -= 2;
    // 802D16A4: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D16A8:
    // 802D16A8: bc    4, 1, 0x802D16B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D16B4;
        }
    }

label_802D16AC:
    ctx->downcount -= 2;
    // 802D16AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D16B0:
    // 802D16B0: bl      0x801C1C90
    {
            ctx->lr = 0x802D16B4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D16B4:
    ctx->downcount -= 17;
    // 802D16B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D16B8:
    ctx->pc = 0x802D16B8u;
    // 802D16B8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D16BC:
    ctx->pc = 0x802D16BCu;
    // 802D16BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D16C0:
    ctx->pc = 0x802D16C0u;
    // 802D16C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D16C4:
    // 802D16C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D16C8:
    ctx->pc = 0x802D16C8u;
    // 802D16C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D16CC:
    ctx->pc = 0x802D16CCu;
    ctx->downcount -= 18;
    // 802D16CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D16D0:
    ctx->pc = 0x802D16D0u;
    // 802D16D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D16D4:
    // 802D16D4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D16D8:
    ctx->pc = 0x802D16D8u;
    // 802D16D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D16DC:
    ctx->pc = 0x802D16DCu;
    // 802D16DC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D16E0:
    // 802D16E0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D16E4:
    // 802D16E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D16E8:
    // 802D16E8: bc    12, 2, 0x802D1718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1718;
        }
    }

label_802D16EC:
    ctx->downcount -= 1;
    // 802D16EC: bc    12, 2, 0x802D1708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1708;
        }
    }

label_802D16F0:
    ctx->downcount -= 3;
    // 802D16F0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D16F4:
    // 802D16F4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D16F8:
    // 802D16F8: bl      0x802D1798
    {
            ctx->lr = 0x802D16FCu;
            goto label_802D1798;
    }

label_802D16FC:
    ctx->downcount -= 3;
    // 802D16FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1700:
    // 802D1700: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1704:
    // 802D1704: bl      0x801ED118
    {
            ctx->lr = 0x802D1708u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802D1708:
    ctx->downcount -= 2;
    // 802D1708: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D170C:
    // 802D170C: bc    4, 1, 0x802D1718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1718;
        }
    }

label_802D1710:
    ctx->downcount -= 2;
    // 802D1710: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1714:
    // 802D1714: bl      0x801C1C90
    {
            ctx->lr = 0x802D1718u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D1718:
    ctx->downcount -= 17;
    // 802D1718: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D171C:
    ctx->pc = 0x802D171Cu;
    // 802D171C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1720:
    ctx->pc = 0x802D1720u;
    // 802D1720: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1724:
    ctx->pc = 0x802D1724u;
    // 802D1724: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1728:
    // 802D1728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D172C:
    ctx->pc = 0x802D172Cu;
    // 802D172C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1730:
    ctx->pc = 0x802D1730u;
    ctx->downcount -= 18;
    // 802D1730: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1734:
    ctx->pc = 0x802D1734u;
    // 802D1734: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1738:
    // 802D1738: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D173C:
    ctx->pc = 0x802D173Cu;
    // 802D173C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1740:
    ctx->pc = 0x802D1740u;
    // 802D1740: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1744:
    // 802D1744: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1748:
    // 802D1748: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D174C:
    // 802D174C: bc    12, 2, 0x802D1780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1780;
        }
    }

label_802D1750:
    ctx->downcount -= 1;
    // 802D1750: bc    12, 2, 0x802D1770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1770;
        }
    }

label_802D1754:
    ctx->downcount -= 1;
    // 802D1754: bc    12, 2, 0x802D1770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1770;
        }
    }

label_802D1758:
    ctx->downcount -= 3;
    // 802D1758: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D175C:
    // 802D175C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D1760:
    // 802D1760: bl      0x802D17D8
    {
            ctx->lr = 0x802D1764u;
            goto label_802D17D8;
    }

label_802D1764:
    ctx->downcount -= 3;
    // 802D1764: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1768:
    // 802D1768: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D176C:
    // 802D176C: bl      0x801ED118
    {
            ctx->lr = 0x802D1770u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802D1770:
    ctx->downcount -= 2;
    // 802D1770: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1774:
    // 802D1774: bc    4, 1, 0x802D1780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1780;
        }
    }

label_802D1778:
    ctx->downcount -= 2;
    // 802D1778: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D177C:
    // 802D177C: bl      0x801C1C90
    {
            ctx->lr = 0x802D1780u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D1780:
    ctx->downcount -= 17;
    // 802D1780: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1784:
    ctx->pc = 0x802D1784u;
    // 802D1784: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1788:
    ctx->pc = 0x802D1788u;
    // 802D1788: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D178C:
    ctx->pc = 0x802D178Cu;
    // 802D178C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1790:
    // 802D1790: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1794:
    ctx->pc = 0x802D1794u;
    // 802D1794: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1798:
    ctx->pc = 0x802D1798u;
    ctx->downcount -= 7;
    // 802D1798: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D179C:
    ctx->pc = 0x802D179Cu;
    // 802D179C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D17A0:
    // 802D17A0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D17A4:
    ctx->pc = 0x802D17A4u;
    // 802D17A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D17A8:
    ctx->pc = 0x802D17A8u;
    // 802D17A8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D17AC:
    // 802D17AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D17B0:
    // 802D17B0: bc    12, 2, 0x802D17C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D17C0;
        }
    }

label_802D17B4:
    ctx->downcount -= 2;
    // 802D17B4: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D17B8:
    // 802D17B8: bc    4, 1, 0x802D17C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D17C0;
        }
    }

label_802D17BC:
    ctx->downcount -= 1;
    // 802D17BC: bl      0x801C1C90
    {
            ctx->lr = 0x802D17C0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D17C0:
    ctx->downcount -= 7;
    // 802D17C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D17C4:
    ctx->pc = 0x802D17C4u;
    // 802D17C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D17C8:
    ctx->pc = 0x802D17C8u;
    // 802D17C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D17CC:
    ctx->pc = 0x802D17CCu;
    // 802D17CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D17D0:
    // 802D17D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D17D4:
    ctx->pc = 0x802D17D4u;
    // 802D17D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D17D8:
    ctx->pc = 0x802D17D8u;
    ctx->downcount -= 7;
    // 802D17D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D17DC:
    ctx->pc = 0x802D17DCu;
    // 802D17DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D17E0:
    // 802D17E0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D17E4:
    ctx->pc = 0x802D17E4u;
    // 802D17E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D17E8:
    ctx->pc = 0x802D17E8u;
    // 802D17E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D17EC:
    // 802D17EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D17F0:
    // 802D17F0: bc    12, 2, 0x802D1800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1800;
        }
    }

label_802D17F4:
    ctx->downcount -= 2;
    // 802D17F4: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D17F8:
    // 802D17F8: bc    4, 1, 0x802D1800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1800;
        }
    }

label_802D17FC:
    ctx->downcount -= 1;
    // 802D17FC: bl      0x801C1C90
    {
            ctx->lr = 0x802D1800u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D1800:
    ctx->downcount -= 7;
    // 802D1800: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1804:
    ctx->pc = 0x802D1804u;
    // 802D1804: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1808:
    ctx->pc = 0x802D1808u;
    // 802D1808: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D180C:
    ctx->pc = 0x802D180Cu;
    // 802D180C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1810:
    // 802D1810: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1814:
    ctx->pc = 0x802D1814u;
    // 802D1814: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1818:
    ctx->pc = 0x802D1818u;
    ctx->downcount -= 20;
    // 802D1818: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D181C:
    ctx->pc = 0x802D181Cu;
    // 802D181C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1820:
    ctx->pc = 0x802D1820u;
    // 802D1820: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1824:
    ctx->pc = 0x802D1824u;
    // 802D1824: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1828:
    // 802D1828: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D182C:
    // 802D182C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1830:
    // 802D1830: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1834:
    // 802D1834: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D1838:
    // 802D1838: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D183C:
    // 802D183C: bl      0x803456D0
    {
            ctx->lr = 0x802D1840u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802D1840:
    ctx->downcount -= 34;
    // 802D1840: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802D1844:
    ctx->pc = 0x802D1844u;
    // 802D1844: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1848:
    ctx->pc = 0x802D1848u;
    // 802D1848: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D184C:
    ctx->pc = 0x802D184Cu;
    // 802D184C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1850:
    // 802D1850: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1854:
    ctx->pc = 0x802D1854u;
    // 802D1854: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1858:
    ctx->pc = 0x802D1858u;
    // 802D1858: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D185C:
    ctx->pc = 0x802D185Cu;
    // 802D185C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1860:
    ctx->pc = 0x802D1860u;
    // 802D1860: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1864:
    ctx->pc = 0x802D1864u;
    // 802D1864: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1868:
    ctx->pc = 0x802D1868u;
    // 802D1868: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D186C:
    ctx->pc = 0x802D186Cu;
    // 802D186C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1870:
    ctx->pc = 0x802D1870u;
    // 802D1870: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1874:
    ctx->pc = 0x802D1874u;
    // 802D1874: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802D1878:
    ctx->pc = 0x802D1878u;
    // 802D1878: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D187C:
    ctx->pc = 0x802D187Cu;
    // 802D187C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1880:
    ctx->pc = 0x802D1880u;
    // 802D1880: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1884:
    ctx->pc = 0x802D1884u;
    // 802D1884: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1888:
    ctx->pc = 0x802D1888u;
    // 802D1888: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D188C:
    // 802D188C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1890:
    ctx->pc = 0x802D1890u;
    // 802D1890: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1894:
    ctx->downcount -= 2;
    // 802D1894: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D1898:
    ctx->pc = 0x802D1898u;
    // 802D1898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D189C:
    ctx->downcount -= 2;
    // 802D189C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D18A0:
    ctx->pc = 0x802D18A0u;
    // 802D18A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D18A4:
    ctx->pc = 0x802D18A4u;
    ctx->downcount -= 10;
    // 802D18A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D18A8:
    ctx->pc = 0x802D18A8u;
    // 802D18A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D18AC:
    ctx->pc = 0x802D18ACu;
    // 802D18AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D18B0:
    ctx->pc = 0x802D18B0u;
    // 802D18B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D18B4:
    // 802D18B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D18B8:
    ctx->pc = 0x802D18B8u;
    // 802D18B8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D18BC:
    ctx->pc = 0x802D18BCu;
    // 802D18BC: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D18C0:
    ctx->pc = 0x802D18C0u;
    // 802D18C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D18C4:
    ctx->pc = 0x802D18C4u;
    // 802D18C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D18C8u;
            ctx->pc = target;
            return;
        }
    }

label_802D18C8:
    ctx->downcount -= 2;
    // 802D18C8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D18CC:
    // 802D18CC: bl      0x802D19C4
    {
            ctx->lr = 0x802D18D0u;
            goto label_802D19C4;
    }

label_802D18D0:
    ctx->pc = 0x802D18D0u;
    ctx->downcount -= 6;
    // 802D18D0: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D18D4:
    // 802D18D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D18D8:
    ctx->pc = 0x802D18D8u;
    // 802D18D8: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D18DC:
    ctx->pc = 0x802D18DCu;
    // 802D18DC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D18E0:
    ctx->pc = 0x802D18E0u;
    // 802D18E0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D18E4u;
            ctx->pc = target;
            return;
        }
    }

label_802D18E4:
    ctx->pc = 0x802D18E4u;
    ctx->downcount -= 6;
    // 802D18E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D18E8:
    ctx->pc = 0x802D18E8u;
    // 802D18E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D18EC:
    ctx->pc = 0x802D18ECu;
    // 802D18EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D18F0:
    // 802D18F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D18F4:
    ctx->pc = 0x802D18F4u;
    // 802D18F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D18F8:
    ctx->pc = 0x802D18F8u;
    ctx->downcount -= 17;
    // 802D18F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D18FC:
    ctx->pc = 0x802D18FCu;
    // 802D18FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1900:
    ctx->pc = 0x802D1900u;
    // 802D1900: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1904:
    ctx->pc = 0x802D1904u;
    // 802D1904: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1908:
    // 802D1908: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D190C:
    // 802D190C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D1910:
    // 802D1910: bl      0x802D1A28
    {
            ctx->lr = 0x802D1914u;
            goto label_802D1A28;
    }

label_802D1914:
    ctx->downcount -= 8;
    // 802D1914: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D1918:
    // 802D1918: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D191C:
    // 802D191C: addi    r3, r3, 1784
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1784);

label_802D1920:
    ctx->pc = 0x802D1920u;
    // 802D1920: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1924:
    // 802D1924: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_802D1928:
    ctx->pc = 0x802D1928u;
    // 802D1928: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D192C:
    // 802D192C: addi    r3, r30, 152
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(152);

label_802D1930:
    // 802D1930: bl      0x802D1FE4
    {
            ctx->lr = 0x802D1934u;
            goto label_802D1FE4;
    }

label_802D1934:
    ctx->downcount -= 5;
    // 802D1934: addi    r0, r30, 152
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(152);

label_802D1938:
    ctx->pc = 0x802D1938u;
    // 802D1938: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D193C:
    // 802D193C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1940:
    // 802D1940: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802D1944:
    // 802D1944: bl      0x802D0D28
    {
            ctx->lr = 0x802D1948u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D0D28u;
                return;
            }
            goto label_802D0D28;
    }

label_802D1948:
    ctx->downcount -= 17;
    // 802D1948: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D194C:
    ctx->pc = 0x802D194Cu;
    // 802D194C: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1950:
    ctx->pc = 0x802D1950u;
    // 802D1950: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1954:
    ctx->pc = 0x802D1954u;
    // 802D1954: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1958:
    // 802D1958: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D195C:
    ctx->pc = 0x802D195Cu;
    // 802D195C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1960:
    ctx->pc = 0x802D1960u;
    ctx->downcount -= 18;
    // 802D1960: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1964:
    ctx->pc = 0x802D1964u;
    // 802D1964: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1968:
    // 802D1968: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D196C:
    ctx->pc = 0x802D196Cu;
    // 802D196C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1970:
    ctx->pc = 0x802D1970u;
    // 802D1970: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1974:
    // 802D1974: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1978:
    // 802D1978: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D197C:
    // 802D197C: bc    12, 2, 0x802D19AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D19AC;
        }
    }

label_802D1980:
    ctx->downcount -= 1;
    // 802D1980: bc    12, 2, 0x802D199C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D199C;
        }
    }

label_802D1984:
    ctx->downcount -= 3;
    // 802D1984: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802D1988:
    // 802D1988: addi    r3, r3, 152
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(152);

label_802D198C:
    // 802D198C: bl      0x802D1730
    {
            ctx->lr = 0x802D1990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1730u;
                return;
            }
            goto label_802D1730;
    }

label_802D1990:
    ctx->downcount -= 3;
    // 802D1990: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D1994:
    // 802D1994: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1998:
    // 802D1998: bl      0x802D16CC
    {
            ctx->lr = 0x802D199Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D16CCu;
                return;
            }
            goto label_802D16CC;
    }

label_802D199C:
    ctx->downcount -= 2;
    // 802D199C: cmpwi   r31, 0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D19A0:
    // 802D19A0: bc    4, 1, 0x802D19AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D19AC;
        }
    }

label_802D19A4:
    ctx->downcount -= 2;
    // 802D19A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D19A8:
    // 802D19A8: bl      0x801C1C90
    {
            ctx->lr = 0x802D19ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802D19AC:
    ctx->downcount -= 17;
    // 802D19AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D19B0:
    ctx->pc = 0x802D19B0u;
    // 802D19B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D19B4:
    ctx->pc = 0x802D19B4u;
    // 802D19B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D19B8:
    ctx->pc = 0x802D19B8u;
    // 802D19B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D19BC:
    // 802D19BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D19C0:
    ctx->pc = 0x802D19C0u;
    // 802D19C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D19C4:
    ctx->pc = 0x802D19C4u;
    ctx->downcount -= 8;
    // 802D19C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D19C8:
    ctx->pc = 0x802D19C8u;
    // 802D19C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D19CC:
    ctx->pc = 0x802D19CCu;
    // 802D19CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D19D0:
    ctx->pc = 0x802D19D0u;
    // 802D19D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D19D4:
    // 802D19D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D19D8:
    ctx->pc = 0x802D19D8u;
    // 802D19D8: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D19DC:
    // 802D19DC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D19E0:
    // 802D19E0: bc    12, 2, 0x802D1A04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1A04;
        }
    }

label_802D19E4:
    ctx->pc = 0x802D19E4u;
    ctx->downcount -= 3;
    // 802D19E4: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D19E8:
    // 802D19E8: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D19EC:
    // 802D19EC: bc    12, 2, 0x802D19F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D19F4;
        }
    }

label_802D19F0:
    ctx->downcount -= 1;
    // 802D19F0: bl      0x802D1D88
    {
            ctx->lr = 0x802D19F4u;
            goto label_802D1D88;
    }

label_802D19F4:
    ctx->downcount -= 2;
    // 802D19F4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D19F8:
    // 802D19F8: bl      0x803456D4
    {
            ctx->lr = 0x802D19FCu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802D19FC:
    ctx->downcount -= 2;
    // 802D19FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1A00:
    // 802D1A00: bl      0x802D1CC8
    {
            ctx->lr = 0x802D1A04u;
            goto label_802D1CC8;
    }

label_802D1A04:
    ctx->downcount -= 2;
    // 802D1A04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1A08:
    // 802D1A08: bl      0x802D1D28
    {
            ctx->lr = 0x802D1A0Cu;
            goto label_802D1D28;
    }

label_802D1A0C:
    ctx->downcount -= 2;
    // 802D1A0C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1A10:
    // 802D1A10: bl      0x803456F8
    {
            ctx->lr = 0x802D1A14u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802D1A14:
    ctx->pc = 0x802D1A14u;
    ctx->downcount -= 6;
    // 802D1A14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1A18:
    ctx->pc = 0x802D1A18u;
    // 802D1A18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1A1C:
    ctx->pc = 0x802D1A1Cu;
    // 802D1A1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1A20:
    // 802D1A20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1A24:
    ctx->pc = 0x802D1A24u;
    // 802D1A24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1A28:
    ctx->pc = 0x802D1A28u;
    ctx->downcount -= 21;
    // 802D1A28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1A2C:
    ctx->pc = 0x802D1A2Cu;
    // 802D1A2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1A30:
    ctx->pc = 0x802D1A30u;
    // 802D1A30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1A34:
    ctx->pc = 0x802D1A34u;
    // 802D1A34: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1A38:
    // 802D1A38: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802D1A3C:
    // 802D1A3C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D1A40:
    // 802D1A40: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1A44:
    // 802D1A44: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1A48:
    // 802D1A48: addi    r30, r30, 1576
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1576);

label_802D1A4C:
    // 802D1A4C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1A50:
    // 802D1A50: bl      0x802A6748
    {
            ctx->lr = 0x802D1A54u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802D1A54:
    ctx->downcount -= 7;
    // 802D1A54: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802D1A58:
    // 802D1A58: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1A5C:
    // 802D1A5C: addi    r4, r4, 2096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2096);

label_802D1A60:
    ctx->pc = 0x802D1A60u;
    // 802D1A60: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1A64:
    // 802D1A64: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802D1A68:
    ctx->pc = 0x802D1A68u;
    // 802D1A68: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1A6C:
    // 802D1A6C: bl      0x801ED17C
    {
            ctx->lr = 0x802D1A70u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802D1A70:
    ctx->downcount -= 6;
    // 802D1A70: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1A74:
    // 802D1A74: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1A78:
    // 802D1A78: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1A7C:
    // 802D1A7C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D1A80:
    // 802D1A80: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1A84:
    // 802D1A84: bl      0x802D1B4C
    {
            ctx->lr = 0x802D1A88u;
            goto label_802D1B4C;
    }

label_802D1A88:
    ctx->downcount -= 3;
    // 802D1A88: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1A8C:
    // 802D1A8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1A90:
    // 802D1A90: bl      0x802A5D48
    {
            ctx->lr = 0x802D1A94u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802D1A94:
    ctx->downcount -= 6;
    // 802D1A94: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1A98:
    // 802D1A98: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D1A9C:
    // 802D1A9C: addi    r4, r30, 364
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(364);

label_802D1AA0:
    // 802D1AA0: addi    r5, r30, 376
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(376);

label_802D1AA4:
    // 802D1AA4: addi    r6, r30, 388
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(388);

label_802D1AA8:
    // 802D1AA8: bl      0x802D1C6C
    {
            ctx->lr = 0x802D1AACu;
            goto label_802D1C6C;
    }

label_802D1AAC:
    ctx->downcount -= 2;
    // 802D1AAC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1AB0:
    // 802D1AB0: bl      0x802A609C
    {
            ctx->lr = 0x802D1AB4u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802D1AB4:
    ctx->downcount -= 10;
    // 802D1AB4: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D1AB8:
    // 802D1AB8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D1ABC:
    // 802D1ABC: addi    r3, r3, 1976
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(1976);

label_802D1AC0:
    ctx->pc = 0x802D1AC0u;
    // 802D1AC0: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1AC4:
    // 802D1AC4: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_802D1AC8:
    ctx->pc = 0x802D1AC8u;
    // 802D1AC8: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1ACC:
    // 802D1ACC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1AD0:
    // 802D1AD0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D1AD4:
    ctx->pc = 0x802D1AD4u;
    // 802D1AD4: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1AD8:
    // 802D1AD8: bl      0x802A5D48
    {
            ctx->lr = 0x802D1ADCu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802D1ADC:
    ctx->downcount -= 6;
    // 802D1ADC: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_802D1AE0:
    // 802D1AE0: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1AE4:
    // 802D1AE4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D1AE8:
    // 802D1AE8: addi    r5, r30, 328
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(328);

label_802D1AEC:
    // 802D1AEC: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802D1AF0:
    // 802D1AF0: bl      0x802D1818
    {
            ctx->lr = 0x802D1AF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1818u;
                return;
            }
            goto label_802D1818;
    }

label_802D1AF4:
    ctx->downcount -= 3;
    // 802D1AF4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1AF8:
    // 802D1AF8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D1AFC:
    // 802D1AFC: bl      0x802A5D48
    {
            ctx->lr = 0x802D1B00u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802D1B00:
    ctx->downcount -= 5;
    // 802D1B00: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1B04:
    // 802D1B04: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D1B08:
    // 802D1B08: addi    r4, r30, 340
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(340);

label_802D1B0C:
    // 802D1B0C: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802D1B10:
    // 802D1B10: bl      0x802D1818
    {
            ctx->lr = 0x802D1B14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1818u;
                return;
            }
            goto label_802D1818;
    }

label_802D1B14:
    ctx->downcount -= 3;
    // 802D1B14: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1B18:
    // 802D1B18: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D1B1C:
    // 802D1B1C: bl      0x802A5D48
    {
            ctx->lr = 0x802D1B20u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802D1B20:
    ctx->downcount -= 5;
    // 802D1B20: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1B24:
    // 802D1B24: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D1B28:
    // 802D1B28: addi    r4, r30, 352
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(352);

label_802D1B2C:
    // 802D1B2C: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802D1B30:
    // 802D1B30: bl      0x802D1818
    {
            ctx->lr = 0x802D1B34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1818u;
                return;
            }
            goto label_802D1818;
    }

label_802D1B34:
    ctx->downcount -= 17;
    // 802D1B34: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D1B38:
    ctx->pc = 0x802D1B38u;
    // 802D1B38: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1B3C:
    ctx->pc = 0x802D1B3Cu;
    // 802D1B3C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1B40:
    ctx->pc = 0x802D1B40u;
    // 802D1B40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1B44:
    // 802D1B44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1B48:
    ctx->pc = 0x802D1B48u;
    // 802D1B48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1B4C:
    ctx->pc = 0x802D1B4Cu;
    ctx->downcount -= 17;
    // 802D1B4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1B50:
    ctx->pc = 0x802D1B50u;
    // 802D1B50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1B54:
    ctx->pc = 0x802D1B54u;
    // 802D1B54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1B58:
    ctx->pc = 0x802D1B58u;
    // 802D1B58: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1B5C:
    // 802D1B5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1B60:
    // 802D1B60: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1B64:
    // 802D1B64: bl      0x803457F4
    {
            ctx->lr = 0x802D1B68u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802D1B68:
    ctx->pc = 0x802D1B68u;
    ctx->downcount -= 11;
    // 802D1B68: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1B6C:
    // 802D1B6C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D1B70:
    // 802D1B70: addi    r3, r3, 2216
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2216);

label_802D1B74:
    ctx->pc = 0x802D1B74u;
    // 802D1B74: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1B78:
    // 802D1B78: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1B7C:
    ctx->pc = 0x802D1B7Cu;
    // 802D1B7C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1B80:
    ctx->pc = 0x802D1B80u;
    // 802D1B80: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802D1B84:
    // 802D1B84: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D1B88:
    // 802D1B88: bl      0x801C1C80
    {
            ctx->lr = 0x802D1B8Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D1B8C:
    ctx->pc = 0x802D1B8Cu;
    ctx->downcount -= 8;
    // 802D1B8C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1B90:
    // 802D1B90: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D1B94:
    ctx->pc = 0x802D1B94u;
    // 802D1B94: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1B98:
    // 802D1B98: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1B9C:
    ctx->pc = 0x802D1B9Cu;
    // 802D1B9C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1BA0:
    // 802D1BA0: bl      0x801C1C80
    {
            ctx->lr = 0x802D1BA4u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D1BA4:
    ctx->pc = 0x802D1BA4u;
    ctx->downcount -= 8;
    // 802D1BA4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1BA8:
    // 802D1BA8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D1BAC:
    ctx->pc = 0x802D1BACu;
    // 802D1BAC: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1BB0:
    // 802D1BB0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1BB4:
    ctx->pc = 0x802D1BB4u;
    // 802D1BB4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1BB8:
    // 802D1BB8: bl      0x801C1C80
    {
            ctx->lr = 0x802D1BBCu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D1BBC:
    ctx->downcount -= 6;
    // 802D1BBC: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802D1BC0:
    ctx->pc = 0x802D1BC0u;
    // 802D1BC0: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1BC4:
    // 802D1BC4: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802D1BC8:
    // 802D1BC8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D1BCC:
    // 802D1BCC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D1BD0:
    // 802D1BD0: b       0x802D1C3C
    {
            goto label_802D1C3C;
    }

label_802D1BD4:
    loop_802D1BD4(ctx);
    if (ctx->pc == 0x802D1C48u) goto label_802D1C48;
    return;
label_802D1BD8:
    // 802D1BD8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802D1BDC:
    ctx->pc = 0x802D1BDCu;
    // 802D1BDC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1BE0:
    // 802D1BE0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1BE4:
    ctx->pc = 0x802D1BE4u;
    // 802D1BE4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1BE8:
    ctx->pc = 0x802D1BE8u;
    // 802D1BE8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1BEC:
    ctx->pc = 0x802D1BECu;
    // 802D1BEC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1BF0:
    ctx->pc = 0x802D1BF0u;
    // 802D1BF0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1BF4:
    ctx->pc = 0x802D1BF4u;
    // 802D1BF4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1BF8:
    ctx->pc = 0x802D1BF8u;
    // 802D1BF8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1BFC:
    ctx->pc = 0x802D1BFCu;
    // 802D1BFC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C00:
    // 802D1C00: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1C04:
    ctx->pc = 0x802D1C04u;
    // 802D1C04: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1C08:
    ctx->pc = 0x802D1C08u;
    // 802D1C08: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1C0C:
    ctx->pc = 0x802D1C0Cu;
    // 802D1C0C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1C10:
    ctx->pc = 0x802D1C10u;
    // 802D1C10: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C14:
    ctx->pc = 0x802D1C14u;
    // 802D1C14: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1C18:
    ctx->pc = 0x802D1C18u;
    // 802D1C18: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1C1C:
    ctx->pc = 0x802D1C1Cu;
    // 802D1C1C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C20:
    // 802D1C20: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1C24:
    ctx->pc = 0x802D1C24u;
    // 802D1C24: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1C28:
    ctx->pc = 0x802D1C28u;
    // 802D1C28: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1C2C:
    // 802D1C2C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802D1C30:
    ctx->pc = 0x802D1C30u;
    // 802D1C30: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1C34:
    ctx->pc = 0x802D1C34u;
    // 802D1C34: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C38:
    ctx->pc = 0x802D1C38u;
    // 802D1C38: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1C3C:
    ctx->pc = 0x802D1C3Cu;
    ctx->downcount -= 3;
    // 802D1C3C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C40:
    // 802D1C40: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1C44:
    // 802D1C44: bc    12, 0, 0x802D1BD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1BD4u;
                return;
            }
            goto label_802D1BD4;
        }
    }

label_802D1C48:
    ctx->downcount -= 3;
    // 802D1C48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1C4C:
    // 802D1C4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1C50:
    // 802D1C50: bl      0x803457CC
    {
            ctx->lr = 0x802D1C54u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802D1C54:
    ctx->downcount -= 17;
    // 802D1C54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1C58:
    ctx->pc = 0x802D1C58u;
    // 802D1C58: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1C5C:
    ctx->pc = 0x802D1C5Cu;
    // 802D1C5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1C60:
    ctx->pc = 0x802D1C60u;
    // 802D1C60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1C64:
    // 802D1C64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1C68:
    ctx->pc = 0x802D1C68u;
    // 802D1C68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1C6C:
    ctx->pc = 0x802D1C6Cu;
    ctx->downcount -= 19;
    // 802D1C6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1C70:
    ctx->pc = 0x802D1C70u;
    // 802D1C70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1C74:
    ctx->pc = 0x802D1C74u;
    // 802D1C74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1C78:
    ctx->pc = 0x802D1C78u;
    // 802D1C78: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1C7C:
    // 802D1C7C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802D1C80:
    // 802D1C80: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D1C84:
    // 802D1C84: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1C88:
    // 802D1C88: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1C8C:
    // 802D1C8C: bl      0x802D1818
    {
            ctx->lr = 0x802D1C90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1818u;
                return;
            }
            goto label_802D1818;
    }

label_802D1C90:
    ctx->downcount -= 27;
    // 802D1C90: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802D1C94:
    ctx->pc = 0x802D1C94u;
    // 802D1C94: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1C98:
    ctx->pc = 0x802D1C98u;
    // 802D1C98: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1C9C:
    ctx->pc = 0x802D1C9Cu;
    // 802D1C9C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1CA0:
    // 802D1CA0: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D1CA4:
    ctx->pc = 0x802D1CA4u;
    // 802D1CA4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1CA8:
    ctx->pc = 0x802D1CA8u;
    // 802D1CA8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D1CAC:
    ctx->pc = 0x802D1CACu;
    // 802D1CAC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D1CB0:
    ctx->pc = 0x802D1CB0u;
    // 802D1CB0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1CB4:
    ctx->pc = 0x802D1CB4u;
    // 802D1CB4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1CB8:
    ctx->pc = 0x802D1CB8u;
    // 802D1CB8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1CBC:
    ctx->pc = 0x802D1CBCu;
    // 802D1CBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1CC0:
    // 802D1CC0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1CC4:
    ctx->pc = 0x802D1CC4u;
    // 802D1CC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1CC8:
    ctx->pc = 0x802D1CC8u;
    ctx->downcount -= 12;
    // 802D1CC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1CCC:
    ctx->pc = 0x802D1CCCu;
    // 802D1CCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1CD0:
    ctx->pc = 0x802D1CD0u;
    // 802D1CD0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1CD4:
    ctx->pc = 0x802D1CD4u;
    // 802D1CD4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1CD8:
    // 802D1CD8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1CDC:
    ctx->pc = 0x802D1CDCu;
    // 802D1CDC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1CE0:
    ctx->pc = 0x802D1CE0u;
    // 802D1CE0: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1CE4:
    // 802D1CE4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1CE8:
    // 802D1CE8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D1CEC:
    // 802D1CEC: bl      0x800076B4
    {
            ctx->lr = 0x802D1CF0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D1CF0:
    ctx->downcount -= 2;
    // 802D1CF0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1CF4:
    // 802D1CF4: bc    12, 2, 0x802D1D14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1D14;
        }
    }

label_802D1CF8:
    ctx->pc = 0x802D1CF8u;
    ctx->downcount -= 8;
    // 802D1CF8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1CFC:
    ctx->pc = 0x802D1CFCu;
    // 802D1CFC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1D00:
    // 802D1D00: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1D04:
    ctx->pc = 0x802D1D04u;
    // 802D1D04: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1D08:
    // 802D1D08: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D1D0C:
    // 802D1D0C: bl      0x800076E4
    {
            ctx->lr = 0x802D1D10u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D1D10:
    ctx->downcount -= 1;
    // 802D1D10: nop
    // nop

label_802D1D14:
    ctx->pc = 0x802D1D14u;
    ctx->downcount -= 6;
    // 802D1D14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1D18:
    ctx->pc = 0x802D1D18u;
    // 802D1D18: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1D1C:
    ctx->pc = 0x802D1D1Cu;
    // 802D1D1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1D20:
    // 802D1D20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1D24:
    ctx->pc = 0x802D1D24u;
    // 802D1D24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1D28:
    ctx->pc = 0x802D1D28u;
    ctx->downcount -= 12;
    // 802D1D28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1D2C:
    ctx->pc = 0x802D1D2Cu;
    // 802D1D2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1D30:
    ctx->pc = 0x802D1D30u;
    // 802D1D30: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1D34:
    ctx->pc = 0x802D1D34u;
    // 802D1D34: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1D38:
    // 802D1D38: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1D3C:
    ctx->pc = 0x802D1D3Cu;
    // 802D1D3C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1D40:
    ctx->pc = 0x802D1D40u;
    // 802D1D40: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1D44:
    // 802D1D44: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1D48:
    // 802D1D48: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D1D4C:
    // 802D1D4C: bl      0x800076B4
    {
            ctx->lr = 0x802D1D50u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D1D50:
    ctx->downcount -= 2;
    // 802D1D50: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1D54:
    // 802D1D54: bc    12, 2, 0x802D1D74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1D74;
        }
    }

label_802D1D58:
    ctx->pc = 0x802D1D58u;
    ctx->downcount -= 8;
    // 802D1D58: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1D5C:
    ctx->pc = 0x802D1D5Cu;
    // 802D1D5C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1D60:
    // 802D1D60: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1D64:
    ctx->pc = 0x802D1D64u;
    // 802D1D64: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1D68:
    // 802D1D68: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D1D6C:
    // 802D1D6C: bl      0x800076E4
    {
            ctx->lr = 0x802D1D70u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D1D70:
    ctx->downcount -= 1;
    // 802D1D70: nop
    // nop

label_802D1D74:
    ctx->pc = 0x802D1D74u;
    ctx->downcount -= 6;
    // 802D1D74: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1D78:
    ctx->pc = 0x802D1D78u;
    // 802D1D78: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1D7C:
    ctx->pc = 0x802D1D7Cu;
    // 802D1D7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1D80:
    // 802D1D80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1D84:
    ctx->pc = 0x802D1D84u;
    // 802D1D84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1D88:
    ctx->pc = 0x802D1D88u;
    ctx->downcount -= 12;
    // 802D1D88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1D8C:
    ctx->pc = 0x802D1D8Cu;
    // 802D1D8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1D90:
    ctx->pc = 0x802D1D90u;
    // 802D1D90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1D94:
    ctx->pc = 0x802D1D94u;
    // 802D1D94: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D1D98:
    // 802D1D98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1D9C:
    ctx->pc = 0x802D1D9Cu;
    // 802D1D9C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1DA0:
    ctx->pc = 0x802D1DA0u;
    // 802D1DA0: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1DA4:
    // 802D1DA4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1DA8:
    // 802D1DA8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D1DAC:
    // 802D1DAC: bl      0x800076B4
    {
            ctx->lr = 0x802D1DB0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D1DB0:
    ctx->downcount -= 2;
    // 802D1DB0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1DB4:
    // 802D1DB4: bc    12, 2, 0x802D1DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D1DD4;
        }
    }

label_802D1DB8:
    ctx->pc = 0x802D1DB8u;
    ctx->downcount -= 8;
    // 802D1DB8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1DBC:
    ctx->pc = 0x802D1DBCu;
    // 802D1DBC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D1DC0:
    // 802D1DC0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D1DC4:
    ctx->pc = 0x802D1DC4u;
    // 802D1DC4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1DC8:
    // 802D1DC8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D1DCC:
    // 802D1DCC: bl      0x800076E4
    {
            ctx->lr = 0x802D1DD0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D1DD0:
    ctx->downcount -= 1;
    // 802D1DD0: nop
    // nop

label_802D1DD4:
    ctx->pc = 0x802D1DD4u;
    ctx->downcount -= 6;
    // 802D1DD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1DD8:
    ctx->pc = 0x802D1DD8u;
    // 802D1DD8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D1DDC:
    ctx->pc = 0x802D1DDCu;
    // 802D1DDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1DE0:
    // 802D1DE0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D1DE4:
    ctx->pc = 0x802D1DE4u;
    // 802D1DE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1DE8:
    ctx->downcount -= 9;
    // 802D1DE8: lis     r4, -32643
    ctx->gpr[4] = ((u32)(s32)(-32643) << 16);

label_802D1DEC:
    ctx->pc = 0x802D1DECu;
    // 802D1DEC: lfs     f2, -12808(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D1DECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12808);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802D1DF0:
    // 802D1DF0: addi    r3, r4, 624
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(624);

label_802D1DF4:
    ctx->pc = 0x802D1DF4u;
    // 802D1DF4: lfs     f1, -12804(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D1DF4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12804);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802D1DF8:
    ctx->pc = 0x802D1DF8u;
    // 802D1DF8: lfs     f0, -12800(r2)
    if (!ppc_fp_available_inline(ctx, 0x802D1DF8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12800);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802D1DFC:
    ctx->pc = 0x802D1DFCu;
    // 802D1DFC: stfs     f2, 624(r4)
    if (!ppc_fp_available_inline(ctx, 0x802D1DFCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(624);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802D1E00:
    ctx->pc = 0x802D1E00u;
    // 802D1E00: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x802D1E00u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802D1E04:
    ctx->pc = 0x802D1E04u;
    // 802D1E04: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x802D1E04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802D1E08:
    ctx->pc = 0x802D1E08u;
    // 802D1E08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1E0C:
    ctx->downcount -= 2;
    // 802D1E0C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D1E10:
    // 802D1E10: b       0x802D1598
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1598u;
                return;
            }
            goto label_802D1598;
    }

label_802D1E14:
    ctx->downcount -= 2;
    // 802D1E14: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D1E18:
    // 802D1E18: b       0x802D16CC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D16CCu;
                return;
            }
            goto label_802D16CC;
    }

label_802D1E1C:
    ctx->downcount -= 2;
    // 802D1E1C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D1E20:
    // 802D1E20: b       0x802D1504
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1504u;
                return;
            }
            goto label_802D1504;
    }

label_802D1E24:
    ctx->downcount -= 2;
    // 802D1E24: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D1E28:
    // 802D1E28: b       0x802D1960
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1960u;
                return;
            }
            goto label_802D1960;
    }

label_802D1E2C:
    ctx->pc = 0x802D1E2Cu;
    ctx->downcount -= 21;
    // 802D1E2C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1E30:
    ctx->pc = 0x802D1E30u;
    // 802D1E30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1E34:
    // 802D1E34: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_802D1E38:
    ctx->pc = 0x802D1E38u;
    // 802D1E38: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1E3C:
    // 802D1E3C: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_802D1E40:
    ctx->pc = 0x802D1E40u;
    // 802D1E40: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1E44:
    // 802D1E44: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1E48:
    // 802D1E48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1E4C:
    ctx->pc = 0x802D1E4Cu;
    // 802D1E4C: lwz     r29, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D1E50:
    ctx->pc = 0x802D1E50u;
    // 802D1E50: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D1E54:
    // 802D1E54: b       0x802D1E84
    {
            goto label_802D1E84;
    }

label_802D1E58:
    ctx->pc = 0x802D1E58u;
    ctx->downcount -= 3;
    // 802D1E58: lwz     r3, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1E5C:
    // 802D1E5C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1E60:
    // 802D1E60: bc    4, 0, 0x802D1E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1E80;
        }
    }

label_802D1E64:
    ctx->downcount -= 3;
    // 802D1E64: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1E68:
    // 802D1E68: addi    r3, r6, 24
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(24);

label_802D1E6C:
    // 802D1E6C: bl      0x8027613C
    {
            ctx->lr = 0x802D1E70u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1E70:
    ctx->downcount -= 4;
    // 802D1E70: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1E74:
    // 802D1E74: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_802D1E78:
    ctx->pc = 0x802D1E78u;
    // 802D1E78: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1E7C:
    // 802D1E7C: b       0x802D1EA4
    {
            goto label_802D1EA4;
    }

label_802D1E80:
    ctx->pc = 0x802D1E80u;
    ctx->downcount -= 1;
    // 802D1E80: lwz     r6, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D1E84:
    ctx->downcount -= 2;
    // 802D1E84: cmpwi   r6, 0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1E88:
    // 802D1E88: bc    4, 2, 0x802D1E58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1E58u;
                return;
            }
            goto label_802D1E58;
        }
    }

label_802D1E8C:
    ctx->downcount -= 3;
    // 802D1E8C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1E90:
    // 802D1E90: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1E94:
    // 802D1E94: bl      0x8027613C
    {
            ctx->lr = 0x802D1E98u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1E98:
    ctx->downcount -= 3;
    // 802D1E98: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1E9C:
    // 802D1E9C: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_802D1EA0:
    ctx->pc = 0x802D1EA0u;
    // 802D1EA0: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1EA4:
    ctx->downcount -= 5;
    // 802D1EA4: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1EA8:
    ctx->pc = 0x802D1EA8u;
    // 802D1EA8: lwz     r29, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D1EAC:
    ctx->pc = 0x802D1EACu;
    // 802D1EAC: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1EB0:
    // 802D1EB0: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_802D1EB4:
    // 802D1EB4: b       0x802D1EE4
    {
            goto label_802D1EE4;
    }

label_802D1EB8:
    ctx->pc = 0x802D1EB8u;
    ctx->downcount -= 3;
    // 802D1EB8: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1EBC:
    // 802D1EBC: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1EC0:
    // 802D1EC0: bc    4, 0, 0x802D1EE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1EE0;
        }
    }

label_802D1EC4:
    ctx->downcount -= 3;
    // 802D1EC4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1EC8:
    // 802D1EC8: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_802D1ECC:
    // 802D1ECC: bl      0x8027613C
    {
            ctx->lr = 0x802D1ED0u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1ED0:
    ctx->downcount -= 4;
    // 802D1ED0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1ED4:
    // 802D1ED4: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_802D1ED8:
    ctx->pc = 0x802D1ED8u;
    // 802D1ED8: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1EDC:
    // 802D1EDC: b       0x802D1F04
    {
            goto label_802D1F04;
    }

label_802D1EE0:
    ctx->pc = 0x802D1EE0u;
    ctx->downcount -= 1;
    // 802D1EE0: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1EE4:
    ctx->downcount -= 2;
    // 802D1EE4: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1EE8:
    // 802D1EE8: bc    4, 2, 0x802D1EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1EB8u;
                return;
            }
            goto label_802D1EB8;
        }
    }

label_802D1EEC:
    ctx->downcount -= 3;
    // 802D1EEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1EF0:
    // 802D1EF0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1EF4:
    // 802D1EF4: bl      0x8027613C
    {
            ctx->lr = 0x802D1EF8u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1EF8:
    ctx->downcount -= 3;
    // 802D1EF8: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1EFC:
    // 802D1EFC: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_802D1F00:
    ctx->pc = 0x802D1F00u;
    // 802D1F00: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1F04:
    ctx->downcount -= 5;
    // 802D1F04: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1F08:
    ctx->pc = 0x802D1F08u;
    // 802D1F08: lwz     r29, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D1F0C:
    ctx->pc = 0x802D1F0Cu;
    // 802D1F0C: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1F10:
    // 802D1F10: addi    r0, r3, -3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3);

label_802D1F14:
    // 802D1F14: b       0x802D1F44
    {
            goto label_802D1F44;
    }

label_802D1F18:
    ctx->pc = 0x802D1F18u;
    ctx->downcount -= 3;
    // 802D1F18: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1F1C:
    // 802D1F1C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1F20:
    // 802D1F20: bc    4, 0, 0x802D1F40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1F40;
        }
    }

label_802D1F24:
    ctx->downcount -= 3;
    // 802D1F24: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1F28:
    // 802D1F28: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_802D1F2C:
    // 802D1F2C: bl      0x8027613C
    {
            ctx->lr = 0x802D1F30u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1F30:
    ctx->downcount -= 4;
    // 802D1F30: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1F34:
    // 802D1F34: addi    r0, r3, -3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3);

label_802D1F38:
    ctx->pc = 0x802D1F38u;
    // 802D1F38: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1F3C:
    // 802D1F3C: b       0x802D1F64
    {
            goto label_802D1F64;
    }

label_802D1F40:
    ctx->pc = 0x802D1F40u;
    ctx->downcount -= 1;
    // 802D1F40: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1F44:
    ctx->downcount -= 2;
    // 802D1F44: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1F48:
    // 802D1F48: bc    4, 2, 0x802D1F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1F18u;
                return;
            }
            goto label_802D1F18;
        }
    }

label_802D1F4C:
    ctx->downcount -= 3;
    // 802D1F4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1F50:
    // 802D1F50: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1F54:
    // 802D1F54: bl      0x8027613C
    {
            ctx->lr = 0x802D1F58u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1F58:
    ctx->downcount -= 3;
    // 802D1F58: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1F5C:
    // 802D1F5C: addi    r0, r3, -3
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-3);

label_802D1F60:
    ctx->pc = 0x802D1F60u;
    // 802D1F60: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1F64:
    ctx->downcount -= 5;
    // 802D1F64: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1F68:
    ctx->pc = 0x802D1F68u;
    // 802D1F68: lwz     r29, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802D1F6C:
    ctx->pc = 0x802D1F6Cu;
    // 802D1F6C: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1F70:
    // 802D1F70: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_802D1F74:
    // 802D1F74: b       0x802D1FA4
    {
            goto label_802D1FA4;
    }

label_802D1F78:
    ctx->pc = 0x802D1F78u;
    ctx->downcount -= 3;
    // 802D1F78: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D1F7C:
    // 802D1F7C: cmpw    r3, r0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1F80:
    // 802D1F80: bc    4, 0, 0x802D1FA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D1FA0;
        }
    }

label_802D1F84:
    ctx->downcount -= 3;
    // 802D1F84: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1F88:
    // 802D1F88: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_802D1F8C:
    // 802D1F8C: bl      0x8027613C
    {
            ctx->lr = 0x802D1F90u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1F90:
    ctx->downcount -= 4;
    // 802D1F90: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1F94:
    // 802D1F94: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_802D1F98:
    ctx->pc = 0x802D1F98u;
    // 802D1F98: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1F9C:
    // 802D1F9C: b       0x802D1FC4
    {
            goto label_802D1FC4;
    }

label_802D1FA0:
    ctx->pc = 0x802D1FA0u;
    ctx->downcount -= 1;
    // 802D1FA0: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D1FA4:
    ctx->downcount -= 2;
    // 802D1FA4: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D1FA8:
    // 802D1FA8: bc    4, 2, 0x802D1F78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1F78u;
                return;
            }
            goto label_802D1F78;
        }
    }

label_802D1FAC:
    ctx->downcount -= 3;
    // 802D1FAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D1FB0:
    // 802D1FB0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D1FB4:
    // 802D1FB4: bl      0x8027613C
    {
            ctx->lr = 0x802D1FB8u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_802D1FB8:
    ctx->downcount -= 3;
    // 802D1FB8: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_802D1FBC:
    // 802D1FBC: addi    r0, r3, -4
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-4);

label_802D1FC0:
    ctx->pc = 0x802D1FC0u;
    // 802D1FC0: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1FC4:
    ctx->pc = 0x802D1FC4u;
    ctx->downcount -= 16;
    // 802D1FC4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D1FC8:
    ctx->pc = 0x802D1FC8u;
    // 802D1FC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D1FCC:
    ctx->pc = 0x802D1FCCu;
    // 802D1FCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D1FD0:
    // 802D1FD0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D1FD4:
    ctx->pc = 0x802D1FD4u;
    // 802D1FD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D1FD8:
    ctx->downcount -= 3;
    // 802D1FD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D1FDC:
    // 802D1FDC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D1FE0:
    // 802D1FE0: b       0x803457CC
    {
            ctx->pc = 0x803457CCu;
            return;
    }

label_802D1FE4:
    ctx->pc = 0x802D1FE4u;
    ctx->downcount -= 19;
    // 802D1FE4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D1FE8:
    ctx->pc = 0x802D1FE8u;
    // 802D1FE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D1FEC:
    ctx->pc = 0x802D1FECu;
    // 802D1FEC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D1FF0:
    ctx->pc = 0x802D1FF0u;
    // 802D1FF0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D1FF4:
    // 802D1FF4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D1FF8:
    // 802D1FF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D1FFC:
    // 802D1FFC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2000:
    // 802D2000: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2004:
    // 802D2004: bl      0x802D214C
    {
            ctx->lr = 0x802D2008u;
            goto label_802D214C;
    }

label_802D2008:
    ctx->downcount -= 10;
    // 802D2008: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D200C:
    // 802D200C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802D2010:
    // 802D2010: addi    r3, r3, 2400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2400);

label_802D2014:
    ctx->pc = 0x802D2014u;
    // 802D2014: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2018:
    // 802D2018: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_802D201C:
    // 802D201C: addi    r4, r4, 7736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7736);

label_802D2020:
    ctx->pc = 0x802D2020u;
    // 802D2020: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2024:
    // 802D2024: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_802D2028:
    // 802D2028: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802D202C:
    // 802D202C: bl      0x8000E7F4
    {
            ctx->lr = 0x802D2030u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802D2030:
    ctx->downcount -= 7;
    // 802D2030: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_802D2034:
    // 802D2034: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_802D2038:
    // 802D2038: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802D203C:
    // 802D203C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D2040:
    // 802D2040: addi    r4, r4, 22144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22144);

label_802D2044:
    // 802D2044: addi    r5, r5, 2348
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2348);

label_802D2048:
    // 802D2048: bl      0x802D236C
    {
            ctx->lr = 0x802D204Cu;
            goto label_802D236C;
    }

label_802D204C:
    ctx->downcount -= 4;
    // 802D204C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2050:
    // 802D2050: li      r3, 224
    ctx->gpr[3] = (u32)(s32)(224);

label_802D2054:
    // 802D2054: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D2058:
    // 802D2058: bl      0x801C1C5C
    {
            ctx->lr = 0x802D205Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D205C:
    ctx->downcount -= 2;
    // 802D205C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2060:
    // 802D2060: bc    12, 2, 0x802D206C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D206C;
        }
    }

label_802D2064:
    ctx->downcount -= 2;
    // 802D2064: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2068:
    // 802D2068: bl      0x802D33C8
    {
            ctx->lr = 0x802D206Cu;
            ctx->pc = 0x802D33C8u;
            return;
    }

label_802D206C:
    ctx->pc = 0x802D206Cu;
    ctx->downcount -= 5;
    // 802D206C: stw     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2070:
    // 802D2070: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2074:
    // 802D2074: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_802D2078:
    // 802D2078: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D207C:
    // 802D207C: bl      0x801C1C5C
    {
            ctx->lr = 0x802D2080u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D2080:
    ctx->downcount -= 2;
    // 802D2080: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2084:
    // 802D2084: bc    12, 2, 0x802D2090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2090;
        }
    }

label_802D2088:
    ctx->downcount -= 2;
    // 802D2088: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D208C:
    // 802D208C: bl      0x803149E4
    {
            ctx->lr = 0x802D2090u;
            ctx->pc = 0x803149E4u;
            return;
    }

label_802D2090:
    ctx->pc = 0x802D2090u;
    ctx->downcount -= 5;
    // 802D2090: stw     r3, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2094:
    // 802D2094: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2098:
    // 802D2098: li      r3, 5532
    ctx->gpr[3] = (u32)(s32)(5532);

label_802D209C:
    // 802D209C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D20A0:
    // 802D20A0: bl      0x801C1C5C
    {
            ctx->lr = 0x802D20A4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D20A4:
    ctx->downcount -= 2;
    // 802D20A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D20A8:
    // 802D20A8: bc    12, 2, 0x802D20B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D20B4;
        }
    }

label_802D20AC:
    ctx->downcount -= 2;
    // 802D20AC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D20B0:
    // 802D20B0: bl      0x80271E70
    {
            ctx->lr = 0x802D20B4u;
            ctx->pc = 0x80271E70u;
            return;
    }

label_802D20B4:
    ctx->pc = 0x802D20B4u;
    ctx->downcount -= 5;
    // 802D20B4: stw     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D20B8:
    // 802D20B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D20BC:
    // 802D20BC: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_802D20C0:
    // 802D20C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D20C4:
    // 802D20C4: bl      0x801C1C5C
    {
            ctx->lr = 0x802D20C8u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D20C8:
    ctx->downcount -= 2;
    // 802D20C8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D20CC:
    // 802D20CC: bc    12, 2, 0x802D20D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D20D8;
        }
    }

label_802D20D0:
    ctx->downcount -= 2;
    // 802D20D0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D20D4:
    // 802D20D4: bl      0x802E2448
    {
            ctx->lr = 0x802D20D8u;
            ctx->pc = 0x802E2448u;
            return;
    }

label_802D20D8:
    ctx->pc = 0x802D20D8u;
    ctx->downcount -= 4;
    // 802D20D8: stw     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D20DC:
    // 802D20DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D20E0:
    ctx->pc = 0x802D20E0u;
    // 802D20E0: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D20E4:
    // 802D20E4: bl      0x802A6408
    {
            ctx->lr = 0x802D20E8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D20E8:
    ctx->pc = 0x802D20E8u;
    ctx->downcount -= 3;
    // 802D20E8: lwz     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D20EC:
    // 802D20EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D20F0:
    // 802D20F0: bl      0x802A6408
    {
            ctx->lr = 0x802D20F4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D20F4:
    ctx->pc = 0x802D20F4u;
    ctx->downcount -= 3;
    // 802D20F4: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D20F8:
    // 802D20F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D20FC:
    // 802D20FC: bl      0x802A6408
    {
            ctx->lr = 0x802D2100u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D2100:
    ctx->pc = 0x802D2100u;
    ctx->downcount -= 3;
    // 802D2100: lwz     r4, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2104:
    // 802D2104: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D2108:
    // 802D2108: bl      0x802A6408
    {
            ctx->lr = 0x802D210Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802D210C:
    ctx->downcount -= 5;
    // 802D210C: lis     r3, 1
    ctx->gpr[3] = ((u32)(s32)(1) << 16);

label_802D2110:
    // 802D2110: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2114:
    // 802D2114: addi    r3, r3, -24936
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24936);

label_802D2118:
    // 802D2118: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D211C:
    // 802D211C: bl      0x801C1C5C
    {
            ctx->lr = 0x802D2120u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802D2120:
    ctx->downcount -= 2;
    // 802D2120: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2124:
    // 802D2124: bc    12, 2, 0x802D2130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2130;
        }
    }

label_802D2128:
    ctx->downcount -= 2;
    // 802D2128: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D212C:
    // 802D212C: bl      0x802E619C
    {
            ctx->lr = 0x802D2130u;
            ctx->pc = 0x802E619Cu;
            return;
    }

label_802D2130:
    ctx->pc = 0x802D2130u;
    ctx->downcount -= 18;
    // 802D2130: stw     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2134:
    // 802D2134: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D2138:
    ctx->pc = 0x802D2138u;
    // 802D2138: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D213C:
    ctx->pc = 0x802D213Cu;
    // 802D213C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2140:
    ctx->pc = 0x802D2140u;
    // 802D2140: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2144:
    // 802D2144: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2148:
    ctx->pc = 0x802D2148u;
    // 802D2148: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D214C:
    ctx->pc = 0x802D214Cu;
    ctx->downcount -= 21;
    // 802D214C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2150:
    ctx->pc = 0x802D2150u;
    // 802D2150: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2154:
    ctx->pc = 0x802D2154u;
    // 802D2154: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2158:
    ctx->pc = 0x802D2158u;
    // 802D2158: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D215C:
    // 802D215C: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802D2160:
    // 802D2160: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D2164:
    // 802D2164: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2168:
    // 802D2168: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D216C:
    // 802D216C: addi    r31, r31, 2312
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(2312);

label_802D2170:
    // 802D2170: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D2174:
    // 802D2174: bl      0x802A6748
    {
            ctx->lr = 0x802D2178u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802D2178:
    ctx->downcount -= 10;
    // 802D2178: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D217C:
    // 802D217C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D2180:
    // 802D2180: addi    r3, r3, 2640
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2640);

label_802D2184:
    ctx->pc = 0x802D2184u;
    // 802D2184: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2188:
    // 802D2188: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_802D218C:
    // 802D218C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D2190:
    ctx->pc = 0x802D2190u;
    // 802D2190: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2194:
    // 802D2194: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D2198:
    // 802D2198: addi    r5, r29, 4
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(4);

label_802D219C:
    // 802D219C: bl      0x802D224C
    {
            ctx->lr = 0x802D21A0u;
            goto label_802D224C;
    }

label_802D21A0:
    ctx->downcount -= 3;
    // 802D21A0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D21A4:
    // 802D21A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D21A8:
    // 802D21A8: bl      0x802A5D48
    {
            ctx->lr = 0x802D21ACu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802D21AC:
    ctx->downcount -= 6;
    // 802D21AC: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D21B0:
    // 802D21B0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802D21B4:
    // 802D21B4: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_802D21B8:
    // 802D21B8: addi    r5, r31, 60
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(60);

label_802D21BC:
    // 802D21BC: addi    r6, r31, 72
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(72);

label_802D21C0:
    // 802D21C0: bl      0x802D23E8
    {
            ctx->lr = 0x802D21C4u;
            goto label_802D23E8;
    }

label_802D21C4:
    ctx->downcount -= 2;
    // 802D21C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D21C8:
    // 802D21C8: bl      0x802A609C
    {
            ctx->lr = 0x802D21CCu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802D21CC:
    ctx->downcount -= 17;
    // 802D21CC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802D21D0:
    ctx->pc = 0x802D21D0u;
    // 802D21D0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D21D4:
    ctx->pc = 0x802D21D4u;
    // 802D21D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D21D8:
    ctx->pc = 0x802D21D8u;
    // 802D21D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D21DC:
    // 802D21DC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D21E0:
    ctx->pc = 0x802D21E0u;
    // 802D21E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D21E4:
    ctx->pc = 0x802D21E4u;
    ctx->downcount -= 1;
    // 802D21E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D21E8:
    ctx->pc = 0x802D21E8u;
    ctx->downcount -= 10;
    // 802D21E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D21EC:
    ctx->pc = 0x802D21ECu;
    // 802D21EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D21F0:
    ctx->pc = 0x802D21F0u;
    // 802D21F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D21F4:
    ctx->pc = 0x802D21F4u;
    // 802D21F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D21F8:
    // 802D21F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D21FC:
    ctx->pc = 0x802D21FCu;
    // 802D21FC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D2200:
    ctx->pc = 0x802D2200u;
    // 802D2200: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D2204:
    ctx->pc = 0x802D2204u;
    // 802D2204: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D2208:
    ctx->pc = 0x802D2208u;
    // 802D2208: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D220Cu;
            ctx->pc = target;
            return;
        }
    }

label_802D220C:
    ctx->downcount -= 2;
    // 802D220C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D2210:
    // 802D2210: bl      0x802D2444
    {
            ctx->lr = 0x802D2214u;
            goto label_802D2444;
    }

label_802D2214:
    ctx->pc = 0x802D2214u;
    ctx->downcount -= 6;
    // 802D2214: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D2218:
    // 802D2218: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D221C:
    ctx->pc = 0x802D221Cu;
    // 802D221C: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802D2220:
    ctx->pc = 0x802D2220u;
    // 802D2220: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802D2224:
    ctx->pc = 0x802D2224u;
    // 802D2224: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802D2228u;
            ctx->pc = target;
            return;
        }
    }

label_802D2228:
    ctx->pc = 0x802D2228u;
    ctx->downcount -= 6;
    // 802D2228: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D222C:
    ctx->pc = 0x802D222Cu;
    // 802D222C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2230:
    ctx->pc = 0x802D2230u;
    // 802D2230: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2234:
    // 802D2234: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2238:
    ctx->pc = 0x802D2238u;
    // 802D2238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D223C:
    ctx->downcount -= 2;
    // 802D223C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D2240:
    ctx->pc = 0x802D2240u;
    // 802D2240: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2244:
    ctx->downcount -= 2;
    // 802D2244: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802D2248:
    ctx->pc = 0x802D2248u;
    // 802D2248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D224C:
    ctx->pc = 0x802D224Cu;
    ctx->downcount -= 17;
    // 802D224C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2250:
    ctx->pc = 0x802D2250u;
    // 802D2250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2254:
    ctx->pc = 0x802D2254u;
    // 802D2254: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2258:
    ctx->pc = 0x802D2258u;
    // 802D2258: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D225C:
    // 802D225C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2260:
    // 802D2260: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2264:
    // 802D2264: bl      0x803457F4
    {
            ctx->lr = 0x802D2268u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802D2268:
    ctx->pc = 0x802D2268u;
    ctx->downcount -= 11;
    // 802D2268: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D226C:
    // 802D226C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802D2270:
    // 802D2270: addi    r3, r3, 2760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2760);

label_802D2274:
    ctx->pc = 0x802D2274u;
    // 802D2274: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2278:
    // 802D2278: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D227C:
    ctx->pc = 0x802D227Cu;
    // 802D227C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2280:
    ctx->pc = 0x802D2280u;
    // 802D2280: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802D2284:
    // 802D2284: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D2288:
    // 802D2288: bl      0x801C1C80
    {
            ctx->lr = 0x802D228Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D228C:
    ctx->pc = 0x802D228Cu;
    ctx->downcount -= 8;
    // 802D228C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2290:
    // 802D2290: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D2294:
    ctx->pc = 0x802D2294u;
    // 802D2294: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2298:
    // 802D2298: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D229C:
    ctx->pc = 0x802D229Cu;
    // 802D229C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D22A0:
    // 802D22A0: bl      0x801C1C80
    {
            ctx->lr = 0x802D22A4u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D22A4:
    ctx->pc = 0x802D22A4u;
    ctx->downcount -= 8;
    // 802D22A4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D22A8:
    // 802D22A8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802D22AC:
    ctx->pc = 0x802D22ACu;
    // 802D22AC: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D22B0:
    // 802D22B0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D22B4:
    ctx->pc = 0x802D22B4u;
    // 802D22B4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D22B8:
    // 802D22B8: bl      0x801C1C80
    {
            ctx->lr = 0x802D22BCu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802D22BC:
    ctx->downcount -= 6;
    // 802D22BC: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802D22C0:
    ctx->pc = 0x802D22C0u;
    // 802D22C0: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D22C4:
    // 802D22C4: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802D22C8:
    // 802D22C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802D22CC:
    // 802D22CC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D22D0:
    // 802D22D0: b       0x802D233C
    {
            goto label_802D233C;
    }

label_802D22D4:
    loop_802D22D4(ctx);
    if (ctx->pc == 0x802D2348u) goto label_802D2348;
    return;
label_802D22D8:
    // 802D22D8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802D22DC:
    ctx->pc = 0x802D22DCu;
    // 802D22DC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D22E0:
    // 802D22E0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D22E4:
    ctx->pc = 0x802D22E4u;
    // 802D22E4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D22E8:
    ctx->pc = 0x802D22E8u;
    // 802D22E8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D22EC:
    ctx->pc = 0x802D22ECu;
    // 802D22EC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D22F0:
    ctx->pc = 0x802D22F0u;
    // 802D22F0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D22F4:
    ctx->pc = 0x802D22F4u;
    // 802D22F4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D22F8:
    ctx->pc = 0x802D22F8u;
    // 802D22F8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D22FC:
    ctx->pc = 0x802D22FCu;
    // 802D22FC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2300:
    // 802D2300: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2304:
    ctx->pc = 0x802D2304u;
    // 802D2304: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2308:
    ctx->pc = 0x802D2308u;
    // 802D2308: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D230C:
    ctx->pc = 0x802D230Cu;
    // 802D230C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2310:
    ctx->pc = 0x802D2310u;
    // 802D2310: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2314:
    ctx->pc = 0x802D2314u;
    // 802D2314: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2318:
    ctx->pc = 0x802D2318u;
    // 802D2318: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D231C:
    ctx->pc = 0x802D231Cu;
    // 802D231C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2320:
    // 802D2320: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2324:
    ctx->pc = 0x802D2324u;
    // 802D2324: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2328:
    ctx->pc = 0x802D2328u;
    // 802D2328: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D232C:
    // 802D232C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802D2330:
    ctx->pc = 0x802D2330u;
    // 802D2330: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2334:
    ctx->pc = 0x802D2334u;
    // 802D2334: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2338:
    ctx->pc = 0x802D2338u;
    // 802D2338: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D233C:
    ctx->pc = 0x802D233Cu;
    ctx->downcount -= 3;
    // 802D233C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2340:
    // 802D2340: cmpw    r7, r0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2344:
    // 802D2344: bc    12, 0, 0x802D22D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D22D4u;
                return;
            }
            goto label_802D22D4;
        }
    }

label_802D2348:
    ctx->downcount -= 3;
    // 802D2348: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D234C:
    // 802D234C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2350:
    // 802D2350: bl      0x803457CC
    {
            ctx->lr = 0x802D2354u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802D2354:
    ctx->downcount -= 17;
    // 802D2354: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2358:
    ctx->pc = 0x802D2358u;
    // 802D2358: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D235C:
    ctx->pc = 0x802D235Cu;
    // 802D235C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2360:
    ctx->pc = 0x802D2360u;
    // 802D2360: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2364:
    // 802D2364: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2368:
    ctx->pc = 0x802D2368u;
    // 802D2368: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D236C:
    ctx->pc = 0x802D236Cu;
    ctx->downcount -= 20;
    // 802D236C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2370:
    ctx->pc = 0x802D2370u;
    // 802D2370: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2374:
    ctx->pc = 0x802D2374u;
    // 802D2374: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2378:
    ctx->pc = 0x802D2378u;
    // 802D2378: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D237C:
    // 802D237C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2380:
    // 802D2380: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2384:
    // 802D2384: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2388:
    // 802D2388: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D238C:
    // 802D238C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2390:
    // 802D2390: bl      0x803456D0
    {
            ctx->lr = 0x802D2394u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802D2394:
    ctx->downcount -= 34;
    // 802D2394: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802D2398:
    ctx->pc = 0x802D2398u;
    // 802D2398: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D239C:
    ctx->pc = 0x802D239Cu;
    // 802D239C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D23A0:
    ctx->pc = 0x802D23A0u;
    // 802D23A0: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D23A4:
    // 802D23A4: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D23A8:
    ctx->pc = 0x802D23A8u;
    // 802D23A8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D23AC:
    ctx->pc = 0x802D23ACu;
    // 802D23AC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D23B0:
    ctx->pc = 0x802D23B0u;
    // 802D23B0: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D23B4:
    ctx->pc = 0x802D23B4u;
    // 802D23B4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D23B8:
    ctx->pc = 0x802D23B8u;
    // 802D23B8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D23BC:
    ctx->pc = 0x802D23BCu;
    // 802D23BC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D23C0:
    ctx->pc = 0x802D23C0u;
    // 802D23C0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D23C4:
    ctx->pc = 0x802D23C4u;
    // 802D23C4: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D23C8:
    ctx->pc = 0x802D23C8u;
    // 802D23C8: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802D23CC:
    ctx->pc = 0x802D23CCu;
    // 802D23CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D23D0:
    ctx->pc = 0x802D23D0u;
    // 802D23D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D23D4:
    ctx->pc = 0x802D23D4u;
    // 802D23D4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D23D8:
    ctx->pc = 0x802D23D8u;
    // 802D23D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D23DC:
    ctx->pc = 0x802D23DCu;
    // 802D23DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D23E0:
    // 802D23E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D23E4:
    ctx->pc = 0x802D23E4u;
    // 802D23E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D23E8:
    ctx->pc = 0x802D23E8u;
    ctx->downcount -= 19;
    // 802D23E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D23EC:
    ctx->pc = 0x802D23ECu;
    // 802D23EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D23F0:
    ctx->pc = 0x802D23F0u;
    // 802D23F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D23F4:
    ctx->pc = 0x802D23F4u;
    // 802D23F4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D23F8:
    // 802D23F8: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802D23FC:
    // 802D23FC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2400:
    // 802D2400: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2404:
    // 802D2404: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2408:
    // 802D2408: bl      0x802D236C
    {
            ctx->lr = 0x802D240Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D236Cu;
                return;
            }
            goto label_802D236C;
    }

label_802D240C:
    ctx->downcount -= 27;
    // 802D240C: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802D2410:
    ctx->pc = 0x802D2410u;
    // 802D2410: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2414:
    ctx->pc = 0x802D2414u;
    // 802D2414: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2418:
    ctx->pc = 0x802D2418u;
    // 802D2418: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D241C:
    // 802D241C: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2420:
    ctx->pc = 0x802D2420u;
    // 802D2420: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2424:
    ctx->pc = 0x802D2424u;
    // 802D2424: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D2428:
    ctx->pc = 0x802D2428u;
    // 802D2428: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D242C:
    ctx->pc = 0x802D242Cu;
    // 802D242C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2430:
    ctx->pc = 0x802D2430u;
    // 802D2430: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2434:
    ctx->pc = 0x802D2434u;
    // 802D2434: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2438:
    ctx->pc = 0x802D2438u;
    // 802D2438: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D243C:
    // 802D243C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D2440:
    ctx->pc = 0x802D2440u;
    // 802D2440: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2444:
    ctx->pc = 0x802D2444u;
    ctx->downcount -= 8;
    // 802D2444: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2448:
    ctx->pc = 0x802D2448u;
    // 802D2448: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D244C:
    ctx->pc = 0x802D244Cu;
    // 802D244C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2450:
    ctx->pc = 0x802D2450u;
    // 802D2450: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2454:
    // 802D2454: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2458:
    ctx->pc = 0x802D2458u;
    // 802D2458: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D245C:
    // 802D245C: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2460:
    // 802D2460: bc    12, 2, 0x802D2484
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2484;
        }
    }

label_802D2464:
    ctx->pc = 0x802D2464u;
    ctx->downcount -= 3;
    // 802D2464: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D2468:
    // 802D2468: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D246C:
    // 802D246C: bc    12, 2, 0x802D2474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2474;
        }
    }

label_802D2470:
    ctx->downcount -= 1;
    // 802D2470: bl      0x802D2568
    {
            ctx->lr = 0x802D2474u;
            goto label_802D2568;
    }

label_802D2474:
    ctx->downcount -= 2;
    // 802D2474: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2478:
    // 802D2478: bl      0x803456D4
    {
            ctx->lr = 0x802D247Cu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802D247C:
    ctx->downcount -= 2;
    // 802D247C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2480:
    // 802D2480: bl      0x802D24A8
    {
            ctx->lr = 0x802D2484u;
            goto label_802D24A8;
    }

label_802D2484:
    ctx->downcount -= 2;
    // 802D2484: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2488:
    // 802D2488: bl      0x802D2508
    {
            ctx->lr = 0x802D248Cu;
            goto label_802D2508;
    }

label_802D248C:
    ctx->downcount -= 2;
    // 802D248C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2490:
    // 802D2490: bl      0x803456F8
    {
            ctx->lr = 0x802D2494u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802D2494:
    ctx->pc = 0x802D2494u;
    ctx->downcount -= 6;
    // 802D2494: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2498:
    ctx->pc = 0x802D2498u;
    // 802D2498: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D249C:
    ctx->pc = 0x802D249Cu;
    // 802D249C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D24A0:
    // 802D24A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D24A4:
    ctx->pc = 0x802D24A4u;
    // 802D24A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D24A8:
    ctx->pc = 0x802D24A8u;
    ctx->downcount -= 12;
    // 802D24A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D24AC:
    ctx->pc = 0x802D24ACu;
    // 802D24AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D24B0:
    ctx->pc = 0x802D24B0u;
    // 802D24B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D24B4:
    ctx->pc = 0x802D24B4u;
    // 802D24B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D24B8:
    // 802D24B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D24BC:
    ctx->pc = 0x802D24BCu;
    // 802D24BC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D24C0:
    ctx->pc = 0x802D24C0u;
    // 802D24C0: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D24C4:
    // 802D24C4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D24C8:
    // 802D24C8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D24CC:
    // 802D24CC: bl      0x800076B4
    {
            ctx->lr = 0x802D24D0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D24D0:
    ctx->downcount -= 2;
    // 802D24D0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D24D4:
    // 802D24D4: bc    12, 2, 0x802D24F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D24F4;
        }
    }

label_802D24D8:
    ctx->pc = 0x802D24D8u;
    ctx->downcount -= 8;
    // 802D24D8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D24DC:
    ctx->pc = 0x802D24DCu;
    // 802D24DC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D24E0:
    // 802D24E0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D24E4:
    ctx->pc = 0x802D24E4u;
    // 802D24E4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D24E8:
    // 802D24E8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D24EC:
    // 802D24EC: bl      0x800076E4
    {
            ctx->lr = 0x802D24F0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D24F0:
    ctx->downcount -= 1;
    // 802D24F0: nop
    // nop

label_802D24F4:
    ctx->pc = 0x802D24F4u;
    ctx->downcount -= 6;
    // 802D24F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D24F8:
    ctx->pc = 0x802D24F8u;
    // 802D24F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D24FC:
    ctx->pc = 0x802D24FCu;
    // 802D24FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2500:
    // 802D2500: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2504:
    ctx->pc = 0x802D2504u;
    // 802D2504: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2508:
    ctx->pc = 0x802D2508u;
    ctx->downcount -= 12;
    // 802D2508: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D250C:
    ctx->pc = 0x802D250Cu;
    // 802D250C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2510:
    ctx->pc = 0x802D2510u;
    // 802D2510: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2514:
    ctx->pc = 0x802D2514u;
    // 802D2514: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2518:
    // 802D2518: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D251C:
    ctx->pc = 0x802D251Cu;
    // 802D251C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2520:
    ctx->pc = 0x802D2520u;
    // 802D2520: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2524:
    // 802D2524: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D2528:
    // 802D2528: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D252C:
    // 802D252C: bl      0x800076B4
    {
            ctx->lr = 0x802D2530u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D2530:
    ctx->downcount -= 2;
    // 802D2530: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2534:
    // 802D2534: bc    12, 2, 0x802D2554
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2554;
        }
    }

label_802D2538:
    ctx->pc = 0x802D2538u;
    ctx->downcount -= 8;
    // 802D2538: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D253C:
    ctx->pc = 0x802D253Cu;
    // 802D253C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2540:
    // 802D2540: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D2544:
    ctx->pc = 0x802D2544u;
    // 802D2544: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2548:
    // 802D2548: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D254C:
    // 802D254C: bl      0x800076E4
    {
            ctx->lr = 0x802D2550u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D2550:
    ctx->downcount -= 1;
    // 802D2550: nop
    // nop

label_802D2554:
    ctx->pc = 0x802D2554u;
    ctx->downcount -= 6;
    // 802D2554: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2558:
    ctx->pc = 0x802D2558u;
    // 802D2558: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D255C:
    ctx->pc = 0x802D255Cu;
    // 802D255C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2560:
    // 802D2560: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2564:
    ctx->pc = 0x802D2564u;
    // 802D2564: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2568:
    ctx->pc = 0x802D2568u;
    ctx->downcount -= 12;
    // 802D2568: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D256C:
    ctx->pc = 0x802D256Cu;
    // 802D256C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2570:
    ctx->pc = 0x802D2570u;
    // 802D2570: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2574:
    ctx->pc = 0x802D2574u;
    // 802D2574: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2578:
    // 802D2578: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D257C:
    ctx->pc = 0x802D257Cu;
    // 802D257C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2580:
    ctx->pc = 0x802D2580u;
    // 802D2580: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2584:
    // 802D2584: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D2588:
    // 802D2588: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D258C:
    // 802D258C: bl      0x800076B4
    {
            ctx->lr = 0x802D2590u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802D2590:
    ctx->downcount -= 2;
    // 802D2590: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2594:
    // 802D2594: bc    12, 2, 0x802D25B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D25B4;
        }
    }

label_802D2598:
    ctx->pc = 0x802D2598u;
    ctx->downcount -= 8;
    // 802D2598: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D259C:
    ctx->pc = 0x802D259Cu;
    // 802D259C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D25A0:
    // 802D25A0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802D25A4:
    ctx->pc = 0x802D25A4u;
    // 802D25A4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D25A8:
    // 802D25A8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802D25AC:
    // 802D25AC: bl      0x800076E4
    {
            ctx->lr = 0x802D25B0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802D25B0:
    ctx->downcount -= 1;
    // 802D25B0: nop
    // nop

label_802D25B4:
    ctx->pc = 0x802D25B4u;
    ctx->downcount -= 6;
    // 802D25B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D25B8:
    ctx->pc = 0x802D25B8u;
    // 802D25B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D25BC:
    ctx->pc = 0x802D25BCu;
    // 802D25BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D25C0:
    // 802D25C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D25C4:
    ctx->pc = 0x802D25C4u;
    // 802D25C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D25C8:
    ctx->downcount -= 2;
    // 802D25C8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D25CC:
    // 802D25CC: b       0x802D1600
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1600u;
                return;
            }
            goto label_802D1600;
    }

label_802D25D0:
    ctx->downcount -= 2;
    // 802D25D0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D25D4:
    // 802D25D4: b       0x802D1668
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1668u;
                return;
            }
            goto label_802D1668;
    }

label_802D25D8:
    ctx->downcount -= 2;
    // 802D25D8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802D25DC:
    // 802D25DC: b       0x802D1730
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D1730u;
                return;
            }
            goto label_802D1730;
    }

label_802D25E0:
    ctx->pc = 0x802D25E0u;
    ctx->downcount -= 17;
    // 802D25E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D25E4:
    ctx->pc = 0x802D25E4u;
    // 802D25E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D25E8:
    ctx->pc = 0x802D25E8u;
    // 802D25E8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D25EC:
    ctx->pc = 0x802D25ECu;
    // 802D25EC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D25F0:
    ctx->pc = 0x802D25F0u;
    // 802D25F0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D25F4:
    ctx->pc = 0x802D25F4u;
    // 802D25F4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802D25F8:
    ctx->pc = 0x802D25F8u;
    // 802D25F8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802D25FC:
    ctx->downcount -= 4;
    // 802D25FC: add   r30, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_802D2600:
    ctx->pc = 0x802D2600u;
    // 802D2600: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2604:
    // 802D2604: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2608:
    // 802D2608: bc    12, 2, 0x802D261C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D261C;
        }
    }

label_802D260C:
    ctx->pc = 0x802D260Cu;
    ctx->downcount -= 2;
    // 802D260C: lwz     r4, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2610:
    // 802D2610: bl      0x802F346C
    {
            ctx->lr = 0x802D2614u;
            ctx->pc = 0x802F346Cu;
            return;
    }

label_802D2614:
    ctx->pc = 0x802D2614u;
    ctx->downcount -= 2;
    // 802D2614: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2618:
    // 802D2618: bl      0x802F38F4
    {
            ctx->lr = 0x802D261Cu;
            ctx->pc = 0x802F38F4u;
            return;
    }

label_802D261C:
    ctx->downcount -= 4;
    // 802D261C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802D2620:
    // 802D2620: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802D2624:
    // 802D2624: cmpwi   r29, 4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2628:
    // 802D2628: bc    12, 0, 0x802D25FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D25FCu;
                return;
            }
            goto label_802D25FC;
        }
    }

label_802D262C:
    ctx->pc = 0x802D262Cu;
    ctx->downcount -= 2;
    // 802D262C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802D2630:
    ctx->pc = 0x802D2630u;
    // 802D2630: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802D2634:
    ctx->downcount -= 4;
    // 802D2634: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2638:
    ctx->pc = 0x802D2638u;
    // 802D2638: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D263C:
    // 802D263C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2640:
    // 802D2640: bc    12, 2, 0x802D2648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2648;
        }
    }

label_802D2644:
    ctx->downcount -= 1;
    // 802D2644: bl      0x802F3768
    {
            ctx->lr = 0x802D2648u;
            ctx->pc = 0x802F3768u;
            return;
    }

label_802D2648:
    ctx->downcount -= 4;
    // 802D2648: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802D264C:
    // 802D264C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802D2650:
    // 802D2650: cmpwi   r29, 4
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2654:
    // 802D2654: bc    12, 0, 0x802D2634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2634u;
                return;
            }
            goto label_802D2634;
        }
    }

label_802D2658:
    ctx->pc = 0x802D2658u;
    ctx->downcount -= 16;
    // 802D2658: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D265C:
    ctx->pc = 0x802D265Cu;
    // 802D265C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2660:
    ctx->pc = 0x802D2660u;
    // 802D2660: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2664:
    ctx->pc = 0x802D2664u;
    // 802D2664: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D2668:
    ctx->pc = 0x802D2668u;
    // 802D2668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D266C:
    ctx->pc = 0x802D266Cu;
    ctx->downcount -= 17;
    // 802D266C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2670:
    ctx->pc = 0x802D2670u;
    // 802D2670: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2674:
    ctx->pc = 0x802D2674u;
    // 802D2674: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2678:
    ctx->pc = 0x802D2678u;
    // 802D2678: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D267C:
    ctx->pc = 0x802D267Cu;
    // 802D267C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2680:
    ctx->pc = 0x802D2680u;
    // 802D2680: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802D2684:
    ctx->pc = 0x802D2684u;
    // 802D2684: li      r31, 4
    ctx->gpr[31] = (u32)(s32)(4);

label_802D2688:
    ctx->pc = 0x802D2688u;
    ctx->downcount -= 4;
    // 802D2688: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D268C:
    // 802D268C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D2690:
    // 802D2690: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2694:
    // 802D2694: bl      0x802DC54C
    {
            ctx->lr = 0x802D2698u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2698:
    ctx->downcount -= 3;
    // 802D2698: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D269C:
    // 802D269C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D26A0:
    // 802D26A0: bc    12, 2, 0x802D274C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D274C;
        }
    }

label_802D26A4:
    ctx->downcount -= 3;
    // 802D26A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D26A8:
    // 802D26A8: addi    r3, r3, 8
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8);

label_802D26AC:
    // 802D26AC: bl      0x80345718
    {
            ctx->lr = 0x802D26B0u;
            ctx->pc = 0x80345718u;
            return;
    }

label_802D26B0:
    ctx->downcount -= 2;
    // 802D26B0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D26B4:
    // 802D26B4: bc    4, 2, 0x802D274C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D274C;
        }
    }

label_802D26B8:
    ctx->pc = 0x802D26B8u;
    ctx->downcount -= 3;
    // 802D26B8: lwz     r0, 352(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D26BC:
    // 802D26BC: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D26C0:
    // 802D26C0: bc    12, 0, 0x802D26CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D26CC;
        }
    }

label_802D26C4:
    ctx->downcount -= 2;
    // 802D26C4: cmpwi   r0, 3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D26C8:
    // 802D26C8: bc    4, 1, 0x802D26D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D26D4;
        }
    }

label_802D26CC:
    ctx->downcount -= 2;
    // 802D26CC: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D26D0:
    // 802D26D0: bc    4, 2, 0x802D2740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2740;
        }
    }

label_802D26D4:
    ctx->downcount -= 4;
    // 802D26D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D26D8:
    // 802D26D8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D26DC:
    ctx->pc = 0x802D26DCu;
    // 802D26DC: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_802D26E0:
    ctx->downcount -= 4;
    // 802D26E0: add   r4, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802D26E4:
    ctx->pc = 0x802D26E4u;
    // 802D26E4: lwz     r0, 172(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D26E8:
    // 802D26E8: cmplw   r29, r0
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D26EC:
    // 802D26EC: bc    4, 2, 0x802D26F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D26F4;
        }
    }

label_802D26F0:
    ctx->downcount -= 1;
    // 802D26F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D26F4:
    ctx->downcount -= 2;
    // 802D26F4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802D26F8:
    // 802D26F8: bc    16, 0, 0x802D26E0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D26E0u;
                return;
            }
            goto label_802D26E0;
        }
    }

label_802D26FC:
    ctx->downcount -= 2;
    // 802D26FC: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2700:
    // 802D2700: bc    12, 2, 0x802D2714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2714;
        }
    }

label_802D2704:
    ctx->downcount -= 3;
    // 802D2704: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D2708:
    // 802D2708: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D270C:
    // 802D270C: bl      0x802F33D0
    {
            ctx->lr = 0x802D2710u;
            ctx->pc = 0x802F33D0u;
            return;
    }

label_802D2710:
    ctx->downcount -= 1;
    // 802D2710: b       0x802D274C
    {
            goto label_802D274C;
    }

label_802D2714:
    ctx->pc = 0x802D2714u;
    ctx->downcount -= 3;
    // 802D2714: lwz     r0, 220(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2718:
    // 802D2718: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D271C:
    // 802D271C: bc    4, 2, 0x802D2730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2730;
        }
    }

label_802D2720:
    ctx->pc = 0x802D2720u;
    ctx->downcount -= 3;
    // 802D2720: lwz     r4, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2724:
    // 802D2724: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D2728:
    // 802D2728: bl      0x802F33C4
    {
            ctx->lr = 0x802D272Cu;
            ctx->pc = 0x802F33C4u;
            return;
    }

label_802D272C:
    ctx->downcount -= 1;
    // 802D272C: b       0x802D274C
    {
            goto label_802D274C;
    }

label_802D2730:
    ctx->downcount -= 3;
    // 802D2730: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D2734:
    // 802D2734: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802D2738:
    // 802D2738: bl      0x802F33D0
    {
            ctx->lr = 0x802D273Cu;
            ctx->pc = 0x802F33D0u;
            return;
    }

label_802D273C:
    ctx->downcount -= 1;
    // 802D273C: b       0x802D274C
    {
            goto label_802D274C;
    }

label_802D2740:
    ctx->downcount -= 3;
    // 802D2740: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D2744:
    // 802D2744: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D2748:
    // 802D2748: bl      0x802F33D0
    {
            ctx->lr = 0x802D274Cu;
            ctx->pc = 0x802F33D0u;
            return;
    }

label_802D274C:
    ctx->downcount -= 3;
    // 802D274C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802D2750:
    // 802D2750: cmpwi   r30, 10
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2754:
    // 802D2754: bc    12, 0, 0x802D2688
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2688u;
                return;
            }
            goto label_802D2688;
        }
    }

label_802D2758:
    ctx->pc = 0x802D2758u;
    ctx->downcount -= 3;
    // 802D2758: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D275C:
    ctx->pc = 0x802D275Cu;
    // 802D275C: lwz     r4, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2760:
    ctx->pc = 0x802D2760u;
    // 802D2760: bl      0x802DC214
    {
            ctx->lr = 0x802D2764u;
            ctx->pc = 0x802DC214u;
            return;
    }

label_802D2764:
    ctx->pc = 0x802D2764u;
    ctx->downcount -= 2;
    // 802D2764: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2768:
    ctx->pc = 0x802D2768u;
    // 802D2768: bl      0x802DC1AC
    {
            ctx->lr = 0x802D276Cu;
            ctx->pc = 0x802DC1ACu;
            return;
    }

label_802D276C:
    ctx->pc = 0x802D276Cu;
    ctx->downcount -= 2;
    // 802D276C: lwz     r3, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2770:
    ctx->pc = 0x802D2770u;
    // 802D2770: bl      0x802DC0F4
    {
            ctx->lr = 0x802D2774u;
            ctx->pc = 0x802DC0F4u;
            return;
    }

label_802D2774:
    ctx->pc = 0x802D2774u;
    ctx->downcount -= 16;
    // 802D2774: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2778:
    ctx->pc = 0x802D2778u;
    // 802D2778: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D277C:
    ctx->pc = 0x802D277Cu;
    // 802D277C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2780:
    ctx->pc = 0x802D2780u;
    // 802D2780: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D2784:
    ctx->pc = 0x802D2784u;
    // 802D2784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2788:
    ctx->pc = 0x802D2788u;
    ctx->downcount -= 7;
    // 802D2788: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D278C:
    ctx->pc = 0x802D278Cu;
    // 802D278C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2790:
    ctx->pc = 0x802D2790u;
    // 802D2790: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2794:
    ctx->pc = 0x802D2794u;
    // 802D2794: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2798:
    ctx->pc = 0x802D2798u;
    // 802D2798: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D279C:
    ctx->pc = 0x802D279Cu;
    // 802D279C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D27A0:
    ctx->pc = 0x802D27A0u;
    // 802D27A0: bl      0x8024BD70
    {
            ctx->lr = 0x802D27A4u;
            ctx->pc = 0x8024BD70u;
            return;
    }

label_802D27A4:
    ctx->pc = 0x802D27A4u;
    ctx->downcount -= 2;
    // 802D27A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D27A8:
    ctx->pc = 0x802D27A8u;
    // 802D27A8: bc    12, 2, 0x802D27B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D27B8;
        }
    }

label_802D27AC:
    ctx->pc = 0x802D27ACu;
    ctx->downcount -= 3;
    // 802D27AC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D27B0:
    ctx->pc = 0x802D27B0u;
    // 802D27B0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802D27B4:
    ctx->pc = 0x802D27B4u;
    // 802D27B4: bl      0x803457B8
    {
            ctx->lr = 0x802D27B8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D27B8:
    ctx->pc = 0x802D27B8u;
    ctx->downcount -= 6;
    // 802D27B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D27BC:
    ctx->pc = 0x802D27BCu;
    // 802D27BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D27C0:
    ctx->pc = 0x802D27C0u;
    // 802D27C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D27C4:
    ctx->pc = 0x802D27C4u;
    // 802D27C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D27C8:
    ctx->pc = 0x802D27C8u;
    // 802D27C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D27CC:
    ctx->pc = 0x802D27CCu;
    ctx->downcount -= 6;
    // 802D27CC: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D27D0:
    ctx->pc = 0x802D27D0u;
    // 802D27D0: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D27D4:
    ctx->pc = 0x802D27D4u;
    // 802D27D4: lwz     r5, 152(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D27D8:
    ctx->pc = 0x802D27D8u;
    // 802D27D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D27DC:
    ctx->pc = 0x802D27DCu;
    // 802D27DC: lwz     r6, 156(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D27E0:
    ctx->pc = 0x802D27E0u;
    // 802D27E0: b       0x802DC3D4
    {
            ctx->pc = 0x802DC3D4u;
            return;
    }

label_802D27E4:
    ctx->pc = 0x802D27E4u;
    ctx->downcount -= 7;
    // 802D27E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D27E8:
    ctx->pc = 0x802D27E8u;
    // 802D27E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D27EC:
    ctx->pc = 0x802D27ECu;
    // 802D27EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D27F0:
    ctx->pc = 0x802D27F0u;
    // 802D27F0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D27F4:
    ctx->pc = 0x802D27F4u;
    // 802D27F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D27F8:
    ctx->pc = 0x802D27F8u;
    // 802D27F8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D27FC:
    ctx->pc = 0x802D27FCu;
    // 802D27FC: bl      0x8024BD00
    {
            ctx->lr = 0x802D2800u;
            ctx->pc = 0x8024BD00u;
            return;
    }

label_802D2800:
    ctx->pc = 0x802D2800u;
    ctx->downcount -= 2;
    // 802D2800: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2804:
    ctx->pc = 0x802D2804u;
    // 802D2804: bc    12, 2, 0x802D2814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2814;
        }
    }

label_802D2808:
    ctx->pc = 0x802D2808u;
    ctx->downcount -= 3;
    // 802D2808: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802D280C:
    ctx->pc = 0x802D280Cu;
    // 802D280C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2810:
    ctx->pc = 0x802D2810u;
    // 802D2810: bl      0x803457B8
    {
            ctx->lr = 0x802D2814u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D2814:
    ctx->pc = 0x802D2814u;
    ctx->downcount -= 6;
    // 802D2814: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2818:
    ctx->pc = 0x802D2818u;
    // 802D2818: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D281C:
    ctx->pc = 0x802D281Cu;
    // 802D281C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2820:
    ctx->pc = 0x802D2820u;
    // 802D2820: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2824:
    ctx->pc = 0x802D2824u;
    // 802D2824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2828:
    ctx->pc = 0x802D2828u;
    ctx->downcount -= 4;
    // 802D2828: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D282C:
    ctx->pc = 0x802D282Cu;
    // 802D282C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2830:
    ctx->pc = 0x802D2830u;
    // 802D2830: lwz     r4, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2834:
    ctx->pc = 0x802D2834u;
    // 802D2834: b       0x802D7520
    {
            ctx->pc = 0x802D7520u;
            return;
    }

label_802D2838:
    ctx->pc = 0x802D2838u;
    ctx->downcount -= 2;
    // 802D2838: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D283C:
    ctx->pc = 0x802D283Cu;
    // 802D283C: b       0x8024BFB0
    {
            ctx->pc = 0x8024BFB0u;
            return;
    }

label_802D2840:
    ctx->pc = 0x802D2840u;
    ctx->downcount -= 7;
    // 802D2840: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2844:
    ctx->pc = 0x802D2844u;
    // 802D2844: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2848:
    ctx->pc = 0x802D2848u;
    // 802D2848: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D284C:
    ctx->pc = 0x802D284Cu;
    // 802D284C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2850:
    ctx->pc = 0x802D2850u;
    // 802D2850: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2854:
    ctx->pc = 0x802D2854u;
    // 802D2854: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2858:
    ctx->pc = 0x802D2858u;
    // 802D2858: bl      0x802D337C
    {
            ctx->lr = 0x802D285Cu;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_802D285C:
    ctx->pc = 0x802D285Cu;
    ctx->downcount -= 2;
    // 802D285C: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2860:
    ctx->pc = 0x802D2860u;
    // 802D2860: bl      0x802D75A4
    {
            ctx->lr = 0x802D2864u;
            ctx->pc = 0x802D75A4u;
            return;
    }

label_802D2864:
    ctx->pc = 0x802D2864u;
    ctx->downcount -= 2;
    // 802D2864: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2868:
    ctx->pc = 0x802D2868u;
    // 802D2868: bl      0x802A609C
    {
            ctx->lr = 0x802D286Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802D286C:
    ctx->pc = 0x802D286Cu;
    ctx->downcount -= 6;
    // 802D286C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2870:
    ctx->pc = 0x802D2870u;
    // 802D2870: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2874:
    ctx->pc = 0x802D2874u;
    // 802D2874: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2878:
    ctx->pc = 0x802D2878u;
    // 802D2878: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D287C:
    ctx->pc = 0x802D287Cu;
    // 802D287C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2880:
    ctx->pc = 0x802D2880u;
    ctx->downcount -= 8;
    // 802D2880: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2884:
    ctx->pc = 0x802D2884u;
    // 802D2884: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2888:
    ctx->pc = 0x802D2888u;
    // 802D2888: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D288C:
    ctx->pc = 0x802D288Cu;
    // 802D288C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2890:
    ctx->pc = 0x802D2890u;
    // 802D2890: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2894:
    ctx->pc = 0x802D2894u;
    // 802D2894: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2898:
    ctx->pc = 0x802D2898u;
    // 802D2898: lwz     r4, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D289C:
    ctx->pc = 0x802D289Cu;
    // 802D289C: bl      0x802D76A0
    {
            ctx->lr = 0x802D28A0u;
            ctx->pc = 0x802D76A0u;
            return;
    }

label_802D28A0:
    ctx->pc = 0x802D28A0u;
    ctx->downcount -= 3;
    // 802D28A0: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D28A4:
    ctx->pc = 0x802D28A4u;
    // 802D28A4: lbz     r4, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802D28A8:
    ctx->pc = 0x802D28A8u;
    // 802D28A8: bl      0x802D761C
    {
            ctx->lr = 0x802D28ACu;
            ctx->pc = 0x802D761Cu;
            return;
    }

label_802D28AC:
    ctx->pc = 0x802D28ACu;
    ctx->downcount -= 6;
    // 802D28AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D28B0:
    ctx->pc = 0x802D28B0u;
    // 802D28B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D28B4:
    ctx->pc = 0x802D28B4u;
    // 802D28B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D28B8:
    ctx->pc = 0x802D28B8u;
    // 802D28B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D28BC:
    ctx->pc = 0x802D28BCu;
    // 802D28BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D28C0:
    ctx->pc = 0x802D28C0u;
    ctx->downcount -= 2;
    // 802D28C0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D28C4:
    ctx->pc = 0x802D28C4u;
    // 802D28C4: b       0x802D76FC
    {
            ctx->pc = 0x802D76FCu;
            return;
    }

label_802D28C8:
    ctx->pc = 0x802D28C8u;
    ctx->downcount -= 5;
    // 802D28C8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802D28CC:
    ctx->pc = 0x802D28CCu;
    // 802D28CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D28D0:
    ctx->pc = 0x802D28D0u;
    // 802D28D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D28D4:
    ctx->pc = 0x802D28D4u;
    // 802D28D4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802D28D8:
    ctx->downcount -= 4;
    // 802D28D8: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D28DC:
    ctx->pc = 0x802D28DCu;
    // 802D28DC: lwz     r5, 172(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(172);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D28E0:
    // 802D28E0: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D28E4:
    // 802D28E4: bc    12, 2, 0x802D28F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D28F8;
        }
    }

label_802D28E8:
    ctx->pc = 0x802D28E8u;
    ctx->downcount -= 3;
    // 802D28E8: lwz     r0, 352(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D28EC:
    // 802D28EC: cmpwi   r0, 2
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D28F0:
    // 802D28F0: bc    4, 2, 0x802D28F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D28F8;
        }
    }

label_802D28F4:
    ctx->downcount -= 1;
    // 802D28F4: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802D28F8:
    ctx->downcount -= 2;
    // 802D28F8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802D28FC:
    // 802D28FC: bc    16, 0, 0x802D28D8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D28D8u;
                return;
            }
            goto label_802D28D8;
        }
    }

label_802D2900:
    ctx->pc = 0x802D2900u;
    ctx->downcount -= 2;
    // 802D2900: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2904:
    ctx->pc = 0x802D2904u;
    // 802D2904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2908:
    ctx->pc = 0x802D2908u;
    ctx->downcount -= 5;
    // 802D2908: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D290C:
    ctx->pc = 0x802D290Cu;
    // 802D290C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2910:
    ctx->pc = 0x802D2910u;
    // 802D2910: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2914:
    ctx->pc = 0x802D2914u;
    // 802D2914: stw     r5, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802D2918:
    ctx->pc = 0x802D2918u;
    // 802D2918: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D291C:
    ctx->pc = 0x802D291Cu;
    ctx->downcount -= 5;
    // 802D291C: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D2920:
    ctx->pc = 0x802D2920u;
    // 802D2920: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2924:
    ctx->pc = 0x802D2924u;
    // 802D2924: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2928:
    ctx->pc = 0x802D2928u;
    // 802D2928: stw     r5, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802D292C:
    ctx->pc = 0x802D292Cu;
    // 802D292C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2930:
    ctx->pc = 0x802D2930u;
    ctx->downcount -= 5;
    // 802D2930: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D2934:
    ctx->pc = 0x802D2934u;
    // 802D2934: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2938:
    ctx->pc = 0x802D2938u;
    // 802D2938: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D293C:
    ctx->pc = 0x802D293Cu;
    // 802D293C: lwz     r3, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2940:
    ctx->pc = 0x802D2940u;
    // 802D2940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2944:
    ctx->pc = 0x802D2944u;
    ctx->downcount -= 5;
    // 802D2944: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D2948:
    ctx->pc = 0x802D2948u;
    // 802D2948: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D294C:
    ctx->pc = 0x802D294Cu;
    // 802D294C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2950:
    ctx->pc = 0x802D2950u;
    // 802D2950: lwz     r3, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2954:
    ctx->pc = 0x802D2954u;
    // 802D2954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2958:
    ctx->pc = 0x802D2958u;
    ctx->downcount -= 5;
    // 802D2958: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D295C:
    ctx->pc = 0x802D295Cu;
    // 802D295C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2960:
    ctx->pc = 0x802D2960u;
    // 802D2960: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2964:
    ctx->pc = 0x802D2964u;
    // 802D2964: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D2968:
    ctx->pc = 0x802D2968u;
    // 802D2968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D296C:
    ctx->pc = 0x802D296Cu;
    ctx->downcount -= 5;
    // 802D296C: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D2970:
    ctx->pc = 0x802D2970u;
    // 802D2970: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2974:
    ctx->pc = 0x802D2974u;
    // 802D2974: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2978:
    ctx->pc = 0x802D2978u;
    // 802D2978: lwz     r3, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D297C:
    ctx->pc = 0x802D297Cu;
    // 802D297C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2980:
    ctx->pc = 0x802D2980u;
    ctx->downcount -= 6;
    // 802D2980: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2984:
    ctx->pc = 0x802D2984u;
    // 802D2984: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D2988:
    ctx->pc = 0x802D2988u;
    // 802D2988: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802D298C:
    ctx->pc = 0x802D298Cu;
    // 802D298C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2990:
    ctx->pc = 0x802D2990u;
    // 802D2990: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2994:
    ctx->pc = 0x802D2994u;
    // 802D2994: b       0x802F32E0
    {
            ctx->pc = 0x802F32E0u;
            return;
    }

label_802D2998:
    ctx->pc = 0x802D2998u;
    ctx->downcount -= 6;
    // 802D2998: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D299C:
    ctx->pc = 0x802D299Cu;
    // 802D299C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D29A0:
    ctx->pc = 0x802D29A0u;
    // 802D29A0: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D29A4:
    ctx->pc = 0x802D29A4u;
    // 802D29A4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D29A8:
    ctx->pc = 0x802D29A8u;
    // 802D29A8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D29AC:
    ctx->pc = 0x802D29ACu;
    // 802D29AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D29B0:
    ctx->pc = 0x802D29B0u;
    ctx->downcount -= 9;
    // 802D29B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D29B4:
    ctx->pc = 0x802D29B4u;
    // 802D29B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D29B8:
    ctx->pc = 0x802D29B8u;
    // 802D29B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D29BC:
    ctx->pc = 0x802D29BCu;
    // 802D29BC: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802D29C0:
    ctx->pc = 0x802D29C0u;
    // 802D29C0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D29C4:
    ctx->pc = 0x802D29C4u;
    // 802D29C4: add   r31, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_802D29C8:
    ctx->pc = 0x802D29C8u;
    // 802D29C8: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D29CC:
    ctx->pc = 0x802D29CCu;
    // 802D29CC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D29D0:
    ctx->pc = 0x802D29D0u;
    // 802D29D0: bc    12, 2, 0x802D29DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D29DC;
        }
    }

label_802D29D4:
    ctx->pc = 0x802D29D4u;
    ctx->downcount -= 2;
    // 802D29D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D29D8:
    ctx->pc = 0x802D29D8u;
    // 802D29D8: bl      0x802F3464
    {
            ctx->lr = 0x802D29DCu;
            ctx->pc = 0x802F3464u;
            return;
    }

label_802D29DC:
    ctx->pc = 0x802D29DCu;
    ctx->downcount -= 8;
    // 802D29DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D29E0:
    ctx->pc = 0x802D29E0u;
    // 802D29E0: stw     r0, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D29E4:
    ctx->pc = 0x802D29E4u;
    // 802D29E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D29E8:
    ctx->pc = 0x802D29E8u;
    // 802D29E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D29EC:
    ctx->pc = 0x802D29ECu;
    // 802D29EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D29F0:
    ctx->pc = 0x802D29F0u;
    // 802D29F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D29F4:
    ctx->pc = 0x802D29F4u;
    // 802D29F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D29F8:
    ctx->pc = 0x802D29F8u;
    ctx->downcount -= 19;
    // 802D29F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D29FC:
    ctx->pc = 0x802D29FCu;
    // 802D29FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2A00:
    ctx->pc = 0x802D2A00u;
    // 802D2A00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2A04:
    ctx->pc = 0x802D2A04u;
    // 802D2A04: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D2A08:
    ctx->pc = 0x802D2A08u;
    // 802D2A08: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2A0C:
    ctx->pc = 0x802D2A0Cu;
    // 802D2A0C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2A10:
    ctx->pc = 0x802D2A10u;
    // 802D2A10: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D2A14:
    ctx->pc = 0x802D2A14u;
    // 802D2A14: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2A18:
    ctx->pc = 0x802D2A18u;
    // 802D2A18: bl      0x802D75A4
    {
            ctx->lr = 0x802D2A1Cu;
            ctx->pc = 0x802D75A4u;
            return;
    }

label_802D2A1C:
    ctx->pc = 0x802D2A1Cu;
    ctx->downcount -= 3;
    // 802D2A1C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802D2A20:
    ctx->pc = 0x802D2A20u;
    // 802D2A20: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802D2A24:
    ctx->pc = 0x802D2A24u;
    // 802D2A24: b       0x802D2A40
    {
            goto label_802D2A40;
    }

label_802D2A28:
    ctx->downcount -= 4;
    // 802D2A28: add   r3, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2A2C:
    // 802D2A2C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802D2A30:
    ctx->pc = 0x802D2A30u;
    // 802D2A30: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2A34:
    // 802D2A34: bl      0x802F33D0
    {
            ctx->lr = 0x802D2A38u;
            ctx->pc = 0x802F33D0u;
            return;
    }

label_802D2A38:
    ctx->downcount -= 2;
    // 802D2A38: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802D2A3C:
    // 802D2A3C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802D2A40:
    ctx->downcount -= 2;
    // 802D2A40: cmpw    r30, r28
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[28]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2A44:
    // 802D2A44: bc    12, 0, 0x802D2A28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2A28u;
                return;
            }
            goto label_802D2A28;
        }
    }

label_802D2A48:
    ctx->pc = 0x802D2A48u;
    ctx->downcount -= 5;
    // 802D2A48: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802D2A4C:
    ctx->pc = 0x802D2A4Cu;
    // 802D2A4C: stw     r0, 208(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2A50:
    ctx->pc = 0x802D2A50u;
    // 802D2A50: addi    r3, r27, 100
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(100);

label_802D2A54:
    ctx->pc = 0x802D2A54u;
    // 802D2A54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D2A58:
    ctx->pc = 0x802D2A58u;
    // 802D2A58: bl      0x803457B8
    {
            ctx->lr = 0x802D2A5Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D2A5C:
    ctx->pc = 0x802D2A5Cu;
    ctx->downcount -= 16;
    // 802D2A5C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2A60:
    ctx->pc = 0x802D2A60u;
    // 802D2A60: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2A64:
    ctx->pc = 0x802D2A64u;
    // 802D2A64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2A68:
    ctx->pc = 0x802D2A68u;
    // 802D2A68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D2A6C:
    ctx->pc = 0x802D2A6Cu;
    // 802D2A6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2A70:
    ctx->pc = 0x802D2A70u;
    ctx->downcount -= 18;
    // 802D2A70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2A74:
    ctx->pc = 0x802D2A74u;
    // 802D2A74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2A78:
    ctx->pc = 0x802D2A78u;
    // 802D2A78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2A7C:
    ctx->pc = 0x802D2A7Cu;
    // 802D2A7C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D2A80:
    ctx->pc = 0x802D2A80u;
    // 802D2A80: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2A84:
    ctx->pc = 0x802D2A84u;
    // 802D2A84: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2A88:
    ctx->pc = 0x802D2A88u;
    // 802D2A88: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2A8C:
    ctx->pc = 0x802D2A8Cu;
    // 802D2A8C: bl      0x802D75A4
    {
            ctx->lr = 0x802D2A90u;
            ctx->pc = 0x802D75A4u;
            return;
    }

label_802D2A90:
    ctx->pc = 0x802D2A90u;
    ctx->downcount -= 5;
    // 802D2A90: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802D2A94:
    ctx->pc = 0x802D2A94u;
    // 802D2A94: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2A98:
    ctx->pc = 0x802D2A98u;
    // 802D2A98: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802D2A9C:
    ctx->pc = 0x802D2A9Cu;
    // 802D2A9C: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2AA0:
    ctx->pc = 0x802D2AA0u;
    // 802D2AA0: bl      0x802F33C4
    {
            ctx->lr = 0x802D2AA4u;
            ctx->pc = 0x802F33C4u;
            return;
    }

label_802D2AA4:
    ctx->pc = 0x802D2AA4u;
    ctx->downcount -= 5;
    // 802D2AA4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802D2AA8:
    ctx->pc = 0x802D2AA8u;
    // 802D2AA8: stw     r0, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2AAC:
    ctx->pc = 0x802D2AACu;
    // 802D2AAC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802D2AB0:
    ctx->pc = 0x802D2AB0u;
    // 802D2AB0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802D2AB4:
    ctx->pc = 0x802D2AB4u;
    // 802D2AB4: bl      0x803457B8
    {
            ctx->lr = 0x802D2AB8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802D2AB8:
    ctx->pc = 0x802D2AB8u;
    ctx->downcount -= 16;
    // 802D2AB8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2ABC:
    ctx->pc = 0x802D2ABCu;
    // 802D2ABC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2AC0:
    ctx->pc = 0x802D2AC0u;
    // 802D2AC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2AC4:
    ctx->pc = 0x802D2AC4u;
    // 802D2AC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2AC8:
    ctx->pc = 0x802D2AC8u;
    // 802D2AC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2ACC:
    ctx->pc = 0x802D2ACCu;
    ctx->downcount -= 19;
    // 802D2ACC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2AD0:
    ctx->pc = 0x802D2AD0u;
    // 802D2AD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2AD4:
    ctx->pc = 0x802D2AD4u;
    // 802D2AD4: cmpwi   r5, 0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2AD8:
    ctx->pc = 0x802D2AD8u;
    // 802D2AD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2ADC:
    ctx->pc = 0x802D2ADCu;
    // 802D2ADC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D2AE0:
    ctx->pc = 0x802D2AE0u;
    // 802D2AE0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2AE4:
    ctx->pc = 0x802D2AE4u;
    // 802D2AE4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2AE8:
    ctx->pc = 0x802D2AE8u;
    // 802D2AE8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2AEC:
    ctx->pc = 0x802D2AECu;
    // 802D2AEC: bc    4, 2, 0x802D2B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2B04;
        }
    }

label_802D2AF0:
    ctx->pc = 0x802D2AF0u;
    ctx->downcount -= 3;
    // 802D2AF0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2AF4:
    ctx->pc = 0x802D2AF4u;
    // 802D2AF4: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2AF8:
    ctx->pc = 0x802D2AF8u;
    // 802D2AF8: bl      0x802D7388
    {
            ctx->lr = 0x802D2AFCu;
            ctx->pc = 0x802D7388u;
            return;
    }

label_802D2AFC:
    ctx->pc = 0x802D2AFCu;
    ctx->downcount -= 2;
    // 802D2AFC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2B00:
    ctx->pc = 0x802D2B00u;
    // 802D2B00: b       0x802D2B1C
    {
            goto label_802D2B1C;
    }

label_802D2B04:
    ctx->pc = 0x802D2B04u;
    ctx->downcount -= 2;
    // 802D2B04: cmpwi   r5, 6
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2B08:
    ctx->pc = 0x802D2B08u;
    // 802D2B08: bc    4, 2, 0x802D2B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2B1C;
        }
    }

label_802D2B0C:
    ctx->pc = 0x802D2B0Cu;
    ctx->downcount -= 3;
    // 802D2B0C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2B10:
    ctx->pc = 0x802D2B10u;
    // 802D2B10: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2B14:
    ctx->pc = 0x802D2B14u;
    // 802D2B14: bl      0x802D74BC
    {
            ctx->lr = 0x802D2B18u;
            ctx->pc = 0x802D74BCu;
            return;
    }

label_802D2B18:
    ctx->pc = 0x802D2B18u;
    ctx->downcount -= 1;
    // 802D2B18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2B1C:
    ctx->pc = 0x802D2B1Cu;
    ctx->downcount -= 2;
    // 802D2B1C: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2B20:
    ctx->pc = 0x802D2B20u;
    // 802D2B20: bc    4, 2, 0x802D2B2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2B2C;
        }
    }

label_802D2B24:
    ctx->pc = 0x802D2B24u;
    ctx->downcount -= 2;
    // 802D2B24: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D2B28:
    ctx->pc = 0x802D2B28u;
    // 802D2B28: b       0x802D2B58
    {
            goto label_802D2B58;
    }

label_802D2B2C:
    ctx->pc = 0x802D2B2Cu;
    ctx->downcount -= 7;
    // 802D2B2C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802D2B30:
    ctx->pc = 0x802D2B30u;
    // 802D2B30: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2B34:
    ctx->pc = 0x802D2B34u;
    // 802D2B34: add   r31, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_802D2B38:
    ctx->pc = 0x802D2B38u;
    // 802D2B38: stw     r4, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D2B3C:
    ctx->pc = 0x802D2B3Cu;
    // 802D2B3C: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2B40:
    ctx->pc = 0x802D2B40u;
    // 802D2B40: lwz     r5, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2B44:
    ctx->pc = 0x802D2B44u;
    // 802D2B44: bl      0x802F34F4
    {
            ctx->lr = 0x802D2B48u;
            ctx->pc = 0x802F34F4u;
            return;
    }

label_802D2B48:
    ctx->pc = 0x802D2B48u;
    ctx->downcount -= 3;
    // 802D2B48: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2B4C:
    ctx->pc = 0x802D2B4Cu;
    // 802D2B4C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2B50:
    ctx->pc = 0x802D2B50u;
    // 802D2B50: bl      0x802F3464
    {
            ctx->lr = 0x802D2B54u;
            ctx->pc = 0x802F3464u;
            return;
    }

label_802D2B54:
    ctx->pc = 0x802D2B54u;
    ctx->downcount -= 1;
    // 802D2B54: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802D2B58:
    ctx->pc = 0x802D2B58u;
    ctx->downcount -= 16;
    // 802D2B58: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2B5C:
    ctx->pc = 0x802D2B5Cu;
    // 802D2B5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2B60:
    ctx->pc = 0x802D2B60u;
    // 802D2B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2B64:
    ctx->pc = 0x802D2B64u;
    // 802D2B64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2B68:
    ctx->pc = 0x802D2B68u;
    // 802D2B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2B6C:
    ctx->pc = 0x802D2B6Cu;
    ctx->downcount -= 21;
    // 802D2B6C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2B70:
    ctx->pc = 0x802D2B70u;
    // 802D2B70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2B74:
    ctx->pc = 0x802D2B74u;
    // 802D2B74: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2B78:
    ctx->pc = 0x802D2B78u;
    // 802D2B78: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D2B7C:
    ctx->pc = 0x802D2B7Cu;
    // 802D2B7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2B80:
    ctx->pc = 0x802D2B80u;
    // 802D2B80: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D2B84:
    ctx->pc = 0x802D2B84u;
    // 802D2B84: addi    r27, r1, 16
    ctx->gpr[27] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2B88:
    ctx->pc = 0x802D2B88u;
    // 802D2B88: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802D2B8C:
    ctx->pc = 0x802D2B8Cu;
    // 802D2B8C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802D2B90:
    ctx->pc = 0x802D2B90u;
    // 802D2B90: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802D2B94:
    ctx->pc = 0x802D2B94u;
    // 802D2B94: b       0x802D2BEC
    {
            goto label_802D2BEC;
    }

label_802D2B98:
    ctx->downcount -= 8;
    // 802D2B98: add   r5, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2B9C:
    // 802D2B9C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802D2BA0:
    ctx->pc = 0x802D2BA0u;
    // 802D2BA0: lwz     r3, 1(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2BA4:
    ctx->pc = 0x802D2BA4u;
    // 802D2BA4: lwz     r0, 5(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(5);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2BA8:
    ctx->pc = 0x802D2BA8u;
    // 802D2BA8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2BAC:
    ctx->pc = 0x802D2BACu;
    // 802D2BAC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2BB0:
    ctx->pc = 0x802D2BB0u;
    // 802D2BB0: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2BB4:
    // 802D2BB4: bl      0x802D73F8
    {
            ctx->lr = 0x802D2BB8u;
            ctx->pc = 0x802D73F8u;
            return;
    }

label_802D2BB8:
    ctx->downcount -= 3;
    // 802D2BB8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2BBC:
    ctx->pc = 0x802D2BBCu;
    // 802D2BBC: stwx    r3, r27, r28
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[28];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2BC0:
    // 802D2BC0: bc    4, 2, 0x802D2BCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2BCC;
        }
    }

label_802D2BC4:
    ctx->downcount -= 2;
    // 802D2BC4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D2BC8:
    // 802D2BC8: b       0x802D2C4C
    {
            goto label_802D2C4C;
    }

label_802D2BCC:
    ctx->pc = 0x802D2BCCu;
    ctx->downcount -= 3;
    // 802D2BCC: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2BD0:
    // 802D2BD0: cmpwi   r0, 0
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2BD4:
    // 802D2BD4: bc    12, 2, 0x802D2BE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D2BE0;
        }
    }

label_802D2BD8:
    ctx->downcount -= 2;
    // 802D2BD8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802D2BDC:
    // 802D2BDC: b       0x802D2C4C
    {
            goto label_802D2C4C;
    }

label_802D2BE0:
    ctx->downcount -= 3;
    // 802D2BE0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802D2BE4:
    // 802D2BE4: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_802D2BE8:
    // 802D2BE8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_802D2BEC:
    ctx->pc = 0x802D2BECu;
    ctx->downcount -= 4;
    // 802D2BEC: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D2BF0:
    // 802D2BF0: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_802D2BF4:
    // 802D2BF4: cmpw    r26, r0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2BF8:
    // 802D2BF8: bc    12, 0, 0x802D2B98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2B98u;
                return;
            }
            goto label_802D2B98;
        }
    }

label_802D2BFC:
    ctx->pc = 0x802D2BFCu;
    ctx->downcount -= 4;
    // 802D2BFC: addi    r28, r1, 16
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2C00:
    ctx->pc = 0x802D2C00u;
    // 802D2C00: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802D2C04:
    ctx->pc = 0x802D2C04u;
    // 802D2C04: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802D2C08:
    ctx->pc = 0x802D2C08u;
    // 802D2C08: b       0x802D2C38
    {
            goto label_802D2C38;
    }

label_802D2C0C:
    ctx->pc = 0x802D2C0Cu;
    ctx->downcount -= 6;
    // 802D2C0C: lwzx    r3, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2C10:
    // 802D2C10: add   r27, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_802D2C14:
    ctx->pc = 0x802D2C14u;
    // 802D2C14: stw     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2C18:
    ctx->pc = 0x802D2C18u;
    // 802D2C18: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2C1C:
    ctx->pc = 0x802D2C1Cu;
    // 802D2C1C: lwz     r5, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2C20:
    // 802D2C20: bl      0x802F34F4
    {
            ctx->lr = 0x802D2C24u;
            ctx->pc = 0x802F34F4u;
            return;
    }

label_802D2C24:
    ctx->pc = 0x802D2C24u;
    ctx->downcount -= 3;
    // 802D2C24: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2C28:
    // 802D2C28: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2C2C:
    // 802D2C2C: bl      0x802F3464
    {
            ctx->lr = 0x802D2C30u;
            ctx->pc = 0x802F3464u;
            return;
    }

label_802D2C30:
    ctx->downcount -= 2;
    // 802D2C30: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802D2C34:
    // 802D2C34: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802D2C38:
    ctx->pc = 0x802D2C38u;
    ctx->downcount -= 4;
    // 802D2C38: lbz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802D2C3C:
    // 802D2C3C: extsb r0, r0
    {
        ctx->gpr[0] = (u32)(s32)(s8)ctx->gpr[0];
    }

label_802D2C40:
    // 802D2C40: cmpw    r26, r0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2C44:
    // 802D2C44: bc    12, 0, 0x802D2C0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2C0Cu;
                return;
            }
            goto label_802D2C0C;
        }
    }

label_802D2C48:
    ctx->pc = 0x802D2C48u;
    ctx->downcount -= 1;
    // 802D2C48: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802D2C4C:
    ctx->pc = 0x802D2C4Cu;
    ctx->downcount -= 16;
    // 802D2C4C: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2C50:
    ctx->pc = 0x802D2C50u;
    // 802D2C50: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2C54:
    ctx->pc = 0x802D2C54u;
    // 802D2C54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2C58:
    ctx->pc = 0x802D2C58u;
    // 802D2C58: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802D2C5C:
    ctx->pc = 0x802D2C5Cu;
    // 802D2C5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2C60:
    ctx->pc = 0x802D2C60u;
    ctx->downcount -= 4;
    // 802D2C60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2C64:
    ctx->pc = 0x802D2C64u;
    // 802D2C64: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2C68:
    ctx->pc = 0x802D2C68u;
    // 802D2C68: lwz     r4, 196(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2C6C:
    ctx->pc = 0x802D2C6Cu;
    // 802D2C6C: b       0x802D7210
    {
            ctx->pc = 0x802D7210u;
            return;
    }

label_802D2C70:
    ctx->pc = 0x802D2C70u;
    ctx->downcount -= 3;
    // 802D2C70: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D2C74:
    ctx->pc = 0x802D2C74u;
    // 802D2C74: stw     r0, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2C78:
    ctx->pc = 0x802D2C78u;
    // 802D2C78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2C7C:
    ctx->pc = 0x802D2C7Cu;
    ctx->downcount -= 3;
    // 802D2C7C: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2C80:
    ctx->pc = 0x802D2C80u;
    // 802D2C80: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D2C84:
    ctx->pc = 0x802D2C84u;
    // 802D2C84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2C88:
    ctx->pc = 0x802D2C88u;
    ctx->downcount -= 7;
    // 802D2C88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2C8C:
    ctx->pc = 0x802D2C8Cu;
    // 802D2C8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2C90:
    ctx->pc = 0x802D2C90u;
    // 802D2C90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2C94:
    ctx->pc = 0x802D2C94u;
    // 802D2C94: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2C98:
    ctx->pc = 0x802D2C98u;
    // 802D2C98: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2C9C:
    ctx->pc = 0x802D2C9Cu;
    // 802D2C9C: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2CA0:
    ctx->pc = 0x802D2CA0u;
    // 802D2CA0: bl      0x802DC54C
    {
            ctx->lr = 0x802D2CA4u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2CA4:
    ctx->pc = 0x802D2CA4u;
    ctx->downcount -= 7;
    // 802D2CA4: stw     r3, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2CA8:
    ctx->pc = 0x802D2CA8u;
    // 802D2CA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2CAC:
    ctx->pc = 0x802D2CACu;
    // 802D2CAC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2CB0:
    ctx->pc = 0x802D2CB0u;
    // 802D2CB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2CB4:
    ctx->pc = 0x802D2CB4u;
    // 802D2CB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2CB8:
    ctx->pc = 0x802D2CB8u;
    // 802D2CB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2CBC:
    ctx->pc = 0x802D2CBCu;
    ctx->downcount -= 7;
    // 802D2CBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2CC0:
    ctx->pc = 0x802D2CC0u;
    // 802D2CC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2CC4:
    ctx->pc = 0x802D2CC4u;
    // 802D2CC4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2CC8:
    ctx->pc = 0x802D2CC8u;
    // 802D2CC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2CCC:
    ctx->pc = 0x802D2CCCu;
    // 802D2CCC: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2CD0:
    ctx->pc = 0x802D2CD0u;
    // 802D2CD0: lwz     r4, 192(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2CD4:
    ctx->pc = 0x802D2CD4u;
    // 802D2CD4: bl      0x802D74CC
    {
            ctx->lr = 0x802D2CD8u;
            ctx->pc = 0x802D74CCu;
            return;
    }

label_802D2CD8:
    ctx->pc = 0x802D2CD8u;
    ctx->downcount -= 46;
    // 802D2CD8: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_802D2CDC:
    ctx->pc = 0x802D2CDCu;
    // 802D2CDC: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_802D2CE0:
    ctx->pc = 0x802D2CE0u;
    // 802D2CE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2CE4:
    ctx->pc = 0x802D2CE4u;
    // 802D2CE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2CE8:
    ctx->pc = 0x802D2CE8u;
    // 802D2CE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2CEC:
    ctx->pc = 0x802D2CECu;
    // 802D2CEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2CF0:
    ctx->pc = 0x802D2CF0u;
    ctx->downcount -= 7;
    // 802D2CF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2CF4:
    ctx->pc = 0x802D2CF4u;
    // 802D2CF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2CF8:
    ctx->pc = 0x802D2CF8u;
    // 802D2CF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2CFC:
    ctx->pc = 0x802D2CFCu;
    // 802D2CFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2D00:
    ctx->pc = 0x802D2D00u;
    // 802D2D00: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2D04:
    ctx->pc = 0x802D2D04u;
    // 802D2D04: lwz     r4, 188(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2D08:
    ctx->pc = 0x802D2D08u;
    // 802D2D08: bl      0x802D74CC
    {
            ctx->lr = 0x802D2D0Cu;
            ctx->pc = 0x802D74CCu;
            return;
    }

label_802D2D0C:
    ctx->pc = 0x802D2D0Cu;
    ctx->downcount -= 46;
    // 802D2D0C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_802D2D10:
    ctx->pc = 0x802D2D10u;
    // 802D2D10: divw   r3, r3, r0
    {
        s32 dividend = (s32)ctx->gpr[3];
        s32 divisor = (s32)ctx->gpr[0];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_802D2D14:
    ctx->pc = 0x802D2D14u;
    // 802D2D14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2D18:
    ctx->pc = 0x802D2D18u;
    // 802D2D18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2D1C:
    ctx->pc = 0x802D2D1Cu;
    // 802D2D1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2D20:
    ctx->pc = 0x802D2D20u;
    // 802D2D20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2D24:
    ctx->pc = 0x802D2D24u;
    ctx->downcount -= 5;
    // 802D2D24: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2D28:
    ctx->pc = 0x802D2D28u;
    // 802D2D28: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2D2C:
    ctx->pc = 0x802D2D2Cu;
    // 802D2D2C: lwz     r4, 188(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802D2D30:
    ctx->pc = 0x802D2D30u;
    // 802D2D30: lwz     r5, 192(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2D34:
    ctx->pc = 0x802D2D34u;
    // 802D2D34: b       0x802D7284
    {
            ctx->pc = 0x802D7284u;
            return;
    }

label_802D2D38:
    ctx->pc = 0x802D2D38u;
    ctx->downcount -= 4;
    // 802D2D38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802D2D3C:
    ctx->pc = 0x802D2D3Cu;
    // 802D2D3C: stw     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2D40:
    ctx->pc = 0x802D2D40u;
    // 802D2D40: stw     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2D44:
    ctx->pc = 0x802D2D44u;
    // 802D2D44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2D48:
    ctx->pc = 0x802D2D48u;
    ctx->downcount -= 3;
    // 802D2D48: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2D4C:
    ctx->pc = 0x802D2D4Cu;
    // 802D2D4C: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D2D50:
    ctx->pc = 0x802D2D50u;
    // 802D2D50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2D54:
    ctx->pc = 0x802D2D54u;
    ctx->downcount -= 3;
    // 802D2D54: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2D58:
    ctx->pc = 0x802D2D58u;
    // 802D2D58: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D2D5C:
    ctx->pc = 0x802D2D5Cu;
    // 802D2D5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2D60:
    ctx->pc = 0x802D2D60u;
    ctx->downcount -= 7;
    // 802D2D60: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2D64:
    ctx->pc = 0x802D2D64u;
    // 802D2D64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2D68:
    ctx->pc = 0x802D2D68u;
    // 802D2D68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2D6C:
    ctx->pc = 0x802D2D6Cu;
    // 802D2D6C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2D70:
    ctx->pc = 0x802D2D70u;
    // 802D2D70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2D74:
    ctx->pc = 0x802D2D74u;
    // 802D2D74: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2D78:
    ctx->pc = 0x802D2D78u;
    // 802D2D78: bl      0x802DC54C
    {
            ctx->lr = 0x802D2D7Cu;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2D7C:
    ctx->pc = 0x802D2D7Cu;
    ctx->downcount -= 7;
    // 802D2D7C: stw     r3, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2D80:
    ctx->pc = 0x802D2D80u;
    // 802D2D80: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2D84:
    ctx->pc = 0x802D2D84u;
    // 802D2D84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2D88:
    ctx->pc = 0x802D2D88u;
    // 802D2D88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2D8C:
    ctx->pc = 0x802D2D8Cu;
    // 802D2D8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2D90:
    ctx->pc = 0x802D2D90u;
    // 802D2D90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2D94:
    ctx->pc = 0x802D2D94u;
    ctx->downcount -= 7;
    // 802D2D94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2D98:
    ctx->pc = 0x802D2D98u;
    // 802D2D98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2D9C:
    ctx->pc = 0x802D2D9Cu;
    // 802D2D9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2DA0:
    ctx->pc = 0x802D2DA0u;
    // 802D2DA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2DA4:
    ctx->pc = 0x802D2DA4u;
    // 802D2DA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2DA8:
    ctx->pc = 0x802D2DA8u;
    // 802D2DA8: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2DAC:
    ctx->pc = 0x802D2DACu;
    // 802D2DAC: bl      0x802DC54C
    {
            ctx->lr = 0x802D2DB0u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2DB0:
    ctx->pc = 0x802D2DB0u;
    ctx->downcount -= 7;
    // 802D2DB0: stw     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2DB4:
    ctx->pc = 0x802D2DB4u;
    // 802D2DB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2DB8:
    ctx->pc = 0x802D2DB8u;
    // 802D2DB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2DBC:
    ctx->pc = 0x802D2DBCu;
    // 802D2DBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2DC0:
    ctx->pc = 0x802D2DC0u;
    // 802D2DC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2DC4:
    ctx->pc = 0x802D2DC4u;
    // 802D2DC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2DC8:
    ctx->pc = 0x802D2DC8u;
    ctx->downcount -= 9;
    // 802D2DC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2DCC:
    ctx->pc = 0x802D2DCCu;
    // 802D2DCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2DD0:
    ctx->pc = 0x802D2DD0u;
    // 802D2DD0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2DD4:
    ctx->pc = 0x802D2DD4u;
    // 802D2DD4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D2DD8:
    ctx->pc = 0x802D2DD8u;
    // 802D2DD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2DDC:
    ctx->pc = 0x802D2DDCu;
    // 802D2DDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2DE0:
    ctx->pc = 0x802D2DE0u;
    // 802D2DE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2DE4:
    ctx->pc = 0x802D2DE4u;
    // 802D2DE4: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2DE8:
    ctx->pc = 0x802D2DE8u;
    // 802D2DE8: bl      0x802DC2D4
    {
            ctx->lr = 0x802D2DECu;
            ctx->pc = 0x802DC2D4u;
            return;
    }

label_802D2DEC:
    ctx->pc = 0x802D2DECu;
    ctx->downcount -= 4;
    // 802D2DEC: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2DF0:
    ctx->pc = 0x802D2DF0u;
    // 802D2DF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2DF4:
    ctx->pc = 0x802D2DF4u;
    // 802D2DF4: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2DF8:
    ctx->pc = 0x802D2DF8u;
    // 802D2DF8: bl      0x802DC354
    {
            ctx->lr = 0x802D2DFCu;
            ctx->pc = 0x802DC354u;
            return;
    }

label_802D2DFC:
    ctx->pc = 0x802D2DFCu;
    ctx->downcount -= 2;
    // 802D2DFC: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2E00:
    ctx->pc = 0x802D2E00u;
    // 802D2E00: bl      0x802DC45C
    {
            ctx->lr = 0x802D2E04u;
            ctx->pc = 0x802DC45Cu;
            return;
    }

label_802D2E04:
    ctx->pc = 0x802D2E04u;
    ctx->downcount -= 6;
    // 802D2E04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2E08:
    ctx->pc = 0x802D2E08u;
    // 802D2E08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2E0C:
    ctx->pc = 0x802D2E0Cu;
    // 802D2E0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2E10:
    ctx->pc = 0x802D2E10u;
    // 802D2E10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2E14:
    ctx->pc = 0x802D2E14u;
    // 802D2E14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2E18:
    ctx->pc = 0x802D2E18u;
    ctx->downcount -= 7;
    // 802D2E18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2E1C:
    ctx->pc = 0x802D2E1Cu;
    // 802D2E1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2E20:
    ctx->pc = 0x802D2E20u;
    // 802D2E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2E24:
    ctx->pc = 0x802D2E24u;
    // 802D2E24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2E28:
    ctx->pc = 0x802D2E28u;
    // 802D2E28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2E2C:
    ctx->pc = 0x802D2E2Cu;
    // 802D2E2C: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2E30:
    ctx->pc = 0x802D2E30u;
    // 802D2E30: bl      0x802DC470
    {
            ctx->lr = 0x802D2E34u;
            ctx->pc = 0x802DC470u;
            return;
    }

label_802D2E34:
    ctx->pc = 0x802D2E34u;
    ctx->downcount -= 5;
    // 802D2E34: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2E38:
    ctx->pc = 0x802D2E38u;
    // 802D2E38: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2E3C:
    ctx->pc = 0x802D2E3Cu;
    // 802D2E3C: lwz     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802D2E40:
    ctx->pc = 0x802D2E40u;
    // 802D2E40: lwz     r6, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D2E44:
    ctx->pc = 0x802D2E44u;
    // 802D2E44: bl      0x802DC3D4
    {
            ctx->lr = 0x802D2E48u;
            ctx->pc = 0x802DC3D4u;
            return;
    }

label_802D2E48:
    ctx->pc = 0x802D2E48u;
    ctx->downcount -= 4;
    // 802D2E48: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2E4C:
    ctx->pc = 0x802D2E4Cu;
    // 802D2E4C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2E50:
    ctx->pc = 0x802D2E50u;
    // 802D2E50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802D2E54:
    ctx->pc = 0x802D2E54u;
    // 802D2E54: bl      0x802DC2D4
    {
            ctx->lr = 0x802D2E58u;
            ctx->pc = 0x802DC2D4u;
            return;
    }

label_802D2E58:
    ctx->pc = 0x802D2E58u;
    ctx->downcount -= 6;
    // 802D2E58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2E5C:
    ctx->pc = 0x802D2E5Cu;
    // 802D2E5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2E60:
    ctx->pc = 0x802D2E60u;
    // 802D2E60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2E64:
    ctx->pc = 0x802D2E64u;
    // 802D2E64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2E68:
    ctx->pc = 0x802D2E68u;
    // 802D2E68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2E6C:
    ctx->pc = 0x802D2E6Cu;
    ctx->downcount -= 18;
    // 802D2E6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2E70:
    ctx->pc = 0x802D2E70u;
    // 802D2E70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2E74:
    ctx->pc = 0x802D2E74u;
    // 802D2E74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2E78:
    ctx->pc = 0x802D2E78u;
    // 802D2E78: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D2E7C:
    ctx->pc = 0x802D2E7Cu;
    // 802D2E7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2E80:
    ctx->pc = 0x802D2E80u;
    // 802D2E80: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2E84:
    ctx->pc = 0x802D2E84u;
    // 802D2E84: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2E88:
    ctx->pc = 0x802D2E88u;
    // 802D2E88: bl      0x802DC54C
    {
            ctx->lr = 0x802D2E8Cu;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2E8C:
    ctx->pc = 0x802D2E8Cu;
    ctx->downcount -= 5;
    // 802D2E8C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802D2E90:
    ctx->pc = 0x802D2E90u;
    // 802D2E90: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802D2E94:
    ctx->pc = 0x802D2E94u;
    // 802D2E94: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2E98:
    ctx->pc = 0x802D2E98u;
    // 802D2E98: stw     r3, 172(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D2E9C:
    ctx->pc = 0x802D2E9Cu;
    // 802D2E9C: bl      0x802F3464
    {
            ctx->lr = 0x802D2EA0u;
            ctx->pc = 0x802F3464u;
            return;
    }

label_802D2EA0:
    ctx->pc = 0x802D2EA0u;
    ctx->downcount -= 16;
    // 802D2EA0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D2EA4:
    ctx->pc = 0x802D2EA4u;
    // 802D2EA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2EA8:
    ctx->pc = 0x802D2EA8u;
    // 802D2EA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2EAC:
    ctx->pc = 0x802D2EACu;
    // 802D2EAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2EB0:
    ctx->pc = 0x802D2EB0u;
    // 802D2EB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2EB4:
    ctx->pc = 0x802D2EB4u;
    ctx->downcount -= 5;
    // 802D2EB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2EB8:
    ctx->pc = 0x802D2EB8u;
    // 802D2EB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2EBC:
    ctx->pc = 0x802D2EBCu;
    // 802D2EBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2EC0:
    ctx->pc = 0x802D2EC0u;
    // 802D2EC0: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2EC4:
    ctx->pc = 0x802D2EC4u;
    // 802D2EC4: bl      0x802DC54C
    {
            ctx->lr = 0x802D2EC8u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2EC8:
    ctx->pc = 0x802D2EC8u;
    ctx->downcount -= 6;
    // 802D2EC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2ECC:
    ctx->pc = 0x802D2ECCu;
    // 802D2ECC: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D2ED0:
    ctx->pc = 0x802D2ED0u;
    // 802D2ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2ED4:
    ctx->pc = 0x802D2ED4u;
    // 802D2ED4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2ED8:
    ctx->pc = 0x802D2ED8u;
    // 802D2ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2EDC:
    ctx->pc = 0x802D2EDCu;
    ctx->downcount -= 5;
    // 802D2EDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2EE0:
    ctx->pc = 0x802D2EE0u;
    // 802D2EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2EE4:
    ctx->pc = 0x802D2EE4u;
    // 802D2EE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2EE8:
    ctx->pc = 0x802D2EE8u;
    // 802D2EE8: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2EEC:
    ctx->pc = 0x802D2EECu;
    // 802D2EEC: bl      0x802DC54C
    {
            ctx->lr = 0x802D2EF0u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2EF0:
    ctx->pc = 0x802D2EF0u;
    ctx->downcount -= 6;
    // 802D2EF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2EF4:
    ctx->pc = 0x802D2EF4u;
    // 802D2EF4: lwz     r3, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2EF8:
    ctx->pc = 0x802D2EF8u;
    // 802D2EF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2EFC:
    ctx->pc = 0x802D2EFCu;
    // 802D2EFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2F00:
    ctx->pc = 0x802D2F00u;
    // 802D2F00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2F04:
    ctx->pc = 0x802D2F04u;
    ctx->downcount -= 7;
    // 802D2F04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2F08:
    ctx->pc = 0x802D2F08u;
    // 802D2F08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2F0C:
    ctx->pc = 0x802D2F0Cu;
    // 802D2F0C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2F10:
    ctx->pc = 0x802D2F10u;
    // 802D2F10: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2F14:
    ctx->pc = 0x802D2F14u;
    // 802D2F14: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D2F18:
    ctx->pc = 0x802D2F18u;
    // 802D2F18: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2F1C:
    ctx->pc = 0x802D2F1Cu;
    // 802D2F1C: bl      0x802DC54C
    {
            ctx->lr = 0x802D2F20u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2F20:
    ctx->pc = 0x802D2F20u;
    ctx->downcount -= 5;
    // 802D2F20: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802D2F24:
    ctx->pc = 0x802D2F24u;
    // 802D2F24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802D2F28:
    ctx->pc = 0x802D2F28u;
    // 802D2F28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D2F2C:
    ctx->pc = 0x802D2F2Cu;
    // 802D2F2C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802D2F30:
    ctx->downcount -= 4;
    // 802D2F30: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D2F34:
    ctx->pc = 0x802D2F34u;
    // 802D2F34: lwz     r0, 172(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2F38:
    // 802D2F38: cmplw   r3, r0
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D2F3C:
    // 802D2F3C: bc    4, 2, 0x802D2F48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D2F48;
        }
    }

label_802D2F40:
    ctx->downcount -= 2;
    // 802D2F40: or   r3, r6, r6
    {
        ctx->gpr[3] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2F44:
    // 802D2F44: b       0x802D2F58
    {
            goto label_802D2F58;
    }

label_802D2F48:
    ctx->downcount -= 3;
    // 802D2F48: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802D2F4C:
    // 802D2F4C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802D2F50:
    // 802D2F50: bc    16, 0, 0x802D2F30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D2F30u;
                return;
            }
            goto label_802D2F30;
        }
    }

label_802D2F54:
    ctx->pc = 0x802D2F54u;
    ctx->downcount -= 1;
    // 802D2F54: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_802D2F58:
    ctx->pc = 0x802D2F58u;
    ctx->downcount -= 6;
    // 802D2F58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2F5C:
    ctx->pc = 0x802D2F5Cu;
    // 802D2F5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2F60:
    ctx->pc = 0x802D2F60u;
    // 802D2F60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2F64:
    ctx->pc = 0x802D2F64u;
    // 802D2F64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2F68:
    ctx->pc = 0x802D2F68u;
    // 802D2F68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2F6C:
    ctx->pc = 0x802D2F6Cu;
    ctx->downcount -= 9;
    // 802D2F6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2F70:
    ctx->pc = 0x802D2F70u;
    // 802D2F70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2F74:
    ctx->pc = 0x802D2F74u;
    // 802D2F74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2F78:
    ctx->pc = 0x802D2F78u;
    // 802D2F78: stfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D2F78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_802D2F7C:
    ctx->pc = 0x802D2F7Cu;
    // 802D2F7C: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x802D2F7Cu)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_802D2F80:
    ctx->pc = 0x802D2F80u;
    // 802D2F80: stw     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802D2F84:
    ctx->pc = 0x802D2F84u;
    // 802D2F84: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802D2F88:
    ctx->pc = 0x802D2F88u;
    // 802D2F88: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2F8C:
    ctx->pc = 0x802D2F8Cu;
    // 802D2F8C: bl      0x802DC54C
    {
            ctx->lr = 0x802D2F90u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2F90:
    ctx->pc = 0x802D2F90u;
    ctx->downcount -= 3;
    // 802D2F90: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x802D2F90u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_802D2F94:
    ctx->pc = 0x802D2F94u;
    // 802D2F94: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D2F98:
    ctx->pc = 0x802D2F98u;
    // 802D2F98: bl      0x802F32E0
    {
            ctx->lr = 0x802D2F9Cu;
            ctx->pc = 0x802F32E0u;
            return;
    }

label_802D2F9C:
    ctx->pc = 0x802D2F9Cu;
    ctx->downcount -= 7;
    // 802D2F9C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2FA0:
    ctx->pc = 0x802D2FA0u;
    // 802D2FA0: lfd     f31, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802D2FA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802D2FA4:
    ctx->pc = 0x802D2FA4u;
    // 802D2FA4: lwz     r31, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802D2FA8:
    ctx->pc = 0x802D2FA8u;
    // 802D2FA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2FAC:
    ctx->pc = 0x802D2FACu;
    // 802D2FAC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D2FB0:
    ctx->pc = 0x802D2FB0u;
    // 802D2FB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2FB4:
    ctx->pc = 0x802D2FB4u;
    ctx->downcount -= 5;
    // 802D2FB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D2FB8:
    ctx->pc = 0x802D2FB8u;
    // 802D2FB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D2FBC:
    ctx->pc = 0x802D2FBCu;
    // 802D2FBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D2FC0:
    ctx->pc = 0x802D2FC0u;
    // 802D2FC0: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2FC4:
    ctx->pc = 0x802D2FC4u;
    // 802D2FC4: bl      0x802DC54C
    {
            ctx->lr = 0x802D2FC8u;
            ctx->pc = 0x802DC54Cu;
            return;
    }

label_802D2FC8:
    ctx->pc = 0x802D2FC8u;
    ctx->downcount -= 7;
    // 802D2FC8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802D2FCC:
    ctx->pc = 0x802D2FCCu;
    // 802D2FCC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802D2FD0:
    ctx->pc = 0x802D2FD0u;
    // 802D2FD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D2FD4:
    ctx->pc = 0x802D2FD4u;
    // 802D2FD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D2FD8:
    ctx->pc = 0x802D2FD8u;
    // 802D2FD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802D2FDC:
    ctx->pc = 0x802D2FDCu;
    // 802D2FDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2FE0:
    ctx->pc = 0x802D2FE0u;
    ctx->downcount -= 2;
    // 802D2FE0: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D2FE4:
    ctx->pc = 0x802D2FE4u;
    // 802D2FE4: b       0x802DC284
    {
            ctx->pc = 0x802DC284u;
            return;
    }

label_802D2FE8:
    ctx->pc = 0x802D2FE8u;
    ctx->downcount -= 2;
    // 802D2FE8: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_802D2FEC:
    ctx->pc = 0x802D2FECu;
    // 802D2FEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D2FF0:
    ctx->pc = 0x802D2FF0u;
    ctx->downcount -= 5;
    // 802D2FF0: lwz     r8, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_802D2FF4:
    ctx->pc = 0x802D2FF4u;
    // 802D2FF4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802D2FF8:
    ctx->pc = 0x802D2FF8u;
    // 802D2FF8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_802D2FFC:
    ctx->pc = 0x802D2FFCu;
    // 802D2FFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802D3000:
    ctx->pc = 0x802D3000u;
    // 802D3000: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802D3004:
    ctx->downcount -= 4;
    // 802D3004: add   r5, r8, r4
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802D3008:
    ctx->pc = 0x802D3008u;
    // 802D3008: lwz     r7, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802D300C:
    // 802D300C: cmpwi   r7, 0
    {
        s32 val_a = (s32)(ctx->gpr[7]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3010:
    // 802D3010: bc    12, 2, 0x802D3048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D3048;
        }
    }

label_802D3014:
    ctx->downcount -= 4;
    // 802D3014: li      r11, 1
    ctx->gpr[11] = (u32)(s32)(1);

label_802D3018:
    // 802D3018: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802D301C:
    ctx->pc = 0x802D301Cu;
    // 802D301C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802D3020:
    ctx->downcount -= 4;
    // 802D3020: add   r6, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802D3024:
    ctx->pc = 0x802D3024u;
    // 802D3024: lwz     r6, 172(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(172);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802D3028:
    // 802D3028: cmplw   r7, r6
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D302C:
    // 802D302C: bc    4, 2, 0x802D3034
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D3034;
        }
    }

label_802D3030:
    ctx->downcount -= 1;
    // 802D3030: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_802D3034:
    ctx->downcount -= 2;
    // 802D3034: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_802D3038:
    // 802D3038: bc    16, 0, 0x802D3020
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D3020u;
                return;
            }
            goto label_802D3020;
        }
    }

label_802D303C:
    ctx->downcount -= 2;
    // 802D303C: cmpwi   r11, 0
    {
        s32 val_a = (s32)(ctx->gpr[11]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3040:
    // 802D3040: bc    12, 2, 0x802D3048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D3048;
        }
    }

label_802D3044:
    ctx->downcount -= 1;
    // 802D3044: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_802D3048:
    ctx->downcount -= 4;
    // 802D3048: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_802D304C:
    // 802D304C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802D3050:
    // 802D3050: cmpwi   r10, 200
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(200);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3054:
    // 802D3054: bc    12, 0, 0x802D3004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D3004u;
                return;
            }
            goto label_802D3004;
        }
    }

label_802D3058:
    ctx->pc = 0x802D3058u;
    ctx->downcount -= 2;
    // 802D3058: or   r3, r9, r9
    {
        ctx->gpr[3] = ctx->gpr[9] | ctx->gpr[9];
    }

label_802D305C:
    ctx->pc = 0x802D305Cu;
    // 802D305C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D3060:
    ctx->pc = 0x802D3060u;
    ctx->downcount -= 18;
    // 802D3060: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D3064:
    ctx->pc = 0x802D3064u;
    // 802D3064: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D3068:
    ctx->pc = 0x802D3068u;
    // 802D3068: cmpwi   r4, 0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D306C:
    ctx->pc = 0x802D306Cu;
    // 802D306C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D3070:
    ctx->pc = 0x802D3070u;
    // 802D3070: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D3074:
    ctx->pc = 0x802D3074u;
    // 802D3074: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D3078:
    ctx->pc = 0x802D3078u;
    // 802D3078: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D307C:
    ctx->pc = 0x802D307Cu;
    // 802D307C: bc    4, 2, 0x802D30DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802D30DC;
        }
    }

label_802D3080:
    ctx->pc = 0x802D3080u;
    ctx->downcount -= 2;
    // 802D3080: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802D3084:
    ctx->pc = 0x802D3084u;
    // 802D3084: b       0x802D30CC
    {
            goto label_802D30CC;
    }

label_802D3088:
    ctx->downcount -= 2;
    // 802D3088: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D308C:
    // 802D308C: bl      0x802D7510
    {
            ctx->lr = 0x802D3090u;
            ctx->pc = 0x802D7510u;
            return;
    }

label_802D3090:
    ctx->pc = 0x802D3090u;
    ctx->downcount -= 3;
    // 802D3090: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D3094:
    // 802D3094: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3098:
    // 802D3098: bc    12, 1, 0x802D30C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D30C8;
        }
    }

label_802D309C:
    ctx->downcount -= 2;
    // 802D309C: addi    r3, r3, 176
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(176);

label_802D30A0:
    // 802D30A0: bl      0x802F3B64
    {
            ctx->lr = 0x802D30A4u;
            ctx->pc = 0x802F3B64u;
            return;
    }

label_802D30A4:
    ctx->pc = 0x802D30A4u;
    ctx->downcount -= 5;
    // 802D30A4: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802D30A8:
    // 802D30A8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802D30AC:
    ctx->pc = 0x802D30ACu;
    // 802D30AC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802D30B0:
    // 802D30B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D30B4:
    // 802D30B4: bl      0x80246F34
    {
            ctx->lr = 0x802D30B8u;
            ctx->pc = 0x80246F34u;
            return;
    }

label_802D30B8:
    ctx->downcount -= 2;
    // 802D30B8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D30BC:
    // 802D30BC: bc    12, 2, 0x802D30C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D30C8;
        }
    }

label_802D30C0:
    ctx->downcount -= 2;
    // 802D30C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802D30C4:
    // 802D30C4: b       0x802D30E0
    {
            goto label_802D30E0;
    }

label_802D30C8:
    ctx->downcount -= 1;
    // 802D30C8: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802D30CC:
    ctx->pc = 0x802D30CCu;
    ctx->downcount -= 4;
    // 802D30CC: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D30D0:
    ctx->pc = 0x802D30D0u;
    // 802D30D0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D30D4:
    // 802D30D4: cmpw    r31, r0
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D30D8:
    // 802D30D8: bc    12, 0, 0x802D3088
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D3088u;
                return;
            }
            goto label_802D3088;
        }
    }

label_802D30DC:
    ctx->pc = 0x802D30DCu;
    ctx->downcount -= 1;
    // 802D30DC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_802D30E0:
    ctx->pc = 0x802D30E0u;
    ctx->downcount -= 16;
    // 802D30E0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802D30E4:
    ctx->pc = 0x802D30E4u;
    // 802D30E4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D30E8:
    ctx->pc = 0x802D30E8u;
    // 802D30E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802D30EC:
    ctx->pc = 0x802D30ECu;
    // 802D30EC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802D30F0:
    ctx->pc = 0x802D30F0u;
    // 802D30F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802CF1C0;
        }
    }

label_802D30F4:
    ctx->pc = 0x802D30F4u;
    ctx->downcount -= 19;
    // 802D30F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802D30F8:
    ctx->pc = 0x802D30F8u;
    // 802D30F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802D30FC:
    ctx->pc = 0x802D30FCu;
    // 802D30FC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802D3100:
    ctx->pc = 0x802D3100u;
    // 802D3100: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802D3104:
    ctx->pc = 0x802D3104u;
    // 802D3104: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D3108:
    ctx->pc = 0x802D3108u;
    // 802D3108: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802D310C:
    ctx->pc = 0x802D310Cu;
    // 802D310C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802D3110:
    ctx->pc = 0x802D3110u;
    // 802D3110: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D3114:
    ctx->pc = 0x802D3114u;
    // 802D3114: bl      0x802DC5D8
    {
            ctx->lr = 0x802D3118u;
            ctx->pc = 0x802DC5D8u;
            return;
    }

label_802D3118:
    ctx->pc = 0x802D3118u;
    ctx->downcount -= 2;
    // 802D3118: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D311C:
    ctx->pc = 0x802D311Cu;
    // 802D311C: bl      0x802D75A4
    {
            ctx->lr = 0x802D3120u;
            ctx->pc = 0x802D75A4u;
            return;
    }

label_802D3120:
    ctx->pc = 0x802D3120u;
    ctx->downcount -= 3;
    // 802D3120: cmpwi   r30, 0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3124:
    ctx->pc = 0x802D3124u;
    // 802D3124: stw     r30, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802D3128:
    ctx->pc = 0x802D3128u;
    // 802D3128: bc    12, 2, 0x802D3150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D3150;
        }
    }

label_802D312C:
    ctx->pc = 0x802D312Cu;
    ctx->downcount -= 2;
    // 802D312C: cmpwi   r30, 1
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3130:
    ctx->pc = 0x802D3130u;
    // 802D3130: bc    12, 2, 0x802D319C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D319C;
        }
    }

label_802D3134:
    ctx->pc = 0x802D3134u;
    ctx->downcount -= 2;
    // 802D3134: cmpwi   r30, 2
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3138:
    ctx->pc = 0x802D3138u;
    // 802D3138: bc    12, 2, 0x802D31E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x802D31E8u;
            return;
        }
    }

label_802D313C:
    ctx->pc = 0x802D313Cu;
    ctx->downcount -= 2;
    // 802D313C: cmpwi   r30, 3
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3140:
    ctx->pc = 0x802D3140u;
    // 802D3140: bc    12, 2, 0x802D3234
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x802D3234u;
            return;
        }
    }

label_802D3144:
    ctx->pc = 0x802D3144u;
    ctx->downcount -= 2;
    // 802D3144: cmpwi   r30, 4
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3148:
    ctx->pc = 0x802D3148u;
    // 802D3148: bc    12, 2, 0x802D3280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x802D3280u;
            return;
        }
    }

label_802D314C:
    ctx->pc = 0x802D314Cu;
    ctx->downcount -= 1;
    // 802D314C: b       0x802D32A8
    {
            ctx->pc = 0x802D32A8u;
            return;
    }

label_802D3150:
    ctx->pc = 0x802D3150u;
    ctx->downcount -= 2;
    // 802D3150: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802D3154:
    ctx->pc = 0x802D3154u;
    // 802D3154: b       0x802D3188
    {
            goto label_802D3188;
    }

label_802D3158:
    ctx->downcount -= 2;
    // 802D3158: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D315C:
    // 802D315C: bl      0x802D7510
    {
            ctx->lr = 0x802D3160u;
            ctx->pc = 0x802D7510u;
            return;
    }

label_802D3160:
    ctx->pc = 0x802D3160u;
    ctx->downcount -= 3;
    // 802D3160: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D3164:
    // 802D3164: cmplwi  r0, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3168:
    // 802D3168: bc    12, 1, 0x802D3184
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802D3184;
        }
    }

label_802D316C:
    ctx->pc = 0x802D316Cu;
    ctx->downcount -= 3;
    // 802D316C: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D3170:
    // 802D3170: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D3174:
    // 802D3174: bl      0x802D7510
    {
            ctx->lr = 0x802D3178u;
            ctx->pc = 0x802D7510u;
            return;
    }

label_802D3178:
    ctx->downcount -= 3;
    // 802D3178: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802D317C:
    ctx->pc = 0x802D317Cu;
    // 802D317C: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D3180:
    // 802D3180: bl      0x802DC5A4
    {
            ctx->lr = 0x802D3184u;
            ctx->pc = 0x802DC5A4u;
            return;
    }

label_802D3184:
    ctx->downcount -= 1;
    // 802D3184: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802D3188:
    ctx->pc = 0x802D3188u;
    ctx->downcount -= 4;
    // 802D3188: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D318C:
    ctx->pc = 0x802D318Cu;
    // 802D318C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D3190:
    // 802D3190: cmpw    r30, r0
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D3194:
    // 802D3194: bc    12, 0, 0x802D3158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802D3158u;
                return;
            }
            goto label_802D3158;
        }
    }

label_802D3198:
    ctx->pc = 0x802D3198u;
    ctx->downcount -= 1;
    // 802D3198: b       0x802D32A8
    {
            ctx->pc = 0x802D32A8u;
            return;
    }

label_802D319C:
    ctx->pc = 0x802D319Cu;
    ctx->downcount -= 2;
    // 802D319C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802D31A0:
    ctx->pc = 0x802D31A0u;
    // 802D31A0: b       0x802D31D4
    {
            ctx->pc = 0x802D31D4u;
            return;
    }

label_802D31A4:
    ctx->pc = 0x802D31A4u;
    ctx->downcount -= 2;
    // 802D31A4: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802D31A8:
    ctx->pc = 0x802D31A8u;
    // 802D31A8: bl      0x802D7510
    {
            ctx->lr = 0x802D31ACu;
            ctx->pc = 0x802D7510u;
            return;
    }

label_802D31AC:
    ctx->pc = 0x802D31ACu;
    ctx->downcount -= 3;
    // 802D31AC: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802D31B0:
    ctx->pc = 0x802D31B0u;
    // 802D31B0: cmplwi  r0, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802D31B4:
    ctx->pc = 0x802D31B4u;
    // 802D31B4: bc    12, 1, 0x802D31D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x802D31D0u;
            return;
        }
    }

label_802D31B8:
    ctx->pc = 0x802D31B8u;
    ctx->downcount -= 2;
    // 802D31B8: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802D31BC:
    ctx->pc = 0x802D31BCu;
    // 802D31BC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

    ctx->pc = 0x802D31C0u;
    return;
return_dispatch_802CF1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x802CF1C8u: goto label_802CF1C8;
    case 0x802CF1DCu: goto label_802CF1DC;
    case 0x802CF1E4u: goto label_802CF1E4;
    case 0x802CF1F4u: goto label_802CF1F4;
    case 0x802CF214u: goto label_802CF214;
    case 0x802CF224u: goto label_802CF224;
    case 0x802CF248u: goto label_802CF248;
    case 0x802CF270u: goto label_802CF270;
    case 0x802CF278u: goto label_802CF278;
    case 0x802CF294u: goto label_802CF294;
    case 0x802CF2A0u: goto label_802CF2A0;
    case 0x802CF2A8u: goto label_802CF2A8;
    case 0x802CF2B8u: goto label_802CF2B8;
    case 0x802CF2C0u: goto label_802CF2C0;
    case 0x802CF2CCu: goto label_802CF2CC;
    case 0x802CF2D0u: goto label_802CF2D0;
    case 0x802CF2E4u: goto label_802CF2E4;
    case 0x802CF2FCu: goto label_802CF2FC;
    case 0x802CF304u: goto label_802CF304;
    case 0x802CF31Cu: goto label_802CF31C;
    case 0x802CF32Cu: goto label_802CF32C;
    case 0x802CF338u: goto label_802CF338;
    case 0x802CF33Cu: goto label_802CF33C;
    case 0x802CF348u: goto label_802CF348;
    case 0x802CF354u: goto label_802CF354;
    case 0x802CF358u: goto label_802CF358;
    case 0x802CF36Cu: goto label_802CF36C;
    case 0x802CF370u: goto label_802CF370;
    case 0x802CF384u: goto label_802CF384;
    case 0x802CF394u: goto label_802CF394;
    case 0x802CF3A0u: goto label_802CF3A0;
    case 0x802CF3A4u: goto label_802CF3A4;
    case 0x802CF3ACu: goto label_802CF3AC;
    case 0x802CF410u: goto label_802CF410;
    case 0x802CF434u: goto label_802CF434;
    case 0x802CF478u: goto label_802CF478;
    case 0x802CF494u: goto label_802CF494;
    case 0x802CF514u: goto label_802CF514;
    case 0x802CF520u: goto label_802CF520;
    case 0x802CF524u: goto label_802CF524;
    case 0x802CF534u: goto label_802CF534;
    case 0x802CF540u: goto label_802CF540;
    case 0x802CF544u: goto label_802CF544;
    case 0x802CF550u: goto label_802CF550;
    case 0x802CF59Cu: goto label_802CF59C;
    case 0x802CF5B4u: goto label_802CF5B4;
    case 0x802CF5CCu: goto label_802CF5CC;
    case 0x802CF5E4u: goto label_802CF5E4;
    case 0x802CF5FCu: goto label_802CF5FC;
    case 0x802CF614u: goto label_802CF614;
    case 0x802CF62Cu: goto label_802CF62C;
    case 0x802CF644u: goto label_802CF644;
    case 0x802CF65Cu: goto label_802CF65C;
    case 0x802CF674u: goto label_802CF674;
    case 0x802CF68Cu: goto label_802CF68C;
    case 0x802CF6A4u: goto label_802CF6A4;
    case 0x802CF6BCu: goto label_802CF6BC;
    case 0x802CF6D4u: goto label_802CF6D4;
    case 0x802CF6ECu: goto label_802CF6EC;
    case 0x802CF704u: goto label_802CF704;
    case 0x802CF71Cu: goto label_802CF71C;
    case 0x802CF72Cu: goto label_802CF72C;
    case 0x802CF734u: goto label_802CF734;
    case 0x802CF774u: goto label_802CF774;
    case 0x802CF780u: goto label_802CF780;
    case 0x802CF788u: goto label_802CF788;
    case 0x802CF7B0u: goto label_802CF7B0;
    case 0x802CF7BCu: goto label_802CF7BC;
    case 0x802CF7C4u: goto label_802CF7C4;
    case 0x802CF7D4u: goto label_802CF7D4;
    case 0x802CF804u: goto label_802CF804;
    case 0x802CF83Cu: goto label_802CF83C;
    case 0x802CF840u: goto label_802CF840;
    case 0x802CF854u: goto label_802CF854;
    case 0x802CF898u: goto label_802CF898;
    case 0x802CF8A4u: goto label_802CF8A4;
    case 0x802CF8A8u: goto label_802CF8A8;
    case 0x802CF8DCu: goto label_802CF8DC;
    case 0x802CF8ECu: goto label_802CF8EC;
    case 0x802CF8F8u: goto label_802CF8F8;
    case 0x802CF8FCu: goto label_802CF8FC;
    case 0x802CF908u: goto label_802CF908;
    case 0x802CF910u: goto label_802CF910;
    case 0x802CF924u: goto label_802CF924;
    case 0x802CF930u: goto label_802CF930;
    case 0x802CF934u: goto label_802CF934;
    case 0x802CF940u: goto label_802CF940;
    case 0x802CF948u: goto label_802CF948;
    case 0x802CF970u: goto label_802CF970;
    case 0x802CF97Cu: goto label_802CF97C;
    case 0x802CF980u: goto label_802CF980;
    case 0x802CF98Cu: goto label_802CF98C;
    case 0x802CF994u: goto label_802CF994;
    case 0x802CF9F8u: goto label_802CF9F8;
    case 0x802CFA30u: goto label_802CFA30;
    case 0x802CFA48u: goto label_802CFA48;
    case 0x802CFA5Cu: goto label_802CFA5C;
    case 0x802CFA70u: goto label_802CFA70;
    case 0x802CFAC8u: goto label_802CFAC8;
    case 0x802CFAD4u: goto label_802CFAD4;
    case 0x802CFAE4u: goto label_802CFAE4;
    case 0x802CFB30u: goto label_802CFB30;
    case 0x802CFB3Cu: goto label_802CFB3C;
    case 0x802CFB4Cu: goto label_802CFB4C;
    case 0x802CFB8Cu: goto label_802CFB8C;
    case 0x802CFBCCu: goto label_802CFBCC;
    case 0x802CFC54u: goto label_802CFC54;
    case 0x802CFC5Cu: goto label_802CFC5C;
    case 0x802CFC70u: goto label_802CFC70;
    case 0x802CFCB0u: goto label_802CFCB0;
    case 0x802CFCCCu: goto label_802CFCCC;
    case 0x802CFCE0u: goto label_802CFCE0;
    case 0x802CFD20u: goto label_802CFD20;
    case 0x802CFD30u: goto label_802CFD30;
    case 0x802CFD68u: goto label_802CFD68;
    case 0x802CFD78u: goto label_802CFD78;
    case 0x802CFDA8u: goto label_802CFDA8;
    case 0x802CFDB0u: goto label_802CFDB0;
    case 0x802CFDE8u: goto label_802CFDE8;
    case 0x802CFDF0u: goto label_802CFDF0;
    case 0x802CFE00u: goto label_802CFE00;
    case 0x802CFE38u: goto label_802CFE38;
    case 0x802CFE48u: goto label_802CFE48;
    case 0x802CFE50u: goto label_802CFE50;
    case 0x802CFE5Cu: goto label_802CFE5C;
    case 0x802CFEA4u: goto label_802CFEA4;
    case 0x802CFEC0u: goto label_802CFEC0;
    case 0x802CFED8u: goto label_802CFED8;
    case 0x802CFEE4u: goto label_802CFEE4;
    case 0x802CFEFCu: goto label_802CFEFC;
    case 0x802CFF04u: goto label_802CFF04;
    case 0x802CFF18u: goto label_802CFF18;
    case 0x802CFF50u: goto label_802CFF50;
    case 0x802CFF68u: goto label_802CFF68;
    case 0x802CFF78u: goto label_802CFF78;
    case 0x802CFF90u: goto label_802CFF90;
    case 0x802CFFA0u: goto label_802CFFA0;
    case 0x802CFFB8u: goto label_802CFFB8;
    case 0x802CFFD0u: goto label_802CFFD0;
    case 0x802D0018u: goto label_802D0018;
    case 0x802D0024u: goto label_802D0024;
    case 0x802D0034u: goto label_802D0034;
    case 0x802D0070u: goto label_802D0070;
    case 0x802D0078u: goto label_802D0078;
    case 0x802D008Cu: goto label_802D008C;
    case 0x802D0098u: goto label_802D0098;
    case 0x802D00ACu: goto label_802D00AC;
    case 0x802D00E0u: goto label_802D00E0;
    case 0x802D0104u: goto label_802D0104;
    case 0x802D011Cu: goto label_802D011C;
    case 0x802D0134u: goto label_802D0134;
    case 0x802D01CCu: goto label_802D01CC;
    case 0x802D0208u: goto label_802D0208;
    case 0x802D0270u: goto label_802D0270;
    case 0x802D0278u: goto label_802D0278;
    case 0x802D0280u: goto label_802D0280;
    case 0x802D0288u: goto label_802D0288;
    case 0x802D0290u: goto label_802D0290;
    case 0x802D02CCu: goto label_802D02CC;
    case 0x802D02ECu: goto label_802D02EC;
    case 0x802D032Cu: goto label_802D032C;
    case 0x802D034Cu: goto label_802D034C;
    case 0x802D038Cu: goto label_802D038C;
    case 0x802D03ACu: goto label_802D03AC;
    case 0x802D044Cu: goto label_802D044C;
    case 0x802D0464u: goto label_802D0464;
    case 0x802D0478u: goto label_802D0478;
    case 0x802D0484u: goto label_802D0484;
    case 0x802D0490u: goto label_802D0490;
    case 0x802D04ACu: goto label_802D04AC;
    case 0x802D04C0u: goto label_802D04C0;
    case 0x802D04CCu: goto label_802D04CC;
    case 0x802D04D8u: goto label_802D04D8;
    case 0x802D04E4u: goto label_802D04E4;
    case 0x802D04F0u: goto label_802D04F0;
    case 0x802D050Cu: goto label_802D050C;
    case 0x802D051Cu: goto label_802D051C;
    case 0x802D0528u: goto label_802D0528;
    case 0x802D0534u: goto label_802D0534;
    case 0x802D0548u: goto label_802D0548;
    case 0x802D0554u: goto label_802D0554;
    case 0x802D0560u: goto label_802D0560;
    case 0x802D0574u: goto label_802D0574;
    case 0x802D0580u: goto label_802D0580;
    case 0x802D058Cu: goto label_802D058C;
    case 0x802D05A0u: goto label_802D05A0;
    case 0x802D05ACu: goto label_802D05AC;
    case 0x802D05B8u: goto label_802D05B8;
    case 0x802D05CCu: goto label_802D05CC;
    case 0x802D05D8u: goto label_802D05D8;
    case 0x802D05E4u: goto label_802D05E4;
    case 0x802D05F8u: goto label_802D05F8;
    case 0x802D0608u: goto label_802D0608;
    case 0x802D0610u: goto label_802D0610;
    case 0x802D0634u: goto label_802D0634;
    case 0x802D0664u: goto label_802D0664;
    case 0x802D06A0u: goto label_802D06A0;
    case 0x802D06C0u: goto label_802D06C0;
    case 0x802D06E0u: goto label_802D06E0;
    case 0x802D071Cu: goto label_802D071C;
    case 0x802D073Cu: goto label_802D073C;
    case 0x802D074Cu: goto label_802D074C;
    case 0x802D0788u: goto label_802D0788;
    case 0x802D07A8u: goto label_802D07A8;
    case 0x802D07B8u: goto label_802D07B8;
    case 0x802D07F4u: goto label_802D07F4;
    case 0x802D0814u: goto label_802D0814;
    case 0x802D0834u: goto label_802D0834;
    case 0x802D084Cu: goto label_802D084C;
    case 0x802D0864u: goto label_802D0864;
    case 0x802D087Cu: goto label_802D087C;
    case 0x802D0890u: goto label_802D0890;
    case 0x802D08A8u: goto label_802D08A8;
    case 0x802D08ACu: goto label_802D08AC;
    case 0x802D08C0u: goto label_802D08C0;
    case 0x802D08D8u: goto label_802D08D8;
    case 0x802D08F4u: goto label_802D08F4;
    case 0x802D0910u: goto label_802D0910;
    case 0x802D0924u: goto label_802D0924;
    case 0x802D092Cu: goto label_802D092C;
    case 0x802D0968u: goto label_802D0968;
    case 0x802D0978u: goto label_802D0978;
    case 0x802D0988u: goto label_802D0988;
    case 0x802D09C8u: goto label_802D09C8;
    case 0x802D09D0u: goto label_802D09D0;
    case 0x802D09E4u: goto label_802D09E4;
    case 0x802D09ECu: goto label_802D09EC;
    case 0x802D0A2Cu: goto label_802D0A2C;
    case 0x802D0A34u: goto label_802D0A34;
    case 0x802D0A48u: goto label_802D0A48;
    case 0x802D0A50u: goto label_802D0A50;
    case 0x802D0A7Cu: goto label_802D0A7C;
    case 0x802D0A94u: goto label_802D0A94;
    case 0x802D0A9Cu: goto label_802D0A9C;
    case 0x802D0AB0u: goto label_802D0AB0;
    case 0x802D0AC4u: goto label_802D0AC4;
    case 0x802D0B0Cu: goto label_802D0B0C;
    case 0x802D0B28u: goto label_802D0B28;
    case 0x802D0B44u: goto label_802D0B44;
    case 0x802D0B60u: goto label_802D0B60;
    case 0x802D0B6Cu: goto label_802D0B6C;
    case 0x802D0B88u: goto label_802D0B88;
    case 0x802D0B90u: goto label_802D0B90;
    case 0x802D0B98u: goto label_802D0B98;
    case 0x802D0BA0u: goto label_802D0BA0;
    case 0x802D0BB8u: goto label_802D0BB8;
    case 0x802D0BC8u: goto label_802D0BC8;
    case 0x802D0BE4u: goto label_802D0BE4;
    case 0x802D0BF4u: goto label_802D0BF4;
    case 0x802D0C08u: goto label_802D0C08;
    case 0x802D0C18u: goto label_802D0C18;
    case 0x802D0C20u: goto label_802D0C20;
    case 0x802D0C30u: goto label_802D0C30;
    case 0x802D0C8Cu: goto label_802D0C8C;
    case 0x802D0C98u: goto label_802D0C98;
    case 0x802D0CA8u: goto label_802D0CA8;
    case 0x802D0CF0u: goto label_802D0CF0;
    case 0x802D0D00u: goto label_802D0D00;
    case 0x802D0D0Cu: goto label_802D0D0C;
    case 0x802D0D14u: goto label_802D0D14;
    case 0x802D0D88u: goto label_802D0D88;
    case 0x802D0DB8u: goto label_802D0DB8;
    case 0x802D0DC4u: goto label_802D0DC4;
    case 0x802D0DCCu: goto label_802D0DCC;
    case 0x802D0E40u: goto label_802D0E40;
    case 0x802D0E80u: goto label_802D0E80;
    case 0x802D0E90u: goto label_802D0E90;
    case 0x802D0E9Cu: goto label_802D0E9C;
    case 0x802D0EA4u: goto label_802D0EA4;
    case 0x802D0EE0u: goto label_802D0EE0;
    case 0x802D0F10u: goto label_802D0F10;
    case 0x802D0F1Cu: goto label_802D0F1C;
    case 0x802D0F24u: goto label_802D0F24;
    case 0x802D0F88u: goto label_802D0F88;
    case 0x802D0F94u: goto label_802D0F94;
    case 0x802D0F98u: goto label_802D0F98;
    case 0x802D0FF8u: goto label_802D0FF8;
    case 0x802D1004u: goto label_802D1004;
    case 0x802D1010u: goto label_802D1010;
    case 0x802D1024u: goto label_802D1024;
    case 0x802D1030u: goto label_802D1030;
    case 0x802D1094u: goto label_802D1094;
    case 0x802D10A4u: goto label_802D10A4;
    case 0x802D10ACu: goto label_802D10AC;
    case 0x802D10C8u: goto label_802D10C8;
    case 0x802D10E4u: goto label_802D10E4;
    case 0x802D1110u: goto label_802D1110;
    case 0x802D1118u: goto label_802D1118;
    case 0x802D1120u: goto label_802D1120;
    case 0x802D1128u: goto label_802D1128;
    case 0x802D1130u: goto label_802D1130;
    case 0x802D11C8u: goto label_802D11C8;
    case 0x802D11DCu: goto label_802D11DC;
    case 0x802D11F0u: goto label_802D11F0;
    case 0x802D1200u: goto label_802D1200;
    case 0x802D1208u: goto label_802D1208;
    case 0x802D1240u: goto label_802D1240;
    case 0x802D126Cu: goto label_802D126C;
    case 0x802D12A4u: goto label_802D12A4;
    case 0x802D12C0u: goto label_802D12C0;
    case 0x802D12D8u: goto label_802D12D8;
    case 0x802D12ECu: goto label_802D12EC;
    case 0x802D12F4u: goto label_802D12F4;
    case 0x802D130Cu: goto label_802D130C;
    case 0x802D1324u: goto label_802D1324;
    case 0x802D1338u: goto label_802D1338;
    case 0x802D1374u: goto label_802D1374;
    case 0x802D1390u: goto label_802D1390;
    case 0x802D13B8u: goto label_802D13B8;
    case 0x802D13C0u: goto label_802D13C0;
    case 0x802D13CCu: goto label_802D13CC;
    case 0x802D13E8u: goto label_802D13E8;
    case 0x802D13F0u: goto label_802D13F0;
    case 0x802D13FCu: goto label_802D13FC;
    case 0x802D143Cu: goto label_802D143C;
    case 0x802D1464u: goto label_802D1464;
    case 0x802D1478u: goto label_802D1478;
    case 0x802D1480u: goto label_802D1480;
    case 0x802D1490u: goto label_802D1490;
    case 0x802D14A0u: goto label_802D14A0;
    case 0x802D14B4u: goto label_802D14B4;
    case 0x802D14C4u: goto label_802D14C4;
    case 0x802D14D4u: goto label_802D14D4;
    case 0x802D14E0u: goto label_802D14E0;
    case 0x802D1540u: goto label_802D1540;
    case 0x802D154Cu: goto label_802D154C;
    case 0x802D1564u: goto label_802D1564;
    case 0x802D1570u: goto label_802D1570;
    case 0x802D1580u: goto label_802D1580;
    case 0x802D15CCu: goto label_802D15CC;
    case 0x802D15D8u: goto label_802D15D8;
    case 0x802D15E8u: goto label_802D15E8;
    case 0x802D1634u: goto label_802D1634;
    case 0x802D1640u: goto label_802D1640;
    case 0x802D1650u: goto label_802D1650;
    case 0x802D1698u: goto label_802D1698;
    case 0x802D16A4u: goto label_802D16A4;
    case 0x802D16B4u: goto label_802D16B4;
    case 0x802D16FCu: goto label_802D16FC;
    case 0x802D1708u: goto label_802D1708;
    case 0x802D1718u: goto label_802D1718;
    case 0x802D1764u: goto label_802D1764;
    case 0x802D1770u: goto label_802D1770;
    case 0x802D1780u: goto label_802D1780;
    case 0x802D17C0u: goto label_802D17C0;
    case 0x802D1800u: goto label_802D1800;
    case 0x802D1840u: goto label_802D1840;
    case 0x802D18C8u: goto label_802D18C8;
    case 0x802D18D0u: goto label_802D18D0;
    case 0x802D18E4u: goto label_802D18E4;
    case 0x802D1914u: goto label_802D1914;
    case 0x802D1934u: goto label_802D1934;
    case 0x802D1948u: goto label_802D1948;
    case 0x802D1990u: goto label_802D1990;
    case 0x802D199Cu: goto label_802D199C;
    case 0x802D19ACu: goto label_802D19AC;
    case 0x802D19F4u: goto label_802D19F4;
    case 0x802D19FCu: goto label_802D19FC;
    case 0x802D1A04u: goto label_802D1A04;
    case 0x802D1A0Cu: goto label_802D1A0C;
    case 0x802D1A14u: goto label_802D1A14;
    case 0x802D1A54u: goto label_802D1A54;
    case 0x802D1A70u: goto label_802D1A70;
    case 0x802D1A88u: goto label_802D1A88;
    case 0x802D1A94u: goto label_802D1A94;
    case 0x802D1AACu: goto label_802D1AAC;
    case 0x802D1AB4u: goto label_802D1AB4;
    case 0x802D1ADCu: goto label_802D1ADC;
    case 0x802D1AF4u: goto label_802D1AF4;
    case 0x802D1B00u: goto label_802D1B00;
    case 0x802D1B14u: goto label_802D1B14;
    case 0x802D1B20u: goto label_802D1B20;
    case 0x802D1B34u: goto label_802D1B34;
    case 0x802D1B68u: goto label_802D1B68;
    case 0x802D1B8Cu: goto label_802D1B8C;
    case 0x802D1BA4u: goto label_802D1BA4;
    case 0x802D1BBCu: goto label_802D1BBC;
    case 0x802D1C54u: goto label_802D1C54;
    case 0x802D1C90u: goto label_802D1C90;
    case 0x802D1CF0u: goto label_802D1CF0;
    case 0x802D1D10u: goto label_802D1D10;
    case 0x802D1D50u: goto label_802D1D50;
    case 0x802D1D70u: goto label_802D1D70;
    case 0x802D1DB0u: goto label_802D1DB0;
    case 0x802D1DD0u: goto label_802D1DD0;
    case 0x802D1E70u: goto label_802D1E70;
    case 0x802D1E98u: goto label_802D1E98;
    case 0x802D1ED0u: goto label_802D1ED0;
    case 0x802D1EF8u: goto label_802D1EF8;
    case 0x802D1F30u: goto label_802D1F30;
    case 0x802D1F58u: goto label_802D1F58;
    case 0x802D1F90u: goto label_802D1F90;
    case 0x802D1FB8u: goto label_802D1FB8;
    case 0x802D2008u: goto label_802D2008;
    case 0x802D2030u: goto label_802D2030;
    case 0x802D204Cu: goto label_802D204C;
    case 0x802D205Cu: goto label_802D205C;
    case 0x802D206Cu: goto label_802D206C;
    case 0x802D2080u: goto label_802D2080;
    case 0x802D2090u: goto label_802D2090;
    case 0x802D20A4u: goto label_802D20A4;
    case 0x802D20B4u: goto label_802D20B4;
    case 0x802D20C8u: goto label_802D20C8;
    case 0x802D20D8u: goto label_802D20D8;
    case 0x802D20E8u: goto label_802D20E8;
    case 0x802D20F4u: goto label_802D20F4;
    case 0x802D2100u: goto label_802D2100;
    case 0x802D210Cu: goto label_802D210C;
    case 0x802D2120u: goto label_802D2120;
    case 0x802D2130u: goto label_802D2130;
    case 0x802D2178u: goto label_802D2178;
    case 0x802D21A0u: goto label_802D21A0;
    case 0x802D21ACu: goto label_802D21AC;
    case 0x802D21C4u: goto label_802D21C4;
    case 0x802D21CCu: goto label_802D21CC;
    case 0x802D220Cu: goto label_802D220C;
    case 0x802D2214u: goto label_802D2214;
    case 0x802D2228u: goto label_802D2228;
    case 0x802D2268u: goto label_802D2268;
    case 0x802D228Cu: goto label_802D228C;
    case 0x802D22A4u: goto label_802D22A4;
    case 0x802D22BCu: goto label_802D22BC;
    case 0x802D2354u: goto label_802D2354;
    case 0x802D2394u: goto label_802D2394;
    case 0x802D240Cu: goto label_802D240C;
    case 0x802D2474u: goto label_802D2474;
    case 0x802D247Cu: goto label_802D247C;
    case 0x802D2484u: goto label_802D2484;
    case 0x802D248Cu: goto label_802D248C;
    case 0x802D2494u: goto label_802D2494;
    case 0x802D24D0u: goto label_802D24D0;
    case 0x802D24F0u: goto label_802D24F0;
    case 0x802D2530u: goto label_802D2530;
    case 0x802D2550u: goto label_802D2550;
    case 0x802D2590u: goto label_802D2590;
    case 0x802D25B0u: goto label_802D25B0;
    case 0x802D2614u: goto label_802D2614;
    case 0x802D261Cu: goto label_802D261C;
    case 0x802D2648u: goto label_802D2648;
    case 0x802D2698u: goto label_802D2698;
    case 0x802D26B0u: goto label_802D26B0;
    case 0x802D2710u: goto label_802D2710;
    case 0x802D272Cu: goto label_802D272C;
    case 0x802D273Cu: goto label_802D273C;
    case 0x802D274Cu: goto label_802D274C;
    case 0x802D2764u: goto label_802D2764;
    case 0x802D276Cu: goto label_802D276C;
    case 0x802D2774u: goto label_802D2774;
    case 0x802D27A4u: goto label_802D27A4;
    case 0x802D27B8u: goto label_802D27B8;
    case 0x802D2800u: goto label_802D2800;
    case 0x802D2814u: goto label_802D2814;
    case 0x802D285Cu: goto label_802D285C;
    case 0x802D2864u: goto label_802D2864;
    case 0x802D286Cu: goto label_802D286C;
    case 0x802D28A0u: goto label_802D28A0;
    case 0x802D28ACu: goto label_802D28AC;
    case 0x802D29DCu: goto label_802D29DC;
    case 0x802D2A1Cu: goto label_802D2A1C;
    case 0x802D2A38u: goto label_802D2A38;
    case 0x802D2A5Cu: goto label_802D2A5C;
    case 0x802D2A90u: goto label_802D2A90;
    case 0x802D2AA4u: goto label_802D2AA4;
    case 0x802D2AB8u: goto label_802D2AB8;
    case 0x802D2AFCu: goto label_802D2AFC;
    case 0x802D2B18u: goto label_802D2B18;
    case 0x802D2B48u: goto label_802D2B48;
    case 0x802D2B54u: goto label_802D2B54;
    case 0x802D2BB8u: goto label_802D2BB8;
    case 0x802D2C24u: goto label_802D2C24;
    case 0x802D2C30u: goto label_802D2C30;
    case 0x802D2CA4u: goto label_802D2CA4;
    case 0x802D2CD8u: goto label_802D2CD8;
    case 0x802D2D0Cu: goto label_802D2D0C;
    case 0x802D2D7Cu: goto label_802D2D7C;
    case 0x802D2DB0u: goto label_802D2DB0;
    case 0x802D2DECu: goto label_802D2DEC;
    case 0x802D2DFCu: goto label_802D2DFC;
    case 0x802D2E04u: goto label_802D2E04;
    case 0x802D2E34u: goto label_802D2E34;
    case 0x802D2E48u: goto label_802D2E48;
    case 0x802D2E58u: goto label_802D2E58;
    case 0x802D2E8Cu: goto label_802D2E8C;
    case 0x802D2EA0u: goto label_802D2EA0;
    case 0x802D2EC8u: goto label_802D2EC8;
    case 0x802D2EF0u: goto label_802D2EF0;
    case 0x802D2F20u: goto label_802D2F20;
    case 0x802D2F90u: goto label_802D2F90;
    case 0x802D2F9Cu: goto label_802D2F9C;
    case 0x802D2FC8u: goto label_802D2FC8;
    case 0x802D3090u: goto label_802D3090;
    case 0x802D30A4u: goto label_802D30A4;
    case 0x802D30B8u: goto label_802D30B8;
    case 0x802D3118u: goto label_802D3118;
    case 0x802D3120u: goto label_802D3120;
    case 0x802D3160u: goto label_802D3160;
    case 0x802D3178u: goto label_802D3178;
    case 0x802D3184u: goto label_802D3184;
    case 0x802D31ACu: goto label_802D31AC;
    default: return;
    }
}

