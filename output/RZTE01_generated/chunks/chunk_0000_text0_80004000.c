// DolRecomp output
#include "../RZTE01.h"

static void loop_80004054(CPUState* ctx) {
label_80004054:
    ctx->downcount -= 5;
    ctx->pc = 0x80004054u;
    // 80004054: lbz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

    // 80004058: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    ctx->pc = 0x8000405Cu;
    // 8000405C: stb     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    // 80004060: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    // 80004064: bc    16, 0, 0x80004054
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004054u;
                return;
            }
            goto label_80004054;
        }
    }

    ctx->pc = 0x80004068u;
}

static void loop_800040B0(CPUState* ctx) {
label_800040B0:
    ctx->downcount -= 3;
    ctx->pc = 0x800040B0u;
    // 800040B0: lbzu     r9, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x800040B4u;
    // 800040B4: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

    // 800040B8: bc    16, 0, 0x800040B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800040B0u;
                return;
            }
            goto label_800040B0;
        }
    }

    ctx->pc = 0x800040BCu;
}

static void loop_800040F0(CPUState* ctx) {
label_800040F0:
    ctx->downcount -= 5;
    ctx->pc = 0x800040F0u;
    // 800040F0: lbz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read8(ctx, ea);
    }

    // 800040F4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

    ctx->pc = 0x800040F8u;
    // 800040F8: stb     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

    // 800040FC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

    // 80004100: bc    16, 0, 0x800040F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800040F0u;
                return;
            }
            goto label_800040F0;
        }
    }

    ctx->pc = 0x80004104u;
}

static void loop_8000410C(CPUState* ctx) {
label_8000410C:
    ctx->downcount -= 11;
    ctx->pc = 0x8000410Cu;
    // 8000410C: lwz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80004110u;
    // 80004110: lwz     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80004114u;
    // 80004114: lwz     r11, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80004118u;
    // 80004118: lwz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

    // 8000411C: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

    ctx->pc = 0x80004120u;
    // 80004120: stw     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x80004124u;
    // 80004124: stw     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    ctx->pc = 0x80004128u;
    // 80004128: stw     r11, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

    ctx->pc = 0x8000412Cu;
    // 8000412C: stw     r12, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

    // 80004130: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

    // 80004134: bc    16, 0, 0x8000410C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000410Cu;
                return;
            }
            goto label_8000410C;
        }
    }

    ctx->pc = 0x80004138u;
}

static void loop_8000414C(CPUState* ctx) {
label_8000414C:
    ctx->downcount -= 3;
    ctx->pc = 0x8000414Cu;
    // 8000414C: lbzu     r9, 1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80004150u;
    // 80004150: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

    // 80004154: bc    16, 0, 0x8000414C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000414Cu;
                return;
            }
            goto label_8000414C;
        }
    }

    ctx->pc = 0x80004158u;
}

static void loop_80004168(CPUState* ctx) {
label_80004168:
    ctx->downcount -= 3;
    ctx->pc = 0x80004168u;
    // 80004168: lbzu     r9, 1(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[7] = ea;
    }

    ctx->pc = 0x8000416Cu;
    // 8000416C: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

    // 80004170: bc    16, 0, 0x80004168
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004168u;
                return;
            }
            goto label_80004168;
        }
    }

    ctx->pc = 0x80004174u;
}

static void loop_800041A8(CPUState* ctx) {
label_800041A8:
    ctx->downcount -= 3;
    ctx->pc = 0x800041A8u;
    // 800041A8: lbzu     r9, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x800041ACu;
    // 800041AC: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

    // 800041B0: bc    16, 0, 0x800041A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800041A8u;
                return;
            }
            goto label_800041A8;
        }
    }

    ctx->pc = 0x800041B4u;
}

static void loop_800041F4(CPUState* ctx) {
label_800041F4:
    ctx->downcount -= 3;
    ctx->pc = 0x800041F4u;
    // 800041F4: lbzu     r9, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x800041F8u;
    // 800041F8: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

    // 800041FC: bc    16, 0, 0x800041F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800041F4u;
                return;
            }
            goto label_800041F4;
        }
    }

    ctx->pc = 0x80004200u;
}

static void loop_8000422C(CPUState* ctx) {
label_8000422C:
    ctx->downcount -= 3;
    ctx->pc = 0x8000422Cu;
    // 8000422C: lbzu     r9, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80004230u;
    // 80004230: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

    // 80004234: bc    16, 0, 0x8000422C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000422Cu;
                return;
            }
            goto label_8000422C;
        }
    }

    ctx->pc = 0x80004238u;
}

static void loop_80004244(CPUState* ctx) {
label_80004244:
    ctx->downcount -= 10;
    ctx->pc = 0x80004244u;
    // 80004244: lwz     r9, -4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80004248u;
    // 80004248: lwz     r10, -8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8000424Cu;
    // 8000424C: lwz     r11, -12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80004250u;
    // 80004250: lwz     r8, -16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

    // 80004254: addi    r4, r4, -16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16);

    ctx->pc = 0x80004258u;
    // 80004258: stw     r9, -4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

    ctx->pc = 0x8000425Cu;
    // 8000425C: stw     r10, -8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

    ctx->pc = 0x80004260u;
    // 80004260: stw     r11, -12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

    ctx->pc = 0x80004264u;
    // 80004264: stwu     r8, -16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
        ctx->gpr[12] = ea;
    }

    // 80004268: bc    16, 0, 0x80004244
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004244u;
                return;
            }
            goto label_80004244;
        }
    }

    ctx->pc = 0x8000426Cu;
}

static void loop_80004278(CPUState* ctx) {
label_80004278:
    ctx->downcount -= 3;
    ctx->pc = 0x80004278u;
    // 80004278: lbzu     r9, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x8000427Cu;
    // 8000427C: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

    // 80004280: bc    16, 0, 0x80004278
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004278u;
                return;
            }
            goto label_80004278;
        }
    }

    ctx->pc = 0x80004284u;
}

static void loop_8000428C(CPUState* ctx) {
label_8000428C:
    ctx->downcount -= 3;
    ctx->pc = 0x8000428Cu;
    // 8000428C: lbzu     r9, -1(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-1);
        ctx->gpr[9] = mem_read8(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80004290u;
    // 80004290: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

    // 80004294: bc    16, 0, 0x8000428C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000428Cu;
                return;
            }
            goto label_8000428C;
        }
    }

    ctx->pc = 0x80004298u;
}

static void loop_800042BC(CPUState* ctx) {
label_800042BC:
    ctx->downcount -= 3;
    // 800042BC: addic.  r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800042C0u;
    // 800042C0: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 800042C4: bc    4, 2, 0x800042BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800042BCu;
                return;
            }
            goto label_800042BC;
        }
    }

    ctx->pc = 0x800042C8u;
}

static void loop_800042F4(CPUState* ctx) {
label_800042F4:
    ctx->downcount -= 10;
    ctx->pc = 0x800042F4u;
    // 800042F4: stw     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 800042F8: addic.  r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x800042FCu;
    // 800042FC: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80004300u;
    // 80004300: stw     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80004304u;
    // 80004304: stw     r7, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80004308u;
    // 80004308: stw     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x8000430Cu;
    // 8000430C: stw     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80004310u;
    // 80004310: stw     r7, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    ctx->pc = 0x80004314u;
    // 80004314: stwu     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

    // 80004318: bc    4, 2, 0x800042F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800042F4u;
                return;
            }
            goto label_800042F4;
        }
    }

    ctx->pc = 0x8000431Cu;
}

static void loop_80004324(CPUState* ctx) {
label_80004324:
    ctx->downcount -= 3;
    // 80004324: addic.  r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80004328u;
    // 80004328: stwu     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

    // 8000432C: bc    4, 2, 0x80004324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004324u;
                return;
            }
            goto label_80004324;
        }
    }

    ctx->pc = 0x80004330u;
}

static void loop_80004340(CPUState* ctx) {
label_80004340:
    ctx->downcount -= 3;
    // 80004340: addic.  r5, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

    ctx->pc = 0x80004344u;
    // 80004344: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

    // 80004348: bc    4, 2, 0x80004340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004340u;
                return;
            }
            goto label_80004340;
        }
    }

    ctx->pc = 0x8000434Cu;
}

static void loop_800063EC(CPUState* ctx) {
label_800063EC:
    ctx->downcount -= 5;
    // 800063EC: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

    ctx->pc = 0x800063F0u;
    // 800063F0: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

    // 800063F4: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    ctx->pc = 0x800063F8u;
    // 800063F8: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

    // 800063FC: bc    16, 0, 0x800063EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800063ECu;
                return;
            }
            goto label_800063EC;
        }
    }

    ctx->pc = 0x80006400u;
}

void func_80004000(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x80004000u: goto label_80004000;
    case 0x80004004u: goto label_80004004;
    case 0x80004008u: goto label_80004008;
    case 0x8000400Cu: goto label_8000400C;
    case 0x80004010u: goto label_80004010;
    case 0x80004014u: goto label_80004014;
    case 0x80004018u: goto label_80004018;
    case 0x8000401Cu: goto label_8000401C;
    case 0x80004020u: goto label_80004020;
    case 0x80004024u: goto label_80004024;
    case 0x80004028u: goto label_80004028;
    case 0x8000402Cu: goto label_8000402C;
    case 0x80004030u: goto label_80004030;
    case 0x80004034u: goto label_80004034;
    case 0x80004038u: goto label_80004038;
    case 0x8000403Cu: goto label_8000403C;
    case 0x80004040u: goto label_80004040;
    case 0x80004044u: goto label_80004044;
    case 0x80004048u: goto label_80004048;
    case 0x8000404Cu: goto label_8000404C;
    case 0x80004050u: goto label_80004050;
    case 0x80004054u: goto label_80004054;
    case 0x80004058u: goto label_80004058;
    case 0x8000405Cu: goto label_8000405C;
    case 0x80004060u: goto label_80004060;
    case 0x80004064u: goto label_80004064;
    case 0x80004068u: goto label_80004068;
    case 0x8000406Cu: goto label_8000406C;
    case 0x80004070u: goto label_80004070;
    case 0x80004074u: goto label_80004074;
    case 0x80004078u: goto label_80004078;
    case 0x8000407Cu: goto label_8000407C;
    case 0x80004080u: goto label_80004080;
    case 0x80004084u: goto label_80004084;
    case 0x80004088u: goto label_80004088;
    case 0x8000408Cu: goto label_8000408C;
    case 0x80004090u: goto label_80004090;
    case 0x80004094u: goto label_80004094;
    case 0x80004098u: goto label_80004098;
    case 0x8000409Cu: goto label_8000409C;
    case 0x800040A0u: goto label_800040A0;
    case 0x800040A4u: goto label_800040A4;
    case 0x800040A8u: goto label_800040A8;
    case 0x800040ACu: goto label_800040AC;
    case 0x800040B0u: goto label_800040B0;
    case 0x800040B4u: goto label_800040B4;
    case 0x800040B8u: goto label_800040B8;
    case 0x800040BCu: goto label_800040BC;
    case 0x800040C0u: goto label_800040C0;
    case 0x800040C4u: goto label_800040C4;
    case 0x800040C8u: goto label_800040C8;
    case 0x800040CCu: goto label_800040CC;
    case 0x800040D0u: goto label_800040D0;
    case 0x800040D4u: goto label_800040D4;
    case 0x800040D8u: goto label_800040D8;
    case 0x800040DCu: goto label_800040DC;
    case 0x800040E0u: goto label_800040E0;
    case 0x800040E4u: goto label_800040E4;
    case 0x800040E8u: goto label_800040E8;
    case 0x800040ECu: goto label_800040EC;
    case 0x800040F0u: goto label_800040F0;
    case 0x800040F4u: goto label_800040F4;
    case 0x800040F8u: goto label_800040F8;
    case 0x800040FCu: goto label_800040FC;
    case 0x80004100u: goto label_80004100;
    case 0x80004104u: goto label_80004104;
    case 0x80004108u: goto label_80004108;
    case 0x8000410Cu: goto label_8000410C;
    case 0x80004110u: goto label_80004110;
    case 0x80004114u: goto label_80004114;
    case 0x80004118u: goto label_80004118;
    case 0x8000411Cu: goto label_8000411C;
    case 0x80004120u: goto label_80004120;
    case 0x80004124u: goto label_80004124;
    case 0x80004128u: goto label_80004128;
    case 0x8000412Cu: goto label_8000412C;
    case 0x80004130u: goto label_80004130;
    case 0x80004134u: goto label_80004134;
    case 0x80004138u: goto label_80004138;
    case 0x8000413Cu: goto label_8000413C;
    case 0x80004140u: goto label_80004140;
    case 0x80004144u: goto label_80004144;
    case 0x80004148u: goto label_80004148;
    case 0x8000414Cu: goto label_8000414C;
    case 0x80004150u: goto label_80004150;
    case 0x80004154u: goto label_80004154;
    case 0x80004158u: goto label_80004158;
    case 0x8000415Cu: goto label_8000415C;
    case 0x80004160u: goto label_80004160;
    case 0x80004164u: goto label_80004164;
    case 0x80004168u: goto label_80004168;
    case 0x8000416Cu: goto label_8000416C;
    case 0x80004170u: goto label_80004170;
    case 0x80004174u: goto label_80004174;
    case 0x80004178u: goto label_80004178;
    case 0x8000417Cu: goto label_8000417C;
    case 0x80004180u: goto label_80004180;
    case 0x80004184u: goto label_80004184;
    case 0x80004188u: goto label_80004188;
    case 0x8000418Cu: goto label_8000418C;
    case 0x80004190u: goto label_80004190;
    case 0x80004194u: goto label_80004194;
    case 0x80004198u: goto label_80004198;
    case 0x8000419Cu: goto label_8000419C;
    case 0x800041A0u: goto label_800041A0;
    case 0x800041A4u: goto label_800041A4;
    case 0x800041A8u: goto label_800041A8;
    case 0x800041ACu: goto label_800041AC;
    case 0x800041B0u: goto label_800041B0;
    case 0x800041B4u: goto label_800041B4;
    case 0x800041B8u: goto label_800041B8;
    case 0x800041BCu: goto label_800041BC;
    case 0x800041C0u: goto label_800041C0;
    case 0x800041C4u: goto label_800041C4;
    case 0x800041C8u: goto label_800041C8;
    case 0x800041CCu: goto label_800041CC;
    case 0x800041D0u: goto label_800041D0;
    case 0x800041D4u: goto label_800041D4;
    case 0x800041D8u: goto label_800041D8;
    case 0x800041DCu: goto label_800041DC;
    case 0x800041E0u: goto label_800041E0;
    case 0x800041E4u: goto label_800041E4;
    case 0x800041E8u: goto label_800041E8;
    case 0x800041ECu: goto label_800041EC;
    case 0x800041F0u: goto label_800041F0;
    case 0x800041F4u: goto label_800041F4;
    case 0x800041F8u: goto label_800041F8;
    case 0x800041FCu: goto label_800041FC;
    case 0x80004200u: goto label_80004200;
    case 0x80004204u: goto label_80004204;
    case 0x80004208u: goto label_80004208;
    case 0x8000420Cu: goto label_8000420C;
    case 0x80004210u: goto label_80004210;
    case 0x80004214u: goto label_80004214;
    case 0x80004218u: goto label_80004218;
    case 0x8000421Cu: goto label_8000421C;
    case 0x80004220u: goto label_80004220;
    case 0x80004224u: goto label_80004224;
    case 0x80004228u: goto label_80004228;
    case 0x8000422Cu: goto label_8000422C;
    case 0x80004230u: goto label_80004230;
    case 0x80004234u: goto label_80004234;
    case 0x80004238u: goto label_80004238;
    case 0x8000423Cu: goto label_8000423C;
    case 0x80004240u: goto label_80004240;
    case 0x80004244u: goto label_80004244;
    case 0x80004248u: goto label_80004248;
    case 0x8000424Cu: goto label_8000424C;
    case 0x80004250u: goto label_80004250;
    case 0x80004254u: goto label_80004254;
    case 0x80004258u: goto label_80004258;
    case 0x8000425Cu: goto label_8000425C;
    case 0x80004260u: goto label_80004260;
    case 0x80004264u: goto label_80004264;
    case 0x80004268u: goto label_80004268;
    case 0x8000426Cu: goto label_8000426C;
    case 0x80004270u: goto label_80004270;
    case 0x80004274u: goto label_80004274;
    case 0x80004278u: goto label_80004278;
    case 0x8000427Cu: goto label_8000427C;
    case 0x80004280u: goto label_80004280;
    case 0x80004284u: goto label_80004284;
    case 0x80004288u: goto label_80004288;
    case 0x8000428Cu: goto label_8000428C;
    case 0x80004290u: goto label_80004290;
    case 0x80004294u: goto label_80004294;
    case 0x80004298u: goto label_80004298;
    case 0x8000429Cu: goto label_8000429C;
    case 0x800042A0u: goto label_800042A0;
    case 0x800042A4u: goto label_800042A4;
    case 0x800042A8u: goto label_800042A8;
    case 0x800042ACu: goto label_800042AC;
    case 0x800042B0u: goto label_800042B0;
    case 0x800042B4u: goto label_800042B4;
    case 0x800042B8u: goto label_800042B8;
    case 0x800042BCu: goto label_800042BC;
    case 0x800042C0u: goto label_800042C0;
    case 0x800042C4u: goto label_800042C4;
    case 0x800042C8u: goto label_800042C8;
    case 0x800042CCu: goto label_800042CC;
    case 0x800042D0u: goto label_800042D0;
    case 0x800042D4u: goto label_800042D4;
    case 0x800042D8u: goto label_800042D8;
    case 0x800042DCu: goto label_800042DC;
    case 0x800042E0u: goto label_800042E0;
    case 0x800042E4u: goto label_800042E4;
    case 0x800042E8u: goto label_800042E8;
    case 0x800042ECu: goto label_800042EC;
    case 0x800042F0u: goto label_800042F0;
    case 0x800042F4u: goto label_800042F4;
    case 0x800042F8u: goto label_800042F8;
    case 0x800042FCu: goto label_800042FC;
    case 0x80004300u: goto label_80004300;
    case 0x80004304u: goto label_80004304;
    case 0x80004308u: goto label_80004308;
    case 0x8000430Cu: goto label_8000430C;
    case 0x80004310u: goto label_80004310;
    case 0x80004314u: goto label_80004314;
    case 0x80004318u: goto label_80004318;
    case 0x8000431Cu: goto label_8000431C;
    case 0x80004320u: goto label_80004320;
    case 0x80004324u: goto label_80004324;
    case 0x80004328u: goto label_80004328;
    case 0x8000432Cu: goto label_8000432C;
    case 0x80004330u: goto label_80004330;
    case 0x80004334u: goto label_80004334;
    case 0x80004338u: goto label_80004338;
    case 0x8000433Cu: goto label_8000433C;
    case 0x80004340u: goto label_80004340;
    case 0x80004344u: goto label_80004344;
    case 0x80004348u: goto label_80004348;
    case 0x8000434Cu: goto label_8000434C;
    case 0x80004350u: goto label_80004350;
    case 0x80004354u: goto label_80004354;
    case 0x80004358u: goto label_80004358;
    case 0x8000435Cu: goto label_8000435C;
    case 0x80004360u: goto label_80004360;
    case 0x80004364u: goto label_80004364;
    case 0x80004368u: goto label_80004368;
    case 0x8000436Cu: goto label_8000436C;
    case 0x80004370u: goto label_80004370;
    case 0x80004374u: goto label_80004374;
    case 0x80004378u: goto label_80004378;
    case 0x8000437Cu: goto label_8000437C;
    case 0x80004380u: goto label_80004380;
    case 0x80004384u: goto label_80004384;
    case 0x80004388u: goto label_80004388;
    case 0x8000438Cu: goto label_8000438C;
    case 0x80004390u: goto label_80004390;
    case 0x80004394u: goto label_80004394;
    case 0x80004398u: goto label_80004398;
    case 0x8000439Cu: goto label_8000439C;
    case 0x800043A0u: goto label_800043A0;
    case 0x800043A4u: goto label_800043A4;
    case 0x800043A8u: goto label_800043A8;
    case 0x800043ACu: goto label_800043AC;
    case 0x800043B0u: goto label_800043B0;
    case 0x800043B4u: goto label_800043B4;
    case 0x800043B8u: goto label_800043B8;
    case 0x800043BCu: goto label_800043BC;
    case 0x800043C0u: goto label_800043C0;
    case 0x800043C4u: goto label_800043C4;
    case 0x800043C8u: goto label_800043C8;
    case 0x800043CCu: goto label_800043CC;
    case 0x800043D0u: goto label_800043D0;
    case 0x800043D4u: goto label_800043D4;
    case 0x800043D8u: goto label_800043D8;
    case 0x800043DCu: goto label_800043DC;
    case 0x800043E0u: goto label_800043E0;
    case 0x800043E4u: goto label_800043E4;
    case 0x800043E8u: goto label_800043E8;
    case 0x800043ECu: goto label_800043EC;
    case 0x800043F0u: goto label_800043F0;
    case 0x800043F4u: goto label_800043F4;
    case 0x800043F8u: goto label_800043F8;
    case 0x800043FCu: goto label_800043FC;
    case 0x80004400u: goto label_80004400;
    case 0x80004404u: goto label_80004404;
    case 0x80004408u: goto label_80004408;
    case 0x8000440Cu: goto label_8000440C;
    case 0x80004410u: goto label_80004410;
    case 0x80004414u: goto label_80004414;
    case 0x80004418u: goto label_80004418;
    case 0x8000441Cu: goto label_8000441C;
    case 0x80004420u: goto label_80004420;
    case 0x80004424u: goto label_80004424;
    case 0x80004428u: goto label_80004428;
    case 0x8000442Cu: goto label_8000442C;
    case 0x80004430u: goto label_80004430;
    case 0x80004434u: goto label_80004434;
    case 0x80004438u: goto label_80004438;
    case 0x8000443Cu: goto label_8000443C;
    case 0x80004440u: goto label_80004440;
    case 0x80004444u: goto label_80004444;
    case 0x80004448u: goto label_80004448;
    case 0x8000444Cu: goto label_8000444C;
    case 0x80004450u: goto label_80004450;
    case 0x80004454u: goto label_80004454;
    case 0x80004458u: goto label_80004458;
    case 0x8000445Cu: goto label_8000445C;
    case 0x80004460u: goto label_80004460;
    case 0x80004464u: goto label_80004464;
    case 0x80004468u: goto label_80004468;
    case 0x8000446Cu: goto label_8000446C;
    case 0x80004470u: goto label_80004470;
    case 0x80004474u: goto label_80004474;
    case 0x80004478u: goto label_80004478;
    case 0x8000447Cu: goto label_8000447C;
    case 0x80004480u: goto label_80004480;
    case 0x80004484u: goto label_80004484;
    case 0x80004488u: goto label_80004488;
    case 0x8000448Cu: goto label_8000448C;
    case 0x80004490u: goto label_80004490;
    case 0x80004494u: goto label_80004494;
    case 0x80004498u: goto label_80004498;
    case 0x8000449Cu: goto label_8000449C;
    case 0x800044A0u: goto label_800044A0;
    case 0x800044A4u: goto label_800044A4;
    case 0x800044A8u: goto label_800044A8;
    case 0x800044ACu: goto label_800044AC;
    case 0x800044B0u: goto label_800044B0;
    case 0x800044B4u: goto label_800044B4;
    case 0x800044B8u: goto label_800044B8;
    case 0x800044BCu: goto label_800044BC;
    case 0x800044C0u: goto label_800044C0;
    case 0x800044C4u: goto label_800044C4;
    case 0x800044C8u: goto label_800044C8;
    case 0x800044CCu: goto label_800044CC;
    case 0x800044D0u: goto label_800044D0;
    case 0x800044D4u: goto label_800044D4;
    case 0x800044D8u: goto label_800044D8;
    case 0x800044DCu: goto label_800044DC;
    case 0x800044E0u: goto label_800044E0;
    case 0x800044E4u: goto label_800044E4;
    case 0x800044E8u: goto label_800044E8;
    case 0x800044ECu: goto label_800044EC;
    case 0x800044F0u: goto label_800044F0;
    case 0x800044F4u: goto label_800044F4;
    case 0x800044F8u: goto label_800044F8;
    case 0x800044FCu: goto label_800044FC;
    case 0x80004500u: goto label_80004500;
    case 0x80004504u: goto label_80004504;
    case 0x80004508u: goto label_80004508;
    case 0x8000450Cu: goto label_8000450C;
    case 0x80004510u: goto label_80004510;
    case 0x80004514u: goto label_80004514;
    case 0x80004518u: goto label_80004518;
    case 0x8000451Cu: goto label_8000451C;
    case 0x80004520u: goto label_80004520;
    case 0x80004524u: goto label_80004524;
    case 0x80004528u: goto label_80004528;
    case 0x8000452Cu: goto label_8000452C;
    case 0x80004530u: goto label_80004530;
    case 0x80004534u: goto label_80004534;
    case 0x80004538u: goto label_80004538;
    case 0x8000453Cu: goto label_8000453C;
    case 0x80004540u: goto label_80004540;
    case 0x80004544u: goto label_80004544;
    case 0x80004548u: goto label_80004548;
    case 0x8000454Cu: goto label_8000454C;
    case 0x80004550u: goto label_80004550;
    case 0x80004554u: goto label_80004554;
    case 0x80004558u: goto label_80004558;
    case 0x8000455Cu: goto label_8000455C;
    case 0x80004560u: goto label_80004560;
    case 0x80004564u: goto label_80004564;
    case 0x80004568u: goto label_80004568;
    case 0x8000456Cu: goto label_8000456C;
    case 0x80004570u: goto label_80004570;
    case 0x80004574u: goto label_80004574;
    case 0x80004578u: goto label_80004578;
    case 0x8000457Cu: goto label_8000457C;
    case 0x80004580u: goto label_80004580;
    case 0x80004584u: goto label_80004584;
    case 0x80004588u: goto label_80004588;
    case 0x8000458Cu: goto label_8000458C;
    case 0x80004590u: goto label_80004590;
    case 0x80004594u: goto label_80004594;
    case 0x80004598u: goto label_80004598;
    case 0x8000459Cu: goto label_8000459C;
    case 0x800045A0u: goto label_800045A0;
    case 0x800045A4u: goto label_800045A4;
    case 0x800045A8u: goto label_800045A8;
    case 0x800045ACu: goto label_800045AC;
    case 0x800045B0u: goto label_800045B0;
    case 0x800045B4u: goto label_800045B4;
    case 0x800045B8u: goto label_800045B8;
    case 0x800045BCu: goto label_800045BC;
    case 0x800045C0u: goto label_800045C0;
    case 0x800045C4u: goto label_800045C4;
    case 0x800045C8u: goto label_800045C8;
    case 0x800045CCu: goto label_800045CC;
    case 0x800045D0u: goto label_800045D0;
    case 0x800045D4u: goto label_800045D4;
    case 0x800045D8u: goto label_800045D8;
    case 0x800045DCu: goto label_800045DC;
    case 0x800045E0u: goto label_800045E0;
    case 0x800045E4u: goto label_800045E4;
    case 0x800045E8u: goto label_800045E8;
    case 0x800045ECu: goto label_800045EC;
    case 0x800045F0u: goto label_800045F0;
    case 0x800045F4u: goto label_800045F4;
    case 0x800045F8u: goto label_800045F8;
    case 0x800045FCu: goto label_800045FC;
    case 0x80004600u: goto label_80004600;
    case 0x80004604u: goto label_80004604;
    case 0x80004608u: goto label_80004608;
    case 0x8000460Cu: goto label_8000460C;
    case 0x80004610u: goto label_80004610;
    case 0x80004614u: goto label_80004614;
    case 0x80004618u: goto label_80004618;
    case 0x8000461Cu: goto label_8000461C;
    case 0x80004620u: goto label_80004620;
    case 0x80004624u: goto label_80004624;
    case 0x80004628u: goto label_80004628;
    case 0x8000462Cu: goto label_8000462C;
    case 0x80004630u: goto label_80004630;
    case 0x80004634u: goto label_80004634;
    case 0x80004638u: goto label_80004638;
    case 0x8000463Cu: goto label_8000463C;
    case 0x80004640u: goto label_80004640;
    case 0x80004644u: goto label_80004644;
    case 0x80004648u: goto label_80004648;
    case 0x8000464Cu: goto label_8000464C;
    case 0x80004650u: goto label_80004650;
    case 0x80004654u: goto label_80004654;
    case 0x80004658u: goto label_80004658;
    case 0x8000465Cu: goto label_8000465C;
    case 0x80004660u: goto label_80004660;
    case 0x80004664u: goto label_80004664;
    case 0x80004668u: goto label_80004668;
    case 0x8000466Cu: goto label_8000466C;
    case 0x80004670u: goto label_80004670;
    case 0x80004674u: goto label_80004674;
    case 0x80004678u: goto label_80004678;
    case 0x8000467Cu: goto label_8000467C;
    case 0x80004680u: goto label_80004680;
    case 0x80004684u: goto label_80004684;
    case 0x80004688u: goto label_80004688;
    case 0x8000468Cu: goto label_8000468C;
    case 0x80004690u: goto label_80004690;
    case 0x80004694u: goto label_80004694;
    case 0x80004698u: goto label_80004698;
    case 0x8000469Cu: goto label_8000469C;
    case 0x800046A0u: goto label_800046A0;
    case 0x800046A4u: goto label_800046A4;
    case 0x800046A8u: goto label_800046A8;
    case 0x800046ACu: goto label_800046AC;
    case 0x800046B0u: goto label_800046B0;
    case 0x800046B4u: goto label_800046B4;
    case 0x800046B8u: goto label_800046B8;
    case 0x800046BCu: goto label_800046BC;
    case 0x800046C0u: goto label_800046C0;
    case 0x800046C4u: goto label_800046C4;
    case 0x800046C8u: goto label_800046C8;
    case 0x800046CCu: goto label_800046CC;
    case 0x800046D0u: goto label_800046D0;
    case 0x800046D4u: goto label_800046D4;
    case 0x800046D8u: goto label_800046D8;
    case 0x800046DCu: goto label_800046DC;
    case 0x800046E0u: goto label_800046E0;
    case 0x800046E4u: goto label_800046E4;
    case 0x800046E8u: goto label_800046E8;
    case 0x800046ECu: goto label_800046EC;
    case 0x800046F0u: goto label_800046F0;
    case 0x800046F4u: goto label_800046F4;
    case 0x800046F8u: goto label_800046F8;
    case 0x800046FCu: goto label_800046FC;
    case 0x80004700u: goto label_80004700;
    case 0x80004704u: goto label_80004704;
    case 0x80004708u: goto label_80004708;
    case 0x8000470Cu: goto label_8000470C;
    case 0x80004710u: goto label_80004710;
    case 0x80004714u: goto label_80004714;
    case 0x80004718u: goto label_80004718;
    case 0x8000471Cu: goto label_8000471C;
    case 0x80004720u: goto label_80004720;
    case 0x80004724u: goto label_80004724;
    case 0x80004728u: goto label_80004728;
    case 0x8000472Cu: goto label_8000472C;
    case 0x80004730u: goto label_80004730;
    case 0x80004734u: goto label_80004734;
    case 0x80004738u: goto label_80004738;
    case 0x8000473Cu: goto label_8000473C;
    case 0x80004740u: goto label_80004740;
    case 0x80004744u: goto label_80004744;
    case 0x80004748u: goto label_80004748;
    case 0x8000474Cu: goto label_8000474C;
    case 0x80004750u: goto label_80004750;
    case 0x80004754u: goto label_80004754;
    case 0x80004758u: goto label_80004758;
    case 0x8000475Cu: goto label_8000475C;
    case 0x80004760u: goto label_80004760;
    case 0x80004764u: goto label_80004764;
    case 0x80004768u: goto label_80004768;
    case 0x8000476Cu: goto label_8000476C;
    case 0x80004770u: goto label_80004770;
    case 0x80004774u: goto label_80004774;
    case 0x80004778u: goto label_80004778;
    case 0x8000477Cu: goto label_8000477C;
    case 0x80004780u: goto label_80004780;
    case 0x80004784u: goto label_80004784;
    case 0x80004788u: goto label_80004788;
    case 0x8000478Cu: goto label_8000478C;
    case 0x80004790u: goto label_80004790;
    case 0x80004794u: goto label_80004794;
    case 0x80004798u: goto label_80004798;
    case 0x8000479Cu: goto label_8000479C;
    case 0x800047A0u: goto label_800047A0;
    case 0x800047A4u: goto label_800047A4;
    case 0x800047A8u: goto label_800047A8;
    case 0x800047ACu: goto label_800047AC;
    case 0x800047B0u: goto label_800047B0;
    case 0x800047B4u: goto label_800047B4;
    case 0x800047B8u: goto label_800047B8;
    case 0x800047BCu: goto label_800047BC;
    case 0x800047C0u: goto label_800047C0;
    case 0x800047C4u: goto label_800047C4;
    case 0x800047C8u: goto label_800047C8;
    case 0x800047CCu: goto label_800047CC;
    case 0x800047D0u: goto label_800047D0;
    case 0x800047D4u: goto label_800047D4;
    case 0x800047D8u: goto label_800047D8;
    case 0x800047DCu: goto label_800047DC;
    case 0x800047E0u: goto label_800047E0;
    case 0x800047E4u: goto label_800047E4;
    case 0x800047E8u: goto label_800047E8;
    case 0x800047ECu: goto label_800047EC;
    case 0x800047F0u: goto label_800047F0;
    case 0x800047F4u: goto label_800047F4;
    case 0x800047F8u: goto label_800047F8;
    case 0x800047FCu: goto label_800047FC;
    case 0x80004800u: goto label_80004800;
    case 0x80004804u: goto label_80004804;
    case 0x80004808u: goto label_80004808;
    case 0x8000480Cu: goto label_8000480C;
    case 0x80004810u: goto label_80004810;
    case 0x80004814u: goto label_80004814;
    case 0x80004818u: goto label_80004818;
    case 0x8000481Cu: goto label_8000481C;
    case 0x80004820u: goto label_80004820;
    case 0x80004824u: goto label_80004824;
    case 0x80004828u: goto label_80004828;
    case 0x8000482Cu: goto label_8000482C;
    case 0x80004830u: goto label_80004830;
    case 0x80004834u: goto label_80004834;
    case 0x80004838u: goto label_80004838;
    case 0x8000483Cu: goto label_8000483C;
    case 0x80004840u: goto label_80004840;
    case 0x80004844u: goto label_80004844;
    case 0x80004848u: goto label_80004848;
    case 0x8000484Cu: goto label_8000484C;
    case 0x80004850u: goto label_80004850;
    case 0x80004854u: goto label_80004854;
    case 0x80004858u: goto label_80004858;
    case 0x8000485Cu: goto label_8000485C;
    case 0x80004860u: goto label_80004860;
    case 0x80004864u: goto label_80004864;
    case 0x80004868u: goto label_80004868;
    case 0x8000486Cu: goto label_8000486C;
    case 0x80004870u: goto label_80004870;
    case 0x80004874u: goto label_80004874;
    case 0x80004878u: goto label_80004878;
    case 0x8000487Cu: goto label_8000487C;
    case 0x80004880u: goto label_80004880;
    case 0x80004884u: goto label_80004884;
    case 0x80004888u: goto label_80004888;
    case 0x8000488Cu: goto label_8000488C;
    case 0x80004890u: goto label_80004890;
    case 0x80004894u: goto label_80004894;
    case 0x80004898u: goto label_80004898;
    case 0x8000489Cu: goto label_8000489C;
    case 0x800048A0u: goto label_800048A0;
    case 0x800048A4u: goto label_800048A4;
    case 0x800048A8u: goto label_800048A8;
    case 0x800048ACu: goto label_800048AC;
    case 0x800048B0u: goto label_800048B0;
    case 0x800048B4u: goto label_800048B4;
    case 0x800048B8u: goto label_800048B8;
    case 0x800048BCu: goto label_800048BC;
    case 0x800048C0u: goto label_800048C0;
    case 0x800048C4u: goto label_800048C4;
    case 0x800048C8u: goto label_800048C8;
    case 0x800048CCu: goto label_800048CC;
    case 0x800048D0u: goto label_800048D0;
    case 0x800048D4u: goto label_800048D4;
    case 0x800048D8u: goto label_800048D8;
    case 0x800048DCu: goto label_800048DC;
    case 0x800048E0u: goto label_800048E0;
    case 0x800048E4u: goto label_800048E4;
    case 0x800048E8u: goto label_800048E8;
    case 0x800048ECu: goto label_800048EC;
    case 0x800048F0u: goto label_800048F0;
    case 0x800048F4u: goto label_800048F4;
    case 0x800048F8u: goto label_800048F8;
    case 0x800048FCu: goto label_800048FC;
    case 0x80004900u: goto label_80004900;
    case 0x80004904u: goto label_80004904;
    case 0x80004908u: goto label_80004908;
    case 0x8000490Cu: goto label_8000490C;
    case 0x80004910u: goto label_80004910;
    case 0x80004914u: goto label_80004914;
    case 0x80004918u: goto label_80004918;
    case 0x8000491Cu: goto label_8000491C;
    case 0x80004920u: goto label_80004920;
    case 0x80004924u: goto label_80004924;
    case 0x80004928u: goto label_80004928;
    case 0x8000492Cu: goto label_8000492C;
    case 0x80004930u: goto label_80004930;
    case 0x80004934u: goto label_80004934;
    case 0x80004938u: goto label_80004938;
    case 0x8000493Cu: goto label_8000493C;
    case 0x80004940u: goto label_80004940;
    case 0x80004944u: goto label_80004944;
    case 0x80004948u: goto label_80004948;
    case 0x8000494Cu: goto label_8000494C;
    case 0x80004950u: goto label_80004950;
    case 0x80004954u: goto label_80004954;
    case 0x80004958u: goto label_80004958;
    case 0x8000495Cu: goto label_8000495C;
    case 0x80004960u: goto label_80004960;
    case 0x80004964u: goto label_80004964;
    case 0x80004968u: goto label_80004968;
    case 0x8000496Cu: goto label_8000496C;
    case 0x80004970u: goto label_80004970;
    case 0x80004974u: goto label_80004974;
    case 0x80004978u: goto label_80004978;
    case 0x8000497Cu: goto label_8000497C;
    case 0x80004980u: goto label_80004980;
    case 0x80004984u: goto label_80004984;
    case 0x80004988u: goto label_80004988;
    case 0x8000498Cu: goto label_8000498C;
    case 0x80004990u: goto label_80004990;
    case 0x80004994u: goto label_80004994;
    case 0x80004998u: goto label_80004998;
    case 0x8000499Cu: goto label_8000499C;
    case 0x800049A0u: goto label_800049A0;
    case 0x800049A4u: goto label_800049A4;
    case 0x800049A8u: goto label_800049A8;
    case 0x800049ACu: goto label_800049AC;
    case 0x800049B0u: goto label_800049B0;
    case 0x800049B4u: goto label_800049B4;
    case 0x800049B8u: goto label_800049B8;
    case 0x800049BCu: goto label_800049BC;
    case 0x800049C0u: goto label_800049C0;
    case 0x800049C4u: goto label_800049C4;
    case 0x800049C8u: goto label_800049C8;
    case 0x800049CCu: goto label_800049CC;
    case 0x800049D0u: goto label_800049D0;
    case 0x800049D4u: goto label_800049D4;
    case 0x800049D8u: goto label_800049D8;
    case 0x800049DCu: goto label_800049DC;
    case 0x800049E0u: goto label_800049E0;
    case 0x800049E4u: goto label_800049E4;
    case 0x800049E8u: goto label_800049E8;
    case 0x800049ECu: goto label_800049EC;
    case 0x800049F0u: goto label_800049F0;
    case 0x800049F4u: goto label_800049F4;
    case 0x800049F8u: goto label_800049F8;
    case 0x800049FCu: goto label_800049FC;
    case 0x80004A00u: goto label_80004A00;
    case 0x80004A04u: goto label_80004A04;
    case 0x80004A08u: goto label_80004A08;
    case 0x80004A0Cu: goto label_80004A0C;
    case 0x80004A10u: goto label_80004A10;
    case 0x80004A14u: goto label_80004A14;
    case 0x80004A18u: goto label_80004A18;
    case 0x80004A1Cu: goto label_80004A1C;
    case 0x80004A20u: goto label_80004A20;
    case 0x80004A24u: goto label_80004A24;
    case 0x80004A28u: goto label_80004A28;
    case 0x80004A2Cu: goto label_80004A2C;
    case 0x80004A30u: goto label_80004A30;
    case 0x80004A34u: goto label_80004A34;
    case 0x80004A38u: goto label_80004A38;
    case 0x80004A3Cu: goto label_80004A3C;
    case 0x80004A40u: goto label_80004A40;
    case 0x80004A44u: goto label_80004A44;
    case 0x80004A48u: goto label_80004A48;
    case 0x80004A4Cu: goto label_80004A4C;
    case 0x80004A50u: goto label_80004A50;
    case 0x80004A54u: goto label_80004A54;
    case 0x80004A58u: goto label_80004A58;
    case 0x80004A5Cu: goto label_80004A5C;
    case 0x80004A60u: goto label_80004A60;
    case 0x80004A64u: goto label_80004A64;
    case 0x80004A68u: goto label_80004A68;
    case 0x80004A6Cu: goto label_80004A6C;
    case 0x80004A70u: goto label_80004A70;
    case 0x80004A74u: goto label_80004A74;
    case 0x80004A78u: goto label_80004A78;
    case 0x80004A7Cu: goto label_80004A7C;
    case 0x80004A80u: goto label_80004A80;
    case 0x80004A84u: goto label_80004A84;
    case 0x80004A88u: goto label_80004A88;
    case 0x80004A8Cu: goto label_80004A8C;
    case 0x80004A90u: goto label_80004A90;
    case 0x80004A94u: goto label_80004A94;
    case 0x80004A98u: goto label_80004A98;
    case 0x80004A9Cu: goto label_80004A9C;
    case 0x80004AA0u: goto label_80004AA0;
    case 0x80004AA4u: goto label_80004AA4;
    case 0x80004AA8u: goto label_80004AA8;
    case 0x80004AACu: goto label_80004AAC;
    case 0x80004AB0u: goto label_80004AB0;
    case 0x80004AB4u: goto label_80004AB4;
    case 0x80004AB8u: goto label_80004AB8;
    case 0x80004ABCu: goto label_80004ABC;
    case 0x80004AC0u: goto label_80004AC0;
    case 0x80004AC4u: goto label_80004AC4;
    case 0x80004AC8u: goto label_80004AC8;
    case 0x80004ACCu: goto label_80004ACC;
    case 0x80004AD0u: goto label_80004AD0;
    case 0x80004AD4u: goto label_80004AD4;
    case 0x80004AD8u: goto label_80004AD8;
    case 0x80004ADCu: goto label_80004ADC;
    case 0x80004AE0u: goto label_80004AE0;
    case 0x80004AE4u: goto label_80004AE4;
    case 0x80004AE8u: goto label_80004AE8;
    case 0x80004AECu: goto label_80004AEC;
    case 0x80004AF0u: goto label_80004AF0;
    case 0x80004AF4u: goto label_80004AF4;
    case 0x80004AF8u: goto label_80004AF8;
    case 0x80004AFCu: goto label_80004AFC;
    case 0x80004B00u: goto label_80004B00;
    case 0x80004B04u: goto label_80004B04;
    case 0x80004B08u: goto label_80004B08;
    case 0x80004B0Cu: goto label_80004B0C;
    case 0x80004B10u: goto label_80004B10;
    case 0x80004B14u: goto label_80004B14;
    case 0x80004B18u: goto label_80004B18;
    case 0x80004B1Cu: goto label_80004B1C;
    case 0x80004B20u: goto label_80004B20;
    case 0x80004B24u: goto label_80004B24;
    case 0x80004B28u: goto label_80004B28;
    case 0x80004B2Cu: goto label_80004B2C;
    case 0x80004B30u: goto label_80004B30;
    case 0x80004B34u: goto label_80004B34;
    case 0x80004B38u: goto label_80004B38;
    case 0x80004B3Cu: goto label_80004B3C;
    case 0x80004B40u: goto label_80004B40;
    case 0x80004B44u: goto label_80004B44;
    case 0x80004B48u: goto label_80004B48;
    case 0x80004B4Cu: goto label_80004B4C;
    case 0x80004B50u: goto label_80004B50;
    case 0x80004B54u: goto label_80004B54;
    case 0x80004B58u: goto label_80004B58;
    case 0x80004B5Cu: goto label_80004B5C;
    case 0x80004B60u: goto label_80004B60;
    case 0x80004B64u: goto label_80004B64;
    case 0x80004B68u: goto label_80004B68;
    case 0x80004B6Cu: goto label_80004B6C;
    case 0x80004B70u: goto label_80004B70;
    case 0x80004B74u: goto label_80004B74;
    case 0x80004B78u: goto label_80004B78;
    case 0x80004B7Cu: goto label_80004B7C;
    case 0x80004B80u: goto label_80004B80;
    case 0x80004B84u: goto label_80004B84;
    case 0x80004B88u: goto label_80004B88;
    case 0x80004B8Cu: goto label_80004B8C;
    case 0x80004B90u: goto label_80004B90;
    case 0x80004B94u: goto label_80004B94;
    case 0x80004B98u: goto label_80004B98;
    case 0x80004B9Cu: goto label_80004B9C;
    case 0x80004BA0u: goto label_80004BA0;
    case 0x80004BA4u: goto label_80004BA4;
    case 0x80004BA8u: goto label_80004BA8;
    case 0x80004BACu: goto label_80004BAC;
    case 0x80004BB0u: goto label_80004BB0;
    case 0x80004BB4u: goto label_80004BB4;
    case 0x80004BB8u: goto label_80004BB8;
    case 0x80004BBCu: goto label_80004BBC;
    case 0x80004BC0u: goto label_80004BC0;
    case 0x80004BC4u: goto label_80004BC4;
    case 0x80004BC8u: goto label_80004BC8;
    case 0x80004BCCu: goto label_80004BCC;
    case 0x80004BD0u: goto label_80004BD0;
    case 0x80004BD4u: goto label_80004BD4;
    case 0x80004BD8u: goto label_80004BD8;
    case 0x80004BDCu: goto label_80004BDC;
    case 0x80004BE0u: goto label_80004BE0;
    case 0x80004BE4u: goto label_80004BE4;
    case 0x80004BE8u: goto label_80004BE8;
    case 0x80004BECu: goto label_80004BEC;
    case 0x80004BF0u: goto label_80004BF0;
    case 0x80004BF4u: goto label_80004BF4;
    case 0x80004BF8u: goto label_80004BF8;
    case 0x80004BFCu: goto label_80004BFC;
    case 0x80004C00u: goto label_80004C00;
    case 0x80004C04u: goto label_80004C04;
    case 0x80004C08u: goto label_80004C08;
    case 0x80004C0Cu: goto label_80004C0C;
    case 0x80004C10u: goto label_80004C10;
    case 0x80004C14u: goto label_80004C14;
    case 0x80004C18u: goto label_80004C18;
    case 0x80004C1Cu: goto label_80004C1C;
    case 0x80004C20u: goto label_80004C20;
    case 0x80004C24u: goto label_80004C24;
    case 0x80004C28u: goto label_80004C28;
    case 0x80004C2Cu: goto label_80004C2C;
    case 0x80004C30u: goto label_80004C30;
    case 0x80004C34u: goto label_80004C34;
    case 0x80004C38u: goto label_80004C38;
    case 0x80004C3Cu: goto label_80004C3C;
    case 0x80004C40u: goto label_80004C40;
    case 0x80004C44u: goto label_80004C44;
    case 0x80004C48u: goto label_80004C48;
    case 0x80004C4Cu: goto label_80004C4C;
    case 0x80004C50u: goto label_80004C50;
    case 0x80004C54u: goto label_80004C54;
    case 0x80004C58u: goto label_80004C58;
    case 0x80004C5Cu: goto label_80004C5C;
    case 0x80004C60u: goto label_80004C60;
    case 0x80004C64u: goto label_80004C64;
    case 0x80004C68u: goto label_80004C68;
    case 0x80004C6Cu: goto label_80004C6C;
    case 0x80004C70u: goto label_80004C70;
    case 0x80004C74u: goto label_80004C74;
    case 0x80004C78u: goto label_80004C78;
    case 0x80004C7Cu: goto label_80004C7C;
    case 0x80004C80u: goto label_80004C80;
    case 0x80004C84u: goto label_80004C84;
    case 0x80004C88u: goto label_80004C88;
    case 0x80004C8Cu: goto label_80004C8C;
    case 0x80004C90u: goto label_80004C90;
    case 0x80004C94u: goto label_80004C94;
    case 0x80004C98u: goto label_80004C98;
    case 0x80004C9Cu: goto label_80004C9C;
    case 0x80004CA0u: goto label_80004CA0;
    case 0x80004CA4u: goto label_80004CA4;
    case 0x80004CA8u: goto label_80004CA8;
    case 0x80004CACu: goto label_80004CAC;
    case 0x80004CB0u: goto label_80004CB0;
    case 0x80004CB4u: goto label_80004CB4;
    case 0x80004CB8u: goto label_80004CB8;
    case 0x80004CBCu: goto label_80004CBC;
    case 0x80004CC0u: goto label_80004CC0;
    case 0x80004CC4u: goto label_80004CC4;
    case 0x80004CC8u: goto label_80004CC8;
    case 0x80004CCCu: goto label_80004CCC;
    case 0x80004CD0u: goto label_80004CD0;
    case 0x80004CD4u: goto label_80004CD4;
    case 0x80004CD8u: goto label_80004CD8;
    case 0x80004CDCu: goto label_80004CDC;
    case 0x80004CE0u: goto label_80004CE0;
    case 0x80004CE4u: goto label_80004CE4;
    case 0x80004CE8u: goto label_80004CE8;
    case 0x80004CECu: goto label_80004CEC;
    case 0x80004CF0u: goto label_80004CF0;
    case 0x80004CF4u: goto label_80004CF4;
    case 0x80004CF8u: goto label_80004CF8;
    case 0x80004CFCu: goto label_80004CFC;
    case 0x80004D00u: goto label_80004D00;
    case 0x80004D04u: goto label_80004D04;
    case 0x80004D08u: goto label_80004D08;
    case 0x80004D0Cu: goto label_80004D0C;
    case 0x80004D10u: goto label_80004D10;
    case 0x80004D14u: goto label_80004D14;
    case 0x80004D18u: goto label_80004D18;
    case 0x80004D1Cu: goto label_80004D1C;
    case 0x80004D20u: goto label_80004D20;
    case 0x80004D24u: goto label_80004D24;
    case 0x80004D28u: goto label_80004D28;
    case 0x80004D2Cu: goto label_80004D2C;
    case 0x80004D30u: goto label_80004D30;
    case 0x80004D34u: goto label_80004D34;
    case 0x80004D38u: goto label_80004D38;
    case 0x80004D3Cu: goto label_80004D3C;
    case 0x80004D40u: goto label_80004D40;
    case 0x80004D44u: goto label_80004D44;
    case 0x80004D48u: goto label_80004D48;
    case 0x80004D4Cu: goto label_80004D4C;
    case 0x80004D50u: goto label_80004D50;
    case 0x80004D54u: goto label_80004D54;
    case 0x80004D58u: goto label_80004D58;
    case 0x80004D5Cu: goto label_80004D5C;
    case 0x80004D60u: goto label_80004D60;
    case 0x80004D64u: goto label_80004D64;
    case 0x80004D68u: goto label_80004D68;
    case 0x80004D6Cu: goto label_80004D6C;
    case 0x80004D70u: goto label_80004D70;
    case 0x80004D74u: goto label_80004D74;
    case 0x80004D78u: goto label_80004D78;
    case 0x80004D7Cu: goto label_80004D7C;
    case 0x80004D80u: goto label_80004D80;
    case 0x80004D84u: goto label_80004D84;
    case 0x80004D88u: goto label_80004D88;
    case 0x80004D8Cu: goto label_80004D8C;
    case 0x80004D90u: goto label_80004D90;
    case 0x80004D94u: goto label_80004D94;
    case 0x80004D98u: goto label_80004D98;
    case 0x80004D9Cu: goto label_80004D9C;
    case 0x80004DA0u: goto label_80004DA0;
    case 0x80004DA4u: goto label_80004DA4;
    case 0x80004DA8u: goto label_80004DA8;
    case 0x80004DACu: goto label_80004DAC;
    case 0x80004DB0u: goto label_80004DB0;
    case 0x80004DB4u: goto label_80004DB4;
    case 0x80004DB8u: goto label_80004DB8;
    case 0x80004DBCu: goto label_80004DBC;
    case 0x80004DC0u: goto label_80004DC0;
    case 0x80004DC4u: goto label_80004DC4;
    case 0x80004DC8u: goto label_80004DC8;
    case 0x80004DCCu: goto label_80004DCC;
    case 0x80004DD0u: goto label_80004DD0;
    case 0x80004DD4u: goto label_80004DD4;
    case 0x80004DD8u: goto label_80004DD8;
    case 0x80004DDCu: goto label_80004DDC;
    case 0x80004DE0u: goto label_80004DE0;
    case 0x80004DE4u: goto label_80004DE4;
    case 0x80004DE8u: goto label_80004DE8;
    case 0x80004DECu: goto label_80004DEC;
    case 0x80004DF0u: goto label_80004DF0;
    case 0x80004DF4u: goto label_80004DF4;
    case 0x80004DF8u: goto label_80004DF8;
    case 0x80004DFCu: goto label_80004DFC;
    case 0x80004E00u: goto label_80004E00;
    case 0x80004E04u: goto label_80004E04;
    case 0x80004E08u: goto label_80004E08;
    case 0x80004E0Cu: goto label_80004E0C;
    case 0x80004E10u: goto label_80004E10;
    case 0x80004E14u: goto label_80004E14;
    case 0x80004E18u: goto label_80004E18;
    case 0x80004E1Cu: goto label_80004E1C;
    case 0x80004E20u: goto label_80004E20;
    case 0x80004E24u: goto label_80004E24;
    case 0x80004E28u: goto label_80004E28;
    case 0x80004E2Cu: goto label_80004E2C;
    case 0x80004E30u: goto label_80004E30;
    case 0x80004E34u: goto label_80004E34;
    case 0x80004E38u: goto label_80004E38;
    case 0x80004E3Cu: goto label_80004E3C;
    case 0x80004E40u: goto label_80004E40;
    case 0x80004E44u: goto label_80004E44;
    case 0x80004E48u: goto label_80004E48;
    case 0x80004E4Cu: goto label_80004E4C;
    case 0x80004E50u: goto label_80004E50;
    case 0x80004E54u: goto label_80004E54;
    case 0x80004E58u: goto label_80004E58;
    case 0x80004E5Cu: goto label_80004E5C;
    case 0x80004E60u: goto label_80004E60;
    case 0x80004E64u: goto label_80004E64;
    case 0x80004E68u: goto label_80004E68;
    case 0x80004E6Cu: goto label_80004E6C;
    case 0x80004E70u: goto label_80004E70;
    case 0x80004E74u: goto label_80004E74;
    case 0x80004E78u: goto label_80004E78;
    case 0x80004E7Cu: goto label_80004E7C;
    case 0x80004E80u: goto label_80004E80;
    case 0x80004E84u: goto label_80004E84;
    case 0x80004E88u: goto label_80004E88;
    case 0x80004E8Cu: goto label_80004E8C;
    case 0x80004E90u: goto label_80004E90;
    case 0x80004E94u: goto label_80004E94;
    case 0x80004E98u: goto label_80004E98;
    case 0x80004E9Cu: goto label_80004E9C;
    case 0x80004EA0u: goto label_80004EA0;
    case 0x80004EA4u: goto label_80004EA4;
    case 0x80004EA8u: goto label_80004EA8;
    case 0x80004EACu: goto label_80004EAC;
    case 0x80004EB0u: goto label_80004EB0;
    case 0x80004EB4u: goto label_80004EB4;
    case 0x80004EB8u: goto label_80004EB8;
    case 0x80004EBCu: goto label_80004EBC;
    case 0x80004EC0u: goto label_80004EC0;
    case 0x80004EC4u: goto label_80004EC4;
    case 0x80004EC8u: goto label_80004EC8;
    case 0x80004ECCu: goto label_80004ECC;
    case 0x80004ED0u: goto label_80004ED0;
    case 0x80004ED4u: goto label_80004ED4;
    case 0x80004ED8u: goto label_80004ED8;
    case 0x80004EDCu: goto label_80004EDC;
    case 0x80004EE0u: goto label_80004EE0;
    case 0x80004EE4u: goto label_80004EE4;
    case 0x80004EE8u: goto label_80004EE8;
    case 0x80004EECu: goto label_80004EEC;
    case 0x80004EF0u: goto label_80004EF0;
    case 0x80004EF4u: goto label_80004EF4;
    case 0x80004EF8u: goto label_80004EF8;
    case 0x80004EFCu: goto label_80004EFC;
    case 0x80004F00u: goto label_80004F00;
    case 0x80004F04u: goto label_80004F04;
    case 0x80004F08u: goto label_80004F08;
    case 0x80004F0Cu: goto label_80004F0C;
    case 0x80004F10u: goto label_80004F10;
    case 0x80004F14u: goto label_80004F14;
    case 0x80004F18u: goto label_80004F18;
    case 0x80004F1Cu: goto label_80004F1C;
    case 0x80004F20u: goto label_80004F20;
    case 0x80004F24u: goto label_80004F24;
    case 0x80004F28u: goto label_80004F28;
    case 0x80004F2Cu: goto label_80004F2C;
    case 0x80004F30u: goto label_80004F30;
    case 0x80004F34u: goto label_80004F34;
    case 0x80004F38u: goto label_80004F38;
    case 0x80004F3Cu: goto label_80004F3C;
    case 0x80004F40u: goto label_80004F40;
    case 0x80004F44u: goto label_80004F44;
    case 0x80004F48u: goto label_80004F48;
    case 0x80004F4Cu: goto label_80004F4C;
    case 0x80004F50u: goto label_80004F50;
    case 0x80004F54u: goto label_80004F54;
    case 0x80004F58u: goto label_80004F58;
    case 0x80004F5Cu: goto label_80004F5C;
    case 0x80004F60u: goto label_80004F60;
    case 0x80004F64u: goto label_80004F64;
    case 0x80004F68u: goto label_80004F68;
    case 0x80004F6Cu: goto label_80004F6C;
    case 0x80004F70u: goto label_80004F70;
    case 0x80004F74u: goto label_80004F74;
    case 0x80004F78u: goto label_80004F78;
    case 0x80004F7Cu: goto label_80004F7C;
    case 0x80004F80u: goto label_80004F80;
    case 0x80004F84u: goto label_80004F84;
    case 0x80004F88u: goto label_80004F88;
    case 0x80004F8Cu: goto label_80004F8C;
    case 0x80004F90u: goto label_80004F90;
    case 0x80004F94u: goto label_80004F94;
    case 0x80004F98u: goto label_80004F98;
    case 0x80004F9Cu: goto label_80004F9C;
    case 0x80004FA0u: goto label_80004FA0;
    case 0x80004FA4u: goto label_80004FA4;
    case 0x80004FA8u: goto label_80004FA8;
    case 0x80004FACu: goto label_80004FAC;
    case 0x80004FB0u: goto label_80004FB0;
    case 0x80004FB4u: goto label_80004FB4;
    case 0x80004FB8u: goto label_80004FB8;
    case 0x80004FBCu: goto label_80004FBC;
    case 0x80004FC0u: goto label_80004FC0;
    case 0x80004FC4u: goto label_80004FC4;
    case 0x80004FC8u: goto label_80004FC8;
    case 0x80004FCCu: goto label_80004FCC;
    case 0x80004FD0u: goto label_80004FD0;
    case 0x80004FD4u: goto label_80004FD4;
    case 0x80004FD8u: goto label_80004FD8;
    case 0x80004FDCu: goto label_80004FDC;
    case 0x80004FE0u: goto label_80004FE0;
    case 0x80004FE4u: goto label_80004FE4;
    case 0x80004FE8u: goto label_80004FE8;
    case 0x80004FECu: goto label_80004FEC;
    case 0x80004FF0u: goto label_80004FF0;
    case 0x80004FF4u: goto label_80004FF4;
    case 0x80004FF8u: goto label_80004FF8;
    case 0x80004FFCu: goto label_80004FFC;
    case 0x80005000u: goto label_80005000;
    case 0x80005004u: goto label_80005004;
    case 0x80005008u: goto label_80005008;
    case 0x8000500Cu: goto label_8000500C;
    case 0x80005010u: goto label_80005010;
    case 0x80005014u: goto label_80005014;
    case 0x80005018u: goto label_80005018;
    case 0x8000501Cu: goto label_8000501C;
    case 0x80005020u: goto label_80005020;
    case 0x80005024u: goto label_80005024;
    case 0x80005028u: goto label_80005028;
    case 0x8000502Cu: goto label_8000502C;
    case 0x80005030u: goto label_80005030;
    case 0x80005034u: goto label_80005034;
    case 0x80005038u: goto label_80005038;
    case 0x8000503Cu: goto label_8000503C;
    case 0x80005040u: goto label_80005040;
    case 0x80005044u: goto label_80005044;
    case 0x80005048u: goto label_80005048;
    case 0x8000504Cu: goto label_8000504C;
    case 0x80005050u: goto label_80005050;
    case 0x80005054u: goto label_80005054;
    case 0x80005058u: goto label_80005058;
    case 0x8000505Cu: goto label_8000505C;
    case 0x80005060u: goto label_80005060;
    case 0x80005064u: goto label_80005064;
    case 0x80005068u: goto label_80005068;
    case 0x8000506Cu: goto label_8000506C;
    case 0x80005070u: goto label_80005070;
    case 0x80005074u: goto label_80005074;
    case 0x80005078u: goto label_80005078;
    case 0x8000507Cu: goto label_8000507C;
    case 0x80005080u: goto label_80005080;
    case 0x80005084u: goto label_80005084;
    case 0x80005088u: goto label_80005088;
    case 0x8000508Cu: goto label_8000508C;
    case 0x80005090u: goto label_80005090;
    case 0x80005094u: goto label_80005094;
    case 0x80005098u: goto label_80005098;
    case 0x8000509Cu: goto label_8000509C;
    case 0x800050A0u: goto label_800050A0;
    case 0x800050A4u: goto label_800050A4;
    case 0x800050A8u: goto label_800050A8;
    case 0x800050ACu: goto label_800050AC;
    case 0x800050B0u: goto label_800050B0;
    case 0x800050B4u: goto label_800050B4;
    case 0x800050B8u: goto label_800050B8;
    case 0x800050BCu: goto label_800050BC;
    case 0x800050C0u: goto label_800050C0;
    case 0x800050C4u: goto label_800050C4;
    case 0x800050C8u: goto label_800050C8;
    case 0x800050CCu: goto label_800050CC;
    case 0x800050D0u: goto label_800050D0;
    case 0x800050D4u: goto label_800050D4;
    case 0x800050D8u: goto label_800050D8;
    case 0x800050DCu: goto label_800050DC;
    case 0x800050E0u: goto label_800050E0;
    case 0x800050E4u: goto label_800050E4;
    case 0x800050E8u: goto label_800050E8;
    case 0x800050ECu: goto label_800050EC;
    case 0x800050F0u: goto label_800050F0;
    case 0x800050F4u: goto label_800050F4;
    case 0x800050F8u: goto label_800050F8;
    case 0x800050FCu: goto label_800050FC;
    case 0x80005100u: goto label_80005100;
    case 0x80005104u: goto label_80005104;
    case 0x80005108u: goto label_80005108;
    case 0x8000510Cu: goto label_8000510C;
    case 0x80005110u: goto label_80005110;
    case 0x80005114u: goto label_80005114;
    case 0x80005118u: goto label_80005118;
    case 0x8000511Cu: goto label_8000511C;
    case 0x80005120u: goto label_80005120;
    case 0x80005124u: goto label_80005124;
    case 0x80005128u: goto label_80005128;
    case 0x8000512Cu: goto label_8000512C;
    case 0x80005130u: goto label_80005130;
    case 0x80005134u: goto label_80005134;
    case 0x80005138u: goto label_80005138;
    case 0x8000513Cu: goto label_8000513C;
    case 0x80005140u: goto label_80005140;
    case 0x80005144u: goto label_80005144;
    case 0x80005148u: goto label_80005148;
    case 0x8000514Cu: goto label_8000514C;
    case 0x80005150u: goto label_80005150;
    case 0x80005154u: goto label_80005154;
    case 0x80005158u: goto label_80005158;
    case 0x8000515Cu: goto label_8000515C;
    case 0x80005160u: goto label_80005160;
    case 0x80005164u: goto label_80005164;
    case 0x80005168u: goto label_80005168;
    case 0x8000516Cu: goto label_8000516C;
    case 0x80005170u: goto label_80005170;
    case 0x80005174u: goto label_80005174;
    case 0x80005178u: goto label_80005178;
    case 0x8000517Cu: goto label_8000517C;
    case 0x80005180u: goto label_80005180;
    case 0x80005184u: goto label_80005184;
    case 0x80005188u: goto label_80005188;
    case 0x8000518Cu: goto label_8000518C;
    case 0x80005190u: goto label_80005190;
    case 0x80005194u: goto label_80005194;
    case 0x80005198u: goto label_80005198;
    case 0x8000519Cu: goto label_8000519C;
    case 0x800051A0u: goto label_800051A0;
    case 0x800051A4u: goto label_800051A4;
    case 0x800051A8u: goto label_800051A8;
    case 0x800051ACu: goto label_800051AC;
    case 0x800051B0u: goto label_800051B0;
    case 0x800051B4u: goto label_800051B4;
    case 0x800051B8u: goto label_800051B8;
    case 0x800051BCu: goto label_800051BC;
    case 0x800051C0u: goto label_800051C0;
    case 0x800051C4u: goto label_800051C4;
    case 0x800051C8u: goto label_800051C8;
    case 0x800051CCu: goto label_800051CC;
    case 0x800051D0u: goto label_800051D0;
    case 0x800051D4u: goto label_800051D4;
    case 0x800051D8u: goto label_800051D8;
    case 0x800051DCu: goto label_800051DC;
    case 0x800051E0u: goto label_800051E0;
    case 0x800051E4u: goto label_800051E4;
    case 0x800051E8u: goto label_800051E8;
    case 0x800051ECu: goto label_800051EC;
    case 0x800051F0u: goto label_800051F0;
    case 0x800051F4u: goto label_800051F4;
    case 0x800051F8u: goto label_800051F8;
    case 0x800051FCu: goto label_800051FC;
    case 0x80005200u: goto label_80005200;
    case 0x80005204u: goto label_80005204;
    case 0x80005208u: goto label_80005208;
    case 0x8000520Cu: goto label_8000520C;
    case 0x80005210u: goto label_80005210;
    case 0x80005214u: goto label_80005214;
    case 0x80005218u: goto label_80005218;
    case 0x8000521Cu: goto label_8000521C;
    case 0x80005220u: goto label_80005220;
    case 0x80005224u: goto label_80005224;
    case 0x80005228u: goto label_80005228;
    case 0x8000522Cu: goto label_8000522C;
    case 0x80005230u: goto label_80005230;
    case 0x80005234u: goto label_80005234;
    case 0x80005238u: goto label_80005238;
    case 0x8000523Cu: goto label_8000523C;
    case 0x80005240u: goto label_80005240;
    case 0x80005244u: goto label_80005244;
    case 0x80005248u: goto label_80005248;
    case 0x8000524Cu: goto label_8000524C;
    case 0x80005250u: goto label_80005250;
    case 0x80005254u: goto label_80005254;
    case 0x80005258u: goto label_80005258;
    case 0x8000525Cu: goto label_8000525C;
    case 0x80005260u: goto label_80005260;
    case 0x80005264u: goto label_80005264;
    case 0x80005268u: goto label_80005268;
    case 0x8000526Cu: goto label_8000526C;
    case 0x80005270u: goto label_80005270;
    case 0x80005274u: goto label_80005274;
    case 0x80005278u: goto label_80005278;
    case 0x8000527Cu: goto label_8000527C;
    case 0x80005280u: goto label_80005280;
    case 0x80005284u: goto label_80005284;
    case 0x80005288u: goto label_80005288;
    case 0x8000528Cu: goto label_8000528C;
    case 0x80005290u: goto label_80005290;
    case 0x80005294u: goto label_80005294;
    case 0x80005298u: goto label_80005298;
    case 0x8000529Cu: goto label_8000529C;
    case 0x800052A0u: goto label_800052A0;
    case 0x800052A4u: goto label_800052A4;
    case 0x800052A8u: goto label_800052A8;
    case 0x800052ACu: goto label_800052AC;
    case 0x800052B0u: goto label_800052B0;
    case 0x800052B4u: goto label_800052B4;
    case 0x800052B8u: goto label_800052B8;
    case 0x800052BCu: goto label_800052BC;
    case 0x800052C0u: goto label_800052C0;
    case 0x800052C4u: goto label_800052C4;
    case 0x800052C8u: goto label_800052C8;
    case 0x800052CCu: goto label_800052CC;
    case 0x800052D0u: goto label_800052D0;
    case 0x800052D4u: goto label_800052D4;
    case 0x800052D8u: goto label_800052D8;
    case 0x800052DCu: goto label_800052DC;
    case 0x800052E0u: goto label_800052E0;
    case 0x800052E4u: goto label_800052E4;
    case 0x800052E8u: goto label_800052E8;
    case 0x800052ECu: goto label_800052EC;
    case 0x800052F0u: goto label_800052F0;
    case 0x800052F4u: goto label_800052F4;
    case 0x800052F8u: goto label_800052F8;
    case 0x800052FCu: goto label_800052FC;
    case 0x80005300u: goto label_80005300;
    case 0x80005304u: goto label_80005304;
    case 0x80005308u: goto label_80005308;
    case 0x8000530Cu: goto label_8000530C;
    case 0x80005310u: goto label_80005310;
    case 0x80005314u: goto label_80005314;
    case 0x80005318u: goto label_80005318;
    case 0x8000531Cu: goto label_8000531C;
    case 0x80005320u: goto label_80005320;
    case 0x80005324u: goto label_80005324;
    case 0x80005328u: goto label_80005328;
    case 0x8000532Cu: goto label_8000532C;
    case 0x80005330u: goto label_80005330;
    case 0x80005334u: goto label_80005334;
    case 0x80005338u: goto label_80005338;
    case 0x8000533Cu: goto label_8000533C;
    case 0x80005340u: goto label_80005340;
    case 0x80005344u: goto label_80005344;
    case 0x80005348u: goto label_80005348;
    case 0x8000534Cu: goto label_8000534C;
    case 0x80005350u: goto label_80005350;
    case 0x80005354u: goto label_80005354;
    case 0x80005358u: goto label_80005358;
    case 0x8000535Cu: goto label_8000535C;
    case 0x80005360u: goto label_80005360;
    case 0x80005364u: goto label_80005364;
    case 0x80005368u: goto label_80005368;
    case 0x8000536Cu: goto label_8000536C;
    case 0x80005370u: goto label_80005370;
    case 0x80005374u: goto label_80005374;
    case 0x80005378u: goto label_80005378;
    case 0x8000537Cu: goto label_8000537C;
    case 0x80005380u: goto label_80005380;
    case 0x80005384u: goto label_80005384;
    case 0x80005388u: goto label_80005388;
    case 0x8000538Cu: goto label_8000538C;
    case 0x80005390u: goto label_80005390;
    case 0x80005394u: goto label_80005394;
    case 0x80005398u: goto label_80005398;
    case 0x8000539Cu: goto label_8000539C;
    case 0x800053A0u: goto label_800053A0;
    case 0x800053A4u: goto label_800053A4;
    case 0x800053A8u: goto label_800053A8;
    case 0x800053ACu: goto label_800053AC;
    case 0x800053B0u: goto label_800053B0;
    case 0x800053B4u: goto label_800053B4;
    case 0x800053B8u: goto label_800053B8;
    case 0x800053BCu: goto label_800053BC;
    case 0x800053C0u: goto label_800053C0;
    case 0x800053C4u: goto label_800053C4;
    case 0x800053C8u: goto label_800053C8;
    case 0x800053CCu: goto label_800053CC;
    case 0x800053D0u: goto label_800053D0;
    case 0x800053D4u: goto label_800053D4;
    case 0x800053D8u: goto label_800053D8;
    case 0x800053DCu: goto label_800053DC;
    case 0x800053E0u: goto label_800053E0;
    case 0x800053E4u: goto label_800053E4;
    case 0x800053E8u: goto label_800053E8;
    case 0x800053ECu: goto label_800053EC;
    case 0x800053F0u: goto label_800053F0;
    case 0x800053F4u: goto label_800053F4;
    case 0x800053F8u: goto label_800053F8;
    case 0x800053FCu: goto label_800053FC;
    case 0x80005400u: goto label_80005400;
    case 0x80005404u: goto label_80005404;
    case 0x80005408u: goto label_80005408;
    case 0x8000540Cu: goto label_8000540C;
    case 0x80005410u: goto label_80005410;
    case 0x80005414u: goto label_80005414;
    case 0x80005418u: goto label_80005418;
    case 0x8000541Cu: goto label_8000541C;
    case 0x80005420u: goto label_80005420;
    case 0x80005424u: goto label_80005424;
    case 0x80005428u: goto label_80005428;
    case 0x8000542Cu: goto label_8000542C;
    case 0x80005430u: goto label_80005430;
    case 0x80005434u: goto label_80005434;
    case 0x80005438u: goto label_80005438;
    case 0x8000543Cu: goto label_8000543C;
    case 0x80005440u: goto label_80005440;
    case 0x80005444u: goto label_80005444;
    case 0x80005448u: goto label_80005448;
    case 0x8000544Cu: goto label_8000544C;
    case 0x80005450u: goto label_80005450;
    case 0x80005454u: goto label_80005454;
    case 0x80005458u: goto label_80005458;
    case 0x8000545Cu: goto label_8000545C;
    case 0x80005460u: goto label_80005460;
    case 0x80005464u: goto label_80005464;
    case 0x80005468u: goto label_80005468;
    case 0x8000546Cu: goto label_8000546C;
    case 0x80005470u: goto label_80005470;
    case 0x80005474u: goto label_80005474;
    case 0x80005478u: goto label_80005478;
    case 0x8000547Cu: goto label_8000547C;
    case 0x80005480u: goto label_80005480;
    case 0x80005484u: goto label_80005484;
    case 0x80005488u: goto label_80005488;
    case 0x8000548Cu: goto label_8000548C;
    case 0x80005490u: goto label_80005490;
    case 0x80005494u: goto label_80005494;
    case 0x80005498u: goto label_80005498;
    case 0x8000549Cu: goto label_8000549C;
    case 0x800054A0u: goto label_800054A0;
    case 0x800054A4u: goto label_800054A4;
    case 0x800054A8u: goto label_800054A8;
    case 0x800054ACu: goto label_800054AC;
    case 0x800054B0u: goto label_800054B0;
    case 0x800054B4u: goto label_800054B4;
    case 0x800054B8u: goto label_800054B8;
    case 0x800054BCu: goto label_800054BC;
    case 0x800054C0u: goto label_800054C0;
    case 0x800054C4u: goto label_800054C4;
    case 0x800054C8u: goto label_800054C8;
    case 0x800054CCu: goto label_800054CC;
    case 0x800054D0u: goto label_800054D0;
    case 0x800054D4u: goto label_800054D4;
    case 0x800054D8u: goto label_800054D8;
    case 0x800054DCu: goto label_800054DC;
    case 0x800054E0u: goto label_800054E0;
    case 0x800054E4u: goto label_800054E4;
    case 0x800054E8u: goto label_800054E8;
    case 0x800054ECu: goto label_800054EC;
    case 0x800054F0u: goto label_800054F0;
    case 0x800054F4u: goto label_800054F4;
    case 0x800054F8u: goto label_800054F8;
    case 0x800054FCu: goto label_800054FC;
    case 0x80005500u: goto label_80005500;
    case 0x80005504u: goto label_80005504;
    case 0x80005508u: goto label_80005508;
    case 0x8000550Cu: goto label_8000550C;
    case 0x80005510u: goto label_80005510;
    case 0x80005514u: goto label_80005514;
    case 0x80005518u: goto label_80005518;
    case 0x8000551Cu: goto label_8000551C;
    case 0x80005520u: goto label_80005520;
    case 0x80005524u: goto label_80005524;
    case 0x80005528u: goto label_80005528;
    case 0x8000552Cu: goto label_8000552C;
    case 0x80005530u: goto label_80005530;
    case 0x80005534u: goto label_80005534;
    case 0x80005538u: goto label_80005538;
    case 0x8000553Cu: goto label_8000553C;
    case 0x80005540u: goto label_80005540;
    case 0x80005544u: goto label_80005544;
    case 0x80005548u: goto label_80005548;
    case 0x8000554Cu: goto label_8000554C;
    case 0x80005550u: goto label_80005550;
    case 0x80005554u: goto label_80005554;
    case 0x80005558u: goto label_80005558;
    case 0x8000555Cu: goto label_8000555C;
    case 0x80005560u: goto label_80005560;
    case 0x80005564u: goto label_80005564;
    case 0x80005568u: goto label_80005568;
    case 0x8000556Cu: goto label_8000556C;
    case 0x80005570u: goto label_80005570;
    case 0x80005574u: goto label_80005574;
    case 0x80005578u: goto label_80005578;
    case 0x8000557Cu: goto label_8000557C;
    case 0x80005580u: goto label_80005580;
    case 0x80005584u: goto label_80005584;
    case 0x80005588u: goto label_80005588;
    case 0x8000558Cu: goto label_8000558C;
    case 0x80005590u: goto label_80005590;
    case 0x80005594u: goto label_80005594;
    case 0x80005598u: goto label_80005598;
    case 0x8000559Cu: goto label_8000559C;
    case 0x800055A0u: goto label_800055A0;
    case 0x800055A4u: goto label_800055A4;
    case 0x800055A8u: goto label_800055A8;
    case 0x800055ACu: goto label_800055AC;
    case 0x800055B0u: goto label_800055B0;
    case 0x800055B4u: goto label_800055B4;
    case 0x800055B8u: goto label_800055B8;
    case 0x800055BCu: goto label_800055BC;
    case 0x800055C0u: goto label_800055C0;
    case 0x800055C4u: goto label_800055C4;
    case 0x800055C8u: goto label_800055C8;
    case 0x800055CCu: goto label_800055CC;
    case 0x800055D0u: goto label_800055D0;
    case 0x800055D4u: goto label_800055D4;
    case 0x800055D8u: goto label_800055D8;
    case 0x800055DCu: goto label_800055DC;
    case 0x800055E0u: goto label_800055E0;
    case 0x800055E4u: goto label_800055E4;
    case 0x800055E8u: goto label_800055E8;
    case 0x800055ECu: goto label_800055EC;
    case 0x800055F0u: goto label_800055F0;
    case 0x800055F4u: goto label_800055F4;
    case 0x800055F8u: goto label_800055F8;
    case 0x800055FCu: goto label_800055FC;
    case 0x80005600u: goto label_80005600;
    case 0x80005604u: goto label_80005604;
    case 0x80005608u: goto label_80005608;
    case 0x8000560Cu: goto label_8000560C;
    case 0x80005610u: goto label_80005610;
    case 0x80005614u: goto label_80005614;
    case 0x80005618u: goto label_80005618;
    case 0x8000561Cu: goto label_8000561C;
    case 0x80005620u: goto label_80005620;
    case 0x80005624u: goto label_80005624;
    case 0x80005628u: goto label_80005628;
    case 0x8000562Cu: goto label_8000562C;
    case 0x80005630u: goto label_80005630;
    case 0x80005634u: goto label_80005634;
    case 0x80005638u: goto label_80005638;
    case 0x8000563Cu: goto label_8000563C;
    case 0x80005640u: goto label_80005640;
    case 0x80005644u: goto label_80005644;
    case 0x80005648u: goto label_80005648;
    case 0x8000564Cu: goto label_8000564C;
    case 0x80005650u: goto label_80005650;
    case 0x80005654u: goto label_80005654;
    case 0x80005658u: goto label_80005658;
    case 0x8000565Cu: goto label_8000565C;
    case 0x80005660u: goto label_80005660;
    case 0x80005664u: goto label_80005664;
    case 0x80005668u: goto label_80005668;
    case 0x8000566Cu: goto label_8000566C;
    case 0x80005670u: goto label_80005670;
    case 0x80005674u: goto label_80005674;
    case 0x80005678u: goto label_80005678;
    case 0x8000567Cu: goto label_8000567C;
    case 0x80005680u: goto label_80005680;
    case 0x80005684u: goto label_80005684;
    case 0x80005688u: goto label_80005688;
    case 0x8000568Cu: goto label_8000568C;
    case 0x80005690u: goto label_80005690;
    case 0x80005694u: goto label_80005694;
    case 0x80005698u: goto label_80005698;
    case 0x8000569Cu: goto label_8000569C;
    case 0x800056A0u: goto label_800056A0;
    case 0x800056A4u: goto label_800056A4;
    case 0x800056A8u: goto label_800056A8;
    case 0x800056ACu: goto label_800056AC;
    case 0x800056B0u: goto label_800056B0;
    case 0x800056B4u: goto label_800056B4;
    case 0x800056B8u: goto label_800056B8;
    case 0x800056BCu: goto label_800056BC;
    case 0x800056C0u: goto label_800056C0;
    case 0x800056C4u: goto label_800056C4;
    case 0x800056C8u: goto label_800056C8;
    case 0x800056CCu: goto label_800056CC;
    case 0x800056D0u: goto label_800056D0;
    case 0x800056D4u: goto label_800056D4;
    case 0x800056D8u: goto label_800056D8;
    case 0x800056DCu: goto label_800056DC;
    case 0x800056E0u: goto label_800056E0;
    case 0x800056E4u: goto label_800056E4;
    case 0x800056E8u: goto label_800056E8;
    case 0x800056ECu: goto label_800056EC;
    case 0x800056F0u: goto label_800056F0;
    case 0x800056F4u: goto label_800056F4;
    case 0x800056F8u: goto label_800056F8;
    case 0x800056FCu: goto label_800056FC;
    case 0x80005700u: goto label_80005700;
    case 0x80005704u: goto label_80005704;
    case 0x80005708u: goto label_80005708;
    case 0x8000570Cu: goto label_8000570C;
    case 0x80005710u: goto label_80005710;
    case 0x80005714u: goto label_80005714;
    case 0x80005718u: goto label_80005718;
    case 0x8000571Cu: goto label_8000571C;
    case 0x80005720u: goto label_80005720;
    case 0x80005724u: goto label_80005724;
    case 0x80005728u: goto label_80005728;
    case 0x8000572Cu: goto label_8000572C;
    case 0x80005730u: goto label_80005730;
    case 0x80005734u: goto label_80005734;
    case 0x80005738u: goto label_80005738;
    case 0x8000573Cu: goto label_8000573C;
    case 0x80005740u: goto label_80005740;
    case 0x80005744u: goto label_80005744;
    case 0x80005748u: goto label_80005748;
    case 0x8000574Cu: goto label_8000574C;
    case 0x80005750u: goto label_80005750;
    case 0x80005754u: goto label_80005754;
    case 0x80005758u: goto label_80005758;
    case 0x8000575Cu: goto label_8000575C;
    case 0x80005760u: goto label_80005760;
    case 0x80005764u: goto label_80005764;
    case 0x80005768u: goto label_80005768;
    case 0x8000576Cu: goto label_8000576C;
    case 0x80005770u: goto label_80005770;
    case 0x80005774u: goto label_80005774;
    case 0x80005778u: goto label_80005778;
    case 0x8000577Cu: goto label_8000577C;
    case 0x80005780u: goto label_80005780;
    case 0x80005784u: goto label_80005784;
    case 0x80005788u: goto label_80005788;
    case 0x8000578Cu: goto label_8000578C;
    case 0x80005790u: goto label_80005790;
    case 0x80005794u: goto label_80005794;
    case 0x80005798u: goto label_80005798;
    case 0x8000579Cu: goto label_8000579C;
    case 0x800057A0u: goto label_800057A0;
    case 0x800057A4u: goto label_800057A4;
    case 0x800057A8u: goto label_800057A8;
    case 0x800057ACu: goto label_800057AC;
    case 0x800057B0u: goto label_800057B0;
    case 0x800057B4u: goto label_800057B4;
    case 0x800057B8u: goto label_800057B8;
    case 0x800057BCu: goto label_800057BC;
    case 0x800057C0u: goto label_800057C0;
    case 0x800057C4u: goto label_800057C4;
    case 0x800057C8u: goto label_800057C8;
    case 0x800057CCu: goto label_800057CC;
    case 0x800057D0u: goto label_800057D0;
    case 0x800057D4u: goto label_800057D4;
    case 0x800057D8u: goto label_800057D8;
    case 0x800057DCu: goto label_800057DC;
    case 0x800057E0u: goto label_800057E0;
    case 0x800057E4u: goto label_800057E4;
    case 0x800057E8u: goto label_800057E8;
    case 0x800057ECu: goto label_800057EC;
    case 0x800057F0u: goto label_800057F0;
    case 0x800057F4u: goto label_800057F4;
    case 0x800057F8u: goto label_800057F8;
    case 0x800057FCu: goto label_800057FC;
    case 0x80005800u: goto label_80005800;
    case 0x80005804u: goto label_80005804;
    case 0x80005808u: goto label_80005808;
    case 0x8000580Cu: goto label_8000580C;
    case 0x80005810u: goto label_80005810;
    case 0x80005814u: goto label_80005814;
    case 0x80005818u: goto label_80005818;
    case 0x8000581Cu: goto label_8000581C;
    case 0x80005820u: goto label_80005820;
    case 0x80005824u: goto label_80005824;
    case 0x80005828u: goto label_80005828;
    case 0x8000582Cu: goto label_8000582C;
    case 0x80005830u: goto label_80005830;
    case 0x80005834u: goto label_80005834;
    case 0x80005838u: goto label_80005838;
    case 0x8000583Cu: goto label_8000583C;
    case 0x80005840u: goto label_80005840;
    case 0x80005844u: goto label_80005844;
    case 0x80005848u: goto label_80005848;
    case 0x8000584Cu: goto label_8000584C;
    case 0x80005850u: goto label_80005850;
    case 0x80005854u: goto label_80005854;
    case 0x80005858u: goto label_80005858;
    case 0x8000585Cu: goto label_8000585C;
    case 0x80005860u: goto label_80005860;
    case 0x80005864u: goto label_80005864;
    case 0x80005868u: goto label_80005868;
    case 0x8000586Cu: goto label_8000586C;
    case 0x80005870u: goto label_80005870;
    case 0x80005874u: goto label_80005874;
    case 0x80005878u: goto label_80005878;
    case 0x8000587Cu: goto label_8000587C;
    case 0x80005880u: goto label_80005880;
    case 0x80005884u: goto label_80005884;
    case 0x80005888u: goto label_80005888;
    case 0x8000588Cu: goto label_8000588C;
    case 0x80005890u: goto label_80005890;
    case 0x80005894u: goto label_80005894;
    case 0x80005898u: goto label_80005898;
    case 0x8000589Cu: goto label_8000589C;
    case 0x800058A0u: goto label_800058A0;
    case 0x800058A4u: goto label_800058A4;
    case 0x800058A8u: goto label_800058A8;
    case 0x800058ACu: goto label_800058AC;
    case 0x800058B0u: goto label_800058B0;
    case 0x800058B4u: goto label_800058B4;
    case 0x800058B8u: goto label_800058B8;
    case 0x800058BCu: goto label_800058BC;
    case 0x800058C0u: goto label_800058C0;
    case 0x800058C4u: goto label_800058C4;
    case 0x800058C8u: goto label_800058C8;
    case 0x800058CCu: goto label_800058CC;
    case 0x800058D0u: goto label_800058D0;
    case 0x800058D4u: goto label_800058D4;
    case 0x800058D8u: goto label_800058D8;
    case 0x800058DCu: goto label_800058DC;
    case 0x800058E0u: goto label_800058E0;
    case 0x800058E4u: goto label_800058E4;
    case 0x800058E8u: goto label_800058E8;
    case 0x800058ECu: goto label_800058EC;
    case 0x800058F0u: goto label_800058F0;
    case 0x800058F4u: goto label_800058F4;
    case 0x800058F8u: goto label_800058F8;
    case 0x800058FCu: goto label_800058FC;
    case 0x80005900u: goto label_80005900;
    case 0x80005904u: goto label_80005904;
    case 0x80005908u: goto label_80005908;
    case 0x8000590Cu: goto label_8000590C;
    case 0x80005910u: goto label_80005910;
    case 0x80005914u: goto label_80005914;
    case 0x80005918u: goto label_80005918;
    case 0x8000591Cu: goto label_8000591C;
    case 0x80005920u: goto label_80005920;
    case 0x80005924u: goto label_80005924;
    case 0x80005928u: goto label_80005928;
    case 0x8000592Cu: goto label_8000592C;
    case 0x80005930u: goto label_80005930;
    case 0x80005934u: goto label_80005934;
    case 0x80005938u: goto label_80005938;
    case 0x8000593Cu: goto label_8000593C;
    case 0x80005940u: goto label_80005940;
    case 0x80005944u: goto label_80005944;
    case 0x80005948u: goto label_80005948;
    case 0x8000594Cu: goto label_8000594C;
    case 0x80005950u: goto label_80005950;
    case 0x80005954u: goto label_80005954;
    case 0x80005958u: goto label_80005958;
    case 0x8000595Cu: goto label_8000595C;
    case 0x80005960u: goto label_80005960;
    case 0x80005964u: goto label_80005964;
    case 0x80005968u: goto label_80005968;
    case 0x8000596Cu: goto label_8000596C;
    case 0x80005970u: goto label_80005970;
    case 0x80005974u: goto label_80005974;
    case 0x80005978u: goto label_80005978;
    case 0x8000597Cu: goto label_8000597C;
    case 0x80005980u: goto label_80005980;
    case 0x80005984u: goto label_80005984;
    case 0x80005988u: goto label_80005988;
    case 0x8000598Cu: goto label_8000598C;
    case 0x80005990u: goto label_80005990;
    case 0x80005994u: goto label_80005994;
    case 0x80005998u: goto label_80005998;
    case 0x8000599Cu: goto label_8000599C;
    case 0x800059A0u: goto label_800059A0;
    case 0x800059A4u: goto label_800059A4;
    case 0x800059A8u: goto label_800059A8;
    case 0x800059ACu: goto label_800059AC;
    case 0x800059B0u: goto label_800059B0;
    case 0x800059B4u: goto label_800059B4;
    case 0x800059B8u: goto label_800059B8;
    case 0x800059BCu: goto label_800059BC;
    case 0x800059C0u: goto label_800059C0;
    case 0x800059C4u: goto label_800059C4;
    case 0x800059C8u: goto label_800059C8;
    case 0x800059CCu: goto label_800059CC;
    case 0x800059D0u: goto label_800059D0;
    case 0x800059D4u: goto label_800059D4;
    case 0x800059D8u: goto label_800059D8;
    case 0x800059DCu: goto label_800059DC;
    case 0x800059E0u: goto label_800059E0;
    case 0x800059E4u: goto label_800059E4;
    case 0x800059E8u: goto label_800059E8;
    case 0x800059ECu: goto label_800059EC;
    case 0x800059F0u: goto label_800059F0;
    case 0x800059F4u: goto label_800059F4;
    case 0x800059F8u: goto label_800059F8;
    case 0x800059FCu: goto label_800059FC;
    case 0x80005A00u: goto label_80005A00;
    case 0x80005A04u: goto label_80005A04;
    case 0x80005A08u: goto label_80005A08;
    case 0x80005A0Cu: goto label_80005A0C;
    case 0x80005A10u: goto label_80005A10;
    case 0x80005A14u: goto label_80005A14;
    case 0x80005A18u: goto label_80005A18;
    case 0x80005A1Cu: goto label_80005A1C;
    case 0x80005A20u: goto label_80005A20;
    case 0x80005A24u: goto label_80005A24;
    case 0x80005A28u: goto label_80005A28;
    case 0x80005A2Cu: goto label_80005A2C;
    case 0x80005A30u: goto label_80005A30;
    case 0x80005A34u: goto label_80005A34;
    case 0x80005A38u: goto label_80005A38;
    case 0x80005A3Cu: goto label_80005A3C;
    case 0x80005A40u: goto label_80005A40;
    case 0x80005A44u: goto label_80005A44;
    case 0x80005A48u: goto label_80005A48;
    case 0x80005A4Cu: goto label_80005A4C;
    case 0x80005A50u: goto label_80005A50;
    case 0x80005A54u: goto label_80005A54;
    case 0x80005A58u: goto label_80005A58;
    case 0x80005A5Cu: goto label_80005A5C;
    case 0x80005A60u: goto label_80005A60;
    case 0x80005A64u: goto label_80005A64;
    case 0x80005A68u: goto label_80005A68;
    case 0x80005A6Cu: goto label_80005A6C;
    case 0x80005A70u: goto label_80005A70;
    case 0x80005A74u: goto label_80005A74;
    case 0x80005A78u: goto label_80005A78;
    case 0x80005A7Cu: goto label_80005A7C;
    case 0x80005A80u: goto label_80005A80;
    case 0x80005A84u: goto label_80005A84;
    case 0x80005A88u: goto label_80005A88;
    case 0x80005A8Cu: goto label_80005A8C;
    case 0x80005A90u: goto label_80005A90;
    case 0x80005A94u: goto label_80005A94;
    case 0x80005A98u: goto label_80005A98;
    case 0x80005A9Cu: goto label_80005A9C;
    case 0x80005AA0u: goto label_80005AA0;
    case 0x80005AA4u: goto label_80005AA4;
    case 0x80005AA8u: goto label_80005AA8;
    case 0x80005AACu: goto label_80005AAC;
    case 0x80005AB0u: goto label_80005AB0;
    case 0x80005AB4u: goto label_80005AB4;
    case 0x80005AB8u: goto label_80005AB8;
    case 0x80005ABCu: goto label_80005ABC;
    case 0x80005AC0u: goto label_80005AC0;
    case 0x80005AC4u: goto label_80005AC4;
    case 0x80005AC8u: goto label_80005AC8;
    case 0x80005ACCu: goto label_80005ACC;
    case 0x80005AD0u: goto label_80005AD0;
    case 0x80005AD4u: goto label_80005AD4;
    case 0x80005AD8u: goto label_80005AD8;
    case 0x80005ADCu: goto label_80005ADC;
    case 0x80005AE0u: goto label_80005AE0;
    case 0x80005AE4u: goto label_80005AE4;
    case 0x80005AE8u: goto label_80005AE8;
    case 0x80005AECu: goto label_80005AEC;
    case 0x80005AF0u: goto label_80005AF0;
    case 0x80005AF4u: goto label_80005AF4;
    case 0x80005AF8u: goto label_80005AF8;
    case 0x80005AFCu: goto label_80005AFC;
    case 0x80005B00u: goto label_80005B00;
    case 0x80005B04u: goto label_80005B04;
    case 0x80005B08u: goto label_80005B08;
    case 0x80005B0Cu: goto label_80005B0C;
    case 0x80005B10u: goto label_80005B10;
    case 0x80005B14u: goto label_80005B14;
    case 0x80005B18u: goto label_80005B18;
    case 0x80005B1Cu: goto label_80005B1C;
    case 0x80005B20u: goto label_80005B20;
    case 0x80005B24u: goto label_80005B24;
    case 0x80005B28u: goto label_80005B28;
    case 0x80005B2Cu: goto label_80005B2C;
    case 0x80005B30u: goto label_80005B30;
    case 0x80005B34u: goto label_80005B34;
    case 0x80005B38u: goto label_80005B38;
    case 0x80005B3Cu: goto label_80005B3C;
    case 0x80005B40u: goto label_80005B40;
    case 0x80005B44u: goto label_80005B44;
    case 0x80005B48u: goto label_80005B48;
    case 0x80005B4Cu: goto label_80005B4C;
    case 0x80005B50u: goto label_80005B50;
    case 0x80005B54u: goto label_80005B54;
    case 0x80005B58u: goto label_80005B58;
    case 0x80005B5Cu: goto label_80005B5C;
    case 0x80005B60u: goto label_80005B60;
    case 0x80005B64u: goto label_80005B64;
    case 0x80005B68u: goto label_80005B68;
    case 0x80005B6Cu: goto label_80005B6C;
    case 0x80005B70u: goto label_80005B70;
    case 0x80005B74u: goto label_80005B74;
    case 0x80005B78u: goto label_80005B78;
    case 0x80005B7Cu: goto label_80005B7C;
    case 0x80005B80u: goto label_80005B80;
    case 0x80005B84u: goto label_80005B84;
    case 0x80005B88u: goto label_80005B88;
    case 0x80005B8Cu: goto label_80005B8C;
    case 0x80005B90u: goto label_80005B90;
    case 0x80005B94u: goto label_80005B94;
    case 0x80005B98u: goto label_80005B98;
    case 0x80005B9Cu: goto label_80005B9C;
    case 0x80005BA0u: goto label_80005BA0;
    case 0x80005BA4u: goto label_80005BA4;
    case 0x80005BA8u: goto label_80005BA8;
    case 0x80005BACu: goto label_80005BAC;
    case 0x80005BB0u: goto label_80005BB0;
    case 0x80005BB4u: goto label_80005BB4;
    case 0x80005BB8u: goto label_80005BB8;
    case 0x80005BBCu: goto label_80005BBC;
    case 0x80005BC0u: goto label_80005BC0;
    case 0x80005BC4u: goto label_80005BC4;
    case 0x80005BC8u: goto label_80005BC8;
    case 0x80005BCCu: goto label_80005BCC;
    case 0x80005BD0u: goto label_80005BD0;
    case 0x80005BD4u: goto label_80005BD4;
    case 0x80005BD8u: goto label_80005BD8;
    case 0x80005BDCu: goto label_80005BDC;
    case 0x80005BE0u: goto label_80005BE0;
    case 0x80005BE4u: goto label_80005BE4;
    case 0x80005BE8u: goto label_80005BE8;
    case 0x80005BECu: goto label_80005BEC;
    case 0x80005BF0u: goto label_80005BF0;
    case 0x80005BF4u: goto label_80005BF4;
    case 0x80005BF8u: goto label_80005BF8;
    case 0x80005BFCu: goto label_80005BFC;
    case 0x80005C00u: goto label_80005C00;
    case 0x80005C04u: goto label_80005C04;
    case 0x80005C08u: goto label_80005C08;
    case 0x80005C0Cu: goto label_80005C0C;
    case 0x80005C10u: goto label_80005C10;
    case 0x80005C14u: goto label_80005C14;
    case 0x80005C18u: goto label_80005C18;
    case 0x80005C1Cu: goto label_80005C1C;
    case 0x80005C20u: goto label_80005C20;
    case 0x80005C24u: goto label_80005C24;
    case 0x80005C28u: goto label_80005C28;
    case 0x80005C2Cu: goto label_80005C2C;
    case 0x80005C30u: goto label_80005C30;
    case 0x80005C34u: goto label_80005C34;
    case 0x80005C38u: goto label_80005C38;
    case 0x80005C3Cu: goto label_80005C3C;
    case 0x80005C40u: goto label_80005C40;
    case 0x80005C44u: goto label_80005C44;
    case 0x80005C48u: goto label_80005C48;
    case 0x80005C4Cu: goto label_80005C4C;
    case 0x80005C50u: goto label_80005C50;
    case 0x80005C54u: goto label_80005C54;
    case 0x80005C58u: goto label_80005C58;
    case 0x80005C5Cu: goto label_80005C5C;
    case 0x80005C60u: goto label_80005C60;
    case 0x80005C64u: goto label_80005C64;
    case 0x80005C68u: goto label_80005C68;
    case 0x80005C6Cu: goto label_80005C6C;
    case 0x80005C70u: goto label_80005C70;
    case 0x80005C74u: goto label_80005C74;
    case 0x80005C78u: goto label_80005C78;
    case 0x80005C7Cu: goto label_80005C7C;
    case 0x80005C80u: goto label_80005C80;
    case 0x80005C84u: goto label_80005C84;
    case 0x80005C88u: goto label_80005C88;
    case 0x80005C8Cu: goto label_80005C8C;
    case 0x80005C90u: goto label_80005C90;
    case 0x80005C94u: goto label_80005C94;
    case 0x80005C98u: goto label_80005C98;
    case 0x80005C9Cu: goto label_80005C9C;
    case 0x80005CA0u: goto label_80005CA0;
    case 0x80005CA4u: goto label_80005CA4;
    case 0x80005CA8u: goto label_80005CA8;
    case 0x80005CACu: goto label_80005CAC;
    case 0x80005CB0u: goto label_80005CB0;
    case 0x80005CB4u: goto label_80005CB4;
    case 0x80005CB8u: goto label_80005CB8;
    case 0x80005CBCu: goto label_80005CBC;
    case 0x80005CC0u: goto label_80005CC0;
    case 0x80005CC4u: goto label_80005CC4;
    case 0x80005CC8u: goto label_80005CC8;
    case 0x80005CCCu: goto label_80005CCC;
    case 0x80005CD0u: goto label_80005CD0;
    case 0x80005CD4u: goto label_80005CD4;
    case 0x80005CD8u: goto label_80005CD8;
    case 0x80005CDCu: goto label_80005CDC;
    case 0x80005CE0u: goto label_80005CE0;
    case 0x80005CE4u: goto label_80005CE4;
    case 0x80005CE8u: goto label_80005CE8;
    case 0x80005CECu: goto label_80005CEC;
    case 0x80005CF0u: goto label_80005CF0;
    case 0x80005CF4u: goto label_80005CF4;
    case 0x80005CF8u: goto label_80005CF8;
    case 0x80005CFCu: goto label_80005CFC;
    case 0x80005D00u: goto label_80005D00;
    case 0x80005D04u: goto label_80005D04;
    case 0x80005D08u: goto label_80005D08;
    case 0x80005D0Cu: goto label_80005D0C;
    case 0x80005D10u: goto label_80005D10;
    case 0x80005D14u: goto label_80005D14;
    case 0x80005D18u: goto label_80005D18;
    case 0x80005D1Cu: goto label_80005D1C;
    case 0x80005D20u: goto label_80005D20;
    case 0x80005D24u: goto label_80005D24;
    case 0x80005D28u: goto label_80005D28;
    case 0x80005D2Cu: goto label_80005D2C;
    case 0x80005D30u: goto label_80005D30;
    case 0x80005D34u: goto label_80005D34;
    case 0x80005D38u: goto label_80005D38;
    case 0x80005D3Cu: goto label_80005D3C;
    case 0x80005D40u: goto label_80005D40;
    case 0x80005D44u: goto label_80005D44;
    case 0x80005D48u: goto label_80005D48;
    case 0x80005D4Cu: goto label_80005D4C;
    case 0x80005D50u: goto label_80005D50;
    case 0x80005D54u: goto label_80005D54;
    case 0x80005D58u: goto label_80005D58;
    case 0x80005D5Cu: goto label_80005D5C;
    case 0x80005D60u: goto label_80005D60;
    case 0x80005D64u: goto label_80005D64;
    case 0x80005D68u: goto label_80005D68;
    case 0x80005D6Cu: goto label_80005D6C;
    case 0x80005D70u: goto label_80005D70;
    case 0x80005D74u: goto label_80005D74;
    case 0x80005D78u: goto label_80005D78;
    case 0x80005D7Cu: goto label_80005D7C;
    case 0x80005D80u: goto label_80005D80;
    case 0x80005D84u: goto label_80005D84;
    case 0x80005D88u: goto label_80005D88;
    case 0x80005D8Cu: goto label_80005D8C;
    case 0x80005D90u: goto label_80005D90;
    case 0x80005D94u: goto label_80005D94;
    case 0x80005D98u: goto label_80005D98;
    case 0x80005D9Cu: goto label_80005D9C;
    case 0x80005DA0u: goto label_80005DA0;
    case 0x80005DA4u: goto label_80005DA4;
    case 0x80005DA8u: goto label_80005DA8;
    case 0x80005DACu: goto label_80005DAC;
    case 0x80005DB0u: goto label_80005DB0;
    case 0x80005DB4u: goto label_80005DB4;
    case 0x80005DB8u: goto label_80005DB8;
    case 0x80005DBCu: goto label_80005DBC;
    case 0x80005DC0u: goto label_80005DC0;
    case 0x80005DC4u: goto label_80005DC4;
    case 0x80005DC8u: goto label_80005DC8;
    case 0x80005DCCu: goto label_80005DCC;
    case 0x80005DD0u: goto label_80005DD0;
    case 0x80005DD4u: goto label_80005DD4;
    case 0x80005DD8u: goto label_80005DD8;
    case 0x80005DDCu: goto label_80005DDC;
    case 0x80005DE0u: goto label_80005DE0;
    case 0x80005DE4u: goto label_80005DE4;
    case 0x80005DE8u: goto label_80005DE8;
    case 0x80005DECu: goto label_80005DEC;
    case 0x80005DF0u: goto label_80005DF0;
    case 0x80005DF4u: goto label_80005DF4;
    case 0x80005DF8u: goto label_80005DF8;
    case 0x80005DFCu: goto label_80005DFC;
    case 0x80005E00u: goto label_80005E00;
    case 0x80005E04u: goto label_80005E04;
    case 0x80005E08u: goto label_80005E08;
    case 0x80005E0Cu: goto label_80005E0C;
    case 0x80005E10u: goto label_80005E10;
    case 0x80005E14u: goto label_80005E14;
    case 0x80005E18u: goto label_80005E18;
    case 0x80005E1Cu: goto label_80005E1C;
    case 0x80005E20u: goto label_80005E20;
    case 0x80005E24u: goto label_80005E24;
    case 0x80005E28u: goto label_80005E28;
    case 0x80005E2Cu: goto label_80005E2C;
    case 0x80005E30u: goto label_80005E30;
    case 0x80005E34u: goto label_80005E34;
    case 0x80005E38u: goto label_80005E38;
    case 0x80005E3Cu: goto label_80005E3C;
    case 0x80005E40u: goto label_80005E40;
    case 0x80005E44u: goto label_80005E44;
    case 0x80005E48u: goto label_80005E48;
    case 0x80005E4Cu: goto label_80005E4C;
    case 0x80005E50u: goto label_80005E50;
    case 0x80005E54u: goto label_80005E54;
    case 0x80005E58u: goto label_80005E58;
    case 0x80005E5Cu: goto label_80005E5C;
    case 0x80005E60u: goto label_80005E60;
    case 0x80005E64u: goto label_80005E64;
    case 0x80005E68u: goto label_80005E68;
    case 0x80005E6Cu: goto label_80005E6C;
    case 0x80005E70u: goto label_80005E70;
    case 0x80005E74u: goto label_80005E74;
    case 0x80005E78u: goto label_80005E78;
    case 0x80005E7Cu: goto label_80005E7C;
    case 0x80005E80u: goto label_80005E80;
    case 0x80005E84u: goto label_80005E84;
    case 0x80005E88u: goto label_80005E88;
    case 0x80005E8Cu: goto label_80005E8C;
    case 0x80005E90u: goto label_80005E90;
    case 0x80005E94u: goto label_80005E94;
    case 0x80005E98u: goto label_80005E98;
    case 0x80005E9Cu: goto label_80005E9C;
    case 0x80005EA0u: goto label_80005EA0;
    case 0x80005EA4u: goto label_80005EA4;
    case 0x80005EA8u: goto label_80005EA8;
    case 0x80005EACu: goto label_80005EAC;
    case 0x80005EB0u: goto label_80005EB0;
    case 0x80005EB4u: goto label_80005EB4;
    case 0x80005EB8u: goto label_80005EB8;
    case 0x80005EBCu: goto label_80005EBC;
    case 0x80005EC0u: goto label_80005EC0;
    case 0x80005EC4u: goto label_80005EC4;
    case 0x80005EC8u: goto label_80005EC8;
    case 0x80005ECCu: goto label_80005ECC;
    case 0x80005ED0u: goto label_80005ED0;
    case 0x80005ED4u: goto label_80005ED4;
    case 0x80005ED8u: goto label_80005ED8;
    case 0x80005EDCu: goto label_80005EDC;
    case 0x80005EE0u: goto label_80005EE0;
    case 0x80005EE4u: goto label_80005EE4;
    case 0x80005EE8u: goto label_80005EE8;
    case 0x80005EECu: goto label_80005EEC;
    case 0x80005EF0u: goto label_80005EF0;
    case 0x80005EF4u: goto label_80005EF4;
    case 0x80005EF8u: goto label_80005EF8;
    case 0x80005EFCu: goto label_80005EFC;
    case 0x80005F00u: goto label_80005F00;
    case 0x80005F04u: goto label_80005F04;
    case 0x80005F08u: goto label_80005F08;
    case 0x80005F0Cu: goto label_80005F0C;
    case 0x80005F10u: goto label_80005F10;
    case 0x80005F14u: goto label_80005F14;
    case 0x80005F18u: goto label_80005F18;
    case 0x80005F1Cu: goto label_80005F1C;
    case 0x80005F20u: goto label_80005F20;
    case 0x80005F24u: goto label_80005F24;
    case 0x80005F28u: goto label_80005F28;
    case 0x80005F2Cu: goto label_80005F2C;
    case 0x80005F30u: goto label_80005F30;
    case 0x80005F34u: goto label_80005F34;
    case 0x80005F38u: goto label_80005F38;
    case 0x80005F3Cu: goto label_80005F3C;
    case 0x80005F40u: goto label_80005F40;
    case 0x80005F44u: goto label_80005F44;
    case 0x80005F48u: goto label_80005F48;
    case 0x80005F4Cu: goto label_80005F4C;
    case 0x80005F50u: goto label_80005F50;
    case 0x80005F54u: goto label_80005F54;
    case 0x80005F58u: goto label_80005F58;
    case 0x80005F5Cu: goto label_80005F5C;
    case 0x80005F60u: goto label_80005F60;
    case 0x80005F64u: goto label_80005F64;
    case 0x80005F68u: goto label_80005F68;
    case 0x80005F6Cu: goto label_80005F6C;
    case 0x80005F70u: goto label_80005F70;
    case 0x80005F74u: goto label_80005F74;
    case 0x80005F78u: goto label_80005F78;
    case 0x80005F7Cu: goto label_80005F7C;
    case 0x80005F80u: goto label_80005F80;
    case 0x80005F84u: goto label_80005F84;
    case 0x80005F88u: goto label_80005F88;
    case 0x80005F8Cu: goto label_80005F8C;
    case 0x80005F90u: goto label_80005F90;
    case 0x80005F94u: goto label_80005F94;
    case 0x80005F98u: goto label_80005F98;
    case 0x80005F9Cu: goto label_80005F9C;
    case 0x80005FA0u: goto label_80005FA0;
    case 0x80005FA4u: goto label_80005FA4;
    case 0x80005FA8u: goto label_80005FA8;
    case 0x80005FACu: goto label_80005FAC;
    case 0x80005FB0u: goto label_80005FB0;
    case 0x80005FB4u: goto label_80005FB4;
    case 0x80005FB8u: goto label_80005FB8;
    case 0x80005FBCu: goto label_80005FBC;
    case 0x80005FC0u: goto label_80005FC0;
    case 0x80005FC4u: goto label_80005FC4;
    case 0x80005FC8u: goto label_80005FC8;
    case 0x80005FCCu: goto label_80005FCC;
    case 0x80005FD0u: goto label_80005FD0;
    case 0x80005FD4u: goto label_80005FD4;
    case 0x80005FD8u: goto label_80005FD8;
    case 0x80005FDCu: goto label_80005FDC;
    case 0x80005FE0u: goto label_80005FE0;
    case 0x80005FE4u: goto label_80005FE4;
    case 0x80005FE8u: goto label_80005FE8;
    case 0x80005FECu: goto label_80005FEC;
    case 0x80005FF0u: goto label_80005FF0;
    case 0x80005FF4u: goto label_80005FF4;
    case 0x80005FF8u: goto label_80005FF8;
    case 0x80005FFCu: goto label_80005FFC;
    case 0x80006000u: goto label_80006000;
    case 0x80006004u: goto label_80006004;
    case 0x80006008u: goto label_80006008;
    case 0x8000600Cu: goto label_8000600C;
    case 0x80006010u: goto label_80006010;
    case 0x80006014u: goto label_80006014;
    case 0x80006018u: goto label_80006018;
    case 0x8000601Cu: goto label_8000601C;
    case 0x80006020u: goto label_80006020;
    case 0x80006024u: goto label_80006024;
    case 0x80006028u: goto label_80006028;
    case 0x8000602Cu: goto label_8000602C;
    case 0x80006030u: goto label_80006030;
    case 0x80006034u: goto label_80006034;
    case 0x80006038u: goto label_80006038;
    case 0x8000603Cu: goto label_8000603C;
    case 0x80006040u: goto label_80006040;
    case 0x80006044u: goto label_80006044;
    case 0x80006048u: goto label_80006048;
    case 0x8000604Cu: goto label_8000604C;
    case 0x80006050u: goto label_80006050;
    case 0x80006054u: goto label_80006054;
    case 0x80006058u: goto label_80006058;
    case 0x8000605Cu: goto label_8000605C;
    case 0x80006060u: goto label_80006060;
    case 0x80006064u: goto label_80006064;
    case 0x80006068u: goto label_80006068;
    case 0x8000606Cu: goto label_8000606C;
    case 0x80006070u: goto label_80006070;
    case 0x80006074u: goto label_80006074;
    case 0x80006078u: goto label_80006078;
    case 0x8000607Cu: goto label_8000607C;
    case 0x80006080u: goto label_80006080;
    case 0x80006084u: goto label_80006084;
    case 0x80006088u: goto label_80006088;
    case 0x8000608Cu: goto label_8000608C;
    case 0x80006090u: goto label_80006090;
    case 0x80006094u: goto label_80006094;
    case 0x80006098u: goto label_80006098;
    case 0x8000609Cu: goto label_8000609C;
    case 0x800060A0u: goto label_800060A0;
    case 0x800060A4u: goto label_800060A4;
    case 0x800060A8u: goto label_800060A8;
    case 0x800060ACu: goto label_800060AC;
    case 0x800060B0u: goto label_800060B0;
    case 0x800060B4u: goto label_800060B4;
    case 0x800060B8u: goto label_800060B8;
    case 0x800060BCu: goto label_800060BC;
    case 0x800060C0u: goto label_800060C0;
    case 0x800060C4u: goto label_800060C4;
    case 0x800060C8u: goto label_800060C8;
    case 0x800060CCu: goto label_800060CC;
    case 0x800060D0u: goto label_800060D0;
    case 0x800060D4u: goto label_800060D4;
    case 0x800060D8u: goto label_800060D8;
    case 0x800060DCu: goto label_800060DC;
    case 0x800060E0u: goto label_800060E0;
    case 0x800060E4u: goto label_800060E4;
    case 0x800060E8u: goto label_800060E8;
    case 0x800060ECu: goto label_800060EC;
    case 0x800060F0u: goto label_800060F0;
    case 0x800060F4u: goto label_800060F4;
    case 0x800060F8u: goto label_800060F8;
    case 0x800060FCu: goto label_800060FC;
    case 0x80006100u: goto label_80006100;
    case 0x80006104u: goto label_80006104;
    case 0x80006108u: goto label_80006108;
    case 0x8000610Cu: goto label_8000610C;
    case 0x80006110u: goto label_80006110;
    case 0x80006114u: goto label_80006114;
    case 0x80006118u: goto label_80006118;
    case 0x8000611Cu: goto label_8000611C;
    case 0x80006120u: goto label_80006120;
    case 0x80006124u: goto label_80006124;
    case 0x80006128u: goto label_80006128;
    case 0x8000612Cu: goto label_8000612C;
    case 0x80006130u: goto label_80006130;
    case 0x80006134u: goto label_80006134;
    case 0x80006138u: goto label_80006138;
    case 0x8000613Cu: goto label_8000613C;
    case 0x80006140u: goto label_80006140;
    case 0x80006144u: goto label_80006144;
    case 0x80006148u: goto label_80006148;
    case 0x8000614Cu: goto label_8000614C;
    case 0x80006150u: goto label_80006150;
    case 0x80006154u: goto label_80006154;
    case 0x80006158u: goto label_80006158;
    case 0x8000615Cu: goto label_8000615C;
    case 0x80006160u: goto label_80006160;
    case 0x80006164u: goto label_80006164;
    case 0x80006168u: goto label_80006168;
    case 0x8000616Cu: goto label_8000616C;
    case 0x80006170u: goto label_80006170;
    case 0x80006174u: goto label_80006174;
    case 0x80006178u: goto label_80006178;
    case 0x8000617Cu: goto label_8000617C;
    case 0x80006180u: goto label_80006180;
    case 0x80006184u: goto label_80006184;
    case 0x80006188u: goto label_80006188;
    case 0x8000618Cu: goto label_8000618C;
    case 0x80006190u: goto label_80006190;
    case 0x80006194u: goto label_80006194;
    case 0x80006198u: goto label_80006198;
    case 0x8000619Cu: goto label_8000619C;
    case 0x800061A0u: goto label_800061A0;
    case 0x800061A4u: goto label_800061A4;
    case 0x800061A8u: goto label_800061A8;
    case 0x800061ACu: goto label_800061AC;
    case 0x800061B0u: goto label_800061B0;
    case 0x800061B4u: goto label_800061B4;
    case 0x800061B8u: goto label_800061B8;
    case 0x800061BCu: goto label_800061BC;
    case 0x800061C0u: goto label_800061C0;
    case 0x800061C4u: goto label_800061C4;
    case 0x800061C8u: goto label_800061C8;
    case 0x800061CCu: goto label_800061CC;
    case 0x800061D0u: goto label_800061D0;
    case 0x800061D4u: goto label_800061D4;
    case 0x800061D8u: goto label_800061D8;
    case 0x800061DCu: goto label_800061DC;
    case 0x800061E0u: goto label_800061E0;
    case 0x800061E4u: goto label_800061E4;
    case 0x800061E8u: goto label_800061E8;
    case 0x800061ECu: goto label_800061EC;
    case 0x800061F0u: goto label_800061F0;
    case 0x800061F4u: goto label_800061F4;
    case 0x800061F8u: goto label_800061F8;
    case 0x800061FCu: goto label_800061FC;
    case 0x80006200u: goto label_80006200;
    case 0x80006204u: goto label_80006204;
    case 0x80006208u: goto label_80006208;
    case 0x8000620Cu: goto label_8000620C;
    case 0x80006210u: goto label_80006210;
    case 0x80006214u: goto label_80006214;
    case 0x80006218u: goto label_80006218;
    case 0x8000621Cu: goto label_8000621C;
    case 0x80006220u: goto label_80006220;
    case 0x80006224u: goto label_80006224;
    case 0x80006228u: goto label_80006228;
    case 0x8000622Cu: goto label_8000622C;
    case 0x80006230u: goto label_80006230;
    case 0x80006234u: goto label_80006234;
    case 0x80006238u: goto label_80006238;
    case 0x8000623Cu: goto label_8000623C;
    case 0x80006240u: goto label_80006240;
    case 0x80006244u: goto label_80006244;
    case 0x80006248u: goto label_80006248;
    case 0x8000624Cu: goto label_8000624C;
    case 0x80006250u: goto label_80006250;
    case 0x80006254u: goto label_80006254;
    case 0x80006258u: goto label_80006258;
    case 0x8000625Cu: goto label_8000625C;
    case 0x80006260u: goto label_80006260;
    case 0x80006264u: goto label_80006264;
    case 0x80006268u: goto label_80006268;
    case 0x8000626Cu: goto label_8000626C;
    case 0x80006270u: goto label_80006270;
    case 0x80006274u: goto label_80006274;
    case 0x80006278u: goto label_80006278;
    case 0x8000627Cu: goto label_8000627C;
    case 0x80006280u: goto label_80006280;
    case 0x80006284u: goto label_80006284;
    case 0x80006288u: goto label_80006288;
    case 0x8000628Cu: goto label_8000628C;
    case 0x80006290u: goto label_80006290;
    case 0x80006294u: goto label_80006294;
    case 0x80006298u: goto label_80006298;
    case 0x8000629Cu: goto label_8000629C;
    case 0x800062A0u: goto label_800062A0;
    case 0x800062A4u: goto label_800062A4;
    case 0x800062A8u: goto label_800062A8;
    case 0x800062ACu: goto label_800062AC;
    case 0x800062B0u: goto label_800062B0;
    case 0x800062B4u: goto label_800062B4;
    case 0x800062B8u: goto label_800062B8;
    case 0x800062BCu: goto label_800062BC;
    case 0x800062C0u: goto label_800062C0;
    case 0x800062C4u: goto label_800062C4;
    case 0x800062C8u: goto label_800062C8;
    case 0x800062CCu: goto label_800062CC;
    case 0x800062D0u: goto label_800062D0;
    case 0x800062D4u: goto label_800062D4;
    case 0x800062D8u: goto label_800062D8;
    case 0x800062DCu: goto label_800062DC;
    case 0x800062E0u: goto label_800062E0;
    case 0x800062E4u: goto label_800062E4;
    case 0x800062E8u: goto label_800062E8;
    case 0x800062ECu: goto label_800062EC;
    case 0x800062F0u: goto label_800062F0;
    case 0x800062F4u: goto label_800062F4;
    case 0x800062F8u: goto label_800062F8;
    case 0x800062FCu: goto label_800062FC;
    case 0x80006300u: goto label_80006300;
    case 0x80006304u: goto label_80006304;
    case 0x80006308u: goto label_80006308;
    case 0x8000630Cu: goto label_8000630C;
    case 0x80006310u: goto label_80006310;
    case 0x80006314u: goto label_80006314;
    case 0x80006318u: goto label_80006318;
    case 0x8000631Cu: goto label_8000631C;
    case 0x80006320u: goto label_80006320;
    case 0x80006324u: goto label_80006324;
    case 0x80006328u: goto label_80006328;
    case 0x8000632Cu: goto label_8000632C;
    case 0x80006330u: goto label_80006330;
    case 0x80006334u: goto label_80006334;
    case 0x80006338u: goto label_80006338;
    case 0x8000633Cu: goto label_8000633C;
    case 0x80006340u: goto label_80006340;
    case 0x80006344u: goto label_80006344;
    case 0x80006348u: goto label_80006348;
    case 0x8000634Cu: goto label_8000634C;
    case 0x80006350u: goto label_80006350;
    case 0x80006354u: goto label_80006354;
    case 0x80006358u: goto label_80006358;
    case 0x8000635Cu: goto label_8000635C;
    case 0x80006360u: goto label_80006360;
    case 0x80006364u: goto label_80006364;
    case 0x80006368u: goto label_80006368;
    case 0x8000636Cu: goto label_8000636C;
    case 0x80006370u: goto label_80006370;
    case 0x80006374u: goto label_80006374;
    case 0x80006378u: goto label_80006378;
    case 0x8000637Cu: goto label_8000637C;
    case 0x80006380u: goto label_80006380;
    case 0x80006384u: goto label_80006384;
    case 0x80006388u: goto label_80006388;
    case 0x8000638Cu: goto label_8000638C;
    case 0x80006390u: goto label_80006390;
    case 0x80006394u: goto label_80006394;
    case 0x80006398u: goto label_80006398;
    case 0x8000639Cu: goto label_8000639C;
    case 0x800063A0u: goto label_800063A0;
    case 0x800063A4u: goto label_800063A4;
    case 0x800063A8u: goto label_800063A8;
    case 0x800063ACu: goto label_800063AC;
    case 0x800063B0u: goto label_800063B0;
    case 0x800063B4u: goto label_800063B4;
    case 0x800063B8u: goto label_800063B8;
    case 0x800063BCu: goto label_800063BC;
    case 0x800063C0u: goto label_800063C0;
    case 0x800063C4u: goto label_800063C4;
    case 0x800063C8u: goto label_800063C8;
    case 0x800063CCu: goto label_800063CC;
    case 0x800063D0u: goto label_800063D0;
    case 0x800063D4u: goto label_800063D4;
    case 0x800063D8u: goto label_800063D8;
    case 0x800063DCu: goto label_800063DC;
    case 0x800063E0u: goto label_800063E0;
    case 0x800063E4u: goto label_800063E4;
    case 0x800063E8u: goto label_800063E8;
    case 0x800063ECu: goto label_800063EC;
    case 0x800063F0u: goto label_800063F0;
    case 0x800063F4u: goto label_800063F4;
    case 0x800063F8u: goto label_800063F8;
    case 0x800063FCu: goto label_800063FC;
    case 0x80006400u: goto label_80006400;
    case 0x80006404u: goto label_80006404;
    case 0x80006408u: goto label_80006408;
    case 0x8000640Cu: goto label_8000640C;
    case 0x80006410u: goto label_80006410;
    case 0x80006414u: goto label_80006414;
    case 0x80006418u: goto label_80006418;
    case 0x8000641Cu: goto label_8000641C;
    case 0x80006420u: goto label_80006420;
    case 0x80006424u: goto label_80006424;
    case 0x80006428u: goto label_80006428;
    case 0x8000642Cu: goto label_8000642C;
    case 0x80006430u: goto label_80006430;
    case 0x80006434u: goto label_80006434;
    case 0x80006438u: goto label_80006438;
    case 0x8000643Cu: goto label_8000643C;
    case 0x80006440u: goto label_80006440;
    case 0x80006444u: goto label_80006444;
    case 0x80006448u: goto label_80006448;
    case 0x8000644Cu: goto label_8000644C;
    case 0x80006450u: goto label_80006450;
    case 0x80006454u: goto label_80006454;
    case 0x80006458u: goto label_80006458;
    case 0x8000645Cu: goto label_8000645C;
    case 0x80006460u: goto label_80006460;
    case 0x80006464u: goto label_80006464;
    case 0x80006468u: goto label_80006468;
    case 0x8000646Cu: goto label_8000646C;
    case 0x80006470u: goto label_80006470;
    case 0x80006474u: goto label_80006474;
    case 0x80006478u: goto label_80006478;
    case 0x8000647Cu: goto label_8000647C;
    case 0x80006480u: goto label_80006480;
    case 0x80006484u: goto label_80006484;
    case 0x80006488u: goto label_80006488;
    case 0x8000648Cu: goto label_8000648C;
    case 0x80006490u: goto label_80006490;
    case 0x80006494u: goto label_80006494;
    case 0x80006498u: goto label_80006498;
    case 0x8000649Cu: goto label_8000649C;
    case 0x800064A0u: goto label_800064A0;
    case 0x800064A4u: goto label_800064A4;
    case 0x800064A8u: goto label_800064A8;
    case 0x800064ACu: goto label_800064AC;
    case 0x800064B0u: goto label_800064B0;
    case 0x800064B4u: goto label_800064B4;
    case 0x800064B8u: goto label_800064B8;
    case 0x800064BCu: goto label_800064BC;
    case 0x800064C0u: goto label_800064C0;
    case 0x800064C4u: goto label_800064C4;
    case 0x800064C8u: goto label_800064C8;
    case 0x800064CCu: goto label_800064CC;
    case 0x800064D0u: goto label_800064D0;
    case 0x800064D4u: goto label_800064D4;
    case 0x800064D8u: goto label_800064D8;
    case 0x800064DCu: goto label_800064DC;
    case 0x800064E0u: goto label_800064E0;
    case 0x800064E4u: goto label_800064E4;
    case 0x800064E8u: goto label_800064E8;
    case 0x800064ECu: goto label_800064EC;
    case 0x800064F0u: goto label_800064F0;
    case 0x800064F4u: goto label_800064F4;
    case 0x800064F8u: goto label_800064F8;
    case 0x800064FCu: goto label_800064FC;
    case 0x80006500u: goto label_80006500;
    case 0x80006504u: goto label_80006504;
    case 0x80006508u: goto label_80006508;
    case 0x8000650Cu: goto label_8000650C;
    case 0x80006510u: goto label_80006510;
    case 0x80006514u: goto label_80006514;
    case 0x80006518u: goto label_80006518;
    case 0x8000651Cu: goto label_8000651C;
    case 0x80006520u: goto label_80006520;
    case 0x80006524u: goto label_80006524;
    case 0x80006528u: goto label_80006528;
    case 0x8000652Cu: goto label_8000652C;
    case 0x80006530u: goto label_80006530;
    case 0x80006534u: goto label_80006534;
    case 0x80006538u: goto label_80006538;
    case 0x8000653Cu: goto label_8000653C;
    case 0x80006540u: goto label_80006540;
    case 0x80006544u: goto label_80006544;
    case 0x80006548u: goto label_80006548;
    case 0x8000654Cu: goto label_8000654C;
    case 0x80006550u: goto label_80006550;
    case 0x80006554u: goto label_80006554;
    case 0x80006558u: goto label_80006558;
    case 0x8000655Cu: goto label_8000655C;
    case 0x80006560u: goto label_80006560;
    case 0x80006564u: goto label_80006564;
    case 0x80006568u: goto label_80006568;
    case 0x8000656Cu: goto label_8000656C;
    case 0x80006570u: goto label_80006570;
    case 0x80006574u: goto label_80006574;
    case 0x80006578u: goto label_80006578;
    case 0x8000657Cu: goto label_8000657C;
    case 0x80006580u: goto label_80006580;
    case 0x80006584u: goto label_80006584;
    case 0x80006588u: goto label_80006588;
    case 0x8000658Cu: goto label_8000658C;
    case 0x80006590u: goto label_80006590;
    case 0x80006594u: goto label_80006594;
    case 0x80006598u: goto label_80006598;
    case 0x8000659Cu: goto label_8000659C;
    case 0x800065A0u: goto label_800065A0;
    case 0x800065A4u: goto label_800065A4;
    case 0x800065A8u: goto label_800065A8;
    case 0x800065ACu: goto label_800065AC;
    case 0x800065B0u: goto label_800065B0;
    case 0x800065B4u: goto label_800065B4;
    case 0x800065B8u: goto label_800065B8;
    case 0x800065BCu: goto label_800065BC;
    case 0x800065C0u: goto label_800065C0;
    case 0x800065C4u: goto label_800065C4;
    case 0x800065C8u: goto label_800065C8;
    case 0x800065CCu: goto label_800065CC;
    case 0x800065D0u: goto label_800065D0;
    case 0x800065D4u: goto label_800065D4;
    case 0x800065D8u: goto label_800065D8;
    case 0x800065DCu: goto label_800065DC;
    case 0x800065E0u: goto label_800065E0;
    case 0x800065E4u: goto label_800065E4;
    case 0x800065E8u: goto label_800065E8;
    case 0x800065ECu: goto label_800065EC;
    case 0x800065F0u: goto label_800065F0;
    case 0x800065F4u: goto label_800065F4;
    case 0x800065F8u: goto label_800065F8;
    case 0x800065FCu: goto label_800065FC;
    case 0x80006600u: goto label_80006600;
    case 0x80006604u: goto label_80006604;
    case 0x80006608u: goto label_80006608;
    case 0x8000660Cu: goto label_8000660C;
    case 0x80006610u: goto label_80006610;
    case 0x80006614u: goto label_80006614;
    case 0x80006618u: goto label_80006618;
    case 0x8000661Cu: goto label_8000661C;
    case 0x80006620u: goto label_80006620;
    case 0x80006624u: goto label_80006624;
    case 0x80006628u: goto label_80006628;
    case 0x8000662Cu: goto label_8000662C;
    case 0x80006630u: goto label_80006630;
    case 0x80006634u: goto label_80006634;
    case 0x80006638u: goto label_80006638;
    case 0x8000663Cu: goto label_8000663C;
    case 0x80006640u: goto label_80006640;
    case 0x80006644u: goto label_80006644;
    case 0x80006648u: goto label_80006648;
    case 0x8000664Cu: goto label_8000664C;
    case 0x80006650u: goto label_80006650;
    case 0x80006654u: goto label_80006654;
    case 0x80006658u: goto label_80006658;
    case 0x8000665Cu: goto label_8000665C;
    case 0x80006660u: goto label_80006660;
    case 0x80006664u: goto label_80006664;
    case 0x80006668u: goto label_80006668;
    case 0x8000666Cu: goto label_8000666C;
    case 0x80006670u: goto label_80006670;
    case 0x80006674u: goto label_80006674;
    case 0x80006678u: goto label_80006678;
    case 0x8000667Cu: goto label_8000667C;
    case 0x80006680u: goto label_80006680;
    case 0x80006684u: goto label_80006684;
    case 0x80006688u: goto label_80006688;
    case 0x8000668Cu: goto label_8000668C;
    case 0x80006690u: goto label_80006690;
    case 0x80006694u: goto label_80006694;
    case 0x80006698u: goto label_80006698;
    case 0x8000669Cu: goto label_8000669C;
    case 0x800066A0u: goto label_800066A0;
    case 0x800066A4u: goto label_800066A4;
    case 0x800066A8u: goto label_800066A8;
    case 0x800066ACu: goto label_800066AC;
    case 0x800066B0u: goto label_800066B0;
    case 0x800066B4u: goto label_800066B4;
    case 0x800066B8u: goto label_800066B8;
    case 0x800066BCu: goto label_800066BC;
    case 0x800066C0u: goto label_800066C0;
    case 0x800066C4u: goto label_800066C4;
    case 0x800066C8u: goto label_800066C8;
    case 0x800066CCu: goto label_800066CC;
    case 0x800066D0u: goto label_800066D0;
    case 0x800066D4u: goto label_800066D4;
    case 0x800066D8u: goto label_800066D8;
    case 0x800066DCu: goto label_800066DC;
    default: return;
    }
label_80004000:
    ctx->pc = 0x80004000u;
    ctx->downcount -= 2;
    // 80004000: cmplwi  cr1, r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 24)) | (cr_bits << 24);
    }

label_80004004:
    ctx->pc = 0x80004004u;
    // 80004004: bclr  12, 6
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004008:
    ctx->pc = 0x80004008u;
    ctx->downcount -= 2;
    // 80004008: cmplw   cr1, r4, r3
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 24)) | (cr_bits << 24);
    }

label_8000400C:
    ctx->pc = 0x8000400Cu;
    // 8000400C: bc    12, 4, 0x80004178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x08000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004178;
        }
    }

label_80004010:
    ctx->pc = 0x80004010u;
    ctx->downcount -= 1;
    // 80004010: bclr  12, 6
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004014:
    ctx->pc = 0x80004014u;
    ctx->downcount -= 3;
    // 80004014: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_80004018:
    ctx->pc = 0x80004018u;
    // 80004018: cmplw   cr5, r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 8)) | (cr_bits << 8);
    }

label_8000401C:
    ctx->pc = 0x8000401Cu;
    // 8000401C: bc    12, 20, 0x800040C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x00000800u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800040C0;
        }
    }

label_80004020:
    ctx->pc = 0x80004020u;
    ctx->downcount -= 7;
    // 80004020: rlwinm r9, r4, 0, 29, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000007u;
    }

label_80004024:
    ctx->pc = 0x80004024u;
    // 80004024: rlwinm r10, r3, 0, 29, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000007u;
    }

label_80004028:
    ctx->pc = 0x80004028u;
    // 80004028: subf   r8, r10, r3
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[8] = res;
    }

label_8000402C:
    ctx->pc = 0x8000402Cu;
    // 8000402C: dcbt    0, r4
    (void)ctx;

label_80004030:
    ctx->pc = 0x80004030u;
    // 80004030: xor.   r11, r10, r9
    {
        ctx->gpr[11] = ctx->gpr[10] ^ ctx->gpr[9];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004034:
    ctx->pc = 0x80004034u;
    // 80004034: bc    4, 2, 0x8000415C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000415C;
        }
    }

label_80004038:
    ctx->pc = 0x80004038u;
    ctx->downcount -= 2;
    // 80004038: andi.   r10, r10, 0x0007
    {
        ctx->gpr[10] = ctx->gpr[10] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000403C:
    ctx->pc = 0x8000403Cu;
    // 8000403C: bc    13, 2, 0x80004068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004068;
        }
    }

label_80004040:
    ctx->pc = 0x80004040u;
    ctx->downcount -= 6;
    // 80004040: li      r6, 8
    ctx->gpr[6] = (u32)(s32)(8);

label_80004044:
    ctx->pc = 0x80004044u;
    // 80004044: subf   r9, r9, r6
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_80004048:
    ctx->pc = 0x80004048u;
    // 80004048: addi    r8, r3, 0
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(0);

label_8000404C:
    ctx->pc = 0x8000404Cu;
    // 8000404C: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_80004050:
    ctx->pc = 0x80004050u;
    // 80004050: subf   r5, r9, r5
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_80004054:
    loop_80004054(ctx);
    if (ctx->pc == 0x80004068u) goto label_80004068;
    return;
label_80004058:
    // 80004058: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_8000405C:
    ctx->pc = 0x8000405Cu;
    // 8000405C: stb     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_80004060:
    // 80004060: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80004064:
    // 80004064: bc    16, 0, 0x80004054
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004054u;
                return;
            }
            goto label_80004054;
        }
    }

label_80004068:
    ctx->pc = 0x80004068u;
    ctx->downcount -= 3;
    // 80004068: rlwinm r6, r5, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
    }

label_8000406C:
    ctx->pc = 0x8000406Cu;
    // 8000406C: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_80004070:
    ctx->pc = 0x80004070u;
    ctx->downcount -= 11;
    // 80004070: lfd     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x80004070u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80004074:
    ctx->pc = 0x80004074u;
    // 80004074: lfd     f2, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x80004074u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80004078:
    ctx->pc = 0x80004078u;
    // 80004078: lfd     f3, 16(r4)
    if (!ppc_fp_available_inline(ctx, 0x80004078u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8000407C:
    ctx->pc = 0x8000407Cu;
    // 8000407C: lfd     f4, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x8000407Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80004080:
    // 80004080: addi    r4, r4, 32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(32);

label_80004084:
    ctx->pc = 0x80004084u;
    // 80004084: stfd     f1, 0(r8)
    if (!ppc_fp_available_inline(ctx, 0x80004084u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_80004088:
    ctx->pc = 0x80004088u;
    // 80004088: stfd     f2, 8(r8)
    if (!ppc_fp_available_inline(ctx, 0x80004088u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_8000408C:
    ctx->pc = 0x8000408Cu;
    // 8000408C: stfd     f3, 16(r8)
    if (!ppc_fp_available_inline(ctx, 0x8000408Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_80004090:
    ctx->pc = 0x80004090u;
    // 80004090: stfd     f4, 24(r8)
    if (!ppc_fp_available_inline(ctx, 0x80004090u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
    }

label_80004094:
    // 80004094: addi    r8, r8, 32
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(32);

label_80004098:
    // 80004098: bc    16, 0, 0x80004070
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004070u;
                return;
            }
            goto label_80004070;
        }
    }

label_8000409C:
    ctx->pc = 0x8000409Cu;
    ctx->downcount -= 2;
    // 8000409C: andi.   r6, r5, 0x001F
    {
        ctx->gpr[6] = ctx->gpr[5] & 0x001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800040A0:
    ctx->pc = 0x800040A0u;
    // 800040A0: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800040A4:
    ctx->pc = 0x800040A4u;
    ctx->downcount -= 4;
    // 800040A4: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_800040A8:
    ctx->pc = 0x800040A8u;
    // 800040A8: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_800040AC:
    ctx->pc = 0x800040ACu;
    // 800040AC: addi    r8, r8, -1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1);

label_800040B0:
    loop_800040B0(ctx);
    if (ctx->pc == 0x800040BCu) goto label_800040BC;
    return;
label_800040B4:
    ctx->pc = 0x800040B4u;
    // 800040B4: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

label_800040B8:
    // 800040B8: bc    16, 0, 0x800040B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800040B0u;
                return;
            }
            goto label_800040B0;
        }
    }

label_800040BC:
    ctx->pc = 0x800040BCu;
    ctx->downcount -= 1;
    // 800040BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800040C0:
    ctx->pc = 0x800040C0u;
    ctx->downcount -= 3;
    // 800040C0: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_800040C4:
    ctx->pc = 0x800040C4u;
    // 800040C4: cmplw   cr5, r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 8)) | (cr_bits << 8);
    }

label_800040C8:
    ctx->pc = 0x800040C8u;
    // 800040C8: bc    4, 21, 0x8000415C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x00000400u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000415C;
        }
    }

label_800040CC:
    ctx->pc = 0x800040CCu;
    ctx->downcount -= 4;
    // 800040CC: rlwinm r9, r4, 0, 30, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000003u;
    }

label_800040D0:
    ctx->pc = 0x800040D0u;
    // 800040D0: rlwinm r10, r3, 0, 30, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000003u;
    }

label_800040D4:
    ctx->pc = 0x800040D4u;
    // 800040D4: xor.   r11, r10, r9
    {
        ctx->gpr[11] = ctx->gpr[10] ^ ctx->gpr[9];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800040D8:
    ctx->pc = 0x800040D8u;
    // 800040D8: bc    4, 2, 0x8000415C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8000415C;
        }
    }

label_800040DC:
    ctx->pc = 0x800040DCu;
    ctx->downcount -= 6;
    // 800040DC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_800040E0:
    ctx->pc = 0x800040E0u;
    // 800040E0: subf   r9, r9, r6
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[9] = res;
    }

label_800040E4:
    ctx->pc = 0x800040E4u;
    // 800040E4: addi    r8, r3, 0
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(0);

label_800040E8:
    ctx->pc = 0x800040E8u;
    // 800040E8: subf   r5, r9, r5
    {
        u32 a = ~ctx->gpr[9];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800040EC:
    ctx->pc = 0x800040ECu;
    // 800040EC: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_800040F0:
    loop_800040F0(ctx);
    if (ctx->pc == 0x80004104u) goto label_80004104;
    return;
label_800040F4:
    // 800040F4: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_800040F8:
    ctx->pc = 0x800040F8u;
    // 800040F8: stb     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
    }

label_800040FC:
    // 800040FC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80004100:
    // 80004100: bc    16, 0, 0x800040F0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800040F0u;
                return;
            }
            goto label_800040F0;
        }
    }

label_80004104:
    ctx->pc = 0x80004104u;
    ctx->downcount -= 3;
    // 80004104: rlwinm r6, r5, 28, 4, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 28u) & 0x0FFFFFFFu;
    }

label_80004108:
    ctx->pc = 0x80004108u;
    // 80004108: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_8000410C:
    loop_8000410C(ctx);
    if (ctx->pc == 0x80004138u) goto label_80004138;
    return;
label_80004110:
    ctx->pc = 0x80004110u;
    // 80004110: lwz     r10, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_80004114:
    ctx->pc = 0x80004114u;
    // 80004114: lwz     r11, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80004118:
    ctx->pc = 0x80004118u;
    // 80004118: lwz     r12, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8000411C:
    // 8000411C: addi    r4, r4, 16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16);

label_80004120:
    ctx->pc = 0x80004120u;
    // 80004120: stw     r9, 0(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_80004124:
    ctx->pc = 0x80004124u;
    // 80004124: stw     r10, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80004128:
    ctx->pc = 0x80004128u;
    // 80004128: stw     r11, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_8000412C:
    ctx->pc = 0x8000412Cu;
    // 8000412C: stw     r12, 12(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[12]);
    }

label_80004130:
    // 80004130: addi    r8, r8, 16
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16);

label_80004134:
    // 80004134: bc    16, 0, 0x8000410C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000410Cu;
                return;
            }
            goto label_8000410C;
        }
    }

label_80004138:
    ctx->pc = 0x80004138u;
    ctx->downcount -= 2;
    // 80004138: andi.   r6, r5, 0x000F
    {
        ctx->gpr[6] = ctx->gpr[5] & 0x000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000413C:
    ctx->pc = 0x8000413Cu;
    // 8000413C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004140:
    ctx->pc = 0x80004140u;
    ctx->downcount -= 4;
    // 80004140: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80004144:
    ctx->pc = 0x80004144u;
    // 80004144: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_80004148:
    ctx->pc = 0x80004148u;
    // 80004148: addi    r8, r8, -1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(-1);

label_8000414C:
    loop_8000414C(ctx);
    if (ctx->pc == 0x80004158u) goto label_80004158;
    return;
label_80004150:
    ctx->pc = 0x80004150u;
    // 80004150: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

label_80004154:
    // 80004154: bc    16, 0, 0x8000414C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000414Cu;
                return;
            }
            goto label_8000414C;
        }
    }

label_80004158:
    ctx->pc = 0x80004158u;
    ctx->downcount -= 1;
    // 80004158: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_8000415C:
    ctx->pc = 0x8000415Cu;
    ctx->downcount -= 4;
    // 8000415C: addi    r7, r4, -1
    ctx->gpr[7] = ctx->gpr[4] + (u32)(s32)(-1);

label_80004160:
    ctx->pc = 0x80004160u;
    // 80004160: addi    r8, r3, -1
    ctx->gpr[8] = ctx->gpr[3] + (u32)(s32)(-1);

label_80004164:
    ctx->pc = 0x80004164u;
    // 80004164: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_80004168:
    loop_80004168(ctx);
    if (ctx->pc == 0x80004174u) goto label_80004174;
    return;
label_8000416C:
    ctx->pc = 0x8000416Cu;
    // 8000416C: stbu     r9, 1(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[8] = ea;
    }

label_80004170:
    // 80004170: bc    16, 0, 0x80004168
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004168u;
                return;
            }
            goto label_80004168;
        }
    }

label_80004174:
    ctx->pc = 0x80004174u;
    ctx->downcount -= 1;
    // 80004174: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004178:
    ctx->pc = 0x80004178u;
    ctx->downcount -= 5;
    // 80004178: add   r4, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8000417C:
    ctx->pc = 0x8000417Cu;
    // 8000417C: add   r12, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80004180:
    ctx->pc = 0x80004180u;
    // 80004180: li      r6, 128
    ctx->gpr[6] = (u32)(s32)(128);

label_80004184:
    ctx->pc = 0x80004184u;
    // 80004184: cmplw   cr5, r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 8)) | (cr_bits << 8);
    }

label_80004188:
    ctx->pc = 0x80004188u;
    // 80004188: bc    12, 20, 0x80004204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x00000800u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004204;
        }
    }

label_8000418C:
    ctx->pc = 0x8000418Cu;
    ctx->downcount -= 4;
    // 8000418C: rlwinm r9, r4, 0, 29, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000007u;
    }

label_80004190:
    ctx->pc = 0x80004190u;
    // 80004190: rlwinm r10, r12, 0, 29, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0x00000007u;
    }

label_80004194:
    ctx->pc = 0x80004194u;
    // 80004194: xor.   r11, r10, r9
    {
        ctx->gpr[11] = ctx->gpr[10] ^ ctx->gpr[9];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004198:
    ctx->pc = 0x80004198u;
    // 80004198: bc    4, 2, 0x80004288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80004288;
        }
    }

label_8000419C:
    ctx->pc = 0x8000419Cu;
    ctx->downcount -= 2;
    // 8000419C: andi.   r10, r10, 0x0007
    {
        ctx->gpr[10] = ctx->gpr[10] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800041A0:
    ctx->pc = 0x800041A0u;
    // 800041A0: bc    13, 2, 0x800041B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800041B4;
        }
    }

label_800041A4:
    ctx->pc = 0x800041A4u;
    ctx->downcount -= 2;
    // 800041A4: mtctr    r10
    ctx->ctr = ctx->gpr[10];

label_800041A8:
    loop_800041A8(ctx);
    if (ctx->pc == 0x800041B4u) goto label_800041B4;
    return;
label_800041AC:
    ctx->pc = 0x800041ACu;
    // 800041AC: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

label_800041B0:
    // 800041B0: bc    16, 0, 0x800041A8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800041A8u;
                return;
            }
            goto label_800041A8;
        }
    }

label_800041B4:
    ctx->pc = 0x800041B4u;
    ctx->downcount -= 4;
    // 800041B4: subf   r5, r10, r5
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800041B8:
    ctx->pc = 0x800041B8u;
    // 800041B8: rlwinm r6, r5, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
    }

label_800041BC:
    ctx->pc = 0x800041BCu;
    // 800041BC: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_800041C0:
    ctx->pc = 0x800041C0u;
    ctx->downcount -= 10;
    // 800041C0: lfd     f1, -8(r4)
    if (!ppc_fp_available_inline(ctx, 0x800041C0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800041C4:
    ctx->pc = 0x800041C4u;
    // 800041C4: lfd     f2, -16(r4)
    if (!ppc_fp_available_inline(ctx, 0x800041C4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800041C8:
    ctx->pc = 0x800041C8u;
    // 800041C8: lfd     f3, -24(r4)
    if (!ppc_fp_available_inline(ctx, 0x800041C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-24);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800041CC:
    ctx->pc = 0x800041CCu;
    // 800041CC: lfd     f4, -32(r4)
    if (!ppc_fp_available_inline(ctx, 0x800041CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-32);
        ctx->fpr[4] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_800041D0:
    // 800041D0: addi    r4, r4, -32
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32);

label_800041D4:
    ctx->pc = 0x800041D4u;
    // 800041D4: stfd     f1, -8(r12)
    if (!ppc_fp_available_inline(ctx, 0x800041D4u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[1]));
    }

label_800041D8:
    ctx->pc = 0x800041D8u;
    // 800041D8: stfd     f2, -16(r12)
    if (!ppc_fp_available_inline(ctx, 0x800041D8u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[2]));
    }

label_800041DC:
    ctx->pc = 0x800041DCu;
    // 800041DC: stfd     f3, -24(r12)
    if (!ppc_fp_available_inline(ctx, 0x800041DCu)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[3]));
    }

label_800041E0:
    ctx->pc = 0x800041E0u;
    // 800041E0: stfdu     f4, -32(r12)
    if (!ppc_fp_available_inline(ctx, 0x800041E0u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[4]));
        ctx->gpr[12] = ea;
    }

label_800041E4:
    // 800041E4: bc    16, 0, 0x800041C0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800041C0u;
                return;
            }
            goto label_800041C0;
        }
    }

label_800041E8:
    ctx->pc = 0x800041E8u;
    ctx->downcount -= 2;
    // 800041E8: andi.   r6, r5, 0x001F
    {
        ctx->gpr[6] = ctx->gpr[5] & 0x001Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800041EC:
    ctx->pc = 0x800041ECu;
    // 800041EC: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800041F0:
    ctx->pc = 0x800041F0u;
    ctx->downcount -= 2;
    // 800041F0: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_800041F4:
    loop_800041F4(ctx);
    if (ctx->pc == 0x80004200u) goto label_80004200;
    return;
label_800041F8:
    ctx->pc = 0x800041F8u;
    // 800041F8: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

label_800041FC:
    // 800041FC: bc    16, 0, 0x800041F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800041F4u;
                return;
            }
            goto label_800041F4;
        }
    }

label_80004200:
    ctx->pc = 0x80004200u;
    ctx->downcount -= 1;
    // 80004200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004204:
    ctx->pc = 0x80004204u;
    ctx->downcount -= 3;
    // 80004204: li      r6, 20
    ctx->gpr[6] = (u32)(s32)(20);

label_80004208:
    ctx->pc = 0x80004208u;
    // 80004208: cmplw   cr5, r5, r6
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 8)) | (cr_bits << 8);
    }

label_8000420C:
    ctx->pc = 0x8000420Cu;
    // 8000420C: bc    4, 21, 0x80004288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x00000400u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80004288;
        }
    }

label_80004210:
    ctx->pc = 0x80004210u;
    ctx->downcount -= 4;
    // 80004210: rlwinm r9, r4, 0, 30, 31
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000003u;
    }

label_80004214:
    ctx->pc = 0x80004214u;
    // 80004214: rlwinm r10, r12, 0, 30, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[12], 0u) & 0x00000003u;
    }

label_80004218:
    ctx->pc = 0x80004218u;
    // 80004218: xor.   r11, r10, r9
    {
        ctx->gpr[11] = ctx->gpr[10] ^ ctx->gpr[9];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[11];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000421C:
    ctx->pc = 0x8000421Cu;
    // 8000421C: bc    4, 2, 0x80004288
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80004288;
        }
    }

label_80004220:
    ctx->pc = 0x80004220u;
    ctx->downcount -= 2;
    // 80004220: andi.   r10, r10, 0x0007
    {
        ctx->gpr[10] = ctx->gpr[10] & 0x0007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004224:
    ctx->pc = 0x80004224u;
    // 80004224: bc    13, 2, 0x80004238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004238;
        }
    }

label_80004228:
    ctx->pc = 0x80004228u;
    ctx->downcount -= 2;
    // 80004228: mtctr    r10
    ctx->ctr = ctx->gpr[10];

label_8000422C:
    loop_8000422C(ctx);
    if (ctx->pc == 0x80004238u) goto label_80004238;
    return;
label_80004230:
    ctx->pc = 0x80004230u;
    // 80004230: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

label_80004234:
    // 80004234: bc    16, 0, 0x8000422C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000422Cu;
                return;
            }
            goto label_8000422C;
        }
    }

label_80004238:
    ctx->pc = 0x80004238u;
    ctx->downcount -= 4;
    // 80004238: subf   r5, r10, r5
    {
        u32 a = ~ctx->gpr[10];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_8000423C:
    ctx->pc = 0x8000423Cu;
    // 8000423C: rlwinm r6, r5, 28, 4, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 28u) & 0x0FFFFFFFu;
    }

label_80004240:
    ctx->pc = 0x80004240u;
    // 80004240: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_80004244:
    loop_80004244(ctx);
    if (ctx->pc == 0x8000426Cu) goto label_8000426C;
    return;
label_80004248:
    ctx->pc = 0x80004248u;
    // 80004248: lwz     r10, -8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-8);
        ctx->gpr[10] = mem_read32(ctx, ea);
    }

label_8000424C:
    ctx->pc = 0x8000424Cu;
    // 8000424C: lwz     r11, -12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-12);
        ctx->gpr[11] = mem_read32(ctx, ea);
    }

label_80004250:
    ctx->pc = 0x80004250u;
    // 80004250: lwz     r8, -16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80004254:
    // 80004254: addi    r4, r4, -16
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-16);

label_80004258:
    ctx->pc = 0x80004258u;
    // 80004258: stw     r9, -4(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-4);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_8000425C:
    ctx->pc = 0x8000425Cu;
    // 8000425C: stw     r10, -8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_80004260:
    ctx->pc = 0x80004260u;
    // 80004260: stw     r11, -12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-12);
        mem_write32(ctx, ea, (u32)ctx->gpr[11]);
    }

label_80004264:
    ctx->pc = 0x80004264u;
    // 80004264: stwu     r8, -16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
        ctx->gpr[12] = ea;
    }

label_80004268:
    // 80004268: bc    16, 0, 0x80004244
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004244u;
                return;
            }
            goto label_80004244;
        }
    }

label_8000426C:
    ctx->pc = 0x8000426Cu;
    ctx->downcount -= 2;
    // 8000426C: andi.   r6, r5, 0x000F
    {
        ctx->gpr[6] = ctx->gpr[5] & 0x000Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[6];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004270:
    ctx->pc = 0x80004270u;
    // 80004270: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004274:
    ctx->pc = 0x80004274u;
    ctx->downcount -= 2;
    // 80004274: mtctr    r6
    ctx->ctr = ctx->gpr[6];

label_80004278:
    loop_80004278(ctx);
    if (ctx->pc == 0x80004284u) goto label_80004284;
    return;
label_8000427C:
    ctx->pc = 0x8000427Cu;
    // 8000427C: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

label_80004280:
    // 80004280: bc    16, 0, 0x80004278
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004278u;
                return;
            }
            goto label_80004278;
        }
    }

label_80004284:
    ctx->pc = 0x80004284u;
    ctx->downcount -= 1;
    // 80004284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004288:
    ctx->pc = 0x80004288u;
    ctx->downcount -= 2;
    // 80004288: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_8000428C:
    loop_8000428C(ctx);
    if (ctx->pc == 0x80004298u) goto label_80004298;
    return;
label_80004290:
    ctx->pc = 0x80004290u;
    // 80004290: stbu     r9, -1(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(-1);
        mem_write8(ctx, ea, (u8)ctx->gpr[9]);
        ctx->gpr[12] = ea;
    }

label_80004294:
    // 80004294: bc    16, 0, 0x8000428C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000428Cu;
                return;
            }
            goto label_8000428C;
        }
    }

label_80004298:
    ctx->pc = 0x80004298u;
    ctx->downcount -= 1;
    // 80004298: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_8000429C:
    ctx->pc = 0x8000429Cu;
    ctx->downcount -= 4;
    // 8000429C: cmplwi  r5, 0x0020
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0020u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800042A0:
    ctx->pc = 0x800042A0u;
    // 800042A0: rlwinm r7, r4, 0, 24, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FFu;
    }

label_800042A4:
    ctx->pc = 0x800042A4u;
    // 800042A4: addi    r6, r3, -1
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(-1);

label_800042A8:
    ctx->pc = 0x800042A8u;
    // 800042A8: bc    12, 0, 0x80004338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004338;
        }
    }

label_800042AC:
    ctx->pc = 0x800042ACu;
    ctx->downcount -= 3;
    // 800042AC: nor   r0, r6, r6
    {
        ctx->gpr[0] = ~(ctx->gpr[6] | ctx->gpr[6]);
    }

label_800042B0:
    ctx->pc = 0x800042B0u;
    // 800042B0: rlwinm. r0, r0, 0, 30, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000003u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800042B4:
    ctx->pc = 0x800042B4u;
    // 800042B4: bc    12, 2, 0x800042C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800042C8;
        }
    }

label_800042B8:
    ctx->pc = 0x800042B8u;
    ctx->downcount -= 1;
    // 800042B8: subf   r5, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[5] = res;
    }

label_800042BC:
    loop_800042BC(ctx);
    if (ctx->pc == 0x800042C8u) goto label_800042C8;
    return;
label_800042C0:
    ctx->pc = 0x800042C0u;
    // 800042C0: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_800042C4:
    // 800042C4: bc    4, 2, 0x800042BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800042BCu;
                return;
            }
            goto label_800042BC;
        }
    }

label_800042C8:
    ctx->pc = 0x800042C8u;
    ctx->downcount -= 2;
    // 800042C8: cmpwi   r7, 0
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

label_800042CC:
    ctx->pc = 0x800042CCu;
    // 800042CC: bc    12, 2, 0x800042E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800042E8;
        }
    }

label_800042D0:
    ctx->pc = 0x800042D0u;
    ctx->downcount -= 6;
    // 800042D0: rlwinm r4, r7, 8, 0, 23
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[7], 8u) & 0xFFFFFF00u;
    }

label_800042D4:
    ctx->pc = 0x800042D4u;
    // 800042D4: rlwinm r3, r7, 24, 0, 7
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[7], 24u) & 0xFF000000u;
    }

label_800042D8:
    ctx->pc = 0x800042D8u;
    // 800042D8: rlwinm r0, r7, 16, 0, 15
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 16u) & 0xFFFF0000u;
    }

label_800042DC:
    ctx->pc = 0x800042DCu;
    // 800042DC: or   r4, r7, r4
    {
        ctx->gpr[4] = ctx->gpr[7] | ctx->gpr[4];
    }

label_800042E0:
    ctx->pc = 0x800042E0u;
    // 800042E0: or   r0, r3, r0
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[0];
    }

label_800042E4:
    ctx->pc = 0x800042E4u;
    // 800042E4: or   r7, r4, r0
    {
        ctx->gpr[7] = ctx->gpr[4] | ctx->gpr[0];
    }

label_800042E8:
    ctx->pc = 0x800042E8u;
    ctx->downcount -= 3;
    // 800042E8: rlwinm. r0, r5, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800042EC:
    ctx->pc = 0x800042ECu;
    // 800042EC: addi    r3, r6, -3
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(-3);

label_800042F0:
    ctx->pc = 0x800042F0u;
    // 800042F0: bc    12, 2, 0x8000431C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000431C;
        }
    }

label_800042F4:
    loop_800042F4(ctx);
    if (ctx->pc == 0x8000431Cu) goto label_8000431C;
    return;
label_800042F8:
    // 800042F8: addic.  r0, r0, -1
    {
        u64 a = ctx->gpr[0];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800042FC:
    ctx->pc = 0x800042FCu;
    // 800042FC: stw     r7, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80004300:
    ctx->pc = 0x80004300u;
    // 80004300: stw     r7, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80004304:
    ctx->pc = 0x80004304u;
    // 80004304: stw     r7, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80004308:
    ctx->pc = 0x80004308u;
    // 80004308: stw     r7, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8000430C:
    ctx->pc = 0x8000430Cu;
    // 8000430C: stw     r7, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80004310:
    ctx->pc = 0x80004310u;
    // 80004310: stw     r7, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80004314:
    ctx->pc = 0x80004314u;
    // 80004314: stwu     r7, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

label_80004318:
    // 80004318: bc    4, 2, 0x800042F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800042F4u;
                return;
            }
            goto label_800042F4;
        }
    }

label_8000431C:
    ctx->pc = 0x8000431Cu;
    ctx->downcount -= 2;
    // 8000431C: rlwinm. r0, r5, 30, 29, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 30u) & 0x00000007u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004320:
    ctx->pc = 0x80004320u;
    // 80004320: bc    12, 2, 0x80004330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80004330;
        }
    }

label_80004324:
    loop_80004324(ctx);
    if (ctx->pc == 0x80004330u) goto label_80004330;
    return;
label_80004328:
    ctx->pc = 0x80004328u;
    // 80004328: stwu     r7, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
        ctx->gpr[3] = ea;
    }

label_8000432C:
    // 8000432C: bc    4, 2, 0x80004324
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004324u;
                return;
            }
            goto label_80004324;
        }
    }

label_80004330:
    ctx->pc = 0x80004330u;
    ctx->downcount -= 2;
    // 80004330: addi    r6, r3, 3
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(3);

label_80004334:
    ctx->pc = 0x80004334u;
    // 80004334: rlwinm r5, r5, 0, 30, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[5], 0u) & 0x00000003u;
    }

label_80004338:
    ctx->pc = 0x80004338u;
    ctx->downcount -= 2;
    // 80004338: cmpwi   r5, 0
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

label_8000433C:
    ctx->pc = 0x8000433Cu;
    // 8000433C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004340:
    loop_80004340(ctx);
    if (ctx->pc == 0x8000434Cu) goto label_8000434C;
    return;
label_80004344:
    ctx->pc = 0x80004344u;
    // 80004344: stbu     r7, 1(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(1);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
        ctx->gpr[6] = ea;
    }

label_80004348:
    // 80004348: bc    4, 2, 0x80004340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004340u;
                return;
            }
            goto label_80004340;
        }
    }

label_8000434C:
    ctx->pc = 0x8000434Cu;
    ctx->downcount -= 1;
    // 8000434C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004350:
    ctx->pc = 0x80004350u;
    ctx->downcount -= 6;
    // 80004350: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80004354:
    ctx->pc = 0x80004354u;
    // 80004354: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80004358:
    ctx->pc = 0x80004358u;
    // 80004358: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000435C:
    ctx->pc = 0x8000435Cu;
    // 8000435C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80004360:
    ctx->pc = 0x80004360u;
    // 80004360: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80004364:
    ctx->pc = 0x80004364u;
    // 80004364: bl      0x8000429C
    {
            ctx->lr = 0x80004368u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8000429Cu;
                return;
            }
            goto label_8000429C;
    }

label_80004368:
    ctx->pc = 0x80004368u;
    ctx->downcount -= 7;
    // 80004368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8000436C:
    ctx->pc = 0x8000436Cu;
    // 8000436C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80004370:
    ctx->pc = 0x80004370u;
    // 80004370: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80004374:
    ctx->pc = 0x80004374u;
    // 80004374: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80004378:
    ctx->pc = 0x80004378u;
    // 80004378: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8000437C:
    ctx->pc = 0x8000437Cu;
    // 8000437C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80004380:
    ctx->pc = 0x80004380u;
    // 80004380: .long   0x4D657472
    // embedded data

label_80004384:
    ctx->pc = 0x80004384u;
    // 80004384: xoris   r23, r27, 0x6572
    ctx->gpr[23] = ctx->gpr[27] ^ (0x6572u << 16);

label_80004388:
    ctx->pc = 0x80004388u;
    // 80004388: xori    r19, r27, 0x2054
    ctx->gpr[19] = ctx->gpr[27] ^ 0x2054u;

label_8000438C:
    ctx->pc = 0x8000438Cu;
    // 8000438C: ori     r18, r11, 0x6765
    ctx->gpr[18] = ctx->gpr[11] | 0x6765u;

label_80004390:
    ctx->pc = 0x80004390u;
    // 80004390: andis.  r0, r1, 0x5265
    {
        ctx->gpr[0] = ctx->gpr[1] & (0x5265u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004394:
    ctx->pc = 0x80004394u;
    // 80004394: andi.   r9, r27, 0x6465
    {
        ctx->gpr[9] = ctx->gpr[27] & 0x6465u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[9];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80004398:
    ctx->pc = 0x80004398u;
    // 80004398: xoris   r20, r19, 0x204B
    ctx->gpr[20] = ctx->gpr[19] ^ (0x204Bu << 16);

label_8000439C:
    ctx->pc = 0x8000439Cu;
    // 8000439C: oris    r18, r11, 0x6E65
    ctx->gpr[18] = ctx->gpr[11] | (0x6E65u << 16);

label_800043A0:
    ctx->pc = 0x800043A0u;
    // 800043A0: xoris   r0, r1, 0x666F
    ctx->gpr[0] = ctx->gpr[1] ^ (0x666Fu << 16);

label_800043A4:
    ctx->pc = 0x800043A4u;
    // 800043A4: andi.   r0, r17, 0x506F
    {
        ctx->gpr[0] = ctx->gpr[17] & 0x506Fu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800043A8:
    ctx->pc = 0x800043A8u;
    // 800043A8: andis.  r5, r27, 0x7250
    {
        ctx->gpr[5] = ctx->gpr[27] & (0x7250u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800043AC:
    ctx->downcount -= 1;
    // 800043AC: bc    24, 0, 0x800043AC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800043ACu;
                return;
            }
            goto label_800043AC;
        }
    }

label_800043B0:
    ctx->pc = 0x800043B0u;
    // 800043B0: .long   0x00000000
    // embedded data

label_800043B4:
    ctx->pc = 0x800043B4u;
    // 800043B4: .long   0x00000000
    // embedded data

label_800043B8:
    ctx->pc = 0x800043B8u;
    // 800043B8: .long   0x00000000
    // embedded data

label_800043BC:
    ctx->pc = 0x800043BCu;
    // 800043BC: .long   0x00000000
    // embedded data

label_800043C0:
    ctx->pc = 0x800043C0u;
    // 800043C0: .long   0x00000000
    // embedded data

label_800043C4:
    ctx->pc = 0x800043C4u;
    // 800043C4: .long   0x00000000
    // embedded data

label_800043C8:
    ctx->pc = 0x800043C8u;
    // 800043C8: .long   0x00000000
    // embedded data

label_800043CC:
    ctx->pc = 0x800043CCu;
    // 800043CC: .long   0x00000000
    // embedded data

label_800043D0:
    ctx->pc = 0x800043D0u;
    // 800043D0: .long   0x00000000
    // embedded data

label_800043D4:
    ctx->pc = 0x800043D4u;
    // 800043D4: .long   0x00000000
    // embedded data

label_800043D8:
    ctx->pc = 0x800043D8u;
    // 800043D8: .long   0x00000000
    // embedded data

label_800043DC:
    ctx->pc = 0x800043DCu;
    // 800043DC: .long   0x00000000
    // embedded data

label_800043E0:
    ctx->pc = 0x800043E0u;
    // 800043E0: .long   0x00000000
    // embedded data

label_800043E4:
    ctx->pc = 0x800043E4u;
    // 800043E4: .long   0x00000000
    // embedded data

label_800043E8:
    ctx->pc = 0x800043E8u;
    // 800043E8: .long   0x00000000
    // embedded data

label_800043EC:
    ctx->pc = 0x800043ECu;
    // 800043EC: .long   0x00000000
    // embedded data

label_800043F0:
    ctx->pc = 0x800043F0u;
    // 800043F0: .long   0x00000000
    // embedded data

label_800043F4:
    ctx->pc = 0x800043F4u;
    // 800043F4: .long   0x00000000
    // embedded data

label_800043F8:
    ctx->pc = 0x800043F8u;
    // 800043F8: .long   0x00000000
    // embedded data

label_800043FC:
    ctx->pc = 0x800043FCu;
    // 800043FC: .long   0x00000000
    // embedded data

label_80004400:
    ctx->pc = 0x80004400u;
    // 80004400: .long   0x00000000
    // embedded data

label_80004404:
    ctx->pc = 0x80004404u;
    // 80004404: .long   0x00000000
    // embedded data

label_80004408:
    ctx->pc = 0x80004408u;
    // 80004408: .long   0x00000000
    // embedded data

label_8000440C:
    ctx->pc = 0x8000440Cu;
    // 8000440C: .long   0x00000000
    // embedded data

label_80004410:
    ctx->pc = 0x80004410u;
    // 80004410: .long   0x00000000
    // embedded data

label_80004414:
    ctx->pc = 0x80004414u;
    // 80004414: .long   0x00000000
    // embedded data

label_80004418:
    ctx->pc = 0x80004418u;
    // 80004418: .long   0x00000000
    // embedded data

label_8000441C:
    ctx->pc = 0x8000441Cu;
    // 8000441C: .long   0x00000000
    // embedded data

label_80004420:
    ctx->pc = 0x80004420u;
    // 80004420: .long   0x00000000
    // embedded data

label_80004424:
    ctx->pc = 0x80004424u;
    // 80004424: .long   0x00000000
    // embedded data

label_80004428:
    ctx->pc = 0x80004428u;
    // 80004428: .long   0x00000000
    // embedded data

label_8000442C:
    ctx->pc = 0x8000442Cu;
    // 8000442C: .long   0x00000000
    // embedded data

label_80004430:
    ctx->pc = 0x80004430u;
    // 80004430: .long   0x00000000
    // embedded data

label_80004434:
    ctx->pc = 0x80004434u;
    // 80004434: .long   0x00000000
    // embedded data

label_80004438:
    ctx->pc = 0x80004438u;
    // 80004438: .long   0x00000000
    // embedded data

label_8000443C:
    ctx->pc = 0x8000443Cu;
    // 8000443C: .long   0x00000000
    // embedded data

label_80004440:
    ctx->pc = 0x80004440u;
    // 80004440: .long   0x00000000
    // embedded data

label_80004444:
    ctx->pc = 0x80004444u;
    // 80004444: .long   0x00000000
    // embedded data

label_80004448:
    ctx->pc = 0x80004448u;
    // 80004448: .long   0x00000000
    // embedded data

label_8000444C:
    ctx->pc = 0x8000444Cu;
    // 8000444C: .long   0x00000000
    // embedded data

label_80004450:
    ctx->pc = 0x80004450u;
    // 80004450: .long   0x00000000
    // embedded data

label_80004454:
    ctx->pc = 0x80004454u;
    // 80004454: .long   0x00000000
    // embedded data

label_80004458:
    ctx->pc = 0x80004458u;
    // 80004458: .long   0x00000000
    // embedded data

label_8000445C:
    ctx->pc = 0x8000445Cu;
    // 8000445C: .long   0x00000000
    // embedded data

label_80004460:
    ctx->pc = 0x80004460u;
    // 80004460: .long   0x00000000
    // embedded data

label_80004464:
    ctx->pc = 0x80004464u;
    // 80004464: .long   0x00000000
    // embedded data

label_80004468:
    ctx->pc = 0x80004468u;
    // 80004468: .long   0x00000000
    // embedded data

label_8000446C:
    ctx->pc = 0x8000446Cu;
    // 8000446C: .long   0x00000000
    // embedded data

label_80004470:
    ctx->pc = 0x80004470u;
    // 80004470: .long   0x00000000
    // embedded data

label_80004474:
    ctx->pc = 0x80004474u;
    // 80004474: .long   0x00000000
    // embedded data

label_80004478:
    ctx->pc = 0x80004478u;
    // 80004478: .long   0x00000000
    // embedded data

label_8000447C:
    ctx->pc = 0x8000447Cu;
    // 8000447C: .long   0x00000000
    // embedded data

label_80004480:
    ctx->pc = 0x80004480u;
    // 80004480: b       0x80017E20
    {
            ctx->pc = 0x80017E20u;
            return;
    }

label_80004484:
    ctx->pc = 0x80004484u;
    // 80004484: .long   0x00000000
    // embedded data

label_80004488:
    ctx->pc = 0x80004488u;
    // 80004488: .long   0x00000000
    // embedded data

label_8000448C:
    ctx->pc = 0x8000448Cu;
    // 8000448C: .long   0x00000000
    // embedded data

label_80004490:
    ctx->pc = 0x80004490u;
    // 80004490: .long   0x00000000
    // embedded data

label_80004494:
    ctx->pc = 0x80004494u;
    // 80004494: .long   0x00000000
    // embedded data

label_80004498:
    ctx->pc = 0x80004498u;
    // 80004498: .long   0x00000000
    // embedded data

label_8000449C:
    ctx->pc = 0x8000449Cu;
    // 8000449C: .long   0x00000000
    // embedded data

label_800044A0:
    ctx->pc = 0x800044A0u;
    // 800044A0: .long   0x00000000
    // embedded data

label_800044A4:
    ctx->pc = 0x800044A4u;
    // 800044A4: .long   0x00000000
    // embedded data

label_800044A8:
    ctx->pc = 0x800044A8u;
    // 800044A8: .long   0x00000000
    // embedded data

label_800044AC:
    ctx->pc = 0x800044ACu;
    // 800044AC: .long   0x00000000
    // embedded data

label_800044B0:
    ctx->pc = 0x800044B0u;
    // 800044B0: .long   0x00000000
    // embedded data

label_800044B4:
    ctx->pc = 0x800044B4u;
    // 800044B4: .long   0x00000000
    // embedded data

label_800044B8:
    ctx->pc = 0x800044B8u;
    // 800044B8: .long   0x00000000
    // embedded data

label_800044BC:
    ctx->pc = 0x800044BCu;
    // 800044BC: .long   0x00000000
    // embedded data

label_800044C0:
    ctx->pc = 0x800044C0u;
    // 800044C0: .long   0x00000000
    // embedded data

label_800044C4:
    ctx->pc = 0x800044C4u;
    // 800044C4: .long   0x00000000
    // embedded data

label_800044C8:
    ctx->pc = 0x800044C8u;
    // 800044C8: .long   0x00000000
    // embedded data

label_800044CC:
    ctx->pc = 0x800044CCu;
    // 800044CC: .long   0x00000000
    // embedded data

label_800044D0:
    ctx->pc = 0x800044D0u;
    // 800044D0: .long   0x00000000
    // embedded data

label_800044D4:
    ctx->pc = 0x800044D4u;
    // 800044D4: .long   0x00000000
    // embedded data

label_800044D8:
    ctx->pc = 0x800044D8u;
    // 800044D8: .long   0x00000000
    // embedded data

label_800044DC:
    ctx->pc = 0x800044DCu;
    // 800044DC: .long   0x00000000
    // embedded data

label_800044E0:
    ctx->pc = 0x800044E0u;
    // 800044E0: .long   0x00000000
    // embedded data

label_800044E4:
    ctx->pc = 0x800044E4u;
    // 800044E4: .long   0x00000000
    // embedded data

label_800044E8:
    ctx->pc = 0x800044E8u;
    // 800044E8: .long   0x00000000
    // embedded data

label_800044EC:
    ctx->pc = 0x800044ECu;
    // 800044EC: .long   0x00000000
    // embedded data

label_800044F0:
    ctx->pc = 0x800044F0u;
    // 800044F0: .long   0x00000000
    // embedded data

label_800044F4:
    ctx->pc = 0x800044F4u;
    // 800044F4: .long   0x00000000
    // embedded data

label_800044F8:
    ctx->pc = 0x800044F8u;
    // 800044F8: .long   0x00000000
    // embedded data

label_800044FC:
    ctx->pc = 0x800044FCu;
    // 800044FC: .long   0x00000000
    // embedded data

label_80004500:
    ctx->pc = 0x80004500u;
    // 80004500: .long   0x00000000
    // embedded data

label_80004504:
    ctx->pc = 0x80004504u;
    // 80004504: .long   0x00000000
    // embedded data

label_80004508:
    ctx->pc = 0x80004508u;
    // 80004508: .long   0x00000000
    // embedded data

label_8000450C:
    ctx->pc = 0x8000450Cu;
    // 8000450C: .long   0x00000000
    // embedded data

label_80004510:
    ctx->pc = 0x80004510u;
    // 80004510: .long   0x00000000
    // embedded data

label_80004514:
    ctx->pc = 0x80004514u;
    // 80004514: .long   0x00000000
    // embedded data

label_80004518:
    ctx->pc = 0x80004518u;
    // 80004518: .long   0x00000000
    // embedded data

label_8000451C:
    ctx->pc = 0x8000451Cu;
    // 8000451C: .long   0x00000000
    // embedded data

label_80004520:
    ctx->pc = 0x80004520u;
    // 80004520: .long   0x00000000
    // embedded data

label_80004524:
    ctx->pc = 0x80004524u;
    // 80004524: .long   0x00000000
    // embedded data

label_80004528:
    ctx->pc = 0x80004528u;
    // 80004528: .long   0x00000000
    // embedded data

label_8000452C:
    ctx->pc = 0x8000452Cu;
    // 8000452C: .long   0x00000000
    // embedded data

label_80004530:
    ctx->pc = 0x80004530u;
    // 80004530: .long   0x00000000
    // embedded data

label_80004534:
    ctx->pc = 0x80004534u;
    // 80004534: .long   0x00000000
    // embedded data

label_80004538:
    ctx->pc = 0x80004538u;
    // 80004538: .long   0x00000000
    // embedded data

label_8000453C:
    ctx->pc = 0x8000453Cu;
    // 8000453C: .long   0x00000000
    // embedded data

label_80004540:
    ctx->pc = 0x80004540u;
    // 80004540: .long   0x00000000
    // embedded data

label_80004544:
    ctx->pc = 0x80004544u;
    // 80004544: .long   0x00000000
    // embedded data

label_80004548:
    ctx->pc = 0x80004548u;
    // 80004548: .long   0x00000000
    // embedded data

label_8000454C:
    ctx->pc = 0x8000454Cu;
    // 8000454C: .long   0x00000000
    // embedded data

label_80004550:
    ctx->pc = 0x80004550u;
    // 80004550: .long   0x00000000
    // embedded data

label_80004554:
    ctx->pc = 0x80004554u;
    // 80004554: .long   0x00000000
    // embedded data

label_80004558:
    ctx->pc = 0x80004558u;
    // 80004558: .long   0x00000000
    // embedded data

label_8000455C:
    ctx->pc = 0x8000455Cu;
    // 8000455C: .long   0x00000000
    // embedded data

label_80004560:
    ctx->pc = 0x80004560u;
    // 80004560: .long   0x00000000
    // embedded data

label_80004564:
    ctx->pc = 0x80004564u;
    // 80004564: .long   0x00000000
    // embedded data

label_80004568:
    ctx->pc = 0x80004568u;
    // 80004568: .long   0x00000000
    // embedded data

label_8000456C:
    ctx->pc = 0x8000456Cu;
    // 8000456C: .long   0x00000000
    // embedded data

label_80004570:
    ctx->pc = 0x80004570u;
    // 80004570: .long   0x00000000
    // embedded data

label_80004574:
    ctx->pc = 0x80004574u;
    // 80004574: .long   0x00000000
    // embedded data

label_80004578:
    ctx->pc = 0x80004578u;
    // 80004578: .long   0x00000000
    // embedded data

label_8000457C:
    ctx->pc = 0x8000457Cu;
    // 8000457C: .long   0x00000000
    // embedded data

label_80004580:
    ctx->pc = 0x80004580u;
    // 80004580: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004580u);
    return;

label_80004584:
    ctx->pc = 0x80004584u;
    ctx->downcount -= 1;
    // 80004584: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004588:
    ctx->pc = 0x80004588u;
    // 80004588: icbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0017ACu, 0x80004588u);
    return;

label_8000458C:
    ctx->pc = 0x8000458Cu;
    // 8000458C: mfdar    r2
    ppc_fallback_instruction(ctx, 0x7C5302A6u, 0x8000458Cu);
    return;

label_80004590:
    ctx->pc = 0x80004590u;
    // 80004590: dcbi    0, r2
    ppc_fallback_instruction(ctx, 0x7C0013ACu, 0x80004590u);
    return;

label_80004594:
    ctx->pc = 0x80004594u;
    // 80004594: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x80004594u);
    return;

label_80004598:
    ctx->pc = 0x80004598u;
    // 80004598: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004598u);
    return;

label_8000459C:
    ctx->pc = 0x8000459Cu;
    // 8000459C: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x8000459Cu);
    return;

label_800045A0:
    ctx->pc = 0x800045A0u;
    // 800045A0: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800045A0u);
    return;

label_800045A4:
    ctx->pc = 0x800045A4u;
    ctx->downcount -= 13;
    // 800045A4: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800045A8:
    ctx->pc = 0x800045A8u;
    // 800045A8: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800045AC:
    ctx->pc = 0x800045ACu;
    // 800045AC: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800045B0:
    ctx->pc = 0x800045B0u;
    // 800045B0: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800045B4:
    ctx->pc = 0x800045B4u;
    // 800045B4: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800045B8:
    ctx->pc = 0x800045B8u;
    // 800045B8: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800045BC:
    ctx->pc = 0x800045BCu;
    // 800045BC: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800045C0:
    ctx->pc = 0x800045C0u;
    // 800045C0: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800045C4:
    ctx->pc = 0x800045C4u;
    // 800045C4: li      r3, 512
    ctx->gpr[3] = (u32)(s32)(512);

label_800045C8:
    ctx->pc = 0x800045C8u;
    // 800045C8: rfi
    ppc_rfi(ctx, 0x800045C8u);
    return;

label_800045CC:
    ctx->pc = 0x800045CCu;
    // 800045CC: .long   0x00000000
    // embedded data

label_800045D0:
    ctx->pc = 0x800045D0u;
    // 800045D0: .long   0x00000000
    // embedded data

label_800045D4:
    ctx->pc = 0x800045D4u;
    // 800045D4: .long   0x00000000
    // embedded data

label_800045D8:
    ctx->pc = 0x800045D8u;
    // 800045D8: .long   0x00000000
    // embedded data

label_800045DC:
    ctx->pc = 0x800045DCu;
    // 800045DC: .long   0x00000000
    // embedded data

label_800045E0:
    ctx->pc = 0x800045E0u;
    // 800045E0: .long   0x00000000
    // embedded data

label_800045E4:
    ctx->pc = 0x800045E4u;
    // 800045E4: .long   0x00000000
    // embedded data

label_800045E8:
    ctx->pc = 0x800045E8u;
    // 800045E8: .long   0x00000000
    // embedded data

label_800045EC:
    ctx->pc = 0x800045ECu;
    // 800045EC: .long   0x00000000
    // embedded data

label_800045F0:
    ctx->pc = 0x800045F0u;
    // 800045F0: .long   0x00000000
    // embedded data

label_800045F4:
    ctx->pc = 0x800045F4u;
    // 800045F4: .long   0x00000000
    // embedded data

label_800045F8:
    ctx->pc = 0x800045F8u;
    // 800045F8: .long   0x00000000
    // embedded data

label_800045FC:
    ctx->pc = 0x800045FCu;
    // 800045FC: .long   0x00000000
    // embedded data

label_80004600:
    ctx->pc = 0x80004600u;
    // 80004600: .long   0x00000000
    // embedded data

label_80004604:
    ctx->pc = 0x80004604u;
    // 80004604: .long   0x00000000
    // embedded data

label_80004608:
    ctx->pc = 0x80004608u;
    // 80004608: .long   0x00000000
    // embedded data

label_8000460C:
    ctx->pc = 0x8000460Cu;
    // 8000460C: .long   0x00000000
    // embedded data

label_80004610:
    ctx->pc = 0x80004610u;
    // 80004610: .long   0x00000000
    // embedded data

label_80004614:
    ctx->pc = 0x80004614u;
    // 80004614: .long   0x00000000
    // embedded data

label_80004618:
    ctx->pc = 0x80004618u;
    // 80004618: .long   0x00000000
    // embedded data

label_8000461C:
    ctx->pc = 0x8000461Cu;
    // 8000461C: .long   0x00000000
    // embedded data

label_80004620:
    ctx->pc = 0x80004620u;
    // 80004620: .long   0x00000000
    // embedded data

label_80004624:
    ctx->pc = 0x80004624u;
    // 80004624: .long   0x00000000
    // embedded data

label_80004628:
    ctx->pc = 0x80004628u;
    // 80004628: .long   0x00000000
    // embedded data

label_8000462C:
    ctx->pc = 0x8000462Cu;
    // 8000462C: .long   0x00000000
    // embedded data

label_80004630:
    ctx->pc = 0x80004630u;
    // 80004630: .long   0x00000000
    // embedded data

label_80004634:
    ctx->pc = 0x80004634u;
    // 80004634: .long   0x00000000
    // embedded data

label_80004638:
    ctx->pc = 0x80004638u;
    // 80004638: .long   0x00000000
    // embedded data

label_8000463C:
    ctx->pc = 0x8000463Cu;
    // 8000463C: .long   0x00000000
    // embedded data

label_80004640:
    ctx->pc = 0x80004640u;
    // 80004640: .long   0x00000000
    // embedded data

label_80004644:
    ctx->pc = 0x80004644u;
    // 80004644: .long   0x00000000
    // embedded data

label_80004648:
    ctx->pc = 0x80004648u;
    // 80004648: .long   0x00000000
    // embedded data

label_8000464C:
    ctx->pc = 0x8000464Cu;
    // 8000464C: .long   0x00000000
    // embedded data

label_80004650:
    ctx->pc = 0x80004650u;
    // 80004650: .long   0x00000000
    // embedded data

label_80004654:
    ctx->pc = 0x80004654u;
    // 80004654: .long   0x00000000
    // embedded data

label_80004658:
    ctx->pc = 0x80004658u;
    // 80004658: .long   0x00000000
    // embedded data

label_8000465C:
    ctx->pc = 0x8000465Cu;
    // 8000465C: .long   0x00000000
    // embedded data

label_80004660:
    ctx->pc = 0x80004660u;
    // 80004660: .long   0x00000000
    // embedded data

label_80004664:
    ctx->pc = 0x80004664u;
    // 80004664: .long   0x00000000
    // embedded data

label_80004668:
    ctx->pc = 0x80004668u;
    // 80004668: .long   0x00000000
    // embedded data

label_8000466C:
    ctx->pc = 0x8000466Cu;
    // 8000466C: .long   0x00000000
    // embedded data

label_80004670:
    ctx->pc = 0x80004670u;
    // 80004670: .long   0x00000000
    // embedded data

label_80004674:
    ctx->pc = 0x80004674u;
    // 80004674: .long   0x00000000
    // embedded data

label_80004678:
    ctx->pc = 0x80004678u;
    // 80004678: .long   0x00000000
    // embedded data

label_8000467C:
    ctx->pc = 0x8000467Cu;
    // 8000467C: .long   0x00000000
    // embedded data

label_80004680:
    ctx->pc = 0x80004680u;
    // 80004680: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004680u);
    return;

label_80004684:
    ctx->pc = 0x80004684u;
    // 80004684: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004684u);
    return;

label_80004688:
    ctx->pc = 0x80004688u;
    // 80004688: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004688u);
    return;

label_8000468C:
    ctx->pc = 0x8000468Cu;
    ctx->downcount -= 13;
    // 8000468C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004690:
    ctx->pc = 0x80004690u;
    // 80004690: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004694:
    ctx->pc = 0x80004694u;
    // 80004694: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004698:
    ctx->pc = 0x80004698u;
    // 80004698: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000469C:
    ctx->pc = 0x8000469Cu;
    // 8000469C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800046A0:
    ctx->pc = 0x800046A0u;
    // 800046A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800046A4:
    ctx->pc = 0x800046A4u;
    // 800046A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800046A8:
    ctx->pc = 0x800046A8u;
    // 800046A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800046AC:
    ctx->pc = 0x800046ACu;
    // 800046AC: li      r3, 768
    ctx->gpr[3] = (u32)(s32)(768);

label_800046B0:
    ctx->pc = 0x800046B0u;
    // 800046B0: rfi
    ppc_rfi(ctx, 0x800046B0u);
    return;

label_800046B4:
    ctx->pc = 0x800046B4u;
    // 800046B4: .long   0x00000000
    // embedded data

label_800046B8:
    ctx->pc = 0x800046B8u;
    // 800046B8: .long   0x00000000
    // embedded data

label_800046BC:
    ctx->pc = 0x800046BCu;
    // 800046BC: .long   0x00000000
    // embedded data

label_800046C0:
    ctx->pc = 0x800046C0u;
    // 800046C0: .long   0x00000000
    // embedded data

label_800046C4:
    ctx->pc = 0x800046C4u;
    // 800046C4: .long   0x00000000
    // embedded data

label_800046C8:
    ctx->pc = 0x800046C8u;
    // 800046C8: .long   0x00000000
    // embedded data

label_800046CC:
    ctx->pc = 0x800046CCu;
    // 800046CC: .long   0x00000000
    // embedded data

label_800046D0:
    ctx->pc = 0x800046D0u;
    // 800046D0: .long   0x00000000
    // embedded data

label_800046D4:
    ctx->pc = 0x800046D4u;
    // 800046D4: .long   0x00000000
    // embedded data

label_800046D8:
    ctx->pc = 0x800046D8u;
    // 800046D8: .long   0x00000000
    // embedded data

label_800046DC:
    ctx->pc = 0x800046DCu;
    // 800046DC: .long   0x00000000
    // embedded data

label_800046E0:
    ctx->pc = 0x800046E0u;
    // 800046E0: .long   0x00000000
    // embedded data

label_800046E4:
    ctx->pc = 0x800046E4u;
    // 800046E4: .long   0x00000000
    // embedded data

label_800046E8:
    ctx->pc = 0x800046E8u;
    // 800046E8: .long   0x00000000
    // embedded data

label_800046EC:
    ctx->pc = 0x800046ECu;
    // 800046EC: .long   0x00000000
    // embedded data

label_800046F0:
    ctx->pc = 0x800046F0u;
    // 800046F0: .long   0x00000000
    // embedded data

label_800046F4:
    ctx->pc = 0x800046F4u;
    // 800046F4: .long   0x00000000
    // embedded data

label_800046F8:
    ctx->pc = 0x800046F8u;
    // 800046F8: .long   0x00000000
    // embedded data

label_800046FC:
    ctx->pc = 0x800046FCu;
    // 800046FC: .long   0x00000000
    // embedded data

label_80004700:
    ctx->pc = 0x80004700u;
    // 80004700: .long   0x00000000
    // embedded data

label_80004704:
    ctx->pc = 0x80004704u;
    // 80004704: .long   0x00000000
    // embedded data

label_80004708:
    ctx->pc = 0x80004708u;
    // 80004708: .long   0x00000000
    // embedded data

label_8000470C:
    ctx->pc = 0x8000470Cu;
    // 8000470C: .long   0x00000000
    // embedded data

label_80004710:
    ctx->pc = 0x80004710u;
    // 80004710: .long   0x00000000
    // embedded data

label_80004714:
    ctx->pc = 0x80004714u;
    // 80004714: .long   0x00000000
    // embedded data

label_80004718:
    ctx->pc = 0x80004718u;
    // 80004718: .long   0x00000000
    // embedded data

label_8000471C:
    ctx->pc = 0x8000471Cu;
    // 8000471C: .long   0x00000000
    // embedded data

label_80004720:
    ctx->pc = 0x80004720u;
    // 80004720: .long   0x00000000
    // embedded data

label_80004724:
    ctx->pc = 0x80004724u;
    // 80004724: .long   0x00000000
    // embedded data

label_80004728:
    ctx->pc = 0x80004728u;
    // 80004728: .long   0x00000000
    // embedded data

label_8000472C:
    ctx->pc = 0x8000472Cu;
    // 8000472C: .long   0x00000000
    // embedded data

label_80004730:
    ctx->pc = 0x80004730u;
    // 80004730: .long   0x00000000
    // embedded data

label_80004734:
    ctx->pc = 0x80004734u;
    // 80004734: .long   0x00000000
    // embedded data

label_80004738:
    ctx->pc = 0x80004738u;
    // 80004738: .long   0x00000000
    // embedded data

label_8000473C:
    ctx->pc = 0x8000473Cu;
    // 8000473C: .long   0x00000000
    // embedded data

label_80004740:
    ctx->pc = 0x80004740u;
    // 80004740: .long   0x00000000
    // embedded data

label_80004744:
    ctx->pc = 0x80004744u;
    // 80004744: .long   0x00000000
    // embedded data

label_80004748:
    ctx->pc = 0x80004748u;
    // 80004748: .long   0x00000000
    // embedded data

label_8000474C:
    ctx->pc = 0x8000474Cu;
    // 8000474C: .long   0x00000000
    // embedded data

label_80004750:
    ctx->pc = 0x80004750u;
    // 80004750: .long   0x00000000
    // embedded data

label_80004754:
    ctx->pc = 0x80004754u;
    // 80004754: .long   0x00000000
    // embedded data

label_80004758:
    ctx->pc = 0x80004758u;
    // 80004758: .long   0x00000000
    // embedded data

label_8000475C:
    ctx->pc = 0x8000475Cu;
    // 8000475C: .long   0x00000000
    // embedded data

label_80004760:
    ctx->pc = 0x80004760u;
    // 80004760: .long   0x00000000
    // embedded data

label_80004764:
    ctx->pc = 0x80004764u;
    // 80004764: .long   0x00000000
    // embedded data

label_80004768:
    ctx->pc = 0x80004768u;
    // 80004768: .long   0x00000000
    // embedded data

label_8000476C:
    ctx->pc = 0x8000476Cu;
    // 8000476C: .long   0x00000000
    // embedded data

label_80004770:
    ctx->pc = 0x80004770u;
    // 80004770: .long   0x00000000
    // embedded data

label_80004774:
    ctx->pc = 0x80004774u;
    // 80004774: .long   0x00000000
    // embedded data

label_80004778:
    ctx->pc = 0x80004778u;
    // 80004778: .long   0x00000000
    // embedded data

label_8000477C:
    ctx->pc = 0x8000477Cu;
    // 8000477C: .long   0x00000000
    // embedded data

label_80004780:
    ctx->pc = 0x80004780u;
    // 80004780: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004780u);
    return;

label_80004784:
    ctx->pc = 0x80004784u;
    // 80004784: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004784u);
    return;

label_80004788:
    ctx->pc = 0x80004788u;
    // 80004788: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004788u);
    return;

label_8000478C:
    ctx->pc = 0x8000478Cu;
    ctx->downcount -= 13;
    // 8000478C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004790:
    ctx->pc = 0x80004790u;
    // 80004790: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004794:
    ctx->pc = 0x80004794u;
    // 80004794: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004798:
    ctx->pc = 0x80004798u;
    // 80004798: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000479C:
    ctx->pc = 0x8000479Cu;
    // 8000479C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800047A0:
    ctx->pc = 0x800047A0u;
    // 800047A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800047A4:
    ctx->pc = 0x800047A4u;
    // 800047A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800047A8:
    ctx->pc = 0x800047A8u;
    // 800047A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800047AC:
    ctx->pc = 0x800047ACu;
    // 800047AC: li      r3, 1024
    ctx->gpr[3] = (u32)(s32)(1024);

label_800047B0:
    ctx->pc = 0x800047B0u;
    // 800047B0: rfi
    ppc_rfi(ctx, 0x800047B0u);
    return;

label_800047B4:
    ctx->pc = 0x800047B4u;
    // 800047B4: .long   0x00000000
    // embedded data

label_800047B8:
    ctx->pc = 0x800047B8u;
    // 800047B8: .long   0x00000000
    // embedded data

label_800047BC:
    ctx->pc = 0x800047BCu;
    // 800047BC: .long   0x00000000
    // embedded data

label_800047C0:
    ctx->pc = 0x800047C0u;
    // 800047C0: .long   0x00000000
    // embedded data

label_800047C4:
    ctx->pc = 0x800047C4u;
    // 800047C4: .long   0x00000000
    // embedded data

label_800047C8:
    ctx->pc = 0x800047C8u;
    // 800047C8: .long   0x00000000
    // embedded data

label_800047CC:
    ctx->pc = 0x800047CCu;
    // 800047CC: .long   0x00000000
    // embedded data

label_800047D0:
    ctx->pc = 0x800047D0u;
    // 800047D0: .long   0x00000000
    // embedded data

label_800047D4:
    ctx->pc = 0x800047D4u;
    // 800047D4: .long   0x00000000
    // embedded data

label_800047D8:
    ctx->pc = 0x800047D8u;
    // 800047D8: .long   0x00000000
    // embedded data

label_800047DC:
    ctx->pc = 0x800047DCu;
    // 800047DC: .long   0x00000000
    // embedded data

label_800047E0:
    ctx->pc = 0x800047E0u;
    // 800047E0: .long   0x00000000
    // embedded data

label_800047E4:
    ctx->pc = 0x800047E4u;
    // 800047E4: .long   0x00000000
    // embedded data

label_800047E8:
    ctx->pc = 0x800047E8u;
    // 800047E8: .long   0x00000000
    // embedded data

label_800047EC:
    ctx->pc = 0x800047ECu;
    // 800047EC: .long   0x00000000
    // embedded data

label_800047F0:
    ctx->pc = 0x800047F0u;
    // 800047F0: .long   0x00000000
    // embedded data

label_800047F4:
    ctx->pc = 0x800047F4u;
    // 800047F4: .long   0x00000000
    // embedded data

label_800047F8:
    ctx->pc = 0x800047F8u;
    // 800047F8: .long   0x00000000
    // embedded data

label_800047FC:
    ctx->pc = 0x800047FCu;
    // 800047FC: .long   0x00000000
    // embedded data

label_80004800:
    ctx->pc = 0x80004800u;
    // 80004800: .long   0x00000000
    // embedded data

label_80004804:
    ctx->pc = 0x80004804u;
    // 80004804: .long   0x00000000
    // embedded data

label_80004808:
    ctx->pc = 0x80004808u;
    // 80004808: .long   0x00000000
    // embedded data

label_8000480C:
    ctx->pc = 0x8000480Cu;
    // 8000480C: .long   0x00000000
    // embedded data

label_80004810:
    ctx->pc = 0x80004810u;
    // 80004810: .long   0x00000000
    // embedded data

label_80004814:
    ctx->pc = 0x80004814u;
    // 80004814: .long   0x00000000
    // embedded data

label_80004818:
    ctx->pc = 0x80004818u;
    // 80004818: .long   0x00000000
    // embedded data

label_8000481C:
    ctx->pc = 0x8000481Cu;
    // 8000481C: .long   0x00000000
    // embedded data

label_80004820:
    ctx->pc = 0x80004820u;
    // 80004820: .long   0x00000000
    // embedded data

label_80004824:
    ctx->pc = 0x80004824u;
    // 80004824: .long   0x00000000
    // embedded data

label_80004828:
    ctx->pc = 0x80004828u;
    // 80004828: .long   0x00000000
    // embedded data

label_8000482C:
    ctx->pc = 0x8000482Cu;
    // 8000482C: .long   0x00000000
    // embedded data

label_80004830:
    ctx->pc = 0x80004830u;
    // 80004830: .long   0x00000000
    // embedded data

label_80004834:
    ctx->pc = 0x80004834u;
    // 80004834: .long   0x00000000
    // embedded data

label_80004838:
    ctx->pc = 0x80004838u;
    // 80004838: .long   0x00000000
    // embedded data

label_8000483C:
    ctx->pc = 0x8000483Cu;
    // 8000483C: .long   0x00000000
    // embedded data

label_80004840:
    ctx->pc = 0x80004840u;
    // 80004840: .long   0x00000000
    // embedded data

label_80004844:
    ctx->pc = 0x80004844u;
    // 80004844: .long   0x00000000
    // embedded data

label_80004848:
    ctx->pc = 0x80004848u;
    // 80004848: .long   0x00000000
    // embedded data

label_8000484C:
    ctx->pc = 0x8000484Cu;
    // 8000484C: .long   0x00000000
    // embedded data

label_80004850:
    ctx->pc = 0x80004850u;
    // 80004850: .long   0x00000000
    // embedded data

label_80004854:
    ctx->pc = 0x80004854u;
    // 80004854: .long   0x00000000
    // embedded data

label_80004858:
    ctx->pc = 0x80004858u;
    // 80004858: .long   0x00000000
    // embedded data

label_8000485C:
    ctx->pc = 0x8000485Cu;
    // 8000485C: .long   0x00000000
    // embedded data

label_80004860:
    ctx->pc = 0x80004860u;
    // 80004860: .long   0x00000000
    // embedded data

label_80004864:
    ctx->pc = 0x80004864u;
    // 80004864: .long   0x00000000
    // embedded data

label_80004868:
    ctx->pc = 0x80004868u;
    // 80004868: .long   0x00000000
    // embedded data

label_8000486C:
    ctx->pc = 0x8000486Cu;
    // 8000486C: .long   0x00000000
    // embedded data

label_80004870:
    ctx->pc = 0x80004870u;
    // 80004870: .long   0x00000000
    // embedded data

label_80004874:
    ctx->pc = 0x80004874u;
    // 80004874: .long   0x00000000
    // embedded data

label_80004878:
    ctx->pc = 0x80004878u;
    // 80004878: .long   0x00000000
    // embedded data

label_8000487C:
    ctx->pc = 0x8000487Cu;
    // 8000487C: .long   0x00000000
    // embedded data

label_80004880:
    ctx->pc = 0x80004880u;
    // 80004880: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004880u);
    return;

label_80004884:
    ctx->pc = 0x80004884u;
    // 80004884: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004884u);
    return;

label_80004888:
    ctx->pc = 0x80004888u;
    // 80004888: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004888u);
    return;

label_8000488C:
    ctx->pc = 0x8000488Cu;
    ctx->downcount -= 13;
    // 8000488C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004890:
    ctx->pc = 0x80004890u;
    // 80004890: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004894:
    ctx->pc = 0x80004894u;
    // 80004894: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004898:
    ctx->pc = 0x80004898u;
    // 80004898: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000489C:
    ctx->pc = 0x8000489Cu;
    // 8000489C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800048A0:
    ctx->pc = 0x800048A0u;
    // 800048A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800048A4:
    ctx->pc = 0x800048A4u;
    // 800048A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800048A8:
    ctx->pc = 0x800048A8u;
    // 800048A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800048AC:
    ctx->pc = 0x800048ACu;
    // 800048AC: li      r3, 1280
    ctx->gpr[3] = (u32)(s32)(1280);

label_800048B0:
    ctx->pc = 0x800048B0u;
    // 800048B0: rfi
    ppc_rfi(ctx, 0x800048B0u);
    return;

label_800048B4:
    ctx->pc = 0x800048B4u;
    // 800048B4: .long   0x00000000
    // embedded data

label_800048B8:
    ctx->pc = 0x800048B8u;
    // 800048B8: .long   0x00000000
    // embedded data

label_800048BC:
    ctx->pc = 0x800048BCu;
    // 800048BC: .long   0x00000000
    // embedded data

label_800048C0:
    ctx->pc = 0x800048C0u;
    // 800048C0: .long   0x00000000
    // embedded data

label_800048C4:
    ctx->pc = 0x800048C4u;
    // 800048C4: .long   0x00000000
    // embedded data

label_800048C8:
    ctx->pc = 0x800048C8u;
    // 800048C8: .long   0x00000000
    // embedded data

label_800048CC:
    ctx->pc = 0x800048CCu;
    // 800048CC: .long   0x00000000
    // embedded data

label_800048D0:
    ctx->pc = 0x800048D0u;
    // 800048D0: .long   0x00000000
    // embedded data

label_800048D4:
    ctx->pc = 0x800048D4u;
    // 800048D4: .long   0x00000000
    // embedded data

label_800048D8:
    ctx->pc = 0x800048D8u;
    // 800048D8: .long   0x00000000
    // embedded data

label_800048DC:
    ctx->pc = 0x800048DCu;
    // 800048DC: .long   0x00000000
    // embedded data

label_800048E0:
    ctx->pc = 0x800048E0u;
    // 800048E0: .long   0x00000000
    // embedded data

label_800048E4:
    ctx->pc = 0x800048E4u;
    // 800048E4: .long   0x00000000
    // embedded data

label_800048E8:
    ctx->pc = 0x800048E8u;
    // 800048E8: .long   0x00000000
    // embedded data

label_800048EC:
    ctx->pc = 0x800048ECu;
    // 800048EC: .long   0x00000000
    // embedded data

label_800048F0:
    ctx->pc = 0x800048F0u;
    // 800048F0: .long   0x00000000
    // embedded data

label_800048F4:
    ctx->pc = 0x800048F4u;
    // 800048F4: .long   0x00000000
    // embedded data

label_800048F8:
    ctx->pc = 0x800048F8u;
    // 800048F8: .long   0x00000000
    // embedded data

label_800048FC:
    ctx->pc = 0x800048FCu;
    // 800048FC: .long   0x00000000
    // embedded data

label_80004900:
    ctx->pc = 0x80004900u;
    // 80004900: .long   0x00000000
    // embedded data

label_80004904:
    ctx->pc = 0x80004904u;
    // 80004904: .long   0x00000000
    // embedded data

label_80004908:
    ctx->pc = 0x80004908u;
    // 80004908: .long   0x00000000
    // embedded data

label_8000490C:
    ctx->pc = 0x8000490Cu;
    // 8000490C: .long   0x00000000
    // embedded data

label_80004910:
    ctx->pc = 0x80004910u;
    // 80004910: .long   0x00000000
    // embedded data

label_80004914:
    ctx->pc = 0x80004914u;
    // 80004914: .long   0x00000000
    // embedded data

label_80004918:
    ctx->pc = 0x80004918u;
    // 80004918: .long   0x00000000
    // embedded data

label_8000491C:
    ctx->pc = 0x8000491Cu;
    // 8000491C: .long   0x00000000
    // embedded data

label_80004920:
    ctx->pc = 0x80004920u;
    // 80004920: .long   0x00000000
    // embedded data

label_80004924:
    ctx->pc = 0x80004924u;
    // 80004924: .long   0x00000000
    // embedded data

label_80004928:
    ctx->pc = 0x80004928u;
    // 80004928: .long   0x00000000
    // embedded data

label_8000492C:
    ctx->pc = 0x8000492Cu;
    // 8000492C: .long   0x00000000
    // embedded data

label_80004930:
    ctx->pc = 0x80004930u;
    // 80004930: .long   0x00000000
    // embedded data

label_80004934:
    ctx->pc = 0x80004934u;
    // 80004934: .long   0x00000000
    // embedded data

label_80004938:
    ctx->pc = 0x80004938u;
    // 80004938: .long   0x00000000
    // embedded data

label_8000493C:
    ctx->pc = 0x8000493Cu;
    // 8000493C: .long   0x00000000
    // embedded data

label_80004940:
    ctx->pc = 0x80004940u;
    // 80004940: .long   0x00000000
    // embedded data

label_80004944:
    ctx->pc = 0x80004944u;
    // 80004944: .long   0x00000000
    // embedded data

label_80004948:
    ctx->pc = 0x80004948u;
    // 80004948: .long   0x00000000
    // embedded data

label_8000494C:
    ctx->pc = 0x8000494Cu;
    // 8000494C: .long   0x00000000
    // embedded data

label_80004950:
    ctx->pc = 0x80004950u;
    // 80004950: .long   0x00000000
    // embedded data

label_80004954:
    ctx->pc = 0x80004954u;
    // 80004954: .long   0x00000000
    // embedded data

label_80004958:
    ctx->pc = 0x80004958u;
    // 80004958: .long   0x00000000
    // embedded data

label_8000495C:
    ctx->pc = 0x8000495Cu;
    // 8000495C: .long   0x00000000
    // embedded data

label_80004960:
    ctx->pc = 0x80004960u;
    // 80004960: .long   0x00000000
    // embedded data

label_80004964:
    ctx->pc = 0x80004964u;
    // 80004964: .long   0x00000000
    // embedded data

label_80004968:
    ctx->pc = 0x80004968u;
    // 80004968: .long   0x00000000
    // embedded data

label_8000496C:
    ctx->pc = 0x8000496Cu;
    // 8000496C: .long   0x00000000
    // embedded data

label_80004970:
    ctx->pc = 0x80004970u;
    // 80004970: .long   0x00000000
    // embedded data

label_80004974:
    ctx->pc = 0x80004974u;
    // 80004974: .long   0x00000000
    // embedded data

label_80004978:
    ctx->pc = 0x80004978u;
    // 80004978: .long   0x00000000
    // embedded data

label_8000497C:
    ctx->pc = 0x8000497Cu;
    // 8000497C: .long   0x00000000
    // embedded data

label_80004980:
    ctx->pc = 0x80004980u;
    // 80004980: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004980u);
    return;

label_80004984:
    ctx->pc = 0x80004984u;
    // 80004984: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004984u);
    return;

label_80004988:
    ctx->pc = 0x80004988u;
    // 80004988: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004988u);
    return;

label_8000498C:
    ctx->pc = 0x8000498Cu;
    ctx->downcount -= 13;
    // 8000498C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004990:
    ctx->pc = 0x80004990u;
    // 80004990: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004994:
    ctx->pc = 0x80004994u;
    // 80004994: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004998:
    ctx->pc = 0x80004998u;
    // 80004998: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000499C:
    ctx->pc = 0x8000499Cu;
    // 8000499C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800049A0:
    ctx->pc = 0x800049A0u;
    // 800049A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800049A4:
    ctx->pc = 0x800049A4u;
    // 800049A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800049A8:
    ctx->pc = 0x800049A8u;
    // 800049A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800049AC:
    ctx->pc = 0x800049ACu;
    // 800049AC: li      r3, 1536
    ctx->gpr[3] = (u32)(s32)(1536);

label_800049B0:
    ctx->pc = 0x800049B0u;
    // 800049B0: rfi
    ppc_rfi(ctx, 0x800049B0u);
    return;

label_800049B4:
    ctx->pc = 0x800049B4u;
    // 800049B4: .long   0x00000000
    // embedded data

label_800049B8:
    ctx->pc = 0x800049B8u;
    // 800049B8: .long   0x00000000
    // embedded data

label_800049BC:
    ctx->pc = 0x800049BCu;
    // 800049BC: .long   0x00000000
    // embedded data

label_800049C0:
    ctx->pc = 0x800049C0u;
    // 800049C0: .long   0x00000000
    // embedded data

label_800049C4:
    ctx->pc = 0x800049C4u;
    // 800049C4: .long   0x00000000
    // embedded data

label_800049C8:
    ctx->pc = 0x800049C8u;
    // 800049C8: .long   0x00000000
    // embedded data

label_800049CC:
    ctx->pc = 0x800049CCu;
    // 800049CC: .long   0x00000000
    // embedded data

label_800049D0:
    ctx->pc = 0x800049D0u;
    // 800049D0: .long   0x00000000
    // embedded data

label_800049D4:
    ctx->pc = 0x800049D4u;
    // 800049D4: .long   0x00000000
    // embedded data

label_800049D8:
    ctx->pc = 0x800049D8u;
    // 800049D8: .long   0x00000000
    // embedded data

label_800049DC:
    ctx->pc = 0x800049DCu;
    // 800049DC: .long   0x00000000
    // embedded data

label_800049E0:
    ctx->pc = 0x800049E0u;
    // 800049E0: .long   0x00000000
    // embedded data

label_800049E4:
    ctx->pc = 0x800049E4u;
    // 800049E4: .long   0x00000000
    // embedded data

label_800049E8:
    ctx->pc = 0x800049E8u;
    // 800049E8: .long   0x00000000
    // embedded data

label_800049EC:
    ctx->pc = 0x800049ECu;
    // 800049EC: .long   0x00000000
    // embedded data

label_800049F0:
    ctx->pc = 0x800049F0u;
    // 800049F0: .long   0x00000000
    // embedded data

label_800049F4:
    ctx->pc = 0x800049F4u;
    // 800049F4: .long   0x00000000
    // embedded data

label_800049F8:
    ctx->pc = 0x800049F8u;
    // 800049F8: .long   0x00000000
    // embedded data

label_800049FC:
    ctx->pc = 0x800049FCu;
    // 800049FC: .long   0x00000000
    // embedded data

label_80004A00:
    ctx->pc = 0x80004A00u;
    // 80004A00: .long   0x00000000
    // embedded data

label_80004A04:
    ctx->pc = 0x80004A04u;
    // 80004A04: .long   0x00000000
    // embedded data

label_80004A08:
    ctx->pc = 0x80004A08u;
    // 80004A08: .long   0x00000000
    // embedded data

label_80004A0C:
    ctx->pc = 0x80004A0Cu;
    // 80004A0C: .long   0x00000000
    // embedded data

label_80004A10:
    ctx->pc = 0x80004A10u;
    // 80004A10: .long   0x00000000
    // embedded data

label_80004A14:
    ctx->pc = 0x80004A14u;
    // 80004A14: .long   0x00000000
    // embedded data

label_80004A18:
    ctx->pc = 0x80004A18u;
    // 80004A18: .long   0x00000000
    // embedded data

label_80004A1C:
    ctx->pc = 0x80004A1Cu;
    // 80004A1C: .long   0x00000000
    // embedded data

label_80004A20:
    ctx->pc = 0x80004A20u;
    // 80004A20: .long   0x00000000
    // embedded data

label_80004A24:
    ctx->pc = 0x80004A24u;
    // 80004A24: .long   0x00000000
    // embedded data

label_80004A28:
    ctx->pc = 0x80004A28u;
    // 80004A28: .long   0x00000000
    // embedded data

label_80004A2C:
    ctx->pc = 0x80004A2Cu;
    // 80004A2C: .long   0x00000000
    // embedded data

label_80004A30:
    ctx->pc = 0x80004A30u;
    // 80004A30: .long   0x00000000
    // embedded data

label_80004A34:
    ctx->pc = 0x80004A34u;
    // 80004A34: .long   0x00000000
    // embedded data

label_80004A38:
    ctx->pc = 0x80004A38u;
    // 80004A38: .long   0x00000000
    // embedded data

label_80004A3C:
    ctx->pc = 0x80004A3Cu;
    // 80004A3C: .long   0x00000000
    // embedded data

label_80004A40:
    ctx->pc = 0x80004A40u;
    // 80004A40: .long   0x00000000
    // embedded data

label_80004A44:
    ctx->pc = 0x80004A44u;
    // 80004A44: .long   0x00000000
    // embedded data

label_80004A48:
    ctx->pc = 0x80004A48u;
    // 80004A48: .long   0x00000000
    // embedded data

label_80004A4C:
    ctx->pc = 0x80004A4Cu;
    // 80004A4C: .long   0x00000000
    // embedded data

label_80004A50:
    ctx->pc = 0x80004A50u;
    // 80004A50: .long   0x00000000
    // embedded data

label_80004A54:
    ctx->pc = 0x80004A54u;
    // 80004A54: .long   0x00000000
    // embedded data

label_80004A58:
    ctx->pc = 0x80004A58u;
    // 80004A58: .long   0x00000000
    // embedded data

label_80004A5C:
    ctx->pc = 0x80004A5Cu;
    // 80004A5C: .long   0x00000000
    // embedded data

label_80004A60:
    ctx->pc = 0x80004A60u;
    // 80004A60: .long   0x00000000
    // embedded data

label_80004A64:
    ctx->pc = 0x80004A64u;
    // 80004A64: .long   0x00000000
    // embedded data

label_80004A68:
    ctx->pc = 0x80004A68u;
    // 80004A68: .long   0x00000000
    // embedded data

label_80004A6C:
    ctx->pc = 0x80004A6Cu;
    // 80004A6C: .long   0x00000000
    // embedded data

label_80004A70:
    ctx->pc = 0x80004A70u;
    // 80004A70: .long   0x00000000
    // embedded data

label_80004A74:
    ctx->pc = 0x80004A74u;
    // 80004A74: .long   0x00000000
    // embedded data

label_80004A78:
    ctx->pc = 0x80004A78u;
    // 80004A78: .long   0x00000000
    // embedded data

label_80004A7C:
    ctx->pc = 0x80004A7Cu;
    // 80004A7C: .long   0x00000000
    // embedded data

label_80004A80:
    ctx->pc = 0x80004A80u;
    // 80004A80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004A80u);
    return;

label_80004A84:
    ctx->pc = 0x80004A84u;
    // 80004A84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004A84u);
    return;

label_80004A88:
    ctx->pc = 0x80004A88u;
    // 80004A88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004A88u);
    return;

label_80004A8C:
    ctx->pc = 0x80004A8Cu;
    ctx->downcount -= 13;
    // 80004A8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004A90:
    ctx->pc = 0x80004A90u;
    // 80004A90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004A94:
    ctx->pc = 0x80004A94u;
    // 80004A94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004A98:
    ctx->pc = 0x80004A98u;
    // 80004A98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004A9C:
    ctx->pc = 0x80004A9Cu;
    // 80004A9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004AA0:
    ctx->pc = 0x80004AA0u;
    // 80004AA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004AA4:
    ctx->pc = 0x80004AA4u;
    // 80004AA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80004AA8:
    ctx->pc = 0x80004AA8u;
    // 80004AA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004AAC:
    ctx->pc = 0x80004AACu;
    // 80004AAC: li      r3, 1792
    ctx->gpr[3] = (u32)(s32)(1792);

label_80004AB0:
    ctx->pc = 0x80004AB0u;
    // 80004AB0: rfi
    ppc_rfi(ctx, 0x80004AB0u);
    return;

label_80004AB4:
    ctx->pc = 0x80004AB4u;
    // 80004AB4: .long   0x00000000
    // embedded data

label_80004AB8:
    ctx->pc = 0x80004AB8u;
    // 80004AB8: .long   0x00000000
    // embedded data

label_80004ABC:
    ctx->pc = 0x80004ABCu;
    // 80004ABC: .long   0x00000000
    // embedded data

label_80004AC0:
    ctx->pc = 0x80004AC0u;
    // 80004AC0: .long   0x00000000
    // embedded data

label_80004AC4:
    ctx->pc = 0x80004AC4u;
    // 80004AC4: .long   0x00000000
    // embedded data

label_80004AC8:
    ctx->pc = 0x80004AC8u;
    // 80004AC8: .long   0x00000000
    // embedded data

label_80004ACC:
    ctx->pc = 0x80004ACCu;
    // 80004ACC: .long   0x00000000
    // embedded data

label_80004AD0:
    ctx->pc = 0x80004AD0u;
    // 80004AD0: .long   0x00000000
    // embedded data

label_80004AD4:
    ctx->pc = 0x80004AD4u;
    // 80004AD4: .long   0x00000000
    // embedded data

label_80004AD8:
    ctx->pc = 0x80004AD8u;
    // 80004AD8: .long   0x00000000
    // embedded data

label_80004ADC:
    ctx->pc = 0x80004ADCu;
    // 80004ADC: .long   0x00000000
    // embedded data

label_80004AE0:
    ctx->pc = 0x80004AE0u;
    // 80004AE0: .long   0x00000000
    // embedded data

label_80004AE4:
    ctx->pc = 0x80004AE4u;
    // 80004AE4: .long   0x00000000
    // embedded data

label_80004AE8:
    ctx->pc = 0x80004AE8u;
    // 80004AE8: .long   0x00000000
    // embedded data

label_80004AEC:
    ctx->pc = 0x80004AECu;
    // 80004AEC: .long   0x00000000
    // embedded data

label_80004AF0:
    ctx->pc = 0x80004AF0u;
    // 80004AF0: .long   0x00000000
    // embedded data

label_80004AF4:
    ctx->pc = 0x80004AF4u;
    // 80004AF4: .long   0x00000000
    // embedded data

label_80004AF8:
    ctx->pc = 0x80004AF8u;
    // 80004AF8: .long   0x00000000
    // embedded data

label_80004AFC:
    ctx->pc = 0x80004AFCu;
    // 80004AFC: .long   0x00000000
    // embedded data

label_80004B00:
    ctx->pc = 0x80004B00u;
    // 80004B00: .long   0x00000000
    // embedded data

label_80004B04:
    ctx->pc = 0x80004B04u;
    // 80004B04: .long   0x00000000
    // embedded data

label_80004B08:
    ctx->pc = 0x80004B08u;
    // 80004B08: .long   0x00000000
    // embedded data

label_80004B0C:
    ctx->pc = 0x80004B0Cu;
    // 80004B0C: .long   0x00000000
    // embedded data

label_80004B10:
    ctx->pc = 0x80004B10u;
    // 80004B10: .long   0x00000000
    // embedded data

label_80004B14:
    ctx->pc = 0x80004B14u;
    // 80004B14: .long   0x00000000
    // embedded data

label_80004B18:
    ctx->pc = 0x80004B18u;
    // 80004B18: .long   0x00000000
    // embedded data

label_80004B1C:
    ctx->pc = 0x80004B1Cu;
    // 80004B1C: .long   0x00000000
    // embedded data

label_80004B20:
    ctx->pc = 0x80004B20u;
    // 80004B20: .long   0x00000000
    // embedded data

label_80004B24:
    ctx->pc = 0x80004B24u;
    // 80004B24: .long   0x00000000
    // embedded data

label_80004B28:
    ctx->pc = 0x80004B28u;
    // 80004B28: .long   0x00000000
    // embedded data

label_80004B2C:
    ctx->pc = 0x80004B2Cu;
    // 80004B2C: .long   0x00000000
    // embedded data

label_80004B30:
    ctx->pc = 0x80004B30u;
    // 80004B30: .long   0x00000000
    // embedded data

label_80004B34:
    ctx->pc = 0x80004B34u;
    // 80004B34: .long   0x00000000
    // embedded data

label_80004B38:
    ctx->pc = 0x80004B38u;
    // 80004B38: .long   0x00000000
    // embedded data

label_80004B3C:
    ctx->pc = 0x80004B3Cu;
    // 80004B3C: .long   0x00000000
    // embedded data

label_80004B40:
    ctx->pc = 0x80004B40u;
    // 80004B40: .long   0x00000000
    // embedded data

label_80004B44:
    ctx->pc = 0x80004B44u;
    // 80004B44: .long   0x00000000
    // embedded data

label_80004B48:
    ctx->pc = 0x80004B48u;
    // 80004B48: .long   0x00000000
    // embedded data

label_80004B4C:
    ctx->pc = 0x80004B4Cu;
    // 80004B4C: .long   0x00000000
    // embedded data

label_80004B50:
    ctx->pc = 0x80004B50u;
    // 80004B50: .long   0x00000000
    // embedded data

label_80004B54:
    ctx->pc = 0x80004B54u;
    // 80004B54: .long   0x00000000
    // embedded data

label_80004B58:
    ctx->pc = 0x80004B58u;
    // 80004B58: .long   0x00000000
    // embedded data

label_80004B5C:
    ctx->pc = 0x80004B5Cu;
    // 80004B5C: .long   0x00000000
    // embedded data

label_80004B60:
    ctx->pc = 0x80004B60u;
    // 80004B60: .long   0x00000000
    // embedded data

label_80004B64:
    ctx->pc = 0x80004B64u;
    // 80004B64: .long   0x00000000
    // embedded data

label_80004B68:
    ctx->pc = 0x80004B68u;
    // 80004B68: .long   0x00000000
    // embedded data

label_80004B6C:
    ctx->pc = 0x80004B6Cu;
    // 80004B6C: .long   0x00000000
    // embedded data

label_80004B70:
    ctx->pc = 0x80004B70u;
    // 80004B70: .long   0x00000000
    // embedded data

label_80004B74:
    ctx->pc = 0x80004B74u;
    // 80004B74: .long   0x00000000
    // embedded data

label_80004B78:
    ctx->pc = 0x80004B78u;
    // 80004B78: .long   0x00000000
    // embedded data

label_80004B7C:
    ctx->pc = 0x80004B7Cu;
    // 80004B7C: .long   0x00000000
    // embedded data

label_80004B80:
    ctx->pc = 0x80004B80u;
    // 80004B80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004B80u);
    return;

label_80004B84:
    ctx->pc = 0x80004B84u;
    // 80004B84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004B84u);
    return;

label_80004B88:
    ctx->pc = 0x80004B88u;
    // 80004B88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004B88u);
    return;

label_80004B8C:
    ctx->pc = 0x80004B8Cu;
    ctx->downcount -= 13;
    // 80004B8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004B90:
    ctx->pc = 0x80004B90u;
    // 80004B90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004B94:
    ctx->pc = 0x80004B94u;
    // 80004B94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004B98:
    ctx->pc = 0x80004B98u;
    // 80004B98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004B9C:
    ctx->pc = 0x80004B9Cu;
    // 80004B9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004BA0:
    ctx->pc = 0x80004BA0u;
    // 80004BA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004BA4:
    ctx->pc = 0x80004BA4u;
    // 80004BA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80004BA8:
    ctx->pc = 0x80004BA8u;
    // 80004BA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004BAC:
    ctx->pc = 0x80004BACu;
    // 80004BAC: li      r3, 2048
    ctx->gpr[3] = (u32)(s32)(2048);

label_80004BB0:
    ctx->pc = 0x80004BB0u;
    // 80004BB0: rfi
    ppc_rfi(ctx, 0x80004BB0u);
    return;

label_80004BB4:
    ctx->pc = 0x80004BB4u;
    // 80004BB4: .long   0x00000000
    // embedded data

label_80004BB8:
    ctx->pc = 0x80004BB8u;
    // 80004BB8: .long   0x00000000
    // embedded data

label_80004BBC:
    ctx->pc = 0x80004BBCu;
    // 80004BBC: .long   0x00000000
    // embedded data

label_80004BC0:
    ctx->pc = 0x80004BC0u;
    // 80004BC0: .long   0x00000000
    // embedded data

label_80004BC4:
    ctx->pc = 0x80004BC4u;
    // 80004BC4: .long   0x00000000
    // embedded data

label_80004BC8:
    ctx->pc = 0x80004BC8u;
    // 80004BC8: .long   0x00000000
    // embedded data

label_80004BCC:
    ctx->pc = 0x80004BCCu;
    // 80004BCC: .long   0x00000000
    // embedded data

label_80004BD0:
    ctx->pc = 0x80004BD0u;
    // 80004BD0: .long   0x00000000
    // embedded data

label_80004BD4:
    ctx->pc = 0x80004BD4u;
    // 80004BD4: .long   0x00000000
    // embedded data

label_80004BD8:
    ctx->pc = 0x80004BD8u;
    // 80004BD8: .long   0x00000000
    // embedded data

label_80004BDC:
    ctx->pc = 0x80004BDCu;
    // 80004BDC: .long   0x00000000
    // embedded data

label_80004BE0:
    ctx->pc = 0x80004BE0u;
    // 80004BE0: .long   0x00000000
    // embedded data

label_80004BE4:
    ctx->pc = 0x80004BE4u;
    // 80004BE4: .long   0x00000000
    // embedded data

label_80004BE8:
    ctx->pc = 0x80004BE8u;
    // 80004BE8: .long   0x00000000
    // embedded data

label_80004BEC:
    ctx->pc = 0x80004BECu;
    // 80004BEC: .long   0x00000000
    // embedded data

label_80004BF0:
    ctx->pc = 0x80004BF0u;
    // 80004BF0: .long   0x00000000
    // embedded data

label_80004BF4:
    ctx->pc = 0x80004BF4u;
    // 80004BF4: .long   0x00000000
    // embedded data

label_80004BF8:
    ctx->pc = 0x80004BF8u;
    // 80004BF8: .long   0x00000000
    // embedded data

label_80004BFC:
    ctx->pc = 0x80004BFCu;
    // 80004BFC: .long   0x00000000
    // embedded data

label_80004C00:
    ctx->pc = 0x80004C00u;
    // 80004C00: .long   0x00000000
    // embedded data

label_80004C04:
    ctx->pc = 0x80004C04u;
    // 80004C04: .long   0x00000000
    // embedded data

label_80004C08:
    ctx->pc = 0x80004C08u;
    // 80004C08: .long   0x00000000
    // embedded data

label_80004C0C:
    ctx->pc = 0x80004C0Cu;
    // 80004C0C: .long   0x00000000
    // embedded data

label_80004C10:
    ctx->pc = 0x80004C10u;
    // 80004C10: .long   0x00000000
    // embedded data

label_80004C14:
    ctx->pc = 0x80004C14u;
    // 80004C14: .long   0x00000000
    // embedded data

label_80004C18:
    ctx->pc = 0x80004C18u;
    // 80004C18: .long   0x00000000
    // embedded data

label_80004C1C:
    ctx->pc = 0x80004C1Cu;
    // 80004C1C: .long   0x00000000
    // embedded data

label_80004C20:
    ctx->pc = 0x80004C20u;
    // 80004C20: .long   0x00000000
    // embedded data

label_80004C24:
    ctx->pc = 0x80004C24u;
    // 80004C24: .long   0x00000000
    // embedded data

label_80004C28:
    ctx->pc = 0x80004C28u;
    // 80004C28: .long   0x00000000
    // embedded data

label_80004C2C:
    ctx->pc = 0x80004C2Cu;
    // 80004C2C: .long   0x00000000
    // embedded data

label_80004C30:
    ctx->pc = 0x80004C30u;
    // 80004C30: .long   0x00000000
    // embedded data

label_80004C34:
    ctx->pc = 0x80004C34u;
    // 80004C34: .long   0x00000000
    // embedded data

label_80004C38:
    ctx->pc = 0x80004C38u;
    // 80004C38: .long   0x00000000
    // embedded data

label_80004C3C:
    ctx->pc = 0x80004C3Cu;
    // 80004C3C: .long   0x00000000
    // embedded data

label_80004C40:
    ctx->pc = 0x80004C40u;
    // 80004C40: .long   0x00000000
    // embedded data

label_80004C44:
    ctx->pc = 0x80004C44u;
    // 80004C44: .long   0x00000000
    // embedded data

label_80004C48:
    ctx->pc = 0x80004C48u;
    // 80004C48: .long   0x00000000
    // embedded data

label_80004C4C:
    ctx->pc = 0x80004C4Cu;
    // 80004C4C: .long   0x00000000
    // embedded data

label_80004C50:
    ctx->pc = 0x80004C50u;
    // 80004C50: .long   0x00000000
    // embedded data

label_80004C54:
    ctx->pc = 0x80004C54u;
    // 80004C54: .long   0x00000000
    // embedded data

label_80004C58:
    ctx->pc = 0x80004C58u;
    // 80004C58: .long   0x00000000
    // embedded data

label_80004C5C:
    ctx->pc = 0x80004C5Cu;
    // 80004C5C: .long   0x00000000
    // embedded data

label_80004C60:
    ctx->pc = 0x80004C60u;
    // 80004C60: .long   0x00000000
    // embedded data

label_80004C64:
    ctx->pc = 0x80004C64u;
    // 80004C64: .long   0x00000000
    // embedded data

label_80004C68:
    ctx->pc = 0x80004C68u;
    // 80004C68: .long   0x00000000
    // embedded data

label_80004C6C:
    ctx->pc = 0x80004C6Cu;
    // 80004C6C: .long   0x00000000
    // embedded data

label_80004C70:
    ctx->pc = 0x80004C70u;
    // 80004C70: .long   0x00000000
    // embedded data

label_80004C74:
    ctx->pc = 0x80004C74u;
    // 80004C74: .long   0x00000000
    // embedded data

label_80004C78:
    ctx->pc = 0x80004C78u;
    // 80004C78: .long   0x00000000
    // embedded data

label_80004C7C:
    ctx->pc = 0x80004C7Cu;
    // 80004C7C: .long   0x00000000
    // embedded data

label_80004C80:
    ctx->pc = 0x80004C80u;
    // 80004C80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004C80u);
    return;

label_80004C84:
    ctx->pc = 0x80004C84u;
    // 80004C84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004C84u);
    return;

label_80004C88:
    ctx->pc = 0x80004C88u;
    // 80004C88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004C88u);
    return;

label_80004C8C:
    ctx->pc = 0x80004C8Cu;
    ctx->downcount -= 13;
    // 80004C8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004C90:
    ctx->pc = 0x80004C90u;
    // 80004C90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004C94:
    ctx->pc = 0x80004C94u;
    // 80004C94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004C98:
    ctx->pc = 0x80004C98u;
    // 80004C98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004C9C:
    ctx->pc = 0x80004C9Cu;
    // 80004C9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004CA0:
    ctx->pc = 0x80004CA0u;
    // 80004CA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004CA4:
    ctx->pc = 0x80004CA4u;
    // 80004CA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80004CA8:
    ctx->pc = 0x80004CA8u;
    // 80004CA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004CAC:
    ctx->pc = 0x80004CACu;
    // 80004CAC: li      r3, 2304
    ctx->gpr[3] = (u32)(s32)(2304);

label_80004CB0:
    ctx->pc = 0x80004CB0u;
    // 80004CB0: rfi
    ppc_rfi(ctx, 0x80004CB0u);
    return;

label_80004CB4:
    ctx->pc = 0x80004CB4u;
    // 80004CB4: .long   0x00000000
    // embedded data

label_80004CB8:
    ctx->pc = 0x80004CB8u;
    // 80004CB8: .long   0x00000000
    // embedded data

label_80004CBC:
    ctx->pc = 0x80004CBCu;
    // 80004CBC: .long   0x00000000
    // embedded data

label_80004CC0:
    ctx->pc = 0x80004CC0u;
    // 80004CC0: .long   0x00000000
    // embedded data

label_80004CC4:
    ctx->pc = 0x80004CC4u;
    // 80004CC4: .long   0x00000000
    // embedded data

label_80004CC8:
    ctx->pc = 0x80004CC8u;
    // 80004CC8: .long   0x00000000
    // embedded data

label_80004CCC:
    ctx->pc = 0x80004CCCu;
    // 80004CCC: .long   0x00000000
    // embedded data

label_80004CD0:
    ctx->pc = 0x80004CD0u;
    // 80004CD0: .long   0x00000000
    // embedded data

label_80004CD4:
    ctx->pc = 0x80004CD4u;
    // 80004CD4: .long   0x00000000
    // embedded data

label_80004CD8:
    ctx->pc = 0x80004CD8u;
    // 80004CD8: .long   0x00000000
    // embedded data

label_80004CDC:
    ctx->pc = 0x80004CDCu;
    // 80004CDC: .long   0x00000000
    // embedded data

label_80004CE0:
    ctx->pc = 0x80004CE0u;
    // 80004CE0: .long   0x00000000
    // embedded data

label_80004CE4:
    ctx->pc = 0x80004CE4u;
    // 80004CE4: .long   0x00000000
    // embedded data

label_80004CE8:
    ctx->pc = 0x80004CE8u;
    // 80004CE8: .long   0x00000000
    // embedded data

label_80004CEC:
    ctx->pc = 0x80004CECu;
    // 80004CEC: .long   0x00000000
    // embedded data

label_80004CF0:
    ctx->pc = 0x80004CF0u;
    // 80004CF0: .long   0x00000000
    // embedded data

label_80004CF4:
    ctx->pc = 0x80004CF4u;
    // 80004CF4: .long   0x00000000
    // embedded data

label_80004CF8:
    ctx->pc = 0x80004CF8u;
    // 80004CF8: .long   0x00000000
    // embedded data

label_80004CFC:
    ctx->pc = 0x80004CFCu;
    // 80004CFC: .long   0x00000000
    // embedded data

label_80004D00:
    ctx->pc = 0x80004D00u;
    // 80004D00: .long   0x00000000
    // embedded data

label_80004D04:
    ctx->pc = 0x80004D04u;
    // 80004D04: .long   0x00000000
    // embedded data

label_80004D08:
    ctx->pc = 0x80004D08u;
    // 80004D08: .long   0x00000000
    // embedded data

label_80004D0C:
    ctx->pc = 0x80004D0Cu;
    // 80004D0C: .long   0x00000000
    // embedded data

label_80004D10:
    ctx->pc = 0x80004D10u;
    // 80004D10: .long   0x00000000
    // embedded data

label_80004D14:
    ctx->pc = 0x80004D14u;
    // 80004D14: .long   0x00000000
    // embedded data

label_80004D18:
    ctx->pc = 0x80004D18u;
    // 80004D18: .long   0x00000000
    // embedded data

label_80004D1C:
    ctx->pc = 0x80004D1Cu;
    // 80004D1C: .long   0x00000000
    // embedded data

label_80004D20:
    ctx->pc = 0x80004D20u;
    // 80004D20: .long   0x00000000
    // embedded data

label_80004D24:
    ctx->pc = 0x80004D24u;
    // 80004D24: .long   0x00000000
    // embedded data

label_80004D28:
    ctx->pc = 0x80004D28u;
    // 80004D28: .long   0x00000000
    // embedded data

label_80004D2C:
    ctx->pc = 0x80004D2Cu;
    // 80004D2C: .long   0x00000000
    // embedded data

label_80004D30:
    ctx->pc = 0x80004D30u;
    // 80004D30: .long   0x00000000
    // embedded data

label_80004D34:
    ctx->pc = 0x80004D34u;
    // 80004D34: .long   0x00000000
    // embedded data

label_80004D38:
    ctx->pc = 0x80004D38u;
    // 80004D38: .long   0x00000000
    // embedded data

label_80004D3C:
    ctx->pc = 0x80004D3Cu;
    // 80004D3C: .long   0x00000000
    // embedded data

label_80004D40:
    ctx->pc = 0x80004D40u;
    // 80004D40: .long   0x00000000
    // embedded data

label_80004D44:
    ctx->pc = 0x80004D44u;
    // 80004D44: .long   0x00000000
    // embedded data

label_80004D48:
    ctx->pc = 0x80004D48u;
    // 80004D48: .long   0x00000000
    // embedded data

label_80004D4C:
    ctx->pc = 0x80004D4Cu;
    // 80004D4C: .long   0x00000000
    // embedded data

label_80004D50:
    ctx->pc = 0x80004D50u;
    // 80004D50: .long   0x00000000
    // embedded data

label_80004D54:
    ctx->pc = 0x80004D54u;
    // 80004D54: .long   0x00000000
    // embedded data

label_80004D58:
    ctx->pc = 0x80004D58u;
    // 80004D58: .long   0x00000000
    // embedded data

label_80004D5C:
    ctx->pc = 0x80004D5Cu;
    // 80004D5C: .long   0x00000000
    // embedded data

label_80004D60:
    ctx->pc = 0x80004D60u;
    // 80004D60: .long   0x00000000
    // embedded data

label_80004D64:
    ctx->pc = 0x80004D64u;
    // 80004D64: .long   0x00000000
    // embedded data

label_80004D68:
    ctx->pc = 0x80004D68u;
    // 80004D68: .long   0x00000000
    // embedded data

label_80004D6C:
    ctx->pc = 0x80004D6Cu;
    // 80004D6C: .long   0x00000000
    // embedded data

label_80004D70:
    ctx->pc = 0x80004D70u;
    // 80004D70: .long   0x00000000
    // embedded data

label_80004D74:
    ctx->pc = 0x80004D74u;
    // 80004D74: .long   0x00000000
    // embedded data

label_80004D78:
    ctx->pc = 0x80004D78u;
    // 80004D78: .long   0x00000000
    // embedded data

label_80004D7C:
    ctx->pc = 0x80004D7Cu;
    // 80004D7C: .long   0x00000000
    // embedded data

label_80004D80:
    ctx->pc = 0x80004D80u;
    // 80004D80: .long   0x00000000
    // embedded data

label_80004D84:
    ctx->pc = 0x80004D84u;
    // 80004D84: .long   0x00000000
    // embedded data

label_80004D88:
    ctx->pc = 0x80004D88u;
    // 80004D88: .long   0x00000000
    // embedded data

label_80004D8C:
    ctx->pc = 0x80004D8Cu;
    // 80004D8C: .long   0x00000000
    // embedded data

label_80004D90:
    ctx->pc = 0x80004D90u;
    // 80004D90: .long   0x00000000
    // embedded data

label_80004D94:
    ctx->pc = 0x80004D94u;
    // 80004D94: .long   0x00000000
    // embedded data

label_80004D98:
    ctx->pc = 0x80004D98u;
    // 80004D98: .long   0x00000000
    // embedded data

label_80004D9C:
    ctx->pc = 0x80004D9Cu;
    // 80004D9C: .long   0x00000000
    // embedded data

label_80004DA0:
    ctx->pc = 0x80004DA0u;
    // 80004DA0: .long   0x00000000
    // embedded data

label_80004DA4:
    ctx->pc = 0x80004DA4u;
    // 80004DA4: .long   0x00000000
    // embedded data

label_80004DA8:
    ctx->pc = 0x80004DA8u;
    // 80004DA8: .long   0x00000000
    // embedded data

label_80004DAC:
    ctx->pc = 0x80004DACu;
    // 80004DAC: .long   0x00000000
    // embedded data

label_80004DB0:
    ctx->pc = 0x80004DB0u;
    // 80004DB0: .long   0x00000000
    // embedded data

label_80004DB4:
    ctx->pc = 0x80004DB4u;
    // 80004DB4: .long   0x00000000
    // embedded data

label_80004DB8:
    ctx->pc = 0x80004DB8u;
    // 80004DB8: .long   0x00000000
    // embedded data

label_80004DBC:
    ctx->pc = 0x80004DBCu;
    // 80004DBC: .long   0x00000000
    // embedded data

label_80004DC0:
    ctx->pc = 0x80004DC0u;
    // 80004DC0: .long   0x00000000
    // embedded data

label_80004DC4:
    ctx->pc = 0x80004DC4u;
    // 80004DC4: .long   0x00000000
    // embedded data

label_80004DC8:
    ctx->pc = 0x80004DC8u;
    // 80004DC8: .long   0x00000000
    // embedded data

label_80004DCC:
    ctx->pc = 0x80004DCCu;
    // 80004DCC: .long   0x00000000
    // embedded data

label_80004DD0:
    ctx->pc = 0x80004DD0u;
    // 80004DD0: .long   0x00000000
    // embedded data

label_80004DD4:
    ctx->pc = 0x80004DD4u;
    // 80004DD4: .long   0x00000000
    // embedded data

label_80004DD8:
    ctx->pc = 0x80004DD8u;
    // 80004DD8: .long   0x00000000
    // embedded data

label_80004DDC:
    ctx->pc = 0x80004DDCu;
    // 80004DDC: .long   0x00000000
    // embedded data

label_80004DE0:
    ctx->pc = 0x80004DE0u;
    // 80004DE0: .long   0x00000000
    // embedded data

label_80004DE4:
    ctx->pc = 0x80004DE4u;
    // 80004DE4: .long   0x00000000
    // embedded data

label_80004DE8:
    ctx->pc = 0x80004DE8u;
    // 80004DE8: .long   0x00000000
    // embedded data

label_80004DEC:
    ctx->pc = 0x80004DECu;
    // 80004DEC: .long   0x00000000
    // embedded data

label_80004DF0:
    ctx->pc = 0x80004DF0u;
    // 80004DF0: .long   0x00000000
    // embedded data

label_80004DF4:
    ctx->pc = 0x80004DF4u;
    // 80004DF4: .long   0x00000000
    // embedded data

label_80004DF8:
    ctx->pc = 0x80004DF8u;
    // 80004DF8: .long   0x00000000
    // embedded data

label_80004DFC:
    ctx->pc = 0x80004DFCu;
    // 80004DFC: .long   0x00000000
    // embedded data

label_80004E00:
    ctx->pc = 0x80004E00u;
    // 80004E00: .long   0x00000000
    // embedded data

label_80004E04:
    ctx->pc = 0x80004E04u;
    // 80004E04: .long   0x00000000
    // embedded data

label_80004E08:
    ctx->pc = 0x80004E08u;
    // 80004E08: .long   0x00000000
    // embedded data

label_80004E0C:
    ctx->pc = 0x80004E0Cu;
    // 80004E0C: .long   0x00000000
    // embedded data

label_80004E10:
    ctx->pc = 0x80004E10u;
    // 80004E10: .long   0x00000000
    // embedded data

label_80004E14:
    ctx->pc = 0x80004E14u;
    // 80004E14: .long   0x00000000
    // embedded data

label_80004E18:
    ctx->pc = 0x80004E18u;
    // 80004E18: .long   0x00000000
    // embedded data

label_80004E1C:
    ctx->pc = 0x80004E1Cu;
    // 80004E1C: .long   0x00000000
    // embedded data

label_80004E20:
    ctx->pc = 0x80004E20u;
    // 80004E20: .long   0x00000000
    // embedded data

label_80004E24:
    ctx->pc = 0x80004E24u;
    // 80004E24: .long   0x00000000
    // embedded data

label_80004E28:
    ctx->pc = 0x80004E28u;
    // 80004E28: .long   0x00000000
    // embedded data

label_80004E2C:
    ctx->pc = 0x80004E2Cu;
    // 80004E2C: .long   0x00000000
    // embedded data

label_80004E30:
    ctx->pc = 0x80004E30u;
    // 80004E30: .long   0x00000000
    // embedded data

label_80004E34:
    ctx->pc = 0x80004E34u;
    // 80004E34: .long   0x00000000
    // embedded data

label_80004E38:
    ctx->pc = 0x80004E38u;
    // 80004E38: .long   0x00000000
    // embedded data

label_80004E3C:
    ctx->pc = 0x80004E3Cu;
    // 80004E3C: .long   0x00000000
    // embedded data

label_80004E40:
    ctx->pc = 0x80004E40u;
    // 80004E40: .long   0x00000000
    // embedded data

label_80004E44:
    ctx->pc = 0x80004E44u;
    // 80004E44: .long   0x00000000
    // embedded data

label_80004E48:
    ctx->pc = 0x80004E48u;
    // 80004E48: .long   0x00000000
    // embedded data

label_80004E4C:
    ctx->pc = 0x80004E4Cu;
    // 80004E4C: .long   0x00000000
    // embedded data

label_80004E50:
    ctx->pc = 0x80004E50u;
    // 80004E50: .long   0x00000000
    // embedded data

label_80004E54:
    ctx->pc = 0x80004E54u;
    // 80004E54: .long   0x00000000
    // embedded data

label_80004E58:
    ctx->pc = 0x80004E58u;
    // 80004E58: .long   0x00000000
    // embedded data

label_80004E5C:
    ctx->pc = 0x80004E5Cu;
    // 80004E5C: .long   0x00000000
    // embedded data

label_80004E60:
    ctx->pc = 0x80004E60u;
    // 80004E60: .long   0x00000000
    // embedded data

label_80004E64:
    ctx->pc = 0x80004E64u;
    // 80004E64: .long   0x00000000
    // embedded data

label_80004E68:
    ctx->pc = 0x80004E68u;
    // 80004E68: .long   0x00000000
    // embedded data

label_80004E6C:
    ctx->pc = 0x80004E6Cu;
    // 80004E6C: .long   0x00000000
    // embedded data

label_80004E70:
    ctx->pc = 0x80004E70u;
    // 80004E70: .long   0x00000000
    // embedded data

label_80004E74:
    ctx->pc = 0x80004E74u;
    // 80004E74: .long   0x00000000
    // embedded data

label_80004E78:
    ctx->pc = 0x80004E78u;
    // 80004E78: .long   0x00000000
    // embedded data

label_80004E7C:
    ctx->pc = 0x80004E7Cu;
    // 80004E7C: .long   0x00000000
    // embedded data

label_80004E80:
    ctx->pc = 0x80004E80u;
    // 80004E80: .long   0x00000000
    // embedded data

label_80004E84:
    ctx->pc = 0x80004E84u;
    // 80004E84: .long   0x00000000
    // embedded data

label_80004E88:
    ctx->pc = 0x80004E88u;
    // 80004E88: .long   0x00000000
    // embedded data

label_80004E8C:
    ctx->pc = 0x80004E8Cu;
    // 80004E8C: .long   0x00000000
    // embedded data

label_80004E90:
    ctx->pc = 0x80004E90u;
    // 80004E90: .long   0x00000000
    // embedded data

label_80004E94:
    ctx->pc = 0x80004E94u;
    // 80004E94: .long   0x00000000
    // embedded data

label_80004E98:
    ctx->pc = 0x80004E98u;
    // 80004E98: .long   0x00000000
    // embedded data

label_80004E9C:
    ctx->pc = 0x80004E9Cu;
    // 80004E9C: .long   0x00000000
    // embedded data

label_80004EA0:
    ctx->pc = 0x80004EA0u;
    // 80004EA0: .long   0x00000000
    // embedded data

label_80004EA4:
    ctx->pc = 0x80004EA4u;
    // 80004EA4: .long   0x00000000
    // embedded data

label_80004EA8:
    ctx->pc = 0x80004EA8u;
    // 80004EA8: .long   0x00000000
    // embedded data

label_80004EAC:
    ctx->pc = 0x80004EACu;
    // 80004EAC: .long   0x00000000
    // embedded data

label_80004EB0:
    ctx->pc = 0x80004EB0u;
    // 80004EB0: .long   0x00000000
    // embedded data

label_80004EB4:
    ctx->pc = 0x80004EB4u;
    // 80004EB4: .long   0x00000000
    // embedded data

label_80004EB8:
    ctx->pc = 0x80004EB8u;
    // 80004EB8: .long   0x00000000
    // embedded data

label_80004EBC:
    ctx->pc = 0x80004EBCu;
    // 80004EBC: .long   0x00000000
    // embedded data

label_80004EC0:
    ctx->pc = 0x80004EC0u;
    // 80004EC0: .long   0x00000000
    // embedded data

label_80004EC4:
    ctx->pc = 0x80004EC4u;
    // 80004EC4: .long   0x00000000
    // embedded data

label_80004EC8:
    ctx->pc = 0x80004EC8u;
    // 80004EC8: .long   0x00000000
    // embedded data

label_80004ECC:
    ctx->pc = 0x80004ECCu;
    // 80004ECC: .long   0x00000000
    // embedded data

label_80004ED0:
    ctx->pc = 0x80004ED0u;
    // 80004ED0: .long   0x00000000
    // embedded data

label_80004ED4:
    ctx->pc = 0x80004ED4u;
    // 80004ED4: .long   0x00000000
    // embedded data

label_80004ED8:
    ctx->pc = 0x80004ED8u;
    // 80004ED8: .long   0x00000000
    // embedded data

label_80004EDC:
    ctx->pc = 0x80004EDCu;
    // 80004EDC: .long   0x00000000
    // embedded data

label_80004EE0:
    ctx->pc = 0x80004EE0u;
    // 80004EE0: .long   0x00000000
    // embedded data

label_80004EE4:
    ctx->pc = 0x80004EE4u;
    // 80004EE4: .long   0x00000000
    // embedded data

label_80004EE8:
    ctx->pc = 0x80004EE8u;
    // 80004EE8: .long   0x00000000
    // embedded data

label_80004EEC:
    ctx->pc = 0x80004EECu;
    // 80004EEC: .long   0x00000000
    // embedded data

label_80004EF0:
    ctx->pc = 0x80004EF0u;
    // 80004EF0: .long   0x00000000
    // embedded data

label_80004EF4:
    ctx->pc = 0x80004EF4u;
    // 80004EF4: .long   0x00000000
    // embedded data

label_80004EF8:
    ctx->pc = 0x80004EF8u;
    // 80004EF8: .long   0x00000000
    // embedded data

label_80004EFC:
    ctx->pc = 0x80004EFCu;
    // 80004EFC: .long   0x00000000
    // embedded data

label_80004F00:
    ctx->pc = 0x80004F00u;
    // 80004F00: .long   0x00000000
    // embedded data

label_80004F04:
    ctx->pc = 0x80004F04u;
    // 80004F04: .long   0x00000000
    // embedded data

label_80004F08:
    ctx->pc = 0x80004F08u;
    // 80004F08: .long   0x00000000
    // embedded data

label_80004F0C:
    ctx->pc = 0x80004F0Cu;
    // 80004F0C: .long   0x00000000
    // embedded data

label_80004F10:
    ctx->pc = 0x80004F10u;
    // 80004F10: .long   0x00000000
    // embedded data

label_80004F14:
    ctx->pc = 0x80004F14u;
    // 80004F14: .long   0x00000000
    // embedded data

label_80004F18:
    ctx->pc = 0x80004F18u;
    // 80004F18: .long   0x00000000
    // embedded data

label_80004F1C:
    ctx->pc = 0x80004F1Cu;
    // 80004F1C: .long   0x00000000
    // embedded data

label_80004F20:
    ctx->pc = 0x80004F20u;
    // 80004F20: .long   0x00000000
    // embedded data

label_80004F24:
    ctx->pc = 0x80004F24u;
    // 80004F24: .long   0x00000000
    // embedded data

label_80004F28:
    ctx->pc = 0x80004F28u;
    // 80004F28: .long   0x00000000
    // embedded data

label_80004F2C:
    ctx->pc = 0x80004F2Cu;
    // 80004F2C: .long   0x00000000
    // embedded data

label_80004F30:
    ctx->pc = 0x80004F30u;
    // 80004F30: .long   0x00000000
    // embedded data

label_80004F34:
    ctx->pc = 0x80004F34u;
    // 80004F34: .long   0x00000000
    // embedded data

label_80004F38:
    ctx->pc = 0x80004F38u;
    // 80004F38: .long   0x00000000
    // embedded data

label_80004F3C:
    ctx->pc = 0x80004F3Cu;
    // 80004F3C: .long   0x00000000
    // embedded data

label_80004F40:
    ctx->pc = 0x80004F40u;
    // 80004F40: .long   0x00000000
    // embedded data

label_80004F44:
    ctx->pc = 0x80004F44u;
    // 80004F44: .long   0x00000000
    // embedded data

label_80004F48:
    ctx->pc = 0x80004F48u;
    // 80004F48: .long   0x00000000
    // embedded data

label_80004F4C:
    ctx->pc = 0x80004F4Cu;
    // 80004F4C: .long   0x00000000
    // embedded data

label_80004F50:
    ctx->pc = 0x80004F50u;
    // 80004F50: .long   0x00000000
    // embedded data

label_80004F54:
    ctx->pc = 0x80004F54u;
    // 80004F54: .long   0x00000000
    // embedded data

label_80004F58:
    ctx->pc = 0x80004F58u;
    // 80004F58: .long   0x00000000
    // embedded data

label_80004F5C:
    ctx->pc = 0x80004F5Cu;
    // 80004F5C: .long   0x00000000
    // embedded data

label_80004F60:
    ctx->pc = 0x80004F60u;
    // 80004F60: .long   0x00000000
    // embedded data

label_80004F64:
    ctx->pc = 0x80004F64u;
    // 80004F64: .long   0x00000000
    // embedded data

label_80004F68:
    ctx->pc = 0x80004F68u;
    // 80004F68: .long   0x00000000
    // embedded data

label_80004F6C:
    ctx->pc = 0x80004F6Cu;
    // 80004F6C: .long   0x00000000
    // embedded data

label_80004F70:
    ctx->pc = 0x80004F70u;
    // 80004F70: .long   0x00000000
    // embedded data

label_80004F74:
    ctx->pc = 0x80004F74u;
    // 80004F74: .long   0x00000000
    // embedded data

label_80004F78:
    ctx->pc = 0x80004F78u;
    // 80004F78: .long   0x00000000
    // embedded data

label_80004F7C:
    ctx->pc = 0x80004F7Cu;
    // 80004F7C: .long   0x00000000
    // embedded data

label_80004F80:
    ctx->pc = 0x80004F80u;
    // 80004F80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80004F80u);
    return;

label_80004F84:
    ctx->pc = 0x80004F84u;
    // 80004F84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80004F84u);
    return;

label_80004F88:
    ctx->pc = 0x80004F88u;
    // 80004F88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80004F88u);
    return;

label_80004F8C:
    ctx->pc = 0x80004F8Cu;
    ctx->downcount -= 13;
    // 80004F8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80004F90:
    ctx->pc = 0x80004F90u;
    // 80004F90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80004F94:
    ctx->pc = 0x80004F94u;
    // 80004F94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80004F98:
    ctx->pc = 0x80004F98u;
    // 80004F98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80004F9C:
    ctx->pc = 0x80004F9Cu;
    // 80004F9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80004FA0:
    ctx->pc = 0x80004FA0u;
    // 80004FA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80004FA4:
    ctx->pc = 0x80004FA4u;
    // 80004FA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80004FA8:
    ctx->pc = 0x80004FA8u;
    // 80004FA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80004FAC:
    ctx->pc = 0x80004FACu;
    // 80004FAC: li      r3, 3072
    ctx->gpr[3] = (u32)(s32)(3072);

label_80004FB0:
    ctx->pc = 0x80004FB0u;
    // 80004FB0: rfi
    ppc_rfi(ctx, 0x80004FB0u);
    return;

label_80004FB4:
    ctx->pc = 0x80004FB4u;
    // 80004FB4: .long   0x00000000
    // embedded data

label_80004FB8:
    ctx->pc = 0x80004FB8u;
    // 80004FB8: .long   0x00000000
    // embedded data

label_80004FBC:
    ctx->pc = 0x80004FBCu;
    // 80004FBC: .long   0x00000000
    // embedded data

label_80004FC0:
    ctx->pc = 0x80004FC0u;
    // 80004FC0: .long   0x00000000
    // embedded data

label_80004FC4:
    ctx->pc = 0x80004FC4u;
    // 80004FC4: .long   0x00000000
    // embedded data

label_80004FC8:
    ctx->pc = 0x80004FC8u;
    // 80004FC8: .long   0x00000000
    // embedded data

label_80004FCC:
    ctx->pc = 0x80004FCCu;
    // 80004FCC: .long   0x00000000
    // embedded data

label_80004FD0:
    ctx->pc = 0x80004FD0u;
    // 80004FD0: .long   0x00000000
    // embedded data

label_80004FD4:
    ctx->pc = 0x80004FD4u;
    // 80004FD4: .long   0x00000000
    // embedded data

label_80004FD8:
    ctx->pc = 0x80004FD8u;
    // 80004FD8: .long   0x00000000
    // embedded data

label_80004FDC:
    ctx->pc = 0x80004FDCu;
    // 80004FDC: .long   0x00000000
    // embedded data

label_80004FE0:
    ctx->pc = 0x80004FE0u;
    // 80004FE0: .long   0x00000000
    // embedded data

label_80004FE4:
    ctx->pc = 0x80004FE4u;
    // 80004FE4: .long   0x00000000
    // embedded data

label_80004FE8:
    ctx->pc = 0x80004FE8u;
    // 80004FE8: .long   0x00000000
    // embedded data

label_80004FEC:
    ctx->pc = 0x80004FECu;
    // 80004FEC: .long   0x00000000
    // embedded data

label_80004FF0:
    ctx->pc = 0x80004FF0u;
    // 80004FF0: .long   0x00000000
    // embedded data

label_80004FF4:
    ctx->pc = 0x80004FF4u;
    // 80004FF4: .long   0x00000000
    // embedded data

label_80004FF8:
    ctx->pc = 0x80004FF8u;
    // 80004FF8: .long   0x00000000
    // embedded data

label_80004FFC:
    ctx->pc = 0x80004FFCu;
    // 80004FFC: .long   0x00000000
    // embedded data

label_80005000:
    ctx->pc = 0x80005000u;
    // 80005000: .long   0x00000000
    // embedded data

label_80005004:
    ctx->pc = 0x80005004u;
    // 80005004: .long   0x00000000
    // embedded data

label_80005008:
    ctx->pc = 0x80005008u;
    // 80005008: .long   0x00000000
    // embedded data

label_8000500C:
    ctx->pc = 0x8000500Cu;
    // 8000500C: .long   0x00000000
    // embedded data

label_80005010:
    ctx->pc = 0x80005010u;
    // 80005010: .long   0x00000000
    // embedded data

label_80005014:
    ctx->pc = 0x80005014u;
    // 80005014: .long   0x00000000
    // embedded data

label_80005018:
    ctx->pc = 0x80005018u;
    // 80005018: .long   0x00000000
    // embedded data

label_8000501C:
    ctx->pc = 0x8000501Cu;
    // 8000501C: .long   0x00000000
    // embedded data

label_80005020:
    ctx->pc = 0x80005020u;
    // 80005020: .long   0x00000000
    // embedded data

label_80005024:
    ctx->pc = 0x80005024u;
    // 80005024: .long   0x00000000
    // embedded data

label_80005028:
    ctx->pc = 0x80005028u;
    // 80005028: .long   0x00000000
    // embedded data

label_8000502C:
    ctx->pc = 0x8000502Cu;
    // 8000502C: .long   0x00000000
    // embedded data

label_80005030:
    ctx->pc = 0x80005030u;
    // 80005030: .long   0x00000000
    // embedded data

label_80005034:
    ctx->pc = 0x80005034u;
    // 80005034: .long   0x00000000
    // embedded data

label_80005038:
    ctx->pc = 0x80005038u;
    // 80005038: .long   0x00000000
    // embedded data

label_8000503C:
    ctx->pc = 0x8000503Cu;
    // 8000503C: .long   0x00000000
    // embedded data

label_80005040:
    ctx->pc = 0x80005040u;
    // 80005040: .long   0x00000000
    // embedded data

label_80005044:
    ctx->pc = 0x80005044u;
    // 80005044: .long   0x00000000
    // embedded data

label_80005048:
    ctx->pc = 0x80005048u;
    // 80005048: .long   0x00000000
    // embedded data

label_8000504C:
    ctx->pc = 0x8000504Cu;
    // 8000504C: .long   0x00000000
    // embedded data

label_80005050:
    ctx->pc = 0x80005050u;
    // 80005050: .long   0x00000000
    // embedded data

label_80005054:
    ctx->pc = 0x80005054u;
    // 80005054: .long   0x00000000
    // embedded data

label_80005058:
    ctx->pc = 0x80005058u;
    // 80005058: .long   0x00000000
    // embedded data

label_8000505C:
    ctx->pc = 0x8000505Cu;
    // 8000505C: .long   0x00000000
    // embedded data

label_80005060:
    ctx->pc = 0x80005060u;
    // 80005060: .long   0x00000000
    // embedded data

label_80005064:
    ctx->pc = 0x80005064u;
    // 80005064: .long   0x00000000
    // embedded data

label_80005068:
    ctx->pc = 0x80005068u;
    // 80005068: .long   0x00000000
    // embedded data

label_8000506C:
    ctx->pc = 0x8000506Cu;
    // 8000506C: .long   0x00000000
    // embedded data

label_80005070:
    ctx->pc = 0x80005070u;
    // 80005070: .long   0x00000000
    // embedded data

label_80005074:
    ctx->pc = 0x80005074u;
    // 80005074: .long   0x00000000
    // embedded data

label_80005078:
    ctx->pc = 0x80005078u;
    // 80005078: .long   0x00000000
    // embedded data

label_8000507C:
    ctx->pc = 0x8000507Cu;
    // 8000507C: .long   0x00000000
    // embedded data

label_80005080:
    ctx->pc = 0x80005080u;
    // 80005080: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005080u);
    return;

label_80005084:
    ctx->pc = 0x80005084u;
    // 80005084: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005084u);
    return;

label_80005088:
    ctx->pc = 0x80005088u;
    // 80005088: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005088u);
    return;

label_8000508C:
    ctx->pc = 0x8000508Cu;
    ctx->downcount -= 13;
    // 8000508C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005090:
    ctx->pc = 0x80005090u;
    // 80005090: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005094:
    ctx->pc = 0x80005094u;
    // 80005094: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005098:
    ctx->pc = 0x80005098u;
    // 80005098: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000509C:
    ctx->pc = 0x8000509Cu;
    // 8000509C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800050A0:
    ctx->pc = 0x800050A0u;
    // 800050A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800050A4:
    ctx->pc = 0x800050A4u;
    // 800050A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800050A8:
    ctx->pc = 0x800050A8u;
    // 800050A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800050AC:
    ctx->pc = 0x800050ACu;
    // 800050AC: li      r3, 3328
    ctx->gpr[3] = (u32)(s32)(3328);

label_800050B0:
    ctx->pc = 0x800050B0u;
    // 800050B0: rfi
    ppc_rfi(ctx, 0x800050B0u);
    return;

label_800050B4:
    ctx->pc = 0x800050B4u;
    // 800050B4: .long   0x00000000
    // embedded data

label_800050B8:
    ctx->pc = 0x800050B8u;
    // 800050B8: .long   0x00000000
    // embedded data

label_800050BC:
    ctx->pc = 0x800050BCu;
    // 800050BC: .long   0x00000000
    // embedded data

label_800050C0:
    ctx->pc = 0x800050C0u;
    // 800050C0: .long   0x00000000
    // embedded data

label_800050C4:
    ctx->pc = 0x800050C4u;
    // 800050C4: .long   0x00000000
    // embedded data

label_800050C8:
    ctx->pc = 0x800050C8u;
    // 800050C8: .long   0x00000000
    // embedded data

label_800050CC:
    ctx->pc = 0x800050CCu;
    // 800050CC: .long   0x00000000
    // embedded data

label_800050D0:
    ctx->pc = 0x800050D0u;
    // 800050D0: .long   0x00000000
    // embedded data

label_800050D4:
    ctx->pc = 0x800050D4u;
    // 800050D4: .long   0x00000000
    // embedded data

label_800050D8:
    ctx->pc = 0x800050D8u;
    // 800050D8: .long   0x00000000
    // embedded data

label_800050DC:
    ctx->pc = 0x800050DCu;
    // 800050DC: .long   0x00000000
    // embedded data

label_800050E0:
    ctx->pc = 0x800050E0u;
    // 800050E0: .long   0x00000000
    // embedded data

label_800050E4:
    ctx->pc = 0x800050E4u;
    // 800050E4: .long   0x00000000
    // embedded data

label_800050E8:
    ctx->pc = 0x800050E8u;
    // 800050E8: .long   0x00000000
    // embedded data

label_800050EC:
    ctx->pc = 0x800050ECu;
    // 800050EC: .long   0x00000000
    // embedded data

label_800050F0:
    ctx->pc = 0x800050F0u;
    // 800050F0: .long   0x00000000
    // embedded data

label_800050F4:
    ctx->pc = 0x800050F4u;
    // 800050F4: .long   0x00000000
    // embedded data

label_800050F8:
    ctx->pc = 0x800050F8u;
    // 800050F8: .long   0x00000000
    // embedded data

label_800050FC:
    ctx->pc = 0x800050FCu;
    // 800050FC: .long   0x00000000
    // embedded data

label_80005100:
    ctx->pc = 0x80005100u;
    // 80005100: .long   0x00000000
    // embedded data

label_80005104:
    ctx->pc = 0x80005104u;
    // 80005104: .long   0x00000000
    // embedded data

label_80005108:
    ctx->pc = 0x80005108u;
    // 80005108: .long   0x00000000
    // embedded data

label_8000510C:
    ctx->pc = 0x8000510Cu;
    // 8000510C: .long   0x00000000
    // embedded data

label_80005110:
    ctx->pc = 0x80005110u;
    // 80005110: .long   0x00000000
    // embedded data

label_80005114:
    ctx->pc = 0x80005114u;
    // 80005114: .long   0x00000000
    // embedded data

label_80005118:
    ctx->pc = 0x80005118u;
    // 80005118: .long   0x00000000
    // embedded data

label_8000511C:
    ctx->pc = 0x8000511Cu;
    // 8000511C: .long   0x00000000
    // embedded data

label_80005120:
    ctx->pc = 0x80005120u;
    // 80005120: .long   0x00000000
    // embedded data

label_80005124:
    ctx->pc = 0x80005124u;
    // 80005124: .long   0x00000000
    // embedded data

label_80005128:
    ctx->pc = 0x80005128u;
    // 80005128: .long   0x00000000
    // embedded data

label_8000512C:
    ctx->pc = 0x8000512Cu;
    // 8000512C: .long   0x00000000
    // embedded data

label_80005130:
    ctx->pc = 0x80005130u;
    // 80005130: .long   0x00000000
    // embedded data

label_80005134:
    ctx->pc = 0x80005134u;
    // 80005134: .long   0x00000000
    // embedded data

label_80005138:
    ctx->pc = 0x80005138u;
    // 80005138: .long   0x00000000
    // embedded data

label_8000513C:
    ctx->pc = 0x8000513Cu;
    // 8000513C: .long   0x00000000
    // embedded data

label_80005140:
    ctx->pc = 0x80005140u;
    // 80005140: .long   0x00000000
    // embedded data

label_80005144:
    ctx->pc = 0x80005144u;
    // 80005144: .long   0x00000000
    // embedded data

label_80005148:
    ctx->pc = 0x80005148u;
    // 80005148: .long   0x00000000
    // embedded data

label_8000514C:
    ctx->pc = 0x8000514Cu;
    // 8000514C: .long   0x00000000
    // embedded data

label_80005150:
    ctx->pc = 0x80005150u;
    // 80005150: .long   0x00000000
    // embedded data

label_80005154:
    ctx->pc = 0x80005154u;
    // 80005154: .long   0x00000000
    // embedded data

label_80005158:
    ctx->pc = 0x80005158u;
    // 80005158: .long   0x00000000
    // embedded data

label_8000515C:
    ctx->pc = 0x8000515Cu;
    // 8000515C: .long   0x00000000
    // embedded data

label_80005160:
    ctx->pc = 0x80005160u;
    // 80005160: .long   0x00000000
    // embedded data

label_80005164:
    ctx->pc = 0x80005164u;
    // 80005164: .long   0x00000000
    // embedded data

label_80005168:
    ctx->pc = 0x80005168u;
    // 80005168: .long   0x00000000
    // embedded data

label_8000516C:
    ctx->pc = 0x8000516Cu;
    // 8000516C: .long   0x00000000
    // embedded data

label_80005170:
    ctx->pc = 0x80005170u;
    // 80005170: .long   0x00000000
    // embedded data

label_80005174:
    ctx->pc = 0x80005174u;
    // 80005174: .long   0x00000000
    // embedded data

label_80005178:
    ctx->pc = 0x80005178u;
    // 80005178: .long   0x00000000
    // embedded data

label_8000517C:
    ctx->pc = 0x8000517Cu;
    // 8000517C: .long   0x00000000
    // embedded data

label_80005180:
    ctx->pc = 0x80005180u;
    // 80005180: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005180u);
    return;

label_80005184:
    ctx->pc = 0x80005184u;
    // 80005184: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005184u);
    return;

label_80005188:
    ctx->pc = 0x80005188u;
    // 80005188: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005188u);
    return;

label_8000518C:
    ctx->pc = 0x8000518Cu;
    ctx->downcount -= 13;
    // 8000518C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005190:
    ctx->pc = 0x80005190u;
    // 80005190: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005194:
    ctx->pc = 0x80005194u;
    // 80005194: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005198:
    ctx->pc = 0x80005198u;
    // 80005198: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000519C:
    ctx->pc = 0x8000519Cu;
    // 8000519C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800051A0:
    ctx->pc = 0x800051A0u;
    // 800051A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800051A4:
    ctx->pc = 0x800051A4u;
    // 800051A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800051A8:
    ctx->pc = 0x800051A8u;
    // 800051A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800051AC:
    ctx->pc = 0x800051ACu;
    // 800051AC: li      r3, 3584
    ctx->gpr[3] = (u32)(s32)(3584);

label_800051B0:
    ctx->pc = 0x800051B0u;
    // 800051B0: rfi
    ppc_rfi(ctx, 0x800051B0u);
    return;

label_800051B4:
    ctx->pc = 0x800051B4u;
    // 800051B4: .long   0x00000000
    // embedded data

label_800051B8:
    ctx->pc = 0x800051B8u;
    // 800051B8: .long   0x00000000
    // embedded data

label_800051BC:
    ctx->pc = 0x800051BCu;
    // 800051BC: .long   0x00000000
    // embedded data

label_800051C0:
    ctx->pc = 0x800051C0u;
    // 800051C0: .long   0x00000000
    // embedded data

label_800051C4:
    ctx->pc = 0x800051C4u;
    // 800051C4: .long   0x00000000
    // embedded data

label_800051C8:
    ctx->pc = 0x800051C8u;
    // 800051C8: .long   0x00000000
    // embedded data

label_800051CC:
    ctx->pc = 0x800051CCu;
    // 800051CC: .long   0x00000000
    // embedded data

label_800051D0:
    ctx->pc = 0x800051D0u;
    // 800051D0: .long   0x00000000
    // embedded data

label_800051D4:
    ctx->pc = 0x800051D4u;
    // 800051D4: .long   0x00000000
    // embedded data

label_800051D8:
    ctx->pc = 0x800051D8u;
    // 800051D8: .long   0x00000000
    // embedded data

label_800051DC:
    ctx->pc = 0x800051DCu;
    // 800051DC: .long   0x00000000
    // embedded data

label_800051E0:
    ctx->pc = 0x800051E0u;
    // 800051E0: .long   0x00000000
    // embedded data

label_800051E4:
    ctx->pc = 0x800051E4u;
    // 800051E4: .long   0x00000000
    // embedded data

label_800051E8:
    ctx->pc = 0x800051E8u;
    // 800051E8: .long   0x00000000
    // embedded data

label_800051EC:
    ctx->pc = 0x800051ECu;
    // 800051EC: .long   0x00000000
    // embedded data

label_800051F0:
    ctx->pc = 0x800051F0u;
    // 800051F0: .long   0x00000000
    // embedded data

label_800051F4:
    ctx->pc = 0x800051F4u;
    // 800051F4: .long   0x00000000
    // embedded data

label_800051F8:
    ctx->pc = 0x800051F8u;
    // 800051F8: .long   0x00000000
    // embedded data

label_800051FC:
    ctx->pc = 0x800051FCu;
    // 800051FC: .long   0x00000000
    // embedded data

label_80005200:
    ctx->pc = 0x80005200u;
    // 80005200: .long   0x00000000
    // embedded data

label_80005204:
    ctx->pc = 0x80005204u;
    // 80005204: .long   0x00000000
    // embedded data

label_80005208:
    ctx->pc = 0x80005208u;
    // 80005208: .long   0x00000000
    // embedded data

label_8000520C:
    ctx->pc = 0x8000520Cu;
    // 8000520C: .long   0x00000000
    // embedded data

label_80005210:
    ctx->pc = 0x80005210u;
    // 80005210: .long   0x00000000
    // embedded data

label_80005214:
    ctx->pc = 0x80005214u;
    // 80005214: .long   0x00000000
    // embedded data

label_80005218:
    ctx->pc = 0x80005218u;
    // 80005218: .long   0x00000000
    // embedded data

label_8000521C:
    ctx->pc = 0x8000521Cu;
    // 8000521C: .long   0x00000000
    // embedded data

label_80005220:
    ctx->pc = 0x80005220u;
    // 80005220: .long   0x00000000
    // embedded data

label_80005224:
    ctx->pc = 0x80005224u;
    // 80005224: .long   0x00000000
    // embedded data

label_80005228:
    ctx->pc = 0x80005228u;
    // 80005228: .long   0x00000000
    // embedded data

label_8000522C:
    ctx->pc = 0x8000522Cu;
    // 8000522C: .long   0x00000000
    // embedded data

label_80005230:
    ctx->pc = 0x80005230u;
    // 80005230: .long   0x00000000
    // embedded data

label_80005234:
    ctx->pc = 0x80005234u;
    // 80005234: .long   0x00000000
    // embedded data

label_80005238:
    ctx->pc = 0x80005238u;
    // 80005238: .long   0x00000000
    // embedded data

label_8000523C:
    ctx->pc = 0x8000523Cu;
    // 8000523C: .long   0x00000000
    // embedded data

label_80005240:
    ctx->pc = 0x80005240u;
    // 80005240: .long   0x00000000
    // embedded data

label_80005244:
    ctx->pc = 0x80005244u;
    // 80005244: .long   0x00000000
    // embedded data

label_80005248:
    ctx->pc = 0x80005248u;
    // 80005248: .long   0x00000000
    // embedded data

label_8000524C:
    ctx->pc = 0x8000524Cu;
    // 8000524C: .long   0x00000000
    // embedded data

label_80005250:
    ctx->pc = 0x80005250u;
    // 80005250: .long   0x00000000
    // embedded data

label_80005254:
    ctx->pc = 0x80005254u;
    // 80005254: .long   0x00000000
    // embedded data

label_80005258:
    ctx->pc = 0x80005258u;
    // 80005258: .long   0x00000000
    // embedded data

label_8000525C:
    ctx->pc = 0x8000525Cu;
    // 8000525C: .long   0x00000000
    // embedded data

label_80005260:
    ctx->pc = 0x80005260u;
    // 80005260: .long   0x00000000
    // embedded data

label_80005264:
    ctx->pc = 0x80005264u;
    // 80005264: .long   0x00000000
    // embedded data

label_80005268:
    ctx->pc = 0x80005268u;
    // 80005268: .long   0x00000000
    // embedded data

label_8000526C:
    ctx->pc = 0x8000526Cu;
    // 8000526C: .long   0x00000000
    // embedded data

label_80005270:
    ctx->pc = 0x80005270u;
    // 80005270: .long   0x00000000
    // embedded data

label_80005274:
    ctx->pc = 0x80005274u;
    // 80005274: .long   0x00000000
    // embedded data

label_80005278:
    ctx->pc = 0x80005278u;
    // 80005278: .long   0x00000000
    // embedded data

label_8000527C:
    ctx->pc = 0x8000527Cu;
    // 8000527C: .long   0x00000000
    // embedded data

label_80005280:
    ctx->pc = 0x80005280u;
    // 80005280: b       0x800052D4
    {
            goto label_800052D4;
    }

label_80005284:
    ctx->pc = 0x80005284u;
    // 80005284: .long   0x00000000
    // embedded data

label_80005288:
    ctx->pc = 0x80005288u;
    // 80005288: .long   0x00000000
    // embedded data

label_8000528C:
    ctx->pc = 0x8000528Cu;
    // 8000528C: .long   0x00000000
    // embedded data

label_80005290:
    ctx->pc = 0x80005290u;
    // 80005290: .long   0x00000000
    // embedded data

label_80005294:
    ctx->pc = 0x80005294u;
    // 80005294: .long   0x00000000
    // embedded data

label_80005298:
    ctx->pc = 0x80005298u;
    // 80005298: .long   0x00000000
    // embedded data

label_8000529C:
    ctx->pc = 0x8000529Cu;
    // 8000529C: .long   0x00000000
    // embedded data

label_800052A0:
    ctx->pc = 0x800052A0u;
    // 800052A0: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800052A0u);
    return;

label_800052A4:
    ctx->pc = 0x800052A4u;
    // 800052A4: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800052A4u);
    return;

label_800052A8:
    ctx->pc = 0x800052A8u;
    // 800052A8: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800052A8u);
    return;

label_800052AC:
    ctx->pc = 0x800052ACu;
    ctx->downcount -= 13;
    // 800052AC: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800052B0:
    ctx->pc = 0x800052B0u;
    // 800052B0: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800052B4:
    ctx->pc = 0x800052B4u;
    // 800052B4: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800052B8:
    ctx->pc = 0x800052B8u;
    // 800052B8: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800052BC:
    ctx->pc = 0x800052BCu;
    // 800052BC: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800052C0:
    ctx->pc = 0x800052C0u;
    // 800052C0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800052C4:
    ctx->pc = 0x800052C4u;
    // 800052C4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800052C8:
    ctx->pc = 0x800052C8u;
    // 800052C8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800052CC:
    ctx->pc = 0x800052CCu;
    // 800052CC: li      r3, 3872
    ctx->gpr[3] = (u32)(s32)(3872);

label_800052D0:
    ctx->pc = 0x800052D0u;
    // 800052D0: rfi
    ppc_rfi(ctx, 0x800052D0u);
    return;

label_800052D4:
    ctx->pc = 0x800052D4u;
    // 800052D4: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800052D4u);
    return;

label_800052D8:
    ctx->pc = 0x800052D8u;
    // 800052D8: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800052D8u);
    return;

label_800052DC:
    ctx->pc = 0x800052DCu;
    // 800052DC: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800052DCu);
    return;

label_800052E0:
    ctx->pc = 0x800052E0u;
    ctx->downcount -= 13;
    // 800052E0: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800052E4:
    ctx->pc = 0x800052E4u;
    // 800052E4: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800052E8:
    ctx->pc = 0x800052E8u;
    // 800052E8: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800052EC:
    ctx->pc = 0x800052ECu;
    // 800052EC: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800052F0:
    ctx->pc = 0x800052F0u;
    // 800052F0: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800052F4:
    ctx->pc = 0x800052F4u;
    // 800052F4: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800052F8:
    ctx->pc = 0x800052F8u;
    // 800052F8: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800052FC:
    ctx->pc = 0x800052FCu;
    // 800052FC: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80005300:
    ctx->pc = 0x80005300u;
    // 80005300: li      r3, 3840
    ctx->gpr[3] = (u32)(s32)(3840);

label_80005304:
    ctx->pc = 0x80005304u;
    // 80005304: rfi
    ppc_rfi(ctx, 0x80005304u);
    return;

label_80005308:
    ctx->pc = 0x80005308u;
    // 80005308: .long   0x00000000
    // embedded data

label_8000530C:
    ctx->pc = 0x8000530Cu;
    // 8000530C: .long   0x00000000
    // embedded data

label_80005310:
    ctx->pc = 0x80005310u;
    // 80005310: .long   0x00000000
    // embedded data

label_80005314:
    ctx->pc = 0x80005314u;
    // 80005314: .long   0x00000000
    // embedded data

label_80005318:
    ctx->pc = 0x80005318u;
    // 80005318: .long   0x00000000
    // embedded data

label_8000531C:
    ctx->pc = 0x8000531Cu;
    // 8000531C: .long   0x00000000
    // embedded data

label_80005320:
    ctx->pc = 0x80005320u;
    // 80005320: .long   0x00000000
    // embedded data

label_80005324:
    ctx->pc = 0x80005324u;
    // 80005324: .long   0x00000000
    // embedded data

label_80005328:
    ctx->pc = 0x80005328u;
    // 80005328: .long   0x00000000
    // embedded data

label_8000532C:
    ctx->pc = 0x8000532Cu;
    // 8000532C: .long   0x00000000
    // embedded data

label_80005330:
    ctx->pc = 0x80005330u;
    // 80005330: .long   0x00000000
    // embedded data

label_80005334:
    ctx->pc = 0x80005334u;
    // 80005334: .long   0x00000000
    // embedded data

label_80005338:
    ctx->pc = 0x80005338u;
    // 80005338: .long   0x00000000
    // embedded data

label_8000533C:
    ctx->pc = 0x8000533Cu;
    // 8000533C: .long   0x00000000
    // embedded data

label_80005340:
    ctx->pc = 0x80005340u;
    // 80005340: .long   0x00000000
    // embedded data

label_80005344:
    ctx->pc = 0x80005344u;
    // 80005344: .long   0x00000000
    // embedded data

label_80005348:
    ctx->pc = 0x80005348u;
    // 80005348: .long   0x00000000
    // embedded data

label_8000534C:
    ctx->pc = 0x8000534Cu;
    // 8000534C: .long   0x00000000
    // embedded data

label_80005350:
    ctx->pc = 0x80005350u;
    // 80005350: .long   0x00000000
    // embedded data

label_80005354:
    ctx->pc = 0x80005354u;
    // 80005354: .long   0x00000000
    // embedded data

label_80005358:
    ctx->pc = 0x80005358u;
    // 80005358: .long   0x00000000
    // embedded data

label_8000535C:
    ctx->pc = 0x8000535Cu;
    // 8000535C: .long   0x00000000
    // embedded data

label_80005360:
    ctx->pc = 0x80005360u;
    // 80005360: .long   0x00000000
    // embedded data

label_80005364:
    ctx->pc = 0x80005364u;
    // 80005364: .long   0x00000000
    // embedded data

label_80005368:
    ctx->pc = 0x80005368u;
    // 80005368: .long   0x00000000
    // embedded data

label_8000536C:
    ctx->pc = 0x8000536Cu;
    // 8000536C: .long   0x00000000
    // embedded data

label_80005370:
    ctx->pc = 0x80005370u;
    // 80005370: .long   0x00000000
    // embedded data

label_80005374:
    ctx->pc = 0x80005374u;
    // 80005374: .long   0x00000000
    // embedded data

label_80005378:
    ctx->pc = 0x80005378u;
    // 80005378: .long   0x00000000
    // embedded data

label_8000537C:
    ctx->pc = 0x8000537Cu;
    // 8000537C: .long   0x00000000
    // embedded data

label_80005380:
    ctx->pc = 0x80005380u;
    // 80005380: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005380u);
    return;

label_80005384:
    ctx->pc = 0x80005384u;
    ctx->downcount -= 1;
    // 80005384: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80005388:
    ctx->pc = 0x80005388u;
    // 80005388: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80005388u);
    return;

label_8000538C:
    ctx->pc = 0x8000538Cu;
    ctx->downcount -= 3;
    // 8000538C: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_80005390:
    ctx->pc = 0x80005390u;
    // 80005390: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005394:
    ctx->pc = 0x80005394u;
    // 80005394: bc    12, 2, 0x800053B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800053B0;
        }
    }

label_80005398:
    ctx->pc = 0x80005398u;
    ctx->downcount -= 9;
    // 80005398: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000539C:
    ctx->pc = 0x8000539Cu;
    // 8000539C: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800053A0:
    ctx->pc = 0x800053A0u;
    // 800053A0: sync
    ppc_memory_fence();

label_800053A4:
    ctx->pc = 0x800053A4u;
    // 800053A4: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800053A8:
    ctx->pc = 0x800053A8u;
    // 800053A8: sync
    ppc_memory_fence();

label_800053AC:
    ctx->pc = 0x800053ACu;
    // 800053AC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800053ACu);
    return;

label_800053B0:
    ctx->pc = 0x800053B0u;
    // 800053B0: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800053B0u);
    return;

label_800053B4:
    ctx->pc = 0x800053B4u;
    ctx->downcount -= 1;
    // 800053B4: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800053B8:
    ctx->pc = 0x800053B8u;
    // 800053B8: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800053B8u);
    return;

label_800053BC:
    ctx->pc = 0x800053BCu;
    // 800053BC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800053BCu);
    return;

label_800053C0:
    ctx->pc = 0x800053C0u;
    // 800053C0: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800053C0u);
    return;

label_800053C4:
    ctx->pc = 0x800053C4u;
    // 800053C4: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800053C4u);
    return;

label_800053C8:
    ctx->pc = 0x800053C8u;
    ctx->downcount -= 13;
    // 800053C8: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800053CC:
    ctx->pc = 0x800053CCu;
    // 800053CC: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800053D0:
    ctx->pc = 0x800053D0u;
    // 800053D0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800053D4:
    ctx->pc = 0x800053D4u;
    // 800053D4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800053D8:
    ctx->pc = 0x800053D8u;
    // 800053D8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800053DC:
    ctx->pc = 0x800053DCu;
    // 800053DC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800053E0:
    ctx->pc = 0x800053E0u;
    // 800053E0: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800053E4:
    ctx->pc = 0x800053E4u;
    // 800053E4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800053E8:
    ctx->pc = 0x800053E8u;
    // 800053E8: li      r3, 4096
    ctx->gpr[3] = (u32)(s32)(4096);

label_800053EC:
    ctx->pc = 0x800053ECu;
    // 800053EC: rfi
    ppc_rfi(ctx, 0x800053ECu);
    return;

label_800053F0:
    ctx->pc = 0x800053F0u;
    // 800053F0: .long   0x00000000
    // embedded data

label_800053F4:
    ctx->pc = 0x800053F4u;
    // 800053F4: .long   0x00000000
    // embedded data

label_800053F8:
    ctx->pc = 0x800053F8u;
    // 800053F8: .long   0x00000000
    // embedded data

label_800053FC:
    ctx->pc = 0x800053FCu;
    // 800053FC: .long   0x00000000
    // embedded data

label_80005400:
    ctx->pc = 0x80005400u;
    // 80005400: .long   0x00000000
    // embedded data

label_80005404:
    ctx->pc = 0x80005404u;
    // 80005404: .long   0x00000000
    // embedded data

label_80005408:
    ctx->pc = 0x80005408u;
    // 80005408: .long   0x00000000
    // embedded data

label_8000540C:
    ctx->pc = 0x8000540Cu;
    // 8000540C: .long   0x00000000
    // embedded data

label_80005410:
    ctx->pc = 0x80005410u;
    // 80005410: .long   0x00000000
    // embedded data

label_80005414:
    ctx->pc = 0x80005414u;
    // 80005414: .long   0x00000000
    // embedded data

label_80005418:
    ctx->pc = 0x80005418u;
    // 80005418: .long   0x00000000
    // embedded data

label_8000541C:
    ctx->pc = 0x8000541Cu;
    // 8000541C: .long   0x00000000
    // embedded data

label_80005420:
    ctx->pc = 0x80005420u;
    // 80005420: .long   0x00000000
    // embedded data

label_80005424:
    ctx->pc = 0x80005424u;
    // 80005424: .long   0x00000000
    // embedded data

label_80005428:
    ctx->pc = 0x80005428u;
    // 80005428: .long   0x00000000
    // embedded data

label_8000542C:
    ctx->pc = 0x8000542Cu;
    // 8000542C: .long   0x00000000
    // embedded data

label_80005430:
    ctx->pc = 0x80005430u;
    // 80005430: .long   0x00000000
    // embedded data

label_80005434:
    ctx->pc = 0x80005434u;
    // 80005434: .long   0x00000000
    // embedded data

label_80005438:
    ctx->pc = 0x80005438u;
    // 80005438: .long   0x00000000
    // embedded data

label_8000543C:
    ctx->pc = 0x8000543Cu;
    // 8000543C: .long   0x00000000
    // embedded data

label_80005440:
    ctx->pc = 0x80005440u;
    // 80005440: .long   0x00000000
    // embedded data

label_80005444:
    ctx->pc = 0x80005444u;
    // 80005444: .long   0x00000000
    // embedded data

label_80005448:
    ctx->pc = 0x80005448u;
    // 80005448: .long   0x00000000
    // embedded data

label_8000544C:
    ctx->pc = 0x8000544Cu;
    // 8000544C: .long   0x00000000
    // embedded data

label_80005450:
    ctx->pc = 0x80005450u;
    // 80005450: .long   0x00000000
    // embedded data

label_80005454:
    ctx->pc = 0x80005454u;
    // 80005454: .long   0x00000000
    // embedded data

label_80005458:
    ctx->pc = 0x80005458u;
    // 80005458: .long   0x00000000
    // embedded data

label_8000545C:
    ctx->pc = 0x8000545Cu;
    // 8000545C: .long   0x00000000
    // embedded data

label_80005460:
    ctx->pc = 0x80005460u;
    // 80005460: .long   0x00000000
    // embedded data

label_80005464:
    ctx->pc = 0x80005464u;
    // 80005464: .long   0x00000000
    // embedded data

label_80005468:
    ctx->pc = 0x80005468u;
    // 80005468: .long   0x00000000
    // embedded data

label_8000546C:
    ctx->pc = 0x8000546Cu;
    // 8000546C: .long   0x00000000
    // embedded data

label_80005470:
    ctx->pc = 0x80005470u;
    // 80005470: .long   0x00000000
    // embedded data

label_80005474:
    ctx->pc = 0x80005474u;
    // 80005474: .long   0x00000000
    // embedded data

label_80005478:
    ctx->pc = 0x80005478u;
    // 80005478: .long   0x00000000
    // embedded data

label_8000547C:
    ctx->pc = 0x8000547Cu;
    // 8000547C: .long   0x00000000
    // embedded data

label_80005480:
    ctx->pc = 0x80005480u;
    // 80005480: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005480u);
    return;

label_80005484:
    ctx->pc = 0x80005484u;
    ctx->downcount -= 1;
    // 80005484: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80005488:
    ctx->pc = 0x80005488u;
    // 80005488: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80005488u);
    return;

label_8000548C:
    ctx->pc = 0x8000548Cu;
    ctx->downcount -= 3;
    // 8000548C: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_80005490:
    ctx->pc = 0x80005490u;
    // 80005490: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005494:
    ctx->pc = 0x80005494u;
    // 80005494: bc    12, 2, 0x800054B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800054B0;
        }
    }

label_80005498:
    ctx->pc = 0x80005498u;
    ctx->downcount -= 9;
    // 80005498: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000549C:
    ctx->pc = 0x8000549Cu;
    // 8000549C: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800054A0:
    ctx->pc = 0x800054A0u;
    // 800054A0: sync
    ppc_memory_fence();

label_800054A4:
    ctx->pc = 0x800054A4u;
    // 800054A4: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800054A8:
    ctx->pc = 0x800054A8u;
    // 800054A8: sync
    ppc_memory_fence();

label_800054AC:
    ctx->pc = 0x800054ACu;
    // 800054AC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800054ACu);
    return;

label_800054B0:
    ctx->pc = 0x800054B0u;
    // 800054B0: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800054B0u);
    return;

label_800054B4:
    ctx->pc = 0x800054B4u;
    ctx->downcount -= 1;
    // 800054B4: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800054B8:
    ctx->pc = 0x800054B8u;
    // 800054B8: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800054B8u);
    return;

label_800054BC:
    ctx->pc = 0x800054BCu;
    // 800054BC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800054BCu);
    return;

label_800054C0:
    ctx->pc = 0x800054C0u;
    // 800054C0: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800054C0u);
    return;

label_800054C4:
    ctx->pc = 0x800054C4u;
    // 800054C4: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800054C4u);
    return;

label_800054C8:
    ctx->pc = 0x800054C8u;
    ctx->downcount -= 13;
    // 800054C8: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800054CC:
    ctx->pc = 0x800054CCu;
    // 800054CC: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800054D0:
    ctx->pc = 0x800054D0u;
    // 800054D0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800054D4:
    ctx->pc = 0x800054D4u;
    // 800054D4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800054D8:
    ctx->pc = 0x800054D8u;
    // 800054D8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800054DC:
    ctx->pc = 0x800054DCu;
    // 800054DC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800054E0:
    ctx->pc = 0x800054E0u;
    // 800054E0: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800054E4:
    ctx->pc = 0x800054E4u;
    // 800054E4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800054E8:
    ctx->pc = 0x800054E8u;
    // 800054E8: li      r3, 4352
    ctx->gpr[3] = (u32)(s32)(4352);

label_800054EC:
    ctx->pc = 0x800054ECu;
    // 800054EC: rfi
    ppc_rfi(ctx, 0x800054ECu);
    return;

label_800054F0:
    ctx->pc = 0x800054F0u;
    // 800054F0: .long   0x00000000
    // embedded data

label_800054F4:
    ctx->pc = 0x800054F4u;
    // 800054F4: .long   0x00000000
    // embedded data

label_800054F8:
    ctx->pc = 0x800054F8u;
    // 800054F8: .long   0x00000000
    // embedded data

label_800054FC:
    ctx->pc = 0x800054FCu;
    // 800054FC: .long   0x00000000
    // embedded data

label_80005500:
    ctx->pc = 0x80005500u;
    // 80005500: .long   0x00000000
    // embedded data

label_80005504:
    ctx->pc = 0x80005504u;
    // 80005504: .long   0x00000000
    // embedded data

label_80005508:
    ctx->pc = 0x80005508u;
    // 80005508: .long   0x00000000
    // embedded data

label_8000550C:
    ctx->pc = 0x8000550Cu;
    // 8000550C: .long   0x00000000
    // embedded data

label_80005510:
    ctx->pc = 0x80005510u;
    // 80005510: .long   0x00000000
    // embedded data

label_80005514:
    ctx->pc = 0x80005514u;
    // 80005514: .long   0x00000000
    // embedded data

label_80005518:
    ctx->pc = 0x80005518u;
    // 80005518: .long   0x00000000
    // embedded data

label_8000551C:
    ctx->pc = 0x8000551Cu;
    // 8000551C: .long   0x00000000
    // embedded data

label_80005520:
    ctx->pc = 0x80005520u;
    // 80005520: .long   0x00000000
    // embedded data

label_80005524:
    ctx->pc = 0x80005524u;
    // 80005524: .long   0x00000000
    // embedded data

label_80005528:
    ctx->pc = 0x80005528u;
    // 80005528: .long   0x00000000
    // embedded data

label_8000552C:
    ctx->pc = 0x8000552Cu;
    // 8000552C: .long   0x00000000
    // embedded data

label_80005530:
    ctx->pc = 0x80005530u;
    // 80005530: .long   0x00000000
    // embedded data

label_80005534:
    ctx->pc = 0x80005534u;
    // 80005534: .long   0x00000000
    // embedded data

label_80005538:
    ctx->pc = 0x80005538u;
    // 80005538: .long   0x00000000
    // embedded data

label_8000553C:
    ctx->pc = 0x8000553Cu;
    // 8000553C: .long   0x00000000
    // embedded data

label_80005540:
    ctx->pc = 0x80005540u;
    // 80005540: .long   0x00000000
    // embedded data

label_80005544:
    ctx->pc = 0x80005544u;
    // 80005544: .long   0x00000000
    // embedded data

label_80005548:
    ctx->pc = 0x80005548u;
    // 80005548: .long   0x00000000
    // embedded data

label_8000554C:
    ctx->pc = 0x8000554Cu;
    // 8000554C: .long   0x00000000
    // embedded data

label_80005550:
    ctx->pc = 0x80005550u;
    // 80005550: .long   0x00000000
    // embedded data

label_80005554:
    ctx->pc = 0x80005554u;
    // 80005554: .long   0x00000000
    // embedded data

label_80005558:
    ctx->pc = 0x80005558u;
    // 80005558: .long   0x00000000
    // embedded data

label_8000555C:
    ctx->pc = 0x8000555Cu;
    // 8000555C: .long   0x00000000
    // embedded data

label_80005560:
    ctx->pc = 0x80005560u;
    // 80005560: .long   0x00000000
    // embedded data

label_80005564:
    ctx->pc = 0x80005564u;
    // 80005564: .long   0x00000000
    // embedded data

label_80005568:
    ctx->pc = 0x80005568u;
    // 80005568: .long   0x00000000
    // embedded data

label_8000556C:
    ctx->pc = 0x8000556Cu;
    // 8000556C: .long   0x00000000
    // embedded data

label_80005570:
    ctx->pc = 0x80005570u;
    // 80005570: .long   0x00000000
    // embedded data

label_80005574:
    ctx->pc = 0x80005574u;
    // 80005574: .long   0x00000000
    // embedded data

label_80005578:
    ctx->pc = 0x80005578u;
    // 80005578: .long   0x00000000
    // embedded data

label_8000557C:
    ctx->pc = 0x8000557Cu;
    // 8000557C: .long   0x00000000
    // embedded data

label_80005580:
    ctx->pc = 0x80005580u;
    // 80005580: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005580u);
    return;

label_80005584:
    ctx->pc = 0x80005584u;
    ctx->downcount -= 1;
    // 80005584: mfcr    r2
    ctx->gpr[2] = ctx->cr;

label_80005588:
    ctx->pc = 0x80005588u;
    // 80005588: mtsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5243A6u, 0x80005588u);
    return;

label_8000558C:
    ctx->pc = 0x8000558Cu;
    ctx->downcount -= 3;
    // 8000558C: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_80005590:
    ctx->pc = 0x80005590u;
    // 80005590: andis.  r2, r2, 0x0002
    {
        ctx->gpr[2] = ctx->gpr[2] & (0x0002u << 16);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[2];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80005594:
    ctx->pc = 0x80005594u;
    // 80005594: bc    12, 2, 0x800055B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800055B0;
        }
    }

label_80005598:
    ctx->pc = 0x80005598u;
    ctx->downcount -= 9;
    // 80005598: mfmsr   r2
    ctx->gpr[2] = ctx->msr;

label_8000559C:
    ctx->pc = 0x8000559Cu;
    // 8000559C: xoris   r2, r2, 0x0002
    ctx->gpr[2] = ctx->gpr[2] ^ (0x0002u << 16);

label_800055A0:
    ctx->pc = 0x800055A0u;
    // 800055A0: sync
    ppc_memory_fence();

label_800055A4:
    ctx->pc = 0x800055A4u;
    // 800055A4: mtmsr   r2
    ctx->msr = ctx->gpr[2];

label_800055A8:
    ctx->pc = 0x800055A8u;
    // 800055A8: sync
    ppc_memory_fence();

label_800055AC:
    ctx->pc = 0x800055ACu;
    // 800055AC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800055ACu);
    return;

label_800055B0:
    ctx->pc = 0x800055B0u;
    // 800055B0: mfsprg2    r2
    ppc_fallback_instruction(ctx, 0x7C5242A6u, 0x800055B0u);
    return;

label_800055B4:
    ctx->pc = 0x800055B4u;
    ctx->downcount -= 1;
    // 800055B4: mtcr    r2
    ctx->cr = (ctx->cr & ~0xFFFFFFFFu) | (ctx->gpr[2] & 0xFFFFFFFFu);

label_800055B8:
    ctx->pc = 0x800055B8u;
    // 800055B8: mfsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5142A6u, 0x800055B8u);
    return;

label_800055BC:
    ctx->pc = 0x800055BCu;
    // 800055BC: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x800055BCu);
    return;

label_800055C0:
    ctx->pc = 0x800055C0u;
    // 800055C0: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x800055C0u);
    return;

label_800055C4:
    ctx->pc = 0x800055C4u;
    // 800055C4: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x800055C4u);
    return;

label_800055C8:
    ctx->pc = 0x800055C8u;
    ctx->downcount -= 13;
    // 800055C8: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_800055CC:
    ctx->pc = 0x800055CCu;
    // 800055CC: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_800055D0:
    ctx->pc = 0x800055D0u;
    // 800055D0: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_800055D4:
    ctx->pc = 0x800055D4u;
    // 800055D4: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_800055D8:
    ctx->pc = 0x800055D8u;
    // 800055D8: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800055DC:
    ctx->pc = 0x800055DCu;
    // 800055DC: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800055E0:
    ctx->pc = 0x800055E0u;
    // 800055E0: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800055E4:
    ctx->pc = 0x800055E4u;
    // 800055E4: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800055E8:
    ctx->pc = 0x800055E8u;
    // 800055E8: li      r3, 4608
    ctx->gpr[3] = (u32)(s32)(4608);

label_800055EC:
    ctx->pc = 0x800055ECu;
    // 800055EC: rfi
    ppc_rfi(ctx, 0x800055ECu);
    return;

label_800055F0:
    ctx->pc = 0x800055F0u;
    // 800055F0: .long   0x00000000
    // embedded data

label_800055F4:
    ctx->pc = 0x800055F4u;
    // 800055F4: .long   0x00000000
    // embedded data

label_800055F8:
    ctx->pc = 0x800055F8u;
    // 800055F8: .long   0x00000000
    // embedded data

label_800055FC:
    ctx->pc = 0x800055FCu;
    // 800055FC: .long   0x00000000
    // embedded data

label_80005600:
    ctx->pc = 0x80005600u;
    // 80005600: .long   0x00000000
    // embedded data

label_80005604:
    ctx->pc = 0x80005604u;
    // 80005604: .long   0x00000000
    // embedded data

label_80005608:
    ctx->pc = 0x80005608u;
    // 80005608: .long   0x00000000
    // embedded data

label_8000560C:
    ctx->pc = 0x8000560Cu;
    // 8000560C: .long   0x00000000
    // embedded data

label_80005610:
    ctx->pc = 0x80005610u;
    // 80005610: .long   0x00000000
    // embedded data

label_80005614:
    ctx->pc = 0x80005614u;
    // 80005614: .long   0x00000000
    // embedded data

label_80005618:
    ctx->pc = 0x80005618u;
    // 80005618: .long   0x00000000
    // embedded data

label_8000561C:
    ctx->pc = 0x8000561Cu;
    // 8000561C: .long   0x00000000
    // embedded data

label_80005620:
    ctx->pc = 0x80005620u;
    // 80005620: .long   0x00000000
    // embedded data

label_80005624:
    ctx->pc = 0x80005624u;
    // 80005624: .long   0x00000000
    // embedded data

label_80005628:
    ctx->pc = 0x80005628u;
    // 80005628: .long   0x00000000
    // embedded data

label_8000562C:
    ctx->pc = 0x8000562Cu;
    // 8000562C: .long   0x00000000
    // embedded data

label_80005630:
    ctx->pc = 0x80005630u;
    // 80005630: .long   0x00000000
    // embedded data

label_80005634:
    ctx->pc = 0x80005634u;
    // 80005634: .long   0x00000000
    // embedded data

label_80005638:
    ctx->pc = 0x80005638u;
    // 80005638: .long   0x00000000
    // embedded data

label_8000563C:
    ctx->pc = 0x8000563Cu;
    // 8000563C: .long   0x00000000
    // embedded data

label_80005640:
    ctx->pc = 0x80005640u;
    // 80005640: .long   0x00000000
    // embedded data

label_80005644:
    ctx->pc = 0x80005644u;
    // 80005644: .long   0x00000000
    // embedded data

label_80005648:
    ctx->pc = 0x80005648u;
    // 80005648: .long   0x00000000
    // embedded data

label_8000564C:
    ctx->pc = 0x8000564Cu;
    // 8000564C: .long   0x00000000
    // embedded data

label_80005650:
    ctx->pc = 0x80005650u;
    // 80005650: .long   0x00000000
    // embedded data

label_80005654:
    ctx->pc = 0x80005654u;
    // 80005654: .long   0x00000000
    // embedded data

label_80005658:
    ctx->pc = 0x80005658u;
    // 80005658: .long   0x00000000
    // embedded data

label_8000565C:
    ctx->pc = 0x8000565Cu;
    // 8000565C: .long   0x00000000
    // embedded data

label_80005660:
    ctx->pc = 0x80005660u;
    // 80005660: .long   0x00000000
    // embedded data

label_80005664:
    ctx->pc = 0x80005664u;
    // 80005664: .long   0x00000000
    // embedded data

label_80005668:
    ctx->pc = 0x80005668u;
    // 80005668: .long   0x00000000
    // embedded data

label_8000566C:
    ctx->pc = 0x8000566Cu;
    // 8000566C: .long   0x00000000
    // embedded data

label_80005670:
    ctx->pc = 0x80005670u;
    // 80005670: .long   0x00000000
    // embedded data

label_80005674:
    ctx->pc = 0x80005674u;
    // 80005674: .long   0x00000000
    // embedded data

label_80005678:
    ctx->pc = 0x80005678u;
    // 80005678: .long   0x00000000
    // embedded data

label_8000567C:
    ctx->pc = 0x8000567Cu;
    // 8000567C: .long   0x00000000
    // embedded data

label_80005680:
    ctx->pc = 0x80005680u;
    // 80005680: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005680u);
    return;

label_80005684:
    ctx->pc = 0x80005684u;
    // 80005684: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005684u);
    return;

label_80005688:
    ctx->pc = 0x80005688u;
    // 80005688: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005688u);
    return;

label_8000568C:
    ctx->pc = 0x8000568Cu;
    ctx->downcount -= 13;
    // 8000568C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005690:
    ctx->pc = 0x80005690u;
    // 80005690: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005694:
    ctx->pc = 0x80005694u;
    // 80005694: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005698:
    ctx->pc = 0x80005698u;
    // 80005698: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000569C:
    ctx->pc = 0x8000569Cu;
    // 8000569C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800056A0:
    ctx->pc = 0x800056A0u;
    // 800056A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800056A4:
    ctx->pc = 0x800056A4u;
    // 800056A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800056A8:
    ctx->pc = 0x800056A8u;
    // 800056A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800056AC:
    ctx->pc = 0x800056ACu;
    // 800056AC: li      r3, 4864
    ctx->gpr[3] = (u32)(s32)(4864);

label_800056B0:
    ctx->pc = 0x800056B0u;
    // 800056B0: rfi
    ppc_rfi(ctx, 0x800056B0u);
    return;

label_800056B4:
    ctx->pc = 0x800056B4u;
    // 800056B4: .long   0x00000000
    // embedded data

label_800056B8:
    ctx->pc = 0x800056B8u;
    // 800056B8: .long   0x00000000
    // embedded data

label_800056BC:
    ctx->pc = 0x800056BCu;
    // 800056BC: .long   0x00000000
    // embedded data

label_800056C0:
    ctx->pc = 0x800056C0u;
    // 800056C0: .long   0x00000000
    // embedded data

label_800056C4:
    ctx->pc = 0x800056C4u;
    // 800056C4: .long   0x00000000
    // embedded data

label_800056C8:
    ctx->pc = 0x800056C8u;
    // 800056C8: .long   0x00000000
    // embedded data

label_800056CC:
    ctx->pc = 0x800056CCu;
    // 800056CC: .long   0x00000000
    // embedded data

label_800056D0:
    ctx->pc = 0x800056D0u;
    // 800056D0: .long   0x00000000
    // embedded data

label_800056D4:
    ctx->pc = 0x800056D4u;
    // 800056D4: .long   0x00000000
    // embedded data

label_800056D8:
    ctx->pc = 0x800056D8u;
    // 800056D8: .long   0x00000000
    // embedded data

label_800056DC:
    ctx->pc = 0x800056DCu;
    // 800056DC: .long   0x00000000
    // embedded data

label_800056E0:
    ctx->pc = 0x800056E0u;
    // 800056E0: .long   0x00000000
    // embedded data

label_800056E4:
    ctx->pc = 0x800056E4u;
    // 800056E4: .long   0x00000000
    // embedded data

label_800056E8:
    ctx->pc = 0x800056E8u;
    // 800056E8: .long   0x00000000
    // embedded data

label_800056EC:
    ctx->pc = 0x800056ECu;
    // 800056EC: .long   0x00000000
    // embedded data

label_800056F0:
    ctx->pc = 0x800056F0u;
    // 800056F0: .long   0x00000000
    // embedded data

label_800056F4:
    ctx->pc = 0x800056F4u;
    // 800056F4: .long   0x00000000
    // embedded data

label_800056F8:
    ctx->pc = 0x800056F8u;
    // 800056F8: .long   0x00000000
    // embedded data

label_800056FC:
    ctx->pc = 0x800056FCu;
    // 800056FC: .long   0x00000000
    // embedded data

label_80005700:
    ctx->pc = 0x80005700u;
    // 80005700: .long   0x00000000
    // embedded data

label_80005704:
    ctx->pc = 0x80005704u;
    // 80005704: .long   0x00000000
    // embedded data

label_80005708:
    ctx->pc = 0x80005708u;
    // 80005708: .long   0x00000000
    // embedded data

label_8000570C:
    ctx->pc = 0x8000570Cu;
    // 8000570C: .long   0x00000000
    // embedded data

label_80005710:
    ctx->pc = 0x80005710u;
    // 80005710: .long   0x00000000
    // embedded data

label_80005714:
    ctx->pc = 0x80005714u;
    // 80005714: .long   0x00000000
    // embedded data

label_80005718:
    ctx->pc = 0x80005718u;
    // 80005718: .long   0x00000000
    // embedded data

label_8000571C:
    ctx->pc = 0x8000571Cu;
    // 8000571C: .long   0x00000000
    // embedded data

label_80005720:
    ctx->pc = 0x80005720u;
    // 80005720: .long   0x00000000
    // embedded data

label_80005724:
    ctx->pc = 0x80005724u;
    // 80005724: .long   0x00000000
    // embedded data

label_80005728:
    ctx->pc = 0x80005728u;
    // 80005728: .long   0x00000000
    // embedded data

label_8000572C:
    ctx->pc = 0x8000572Cu;
    // 8000572C: .long   0x00000000
    // embedded data

label_80005730:
    ctx->pc = 0x80005730u;
    // 80005730: .long   0x00000000
    // embedded data

label_80005734:
    ctx->pc = 0x80005734u;
    // 80005734: .long   0x00000000
    // embedded data

label_80005738:
    ctx->pc = 0x80005738u;
    // 80005738: .long   0x00000000
    // embedded data

label_8000573C:
    ctx->pc = 0x8000573Cu;
    // 8000573C: .long   0x00000000
    // embedded data

label_80005740:
    ctx->pc = 0x80005740u;
    // 80005740: .long   0x00000000
    // embedded data

label_80005744:
    ctx->pc = 0x80005744u;
    // 80005744: .long   0x00000000
    // embedded data

label_80005748:
    ctx->pc = 0x80005748u;
    // 80005748: .long   0x00000000
    // embedded data

label_8000574C:
    ctx->pc = 0x8000574Cu;
    // 8000574C: .long   0x00000000
    // embedded data

label_80005750:
    ctx->pc = 0x80005750u;
    // 80005750: .long   0x00000000
    // embedded data

label_80005754:
    ctx->pc = 0x80005754u;
    // 80005754: .long   0x00000000
    // embedded data

label_80005758:
    ctx->pc = 0x80005758u;
    // 80005758: .long   0x00000000
    // embedded data

label_8000575C:
    ctx->pc = 0x8000575Cu;
    // 8000575C: .long   0x00000000
    // embedded data

label_80005760:
    ctx->pc = 0x80005760u;
    // 80005760: .long   0x00000000
    // embedded data

label_80005764:
    ctx->pc = 0x80005764u;
    // 80005764: .long   0x00000000
    // embedded data

label_80005768:
    ctx->pc = 0x80005768u;
    // 80005768: .long   0x00000000
    // embedded data

label_8000576C:
    ctx->pc = 0x8000576Cu;
    // 8000576C: .long   0x00000000
    // embedded data

label_80005770:
    ctx->pc = 0x80005770u;
    // 80005770: .long   0x00000000
    // embedded data

label_80005774:
    ctx->pc = 0x80005774u;
    // 80005774: .long   0x00000000
    // embedded data

label_80005778:
    ctx->pc = 0x80005778u;
    // 80005778: .long   0x00000000
    // embedded data

label_8000577C:
    ctx->pc = 0x8000577Cu;
    // 8000577C: .long   0x00000000
    // embedded data

label_80005780:
    ctx->pc = 0x80005780u;
    // 80005780: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005780u);
    return;

label_80005784:
    ctx->pc = 0x80005784u;
    // 80005784: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005784u);
    return;

label_80005788:
    ctx->pc = 0x80005788u;
    // 80005788: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005788u);
    return;

label_8000578C:
    ctx->pc = 0x8000578Cu;
    ctx->downcount -= 13;
    // 8000578C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005790:
    ctx->pc = 0x80005790u;
    // 80005790: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005794:
    ctx->pc = 0x80005794u;
    // 80005794: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005798:
    ctx->pc = 0x80005798u;
    // 80005798: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000579C:
    ctx->pc = 0x8000579Cu;
    // 8000579C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800057A0:
    ctx->pc = 0x800057A0u;
    // 800057A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800057A4:
    ctx->pc = 0x800057A4u;
    // 800057A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800057A8:
    ctx->pc = 0x800057A8u;
    // 800057A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800057AC:
    ctx->pc = 0x800057ACu;
    // 800057AC: li      r3, 5120
    ctx->gpr[3] = (u32)(s32)(5120);

label_800057B0:
    ctx->pc = 0x800057B0u;
    // 800057B0: rfi
    ppc_rfi(ctx, 0x800057B0u);
    return;

label_800057B4:
    ctx->pc = 0x800057B4u;
    // 800057B4: .long   0x00000000
    // embedded data

label_800057B8:
    ctx->pc = 0x800057B8u;
    // 800057B8: .long   0x00000000
    // embedded data

label_800057BC:
    ctx->pc = 0x800057BCu;
    // 800057BC: .long   0x00000000
    // embedded data

label_800057C0:
    ctx->pc = 0x800057C0u;
    // 800057C0: .long   0x00000000
    // embedded data

label_800057C4:
    ctx->pc = 0x800057C4u;
    // 800057C4: .long   0x00000000
    // embedded data

label_800057C8:
    ctx->pc = 0x800057C8u;
    // 800057C8: .long   0x00000000
    // embedded data

label_800057CC:
    ctx->pc = 0x800057CCu;
    // 800057CC: .long   0x00000000
    // embedded data

label_800057D0:
    ctx->pc = 0x800057D0u;
    // 800057D0: .long   0x00000000
    // embedded data

label_800057D4:
    ctx->pc = 0x800057D4u;
    // 800057D4: .long   0x00000000
    // embedded data

label_800057D8:
    ctx->pc = 0x800057D8u;
    // 800057D8: .long   0x00000000
    // embedded data

label_800057DC:
    ctx->pc = 0x800057DCu;
    // 800057DC: .long   0x00000000
    // embedded data

label_800057E0:
    ctx->pc = 0x800057E0u;
    // 800057E0: .long   0x00000000
    // embedded data

label_800057E4:
    ctx->pc = 0x800057E4u;
    // 800057E4: .long   0x00000000
    // embedded data

label_800057E8:
    ctx->pc = 0x800057E8u;
    // 800057E8: .long   0x00000000
    // embedded data

label_800057EC:
    ctx->pc = 0x800057ECu;
    // 800057EC: .long   0x00000000
    // embedded data

label_800057F0:
    ctx->pc = 0x800057F0u;
    // 800057F0: .long   0x00000000
    // embedded data

label_800057F4:
    ctx->pc = 0x800057F4u;
    // 800057F4: .long   0x00000000
    // embedded data

label_800057F8:
    ctx->pc = 0x800057F8u;
    // 800057F8: .long   0x00000000
    // embedded data

label_800057FC:
    ctx->pc = 0x800057FCu;
    // 800057FC: .long   0x00000000
    // embedded data

label_80005800:
    ctx->pc = 0x80005800u;
    // 80005800: .long   0x00000000
    // embedded data

label_80005804:
    ctx->pc = 0x80005804u;
    // 80005804: .long   0x00000000
    // embedded data

label_80005808:
    ctx->pc = 0x80005808u;
    // 80005808: .long   0x00000000
    // embedded data

label_8000580C:
    ctx->pc = 0x8000580Cu;
    // 8000580C: .long   0x00000000
    // embedded data

label_80005810:
    ctx->pc = 0x80005810u;
    // 80005810: .long   0x00000000
    // embedded data

label_80005814:
    ctx->pc = 0x80005814u;
    // 80005814: .long   0x00000000
    // embedded data

label_80005818:
    ctx->pc = 0x80005818u;
    // 80005818: .long   0x00000000
    // embedded data

label_8000581C:
    ctx->pc = 0x8000581Cu;
    // 8000581C: .long   0x00000000
    // embedded data

label_80005820:
    ctx->pc = 0x80005820u;
    // 80005820: .long   0x00000000
    // embedded data

label_80005824:
    ctx->pc = 0x80005824u;
    // 80005824: .long   0x00000000
    // embedded data

label_80005828:
    ctx->pc = 0x80005828u;
    // 80005828: .long   0x00000000
    // embedded data

label_8000582C:
    ctx->pc = 0x8000582Cu;
    // 8000582C: .long   0x00000000
    // embedded data

label_80005830:
    ctx->pc = 0x80005830u;
    // 80005830: .long   0x00000000
    // embedded data

label_80005834:
    ctx->pc = 0x80005834u;
    // 80005834: .long   0x00000000
    // embedded data

label_80005838:
    ctx->pc = 0x80005838u;
    // 80005838: .long   0x00000000
    // embedded data

label_8000583C:
    ctx->pc = 0x8000583Cu;
    // 8000583C: .long   0x00000000
    // embedded data

label_80005840:
    ctx->pc = 0x80005840u;
    // 80005840: .long   0x00000000
    // embedded data

label_80005844:
    ctx->pc = 0x80005844u;
    // 80005844: .long   0x00000000
    // embedded data

label_80005848:
    ctx->pc = 0x80005848u;
    // 80005848: .long   0x00000000
    // embedded data

label_8000584C:
    ctx->pc = 0x8000584Cu;
    // 8000584C: .long   0x00000000
    // embedded data

label_80005850:
    ctx->pc = 0x80005850u;
    // 80005850: .long   0x00000000
    // embedded data

label_80005854:
    ctx->pc = 0x80005854u;
    // 80005854: .long   0x00000000
    // embedded data

label_80005858:
    ctx->pc = 0x80005858u;
    // 80005858: .long   0x00000000
    // embedded data

label_8000585C:
    ctx->pc = 0x8000585Cu;
    // 8000585C: .long   0x00000000
    // embedded data

label_80005860:
    ctx->pc = 0x80005860u;
    // 80005860: .long   0x00000000
    // embedded data

label_80005864:
    ctx->pc = 0x80005864u;
    // 80005864: .long   0x00000000
    // embedded data

label_80005868:
    ctx->pc = 0x80005868u;
    // 80005868: .long   0x00000000
    // embedded data

label_8000586C:
    ctx->pc = 0x8000586Cu;
    // 8000586C: .long   0x00000000
    // embedded data

label_80005870:
    ctx->pc = 0x80005870u;
    // 80005870: .long   0x00000000
    // embedded data

label_80005874:
    ctx->pc = 0x80005874u;
    // 80005874: .long   0x00000000
    // embedded data

label_80005878:
    ctx->pc = 0x80005878u;
    // 80005878: .long   0x00000000
    // embedded data

label_8000587C:
    ctx->pc = 0x8000587Cu;
    // 8000587C: .long   0x00000000
    // embedded data

label_80005880:
    ctx->pc = 0x80005880u;
    // 80005880: .long   0x00000000
    // embedded data

label_80005884:
    ctx->pc = 0x80005884u;
    // 80005884: .long   0x00000000
    // embedded data

label_80005888:
    ctx->pc = 0x80005888u;
    // 80005888: .long   0x00000000
    // embedded data

label_8000588C:
    ctx->pc = 0x8000588Cu;
    // 8000588C: .long   0x00000000
    // embedded data

label_80005890:
    ctx->pc = 0x80005890u;
    // 80005890: .long   0x00000000
    // embedded data

label_80005894:
    ctx->pc = 0x80005894u;
    // 80005894: .long   0x00000000
    // embedded data

label_80005898:
    ctx->pc = 0x80005898u;
    // 80005898: .long   0x00000000
    // embedded data

label_8000589C:
    ctx->pc = 0x8000589Cu;
    // 8000589C: .long   0x00000000
    // embedded data

label_800058A0:
    ctx->pc = 0x800058A0u;
    // 800058A0: .long   0x00000000
    // embedded data

label_800058A4:
    ctx->pc = 0x800058A4u;
    // 800058A4: .long   0x00000000
    // embedded data

label_800058A8:
    ctx->pc = 0x800058A8u;
    // 800058A8: .long   0x00000000
    // embedded data

label_800058AC:
    ctx->pc = 0x800058ACu;
    // 800058AC: .long   0x00000000
    // embedded data

label_800058B0:
    ctx->pc = 0x800058B0u;
    // 800058B0: .long   0x00000000
    // embedded data

label_800058B4:
    ctx->pc = 0x800058B4u;
    // 800058B4: .long   0x00000000
    // embedded data

label_800058B8:
    ctx->pc = 0x800058B8u;
    // 800058B8: .long   0x00000000
    // embedded data

label_800058BC:
    ctx->pc = 0x800058BCu;
    // 800058BC: .long   0x00000000
    // embedded data

label_800058C0:
    ctx->pc = 0x800058C0u;
    // 800058C0: .long   0x00000000
    // embedded data

label_800058C4:
    ctx->pc = 0x800058C4u;
    // 800058C4: .long   0x00000000
    // embedded data

label_800058C8:
    ctx->pc = 0x800058C8u;
    // 800058C8: .long   0x00000000
    // embedded data

label_800058CC:
    ctx->pc = 0x800058CCu;
    // 800058CC: .long   0x00000000
    // embedded data

label_800058D0:
    ctx->pc = 0x800058D0u;
    // 800058D0: .long   0x00000000
    // embedded data

label_800058D4:
    ctx->pc = 0x800058D4u;
    // 800058D4: .long   0x00000000
    // embedded data

label_800058D8:
    ctx->pc = 0x800058D8u;
    // 800058D8: .long   0x00000000
    // embedded data

label_800058DC:
    ctx->pc = 0x800058DCu;
    // 800058DC: .long   0x00000000
    // embedded data

label_800058E0:
    ctx->pc = 0x800058E0u;
    // 800058E0: .long   0x00000000
    // embedded data

label_800058E4:
    ctx->pc = 0x800058E4u;
    // 800058E4: .long   0x00000000
    // embedded data

label_800058E8:
    ctx->pc = 0x800058E8u;
    // 800058E8: .long   0x00000000
    // embedded data

label_800058EC:
    ctx->pc = 0x800058ECu;
    // 800058EC: .long   0x00000000
    // embedded data

label_800058F0:
    ctx->pc = 0x800058F0u;
    // 800058F0: .long   0x00000000
    // embedded data

label_800058F4:
    ctx->pc = 0x800058F4u;
    // 800058F4: .long   0x00000000
    // embedded data

label_800058F8:
    ctx->pc = 0x800058F8u;
    // 800058F8: .long   0x00000000
    // embedded data

label_800058FC:
    ctx->pc = 0x800058FCu;
    // 800058FC: .long   0x00000000
    // embedded data

label_80005900:
    ctx->pc = 0x80005900u;
    // 80005900: .long   0x00000000
    // embedded data

label_80005904:
    ctx->pc = 0x80005904u;
    // 80005904: .long   0x00000000
    // embedded data

label_80005908:
    ctx->pc = 0x80005908u;
    // 80005908: .long   0x00000000
    // embedded data

label_8000590C:
    ctx->pc = 0x8000590Cu;
    // 8000590C: .long   0x00000000
    // embedded data

label_80005910:
    ctx->pc = 0x80005910u;
    // 80005910: .long   0x00000000
    // embedded data

label_80005914:
    ctx->pc = 0x80005914u;
    // 80005914: .long   0x00000000
    // embedded data

label_80005918:
    ctx->pc = 0x80005918u;
    // 80005918: .long   0x00000000
    // embedded data

label_8000591C:
    ctx->pc = 0x8000591Cu;
    // 8000591C: .long   0x00000000
    // embedded data

label_80005920:
    ctx->pc = 0x80005920u;
    // 80005920: .long   0x00000000
    // embedded data

label_80005924:
    ctx->pc = 0x80005924u;
    // 80005924: .long   0x00000000
    // embedded data

label_80005928:
    ctx->pc = 0x80005928u;
    // 80005928: .long   0x00000000
    // embedded data

label_8000592C:
    ctx->pc = 0x8000592Cu;
    // 8000592C: .long   0x00000000
    // embedded data

label_80005930:
    ctx->pc = 0x80005930u;
    // 80005930: .long   0x00000000
    // embedded data

label_80005934:
    ctx->pc = 0x80005934u;
    // 80005934: .long   0x00000000
    // embedded data

label_80005938:
    ctx->pc = 0x80005938u;
    // 80005938: .long   0x00000000
    // embedded data

label_8000593C:
    ctx->pc = 0x8000593Cu;
    // 8000593C: .long   0x00000000
    // embedded data

label_80005940:
    ctx->pc = 0x80005940u;
    // 80005940: .long   0x00000000
    // embedded data

label_80005944:
    ctx->pc = 0x80005944u;
    // 80005944: .long   0x00000000
    // embedded data

label_80005948:
    ctx->pc = 0x80005948u;
    // 80005948: .long   0x00000000
    // embedded data

label_8000594C:
    ctx->pc = 0x8000594Cu;
    // 8000594C: .long   0x00000000
    // embedded data

label_80005950:
    ctx->pc = 0x80005950u;
    // 80005950: .long   0x00000000
    // embedded data

label_80005954:
    ctx->pc = 0x80005954u;
    // 80005954: .long   0x00000000
    // embedded data

label_80005958:
    ctx->pc = 0x80005958u;
    // 80005958: .long   0x00000000
    // embedded data

label_8000595C:
    ctx->pc = 0x8000595Cu;
    // 8000595C: .long   0x00000000
    // embedded data

label_80005960:
    ctx->pc = 0x80005960u;
    // 80005960: .long   0x00000000
    // embedded data

label_80005964:
    ctx->pc = 0x80005964u;
    // 80005964: .long   0x00000000
    // embedded data

label_80005968:
    ctx->pc = 0x80005968u;
    // 80005968: .long   0x00000000
    // embedded data

label_8000596C:
    ctx->pc = 0x8000596Cu;
    // 8000596C: .long   0x00000000
    // embedded data

label_80005970:
    ctx->pc = 0x80005970u;
    // 80005970: .long   0x00000000
    // embedded data

label_80005974:
    ctx->pc = 0x80005974u;
    // 80005974: .long   0x00000000
    // embedded data

label_80005978:
    ctx->pc = 0x80005978u;
    // 80005978: .long   0x00000000
    // embedded data

label_8000597C:
    ctx->pc = 0x8000597Cu;
    // 8000597C: .long   0x00000000
    // embedded data

label_80005980:
    ctx->pc = 0x80005980u;
    // 80005980: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005980u);
    return;

label_80005984:
    ctx->pc = 0x80005984u;
    // 80005984: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005984u);
    return;

label_80005988:
    ctx->pc = 0x80005988u;
    // 80005988: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005988u);
    return;

label_8000598C:
    ctx->pc = 0x8000598Cu;
    ctx->downcount -= 13;
    // 8000598C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005990:
    ctx->pc = 0x80005990u;
    // 80005990: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005994:
    ctx->pc = 0x80005994u;
    // 80005994: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005998:
    ctx->pc = 0x80005998u;
    // 80005998: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000599C:
    ctx->pc = 0x8000599Cu;
    // 8000599C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800059A0:
    ctx->pc = 0x800059A0u;
    // 800059A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800059A4:
    ctx->pc = 0x800059A4u;
    // 800059A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800059A8:
    ctx->pc = 0x800059A8u;
    // 800059A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800059AC:
    ctx->pc = 0x800059ACu;
    // 800059AC: li      r3, 5632
    ctx->gpr[3] = (u32)(s32)(5632);

label_800059B0:
    ctx->pc = 0x800059B0u;
    // 800059B0: rfi
    ppc_rfi(ctx, 0x800059B0u);
    return;

label_800059B4:
    ctx->pc = 0x800059B4u;
    // 800059B4: .long   0x00000000
    // embedded data

label_800059B8:
    ctx->pc = 0x800059B8u;
    // 800059B8: .long   0x00000000
    // embedded data

label_800059BC:
    ctx->pc = 0x800059BCu;
    // 800059BC: .long   0x00000000
    // embedded data

label_800059C0:
    ctx->pc = 0x800059C0u;
    // 800059C0: .long   0x00000000
    // embedded data

label_800059C4:
    ctx->pc = 0x800059C4u;
    // 800059C4: .long   0x00000000
    // embedded data

label_800059C8:
    ctx->pc = 0x800059C8u;
    // 800059C8: .long   0x00000000
    // embedded data

label_800059CC:
    ctx->pc = 0x800059CCu;
    // 800059CC: .long   0x00000000
    // embedded data

label_800059D0:
    ctx->pc = 0x800059D0u;
    // 800059D0: .long   0x00000000
    // embedded data

label_800059D4:
    ctx->pc = 0x800059D4u;
    // 800059D4: .long   0x00000000
    // embedded data

label_800059D8:
    ctx->pc = 0x800059D8u;
    // 800059D8: .long   0x00000000
    // embedded data

label_800059DC:
    ctx->pc = 0x800059DCu;
    // 800059DC: .long   0x00000000
    // embedded data

label_800059E0:
    ctx->pc = 0x800059E0u;
    // 800059E0: .long   0x00000000
    // embedded data

label_800059E4:
    ctx->pc = 0x800059E4u;
    // 800059E4: .long   0x00000000
    // embedded data

label_800059E8:
    ctx->pc = 0x800059E8u;
    // 800059E8: .long   0x00000000
    // embedded data

label_800059EC:
    ctx->pc = 0x800059ECu;
    // 800059EC: .long   0x00000000
    // embedded data

label_800059F0:
    ctx->pc = 0x800059F0u;
    // 800059F0: .long   0x00000000
    // embedded data

label_800059F4:
    ctx->pc = 0x800059F4u;
    // 800059F4: .long   0x00000000
    // embedded data

label_800059F8:
    ctx->pc = 0x800059F8u;
    // 800059F8: .long   0x00000000
    // embedded data

label_800059FC:
    ctx->pc = 0x800059FCu;
    // 800059FC: .long   0x00000000
    // embedded data

label_80005A00:
    ctx->pc = 0x80005A00u;
    // 80005A00: .long   0x00000000
    // embedded data

label_80005A04:
    ctx->pc = 0x80005A04u;
    // 80005A04: .long   0x00000000
    // embedded data

label_80005A08:
    ctx->pc = 0x80005A08u;
    // 80005A08: .long   0x00000000
    // embedded data

label_80005A0C:
    ctx->pc = 0x80005A0Cu;
    // 80005A0C: .long   0x00000000
    // embedded data

label_80005A10:
    ctx->pc = 0x80005A10u;
    // 80005A10: .long   0x00000000
    // embedded data

label_80005A14:
    ctx->pc = 0x80005A14u;
    // 80005A14: .long   0x00000000
    // embedded data

label_80005A18:
    ctx->pc = 0x80005A18u;
    // 80005A18: .long   0x00000000
    // embedded data

label_80005A1C:
    ctx->pc = 0x80005A1Cu;
    // 80005A1C: .long   0x00000000
    // embedded data

label_80005A20:
    ctx->pc = 0x80005A20u;
    // 80005A20: .long   0x00000000
    // embedded data

label_80005A24:
    ctx->pc = 0x80005A24u;
    // 80005A24: .long   0x00000000
    // embedded data

label_80005A28:
    ctx->pc = 0x80005A28u;
    // 80005A28: .long   0x00000000
    // embedded data

label_80005A2C:
    ctx->pc = 0x80005A2Cu;
    // 80005A2C: .long   0x00000000
    // embedded data

label_80005A30:
    ctx->pc = 0x80005A30u;
    // 80005A30: .long   0x00000000
    // embedded data

label_80005A34:
    ctx->pc = 0x80005A34u;
    // 80005A34: .long   0x00000000
    // embedded data

label_80005A38:
    ctx->pc = 0x80005A38u;
    // 80005A38: .long   0x00000000
    // embedded data

label_80005A3C:
    ctx->pc = 0x80005A3Cu;
    // 80005A3C: .long   0x00000000
    // embedded data

label_80005A40:
    ctx->pc = 0x80005A40u;
    // 80005A40: .long   0x00000000
    // embedded data

label_80005A44:
    ctx->pc = 0x80005A44u;
    // 80005A44: .long   0x00000000
    // embedded data

label_80005A48:
    ctx->pc = 0x80005A48u;
    // 80005A48: .long   0x00000000
    // embedded data

label_80005A4C:
    ctx->pc = 0x80005A4Cu;
    // 80005A4C: .long   0x00000000
    // embedded data

label_80005A50:
    ctx->pc = 0x80005A50u;
    // 80005A50: .long   0x00000000
    // embedded data

label_80005A54:
    ctx->pc = 0x80005A54u;
    // 80005A54: .long   0x00000000
    // embedded data

label_80005A58:
    ctx->pc = 0x80005A58u;
    // 80005A58: .long   0x00000000
    // embedded data

label_80005A5C:
    ctx->pc = 0x80005A5Cu;
    // 80005A5C: .long   0x00000000
    // embedded data

label_80005A60:
    ctx->pc = 0x80005A60u;
    // 80005A60: .long   0x00000000
    // embedded data

label_80005A64:
    ctx->pc = 0x80005A64u;
    // 80005A64: .long   0x00000000
    // embedded data

label_80005A68:
    ctx->pc = 0x80005A68u;
    // 80005A68: .long   0x00000000
    // embedded data

label_80005A6C:
    ctx->pc = 0x80005A6Cu;
    // 80005A6C: .long   0x00000000
    // embedded data

label_80005A70:
    ctx->pc = 0x80005A70u;
    // 80005A70: .long   0x00000000
    // embedded data

label_80005A74:
    ctx->pc = 0x80005A74u;
    // 80005A74: .long   0x00000000
    // embedded data

label_80005A78:
    ctx->pc = 0x80005A78u;
    // 80005A78: .long   0x00000000
    // embedded data

label_80005A7C:
    ctx->pc = 0x80005A7Cu;
    // 80005A7C: .long   0x00000000
    // embedded data

label_80005A80:
    ctx->pc = 0x80005A80u;
    // 80005A80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005A80u);
    return;

label_80005A84:
    ctx->pc = 0x80005A84u;
    // 80005A84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005A84u);
    return;

label_80005A88:
    ctx->pc = 0x80005A88u;
    // 80005A88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005A88u);
    return;

label_80005A8C:
    ctx->pc = 0x80005A8Cu;
    ctx->downcount -= 13;
    // 80005A8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005A90:
    ctx->pc = 0x80005A90u;
    // 80005A90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005A94:
    ctx->pc = 0x80005A94u;
    // 80005A94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005A98:
    ctx->pc = 0x80005A98u;
    // 80005A98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80005A9C:
    ctx->pc = 0x80005A9Cu;
    // 80005A9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80005AA0:
    ctx->pc = 0x80005AA0u;
    // 80005AA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80005AA4:
    ctx->pc = 0x80005AA4u;
    // 80005AA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80005AA8:
    ctx->pc = 0x80005AA8u;
    // 80005AA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80005AAC:
    ctx->pc = 0x80005AACu;
    // 80005AAC: li      r3, 5888
    ctx->gpr[3] = (u32)(s32)(5888);

label_80005AB0:
    ctx->pc = 0x80005AB0u;
    // 80005AB0: rfi
    ppc_rfi(ctx, 0x80005AB0u);
    return;

label_80005AB4:
    ctx->pc = 0x80005AB4u;
    // 80005AB4: .long   0x00000000
    // embedded data

label_80005AB8:
    ctx->pc = 0x80005AB8u;
    // 80005AB8: .long   0x00000000
    // embedded data

label_80005ABC:
    ctx->pc = 0x80005ABCu;
    // 80005ABC: .long   0x00000000
    // embedded data

label_80005AC0:
    ctx->pc = 0x80005AC0u;
    // 80005AC0: .long   0x00000000
    // embedded data

label_80005AC4:
    ctx->pc = 0x80005AC4u;
    // 80005AC4: .long   0x00000000
    // embedded data

label_80005AC8:
    ctx->pc = 0x80005AC8u;
    // 80005AC8: .long   0x00000000
    // embedded data

label_80005ACC:
    ctx->pc = 0x80005ACCu;
    // 80005ACC: .long   0x00000000
    // embedded data

label_80005AD0:
    ctx->pc = 0x80005AD0u;
    // 80005AD0: .long   0x00000000
    // embedded data

label_80005AD4:
    ctx->pc = 0x80005AD4u;
    // 80005AD4: .long   0x00000000
    // embedded data

label_80005AD8:
    ctx->pc = 0x80005AD8u;
    // 80005AD8: .long   0x00000000
    // embedded data

label_80005ADC:
    ctx->pc = 0x80005ADCu;
    // 80005ADC: .long   0x00000000
    // embedded data

label_80005AE0:
    ctx->pc = 0x80005AE0u;
    // 80005AE0: .long   0x00000000
    // embedded data

label_80005AE4:
    ctx->pc = 0x80005AE4u;
    // 80005AE4: .long   0x00000000
    // embedded data

label_80005AE8:
    ctx->pc = 0x80005AE8u;
    // 80005AE8: .long   0x00000000
    // embedded data

label_80005AEC:
    ctx->pc = 0x80005AECu;
    // 80005AEC: .long   0x00000000
    // embedded data

label_80005AF0:
    ctx->pc = 0x80005AF0u;
    // 80005AF0: .long   0x00000000
    // embedded data

label_80005AF4:
    ctx->pc = 0x80005AF4u;
    // 80005AF4: .long   0x00000000
    // embedded data

label_80005AF8:
    ctx->pc = 0x80005AF8u;
    // 80005AF8: .long   0x00000000
    // embedded data

label_80005AFC:
    ctx->pc = 0x80005AFCu;
    // 80005AFC: .long   0x00000000
    // embedded data

label_80005B00:
    ctx->pc = 0x80005B00u;
    // 80005B00: .long   0x00000000
    // embedded data

label_80005B04:
    ctx->pc = 0x80005B04u;
    // 80005B04: .long   0x00000000
    // embedded data

label_80005B08:
    ctx->pc = 0x80005B08u;
    // 80005B08: .long   0x00000000
    // embedded data

label_80005B0C:
    ctx->pc = 0x80005B0Cu;
    // 80005B0C: .long   0x00000000
    // embedded data

label_80005B10:
    ctx->pc = 0x80005B10u;
    // 80005B10: .long   0x00000000
    // embedded data

label_80005B14:
    ctx->pc = 0x80005B14u;
    // 80005B14: .long   0x00000000
    // embedded data

label_80005B18:
    ctx->pc = 0x80005B18u;
    // 80005B18: .long   0x00000000
    // embedded data

label_80005B1C:
    ctx->pc = 0x80005B1Cu;
    // 80005B1C: .long   0x00000000
    // embedded data

label_80005B20:
    ctx->pc = 0x80005B20u;
    // 80005B20: .long   0x00000000
    // embedded data

label_80005B24:
    ctx->pc = 0x80005B24u;
    // 80005B24: .long   0x00000000
    // embedded data

label_80005B28:
    ctx->pc = 0x80005B28u;
    // 80005B28: .long   0x00000000
    // embedded data

label_80005B2C:
    ctx->pc = 0x80005B2Cu;
    // 80005B2C: .long   0x00000000
    // embedded data

label_80005B30:
    ctx->pc = 0x80005B30u;
    // 80005B30: .long   0x00000000
    // embedded data

label_80005B34:
    ctx->pc = 0x80005B34u;
    // 80005B34: .long   0x00000000
    // embedded data

label_80005B38:
    ctx->pc = 0x80005B38u;
    // 80005B38: .long   0x00000000
    // embedded data

label_80005B3C:
    ctx->pc = 0x80005B3Cu;
    // 80005B3C: .long   0x00000000
    // embedded data

label_80005B40:
    ctx->pc = 0x80005B40u;
    // 80005B40: .long   0x00000000
    // embedded data

label_80005B44:
    ctx->pc = 0x80005B44u;
    // 80005B44: .long   0x00000000
    // embedded data

label_80005B48:
    ctx->pc = 0x80005B48u;
    // 80005B48: .long   0x00000000
    // embedded data

label_80005B4C:
    ctx->pc = 0x80005B4Cu;
    // 80005B4C: .long   0x00000000
    // embedded data

label_80005B50:
    ctx->pc = 0x80005B50u;
    // 80005B50: .long   0x00000000
    // embedded data

label_80005B54:
    ctx->pc = 0x80005B54u;
    // 80005B54: .long   0x00000000
    // embedded data

label_80005B58:
    ctx->pc = 0x80005B58u;
    // 80005B58: .long   0x00000000
    // embedded data

label_80005B5C:
    ctx->pc = 0x80005B5Cu;
    // 80005B5C: .long   0x00000000
    // embedded data

label_80005B60:
    ctx->pc = 0x80005B60u;
    // 80005B60: .long   0x00000000
    // embedded data

label_80005B64:
    ctx->pc = 0x80005B64u;
    // 80005B64: .long   0x00000000
    // embedded data

label_80005B68:
    ctx->pc = 0x80005B68u;
    // 80005B68: .long   0x00000000
    // embedded data

label_80005B6C:
    ctx->pc = 0x80005B6Cu;
    // 80005B6C: .long   0x00000000
    // embedded data

label_80005B70:
    ctx->pc = 0x80005B70u;
    // 80005B70: .long   0x00000000
    // embedded data

label_80005B74:
    ctx->pc = 0x80005B74u;
    // 80005B74: .long   0x00000000
    // embedded data

label_80005B78:
    ctx->pc = 0x80005B78u;
    // 80005B78: .long   0x00000000
    // embedded data

label_80005B7C:
    ctx->pc = 0x80005B7Cu;
    // 80005B7C: .long   0x00000000
    // embedded data

label_80005B80:
    ctx->pc = 0x80005B80u;
    // 80005B80: .long   0x00000000
    // embedded data

label_80005B84:
    ctx->pc = 0x80005B84u;
    // 80005B84: .long   0x00000000
    // embedded data

label_80005B88:
    ctx->pc = 0x80005B88u;
    // 80005B88: .long   0x00000000
    // embedded data

label_80005B8C:
    ctx->pc = 0x80005B8Cu;
    // 80005B8C: .long   0x00000000
    // embedded data

label_80005B90:
    ctx->pc = 0x80005B90u;
    // 80005B90: .long   0x00000000
    // embedded data

label_80005B94:
    ctx->pc = 0x80005B94u;
    // 80005B94: .long   0x00000000
    // embedded data

label_80005B98:
    ctx->pc = 0x80005B98u;
    // 80005B98: .long   0x00000000
    // embedded data

label_80005B9C:
    ctx->pc = 0x80005B9Cu;
    // 80005B9C: .long   0x00000000
    // embedded data

label_80005BA0:
    ctx->pc = 0x80005BA0u;
    // 80005BA0: .long   0x00000000
    // embedded data

label_80005BA4:
    ctx->pc = 0x80005BA4u;
    // 80005BA4: .long   0x00000000
    // embedded data

label_80005BA8:
    ctx->pc = 0x80005BA8u;
    // 80005BA8: .long   0x00000000
    // embedded data

label_80005BAC:
    ctx->pc = 0x80005BACu;
    // 80005BAC: .long   0x00000000
    // embedded data

label_80005BB0:
    ctx->pc = 0x80005BB0u;
    // 80005BB0: .long   0x00000000
    // embedded data

label_80005BB4:
    ctx->pc = 0x80005BB4u;
    // 80005BB4: .long   0x00000000
    // embedded data

label_80005BB8:
    ctx->pc = 0x80005BB8u;
    // 80005BB8: .long   0x00000000
    // embedded data

label_80005BBC:
    ctx->pc = 0x80005BBCu;
    // 80005BBC: .long   0x00000000
    // embedded data

label_80005BC0:
    ctx->pc = 0x80005BC0u;
    // 80005BC0: .long   0x00000000
    // embedded data

label_80005BC4:
    ctx->pc = 0x80005BC4u;
    // 80005BC4: .long   0x00000000
    // embedded data

label_80005BC8:
    ctx->pc = 0x80005BC8u;
    // 80005BC8: .long   0x00000000
    // embedded data

label_80005BCC:
    ctx->pc = 0x80005BCCu;
    // 80005BCC: .long   0x00000000
    // embedded data

label_80005BD0:
    ctx->pc = 0x80005BD0u;
    // 80005BD0: .long   0x00000000
    // embedded data

label_80005BD4:
    ctx->pc = 0x80005BD4u;
    // 80005BD4: .long   0x00000000
    // embedded data

label_80005BD8:
    ctx->pc = 0x80005BD8u;
    // 80005BD8: .long   0x00000000
    // embedded data

label_80005BDC:
    ctx->pc = 0x80005BDCu;
    // 80005BDC: .long   0x00000000
    // embedded data

label_80005BE0:
    ctx->pc = 0x80005BE0u;
    // 80005BE0: .long   0x00000000
    // embedded data

label_80005BE4:
    ctx->pc = 0x80005BE4u;
    // 80005BE4: .long   0x00000000
    // embedded data

label_80005BE8:
    ctx->pc = 0x80005BE8u;
    // 80005BE8: .long   0x00000000
    // embedded data

label_80005BEC:
    ctx->pc = 0x80005BECu;
    // 80005BEC: .long   0x00000000
    // embedded data

label_80005BF0:
    ctx->pc = 0x80005BF0u;
    // 80005BF0: .long   0x00000000
    // embedded data

label_80005BF4:
    ctx->pc = 0x80005BF4u;
    // 80005BF4: .long   0x00000000
    // embedded data

label_80005BF8:
    ctx->pc = 0x80005BF8u;
    // 80005BF8: .long   0x00000000
    // embedded data

label_80005BFC:
    ctx->pc = 0x80005BFCu;
    // 80005BFC: .long   0x00000000
    // embedded data

label_80005C00:
    ctx->pc = 0x80005C00u;
    // 80005C00: .long   0x00000000
    // embedded data

label_80005C04:
    ctx->pc = 0x80005C04u;
    // 80005C04: .long   0x00000000
    // embedded data

label_80005C08:
    ctx->pc = 0x80005C08u;
    // 80005C08: .long   0x00000000
    // embedded data

label_80005C0C:
    ctx->pc = 0x80005C0Cu;
    // 80005C0C: .long   0x00000000
    // embedded data

label_80005C10:
    ctx->pc = 0x80005C10u;
    // 80005C10: .long   0x00000000
    // embedded data

label_80005C14:
    ctx->pc = 0x80005C14u;
    // 80005C14: .long   0x00000000
    // embedded data

label_80005C18:
    ctx->pc = 0x80005C18u;
    // 80005C18: .long   0x00000000
    // embedded data

label_80005C1C:
    ctx->pc = 0x80005C1Cu;
    // 80005C1C: .long   0x00000000
    // embedded data

label_80005C20:
    ctx->pc = 0x80005C20u;
    // 80005C20: .long   0x00000000
    // embedded data

label_80005C24:
    ctx->pc = 0x80005C24u;
    // 80005C24: .long   0x00000000
    // embedded data

label_80005C28:
    ctx->pc = 0x80005C28u;
    // 80005C28: .long   0x00000000
    // embedded data

label_80005C2C:
    ctx->pc = 0x80005C2Cu;
    // 80005C2C: .long   0x00000000
    // embedded data

label_80005C30:
    ctx->pc = 0x80005C30u;
    // 80005C30: .long   0x00000000
    // embedded data

label_80005C34:
    ctx->pc = 0x80005C34u;
    // 80005C34: .long   0x00000000
    // embedded data

label_80005C38:
    ctx->pc = 0x80005C38u;
    // 80005C38: .long   0x00000000
    // embedded data

label_80005C3C:
    ctx->pc = 0x80005C3Cu;
    // 80005C3C: .long   0x00000000
    // embedded data

label_80005C40:
    ctx->pc = 0x80005C40u;
    // 80005C40: .long   0x00000000
    // embedded data

label_80005C44:
    ctx->pc = 0x80005C44u;
    // 80005C44: .long   0x00000000
    // embedded data

label_80005C48:
    ctx->pc = 0x80005C48u;
    // 80005C48: .long   0x00000000
    // embedded data

label_80005C4C:
    ctx->pc = 0x80005C4Cu;
    // 80005C4C: .long   0x00000000
    // embedded data

label_80005C50:
    ctx->pc = 0x80005C50u;
    // 80005C50: .long   0x00000000
    // embedded data

label_80005C54:
    ctx->pc = 0x80005C54u;
    // 80005C54: .long   0x00000000
    // embedded data

label_80005C58:
    ctx->pc = 0x80005C58u;
    // 80005C58: .long   0x00000000
    // embedded data

label_80005C5C:
    ctx->pc = 0x80005C5Cu;
    // 80005C5C: .long   0x00000000
    // embedded data

label_80005C60:
    ctx->pc = 0x80005C60u;
    // 80005C60: .long   0x00000000
    // embedded data

label_80005C64:
    ctx->pc = 0x80005C64u;
    // 80005C64: .long   0x00000000
    // embedded data

label_80005C68:
    ctx->pc = 0x80005C68u;
    // 80005C68: .long   0x00000000
    // embedded data

label_80005C6C:
    ctx->pc = 0x80005C6Cu;
    // 80005C6C: .long   0x00000000
    // embedded data

label_80005C70:
    ctx->pc = 0x80005C70u;
    // 80005C70: .long   0x00000000
    // embedded data

label_80005C74:
    ctx->pc = 0x80005C74u;
    // 80005C74: .long   0x00000000
    // embedded data

label_80005C78:
    ctx->pc = 0x80005C78u;
    // 80005C78: .long   0x00000000
    // embedded data

label_80005C7C:
    ctx->pc = 0x80005C7Cu;
    // 80005C7C: .long   0x00000000
    // embedded data

label_80005C80:
    ctx->pc = 0x80005C80u;
    // 80005C80: .long   0x00000000
    // embedded data

label_80005C84:
    ctx->pc = 0x80005C84u;
    // 80005C84: .long   0x00000000
    // embedded data

label_80005C88:
    ctx->pc = 0x80005C88u;
    // 80005C88: .long   0x00000000
    // embedded data

label_80005C8C:
    ctx->pc = 0x80005C8Cu;
    // 80005C8C: .long   0x00000000
    // embedded data

label_80005C90:
    ctx->pc = 0x80005C90u;
    // 80005C90: .long   0x00000000
    // embedded data

label_80005C94:
    ctx->pc = 0x80005C94u;
    // 80005C94: .long   0x00000000
    // embedded data

label_80005C98:
    ctx->pc = 0x80005C98u;
    // 80005C98: .long   0x00000000
    // embedded data

label_80005C9C:
    ctx->pc = 0x80005C9Cu;
    // 80005C9C: .long   0x00000000
    // embedded data

label_80005CA0:
    ctx->pc = 0x80005CA0u;
    // 80005CA0: .long   0x00000000
    // embedded data

label_80005CA4:
    ctx->pc = 0x80005CA4u;
    // 80005CA4: .long   0x00000000
    // embedded data

label_80005CA8:
    ctx->pc = 0x80005CA8u;
    // 80005CA8: .long   0x00000000
    // embedded data

label_80005CAC:
    ctx->pc = 0x80005CACu;
    // 80005CAC: .long   0x00000000
    // embedded data

label_80005CB0:
    ctx->pc = 0x80005CB0u;
    // 80005CB0: .long   0x00000000
    // embedded data

label_80005CB4:
    ctx->pc = 0x80005CB4u;
    // 80005CB4: .long   0x00000000
    // embedded data

label_80005CB8:
    ctx->pc = 0x80005CB8u;
    // 80005CB8: .long   0x00000000
    // embedded data

label_80005CBC:
    ctx->pc = 0x80005CBCu;
    // 80005CBC: .long   0x00000000
    // embedded data

label_80005CC0:
    ctx->pc = 0x80005CC0u;
    // 80005CC0: .long   0x00000000
    // embedded data

label_80005CC4:
    ctx->pc = 0x80005CC4u;
    // 80005CC4: .long   0x00000000
    // embedded data

label_80005CC8:
    ctx->pc = 0x80005CC8u;
    // 80005CC8: .long   0x00000000
    // embedded data

label_80005CCC:
    ctx->pc = 0x80005CCCu;
    // 80005CCC: .long   0x00000000
    // embedded data

label_80005CD0:
    ctx->pc = 0x80005CD0u;
    // 80005CD0: .long   0x00000000
    // embedded data

label_80005CD4:
    ctx->pc = 0x80005CD4u;
    // 80005CD4: .long   0x00000000
    // embedded data

label_80005CD8:
    ctx->pc = 0x80005CD8u;
    // 80005CD8: .long   0x00000000
    // embedded data

label_80005CDC:
    ctx->pc = 0x80005CDCu;
    // 80005CDC: .long   0x00000000
    // embedded data

label_80005CE0:
    ctx->pc = 0x80005CE0u;
    // 80005CE0: .long   0x00000000
    // embedded data

label_80005CE4:
    ctx->pc = 0x80005CE4u;
    // 80005CE4: .long   0x00000000
    // embedded data

label_80005CE8:
    ctx->pc = 0x80005CE8u;
    // 80005CE8: .long   0x00000000
    // embedded data

label_80005CEC:
    ctx->pc = 0x80005CECu;
    // 80005CEC: .long   0x00000000
    // embedded data

label_80005CF0:
    ctx->pc = 0x80005CF0u;
    // 80005CF0: .long   0x00000000
    // embedded data

label_80005CF4:
    ctx->pc = 0x80005CF4u;
    // 80005CF4: .long   0x00000000
    // embedded data

label_80005CF8:
    ctx->pc = 0x80005CF8u;
    // 80005CF8: .long   0x00000000
    // embedded data

label_80005CFC:
    ctx->pc = 0x80005CFCu;
    // 80005CFC: .long   0x00000000
    // embedded data

label_80005D00:
    ctx->pc = 0x80005D00u;
    // 80005D00: .long   0x00000000
    // embedded data

label_80005D04:
    ctx->pc = 0x80005D04u;
    // 80005D04: .long   0x00000000
    // embedded data

label_80005D08:
    ctx->pc = 0x80005D08u;
    // 80005D08: .long   0x00000000
    // embedded data

label_80005D0C:
    ctx->pc = 0x80005D0Cu;
    // 80005D0C: .long   0x00000000
    // embedded data

label_80005D10:
    ctx->pc = 0x80005D10u;
    // 80005D10: .long   0x00000000
    // embedded data

label_80005D14:
    ctx->pc = 0x80005D14u;
    // 80005D14: .long   0x00000000
    // embedded data

label_80005D18:
    ctx->pc = 0x80005D18u;
    // 80005D18: .long   0x00000000
    // embedded data

label_80005D1C:
    ctx->pc = 0x80005D1Cu;
    // 80005D1C: .long   0x00000000
    // embedded data

label_80005D20:
    ctx->pc = 0x80005D20u;
    // 80005D20: .long   0x00000000
    // embedded data

label_80005D24:
    ctx->pc = 0x80005D24u;
    // 80005D24: .long   0x00000000
    // embedded data

label_80005D28:
    ctx->pc = 0x80005D28u;
    // 80005D28: .long   0x00000000
    // embedded data

label_80005D2C:
    ctx->pc = 0x80005D2Cu;
    // 80005D2C: .long   0x00000000
    // embedded data

label_80005D30:
    ctx->pc = 0x80005D30u;
    // 80005D30: .long   0x00000000
    // embedded data

label_80005D34:
    ctx->pc = 0x80005D34u;
    // 80005D34: .long   0x00000000
    // embedded data

label_80005D38:
    ctx->pc = 0x80005D38u;
    // 80005D38: .long   0x00000000
    // embedded data

label_80005D3C:
    ctx->pc = 0x80005D3Cu;
    // 80005D3C: .long   0x00000000
    // embedded data

label_80005D40:
    ctx->pc = 0x80005D40u;
    // 80005D40: .long   0x00000000
    // embedded data

label_80005D44:
    ctx->pc = 0x80005D44u;
    // 80005D44: .long   0x00000000
    // embedded data

label_80005D48:
    ctx->pc = 0x80005D48u;
    // 80005D48: .long   0x00000000
    // embedded data

label_80005D4C:
    ctx->pc = 0x80005D4Cu;
    // 80005D4C: .long   0x00000000
    // embedded data

label_80005D50:
    ctx->pc = 0x80005D50u;
    // 80005D50: .long   0x00000000
    // embedded data

label_80005D54:
    ctx->pc = 0x80005D54u;
    // 80005D54: .long   0x00000000
    // embedded data

label_80005D58:
    ctx->pc = 0x80005D58u;
    // 80005D58: .long   0x00000000
    // embedded data

label_80005D5C:
    ctx->pc = 0x80005D5Cu;
    // 80005D5C: .long   0x00000000
    // embedded data

label_80005D60:
    ctx->pc = 0x80005D60u;
    // 80005D60: .long   0x00000000
    // embedded data

label_80005D64:
    ctx->pc = 0x80005D64u;
    // 80005D64: .long   0x00000000
    // embedded data

label_80005D68:
    ctx->pc = 0x80005D68u;
    // 80005D68: .long   0x00000000
    // embedded data

label_80005D6C:
    ctx->pc = 0x80005D6Cu;
    // 80005D6C: .long   0x00000000
    // embedded data

label_80005D70:
    ctx->pc = 0x80005D70u;
    // 80005D70: .long   0x00000000
    // embedded data

label_80005D74:
    ctx->pc = 0x80005D74u;
    // 80005D74: .long   0x00000000
    // embedded data

label_80005D78:
    ctx->pc = 0x80005D78u;
    // 80005D78: .long   0x00000000
    // embedded data

label_80005D7C:
    ctx->pc = 0x80005D7Cu;
    // 80005D7C: .long   0x00000000
    // embedded data

label_80005D80:
    ctx->pc = 0x80005D80u;
    // 80005D80: .long   0x00000000
    // embedded data

label_80005D84:
    ctx->pc = 0x80005D84u;
    // 80005D84: .long   0x00000000
    // embedded data

label_80005D88:
    ctx->pc = 0x80005D88u;
    // 80005D88: .long   0x00000000
    // embedded data

label_80005D8C:
    ctx->pc = 0x80005D8Cu;
    // 80005D8C: .long   0x00000000
    // embedded data

label_80005D90:
    ctx->pc = 0x80005D90u;
    // 80005D90: .long   0x00000000
    // embedded data

label_80005D94:
    ctx->pc = 0x80005D94u;
    // 80005D94: .long   0x00000000
    // embedded data

label_80005D98:
    ctx->pc = 0x80005D98u;
    // 80005D98: .long   0x00000000
    // embedded data

label_80005D9C:
    ctx->pc = 0x80005D9Cu;
    // 80005D9C: .long   0x00000000
    // embedded data

label_80005DA0:
    ctx->pc = 0x80005DA0u;
    // 80005DA0: .long   0x00000000
    // embedded data

label_80005DA4:
    ctx->pc = 0x80005DA4u;
    // 80005DA4: .long   0x00000000
    // embedded data

label_80005DA8:
    ctx->pc = 0x80005DA8u;
    // 80005DA8: .long   0x00000000
    // embedded data

label_80005DAC:
    ctx->pc = 0x80005DACu;
    // 80005DAC: .long   0x00000000
    // embedded data

label_80005DB0:
    ctx->pc = 0x80005DB0u;
    // 80005DB0: .long   0x00000000
    // embedded data

label_80005DB4:
    ctx->pc = 0x80005DB4u;
    // 80005DB4: .long   0x00000000
    // embedded data

label_80005DB8:
    ctx->pc = 0x80005DB8u;
    // 80005DB8: .long   0x00000000
    // embedded data

label_80005DBC:
    ctx->pc = 0x80005DBCu;
    // 80005DBC: .long   0x00000000
    // embedded data

label_80005DC0:
    ctx->pc = 0x80005DC0u;
    // 80005DC0: .long   0x00000000
    // embedded data

label_80005DC4:
    ctx->pc = 0x80005DC4u;
    // 80005DC4: .long   0x00000000
    // embedded data

label_80005DC8:
    ctx->pc = 0x80005DC8u;
    // 80005DC8: .long   0x00000000
    // embedded data

label_80005DCC:
    ctx->pc = 0x80005DCCu;
    // 80005DCC: .long   0x00000000
    // embedded data

label_80005DD0:
    ctx->pc = 0x80005DD0u;
    // 80005DD0: .long   0x00000000
    // embedded data

label_80005DD4:
    ctx->pc = 0x80005DD4u;
    // 80005DD4: .long   0x00000000
    // embedded data

label_80005DD8:
    ctx->pc = 0x80005DD8u;
    // 80005DD8: .long   0x00000000
    // embedded data

label_80005DDC:
    ctx->pc = 0x80005DDCu;
    // 80005DDC: .long   0x00000000
    // embedded data

label_80005DE0:
    ctx->pc = 0x80005DE0u;
    // 80005DE0: .long   0x00000000
    // embedded data

label_80005DE4:
    ctx->pc = 0x80005DE4u;
    // 80005DE4: .long   0x00000000
    // embedded data

label_80005DE8:
    ctx->pc = 0x80005DE8u;
    // 80005DE8: .long   0x00000000
    // embedded data

label_80005DEC:
    ctx->pc = 0x80005DECu;
    // 80005DEC: .long   0x00000000
    // embedded data

label_80005DF0:
    ctx->pc = 0x80005DF0u;
    // 80005DF0: .long   0x00000000
    // embedded data

label_80005DF4:
    ctx->pc = 0x80005DF4u;
    // 80005DF4: .long   0x00000000
    // embedded data

label_80005DF8:
    ctx->pc = 0x80005DF8u;
    // 80005DF8: .long   0x00000000
    // embedded data

label_80005DFC:
    ctx->pc = 0x80005DFCu;
    // 80005DFC: .long   0x00000000
    // embedded data

label_80005E00:
    ctx->pc = 0x80005E00u;
    // 80005E00: .long   0x00000000
    // embedded data

label_80005E04:
    ctx->pc = 0x80005E04u;
    // 80005E04: .long   0x00000000
    // embedded data

label_80005E08:
    ctx->pc = 0x80005E08u;
    // 80005E08: .long   0x00000000
    // embedded data

label_80005E0C:
    ctx->pc = 0x80005E0Cu;
    // 80005E0C: .long   0x00000000
    // embedded data

label_80005E10:
    ctx->pc = 0x80005E10u;
    // 80005E10: .long   0x00000000
    // embedded data

label_80005E14:
    ctx->pc = 0x80005E14u;
    // 80005E14: .long   0x00000000
    // embedded data

label_80005E18:
    ctx->pc = 0x80005E18u;
    // 80005E18: .long   0x00000000
    // embedded data

label_80005E1C:
    ctx->pc = 0x80005E1Cu;
    // 80005E1C: .long   0x00000000
    // embedded data

label_80005E20:
    ctx->pc = 0x80005E20u;
    // 80005E20: .long   0x00000000
    // embedded data

label_80005E24:
    ctx->pc = 0x80005E24u;
    // 80005E24: .long   0x00000000
    // embedded data

label_80005E28:
    ctx->pc = 0x80005E28u;
    // 80005E28: .long   0x00000000
    // embedded data

label_80005E2C:
    ctx->pc = 0x80005E2Cu;
    // 80005E2C: .long   0x00000000
    // embedded data

label_80005E30:
    ctx->pc = 0x80005E30u;
    // 80005E30: .long   0x00000000
    // embedded data

label_80005E34:
    ctx->pc = 0x80005E34u;
    // 80005E34: .long   0x00000000
    // embedded data

label_80005E38:
    ctx->pc = 0x80005E38u;
    // 80005E38: .long   0x00000000
    // embedded data

label_80005E3C:
    ctx->pc = 0x80005E3Cu;
    // 80005E3C: .long   0x00000000
    // embedded data

label_80005E40:
    ctx->pc = 0x80005E40u;
    // 80005E40: .long   0x00000000
    // embedded data

label_80005E44:
    ctx->pc = 0x80005E44u;
    // 80005E44: .long   0x00000000
    // embedded data

label_80005E48:
    ctx->pc = 0x80005E48u;
    // 80005E48: .long   0x00000000
    // embedded data

label_80005E4C:
    ctx->pc = 0x80005E4Cu;
    // 80005E4C: .long   0x00000000
    // embedded data

label_80005E50:
    ctx->pc = 0x80005E50u;
    // 80005E50: .long   0x00000000
    // embedded data

label_80005E54:
    ctx->pc = 0x80005E54u;
    // 80005E54: .long   0x00000000
    // embedded data

label_80005E58:
    ctx->pc = 0x80005E58u;
    // 80005E58: .long   0x00000000
    // embedded data

label_80005E5C:
    ctx->pc = 0x80005E5Cu;
    // 80005E5C: .long   0x00000000
    // embedded data

label_80005E60:
    ctx->pc = 0x80005E60u;
    // 80005E60: .long   0x00000000
    // embedded data

label_80005E64:
    ctx->pc = 0x80005E64u;
    // 80005E64: .long   0x00000000
    // embedded data

label_80005E68:
    ctx->pc = 0x80005E68u;
    // 80005E68: .long   0x00000000
    // embedded data

label_80005E6C:
    ctx->pc = 0x80005E6Cu;
    // 80005E6C: .long   0x00000000
    // embedded data

label_80005E70:
    ctx->pc = 0x80005E70u;
    // 80005E70: .long   0x00000000
    // embedded data

label_80005E74:
    ctx->pc = 0x80005E74u;
    // 80005E74: .long   0x00000000
    // embedded data

label_80005E78:
    ctx->pc = 0x80005E78u;
    // 80005E78: .long   0x00000000
    // embedded data

label_80005E7C:
    ctx->pc = 0x80005E7Cu;
    // 80005E7C: .long   0x00000000
    // embedded data

label_80005E80:
    ctx->pc = 0x80005E80u;
    // 80005E80: .long   0x00000000
    // embedded data

label_80005E84:
    ctx->pc = 0x80005E84u;
    // 80005E84: .long   0x00000000
    // embedded data

label_80005E88:
    ctx->pc = 0x80005E88u;
    // 80005E88: .long   0x00000000
    // embedded data

label_80005E8C:
    ctx->pc = 0x80005E8Cu;
    // 80005E8C: .long   0x00000000
    // embedded data

label_80005E90:
    ctx->pc = 0x80005E90u;
    // 80005E90: .long   0x00000000
    // embedded data

label_80005E94:
    ctx->pc = 0x80005E94u;
    // 80005E94: .long   0x00000000
    // embedded data

label_80005E98:
    ctx->pc = 0x80005E98u;
    // 80005E98: .long   0x00000000
    // embedded data

label_80005E9C:
    ctx->pc = 0x80005E9Cu;
    // 80005E9C: .long   0x00000000
    // embedded data

label_80005EA0:
    ctx->pc = 0x80005EA0u;
    // 80005EA0: .long   0x00000000
    // embedded data

label_80005EA4:
    ctx->pc = 0x80005EA4u;
    // 80005EA4: .long   0x00000000
    // embedded data

label_80005EA8:
    ctx->pc = 0x80005EA8u;
    // 80005EA8: .long   0x00000000
    // embedded data

label_80005EAC:
    ctx->pc = 0x80005EACu;
    // 80005EAC: .long   0x00000000
    // embedded data

label_80005EB0:
    ctx->pc = 0x80005EB0u;
    // 80005EB0: .long   0x00000000
    // embedded data

label_80005EB4:
    ctx->pc = 0x80005EB4u;
    // 80005EB4: .long   0x00000000
    // embedded data

label_80005EB8:
    ctx->pc = 0x80005EB8u;
    // 80005EB8: .long   0x00000000
    // embedded data

label_80005EBC:
    ctx->pc = 0x80005EBCu;
    // 80005EBC: .long   0x00000000
    // embedded data

label_80005EC0:
    ctx->pc = 0x80005EC0u;
    // 80005EC0: .long   0x00000000
    // embedded data

label_80005EC4:
    ctx->pc = 0x80005EC4u;
    // 80005EC4: .long   0x00000000
    // embedded data

label_80005EC8:
    ctx->pc = 0x80005EC8u;
    // 80005EC8: .long   0x00000000
    // embedded data

label_80005ECC:
    ctx->pc = 0x80005ECCu;
    // 80005ECC: .long   0x00000000
    // embedded data

label_80005ED0:
    ctx->pc = 0x80005ED0u;
    // 80005ED0: .long   0x00000000
    // embedded data

label_80005ED4:
    ctx->pc = 0x80005ED4u;
    // 80005ED4: .long   0x00000000
    // embedded data

label_80005ED8:
    ctx->pc = 0x80005ED8u;
    // 80005ED8: .long   0x00000000
    // embedded data

label_80005EDC:
    ctx->pc = 0x80005EDCu;
    // 80005EDC: .long   0x00000000
    // embedded data

label_80005EE0:
    ctx->pc = 0x80005EE0u;
    // 80005EE0: .long   0x00000000
    // embedded data

label_80005EE4:
    ctx->pc = 0x80005EE4u;
    // 80005EE4: .long   0x00000000
    // embedded data

label_80005EE8:
    ctx->pc = 0x80005EE8u;
    // 80005EE8: .long   0x00000000
    // embedded data

label_80005EEC:
    ctx->pc = 0x80005EECu;
    // 80005EEC: .long   0x00000000
    // embedded data

label_80005EF0:
    ctx->pc = 0x80005EF0u;
    // 80005EF0: .long   0x00000000
    // embedded data

label_80005EF4:
    ctx->pc = 0x80005EF4u;
    // 80005EF4: .long   0x00000000
    // embedded data

label_80005EF8:
    ctx->pc = 0x80005EF8u;
    // 80005EF8: .long   0x00000000
    // embedded data

label_80005EFC:
    ctx->pc = 0x80005EFCu;
    // 80005EFC: .long   0x00000000
    // embedded data

label_80005F00:
    ctx->pc = 0x80005F00u;
    // 80005F00: .long   0x00000000
    // embedded data

label_80005F04:
    ctx->pc = 0x80005F04u;
    // 80005F04: .long   0x00000000
    // embedded data

label_80005F08:
    ctx->pc = 0x80005F08u;
    // 80005F08: .long   0x00000000
    // embedded data

label_80005F0C:
    ctx->pc = 0x80005F0Cu;
    // 80005F0C: .long   0x00000000
    // embedded data

label_80005F10:
    ctx->pc = 0x80005F10u;
    // 80005F10: .long   0x00000000
    // embedded data

label_80005F14:
    ctx->pc = 0x80005F14u;
    // 80005F14: .long   0x00000000
    // embedded data

label_80005F18:
    ctx->pc = 0x80005F18u;
    // 80005F18: .long   0x00000000
    // embedded data

label_80005F1C:
    ctx->pc = 0x80005F1Cu;
    // 80005F1C: .long   0x00000000
    // embedded data

label_80005F20:
    ctx->pc = 0x80005F20u;
    // 80005F20: .long   0x00000000
    // embedded data

label_80005F24:
    ctx->pc = 0x80005F24u;
    // 80005F24: .long   0x00000000
    // embedded data

label_80005F28:
    ctx->pc = 0x80005F28u;
    // 80005F28: .long   0x00000000
    // embedded data

label_80005F2C:
    ctx->pc = 0x80005F2Cu;
    // 80005F2C: .long   0x00000000
    // embedded data

label_80005F30:
    ctx->pc = 0x80005F30u;
    // 80005F30: .long   0x00000000
    // embedded data

label_80005F34:
    ctx->pc = 0x80005F34u;
    // 80005F34: .long   0x00000000
    // embedded data

label_80005F38:
    ctx->pc = 0x80005F38u;
    // 80005F38: .long   0x00000000
    // embedded data

label_80005F3C:
    ctx->pc = 0x80005F3Cu;
    // 80005F3C: .long   0x00000000
    // embedded data

label_80005F40:
    ctx->pc = 0x80005F40u;
    // 80005F40: .long   0x00000000
    // embedded data

label_80005F44:
    ctx->pc = 0x80005F44u;
    // 80005F44: .long   0x00000000
    // embedded data

label_80005F48:
    ctx->pc = 0x80005F48u;
    // 80005F48: .long   0x00000000
    // embedded data

label_80005F4C:
    ctx->pc = 0x80005F4Cu;
    // 80005F4C: .long   0x00000000
    // embedded data

label_80005F50:
    ctx->pc = 0x80005F50u;
    // 80005F50: .long   0x00000000
    // embedded data

label_80005F54:
    ctx->pc = 0x80005F54u;
    // 80005F54: .long   0x00000000
    // embedded data

label_80005F58:
    ctx->pc = 0x80005F58u;
    // 80005F58: .long   0x00000000
    // embedded data

label_80005F5C:
    ctx->pc = 0x80005F5Cu;
    // 80005F5C: .long   0x00000000
    // embedded data

label_80005F60:
    ctx->pc = 0x80005F60u;
    // 80005F60: .long   0x00000000
    // embedded data

label_80005F64:
    ctx->pc = 0x80005F64u;
    // 80005F64: .long   0x00000000
    // embedded data

label_80005F68:
    ctx->pc = 0x80005F68u;
    // 80005F68: .long   0x00000000
    // embedded data

label_80005F6C:
    ctx->pc = 0x80005F6Cu;
    // 80005F6C: .long   0x00000000
    // embedded data

label_80005F70:
    ctx->pc = 0x80005F70u;
    // 80005F70: .long   0x00000000
    // embedded data

label_80005F74:
    ctx->pc = 0x80005F74u;
    // 80005F74: .long   0x00000000
    // embedded data

label_80005F78:
    ctx->pc = 0x80005F78u;
    // 80005F78: .long   0x00000000
    // embedded data

label_80005F7C:
    ctx->pc = 0x80005F7Cu;
    // 80005F7C: .long   0x00000000
    // embedded data

label_80005F80:
    ctx->pc = 0x80005F80u;
    // 80005F80: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80005F80u);
    return;

label_80005F84:
    ctx->pc = 0x80005F84u;
    // 80005F84: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80005F84u);
    return;

label_80005F88:
    ctx->pc = 0x80005F88u;
    // 80005F88: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80005F88u);
    return;

label_80005F8C:
    ctx->pc = 0x80005F8Cu;
    ctx->downcount -= 13;
    // 80005F8C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80005F90:
    ctx->pc = 0x80005F90u;
    // 80005F90: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80005F94:
    ctx->pc = 0x80005F94u;
    // 80005F94: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80005F98:
    ctx->pc = 0x80005F98u;
    // 80005F98: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_80005F9C:
    ctx->pc = 0x80005F9Cu;
    // 80005F9C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_80005FA0:
    ctx->pc = 0x80005FA0u;
    // 80005FA0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_80005FA4:
    ctx->pc = 0x80005FA4u;
    // 80005FA4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_80005FA8:
    ctx->pc = 0x80005FA8u;
    // 80005FA8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_80005FAC:
    ctx->pc = 0x80005FACu;
    // 80005FAC: li      r3, 7168
    ctx->gpr[3] = (u32)(s32)(7168);

label_80005FB0:
    ctx->pc = 0x80005FB0u;
    // 80005FB0: rfi
    ppc_rfi(ctx, 0x80005FB0u);
    return;

label_80005FB4:
    ctx->pc = 0x80005FB4u;
    // 80005FB4: .long   0x00000000
    // embedded data

label_80005FB8:
    ctx->pc = 0x80005FB8u;
    // 80005FB8: .long   0x00000000
    // embedded data

label_80005FBC:
    ctx->pc = 0x80005FBCu;
    // 80005FBC: .long   0x00000000
    // embedded data

label_80005FC0:
    ctx->pc = 0x80005FC0u;
    // 80005FC0: .long   0x00000000
    // embedded data

label_80005FC4:
    ctx->pc = 0x80005FC4u;
    // 80005FC4: .long   0x00000000
    // embedded data

label_80005FC8:
    ctx->pc = 0x80005FC8u;
    // 80005FC8: .long   0x00000000
    // embedded data

label_80005FCC:
    ctx->pc = 0x80005FCCu;
    // 80005FCC: .long   0x00000000
    // embedded data

label_80005FD0:
    ctx->pc = 0x80005FD0u;
    // 80005FD0: .long   0x00000000
    // embedded data

label_80005FD4:
    ctx->pc = 0x80005FD4u;
    // 80005FD4: .long   0x00000000
    // embedded data

label_80005FD8:
    ctx->pc = 0x80005FD8u;
    // 80005FD8: .long   0x00000000
    // embedded data

label_80005FDC:
    ctx->pc = 0x80005FDCu;
    // 80005FDC: .long   0x00000000
    // embedded data

label_80005FE0:
    ctx->pc = 0x80005FE0u;
    // 80005FE0: .long   0x00000000
    // embedded data

label_80005FE4:
    ctx->pc = 0x80005FE4u;
    // 80005FE4: .long   0x00000000
    // embedded data

label_80005FE8:
    ctx->pc = 0x80005FE8u;
    // 80005FE8: .long   0x00000000
    // embedded data

label_80005FEC:
    ctx->pc = 0x80005FECu;
    // 80005FEC: .long   0x00000000
    // embedded data

label_80005FF0:
    ctx->pc = 0x80005FF0u;
    // 80005FF0: .long   0x00000000
    // embedded data

label_80005FF4:
    ctx->pc = 0x80005FF4u;
    // 80005FF4: .long   0x00000000
    // embedded data

label_80005FF8:
    ctx->pc = 0x80005FF8u;
    // 80005FF8: .long   0x00000000
    // embedded data

label_80005FFC:
    ctx->pc = 0x80005FFCu;
    // 80005FFC: .long   0x00000000
    // embedded data

label_80006000:
    ctx->pc = 0x80006000u;
    // 80006000: .long   0x00000000
    // embedded data

label_80006004:
    ctx->pc = 0x80006004u;
    // 80006004: .long   0x00000000
    // embedded data

label_80006008:
    ctx->pc = 0x80006008u;
    // 80006008: .long   0x00000000
    // embedded data

label_8000600C:
    ctx->pc = 0x8000600Cu;
    // 8000600C: .long   0x00000000
    // embedded data

label_80006010:
    ctx->pc = 0x80006010u;
    // 80006010: .long   0x00000000
    // embedded data

label_80006014:
    ctx->pc = 0x80006014u;
    // 80006014: .long   0x00000000
    // embedded data

label_80006018:
    ctx->pc = 0x80006018u;
    // 80006018: .long   0x00000000
    // embedded data

label_8000601C:
    ctx->pc = 0x8000601Cu;
    // 8000601C: .long   0x00000000
    // embedded data

label_80006020:
    ctx->pc = 0x80006020u;
    // 80006020: .long   0x00000000
    // embedded data

label_80006024:
    ctx->pc = 0x80006024u;
    // 80006024: .long   0x00000000
    // embedded data

label_80006028:
    ctx->pc = 0x80006028u;
    // 80006028: .long   0x00000000
    // embedded data

label_8000602C:
    ctx->pc = 0x8000602Cu;
    // 8000602C: .long   0x00000000
    // embedded data

label_80006030:
    ctx->pc = 0x80006030u;
    // 80006030: .long   0x00000000
    // embedded data

label_80006034:
    ctx->pc = 0x80006034u;
    // 80006034: .long   0x00000000
    // embedded data

label_80006038:
    ctx->pc = 0x80006038u;
    // 80006038: .long   0x00000000
    // embedded data

label_8000603C:
    ctx->pc = 0x8000603Cu;
    // 8000603C: .long   0x00000000
    // embedded data

label_80006040:
    ctx->pc = 0x80006040u;
    // 80006040: .long   0x00000000
    // embedded data

label_80006044:
    ctx->pc = 0x80006044u;
    // 80006044: .long   0x00000000
    // embedded data

label_80006048:
    ctx->pc = 0x80006048u;
    // 80006048: .long   0x00000000
    // embedded data

label_8000604C:
    ctx->pc = 0x8000604Cu;
    // 8000604C: .long   0x00000000
    // embedded data

label_80006050:
    ctx->pc = 0x80006050u;
    // 80006050: .long   0x00000000
    // embedded data

label_80006054:
    ctx->pc = 0x80006054u;
    // 80006054: .long   0x00000000
    // embedded data

label_80006058:
    ctx->pc = 0x80006058u;
    // 80006058: .long   0x00000000
    // embedded data

label_8000605C:
    ctx->pc = 0x8000605Cu;
    // 8000605C: .long   0x00000000
    // embedded data

label_80006060:
    ctx->pc = 0x80006060u;
    // 80006060: .long   0x00000000
    // embedded data

label_80006064:
    ctx->pc = 0x80006064u;
    // 80006064: .long   0x00000000
    // embedded data

label_80006068:
    ctx->pc = 0x80006068u;
    // 80006068: .long   0x00000000
    // embedded data

label_8000606C:
    ctx->pc = 0x8000606Cu;
    // 8000606C: .long   0x00000000
    // embedded data

label_80006070:
    ctx->pc = 0x80006070u;
    // 80006070: .long   0x00000000
    // embedded data

label_80006074:
    ctx->pc = 0x80006074u;
    // 80006074: .long   0x00000000
    // embedded data

label_80006078:
    ctx->pc = 0x80006078u;
    // 80006078: .long   0x00000000
    // embedded data

label_8000607C:
    ctx->pc = 0x8000607Cu;
    // 8000607C: .long   0x00000000
    // embedded data

label_80006080:
    ctx->pc = 0x80006080u;
    // 80006080: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80006080u);
    return;

label_80006084:
    ctx->pc = 0x80006084u;
    // 80006084: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80006084u);
    return;

label_80006088:
    ctx->pc = 0x80006088u;
    // 80006088: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80006088u);
    return;

label_8000608C:
    ctx->pc = 0x8000608Cu;
    ctx->downcount -= 13;
    // 8000608C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80006090:
    ctx->pc = 0x80006090u;
    // 80006090: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80006094:
    ctx->pc = 0x80006094u;
    // 80006094: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80006098:
    ctx->pc = 0x80006098u;
    // 80006098: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000609C:
    ctx->pc = 0x8000609Cu;
    // 8000609C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800060A0:
    ctx->pc = 0x800060A0u;
    // 800060A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800060A4:
    ctx->pc = 0x800060A4u;
    // 800060A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800060A8:
    ctx->pc = 0x800060A8u;
    // 800060A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800060AC:
    ctx->pc = 0x800060ACu;
    // 800060AC: li      r3, 7424
    ctx->gpr[3] = (u32)(s32)(7424);

label_800060B0:
    ctx->pc = 0x800060B0u;
    // 800060B0: rfi
    ppc_rfi(ctx, 0x800060B0u);
    return;

label_800060B4:
    ctx->pc = 0x800060B4u;
    // 800060B4: .long   0x00000000
    // embedded data

label_800060B8:
    ctx->pc = 0x800060B8u;
    // 800060B8: .long   0x00000000
    // embedded data

label_800060BC:
    ctx->pc = 0x800060BCu;
    // 800060BC: .long   0x00000000
    // embedded data

label_800060C0:
    ctx->pc = 0x800060C0u;
    // 800060C0: .long   0x00000000
    // embedded data

label_800060C4:
    ctx->pc = 0x800060C4u;
    // 800060C4: .long   0x00000000
    // embedded data

label_800060C8:
    ctx->pc = 0x800060C8u;
    // 800060C8: .long   0x00000000
    // embedded data

label_800060CC:
    ctx->pc = 0x800060CCu;
    // 800060CC: .long   0x00000000
    // embedded data

label_800060D0:
    ctx->pc = 0x800060D0u;
    // 800060D0: .long   0x00000000
    // embedded data

label_800060D4:
    ctx->pc = 0x800060D4u;
    // 800060D4: .long   0x00000000
    // embedded data

label_800060D8:
    ctx->pc = 0x800060D8u;
    // 800060D8: .long   0x00000000
    // embedded data

label_800060DC:
    ctx->pc = 0x800060DCu;
    // 800060DC: .long   0x00000000
    // embedded data

label_800060E0:
    ctx->pc = 0x800060E0u;
    // 800060E0: .long   0x00000000
    // embedded data

label_800060E4:
    ctx->pc = 0x800060E4u;
    // 800060E4: .long   0x00000000
    // embedded data

label_800060E8:
    ctx->pc = 0x800060E8u;
    // 800060E8: .long   0x00000000
    // embedded data

label_800060EC:
    ctx->pc = 0x800060ECu;
    // 800060EC: .long   0x00000000
    // embedded data

label_800060F0:
    ctx->pc = 0x800060F0u;
    // 800060F0: .long   0x00000000
    // embedded data

label_800060F4:
    ctx->pc = 0x800060F4u;
    // 800060F4: .long   0x00000000
    // embedded data

label_800060F8:
    ctx->pc = 0x800060F8u;
    // 800060F8: .long   0x00000000
    // embedded data

label_800060FC:
    ctx->pc = 0x800060FCu;
    // 800060FC: .long   0x00000000
    // embedded data

label_80006100:
    ctx->pc = 0x80006100u;
    // 80006100: .long   0x00000000
    // embedded data

label_80006104:
    ctx->pc = 0x80006104u;
    // 80006104: .long   0x00000000
    // embedded data

label_80006108:
    ctx->pc = 0x80006108u;
    // 80006108: .long   0x00000000
    // embedded data

label_8000610C:
    ctx->pc = 0x8000610Cu;
    // 8000610C: .long   0x00000000
    // embedded data

label_80006110:
    ctx->pc = 0x80006110u;
    // 80006110: .long   0x00000000
    // embedded data

label_80006114:
    ctx->pc = 0x80006114u;
    // 80006114: .long   0x00000000
    // embedded data

label_80006118:
    ctx->pc = 0x80006118u;
    // 80006118: .long   0x00000000
    // embedded data

label_8000611C:
    ctx->pc = 0x8000611Cu;
    // 8000611C: .long   0x00000000
    // embedded data

label_80006120:
    ctx->pc = 0x80006120u;
    // 80006120: .long   0x00000000
    // embedded data

label_80006124:
    ctx->pc = 0x80006124u;
    // 80006124: .long   0x00000000
    // embedded data

label_80006128:
    ctx->pc = 0x80006128u;
    // 80006128: .long   0x00000000
    // embedded data

label_8000612C:
    ctx->pc = 0x8000612Cu;
    // 8000612C: .long   0x00000000
    // embedded data

label_80006130:
    ctx->pc = 0x80006130u;
    // 80006130: .long   0x00000000
    // embedded data

label_80006134:
    ctx->pc = 0x80006134u;
    // 80006134: .long   0x00000000
    // embedded data

label_80006138:
    ctx->pc = 0x80006138u;
    // 80006138: .long   0x00000000
    // embedded data

label_8000613C:
    ctx->pc = 0x8000613Cu;
    // 8000613C: .long   0x00000000
    // embedded data

label_80006140:
    ctx->pc = 0x80006140u;
    // 80006140: .long   0x00000000
    // embedded data

label_80006144:
    ctx->pc = 0x80006144u;
    // 80006144: .long   0x00000000
    // embedded data

label_80006148:
    ctx->pc = 0x80006148u;
    // 80006148: .long   0x00000000
    // embedded data

label_8000614C:
    ctx->pc = 0x8000614Cu;
    // 8000614C: .long   0x00000000
    // embedded data

label_80006150:
    ctx->pc = 0x80006150u;
    // 80006150: .long   0x00000000
    // embedded data

label_80006154:
    ctx->pc = 0x80006154u;
    // 80006154: .long   0x00000000
    // embedded data

label_80006158:
    ctx->pc = 0x80006158u;
    // 80006158: .long   0x00000000
    // embedded data

label_8000615C:
    ctx->pc = 0x8000615Cu;
    // 8000615C: .long   0x00000000
    // embedded data

label_80006160:
    ctx->pc = 0x80006160u;
    // 80006160: .long   0x00000000
    // embedded data

label_80006164:
    ctx->pc = 0x80006164u;
    // 80006164: .long   0x00000000
    // embedded data

label_80006168:
    ctx->pc = 0x80006168u;
    // 80006168: .long   0x00000000
    // embedded data

label_8000616C:
    ctx->pc = 0x8000616Cu;
    // 8000616C: .long   0x00000000
    // embedded data

label_80006170:
    ctx->pc = 0x80006170u;
    // 80006170: .long   0x00000000
    // embedded data

label_80006174:
    ctx->pc = 0x80006174u;
    // 80006174: .long   0x00000000
    // embedded data

label_80006178:
    ctx->pc = 0x80006178u;
    // 80006178: .long   0x00000000
    // embedded data

label_8000617C:
    ctx->pc = 0x8000617Cu;
    // 8000617C: .long   0x00000000
    // embedded data

label_80006180:
    ctx->pc = 0x80006180u;
    // 80006180: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80006180u);
    return;

label_80006184:
    ctx->pc = 0x80006184u;
    // 80006184: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80006184u);
    return;

label_80006188:
    ctx->pc = 0x80006188u;
    // 80006188: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80006188u);
    return;

label_8000618C:
    ctx->pc = 0x8000618Cu;
    ctx->downcount -= 13;
    // 8000618C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80006190:
    ctx->pc = 0x80006190u;
    // 80006190: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80006194:
    ctx->pc = 0x80006194u;
    // 80006194: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80006198:
    ctx->pc = 0x80006198u;
    // 80006198: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000619C:
    ctx->pc = 0x8000619Cu;
    // 8000619C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800061A0:
    ctx->pc = 0x800061A0u;
    // 800061A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800061A4:
    ctx->pc = 0x800061A4u;
    // 800061A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800061A8:
    ctx->pc = 0x800061A8u;
    // 800061A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800061AC:
    ctx->pc = 0x800061ACu;
    // 800061AC: li      r3, 7680
    ctx->gpr[3] = (u32)(s32)(7680);

label_800061B0:
    ctx->pc = 0x800061B0u;
    // 800061B0: rfi
    ppc_rfi(ctx, 0x800061B0u);
    return;

label_800061B4:
    ctx->pc = 0x800061B4u;
    // 800061B4: .long   0x00000000
    // embedded data

label_800061B8:
    ctx->pc = 0x800061B8u;
    // 800061B8: .long   0x00000000
    // embedded data

label_800061BC:
    ctx->pc = 0x800061BCu;
    // 800061BC: .long   0x00000000
    // embedded data

label_800061C0:
    ctx->pc = 0x800061C0u;
    // 800061C0: .long   0x00000000
    // embedded data

label_800061C4:
    ctx->pc = 0x800061C4u;
    // 800061C4: .long   0x00000000
    // embedded data

label_800061C8:
    ctx->pc = 0x800061C8u;
    // 800061C8: .long   0x00000000
    // embedded data

label_800061CC:
    ctx->pc = 0x800061CCu;
    // 800061CC: .long   0x00000000
    // embedded data

label_800061D0:
    ctx->pc = 0x800061D0u;
    // 800061D0: .long   0x00000000
    // embedded data

label_800061D4:
    ctx->pc = 0x800061D4u;
    // 800061D4: .long   0x00000000
    // embedded data

label_800061D8:
    ctx->pc = 0x800061D8u;
    // 800061D8: .long   0x00000000
    // embedded data

label_800061DC:
    ctx->pc = 0x800061DCu;
    // 800061DC: .long   0x00000000
    // embedded data

label_800061E0:
    ctx->pc = 0x800061E0u;
    // 800061E0: .long   0x00000000
    // embedded data

label_800061E4:
    ctx->pc = 0x800061E4u;
    // 800061E4: .long   0x00000000
    // embedded data

label_800061E8:
    ctx->pc = 0x800061E8u;
    // 800061E8: .long   0x00000000
    // embedded data

label_800061EC:
    ctx->pc = 0x800061ECu;
    // 800061EC: .long   0x00000000
    // embedded data

label_800061F0:
    ctx->pc = 0x800061F0u;
    // 800061F0: .long   0x00000000
    // embedded data

label_800061F4:
    ctx->pc = 0x800061F4u;
    // 800061F4: .long   0x00000000
    // embedded data

label_800061F8:
    ctx->pc = 0x800061F8u;
    // 800061F8: .long   0x00000000
    // embedded data

label_800061FC:
    ctx->pc = 0x800061FCu;
    // 800061FC: .long   0x00000000
    // embedded data

label_80006200:
    ctx->pc = 0x80006200u;
    // 80006200: .long   0x00000000
    // embedded data

label_80006204:
    ctx->pc = 0x80006204u;
    // 80006204: .long   0x00000000
    // embedded data

label_80006208:
    ctx->pc = 0x80006208u;
    // 80006208: .long   0x00000000
    // embedded data

label_8000620C:
    ctx->pc = 0x8000620Cu;
    // 8000620C: .long   0x00000000
    // embedded data

label_80006210:
    ctx->pc = 0x80006210u;
    // 80006210: .long   0x00000000
    // embedded data

label_80006214:
    ctx->pc = 0x80006214u;
    // 80006214: .long   0x00000000
    // embedded data

label_80006218:
    ctx->pc = 0x80006218u;
    // 80006218: .long   0x00000000
    // embedded data

label_8000621C:
    ctx->pc = 0x8000621Cu;
    // 8000621C: .long   0x00000000
    // embedded data

label_80006220:
    ctx->pc = 0x80006220u;
    // 80006220: .long   0x00000000
    // embedded data

label_80006224:
    ctx->pc = 0x80006224u;
    // 80006224: .long   0x00000000
    // embedded data

label_80006228:
    ctx->pc = 0x80006228u;
    // 80006228: .long   0x00000000
    // embedded data

label_8000622C:
    ctx->pc = 0x8000622Cu;
    // 8000622C: .long   0x00000000
    // embedded data

label_80006230:
    ctx->pc = 0x80006230u;
    // 80006230: .long   0x00000000
    // embedded data

label_80006234:
    ctx->pc = 0x80006234u;
    // 80006234: .long   0x00000000
    // embedded data

label_80006238:
    ctx->pc = 0x80006238u;
    // 80006238: .long   0x00000000
    // embedded data

label_8000623C:
    ctx->pc = 0x8000623Cu;
    // 8000623C: .long   0x00000000
    // embedded data

label_80006240:
    ctx->pc = 0x80006240u;
    // 80006240: .long   0x00000000
    // embedded data

label_80006244:
    ctx->pc = 0x80006244u;
    // 80006244: .long   0x00000000
    // embedded data

label_80006248:
    ctx->pc = 0x80006248u;
    // 80006248: .long   0x00000000
    // embedded data

label_8000624C:
    ctx->pc = 0x8000624Cu;
    // 8000624C: .long   0x00000000
    // embedded data

label_80006250:
    ctx->pc = 0x80006250u;
    // 80006250: .long   0x00000000
    // embedded data

label_80006254:
    ctx->pc = 0x80006254u;
    // 80006254: .long   0x00000000
    // embedded data

label_80006258:
    ctx->pc = 0x80006258u;
    // 80006258: .long   0x00000000
    // embedded data

label_8000625C:
    ctx->pc = 0x8000625Cu;
    // 8000625C: .long   0x00000000
    // embedded data

label_80006260:
    ctx->pc = 0x80006260u;
    // 80006260: .long   0x00000000
    // embedded data

label_80006264:
    ctx->pc = 0x80006264u;
    // 80006264: .long   0x00000000
    // embedded data

label_80006268:
    ctx->pc = 0x80006268u;
    // 80006268: .long   0x00000000
    // embedded data

label_8000626C:
    ctx->pc = 0x8000626Cu;
    // 8000626C: .long   0x00000000
    // embedded data

label_80006270:
    ctx->pc = 0x80006270u;
    // 80006270: .long   0x00000000
    // embedded data

label_80006274:
    ctx->pc = 0x80006274u;
    // 80006274: .long   0x00000000
    // embedded data

label_80006278:
    ctx->pc = 0x80006278u;
    // 80006278: .long   0x00000000
    // embedded data

label_8000627C:
    ctx->pc = 0x8000627Cu;
    // 8000627C: .long   0x00000000
    // embedded data

label_80006280:
    ctx->pc = 0x80006280u;
    // 80006280: mtsprg1    r2
    ppc_fallback_instruction(ctx, 0x7C5143A6u, 0x80006280u);
    return;

label_80006284:
    ctx->pc = 0x80006284u;
    // 80006284: mtsprg2    r3
    ppc_fallback_instruction(ctx, 0x7C7243A6u, 0x80006284u);
    return;

label_80006288:
    ctx->pc = 0x80006288u;
    // 80006288: mtsprg3    r4
    ppc_fallback_instruction(ctx, 0x7C9343A6u, 0x80006288u);
    return;

label_8000628C:
    ctx->pc = 0x8000628Cu;
    ctx->downcount -= 13;
    // 8000628C: mfsrr0    r2
    ctx->gpr[2] = ctx->srr0;

label_80006290:
    ctx->pc = 0x80006290u;
    // 80006290: mfsrr1    r4
    ctx->gpr[4] = ctx->srr1;

label_80006294:
    ctx->pc = 0x80006294u;
    // 80006294: mfmsr   r3
    ctx->gpr[3] = ctx->msr;

label_80006298:
    ctx->pc = 0x80006298u;
    // 80006298: ori     r3, r3, 0x0030
    ctx->gpr[3] = ctx->gpr[3] | 0x0030u;

label_8000629C:
    ctx->pc = 0x8000629Cu;
    // 8000629C: mtsrr1    r3
    ctx->srr1 = ctx->gpr[3];

label_800062A0:
    ctx->pc = 0x800062A0u;
    // 800062A0: lis     r3, -32767
    ctx->gpr[3] = ((u32)(s32)(-32767) << 16);

label_800062A4:
    ctx->pc = 0x800062A4u;
    // 800062A4: ori     r3, r3, 0xB1D8
    ctx->gpr[3] = ctx->gpr[3] | 0xB1D8u;

label_800062A8:
    ctx->pc = 0x800062A8u;
    // 800062A8: mtsrr0    r3
    ctx->srr0 = ctx->gpr[3];

label_800062AC:
    ctx->pc = 0x800062ACu;
    // 800062AC: li      r3, 7936
    ctx->gpr[3] = (u32)(s32)(7936);

label_800062B0:
    ctx->pc = 0x800062B0u;
    // 800062B0: rfi
    ppc_rfi(ctx, 0x800062B0u);
    return;

label_800062B4:
    ctx->pc = 0x800062B4u;
    // 800062B4: .long   0x00000000
    // embedded data

label_800062B8:
    ctx->pc = 0x800062B8u;
    // 800062B8: .long   0x00000000
    // embedded data

label_800062BC:
    ctx->pc = 0x800062BCu;
    // 800062BC: .long   0x00000000
    // embedded data

label_800062C0:
    ctx->pc = 0x800062C0u;
    ctx->downcount -= 5;
    // 800062C0: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_800062C4:
    ctx->pc = 0x800062C4u;
    // 800062C4: lhz     r0, 12516(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12516);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_800062C8:
    ctx->pc = 0x800062C8u;
    // 800062C8: andi.   r0, r0, 0x0EEF
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x0EEFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_800062CC:
    ctx->pc = 0x800062CCu;
    // 800062CC: cmpwi   r0, 3823
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(3823);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800062D0:
    ctx->pc = 0x800062D0u;
    // 800062D0: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800062D4:
    ctx->pc = 0x800062D4u;
    ctx->downcount -= 4;
    // 800062D4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_800062D8:
    ctx->pc = 0x800062D8u;
    // 800062D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_800062DC:
    ctx->pc = 0x800062DCu;
    // 800062DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_800062E0:
    ctx->pc = 0x800062E0u;
    // 800062E0: b       0x8004CE50
    {
            ctx->pc = 0x8004CE50u;
            return;
    }

label_800062E4:
    ctx->pc = 0x800062E4u;
    ctx->downcount -= 1;
    // 800062E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800062E8:
    ctx->pc = 0x800062E8u;
    // 800062E8: .long   0x00000000
    // embedded data

label_800062EC:
    ctx->pc = 0x800062ECu;
    // 800062EC: .long   0x00000000
    // embedded data

label_800062F0:
    ctx->pc = 0x800062F0u;
    ctx->downcount -= 3;
    // 800062F0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_800062F4:
    ctx->pc = 0x800062F4u;
    // 800062F4: stb     r0, -16392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-16392);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_800062F8:
    ctx->pc = 0x800062F8u;
    // 800062F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800062FC:
    ctx->pc = 0x800062FCu;
    // 800062FC: .long   0x00000000
    // embedded data

label_80006300:
    ctx->pc = 0x80006300u;
    ctx->downcount -= 2;
    // 80006300: lbz     r3, -16392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-16392);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80006304:
    ctx->pc = 0x80006304u;
    // 80006304: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80006308:
    ctx->pc = 0x80006308u;
    // 80006308: .long   0x00000000
    // embedded data

label_8000630C:
    ctx->pc = 0x8000630Cu;
    // 8000630C: .long   0x00000000
    // embedded data

label_80006310:
    ctx->pc = 0x80006310u;
    // 80006310: bl      0x80006480
    {
            ctx->lr = 0x80006314u;
            goto label_80006480;
    }

label_80006314:
    ctx->pc = 0x80006314u;
    ctx->downcount -= 1;
    // 80006314: bl      0x800065C0
    {
            ctx->lr = 0x80006318u;
            goto label_800065C0;
    }

label_80006318:
    ctx->pc = 0x80006318u;
    ctx->downcount -= 5;
    // 80006318: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8000631C:
    ctx->pc = 0x8000631Cu;
    // 8000631C: stwu     r1, -8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-8);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006320:
    ctx->pc = 0x80006320u;
    // 80006320: stw     r0, 4(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006324:
    ctx->pc = 0x80006324u;
    // 80006324: stw     r0, 0(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80006328:
    ctx->pc = 0x80006328u;
    // 80006328: bl      0x80006510
    {
            ctx->lr = 0x8000632Cu;
            goto label_80006510;
    }

label_8000632C:
    ctx->pc = 0x8000632Cu;
    ctx->downcount -= 9;
    // 8000632C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80006330:
    ctx->pc = 0x80006330u;
    // 80006330: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_80006334:
    ctx->pc = 0x80006334u;
    // 80006334: addi    r6, r6, 68
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(68);

label_80006338:
    ctx->pc = 0x80006338u;
    // 80006338: stw     r0, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000633C:
    ctx->pc = 0x8000633Cu;
    // 8000633C: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_80006340:
    ctx->pc = 0x80006340u;
    // 80006340: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_80006344:
    ctx->pc = 0x80006344u;
    // 80006344: lwz     r6, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80006348:
    ctx->pc = 0x80006348u;
    // 80006348: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000634C:
    ctx->pc = 0x8000634Cu;
    // 8000634C: bc    12, 2, 0x80006358
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006358;
        }
    }

label_80006350:
    ctx->pc = 0x80006350u;
    ctx->downcount -= 2;
    // 80006350: lwz     r7, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80006354:
    ctx->pc = 0x80006354u;
    // 80006354: b       0x80006378
    {
            goto label_80006378;
    }

label_80006358:
    ctx->pc = 0x80006358u;
    ctx->downcount -= 5;
    // 80006358: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_8000635C:
    ctx->pc = 0x8000635Cu;
    // 8000635C: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80006360:
    ctx->pc = 0x80006360u;
    // 80006360: lwz     r5, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80006364:
    ctx->pc = 0x80006364u;
    // 80006364: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006368:
    ctx->pc = 0x80006368u;
    // 80006368: bc    12, 2, 0x800063B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800063B4;
        }
    }

label_8000636C:
    ctx->pc = 0x8000636Cu;
    ctx->downcount -= 3;
    // 8000636C: lis     r7, -32768
    ctx->gpr[7] = ((u32)(s32)(-32768) << 16);

label_80006370:
    ctx->pc = 0x80006370u;
    // 80006370: addi    r7, r7, 12520
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(12520);

label_80006374:
    ctx->pc = 0x80006374u;
    // 80006374: lwz     r7, 0(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80006378:
    ctx->pc = 0x80006378u;
    ctx->downcount -= 3;
    // 80006378: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8000637C:
    ctx->pc = 0x8000637Cu;
    // 8000637C: cmplwi  r7, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006380:
    ctx->pc = 0x80006380u;
    // 80006380: bc    12, 2, 0x800063A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800063A4;
        }
    }

label_80006384:
    ctx->pc = 0x80006384u;
    ctx->downcount -= 3;
    // 80006384: cmplwi  r7, 0x0003
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0003u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006388:
    ctx->pc = 0x80006388u;
    // 80006388: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8000638C:
    ctx->pc = 0x8000638Cu;
    // 8000638C: bc    12, 2, 0x800063A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_800063A4;
        }
    }

label_80006390:
    ctx->pc = 0x80006390u;
    ctx->downcount -= 2;
    // 80006390: cmplwi  r7, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[7]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006394:
    ctx->pc = 0x80006394u;
    // 80006394: bc    4, 2, 0x800063B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_800063B4;
        }
    }

label_80006398:
    ctx->pc = 0x80006398u;
    ctx->downcount -= 2;
    // 80006398: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8000639C:
    ctx->pc = 0x8000639Cu;
    // 8000639C: bl      0x800062F0
    {
            ctx->lr = 0x800063A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800062F0u;
                return;
            }
            goto label_800062F0;
    }

label_800063A0:
    ctx->pc = 0x800063A0u;
    ctx->downcount -= 1;
    // 800063A0: b       0x800063B4
    {
            goto label_800063B4;
    }

label_800063A4:
    ctx->pc = 0x800063A4u;
    ctx->downcount -= 5;
    // 800063A4: lis     r6, -32767
    ctx->gpr[6] = ((u32)(s32)(-32767) << 16);

label_800063A8:
    ctx->pc = 0x800063A8u;
    // 800063A8: addi    r6, r6, 31500
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(31500);

label_800063AC:
    ctx->pc = 0x800063ACu;
    // 800063AC: mtlr    r6
    ctx->lr = ctx->gpr[6];

label_800063B0:
    ctx->pc = 0x800063B0u;
    // 800063B0: blrl
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x800063B4u;
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800063B4:
    ctx->pc = 0x800063B4u;
    ctx->downcount -= 5;
    // 800063B4: lis     r6, -32768
    ctx->gpr[6] = ((u32)(s32)(-32768) << 16);

label_800063B8:
    ctx->pc = 0x800063B8u;
    // 800063B8: addi    r6, r6, 244
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(244);

label_800063BC:
    ctx->pc = 0x800063BCu;
    // 800063BC: lwz     r5, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_800063C0:
    ctx->pc = 0x800063C0u;
    // 800063C0: cmplwi  r5, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800063C4:
    ctx->pc = 0x800063C4u;
    // 800063C4: bc    13, 2, 0x80006424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006424;
        }
    }

label_800063C8:
    ctx->pc = 0x800063C8u;
    ctx->downcount -= 3;
    // 800063C8: lwz     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_800063CC:
    ctx->pc = 0x800063CCu;
    // 800063CC: cmplwi  r6, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[6]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800063D0:
    ctx->pc = 0x800063D0u;
    // 800063D0: bc    13, 2, 0x80006424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006424;
        }
    }

label_800063D4:
    ctx->pc = 0x800063D4u;
    ctx->downcount -= 4;
    // 800063D4: add   r6, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_800063D8:
    ctx->pc = 0x800063D8u;
    // 800063D8: lwz     r14, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[14] = mem_read32(ctx, ea);
    }

label_800063DC:
    ctx->pc = 0x800063DCu;
    // 800063DC: cmplwi  r14, 0x0000
    {
        u32 val_a = (u32)(ctx->gpr[14]);
        u32 val_b = (u32)(0x0000u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_800063E0:
    ctx->pc = 0x800063E0u;
    // 800063E0: bc    12, 2, 0x80006424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006424;
        }
    }

label_800063E4:
    ctx->pc = 0x800063E4u;
    ctx->downcount -= 3;
    // 800063E4: addi    r15, r6, 4
    ctx->gpr[15] = ctx->gpr[6] + (u32)(s32)(4);

label_800063E8:
    ctx->pc = 0x800063E8u;
    // 800063E8: mtctr    r14
    ctx->ctr = ctx->gpr[14];

label_800063EC:
    loop_800063EC(ctx);
    if (ctx->pc == 0x80006400u) goto label_80006400;
    return;
label_800063F0:
    ctx->pc = 0x800063F0u;
    // 800063F0: lwz     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_800063F4:
    // 800063F4: add   r7, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_800063F8:
    ctx->pc = 0x800063F8u;
    // 800063F8: stw     r7, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_800063FC:
    // 800063FC: bc    16, 0, 0x800063EC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800063ECu;
                return;
            }
            goto label_800063EC;
        }
    }

label_80006400:
    ctx->pc = 0x80006400u;
    ctx->downcount -= 9;
    // 80006400: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_80006404:
    ctx->pc = 0x80006404u;
    // 80006404: addi    r5, r5, 52
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(52);

label_80006408:
    ctx->pc = 0x80006408u;
    // 80006408: rlwinm r7, r15, 0, 0, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[15], 0u) & 0xFFFFFFE0u;
    }

label_8000640C:
    ctx->pc = 0x8000640Cu;
    // 8000640C: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80006410:
    ctx->pc = 0x80006410u;
    // 80006410: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_80006414:
    ctx->pc = 0x80006414u;
    // 80006414: addi    r5, r5, 12560
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(12560);

label_80006418:
    ctx->pc = 0x80006418u;
    // 80006418: rlwinm r7, r15, 0, 0, 26
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[15], 0u) & 0xFFFFFFE0u;
    }

label_8000641C:
    ctx->pc = 0x8000641Cu;
    // 8000641C: stw     r7, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80006420:
    ctx->pc = 0x80006420u;
    // 80006420: b       0x8000642C
    {
            goto label_8000642C;
    }

label_80006424:
    ctx->pc = 0x80006424u;
    ctx->downcount -= 2;
    // 80006424: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_80006428:
    ctx->pc = 0x80006428u;
    // 80006428: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_8000642C:
    ctx->pc = 0x8000642Cu;
    ctx->downcount -= 1;
    // 8000642C: bl      0x800999A0
    {
            ctx->lr = 0x80006430u;
            ctx->pc = 0x800999A0u;
            return;
    }

label_80006430:
    ctx->pc = 0x80006430u;
    ctx->downcount -= 1;
    // 80006430: bl      0x80044460
    {
            ctx->lr = 0x80006434u;
            ctx->pc = 0x80044460u;
            return;
    }

label_80006434:
    ctx->pc = 0x80006434u;
    ctx->downcount -= 5;
    // 80006434: lis     r4, -32768
    ctx->gpr[4] = ((u32)(s32)(-32768) << 16);

label_80006438:
    ctx->pc = 0x80006438u;
    // 80006438: addi    r4, r4, 12518
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12518);

label_8000643C:
    ctx->pc = 0x8000643Cu;
    // 8000643C: lhz     r3, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_80006440:
    ctx->pc = 0x80006440u;
    // 80006440: andi.   r5, r3, 0x8000
    {
        ctx->gpr[5] = ctx->gpr[3] & 0x8000u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[5];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006444:
    ctx->pc = 0x80006444u;
    // 80006444: bc    12, 2, 0x80006454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006454;
        }
    }

label_80006448:
    ctx->pc = 0x80006448u;
    ctx->downcount -= 3;
    // 80006448: andi.   r3, r3, 0x7FFF
    {
        ctx->gpr[3] = ctx->gpr[3] & 0x7FFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[3];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8000644C:
    ctx->pc = 0x8000644Cu;
    // 8000644C: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006450:
    ctx->pc = 0x80006450u;
    // 80006450: bc    4, 2, 0x80006458
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006458;
        }
    }

label_80006454:
    ctx->pc = 0x80006454u;
    ctx->downcount -= 1;
    // 80006454: bl      0x800062C0
    {
            ctx->lr = 0x80006458u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x800062C0u;
                return;
            }
            goto label_800062C0;
    }

label_80006458:
    ctx->pc = 0x80006458u;
    ctx->downcount -= 1;
    // 80006458: bl      0x80006300
    {
            ctx->lr = 0x8000645Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006300u;
                return;
            }
            goto label_80006300;
    }

label_8000645C:
    ctx->pc = 0x8000645Cu;
    ctx->downcount -= 2;
    // 8000645C: cmplwi  r3, 0x0001
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0001u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80006460:
    ctx->pc = 0x80006460u;
    // 80006460: bc    4, 2, 0x80006468
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80006468;
        }
    }

label_80006464:
    ctx->pc = 0x80006464u;
    ctx->downcount -= 1;
    // 80006464: bl      0x80017BA4
    {
            ctx->lr = 0x80006468u;
            ctx->pc = 0x80017BA4u;
            return;
    }

label_80006468:
    ctx->pc = 0x80006468u;
    ctx->downcount -= 1;
    // 80006468: bl      0x800523F0
    {
            ctx->lr = 0x8000646Cu;
            ctx->pc = 0x800523F0u;
            return;
    }

label_8000646C:
    ctx->pc = 0x8000646Cu;
    ctx->downcount -= 3;
    // 8000646C: or   r3, r14, r14
    {
        ctx->gpr[3] = ctx->gpr[14] | ctx->gpr[14];
    }

label_80006470:
    ctx->pc = 0x80006470u;
    // 80006470: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_80006474:
    ctx->pc = 0x80006474u;
    // 80006474: bl      0x8022E3A8
    {
            ctx->lr = 0x80006478u;
            ctx->pc = 0x8022E3A8u;
            return;
    }

label_80006478:
    ctx->pc = 0x80006478u;
    ctx->downcount -= 1;
    // 80006478: b       0x80052460
    {
            ctx->pc = 0x80052460u;
            return;
    }

label_8000647C:
    ctx->pc = 0x8000647Cu;
    // 8000647C: .long   0x00000000
    // embedded data

label_80006480:
    ctx->pc = 0x80006480u;
    ctx->downcount -= 36;
    // 80006480: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80006484:
    ctx->pc = 0x80006484u;
    // 80006484: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80006488:
    ctx->pc = 0x80006488u;
    // 80006488: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8000648C:
    ctx->pc = 0x8000648Cu;
    // 8000648C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80006490:
    ctx->pc = 0x80006490u;
    // 80006490: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80006494:
    ctx->pc = 0x80006494u;
    // 80006494: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80006498:
    ctx->pc = 0x80006498u;
    // 80006498: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8000649C:
    ctx->pc = 0x8000649Cu;
    // 8000649C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_800064A0:
    ctx->pc = 0x800064A0u;
    // 800064A0: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_800064A4:
    ctx->pc = 0x800064A4u;
    // 800064A4: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_800064A8:
    ctx->pc = 0x800064A8u;
    // 800064A8: li      r12, 0
    ctx->gpr[12] = (u32)(s32)(0);

label_800064AC:
    ctx->pc = 0x800064ACu;
    // 800064AC: li      r14, 0
    ctx->gpr[14] = (u32)(s32)(0);

label_800064B0:
    ctx->pc = 0x800064B0u;
    // 800064B0: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_800064B4:
    ctx->pc = 0x800064B4u;
    // 800064B4: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_800064B8:
    ctx->pc = 0x800064B8u;
    // 800064B8: li      r17, 0
    ctx->gpr[17] = (u32)(s32)(0);

label_800064BC:
    ctx->pc = 0x800064BCu;
    // 800064BC: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_800064C0:
    ctx->pc = 0x800064C0u;
    // 800064C0: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_800064C4:
    ctx->pc = 0x800064C4u;
    // 800064C4: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_800064C8:
    ctx->pc = 0x800064C8u;
    // 800064C8: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_800064CC:
    ctx->pc = 0x800064CCu;
    // 800064CC: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_800064D0:
    ctx->pc = 0x800064D0u;
    // 800064D0: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_800064D4:
    ctx->pc = 0x800064D4u;
    // 800064D4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_800064D8:
    ctx->pc = 0x800064D8u;
    // 800064D8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_800064DC:
    ctx->pc = 0x800064DCu;
    // 800064DC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_800064E0:
    ctx->pc = 0x800064E0u;
    // 800064E0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_800064E4:
    ctx->pc = 0x800064E4u;
    // 800064E4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_800064E8:
    ctx->pc = 0x800064E8u;
    // 800064E8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_800064EC:
    ctx->pc = 0x800064ECu;
    // 800064EC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_800064F0:
    ctx->pc = 0x800064F0u;
    // 800064F0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_800064F4:
    ctx->pc = 0x800064F4u;
    // 800064F4: lis     r1, -32642
    ctx->gpr[1] = ((u32)(s32)(-32642) << 16);

label_800064F8:
    ctx->pc = 0x800064F8u;
    // 800064F8: ori     r1, r1, 0x6978
    ctx->gpr[1] = ctx->gpr[1] | 0x6978u;

label_800064FC:
    ctx->pc = 0x800064FCu;
    // 800064FC: lis     r2, -32657
    ctx->gpr[2] = ((u32)(s32)(-32657) << 16);

label_80006500:
    ctx->pc = 0x80006500u;
    // 80006500: ori     r2, r2, 0xE080
    ctx->gpr[2] = ctx->gpr[2] | 0xE080u;

label_80006504:
    ctx->pc = 0x80006504u;
    // 80006504: lis     r13, -32657
    ctx->gpr[13] = ((u32)(s32)(-32657) << 16);

label_80006508:
    ctx->pc = 0x80006508u;
    // 80006508: ori     r13, r13, 0x8120
    ctx->gpr[13] = ctx->gpr[13] | 0x8120u;

label_8000650C:
    ctx->pc = 0x8000650Cu;
    // 8000650C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80006510:
    ctx->pc = 0x80006510u;
    ctx->downcount -= 8;
    // 80006510: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80006514:
    ctx->pc = 0x80006514u;
    // 80006514: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80006518:
    ctx->pc = 0x80006518u;
    // 80006518: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8000651C:
    ctx->pc = 0x8000651Cu;
    // 8000651C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80006520:
    ctx->pc = 0x80006520u;
    // 80006520: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80006524:
    ctx->pc = 0x80006524u;
    // 80006524: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80006528:
    ctx->pc = 0x80006528u;
    // 80006528: lis     r29, -32768
    ctx->gpr[29] = ((u32)(s32)(-32768) << 16);

label_8000652C:
    ctx->pc = 0x8000652Cu;
    // 8000652C: addi    r29, r29, 26148
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(26148);

label_80006530:
    ctx->pc = 0x80006530u;
    ctx->downcount -= 3;
    // 80006530: lwz     r30, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80006534:
    // 80006534: cmpwi   r30, 0
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

label_80006538:
    // 80006538: bc    12, 2, 0x80006570
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006570;
        }
    }

label_8000653C:
    ctx->pc = 0x8000653Cu;
    ctx->downcount -= 3;
    // 8000653C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80006540:
    ctx->pc = 0x80006540u;
    // 80006540: lwz     r31, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80006544:
    // 80006544: bc    12, 2, 0x80006568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006568;
        }
    }

label_80006548:
    ctx->downcount -= 2;
    // 80006548: cmplw   r31, r4
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8000654C:
    // 8000654C: bc    12, 2, 0x80006568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006568;
        }
    }

label_80006550:
    ctx->downcount -= 3;
    // 80006550: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006554:
    // 80006554: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006558:
    // 80006558: bl      0x80004000
    {
            ctx->lr = 0x8000655Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004000u;
                return;
            }
            goto label_80004000;
    }

label_8000655C:
    ctx->downcount -= 3;
    // 8000655C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80006560:
    // 80006560: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80006564:
    // 80006564: bl      0x800065F0
    {
            ctx->lr = 0x80006568u;
            goto label_800065F0;
    }

label_80006568:
    ctx->downcount -= 2;
    // 80006568: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_8000656C:
    // 8000656C: b       0x80006530
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006530u;
                return;
            }
            goto label_80006530;
    }

label_80006570:
    ctx->pc = 0x80006570u;
    ctx->downcount -= 2;
    // 80006570: lis     r29, -32768
    ctx->gpr[29] = ((u32)(s32)(-32768) << 16);

label_80006574:
    ctx->pc = 0x80006574u;
    // 80006574: addi    r29, r29, 26292
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(26292);

label_80006578:
    ctx->pc = 0x80006578u;
    ctx->downcount -= 3;
    // 80006578: lwz     r5, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8000657C:
    // 8000657C: cmpwi   r5, 0
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

label_80006580:
    // 80006580: bc    12, 2, 0x8000659C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8000659C;
        }
    }

label_80006584:
    ctx->pc = 0x80006584u;
    ctx->downcount -= 2;
    // 80006584: lwz     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006588:
    // 80006588: bc    12, 2, 0x80006594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80006594;
        }
    }

label_8000658C:
    ctx->downcount -= 2;
    // 8000658C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80006590:
    // 80006590: bl      0x80004350
    {
            ctx->lr = 0x80006594u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80004350u;
                return;
            }
            goto label_80004350;
    }

label_80006594:
    ctx->downcount -= 2;
    // 80006594: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_80006598:
    // 80006598: b       0x80006578
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006578u;
                return;
            }
            goto label_80006578;
    }

label_8000659C:
    ctx->pc = 0x8000659Cu;
    ctx->downcount -= 8;
    // 8000659C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_800065A0:
    ctx->pc = 0x800065A0u;
    // 800065A0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_800065A4:
    ctx->pc = 0x800065A4u;
    // 800065A4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_800065A8:
    ctx->pc = 0x800065A8u;
    // 800065A8: lwz     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_800065AC:
    ctx->pc = 0x800065ACu;
    // 800065AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_800065B0:
    ctx->pc = 0x800065B0u;
    // 800065B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_800065B4:
    ctx->pc = 0x800065B4u;
    // 800065B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800065B8:
    ctx->pc = 0x800065B8u;
    // 800065B8: .long   0x00000000
    // embedded data

label_800065BC:
    ctx->pc = 0x800065BCu;
    // 800065BC: .long   0x00000000
    // embedded data

label_800065C0:
    ctx->pc = 0x800065C0u;
    ctx->downcount -= 5;
    // 800065C0: mfmsr   r0
    ctx->gpr[0] = ctx->msr;

label_800065C4:
    ctx->pc = 0x800065C4u;
    // 800065C4: ori     r0, r0, 0x2000
    ctx->gpr[0] = ctx->gpr[0] | 0x2000u;

label_800065C8:
    ctx->pc = 0x800065C8u;
    // 800065C8: mtmsr   r0
    ctx->msr = ctx->gpr[0];

label_800065CC:
    ctx->pc = 0x800065CCu;
    // 800065CC: mflr    r31
    ctx->gpr[31] = ctx->lr;

label_800065D0:
    ctx->pc = 0x800065D0u;
    // 800065D0: bl      0x80044DB0
    {
            ctx->lr = 0x800065D4u;
            ctx->pc = 0x80044DB0u;
            return;
    }

label_800065D4:
    ctx->pc = 0x800065D4u;
    ctx->downcount -= 1;
    // 800065D4: bl      0x800439A0
    {
            ctx->lr = 0x800065D8u;
            ctx->pc = 0x800439A0u;
            return;
    }

label_800065D8:
    ctx->pc = 0x800065D8u;
    ctx->downcount -= 1;
    // 800065D8: bl      0x80046600
    {
            ctx->lr = 0x800065DCu;
            ctx->pc = 0x80046600u;
            return;
    }

label_800065DC:
    ctx->pc = 0x800065DCu;
    ctx->downcount -= 3;
    // 800065DC: mtlr    r31
    ctx->lr = ctx->gpr[31];

label_800065E0:
    ctx->pc = 0x800065E0u;
    // 800065E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_800065E4:
    ctx->pc = 0x800065E4u;
    // 800065E4: .long   0x00000000
    // embedded data

label_800065E8:
    ctx->pc = 0x800065E8u;
    // 800065E8: .long   0x00000000
    // embedded data

label_800065EC:
    ctx->pc = 0x800065ECu;
    // 800065EC: .long   0x00000000
    // embedded data

label_800065F0:
    ctx->pc = 0x800065F0u;
    ctx->downcount -= 5;
    // 800065F0: lis     r5, -1
    ctx->gpr[5] = ((u32)(s32)(-1) << 16);

label_800065F4:
    ctx->pc = 0x800065F4u;
    // 800065F4: ori     r5, r5, 0xFFF1
    ctx->gpr[5] = ctx->gpr[5] | 0xFFF1u;

label_800065F8:
    ctx->pc = 0x800065F8u;
    // 800065F8: and   r5, r5, r3
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[3];
    }

label_800065FC:
    ctx->pc = 0x800065FCu;
    // 800065FC: subf   r3, r5, r3
    {
        u32 a = ~ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_80006600:
    ctx->pc = 0x80006600u;
    // 80006600: add   r4, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80006604:
    ctx->pc = 0x80006604u;
    // 80006604: dcbst    0, r5
    ppc_fallback_instruction(ctx, 0x7C00286Cu, 0x80006604u);
    return;

label_80006608:
    ctx->pc = 0x80006608u;
    ctx->downcount -= 3;
    // 80006608: sync
    ppc_memory_fence();

label_8000660C:
    ctx->pc = 0x8000660Cu;
    // 8000660C: icbi    0, r5
    ppc_fallback_instruction(ctx, 0x7C002FACu, 0x8000660Cu);
    return;

label_80006610:
    ctx->downcount -= 3;
    // 80006610: addic   r5, r5, 8
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(8);
        u64 res = a + b;
        ctx->gpr[5] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80006614:
    // 80006614: addic.  r4, r4, -8
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-8);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[4];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80006618:
    // 80006618: bc    4, 0, 0x80006604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80006604u;
                return;
            }
            goto label_80006604;
        }
    }

label_8000661C:
    ctx->pc = 0x8000661Cu;
    ctx->downcount -= 2;
    // 8000661C: isync
    ppc_memory_fence();

label_80006620:
    ctx->pc = 0x80006620u;
    // 80006620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_80004000;
        }
    }

label_80006624:
    ctx->pc = 0x80006624u;
    ctx->downcount -= 2;
    // 80006624: lwz     r0, 16384(r0)
    {
        u32 ea = (u32)(s32)(16384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006628:
    ctx->pc = 0x80006628u;
    // 80006628: lwz     r0, 16384(r0)
    {
        u32 ea = (u32)(s32)(16384);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000662C:
    ctx->pc = 0x8000662Cu;
    // 8000662C: .long   0x000026D4
    // embedded data

label_80006630:
    ctx->pc = 0x80006630u;
    // 80006630: lwz     r0, 26336(r0)
    {
        u32 ea = (u32)(s32)(26336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006634:
    ctx->pc = 0x80006634u;
    // 80006634: lwz     r0, 26336(r0)
    {
        u32 ea = (u32)(s32)(26336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006638:
    ctx->pc = 0x80006638u;
    // 80006638: .long   0x00000450
    // embedded data

label_8000663C:
    ctx->pc = 0x8000663Cu;
    // 8000663C: lwz     r0, 27456(r0)
    {
        u32 ea = (u32)(s32)(27456);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006640:
    ctx->pc = 0x80006640u;
    // 80006640: lwz     r0, 27456(r0)
    {
        u32 ea = (u32)(s32)(27456);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006644:
    ctx->pc = 0x80006644u;
    // 80006644: .long   0x00000668
    // embedded data

label_80006648:
    ctx->pc = 0x80006648u;
    // 80006648: lwz     r0, 29120(r0)
    {
        u32 ea = (u32)(s32)(29120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8000664C:
    ctx->pc = 0x8000664Cu;
    // 8000664C: lwz     r0, 29120(r0)
    {
        u32 ea = (u32)(s32)(29120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80006650:
    ctx->pc = 0x80006650u;
    // 80006650: .long   0x0064CDE0
    // embedded data

label_80006654:
    ctx->pc = 0x80006654u;
    // 80006654: lwz     r3, 16288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006658:
    ctx->pc = 0x80006658u;
    // 80006658: lwz     r3, 16288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000665C:
    ctx->pc = 0x8000665Cu;
    // 8000665C: .long   0x00000594
    // embedded data

label_80006660:
    ctx->pc = 0x80006660u;
    // 80006660: lwz     r3, 17728(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17728);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006664:
    ctx->pc = 0x80006664u;
    // 80006664: lwz     r3, 17728(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17728);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006668:
    ctx->pc = 0x80006668u;
    // 80006668: .long   0x0000000C
    // embedded data

label_8000666C:
    ctx->pc = 0x8000666Cu;
    // 8000666C: lwz     r3, 17760(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17760);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006670:
    ctx->pc = 0x80006670u;
    // 80006670: lwz     r3, 17760(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(17760);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006674:
    ctx->pc = 0x80006674u;
    // 80006674: .long   0x00001104
    // embedded data

label_80006678:
    ctx->pc = 0x80006678u;
    // 80006678: lwz     r3, 22144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000667C:
    ctx->pc = 0x8000667Cu;
    // 8000667C: lwz     r3, 22144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(22144);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006680:
    ctx->pc = 0x80006680u;
    // 80006680: .long   0x000372A4
    // embedded data

label_80006684:
    ctx->pc = 0x80006684u;
    // 80006684: lwz     r3, -14016(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-14016);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006688:
    ctx->pc = 0x80006688u;
    // 80006688: lwz     r3, -14016(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(-14016);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8000668C:
    ctx->pc = 0x8000668Cu;
    // 8000668C: .long   0x000637C8
    // embedded data

label_80006690:
    ctx->pc = 0x80006690u;
    // 80006690: lwz     r3, 288(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006694:
    ctx->pc = 0x80006694u;
    // 80006694: lwz     r3, 288(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80006698:
    ctx->pc = 0x80006698u;
    // 80006698: .long   0x00003CC4
    // embedded data

label_8000669C:
    ctx->pc = 0x8000669Cu;
    // 8000669C: lwz     r3, 24704(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(24704);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800066A0:
    ctx->pc = 0x800066A0u;
    // 800066A0: lwz     r3, 24704(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(24704);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800066A4:
    ctx->pc = 0x800066A4u;
    // 800066A4: .long   0x0000F368
    // embedded data

label_800066A8:
    ctx->pc = 0x800066A8u;
    // 800066A8: .long   0x00000000
    // embedded data

label_800066AC:
    ctx->pc = 0x800066ACu;
    // 800066AC: .long   0x00000000
    // embedded data

label_800066B0:
    ctx->pc = 0x800066B0u;
    // 800066B0: .long   0x00000000
    // embedded data

label_800066B4:
    ctx->pc = 0x800066B4u;
    // 800066B4: lwz     r3, 15872(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(15872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800066B8:
    ctx->pc = 0x800066B8u;
    // 800066B8: .long   0x00002274
    // embedded data

label_800066BC:
    ctx->pc = 0x800066BCu;
    // 800066BC: lwz     r3, 21504(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(21504);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800066C0:
    ctx->pc = 0x800066C0u;
    // 800066C0: .long   0x0000006C
    // embedded data

label_800066C4:
    ctx->pc = 0x800066C4u;
    // 800066C4: lwz     r3, 21632(r16)
    {
        u32 ea = ctx->gpr[16] + (u32)(s32)(21632);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_800066C8:
    ctx->pc = 0x800066C8u;
    // 800066C8: .long   0x000D14F8
    // embedded data

label_800066CC:
    ctx->pc = 0x800066CCu;
    // 800066CC: .long   0x00000000
    // embedded data

label_800066D0:
    ctx->pc = 0x800066D0u;
    // 800066D0: .long   0x00000000
    // embedded data

label_800066D4:
    ctx->pc = 0x800066D4u;
    // 800066D4: .long   0x00000000
    // embedded data

label_800066D8:
    ctx->pc = 0x800066D8u;
    // 800066D8: .long   0x00000000
    // embedded data

label_800066DC:
    ctx->pc = 0x800066DCu;
    // 800066DC: .long   0x00000000
    // embedded data

    ctx->pc = 0x800066E0u;
    return;
return_dispatch_80004000:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80004368u: goto label_80004368;
    case 0x80006314u: goto label_80006314;
    case 0x80006318u: goto label_80006318;
    case 0x8000632Cu: goto label_8000632C;
    case 0x800063A0u: goto label_800063A0;
    case 0x800063B4u: goto label_800063B4;
    case 0x80006430u: goto label_80006430;
    case 0x80006434u: goto label_80006434;
    case 0x80006458u: goto label_80006458;
    case 0x8000645Cu: goto label_8000645C;
    case 0x80006468u: goto label_80006468;
    case 0x8000646Cu: goto label_8000646C;
    case 0x80006478u: goto label_80006478;
    case 0x8000655Cu: goto label_8000655C;
    case 0x80006568u: goto label_80006568;
    case 0x80006594u: goto label_80006594;
    case 0x800065D4u: goto label_800065D4;
    case 0x800065D8u: goto label_800065D8;
    case 0x800065DCu: goto label_800065DC;
    default: return;
    }
}

