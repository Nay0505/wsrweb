// DolRecomp output
#include "../RZTE01.h"

static void loop_805CBC24(CPUState* ctx) {
label_805CBC24:
    ctx->downcount -= 5;
    // 805CBC24: add   r8, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

    // 805CBC28: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

    ctx->pc = 0x805CBC2Cu;
    // 805CBC2C: stw     r6, 308(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    ctx->pc = 0x805CBC30u;
    // 805CBC30: stw     r6, 348(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 805CBC34: bc    16, 0, 0x805CBC24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBC24u;
                return;
            }
            goto label_805CBC24;
        }
    }

    ctx->pc = 0x805CBC38u;
}

static void loop_805CBD38(CPUState* ctx) {
label_805CBD38:
    ctx->downcount -= 5;
    // 805CBD38: add   r6, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 805CBD3C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x805CBD40u;
    // 805CBD40: stw     r5, 276(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x805CBD44u;
    // 805CBD44: stw     r4, 292(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 805CBD48: bc    16, 0, 0x805CBD38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBD38u;
                return;
            }
            goto label_805CBD38;
        }
    }

    ctx->pc = 0x805CBD4Cu;
}

static void loop_805CCBC0(CPUState* ctx) {
label_805CCBC0:
    ctx->downcount -= 26;
    ctx->pc = 0x805CCBC0u;
    // 805CCBC0: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 805CCBC4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x805CCBC8u;
    // 805CCBC8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CCBCC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CCBD0u;
    // 805CCBD0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCBD4u;
    // 805CCBD4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805CCBD8u;
    // 805CCBD8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCBDCu;
    // 805CCBDC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCBE0u;
    // 805CCBE0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCBE4u;
    // 805CCBE4: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCBE8u;
    // 805CCBE8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CCBEC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CCBF0u;
    // 805CCBF0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCBF4u;
    // 805CCBF4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805CCBF8u;
    // 805CCBF8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCBFCu;
    // 805CCBFC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCC00u;
    // 805CCC00: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCC04u;
    // 805CCC04: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCC08u;
    // 805CCC08: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CCC0C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CCC10u;
    // 805CCC10: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCC14u;
    // 805CCC14: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 805CCC18: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x805CCC1Cu;
    // 805CCC1C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCC20u;
    // 805CCC20: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CCC24u;
    // 805CCC24: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CCC28u;
    // 805CCC28: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CCC2C: cmpw    r7, r0
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

    // 805CCC30: bc    12, 0, 0x805CCBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCBC0u;
                return;
            }
            goto label_805CCBC0;
        }
    }

    ctx->pc = 0x805CCC34u;
}

static void loop_805CD7F4(CPUState* ctx) {
label_805CD7F4:
    ctx->downcount -= 26;
    ctx->pc = 0x805CD7F4u;
    // 805CD7F4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 805CD7F8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x805CD7FCu;
    // 805CD7FC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CD800: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CD804u;
    // 805CD804: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD808u;
    // 805CD808: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805CD80Cu;
    // 805CD80C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD810u;
    // 805CD810: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD814u;
    // 805CD814: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD818u;
    // 805CD818: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD81Cu;
    // 805CD81C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CD820: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CD824u;
    // 805CD824: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD828u;
    // 805CD828: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x805CD82Cu;
    // 805CD82C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD830u;
    // 805CD830: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD834u;
    // 805CD834: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD838u;
    // 805CD838: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD83Cu;
    // 805CD83C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CD840: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x805CD844u;
    // 805CD844: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD848u;
    // 805CD848: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 805CD84C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x805CD850u;
    // 805CD850: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD854u;
    // 805CD854: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CD858u;
    // 805CD858: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x805CD85Cu;
    // 805CD85C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 805CD860: cmpw    r7, r0
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

    // 805CD864: bc    12, 0, 0x805CD7F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD7F4u;
                return;
            }
            goto label_805CD7F4;
        }
    }

    ctx->pc = 0x805CD868u;
}

static void loop_805CDF78(CPUState* ctx) {
label_805CDF78:
    ctx->downcount -= 5;
    ctx->pc = 0x805CDF78u;
    // 805CDF78: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CDF7Cu;
    // 805CDF7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x805CDF80u;
    // 805CDF80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x805CDF84u;
    // 805CDF84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 805CDF88: bc    16, 0, 0x805CDF78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDF78u;
                return;
            }
            goto label_805CDF78;
        }
    }

    ctx->pc = 0x805CDF8Cu;
}

static void loop_805CE3CC(CPUState* ctx) {
label_805CE3CC:
    ctx->downcount -= 5;
    ctx->pc = 0x805CE3CCu;
    // 805CE3CC: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CE3D0u;
    // 805CE3D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x805CE3D4u;
    // 805CE3D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x805CE3D8u;
    // 805CE3D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 805CE3DC: bc    16, 0, 0x805CE3CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CE3CCu;
                return;
            }
            goto label_805CE3CC;
        }
    }

    ctx->pc = 0x805CE3E0u;
}

static void loop_805CE640(CPUState* ctx) {
label_805CE640:
    ctx->downcount -= 5;
    ctx->pc = 0x805CE640u;
    // 805CE640: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x805CE644u;
    // 805CE644: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x805CE648u;
    // 805CE648: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x805CE64Cu;
    // 805CE64C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 805CE650: bc    16, 0, 0x805CE640
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CE640u;
                return;
            }
            goto label_805CE640;
        }
    }

    ctx->pc = 0x805CE654u;
}

void func_805CB1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x805CB1C0u: goto label_805CB1C0;
    case 0x805CB1C4u: goto label_805CB1C4;
    case 0x805CB1C8u: goto label_805CB1C8;
    case 0x805CB1CCu: goto label_805CB1CC;
    case 0x805CB1D0u: goto label_805CB1D0;
    case 0x805CB1D4u: goto label_805CB1D4;
    case 0x805CB1D8u: goto label_805CB1D8;
    case 0x805CB1DCu: goto label_805CB1DC;
    case 0x805CB1E0u: goto label_805CB1E0;
    case 0x805CB1E4u: goto label_805CB1E4;
    case 0x805CB1E8u: goto label_805CB1E8;
    case 0x805CB1ECu: goto label_805CB1EC;
    case 0x805CB1F0u: goto label_805CB1F0;
    case 0x805CB1F4u: goto label_805CB1F4;
    case 0x805CB1F8u: goto label_805CB1F8;
    case 0x805CB1FCu: goto label_805CB1FC;
    case 0x805CB200u: goto label_805CB200;
    case 0x805CB204u: goto label_805CB204;
    case 0x805CB208u: goto label_805CB208;
    case 0x805CB20Cu: goto label_805CB20C;
    case 0x805CB210u: goto label_805CB210;
    case 0x805CB214u: goto label_805CB214;
    case 0x805CB218u: goto label_805CB218;
    case 0x805CB21Cu: goto label_805CB21C;
    case 0x805CB220u: goto label_805CB220;
    case 0x805CB224u: goto label_805CB224;
    case 0x805CB228u: goto label_805CB228;
    case 0x805CB22Cu: goto label_805CB22C;
    case 0x805CB230u: goto label_805CB230;
    case 0x805CB234u: goto label_805CB234;
    case 0x805CB238u: goto label_805CB238;
    case 0x805CB23Cu: goto label_805CB23C;
    case 0x805CB240u: goto label_805CB240;
    case 0x805CB244u: goto label_805CB244;
    case 0x805CB248u: goto label_805CB248;
    case 0x805CB24Cu: goto label_805CB24C;
    case 0x805CB250u: goto label_805CB250;
    case 0x805CB254u: goto label_805CB254;
    case 0x805CB258u: goto label_805CB258;
    case 0x805CB25Cu: goto label_805CB25C;
    case 0x805CB260u: goto label_805CB260;
    case 0x805CB264u: goto label_805CB264;
    case 0x805CB268u: goto label_805CB268;
    case 0x805CB26Cu: goto label_805CB26C;
    case 0x805CB270u: goto label_805CB270;
    case 0x805CB274u: goto label_805CB274;
    case 0x805CB278u: goto label_805CB278;
    case 0x805CB27Cu: goto label_805CB27C;
    case 0x805CB280u: goto label_805CB280;
    case 0x805CB284u: goto label_805CB284;
    case 0x805CB288u: goto label_805CB288;
    case 0x805CB28Cu: goto label_805CB28C;
    case 0x805CB290u: goto label_805CB290;
    case 0x805CB294u: goto label_805CB294;
    case 0x805CB298u: goto label_805CB298;
    case 0x805CB29Cu: goto label_805CB29C;
    case 0x805CB2A0u: goto label_805CB2A0;
    case 0x805CB2A4u: goto label_805CB2A4;
    case 0x805CB2A8u: goto label_805CB2A8;
    case 0x805CB2ACu: goto label_805CB2AC;
    case 0x805CB2B0u: goto label_805CB2B0;
    case 0x805CB2B4u: goto label_805CB2B4;
    case 0x805CB2B8u: goto label_805CB2B8;
    case 0x805CB2BCu: goto label_805CB2BC;
    case 0x805CB2C0u: goto label_805CB2C0;
    case 0x805CB2C4u: goto label_805CB2C4;
    case 0x805CB2C8u: goto label_805CB2C8;
    case 0x805CB2CCu: goto label_805CB2CC;
    case 0x805CB2D0u: goto label_805CB2D0;
    case 0x805CB2D4u: goto label_805CB2D4;
    case 0x805CB2D8u: goto label_805CB2D8;
    case 0x805CB2DCu: goto label_805CB2DC;
    case 0x805CB2E0u: goto label_805CB2E0;
    case 0x805CB2E4u: goto label_805CB2E4;
    case 0x805CB2E8u: goto label_805CB2E8;
    case 0x805CB2ECu: goto label_805CB2EC;
    case 0x805CB2F0u: goto label_805CB2F0;
    case 0x805CB2F4u: goto label_805CB2F4;
    case 0x805CB2F8u: goto label_805CB2F8;
    case 0x805CB2FCu: goto label_805CB2FC;
    case 0x805CB300u: goto label_805CB300;
    case 0x805CB304u: goto label_805CB304;
    case 0x805CB308u: goto label_805CB308;
    case 0x805CB30Cu: goto label_805CB30C;
    case 0x805CB310u: goto label_805CB310;
    case 0x805CB314u: goto label_805CB314;
    case 0x805CB318u: goto label_805CB318;
    case 0x805CB31Cu: goto label_805CB31C;
    case 0x805CB320u: goto label_805CB320;
    case 0x805CB324u: goto label_805CB324;
    case 0x805CB328u: goto label_805CB328;
    case 0x805CB32Cu: goto label_805CB32C;
    case 0x805CB330u: goto label_805CB330;
    case 0x805CB334u: goto label_805CB334;
    case 0x805CB338u: goto label_805CB338;
    case 0x805CB33Cu: goto label_805CB33C;
    case 0x805CB340u: goto label_805CB340;
    case 0x805CB344u: goto label_805CB344;
    case 0x805CB348u: goto label_805CB348;
    case 0x805CB34Cu: goto label_805CB34C;
    case 0x805CB350u: goto label_805CB350;
    case 0x805CB354u: goto label_805CB354;
    case 0x805CB358u: goto label_805CB358;
    case 0x805CB35Cu: goto label_805CB35C;
    case 0x805CB360u: goto label_805CB360;
    case 0x805CB364u: goto label_805CB364;
    case 0x805CB368u: goto label_805CB368;
    case 0x805CB36Cu: goto label_805CB36C;
    case 0x805CB370u: goto label_805CB370;
    case 0x805CB374u: goto label_805CB374;
    case 0x805CB378u: goto label_805CB378;
    case 0x805CB37Cu: goto label_805CB37C;
    case 0x805CB380u: goto label_805CB380;
    case 0x805CB384u: goto label_805CB384;
    case 0x805CB388u: goto label_805CB388;
    case 0x805CB38Cu: goto label_805CB38C;
    case 0x805CB390u: goto label_805CB390;
    case 0x805CB394u: goto label_805CB394;
    case 0x805CB398u: goto label_805CB398;
    case 0x805CB39Cu: goto label_805CB39C;
    case 0x805CB3A0u: goto label_805CB3A0;
    case 0x805CB3A4u: goto label_805CB3A4;
    case 0x805CB3A8u: goto label_805CB3A8;
    case 0x805CB3ACu: goto label_805CB3AC;
    case 0x805CB3B0u: goto label_805CB3B0;
    case 0x805CB3B4u: goto label_805CB3B4;
    case 0x805CB3B8u: goto label_805CB3B8;
    case 0x805CB3BCu: goto label_805CB3BC;
    case 0x805CB3C0u: goto label_805CB3C0;
    case 0x805CB3C4u: goto label_805CB3C4;
    case 0x805CB3C8u: goto label_805CB3C8;
    case 0x805CB3CCu: goto label_805CB3CC;
    case 0x805CB3D0u: goto label_805CB3D0;
    case 0x805CB3D4u: goto label_805CB3D4;
    case 0x805CB3D8u: goto label_805CB3D8;
    case 0x805CB3DCu: goto label_805CB3DC;
    case 0x805CB3E0u: goto label_805CB3E0;
    case 0x805CB3E4u: goto label_805CB3E4;
    case 0x805CB3E8u: goto label_805CB3E8;
    case 0x805CB3ECu: goto label_805CB3EC;
    case 0x805CB3F0u: goto label_805CB3F0;
    case 0x805CB3F4u: goto label_805CB3F4;
    case 0x805CB3F8u: goto label_805CB3F8;
    case 0x805CB3FCu: goto label_805CB3FC;
    case 0x805CB400u: goto label_805CB400;
    case 0x805CB404u: goto label_805CB404;
    case 0x805CB408u: goto label_805CB408;
    case 0x805CB40Cu: goto label_805CB40C;
    case 0x805CB410u: goto label_805CB410;
    case 0x805CB414u: goto label_805CB414;
    case 0x805CB418u: goto label_805CB418;
    case 0x805CB41Cu: goto label_805CB41C;
    case 0x805CB420u: goto label_805CB420;
    case 0x805CB424u: goto label_805CB424;
    case 0x805CB428u: goto label_805CB428;
    case 0x805CB42Cu: goto label_805CB42C;
    case 0x805CB430u: goto label_805CB430;
    case 0x805CB434u: goto label_805CB434;
    case 0x805CB438u: goto label_805CB438;
    case 0x805CB43Cu: goto label_805CB43C;
    case 0x805CB440u: goto label_805CB440;
    case 0x805CB444u: goto label_805CB444;
    case 0x805CB448u: goto label_805CB448;
    case 0x805CB44Cu: goto label_805CB44C;
    case 0x805CB450u: goto label_805CB450;
    case 0x805CB454u: goto label_805CB454;
    case 0x805CB458u: goto label_805CB458;
    case 0x805CB45Cu: goto label_805CB45C;
    case 0x805CB460u: goto label_805CB460;
    case 0x805CB464u: goto label_805CB464;
    case 0x805CB468u: goto label_805CB468;
    case 0x805CB46Cu: goto label_805CB46C;
    case 0x805CB470u: goto label_805CB470;
    case 0x805CB474u: goto label_805CB474;
    case 0x805CB478u: goto label_805CB478;
    case 0x805CB47Cu: goto label_805CB47C;
    case 0x805CB480u: goto label_805CB480;
    case 0x805CB484u: goto label_805CB484;
    case 0x805CB488u: goto label_805CB488;
    case 0x805CB48Cu: goto label_805CB48C;
    case 0x805CB490u: goto label_805CB490;
    case 0x805CB494u: goto label_805CB494;
    case 0x805CB498u: goto label_805CB498;
    case 0x805CB49Cu: goto label_805CB49C;
    case 0x805CB4A0u: goto label_805CB4A0;
    case 0x805CB4A4u: goto label_805CB4A4;
    case 0x805CB4A8u: goto label_805CB4A8;
    case 0x805CB4ACu: goto label_805CB4AC;
    case 0x805CB4B0u: goto label_805CB4B0;
    case 0x805CB4B4u: goto label_805CB4B4;
    case 0x805CB4B8u: goto label_805CB4B8;
    case 0x805CB4BCu: goto label_805CB4BC;
    case 0x805CB4C0u: goto label_805CB4C0;
    case 0x805CB4C4u: goto label_805CB4C4;
    case 0x805CB4C8u: goto label_805CB4C8;
    case 0x805CB4CCu: goto label_805CB4CC;
    case 0x805CB4D0u: goto label_805CB4D0;
    case 0x805CB4D4u: goto label_805CB4D4;
    case 0x805CB4D8u: goto label_805CB4D8;
    case 0x805CB4DCu: goto label_805CB4DC;
    case 0x805CB4E0u: goto label_805CB4E0;
    case 0x805CB4E4u: goto label_805CB4E4;
    case 0x805CB4E8u: goto label_805CB4E8;
    case 0x805CB4ECu: goto label_805CB4EC;
    case 0x805CB4F0u: goto label_805CB4F0;
    case 0x805CB4F4u: goto label_805CB4F4;
    case 0x805CB4F8u: goto label_805CB4F8;
    case 0x805CB4FCu: goto label_805CB4FC;
    case 0x805CB500u: goto label_805CB500;
    case 0x805CB504u: goto label_805CB504;
    case 0x805CB508u: goto label_805CB508;
    case 0x805CB50Cu: goto label_805CB50C;
    case 0x805CB510u: goto label_805CB510;
    case 0x805CB514u: goto label_805CB514;
    case 0x805CB518u: goto label_805CB518;
    case 0x805CB51Cu: goto label_805CB51C;
    case 0x805CB520u: goto label_805CB520;
    case 0x805CB524u: goto label_805CB524;
    case 0x805CB528u: goto label_805CB528;
    case 0x805CB52Cu: goto label_805CB52C;
    case 0x805CB530u: goto label_805CB530;
    case 0x805CB534u: goto label_805CB534;
    case 0x805CB538u: goto label_805CB538;
    case 0x805CB53Cu: goto label_805CB53C;
    case 0x805CB540u: goto label_805CB540;
    case 0x805CB544u: goto label_805CB544;
    case 0x805CB548u: goto label_805CB548;
    case 0x805CB54Cu: goto label_805CB54C;
    case 0x805CB550u: goto label_805CB550;
    case 0x805CB554u: goto label_805CB554;
    case 0x805CB558u: goto label_805CB558;
    case 0x805CB55Cu: goto label_805CB55C;
    case 0x805CB560u: goto label_805CB560;
    case 0x805CB564u: goto label_805CB564;
    case 0x805CB568u: goto label_805CB568;
    case 0x805CB56Cu: goto label_805CB56C;
    case 0x805CB570u: goto label_805CB570;
    case 0x805CB574u: goto label_805CB574;
    case 0x805CB578u: goto label_805CB578;
    case 0x805CB57Cu: goto label_805CB57C;
    case 0x805CB580u: goto label_805CB580;
    case 0x805CB584u: goto label_805CB584;
    case 0x805CB588u: goto label_805CB588;
    case 0x805CB58Cu: goto label_805CB58C;
    case 0x805CB590u: goto label_805CB590;
    case 0x805CB594u: goto label_805CB594;
    case 0x805CB598u: goto label_805CB598;
    case 0x805CB59Cu: goto label_805CB59C;
    case 0x805CB5A0u: goto label_805CB5A0;
    case 0x805CB5A4u: goto label_805CB5A4;
    case 0x805CB5A8u: goto label_805CB5A8;
    case 0x805CB5ACu: goto label_805CB5AC;
    case 0x805CB5B0u: goto label_805CB5B0;
    case 0x805CB5B4u: goto label_805CB5B4;
    case 0x805CB5B8u: goto label_805CB5B8;
    case 0x805CB5BCu: goto label_805CB5BC;
    case 0x805CB5C0u: goto label_805CB5C0;
    case 0x805CB5C4u: goto label_805CB5C4;
    case 0x805CB5C8u: goto label_805CB5C8;
    case 0x805CB5CCu: goto label_805CB5CC;
    case 0x805CB5D0u: goto label_805CB5D0;
    case 0x805CB5D4u: goto label_805CB5D4;
    case 0x805CB5D8u: goto label_805CB5D8;
    case 0x805CB5DCu: goto label_805CB5DC;
    case 0x805CB5E0u: goto label_805CB5E0;
    case 0x805CB5E4u: goto label_805CB5E4;
    case 0x805CB5E8u: goto label_805CB5E8;
    case 0x805CB5ECu: goto label_805CB5EC;
    case 0x805CB5F0u: goto label_805CB5F0;
    case 0x805CB5F4u: goto label_805CB5F4;
    case 0x805CB5F8u: goto label_805CB5F8;
    case 0x805CB5FCu: goto label_805CB5FC;
    case 0x805CB600u: goto label_805CB600;
    case 0x805CB604u: goto label_805CB604;
    case 0x805CB608u: goto label_805CB608;
    case 0x805CB60Cu: goto label_805CB60C;
    case 0x805CB610u: goto label_805CB610;
    case 0x805CB614u: goto label_805CB614;
    case 0x805CB618u: goto label_805CB618;
    case 0x805CB61Cu: goto label_805CB61C;
    case 0x805CB620u: goto label_805CB620;
    case 0x805CB624u: goto label_805CB624;
    case 0x805CB628u: goto label_805CB628;
    case 0x805CB62Cu: goto label_805CB62C;
    case 0x805CB630u: goto label_805CB630;
    case 0x805CB634u: goto label_805CB634;
    case 0x805CB638u: goto label_805CB638;
    case 0x805CB63Cu: goto label_805CB63C;
    case 0x805CB640u: goto label_805CB640;
    case 0x805CB644u: goto label_805CB644;
    case 0x805CB648u: goto label_805CB648;
    case 0x805CB64Cu: goto label_805CB64C;
    case 0x805CB650u: goto label_805CB650;
    case 0x805CB654u: goto label_805CB654;
    case 0x805CB658u: goto label_805CB658;
    case 0x805CB65Cu: goto label_805CB65C;
    case 0x805CB660u: goto label_805CB660;
    case 0x805CB664u: goto label_805CB664;
    case 0x805CB668u: goto label_805CB668;
    case 0x805CB66Cu: goto label_805CB66C;
    case 0x805CB670u: goto label_805CB670;
    case 0x805CB674u: goto label_805CB674;
    case 0x805CB678u: goto label_805CB678;
    case 0x805CB67Cu: goto label_805CB67C;
    case 0x805CB680u: goto label_805CB680;
    case 0x805CB684u: goto label_805CB684;
    case 0x805CB688u: goto label_805CB688;
    case 0x805CB68Cu: goto label_805CB68C;
    case 0x805CB690u: goto label_805CB690;
    case 0x805CB694u: goto label_805CB694;
    case 0x805CB698u: goto label_805CB698;
    case 0x805CB69Cu: goto label_805CB69C;
    case 0x805CB6A0u: goto label_805CB6A0;
    case 0x805CB6A4u: goto label_805CB6A4;
    case 0x805CB6A8u: goto label_805CB6A8;
    case 0x805CB6ACu: goto label_805CB6AC;
    case 0x805CB6B0u: goto label_805CB6B0;
    case 0x805CB6B4u: goto label_805CB6B4;
    case 0x805CB6B8u: goto label_805CB6B8;
    case 0x805CB6BCu: goto label_805CB6BC;
    case 0x805CB6C0u: goto label_805CB6C0;
    case 0x805CB6C4u: goto label_805CB6C4;
    case 0x805CB6C8u: goto label_805CB6C8;
    case 0x805CB6CCu: goto label_805CB6CC;
    case 0x805CB6D0u: goto label_805CB6D0;
    case 0x805CB6D4u: goto label_805CB6D4;
    case 0x805CB6D8u: goto label_805CB6D8;
    case 0x805CB6DCu: goto label_805CB6DC;
    case 0x805CB6E0u: goto label_805CB6E0;
    case 0x805CB6E4u: goto label_805CB6E4;
    case 0x805CB6E8u: goto label_805CB6E8;
    case 0x805CB6ECu: goto label_805CB6EC;
    case 0x805CB6F0u: goto label_805CB6F0;
    case 0x805CB6F4u: goto label_805CB6F4;
    case 0x805CB6F8u: goto label_805CB6F8;
    case 0x805CB6FCu: goto label_805CB6FC;
    case 0x805CB700u: goto label_805CB700;
    case 0x805CB704u: goto label_805CB704;
    case 0x805CB708u: goto label_805CB708;
    case 0x805CB70Cu: goto label_805CB70C;
    case 0x805CB710u: goto label_805CB710;
    case 0x805CB714u: goto label_805CB714;
    case 0x805CB718u: goto label_805CB718;
    case 0x805CB71Cu: goto label_805CB71C;
    case 0x805CB720u: goto label_805CB720;
    case 0x805CB724u: goto label_805CB724;
    case 0x805CB728u: goto label_805CB728;
    case 0x805CB72Cu: goto label_805CB72C;
    case 0x805CB730u: goto label_805CB730;
    case 0x805CB734u: goto label_805CB734;
    case 0x805CB738u: goto label_805CB738;
    case 0x805CB73Cu: goto label_805CB73C;
    case 0x805CB740u: goto label_805CB740;
    case 0x805CB744u: goto label_805CB744;
    case 0x805CB748u: goto label_805CB748;
    case 0x805CB74Cu: goto label_805CB74C;
    case 0x805CB750u: goto label_805CB750;
    case 0x805CB754u: goto label_805CB754;
    case 0x805CB758u: goto label_805CB758;
    case 0x805CB75Cu: goto label_805CB75C;
    case 0x805CB760u: goto label_805CB760;
    case 0x805CB764u: goto label_805CB764;
    case 0x805CB768u: goto label_805CB768;
    case 0x805CB76Cu: goto label_805CB76C;
    case 0x805CB770u: goto label_805CB770;
    case 0x805CB774u: goto label_805CB774;
    case 0x805CB778u: goto label_805CB778;
    case 0x805CB77Cu: goto label_805CB77C;
    case 0x805CB780u: goto label_805CB780;
    case 0x805CB784u: goto label_805CB784;
    case 0x805CB788u: goto label_805CB788;
    case 0x805CB78Cu: goto label_805CB78C;
    case 0x805CB790u: goto label_805CB790;
    case 0x805CB794u: goto label_805CB794;
    case 0x805CB798u: goto label_805CB798;
    case 0x805CB79Cu: goto label_805CB79C;
    case 0x805CB7A0u: goto label_805CB7A0;
    case 0x805CB7A4u: goto label_805CB7A4;
    case 0x805CB7A8u: goto label_805CB7A8;
    case 0x805CB7ACu: goto label_805CB7AC;
    case 0x805CB7B0u: goto label_805CB7B0;
    case 0x805CB7B4u: goto label_805CB7B4;
    case 0x805CB7B8u: goto label_805CB7B8;
    case 0x805CB7BCu: goto label_805CB7BC;
    case 0x805CB7C0u: goto label_805CB7C0;
    case 0x805CB7C4u: goto label_805CB7C4;
    case 0x805CB7C8u: goto label_805CB7C8;
    case 0x805CB7CCu: goto label_805CB7CC;
    case 0x805CB7D0u: goto label_805CB7D0;
    case 0x805CB7D4u: goto label_805CB7D4;
    case 0x805CB7D8u: goto label_805CB7D8;
    case 0x805CB7DCu: goto label_805CB7DC;
    case 0x805CB7E0u: goto label_805CB7E0;
    case 0x805CB7E4u: goto label_805CB7E4;
    case 0x805CB7E8u: goto label_805CB7E8;
    case 0x805CB7ECu: goto label_805CB7EC;
    case 0x805CB7F0u: goto label_805CB7F0;
    case 0x805CB7F4u: goto label_805CB7F4;
    case 0x805CB7F8u: goto label_805CB7F8;
    case 0x805CB7FCu: goto label_805CB7FC;
    case 0x805CB800u: goto label_805CB800;
    case 0x805CB804u: goto label_805CB804;
    case 0x805CB808u: goto label_805CB808;
    case 0x805CB80Cu: goto label_805CB80C;
    case 0x805CB810u: goto label_805CB810;
    case 0x805CB814u: goto label_805CB814;
    case 0x805CB818u: goto label_805CB818;
    case 0x805CB81Cu: goto label_805CB81C;
    case 0x805CB820u: goto label_805CB820;
    case 0x805CB824u: goto label_805CB824;
    case 0x805CB828u: goto label_805CB828;
    case 0x805CB82Cu: goto label_805CB82C;
    case 0x805CB830u: goto label_805CB830;
    case 0x805CB834u: goto label_805CB834;
    case 0x805CB838u: goto label_805CB838;
    case 0x805CB83Cu: goto label_805CB83C;
    case 0x805CB840u: goto label_805CB840;
    case 0x805CB844u: goto label_805CB844;
    case 0x805CB848u: goto label_805CB848;
    case 0x805CB84Cu: goto label_805CB84C;
    case 0x805CB850u: goto label_805CB850;
    case 0x805CB854u: goto label_805CB854;
    case 0x805CB858u: goto label_805CB858;
    case 0x805CB85Cu: goto label_805CB85C;
    case 0x805CB860u: goto label_805CB860;
    case 0x805CB864u: goto label_805CB864;
    case 0x805CB868u: goto label_805CB868;
    case 0x805CB86Cu: goto label_805CB86C;
    case 0x805CB870u: goto label_805CB870;
    case 0x805CB874u: goto label_805CB874;
    case 0x805CB878u: goto label_805CB878;
    case 0x805CB87Cu: goto label_805CB87C;
    case 0x805CB880u: goto label_805CB880;
    case 0x805CB884u: goto label_805CB884;
    case 0x805CB888u: goto label_805CB888;
    case 0x805CB88Cu: goto label_805CB88C;
    case 0x805CB890u: goto label_805CB890;
    case 0x805CB894u: goto label_805CB894;
    case 0x805CB898u: goto label_805CB898;
    case 0x805CB89Cu: goto label_805CB89C;
    case 0x805CB8A0u: goto label_805CB8A0;
    case 0x805CB8A4u: goto label_805CB8A4;
    case 0x805CB8A8u: goto label_805CB8A8;
    case 0x805CB8ACu: goto label_805CB8AC;
    case 0x805CB8B0u: goto label_805CB8B0;
    case 0x805CB8B4u: goto label_805CB8B4;
    case 0x805CB8B8u: goto label_805CB8B8;
    case 0x805CB8BCu: goto label_805CB8BC;
    case 0x805CB8C0u: goto label_805CB8C0;
    case 0x805CB8C4u: goto label_805CB8C4;
    case 0x805CB8C8u: goto label_805CB8C8;
    case 0x805CB8CCu: goto label_805CB8CC;
    case 0x805CB8D0u: goto label_805CB8D0;
    case 0x805CB8D4u: goto label_805CB8D4;
    case 0x805CB8D8u: goto label_805CB8D8;
    case 0x805CB8DCu: goto label_805CB8DC;
    case 0x805CB8E0u: goto label_805CB8E0;
    case 0x805CB8E4u: goto label_805CB8E4;
    case 0x805CB8E8u: goto label_805CB8E8;
    case 0x805CB8ECu: goto label_805CB8EC;
    case 0x805CB8F0u: goto label_805CB8F0;
    case 0x805CB8F4u: goto label_805CB8F4;
    case 0x805CB8F8u: goto label_805CB8F8;
    case 0x805CB8FCu: goto label_805CB8FC;
    case 0x805CB900u: goto label_805CB900;
    case 0x805CB904u: goto label_805CB904;
    case 0x805CB908u: goto label_805CB908;
    case 0x805CB90Cu: goto label_805CB90C;
    case 0x805CB910u: goto label_805CB910;
    case 0x805CB914u: goto label_805CB914;
    case 0x805CB918u: goto label_805CB918;
    case 0x805CB91Cu: goto label_805CB91C;
    case 0x805CB920u: goto label_805CB920;
    case 0x805CB924u: goto label_805CB924;
    case 0x805CB928u: goto label_805CB928;
    case 0x805CB92Cu: goto label_805CB92C;
    case 0x805CB930u: goto label_805CB930;
    case 0x805CB934u: goto label_805CB934;
    case 0x805CB938u: goto label_805CB938;
    case 0x805CB93Cu: goto label_805CB93C;
    case 0x805CB940u: goto label_805CB940;
    case 0x805CB944u: goto label_805CB944;
    case 0x805CB948u: goto label_805CB948;
    case 0x805CB94Cu: goto label_805CB94C;
    case 0x805CB950u: goto label_805CB950;
    case 0x805CB954u: goto label_805CB954;
    case 0x805CB958u: goto label_805CB958;
    case 0x805CB95Cu: goto label_805CB95C;
    case 0x805CB960u: goto label_805CB960;
    case 0x805CB964u: goto label_805CB964;
    case 0x805CB968u: goto label_805CB968;
    case 0x805CB96Cu: goto label_805CB96C;
    case 0x805CB970u: goto label_805CB970;
    case 0x805CB974u: goto label_805CB974;
    case 0x805CB978u: goto label_805CB978;
    case 0x805CB97Cu: goto label_805CB97C;
    case 0x805CB980u: goto label_805CB980;
    case 0x805CB984u: goto label_805CB984;
    case 0x805CB988u: goto label_805CB988;
    case 0x805CB98Cu: goto label_805CB98C;
    case 0x805CB990u: goto label_805CB990;
    case 0x805CB994u: goto label_805CB994;
    case 0x805CB998u: goto label_805CB998;
    case 0x805CB99Cu: goto label_805CB99C;
    case 0x805CB9A0u: goto label_805CB9A0;
    case 0x805CB9A4u: goto label_805CB9A4;
    case 0x805CB9A8u: goto label_805CB9A8;
    case 0x805CB9ACu: goto label_805CB9AC;
    case 0x805CB9B0u: goto label_805CB9B0;
    case 0x805CB9B4u: goto label_805CB9B4;
    case 0x805CB9B8u: goto label_805CB9B8;
    case 0x805CB9BCu: goto label_805CB9BC;
    case 0x805CB9C0u: goto label_805CB9C0;
    case 0x805CB9C4u: goto label_805CB9C4;
    case 0x805CB9C8u: goto label_805CB9C8;
    case 0x805CB9CCu: goto label_805CB9CC;
    case 0x805CB9D0u: goto label_805CB9D0;
    case 0x805CB9D4u: goto label_805CB9D4;
    case 0x805CB9D8u: goto label_805CB9D8;
    case 0x805CB9DCu: goto label_805CB9DC;
    case 0x805CB9E0u: goto label_805CB9E0;
    case 0x805CB9E4u: goto label_805CB9E4;
    case 0x805CB9E8u: goto label_805CB9E8;
    case 0x805CB9ECu: goto label_805CB9EC;
    case 0x805CB9F0u: goto label_805CB9F0;
    case 0x805CB9F4u: goto label_805CB9F4;
    case 0x805CB9F8u: goto label_805CB9F8;
    case 0x805CB9FCu: goto label_805CB9FC;
    case 0x805CBA00u: goto label_805CBA00;
    case 0x805CBA04u: goto label_805CBA04;
    case 0x805CBA08u: goto label_805CBA08;
    case 0x805CBA0Cu: goto label_805CBA0C;
    case 0x805CBA10u: goto label_805CBA10;
    case 0x805CBA14u: goto label_805CBA14;
    case 0x805CBA18u: goto label_805CBA18;
    case 0x805CBA1Cu: goto label_805CBA1C;
    case 0x805CBA20u: goto label_805CBA20;
    case 0x805CBA24u: goto label_805CBA24;
    case 0x805CBA28u: goto label_805CBA28;
    case 0x805CBA2Cu: goto label_805CBA2C;
    case 0x805CBA30u: goto label_805CBA30;
    case 0x805CBA34u: goto label_805CBA34;
    case 0x805CBA38u: goto label_805CBA38;
    case 0x805CBA3Cu: goto label_805CBA3C;
    case 0x805CBA40u: goto label_805CBA40;
    case 0x805CBA44u: goto label_805CBA44;
    case 0x805CBA48u: goto label_805CBA48;
    case 0x805CBA4Cu: goto label_805CBA4C;
    case 0x805CBA50u: goto label_805CBA50;
    case 0x805CBA54u: goto label_805CBA54;
    case 0x805CBA58u: goto label_805CBA58;
    case 0x805CBA5Cu: goto label_805CBA5C;
    case 0x805CBA60u: goto label_805CBA60;
    case 0x805CBA64u: goto label_805CBA64;
    case 0x805CBA68u: goto label_805CBA68;
    case 0x805CBA6Cu: goto label_805CBA6C;
    case 0x805CBA70u: goto label_805CBA70;
    case 0x805CBA74u: goto label_805CBA74;
    case 0x805CBA78u: goto label_805CBA78;
    case 0x805CBA7Cu: goto label_805CBA7C;
    case 0x805CBA80u: goto label_805CBA80;
    case 0x805CBA84u: goto label_805CBA84;
    case 0x805CBA88u: goto label_805CBA88;
    case 0x805CBA8Cu: goto label_805CBA8C;
    case 0x805CBA90u: goto label_805CBA90;
    case 0x805CBA94u: goto label_805CBA94;
    case 0x805CBA98u: goto label_805CBA98;
    case 0x805CBA9Cu: goto label_805CBA9C;
    case 0x805CBAA0u: goto label_805CBAA0;
    case 0x805CBAA4u: goto label_805CBAA4;
    case 0x805CBAA8u: goto label_805CBAA8;
    case 0x805CBAACu: goto label_805CBAAC;
    case 0x805CBAB0u: goto label_805CBAB0;
    case 0x805CBAB4u: goto label_805CBAB4;
    case 0x805CBAB8u: goto label_805CBAB8;
    case 0x805CBABCu: goto label_805CBABC;
    case 0x805CBAC0u: goto label_805CBAC0;
    case 0x805CBAC4u: goto label_805CBAC4;
    case 0x805CBAC8u: goto label_805CBAC8;
    case 0x805CBACCu: goto label_805CBACC;
    case 0x805CBAD0u: goto label_805CBAD0;
    case 0x805CBAD4u: goto label_805CBAD4;
    case 0x805CBAD8u: goto label_805CBAD8;
    case 0x805CBADCu: goto label_805CBADC;
    case 0x805CBAE0u: goto label_805CBAE0;
    case 0x805CBAE4u: goto label_805CBAE4;
    case 0x805CBAE8u: goto label_805CBAE8;
    case 0x805CBAECu: goto label_805CBAEC;
    case 0x805CBAF0u: goto label_805CBAF0;
    case 0x805CBAF4u: goto label_805CBAF4;
    case 0x805CBAF8u: goto label_805CBAF8;
    case 0x805CBAFCu: goto label_805CBAFC;
    case 0x805CBB00u: goto label_805CBB00;
    case 0x805CBB04u: goto label_805CBB04;
    case 0x805CBB08u: goto label_805CBB08;
    case 0x805CBB0Cu: goto label_805CBB0C;
    case 0x805CBB10u: goto label_805CBB10;
    case 0x805CBB14u: goto label_805CBB14;
    case 0x805CBB18u: goto label_805CBB18;
    case 0x805CBB1Cu: goto label_805CBB1C;
    case 0x805CBB20u: goto label_805CBB20;
    case 0x805CBB24u: goto label_805CBB24;
    case 0x805CBB28u: goto label_805CBB28;
    case 0x805CBB2Cu: goto label_805CBB2C;
    case 0x805CBB30u: goto label_805CBB30;
    case 0x805CBB34u: goto label_805CBB34;
    case 0x805CBB38u: goto label_805CBB38;
    case 0x805CBB3Cu: goto label_805CBB3C;
    case 0x805CBB40u: goto label_805CBB40;
    case 0x805CBB44u: goto label_805CBB44;
    case 0x805CBB48u: goto label_805CBB48;
    case 0x805CBB4Cu: goto label_805CBB4C;
    case 0x805CBB50u: goto label_805CBB50;
    case 0x805CBB54u: goto label_805CBB54;
    case 0x805CBB58u: goto label_805CBB58;
    case 0x805CBB5Cu: goto label_805CBB5C;
    case 0x805CBB60u: goto label_805CBB60;
    case 0x805CBB64u: goto label_805CBB64;
    case 0x805CBB68u: goto label_805CBB68;
    case 0x805CBB6Cu: goto label_805CBB6C;
    case 0x805CBB70u: goto label_805CBB70;
    case 0x805CBB74u: goto label_805CBB74;
    case 0x805CBB78u: goto label_805CBB78;
    case 0x805CBB7Cu: goto label_805CBB7C;
    case 0x805CBB80u: goto label_805CBB80;
    case 0x805CBB84u: goto label_805CBB84;
    case 0x805CBB88u: goto label_805CBB88;
    case 0x805CBB8Cu: goto label_805CBB8C;
    case 0x805CBB90u: goto label_805CBB90;
    case 0x805CBB94u: goto label_805CBB94;
    case 0x805CBB98u: goto label_805CBB98;
    case 0x805CBB9Cu: goto label_805CBB9C;
    case 0x805CBBA0u: goto label_805CBBA0;
    case 0x805CBBA4u: goto label_805CBBA4;
    case 0x805CBBA8u: goto label_805CBBA8;
    case 0x805CBBACu: goto label_805CBBAC;
    case 0x805CBBB0u: goto label_805CBBB0;
    case 0x805CBBB4u: goto label_805CBBB4;
    case 0x805CBBB8u: goto label_805CBBB8;
    case 0x805CBBBCu: goto label_805CBBBC;
    case 0x805CBBC0u: goto label_805CBBC0;
    case 0x805CBBC4u: goto label_805CBBC4;
    case 0x805CBBC8u: goto label_805CBBC8;
    case 0x805CBBCCu: goto label_805CBBCC;
    case 0x805CBBD0u: goto label_805CBBD0;
    case 0x805CBBD4u: goto label_805CBBD4;
    case 0x805CBBD8u: goto label_805CBBD8;
    case 0x805CBBDCu: goto label_805CBBDC;
    case 0x805CBBE0u: goto label_805CBBE0;
    case 0x805CBBE4u: goto label_805CBBE4;
    case 0x805CBBE8u: goto label_805CBBE8;
    case 0x805CBBECu: goto label_805CBBEC;
    case 0x805CBBF0u: goto label_805CBBF0;
    case 0x805CBBF4u: goto label_805CBBF4;
    case 0x805CBBF8u: goto label_805CBBF8;
    case 0x805CBBFCu: goto label_805CBBFC;
    case 0x805CBC00u: goto label_805CBC00;
    case 0x805CBC04u: goto label_805CBC04;
    case 0x805CBC08u: goto label_805CBC08;
    case 0x805CBC0Cu: goto label_805CBC0C;
    case 0x805CBC10u: goto label_805CBC10;
    case 0x805CBC14u: goto label_805CBC14;
    case 0x805CBC18u: goto label_805CBC18;
    case 0x805CBC1Cu: goto label_805CBC1C;
    case 0x805CBC20u: goto label_805CBC20;
    case 0x805CBC24u: goto label_805CBC24;
    case 0x805CBC28u: goto label_805CBC28;
    case 0x805CBC2Cu: goto label_805CBC2C;
    case 0x805CBC30u: goto label_805CBC30;
    case 0x805CBC34u: goto label_805CBC34;
    case 0x805CBC38u: goto label_805CBC38;
    case 0x805CBC3Cu: goto label_805CBC3C;
    case 0x805CBC40u: goto label_805CBC40;
    case 0x805CBC44u: goto label_805CBC44;
    case 0x805CBC48u: goto label_805CBC48;
    case 0x805CBC4Cu: goto label_805CBC4C;
    case 0x805CBC50u: goto label_805CBC50;
    case 0x805CBC54u: goto label_805CBC54;
    case 0x805CBC58u: goto label_805CBC58;
    case 0x805CBC5Cu: goto label_805CBC5C;
    case 0x805CBC60u: goto label_805CBC60;
    case 0x805CBC64u: goto label_805CBC64;
    case 0x805CBC68u: goto label_805CBC68;
    case 0x805CBC6Cu: goto label_805CBC6C;
    case 0x805CBC70u: goto label_805CBC70;
    case 0x805CBC74u: goto label_805CBC74;
    case 0x805CBC78u: goto label_805CBC78;
    case 0x805CBC7Cu: goto label_805CBC7C;
    case 0x805CBC80u: goto label_805CBC80;
    case 0x805CBC84u: goto label_805CBC84;
    case 0x805CBC88u: goto label_805CBC88;
    case 0x805CBC8Cu: goto label_805CBC8C;
    case 0x805CBC90u: goto label_805CBC90;
    case 0x805CBC94u: goto label_805CBC94;
    case 0x805CBC98u: goto label_805CBC98;
    case 0x805CBC9Cu: goto label_805CBC9C;
    case 0x805CBCA0u: goto label_805CBCA0;
    case 0x805CBCA4u: goto label_805CBCA4;
    case 0x805CBCA8u: goto label_805CBCA8;
    case 0x805CBCACu: goto label_805CBCAC;
    case 0x805CBCB0u: goto label_805CBCB0;
    case 0x805CBCB4u: goto label_805CBCB4;
    case 0x805CBCB8u: goto label_805CBCB8;
    case 0x805CBCBCu: goto label_805CBCBC;
    case 0x805CBCC0u: goto label_805CBCC0;
    case 0x805CBCC4u: goto label_805CBCC4;
    case 0x805CBCC8u: goto label_805CBCC8;
    case 0x805CBCCCu: goto label_805CBCCC;
    case 0x805CBCD0u: goto label_805CBCD0;
    case 0x805CBCD4u: goto label_805CBCD4;
    case 0x805CBCD8u: goto label_805CBCD8;
    case 0x805CBCDCu: goto label_805CBCDC;
    case 0x805CBCE0u: goto label_805CBCE0;
    case 0x805CBCE4u: goto label_805CBCE4;
    case 0x805CBCE8u: goto label_805CBCE8;
    case 0x805CBCECu: goto label_805CBCEC;
    case 0x805CBCF0u: goto label_805CBCF0;
    case 0x805CBCF4u: goto label_805CBCF4;
    case 0x805CBCF8u: goto label_805CBCF8;
    case 0x805CBCFCu: goto label_805CBCFC;
    case 0x805CBD00u: goto label_805CBD00;
    case 0x805CBD04u: goto label_805CBD04;
    case 0x805CBD08u: goto label_805CBD08;
    case 0x805CBD0Cu: goto label_805CBD0C;
    case 0x805CBD10u: goto label_805CBD10;
    case 0x805CBD14u: goto label_805CBD14;
    case 0x805CBD18u: goto label_805CBD18;
    case 0x805CBD1Cu: goto label_805CBD1C;
    case 0x805CBD20u: goto label_805CBD20;
    case 0x805CBD24u: goto label_805CBD24;
    case 0x805CBD28u: goto label_805CBD28;
    case 0x805CBD2Cu: goto label_805CBD2C;
    case 0x805CBD30u: goto label_805CBD30;
    case 0x805CBD34u: goto label_805CBD34;
    case 0x805CBD38u: goto label_805CBD38;
    case 0x805CBD3Cu: goto label_805CBD3C;
    case 0x805CBD40u: goto label_805CBD40;
    case 0x805CBD44u: goto label_805CBD44;
    case 0x805CBD48u: goto label_805CBD48;
    case 0x805CBD4Cu: goto label_805CBD4C;
    case 0x805CBD50u: goto label_805CBD50;
    case 0x805CBD54u: goto label_805CBD54;
    case 0x805CBD58u: goto label_805CBD58;
    case 0x805CBD5Cu: goto label_805CBD5C;
    case 0x805CBD60u: goto label_805CBD60;
    case 0x805CBD64u: goto label_805CBD64;
    case 0x805CBD68u: goto label_805CBD68;
    case 0x805CBD6Cu: goto label_805CBD6C;
    case 0x805CBD70u: goto label_805CBD70;
    case 0x805CBD74u: goto label_805CBD74;
    case 0x805CBD78u: goto label_805CBD78;
    case 0x805CBD7Cu: goto label_805CBD7C;
    case 0x805CBD80u: goto label_805CBD80;
    case 0x805CBD84u: goto label_805CBD84;
    case 0x805CBD88u: goto label_805CBD88;
    case 0x805CBD8Cu: goto label_805CBD8C;
    case 0x805CBD90u: goto label_805CBD90;
    case 0x805CBD94u: goto label_805CBD94;
    case 0x805CBD98u: goto label_805CBD98;
    case 0x805CBD9Cu: goto label_805CBD9C;
    case 0x805CBDA0u: goto label_805CBDA0;
    case 0x805CBDA4u: goto label_805CBDA4;
    case 0x805CBDA8u: goto label_805CBDA8;
    case 0x805CBDACu: goto label_805CBDAC;
    case 0x805CBDB0u: goto label_805CBDB0;
    case 0x805CBDB4u: goto label_805CBDB4;
    case 0x805CBDB8u: goto label_805CBDB8;
    case 0x805CBDBCu: goto label_805CBDBC;
    case 0x805CBDC0u: goto label_805CBDC0;
    case 0x805CBDC4u: goto label_805CBDC4;
    case 0x805CBDC8u: goto label_805CBDC8;
    case 0x805CBDCCu: goto label_805CBDCC;
    case 0x805CBDD0u: goto label_805CBDD0;
    case 0x805CBDD4u: goto label_805CBDD4;
    case 0x805CBDD8u: goto label_805CBDD8;
    case 0x805CBDDCu: goto label_805CBDDC;
    case 0x805CBDE0u: goto label_805CBDE0;
    case 0x805CBDE4u: goto label_805CBDE4;
    case 0x805CBDE8u: goto label_805CBDE8;
    case 0x805CBDECu: goto label_805CBDEC;
    case 0x805CBDF0u: goto label_805CBDF0;
    case 0x805CBDF4u: goto label_805CBDF4;
    case 0x805CBDF8u: goto label_805CBDF8;
    case 0x805CBDFCu: goto label_805CBDFC;
    case 0x805CBE00u: goto label_805CBE00;
    case 0x805CBE04u: goto label_805CBE04;
    case 0x805CBE08u: goto label_805CBE08;
    case 0x805CBE0Cu: goto label_805CBE0C;
    case 0x805CBE10u: goto label_805CBE10;
    case 0x805CBE14u: goto label_805CBE14;
    case 0x805CBE18u: goto label_805CBE18;
    case 0x805CBE1Cu: goto label_805CBE1C;
    case 0x805CBE20u: goto label_805CBE20;
    case 0x805CBE24u: goto label_805CBE24;
    case 0x805CBE28u: goto label_805CBE28;
    case 0x805CBE2Cu: goto label_805CBE2C;
    case 0x805CBE30u: goto label_805CBE30;
    case 0x805CBE34u: goto label_805CBE34;
    case 0x805CBE38u: goto label_805CBE38;
    case 0x805CBE3Cu: goto label_805CBE3C;
    case 0x805CBE40u: goto label_805CBE40;
    case 0x805CBE44u: goto label_805CBE44;
    case 0x805CBE48u: goto label_805CBE48;
    case 0x805CBE4Cu: goto label_805CBE4C;
    case 0x805CBE50u: goto label_805CBE50;
    case 0x805CBE54u: goto label_805CBE54;
    case 0x805CBE58u: goto label_805CBE58;
    case 0x805CBE5Cu: goto label_805CBE5C;
    case 0x805CBE60u: goto label_805CBE60;
    case 0x805CBE64u: goto label_805CBE64;
    case 0x805CBE68u: goto label_805CBE68;
    case 0x805CBE6Cu: goto label_805CBE6C;
    case 0x805CBE70u: goto label_805CBE70;
    case 0x805CBE74u: goto label_805CBE74;
    case 0x805CBE78u: goto label_805CBE78;
    case 0x805CBE7Cu: goto label_805CBE7C;
    case 0x805CBE80u: goto label_805CBE80;
    case 0x805CBE84u: goto label_805CBE84;
    case 0x805CBE88u: goto label_805CBE88;
    case 0x805CBE8Cu: goto label_805CBE8C;
    case 0x805CBE90u: goto label_805CBE90;
    case 0x805CBE94u: goto label_805CBE94;
    case 0x805CBE98u: goto label_805CBE98;
    case 0x805CBE9Cu: goto label_805CBE9C;
    case 0x805CBEA0u: goto label_805CBEA0;
    case 0x805CBEA4u: goto label_805CBEA4;
    case 0x805CBEA8u: goto label_805CBEA8;
    case 0x805CBEACu: goto label_805CBEAC;
    case 0x805CBEB0u: goto label_805CBEB0;
    case 0x805CBEB4u: goto label_805CBEB4;
    case 0x805CBEB8u: goto label_805CBEB8;
    case 0x805CBEBCu: goto label_805CBEBC;
    case 0x805CBEC0u: goto label_805CBEC0;
    case 0x805CBEC4u: goto label_805CBEC4;
    case 0x805CBEC8u: goto label_805CBEC8;
    case 0x805CBECCu: goto label_805CBECC;
    case 0x805CBED0u: goto label_805CBED0;
    case 0x805CBED4u: goto label_805CBED4;
    case 0x805CBED8u: goto label_805CBED8;
    case 0x805CBEDCu: goto label_805CBEDC;
    case 0x805CBEE0u: goto label_805CBEE0;
    case 0x805CBEE4u: goto label_805CBEE4;
    case 0x805CBEE8u: goto label_805CBEE8;
    case 0x805CBEECu: goto label_805CBEEC;
    case 0x805CBEF0u: goto label_805CBEF0;
    case 0x805CBEF4u: goto label_805CBEF4;
    case 0x805CBEF8u: goto label_805CBEF8;
    case 0x805CBEFCu: goto label_805CBEFC;
    case 0x805CBF00u: goto label_805CBF00;
    case 0x805CBF04u: goto label_805CBF04;
    case 0x805CBF08u: goto label_805CBF08;
    case 0x805CBF0Cu: goto label_805CBF0C;
    case 0x805CBF10u: goto label_805CBF10;
    case 0x805CBF14u: goto label_805CBF14;
    case 0x805CBF18u: goto label_805CBF18;
    case 0x805CBF1Cu: goto label_805CBF1C;
    case 0x805CBF20u: goto label_805CBF20;
    case 0x805CBF24u: goto label_805CBF24;
    case 0x805CBF28u: goto label_805CBF28;
    case 0x805CBF2Cu: goto label_805CBF2C;
    case 0x805CBF30u: goto label_805CBF30;
    case 0x805CBF34u: goto label_805CBF34;
    case 0x805CBF38u: goto label_805CBF38;
    case 0x805CBF3Cu: goto label_805CBF3C;
    case 0x805CBF40u: goto label_805CBF40;
    case 0x805CBF44u: goto label_805CBF44;
    case 0x805CBF48u: goto label_805CBF48;
    case 0x805CBF4Cu: goto label_805CBF4C;
    case 0x805CBF50u: goto label_805CBF50;
    case 0x805CBF54u: goto label_805CBF54;
    case 0x805CBF58u: goto label_805CBF58;
    case 0x805CBF5Cu: goto label_805CBF5C;
    case 0x805CBF60u: goto label_805CBF60;
    case 0x805CBF64u: goto label_805CBF64;
    case 0x805CBF68u: goto label_805CBF68;
    case 0x805CBF6Cu: goto label_805CBF6C;
    case 0x805CBF70u: goto label_805CBF70;
    case 0x805CBF74u: goto label_805CBF74;
    case 0x805CBF78u: goto label_805CBF78;
    case 0x805CBF7Cu: goto label_805CBF7C;
    case 0x805CBF80u: goto label_805CBF80;
    case 0x805CBF84u: goto label_805CBF84;
    case 0x805CBF88u: goto label_805CBF88;
    case 0x805CBF8Cu: goto label_805CBF8C;
    case 0x805CBF90u: goto label_805CBF90;
    case 0x805CBF94u: goto label_805CBF94;
    case 0x805CBF98u: goto label_805CBF98;
    case 0x805CBF9Cu: goto label_805CBF9C;
    case 0x805CBFA0u: goto label_805CBFA0;
    case 0x805CBFA4u: goto label_805CBFA4;
    case 0x805CBFA8u: goto label_805CBFA8;
    case 0x805CBFACu: goto label_805CBFAC;
    case 0x805CBFB0u: goto label_805CBFB0;
    case 0x805CBFB4u: goto label_805CBFB4;
    case 0x805CBFB8u: goto label_805CBFB8;
    case 0x805CBFBCu: goto label_805CBFBC;
    case 0x805CBFC0u: goto label_805CBFC0;
    case 0x805CBFC4u: goto label_805CBFC4;
    case 0x805CBFC8u: goto label_805CBFC8;
    case 0x805CBFCCu: goto label_805CBFCC;
    case 0x805CBFD0u: goto label_805CBFD0;
    case 0x805CBFD4u: goto label_805CBFD4;
    case 0x805CBFD8u: goto label_805CBFD8;
    case 0x805CBFDCu: goto label_805CBFDC;
    case 0x805CBFE0u: goto label_805CBFE0;
    case 0x805CBFE4u: goto label_805CBFE4;
    case 0x805CBFE8u: goto label_805CBFE8;
    case 0x805CBFECu: goto label_805CBFEC;
    case 0x805CBFF0u: goto label_805CBFF0;
    case 0x805CBFF4u: goto label_805CBFF4;
    case 0x805CBFF8u: goto label_805CBFF8;
    case 0x805CBFFCu: goto label_805CBFFC;
    case 0x805CC000u: goto label_805CC000;
    case 0x805CC004u: goto label_805CC004;
    case 0x805CC008u: goto label_805CC008;
    case 0x805CC00Cu: goto label_805CC00C;
    case 0x805CC010u: goto label_805CC010;
    case 0x805CC014u: goto label_805CC014;
    case 0x805CC018u: goto label_805CC018;
    case 0x805CC01Cu: goto label_805CC01C;
    case 0x805CC020u: goto label_805CC020;
    case 0x805CC024u: goto label_805CC024;
    case 0x805CC028u: goto label_805CC028;
    case 0x805CC02Cu: goto label_805CC02C;
    case 0x805CC030u: goto label_805CC030;
    case 0x805CC034u: goto label_805CC034;
    case 0x805CC038u: goto label_805CC038;
    case 0x805CC03Cu: goto label_805CC03C;
    case 0x805CC040u: goto label_805CC040;
    case 0x805CC044u: goto label_805CC044;
    case 0x805CC048u: goto label_805CC048;
    case 0x805CC04Cu: goto label_805CC04C;
    case 0x805CC050u: goto label_805CC050;
    case 0x805CC054u: goto label_805CC054;
    case 0x805CC058u: goto label_805CC058;
    case 0x805CC05Cu: goto label_805CC05C;
    case 0x805CC060u: goto label_805CC060;
    case 0x805CC064u: goto label_805CC064;
    case 0x805CC068u: goto label_805CC068;
    case 0x805CC06Cu: goto label_805CC06C;
    case 0x805CC070u: goto label_805CC070;
    case 0x805CC074u: goto label_805CC074;
    case 0x805CC078u: goto label_805CC078;
    case 0x805CC07Cu: goto label_805CC07C;
    case 0x805CC080u: goto label_805CC080;
    case 0x805CC084u: goto label_805CC084;
    case 0x805CC088u: goto label_805CC088;
    case 0x805CC08Cu: goto label_805CC08C;
    case 0x805CC090u: goto label_805CC090;
    case 0x805CC094u: goto label_805CC094;
    case 0x805CC098u: goto label_805CC098;
    case 0x805CC09Cu: goto label_805CC09C;
    case 0x805CC0A0u: goto label_805CC0A0;
    case 0x805CC0A4u: goto label_805CC0A4;
    case 0x805CC0A8u: goto label_805CC0A8;
    case 0x805CC0ACu: goto label_805CC0AC;
    case 0x805CC0B0u: goto label_805CC0B0;
    case 0x805CC0B4u: goto label_805CC0B4;
    case 0x805CC0B8u: goto label_805CC0B8;
    case 0x805CC0BCu: goto label_805CC0BC;
    case 0x805CC0C0u: goto label_805CC0C0;
    case 0x805CC0C4u: goto label_805CC0C4;
    case 0x805CC0C8u: goto label_805CC0C8;
    case 0x805CC0CCu: goto label_805CC0CC;
    case 0x805CC0D0u: goto label_805CC0D0;
    case 0x805CC0D4u: goto label_805CC0D4;
    case 0x805CC0D8u: goto label_805CC0D8;
    case 0x805CC0DCu: goto label_805CC0DC;
    case 0x805CC0E0u: goto label_805CC0E0;
    case 0x805CC0E4u: goto label_805CC0E4;
    case 0x805CC0E8u: goto label_805CC0E8;
    case 0x805CC0ECu: goto label_805CC0EC;
    case 0x805CC0F0u: goto label_805CC0F0;
    case 0x805CC0F4u: goto label_805CC0F4;
    case 0x805CC0F8u: goto label_805CC0F8;
    case 0x805CC0FCu: goto label_805CC0FC;
    case 0x805CC100u: goto label_805CC100;
    case 0x805CC104u: goto label_805CC104;
    case 0x805CC108u: goto label_805CC108;
    case 0x805CC10Cu: goto label_805CC10C;
    case 0x805CC110u: goto label_805CC110;
    case 0x805CC114u: goto label_805CC114;
    case 0x805CC118u: goto label_805CC118;
    case 0x805CC11Cu: goto label_805CC11C;
    case 0x805CC120u: goto label_805CC120;
    case 0x805CC124u: goto label_805CC124;
    case 0x805CC128u: goto label_805CC128;
    case 0x805CC12Cu: goto label_805CC12C;
    case 0x805CC130u: goto label_805CC130;
    case 0x805CC134u: goto label_805CC134;
    case 0x805CC138u: goto label_805CC138;
    case 0x805CC13Cu: goto label_805CC13C;
    case 0x805CC140u: goto label_805CC140;
    case 0x805CC144u: goto label_805CC144;
    case 0x805CC148u: goto label_805CC148;
    case 0x805CC14Cu: goto label_805CC14C;
    case 0x805CC150u: goto label_805CC150;
    case 0x805CC154u: goto label_805CC154;
    case 0x805CC158u: goto label_805CC158;
    case 0x805CC15Cu: goto label_805CC15C;
    case 0x805CC160u: goto label_805CC160;
    case 0x805CC164u: goto label_805CC164;
    case 0x805CC168u: goto label_805CC168;
    case 0x805CC16Cu: goto label_805CC16C;
    case 0x805CC170u: goto label_805CC170;
    case 0x805CC174u: goto label_805CC174;
    case 0x805CC178u: goto label_805CC178;
    case 0x805CC17Cu: goto label_805CC17C;
    case 0x805CC180u: goto label_805CC180;
    case 0x805CC184u: goto label_805CC184;
    case 0x805CC188u: goto label_805CC188;
    case 0x805CC18Cu: goto label_805CC18C;
    case 0x805CC190u: goto label_805CC190;
    case 0x805CC194u: goto label_805CC194;
    case 0x805CC198u: goto label_805CC198;
    case 0x805CC19Cu: goto label_805CC19C;
    case 0x805CC1A0u: goto label_805CC1A0;
    case 0x805CC1A4u: goto label_805CC1A4;
    case 0x805CC1A8u: goto label_805CC1A8;
    case 0x805CC1ACu: goto label_805CC1AC;
    case 0x805CC1B0u: goto label_805CC1B0;
    case 0x805CC1B4u: goto label_805CC1B4;
    case 0x805CC1B8u: goto label_805CC1B8;
    case 0x805CC1BCu: goto label_805CC1BC;
    case 0x805CC1C0u: goto label_805CC1C0;
    case 0x805CC1C4u: goto label_805CC1C4;
    case 0x805CC1C8u: goto label_805CC1C8;
    case 0x805CC1CCu: goto label_805CC1CC;
    case 0x805CC1D0u: goto label_805CC1D0;
    case 0x805CC1D4u: goto label_805CC1D4;
    case 0x805CC1D8u: goto label_805CC1D8;
    case 0x805CC1DCu: goto label_805CC1DC;
    case 0x805CC1E0u: goto label_805CC1E0;
    case 0x805CC1E4u: goto label_805CC1E4;
    case 0x805CC1E8u: goto label_805CC1E8;
    case 0x805CC1ECu: goto label_805CC1EC;
    case 0x805CC1F0u: goto label_805CC1F0;
    case 0x805CC1F4u: goto label_805CC1F4;
    case 0x805CC1F8u: goto label_805CC1F8;
    case 0x805CC1FCu: goto label_805CC1FC;
    case 0x805CC200u: goto label_805CC200;
    case 0x805CC204u: goto label_805CC204;
    case 0x805CC208u: goto label_805CC208;
    case 0x805CC20Cu: goto label_805CC20C;
    case 0x805CC210u: goto label_805CC210;
    case 0x805CC214u: goto label_805CC214;
    case 0x805CC218u: goto label_805CC218;
    case 0x805CC21Cu: goto label_805CC21C;
    case 0x805CC220u: goto label_805CC220;
    case 0x805CC224u: goto label_805CC224;
    case 0x805CC228u: goto label_805CC228;
    case 0x805CC22Cu: goto label_805CC22C;
    case 0x805CC230u: goto label_805CC230;
    case 0x805CC234u: goto label_805CC234;
    case 0x805CC238u: goto label_805CC238;
    case 0x805CC23Cu: goto label_805CC23C;
    case 0x805CC240u: goto label_805CC240;
    case 0x805CC244u: goto label_805CC244;
    case 0x805CC248u: goto label_805CC248;
    case 0x805CC24Cu: goto label_805CC24C;
    case 0x805CC250u: goto label_805CC250;
    case 0x805CC254u: goto label_805CC254;
    case 0x805CC258u: goto label_805CC258;
    case 0x805CC25Cu: goto label_805CC25C;
    case 0x805CC260u: goto label_805CC260;
    case 0x805CC264u: goto label_805CC264;
    case 0x805CC268u: goto label_805CC268;
    case 0x805CC26Cu: goto label_805CC26C;
    case 0x805CC270u: goto label_805CC270;
    case 0x805CC274u: goto label_805CC274;
    case 0x805CC278u: goto label_805CC278;
    case 0x805CC27Cu: goto label_805CC27C;
    case 0x805CC280u: goto label_805CC280;
    case 0x805CC284u: goto label_805CC284;
    case 0x805CC288u: goto label_805CC288;
    case 0x805CC28Cu: goto label_805CC28C;
    case 0x805CC290u: goto label_805CC290;
    case 0x805CC294u: goto label_805CC294;
    case 0x805CC298u: goto label_805CC298;
    case 0x805CC29Cu: goto label_805CC29C;
    case 0x805CC2A0u: goto label_805CC2A0;
    case 0x805CC2A4u: goto label_805CC2A4;
    case 0x805CC2A8u: goto label_805CC2A8;
    case 0x805CC2ACu: goto label_805CC2AC;
    case 0x805CC2B0u: goto label_805CC2B0;
    case 0x805CC2B4u: goto label_805CC2B4;
    case 0x805CC2B8u: goto label_805CC2B8;
    case 0x805CC2BCu: goto label_805CC2BC;
    case 0x805CC2C0u: goto label_805CC2C0;
    case 0x805CC2C4u: goto label_805CC2C4;
    case 0x805CC2C8u: goto label_805CC2C8;
    case 0x805CC2CCu: goto label_805CC2CC;
    case 0x805CC2D0u: goto label_805CC2D0;
    case 0x805CC2D4u: goto label_805CC2D4;
    case 0x805CC2D8u: goto label_805CC2D8;
    case 0x805CC2DCu: goto label_805CC2DC;
    case 0x805CC2E0u: goto label_805CC2E0;
    case 0x805CC2E4u: goto label_805CC2E4;
    case 0x805CC2E8u: goto label_805CC2E8;
    case 0x805CC2ECu: goto label_805CC2EC;
    case 0x805CC2F0u: goto label_805CC2F0;
    case 0x805CC2F4u: goto label_805CC2F4;
    case 0x805CC2F8u: goto label_805CC2F8;
    case 0x805CC2FCu: goto label_805CC2FC;
    case 0x805CC300u: goto label_805CC300;
    case 0x805CC304u: goto label_805CC304;
    case 0x805CC308u: goto label_805CC308;
    case 0x805CC30Cu: goto label_805CC30C;
    case 0x805CC310u: goto label_805CC310;
    case 0x805CC314u: goto label_805CC314;
    case 0x805CC318u: goto label_805CC318;
    case 0x805CC31Cu: goto label_805CC31C;
    case 0x805CC320u: goto label_805CC320;
    case 0x805CC324u: goto label_805CC324;
    case 0x805CC328u: goto label_805CC328;
    case 0x805CC32Cu: goto label_805CC32C;
    case 0x805CC330u: goto label_805CC330;
    case 0x805CC334u: goto label_805CC334;
    case 0x805CC338u: goto label_805CC338;
    case 0x805CC33Cu: goto label_805CC33C;
    case 0x805CC340u: goto label_805CC340;
    case 0x805CC344u: goto label_805CC344;
    case 0x805CC348u: goto label_805CC348;
    case 0x805CC34Cu: goto label_805CC34C;
    case 0x805CC350u: goto label_805CC350;
    case 0x805CC354u: goto label_805CC354;
    case 0x805CC358u: goto label_805CC358;
    case 0x805CC35Cu: goto label_805CC35C;
    case 0x805CC360u: goto label_805CC360;
    case 0x805CC364u: goto label_805CC364;
    case 0x805CC368u: goto label_805CC368;
    case 0x805CC36Cu: goto label_805CC36C;
    case 0x805CC370u: goto label_805CC370;
    case 0x805CC374u: goto label_805CC374;
    case 0x805CC378u: goto label_805CC378;
    case 0x805CC37Cu: goto label_805CC37C;
    case 0x805CC380u: goto label_805CC380;
    case 0x805CC384u: goto label_805CC384;
    case 0x805CC388u: goto label_805CC388;
    case 0x805CC38Cu: goto label_805CC38C;
    case 0x805CC390u: goto label_805CC390;
    case 0x805CC394u: goto label_805CC394;
    case 0x805CC398u: goto label_805CC398;
    case 0x805CC39Cu: goto label_805CC39C;
    case 0x805CC3A0u: goto label_805CC3A0;
    case 0x805CC3A4u: goto label_805CC3A4;
    case 0x805CC3A8u: goto label_805CC3A8;
    case 0x805CC3ACu: goto label_805CC3AC;
    case 0x805CC3B0u: goto label_805CC3B0;
    case 0x805CC3B4u: goto label_805CC3B4;
    case 0x805CC3B8u: goto label_805CC3B8;
    case 0x805CC3BCu: goto label_805CC3BC;
    case 0x805CC3C0u: goto label_805CC3C0;
    case 0x805CC3C4u: goto label_805CC3C4;
    case 0x805CC3C8u: goto label_805CC3C8;
    case 0x805CC3CCu: goto label_805CC3CC;
    case 0x805CC3D0u: goto label_805CC3D0;
    case 0x805CC3D4u: goto label_805CC3D4;
    case 0x805CC3D8u: goto label_805CC3D8;
    case 0x805CC3DCu: goto label_805CC3DC;
    case 0x805CC3E0u: goto label_805CC3E0;
    case 0x805CC3E4u: goto label_805CC3E4;
    case 0x805CC3E8u: goto label_805CC3E8;
    case 0x805CC3ECu: goto label_805CC3EC;
    case 0x805CC3F0u: goto label_805CC3F0;
    case 0x805CC3F4u: goto label_805CC3F4;
    case 0x805CC3F8u: goto label_805CC3F8;
    case 0x805CC3FCu: goto label_805CC3FC;
    case 0x805CC400u: goto label_805CC400;
    case 0x805CC404u: goto label_805CC404;
    case 0x805CC408u: goto label_805CC408;
    case 0x805CC40Cu: goto label_805CC40C;
    case 0x805CC410u: goto label_805CC410;
    case 0x805CC414u: goto label_805CC414;
    case 0x805CC418u: goto label_805CC418;
    case 0x805CC41Cu: goto label_805CC41C;
    case 0x805CC420u: goto label_805CC420;
    case 0x805CC424u: goto label_805CC424;
    case 0x805CC428u: goto label_805CC428;
    case 0x805CC42Cu: goto label_805CC42C;
    case 0x805CC430u: goto label_805CC430;
    case 0x805CC434u: goto label_805CC434;
    case 0x805CC438u: goto label_805CC438;
    case 0x805CC43Cu: goto label_805CC43C;
    case 0x805CC440u: goto label_805CC440;
    case 0x805CC444u: goto label_805CC444;
    case 0x805CC448u: goto label_805CC448;
    case 0x805CC44Cu: goto label_805CC44C;
    case 0x805CC450u: goto label_805CC450;
    case 0x805CC454u: goto label_805CC454;
    case 0x805CC458u: goto label_805CC458;
    case 0x805CC45Cu: goto label_805CC45C;
    case 0x805CC460u: goto label_805CC460;
    case 0x805CC464u: goto label_805CC464;
    case 0x805CC468u: goto label_805CC468;
    case 0x805CC46Cu: goto label_805CC46C;
    case 0x805CC470u: goto label_805CC470;
    case 0x805CC474u: goto label_805CC474;
    case 0x805CC478u: goto label_805CC478;
    case 0x805CC47Cu: goto label_805CC47C;
    case 0x805CC480u: goto label_805CC480;
    case 0x805CC484u: goto label_805CC484;
    case 0x805CC488u: goto label_805CC488;
    case 0x805CC48Cu: goto label_805CC48C;
    case 0x805CC490u: goto label_805CC490;
    case 0x805CC494u: goto label_805CC494;
    case 0x805CC498u: goto label_805CC498;
    case 0x805CC49Cu: goto label_805CC49C;
    case 0x805CC4A0u: goto label_805CC4A0;
    case 0x805CC4A4u: goto label_805CC4A4;
    case 0x805CC4A8u: goto label_805CC4A8;
    case 0x805CC4ACu: goto label_805CC4AC;
    case 0x805CC4B0u: goto label_805CC4B0;
    case 0x805CC4B4u: goto label_805CC4B4;
    case 0x805CC4B8u: goto label_805CC4B8;
    case 0x805CC4BCu: goto label_805CC4BC;
    case 0x805CC4C0u: goto label_805CC4C0;
    case 0x805CC4C4u: goto label_805CC4C4;
    case 0x805CC4C8u: goto label_805CC4C8;
    case 0x805CC4CCu: goto label_805CC4CC;
    case 0x805CC4D0u: goto label_805CC4D0;
    case 0x805CC4D4u: goto label_805CC4D4;
    case 0x805CC4D8u: goto label_805CC4D8;
    case 0x805CC4DCu: goto label_805CC4DC;
    case 0x805CC4E0u: goto label_805CC4E0;
    case 0x805CC4E4u: goto label_805CC4E4;
    case 0x805CC4E8u: goto label_805CC4E8;
    case 0x805CC4ECu: goto label_805CC4EC;
    case 0x805CC4F0u: goto label_805CC4F0;
    case 0x805CC4F4u: goto label_805CC4F4;
    case 0x805CC4F8u: goto label_805CC4F8;
    case 0x805CC4FCu: goto label_805CC4FC;
    case 0x805CC500u: goto label_805CC500;
    case 0x805CC504u: goto label_805CC504;
    case 0x805CC508u: goto label_805CC508;
    case 0x805CC50Cu: goto label_805CC50C;
    case 0x805CC510u: goto label_805CC510;
    case 0x805CC514u: goto label_805CC514;
    case 0x805CC518u: goto label_805CC518;
    case 0x805CC51Cu: goto label_805CC51C;
    case 0x805CC520u: goto label_805CC520;
    case 0x805CC524u: goto label_805CC524;
    case 0x805CC528u: goto label_805CC528;
    case 0x805CC52Cu: goto label_805CC52C;
    case 0x805CC530u: goto label_805CC530;
    case 0x805CC534u: goto label_805CC534;
    case 0x805CC538u: goto label_805CC538;
    case 0x805CC53Cu: goto label_805CC53C;
    case 0x805CC540u: goto label_805CC540;
    case 0x805CC544u: goto label_805CC544;
    case 0x805CC548u: goto label_805CC548;
    case 0x805CC54Cu: goto label_805CC54C;
    case 0x805CC550u: goto label_805CC550;
    case 0x805CC554u: goto label_805CC554;
    case 0x805CC558u: goto label_805CC558;
    case 0x805CC55Cu: goto label_805CC55C;
    case 0x805CC560u: goto label_805CC560;
    case 0x805CC564u: goto label_805CC564;
    case 0x805CC568u: goto label_805CC568;
    case 0x805CC56Cu: goto label_805CC56C;
    case 0x805CC570u: goto label_805CC570;
    case 0x805CC574u: goto label_805CC574;
    case 0x805CC578u: goto label_805CC578;
    case 0x805CC57Cu: goto label_805CC57C;
    case 0x805CC580u: goto label_805CC580;
    case 0x805CC584u: goto label_805CC584;
    case 0x805CC588u: goto label_805CC588;
    case 0x805CC58Cu: goto label_805CC58C;
    case 0x805CC590u: goto label_805CC590;
    case 0x805CC594u: goto label_805CC594;
    case 0x805CC598u: goto label_805CC598;
    case 0x805CC59Cu: goto label_805CC59C;
    case 0x805CC5A0u: goto label_805CC5A0;
    case 0x805CC5A4u: goto label_805CC5A4;
    case 0x805CC5A8u: goto label_805CC5A8;
    case 0x805CC5ACu: goto label_805CC5AC;
    case 0x805CC5B0u: goto label_805CC5B0;
    case 0x805CC5B4u: goto label_805CC5B4;
    case 0x805CC5B8u: goto label_805CC5B8;
    case 0x805CC5BCu: goto label_805CC5BC;
    case 0x805CC5C0u: goto label_805CC5C0;
    case 0x805CC5C4u: goto label_805CC5C4;
    case 0x805CC5C8u: goto label_805CC5C8;
    case 0x805CC5CCu: goto label_805CC5CC;
    case 0x805CC5D0u: goto label_805CC5D0;
    case 0x805CC5D4u: goto label_805CC5D4;
    case 0x805CC5D8u: goto label_805CC5D8;
    case 0x805CC5DCu: goto label_805CC5DC;
    case 0x805CC5E0u: goto label_805CC5E0;
    case 0x805CC5E4u: goto label_805CC5E4;
    case 0x805CC5E8u: goto label_805CC5E8;
    case 0x805CC5ECu: goto label_805CC5EC;
    case 0x805CC5F0u: goto label_805CC5F0;
    case 0x805CC5F4u: goto label_805CC5F4;
    case 0x805CC5F8u: goto label_805CC5F8;
    case 0x805CC5FCu: goto label_805CC5FC;
    case 0x805CC600u: goto label_805CC600;
    case 0x805CC604u: goto label_805CC604;
    case 0x805CC608u: goto label_805CC608;
    case 0x805CC60Cu: goto label_805CC60C;
    case 0x805CC610u: goto label_805CC610;
    case 0x805CC614u: goto label_805CC614;
    case 0x805CC618u: goto label_805CC618;
    case 0x805CC61Cu: goto label_805CC61C;
    case 0x805CC620u: goto label_805CC620;
    case 0x805CC624u: goto label_805CC624;
    case 0x805CC628u: goto label_805CC628;
    case 0x805CC62Cu: goto label_805CC62C;
    case 0x805CC630u: goto label_805CC630;
    case 0x805CC634u: goto label_805CC634;
    case 0x805CC638u: goto label_805CC638;
    case 0x805CC63Cu: goto label_805CC63C;
    case 0x805CC640u: goto label_805CC640;
    case 0x805CC644u: goto label_805CC644;
    case 0x805CC648u: goto label_805CC648;
    case 0x805CC64Cu: goto label_805CC64C;
    case 0x805CC650u: goto label_805CC650;
    case 0x805CC654u: goto label_805CC654;
    case 0x805CC658u: goto label_805CC658;
    case 0x805CC65Cu: goto label_805CC65C;
    case 0x805CC660u: goto label_805CC660;
    case 0x805CC664u: goto label_805CC664;
    case 0x805CC668u: goto label_805CC668;
    case 0x805CC66Cu: goto label_805CC66C;
    case 0x805CC670u: goto label_805CC670;
    case 0x805CC674u: goto label_805CC674;
    case 0x805CC678u: goto label_805CC678;
    case 0x805CC67Cu: goto label_805CC67C;
    case 0x805CC680u: goto label_805CC680;
    case 0x805CC684u: goto label_805CC684;
    case 0x805CC688u: goto label_805CC688;
    case 0x805CC68Cu: goto label_805CC68C;
    case 0x805CC690u: goto label_805CC690;
    case 0x805CC694u: goto label_805CC694;
    case 0x805CC698u: goto label_805CC698;
    case 0x805CC69Cu: goto label_805CC69C;
    case 0x805CC6A0u: goto label_805CC6A0;
    case 0x805CC6A4u: goto label_805CC6A4;
    case 0x805CC6A8u: goto label_805CC6A8;
    case 0x805CC6ACu: goto label_805CC6AC;
    case 0x805CC6B0u: goto label_805CC6B0;
    case 0x805CC6B4u: goto label_805CC6B4;
    case 0x805CC6B8u: goto label_805CC6B8;
    case 0x805CC6BCu: goto label_805CC6BC;
    case 0x805CC6C0u: goto label_805CC6C0;
    case 0x805CC6C4u: goto label_805CC6C4;
    case 0x805CC6C8u: goto label_805CC6C8;
    case 0x805CC6CCu: goto label_805CC6CC;
    case 0x805CC6D0u: goto label_805CC6D0;
    case 0x805CC6D4u: goto label_805CC6D4;
    case 0x805CC6D8u: goto label_805CC6D8;
    case 0x805CC6DCu: goto label_805CC6DC;
    case 0x805CC6E0u: goto label_805CC6E0;
    case 0x805CC6E4u: goto label_805CC6E4;
    case 0x805CC6E8u: goto label_805CC6E8;
    case 0x805CC6ECu: goto label_805CC6EC;
    case 0x805CC6F0u: goto label_805CC6F0;
    case 0x805CC6F4u: goto label_805CC6F4;
    case 0x805CC6F8u: goto label_805CC6F8;
    case 0x805CC6FCu: goto label_805CC6FC;
    case 0x805CC700u: goto label_805CC700;
    case 0x805CC704u: goto label_805CC704;
    case 0x805CC708u: goto label_805CC708;
    case 0x805CC70Cu: goto label_805CC70C;
    case 0x805CC710u: goto label_805CC710;
    case 0x805CC714u: goto label_805CC714;
    case 0x805CC718u: goto label_805CC718;
    case 0x805CC71Cu: goto label_805CC71C;
    case 0x805CC720u: goto label_805CC720;
    case 0x805CC724u: goto label_805CC724;
    case 0x805CC728u: goto label_805CC728;
    case 0x805CC72Cu: goto label_805CC72C;
    case 0x805CC730u: goto label_805CC730;
    case 0x805CC734u: goto label_805CC734;
    case 0x805CC738u: goto label_805CC738;
    case 0x805CC73Cu: goto label_805CC73C;
    case 0x805CC740u: goto label_805CC740;
    case 0x805CC744u: goto label_805CC744;
    case 0x805CC748u: goto label_805CC748;
    case 0x805CC74Cu: goto label_805CC74C;
    case 0x805CC750u: goto label_805CC750;
    case 0x805CC754u: goto label_805CC754;
    case 0x805CC758u: goto label_805CC758;
    case 0x805CC75Cu: goto label_805CC75C;
    case 0x805CC760u: goto label_805CC760;
    case 0x805CC764u: goto label_805CC764;
    case 0x805CC768u: goto label_805CC768;
    case 0x805CC76Cu: goto label_805CC76C;
    case 0x805CC770u: goto label_805CC770;
    case 0x805CC774u: goto label_805CC774;
    case 0x805CC778u: goto label_805CC778;
    case 0x805CC77Cu: goto label_805CC77C;
    case 0x805CC780u: goto label_805CC780;
    case 0x805CC784u: goto label_805CC784;
    case 0x805CC788u: goto label_805CC788;
    case 0x805CC78Cu: goto label_805CC78C;
    case 0x805CC790u: goto label_805CC790;
    case 0x805CC794u: goto label_805CC794;
    case 0x805CC798u: goto label_805CC798;
    case 0x805CC79Cu: goto label_805CC79C;
    case 0x805CC7A0u: goto label_805CC7A0;
    case 0x805CC7A4u: goto label_805CC7A4;
    case 0x805CC7A8u: goto label_805CC7A8;
    case 0x805CC7ACu: goto label_805CC7AC;
    case 0x805CC7B0u: goto label_805CC7B0;
    case 0x805CC7B4u: goto label_805CC7B4;
    case 0x805CC7B8u: goto label_805CC7B8;
    case 0x805CC7BCu: goto label_805CC7BC;
    case 0x805CC7C0u: goto label_805CC7C0;
    case 0x805CC7C4u: goto label_805CC7C4;
    case 0x805CC7C8u: goto label_805CC7C8;
    case 0x805CC7CCu: goto label_805CC7CC;
    case 0x805CC7D0u: goto label_805CC7D0;
    case 0x805CC7D4u: goto label_805CC7D4;
    case 0x805CC7D8u: goto label_805CC7D8;
    case 0x805CC7DCu: goto label_805CC7DC;
    case 0x805CC7E0u: goto label_805CC7E0;
    case 0x805CC7E4u: goto label_805CC7E4;
    case 0x805CC7E8u: goto label_805CC7E8;
    case 0x805CC7ECu: goto label_805CC7EC;
    case 0x805CC7F0u: goto label_805CC7F0;
    case 0x805CC7F4u: goto label_805CC7F4;
    case 0x805CC7F8u: goto label_805CC7F8;
    case 0x805CC7FCu: goto label_805CC7FC;
    case 0x805CC800u: goto label_805CC800;
    case 0x805CC804u: goto label_805CC804;
    case 0x805CC808u: goto label_805CC808;
    case 0x805CC80Cu: goto label_805CC80C;
    case 0x805CC810u: goto label_805CC810;
    case 0x805CC814u: goto label_805CC814;
    case 0x805CC818u: goto label_805CC818;
    case 0x805CC81Cu: goto label_805CC81C;
    case 0x805CC820u: goto label_805CC820;
    case 0x805CC824u: goto label_805CC824;
    case 0x805CC828u: goto label_805CC828;
    case 0x805CC82Cu: goto label_805CC82C;
    case 0x805CC830u: goto label_805CC830;
    case 0x805CC834u: goto label_805CC834;
    case 0x805CC838u: goto label_805CC838;
    case 0x805CC83Cu: goto label_805CC83C;
    case 0x805CC840u: goto label_805CC840;
    case 0x805CC844u: goto label_805CC844;
    case 0x805CC848u: goto label_805CC848;
    case 0x805CC84Cu: goto label_805CC84C;
    case 0x805CC850u: goto label_805CC850;
    case 0x805CC854u: goto label_805CC854;
    case 0x805CC858u: goto label_805CC858;
    case 0x805CC85Cu: goto label_805CC85C;
    case 0x805CC860u: goto label_805CC860;
    case 0x805CC864u: goto label_805CC864;
    case 0x805CC868u: goto label_805CC868;
    case 0x805CC86Cu: goto label_805CC86C;
    case 0x805CC870u: goto label_805CC870;
    case 0x805CC874u: goto label_805CC874;
    case 0x805CC878u: goto label_805CC878;
    case 0x805CC87Cu: goto label_805CC87C;
    case 0x805CC880u: goto label_805CC880;
    case 0x805CC884u: goto label_805CC884;
    case 0x805CC888u: goto label_805CC888;
    case 0x805CC88Cu: goto label_805CC88C;
    case 0x805CC890u: goto label_805CC890;
    case 0x805CC894u: goto label_805CC894;
    case 0x805CC898u: goto label_805CC898;
    case 0x805CC89Cu: goto label_805CC89C;
    case 0x805CC8A0u: goto label_805CC8A0;
    case 0x805CC8A4u: goto label_805CC8A4;
    case 0x805CC8A8u: goto label_805CC8A8;
    case 0x805CC8ACu: goto label_805CC8AC;
    case 0x805CC8B0u: goto label_805CC8B0;
    case 0x805CC8B4u: goto label_805CC8B4;
    case 0x805CC8B8u: goto label_805CC8B8;
    case 0x805CC8BCu: goto label_805CC8BC;
    case 0x805CC8C0u: goto label_805CC8C0;
    case 0x805CC8C4u: goto label_805CC8C4;
    case 0x805CC8C8u: goto label_805CC8C8;
    case 0x805CC8CCu: goto label_805CC8CC;
    case 0x805CC8D0u: goto label_805CC8D0;
    case 0x805CC8D4u: goto label_805CC8D4;
    case 0x805CC8D8u: goto label_805CC8D8;
    case 0x805CC8DCu: goto label_805CC8DC;
    case 0x805CC8E0u: goto label_805CC8E0;
    case 0x805CC8E4u: goto label_805CC8E4;
    case 0x805CC8E8u: goto label_805CC8E8;
    case 0x805CC8ECu: goto label_805CC8EC;
    case 0x805CC8F0u: goto label_805CC8F0;
    case 0x805CC8F4u: goto label_805CC8F4;
    case 0x805CC8F8u: goto label_805CC8F8;
    case 0x805CC8FCu: goto label_805CC8FC;
    case 0x805CC900u: goto label_805CC900;
    case 0x805CC904u: goto label_805CC904;
    case 0x805CC908u: goto label_805CC908;
    case 0x805CC90Cu: goto label_805CC90C;
    case 0x805CC910u: goto label_805CC910;
    case 0x805CC914u: goto label_805CC914;
    case 0x805CC918u: goto label_805CC918;
    case 0x805CC91Cu: goto label_805CC91C;
    case 0x805CC920u: goto label_805CC920;
    case 0x805CC924u: goto label_805CC924;
    case 0x805CC928u: goto label_805CC928;
    case 0x805CC92Cu: goto label_805CC92C;
    case 0x805CC930u: goto label_805CC930;
    case 0x805CC934u: goto label_805CC934;
    case 0x805CC938u: goto label_805CC938;
    case 0x805CC93Cu: goto label_805CC93C;
    case 0x805CC940u: goto label_805CC940;
    case 0x805CC944u: goto label_805CC944;
    case 0x805CC948u: goto label_805CC948;
    case 0x805CC94Cu: goto label_805CC94C;
    case 0x805CC950u: goto label_805CC950;
    case 0x805CC954u: goto label_805CC954;
    case 0x805CC958u: goto label_805CC958;
    case 0x805CC95Cu: goto label_805CC95C;
    case 0x805CC960u: goto label_805CC960;
    case 0x805CC964u: goto label_805CC964;
    case 0x805CC968u: goto label_805CC968;
    case 0x805CC96Cu: goto label_805CC96C;
    case 0x805CC970u: goto label_805CC970;
    case 0x805CC974u: goto label_805CC974;
    case 0x805CC978u: goto label_805CC978;
    case 0x805CC97Cu: goto label_805CC97C;
    case 0x805CC980u: goto label_805CC980;
    case 0x805CC984u: goto label_805CC984;
    case 0x805CC988u: goto label_805CC988;
    case 0x805CC98Cu: goto label_805CC98C;
    case 0x805CC990u: goto label_805CC990;
    case 0x805CC994u: goto label_805CC994;
    case 0x805CC998u: goto label_805CC998;
    case 0x805CC99Cu: goto label_805CC99C;
    case 0x805CC9A0u: goto label_805CC9A0;
    case 0x805CC9A4u: goto label_805CC9A4;
    case 0x805CC9A8u: goto label_805CC9A8;
    case 0x805CC9ACu: goto label_805CC9AC;
    case 0x805CC9B0u: goto label_805CC9B0;
    case 0x805CC9B4u: goto label_805CC9B4;
    case 0x805CC9B8u: goto label_805CC9B8;
    case 0x805CC9BCu: goto label_805CC9BC;
    case 0x805CC9C0u: goto label_805CC9C0;
    case 0x805CC9C4u: goto label_805CC9C4;
    case 0x805CC9C8u: goto label_805CC9C8;
    case 0x805CC9CCu: goto label_805CC9CC;
    case 0x805CC9D0u: goto label_805CC9D0;
    case 0x805CC9D4u: goto label_805CC9D4;
    case 0x805CC9D8u: goto label_805CC9D8;
    case 0x805CC9DCu: goto label_805CC9DC;
    case 0x805CC9E0u: goto label_805CC9E0;
    case 0x805CC9E4u: goto label_805CC9E4;
    case 0x805CC9E8u: goto label_805CC9E8;
    case 0x805CC9ECu: goto label_805CC9EC;
    case 0x805CC9F0u: goto label_805CC9F0;
    case 0x805CC9F4u: goto label_805CC9F4;
    case 0x805CC9F8u: goto label_805CC9F8;
    case 0x805CC9FCu: goto label_805CC9FC;
    case 0x805CCA00u: goto label_805CCA00;
    case 0x805CCA04u: goto label_805CCA04;
    case 0x805CCA08u: goto label_805CCA08;
    case 0x805CCA0Cu: goto label_805CCA0C;
    case 0x805CCA10u: goto label_805CCA10;
    case 0x805CCA14u: goto label_805CCA14;
    case 0x805CCA18u: goto label_805CCA18;
    case 0x805CCA1Cu: goto label_805CCA1C;
    case 0x805CCA20u: goto label_805CCA20;
    case 0x805CCA24u: goto label_805CCA24;
    case 0x805CCA28u: goto label_805CCA28;
    case 0x805CCA2Cu: goto label_805CCA2C;
    case 0x805CCA30u: goto label_805CCA30;
    case 0x805CCA34u: goto label_805CCA34;
    case 0x805CCA38u: goto label_805CCA38;
    case 0x805CCA3Cu: goto label_805CCA3C;
    case 0x805CCA40u: goto label_805CCA40;
    case 0x805CCA44u: goto label_805CCA44;
    case 0x805CCA48u: goto label_805CCA48;
    case 0x805CCA4Cu: goto label_805CCA4C;
    case 0x805CCA50u: goto label_805CCA50;
    case 0x805CCA54u: goto label_805CCA54;
    case 0x805CCA58u: goto label_805CCA58;
    case 0x805CCA5Cu: goto label_805CCA5C;
    case 0x805CCA60u: goto label_805CCA60;
    case 0x805CCA64u: goto label_805CCA64;
    case 0x805CCA68u: goto label_805CCA68;
    case 0x805CCA6Cu: goto label_805CCA6C;
    case 0x805CCA70u: goto label_805CCA70;
    case 0x805CCA74u: goto label_805CCA74;
    case 0x805CCA78u: goto label_805CCA78;
    case 0x805CCA7Cu: goto label_805CCA7C;
    case 0x805CCA80u: goto label_805CCA80;
    case 0x805CCA84u: goto label_805CCA84;
    case 0x805CCA88u: goto label_805CCA88;
    case 0x805CCA8Cu: goto label_805CCA8C;
    case 0x805CCA90u: goto label_805CCA90;
    case 0x805CCA94u: goto label_805CCA94;
    case 0x805CCA98u: goto label_805CCA98;
    case 0x805CCA9Cu: goto label_805CCA9C;
    case 0x805CCAA0u: goto label_805CCAA0;
    case 0x805CCAA4u: goto label_805CCAA4;
    case 0x805CCAA8u: goto label_805CCAA8;
    case 0x805CCAACu: goto label_805CCAAC;
    case 0x805CCAB0u: goto label_805CCAB0;
    case 0x805CCAB4u: goto label_805CCAB4;
    case 0x805CCAB8u: goto label_805CCAB8;
    case 0x805CCABCu: goto label_805CCABC;
    case 0x805CCAC0u: goto label_805CCAC0;
    case 0x805CCAC4u: goto label_805CCAC4;
    case 0x805CCAC8u: goto label_805CCAC8;
    case 0x805CCACCu: goto label_805CCACC;
    case 0x805CCAD0u: goto label_805CCAD0;
    case 0x805CCAD4u: goto label_805CCAD4;
    case 0x805CCAD8u: goto label_805CCAD8;
    case 0x805CCADCu: goto label_805CCADC;
    case 0x805CCAE0u: goto label_805CCAE0;
    case 0x805CCAE4u: goto label_805CCAE4;
    case 0x805CCAE8u: goto label_805CCAE8;
    case 0x805CCAECu: goto label_805CCAEC;
    case 0x805CCAF0u: goto label_805CCAF0;
    case 0x805CCAF4u: goto label_805CCAF4;
    case 0x805CCAF8u: goto label_805CCAF8;
    case 0x805CCAFCu: goto label_805CCAFC;
    case 0x805CCB00u: goto label_805CCB00;
    case 0x805CCB04u: goto label_805CCB04;
    case 0x805CCB08u: goto label_805CCB08;
    case 0x805CCB0Cu: goto label_805CCB0C;
    case 0x805CCB10u: goto label_805CCB10;
    case 0x805CCB14u: goto label_805CCB14;
    case 0x805CCB18u: goto label_805CCB18;
    case 0x805CCB1Cu: goto label_805CCB1C;
    case 0x805CCB20u: goto label_805CCB20;
    case 0x805CCB24u: goto label_805CCB24;
    case 0x805CCB28u: goto label_805CCB28;
    case 0x805CCB2Cu: goto label_805CCB2C;
    case 0x805CCB30u: goto label_805CCB30;
    case 0x805CCB34u: goto label_805CCB34;
    case 0x805CCB38u: goto label_805CCB38;
    case 0x805CCB3Cu: goto label_805CCB3C;
    case 0x805CCB40u: goto label_805CCB40;
    case 0x805CCB44u: goto label_805CCB44;
    case 0x805CCB48u: goto label_805CCB48;
    case 0x805CCB4Cu: goto label_805CCB4C;
    case 0x805CCB50u: goto label_805CCB50;
    case 0x805CCB54u: goto label_805CCB54;
    case 0x805CCB58u: goto label_805CCB58;
    case 0x805CCB5Cu: goto label_805CCB5C;
    case 0x805CCB60u: goto label_805CCB60;
    case 0x805CCB64u: goto label_805CCB64;
    case 0x805CCB68u: goto label_805CCB68;
    case 0x805CCB6Cu: goto label_805CCB6C;
    case 0x805CCB70u: goto label_805CCB70;
    case 0x805CCB74u: goto label_805CCB74;
    case 0x805CCB78u: goto label_805CCB78;
    case 0x805CCB7Cu: goto label_805CCB7C;
    case 0x805CCB80u: goto label_805CCB80;
    case 0x805CCB84u: goto label_805CCB84;
    case 0x805CCB88u: goto label_805CCB88;
    case 0x805CCB8Cu: goto label_805CCB8C;
    case 0x805CCB90u: goto label_805CCB90;
    case 0x805CCB94u: goto label_805CCB94;
    case 0x805CCB98u: goto label_805CCB98;
    case 0x805CCB9Cu: goto label_805CCB9C;
    case 0x805CCBA0u: goto label_805CCBA0;
    case 0x805CCBA4u: goto label_805CCBA4;
    case 0x805CCBA8u: goto label_805CCBA8;
    case 0x805CCBACu: goto label_805CCBAC;
    case 0x805CCBB0u: goto label_805CCBB0;
    case 0x805CCBB4u: goto label_805CCBB4;
    case 0x805CCBB8u: goto label_805CCBB8;
    case 0x805CCBBCu: goto label_805CCBBC;
    case 0x805CCBC0u: goto label_805CCBC0;
    case 0x805CCBC4u: goto label_805CCBC4;
    case 0x805CCBC8u: goto label_805CCBC8;
    case 0x805CCBCCu: goto label_805CCBCC;
    case 0x805CCBD0u: goto label_805CCBD0;
    case 0x805CCBD4u: goto label_805CCBD4;
    case 0x805CCBD8u: goto label_805CCBD8;
    case 0x805CCBDCu: goto label_805CCBDC;
    case 0x805CCBE0u: goto label_805CCBE0;
    case 0x805CCBE4u: goto label_805CCBE4;
    case 0x805CCBE8u: goto label_805CCBE8;
    case 0x805CCBECu: goto label_805CCBEC;
    case 0x805CCBF0u: goto label_805CCBF0;
    case 0x805CCBF4u: goto label_805CCBF4;
    case 0x805CCBF8u: goto label_805CCBF8;
    case 0x805CCBFCu: goto label_805CCBFC;
    case 0x805CCC00u: goto label_805CCC00;
    case 0x805CCC04u: goto label_805CCC04;
    case 0x805CCC08u: goto label_805CCC08;
    case 0x805CCC0Cu: goto label_805CCC0C;
    case 0x805CCC10u: goto label_805CCC10;
    case 0x805CCC14u: goto label_805CCC14;
    case 0x805CCC18u: goto label_805CCC18;
    case 0x805CCC1Cu: goto label_805CCC1C;
    case 0x805CCC20u: goto label_805CCC20;
    case 0x805CCC24u: goto label_805CCC24;
    case 0x805CCC28u: goto label_805CCC28;
    case 0x805CCC2Cu: goto label_805CCC2C;
    case 0x805CCC30u: goto label_805CCC30;
    case 0x805CCC34u: goto label_805CCC34;
    case 0x805CCC38u: goto label_805CCC38;
    case 0x805CCC3Cu: goto label_805CCC3C;
    case 0x805CCC40u: goto label_805CCC40;
    case 0x805CCC44u: goto label_805CCC44;
    case 0x805CCC48u: goto label_805CCC48;
    case 0x805CCC4Cu: goto label_805CCC4C;
    case 0x805CCC50u: goto label_805CCC50;
    case 0x805CCC54u: goto label_805CCC54;
    case 0x805CCC58u: goto label_805CCC58;
    case 0x805CCC5Cu: goto label_805CCC5C;
    case 0x805CCC60u: goto label_805CCC60;
    case 0x805CCC64u: goto label_805CCC64;
    case 0x805CCC68u: goto label_805CCC68;
    case 0x805CCC6Cu: goto label_805CCC6C;
    case 0x805CCC70u: goto label_805CCC70;
    case 0x805CCC74u: goto label_805CCC74;
    case 0x805CCC78u: goto label_805CCC78;
    case 0x805CCC7Cu: goto label_805CCC7C;
    case 0x805CCC80u: goto label_805CCC80;
    case 0x805CCC84u: goto label_805CCC84;
    case 0x805CCC88u: goto label_805CCC88;
    case 0x805CCC8Cu: goto label_805CCC8C;
    case 0x805CCC90u: goto label_805CCC90;
    case 0x805CCC94u: goto label_805CCC94;
    case 0x805CCC98u: goto label_805CCC98;
    case 0x805CCC9Cu: goto label_805CCC9C;
    case 0x805CCCA0u: goto label_805CCCA0;
    case 0x805CCCA4u: goto label_805CCCA4;
    case 0x805CCCA8u: goto label_805CCCA8;
    case 0x805CCCACu: goto label_805CCCAC;
    case 0x805CCCB0u: goto label_805CCCB0;
    case 0x805CCCB4u: goto label_805CCCB4;
    case 0x805CCCB8u: goto label_805CCCB8;
    case 0x805CCCBCu: goto label_805CCCBC;
    case 0x805CCCC0u: goto label_805CCCC0;
    case 0x805CCCC4u: goto label_805CCCC4;
    case 0x805CCCC8u: goto label_805CCCC8;
    case 0x805CCCCCu: goto label_805CCCCC;
    case 0x805CCCD0u: goto label_805CCCD0;
    case 0x805CCCD4u: goto label_805CCCD4;
    case 0x805CCCD8u: goto label_805CCCD8;
    case 0x805CCCDCu: goto label_805CCCDC;
    case 0x805CCCE0u: goto label_805CCCE0;
    case 0x805CCCE4u: goto label_805CCCE4;
    case 0x805CCCE8u: goto label_805CCCE8;
    case 0x805CCCECu: goto label_805CCCEC;
    case 0x805CCCF0u: goto label_805CCCF0;
    case 0x805CCCF4u: goto label_805CCCF4;
    case 0x805CCCF8u: goto label_805CCCF8;
    case 0x805CCCFCu: goto label_805CCCFC;
    case 0x805CCD00u: goto label_805CCD00;
    case 0x805CCD04u: goto label_805CCD04;
    case 0x805CCD08u: goto label_805CCD08;
    case 0x805CCD0Cu: goto label_805CCD0C;
    case 0x805CCD10u: goto label_805CCD10;
    case 0x805CCD14u: goto label_805CCD14;
    case 0x805CCD18u: goto label_805CCD18;
    case 0x805CCD1Cu: goto label_805CCD1C;
    case 0x805CCD20u: goto label_805CCD20;
    case 0x805CCD24u: goto label_805CCD24;
    case 0x805CCD28u: goto label_805CCD28;
    case 0x805CCD2Cu: goto label_805CCD2C;
    case 0x805CCD30u: goto label_805CCD30;
    case 0x805CCD34u: goto label_805CCD34;
    case 0x805CCD38u: goto label_805CCD38;
    case 0x805CCD3Cu: goto label_805CCD3C;
    case 0x805CCD40u: goto label_805CCD40;
    case 0x805CCD44u: goto label_805CCD44;
    case 0x805CCD48u: goto label_805CCD48;
    case 0x805CCD4Cu: goto label_805CCD4C;
    case 0x805CCD50u: goto label_805CCD50;
    case 0x805CCD54u: goto label_805CCD54;
    case 0x805CCD58u: goto label_805CCD58;
    case 0x805CCD5Cu: goto label_805CCD5C;
    case 0x805CCD60u: goto label_805CCD60;
    case 0x805CCD64u: goto label_805CCD64;
    case 0x805CCD68u: goto label_805CCD68;
    case 0x805CCD6Cu: goto label_805CCD6C;
    case 0x805CCD70u: goto label_805CCD70;
    case 0x805CCD74u: goto label_805CCD74;
    case 0x805CCD78u: goto label_805CCD78;
    case 0x805CCD7Cu: goto label_805CCD7C;
    case 0x805CCD80u: goto label_805CCD80;
    case 0x805CCD84u: goto label_805CCD84;
    case 0x805CCD88u: goto label_805CCD88;
    case 0x805CCD8Cu: goto label_805CCD8C;
    case 0x805CCD90u: goto label_805CCD90;
    case 0x805CCD94u: goto label_805CCD94;
    case 0x805CCD98u: goto label_805CCD98;
    case 0x805CCD9Cu: goto label_805CCD9C;
    case 0x805CCDA0u: goto label_805CCDA0;
    case 0x805CCDA4u: goto label_805CCDA4;
    case 0x805CCDA8u: goto label_805CCDA8;
    case 0x805CCDACu: goto label_805CCDAC;
    case 0x805CCDB0u: goto label_805CCDB0;
    case 0x805CCDB4u: goto label_805CCDB4;
    case 0x805CCDB8u: goto label_805CCDB8;
    case 0x805CCDBCu: goto label_805CCDBC;
    case 0x805CCDC0u: goto label_805CCDC0;
    case 0x805CCDC4u: goto label_805CCDC4;
    case 0x805CCDC8u: goto label_805CCDC8;
    case 0x805CCDCCu: goto label_805CCDCC;
    case 0x805CCDD0u: goto label_805CCDD0;
    case 0x805CCDD4u: goto label_805CCDD4;
    case 0x805CCDD8u: goto label_805CCDD8;
    case 0x805CCDDCu: goto label_805CCDDC;
    case 0x805CCDE0u: goto label_805CCDE0;
    case 0x805CCDE4u: goto label_805CCDE4;
    case 0x805CCDE8u: goto label_805CCDE8;
    case 0x805CCDECu: goto label_805CCDEC;
    case 0x805CCDF0u: goto label_805CCDF0;
    case 0x805CCDF4u: goto label_805CCDF4;
    case 0x805CCDF8u: goto label_805CCDF8;
    case 0x805CCDFCu: goto label_805CCDFC;
    case 0x805CCE00u: goto label_805CCE00;
    case 0x805CCE04u: goto label_805CCE04;
    case 0x805CCE08u: goto label_805CCE08;
    case 0x805CCE0Cu: goto label_805CCE0C;
    case 0x805CCE10u: goto label_805CCE10;
    case 0x805CCE14u: goto label_805CCE14;
    case 0x805CCE18u: goto label_805CCE18;
    case 0x805CCE1Cu: goto label_805CCE1C;
    case 0x805CCE20u: goto label_805CCE20;
    case 0x805CCE24u: goto label_805CCE24;
    case 0x805CCE28u: goto label_805CCE28;
    case 0x805CCE2Cu: goto label_805CCE2C;
    case 0x805CCE30u: goto label_805CCE30;
    case 0x805CCE34u: goto label_805CCE34;
    case 0x805CCE38u: goto label_805CCE38;
    case 0x805CCE3Cu: goto label_805CCE3C;
    case 0x805CCE40u: goto label_805CCE40;
    case 0x805CCE44u: goto label_805CCE44;
    case 0x805CCE48u: goto label_805CCE48;
    case 0x805CCE4Cu: goto label_805CCE4C;
    case 0x805CCE50u: goto label_805CCE50;
    case 0x805CCE54u: goto label_805CCE54;
    case 0x805CCE58u: goto label_805CCE58;
    case 0x805CCE5Cu: goto label_805CCE5C;
    case 0x805CCE60u: goto label_805CCE60;
    case 0x805CCE64u: goto label_805CCE64;
    case 0x805CCE68u: goto label_805CCE68;
    case 0x805CCE6Cu: goto label_805CCE6C;
    case 0x805CCE70u: goto label_805CCE70;
    case 0x805CCE74u: goto label_805CCE74;
    case 0x805CCE78u: goto label_805CCE78;
    case 0x805CCE7Cu: goto label_805CCE7C;
    case 0x805CCE80u: goto label_805CCE80;
    case 0x805CCE84u: goto label_805CCE84;
    case 0x805CCE88u: goto label_805CCE88;
    case 0x805CCE8Cu: goto label_805CCE8C;
    case 0x805CCE90u: goto label_805CCE90;
    case 0x805CCE94u: goto label_805CCE94;
    case 0x805CCE98u: goto label_805CCE98;
    case 0x805CCE9Cu: goto label_805CCE9C;
    case 0x805CCEA0u: goto label_805CCEA0;
    case 0x805CCEA4u: goto label_805CCEA4;
    case 0x805CCEA8u: goto label_805CCEA8;
    case 0x805CCEACu: goto label_805CCEAC;
    case 0x805CCEB0u: goto label_805CCEB0;
    case 0x805CCEB4u: goto label_805CCEB4;
    case 0x805CCEB8u: goto label_805CCEB8;
    case 0x805CCEBCu: goto label_805CCEBC;
    case 0x805CCEC0u: goto label_805CCEC0;
    case 0x805CCEC4u: goto label_805CCEC4;
    case 0x805CCEC8u: goto label_805CCEC8;
    case 0x805CCECCu: goto label_805CCECC;
    case 0x805CCED0u: goto label_805CCED0;
    case 0x805CCED4u: goto label_805CCED4;
    case 0x805CCED8u: goto label_805CCED8;
    case 0x805CCEDCu: goto label_805CCEDC;
    case 0x805CCEE0u: goto label_805CCEE0;
    case 0x805CCEE4u: goto label_805CCEE4;
    case 0x805CCEE8u: goto label_805CCEE8;
    case 0x805CCEECu: goto label_805CCEEC;
    case 0x805CCEF0u: goto label_805CCEF0;
    case 0x805CCEF4u: goto label_805CCEF4;
    case 0x805CCEF8u: goto label_805CCEF8;
    case 0x805CCEFCu: goto label_805CCEFC;
    case 0x805CCF00u: goto label_805CCF00;
    case 0x805CCF04u: goto label_805CCF04;
    case 0x805CCF08u: goto label_805CCF08;
    case 0x805CCF0Cu: goto label_805CCF0C;
    case 0x805CCF10u: goto label_805CCF10;
    case 0x805CCF14u: goto label_805CCF14;
    case 0x805CCF18u: goto label_805CCF18;
    case 0x805CCF1Cu: goto label_805CCF1C;
    case 0x805CCF20u: goto label_805CCF20;
    case 0x805CCF24u: goto label_805CCF24;
    case 0x805CCF28u: goto label_805CCF28;
    case 0x805CCF2Cu: goto label_805CCF2C;
    case 0x805CCF30u: goto label_805CCF30;
    case 0x805CCF34u: goto label_805CCF34;
    case 0x805CCF38u: goto label_805CCF38;
    case 0x805CCF3Cu: goto label_805CCF3C;
    case 0x805CCF40u: goto label_805CCF40;
    case 0x805CCF44u: goto label_805CCF44;
    case 0x805CCF48u: goto label_805CCF48;
    case 0x805CCF4Cu: goto label_805CCF4C;
    case 0x805CCF50u: goto label_805CCF50;
    case 0x805CCF54u: goto label_805CCF54;
    case 0x805CCF58u: goto label_805CCF58;
    case 0x805CCF5Cu: goto label_805CCF5C;
    case 0x805CCF60u: goto label_805CCF60;
    case 0x805CCF64u: goto label_805CCF64;
    case 0x805CCF68u: goto label_805CCF68;
    case 0x805CCF6Cu: goto label_805CCF6C;
    case 0x805CCF70u: goto label_805CCF70;
    case 0x805CCF74u: goto label_805CCF74;
    case 0x805CCF78u: goto label_805CCF78;
    case 0x805CCF7Cu: goto label_805CCF7C;
    case 0x805CCF80u: goto label_805CCF80;
    case 0x805CCF84u: goto label_805CCF84;
    case 0x805CCF88u: goto label_805CCF88;
    case 0x805CCF8Cu: goto label_805CCF8C;
    case 0x805CCF90u: goto label_805CCF90;
    case 0x805CCF94u: goto label_805CCF94;
    case 0x805CCF98u: goto label_805CCF98;
    case 0x805CCF9Cu: goto label_805CCF9C;
    case 0x805CCFA0u: goto label_805CCFA0;
    case 0x805CCFA4u: goto label_805CCFA4;
    case 0x805CCFA8u: goto label_805CCFA8;
    case 0x805CCFACu: goto label_805CCFAC;
    case 0x805CCFB0u: goto label_805CCFB0;
    case 0x805CCFB4u: goto label_805CCFB4;
    case 0x805CCFB8u: goto label_805CCFB8;
    case 0x805CCFBCu: goto label_805CCFBC;
    case 0x805CCFC0u: goto label_805CCFC0;
    case 0x805CCFC4u: goto label_805CCFC4;
    case 0x805CCFC8u: goto label_805CCFC8;
    case 0x805CCFCCu: goto label_805CCFCC;
    case 0x805CCFD0u: goto label_805CCFD0;
    case 0x805CCFD4u: goto label_805CCFD4;
    case 0x805CCFD8u: goto label_805CCFD8;
    case 0x805CCFDCu: goto label_805CCFDC;
    case 0x805CCFE0u: goto label_805CCFE0;
    case 0x805CCFE4u: goto label_805CCFE4;
    case 0x805CCFE8u: goto label_805CCFE8;
    case 0x805CCFECu: goto label_805CCFEC;
    case 0x805CCFF0u: goto label_805CCFF0;
    case 0x805CCFF4u: goto label_805CCFF4;
    case 0x805CCFF8u: goto label_805CCFF8;
    case 0x805CCFFCu: goto label_805CCFFC;
    case 0x805CD000u: goto label_805CD000;
    case 0x805CD004u: goto label_805CD004;
    case 0x805CD008u: goto label_805CD008;
    case 0x805CD00Cu: goto label_805CD00C;
    case 0x805CD010u: goto label_805CD010;
    case 0x805CD014u: goto label_805CD014;
    case 0x805CD018u: goto label_805CD018;
    case 0x805CD01Cu: goto label_805CD01C;
    case 0x805CD020u: goto label_805CD020;
    case 0x805CD024u: goto label_805CD024;
    case 0x805CD028u: goto label_805CD028;
    case 0x805CD02Cu: goto label_805CD02C;
    case 0x805CD030u: goto label_805CD030;
    case 0x805CD034u: goto label_805CD034;
    case 0x805CD038u: goto label_805CD038;
    case 0x805CD03Cu: goto label_805CD03C;
    case 0x805CD040u: goto label_805CD040;
    case 0x805CD044u: goto label_805CD044;
    case 0x805CD048u: goto label_805CD048;
    case 0x805CD04Cu: goto label_805CD04C;
    case 0x805CD050u: goto label_805CD050;
    case 0x805CD054u: goto label_805CD054;
    case 0x805CD058u: goto label_805CD058;
    case 0x805CD05Cu: goto label_805CD05C;
    case 0x805CD060u: goto label_805CD060;
    case 0x805CD064u: goto label_805CD064;
    case 0x805CD068u: goto label_805CD068;
    case 0x805CD06Cu: goto label_805CD06C;
    case 0x805CD070u: goto label_805CD070;
    case 0x805CD074u: goto label_805CD074;
    case 0x805CD078u: goto label_805CD078;
    case 0x805CD07Cu: goto label_805CD07C;
    case 0x805CD080u: goto label_805CD080;
    case 0x805CD084u: goto label_805CD084;
    case 0x805CD088u: goto label_805CD088;
    case 0x805CD08Cu: goto label_805CD08C;
    case 0x805CD090u: goto label_805CD090;
    case 0x805CD094u: goto label_805CD094;
    case 0x805CD098u: goto label_805CD098;
    case 0x805CD09Cu: goto label_805CD09C;
    case 0x805CD0A0u: goto label_805CD0A0;
    case 0x805CD0A4u: goto label_805CD0A4;
    case 0x805CD0A8u: goto label_805CD0A8;
    case 0x805CD0ACu: goto label_805CD0AC;
    case 0x805CD0B0u: goto label_805CD0B0;
    case 0x805CD0B4u: goto label_805CD0B4;
    case 0x805CD0B8u: goto label_805CD0B8;
    case 0x805CD0BCu: goto label_805CD0BC;
    case 0x805CD0C0u: goto label_805CD0C0;
    case 0x805CD0C4u: goto label_805CD0C4;
    case 0x805CD0C8u: goto label_805CD0C8;
    case 0x805CD0CCu: goto label_805CD0CC;
    case 0x805CD0D0u: goto label_805CD0D0;
    case 0x805CD0D4u: goto label_805CD0D4;
    case 0x805CD0D8u: goto label_805CD0D8;
    case 0x805CD0DCu: goto label_805CD0DC;
    case 0x805CD0E0u: goto label_805CD0E0;
    case 0x805CD0E4u: goto label_805CD0E4;
    case 0x805CD0E8u: goto label_805CD0E8;
    case 0x805CD0ECu: goto label_805CD0EC;
    case 0x805CD0F0u: goto label_805CD0F0;
    case 0x805CD0F4u: goto label_805CD0F4;
    case 0x805CD0F8u: goto label_805CD0F8;
    case 0x805CD0FCu: goto label_805CD0FC;
    case 0x805CD100u: goto label_805CD100;
    case 0x805CD104u: goto label_805CD104;
    case 0x805CD108u: goto label_805CD108;
    case 0x805CD10Cu: goto label_805CD10C;
    case 0x805CD110u: goto label_805CD110;
    case 0x805CD114u: goto label_805CD114;
    case 0x805CD118u: goto label_805CD118;
    case 0x805CD11Cu: goto label_805CD11C;
    case 0x805CD120u: goto label_805CD120;
    case 0x805CD124u: goto label_805CD124;
    case 0x805CD128u: goto label_805CD128;
    case 0x805CD12Cu: goto label_805CD12C;
    case 0x805CD130u: goto label_805CD130;
    case 0x805CD134u: goto label_805CD134;
    case 0x805CD138u: goto label_805CD138;
    case 0x805CD13Cu: goto label_805CD13C;
    case 0x805CD140u: goto label_805CD140;
    case 0x805CD144u: goto label_805CD144;
    case 0x805CD148u: goto label_805CD148;
    case 0x805CD14Cu: goto label_805CD14C;
    case 0x805CD150u: goto label_805CD150;
    case 0x805CD154u: goto label_805CD154;
    case 0x805CD158u: goto label_805CD158;
    case 0x805CD15Cu: goto label_805CD15C;
    case 0x805CD160u: goto label_805CD160;
    case 0x805CD164u: goto label_805CD164;
    case 0x805CD168u: goto label_805CD168;
    case 0x805CD16Cu: goto label_805CD16C;
    case 0x805CD170u: goto label_805CD170;
    case 0x805CD174u: goto label_805CD174;
    case 0x805CD178u: goto label_805CD178;
    case 0x805CD17Cu: goto label_805CD17C;
    case 0x805CD180u: goto label_805CD180;
    case 0x805CD184u: goto label_805CD184;
    case 0x805CD188u: goto label_805CD188;
    case 0x805CD18Cu: goto label_805CD18C;
    case 0x805CD190u: goto label_805CD190;
    case 0x805CD194u: goto label_805CD194;
    case 0x805CD198u: goto label_805CD198;
    case 0x805CD19Cu: goto label_805CD19C;
    case 0x805CD1A0u: goto label_805CD1A0;
    case 0x805CD1A4u: goto label_805CD1A4;
    case 0x805CD1A8u: goto label_805CD1A8;
    case 0x805CD1ACu: goto label_805CD1AC;
    case 0x805CD1B0u: goto label_805CD1B0;
    case 0x805CD1B4u: goto label_805CD1B4;
    case 0x805CD1B8u: goto label_805CD1B8;
    case 0x805CD1BCu: goto label_805CD1BC;
    case 0x805CD1C0u: goto label_805CD1C0;
    case 0x805CD1C4u: goto label_805CD1C4;
    case 0x805CD1C8u: goto label_805CD1C8;
    case 0x805CD1CCu: goto label_805CD1CC;
    case 0x805CD1D0u: goto label_805CD1D0;
    case 0x805CD1D4u: goto label_805CD1D4;
    case 0x805CD1D8u: goto label_805CD1D8;
    case 0x805CD1DCu: goto label_805CD1DC;
    case 0x805CD1E0u: goto label_805CD1E0;
    case 0x805CD1E4u: goto label_805CD1E4;
    case 0x805CD1E8u: goto label_805CD1E8;
    case 0x805CD1ECu: goto label_805CD1EC;
    case 0x805CD1F0u: goto label_805CD1F0;
    case 0x805CD1F4u: goto label_805CD1F4;
    case 0x805CD1F8u: goto label_805CD1F8;
    case 0x805CD1FCu: goto label_805CD1FC;
    case 0x805CD200u: goto label_805CD200;
    case 0x805CD204u: goto label_805CD204;
    case 0x805CD208u: goto label_805CD208;
    case 0x805CD20Cu: goto label_805CD20C;
    case 0x805CD210u: goto label_805CD210;
    case 0x805CD214u: goto label_805CD214;
    case 0x805CD218u: goto label_805CD218;
    case 0x805CD21Cu: goto label_805CD21C;
    case 0x805CD220u: goto label_805CD220;
    case 0x805CD224u: goto label_805CD224;
    case 0x805CD228u: goto label_805CD228;
    case 0x805CD22Cu: goto label_805CD22C;
    case 0x805CD230u: goto label_805CD230;
    case 0x805CD234u: goto label_805CD234;
    case 0x805CD238u: goto label_805CD238;
    case 0x805CD23Cu: goto label_805CD23C;
    case 0x805CD240u: goto label_805CD240;
    case 0x805CD244u: goto label_805CD244;
    case 0x805CD248u: goto label_805CD248;
    case 0x805CD24Cu: goto label_805CD24C;
    case 0x805CD250u: goto label_805CD250;
    case 0x805CD254u: goto label_805CD254;
    case 0x805CD258u: goto label_805CD258;
    case 0x805CD25Cu: goto label_805CD25C;
    case 0x805CD260u: goto label_805CD260;
    case 0x805CD264u: goto label_805CD264;
    case 0x805CD268u: goto label_805CD268;
    case 0x805CD26Cu: goto label_805CD26C;
    case 0x805CD270u: goto label_805CD270;
    case 0x805CD274u: goto label_805CD274;
    case 0x805CD278u: goto label_805CD278;
    case 0x805CD27Cu: goto label_805CD27C;
    case 0x805CD280u: goto label_805CD280;
    case 0x805CD284u: goto label_805CD284;
    case 0x805CD288u: goto label_805CD288;
    case 0x805CD28Cu: goto label_805CD28C;
    case 0x805CD290u: goto label_805CD290;
    case 0x805CD294u: goto label_805CD294;
    case 0x805CD298u: goto label_805CD298;
    case 0x805CD29Cu: goto label_805CD29C;
    case 0x805CD2A0u: goto label_805CD2A0;
    case 0x805CD2A4u: goto label_805CD2A4;
    case 0x805CD2A8u: goto label_805CD2A8;
    case 0x805CD2ACu: goto label_805CD2AC;
    case 0x805CD2B0u: goto label_805CD2B0;
    case 0x805CD2B4u: goto label_805CD2B4;
    case 0x805CD2B8u: goto label_805CD2B8;
    case 0x805CD2BCu: goto label_805CD2BC;
    case 0x805CD2C0u: goto label_805CD2C0;
    case 0x805CD2C4u: goto label_805CD2C4;
    case 0x805CD2C8u: goto label_805CD2C8;
    case 0x805CD2CCu: goto label_805CD2CC;
    case 0x805CD2D0u: goto label_805CD2D0;
    case 0x805CD2D4u: goto label_805CD2D4;
    case 0x805CD2D8u: goto label_805CD2D8;
    case 0x805CD2DCu: goto label_805CD2DC;
    case 0x805CD2E0u: goto label_805CD2E0;
    case 0x805CD2E4u: goto label_805CD2E4;
    case 0x805CD2E8u: goto label_805CD2E8;
    case 0x805CD2ECu: goto label_805CD2EC;
    case 0x805CD2F0u: goto label_805CD2F0;
    case 0x805CD2F4u: goto label_805CD2F4;
    case 0x805CD2F8u: goto label_805CD2F8;
    case 0x805CD2FCu: goto label_805CD2FC;
    case 0x805CD300u: goto label_805CD300;
    case 0x805CD304u: goto label_805CD304;
    case 0x805CD308u: goto label_805CD308;
    case 0x805CD30Cu: goto label_805CD30C;
    case 0x805CD310u: goto label_805CD310;
    case 0x805CD314u: goto label_805CD314;
    case 0x805CD318u: goto label_805CD318;
    case 0x805CD31Cu: goto label_805CD31C;
    case 0x805CD320u: goto label_805CD320;
    case 0x805CD324u: goto label_805CD324;
    case 0x805CD328u: goto label_805CD328;
    case 0x805CD32Cu: goto label_805CD32C;
    case 0x805CD330u: goto label_805CD330;
    case 0x805CD334u: goto label_805CD334;
    case 0x805CD338u: goto label_805CD338;
    case 0x805CD33Cu: goto label_805CD33C;
    case 0x805CD340u: goto label_805CD340;
    case 0x805CD344u: goto label_805CD344;
    case 0x805CD348u: goto label_805CD348;
    case 0x805CD34Cu: goto label_805CD34C;
    case 0x805CD350u: goto label_805CD350;
    case 0x805CD354u: goto label_805CD354;
    case 0x805CD358u: goto label_805CD358;
    case 0x805CD35Cu: goto label_805CD35C;
    case 0x805CD360u: goto label_805CD360;
    case 0x805CD364u: goto label_805CD364;
    case 0x805CD368u: goto label_805CD368;
    case 0x805CD36Cu: goto label_805CD36C;
    case 0x805CD370u: goto label_805CD370;
    case 0x805CD374u: goto label_805CD374;
    case 0x805CD378u: goto label_805CD378;
    case 0x805CD37Cu: goto label_805CD37C;
    case 0x805CD380u: goto label_805CD380;
    case 0x805CD384u: goto label_805CD384;
    case 0x805CD388u: goto label_805CD388;
    case 0x805CD38Cu: goto label_805CD38C;
    case 0x805CD390u: goto label_805CD390;
    case 0x805CD394u: goto label_805CD394;
    case 0x805CD398u: goto label_805CD398;
    case 0x805CD39Cu: goto label_805CD39C;
    case 0x805CD3A0u: goto label_805CD3A0;
    case 0x805CD3A4u: goto label_805CD3A4;
    case 0x805CD3A8u: goto label_805CD3A8;
    case 0x805CD3ACu: goto label_805CD3AC;
    case 0x805CD3B0u: goto label_805CD3B0;
    case 0x805CD3B4u: goto label_805CD3B4;
    case 0x805CD3B8u: goto label_805CD3B8;
    case 0x805CD3BCu: goto label_805CD3BC;
    case 0x805CD3C0u: goto label_805CD3C0;
    case 0x805CD3C4u: goto label_805CD3C4;
    case 0x805CD3C8u: goto label_805CD3C8;
    case 0x805CD3CCu: goto label_805CD3CC;
    case 0x805CD3D0u: goto label_805CD3D0;
    case 0x805CD3D4u: goto label_805CD3D4;
    case 0x805CD3D8u: goto label_805CD3D8;
    case 0x805CD3DCu: goto label_805CD3DC;
    case 0x805CD3E0u: goto label_805CD3E0;
    case 0x805CD3E4u: goto label_805CD3E4;
    case 0x805CD3E8u: goto label_805CD3E8;
    case 0x805CD3ECu: goto label_805CD3EC;
    case 0x805CD3F0u: goto label_805CD3F0;
    case 0x805CD3F4u: goto label_805CD3F4;
    case 0x805CD3F8u: goto label_805CD3F8;
    case 0x805CD3FCu: goto label_805CD3FC;
    case 0x805CD400u: goto label_805CD400;
    case 0x805CD404u: goto label_805CD404;
    case 0x805CD408u: goto label_805CD408;
    case 0x805CD40Cu: goto label_805CD40C;
    case 0x805CD410u: goto label_805CD410;
    case 0x805CD414u: goto label_805CD414;
    case 0x805CD418u: goto label_805CD418;
    case 0x805CD41Cu: goto label_805CD41C;
    case 0x805CD420u: goto label_805CD420;
    case 0x805CD424u: goto label_805CD424;
    case 0x805CD428u: goto label_805CD428;
    case 0x805CD42Cu: goto label_805CD42C;
    case 0x805CD430u: goto label_805CD430;
    case 0x805CD434u: goto label_805CD434;
    case 0x805CD438u: goto label_805CD438;
    case 0x805CD43Cu: goto label_805CD43C;
    case 0x805CD440u: goto label_805CD440;
    case 0x805CD444u: goto label_805CD444;
    case 0x805CD448u: goto label_805CD448;
    case 0x805CD44Cu: goto label_805CD44C;
    case 0x805CD450u: goto label_805CD450;
    case 0x805CD454u: goto label_805CD454;
    case 0x805CD458u: goto label_805CD458;
    case 0x805CD45Cu: goto label_805CD45C;
    case 0x805CD460u: goto label_805CD460;
    case 0x805CD464u: goto label_805CD464;
    case 0x805CD468u: goto label_805CD468;
    case 0x805CD46Cu: goto label_805CD46C;
    case 0x805CD470u: goto label_805CD470;
    case 0x805CD474u: goto label_805CD474;
    case 0x805CD478u: goto label_805CD478;
    case 0x805CD47Cu: goto label_805CD47C;
    case 0x805CD480u: goto label_805CD480;
    case 0x805CD484u: goto label_805CD484;
    case 0x805CD488u: goto label_805CD488;
    case 0x805CD48Cu: goto label_805CD48C;
    case 0x805CD490u: goto label_805CD490;
    case 0x805CD494u: goto label_805CD494;
    case 0x805CD498u: goto label_805CD498;
    case 0x805CD49Cu: goto label_805CD49C;
    case 0x805CD4A0u: goto label_805CD4A0;
    case 0x805CD4A4u: goto label_805CD4A4;
    case 0x805CD4A8u: goto label_805CD4A8;
    case 0x805CD4ACu: goto label_805CD4AC;
    case 0x805CD4B0u: goto label_805CD4B0;
    case 0x805CD4B4u: goto label_805CD4B4;
    case 0x805CD4B8u: goto label_805CD4B8;
    case 0x805CD4BCu: goto label_805CD4BC;
    case 0x805CD4C0u: goto label_805CD4C0;
    case 0x805CD4C4u: goto label_805CD4C4;
    case 0x805CD4C8u: goto label_805CD4C8;
    case 0x805CD4CCu: goto label_805CD4CC;
    case 0x805CD4D0u: goto label_805CD4D0;
    case 0x805CD4D4u: goto label_805CD4D4;
    case 0x805CD4D8u: goto label_805CD4D8;
    case 0x805CD4DCu: goto label_805CD4DC;
    case 0x805CD4E0u: goto label_805CD4E0;
    case 0x805CD4E4u: goto label_805CD4E4;
    case 0x805CD4E8u: goto label_805CD4E8;
    case 0x805CD4ECu: goto label_805CD4EC;
    case 0x805CD4F0u: goto label_805CD4F0;
    case 0x805CD4F4u: goto label_805CD4F4;
    case 0x805CD4F8u: goto label_805CD4F8;
    case 0x805CD4FCu: goto label_805CD4FC;
    case 0x805CD500u: goto label_805CD500;
    case 0x805CD504u: goto label_805CD504;
    case 0x805CD508u: goto label_805CD508;
    case 0x805CD50Cu: goto label_805CD50C;
    case 0x805CD510u: goto label_805CD510;
    case 0x805CD514u: goto label_805CD514;
    case 0x805CD518u: goto label_805CD518;
    case 0x805CD51Cu: goto label_805CD51C;
    case 0x805CD520u: goto label_805CD520;
    case 0x805CD524u: goto label_805CD524;
    case 0x805CD528u: goto label_805CD528;
    case 0x805CD52Cu: goto label_805CD52C;
    case 0x805CD530u: goto label_805CD530;
    case 0x805CD534u: goto label_805CD534;
    case 0x805CD538u: goto label_805CD538;
    case 0x805CD53Cu: goto label_805CD53C;
    case 0x805CD540u: goto label_805CD540;
    case 0x805CD544u: goto label_805CD544;
    case 0x805CD548u: goto label_805CD548;
    case 0x805CD54Cu: goto label_805CD54C;
    case 0x805CD550u: goto label_805CD550;
    case 0x805CD554u: goto label_805CD554;
    case 0x805CD558u: goto label_805CD558;
    case 0x805CD55Cu: goto label_805CD55C;
    case 0x805CD560u: goto label_805CD560;
    case 0x805CD564u: goto label_805CD564;
    case 0x805CD568u: goto label_805CD568;
    case 0x805CD56Cu: goto label_805CD56C;
    case 0x805CD570u: goto label_805CD570;
    case 0x805CD574u: goto label_805CD574;
    case 0x805CD578u: goto label_805CD578;
    case 0x805CD57Cu: goto label_805CD57C;
    case 0x805CD580u: goto label_805CD580;
    case 0x805CD584u: goto label_805CD584;
    case 0x805CD588u: goto label_805CD588;
    case 0x805CD58Cu: goto label_805CD58C;
    case 0x805CD590u: goto label_805CD590;
    case 0x805CD594u: goto label_805CD594;
    case 0x805CD598u: goto label_805CD598;
    case 0x805CD59Cu: goto label_805CD59C;
    case 0x805CD5A0u: goto label_805CD5A0;
    case 0x805CD5A4u: goto label_805CD5A4;
    case 0x805CD5A8u: goto label_805CD5A8;
    case 0x805CD5ACu: goto label_805CD5AC;
    case 0x805CD5B0u: goto label_805CD5B0;
    case 0x805CD5B4u: goto label_805CD5B4;
    case 0x805CD5B8u: goto label_805CD5B8;
    case 0x805CD5BCu: goto label_805CD5BC;
    case 0x805CD5C0u: goto label_805CD5C0;
    case 0x805CD5C4u: goto label_805CD5C4;
    case 0x805CD5C8u: goto label_805CD5C8;
    case 0x805CD5CCu: goto label_805CD5CC;
    case 0x805CD5D0u: goto label_805CD5D0;
    case 0x805CD5D4u: goto label_805CD5D4;
    case 0x805CD5D8u: goto label_805CD5D8;
    case 0x805CD5DCu: goto label_805CD5DC;
    case 0x805CD5E0u: goto label_805CD5E0;
    case 0x805CD5E4u: goto label_805CD5E4;
    case 0x805CD5E8u: goto label_805CD5E8;
    case 0x805CD5ECu: goto label_805CD5EC;
    case 0x805CD5F0u: goto label_805CD5F0;
    case 0x805CD5F4u: goto label_805CD5F4;
    case 0x805CD5F8u: goto label_805CD5F8;
    case 0x805CD5FCu: goto label_805CD5FC;
    case 0x805CD600u: goto label_805CD600;
    case 0x805CD604u: goto label_805CD604;
    case 0x805CD608u: goto label_805CD608;
    case 0x805CD60Cu: goto label_805CD60C;
    case 0x805CD610u: goto label_805CD610;
    case 0x805CD614u: goto label_805CD614;
    case 0x805CD618u: goto label_805CD618;
    case 0x805CD61Cu: goto label_805CD61C;
    case 0x805CD620u: goto label_805CD620;
    case 0x805CD624u: goto label_805CD624;
    case 0x805CD628u: goto label_805CD628;
    case 0x805CD62Cu: goto label_805CD62C;
    case 0x805CD630u: goto label_805CD630;
    case 0x805CD634u: goto label_805CD634;
    case 0x805CD638u: goto label_805CD638;
    case 0x805CD63Cu: goto label_805CD63C;
    case 0x805CD640u: goto label_805CD640;
    case 0x805CD644u: goto label_805CD644;
    case 0x805CD648u: goto label_805CD648;
    case 0x805CD64Cu: goto label_805CD64C;
    case 0x805CD650u: goto label_805CD650;
    case 0x805CD654u: goto label_805CD654;
    case 0x805CD658u: goto label_805CD658;
    case 0x805CD65Cu: goto label_805CD65C;
    case 0x805CD660u: goto label_805CD660;
    case 0x805CD664u: goto label_805CD664;
    case 0x805CD668u: goto label_805CD668;
    case 0x805CD66Cu: goto label_805CD66C;
    case 0x805CD670u: goto label_805CD670;
    case 0x805CD674u: goto label_805CD674;
    case 0x805CD678u: goto label_805CD678;
    case 0x805CD67Cu: goto label_805CD67C;
    case 0x805CD680u: goto label_805CD680;
    case 0x805CD684u: goto label_805CD684;
    case 0x805CD688u: goto label_805CD688;
    case 0x805CD68Cu: goto label_805CD68C;
    case 0x805CD690u: goto label_805CD690;
    case 0x805CD694u: goto label_805CD694;
    case 0x805CD698u: goto label_805CD698;
    case 0x805CD69Cu: goto label_805CD69C;
    case 0x805CD6A0u: goto label_805CD6A0;
    case 0x805CD6A4u: goto label_805CD6A4;
    case 0x805CD6A8u: goto label_805CD6A8;
    case 0x805CD6ACu: goto label_805CD6AC;
    case 0x805CD6B0u: goto label_805CD6B0;
    case 0x805CD6B4u: goto label_805CD6B4;
    case 0x805CD6B8u: goto label_805CD6B8;
    case 0x805CD6BCu: goto label_805CD6BC;
    case 0x805CD6C0u: goto label_805CD6C0;
    case 0x805CD6C4u: goto label_805CD6C4;
    case 0x805CD6C8u: goto label_805CD6C8;
    case 0x805CD6CCu: goto label_805CD6CC;
    case 0x805CD6D0u: goto label_805CD6D0;
    case 0x805CD6D4u: goto label_805CD6D4;
    case 0x805CD6D8u: goto label_805CD6D8;
    case 0x805CD6DCu: goto label_805CD6DC;
    case 0x805CD6E0u: goto label_805CD6E0;
    case 0x805CD6E4u: goto label_805CD6E4;
    case 0x805CD6E8u: goto label_805CD6E8;
    case 0x805CD6ECu: goto label_805CD6EC;
    case 0x805CD6F0u: goto label_805CD6F0;
    case 0x805CD6F4u: goto label_805CD6F4;
    case 0x805CD6F8u: goto label_805CD6F8;
    case 0x805CD6FCu: goto label_805CD6FC;
    case 0x805CD700u: goto label_805CD700;
    case 0x805CD704u: goto label_805CD704;
    case 0x805CD708u: goto label_805CD708;
    case 0x805CD70Cu: goto label_805CD70C;
    case 0x805CD710u: goto label_805CD710;
    case 0x805CD714u: goto label_805CD714;
    case 0x805CD718u: goto label_805CD718;
    case 0x805CD71Cu: goto label_805CD71C;
    case 0x805CD720u: goto label_805CD720;
    case 0x805CD724u: goto label_805CD724;
    case 0x805CD728u: goto label_805CD728;
    case 0x805CD72Cu: goto label_805CD72C;
    case 0x805CD730u: goto label_805CD730;
    case 0x805CD734u: goto label_805CD734;
    case 0x805CD738u: goto label_805CD738;
    case 0x805CD73Cu: goto label_805CD73C;
    case 0x805CD740u: goto label_805CD740;
    case 0x805CD744u: goto label_805CD744;
    case 0x805CD748u: goto label_805CD748;
    case 0x805CD74Cu: goto label_805CD74C;
    case 0x805CD750u: goto label_805CD750;
    case 0x805CD754u: goto label_805CD754;
    case 0x805CD758u: goto label_805CD758;
    case 0x805CD75Cu: goto label_805CD75C;
    case 0x805CD760u: goto label_805CD760;
    case 0x805CD764u: goto label_805CD764;
    case 0x805CD768u: goto label_805CD768;
    case 0x805CD76Cu: goto label_805CD76C;
    case 0x805CD770u: goto label_805CD770;
    case 0x805CD774u: goto label_805CD774;
    case 0x805CD778u: goto label_805CD778;
    case 0x805CD77Cu: goto label_805CD77C;
    case 0x805CD780u: goto label_805CD780;
    case 0x805CD784u: goto label_805CD784;
    case 0x805CD788u: goto label_805CD788;
    case 0x805CD78Cu: goto label_805CD78C;
    case 0x805CD790u: goto label_805CD790;
    case 0x805CD794u: goto label_805CD794;
    case 0x805CD798u: goto label_805CD798;
    case 0x805CD79Cu: goto label_805CD79C;
    case 0x805CD7A0u: goto label_805CD7A0;
    case 0x805CD7A4u: goto label_805CD7A4;
    case 0x805CD7A8u: goto label_805CD7A8;
    case 0x805CD7ACu: goto label_805CD7AC;
    case 0x805CD7B0u: goto label_805CD7B0;
    case 0x805CD7B4u: goto label_805CD7B4;
    case 0x805CD7B8u: goto label_805CD7B8;
    case 0x805CD7BCu: goto label_805CD7BC;
    case 0x805CD7C0u: goto label_805CD7C0;
    case 0x805CD7C4u: goto label_805CD7C4;
    case 0x805CD7C8u: goto label_805CD7C8;
    case 0x805CD7CCu: goto label_805CD7CC;
    case 0x805CD7D0u: goto label_805CD7D0;
    case 0x805CD7D4u: goto label_805CD7D4;
    case 0x805CD7D8u: goto label_805CD7D8;
    case 0x805CD7DCu: goto label_805CD7DC;
    case 0x805CD7E0u: goto label_805CD7E0;
    case 0x805CD7E4u: goto label_805CD7E4;
    case 0x805CD7E8u: goto label_805CD7E8;
    case 0x805CD7ECu: goto label_805CD7EC;
    case 0x805CD7F0u: goto label_805CD7F0;
    case 0x805CD7F4u: goto label_805CD7F4;
    case 0x805CD7F8u: goto label_805CD7F8;
    case 0x805CD7FCu: goto label_805CD7FC;
    case 0x805CD800u: goto label_805CD800;
    case 0x805CD804u: goto label_805CD804;
    case 0x805CD808u: goto label_805CD808;
    case 0x805CD80Cu: goto label_805CD80C;
    case 0x805CD810u: goto label_805CD810;
    case 0x805CD814u: goto label_805CD814;
    case 0x805CD818u: goto label_805CD818;
    case 0x805CD81Cu: goto label_805CD81C;
    case 0x805CD820u: goto label_805CD820;
    case 0x805CD824u: goto label_805CD824;
    case 0x805CD828u: goto label_805CD828;
    case 0x805CD82Cu: goto label_805CD82C;
    case 0x805CD830u: goto label_805CD830;
    case 0x805CD834u: goto label_805CD834;
    case 0x805CD838u: goto label_805CD838;
    case 0x805CD83Cu: goto label_805CD83C;
    case 0x805CD840u: goto label_805CD840;
    case 0x805CD844u: goto label_805CD844;
    case 0x805CD848u: goto label_805CD848;
    case 0x805CD84Cu: goto label_805CD84C;
    case 0x805CD850u: goto label_805CD850;
    case 0x805CD854u: goto label_805CD854;
    case 0x805CD858u: goto label_805CD858;
    case 0x805CD85Cu: goto label_805CD85C;
    case 0x805CD860u: goto label_805CD860;
    case 0x805CD864u: goto label_805CD864;
    case 0x805CD868u: goto label_805CD868;
    case 0x805CD86Cu: goto label_805CD86C;
    case 0x805CD870u: goto label_805CD870;
    case 0x805CD874u: goto label_805CD874;
    case 0x805CD878u: goto label_805CD878;
    case 0x805CD87Cu: goto label_805CD87C;
    case 0x805CD880u: goto label_805CD880;
    case 0x805CD884u: goto label_805CD884;
    case 0x805CD888u: goto label_805CD888;
    case 0x805CD88Cu: goto label_805CD88C;
    case 0x805CD890u: goto label_805CD890;
    case 0x805CD894u: goto label_805CD894;
    case 0x805CD898u: goto label_805CD898;
    case 0x805CD89Cu: goto label_805CD89C;
    case 0x805CD8A0u: goto label_805CD8A0;
    case 0x805CD8A4u: goto label_805CD8A4;
    case 0x805CD8A8u: goto label_805CD8A8;
    case 0x805CD8ACu: goto label_805CD8AC;
    case 0x805CD8B0u: goto label_805CD8B0;
    case 0x805CD8B4u: goto label_805CD8B4;
    case 0x805CD8B8u: goto label_805CD8B8;
    case 0x805CD8BCu: goto label_805CD8BC;
    case 0x805CD8C0u: goto label_805CD8C0;
    case 0x805CD8C4u: goto label_805CD8C4;
    case 0x805CD8C8u: goto label_805CD8C8;
    case 0x805CD8CCu: goto label_805CD8CC;
    case 0x805CD8D0u: goto label_805CD8D0;
    case 0x805CD8D4u: goto label_805CD8D4;
    case 0x805CD8D8u: goto label_805CD8D8;
    case 0x805CD8DCu: goto label_805CD8DC;
    case 0x805CD8E0u: goto label_805CD8E0;
    case 0x805CD8E4u: goto label_805CD8E4;
    case 0x805CD8E8u: goto label_805CD8E8;
    case 0x805CD8ECu: goto label_805CD8EC;
    case 0x805CD8F0u: goto label_805CD8F0;
    case 0x805CD8F4u: goto label_805CD8F4;
    case 0x805CD8F8u: goto label_805CD8F8;
    case 0x805CD8FCu: goto label_805CD8FC;
    case 0x805CD900u: goto label_805CD900;
    case 0x805CD904u: goto label_805CD904;
    case 0x805CD908u: goto label_805CD908;
    case 0x805CD90Cu: goto label_805CD90C;
    case 0x805CD910u: goto label_805CD910;
    case 0x805CD914u: goto label_805CD914;
    case 0x805CD918u: goto label_805CD918;
    case 0x805CD91Cu: goto label_805CD91C;
    case 0x805CD920u: goto label_805CD920;
    case 0x805CD924u: goto label_805CD924;
    case 0x805CD928u: goto label_805CD928;
    case 0x805CD92Cu: goto label_805CD92C;
    case 0x805CD930u: goto label_805CD930;
    case 0x805CD934u: goto label_805CD934;
    case 0x805CD938u: goto label_805CD938;
    case 0x805CD93Cu: goto label_805CD93C;
    case 0x805CD940u: goto label_805CD940;
    case 0x805CD944u: goto label_805CD944;
    case 0x805CD948u: goto label_805CD948;
    case 0x805CD94Cu: goto label_805CD94C;
    case 0x805CD950u: goto label_805CD950;
    case 0x805CD954u: goto label_805CD954;
    case 0x805CD958u: goto label_805CD958;
    case 0x805CD95Cu: goto label_805CD95C;
    case 0x805CD960u: goto label_805CD960;
    case 0x805CD964u: goto label_805CD964;
    case 0x805CD968u: goto label_805CD968;
    case 0x805CD96Cu: goto label_805CD96C;
    case 0x805CD970u: goto label_805CD970;
    case 0x805CD974u: goto label_805CD974;
    case 0x805CD978u: goto label_805CD978;
    case 0x805CD97Cu: goto label_805CD97C;
    case 0x805CD980u: goto label_805CD980;
    case 0x805CD984u: goto label_805CD984;
    case 0x805CD988u: goto label_805CD988;
    case 0x805CD98Cu: goto label_805CD98C;
    case 0x805CD990u: goto label_805CD990;
    case 0x805CD994u: goto label_805CD994;
    case 0x805CD998u: goto label_805CD998;
    case 0x805CD99Cu: goto label_805CD99C;
    case 0x805CD9A0u: goto label_805CD9A0;
    case 0x805CD9A4u: goto label_805CD9A4;
    case 0x805CD9A8u: goto label_805CD9A8;
    case 0x805CD9ACu: goto label_805CD9AC;
    case 0x805CD9B0u: goto label_805CD9B0;
    case 0x805CD9B4u: goto label_805CD9B4;
    case 0x805CD9B8u: goto label_805CD9B8;
    case 0x805CD9BCu: goto label_805CD9BC;
    case 0x805CD9C0u: goto label_805CD9C0;
    case 0x805CD9C4u: goto label_805CD9C4;
    case 0x805CD9C8u: goto label_805CD9C8;
    case 0x805CD9CCu: goto label_805CD9CC;
    case 0x805CD9D0u: goto label_805CD9D0;
    case 0x805CD9D4u: goto label_805CD9D4;
    case 0x805CD9D8u: goto label_805CD9D8;
    case 0x805CD9DCu: goto label_805CD9DC;
    case 0x805CD9E0u: goto label_805CD9E0;
    case 0x805CD9E4u: goto label_805CD9E4;
    case 0x805CD9E8u: goto label_805CD9E8;
    case 0x805CD9ECu: goto label_805CD9EC;
    case 0x805CD9F0u: goto label_805CD9F0;
    case 0x805CD9F4u: goto label_805CD9F4;
    case 0x805CD9F8u: goto label_805CD9F8;
    case 0x805CD9FCu: goto label_805CD9FC;
    case 0x805CDA00u: goto label_805CDA00;
    case 0x805CDA04u: goto label_805CDA04;
    case 0x805CDA08u: goto label_805CDA08;
    case 0x805CDA0Cu: goto label_805CDA0C;
    case 0x805CDA10u: goto label_805CDA10;
    case 0x805CDA14u: goto label_805CDA14;
    case 0x805CDA18u: goto label_805CDA18;
    case 0x805CDA1Cu: goto label_805CDA1C;
    case 0x805CDA20u: goto label_805CDA20;
    case 0x805CDA24u: goto label_805CDA24;
    case 0x805CDA28u: goto label_805CDA28;
    case 0x805CDA2Cu: goto label_805CDA2C;
    case 0x805CDA30u: goto label_805CDA30;
    case 0x805CDA34u: goto label_805CDA34;
    case 0x805CDA38u: goto label_805CDA38;
    case 0x805CDA3Cu: goto label_805CDA3C;
    case 0x805CDA40u: goto label_805CDA40;
    case 0x805CDA44u: goto label_805CDA44;
    case 0x805CDA48u: goto label_805CDA48;
    case 0x805CDA4Cu: goto label_805CDA4C;
    case 0x805CDA50u: goto label_805CDA50;
    case 0x805CDA54u: goto label_805CDA54;
    case 0x805CDA58u: goto label_805CDA58;
    case 0x805CDA5Cu: goto label_805CDA5C;
    case 0x805CDA60u: goto label_805CDA60;
    case 0x805CDA64u: goto label_805CDA64;
    case 0x805CDA68u: goto label_805CDA68;
    case 0x805CDA6Cu: goto label_805CDA6C;
    case 0x805CDA70u: goto label_805CDA70;
    case 0x805CDA74u: goto label_805CDA74;
    case 0x805CDA78u: goto label_805CDA78;
    case 0x805CDA7Cu: goto label_805CDA7C;
    case 0x805CDA80u: goto label_805CDA80;
    case 0x805CDA84u: goto label_805CDA84;
    case 0x805CDA88u: goto label_805CDA88;
    case 0x805CDA8Cu: goto label_805CDA8C;
    case 0x805CDA90u: goto label_805CDA90;
    case 0x805CDA94u: goto label_805CDA94;
    case 0x805CDA98u: goto label_805CDA98;
    case 0x805CDA9Cu: goto label_805CDA9C;
    case 0x805CDAA0u: goto label_805CDAA0;
    case 0x805CDAA4u: goto label_805CDAA4;
    case 0x805CDAA8u: goto label_805CDAA8;
    case 0x805CDAACu: goto label_805CDAAC;
    case 0x805CDAB0u: goto label_805CDAB0;
    case 0x805CDAB4u: goto label_805CDAB4;
    case 0x805CDAB8u: goto label_805CDAB8;
    case 0x805CDABCu: goto label_805CDABC;
    case 0x805CDAC0u: goto label_805CDAC0;
    case 0x805CDAC4u: goto label_805CDAC4;
    case 0x805CDAC8u: goto label_805CDAC8;
    case 0x805CDACCu: goto label_805CDACC;
    case 0x805CDAD0u: goto label_805CDAD0;
    case 0x805CDAD4u: goto label_805CDAD4;
    case 0x805CDAD8u: goto label_805CDAD8;
    case 0x805CDADCu: goto label_805CDADC;
    case 0x805CDAE0u: goto label_805CDAE0;
    case 0x805CDAE4u: goto label_805CDAE4;
    case 0x805CDAE8u: goto label_805CDAE8;
    case 0x805CDAECu: goto label_805CDAEC;
    case 0x805CDAF0u: goto label_805CDAF0;
    case 0x805CDAF4u: goto label_805CDAF4;
    case 0x805CDAF8u: goto label_805CDAF8;
    case 0x805CDAFCu: goto label_805CDAFC;
    case 0x805CDB00u: goto label_805CDB00;
    case 0x805CDB04u: goto label_805CDB04;
    case 0x805CDB08u: goto label_805CDB08;
    case 0x805CDB0Cu: goto label_805CDB0C;
    case 0x805CDB10u: goto label_805CDB10;
    case 0x805CDB14u: goto label_805CDB14;
    case 0x805CDB18u: goto label_805CDB18;
    case 0x805CDB1Cu: goto label_805CDB1C;
    case 0x805CDB20u: goto label_805CDB20;
    case 0x805CDB24u: goto label_805CDB24;
    case 0x805CDB28u: goto label_805CDB28;
    case 0x805CDB2Cu: goto label_805CDB2C;
    case 0x805CDB30u: goto label_805CDB30;
    case 0x805CDB34u: goto label_805CDB34;
    case 0x805CDB38u: goto label_805CDB38;
    case 0x805CDB3Cu: goto label_805CDB3C;
    case 0x805CDB40u: goto label_805CDB40;
    case 0x805CDB44u: goto label_805CDB44;
    case 0x805CDB48u: goto label_805CDB48;
    case 0x805CDB4Cu: goto label_805CDB4C;
    case 0x805CDB50u: goto label_805CDB50;
    case 0x805CDB54u: goto label_805CDB54;
    case 0x805CDB58u: goto label_805CDB58;
    case 0x805CDB5Cu: goto label_805CDB5C;
    case 0x805CDB60u: goto label_805CDB60;
    case 0x805CDB64u: goto label_805CDB64;
    case 0x805CDB68u: goto label_805CDB68;
    case 0x805CDB6Cu: goto label_805CDB6C;
    case 0x805CDB70u: goto label_805CDB70;
    case 0x805CDB74u: goto label_805CDB74;
    case 0x805CDB78u: goto label_805CDB78;
    case 0x805CDB7Cu: goto label_805CDB7C;
    case 0x805CDB80u: goto label_805CDB80;
    case 0x805CDB84u: goto label_805CDB84;
    case 0x805CDB88u: goto label_805CDB88;
    case 0x805CDB8Cu: goto label_805CDB8C;
    case 0x805CDB90u: goto label_805CDB90;
    case 0x805CDB94u: goto label_805CDB94;
    case 0x805CDB98u: goto label_805CDB98;
    case 0x805CDB9Cu: goto label_805CDB9C;
    case 0x805CDBA0u: goto label_805CDBA0;
    case 0x805CDBA4u: goto label_805CDBA4;
    case 0x805CDBA8u: goto label_805CDBA8;
    case 0x805CDBACu: goto label_805CDBAC;
    case 0x805CDBB0u: goto label_805CDBB0;
    case 0x805CDBB4u: goto label_805CDBB4;
    case 0x805CDBB8u: goto label_805CDBB8;
    case 0x805CDBBCu: goto label_805CDBBC;
    case 0x805CDBC0u: goto label_805CDBC0;
    case 0x805CDBC4u: goto label_805CDBC4;
    case 0x805CDBC8u: goto label_805CDBC8;
    case 0x805CDBCCu: goto label_805CDBCC;
    case 0x805CDBD0u: goto label_805CDBD0;
    case 0x805CDBD4u: goto label_805CDBD4;
    case 0x805CDBD8u: goto label_805CDBD8;
    case 0x805CDBDCu: goto label_805CDBDC;
    case 0x805CDBE0u: goto label_805CDBE0;
    case 0x805CDBE4u: goto label_805CDBE4;
    case 0x805CDBE8u: goto label_805CDBE8;
    case 0x805CDBECu: goto label_805CDBEC;
    case 0x805CDBF0u: goto label_805CDBF0;
    case 0x805CDBF4u: goto label_805CDBF4;
    case 0x805CDBF8u: goto label_805CDBF8;
    case 0x805CDBFCu: goto label_805CDBFC;
    case 0x805CDC00u: goto label_805CDC00;
    case 0x805CDC04u: goto label_805CDC04;
    case 0x805CDC08u: goto label_805CDC08;
    case 0x805CDC0Cu: goto label_805CDC0C;
    case 0x805CDC10u: goto label_805CDC10;
    case 0x805CDC14u: goto label_805CDC14;
    case 0x805CDC18u: goto label_805CDC18;
    case 0x805CDC1Cu: goto label_805CDC1C;
    case 0x805CDC20u: goto label_805CDC20;
    case 0x805CDC24u: goto label_805CDC24;
    case 0x805CDC28u: goto label_805CDC28;
    case 0x805CDC2Cu: goto label_805CDC2C;
    case 0x805CDC30u: goto label_805CDC30;
    case 0x805CDC34u: goto label_805CDC34;
    case 0x805CDC38u: goto label_805CDC38;
    case 0x805CDC3Cu: goto label_805CDC3C;
    case 0x805CDC40u: goto label_805CDC40;
    case 0x805CDC44u: goto label_805CDC44;
    case 0x805CDC48u: goto label_805CDC48;
    case 0x805CDC4Cu: goto label_805CDC4C;
    case 0x805CDC50u: goto label_805CDC50;
    case 0x805CDC54u: goto label_805CDC54;
    case 0x805CDC58u: goto label_805CDC58;
    case 0x805CDC5Cu: goto label_805CDC5C;
    case 0x805CDC60u: goto label_805CDC60;
    case 0x805CDC64u: goto label_805CDC64;
    case 0x805CDC68u: goto label_805CDC68;
    case 0x805CDC6Cu: goto label_805CDC6C;
    case 0x805CDC70u: goto label_805CDC70;
    case 0x805CDC74u: goto label_805CDC74;
    case 0x805CDC78u: goto label_805CDC78;
    case 0x805CDC7Cu: goto label_805CDC7C;
    case 0x805CDC80u: goto label_805CDC80;
    case 0x805CDC84u: goto label_805CDC84;
    case 0x805CDC88u: goto label_805CDC88;
    case 0x805CDC8Cu: goto label_805CDC8C;
    case 0x805CDC90u: goto label_805CDC90;
    case 0x805CDC94u: goto label_805CDC94;
    case 0x805CDC98u: goto label_805CDC98;
    case 0x805CDC9Cu: goto label_805CDC9C;
    case 0x805CDCA0u: goto label_805CDCA0;
    case 0x805CDCA4u: goto label_805CDCA4;
    case 0x805CDCA8u: goto label_805CDCA8;
    case 0x805CDCACu: goto label_805CDCAC;
    case 0x805CDCB0u: goto label_805CDCB0;
    case 0x805CDCB4u: goto label_805CDCB4;
    case 0x805CDCB8u: goto label_805CDCB8;
    case 0x805CDCBCu: goto label_805CDCBC;
    case 0x805CDCC0u: goto label_805CDCC0;
    case 0x805CDCC4u: goto label_805CDCC4;
    case 0x805CDCC8u: goto label_805CDCC8;
    case 0x805CDCCCu: goto label_805CDCCC;
    case 0x805CDCD0u: goto label_805CDCD0;
    case 0x805CDCD4u: goto label_805CDCD4;
    case 0x805CDCD8u: goto label_805CDCD8;
    case 0x805CDCDCu: goto label_805CDCDC;
    case 0x805CDCE0u: goto label_805CDCE0;
    case 0x805CDCE4u: goto label_805CDCE4;
    case 0x805CDCE8u: goto label_805CDCE8;
    case 0x805CDCECu: goto label_805CDCEC;
    case 0x805CDCF0u: goto label_805CDCF0;
    case 0x805CDCF4u: goto label_805CDCF4;
    case 0x805CDCF8u: goto label_805CDCF8;
    case 0x805CDCFCu: goto label_805CDCFC;
    case 0x805CDD00u: goto label_805CDD00;
    case 0x805CDD04u: goto label_805CDD04;
    case 0x805CDD08u: goto label_805CDD08;
    case 0x805CDD0Cu: goto label_805CDD0C;
    case 0x805CDD10u: goto label_805CDD10;
    case 0x805CDD14u: goto label_805CDD14;
    case 0x805CDD18u: goto label_805CDD18;
    case 0x805CDD1Cu: goto label_805CDD1C;
    case 0x805CDD20u: goto label_805CDD20;
    case 0x805CDD24u: goto label_805CDD24;
    case 0x805CDD28u: goto label_805CDD28;
    case 0x805CDD2Cu: goto label_805CDD2C;
    case 0x805CDD30u: goto label_805CDD30;
    case 0x805CDD34u: goto label_805CDD34;
    case 0x805CDD38u: goto label_805CDD38;
    case 0x805CDD3Cu: goto label_805CDD3C;
    case 0x805CDD40u: goto label_805CDD40;
    case 0x805CDD44u: goto label_805CDD44;
    case 0x805CDD48u: goto label_805CDD48;
    case 0x805CDD4Cu: goto label_805CDD4C;
    case 0x805CDD50u: goto label_805CDD50;
    case 0x805CDD54u: goto label_805CDD54;
    case 0x805CDD58u: goto label_805CDD58;
    case 0x805CDD5Cu: goto label_805CDD5C;
    case 0x805CDD60u: goto label_805CDD60;
    case 0x805CDD64u: goto label_805CDD64;
    case 0x805CDD68u: goto label_805CDD68;
    case 0x805CDD6Cu: goto label_805CDD6C;
    case 0x805CDD70u: goto label_805CDD70;
    case 0x805CDD74u: goto label_805CDD74;
    case 0x805CDD78u: goto label_805CDD78;
    case 0x805CDD7Cu: goto label_805CDD7C;
    case 0x805CDD80u: goto label_805CDD80;
    case 0x805CDD84u: goto label_805CDD84;
    case 0x805CDD88u: goto label_805CDD88;
    case 0x805CDD8Cu: goto label_805CDD8C;
    case 0x805CDD90u: goto label_805CDD90;
    case 0x805CDD94u: goto label_805CDD94;
    case 0x805CDD98u: goto label_805CDD98;
    case 0x805CDD9Cu: goto label_805CDD9C;
    case 0x805CDDA0u: goto label_805CDDA0;
    case 0x805CDDA4u: goto label_805CDDA4;
    case 0x805CDDA8u: goto label_805CDDA8;
    case 0x805CDDACu: goto label_805CDDAC;
    case 0x805CDDB0u: goto label_805CDDB0;
    case 0x805CDDB4u: goto label_805CDDB4;
    case 0x805CDDB8u: goto label_805CDDB8;
    case 0x805CDDBCu: goto label_805CDDBC;
    case 0x805CDDC0u: goto label_805CDDC0;
    case 0x805CDDC4u: goto label_805CDDC4;
    case 0x805CDDC8u: goto label_805CDDC8;
    case 0x805CDDCCu: goto label_805CDDCC;
    case 0x805CDDD0u: goto label_805CDDD0;
    case 0x805CDDD4u: goto label_805CDDD4;
    case 0x805CDDD8u: goto label_805CDDD8;
    case 0x805CDDDCu: goto label_805CDDDC;
    case 0x805CDDE0u: goto label_805CDDE0;
    case 0x805CDDE4u: goto label_805CDDE4;
    case 0x805CDDE8u: goto label_805CDDE8;
    case 0x805CDDECu: goto label_805CDDEC;
    case 0x805CDDF0u: goto label_805CDDF0;
    case 0x805CDDF4u: goto label_805CDDF4;
    case 0x805CDDF8u: goto label_805CDDF8;
    case 0x805CDDFCu: goto label_805CDDFC;
    case 0x805CDE00u: goto label_805CDE00;
    case 0x805CDE04u: goto label_805CDE04;
    case 0x805CDE08u: goto label_805CDE08;
    case 0x805CDE0Cu: goto label_805CDE0C;
    case 0x805CDE10u: goto label_805CDE10;
    case 0x805CDE14u: goto label_805CDE14;
    case 0x805CDE18u: goto label_805CDE18;
    case 0x805CDE1Cu: goto label_805CDE1C;
    case 0x805CDE20u: goto label_805CDE20;
    case 0x805CDE24u: goto label_805CDE24;
    case 0x805CDE28u: goto label_805CDE28;
    case 0x805CDE2Cu: goto label_805CDE2C;
    case 0x805CDE30u: goto label_805CDE30;
    case 0x805CDE34u: goto label_805CDE34;
    case 0x805CDE38u: goto label_805CDE38;
    case 0x805CDE3Cu: goto label_805CDE3C;
    case 0x805CDE40u: goto label_805CDE40;
    case 0x805CDE44u: goto label_805CDE44;
    case 0x805CDE48u: goto label_805CDE48;
    case 0x805CDE4Cu: goto label_805CDE4C;
    case 0x805CDE50u: goto label_805CDE50;
    case 0x805CDE54u: goto label_805CDE54;
    case 0x805CDE58u: goto label_805CDE58;
    case 0x805CDE5Cu: goto label_805CDE5C;
    case 0x805CDE60u: goto label_805CDE60;
    case 0x805CDE64u: goto label_805CDE64;
    case 0x805CDE68u: goto label_805CDE68;
    case 0x805CDE6Cu: goto label_805CDE6C;
    case 0x805CDE70u: goto label_805CDE70;
    case 0x805CDE74u: goto label_805CDE74;
    case 0x805CDE78u: goto label_805CDE78;
    case 0x805CDE7Cu: goto label_805CDE7C;
    case 0x805CDE80u: goto label_805CDE80;
    case 0x805CDE84u: goto label_805CDE84;
    case 0x805CDE88u: goto label_805CDE88;
    case 0x805CDE8Cu: goto label_805CDE8C;
    case 0x805CDE90u: goto label_805CDE90;
    case 0x805CDE94u: goto label_805CDE94;
    case 0x805CDE98u: goto label_805CDE98;
    case 0x805CDE9Cu: goto label_805CDE9C;
    case 0x805CDEA0u: goto label_805CDEA0;
    case 0x805CDEA4u: goto label_805CDEA4;
    case 0x805CDEA8u: goto label_805CDEA8;
    case 0x805CDEACu: goto label_805CDEAC;
    case 0x805CDEB0u: goto label_805CDEB0;
    case 0x805CDEB4u: goto label_805CDEB4;
    case 0x805CDEB8u: goto label_805CDEB8;
    case 0x805CDEBCu: goto label_805CDEBC;
    case 0x805CDEC0u: goto label_805CDEC0;
    case 0x805CDEC4u: goto label_805CDEC4;
    case 0x805CDEC8u: goto label_805CDEC8;
    case 0x805CDECCu: goto label_805CDECC;
    case 0x805CDED0u: goto label_805CDED0;
    case 0x805CDED4u: goto label_805CDED4;
    case 0x805CDED8u: goto label_805CDED8;
    case 0x805CDEDCu: goto label_805CDEDC;
    case 0x805CDEE0u: goto label_805CDEE0;
    case 0x805CDEE4u: goto label_805CDEE4;
    case 0x805CDEE8u: goto label_805CDEE8;
    case 0x805CDEECu: goto label_805CDEEC;
    case 0x805CDEF0u: goto label_805CDEF0;
    case 0x805CDEF4u: goto label_805CDEF4;
    case 0x805CDEF8u: goto label_805CDEF8;
    case 0x805CDEFCu: goto label_805CDEFC;
    case 0x805CDF00u: goto label_805CDF00;
    case 0x805CDF04u: goto label_805CDF04;
    case 0x805CDF08u: goto label_805CDF08;
    case 0x805CDF0Cu: goto label_805CDF0C;
    case 0x805CDF10u: goto label_805CDF10;
    case 0x805CDF14u: goto label_805CDF14;
    case 0x805CDF18u: goto label_805CDF18;
    case 0x805CDF1Cu: goto label_805CDF1C;
    case 0x805CDF20u: goto label_805CDF20;
    case 0x805CDF24u: goto label_805CDF24;
    case 0x805CDF28u: goto label_805CDF28;
    case 0x805CDF2Cu: goto label_805CDF2C;
    case 0x805CDF30u: goto label_805CDF30;
    case 0x805CDF34u: goto label_805CDF34;
    case 0x805CDF38u: goto label_805CDF38;
    case 0x805CDF3Cu: goto label_805CDF3C;
    case 0x805CDF40u: goto label_805CDF40;
    case 0x805CDF44u: goto label_805CDF44;
    case 0x805CDF48u: goto label_805CDF48;
    case 0x805CDF4Cu: goto label_805CDF4C;
    case 0x805CDF50u: goto label_805CDF50;
    case 0x805CDF54u: goto label_805CDF54;
    case 0x805CDF58u: goto label_805CDF58;
    case 0x805CDF5Cu: goto label_805CDF5C;
    case 0x805CDF60u: goto label_805CDF60;
    case 0x805CDF64u: goto label_805CDF64;
    case 0x805CDF68u: goto label_805CDF68;
    case 0x805CDF6Cu: goto label_805CDF6C;
    case 0x805CDF70u: goto label_805CDF70;
    case 0x805CDF74u: goto label_805CDF74;
    case 0x805CDF78u: goto label_805CDF78;
    case 0x805CDF7Cu: goto label_805CDF7C;
    case 0x805CDF80u: goto label_805CDF80;
    case 0x805CDF84u: goto label_805CDF84;
    case 0x805CDF88u: goto label_805CDF88;
    case 0x805CDF8Cu: goto label_805CDF8C;
    case 0x805CDF90u: goto label_805CDF90;
    case 0x805CDF94u: goto label_805CDF94;
    case 0x805CDF98u: goto label_805CDF98;
    case 0x805CDF9Cu: goto label_805CDF9C;
    case 0x805CDFA0u: goto label_805CDFA0;
    case 0x805CDFA4u: goto label_805CDFA4;
    case 0x805CDFA8u: goto label_805CDFA8;
    case 0x805CDFACu: goto label_805CDFAC;
    case 0x805CDFB0u: goto label_805CDFB0;
    case 0x805CDFB4u: goto label_805CDFB4;
    case 0x805CDFB8u: goto label_805CDFB8;
    case 0x805CDFBCu: goto label_805CDFBC;
    case 0x805CDFC0u: goto label_805CDFC0;
    case 0x805CDFC4u: goto label_805CDFC4;
    case 0x805CDFC8u: goto label_805CDFC8;
    case 0x805CDFCCu: goto label_805CDFCC;
    case 0x805CDFD0u: goto label_805CDFD0;
    case 0x805CDFD4u: goto label_805CDFD4;
    case 0x805CDFD8u: goto label_805CDFD8;
    case 0x805CDFDCu: goto label_805CDFDC;
    case 0x805CDFE0u: goto label_805CDFE0;
    case 0x805CDFE4u: goto label_805CDFE4;
    case 0x805CDFE8u: goto label_805CDFE8;
    case 0x805CDFECu: goto label_805CDFEC;
    case 0x805CDFF0u: goto label_805CDFF0;
    case 0x805CDFF4u: goto label_805CDFF4;
    case 0x805CDFF8u: goto label_805CDFF8;
    case 0x805CDFFCu: goto label_805CDFFC;
    case 0x805CE000u: goto label_805CE000;
    case 0x805CE004u: goto label_805CE004;
    case 0x805CE008u: goto label_805CE008;
    case 0x805CE00Cu: goto label_805CE00C;
    case 0x805CE010u: goto label_805CE010;
    case 0x805CE014u: goto label_805CE014;
    case 0x805CE018u: goto label_805CE018;
    case 0x805CE01Cu: goto label_805CE01C;
    case 0x805CE020u: goto label_805CE020;
    case 0x805CE024u: goto label_805CE024;
    case 0x805CE028u: goto label_805CE028;
    case 0x805CE02Cu: goto label_805CE02C;
    case 0x805CE030u: goto label_805CE030;
    case 0x805CE034u: goto label_805CE034;
    case 0x805CE038u: goto label_805CE038;
    case 0x805CE03Cu: goto label_805CE03C;
    case 0x805CE040u: goto label_805CE040;
    case 0x805CE044u: goto label_805CE044;
    case 0x805CE048u: goto label_805CE048;
    case 0x805CE04Cu: goto label_805CE04C;
    case 0x805CE050u: goto label_805CE050;
    case 0x805CE054u: goto label_805CE054;
    case 0x805CE058u: goto label_805CE058;
    case 0x805CE05Cu: goto label_805CE05C;
    case 0x805CE060u: goto label_805CE060;
    case 0x805CE064u: goto label_805CE064;
    case 0x805CE068u: goto label_805CE068;
    case 0x805CE06Cu: goto label_805CE06C;
    case 0x805CE070u: goto label_805CE070;
    case 0x805CE074u: goto label_805CE074;
    case 0x805CE078u: goto label_805CE078;
    case 0x805CE07Cu: goto label_805CE07C;
    case 0x805CE080u: goto label_805CE080;
    case 0x805CE084u: goto label_805CE084;
    case 0x805CE088u: goto label_805CE088;
    case 0x805CE08Cu: goto label_805CE08C;
    case 0x805CE090u: goto label_805CE090;
    case 0x805CE094u: goto label_805CE094;
    case 0x805CE098u: goto label_805CE098;
    case 0x805CE09Cu: goto label_805CE09C;
    case 0x805CE0A0u: goto label_805CE0A0;
    case 0x805CE0A4u: goto label_805CE0A4;
    case 0x805CE0A8u: goto label_805CE0A8;
    case 0x805CE0ACu: goto label_805CE0AC;
    case 0x805CE0B0u: goto label_805CE0B0;
    case 0x805CE0B4u: goto label_805CE0B4;
    case 0x805CE0B8u: goto label_805CE0B8;
    case 0x805CE0BCu: goto label_805CE0BC;
    case 0x805CE0C0u: goto label_805CE0C0;
    case 0x805CE0C4u: goto label_805CE0C4;
    case 0x805CE0C8u: goto label_805CE0C8;
    case 0x805CE0CCu: goto label_805CE0CC;
    case 0x805CE0D0u: goto label_805CE0D0;
    case 0x805CE0D4u: goto label_805CE0D4;
    case 0x805CE0D8u: goto label_805CE0D8;
    case 0x805CE0DCu: goto label_805CE0DC;
    case 0x805CE0E0u: goto label_805CE0E0;
    case 0x805CE0E4u: goto label_805CE0E4;
    case 0x805CE0E8u: goto label_805CE0E8;
    case 0x805CE0ECu: goto label_805CE0EC;
    case 0x805CE0F0u: goto label_805CE0F0;
    case 0x805CE0F4u: goto label_805CE0F4;
    case 0x805CE0F8u: goto label_805CE0F8;
    case 0x805CE0FCu: goto label_805CE0FC;
    case 0x805CE100u: goto label_805CE100;
    case 0x805CE104u: goto label_805CE104;
    case 0x805CE108u: goto label_805CE108;
    case 0x805CE10Cu: goto label_805CE10C;
    case 0x805CE110u: goto label_805CE110;
    case 0x805CE114u: goto label_805CE114;
    case 0x805CE118u: goto label_805CE118;
    case 0x805CE11Cu: goto label_805CE11C;
    case 0x805CE120u: goto label_805CE120;
    case 0x805CE124u: goto label_805CE124;
    case 0x805CE128u: goto label_805CE128;
    case 0x805CE12Cu: goto label_805CE12C;
    case 0x805CE130u: goto label_805CE130;
    case 0x805CE134u: goto label_805CE134;
    case 0x805CE138u: goto label_805CE138;
    case 0x805CE13Cu: goto label_805CE13C;
    case 0x805CE140u: goto label_805CE140;
    case 0x805CE144u: goto label_805CE144;
    case 0x805CE148u: goto label_805CE148;
    case 0x805CE14Cu: goto label_805CE14C;
    case 0x805CE150u: goto label_805CE150;
    case 0x805CE154u: goto label_805CE154;
    case 0x805CE158u: goto label_805CE158;
    case 0x805CE15Cu: goto label_805CE15C;
    case 0x805CE160u: goto label_805CE160;
    case 0x805CE164u: goto label_805CE164;
    case 0x805CE168u: goto label_805CE168;
    case 0x805CE16Cu: goto label_805CE16C;
    case 0x805CE170u: goto label_805CE170;
    case 0x805CE174u: goto label_805CE174;
    case 0x805CE178u: goto label_805CE178;
    case 0x805CE17Cu: goto label_805CE17C;
    case 0x805CE180u: goto label_805CE180;
    case 0x805CE184u: goto label_805CE184;
    case 0x805CE188u: goto label_805CE188;
    case 0x805CE18Cu: goto label_805CE18C;
    case 0x805CE190u: goto label_805CE190;
    case 0x805CE194u: goto label_805CE194;
    case 0x805CE198u: goto label_805CE198;
    case 0x805CE19Cu: goto label_805CE19C;
    case 0x805CE1A0u: goto label_805CE1A0;
    case 0x805CE1A4u: goto label_805CE1A4;
    case 0x805CE1A8u: goto label_805CE1A8;
    case 0x805CE1ACu: goto label_805CE1AC;
    case 0x805CE1B0u: goto label_805CE1B0;
    case 0x805CE1B4u: goto label_805CE1B4;
    case 0x805CE1B8u: goto label_805CE1B8;
    case 0x805CE1BCu: goto label_805CE1BC;
    case 0x805CE1C0u: goto label_805CE1C0;
    case 0x805CE1C4u: goto label_805CE1C4;
    case 0x805CE1C8u: goto label_805CE1C8;
    case 0x805CE1CCu: goto label_805CE1CC;
    case 0x805CE1D0u: goto label_805CE1D0;
    case 0x805CE1D4u: goto label_805CE1D4;
    case 0x805CE1D8u: goto label_805CE1D8;
    case 0x805CE1DCu: goto label_805CE1DC;
    case 0x805CE1E0u: goto label_805CE1E0;
    case 0x805CE1E4u: goto label_805CE1E4;
    case 0x805CE1E8u: goto label_805CE1E8;
    case 0x805CE1ECu: goto label_805CE1EC;
    case 0x805CE1F0u: goto label_805CE1F0;
    case 0x805CE1F4u: goto label_805CE1F4;
    case 0x805CE1F8u: goto label_805CE1F8;
    case 0x805CE1FCu: goto label_805CE1FC;
    case 0x805CE200u: goto label_805CE200;
    case 0x805CE204u: goto label_805CE204;
    case 0x805CE208u: goto label_805CE208;
    case 0x805CE20Cu: goto label_805CE20C;
    case 0x805CE210u: goto label_805CE210;
    case 0x805CE214u: goto label_805CE214;
    case 0x805CE218u: goto label_805CE218;
    case 0x805CE21Cu: goto label_805CE21C;
    case 0x805CE220u: goto label_805CE220;
    case 0x805CE224u: goto label_805CE224;
    case 0x805CE228u: goto label_805CE228;
    case 0x805CE22Cu: goto label_805CE22C;
    case 0x805CE230u: goto label_805CE230;
    case 0x805CE234u: goto label_805CE234;
    case 0x805CE238u: goto label_805CE238;
    case 0x805CE23Cu: goto label_805CE23C;
    case 0x805CE240u: goto label_805CE240;
    case 0x805CE244u: goto label_805CE244;
    case 0x805CE248u: goto label_805CE248;
    case 0x805CE24Cu: goto label_805CE24C;
    case 0x805CE250u: goto label_805CE250;
    case 0x805CE254u: goto label_805CE254;
    case 0x805CE258u: goto label_805CE258;
    case 0x805CE25Cu: goto label_805CE25C;
    case 0x805CE260u: goto label_805CE260;
    case 0x805CE264u: goto label_805CE264;
    case 0x805CE268u: goto label_805CE268;
    case 0x805CE26Cu: goto label_805CE26C;
    case 0x805CE270u: goto label_805CE270;
    case 0x805CE274u: goto label_805CE274;
    case 0x805CE278u: goto label_805CE278;
    case 0x805CE27Cu: goto label_805CE27C;
    case 0x805CE280u: goto label_805CE280;
    case 0x805CE284u: goto label_805CE284;
    case 0x805CE288u: goto label_805CE288;
    case 0x805CE28Cu: goto label_805CE28C;
    case 0x805CE290u: goto label_805CE290;
    case 0x805CE294u: goto label_805CE294;
    case 0x805CE298u: goto label_805CE298;
    case 0x805CE29Cu: goto label_805CE29C;
    case 0x805CE2A0u: goto label_805CE2A0;
    case 0x805CE2A4u: goto label_805CE2A4;
    case 0x805CE2A8u: goto label_805CE2A8;
    case 0x805CE2ACu: goto label_805CE2AC;
    case 0x805CE2B0u: goto label_805CE2B0;
    case 0x805CE2B4u: goto label_805CE2B4;
    case 0x805CE2B8u: goto label_805CE2B8;
    case 0x805CE2BCu: goto label_805CE2BC;
    case 0x805CE2C0u: goto label_805CE2C0;
    case 0x805CE2C4u: goto label_805CE2C4;
    case 0x805CE2C8u: goto label_805CE2C8;
    case 0x805CE2CCu: goto label_805CE2CC;
    case 0x805CE2D0u: goto label_805CE2D0;
    case 0x805CE2D4u: goto label_805CE2D4;
    case 0x805CE2D8u: goto label_805CE2D8;
    case 0x805CE2DCu: goto label_805CE2DC;
    case 0x805CE2E0u: goto label_805CE2E0;
    case 0x805CE2E4u: goto label_805CE2E4;
    case 0x805CE2E8u: goto label_805CE2E8;
    case 0x805CE2ECu: goto label_805CE2EC;
    case 0x805CE2F0u: goto label_805CE2F0;
    case 0x805CE2F4u: goto label_805CE2F4;
    case 0x805CE2F8u: goto label_805CE2F8;
    case 0x805CE2FCu: goto label_805CE2FC;
    case 0x805CE300u: goto label_805CE300;
    case 0x805CE304u: goto label_805CE304;
    case 0x805CE308u: goto label_805CE308;
    case 0x805CE30Cu: goto label_805CE30C;
    case 0x805CE310u: goto label_805CE310;
    case 0x805CE314u: goto label_805CE314;
    case 0x805CE318u: goto label_805CE318;
    case 0x805CE31Cu: goto label_805CE31C;
    case 0x805CE320u: goto label_805CE320;
    case 0x805CE324u: goto label_805CE324;
    case 0x805CE328u: goto label_805CE328;
    case 0x805CE32Cu: goto label_805CE32C;
    case 0x805CE330u: goto label_805CE330;
    case 0x805CE334u: goto label_805CE334;
    case 0x805CE338u: goto label_805CE338;
    case 0x805CE33Cu: goto label_805CE33C;
    case 0x805CE340u: goto label_805CE340;
    case 0x805CE344u: goto label_805CE344;
    case 0x805CE348u: goto label_805CE348;
    case 0x805CE34Cu: goto label_805CE34C;
    case 0x805CE350u: goto label_805CE350;
    case 0x805CE354u: goto label_805CE354;
    case 0x805CE358u: goto label_805CE358;
    case 0x805CE35Cu: goto label_805CE35C;
    case 0x805CE360u: goto label_805CE360;
    case 0x805CE364u: goto label_805CE364;
    case 0x805CE368u: goto label_805CE368;
    case 0x805CE36Cu: goto label_805CE36C;
    case 0x805CE370u: goto label_805CE370;
    case 0x805CE374u: goto label_805CE374;
    case 0x805CE378u: goto label_805CE378;
    case 0x805CE37Cu: goto label_805CE37C;
    case 0x805CE380u: goto label_805CE380;
    case 0x805CE384u: goto label_805CE384;
    case 0x805CE388u: goto label_805CE388;
    case 0x805CE38Cu: goto label_805CE38C;
    case 0x805CE390u: goto label_805CE390;
    case 0x805CE394u: goto label_805CE394;
    case 0x805CE398u: goto label_805CE398;
    case 0x805CE39Cu: goto label_805CE39C;
    case 0x805CE3A0u: goto label_805CE3A0;
    case 0x805CE3A4u: goto label_805CE3A4;
    case 0x805CE3A8u: goto label_805CE3A8;
    case 0x805CE3ACu: goto label_805CE3AC;
    case 0x805CE3B0u: goto label_805CE3B0;
    case 0x805CE3B4u: goto label_805CE3B4;
    case 0x805CE3B8u: goto label_805CE3B8;
    case 0x805CE3BCu: goto label_805CE3BC;
    case 0x805CE3C0u: goto label_805CE3C0;
    case 0x805CE3C4u: goto label_805CE3C4;
    case 0x805CE3C8u: goto label_805CE3C8;
    case 0x805CE3CCu: goto label_805CE3CC;
    case 0x805CE3D0u: goto label_805CE3D0;
    case 0x805CE3D4u: goto label_805CE3D4;
    case 0x805CE3D8u: goto label_805CE3D8;
    case 0x805CE3DCu: goto label_805CE3DC;
    case 0x805CE3E0u: goto label_805CE3E0;
    case 0x805CE3E4u: goto label_805CE3E4;
    case 0x805CE3E8u: goto label_805CE3E8;
    case 0x805CE3ECu: goto label_805CE3EC;
    case 0x805CE3F0u: goto label_805CE3F0;
    case 0x805CE3F4u: goto label_805CE3F4;
    case 0x805CE3F8u: goto label_805CE3F8;
    case 0x805CE3FCu: goto label_805CE3FC;
    case 0x805CE400u: goto label_805CE400;
    case 0x805CE404u: goto label_805CE404;
    case 0x805CE408u: goto label_805CE408;
    case 0x805CE40Cu: goto label_805CE40C;
    case 0x805CE410u: goto label_805CE410;
    case 0x805CE414u: goto label_805CE414;
    case 0x805CE418u: goto label_805CE418;
    case 0x805CE41Cu: goto label_805CE41C;
    case 0x805CE420u: goto label_805CE420;
    case 0x805CE424u: goto label_805CE424;
    case 0x805CE428u: goto label_805CE428;
    case 0x805CE42Cu: goto label_805CE42C;
    case 0x805CE430u: goto label_805CE430;
    case 0x805CE434u: goto label_805CE434;
    case 0x805CE438u: goto label_805CE438;
    case 0x805CE43Cu: goto label_805CE43C;
    case 0x805CE440u: goto label_805CE440;
    case 0x805CE444u: goto label_805CE444;
    case 0x805CE448u: goto label_805CE448;
    case 0x805CE44Cu: goto label_805CE44C;
    case 0x805CE450u: goto label_805CE450;
    case 0x805CE454u: goto label_805CE454;
    case 0x805CE458u: goto label_805CE458;
    case 0x805CE45Cu: goto label_805CE45C;
    case 0x805CE460u: goto label_805CE460;
    case 0x805CE464u: goto label_805CE464;
    case 0x805CE468u: goto label_805CE468;
    case 0x805CE46Cu: goto label_805CE46C;
    case 0x805CE470u: goto label_805CE470;
    case 0x805CE474u: goto label_805CE474;
    case 0x805CE478u: goto label_805CE478;
    case 0x805CE47Cu: goto label_805CE47C;
    case 0x805CE480u: goto label_805CE480;
    case 0x805CE484u: goto label_805CE484;
    case 0x805CE488u: goto label_805CE488;
    case 0x805CE48Cu: goto label_805CE48C;
    case 0x805CE490u: goto label_805CE490;
    case 0x805CE494u: goto label_805CE494;
    case 0x805CE498u: goto label_805CE498;
    case 0x805CE49Cu: goto label_805CE49C;
    case 0x805CE4A0u: goto label_805CE4A0;
    case 0x805CE4A4u: goto label_805CE4A4;
    case 0x805CE4A8u: goto label_805CE4A8;
    case 0x805CE4ACu: goto label_805CE4AC;
    case 0x805CE4B0u: goto label_805CE4B0;
    case 0x805CE4B4u: goto label_805CE4B4;
    case 0x805CE4B8u: goto label_805CE4B8;
    case 0x805CE4BCu: goto label_805CE4BC;
    case 0x805CE4C0u: goto label_805CE4C0;
    case 0x805CE4C4u: goto label_805CE4C4;
    case 0x805CE4C8u: goto label_805CE4C8;
    case 0x805CE4CCu: goto label_805CE4CC;
    case 0x805CE4D0u: goto label_805CE4D0;
    case 0x805CE4D4u: goto label_805CE4D4;
    case 0x805CE4D8u: goto label_805CE4D8;
    case 0x805CE4DCu: goto label_805CE4DC;
    case 0x805CE4E0u: goto label_805CE4E0;
    case 0x805CE4E4u: goto label_805CE4E4;
    case 0x805CE4E8u: goto label_805CE4E8;
    case 0x805CE4ECu: goto label_805CE4EC;
    case 0x805CE4F0u: goto label_805CE4F0;
    case 0x805CE4F4u: goto label_805CE4F4;
    case 0x805CE4F8u: goto label_805CE4F8;
    case 0x805CE4FCu: goto label_805CE4FC;
    case 0x805CE500u: goto label_805CE500;
    case 0x805CE504u: goto label_805CE504;
    case 0x805CE508u: goto label_805CE508;
    case 0x805CE50Cu: goto label_805CE50C;
    case 0x805CE510u: goto label_805CE510;
    case 0x805CE514u: goto label_805CE514;
    case 0x805CE518u: goto label_805CE518;
    case 0x805CE51Cu: goto label_805CE51C;
    case 0x805CE520u: goto label_805CE520;
    case 0x805CE524u: goto label_805CE524;
    case 0x805CE528u: goto label_805CE528;
    case 0x805CE52Cu: goto label_805CE52C;
    case 0x805CE530u: goto label_805CE530;
    case 0x805CE534u: goto label_805CE534;
    case 0x805CE538u: goto label_805CE538;
    case 0x805CE53Cu: goto label_805CE53C;
    case 0x805CE540u: goto label_805CE540;
    case 0x805CE544u: goto label_805CE544;
    case 0x805CE548u: goto label_805CE548;
    case 0x805CE54Cu: goto label_805CE54C;
    case 0x805CE550u: goto label_805CE550;
    case 0x805CE554u: goto label_805CE554;
    case 0x805CE558u: goto label_805CE558;
    case 0x805CE55Cu: goto label_805CE55C;
    case 0x805CE560u: goto label_805CE560;
    case 0x805CE564u: goto label_805CE564;
    case 0x805CE568u: goto label_805CE568;
    case 0x805CE56Cu: goto label_805CE56C;
    case 0x805CE570u: goto label_805CE570;
    case 0x805CE574u: goto label_805CE574;
    case 0x805CE578u: goto label_805CE578;
    case 0x805CE57Cu: goto label_805CE57C;
    case 0x805CE580u: goto label_805CE580;
    case 0x805CE584u: goto label_805CE584;
    case 0x805CE588u: goto label_805CE588;
    case 0x805CE58Cu: goto label_805CE58C;
    case 0x805CE590u: goto label_805CE590;
    case 0x805CE594u: goto label_805CE594;
    case 0x805CE598u: goto label_805CE598;
    case 0x805CE59Cu: goto label_805CE59C;
    case 0x805CE5A0u: goto label_805CE5A0;
    case 0x805CE5A4u: goto label_805CE5A4;
    case 0x805CE5A8u: goto label_805CE5A8;
    case 0x805CE5ACu: goto label_805CE5AC;
    case 0x805CE5B0u: goto label_805CE5B0;
    case 0x805CE5B4u: goto label_805CE5B4;
    case 0x805CE5B8u: goto label_805CE5B8;
    case 0x805CE5BCu: goto label_805CE5BC;
    case 0x805CE5C0u: goto label_805CE5C0;
    case 0x805CE5C4u: goto label_805CE5C4;
    case 0x805CE5C8u: goto label_805CE5C8;
    case 0x805CE5CCu: goto label_805CE5CC;
    case 0x805CE5D0u: goto label_805CE5D0;
    case 0x805CE5D4u: goto label_805CE5D4;
    case 0x805CE5D8u: goto label_805CE5D8;
    case 0x805CE5DCu: goto label_805CE5DC;
    case 0x805CE5E0u: goto label_805CE5E0;
    case 0x805CE5E4u: goto label_805CE5E4;
    case 0x805CE5E8u: goto label_805CE5E8;
    case 0x805CE5ECu: goto label_805CE5EC;
    case 0x805CE5F0u: goto label_805CE5F0;
    case 0x805CE5F4u: goto label_805CE5F4;
    case 0x805CE5F8u: goto label_805CE5F8;
    case 0x805CE5FCu: goto label_805CE5FC;
    case 0x805CE600u: goto label_805CE600;
    case 0x805CE604u: goto label_805CE604;
    case 0x805CE608u: goto label_805CE608;
    case 0x805CE60Cu: goto label_805CE60C;
    case 0x805CE610u: goto label_805CE610;
    case 0x805CE614u: goto label_805CE614;
    case 0x805CE618u: goto label_805CE618;
    case 0x805CE61Cu: goto label_805CE61C;
    case 0x805CE620u: goto label_805CE620;
    case 0x805CE624u: goto label_805CE624;
    case 0x805CE628u: goto label_805CE628;
    case 0x805CE62Cu: goto label_805CE62C;
    case 0x805CE630u: goto label_805CE630;
    case 0x805CE634u: goto label_805CE634;
    case 0x805CE638u: goto label_805CE638;
    case 0x805CE63Cu: goto label_805CE63C;
    case 0x805CE640u: goto label_805CE640;
    case 0x805CE644u: goto label_805CE644;
    case 0x805CE648u: goto label_805CE648;
    case 0x805CE64Cu: goto label_805CE64C;
    case 0x805CE650u: goto label_805CE650;
    case 0x805CE654u: goto label_805CE654;
    case 0x805CE658u: goto label_805CE658;
    case 0x805CE65Cu: goto label_805CE65C;
    case 0x805CE660u: goto label_805CE660;
    case 0x805CE664u: goto label_805CE664;
    case 0x805CE668u: goto label_805CE668;
    case 0x805CE66Cu: goto label_805CE66C;
    case 0x805CE670u: goto label_805CE670;
    case 0x805CE674u: goto label_805CE674;
    case 0x805CE678u: goto label_805CE678;
    case 0x805CE67Cu: goto label_805CE67C;
    case 0x805CE680u: goto label_805CE680;
    case 0x805CE684u: goto label_805CE684;
    case 0x805CE688u: goto label_805CE688;
    case 0x805CE68Cu: goto label_805CE68C;
    case 0x805CE690u: goto label_805CE690;
    case 0x805CE694u: goto label_805CE694;
    case 0x805CE698u: goto label_805CE698;
    case 0x805CE69Cu: goto label_805CE69C;
    case 0x805CE6A0u: goto label_805CE6A0;
    case 0x805CE6A4u: goto label_805CE6A4;
    case 0x805CE6A8u: goto label_805CE6A8;
    case 0x805CE6ACu: goto label_805CE6AC;
    case 0x805CE6B0u: goto label_805CE6B0;
    case 0x805CE6B4u: goto label_805CE6B4;
    case 0x805CE6B8u: goto label_805CE6B8;
    case 0x805CE6BCu: goto label_805CE6BC;
    case 0x805CE6C0u: goto label_805CE6C0;
    case 0x805CE6C4u: goto label_805CE6C4;
    case 0x805CE6C8u: goto label_805CE6C8;
    case 0x805CE6CCu: goto label_805CE6CC;
    case 0x805CE6D0u: goto label_805CE6D0;
    case 0x805CE6D4u: goto label_805CE6D4;
    case 0x805CE6D8u: goto label_805CE6D8;
    case 0x805CE6DCu: goto label_805CE6DC;
    case 0x805CE6E0u: goto label_805CE6E0;
    case 0x805CE6E4u: goto label_805CE6E4;
    case 0x805CE6E8u: goto label_805CE6E8;
    case 0x805CE6ECu: goto label_805CE6EC;
    case 0x805CE6F0u: goto label_805CE6F0;
    case 0x805CE6F4u: goto label_805CE6F4;
    case 0x805CE6F8u: goto label_805CE6F8;
    case 0x805CE6FCu: goto label_805CE6FC;
    case 0x805CE700u: goto label_805CE700;
    case 0x805CE704u: goto label_805CE704;
    case 0x805CE708u: goto label_805CE708;
    case 0x805CE70Cu: goto label_805CE70C;
    case 0x805CE710u: goto label_805CE710;
    case 0x805CE714u: goto label_805CE714;
    case 0x805CE718u: goto label_805CE718;
    case 0x805CE71Cu: goto label_805CE71C;
    case 0x805CE720u: goto label_805CE720;
    case 0x805CE724u: goto label_805CE724;
    case 0x805CE728u: goto label_805CE728;
    case 0x805CE72Cu: goto label_805CE72C;
    case 0x805CE730u: goto label_805CE730;
    case 0x805CE734u: goto label_805CE734;
    case 0x805CE738u: goto label_805CE738;
    case 0x805CE73Cu: goto label_805CE73C;
    case 0x805CE740u: goto label_805CE740;
    case 0x805CE744u: goto label_805CE744;
    case 0x805CE748u: goto label_805CE748;
    case 0x805CE74Cu: goto label_805CE74C;
    case 0x805CE750u: goto label_805CE750;
    case 0x805CE754u: goto label_805CE754;
    case 0x805CE758u: goto label_805CE758;
    case 0x805CE75Cu: goto label_805CE75C;
    case 0x805CE760u: goto label_805CE760;
    case 0x805CE764u: goto label_805CE764;
    case 0x805CE768u: goto label_805CE768;
    case 0x805CE76Cu: goto label_805CE76C;
    case 0x805CE770u: goto label_805CE770;
    case 0x805CE774u: goto label_805CE774;
    case 0x805CE778u: goto label_805CE778;
    case 0x805CE77Cu: goto label_805CE77C;
    case 0x805CE780u: goto label_805CE780;
    case 0x805CE784u: goto label_805CE784;
    case 0x805CE788u: goto label_805CE788;
    case 0x805CE78Cu: goto label_805CE78C;
    case 0x805CE790u: goto label_805CE790;
    case 0x805CE794u: goto label_805CE794;
    case 0x805CE798u: goto label_805CE798;
    case 0x805CE79Cu: goto label_805CE79C;
    case 0x805CE7A0u: goto label_805CE7A0;
    case 0x805CE7A4u: goto label_805CE7A4;
    case 0x805CE7A8u: goto label_805CE7A8;
    case 0x805CE7ACu: goto label_805CE7AC;
    case 0x805CE7B0u: goto label_805CE7B0;
    case 0x805CE7B4u: goto label_805CE7B4;
    case 0x805CE7B8u: goto label_805CE7B8;
    case 0x805CE7BCu: goto label_805CE7BC;
    case 0x805CE7C0u: goto label_805CE7C0;
    case 0x805CE7C4u: goto label_805CE7C4;
    case 0x805CE7C8u: goto label_805CE7C8;
    case 0x805CE7CCu: goto label_805CE7CC;
    case 0x805CE7D0u: goto label_805CE7D0;
    case 0x805CE7D4u: goto label_805CE7D4;
    case 0x805CE7D8u: goto label_805CE7D8;
    case 0x805CE7DCu: goto label_805CE7DC;
    case 0x805CE7E0u: goto label_805CE7E0;
    case 0x805CE7E4u: goto label_805CE7E4;
    case 0x805CE7E8u: goto label_805CE7E8;
    case 0x805CE7ECu: goto label_805CE7EC;
    case 0x805CE7F0u: goto label_805CE7F0;
    case 0x805CE7F4u: goto label_805CE7F4;
    case 0x805CE7F8u: goto label_805CE7F8;
    case 0x805CE7FCu: goto label_805CE7FC;
    case 0x805CE800u: goto label_805CE800;
    case 0x805CE804u: goto label_805CE804;
    case 0x805CE808u: goto label_805CE808;
    case 0x805CE80Cu: goto label_805CE80C;
    case 0x805CE810u: goto label_805CE810;
    case 0x805CE814u: goto label_805CE814;
    case 0x805CE818u: goto label_805CE818;
    case 0x805CE81Cu: goto label_805CE81C;
    case 0x805CE820u: goto label_805CE820;
    case 0x805CE824u: goto label_805CE824;
    case 0x805CE828u: goto label_805CE828;
    case 0x805CE82Cu: goto label_805CE82C;
    case 0x805CE830u: goto label_805CE830;
    case 0x805CE834u: goto label_805CE834;
    case 0x805CE838u: goto label_805CE838;
    case 0x805CE83Cu: goto label_805CE83C;
    case 0x805CE840u: goto label_805CE840;
    case 0x805CE844u: goto label_805CE844;
    case 0x805CE848u: goto label_805CE848;
    case 0x805CE84Cu: goto label_805CE84C;
    case 0x805CE850u: goto label_805CE850;
    case 0x805CE854u: goto label_805CE854;
    case 0x805CE858u: goto label_805CE858;
    case 0x805CE85Cu: goto label_805CE85C;
    case 0x805CE860u: goto label_805CE860;
    case 0x805CE864u: goto label_805CE864;
    case 0x805CE868u: goto label_805CE868;
    case 0x805CE86Cu: goto label_805CE86C;
    case 0x805CE870u: goto label_805CE870;
    case 0x805CE874u: goto label_805CE874;
    case 0x805CE878u: goto label_805CE878;
    case 0x805CE87Cu: goto label_805CE87C;
    case 0x805CE880u: goto label_805CE880;
    case 0x805CE884u: goto label_805CE884;
    case 0x805CE888u: goto label_805CE888;
    case 0x805CE88Cu: goto label_805CE88C;
    case 0x805CE890u: goto label_805CE890;
    case 0x805CE894u: goto label_805CE894;
    case 0x805CE898u: goto label_805CE898;
    case 0x805CE89Cu: goto label_805CE89C;
    case 0x805CE8A0u: goto label_805CE8A0;
    case 0x805CE8A4u: goto label_805CE8A4;
    case 0x805CE8A8u: goto label_805CE8A8;
    case 0x805CE8ACu: goto label_805CE8AC;
    case 0x805CE8B0u: goto label_805CE8B0;
    case 0x805CE8B4u: goto label_805CE8B4;
    case 0x805CE8B8u: goto label_805CE8B8;
    case 0x805CE8BCu: goto label_805CE8BC;
    case 0x805CE8C0u: goto label_805CE8C0;
    case 0x805CE8C4u: goto label_805CE8C4;
    case 0x805CE8C8u: goto label_805CE8C8;
    case 0x805CE8CCu: goto label_805CE8CC;
    case 0x805CE8D0u: goto label_805CE8D0;
    case 0x805CE8D4u: goto label_805CE8D4;
    case 0x805CE8D8u: goto label_805CE8D8;
    case 0x805CE8DCu: goto label_805CE8DC;
    case 0x805CE8E0u: goto label_805CE8E0;
    case 0x805CE8E4u: goto label_805CE8E4;
    case 0x805CE8E8u: goto label_805CE8E8;
    case 0x805CE8ECu: goto label_805CE8EC;
    case 0x805CE8F0u: goto label_805CE8F0;
    case 0x805CE8F4u: goto label_805CE8F4;
    case 0x805CE8F8u: goto label_805CE8F8;
    case 0x805CE8FCu: goto label_805CE8FC;
    case 0x805CE900u: goto label_805CE900;
    case 0x805CE904u: goto label_805CE904;
    case 0x805CE908u: goto label_805CE908;
    case 0x805CE90Cu: goto label_805CE90C;
    case 0x805CE910u: goto label_805CE910;
    case 0x805CE914u: goto label_805CE914;
    case 0x805CE918u: goto label_805CE918;
    case 0x805CE91Cu: goto label_805CE91C;
    case 0x805CE920u: goto label_805CE920;
    case 0x805CE924u: goto label_805CE924;
    case 0x805CE928u: goto label_805CE928;
    case 0x805CE92Cu: goto label_805CE92C;
    case 0x805CE930u: goto label_805CE930;
    case 0x805CE934u: goto label_805CE934;
    case 0x805CE938u: goto label_805CE938;
    case 0x805CE93Cu: goto label_805CE93C;
    case 0x805CE940u: goto label_805CE940;
    case 0x805CE944u: goto label_805CE944;
    case 0x805CE948u: goto label_805CE948;
    case 0x805CE94Cu: goto label_805CE94C;
    case 0x805CE950u: goto label_805CE950;
    case 0x805CE954u: goto label_805CE954;
    case 0x805CE958u: goto label_805CE958;
    case 0x805CE95Cu: goto label_805CE95C;
    case 0x805CE960u: goto label_805CE960;
    case 0x805CE964u: goto label_805CE964;
    case 0x805CE968u: goto label_805CE968;
    case 0x805CE96Cu: goto label_805CE96C;
    case 0x805CE970u: goto label_805CE970;
    case 0x805CE974u: goto label_805CE974;
    case 0x805CE978u: goto label_805CE978;
    case 0x805CE97Cu: goto label_805CE97C;
    case 0x805CE980u: goto label_805CE980;
    case 0x805CE984u: goto label_805CE984;
    case 0x805CE988u: goto label_805CE988;
    case 0x805CE98Cu: goto label_805CE98C;
    case 0x805CE990u: goto label_805CE990;
    case 0x805CE994u: goto label_805CE994;
    case 0x805CE998u: goto label_805CE998;
    case 0x805CE99Cu: goto label_805CE99C;
    case 0x805CE9A0u: goto label_805CE9A0;
    case 0x805CE9A4u: goto label_805CE9A4;
    case 0x805CE9A8u: goto label_805CE9A8;
    case 0x805CE9ACu: goto label_805CE9AC;
    case 0x805CE9B0u: goto label_805CE9B0;
    case 0x805CE9B4u: goto label_805CE9B4;
    case 0x805CE9B8u: goto label_805CE9B8;
    case 0x805CE9BCu: goto label_805CE9BC;
    case 0x805CE9C0u: goto label_805CE9C0;
    case 0x805CE9C4u: goto label_805CE9C4;
    case 0x805CE9C8u: goto label_805CE9C8;
    case 0x805CE9CCu: goto label_805CE9CC;
    case 0x805CE9D0u: goto label_805CE9D0;
    case 0x805CE9D4u: goto label_805CE9D4;
    case 0x805CE9D8u: goto label_805CE9D8;
    case 0x805CE9DCu: goto label_805CE9DC;
    case 0x805CE9E0u: goto label_805CE9E0;
    case 0x805CE9E4u: goto label_805CE9E4;
    case 0x805CE9E8u: goto label_805CE9E8;
    case 0x805CE9ECu: goto label_805CE9EC;
    case 0x805CE9F0u: goto label_805CE9F0;
    case 0x805CE9F4u: goto label_805CE9F4;
    case 0x805CE9F8u: goto label_805CE9F8;
    case 0x805CE9FCu: goto label_805CE9FC;
    case 0x805CEA00u: goto label_805CEA00;
    case 0x805CEA04u: goto label_805CEA04;
    case 0x805CEA08u: goto label_805CEA08;
    case 0x805CEA0Cu: goto label_805CEA0C;
    case 0x805CEA10u: goto label_805CEA10;
    case 0x805CEA14u: goto label_805CEA14;
    case 0x805CEA18u: goto label_805CEA18;
    case 0x805CEA1Cu: goto label_805CEA1C;
    case 0x805CEA20u: goto label_805CEA20;
    case 0x805CEA24u: goto label_805CEA24;
    case 0x805CEA28u: goto label_805CEA28;
    case 0x805CEA2Cu: goto label_805CEA2C;
    case 0x805CEA30u: goto label_805CEA30;
    case 0x805CEA34u: goto label_805CEA34;
    case 0x805CEA38u: goto label_805CEA38;
    case 0x805CEA3Cu: goto label_805CEA3C;
    case 0x805CEA40u: goto label_805CEA40;
    case 0x805CEA44u: goto label_805CEA44;
    case 0x805CEA48u: goto label_805CEA48;
    case 0x805CEA4Cu: goto label_805CEA4C;
    case 0x805CEA50u: goto label_805CEA50;
    case 0x805CEA54u: goto label_805CEA54;
    case 0x805CEA58u: goto label_805CEA58;
    case 0x805CEA5Cu: goto label_805CEA5C;
    case 0x805CEA60u: goto label_805CEA60;
    case 0x805CEA64u: goto label_805CEA64;
    case 0x805CEA68u: goto label_805CEA68;
    case 0x805CEA6Cu: goto label_805CEA6C;
    case 0x805CEA70u: goto label_805CEA70;
    case 0x805CEA74u: goto label_805CEA74;
    case 0x805CEA78u: goto label_805CEA78;
    case 0x805CEA7Cu: goto label_805CEA7C;
    case 0x805CEA80u: goto label_805CEA80;
    case 0x805CEA84u: goto label_805CEA84;
    case 0x805CEA88u: goto label_805CEA88;
    case 0x805CEA8Cu: goto label_805CEA8C;
    case 0x805CEA90u: goto label_805CEA90;
    case 0x805CEA94u: goto label_805CEA94;
    case 0x805CEA98u: goto label_805CEA98;
    case 0x805CEA9Cu: goto label_805CEA9C;
    case 0x805CEAA0u: goto label_805CEAA0;
    case 0x805CEAA4u: goto label_805CEAA4;
    case 0x805CEAA8u: goto label_805CEAA8;
    case 0x805CEAACu: goto label_805CEAAC;
    case 0x805CEAB0u: goto label_805CEAB0;
    case 0x805CEAB4u: goto label_805CEAB4;
    case 0x805CEAB8u: goto label_805CEAB8;
    case 0x805CEABCu: goto label_805CEABC;
    case 0x805CEAC0u: goto label_805CEAC0;
    case 0x805CEAC4u: goto label_805CEAC4;
    case 0x805CEAC8u: goto label_805CEAC8;
    case 0x805CEACCu: goto label_805CEACC;
    case 0x805CEAD0u: goto label_805CEAD0;
    case 0x805CEAD4u: goto label_805CEAD4;
    case 0x805CEAD8u: goto label_805CEAD8;
    case 0x805CEADCu: goto label_805CEADC;
    case 0x805CEAE0u: goto label_805CEAE0;
    case 0x805CEAE4u: goto label_805CEAE4;
    case 0x805CEAE8u: goto label_805CEAE8;
    case 0x805CEAECu: goto label_805CEAEC;
    case 0x805CEAF0u: goto label_805CEAF0;
    case 0x805CEAF4u: goto label_805CEAF4;
    case 0x805CEAF8u: goto label_805CEAF8;
    case 0x805CEAFCu: goto label_805CEAFC;
    case 0x805CEB00u: goto label_805CEB00;
    case 0x805CEB04u: goto label_805CEB04;
    case 0x805CEB08u: goto label_805CEB08;
    case 0x805CEB0Cu: goto label_805CEB0C;
    case 0x805CEB10u: goto label_805CEB10;
    case 0x805CEB14u: goto label_805CEB14;
    case 0x805CEB18u: goto label_805CEB18;
    case 0x805CEB1Cu: goto label_805CEB1C;
    case 0x805CEB20u: goto label_805CEB20;
    case 0x805CEB24u: goto label_805CEB24;
    case 0x805CEB28u: goto label_805CEB28;
    case 0x805CEB2Cu: goto label_805CEB2C;
    case 0x805CEB30u: goto label_805CEB30;
    case 0x805CEB34u: goto label_805CEB34;
    case 0x805CEB38u: goto label_805CEB38;
    case 0x805CEB3Cu: goto label_805CEB3C;
    case 0x805CEB40u: goto label_805CEB40;
    case 0x805CEB44u: goto label_805CEB44;
    case 0x805CEB48u: goto label_805CEB48;
    case 0x805CEB4Cu: goto label_805CEB4C;
    case 0x805CEB50u: goto label_805CEB50;
    case 0x805CEB54u: goto label_805CEB54;
    case 0x805CEB58u: goto label_805CEB58;
    case 0x805CEB5Cu: goto label_805CEB5C;
    case 0x805CEB60u: goto label_805CEB60;
    case 0x805CEB64u: goto label_805CEB64;
    case 0x805CEB68u: goto label_805CEB68;
    case 0x805CEB6Cu: goto label_805CEB6C;
    case 0x805CEB70u: goto label_805CEB70;
    case 0x805CEB74u: goto label_805CEB74;
    case 0x805CEB78u: goto label_805CEB78;
    case 0x805CEB7Cu: goto label_805CEB7C;
    case 0x805CEB80u: goto label_805CEB80;
    case 0x805CEB84u: goto label_805CEB84;
    case 0x805CEB88u: goto label_805CEB88;
    case 0x805CEB8Cu: goto label_805CEB8C;
    case 0x805CEB90u: goto label_805CEB90;
    case 0x805CEB94u: goto label_805CEB94;
    case 0x805CEB98u: goto label_805CEB98;
    case 0x805CEB9Cu: goto label_805CEB9C;
    case 0x805CEBA0u: goto label_805CEBA0;
    case 0x805CEBA4u: goto label_805CEBA4;
    case 0x805CEBA8u: goto label_805CEBA8;
    case 0x805CEBACu: goto label_805CEBAC;
    case 0x805CEBB0u: goto label_805CEBB0;
    case 0x805CEBB4u: goto label_805CEBB4;
    case 0x805CEBB8u: goto label_805CEBB8;
    case 0x805CEBBCu: goto label_805CEBBC;
    case 0x805CEBC0u: goto label_805CEBC0;
    case 0x805CEBC4u: goto label_805CEBC4;
    case 0x805CEBC8u: goto label_805CEBC8;
    case 0x805CEBCCu: goto label_805CEBCC;
    case 0x805CEBD0u: goto label_805CEBD0;
    case 0x805CEBD4u: goto label_805CEBD4;
    case 0x805CEBD8u: goto label_805CEBD8;
    case 0x805CEBDCu: goto label_805CEBDC;
    case 0x805CEBE0u: goto label_805CEBE0;
    case 0x805CEBE4u: goto label_805CEBE4;
    case 0x805CEBE8u: goto label_805CEBE8;
    case 0x805CEBECu: goto label_805CEBEC;
    case 0x805CEBF0u: goto label_805CEBF0;
    case 0x805CEBF4u: goto label_805CEBF4;
    case 0x805CEBF8u: goto label_805CEBF8;
    case 0x805CEBFCu: goto label_805CEBFC;
    case 0x805CEC00u: goto label_805CEC00;
    case 0x805CEC04u: goto label_805CEC04;
    case 0x805CEC08u: goto label_805CEC08;
    case 0x805CEC0Cu: goto label_805CEC0C;
    case 0x805CEC10u: goto label_805CEC10;
    case 0x805CEC14u: goto label_805CEC14;
    case 0x805CEC18u: goto label_805CEC18;
    case 0x805CEC1Cu: goto label_805CEC1C;
    case 0x805CEC20u: goto label_805CEC20;
    case 0x805CEC24u: goto label_805CEC24;
    case 0x805CEC28u: goto label_805CEC28;
    case 0x805CEC2Cu: goto label_805CEC2C;
    case 0x805CEC30u: goto label_805CEC30;
    case 0x805CEC34u: goto label_805CEC34;
    case 0x805CEC38u: goto label_805CEC38;
    case 0x805CEC3Cu: goto label_805CEC3C;
    case 0x805CEC40u: goto label_805CEC40;
    case 0x805CEC44u: goto label_805CEC44;
    case 0x805CEC48u: goto label_805CEC48;
    case 0x805CEC4Cu: goto label_805CEC4C;
    case 0x805CEC50u: goto label_805CEC50;
    case 0x805CEC54u: goto label_805CEC54;
    case 0x805CEC58u: goto label_805CEC58;
    case 0x805CEC5Cu: goto label_805CEC5C;
    case 0x805CEC60u: goto label_805CEC60;
    case 0x805CEC64u: goto label_805CEC64;
    case 0x805CEC68u: goto label_805CEC68;
    case 0x805CEC6Cu: goto label_805CEC6C;
    case 0x805CEC70u: goto label_805CEC70;
    case 0x805CEC74u: goto label_805CEC74;
    case 0x805CEC78u: goto label_805CEC78;
    case 0x805CEC7Cu: goto label_805CEC7C;
    case 0x805CEC80u: goto label_805CEC80;
    case 0x805CEC84u: goto label_805CEC84;
    case 0x805CEC88u: goto label_805CEC88;
    case 0x805CEC8Cu: goto label_805CEC8C;
    case 0x805CEC90u: goto label_805CEC90;
    case 0x805CEC94u: goto label_805CEC94;
    case 0x805CEC98u: goto label_805CEC98;
    case 0x805CEC9Cu: goto label_805CEC9C;
    case 0x805CECA0u: goto label_805CECA0;
    case 0x805CECA4u: goto label_805CECA4;
    case 0x805CECA8u: goto label_805CECA8;
    case 0x805CECACu: goto label_805CECAC;
    case 0x805CECB0u: goto label_805CECB0;
    case 0x805CECB4u: goto label_805CECB4;
    case 0x805CECB8u: goto label_805CECB8;
    case 0x805CECBCu: goto label_805CECBC;
    case 0x805CECC0u: goto label_805CECC0;
    case 0x805CECC4u: goto label_805CECC4;
    case 0x805CECC8u: goto label_805CECC8;
    case 0x805CECCCu: goto label_805CECCC;
    case 0x805CECD0u: goto label_805CECD0;
    case 0x805CECD4u: goto label_805CECD4;
    case 0x805CECD8u: goto label_805CECD8;
    case 0x805CECDCu: goto label_805CECDC;
    case 0x805CECE0u: goto label_805CECE0;
    case 0x805CECE4u: goto label_805CECE4;
    case 0x805CECE8u: goto label_805CECE8;
    case 0x805CECECu: goto label_805CECEC;
    case 0x805CECF0u: goto label_805CECF0;
    case 0x805CECF4u: goto label_805CECF4;
    case 0x805CECF8u: goto label_805CECF8;
    case 0x805CECFCu: goto label_805CECFC;
    case 0x805CED00u: goto label_805CED00;
    case 0x805CED04u: goto label_805CED04;
    case 0x805CED08u: goto label_805CED08;
    case 0x805CED0Cu: goto label_805CED0C;
    case 0x805CED10u: goto label_805CED10;
    case 0x805CED14u: goto label_805CED14;
    case 0x805CED18u: goto label_805CED18;
    case 0x805CED1Cu: goto label_805CED1C;
    case 0x805CED20u: goto label_805CED20;
    case 0x805CED24u: goto label_805CED24;
    case 0x805CED28u: goto label_805CED28;
    case 0x805CED2Cu: goto label_805CED2C;
    case 0x805CED30u: goto label_805CED30;
    case 0x805CED34u: goto label_805CED34;
    case 0x805CED38u: goto label_805CED38;
    case 0x805CED3Cu: goto label_805CED3C;
    case 0x805CED40u: goto label_805CED40;
    case 0x805CED44u: goto label_805CED44;
    case 0x805CED48u: goto label_805CED48;
    case 0x805CED4Cu: goto label_805CED4C;
    case 0x805CED50u: goto label_805CED50;
    case 0x805CED54u: goto label_805CED54;
    case 0x805CED58u: goto label_805CED58;
    case 0x805CED5Cu: goto label_805CED5C;
    case 0x805CED60u: goto label_805CED60;
    case 0x805CED64u: goto label_805CED64;
    case 0x805CED68u: goto label_805CED68;
    case 0x805CED6Cu: goto label_805CED6C;
    case 0x805CED70u: goto label_805CED70;
    case 0x805CED74u: goto label_805CED74;
    case 0x805CED78u: goto label_805CED78;
    case 0x805CED7Cu: goto label_805CED7C;
    case 0x805CED80u: goto label_805CED80;
    case 0x805CED84u: goto label_805CED84;
    case 0x805CED88u: goto label_805CED88;
    case 0x805CED8Cu: goto label_805CED8C;
    case 0x805CED90u: goto label_805CED90;
    case 0x805CED94u: goto label_805CED94;
    case 0x805CED98u: goto label_805CED98;
    case 0x805CED9Cu: goto label_805CED9C;
    case 0x805CEDA0u: goto label_805CEDA0;
    case 0x805CEDA4u: goto label_805CEDA4;
    case 0x805CEDA8u: goto label_805CEDA8;
    case 0x805CEDACu: goto label_805CEDAC;
    case 0x805CEDB0u: goto label_805CEDB0;
    case 0x805CEDB4u: goto label_805CEDB4;
    case 0x805CEDB8u: goto label_805CEDB8;
    case 0x805CEDBCu: goto label_805CEDBC;
    case 0x805CEDC0u: goto label_805CEDC0;
    case 0x805CEDC4u: goto label_805CEDC4;
    case 0x805CEDC8u: goto label_805CEDC8;
    case 0x805CEDCCu: goto label_805CEDCC;
    case 0x805CEDD0u: goto label_805CEDD0;
    case 0x805CEDD4u: goto label_805CEDD4;
    case 0x805CEDD8u: goto label_805CEDD8;
    case 0x805CEDDCu: goto label_805CEDDC;
    case 0x805CEDE0u: goto label_805CEDE0;
    case 0x805CEDE4u: goto label_805CEDE4;
    case 0x805CEDE8u: goto label_805CEDE8;
    case 0x805CEDECu: goto label_805CEDEC;
    case 0x805CEDF0u: goto label_805CEDF0;
    case 0x805CEDF4u: goto label_805CEDF4;
    case 0x805CEDF8u: goto label_805CEDF8;
    case 0x805CEDFCu: goto label_805CEDFC;
    case 0x805CEE00u: goto label_805CEE00;
    case 0x805CEE04u: goto label_805CEE04;
    case 0x805CEE08u: goto label_805CEE08;
    case 0x805CEE0Cu: goto label_805CEE0C;
    case 0x805CEE10u: goto label_805CEE10;
    case 0x805CEE14u: goto label_805CEE14;
    case 0x805CEE18u: goto label_805CEE18;
    case 0x805CEE1Cu: goto label_805CEE1C;
    case 0x805CEE20u: goto label_805CEE20;
    case 0x805CEE24u: goto label_805CEE24;
    case 0x805CEE28u: goto label_805CEE28;
    case 0x805CEE2Cu: goto label_805CEE2C;
    case 0x805CEE30u: goto label_805CEE30;
    case 0x805CEE34u: goto label_805CEE34;
    case 0x805CEE38u: goto label_805CEE38;
    case 0x805CEE3Cu: goto label_805CEE3C;
    case 0x805CEE40u: goto label_805CEE40;
    case 0x805CEE44u: goto label_805CEE44;
    case 0x805CEE48u: goto label_805CEE48;
    case 0x805CEE4Cu: goto label_805CEE4C;
    case 0x805CEE50u: goto label_805CEE50;
    case 0x805CEE54u: goto label_805CEE54;
    case 0x805CEE58u: goto label_805CEE58;
    case 0x805CEE5Cu: goto label_805CEE5C;
    case 0x805CEE60u: goto label_805CEE60;
    case 0x805CEE64u: goto label_805CEE64;
    case 0x805CEE68u: goto label_805CEE68;
    case 0x805CEE6Cu: goto label_805CEE6C;
    case 0x805CEE70u: goto label_805CEE70;
    case 0x805CEE74u: goto label_805CEE74;
    case 0x805CEE78u: goto label_805CEE78;
    case 0x805CEE7Cu: goto label_805CEE7C;
    case 0x805CEE80u: goto label_805CEE80;
    case 0x805CEE84u: goto label_805CEE84;
    case 0x805CEE88u: goto label_805CEE88;
    case 0x805CEE8Cu: goto label_805CEE8C;
    case 0x805CEE90u: goto label_805CEE90;
    case 0x805CEE94u: goto label_805CEE94;
    case 0x805CEE98u: goto label_805CEE98;
    case 0x805CEE9Cu: goto label_805CEE9C;
    case 0x805CEEA0u: goto label_805CEEA0;
    case 0x805CEEA4u: goto label_805CEEA4;
    case 0x805CEEA8u: goto label_805CEEA8;
    case 0x805CEEACu: goto label_805CEEAC;
    case 0x805CEEB0u: goto label_805CEEB0;
    case 0x805CEEB4u: goto label_805CEEB4;
    case 0x805CEEB8u: goto label_805CEEB8;
    case 0x805CEEBCu: goto label_805CEEBC;
    case 0x805CEEC0u: goto label_805CEEC0;
    case 0x805CEEC4u: goto label_805CEEC4;
    case 0x805CEEC8u: goto label_805CEEC8;
    case 0x805CEECCu: goto label_805CEECC;
    case 0x805CEED0u: goto label_805CEED0;
    case 0x805CEED4u: goto label_805CEED4;
    case 0x805CEED8u: goto label_805CEED8;
    case 0x805CEEDCu: goto label_805CEEDC;
    case 0x805CEEE0u: goto label_805CEEE0;
    case 0x805CEEE4u: goto label_805CEEE4;
    case 0x805CEEE8u: goto label_805CEEE8;
    case 0x805CEEECu: goto label_805CEEEC;
    case 0x805CEEF0u: goto label_805CEEF0;
    case 0x805CEEF4u: goto label_805CEEF4;
    case 0x805CEEF8u: goto label_805CEEF8;
    case 0x805CEEFCu: goto label_805CEEFC;
    case 0x805CEF00u: goto label_805CEF00;
    case 0x805CEF04u: goto label_805CEF04;
    case 0x805CEF08u: goto label_805CEF08;
    case 0x805CEF0Cu: goto label_805CEF0C;
    case 0x805CEF10u: goto label_805CEF10;
    case 0x805CEF14u: goto label_805CEF14;
    case 0x805CEF18u: goto label_805CEF18;
    case 0x805CEF1Cu: goto label_805CEF1C;
    case 0x805CEF20u: goto label_805CEF20;
    case 0x805CEF24u: goto label_805CEF24;
    case 0x805CEF28u: goto label_805CEF28;
    case 0x805CEF2Cu: goto label_805CEF2C;
    case 0x805CEF30u: goto label_805CEF30;
    case 0x805CEF34u: goto label_805CEF34;
    case 0x805CEF38u: goto label_805CEF38;
    case 0x805CEF3Cu: goto label_805CEF3C;
    case 0x805CEF40u: goto label_805CEF40;
    case 0x805CEF44u: goto label_805CEF44;
    case 0x805CEF48u: goto label_805CEF48;
    case 0x805CEF4Cu: goto label_805CEF4C;
    case 0x805CEF50u: goto label_805CEF50;
    case 0x805CEF54u: goto label_805CEF54;
    case 0x805CEF58u: goto label_805CEF58;
    case 0x805CEF5Cu: goto label_805CEF5C;
    case 0x805CEF60u: goto label_805CEF60;
    case 0x805CEF64u: goto label_805CEF64;
    case 0x805CEF68u: goto label_805CEF68;
    case 0x805CEF6Cu: goto label_805CEF6C;
    case 0x805CEF70u: goto label_805CEF70;
    case 0x805CEF74u: goto label_805CEF74;
    case 0x805CEF78u: goto label_805CEF78;
    case 0x805CEF7Cu: goto label_805CEF7C;
    case 0x805CEF80u: goto label_805CEF80;
    case 0x805CEF84u: goto label_805CEF84;
    case 0x805CEF88u: goto label_805CEF88;
    case 0x805CEF8Cu: goto label_805CEF8C;
    case 0x805CEF90u: goto label_805CEF90;
    case 0x805CEF94u: goto label_805CEF94;
    case 0x805CEF98u: goto label_805CEF98;
    case 0x805CEF9Cu: goto label_805CEF9C;
    case 0x805CEFA0u: goto label_805CEFA0;
    case 0x805CEFA4u: goto label_805CEFA4;
    case 0x805CEFA8u: goto label_805CEFA8;
    case 0x805CEFACu: goto label_805CEFAC;
    case 0x805CEFB0u: goto label_805CEFB0;
    case 0x805CEFB4u: goto label_805CEFB4;
    case 0x805CEFB8u: goto label_805CEFB8;
    case 0x805CEFBCu: goto label_805CEFBC;
    case 0x805CEFC0u: goto label_805CEFC0;
    case 0x805CEFC4u: goto label_805CEFC4;
    case 0x805CEFC8u: goto label_805CEFC8;
    case 0x805CEFCCu: goto label_805CEFCC;
    case 0x805CEFD0u: goto label_805CEFD0;
    case 0x805CEFD4u: goto label_805CEFD4;
    case 0x805CEFD8u: goto label_805CEFD8;
    case 0x805CEFDCu: goto label_805CEFDC;
    case 0x805CEFE0u: goto label_805CEFE0;
    case 0x805CEFE4u: goto label_805CEFE4;
    case 0x805CEFE8u: goto label_805CEFE8;
    case 0x805CEFECu: goto label_805CEFEC;
    case 0x805CEFF0u: goto label_805CEFF0;
    case 0x805CEFF4u: goto label_805CEFF4;
    case 0x805CEFF8u: goto label_805CEFF8;
    case 0x805CEFFCu: goto label_805CEFFC;
    case 0x805CF000u: goto label_805CF000;
    case 0x805CF004u: goto label_805CF004;
    case 0x805CF008u: goto label_805CF008;
    case 0x805CF00Cu: goto label_805CF00C;
    case 0x805CF010u: goto label_805CF010;
    case 0x805CF014u: goto label_805CF014;
    case 0x805CF018u: goto label_805CF018;
    case 0x805CF01Cu: goto label_805CF01C;
    case 0x805CF020u: goto label_805CF020;
    case 0x805CF024u: goto label_805CF024;
    case 0x805CF028u: goto label_805CF028;
    case 0x805CF02Cu: goto label_805CF02C;
    case 0x805CF030u: goto label_805CF030;
    case 0x805CF034u: goto label_805CF034;
    case 0x805CF038u: goto label_805CF038;
    case 0x805CF03Cu: goto label_805CF03C;
    case 0x805CF040u: goto label_805CF040;
    case 0x805CF044u: goto label_805CF044;
    case 0x805CF048u: goto label_805CF048;
    case 0x805CF04Cu: goto label_805CF04C;
    case 0x805CF050u: goto label_805CF050;
    case 0x805CF054u: goto label_805CF054;
    case 0x805CF058u: goto label_805CF058;
    case 0x805CF05Cu: goto label_805CF05C;
    case 0x805CF060u: goto label_805CF060;
    case 0x805CF064u: goto label_805CF064;
    case 0x805CF068u: goto label_805CF068;
    case 0x805CF06Cu: goto label_805CF06C;
    case 0x805CF070u: goto label_805CF070;
    case 0x805CF074u: goto label_805CF074;
    case 0x805CF078u: goto label_805CF078;
    case 0x805CF07Cu: goto label_805CF07C;
    case 0x805CF080u: goto label_805CF080;
    case 0x805CF084u: goto label_805CF084;
    case 0x805CF088u: goto label_805CF088;
    case 0x805CF08Cu: goto label_805CF08C;
    case 0x805CF090u: goto label_805CF090;
    case 0x805CF094u: goto label_805CF094;
    case 0x805CF098u: goto label_805CF098;
    case 0x805CF09Cu: goto label_805CF09C;
    case 0x805CF0A0u: goto label_805CF0A0;
    case 0x805CF0A4u: goto label_805CF0A4;
    case 0x805CF0A8u: goto label_805CF0A8;
    case 0x805CF0ACu: goto label_805CF0AC;
    case 0x805CF0B0u: goto label_805CF0B0;
    case 0x805CF0B4u: goto label_805CF0B4;
    case 0x805CF0B8u: goto label_805CF0B8;
    case 0x805CF0BCu: goto label_805CF0BC;
    case 0x805CF0C0u: goto label_805CF0C0;
    case 0x805CF0C4u: goto label_805CF0C4;
    case 0x805CF0C8u: goto label_805CF0C8;
    case 0x805CF0CCu: goto label_805CF0CC;
    case 0x805CF0D0u: goto label_805CF0D0;
    case 0x805CF0D4u: goto label_805CF0D4;
    case 0x805CF0D8u: goto label_805CF0D8;
    case 0x805CF0DCu: goto label_805CF0DC;
    case 0x805CF0E0u: goto label_805CF0E0;
    case 0x805CF0E4u: goto label_805CF0E4;
    case 0x805CF0E8u: goto label_805CF0E8;
    case 0x805CF0ECu: goto label_805CF0EC;
    case 0x805CF0F0u: goto label_805CF0F0;
    case 0x805CF0F4u: goto label_805CF0F4;
    case 0x805CF0F8u: goto label_805CF0F8;
    case 0x805CF0FCu: goto label_805CF0FC;
    case 0x805CF100u: goto label_805CF100;
    case 0x805CF104u: goto label_805CF104;
    case 0x805CF108u: goto label_805CF108;
    case 0x805CF10Cu: goto label_805CF10C;
    case 0x805CF110u: goto label_805CF110;
    case 0x805CF114u: goto label_805CF114;
    case 0x805CF118u: goto label_805CF118;
    case 0x805CF11Cu: goto label_805CF11C;
    case 0x805CF120u: goto label_805CF120;
    case 0x805CF124u: goto label_805CF124;
    case 0x805CF128u: goto label_805CF128;
    case 0x805CF12Cu: goto label_805CF12C;
    case 0x805CF130u: goto label_805CF130;
    case 0x805CF134u: goto label_805CF134;
    case 0x805CF138u: goto label_805CF138;
    case 0x805CF13Cu: goto label_805CF13C;
    case 0x805CF140u: goto label_805CF140;
    case 0x805CF144u: goto label_805CF144;
    case 0x805CF148u: goto label_805CF148;
    case 0x805CF14Cu: goto label_805CF14C;
    case 0x805CF150u: goto label_805CF150;
    case 0x805CF154u: goto label_805CF154;
    case 0x805CF158u: goto label_805CF158;
    case 0x805CF15Cu: goto label_805CF15C;
    case 0x805CF160u: goto label_805CF160;
    case 0x805CF164u: goto label_805CF164;
    case 0x805CF168u: goto label_805CF168;
    case 0x805CF16Cu: goto label_805CF16C;
    case 0x805CF170u: goto label_805CF170;
    case 0x805CF174u: goto label_805CF174;
    case 0x805CF178u: goto label_805CF178;
    case 0x805CF17Cu: goto label_805CF17C;
    case 0x805CF180u: goto label_805CF180;
    case 0x805CF184u: goto label_805CF184;
    case 0x805CF188u: goto label_805CF188;
    case 0x805CF18Cu: goto label_805CF18C;
    case 0x805CF190u: goto label_805CF190;
    case 0x805CF194u: goto label_805CF194;
    case 0x805CF198u: goto label_805CF198;
    case 0x805CF19Cu: goto label_805CF19C;
    case 0x805CF1A0u: goto label_805CF1A0;
    case 0x805CF1A4u: goto label_805CF1A4;
    case 0x805CF1A8u: goto label_805CF1A8;
    case 0x805CF1ACu: goto label_805CF1AC;
    case 0x805CF1B0u: goto label_805CF1B0;
    case 0x805CF1B4u: goto label_805CF1B4;
    case 0x805CF1B8u: goto label_805CF1B8;
    case 0x805CF1BCu: goto label_805CF1BC;
    default: return;
    }
label_805CB1C0:
    ctx->pc = 0x805CB1C0u;
    ctx->downcount -= 5;
    // 805CB1C0: stb     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_805CB1C4:
    // 805CB1C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB1C8:
    ctx->pc = 0x805CB1C8u;
    // 805CB1C8: lwzx    r26, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_805CB1CC:
    // 805CB1CC: addi    r4, r28, 251
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(251);

label_805CB1D0:
    // 805CB1D0: bl      0x8000E734
    {
            ctx->lr = 0x805CB1D4u;
            ctx->pc = 0x8000E734u;
            return;
    }

label_805CB1D4:
    ctx->downcount -= 3;
    // 805CB1D4: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CB1D8:
    // 805CB1D8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB1DC:
    // 805CB1DC: bl      0x8000E838
    {
            ctx->lr = 0x805CB1E0u;
            ctx->pc = 0x8000E838u;
            return;
    }

label_805CB1E0:
    ctx->downcount -= 6;
    // 805CB1E0: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_805CB1E4:
    // 805CB1E4: addi    r4, r27, 4
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(4);

label_805CB1E8:
    // 805CB1E8: addi    r5, r28, 259
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(259);

label_805CB1EC:
    // 805CB1EC: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB1F0:
    // 805CB1F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CB1F4:
    // 805CB1F4: bl      0x8027035C
    {
            ctx->lr = 0x805CB1F8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CB1F8:
    ctx->downcount -= 4;
    // 805CB1F8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_805CB1FC:
    // 805CB1FC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_805CB200:
    // 805CB200: cmpwi   r27, 10
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB204:
    // 805CB204: bc    12, 0, 0x805CB1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB1C0u;
                return;
            }
            goto label_805CB1C0;
        }
    }

label_805CB208:
    ctx->pc = 0x805CB208u;
    ctx->downcount -= 16;
    // 805CB208: lmw     r25, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CB20C:
    ctx->pc = 0x805CB20Cu;
    // 805CB20C: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB210:
    ctx->pc = 0x805CB210u;
    // 805CB210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CB214:
    ctx->pc = 0x805CB214u;
    // 805CB214: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_805CB218:
    ctx->pc = 0x805CB218u;
    // 805CB218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CB21C:
    ctx->pc = 0x805CB21Cu;
    ctx->downcount -= 1;
    // 805CB21C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CB220:
    ctx->pc = 0x805CB220u;
    ctx->downcount -= 22;
    // 805CB220: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CB224:
    ctx->pc = 0x805CB224u;
    // 805CB224: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CB228:
    ctx->pc = 0x805CB228u;
    // 805CB228: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB22C:
    ctx->pc = 0x805CB22Cu;
    // 805CB22C: stmw     r23, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CB230:
    // 805CB230: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB234:
    // 805CB234: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CB238:
    // 805CB238: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CB23C:
    // 805CB23C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CB240:
    // 805CB240: or   r30, r7, r7
    {
        ctx->gpr[30] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CB244:
    ctx->pc = 0x805CB244u;
    // 805CB244: lbz     r0, 784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(784);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB248:
    // 805CB248: cmpwi   r0, 0
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

label_805CB24C:
    // 805CB24C: bc    12, 2, 0x805CB260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB260;
        }
    }

label_805CB250:
    ctx->downcount -= 4;
    // 805CB250: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_805CB254:
    // 805CB254: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CB258:
    ctx->pc = 0x805CB258u;
    // 805CB258: lwz     r24, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[24] = mem_read32(ctx, ea);
    }

label_805CB25C:
    // 805CB25C: b       0x805CB264
    {
            goto label_805CB264;
    }

label_805CB260:
    ctx->downcount -= 1;
    // 805CB260: or   r24, r28, r28
    {
        ctx->gpr[24] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CB264:
    ctx->downcount -= 8;
    // 805CB264: lis     r3, -32663
    ctx->gpr[3] = ((u32)(s32)(-32663) << 16);

label_805CB268:
    // 805CB268: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CB26C:
    // 805CB26C: addi    r31, r3, -28168
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(-28168);

label_805CB270:
    // 805CB270: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB274:
    // 805CB274: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB278:
    // 805CB278: addi    r5, r31, 270
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(270);

label_805CB27C:
    // 805CB27C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB280:
    // 805CB280: bl      0x8000D074
    {
            ctx->lr = 0x805CB284u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB284:
    ctx->downcount -= 8;
    // 805CB284: mulli   r0, r24, 88
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[24] * (s64)(s32)88);

label_805CB288:
    // 805CB288: addi    r23, r27, 50
    ctx->gpr[23] = ctx->gpr[27] + (u32)(s32)(50);

label_805CB28C:
    // 805CB28C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB290:
    // 805CB290: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB294:
    // 805CB294: add   r25, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_805CB298:
    // 805CB298: bl      0x8026F968
    {
            ctx->lr = 0x805CB29Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB29C:
    ctx->pc = 0x805CB29Cu;
    ctx->downcount -= 8;
    // 805CB29C: lwz     r7, 388(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(388);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_805CB2A0:
    // 805CB2A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB2A4:
    // 805CB2A4: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CB2A8:
    // 805CB2A8: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB2AC:
    // 805CB2AC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CB2B0:
    // 805CB2B0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805CB2B4:
    // 805CB2B4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CB2B8:
    // 805CB2B8: bl      0x8026F828
    {
            ctx->lr = 0x805CB2BCu;
            ctx->pc = 0x8026F828u;
            return;
    }

label_805CB2BC:
    ctx->pc = 0x805CB2BCu;
    ctx->downcount -= 9;
    // 805CB2BC: lwz     r5, -16992(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-16992);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CB2C0:
    // 805CB2C0: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB2C4:
    ctx->pc = 0x805CB2C4u;
    // 805CB2C4: lwz     r0, -16988(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-16988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB2C8:
    // 805CB2C8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB2CC:
    ctx->pc = 0x805CB2CCu;
    // 805CB2CC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB2D0:
    ctx->pc = 0x805CB2D0u;
    // 805CB2D0: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB2D4:
    ctx->pc = 0x805CB2D4u;
    // 805CB2D4: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB2D8:
    ctx->pc = 0x805CB2D8u;
    // 805CB2D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB2DC:
    // 805CB2DC: bl      0x8026F968
    {
            ctx->lr = 0x805CB2E0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB2E0:
    ctx->downcount -= 6;
    // 805CB2E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB2E4:
    // 805CB2E4: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB2E8:
    // 805CB2E8: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB2EC:
    // 805CB2EC: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_805CB2F0:
    // 805CB2F0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB2F4:
    // 805CB2F4: bl      0x8026F7BC
    {
            ctx->lr = 0x805CB2F8u;
            ctx->pc = 0x8026F7BCu;
            return;
    }

label_805CB2F8:
    ctx->downcount -= 6;
    // 805CB2F8: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CB2FC:
    // 805CB2FC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB300:
    // 805CB300: addi    r5, r31, 283
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(283);

label_805CB304:
    // 805CB304: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB308:
    // 805CB308: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB30C:
    // 805CB30C: bl      0x8000D074
    {
            ctx->lr = 0x805CB310u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB310:
    ctx->downcount -= 3;
    // 805CB310: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB314:
    // 805CB314: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB318:
    // 805CB318: bl      0x8026F968
    {
            ctx->lr = 0x805CB31Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB31C:
    ctx->pc = 0x805CB31Cu;
    ctx->downcount -= 8;
    // 805CB31C: lwz     r7, 388(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(388);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_805CB320:
    // 805CB320: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB324:
    // 805CB324: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CB328:
    // 805CB328: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB32C:
    // 805CB32C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CB330:
    // 805CB330: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805CB334:
    // 805CB334: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CB338:
    // 805CB338: bl      0x8026F828
    {
            ctx->lr = 0x805CB33Cu;
            ctx->pc = 0x8026F828u;
            return;
    }

label_805CB33C:
    ctx->pc = 0x805CB33Cu;
    ctx->downcount -= 7;
    // 805CB33C: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CB340:
    // 805CB340: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB344:
    ctx->pc = 0x805CB344u;
    // 805CB344: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB348:
    // 805CB348: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB34C:
    ctx->pc = 0x805CB34Cu;
    // 805CB34C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB350:
    ctx->pc = 0x805CB350u;
    // 805CB350: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB354:
    // 805CB354: bl      0x8026F968
    {
            ctx->lr = 0x805CB358u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB358:
    ctx->downcount -= 6;
    // 805CB358: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB35C:
    // 805CB35C: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB360:
    // 805CB360: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB364:
    // 805CB364: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_805CB368:
    // 805CB368: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB36C:
    // 805CB36C: bl      0x8026F7BC
    {
            ctx->lr = 0x805CB370u;
            ctx->pc = 0x8026F7BCu;
            return;
    }

label_805CB370:
    ctx->downcount -= 2;
    // 805CB370: cmpwi   r27, 1
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB374:
    // 805CB374: bc    4, 2, 0x805CB3E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CB3E4;
        }
    }

label_805CB378:
    ctx->downcount -= 5;
    // 805CB378: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB37C:
    // 805CB37C: addi    r5, r31, 300
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(300);

label_805CB380:
    // 805CB380: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB384:
    // 805CB384: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB388:
    // 805CB388: bl      0x8000D074
    {
            ctx->lr = 0x805CB38Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB38C:
    ctx->downcount -= 3;
    // 805CB38C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB390:
    // 805CB390: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB394:
    // 805CB394: bl      0x8026F960
    {
            ctx->lr = 0x805CB398u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB398:
    ctx->downcount -= 5;
    // 805CB398: rlwinm r0, r28, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_805CB39C:
    // 805CB39C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB3A0:
    // 805CB3A0: add   r4, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CB3A4:
    ctx->pc = 0x805CB3A4u;
    // 805CB3A4: lwz     r4, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB3A8:
    // 805CB3A8: bl      0x8027CEB8
    {
            ctx->lr = 0x805CB3ACu;
            ctx->pc = 0x8027CEB8u;
            return;
    }

label_805CB3AC:
    ctx->downcount -= 5;
    // 805CB3AC: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB3B0:
    // 805CB3B0: addi    r5, r31, 316
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(316);

label_805CB3B4:
    // 805CB3B4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB3B8:
    // 805CB3B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB3BC:
    // 805CB3BC: bl      0x8000D074
    {
            ctx->lr = 0x805CB3C0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB3C0:
    ctx->downcount -= 3;
    // 805CB3C0: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB3C4:
    // 805CB3C4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB3C8:
    // 805CB3C8: bl      0x8026F960
    {
            ctx->lr = 0x805CB3CCu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB3CC:
    ctx->downcount -= 5;
    // 805CB3CC: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_805CB3D0:
    // 805CB3D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB3D4:
    // 805CB3D4: add   r4, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CB3D8:
    ctx->pc = 0x805CB3D8u;
    // 805CB3D8: lwz     r4, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB3DC:
    // 805CB3DC: bl      0x8027CEB8
    {
            ctx->lr = 0x805CB3E0u;
            ctx->pc = 0x8027CEB8u;
            return;
    }

label_805CB3E0:
    ctx->downcount -= 1;
    // 805CB3E0: b       0x805CB4A8
    {
            goto label_805CB4A8;
    }

label_805CB3E4:
    ctx->downcount -= 5;
    // 805CB3E4: rlwinm r3, r28, 2, 0, 29
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_805CB3E8:
    // 805CB3E8: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_805CB3EC:
    // 805CB3EC: add   r25, r26, r3
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_805CB3F0:
    // 805CB3F0: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_805CB3F4:
    // 805CB3F4: add   r27, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_805CB3F8:
    ctx->downcount -= 9;
    // 805CB3F8: subf   r0, r23, r30
    {
        u32 a = ~ctx->gpr[23];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_805CB3FC:
    // 805CB3FC: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CB400:
    // 805CB400: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CB404:
    // 805CB404: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB408:
    // 805CB408: rlwinm r24, r0, 27, 5, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CB40C:
    // 805CB40C: addi    r5, r31, 332
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(332);

label_805CB410:
    // 805CB410: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB414:
    // 805CB414: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB418:
    // 805CB418: bl      0x8000D074
    {
            ctx->lr = 0x805CB41Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB41C:
    ctx->downcount -= 3;
    // 805CB41C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB420:
    // 805CB420: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB424:
    // 805CB424: bl      0x8026F960
    {
            ctx->lr = 0x805CB428u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB428:
    ctx->pc = 0x805CB428u;
    ctx->downcount -= 6;
    // 805CB428: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB42C:
    // 805CB42C: cmpwi   r24, 0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB430:
    // 805CB430: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CB434:
    // 805CB434: or   r0, r0, r24
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[24];
    }

label_805CB438:
    ctx->pc = 0x805CB438u;
    // 805CB438: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB43C:
    // 805CB43C: bc    12, 2, 0x805CB44C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB44C;
        }
    }

label_805CB440:
    ctx->pc = 0x805CB440u;
    ctx->downcount -= 3;
    // 805CB440: lwz     r4, 276(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB444:
    // 805CB444: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB448:
    // 805CB448: bl      0x8027CEB8
    {
            ctx->lr = 0x805CB44Cu;
            ctx->pc = 0x8027CEB8u;
            return;
    }

label_805CB44C:
    ctx->downcount -= 8;
    // 805CB44C: cntlzw r0, r24
    {
        u32 v = ctx->gpr[24];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CB450:
    // 805CB450: or   r6, r23, r23
    {
        ctx->gpr[6] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CB454:
    // 805CB454: rlwinm r24, r0, 27, 5, 31
    {
        ctx->gpr[24] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CB458:
    // 805CB458: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB45C:
    // 805CB45C: addi    r5, r31, 350
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(350);

label_805CB460:
    // 805CB460: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB464:
    // 805CB464: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB468:
    // 805CB468: bl      0x8000D074
    {
            ctx->lr = 0x805CB46Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB46C:
    ctx->downcount -= 3;
    // 805CB46C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CB470:
    // 805CB470: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB474:
    // 805CB474: bl      0x8026F960
    {
            ctx->lr = 0x805CB478u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB478:
    ctx->pc = 0x805CB478u;
    ctx->downcount -= 6;
    // 805CB478: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB47C:
    // 805CB47C: cmpwi   r24, 0
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB480:
    // 805CB480: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CB484:
    // 805CB484: or   r0, r0, r24
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[24];
    }

label_805CB488:
    ctx->pc = 0x805CB488u;
    // 805CB488: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB48C:
    // 805CB48C: bc    12, 2, 0x805CB49C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB49C;
        }
    }

label_805CB490:
    ctx->pc = 0x805CB490u;
    ctx->downcount -= 3;
    // 805CB490: lwz     r4, 276(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB494:
    // 805CB494: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB498:
    // 805CB498: bl      0x8027CEB8
    {
            ctx->lr = 0x805CB49Cu;
            ctx->pc = 0x8027CEB8u;
            return;
    }

label_805CB49C:
    ctx->downcount -= 3;
    // 805CB49C: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_805CB4A0:
    // 805CB4A0: cmpwi   r23, 2
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB4A4:
    // 805CB4A4: bc    12, 0, 0x805CB3F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB3F8u;
                return;
            }
            goto label_805CB3F8;
        }
    }

label_805CB4A8:
    ctx->pc = 0x805CB4A8u;
    ctx->downcount -= 16;
    // 805CB4A8: lmw     r23, 92(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(92);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CB4AC:
    ctx->pc = 0x805CB4ACu;
    // 805CB4AC: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB4B0:
    ctx->pc = 0x805CB4B0u;
    // 805CB4B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CB4B4:
    // 805CB4B4: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_805CB4B8:
    ctx->pc = 0x805CB4B8u;
    // 805CB4B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CB4BC:
    ctx->pc = 0x805CB4BCu;
    ctx->downcount -= 20;
    // 805CB4BC: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CB4C0:
    ctx->pc = 0x805CB4C0u;
    // 805CB4C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CB4C4:
    ctx->pc = 0x805CB4C4u;
    // 805CB4C4: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB4C8:
    ctx->pc = 0x805CB4C8u;
    // 805CB4C8: stmw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CB4CC:
    // 805CB4CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB4D0:
    // 805CB4D0: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CB4D4:
    // 805CB4D4: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CB4D8:
    ctx->pc = 0x805CB4D8u;
    // 805CB4D8: lbz     r0, 784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(784);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB4DC:
    // 805CB4DC: cmpwi   r0, 0
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

label_805CB4E0:
    // 805CB4E0: bc    12, 2, 0x805CB4F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB4F4;
        }
    }

label_805CB4E4:
    ctx->downcount -= 4;
    // 805CB4E4: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_805CB4E8:
    // 805CB4E8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CB4EC:
    ctx->pc = 0x805CB4ECu;
    // 805CB4EC: lwz     r27, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_805CB4F0:
    // 805CB4F0: b       0x805CB4F8
    {
            goto label_805CB4F8;
    }

label_805CB4F4:
    ctx->downcount -= 1;
    // 805CB4F4: or   r27, r25, r25
    {
        ctx->gpr[27] = ctx->gpr[25] | ctx->gpr[25];
    }

label_805CB4F8:
    ctx->downcount -= 8;
    // 805CB4F8: lis     r28, -32663
    ctx->gpr[28] = ((u32)(s32)(-32663) << 16);

label_805CB4FC:
    // 805CB4FC: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB500:
    // 805CB500: addi    r28, r28, -28168
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(-28168);

label_805CB504:
    // 805CB504: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB508:
    // 805CB508: addi    r5, r28, 368
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(368);

label_805CB50C:
    // 805CB50C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB510:
    // 805CB510: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB514:
    // 805CB514: bl      0x8000D074
    {
            ctx->lr = 0x805CB518u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB518:
    ctx->downcount -= 8;
    // 805CB518: mulli   r0, r27, 88
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[27] * (s64)(s32)88);

label_805CB51C:
    // 805CB51C: addi    r26, r24, 50
    ctx->gpr[26] = ctx->gpr[24] + (u32)(s32)(50);

label_805CB520:
    // 805CB520: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB524:
    // 805CB524: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB528:
    // 805CB528: add   r29, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_805CB52C:
    // 805CB52C: bl      0x8026F968
    {
            ctx->lr = 0x805CB530u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB530:
    ctx->downcount -= 3;
    // 805CB530: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB534:
    // 805CB534: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB538:
    // 805CB538: bl      0x8026F6CC
    {
            ctx->lr = 0x805CB53Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_805CB53C:
    ctx->pc = 0x805CB53Cu;
    ctx->downcount -= 7;
    // 805CB53C: lwz     r7, 388(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_805CB540:
    // 805CB540: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CB544:
    // 805CB544: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CB548:
    // 805CB548: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CB54C:
    // 805CB54C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805CB550:
    // 805CB550: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CB554:
    // 805CB554: bl      0x8025D99C
    {
            ctx->lr = 0x805CB558u;
            ctx->pc = 0x8025D99Cu;
            return;
    }

label_805CB558:
    ctx->pc = 0x805CB558u;
    ctx->downcount -= 9;
    // 805CB558: lwz     r5, -16992(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-16992);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CB55C:
    // 805CB55C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB560:
    ctx->pc = 0x805CB560u;
    // 805CB560: lwz     r0, -16988(r2)
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-16988);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB564:
    // 805CB564: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB568:
    ctx->pc = 0x805CB568u;
    // 805CB568: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB56C:
    ctx->pc = 0x805CB56Cu;
    // 805CB56C: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB570:
    ctx->pc = 0x805CB570u;
    // 805CB570: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB574:
    ctx->pc = 0x805CB574u;
    // 805CB574: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB578:
    // 805CB578: bl      0x8026F968
    {
            ctx->lr = 0x805CB57Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB57C:
    ctx->downcount -= 6;
    // 805CB57C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB580:
    // 805CB580: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CB584:
    // 805CB584: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB588:
    // 805CB588: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_805CB58C:
    // 805CB58C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB590:
    // 805CB590: bl      0x8026F7BC
    {
            ctx->lr = 0x805CB594u;
            ctx->pc = 0x8026F7BCu;
            return;
    }

label_805CB594:
    ctx->downcount -= 6;
    // 805CB594: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB598:
    // 805CB598: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB59C:
    // 805CB59C: addi    r5, r28, 379
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(379);

label_805CB5A0:
    // 805CB5A0: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB5A4:
    // 805CB5A4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB5A8:
    // 805CB5A8: bl      0x8000D074
    {
            ctx->lr = 0x805CB5ACu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB5AC:
    ctx->downcount -= 3;
    // 805CB5AC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB5B0:
    // 805CB5B0: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB5B4:
    // 805CB5B4: bl      0x8026F968
    {
            ctx->lr = 0x805CB5B8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB5B8:
    ctx->downcount -= 3;
    // 805CB5B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB5BC:
    // 805CB5BC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB5C0:
    // 805CB5C0: bl      0x8026F6CC
    {
            ctx->lr = 0x805CB5C4u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_805CB5C4:
    ctx->pc = 0x805CB5C4u;
    ctx->downcount -= 7;
    // 805CB5C4: lwz     r7, 388(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(388);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_805CB5C8:
    // 805CB5C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CB5CC:
    // 805CB5CC: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CB5D0:
    // 805CB5D0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CB5D4:
    // 805CB5D4: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_805CB5D8:
    // 805CB5D8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CB5DC:
    // 805CB5DC: bl      0x8025D99C
    {
            ctx->lr = 0x805CB5E0u;
            ctx->pc = 0x8025D99Cu;
            return;
    }

label_805CB5E0:
    ctx->pc = 0x805CB5E0u;
    ctx->downcount -= 7;
    // 805CB5E0: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CB5E4:
    // 805CB5E4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB5E8:
    ctx->pc = 0x805CB5E8u;
    // 805CB5E8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB5EC:
    // 805CB5EC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB5F0:
    ctx->pc = 0x805CB5F0u;
    // 805CB5F0: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CB5F4:
    ctx->pc = 0x805CB5F4u;
    // 805CB5F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB5F8:
    // 805CB5F8: bl      0x8026F968
    {
            ctx->lr = 0x805CB5FCu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CB5FC:
    ctx->downcount -= 6;
    // 805CB5FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB600:
    // 805CB600: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CB604:
    // 805CB604: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB608:
    // 805CB608: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_805CB60C:
    // 805CB60C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB610:
    // 805CB610: bl      0x8026F7BC
    {
            ctx->lr = 0x805CB614u;
            ctx->pc = 0x8026F7BCu;
            return;
    }

label_805CB614:
    ctx->downcount -= 6;
    // 805CB614: or   r6, r24, r24
    {
        ctx->gpr[6] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB618:
    // 805CB618: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB61C:
    // 805CB61C: addi    r5, r28, 394
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(394);

label_805CB620:
    // 805CB620: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB624:
    // 805CB624: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB628:
    // 805CB628: bl      0x8000D074
    {
            ctx->lr = 0x805CB62Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB62C:
    ctx->downcount -= 3;
    // 805CB62C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CB630:
    // 805CB630: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_805CB634:
    // 805CB634: bl      0x8026F960
    {
            ctx->lr = 0x805CB638u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB638:
    ctx->downcount -= 5;
    // 805CB638: rlwinm r0, r25, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 2u) & 0xFFFFFFFCu;
    }

label_805CB63C:
    // 805CB63C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB640:
    // 805CB640: add   r4, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CB644:
    ctx->pc = 0x805CB644u;
    // 805CB644: lwz     r4, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB648:
    // 805CB648: bl      0x8027CEB8
    {
            ctx->lr = 0x805CB64Cu;
            ctx->pc = 0x8027CEB8u;
            return;
    }

label_805CB64C:
    ctx->pc = 0x805CB64Cu;
    ctx->downcount -= 16;
    // 805CB64C: lmw     r24, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CB650:
    ctx->pc = 0x805CB650u;
    // 805CB650: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB654:
    ctx->pc = 0x805CB654u;
    // 805CB654: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CB658:
    // 805CB658: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_805CB65C:
    ctx->pc = 0x805CB65Cu;
    // 805CB65C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CB660:
    ctx->pc = 0x805CB660u;
    ctx->downcount -= 16;
    // 805CB660: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CB664:
    ctx->pc = 0x805CB664u;
    // 805CB664: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CB668:
    ctx->pc = 0x805CB668u;
    // 805CB668: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB66C:
    ctx->pc = 0x805CB66Cu;
    // 805CB66C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CB670:
    // 805CB670: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB674:
    // 805CB674: bl      0x801ED220
    {
            ctx->lr = 0x805CB678u;
            ctx->pc = 0x801ED220u;
            return;
    }

label_805CB678:
    ctx->downcount -= 2;
    // 805CB678: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_805CB67C:
    // 805CB67C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CB680:
    ctx->downcount -= 3;
    // 805CB680: add   r29, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_805CB684:
    // 805CB684: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_805CB688:
    // 805CB688: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_805CB68C:
    ctx->downcount -= 3;
    // 805CB68C: add   r3, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CB690:
    ctx->pc = 0x805CB690u;
    // 805CB690: lwz     r3, 660(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(660);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CB694:
    // 805CB694: bl      0x8023E8CC
    {
            ctx->lr = 0x805CB698u;
            ctx->pc = 0x8023E8CCu;
            return;
    }

label_805CB698:
    ctx->downcount -= 4;
    // 805CB698: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_805CB69C:
    // 805CB69C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_805CB6A0:
    // 805CB6A0: cmpwi   r27, 10
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB6A4:
    // 805CB6A4: bc    12, 0, 0x805CB68C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB68Cu;
                return;
            }
            goto label_805CB68C;
        }
    }

label_805CB6A8:
    ctx->downcount -= 4;
    // 805CB6A8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_805CB6AC:
    // 805CB6AC: addi    r31, r31, 40
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(40);

label_805CB6B0:
    // 805CB6B0: cmpwi   r28, 3
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB6B4:
    // 805CB6B4: bc    12, 0, 0x805CB680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB680u;
                return;
            }
            goto label_805CB680;
        }
    }

label_805CB6B8:
    ctx->pc = 0x805CB6B8u;
    ctx->downcount -= 16;
    // 805CB6B8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CB6BC:
    ctx->pc = 0x805CB6BCu;
    // 805CB6BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB6C0:
    ctx->pc = 0x805CB6C0u;
    // 805CB6C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CB6C4:
    // 805CB6C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CB6C8:
    ctx->pc = 0x805CB6C8u;
    // 805CB6C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CB6CC:
    ctx->pc = 0x805CB6CCu;
    ctx->downcount -= 7;
    // 805CB6CC: stwu     r1, -160(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-160);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CB6D0:
    ctx->pc = 0x805CB6D0u;
    // 805CB6D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CB6D4:
    ctx->pc = 0x805CB6D4u;
    // 805CB6D4: stw     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB6D8:
    // 805CB6D8: addi    r11, r1, 144
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(144);

label_805CB6DC:
    ctx->pc = 0x805CB6DCu;
    // 805CB6DC: stfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CB6DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_805CB6E0:
    ctx->pc = 0x805CB6E0u;
    // 805CB6E0: psq_st   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CB6E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x805CB6E0u);
        if (ctx->exception) return;
    }

label_805CB6E4:
    // 805CB6E4: bl      0x80007834
    {
            ctx->lr = 0x805CB6E8u;
            ctx->pc = 0x80007834u;
            return;
    }

label_805CB6E8:
    ctx->downcount -= 14;
    // 805CB6E8: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_805CB6EC:
    ctx->pc = 0x805CB6ECu;
    // 805CB6EC: stb     r6, 784(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(784);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_805CB6F0:
    // 805CB6F0: add   r21, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_805CB6F4:
    // 805CB6F4: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CB6F8:
    // 805CB6F8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_805CB6FC:
    // 805CB6FC: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB700:
    // 805CB700: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CB704:
    // 805CB704: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CB708:
    ctx->pc = 0x805CB708u;
    // 805CB708: lwz     r31, 292(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(292);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CB70C:
    // 805CB70C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_805CB710:
    // 805CB710: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805CB714:
    // 805CB714: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB718:
    ctx->pc = 0x805CB718u;
    // 805CB718: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CB71C:
    ctx->downcount -= 4;
    // 805CB71C: add   r7, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_805CB720:
    ctx->pc = 0x805CB720u;
    // 805CB720: lwz     r0, 292(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB724:
    // 805CB724: cmpw    r31, r0
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

label_805CB728:
    // 805CB728: bc    4, 2, 0x805CB734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CB734;
        }
    }

label_805CB72C:
    ctx->downcount -= 2;
    // 805CB72C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_805CB730:
    // 805CB730: b       0x805CB740
    {
            goto label_805CB740;
    }

label_805CB734:
    ctx->downcount -= 2;
    // 805CB734: cmpwi   r0, 0
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

label_805CB738:
    // 805CB738: bc    12, 0, 0x805CB740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB740;
        }
    }

label_805CB73C:
    ctx->downcount -= 1;
    // 805CB73C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_805CB740:
    ctx->downcount -= 2;
    // 805CB740: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_805CB744:
    // 805CB744: bc    16, 0, 0x805CB71C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB71Cu;
                return;
            }
            goto label_805CB71C;
        }
    }

label_805CB748:
    ctx->downcount -= 2;
    // 805CB748: cmpwi   r6, 0
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

label_805CB74C:
    // 805CB74C: bc    4, 2, 0x805CB758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CB758;
        }
    }

label_805CB750:
    ctx->downcount -= 2;
    // 805CB750: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_805CB754:
    // 805CB754: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_805CB758:
    ctx->pc = 0x805CB758u;
    ctx->downcount -= 6;
    // 805CB758: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB75C:
    ctx->pc = 0x805CB75Cu;
    // 805CB75C: stw     r4, 780(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CB760:
    // 805CB760: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CB764:
    ctx->pc = 0x805CB764u;
    // 805CB764: stb     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB768:
    // 805CB768: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CB76C:
    // 805CB76C: bl      0x80371554
    {
            ctx->lr = 0x805CB770u;
            ctx->pc = 0x80371554u;
            return;
    }

label_805CB770:
    ctx->pc = 0x805CB770u;
    ctx->downcount -= 3;
    // 805CB770: lbz     r0, 784(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(784);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB774:
    // 805CB774: cmpwi   r0, 0
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

label_805CB778:
    // 805CB778: bc    12, 2, 0x805CB784
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB784;
        }
    }

label_805CB77C:
    ctx->pc = 0x805CB77Cu;
    ctx->downcount -= 2;
    // 805CB77C: lwz     r28, 292(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(292);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_805CB780:
    // 805CB780: b       0x805CB788
    {
            goto label_805CB788;
    }

label_805CB784:
    ctx->downcount -= 1;
    // 805CB784: or   r28, r24, r24
    {
        ctx->gpr[28] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CB788:
    ctx->downcount -= 8;
    // 805CB788: mulli   r0, r28, 88
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)88);

label_805CB78C:
    ctx->pc = 0x805CB78Cu;
    // 805CB78C: lfd     f31, 24128(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CB78Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805CB790:
    // 805CB790: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_805CB794:
    // 805CB794: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_805CB798:
    // 805CB798: add   r20, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[20] = res;
    }

label_805CB79C:
    // 805CB79C: lis     r21, 17200
    ctx->gpr[21] = ((u32)(s32)(17200) << 16);

label_805CB7A0:
    ctx->pc = 0x805CB7A0u;
    ctx->downcount -= 3;
    // 805CB7A0: lwz     r0, 392(r20)
    {
        u32 ea = ctx->gpr[20] + (u32)(s32)(392);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB7A4:
    // 805CB7A4: cmpw    r27, r0
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB7A8:
    // 805CB7A8: bc    4, 2, 0x805CB814
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CB814;
        }
    }

label_805CB7AC:
    ctx->downcount -= 3;
    // 805CB7AC: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB7B0:
    // 805CB7B0: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_805CB7B4:
    // 805CB7B4: bc    12, 2, 0x805CB7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB7BC;
        }
    }

label_805CB7B8:
    ctx->downcount -= 1;
    // 805CB7B8: li      r19, 3
    ctx->gpr[19] = (u32)(s32)(3);

label_805CB7BC:
    ctx->downcount -= 3;
    // 805CB7BC: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB7C0:
    // 805CB7C0: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB7C4:
    // 805CB7C4: bl      0x8026F6AC
    {
            ctx->lr = 0x805CB7C8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CB7C8:
    ctx->downcount -= 4;
    // 805CB7C8: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB7CC:
    // 805CB7CC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB7D0:
    // 805CB7D0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB7D4:
    // 805CB7D4: bl      0x8026FEF0
    {
            ctx->lr = 0x805CB7D8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CB7D8:
    ctx->downcount -= 3;
    // 805CB7D8: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB7DC:
    // 805CB7DC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB7E0:
    // 805CB7E0: bl      0x8026F6AC
    {
            ctx->lr = 0x805CB7E4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CB7E4:
    ctx->downcount -= 2;
    // 805CB7E4: or   r19, r3, r3
    {
        ctx->gpr[19] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB7E8:
    // 805CB7E8: bl      0x8025EC94
    {
            ctx->lr = 0x805CB7ECu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CB7EC:
    ctx->downcount -= 7;
    // 805CB7EC: xoris   r0, r27, 0x8000
    ctx->gpr[0] = ctx->gpr[27] ^ (0x8000u << 16);

label_805CB7F0:
    ctx->pc = 0x805CB7F0u;
    // 805CB7F0: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB7F4:
    // 805CB7F4: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB7F8:
    ctx->pc = 0x805CB7F8u;
    // 805CB7F8: stw     r21, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_805CB7FC:
    ctx->pc = 0x805CB7FCu;
    // 805CB7FC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CB7FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805CB800:
    ctx->pc = 0x805CB800u;
    // 805CB800: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x805CB800u)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_805CB804:
    // 805CB804: bl      0x8025EB54
    {
            ctx->lr = 0x805CB808u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_805CB808:
    ctx->pc = 0x805CB808u;
    ctx->downcount -= 3;
    // 805CB808: lfs     f1, 24120(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CB808u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CB80C:
    // 805CB80C: or   r3, r19, r19
    {
        ctx->gpr[3] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB810:
    // 805CB810: bl      0x8025EBE8
    {
            ctx->lr = 0x805CB814u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CB814:
    ctx->downcount -= 4;
    // 805CB814: addi    r19, r27, 4
    ctx->gpr[19] = ctx->gpr[27] + (u32)(s32)(4);

label_805CB818:
    // 805CB818: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB81C:
    // 805CB81C: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB820:
    // 805CB820: bl      0x8026F6AC
    {
            ctx->lr = 0x805CB824u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CB824:
    ctx->downcount -= 5;
    // 805CB824: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB828:
    // 805CB828: or   r4, r19, r19
    {
        ctx->gpr[4] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CB82C:
    // 805CB82C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB830:
    // 805CB830: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB834:
    // 805CB834: bl      0x8026FEF0
    {
            ctx->lr = 0x805CB838u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CB838:
    ctx->downcount -= 2;
    // 805CB838: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CB83C:
    // 805CB83C: bl      0x8025EC94
    {
            ctx->lr = 0x805CB840u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CB840:
    ctx->downcount -= 9;
    // 805CB840: add   r3, r20, r22
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CB844:
    ctx->pc = 0x805CB844u;
    // 805CB844: stw     r21, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[21]);
    }

label_805CB848:
    ctx->pc = 0x805CB848u;
    // 805CB848: lwz     r0, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CB84C:
    // 805CB84C: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CB850:
    // 805CB850: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_805CB854:
    ctx->pc = 0x805CB854u;
    // 805CB854: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CB858:
    ctx->pc = 0x805CB858u;
    // 805CB858: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CB858u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805CB85C:
    ctx->pc = 0x805CB85Cu;
    // 805CB85C: fsubs   f1, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x805CB85Cu)) return;
    ppc_fsubs(ctx, 1, 0, 31);

label_805CB860:
    // 805CB860: bl      0x8025EB54
    {
            ctx->lr = 0x805CB864u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_805CB864:
    ctx->pc = 0x805CB864u;
    ctx->downcount -= 3;
    // 805CB864: lfs     f1, 24120(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CB864u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CB868:
    // 805CB868: or   r3, r18, r18
    {
        ctx->gpr[3] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CB86C:
    // 805CB86C: bl      0x8025EBE8
    {
            ctx->lr = 0x805CB870u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CB870:
    ctx->downcount -= 4;
    // 805CB870: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_805CB874:
    // 805CB874: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_805CB878:
    // 805CB878: cmpwi   r27, 10
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB87C:
    // 805CB87C: bc    12, 0, 0x805CB7A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB7A0u;
                return;
            }
            goto label_805CB7A0;
        }
    }

label_805CB880:
    ctx->downcount -= 4;
    // 805CB880: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB884:
    // 805CB884: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CB888:
    // 805CB888: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB88C:
    // 805CB88C: bl      0x8026FEF0
    {
            ctx->lr = 0x805CB890u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CB890:
    ctx->downcount -= 3;
    // 805CB890: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB894:
    // 805CB894: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CB898:
    // 805CB898: bl      0x8026F6AC
    {
            ctx->lr = 0x805CB89Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CB89C:
    ctx->downcount -= 1;
    // 805CB89C: bl      0x8025EC94
    {
            ctx->lr = 0x805CB8A0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CB8A0:
    ctx->downcount -= 3;
    // 805CB8A0: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_805CB8A4:
    // 805CB8A4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_805CB8A8:
    // 805CB8A8: addi    r22, r13, -19240
    ctx->gpr[22] = ctx->gpr[13] + (u32)(s32)(-19240);

label_805CB8AC:
    ctx->pc = 0x805CB8ACu;
    ctx->downcount -= 3;
    // 805CB8AC: lwzx    r4, r22, r27
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[27];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CB8B0:
    // 805CB8B0: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB8B4:
    // 805CB8B4: bl      0x8026F960
    {
            ctx->lr = 0x805CB8B8u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_805CB8B8:
    ctx->downcount -= 5;
    // 805CB8B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CB8BC:
    // 805CB8BC: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CB8C0:
    // 805CB8C0: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB8C4:
    // 805CB8C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB8C8:
    // 805CB8C8: bl      0x8026F760
    {
            ctx->lr = 0x805CB8CCu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_805CB8CC:
    ctx->downcount -= 4;
    // 805CB8CC: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_805CB8D0:
    // 805CB8D0: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_805CB8D4:
    // 805CB8D4: cmpwi   r18, 2
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB8D8:
    // 805CB8D8: bc    12, 0, 0x805CB8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB8ACu;
                return;
            }
            goto label_805CB8AC;
        }
    }

label_805CB8DC:
    ctx->downcount -= 7;
    // 805CB8DC: lis     r22, -32663
    ctx->gpr[22] = ((u32)(s32)(-32663) << 16);

label_805CB8E0:
    // 805CB8E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB8E4:
    // 805CB8E4: addi    r22, r22, -28168
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(-28168);

label_805CB8E8:
    // 805CB8E8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB8EC:
    // 805CB8EC: addi    r5, r22, 409
    ctx->gpr[5] = ctx->gpr[22] + (u32)(s32)(409);

label_805CB8F0:
    // 805CB8F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB8F4:
    // 805CB8F4: bl      0x8000D074
    {
            ctx->lr = 0x805CB8F8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB8F8:
    ctx->downcount -= 3;
    // 805CB8F8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB8FC:
    // 805CB8FC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB900:
    // 805CB900: bl      0x8026F970
    {
            ctx->lr = 0x805CB904u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CB904:
    ctx->downcount -= 11;
    // 805CB904: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_805CB908:
    ctx->pc = 0x805CB908u;
    // 805CB908: lbz     r6, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_805CB90C:
    // 805CB90C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CB910:
    // 805CB910: addi    r5, r22, 423
    ctx->gpr[5] = ctx->gpr[22] + (u32)(s32)(423);

label_805CB914:
    // 805CB914: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CB918:
    // 805CB918: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB91C:
    // 805CB91C: rlwimi r0, r6, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[6], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_805CB920:
    ctx->pc = 0x805CB920u;
    // 805CB920: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB924:
    // 805CB924: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB928:
    // 805CB928: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB92C:
    // 805CB92C: bl      0x8000D074
    {
            ctx->lr = 0x805CB930u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB930:
    ctx->downcount -= 3;
    // 805CB930: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB934:
    // 805CB934: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB938:
    // 805CB938: bl      0x8026F970
    {
            ctx->lr = 0x805CB93Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CB93C:
    ctx->downcount -= 12;
    // 805CB93C: addi    r6, r30, -1
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(-1);

label_805CB940:
    ctx->pc = 0x805CB940u;
    // 805CB940: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CB944:
    // 805CB944: addic   r0, r6, -1
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CB948:
    // 805CB948: addi    r5, r22, 439
    ctx->gpr[5] = ctx->gpr[22] + (u32)(s32)(439);

label_805CB94C:
    // 805CB94C: rlwinm r7, r4, 0, 24, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x000000FEu;
    }

label_805CB950:
    // 805CB950: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB954:
    // 805CB954: subfe   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CB958:
    // 805CB958: or   r0, r7, r0
    {
        ctx->gpr[0] = ctx->gpr[7] | ctx->gpr[0];
    }

label_805CB95C:
    ctx->pc = 0x805CB95Cu;
    // 805CB95C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB960:
    // 805CB960: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB964:
    // 805CB964: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB968:
    // 805CB968: bl      0x8000D074
    {
            ctx->lr = 0x805CB96Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB96C:
    ctx->downcount -= 3;
    // 805CB96C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB970:
    // 805CB970: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB974:
    // 805CB974: bl      0x8026F970
    {
            ctx->lr = 0x805CB978u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CB978:
    ctx->pc = 0x805CB978u;
    ctx->downcount -= 6;
    // 805CB978: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB97C:
    // 805CB97C: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB980:
    // 805CB980: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CB984:
    // 805CB984: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CB988:
    ctx->pc = 0x805CB988u;
    // 805CB988: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB98C:
    // 805CB98C: bc    12, 2, 0x805CB99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB99C;
        }
    }

label_805CB990:
    ctx->downcount -= 2;
    // 805CB990: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB994:
    // 805CB994: bc    4, 2, 0x805CB99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CB99C;
        }
    }

label_805CB998:
    ctx->downcount -= 1;
    // 805CB998: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CB99C:
    ctx->pc = 0x805CB99Cu;
    ctx->downcount -= 10;
    // 805CB99C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB9A0:
    // 805CB9A0: lis     r5, -32663
    ctx->gpr[5] = ((u32)(s32)(-32663) << 16);

label_805CB9A4:
    // 805CB9A4: addi    r5, r5, -28168
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-28168);

label_805CB9A8:
    // 805CB9A8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CB9AC:
    // 805CB9AC: or   r0, r0, r6
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[6];
    }

label_805CB9B0:
    ctx->pc = 0x805CB9B0u;
    // 805CB9B0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB9B4:
    // 805CB9B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB9B8:
    // 805CB9B8: addi    r5, r5, 453
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(453);

label_805CB9BC:
    // 805CB9BC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CB9C0:
    // 805CB9C0: bl      0x8000D074
    {
            ctx->lr = 0x805CB9C4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CB9C4:
    ctx->downcount -= 3;
    // 805CB9C4: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CB9C8:
    // 805CB9C8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CB9CC:
    // 805CB9CC: bl      0x8026F970
    {
            ctx->lr = 0x805CB9D0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CB9D0:
    ctx->pc = 0x805CB9D0u;
    ctx->downcount -= 6;
    // 805CB9D0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB9D4:
    // 805CB9D4: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB9D8:
    // 805CB9D8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CB9DC:
    // 805CB9DC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CB9E0:
    ctx->pc = 0x805CB9E0u;
    // 805CB9E0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CB9E4:
    // 805CB9E4: bc    12, 2, 0x805CB9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB9F4;
        }
    }

label_805CB9E8:
    ctx->downcount -= 2;
    // 805CB9E8: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CB9EC:
    // 805CB9EC: bc    12, 2, 0x805CB9F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CB9F4;
        }
    }

label_805CB9F0:
    ctx->downcount -= 1;
    // 805CB9F0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CB9F4:
    ctx->pc = 0x805CB9F4u;
    ctx->downcount -= 10;
    // 805CB9F4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CB9F8:
    // 805CB9F8: lis     r22, -32663
    ctx->gpr[22] = ((u32)(s32)(-32663) << 16);

label_805CB9FC:
    // 805CB9FC: addi    r22, r22, -28168
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(-28168);

label_805CBA00:
    // 805CBA00: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CBA04:
    // 805CBA04: or   r0, r0, r5
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[5];
    }

label_805CBA08:
    ctx->pc = 0x805CBA08u;
    // 805CBA08: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CBA0C:
    // 805CBA0C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CBA10:
    // 805CBA10: addi    r5, r22, 469
    ctx->gpr[5] = ctx->gpr[22] + (u32)(s32)(469);

label_805CBA14:
    // 805CBA14: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CBA18:
    // 805CBA18: bl      0x8000D074
    {
            ctx->lr = 0x805CBA1Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CBA1C:
    ctx->downcount -= 3;
    // 805CBA1C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CBA20:
    // 805CBA20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CBA24:
    // 805CBA24: bl      0x8026F970
    {
            ctx->lr = 0x805CBA28u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CBA28:
    ctx->pc = 0x805CBA28u;
    ctx->downcount -= 10;
    // 805CBA28: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CBA2C:
    // 805CBA2C: cntlzw r0, r26
    {
        u32 v = ctx->gpr[26];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CBA30:
    // 805CBA30: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CBA34:
    // 805CBA34: addi    r5, r22, 484
    ctx->gpr[5] = ctx->gpr[22] + (u32)(s32)(484);

label_805CBA38:
    // 805CBA38: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_805CBA3C:
    ctx->pc = 0x805CBA3Cu;
    // 805CBA3C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CBA40:
    // 805CBA40: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CBA44:
    // 805CBA44: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CBA48:
    // 805CBA48: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CBA4C:
    // 805CBA4C: bl      0x8000D074
    {
            ctx->lr = 0x805CBA50u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CBA50:
    ctx->downcount -= 3;
    // 805CBA50: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CBA54:
    // 805CBA54: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CBA58:
    // 805CBA58: bl      0x8026F970
    {
            ctx->lr = 0x805CBA5Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CBA5C:
    ctx->pc = 0x805CBA5Cu;
    ctx->downcount -= 6;
    // 805CBA5C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CBA60:
    // 805CBA60: cmpwi   r30, 1
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

label_805CBA64:
    // 805CBA64: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CBA68:
    // 805CBA68: or   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[26];
    }

label_805CBA6C:
    ctx->pc = 0x805CBA6Cu;
    // 805CBA6C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CBA70:
    // 805CBA70: bc    4, 2, 0x805CBA88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBA88;
        }
    }

label_805CBA74:
    ctx->downcount -= 4;
    // 805CBA74: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CBA78:
    // 805CBA78: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_805CBA7C:
    // 805CBA7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBA80:
    // 805CBA80: bl      0x805CB4BC
    {
            ctx->lr = 0x805CBA84u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB4BCu;
                return;
            }
            goto label_805CB4BC;
    }

label_805CBA84:
    ctx->downcount -= 1;
    // 805CBA84: b       0x805CBAEC
    {
            goto label_805CBAEC;
    }

label_805CBA88:
    ctx->downcount -= 2;
    // 805CBA88: cmpwi   r30, 2
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

label_805CBA8C:
    // 805CBA8C: bc    4, 2, 0x805CBAEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBAEC;
        }
    }

label_805CBA90:
    ctx->downcount -= 3;
    // 805CBA90: li      r18, -1
    ctx->gpr[18] = (u32)(s32)(-1);

label_805CBA94:
    // 805CBA94: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_805CBA98:
    // 805CBA98: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_805CBA9C:
    ctx->downcount -= 4;
    // 805CBA9C: add   r3, r23, r24
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CBAA0:
    ctx->pc = 0x805CBAA0u;
    // 805CBAA0: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBAA4:
    // 805CBAA4: cmpw    r31, r0
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

label_805CBAA8:
    // 805CBAA8: bc    4, 2, 0x805CBADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBADC;
        }
    }

label_805CBAAC:
    ctx->downcount -= 2;
    // 805CBAAC: cmpwi   r0, 0
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

label_805CBAB0:
    // 805CBAB0: bc    12, 0, 0x805CBADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBADC;
        }
    }

label_805CBAB4:
    ctx->downcount -= 2;
    // 805CBAB4: cmpwi   r18, 0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBAB8:
    // 805CBAB8: bc    12, 0, 0x805CBAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBAD8;
        }
    }

label_805CBABC:
    ctx->downcount -= 6;
    // 805CBABC: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CBAC0:
    // 805CBAC0: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CBAC4:
    // 805CBAC4: or   r6, r19, r19
    {
        ctx->gpr[6] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CBAC8:
    // 805CBAC8: or   r7, r25, r25
    {
        ctx->gpr[7] = ctx->gpr[25] | ctx->gpr[25];
    }

label_805CBACC:
    // 805CBACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBAD0:
    // 805CBAD0: bl      0x805CB220
    {
            ctx->lr = 0x805CBAD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB220u;
                return;
            }
            goto label_805CB220;
    }

label_805CBAD4:
    ctx->downcount -= 1;
    // 805CBAD4: b       0x805CBADC
    {
            goto label_805CBADC;
    }

label_805CBAD8:
    ctx->downcount -= 1;
    // 805CBAD8: or   r18, r19, r19
    {
        ctx->gpr[18] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CBADC:
    ctx->downcount -= 4;
    // 805CBADC: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_805CBAE0:
    // 805CBAE0: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_805CBAE4:
    // 805CBAE4: cmpwi   r19, 4
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBAE8:
    // 805CBAE8: bc    12, 0, 0x805CBA9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBA9Cu;
                return;
            }
            goto label_805CBA9C;
        }
    }

label_805CBAEC:
    ctx->downcount -= 2;
    // 805CBAEC: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBAF0:
    // 805CBAF0: bc    12, 2, 0x805CBBA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBBA4;
        }
    }

label_805CBAF4:
    ctx->downcount -= 2;
    // 805CBAF4: cmpwi   r29, 1
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBAF8:
    // 805CBAF8: bc    4, 2, 0x805CBB40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBB40;
        }
    }

label_805CBAFC:
    ctx->downcount -= 2;
    // 805CBAFC: li      r18, 0
    ctx->gpr[18] = (u32)(s32)(0);

label_805CBB00:
    // 805CBB00: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_805CBB04:
    ctx->downcount -= 4;
    // 805CBB04: add   r3, r23, r24
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CBB08:
    ctx->pc = 0x805CBB08u;
    // 805CBB08: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBB0C:
    // 805CBB0C: cmpw    r31, r0
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

label_805CBB10:
    // 805CBB10: bc    12, 2, 0x805CBB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBB2C;
        }
    }

label_805CBB14:
    ctx->downcount -= 2;
    // 805CBB14: cmpwi   r0, 0
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

label_805CBB18:
    // 805CBB18: bc    12, 0, 0x805CBB2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBB2C;
        }
    }

label_805CBB1C:
    ctx->downcount -= 4;
    // 805CBB1C: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CBB20:
    // 805CBB20: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CBB24:
    // 805CBB24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CBB28:
    // 805CBB28: bl      0x805CB4BC
    {
            ctx->lr = 0x805CBB2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB4BCu;
                return;
            }
            goto label_805CB4BC;
    }

label_805CBB2C:
    ctx->downcount -= 4;
    // 805CBB2C: addi    r18, r18, 1
    ctx->gpr[18] = ctx->gpr[18] + (u32)(s32)(1);

label_805CBB30:
    // 805CBB30: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_805CBB34:
    // 805CBB34: cmpwi   r18, 4
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBB38:
    // 805CBB38: bc    12, 0, 0x805CBB04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBB04u;
                return;
            }
            goto label_805CBB04;
        }
    }

label_805CBB3C:
    ctx->downcount -= 1;
    // 805CBB3C: b       0x805CBBA4
    {
            goto label_805CBBA4;
    }

label_805CBB40:
    ctx->downcount -= 2;
    // 805CBB40: cmpwi   r29, 2
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBB44:
    // 805CBB44: bc    4, 2, 0x805CBBA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBBA4;
        }
    }

label_805CBB48:
    ctx->downcount -= 3;
    // 805CBB48: li      r18, -1
    ctx->gpr[18] = (u32)(s32)(-1);

label_805CBB4C:
    // 805CBB4C: li      r19, 0
    ctx->gpr[19] = (u32)(s32)(0);

label_805CBB50:
    // 805CBB50: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_805CBB54:
    ctx->downcount -= 4;
    // 805CBB54: add   r3, r23, r24
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CBB58:
    ctx->pc = 0x805CBB58u;
    // 805CBB58: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBB5C:
    // 805CBB5C: cmpw    r31, r0
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

label_805CBB60:
    // 805CBB60: bc    12, 2, 0x805CBB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBB94;
        }
    }

label_805CBB64:
    ctx->downcount -= 2;
    // 805CBB64: cmpwi   r0, 0
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

label_805CBB68:
    // 805CBB68: bc    12, 0, 0x805CBB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBB94;
        }
    }

label_805CBB6C:
    ctx->downcount -= 2;
    // 805CBB6C: cmpwi   r18, 0
    {
        s32 val_a = (s32)(ctx->gpr[18]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBB70:
    // 805CBB70: bc    12, 0, 0x805CBB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBB90;
        }
    }

label_805CBB74:
    ctx->downcount -= 6;
    // 805CBB74: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_805CBB78:
    // 805CBB78: or   r5, r18, r18
    {
        ctx->gpr[5] = ctx->gpr[18] | ctx->gpr[18];
    }

label_805CBB7C:
    // 805CBB7C: or   r6, r19, r19
    {
        ctx->gpr[6] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CBB80:
    // 805CBB80: or   r7, r25, r25
    {
        ctx->gpr[7] = ctx->gpr[25] | ctx->gpr[25];
    }

label_805CBB84:
    // 805CBB84: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CBB88:
    // 805CBB88: bl      0x805CB220
    {
            ctx->lr = 0x805CBB8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB220u;
                return;
            }
            goto label_805CB220;
    }

label_805CBB8C:
    ctx->downcount -= 1;
    // 805CBB8C: b       0x805CBB94
    {
            goto label_805CBB94;
    }

label_805CBB90:
    ctx->downcount -= 1;
    // 805CBB90: or   r18, r19, r19
    {
        ctx->gpr[18] = ctx->gpr[19] | ctx->gpr[19];
    }

label_805CBB94:
    ctx->downcount -= 4;
    // 805CBB94: addi    r19, r19, 1
    ctx->gpr[19] = ctx->gpr[19] + (u32)(s32)(1);

label_805CBB98:
    // 805CBB98: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_805CBB9C:
    // 805CBB9C: cmpwi   r19, 4
    {
        s32 val_a = (s32)(ctx->gpr[19]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBBA0:
    // 805CBBA0: bc    12, 0, 0x805CBB54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBB54u;
                return;
            }
            goto label_805CBB54;
        }
    }

label_805CBBA4:
    ctx->downcount -= 2;
    // 805CBBA4: cmpwi   r26, 0
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBBA8:
    // 805CBBA8: bc    12, 2, 0x805CBBE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBBE0;
        }
    }

label_805CBBAC:
    ctx->downcount -= 4;
    // 805CBBAC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CBBB0:
    // 805CBBB0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CBBB4:
    // 805CBBB4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CBBB8:
    // 805CBBB8: bl      0x8026FEF0
    {
            ctx->lr = 0x805CBBBCu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CBBBC:
    ctx->downcount -= 3;
    // 805CBBBC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CBBC0:
    // 805CBBC0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CBBC4:
    // 805CBBC4: bl      0x8026F6AC
    {
            ctx->lr = 0x805CBBC8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CBBC8:
    ctx->downcount -= 1;
    // 805CBBC8: bl      0x8025EC94
    {
            ctx->lr = 0x805CBBCCu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CBBCC:
    ctx->downcount -= 3;
    // 805CBBCC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_805CBBD0:
    // 805CBBD0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CBBD4:
    // 805CBBD4: bl      0x8026F6AC
    {
            ctx->lr = 0x805CBBD8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CBBD8:
    ctx->pc = 0x805CBBD8u;
    ctx->downcount -= 2;
    // 805CBBD8: lfs     f1, 24120(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CBBD8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24120);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CBBDC:
    // 805CBBDC: bl      0x8025EBE8
    {
            ctx->lr = 0x805CBBE0u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CBBE0:
    ctx->downcount -= 4;
    // 805CBBE0: addi    r11, r1, 144
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(144);

label_805CBBE4:
    ctx->pc = 0x805CBBE4u;
    // 805CBBE4: psq_l   f31, 152(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CBBE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(152);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x805CBBE4u);
        if (ctx->exception) return;
    }

label_805CBBE8:
    ctx->pc = 0x805CBBE8u;
    // 805CBBE8: lfd     f31, 144(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CBBE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805CBBEC:
    // 805CBBEC: bl      0x80007880
    {
            ctx->lr = 0x805CBBF0u;
            ctx->pc = 0x80007880u;
            return;
    }

label_805CBBF0:
    ctx->pc = 0x805CBBF0u;
    ctx->downcount -= 5;
    // 805CBBF0: lwz     r0, 164(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBBF4:
    ctx->pc = 0x805CBBF4u;
    // 805CBBF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBBF8:
    // 805CBBF8: addi    r1, r1, 160
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(160);

label_805CBBFC:
    ctx->pc = 0x805CBBFCu;
    // 805CBBFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBC00:
    ctx->downcount -= 4;
    // 805CBC00: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CBC04:
    // 805CBC04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBC08:
    // 805CBC08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CBC0C:
    // 805CBC0C: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_805CBC10:
    ctx->downcount -= 6;
    // 805CBC10: add   r7, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_805CBC14:
    // 805CBC14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CBC18:
    ctx->pc = 0x805CBC18u;
    // 805CBC18: stw     r6, 388(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBC1C:
    ctx->pc = 0x805CBC1Cu;
    // 805CBC1C: stw     r6, 392(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBC20:
    ctx->pc = 0x805CBC20u;
    // 805CBC20: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CBC24:
    loop_805CBC24(ctx);
    if (ctx->pc == 0x805CBC38u) goto label_805CBC38;
    return;
label_805CBC28:
    // 805CBC28: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_805CBC2C:
    ctx->pc = 0x805CBC2Cu;
    // 805CBC2C: stw     r6, 308(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBC30:
    ctx->pc = 0x805CBC30u;
    // 805CBC30: stw     r6, 348(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBC34:
    // 805CBC34: bc    16, 0, 0x805CBC24
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBC24u;
                return;
            }
            goto label_805CBC24;
        }
    }

label_805CBC38:
    ctx->downcount -= 4;
    // 805CBC38: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_805CBC3C:
    // 805CBC3C: addi    r4, r4, 88
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(88);

label_805CBC40:
    // 805CBC40: cmpwi   r9, 4
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBC44:
    // 805CBC44: bc    12, 0, 0x805CBC10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBC10u;
                return;
            }
            goto label_805CBC10;
        }
    }

label_805CBC48:
    ctx->pc = 0x805CBC48u;
    ctx->downcount -= 1;
    // 805CBC48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBC4C:
    ctx->pc = 0x805CBC4Cu;
    ctx->downcount -= 24;
    // 805CBC4C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBC50:
    ctx->pc = 0x805CBC50u;
    // 805CBC50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBC54:
    // 805CBC54: lis     r6, -32663
    ctx->gpr[6] = ((u32)(s32)(-32663) << 16);

label_805CBC58:
    // 805CBC58: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_805CBC5C:
    ctx->pc = 0x805CBC5Cu;
    // 805CBC5C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBC60:
    // 805CBC60: addi    r6, r6, -28168
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-28168);

label_805CBC64:
    // 805CBC64: addi    r5, r6, 496
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(496);

label_805CBC68:
    // 805CBC68: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_805CBC6C:
    ctx->pc = 0x805CBC6Cu;
    // 805CBC6C: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CBC70:
    // 805CBC70: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBC74:
    // 805CBC74: addi    r6, r6, 509
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(509);

label_805CBC78:
    // 805CBC78: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CBC7C:
    // 805CBC7C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CBC80:
    // 805CBC80: bl      0x80371668
    {
            ctx->lr = 0x805CBC84u;
            ctx->pc = 0x80371668u;
            return;
    }

label_805CBC84:
    ctx->downcount -= 14;
    // 805CBC84: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CBC88:
    // 805CBC88: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CBC8C:
    // 805CBC8C: addi    r4, r4, -27072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27072);

label_805CBC90:
    ctx->pc = 0x805CBC90u;
    // 805CBC90: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CBC94:
    // 805CBC94: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_805CBC98:
    // 805CBC98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CBC9C:
    // 805CBC9C: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_805CBCA0:
    // 805CBCA0: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_805CBCA4:
    ctx->pc = 0x805CBCA4u;
    // 805CBCA4: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBCA8:
    ctx->pc = 0x805CBCA8u;
    // 805CBCA8: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CBCAC:
    ctx->pc = 0x805CBCACu;
    // 805CBCAC: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CBCB0:
    ctx->pc = 0x805CBCB0u;
    // 805CBCB0: stb     r0, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CBCB4:
    ctx->pc = 0x805CBCB4u;
    // 805CBCB4: stw     r0, 780(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(780);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBCB8:
    // 805CBCB8: bl      0x805CBC00
    {
            ctx->lr = 0x805CBCBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBC00u;
                return;
            }
            goto label_805CBC00;
    }

label_805CBCBC:
    ctx->downcount -= 5;
    // 805CBCBC: lis     r26, -32657
    ctx->gpr[26] = ((u32)(s32)(-32657) << 16);

label_805CBCC0:
    // 805CBCC0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_805CBCC4:
    // 805CBCC4: addi    r26, r26, -27088
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-27088);

label_805CBCC8:
    // 805CBCC8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_805CBCCC:
    // 805CBCCC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805CBCD0:
    ctx->downcount -= 3;
    // 805CBCD0: add   r27, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_805CBCD4:
    // 805CBCD4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_805CBCD8:
    // 805CBCD8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_805CBCDC:
    ctx->downcount -= 2;
    // 805CBCDC: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_805CBCE0:
    // 805CBCE0: bl      0x801C1C48
    {
            ctx->lr = 0x805CBCE4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_805CBCE4:
    ctx->downcount -= 2;
    // 805CBCE4: cmpwi   r3, 0
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

label_805CBCE8:
    // 805CBCE8: bc    12, 2, 0x805CBCF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBCF8;
        }
    }

label_805CBCEC:
    ctx->pc = 0x805CBCECu;
    ctx->downcount -= 3;
    // 805CBCEC: lwzx    r4, r26, r29
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CBCF0:
    // 805CBCF0: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_805CBCF4:
    // 805CBCF4: bl      0x8023EA98
    {
            ctx->lr = 0x805CBCF8u;
            ctx->pc = 0x8023EA98u;
            return;
    }

label_805CBCF8:
    ctx->downcount -= 6;
    // 805CBCF8: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_805CBCFC:
    // 805CBCFC: add   r4, r28, r27
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CBD00:
    // 805CBD00: cmpwi   r24, 10
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBD04:
    ctx->pc = 0x805CBD04u;
    // 805CBD04: stw     r3, 660(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(660);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CBD08:
    // 805CBD08: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_805CBD0C:
    // 805CBD0C: bc    12, 0, 0x805CBCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBCDCu;
                return;
            }
            goto label_805CBCDC;
        }
    }

label_805CBD10:
    ctx->downcount -= 5;
    // 805CBD10: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_805CBD14:
    // 805CBD14: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_805CBD18:
    // 805CBD18: cmpwi   r25, 3
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CBD1C:
    // 805CBD1C: addi    r30, r30, 40
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(40);

label_805CBD20:
    // 805CBD20: bc    12, 0, 0x805CBCD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBCD0u;
                return;
            }
            goto label_805CBCD0;
        }
    }

label_805CBD24:
    ctx->downcount -= 6;
    // 805CBD24: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_805CBD28:
    // 805CBD28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805CBD2C:
    // 805CBD2C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CBD30:
    // 805CBD30: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805CBD34:
    ctx->pc = 0x805CBD34u;
    // 805CBD34: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CBD38:
    loop_805CBD38(ctx);
    if (ctx->pc == 0x805CBD4Cu) goto label_805CBD4C;
    return;
label_805CBD3C:
    // 805CBD3C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_805CBD40:
    ctx->pc = 0x805CBD40u;
    // 805CBD40: stw     r5, 276(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CBD44:
    ctx->pc = 0x805CBD44u;
    // 805CBD44: stw     r4, 292(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CBD48:
    // 805CBD48: bc    16, 0, 0x805CBD38
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBD38u;
                return;
            }
            goto label_805CBD38;
        }
    }

label_805CBD4C:
    ctx->downcount -= 17;
    // 805CBD4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CBD50:
    ctx->pc = 0x805CBD50u;
    // 805CBD50: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CBD54:
    ctx->pc = 0x805CBD54u;
    // 805CBD54: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBD58:
    ctx->pc = 0x805CBD58u;
    // 805CBD58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBD5C:
    // 805CBD5C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_805CBD60:
    ctx->pc = 0x805CBD60u;
    // 805CBD60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBD64:
    ctx->pc = 0x805CBD64u;
    ctx->downcount -= 1;
    // 805CBD64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBD68:
    ctx->pc = 0x805CBD68u;
    ctx->downcount -= 18;
    // 805CBD68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBD6C:
    ctx->pc = 0x805CBD6Cu;
    // 805CBD6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBD70:
    // 805CBD70: cmpwi   r3, 0
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

label_805CBD74:
    ctx->pc = 0x805CBD74u;
    // 805CBD74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBD78:
    ctx->pc = 0x805CBD78u;
    // 805CBD78: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CBD7C:
    // 805CBD7C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBD80:
    // 805CBD80: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CBD84:
    // 805CBD84: bc    12, 2, 0x805CBDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBDB8;
        }
    }

label_805CBD88:
    ctx->downcount -= 1;
    // 805CBD88: bc    12, 2, 0x805CBDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBDA8;
        }
    }

label_805CBD8C:
    ctx->downcount -= 1;
    // 805CBD8C: bc    12, 2, 0x805CBDA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBDA8;
        }
    }

label_805CBD90:
    ctx->downcount -= 3;
    // 805CBD90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBD94:
    // 805CBD94: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBD98:
    // 805CBD98: bl      0x801F5C24
    {
            ctx->lr = 0x805CBD9Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805CBD9C:
    ctx->downcount -= 3;
    // 805CBD9C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CBDA0:
    // 805CBDA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBDA4:
    // 805CBDA4: bl      0x801F9C70
    {
            ctx->lr = 0x805CBDA8u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_805CBDA8:
    ctx->downcount -= 2;
    // 805CBDA8: cmpwi   r31, 0
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

label_805CBDAC:
    // 805CBDAC: bc    4, 1, 0x805CBDB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CBDB8;
        }
    }

label_805CBDB0:
    ctx->downcount -= 2;
    // 805CBDB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CBDB4:
    // 805CBDB4: bl      0x801C1C90
    {
            ctx->lr = 0x805CBDB8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CBDB8:
    ctx->downcount -= 17;
    // 805CBDB8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CBDBC:
    ctx->pc = 0x805CBDBCu;
    // 805CBDBC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CBDC0:
    ctx->pc = 0x805CBDC0u;
    // 805CBDC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBDC4:
    ctx->pc = 0x805CBDC4u;
    // 805CBDC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBDC8:
    // 805CBDC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CBDCC:
    ctx->pc = 0x805CBDCCu;
    // 805CBDCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBDD0:
    ctx->downcount -= 2;
    // 805CBDD0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CBDD4:
    // 805CBDD4: b       0x805CBD68
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBD68u;
                return;
            }
            goto label_805CBD68;
    }

label_805CBDD8:
    ctx->downcount -= 2;
    // 805CBDD8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CBDDC:
    // 805CBDDC: b       0x805CB030
    {
            ctx->pc = 0x805CB030u;
            return;
    }

label_805CBDE0:
    ctx->downcount -= 2;
    // 805CBDE0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CBDE4:
    // 805CBDE4: b       0x805CBD68
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBD68u;
                return;
            }
            goto label_805CBD68;
    }

label_805CBDE8:
    ctx->downcount -= 2;
    // 805CBDE8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CBDEC:
    // 805CBDEC: b       0x805CB21C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CB21Cu;
                return;
            }
            goto label_805CB21C;
    }

label_805CBDF0:
    ctx->downcount -= 3;
    // 805CBDF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CBDF4:
    // 805CBDF4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CBDF8:
    // 805CBDF8: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CBDFC:
    ctx->downcount -= 5;
    // 805CBDFC: rlwinm r0, r4, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_805CBE00:
    // 805CBE00: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CBE04:
    ctx->pc = 0x805CBE04u;
    // 805CBE04: stw     r6, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CBE08:
    ctx->pc = 0x805CBE08u;
    // 805CBE08: stw     r5, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CBE0C:
    ctx->pc = 0x805CBE0Cu;
    // 805CBE0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBE10:
    ctx->pc = 0x805CBE10u;
    ctx->downcount -= 7;
    // 805CBE10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBE14:
    ctx->pc = 0x805CBE14u;
    // 805CBE14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBE18:
    ctx->pc = 0x805CBE18u;
    // 805CBE18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBE1C:
    ctx->pc = 0x805CBE1Cu;
    // 805CBE1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CBE20:
    // 805CBE20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBE24:
    // 805CBE24: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBE28:
    // 805CBE28: bl      0x8026FF70
    {
            ctx->lr = 0x805CBE2Cu;
            ctx->pc = 0x8026FF70u;
            return;
    }

label_805CBE2C:
    ctx->downcount -= 2;
    // 805CBE2C: cmpwi   r3, 0
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

label_805CBE30:
    // 805CBE30: bc    12, 2, 0x805CBE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBE48;
        }
    }

label_805CBE34:
    ctx->pc = 0x805CBE34u;
    ctx->downcount -= 6;
    // 805CBE34: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CBE38:
    // 805CBE38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CBE3C:
    ctx->pc = 0x805CBE3Cu;
    // 805CBE3C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CBE40:
    ctx->pc = 0x805CBE40u;
    // 805CBE40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CBE44:
    ctx->pc = 0x805CBE44u;
    // 805CBE44: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CBE48u;
            ctx->pc = target;
            return;
        }
    }

label_805CBE48:
    ctx->pc = 0x805CBE48u;
    ctx->downcount -= 6;
    // 805CBE48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBE4C:
    ctx->pc = 0x805CBE4Cu;
    // 805CBE4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CBE50:
    ctx->pc = 0x805CBE50u;
    // 805CBE50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBE54:
    // 805CBE54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CBE58:
    ctx->pc = 0x805CBE58u;
    // 805CBE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBE5C:
    ctx->pc = 0x805CBE5Cu;
    ctx->downcount -= 10;
    // 805CBE5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBE60:
    ctx->pc = 0x805CBE60u;
    // 805CBE60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBE64:
    // 805CBE64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBE68:
    ctx->pc = 0x805CBE68u;
    // 805CBE68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBE6C:
    // 805CBE6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CBE70:
    ctx->pc = 0x805CBE70u;
    // 805CBE70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CBE74:
    // 805CBE74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBE78:
    ctx->pc = 0x805CBE78u;
    // 805CBE78: stw     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBE7C:
    // 805CBE7C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBE80:
    // 805CBE80: bl      0x8026F6AC
    {
            ctx->lr = 0x805CBE84u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CBE84:
    ctx->downcount -= 1;
    // 805CBE84: bl      0x8025EBF0
    {
            ctx->lr = 0x805CBE88u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_805CBE88:
    ctx->downcount -= 3;
    // 805CBE88: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CBE8C:
    // 805CBE8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBE90:
    // 805CBE90: bl      0x8026F6AC
    {
            ctx->lr = 0x805CBE94u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CBE94:
    ctx->pc = 0x805CBE94u;
    ctx->downcount -= 2;
    // 805CBE94: lfs     f1, 24136(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CBE94u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24136);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CBE98:
    // 805CBE98: bl      0x8025EBE8
    {
            ctx->lr = 0x805CBE9Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CBE9C:
    ctx->pc = 0x805CBE9Cu;
    ctx->downcount -= 6;
    // 805CBE9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBEA0:
    ctx->pc = 0x805CBEA0u;
    // 805CBEA0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CBEA4:
    ctx->pc = 0x805CBEA4u;
    // 805CBEA4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBEA8:
    // 805CBEA8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CBEAC:
    ctx->pc = 0x805CBEACu;
    // 805CBEAC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBEB0:
    ctx->pc = 0x805CBEB0u;
    ctx->downcount -= 9;
    // 805CBEB0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBEB4:
    ctx->pc = 0x805CBEB4u;
    // 805CBEB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBEB8:
    ctx->pc = 0x805CBEB8u;
    // 805CBEB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBEBC:
    ctx->pc = 0x805CBEBCu;
    // 805CBEBC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CBEC0:
    // 805CBEC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBEC4:
    ctx->pc = 0x805CBEC4u;
    // 805CBEC4: lwz     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CBEC8:
    // 805CBEC8: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_805CBECC:
    ctx->pc = 0x805CBECCu;
    // 805CBECC: stw     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBED0:
    // 805CBED0: bc    12, 1, 0x805CBF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBF04;
        }
    }

label_805CBED4:
    ctx->downcount -= 3;
    // 805CBED4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBED8:
    // 805CBED8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBEDC:
    // 805CBEDC: bl      0x8026F6AC
    {
            ctx->lr = 0x805CBEE0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CBEE0:
    ctx->downcount -= 1;
    // 805CBEE0: bl      0x8025EAF8
    {
            ctx->lr = 0x805CBEE4u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_805CBEE4:
    ctx->downcount -= 2;
    // 805CBEE4: cmpwi   r3, 0
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

label_805CBEE8:
    // 805CBEE8: bc    12, 2, 0x805CBF04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBF04;
        }
    }

label_805CBEEC:
    ctx->pc = 0x805CBEECu;
    ctx->downcount -= 6;
    // 805CBEEC: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CBEF0:
    // 805CBEF0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CBEF4:
    ctx->pc = 0x805CBEF4u;
    // 805CBEF4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CBEF8:
    ctx->pc = 0x805CBEF8u;
    // 805CBEF8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CBEFC:
    ctx->pc = 0x805CBEFCu;
    // 805CBEFC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CBF00u;
            ctx->pc = target;
            return;
        }
    }

label_805CBF00:
    ctx->downcount -= 1;
    // 805CBF00: b       0x805CBF1C
    {
            goto label_805CBF1C;
    }

label_805CBF04:
    ctx->pc = 0x805CBF04u;
    ctx->downcount -= 3;
    // 805CBF04: lbz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CBF08:
    // 805CBF08: cmpwi   r0, 0
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

label_805CBF0C:
    // 805CBF0C: bc    12, 2, 0x805CBF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBF1C;
        }
    }

label_805CBF10:
    ctx->downcount -= 3;
    // 805CBF10: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CBF14:
    // 805CBF14: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CBF18:
    // 805CBF18: bl      0x803457B8
    {
            ctx->lr = 0x805CBF1Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CBF1C:
    ctx->pc = 0x805CBF1Cu;
    ctx->downcount -= 6;
    // 805CBF1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBF20:
    ctx->pc = 0x805CBF20u;
    // 805CBF20: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CBF24:
    ctx->pc = 0x805CBF24u;
    // 805CBF24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBF28:
    // 805CBF28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CBF2C:
    ctx->pc = 0x805CBF2Cu;
    // 805CBF2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBF30:
    ctx->pc = 0x805CBF30u;
    ctx->downcount -= 7;
    // 805CBF30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBF34:
    ctx->pc = 0x805CBF34u;
    // 805CBF34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBF38:
    ctx->pc = 0x805CBF38u;
    // 805CBF38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBF3C:
    ctx->pc = 0x805CBF3Cu;
    // 805CBF3C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CBF40:
    // 805CBF40: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBF44:
    // 805CBF44: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBF48:
    // 805CBF48: bl      0x8026FF70
    {
            ctx->lr = 0x805CBF4Cu;
            ctx->pc = 0x8026FF70u;
            return;
    }

label_805CBF4C:
    ctx->downcount -= 2;
    // 805CBF4C: cmpwi   r3, 0
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

label_805CBF50:
    // 805CBF50: bc    12, 2, 0x805CBF64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBF64;
        }
    }

label_805CBF54:
    ctx->downcount -= 3;
    // 805CBF54: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CBF58:
    // 805CBF58: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CBF5C:
    // 805CBF5C: bl      0x803457B8
    {
            ctx->lr = 0x805CBF60u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CBF60:
    ctx->downcount -= 1;
    // 805CBF60: b       0x805CBF7C
    {
            goto label_805CBF7C;
    }

label_805CBF64:
    ctx->pc = 0x805CBF64u;
    ctx->downcount -= 3;
    // 805CBF64: lbz     r0, 268(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(268);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CBF68:
    // 805CBF68: cmpwi   r0, 0
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

label_805CBF6C:
    // 805CBF6C: bc    12, 2, 0x805CBF7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CBF7C;
        }
    }

label_805CBF70:
    ctx->downcount -= 3;
    // 805CBF70: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CBF74:
    // 805CBF74: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CBF78:
    // 805CBF78: bl      0x803457B8
    {
            ctx->lr = 0x805CBF7Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CBF7C:
    ctx->pc = 0x805CBF7Cu;
    ctx->downcount -= 6;
    // 805CBF7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CBF80:
    ctx->pc = 0x805CBF80u;
    // 805CBF80: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CBF84:
    ctx->pc = 0x805CBF84u;
    // 805CBF84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CBF88:
    // 805CBF88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CBF8C:
    ctx->pc = 0x805CBF8Cu;
    // 805CBF8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBF90:
    ctx->pc = 0x805CBF90u;
    ctx->downcount -= 1;
    // 805CBF90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CBF94:
    ctx->pc = 0x805CBF94u;
    ctx->downcount -= 24;
    // 805CBF94: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CBF98:
    ctx->pc = 0x805CBF98u;
    // 805CBF98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CBF9C:
    // 805CBF9C: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_805CBFA0:
    // 805CBFA0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CBFA4:
    ctx->pc = 0x805CBFA4u;
    // 805CBFA4: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CBFA8:
    // 805CBFA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CBFAC:
    // 805CBFAC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CBFB0:
    ctx->pc = 0x805CBFB0u;
    // 805CBFB0: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CBFB4:
    // 805CBFB4: addi    r30, r4, -27632
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(-27632);

label_805CBFB8:
    // 805CBFB8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CBFBC:
    // 805CBFBC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CBFC0:
    // 805CBFC0: addi    r4, r30, 58
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(58);

label_805CBFC4:
    // 805CBFC4: addi    r5, r30, 71
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(71);

label_805CBFC8:
    // 805CBFC8: bl      0x802703A8
    {
            ctx->lr = 0x805CBFCCu;
            ctx->pc = 0x802703A8u;
            return;
    }

label_805CBFCC:
    ctx->downcount -= 6;
    // 805CBFCC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CBFD0:
    // 805CBFD0: addi    r5, r30, 89
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(89);

label_805CBFD4:
    // 805CBFD4: addi    r6, r30, 92
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(92);

label_805CBFD8:
    // 805CBFD8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CBFDC:
    // 805CBFDC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CBFE0:
    // 805CBFE0: bl      0x8027035C
    {
            ctx->lr = 0x805CBFE4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CBFE4:
    ctx->downcount -= 6;
    // 805CBFE4: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CBFE8:
    // 805CBFE8: addi    r5, r30, 103
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(103);

label_805CBFEC:
    // 805CBFEC: addi    r6, r30, 92
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(92);

label_805CBFF0:
    // 805CBFF0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CBFF4:
    // 805CBFF4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CBFF8:
    // 805CBFF8: bl      0x8027035C
    {
            ctx->lr = 0x805CBFFCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CBFFC:
    ctx->downcount -= 4;
    // 805CBFFC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC000:
    // 805CC000: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC004:
    // 805CC004: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CC008:
    // 805CC008: bl      0x80270194
    {
            ctx->lr = 0x805CC00Cu;
            ctx->pc = 0x80270194u;
            return;
    }

label_805CC00C:
    ctx->downcount -= 2;
    // 805CC00C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805CC010:
    // 805CC010: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CC014:
    ctx->downcount -= 6;
    // 805CC014: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CC018:
    // 805CC018: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC01C:
    // 805CC01C: addi    r5, r30, 107
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(107);

label_805CC020:
    // 805CC020: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC024:
    // 805CC024: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC028:
    // 805CC028: bl      0x8000D074
    {
            ctx->lr = 0x805CC02Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC02C:
    ctx->downcount -= 3;
    // 805CC02C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC030:
    // 805CC030: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC034:
    // 805CC034: bl      0x8026F970
    {
            ctx->lr = 0x805CC038u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC038:
    ctx->downcount -= 4;
    // 805CC038: add   r5, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CC03C:
    // 805CC03C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC040:
    ctx->pc = 0x805CC040u;
    // 805CC040: lwz     r3, 272(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CC044:
    // 805CC044: bl      0x8027CC74
    {
            ctx->lr = 0x805CC048u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_805CC048:
    ctx->downcount -= 4;
    // 805CC048: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_805CC04C:
    // 805CC04C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_805CC050:
    // 805CC050: cmpwi   r29, 4
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

label_805CC054:
    // 805CC054: bc    12, 0, 0x805CC014
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC014u;
                return;
            }
            goto label_805CC014;
        }
    }

label_805CC058:
    ctx->pc = 0x805CC058u;
    ctx->downcount -= 16;
    // 805CC058: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC05C:
    ctx->pc = 0x805CC05Cu;
    // 805CC05C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC060:
    ctx->pc = 0x805CC060u;
    // 805CC060: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC064:
    // 805CC064: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_805CC068:
    ctx->pc = 0x805CC068u;
    // 805CC068: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC06C:
    ctx->pc = 0x805CC06Cu;
    ctx->downcount -= 22;
    // 805CC06C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC070:
    ctx->pc = 0x805CC070u;
    // 805CC070: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC074:
    ctx->pc = 0x805CC074u;
    // 805CC074: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC078:
    ctx->pc = 0x805CC078u;
    // 805CC078: stmw     r25, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC07C:
    // 805CC07C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC080:
    // 805CC080: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC084:
    // 805CC084: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CC088:
    // 805CC088: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CC08C:
    // 805CC08C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC090:
    // 805CC090: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CC094:
    // 805CC094: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CC098:
    // 805CC098: bl      0x8026FEF0
    {
            ctx->lr = 0x805CC09Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CC09C:
    ctx->downcount -= 3;
    // 805CC09C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC0A0:
    // 805CC0A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC0A4:
    // 805CC0A4: bl      0x8026F6AC
    {
            ctx->lr = 0x805CC0A8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CC0A8:
    ctx->downcount -= 1;
    // 805CC0A8: bl      0x8025EC94
    {
            ctx->lr = 0x805CC0ACu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CC0AC:
    ctx->downcount -= 4;
    // 805CC0AC: lis     r26, -32657
    ctx->gpr[26] = ((u32)(s32)(-32657) << 16);

label_805CC0B0:
    // 805CC0B0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_805CC0B4:
    // 805CC0B4: addi    r26, r26, -26776
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(-26776);

label_805CC0B8:
    // 805CC0B8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_805CC0BC:
    ctx->pc = 0x805CC0BCu;
    ctx->downcount -= 3;
    // 805CC0BC: lwzx    r4, r26, r27
    {
        u32 ea = ctx->gpr[26] + ctx->gpr[27];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CC0C0:
    // 805CC0C0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC0C4:
    // 805CC0C4: bl      0x8026F970
    {
            ctx->lr = 0x805CC0C8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC0C8:
    ctx->downcount -= 2;
    // 805CC0C8: cmpw    r25, r29
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC0CC:
    // 805CC0CC: bc    4, 2, 0x805CC0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC0E4;
        }
    }

label_805CC0D0:
    ctx->pc = 0x805CC0D0u;
    ctx->downcount -= 5;
    // 805CC0D0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CC0D4:
    // 805CC0D4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CC0D8:
    // 805CC0D8: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_805CC0DC:
    ctx->pc = 0x805CC0DCu;
    // 805CC0DC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC0E0:
    // 805CC0E0: b       0x805CC0F0
    {
            goto label_805CC0F0;
    }

label_805CC0E4:
    ctx->pc = 0x805CC0E4u;
    ctx->downcount -= 3;
    // 805CC0E4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CC0E8:
    // 805CC0E8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CC0EC:
    ctx->pc = 0x805CC0ECu;
    // 805CC0EC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC0F0:
    ctx->downcount -= 4;
    // 805CC0F0: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_805CC0F4:
    // 805CC0F4: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_805CC0F8:
    // 805CC0F8: cmpwi   r25, 4
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC0FC:
    // 805CC0FC: bc    12, 0, 0x805CC0BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC0BCu;
                return;
            }
            goto label_805CC0BC;
        }
    }

label_805CC100:
    ctx->downcount -= 3;
    // 805CC100: lis     r27, -32663
    ctx->gpr[27] = ((u32)(s32)(-32663) << 16);

label_805CC104:
    // 805CC104: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_805CC108:
    // 805CC108: addi    r27, r27, -27632
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-27632);

label_805CC10C:
    ctx->downcount -= 6;
    // 805CC10C: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_805CC110:
    // 805CC110: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC114:
    // 805CC114: addi    r5, r27, 122
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(122);

label_805CC118:
    // 805CC118: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC11C:
    // 805CC11C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC120:
    // 805CC120: bl      0x8000D074
    {
            ctx->lr = 0x805CC124u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC124:
    ctx->downcount -= 3;
    // 805CC124: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC128:
    // 805CC128: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC12C:
    // 805CC12C: bl      0x8026F970
    {
            ctx->lr = 0x805CC130u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC130:
    ctx->downcount -= 10;
    // 805CC130: addi    r0, r25, 1
    ctx->gpr[0] = ctx->gpr[25] + (u32)(s32)(1);

label_805CC134:
    // 805CC134: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_805CC138:
    // 805CC138: subf   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_805CC13C:
    ctx->pc = 0x805CC13Cu;
    // 805CC13C: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CC140:
    // 805CC140: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CC144:
    // 805CC144: cmpwi   r25, 2
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC148:
    // 805CC148: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CC14C:
    // 805CC14C: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_805CC150:
    ctx->pc = 0x805CC150u;
    // 805CC150: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC154:
    // 805CC154: bc    12, 0, 0x805CC10C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC10Cu;
                return;
            }
            goto label_805CC10C;
        }
    }

label_805CC158:
    ctx->downcount -= 7;
    // 805CC158: lis     r5, -32663
    ctx->gpr[5] = ((u32)(s32)(-32663) << 16);

label_805CC15C:
    // 805CC15C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC160:
    // 805CC160: addi    r5, r5, -27632
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-27632);

label_805CC164:
    // 805CC164: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC168:
    // 805CC168: addi    r5, r5, 139
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(139);

label_805CC16C:
    // 805CC16C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC170:
    // 805CC170: bl      0x8000D074
    {
            ctx->lr = 0x805CC174u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC174:
    ctx->downcount -= 3;
    // 805CC174: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CC178:
    // 805CC178: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC17C:
    // 805CC17C: bl      0x8026F970
    {
            ctx->lr = 0x805CC180u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC180:
    ctx->pc = 0x805CC180u;
    ctx->downcount -= 12;
    // 805CC180: lbz     r6, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_805CC184:
    // 805CC184: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CC188:
    // 805CC188: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CC18C:
    // 805CC18C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC190:
    // 805CC190: rlwinm r6, r6, 0, 24, 30
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 0u) & 0x000000FEu;
    }

label_805CC194:
    ctx->pc = 0x805CC194u;
    // 805CC194: stb     r6, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_805CC198:
    // 805CC198: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_805CC19C:
    ctx->pc = 0x805CC19Cu;
    // 805CC19C: stw     r31, 256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC1A0:
    ctx->pc = 0x805CC1A0u;
    // 805CC1A0: stw     r29, 264(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_805CC1A4:
    ctx->pc = 0x805CC1A4u;
    // 805CC1A4: stb     r5, 260(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_805CC1A8:
    ctx->pc = 0x805CC1A8u;
    // 805CC1A8: stb     r0, 268(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(268);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC1AC:
    // 805CC1AC: bl      0x803457B8
    {
            ctx->lr = 0x805CC1B0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CC1B0:
    ctx->pc = 0x805CC1B0u;
    ctx->downcount -= 4;
    // 805CC1B0: lwz     r3, 264(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CC1B4:
    // 805CC1B4: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_805CC1B8:
    // 805CC1B8: cmplwi  r0, 0x0001
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

label_805CC1BC:
    // 805CC1BC: bc    4, 1, 0x805CC1EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC1EC;
        }
    }

label_805CC1C0:
    ctx->downcount -= 2;
    // 805CC1C0: cmpwi   r3, 0
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

label_805CC1C4:
    // 805CC1C4: bc    12, 2, 0x805CC1D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC1D4;
        }
    }

label_805CC1C8:
    ctx->downcount -= 2;
    // 805CC1C8: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC1CC:
    // 805CC1CC: bc    12, 2, 0x805CC1E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC1E0;
        }
    }

label_805CC1D0:
    ctx->downcount -= 1;
    // 805CC1D0: b       0x805CC1F4
    {
            goto label_805CC1F4;
    }

label_805CC1D4:
    ctx->downcount -= 2;
    // 805CC1D4: li      r3, 428
    ctx->gpr[3] = (u32)(s32)(428);

label_805CC1D8:
    // 805CC1D8: bl      0x802B73BC
    {
            ctx->lr = 0x805CC1DCu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CC1DC:
    ctx->downcount -= 1;
    // 805CC1DC: b       0x805CC1F4
    {
            goto label_805CC1F4;
    }

label_805CC1E0:
    ctx->downcount -= 2;
    // 805CC1E0: li      r3, 429
    ctx->gpr[3] = (u32)(s32)(429);

label_805CC1E4:
    // 805CC1E4: bl      0x802B73BC
    {
            ctx->lr = 0x805CC1E8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CC1E8:
    ctx->downcount -= 1;
    // 805CC1E8: b       0x805CC1F4
    {
            goto label_805CC1F4;
    }

label_805CC1EC:
    ctx->downcount -= 2;
    // 805CC1EC: li      r3, 430
    ctx->gpr[3] = (u32)(s32)(430);

label_805CC1F0:
    // 805CC1F0: bl      0x802B73BC
    {
            ctx->lr = 0x805CC1F4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CC1F4:
    ctx->downcount -= 2;
    // 805CC1F4: cmpwi   r30, 1
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

label_805CC1F8:
    // 805CC1F8: bc    12, 2, 0x805CC208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC208;
        }
    }

label_805CC1FC:
    ctx->downcount -= 2;
    // 805CC1FC: cmpwi   r30, 2
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

label_805CC200:
    // 805CC200: bc    12, 2, 0x805CC214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC214;
        }
    }

label_805CC204:
    ctx->downcount -= 1;
    // 805CC204: b       0x805CC21C
    {
            goto label_805CC21C;
    }

label_805CC208:
    ctx->downcount -= 2;
    // 805CC208: li      r3, 443
    ctx->gpr[3] = (u32)(s32)(443);

label_805CC20C:
    // 805CC20C: bl      0x802B73BC
    {
            ctx->lr = 0x805CC210u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CC210:
    ctx->downcount -= 1;
    // 805CC210: b       0x805CC21C
    {
            goto label_805CC21C;
    }

label_805CC214:
    ctx->downcount -= 2;
    // 805CC214: li      r3, 444
    ctx->gpr[3] = (u32)(s32)(444);

label_805CC218:
    // 805CC218: bl      0x802B73BC
    {
            ctx->lr = 0x805CC21Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CC21C:
    ctx->pc = 0x805CC21Cu;
    ctx->downcount -= 16;
    // 805CC21C: lmw     r25, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC220:
    ctx->pc = 0x805CC220u;
    // 805CC220: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC224:
    ctx->pc = 0x805CC224u;
    // 805CC224: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC228:
    // 805CC228: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_805CC22C:
    ctx->pc = 0x805CC22Cu;
    // 805CC22C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC230:
    ctx->pc = 0x805CC230u;
    ctx->downcount -= 22;
    // 805CC230: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC234:
    ctx->pc = 0x805CC234u;
    // 805CC234: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC238:
    ctx->pc = 0x805CC238u;
    // 805CC238: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC23C:
    ctx->pc = 0x805CC23Cu;
    // 805CC23C: stmw     r21, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        for (u32 r = 21; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC240:
    // 805CC240: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC244:
    // 805CC244: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CC248:
    // 805CC248: or   r28, r6, r6
    {
        ctx->gpr[28] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CC24C:
    // 805CC24C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC250:
    // 805CC250: or   r29, r7, r7
    {
        ctx->gpr[29] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CC254:
    // 805CC254: or   r6, r8, r8
    {
        ctx->gpr[6] = ctx->gpr[8] | ctx->gpr[8];
    }

label_805CC258:
    // 805CC258: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CC25C:
    // 805CC25C: bl      0x805CC06C
    {
            ctx->lr = 0x805CC260u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC06Cu;
                return;
            }
            goto label_805CC06C;
    }

label_805CC260:
    ctx->downcount -= 7;
    // 805CC260: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_805CC264:
    // 805CC264: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC268:
    // 805CC268: addi    r23, r4, -27632
    ctx->gpr[23] = ctx->gpr[4] + (u32)(s32)(-27632);

label_805CC26C:
    // 805CC26C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC270:
    // 805CC270: addi    r5, r23, 139
    ctx->gpr[5] = ctx->gpr[23] + (u32)(s32)(139);

label_805CC274:
    // 805CC274: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC278:
    // 805CC278: bl      0x8000D074
    {
            ctx->lr = 0x805CC27Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC27C:
    ctx->downcount -= 3;
    // 805CC27C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC280:
    // 805CC280: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC284:
    // 805CC284: bl      0x8026F970
    {
            ctx->lr = 0x805CC288u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC288:
    ctx->pc = 0x805CC288u;
    ctx->downcount -= 6;
    // 805CC288: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CC28C:
    // 805CC28C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CC290:
    // 805CC290: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_805CC294:
    // 805CC294: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CC298:
    // 805CC298: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_805CC29C:
    ctx->pc = 0x805CC29Cu;
    // 805CC29C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC2A0:
    ctx->downcount -= 5;
    // 805CC2A0: rlwinm r25, r31, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_805CC2A4:
    // 805CC2A4: li      r22, 2
    ctx->gpr[22] = (u32)(s32)(2);

label_805CC2A8:
    // 805CC2A8: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_805CC2AC:
    // 805CC2AC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_805CC2B0:
    // 805CC2B0: b       0x805CC2E8
    {
            goto label_805CC2E8;
    }

label_805CC2B4:
    ctx->downcount -= 4;
    // 805CC2B4: add   r4, r26, r24
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CC2B8:
    ctx->pc = 0x805CC2B8u;
    // 805CC2B8: lwz     r0, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC2BC:
    // 805CC2BC: cmpw    r30, r0
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

label_805CC2C0:
    // 805CC2C0: bc    4, 2, 0x805CC2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC2E0;
        }
    }

label_805CC2C4:
    ctx->downcount -= 7;
    // 805CC2C4: add   r3, r26, r25
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CC2C8:
    ctx->pc = 0x805CC2C8u;
    // 805CC2C8: lwz     r4, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CC2CC:
    ctx->pc = 0x805CC2CCu;
    // 805CC2CC: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CC2D0:
    // 805CC2D0: addi    r22, r22, -1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(-1);

label_805CC2D4:
    // 805CC2D4: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_805CC2D8:
    // 805CC2D8: addi    r25, r25, 4
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(4);

label_805CC2DC:
    // 805CC2DC: bl      0x8027CB94
    {
            ctx->lr = 0x805CC2E0u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_805CC2E0:
    ctx->downcount -= 2;
    // 805CC2E0: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_805CC2E4:
    // 805CC2E4: addi    r24, r24, 8
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(8);

label_805CC2E8:
    ctx->downcount -= 2;
    // 805CC2E8: cmpw    r21, r27
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC2EC:
    // 805CC2EC: bc    12, 0, 0x805CC2B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC2B4u;
                return;
            }
            goto label_805CC2B4;
        }
    }

label_805CC2F0:
    ctx->downcount -= 6;
    // 805CC2F0: cmpwi   r30, 0
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

label_805CC2F4:
    // 805CC2F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC2F8:
    // 805CC2F8: addi    r5, r23, 152
    ctx->gpr[5] = ctx->gpr[23] + (u32)(s32)(152);

label_805CC2FC:
    // 805CC2FC: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC300:
    // 805CC300: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_805CC304:
    // 805CC304: bc    4, 2, 0x805CC30C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC30C;
        }
    }

label_805CC308:
    ctx->downcount -= 1;
    // 805CC308: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CC30C:
    ctx->downcount -= 2;
    // 805CC30C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC310:
    // 805CC310: bl      0x8000D074
    {
            ctx->lr = 0x805CC314u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC314:
    ctx->downcount -= 3;
    // 805CC314: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC318:
    // 805CC318: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC31C:
    // 805CC31C: bl      0x8026F970
    {
            ctx->lr = 0x805CC320u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC320:
    ctx->pc = 0x805CC320u;
    ctx->downcount -= 7;
    // 805CC320: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CC324:
    // 805CC324: cntlzw r0, r22
    {
        u32 v = ctx->gpr[22];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CC328:
    // 805CC328: cmpwi   r22, 0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC32C:
    // 805CC32C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CC330:
    // 805CC330: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_805CC334:
    ctx->pc = 0x805CC334u;
    // 805CC334: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC338:
    // 805CC338: bc    12, 2, 0x805CC340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC340;
        }
    }

label_805CC33C:
    ctx->downcount -= 1;
    // 805CC33C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_805CC340:
    ctx->downcount -= 3;
    // 805CC340: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_805CC344:
    // 805CC344: cmpwi   r30, 2
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

label_805CC348:
    // 805CC348: bc    12, 0, 0x805CC2A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC2A0u;
                return;
            }
            goto label_805CC2A0;
        }
    }

label_805CC34C:
    ctx->downcount -= 5;
    // 805CC34C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CC350:
    // 805CC350: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_805CC354:
    // 805CC354: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_805CC358:
    // 805CC358: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CC35C:
    // 805CC35C: bl      0x8034E00C
    {
            ctx->lr = 0x805CC360u;
            ctx->pc = 0x8034E00Cu;
            return;
    }

label_805CC360:
    ctx->downcount -= 5;
    // 805CC360: lis     r24, -32663
    ctx->gpr[24] = ((u32)(s32)(-32663) << 16);

label_805CC364:
    // 805CC364: li      r21, 0
    ctx->gpr[21] = (u32)(s32)(0);

label_805CC368:
    // 805CC368: addi    r24, r24, -27632
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(-27632);

label_805CC36C:
    // 805CC36C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_805CC370:
    // 805CC370: addi    r25, r13, -19232
    ctx->gpr[25] = ctx->gpr[13] + (u32)(s32)(-19232);

label_805CC374:
    ctx->downcount -= 9;
    // 805CC374: subf   r0, r28, r21
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[21];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_805CC378:
    ctx->pc = 0x805CC378u;
    // 805CC378: lwzx    r6, r25, r27
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[27];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CC37C:
    // 805CC37C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_805CC380:
    // 805CC380: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC384:
    // 805CC384: rlwinm r22, r0, 27, 5, 31
    {
        ctx->gpr[22] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_805CC388:
    // 805CC388: addi    r5, r24, 167
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(167);

label_805CC38C:
    // 805CC38C: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC390:
    // 805CC390: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC394:
    // 805CC394: bl      0x8000D074
    {
            ctx->lr = 0x805CC398u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC398:
    ctx->downcount -= 3;
    // 805CC398: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC39C:
    // 805CC39C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC3A0:
    // 805CC3A0: bl      0x8026F970
    {
            ctx->lr = 0x805CC3A4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CC3A4:
    ctx->pc = 0x805CC3A4u;
    ctx->downcount -= 6;
    // 805CC3A4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CC3A8:
    // 805CC3A8: cmpwi   r22, 0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC3AC:
    // 805CC3AC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_805CC3B0:
    // 805CC3B0: or   r0, r0, r22
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[22];
    }

label_805CC3B4:
    ctx->pc = 0x805CC3B4u;
    // 805CC3B4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CC3B8:
    // 805CC3B8: bc    12, 2, 0x805CC43C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC43C;
        }
    }

label_805CC3BC:
    ctx->pc = 0x805CC3BCu;
    ctx->downcount -= 6;
    // 805CC3BC: lwzx    r6, r25, r27
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[27];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CC3C0:
    // 805CC3C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC3C4:
    // 805CC3C4: addi    r5, r24, 180
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(180);

label_805CC3C8:
    // 805CC3C8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC3CC:
    // 805CC3CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC3D0:
    // 805CC3D0: bl      0x8000D074
    {
            ctx->lr = 0x805CC3D4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC3D4:
    ctx->downcount -= 3;
    // 805CC3D4: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC3D8:
    // 805CC3D8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC3DC:
    // 805CC3DC: bl      0x8026F968
    {
            ctx->lr = 0x805CC3E0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CC3E0:
    ctx->downcount -= 7;
    // 805CC3E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC3E4:
    // 805CC3E4: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC3E8:
    // 805CC3E8: addi    r7, r1, 72
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(72);

label_805CC3EC:
    // 805CC3EC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_805CC3F0:
    // 805CC3F0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CC3F4:
    // 805CC3F4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC3F8:
    // 805CC3F8: bl      0x8026F8C0
    {
            ctx->lr = 0x805CC3FCu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_805CC3FC:
    ctx->pc = 0x805CC3FCu;
    ctx->downcount -= 6;
    // 805CC3FC: lwzx    r6, r25, r27
    {
        u32 ea = ctx->gpr[25] + ctx->gpr[27];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CC400:
    // 805CC400: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC404:
    // 805CC404: addi    r5, r24, 193
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(193);

label_805CC408:
    // 805CC408: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_805CC40C:
    // 805CC40C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC410:
    // 805CC410: bl      0x8000D074
    {
            ctx->lr = 0x805CC414u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_805CC414:
    ctx->downcount -= 3;
    // 805CC414: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC418:
    // 805CC418: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_805CC41C:
    // 805CC41C: bl      0x8026F968
    {
            ctx->lr = 0x805CC420u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CC420:
    ctx->downcount -= 7;
    // 805CC420: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC424:
    // 805CC424: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC428:
    // 805CC428: addi    r7, r1, 72
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(72);

label_805CC42C:
    // 805CC42C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_805CC430:
    // 805CC430: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CC434:
    // 805CC434: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CC438:
    // 805CC438: bl      0x8026F8C0
    {
            ctx->lr = 0x805CC43Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_805CC43C:
    ctx->downcount -= 4;
    // 805CC43C: addi    r21, r21, 1
    ctx->gpr[21] = ctx->gpr[21] + (u32)(s32)(1);

label_805CC440:
    // 805CC440: addi    r27, r27, 4
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(4);

label_805CC444:
    // 805CC444: cmplwi  r21, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[21]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC448:
    // 805CC448: bc    12, 0, 0x805CC374
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC374u;
                return;
            }
            goto label_805CC374;
        }
    }

label_805CC44C:
    ctx->pc = 0x805CC44Cu;
    ctx->downcount -= 16;
    // 805CC44C: lmw     r21, 212(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(212);
        for (u32 r = 21; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC450:
    ctx->pc = 0x805CC450u;
    // 805CC450: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC454:
    ctx->pc = 0x805CC454u;
    // 805CC454: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC458:
    // 805CC458: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_805CC45C:
    ctx->pc = 0x805CC45Cu;
    // 805CC45C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC460:
    ctx->downcount -= 1;
    // 805CC460: b       0x805CC06C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC06Cu;
                return;
            }
            goto label_805CC06C;
    }

label_805CC464:
    ctx->pc = 0x805CC464u;
    ctx->downcount -= 22;
    // 805CC464: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC468:
    ctx->pc = 0x805CC468u;
    // 805CC468: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC46C:
    // 805CC46C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805CC470:
    // 805CC470: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CC474:
    ctx->pc = 0x805CC474u;
    // 805CC474: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC478:
    // 805CC478: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CC47C:
    // 805CC47C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CC480:
    ctx->pc = 0x805CC480u;
    // 805CC480: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC484:
    // 805CC484: lis     r30, -32657
    ctx->gpr[30] = ((u32)(s32)(-32657) << 16);

label_805CC488:
    // 805CC488: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC48C:
    // 805CC48C: addi    r30, r30, -26776
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-26776);

label_805CC490:
    // 805CC490: bl      0x805CC8F8
    {
            ctx->lr = 0x805CC494u;
            goto label_805CC8F8;
    }

label_805CC494:
    ctx->downcount -= 15;
    // 805CC494: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CC498:
    // 805CC498: lis     r29, -32667
    ctx->gpr[29] = ((u32)(s32)(-32667) << 16);

label_805CC49C:
    // 805CC49C: addi    r5, r5, -26712
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26712);

label_805CC4A0:
    ctx->pc = 0x805CC4A0u;
    // 805CC4A0: stw     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CC4A4:
    // 805CC4A4: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_805CC4A8:
    // 805CC4A8: addi    r3, r27, 100
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(100);

label_805CC4AC:
    // 805CC4AC: addi    r7, r5, 120
    ctx->gpr[7] = ctx->gpr[5] + (u32)(s32)(120);

label_805CC4B0:
    // 805CC4B0: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_805CC4B4:
    ctx->pc = 0x805CC4B4u;
    // 805CC4B4: stw     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CC4B8:
    // 805CC4B8: addi    r4, r29, 22144
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22144);

label_805CC4BC:
    // 805CC4BC: addi    r5, r30, 16
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(16);

label_805CC4C0:
    // 805CC4C0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CC4C4:
    ctx->pc = 0x805CC4C4u;
    // 805CC4C4: stw     r7, 148(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_805CC4C8:
    ctx->pc = 0x805CC4C8u;
    // 805CC4C8: stw     r0, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC4CC:
    // 805CC4CC: bl      0x805CC66C
    {
            ctx->lr = 0x805CC4D0u;
            goto label_805CC66C;
    }

label_805CC4D0:
    ctx->downcount -= 5;
    // 805CC4D0: addi    r3, r27, 100
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(100);

label_805CC4D4:
    // 805CC4D4: addi    r4, r29, 22144
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22144);

label_805CC4D8:
    // 805CC4D8: addi    r5, r30, 28
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(28);

label_805CC4DC:
    // 805CC4DC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CC4E0:
    // 805CC4E0: bl      0x805CC66C
    {
            ctx->lr = 0x805CC4E4u;
            goto label_805CC66C;
    }

label_805CC4E4:
    ctx->downcount -= 5;
    // 805CC4E4: addi    r3, r27, 100
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(100);

label_805CC4E8:
    // 805CC4E8: addi    r4, r30, 40
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(40);

label_805CC4EC:
    // 805CC4EC: addi    r5, r30, 52
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(52);

label_805CC4F0:
    // 805CC4F0: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_805CC4F4:
    // 805CC4F4: bl      0x805CC66C
    {
            ctx->lr = 0x805CC4F8u;
            goto label_805CC66C;
    }

label_805CC4F8:
    ctx->downcount -= 8;
    // 805CC4F8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805CC4FC:
    ctx->pc = 0x805CC4FCu;
    // 805CC4FC: stw     r29, 256(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_805CC500:
    // 805CC500: or   r30, r29, r29
    {
        ctx->gpr[30] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CC504:
    // 805CC504: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_805CC508:
    ctx->pc = 0x805CC508u;
    // 805CC508: stb     r29, 260(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_805CC50C:
    // 805CC50C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CC510:
    ctx->pc = 0x805CC510u;
    // 805CC510: stw     r29, 264(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(264);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_805CC514:
    ctx->pc = 0x805CC514u;
    // 805CC514: stb     r29, 268(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(268);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_805CC518:
    ctx->downcount -= 5;
    // 805CC518: add   r4, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CC51C:
    // 805CC51C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805CC520:
    ctx->pc = 0x805CC520u;
    // 805CC520: stw     r29, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_805CC524:
    ctx->pc = 0x805CC524u;
    // 805CC524: stw     r29, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_805CC528:
    // 805CC528: bl      0x8027CCC0
    {
            ctx->lr = 0x805CC52Cu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_805CC52C:
    ctx->downcount -= 7;
    // 805CC52C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_805CC530:
    // 805CC530: add   r4, r27, r30
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_805CC534:
    // 805CC534: cmpwi   r28, 4
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CC538:
    ctx->pc = 0x805CC538u;
    // 805CC538: stw     r3, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CC53C:
    // 805CC53C: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_805CC540:
    // 805CC540: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_805CC544:
    // 805CC544: bc    12, 0, 0x805CC518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC518u;
                return;
            }
            goto label_805CC518;
        }
    }

label_805CC548:
    ctx->downcount -= 17;
    // 805CC548: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CC54C:
    ctx->pc = 0x805CC54Cu;
    // 805CC54C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC550:
    ctx->pc = 0x805CC550u;
    // 805CC550: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC554:
    ctx->pc = 0x805CC554u;
    // 805CC554: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC558:
    // 805CC558: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CC55C:
    ctx->pc = 0x805CC55Cu;
    // 805CC55C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC560:
    ctx->pc = 0x805CC560u;
    ctx->downcount -= 18;
    // 805CC560: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC564:
    ctx->pc = 0x805CC564u;
    // 805CC564: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC568:
    // 805CC568: cmpwi   r3, 0
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

label_805CC56C:
    ctx->pc = 0x805CC56Cu;
    // 805CC56C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC570:
    ctx->pc = 0x805CC570u;
    // 805CC570: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC574:
    // 805CC574: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC578:
    // 805CC578: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC57C:
    // 805CC57C: bc    12, 2, 0x805CC5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC5AC;
        }
    }

label_805CC580:
    ctx->downcount -= 1;
    // 805CC580: bc    12, 2, 0x805CC59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC59C;
        }
    }

label_805CC584:
    ctx->downcount -= 3;
    // 805CC584: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805CC588:
    // 805CC588: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CC58C:
    // 805CC58C: bl      0x805CC62C
    {
            ctx->lr = 0x805CC590u;
            goto label_805CC62C;
    }

label_805CC590:
    ctx->downcount -= 3;
    // 805CC590: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC594:
    // 805CC594: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC598:
    // 805CC598: bl      0x801ED118
    {
            ctx->lr = 0x805CC59Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_805CC59C:
    ctx->downcount -= 2;
    // 805CC59C: cmpwi   r31, 0
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

label_805CC5A0:
    // 805CC5A0: bc    4, 1, 0x805CC5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC5AC;
        }
    }

label_805CC5A4:
    ctx->downcount -= 2;
    // 805CC5A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC5A8:
    // 805CC5A8: bl      0x801C1C90
    {
            ctx->lr = 0x805CC5ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CC5AC:
    ctx->downcount -= 17;
    // 805CC5AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC5B0:
    ctx->pc = 0x805CC5B0u;
    // 805CC5B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC5B4:
    ctx->pc = 0x805CC5B4u;
    // 805CC5B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC5B8:
    ctx->pc = 0x805CC5B8u;
    // 805CC5B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC5BC:
    // 805CC5BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC5C0:
    ctx->pc = 0x805CC5C0u;
    // 805CC5C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC5C4:
    ctx->pc = 0x805CC5C4u;
    ctx->downcount -= 18;
    // 805CC5C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC5C8:
    ctx->pc = 0x805CC5C8u;
    // 805CC5C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC5CC:
    // 805CC5CC: cmpwi   r3, 0
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

label_805CC5D0:
    ctx->pc = 0x805CC5D0u;
    // 805CC5D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC5D4:
    ctx->pc = 0x805CC5D4u;
    // 805CC5D4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC5D8:
    // 805CC5D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC5DC:
    // 805CC5DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC5E0:
    // 805CC5E0: bc    12, 2, 0x805CC614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC614;
        }
    }

label_805CC5E4:
    ctx->downcount -= 1;
    // 805CC5E4: bc    12, 2, 0x805CC604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC604;
        }
    }

label_805CC5E8:
    ctx->downcount -= 1;
    // 805CC5E8: bc    12, 2, 0x805CC604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC604;
        }
    }

label_805CC5EC:
    ctx->downcount -= 3;
    // 805CC5EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC5F0:
    // 805CC5F0: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_805CC5F4:
    // 805CC5F4: bl      0x801ED098
    {
            ctx->lr = 0x805CC5F8u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_805CC5F8:
    ctx->downcount -= 3;
    // 805CC5F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC5FC:
    // 805CC5FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC600:
    // 805CC600: bl      0x801ED058
    {
            ctx->lr = 0x805CC604u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_805CC604:
    ctx->downcount -= 2;
    // 805CC604: cmpwi   r31, 0
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

label_805CC608:
    // 805CC608: bc    4, 1, 0x805CC614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC614;
        }
    }

label_805CC60C:
    ctx->downcount -= 2;
    // 805CC60C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC610:
    // 805CC610: bl      0x801C1C90
    {
            ctx->lr = 0x805CC614u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CC614:
    ctx->downcount -= 17;
    // 805CC614: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CC618:
    ctx->pc = 0x805CC618u;
    // 805CC618: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC61C:
    ctx->pc = 0x805CC61Cu;
    // 805CC61C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC620:
    ctx->pc = 0x805CC620u;
    // 805CC620: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC624:
    // 805CC624: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC628:
    ctx->pc = 0x805CC628u;
    // 805CC628: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC62C:
    ctx->pc = 0x805CC62Cu;
    ctx->downcount -= 7;
    // 805CC62C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC630:
    ctx->pc = 0x805CC630u;
    // 805CC630: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC634:
    // 805CC634: cmpwi   r3, 0
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

label_805CC638:
    ctx->pc = 0x805CC638u;
    // 805CC638: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC63C:
    ctx->pc = 0x805CC63Cu;
    // 805CC63C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC640:
    // 805CC640: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC644:
    // 805CC644: bc    12, 2, 0x805CC654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC654;
        }
    }

label_805CC648:
    ctx->downcount -= 2;
    // 805CC648: cmpwi   r4, 0
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

label_805CC64C:
    // 805CC64C: bc    4, 1, 0x805CC654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC654;
        }
    }

label_805CC650:
    ctx->downcount -= 1;
    // 805CC650: bl      0x801C1C90
    {
            ctx->lr = 0x805CC654u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CC654:
    ctx->downcount -= 7;
    // 805CC654: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC658:
    ctx->pc = 0x805CC658u;
    // 805CC658: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC65C:
    ctx->pc = 0x805CC65Cu;
    // 805CC65C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC660:
    ctx->pc = 0x805CC660u;
    // 805CC660: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC664:
    // 805CC664: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC668:
    ctx->pc = 0x805CC668u;
    // 805CC668: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC66C:
    ctx->pc = 0x805CC66Cu;
    ctx->downcount -= 20;
    // 805CC66C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC670:
    ctx->pc = 0x805CC670u;
    // 805CC670: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC674:
    ctx->pc = 0x805CC674u;
    // 805CC674: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC678:
    ctx->pc = 0x805CC678u;
    // 805CC678: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC67C:
    // 805CC67C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CC680:
    // 805CC680: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC684:
    // 805CC684: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC688:
    // 805CC688: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CC68C:
    // 805CC68C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC690:
    // 805CC690: bl      0x803456D0
    {
            ctx->lr = 0x805CC694u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_805CC694:
    ctx->downcount -= 34;
    // 805CC694: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805CC698:
    ctx->pc = 0x805CC698u;
    // 805CC698: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC69C:
    ctx->pc = 0x805CC69Cu;
    // 805CC69C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CC6A0:
    ctx->pc = 0x805CC6A0u;
    // 805CC6A0: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CC6A4:
    // 805CC6A4: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CC6A8:
    ctx->pc = 0x805CC6A8u;
    // 805CC6A8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC6AC:
    ctx->pc = 0x805CC6ACu;
    // 805CC6AC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CC6B0:
    ctx->pc = 0x805CC6B0u;
    // 805CC6B0: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CC6B4:
    ctx->pc = 0x805CC6B4u;
    // 805CC6B4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CC6B8:
    ctx->pc = 0x805CC6B8u;
    // 805CC6B8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CC6BC:
    ctx->pc = 0x805CC6BCu;
    // 805CC6BC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC6C0:
    ctx->pc = 0x805CC6C0u;
    // 805CC6C0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC6C4:
    ctx->pc = 0x805CC6C4u;
    // 805CC6C4: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CC6C8:
    ctx->pc = 0x805CC6C8u;
    // 805CC6C8: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_805CC6CC:
    ctx->pc = 0x805CC6CCu;
    // 805CC6CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CC6D0:
    ctx->pc = 0x805CC6D0u;
    // 805CC6D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC6D4:
    ctx->pc = 0x805CC6D4u;
    // 805CC6D4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CC6D8:
    ctx->pc = 0x805CC6D8u;
    // 805CC6D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC6DC:
    ctx->pc = 0x805CC6DCu;
    // 805CC6DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC6E0:
    // 805CC6E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CC6E4:
    ctx->pc = 0x805CC6E4u;
    // 805CC6E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC6E8:
    ctx->downcount -= 2;
    // 805CC6E8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CC6EC:
    ctx->pc = 0x805CC6ECu;
    // 805CC6EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC6F0:
    ctx->downcount -= 2;
    // 805CC6F0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CC6F4:
    ctx->pc = 0x805CC6F4u;
    // 805CC6F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC6F8:
    ctx->pc = 0x805CC6F8u;
    ctx->downcount -= 10;
    // 805CC6F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC6FC:
    ctx->pc = 0x805CC6FCu;
    // 805CC6FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC700:
    ctx->pc = 0x805CC700u;
    // 805CC700: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC704:
    ctx->pc = 0x805CC704u;
    // 805CC704: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC708:
    // 805CC708: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC70C:
    ctx->pc = 0x805CC70Cu;
    // 805CC70C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC710:
    ctx->pc = 0x805CC710u;
    // 805CC710: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC714:
    ctx->pc = 0x805CC714u;
    // 805CC714: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC718:
    ctx->pc = 0x805CC718u;
    // 805CC718: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC71Cu;
            ctx->pc = target;
            return;
        }
    }

label_805CC71C:
    ctx->downcount -= 2;
    // 805CC71C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CC720:
    // 805CC720: bl      0x805CCCB4
    {
            ctx->lr = 0x805CC724u;
            goto label_805CCCB4;
    }

label_805CC724:
    ctx->pc = 0x805CC724u;
    ctx->downcount -= 6;
    // 805CC724: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC728:
    // 805CC728: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC72C:
    ctx->pc = 0x805CC72Cu;
    // 805CC72C: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC730:
    ctx->pc = 0x805CC730u;
    // 805CC730: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC734:
    ctx->pc = 0x805CC734u;
    // 805CC734: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC738u;
            ctx->pc = target;
            return;
        }
    }

label_805CC738:
    ctx->pc = 0x805CC738u;
    ctx->downcount -= 6;
    // 805CC738: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC73C:
    ctx->pc = 0x805CC73Cu;
    // 805CC73C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC740:
    ctx->pc = 0x805CC740u;
    // 805CC740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC744:
    // 805CC744: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC748:
    ctx->pc = 0x805CC748u;
    // 805CC748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC74C:
    ctx->downcount -= 2;
    // 805CC74C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CC750:
    ctx->pc = 0x805CC750u;
    // 805CC750: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC754:
    ctx->downcount -= 2;
    // 805CC754: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CC758:
    ctx->pc = 0x805CC758u;
    // 805CC758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC75C:
    ctx->pc = 0x805CC75Cu;
    ctx->downcount -= 7;
    // 805CC75C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC760:
    ctx->pc = 0x805CC760u;
    // 805CC760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC764:
    ctx->pc = 0x805CC764u;
    // 805CC764: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC768:
    ctx->pc = 0x805CC768u;
    // 805CC768: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC76C:
    // 805CC76C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC770:
    // 805CC770: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CC774:
    // 805CC774: bl      0x8026FF08
    {
            ctx->lr = 0x805CC778u;
            ctx->pc = 0x8026FF08u;
            return;
    }

label_805CC778:
    ctx->downcount -= 2;
    // 805CC778: cmpwi   r3, 0
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

label_805CC77C:
    // 805CC77C: bc    12, 2, 0x805CC7A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CC7A8;
        }
    }

label_805CC780:
    ctx->pc = 0x805CC780u;
    ctx->downcount -= 6;
    // 805CC780: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC784:
    // 805CC784: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC788:
    ctx->pc = 0x805CC788u;
    // 805CC788: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC78C:
    ctx->pc = 0x805CC78Cu;
    // 805CC78C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC790:
    ctx->pc = 0x805CC790u;
    // 805CC790: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC794u;
            ctx->pc = target;
            return;
        }
    }

label_805CC794:
    ctx->pc = 0x805CC794u;
    ctx->downcount -= 6;
    // 805CC794: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC798:
    // 805CC798: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CC79C:
    ctx->pc = 0x805CC79Cu;
    // 805CC79C: lwz     r12, 112(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(112);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC7A0:
    ctx->pc = 0x805CC7A0u;
    // 805CC7A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC7A4:
    ctx->pc = 0x805CC7A4u;
    // 805CC7A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC7A8u;
            ctx->pc = target;
            return;
        }
    }

label_805CC7A8:
    ctx->pc = 0x805CC7A8u;
    ctx->downcount -= 6;
    // 805CC7A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC7AC:
    ctx->pc = 0x805CC7ACu;
    // 805CC7AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC7B0:
    ctx->pc = 0x805CC7B0u;
    // 805CC7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC7B4:
    // 805CC7B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC7B8:
    ctx->pc = 0x805CC7B8u;
    // 805CC7B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC7BC:
    ctx->pc = 0x805CC7BCu;
    ctx->downcount -= 10;
    // 805CC7BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC7C0:
    ctx->pc = 0x805CC7C0u;
    // 805CC7C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC7C4:
    ctx->pc = 0x805CC7C4u;
    // 805CC7C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC7C8:
    ctx->pc = 0x805CC7C8u;
    // 805CC7C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC7CC:
    // 805CC7CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC7D0:
    ctx->pc = 0x805CC7D0u;
    // 805CC7D0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC7D4:
    ctx->pc = 0x805CC7D4u;
    // 805CC7D4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC7D8:
    ctx->pc = 0x805CC7D8u;
    // 805CC7D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC7DC:
    ctx->pc = 0x805CC7DCu;
    // 805CC7DC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC7E0u;
            ctx->pc = target;
            return;
        }
    }

label_805CC7E0:
    ctx->downcount -= 2;
    // 805CC7E0: cmpwi   r3, 0
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

label_805CC7E4:
    // 805CC7E4: bc    4, 2, 0x805CC7F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC7F0;
        }
    }

label_805CC7E8:
    ctx->downcount -= 2;
    // 805CC7E8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CC7EC:
    // 805CC7EC: bl      0x802777A8
    {
            ctx->lr = 0x805CC7F0u;
            ctx->pc = 0x802777A8u;
            return;
    }

label_805CC7F0:
    ctx->pc = 0x805CC7F0u;
    ctx->downcount -= 6;
    // 805CC7F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC7F4:
    ctx->pc = 0x805CC7F4u;
    // 805CC7F4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC7F8:
    ctx->pc = 0x805CC7F8u;
    // 805CC7F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC7FC:
    // 805CC7FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC800:
    ctx->pc = 0x805CC800u;
    // 805CC800: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC804:
    ctx->pc = 0x805CC804u;
    ctx->downcount -= 10;
    // 805CC804: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC808:
    ctx->pc = 0x805CC808u;
    // 805CC808: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC80C:
    ctx->pc = 0x805CC80Cu;
    // 805CC80C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC810:
    ctx->pc = 0x805CC810u;
    // 805CC810: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC814:
    // 805CC814: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC818:
    ctx->pc = 0x805CC818u;
    // 805CC818: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC81C:
    ctx->pc = 0x805CC81Cu;
    // 805CC81C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC820:
    ctx->pc = 0x805CC820u;
    // 805CC820: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC824:
    ctx->pc = 0x805CC824u;
    // 805CC824: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC828u;
            ctx->pc = target;
            return;
        }
    }

label_805CC828:
    ctx->downcount -= 2;
    // 805CC828: cmpwi   r3, 0
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

label_805CC82C:
    // 805CC82C: bc    4, 2, 0x805CC838
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CC838;
        }
    }

label_805CC830:
    ctx->downcount -= 2;
    // 805CC830: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CC834:
    // 805CC834: bl      0x80277808
    {
            ctx->lr = 0x805CC838u;
            ctx->pc = 0x80277808u;
            return;
    }

label_805CC838:
    ctx->pc = 0x805CC838u;
    ctx->downcount -= 6;
    // 805CC838: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC83C:
    ctx->pc = 0x805CC83Cu;
    // 805CC83C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC840:
    ctx->pc = 0x805CC840u;
    // 805CC840: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC844:
    // 805CC844: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC848:
    ctx->pc = 0x805CC848u;
    // 805CC848: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC84C:
    ctx->pc = 0x805CC84Cu;
    ctx->downcount -= 7;
    // 805CC84C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC850:
    ctx->pc = 0x805CC850u;
    // 805CC850: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC854:
    ctx->pc = 0x805CC854u;
    // 805CC854: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC858:
    ctx->pc = 0x805CC858u;
    // 805CC858: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC85C:
    // 805CC85C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC860:
    // 805CC860: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CC864:
    // 805CC864: bl      0x802700EC
    {
            ctx->lr = 0x805CC868u;
            ctx->pc = 0x802700ECu;
            return;
    }

label_805CC868:
    ctx->downcount -= 2;
    // 805CC868: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC86C:
    // 805CC86C: bl      0x802A609C
    {
            ctx->lr = 0x805CC870u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_805CC870:
    ctx->pc = 0x805CC870u;
    ctx->downcount -= 6;
    // 805CC870: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC874:
    ctx->pc = 0x805CC874u;
    // 805CC874: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC878:
    ctx->pc = 0x805CC878u;
    // 805CC878: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC87C:
    // 805CC87C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC880:
    ctx->pc = 0x805CC880u;
    // 805CC880: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC884:
    ctx->pc = 0x805CC884u;
    ctx->downcount -= 9;
    // 805CC884: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC888:
    ctx->pc = 0x805CC888u;
    // 805CC888: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC88C:
    // 805CC88C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CC890:
    ctx->pc = 0x805CC890u;
    // 805CC890: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC894:
    ctx->pc = 0x805CC894u;
    // 805CC894: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CC898:
    // 805CC898: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC89C:
    ctx->pc = 0x805CC89Cu;
    // 805CC89C: lbz     r4, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CC8A0:
    // 805CC8A0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CC8A4:
    // 805CC8A4: bl      0x8027765C
    {
            ctx->lr = 0x805CC8A8u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_805CC8A8:
    ctx->downcount -= 2;
    // 805CC8A8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CC8AC:
    // 805CC8AC: bl      0x802704F8
    {
            ctx->lr = 0x805CC8B0u;
            ctx->pc = 0x802704F8u;
            return;
    }

label_805CC8B0:
    ctx->pc = 0x805CC8B0u;
    ctx->downcount -= 6;
    // 805CC8B0: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC8B4:
    // 805CC8B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC8B8:
    ctx->pc = 0x805CC8B8u;
    // 805CC8B8: lwz     r12, 256(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(256);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC8BC:
    ctx->pc = 0x805CC8BCu;
    // 805CC8BC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC8C0:
    ctx->pc = 0x805CC8C0u;
    // 805CC8C0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC8C4u;
            ctx->pc = target;
            return;
        }
    }

label_805CC8C4:
    ctx->pc = 0x805CC8C4u;
    ctx->downcount -= 3;
    // 805CC8C4: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CC8C8:
    // 805CC8C8: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_805CC8CC:
    // 805CC8CC: bl      0x803457B8
    {
            ctx->lr = 0x805CC8D0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CC8D0:
    ctx->pc = 0x805CC8D0u;
    ctx->downcount -= 6;
    // 805CC8D0: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC8D4:
    // 805CC8D4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CC8D8:
    ctx->pc = 0x805CC8D8u;
    // 805CC8D8: lwz     r12, 108(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(108);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CC8DC:
    ctx->pc = 0x805CC8DCu;
    // 805CC8DC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CC8E0:
    ctx->pc = 0x805CC8E0u;
    // 805CC8E0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CC8E4u;
            ctx->pc = target;
            return;
        }
    }

label_805CC8E4:
    ctx->pc = 0x805CC8E4u;
    ctx->downcount -= 6;
    // 805CC8E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CC8E8:
    ctx->pc = 0x805CC8E8u;
    // 805CC8E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CC8EC:
    ctx->pc = 0x805CC8ECu;
    // 805CC8EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CC8F0:
    // 805CC8F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CC8F4:
    ctx->pc = 0x805CC8F4u;
    // 805CC8F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CC8F8:
    ctx->pc = 0x805CC8F8u;
    ctx->downcount -= 23;
    // 805CC8F8: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CC8FC:
    ctx->pc = 0x805CC8FCu;
    // 805CC8FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CC900:
    ctx->pc = 0x805CC900u;
    // 805CC900: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC904:
    ctx->pc = 0x805CC904u;
    // 805CC904: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CC908:
    // 805CC908: lis     r30, -32657
    ctx->gpr[30] = ((u32)(s32)(-32657) << 16);

label_805CC90C:
    // 805CC90C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CC910:
    // 805CC910: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CC914:
    // 805CC914: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC918:
    // 805CC918: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CC91C:
    // 805CC91C: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CC920:
    // 805CC920: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC924:
    // 805CC924: addi    r30, r30, -26776
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-26776);

label_805CC928:
    // 805CC928: bl      0x802A6748
    {
            ctx->lr = 0x805CC92Cu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_805CC92C:
    ctx->downcount -= 7;
    // 805CC92C: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CC930:
    // 805CC930: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CC934:
    // 805CC934: addi    r4, r4, -26088
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-26088);

label_805CC938:
    ctx->pc = 0x805CC938u;
    // 805CC938: stw     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CC93C:
    // 805CC93C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_805CC940:
    ctx->pc = 0x805CC940u;
    // 805CC940: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC944:
    // 805CC944: bl      0x801ED17C
    {
            ctx->lr = 0x805CC948u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_805CC948:
    ctx->downcount -= 6;
    // 805CC948: add   r5, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CC94C:
    // 805CC94C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CC950:
    // 805CC950: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC954:
    // 805CC954: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CC958:
    // 805CC958: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_805CC95C:
    // 805CC95C: bl      0x805CCB38
    {
            ctx->lr = 0x805CC960u;
            goto label_805CCB38;
    }

label_805CC960:
    ctx->downcount -= 3;
    // 805CC960: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CC964:
    // 805CC964: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CC968:
    // 805CC968: bl      0x802A5D48
    {
            ctx->lr = 0x805CC96Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_805CC96C:
    ctx->downcount -= 6;
    // 805CC96C: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC970:
    // 805CC970: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CC974:
    // 805CC974: addi    r4, r30, 384
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(384);

label_805CC978:
    // 805CC978: addi    r5, r30, 396
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(396);

label_805CC97C:
    // 805CC97C: addi    r6, r30, 408
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(408);

label_805CC980:
    // 805CC980: bl      0x805CCC58
    {
            ctx->lr = 0x805CC984u;
            goto label_805CCC58;
    }

label_805CC984:
    ctx->downcount -= 2;
    // 805CC984: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CC988:
    // 805CC988: bl      0x802A609C
    {
            ctx->lr = 0x805CC98Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_805CC98C:
    ctx->downcount -= 5;
    // 805CC98C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CC990:
    // 805CC990: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CC994:
    // 805CC994: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CC998:
    // 805CC998: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CC99C:
    // 805CC99C: bl      0x8027055C
    {
            ctx->lr = 0x805CC9A0u;
            ctx->pc = 0x8027055Cu;
            return;
    }

label_805CC9A0:
    ctx->downcount -= 14;
    // 805CC9A0: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CC9A4:
    ctx->pc = 0x805CC9A4u;
    // 805CC9A4: stw     r27, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_805CC9A8:
    // 805CC9A8: addi    r5, r5, -26352
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26352);

label_805CC9AC:
    // 805CC9AC: addi    r4, r30, 336
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(336);

label_805CC9B0:
    // 805CC9B0: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_805CC9B4:
    ctx->pc = 0x805CC9B4u;
    // 805CC9B4: stw     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CC9B8:
    // 805CC9B8: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_805CC9BC:
    // 805CC9BC: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_805CC9C0:
    ctx->pc = 0x805CC9C0u;
    // 805CC9C0: stw     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CC9C4:
    // 805CC9C4: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_805CC9C8:
    // 805CC9C8: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CC9CC:
    ctx->pc = 0x805CC9CCu;
    // 805CC9CC: stw     r6, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CC9D0:
    ctx->pc = 0x805CC9D0u;
    // 805CC9D0: stw     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CC9D4:
    // 805CC9D4: bl      0x8000770C
    {
            ctx->lr = 0x805CC9D8u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CC9D8:
    ctx->downcount -= 6;
    // 805CC9D8: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_805CC9DC:
    ctx->pc = 0x805CC9DCu;
    // 805CC9DC: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CC9E0:
    // 805CC9E0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CC9E4:
    // 805CC9E4: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CC9E8:
    // 805CC9E8: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CC9EC:
    // 805CC9EC: bl      0x805CC66C
    {
            ctx->lr = 0x805CC9F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC66Cu;
                return;
            }
            goto label_805CC66C;
    }

label_805CC9F0:
    ctx->downcount -= 4;
    // 805CC9F0: addi    r4, r30, 348
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(348);

label_805CC9F4:
    // 805CC9F4: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_805CC9F8:
    // 805CC9F8: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CC9FC:
    // 805CC9FC: bl      0x8000770C
    {
            ctx->lr = 0x805CCA00u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CCA00:
    ctx->pc = 0x805CCA00u;
    ctx->downcount -= 6;
    // 805CCA00: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CCA04:
    // 805CCA04: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCA08:
    // 805CCA08: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CCA0C:
    // 805CCA0C: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CCA10:
    // 805CCA10: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_805CCA14:
    // 805CCA14: bl      0x805CC66C
    {
            ctx->lr = 0x805CCA18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC66Cu;
                return;
            }
            goto label_805CC66C;
    }

label_805CCA18:
    ctx->downcount -= 4;
    // 805CCA18: addi    r4, r30, 360
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(360);

label_805CCA1C:
    // 805CCA1C: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_805CCA20:
    // 805CCA20: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CCA24:
    // 805CCA24: bl      0x8000770C
    {
            ctx->lr = 0x805CCA28u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CCA28:
    ctx->pc = 0x805CCA28u;
    ctx->downcount -= 6;
    // 805CCA28: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CCA2C:
    // 805CCA2C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCA30:
    // 805CCA30: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CCA34:
    // 805CCA34: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CCA38:
    // 805CCA38: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_805CCA3C:
    // 805CCA3C: bl      0x805CC66C
    {
            ctx->lr = 0x805CCA40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC66Cu;
                return;
            }
            goto label_805CC66C;
    }

label_805CCA40:
    ctx->pc = 0x805CCA40u;
    ctx->downcount -= 6;
    // 805CCA40: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CCA44:
    // 805CCA44: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CCA48:
    // 805CCA48: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CCA4C:
    // 805CCA4C: addi    r5, r30, 372
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(372);

label_805CCA50:
    // 805CCA50: addi    r6, r6, 3
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3);

label_805CCA54:
    // 805CCA54: bl      0x805CC66C
    {
            ctx->lr = 0x805CCA58u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC66Cu;
                return;
            }
            goto label_805CC66C;
    }

label_805CCA58:
    ctx->downcount -= 17;
    // 805CCA58: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CCA5C:
    ctx->pc = 0x805CCA5Cu;
    // 805CCA5C: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CCA60:
    ctx->pc = 0x805CCA60u;
    // 805CCA60: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCA64:
    ctx->pc = 0x805CCA64u;
    // 805CCA64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCA68:
    // 805CCA68: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_805CCA6C:
    ctx->pc = 0x805CCA6Cu;
    // 805CCA6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCA70:
    ctx->pc = 0x805CCA70u;
    ctx->downcount -= 1;
    // 805CCA70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCA74:
    ctx->pc = 0x805CCA74u;
    ctx->downcount -= 18;
    // 805CCA74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCA78:
    ctx->pc = 0x805CCA78u;
    // 805CCA78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCA7C:
    // 805CCA7C: cmpwi   r3, 0
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

label_805CCA80:
    ctx->pc = 0x805CCA80u;
    // 805CCA80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCA84:
    ctx->pc = 0x805CCA84u;
    // 805CCA84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CCA88:
    // 805CCA88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCA8C:
    // 805CCA8C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CCA90:
    // 805CCA90: bc    12, 2, 0x805CCAC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCAC0;
        }
    }

label_805CCA94:
    ctx->downcount -= 1;
    // 805CCA94: bc    12, 2, 0x805CCAB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCAB0;
        }
    }

label_805CCA98:
    ctx->downcount -= 3;
    // 805CCA98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CCA9C:
    // 805CCA9C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CCAA0:
    // 805CCAA0: bl      0x801F5C24
    {
            ctx->lr = 0x805CCAA4u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805CCAA4:
    ctx->downcount -= 3;
    // 805CCAA4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CCAA8:
    // 805CCAA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CCAAC:
    // 805CCAAC: bl      0x805CC5C4
    {
            ctx->lr = 0x805CCAB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC5C4u;
                return;
            }
            goto label_805CC5C4;
    }

label_805CCAB0:
    ctx->downcount -= 2;
    // 805CCAB0: cmpwi   r31, 0
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

label_805CCAB4:
    // 805CCAB4: bc    4, 1, 0x805CCAC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CCAC0;
        }
    }

label_805CCAB8:
    ctx->downcount -= 2;
    // 805CCAB8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CCABC:
    // 805CCABC: bl      0x801C1C90
    {
            ctx->lr = 0x805CCAC0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CCAC0:
    ctx->downcount -= 17;
    // 805CCAC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CCAC4:
    ctx->pc = 0x805CCAC4u;
    // 805CCAC4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CCAC8:
    ctx->pc = 0x805CCAC8u;
    // 805CCAC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCACC:
    ctx->pc = 0x805CCACCu;
    // 805CCACC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCAD0:
    // 805CCAD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCAD4:
    ctx->pc = 0x805CCAD4u;
    // 805CCAD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCAD8:
    ctx->pc = 0x805CCAD8u;
    ctx->downcount -= 10;
    // 805CCAD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCADC:
    ctx->pc = 0x805CCADCu;
    // 805CCADC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCAE0:
    ctx->pc = 0x805CCAE0u;
    // 805CCAE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCAE4:
    ctx->pc = 0x805CCAE4u;
    // 805CCAE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCAE8:
    // 805CCAE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCAEC:
    ctx->pc = 0x805CCAECu;
    // 805CCAEC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CCAF0:
    ctx->pc = 0x805CCAF0u;
    // 805CCAF0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CCAF4:
    ctx->pc = 0x805CCAF4u;
    // 805CCAF4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CCAF8:
    ctx->pc = 0x805CCAF8u;
    // 805CCAF8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CCAFCu;
            ctx->pc = target;
            return;
        }
    }

label_805CCAFC:
    ctx->downcount -= 4;
    // 805CCAFC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCB00:
    // 805CCB00: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CCB04:
    // 805CCB04: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CCB08:
    // 805CCB08: bl      0x8027765C
    {
            ctx->lr = 0x805CCB0Cu;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_805CCB0C:
    ctx->downcount -= 2;
    // 805CCB0C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CCB10:
    // 805CCB10: bl      0x80277768
    {
            ctx->lr = 0x805CCB14u;
            ctx->pc = 0x80277768u;
            return;
    }

label_805CCB14:
    ctx->pc = 0x805CCB14u;
    ctx->downcount -= 3;
    // 805CCB14: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCB18:
    // 805CCB18: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CCB1C:
    // 805CCB1C: bl      0x803457B8
    {
            ctx->lr = 0x805CCB20u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CCB20:
    ctx->pc = 0x805CCB20u;
    ctx->downcount -= 6;
    // 805CCB20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCB24:
    ctx->pc = 0x805CCB24u;
    // 805CCB24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCB28:
    ctx->pc = 0x805CCB28u;
    // 805CCB28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCB2C:
    // 805CCB2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCB30:
    ctx->pc = 0x805CCB30u;
    // 805CCB30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCB34:
    ctx->pc = 0x805CCB34u;
    ctx->downcount -= 1;
    // 805CCB34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCB38:
    ctx->pc = 0x805CCB38u;
    ctx->downcount -= 17;
    // 805CCB38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCB3C:
    ctx->pc = 0x805CCB3Cu;
    // 805CCB3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCB40:
    ctx->pc = 0x805CCB40u;
    // 805CCB40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCB44:
    ctx->pc = 0x805CCB44u;
    // 805CCB44: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CCB48:
    // 805CCB48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCB4C:
    // 805CCB4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CCB50:
    // 805CCB50: bl      0x803457F4
    {
            ctx->lr = 0x805CCB54u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_805CCB54:
    ctx->pc = 0x805CCB54u;
    ctx->downcount -= 11;
    // 805CCB54: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCB58:
    // 805CCB58: lis     r3, -32657
    ctx->gpr[3] = ((u32)(s32)(-32657) << 16);

label_805CCB5C:
    // 805CCB5C: addi    r3, r3, -25844
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-25844);

label_805CCB60:
    ctx->pc = 0x805CCB60u;
    // 805CCB60: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CCB64:
    // 805CCB64: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCB68:
    ctx->pc = 0x805CCB68u;
    // 805CCB68: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCB6C:
    ctx->pc = 0x805CCB6Cu;
    // 805CCB6C: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CCB70:
    // 805CCB70: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CCB74:
    // 805CCB74: bl      0x801C1C80
    {
            ctx->lr = 0x805CCB78u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CCB78:
    ctx->pc = 0x805CCB78u;
    ctx->downcount -= 8;
    // 805CCB78: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCB7C:
    // 805CCB7C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CCB80:
    ctx->pc = 0x805CCB80u;
    // 805CCB80: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CCB84:
    // 805CCB84: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCB88:
    ctx->pc = 0x805CCB88u;
    // 805CCB88: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCB8C:
    // 805CCB8C: bl      0x801C1C80
    {
            ctx->lr = 0x805CCB90u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CCB90:
    ctx->pc = 0x805CCB90u;
    ctx->downcount -= 8;
    // 805CCB90: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCB94:
    // 805CCB94: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CCB98:
    ctx->pc = 0x805CCB98u;
    // 805CCB98: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CCB9C:
    // 805CCB9C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCBA0:
    ctx->pc = 0x805CCBA0u;
    // 805CCBA0: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCBA4:
    // 805CCBA4: bl      0x801C1C80
    {
            ctx->lr = 0x805CCBA8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CCBA8:
    ctx->downcount -= 6;
    // 805CCBA8: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_805CCBAC:
    ctx->pc = 0x805CCBACu;
    // 805CCBAC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CCBB0:
    // 805CCBB0: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_805CCBB4:
    // 805CCBB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CCBB8:
    // 805CCBB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805CCBBC:
    // 805CCBBC: b       0x805CCC28
    {
            goto label_805CCC28;
    }

label_805CCBC0:
    loop_805CCBC0(ctx);
    if (ctx->pc == 0x805CCC34u) goto label_805CCC34;
    return;
label_805CCBC4:
    // 805CCBC4: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_805CCBC8:
    ctx->pc = 0x805CCBC8u;
    // 805CCBC8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCBCC:
    // 805CCBCC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CCBD0:
    ctx->pc = 0x805CCBD0u;
    // 805CCBD0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCBD4:
    ctx->pc = 0x805CCBD4u;
    // 805CCBD4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CCBD8:
    ctx->pc = 0x805CCBD8u;
    // 805CCBD8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCBDC:
    ctx->pc = 0x805CCBDCu;
    // 805CCBDC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCBE0:
    ctx->pc = 0x805CCBE0u;
    // 805CCBE0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCBE4:
    ctx->pc = 0x805CCBE4u;
    // 805CCBE4: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCBE8:
    ctx->pc = 0x805CCBE8u;
    // 805CCBE8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCBEC:
    // 805CCBEC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CCBF0:
    ctx->pc = 0x805CCBF0u;
    // 805CCBF0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCBF4:
    ctx->pc = 0x805CCBF4u;
    // 805CCBF4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CCBF8:
    ctx->pc = 0x805CCBF8u;
    // 805CCBF8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCBFC:
    ctx->pc = 0x805CCBFCu;
    // 805CCBFC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC00:
    ctx->pc = 0x805CCC00u;
    // 805CCC00: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCC04:
    ctx->pc = 0x805CCC04u;
    // 805CCC04: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCC08:
    ctx->pc = 0x805CCC08u;
    // 805CCC08: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC0C:
    // 805CCC0C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CCC10:
    ctx->pc = 0x805CCC10u;
    // 805CCC10: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCC14:
    ctx->pc = 0x805CCC14u;
    // 805CCC14: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CCC18:
    // 805CCC18: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_805CCC1C:
    ctx->pc = 0x805CCC1Cu;
    // 805CCC1C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCC20:
    ctx->pc = 0x805CCC20u;
    // 805CCC20: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC24:
    ctx->pc = 0x805CCC24u;
    // 805CCC24: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCC28:
    ctx->pc = 0x805CCC28u;
    ctx->downcount -= 3;
    // 805CCC28: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC2C:
    // 805CCC2C: cmpw    r7, r0
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

label_805CCC30:
    // 805CCC30: bc    12, 0, 0x805CCBC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCBC0u;
                return;
            }
            goto label_805CCBC0;
        }
    }

label_805CCC34:
    ctx->downcount -= 3;
    // 805CCC34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCC38:
    // 805CCC38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CCC3C:
    // 805CCC3C: bl      0x803457CC
    {
            ctx->lr = 0x805CCC40u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_805CCC40:
    ctx->downcount -= 17;
    // 805CCC40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCC44:
    ctx->pc = 0x805CCC44u;
    // 805CCC44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CCC48:
    ctx->pc = 0x805CCC48u;
    // 805CCC48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC4C:
    ctx->pc = 0x805CCC4Cu;
    // 805CCC4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCC50:
    // 805CCC50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCC54:
    ctx->pc = 0x805CCC54u;
    // 805CCC54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCC58:
    ctx->pc = 0x805CCC58u;
    ctx->downcount -= 19;
    // 805CCC58: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCC5C:
    ctx->pc = 0x805CCC5Cu;
    // 805CCC5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCC60:
    ctx->pc = 0x805CCC60u;
    // 805CCC60: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCC64:
    ctx->pc = 0x805CCC64u;
    // 805CCC64: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CCC68:
    // 805CCC68: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CCC6C:
    // 805CCC6C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CCC70:
    // 805CCC70: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCC74:
    // 805CCC74: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCC78:
    // 805CCC78: bl      0x805CC66C
    {
            ctx->lr = 0x805CCC7Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC66Cu;
                return;
            }
            goto label_805CC66C;
    }

label_805CCC7C:
    ctx->downcount -= 27;
    // 805CCC7C: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805CCC80:
    ctx->pc = 0x805CCC80u;
    // 805CCC80: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CCC84:
    ctx->pc = 0x805CCC84u;
    // 805CCC84: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCC88:
    ctx->pc = 0x805CCC88u;
    // 805CCC88: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCC8C:
    // 805CCC8C: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CCC90:
    ctx->pc = 0x805CCC90u;
    // 805CCC90: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCC94:
    ctx->pc = 0x805CCC94u;
    // 805CCC94: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CCC98:
    ctx->pc = 0x805CCC98u;
    // 805CCC98: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CCC9C:
    ctx->pc = 0x805CCC9Cu;
    // 805CCC9C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCCA0:
    ctx->pc = 0x805CCCA0u;
    // 805CCCA0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CCCA4:
    ctx->pc = 0x805CCCA4u;
    // 805CCCA4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCCA8:
    ctx->pc = 0x805CCCA8u;
    // 805CCCA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCCAC:
    // 805CCCAC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CCCB0:
    ctx->pc = 0x805CCCB0u;
    // 805CCCB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCCB4:
    ctx->pc = 0x805CCCB4u;
    ctx->downcount -= 8;
    // 805CCCB4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCCB8:
    ctx->pc = 0x805CCCB8u;
    // 805CCCB8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCCBC:
    ctx->pc = 0x805CCCBCu;
    // 805CCCBC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCCC0:
    ctx->pc = 0x805CCCC0u;
    // 805CCCC0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCCC4:
    // 805CCCC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCCC8:
    ctx->pc = 0x805CCCC8u;
    // 805CCCC8: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CCCCC:
    // 805CCCCC: cmpwi   r0, 0
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

label_805CCCD0:
    // 805CCCD0: bc    12, 2, 0x805CCCF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCCF4;
        }
    }

label_805CCCD4:
    ctx->pc = 0x805CCCD4u;
    ctx->downcount -= 3;
    // 805CCCD4: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CCCD8:
    // 805CCCD8: cmpwi   r0, 0
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

label_805CCCDC:
    // 805CCCDC: bc    12, 2, 0x805CCCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCCE4;
        }
    }

label_805CCCE0:
    ctx->downcount -= 1;
    // 805CCCE0: bl      0x805CCDD8
    {
            ctx->lr = 0x805CCCE4u;
            goto label_805CCDD8;
    }

label_805CCCE4:
    ctx->downcount -= 2;
    // 805CCCE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCCE8:
    // 805CCCE8: bl      0x803456D4
    {
            ctx->lr = 0x805CCCECu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_805CCCEC:
    ctx->downcount -= 2;
    // 805CCCEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCCF0:
    // 805CCCF0: bl      0x805CCD18
    {
            ctx->lr = 0x805CCCF4u;
            goto label_805CCD18;
    }

label_805CCCF4:
    ctx->downcount -= 2;
    // 805CCCF4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCCF8:
    // 805CCCF8: bl      0x805CCD78
    {
            ctx->lr = 0x805CCCFCu;
            goto label_805CCD78;
    }

label_805CCCFC:
    ctx->downcount -= 2;
    // 805CCCFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCD00:
    // 805CCD00: bl      0x803456F8
    {
            ctx->lr = 0x805CCD04u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_805CCD04:
    ctx->pc = 0x805CCD04u;
    ctx->downcount -= 6;
    // 805CCD04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCD08:
    ctx->pc = 0x805CCD08u;
    // 805CCD08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCD0C:
    ctx->pc = 0x805CCD0Cu;
    // 805CCD0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCD10:
    // 805CCD10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCD14:
    ctx->pc = 0x805CCD14u;
    // 805CCD14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCD18:
    ctx->pc = 0x805CCD18u;
    ctx->downcount -= 12;
    // 805CCD18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCD1C:
    ctx->pc = 0x805CCD1Cu;
    // 805CCD1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCD20:
    ctx->pc = 0x805CCD20u;
    // 805CCD20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCD24:
    ctx->pc = 0x805CCD24u;
    // 805CCD24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCD28:
    // 805CCD28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCD2C:
    ctx->pc = 0x805CCD2Cu;
    // 805CCD2C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCD30:
    ctx->pc = 0x805CCD30u;
    // 805CCD30: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCD34:
    // 805CCD34: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCD38:
    // 805CCD38: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CCD3C:
    // 805CCD3C: bl      0x800076B4
    {
            ctx->lr = 0x805CCD40u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CCD40:
    ctx->downcount -= 2;
    // 805CCD40: cmpwi   r3, 0
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

label_805CCD44:
    // 805CCD44: bc    12, 2, 0x805CCD64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCD64;
        }
    }

label_805CCD48:
    ctx->pc = 0x805CCD48u;
    ctx->downcount -= 8;
    // 805CCD48: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCD4C:
    ctx->pc = 0x805CCD4Cu;
    // 805CCD4C: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCD50:
    // 805CCD50: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCD54:
    ctx->pc = 0x805CCD54u;
    // 805CCD54: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCD58:
    // 805CCD58: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CCD5C:
    // 805CCD5C: bl      0x800076E4
    {
            ctx->lr = 0x805CCD60u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CCD60:
    ctx->downcount -= 1;
    // 805CCD60: nop
    // nop

label_805CCD64:
    ctx->pc = 0x805CCD64u;
    ctx->downcount -= 6;
    // 805CCD64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCD68:
    ctx->pc = 0x805CCD68u;
    // 805CCD68: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCD6C:
    ctx->pc = 0x805CCD6Cu;
    // 805CCD6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCD70:
    // 805CCD70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCD74:
    ctx->pc = 0x805CCD74u;
    // 805CCD74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCD78:
    ctx->pc = 0x805CCD78u;
    ctx->downcount -= 12;
    // 805CCD78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCD7C:
    ctx->pc = 0x805CCD7Cu;
    // 805CCD7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCD80:
    ctx->pc = 0x805CCD80u;
    // 805CCD80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCD84:
    ctx->pc = 0x805CCD84u;
    // 805CCD84: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCD88:
    // 805CCD88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCD8C:
    ctx->pc = 0x805CCD8Cu;
    // 805CCD8C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCD90:
    ctx->pc = 0x805CCD90u;
    // 805CCD90: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCD94:
    // 805CCD94: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCD98:
    // 805CCD98: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CCD9C:
    // 805CCD9C: bl      0x800076B4
    {
            ctx->lr = 0x805CCDA0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CCDA0:
    ctx->downcount -= 2;
    // 805CCDA0: cmpwi   r3, 0
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

label_805CCDA4:
    // 805CCDA4: bc    12, 2, 0x805CCDC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCDC4;
        }
    }

label_805CCDA8:
    ctx->pc = 0x805CCDA8u;
    ctx->downcount -= 8;
    // 805CCDA8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCDAC:
    ctx->pc = 0x805CCDACu;
    // 805CCDAC: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCDB0:
    // 805CCDB0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCDB4:
    ctx->pc = 0x805CCDB4u;
    // 805CCDB4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCDB8:
    // 805CCDB8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CCDBC:
    // 805CCDBC: bl      0x800076E4
    {
            ctx->lr = 0x805CCDC0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CCDC0:
    ctx->downcount -= 1;
    // 805CCDC0: nop
    // nop

label_805CCDC4:
    ctx->pc = 0x805CCDC4u;
    ctx->downcount -= 6;
    // 805CCDC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCDC8:
    ctx->pc = 0x805CCDC8u;
    // 805CCDC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCDCC:
    ctx->pc = 0x805CCDCCu;
    // 805CCDCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCDD0:
    // 805CCDD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCDD4:
    ctx->pc = 0x805CCDD4u;
    // 805CCDD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCDD8:
    ctx->pc = 0x805CCDD8u;
    ctx->downcount -= 12;
    // 805CCDD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCDDC:
    ctx->pc = 0x805CCDDCu;
    // 805CCDDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCDE0:
    ctx->pc = 0x805CCDE0u;
    // 805CCDE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCDE4:
    ctx->pc = 0x805CCDE4u;
    // 805CCDE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCDE8:
    // 805CCDE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCDEC:
    ctx->pc = 0x805CCDECu;
    // 805CCDEC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCDF0:
    ctx->pc = 0x805CCDF0u;
    // 805CCDF0: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCDF4:
    // 805CCDF4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCDF8:
    // 805CCDF8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CCDFC:
    // 805CCDFC: bl      0x800076B4
    {
            ctx->lr = 0x805CCE00u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CCE00:
    ctx->downcount -= 2;
    // 805CCE00: cmpwi   r3, 0
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

label_805CCE04:
    // 805CCE04: bc    12, 2, 0x805CCE24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCE24;
        }
    }

label_805CCE08:
    ctx->pc = 0x805CCE08u;
    ctx->downcount -= 8;
    // 805CCE08: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCE0C:
    ctx->pc = 0x805CCE0Cu;
    // 805CCE0C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CCE10:
    // 805CCE10: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CCE14:
    ctx->pc = 0x805CCE14u;
    // 805CCE14: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CCE18:
    // 805CCE18: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CCE1C:
    // 805CCE1C: bl      0x800076E4
    {
            ctx->lr = 0x805CCE20u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CCE20:
    ctx->downcount -= 1;
    // 805CCE20: nop
    // nop

label_805CCE24:
    ctx->pc = 0x805CCE24u;
    ctx->downcount -= 6;
    // 805CCE24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCE28:
    ctx->pc = 0x805CCE28u;
    // 805CCE28: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCE2C:
    ctx->pc = 0x805CCE2Cu;
    // 805CCE2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCE30:
    // 805CCE30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCE34:
    ctx->pc = 0x805CCE34u;
    // 805CCE34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCE38:
    ctx->downcount -= 2;
    // 805CCE38: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CCE3C:
    // 805CCE3C: b       0x805CC5C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC5C4u;
                return;
            }
            goto label_805CC5C4;
    }

label_805CCE40:
    ctx->downcount -= 2;
    // 805CCE40: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CCE44:
    // 805CCE44: b       0x805CC560
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC560u;
                return;
            }
            goto label_805CC560;
    }

label_805CCE48:
    ctx->downcount -= 2;
    // 805CCE48: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE4C:
    // 805CCE4C: b       0x805CC560
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC560u;
                return;
            }
            goto label_805CC560;
    }

label_805CCE50:
    ctx->downcount -= 2;
    // 805CCE50: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CCE54:
    // 805CCE54: b       0x805CCA74
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCA74u;
                return;
            }
            goto label_805CCA74;
    }

label_805CCE58:
    ctx->downcount -= 2;
    // 805CCE58: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE5C:
    // 805CCE5C: b       0x805CBF90
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBF90u;
                return;
            }
            goto label_805CBF90;
    }

label_805CCE60:
    ctx->downcount -= 2;
    // 805CCE60: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE64:
    // 805CCE64: b       0x805CC884
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC884u;
                return;
            }
            goto label_805CC884;
    }

label_805CCE68:
    ctx->downcount -= 2;
    // 805CCE68: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE6C:
    // 805CCE6C: b       0x805CCA74
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCA74u;
                return;
            }
            goto label_805CCA74;
    }

label_805CCE70:
    ctx->downcount -= 2;
    // 805CCE70: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE74:
    // 805CCE74: b       0x805CC754
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC754u;
                return;
            }
            goto label_805CC754;
    }

label_805CCE78:
    ctx->downcount -= 2;
    // 805CCE78: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE7C:
    // 805CCE7C: b       0x805CC74C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CC74Cu;
                return;
            }
            goto label_805CC74C;
    }

label_805CCE80:
    ctx->downcount -= 2;
    // 805CCE80: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CCE84:
    // 805CCE84: b       0x805CBDF0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CBDF0u;
                return;
            }
            goto label_805CBDF0;
    }

label_805CCE88:
    ctx->pc = 0x805CCE88u;
    ctx->downcount -= 6;
    // 805CCE88: lbz     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CCE8C:
    // 805CCE8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CCE90:
    // 805CCE90: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_805CCE94:
    ctx->pc = 0x805CCE94u;
    // 805CCE94: stb     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CCE98:
    // 805CCE98: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CCE9C:
    // 805CCE9C: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CCEA0:
    ctx->pc = 0x805CCEA0u;
    ctx->downcount -= 11;
    // 805CCEA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCEA4:
    ctx->pc = 0x805CCEA4u;
    // 805CCEA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCEA8:
    // 805CCEA8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CCEAC:
    ctx->pc = 0x805CCEACu;
    // 805CCEAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCEB0:
    ctx->pc = 0x805CCEB0u;
    // 805CCEB0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCEB4:
    // 805CCEB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCEB8:
    ctx->pc = 0x805CCEB8u;
    // 805CCEB8: lbz     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CCEBC:
    // 805CCEBC: rlwinm r0, r0, 0, 30, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFBu;
    }

label_805CCEC0:
    ctx->pc = 0x805CCEC0u;
    // 805CCEC0: stb     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CCEC4:
    // 805CCEC4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CCEC8:
    // 805CCEC8: bl      0x8026F6AC
    {
            ctx->lr = 0x805CCECCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CCECC:
    ctx->downcount -= 1;
    // 805CCECC: bl      0x8025EAF8
    {
            ctx->lr = 0x805CCED0u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_805CCED0:
    ctx->downcount -= 2;
    // 805CCED0: cmpwi   r3, 0
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

label_805CCED4:
    // 805CCED4: bc    12, 2, 0x805CCEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCEF8;
        }
    }

label_805CCED8:
    ctx->pc = 0x805CCED8u;
    ctx->downcount -= 9;
    // 805CCED8: lbz     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CCEDC:
    // 805CCEDC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CCEE0:
    // 805CCEE0: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_805CCEE4:
    ctx->pc = 0x805CCEE4u;
    // 805CCEE4: stb     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CCEE8:
    ctx->pc = 0x805CCEE8u;
    // 805CCEE8: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CCEEC:
    ctx->pc = 0x805CCEECu;
    // 805CCEEC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CCEF0:
    ctx->pc = 0x805CCEF0u;
    // 805CCEF0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CCEF4:
    ctx->pc = 0x805CCEF4u;
    // 805CCEF4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CCEF8u;
            ctx->pc = target;
            return;
        }
    }

label_805CCEF8:
    ctx->pc = 0x805CCEF8u;
    ctx->downcount -= 6;
    // 805CCEF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCEFC:
    ctx->pc = 0x805CCEFCu;
    // 805CCEFC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCF00:
    ctx->pc = 0x805CCF00u;
    // 805CCF00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCF04:
    // 805CCF04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCF08:
    ctx->pc = 0x805CCF08u;
    // 805CCF08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCF0C:
    ctx->pc = 0x805CCF0Cu;
    ctx->downcount -= 8;
    // 805CCF0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCF10:
    ctx->pc = 0x805CCF10u;
    // 805CCF10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCF14:
    ctx->pc = 0x805CCF14u;
    // 805CCF14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCF18:
    ctx->pc = 0x805CCF18u;
    // 805CCF18: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CCF1C:
    // 805CCF1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCF20:
    ctx->pc = 0x805CCF20u;
    // 805CCF20: lbz     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CCF24:
    // 805CCF24: rlwinm. r0, r4, 0, 27, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000010u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805CCF28:
    // 805CCF28: bc    12, 2, 0x805CCF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CCF68;
        }
    }

label_805CCF2C:
    ctx->downcount -= 2;
    // 805CCF2C: rlwinm. r0, r4, 0, 28, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 0u) & 0x00000008u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805CCF30:
    // 805CCF30: bc    4, 2, 0x805CCF68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CCF68;
        }
    }

label_805CCF34:
    ctx->downcount -= 6;
    // 805CCF34: ori     r0, r4, 0x0004
    ctx->gpr[0] = ctx->gpr[4] | 0x0004u;

label_805CCF38:
    ctx->pc = 0x805CCF38u;
    // 805CCF38: stb     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CCF3C:
    // 805CCF3C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CCF40:
    // 805CCF40: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CCF44:
    // 805CCF44: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CCF48:
    // 805CCF48: bl      0x8026FEF0
    {
            ctx->lr = 0x805CCF4Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CCF4C:
    ctx->downcount -= 3;
    // 805CCF4C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CCF50:
    // 805CCF50: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CCF54:
    // 805CCF54: bl      0x8026F6AC
    {
            ctx->lr = 0x805CCF58u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CCF58:
    ctx->downcount -= 1;
    // 805CCF58: bl      0x8025EC94
    {
            ctx->lr = 0x805CCF5Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CCF5C:
    ctx->downcount -= 3;
    // 805CCF5C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CCF60:
    // 805CCF60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CCF64:
    // 805CCF64: bl      0x803457B8
    {
            ctx->lr = 0x805CCF68u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CCF68:
    ctx->pc = 0x805CCF68u;
    ctx->downcount -= 6;
    // 805CCF68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CCF6C:
    ctx->pc = 0x805CCF6Cu;
    // 805CCF6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CCF70:
    ctx->pc = 0x805CCF70u;
    // 805CCF70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CCF74:
    // 805CCF74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CCF78:
    ctx->pc = 0x805CCF78u;
    // 805CCF78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCF7C:
    ctx->pc = 0x805CCF7Cu;
    ctx->downcount -= 1;
    // 805CCF7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CCF80:
    ctx->pc = 0x805CCF80u;
    ctx->downcount -= 23;
    // 805CCF80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CCF84:
    ctx->pc = 0x805CCF84u;
    // 805CCF84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CCF88:
    // 805CCF88: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CCF8C:
    // 805CCF8C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CCF90:
    ctx->pc = 0x805CCF90u;
    // 805CCF90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CCF94:
    // 805CCF94: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CCF98:
    ctx->pc = 0x805CCF98u;
    // 805CCF98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CCF9C:
    // 805CCF9C: lis     r31, -32663
    ctx->gpr[31] = ((u32)(s32)(-32663) << 16);

label_805CCFA0:
    // 805CCFA0: addi    r4, r31, -27424
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(-27424);

label_805CCFA4:
    // 805CCFA4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CCFA8:
    // 805CCFA8: addi    r5, r4, 13
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(13);

label_805CCFAC:
    // 805CCFAC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CCFB0:
    // 805CCFB0: bl      0x802703A8
    {
            ctx->lr = 0x805CCFB4u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_805CCFB4:
    ctx->downcount -= 7;
    // 805CCFB4: addi    r31, r31, -27424
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-27424);

label_805CCFB8:
    // 805CCFB8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CCFBC:
    // 805CCFBC: addi    r5, r31, 31
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(31);

label_805CCFC0:
    // 805CCFC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CCFC4:
    // 805CCFC4: addi    r6, r31, 34
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(34);

label_805CCFC8:
    // 805CCFC8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CCFCC:
    // 805CCFCC: bl      0x8027035C
    {
            ctx->lr = 0x805CCFD0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CCFD0:
    ctx->downcount -= 6;
    // 805CCFD0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CCFD4:
    // 805CCFD4: addi    r5, r31, 45
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(45);

label_805CCFD8:
    // 805CCFD8: addi    r6, r31, 55
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(55);

label_805CCFDC:
    // 805CCFDC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CCFE0:
    // 805CCFE0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CCFE4:
    // 805CCFE4: bl      0x8027035C
    {
            ctx->lr = 0x805CCFE8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CCFE8:
    ctx->downcount -= 6;
    // 805CCFE8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CCFEC:
    // 805CCFEC: addi    r5, r31, 69
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(69);

label_805CCFF0:
    // 805CCFF0: addi    r6, r31, 34
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(34);

label_805CCFF4:
    // 805CCFF4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CCFF8:
    // 805CCFF8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CCFFC:
    // 805CCFFC: bl      0x8027035C
    {
            ctx->lr = 0x805CD000u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CD000:
    ctx->downcount -= 4;
    // 805CD000: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CD004:
    // 805CD004: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD008:
    // 805CD008: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CD00C:
    // 805CD00C: bl      0x80270194
    {
            ctx->lr = 0x805CD010u;
            ctx->pc = 0x80270194u;
            return;
    }

label_805CD010:
    ctx->pc = 0x805CD010u;
    ctx->downcount -= 16;
    // 805CD010: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD014:
    ctx->pc = 0x805CD014u;
    // 805CD014: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD018:
    ctx->pc = 0x805CD018u;
    // 805CD018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD01C:
    // 805CD01C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD020:
    ctx->pc = 0x805CD020u;
    // 805CD020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD024:
    ctx->pc = 0x805CD024u;
    ctx->downcount -= 4;
    // 805CD024: lbz     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CD028:
    // 805CD028: ori     r0, r0, 0x0008
    ctx->gpr[0] = ctx->gpr[0] | 0x0008u;

label_805CD02C:
    ctx->pc = 0x805CD02Cu;
    // 805CD02C: stb     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CD030:
    // 805CD030: b       0x805CD4DC
    {
            goto label_805CD4DC;
    }

label_805CD034:
    ctx->pc = 0x805CD034u;
    ctx->downcount -= 9;
    // 805CD034: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD038:
    ctx->pc = 0x805CD038u;
    // 805CD038: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD03C:
    ctx->pc = 0x805CD03Cu;
    // 805CD03C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD040:
    // 805CD040: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CD044:
    ctx->pc = 0x805CD044u;
    // 805CD044: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD048:
    // 805CD048: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD04C:
    ctx->pc = 0x805CD04Cu;
    // 805CD04C: stw     r4, 260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD050:
    ctx->pc = 0x805CD050u;
    // 805CD050: stb     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CD054:
    // 805CD054: bl      0x805CD52C
    {
            ctx->lr = 0x805CD058u;
            goto label_805CD52C;
    }

label_805CD058:
    ctx->downcount -= 4;
    // 805CD058: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD05C:
    // 805CD05C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CD060:
    // 805CD060: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CD064:
    // 805CD064: bl      0x8026FEF0
    {
            ctx->lr = 0x805CD068u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CD068:
    ctx->downcount -= 3;
    // 805CD068: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD06C:
    // 805CD06C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CD070:
    // 805CD070: bl      0x8026F6AC
    {
            ctx->lr = 0x805CD074u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CD074:
    ctx->downcount -= 1;
    // 805CD074: bl      0x8025EC94
    {
            ctx->lr = 0x805CD078u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CD078:
    ctx->downcount -= 3;
    // 805CD078: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD07C:
    // 805CD07C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CD080:
    // 805CD080: bl      0x8026F6AC
    {
            ctx->lr = 0x805CD084u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CD084:
    ctx->pc = 0x805CD084u;
    ctx->downcount -= 2;
    // 805CD084: lfs     f1, 24144(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CD084u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24144);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CD088:
    // 805CD088: bl      0x8025EBE8
    {
            ctx->lr = 0x805CD08Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CD08C:
    ctx->pc = 0x805CD08Cu;
    ctx->downcount -= 6;
    // 805CD08C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD090:
    ctx->pc = 0x805CD090u;
    // 805CD090: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD094:
    ctx->pc = 0x805CD094u;
    // 805CD094: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD098:
    // 805CD098: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD09C:
    ctx->pc = 0x805CD09Cu;
    // 805CD09C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD0A0:
    ctx->pc = 0x805CD0A0u;
    ctx->downcount -= 20;
    // 805CD0A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD0A4:
    ctx->pc = 0x805CD0A4u;
    // 805CD0A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD0A8:
    // 805CD0A8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CD0AC:
    // 805CD0AC: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_805CD0B0:
    ctx->pc = 0x805CD0B0u;
    // 805CD0B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD0B4:
    // 805CD0B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CD0B8:
    // 805CD0B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CD0BC:
    ctx->pc = 0x805CD0BCu;
    // 805CD0BC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD0C0:
    // 805CD0C0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD0C4:
    // 805CD0C4: bl      0x805CD588
    {
            ctx->lr = 0x805CD0C8u;
            goto label_805CD588;
    }

label_805CD0C8:
    ctx->downcount -= 16;
    // 805CD0C8: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CD0CC:
    // 805CD0CC: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CD0D0:
    // 805CD0D0: addi    r4, r4, -25808
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25808);

label_805CD0D4:
    // 805CD0D4: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_805CD0D8:
    // 805CD0D8: addi    r3, r4, 8
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(8);

label_805CD0DC:
    ctx->pc = 0x805CD0DCu;
    // 805CD0DC: stw     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD0E0:
    // 805CD0E0: addi    r6, r4, 120
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(120);

label_805CD0E4:
    // 805CD0E4: addi    r0, r4, 136
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(136);

label_805CD0E8:
    ctx->pc = 0x805CD0E8u;
    // 805CD0E8: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD0EC:
    // 805CD0EC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_805CD0F0:
    // 805CD0F0: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD0F4:
    // 805CD0F4: addi    r5, r5, -25832
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25832);

label_805CD0F8:
    ctx->pc = 0x805CD0F8u;
    // 805CD0F8: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CD0FC:
    // 805CD0FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CD100:
    ctx->pc = 0x805CD100u;
    // 805CD100: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD104:
    // 805CD104: bl      0x805CD250
    {
            ctx->lr = 0x805CD108u;
            goto label_805CD250;
    }

label_805CD108:
    ctx->downcount -= 6;
    // 805CD108: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CD10C:
    // 805CD10C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_805CD110:
    // 805CD110: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD114:
    // 805CD114: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CD118:
    // 805CD118: addi    r5, r5, -25820
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25820);

label_805CD11C:
    // 805CD11C: bl      0x805CD250
    {
            ctx->lr = 0x805CD120u;
            goto label_805CD250;
    }

label_805CD120:
    ctx->downcount -= 20;
    // 805CD120: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CD124:
    ctx->pc = 0x805CD124u;
    // 805CD124: stw     r0, 260(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD128:
    // 805CD128: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD12C:
    ctx->pc = 0x805CD12Cu;
    // 805CD12C: stb     r0, 256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CD130:
    ctx->pc = 0x805CD130u;
    // 805CD130: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD134:
    ctx->pc = 0x805CD134u;
    // 805CD134: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD138:
    ctx->pc = 0x805CD138u;
    // 805CD138: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD13C:
    // 805CD13C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD140:
    ctx->pc = 0x805CD140u;
    // 805CD140: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD144:
    ctx->pc = 0x805CD144u;
    ctx->downcount -= 18;
    // 805CD144: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD148:
    ctx->pc = 0x805CD148u;
    // 805CD148: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD14C:
    // 805CD14C: cmpwi   r3, 0
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

label_805CD150:
    ctx->pc = 0x805CD150u;
    // 805CD150: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD154:
    ctx->pc = 0x805CD154u;
    // 805CD154: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD158:
    // 805CD158: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD15C:
    // 805CD15C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD160:
    // 805CD160: bc    12, 2, 0x805CD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD190;
        }
    }

label_805CD164:
    ctx->downcount -= 1;
    // 805CD164: bc    12, 2, 0x805CD180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD180;
        }
    }

label_805CD168:
    ctx->downcount -= 3;
    // 805CD168: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805CD16C:
    // 805CD16C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CD170:
    // 805CD170: bl      0x805CD210
    {
            ctx->lr = 0x805CD174u;
            goto label_805CD210;
    }

label_805CD174:
    ctx->downcount -= 3;
    // 805CD174: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD178:
    // 805CD178: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD17C:
    // 805CD17C: bl      0x801ED118
    {
            ctx->lr = 0x805CD180u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_805CD180:
    ctx->downcount -= 2;
    // 805CD180: cmpwi   r31, 0
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

label_805CD184:
    // 805CD184: bc    4, 1, 0x805CD190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD190;
        }
    }

label_805CD188:
    ctx->downcount -= 2;
    // 805CD188: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD18C:
    // 805CD18C: bl      0x801C1C90
    {
            ctx->lr = 0x805CD190u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CD190:
    ctx->downcount -= 17;
    // 805CD190: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD194:
    ctx->pc = 0x805CD194u;
    // 805CD194: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD198:
    ctx->pc = 0x805CD198u;
    // 805CD198: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD19C:
    ctx->pc = 0x805CD19Cu;
    // 805CD19C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD1A0:
    // 805CD1A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD1A4:
    ctx->pc = 0x805CD1A4u;
    // 805CD1A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD1A8:
    ctx->pc = 0x805CD1A8u;
    ctx->downcount -= 18;
    // 805CD1A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD1AC:
    ctx->pc = 0x805CD1ACu;
    // 805CD1AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD1B0:
    // 805CD1B0: cmpwi   r3, 0
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

label_805CD1B4:
    ctx->pc = 0x805CD1B4u;
    // 805CD1B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD1B8:
    ctx->pc = 0x805CD1B8u;
    // 805CD1B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD1BC:
    // 805CD1BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD1C0:
    // 805CD1C0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD1C4:
    // 805CD1C4: bc    12, 2, 0x805CD1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD1F8;
        }
    }

label_805CD1C8:
    ctx->downcount -= 1;
    // 805CD1C8: bc    12, 2, 0x805CD1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD1E8;
        }
    }

label_805CD1CC:
    ctx->downcount -= 1;
    // 805CD1CC: bc    12, 2, 0x805CD1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD1E8;
        }
    }

label_805CD1D0:
    ctx->downcount -= 3;
    // 805CD1D0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD1D4:
    // 805CD1D4: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_805CD1D8:
    // 805CD1D8: bl      0x801ED098
    {
            ctx->lr = 0x805CD1DCu;
            ctx->pc = 0x801ED098u;
            return;
    }

label_805CD1DC:
    ctx->downcount -= 3;
    // 805CD1DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD1E0:
    // 805CD1E0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD1E4:
    // 805CD1E4: bl      0x801ED058
    {
            ctx->lr = 0x805CD1E8u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_805CD1E8:
    ctx->downcount -= 2;
    // 805CD1E8: cmpwi   r31, 0
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

label_805CD1EC:
    // 805CD1EC: bc    4, 1, 0x805CD1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD1F8;
        }
    }

label_805CD1F0:
    ctx->downcount -= 2;
    // 805CD1F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD1F4:
    // 805CD1F4: bl      0x801C1C90
    {
            ctx->lr = 0x805CD1F8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CD1F8:
    ctx->downcount -= 17;
    // 805CD1F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD1FC:
    ctx->pc = 0x805CD1FCu;
    // 805CD1FC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD200:
    ctx->pc = 0x805CD200u;
    // 805CD200: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD204:
    ctx->pc = 0x805CD204u;
    // 805CD204: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD208:
    // 805CD208: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD20C:
    ctx->pc = 0x805CD20Cu;
    // 805CD20C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD210:
    ctx->pc = 0x805CD210u;
    ctx->downcount -= 7;
    // 805CD210: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD214:
    ctx->pc = 0x805CD214u;
    // 805CD214: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD218:
    // 805CD218: cmpwi   r3, 0
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

label_805CD21C:
    ctx->pc = 0x805CD21Cu;
    // 805CD21C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD220:
    ctx->pc = 0x805CD220u;
    // 805CD220: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD224:
    // 805CD224: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD228:
    // 805CD228: bc    12, 2, 0x805CD238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD238;
        }
    }

label_805CD22C:
    ctx->downcount -= 2;
    // 805CD22C: cmpwi   r4, 0
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

label_805CD230:
    // 805CD230: bc    4, 1, 0x805CD238
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD238;
        }
    }

label_805CD234:
    ctx->downcount -= 1;
    // 805CD234: bl      0x801C1C90
    {
            ctx->lr = 0x805CD238u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CD238:
    ctx->downcount -= 7;
    // 805CD238: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD23C:
    ctx->pc = 0x805CD23Cu;
    // 805CD23C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD240:
    ctx->pc = 0x805CD240u;
    // 805CD240: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD244:
    ctx->pc = 0x805CD244u;
    // 805CD244: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD248:
    // 805CD248: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD24C:
    ctx->pc = 0x805CD24Cu;
    // 805CD24C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD250:
    ctx->pc = 0x805CD250u;
    ctx->downcount -= 20;
    // 805CD250: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD254:
    ctx->pc = 0x805CD254u;
    // 805CD254: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD258:
    ctx->pc = 0x805CD258u;
    // 805CD258: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD25C:
    ctx->pc = 0x805CD25Cu;
    // 805CD25C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD260:
    // 805CD260: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CD264:
    // 805CD264: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD268:
    // 805CD268: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD26C:
    // 805CD26C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CD270:
    // 805CD270: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD274:
    // 805CD274: bl      0x803456D0
    {
            ctx->lr = 0x805CD278u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_805CD278:
    ctx->downcount -= 34;
    // 805CD278: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805CD27C:
    ctx->pc = 0x805CD27Cu;
    // 805CD27C: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD280:
    ctx->pc = 0x805CD280u;
    // 805CD280: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD284:
    ctx->pc = 0x805CD284u;
    // 805CD284: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD288:
    // 805CD288: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD28C:
    ctx->pc = 0x805CD28Cu;
    // 805CD28C: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD290:
    ctx->pc = 0x805CD290u;
    // 805CD290: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD294:
    ctx->pc = 0x805CD294u;
    // 805CD294: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD298:
    ctx->pc = 0x805CD298u;
    // 805CD298: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD29C:
    ctx->pc = 0x805CD29Cu;
    // 805CD29C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD2A0:
    ctx->pc = 0x805CD2A0u;
    // 805CD2A0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD2A4:
    ctx->pc = 0x805CD2A4u;
    // 805CD2A4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD2A8:
    ctx->pc = 0x805CD2A8u;
    // 805CD2A8: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CD2AC:
    ctx->pc = 0x805CD2ACu;
    // 805CD2AC: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_805CD2B0:
    ctx->pc = 0x805CD2B0u;
    // 805CD2B0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD2B4:
    ctx->pc = 0x805CD2B4u;
    // 805CD2B4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD2B8:
    ctx->pc = 0x805CD2B8u;
    // 805CD2B8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD2BC:
    ctx->pc = 0x805CD2BCu;
    // 805CD2BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD2C0:
    ctx->pc = 0x805CD2C0u;
    // 805CD2C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD2C4:
    // 805CD2C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CD2C8:
    ctx->pc = 0x805CD2C8u;
    // 805CD2C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD2CC:
    ctx->downcount -= 2;
    // 805CD2CC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CD2D0:
    ctx->pc = 0x805CD2D0u;
    // 805CD2D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD2D4:
    ctx->downcount -= 2;
    // 805CD2D4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CD2D8:
    ctx->pc = 0x805CD2D8u;
    // 805CD2D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD2DC:
    ctx->pc = 0x805CD2DCu;
    ctx->downcount -= 10;
    // 805CD2DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD2E0:
    ctx->pc = 0x805CD2E0u;
    // 805CD2E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD2E4:
    ctx->pc = 0x805CD2E4u;
    // 805CD2E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD2E8:
    ctx->pc = 0x805CD2E8u;
    // 805CD2E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD2EC:
    // 805CD2EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD2F0:
    ctx->pc = 0x805CD2F0u;
    // 805CD2F0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD2F4:
    ctx->pc = 0x805CD2F4u;
    // 805CD2F4: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD2F8:
    ctx->pc = 0x805CD2F8u;
    // 805CD2F8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD2FC:
    ctx->pc = 0x805CD2FCu;
    // 805CD2FC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD300u;
            ctx->pc = target;
            return;
        }
    }

label_805CD300:
    ctx->downcount -= 2;
    // 805CD300: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CD304:
    // 805CD304: bl      0x805CD8E8
    {
            ctx->lr = 0x805CD308u;
            goto label_805CD8E8;
    }

label_805CD308:
    ctx->pc = 0x805CD308u;
    ctx->downcount -= 6;
    // 805CD308: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD30C:
    // 805CD30C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD310:
    ctx->pc = 0x805CD310u;
    // 805CD310: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD314:
    ctx->pc = 0x805CD314u;
    // 805CD314: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD318:
    ctx->pc = 0x805CD318u;
    // 805CD318: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD31Cu;
            ctx->pc = target;
            return;
        }
    }

label_805CD31C:
    ctx->pc = 0x805CD31Cu;
    ctx->downcount -= 6;
    // 805CD31C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD320:
    ctx->pc = 0x805CD320u;
    // 805CD320: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD324:
    ctx->pc = 0x805CD324u;
    // 805CD324: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD328:
    // 805CD328: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD32C:
    ctx->pc = 0x805CD32Cu;
    // 805CD32C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD330:
    ctx->downcount -= 2;
    // 805CD330: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CD334:
    ctx->pc = 0x805CD334u;
    // 805CD334: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD338:
    ctx->downcount -= 2;
    // 805CD338: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CD33C:
    ctx->pc = 0x805CD33Cu;
    // 805CD33C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD340:
    ctx->pc = 0x805CD340u;
    ctx->downcount -= 7;
    // 805CD340: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD344:
    ctx->pc = 0x805CD344u;
    // 805CD344: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD348:
    ctx->pc = 0x805CD348u;
    // 805CD348: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD34C:
    ctx->pc = 0x805CD34Cu;
    // 805CD34C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD350:
    // 805CD350: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD354:
    // 805CD354: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CD358:
    // 805CD358: bl      0x8026FF08
    {
            ctx->lr = 0x805CD35Cu;
            ctx->pc = 0x8026FF08u;
            return;
    }

label_805CD35C:
    ctx->downcount -= 2;
    // 805CD35C: cmpwi   r3, 0
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

label_805CD360:
    // 805CD360: bc    12, 2, 0x805CD38C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD38C;
        }
    }

label_805CD364:
    ctx->pc = 0x805CD364u;
    ctx->downcount -= 6;
    // 805CD364: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD368:
    // 805CD368: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD36C:
    ctx->pc = 0x805CD36Cu;
    // 805CD36C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD370:
    ctx->pc = 0x805CD370u;
    // 805CD370: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD374:
    ctx->pc = 0x805CD374u;
    // 805CD374: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD378u;
            ctx->pc = target;
            return;
        }
    }

label_805CD378:
    ctx->pc = 0x805CD378u;
    ctx->downcount -= 6;
    // 805CD378: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD37C:
    // 805CD37C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD380:
    ctx->pc = 0x805CD380u;
    // 805CD380: lwz     r12, 112(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(112);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD384:
    ctx->pc = 0x805CD384u;
    // 805CD384: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD388:
    ctx->pc = 0x805CD388u;
    // 805CD388: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD38Cu;
            ctx->pc = target;
            return;
        }
    }

label_805CD38C:
    ctx->pc = 0x805CD38Cu;
    ctx->downcount -= 6;
    // 805CD38C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD390:
    ctx->pc = 0x805CD390u;
    // 805CD390: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD394:
    ctx->pc = 0x805CD394u;
    // 805CD394: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD398:
    // 805CD398: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD39C:
    ctx->pc = 0x805CD39Cu;
    // 805CD39C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD3A0:
    ctx->pc = 0x805CD3A0u;
    ctx->downcount -= 10;
    // 805CD3A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD3A4:
    ctx->pc = 0x805CD3A4u;
    // 805CD3A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD3A8:
    ctx->pc = 0x805CD3A8u;
    // 805CD3A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD3AC:
    ctx->pc = 0x805CD3ACu;
    // 805CD3AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD3B0:
    // 805CD3B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD3B4:
    ctx->pc = 0x805CD3B4u;
    // 805CD3B4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD3B8:
    ctx->pc = 0x805CD3B8u;
    // 805CD3B8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD3BC:
    ctx->pc = 0x805CD3BCu;
    // 805CD3BC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD3C0:
    ctx->pc = 0x805CD3C0u;
    // 805CD3C0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD3C4u;
            ctx->pc = target;
            return;
        }
    }

label_805CD3C4:
    ctx->downcount -= 2;
    // 805CD3C4: cmpwi   r3, 0
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

label_805CD3C8:
    // 805CD3C8: bc    4, 2, 0x805CD3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD3D4;
        }
    }

label_805CD3CC:
    ctx->downcount -= 2;
    // 805CD3CC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD3D0:
    // 805CD3D0: bl      0x802777A8
    {
            ctx->lr = 0x805CD3D4u;
            ctx->pc = 0x802777A8u;
            return;
    }

label_805CD3D4:
    ctx->pc = 0x805CD3D4u;
    ctx->downcount -= 6;
    // 805CD3D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD3D8:
    ctx->pc = 0x805CD3D8u;
    // 805CD3D8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD3DC:
    ctx->pc = 0x805CD3DCu;
    // 805CD3DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD3E0:
    // 805CD3E0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD3E4:
    ctx->pc = 0x805CD3E4u;
    // 805CD3E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD3E8:
    ctx->pc = 0x805CD3E8u;
    ctx->downcount -= 10;
    // 805CD3E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD3EC:
    ctx->pc = 0x805CD3ECu;
    // 805CD3EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD3F0:
    ctx->pc = 0x805CD3F0u;
    // 805CD3F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD3F4:
    ctx->pc = 0x805CD3F4u;
    // 805CD3F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD3F8:
    // 805CD3F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD3FC:
    ctx->pc = 0x805CD3FCu;
    // 805CD3FC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD400:
    ctx->pc = 0x805CD400u;
    // 805CD400: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD404:
    ctx->pc = 0x805CD404u;
    // 805CD404: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD408:
    ctx->pc = 0x805CD408u;
    // 805CD408: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD40Cu;
            ctx->pc = target;
            return;
        }
    }

label_805CD40C:
    ctx->downcount -= 2;
    // 805CD40C: cmpwi   r3, 0
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

label_805CD410:
    // 805CD410: bc    4, 2, 0x805CD41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD41C;
        }
    }

label_805CD414:
    ctx->downcount -= 2;
    // 805CD414: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD418:
    // 805CD418: bl      0x80277808
    {
            ctx->lr = 0x805CD41Cu;
            ctx->pc = 0x80277808u;
            return;
    }

label_805CD41C:
    ctx->pc = 0x805CD41Cu;
    ctx->downcount -= 6;
    // 805CD41C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD420:
    ctx->pc = 0x805CD420u;
    // 805CD420: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD424:
    ctx->pc = 0x805CD424u;
    // 805CD424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD428:
    // 805CD428: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD42C:
    ctx->pc = 0x805CD42Cu;
    // 805CD42C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD430:
    ctx->pc = 0x805CD430u;
    ctx->downcount -= 7;
    // 805CD430: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD434:
    ctx->pc = 0x805CD434u;
    // 805CD434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD438:
    ctx->pc = 0x805CD438u;
    // 805CD438: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD43C:
    ctx->pc = 0x805CD43Cu;
    // 805CD43C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD440:
    // 805CD440: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD444:
    // 805CD444: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CD448:
    // 805CD448: bl      0x802700EC
    {
            ctx->lr = 0x805CD44Cu;
            ctx->pc = 0x802700ECu;
            return;
    }

label_805CD44C:
    ctx->downcount -= 2;
    // 805CD44C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD450:
    // 805CD450: bl      0x802A609C
    {
            ctx->lr = 0x805CD454u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_805CD454:
    ctx->pc = 0x805CD454u;
    ctx->downcount -= 6;
    // 805CD454: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD458:
    ctx->pc = 0x805CD458u;
    // 805CD458: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD45C:
    ctx->pc = 0x805CD45Cu;
    // 805CD45C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD460:
    // 805CD460: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD464:
    ctx->pc = 0x805CD464u;
    // 805CD464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD468:
    ctx->pc = 0x805CD468u;
    ctx->downcount -= 9;
    // 805CD468: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD46C:
    ctx->pc = 0x805CD46Cu;
    // 805CD46C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD470:
    // 805CD470: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CD474:
    ctx->pc = 0x805CD474u;
    // 805CD474: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD478:
    ctx->pc = 0x805CD478u;
    // 805CD478: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD47C:
    // 805CD47C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD480:
    ctx->pc = 0x805CD480u;
    // 805CD480: lbz     r4, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CD484:
    // 805CD484: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CD488:
    // 805CD488: bl      0x8027765C
    {
            ctx->lr = 0x805CD48Cu;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_805CD48C:
    ctx->downcount -= 2;
    // 805CD48C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD490:
    // 805CD490: bl      0x802704F8
    {
            ctx->lr = 0x805CD494u;
            ctx->pc = 0x802704F8u;
            return;
    }

label_805CD494:
    ctx->pc = 0x805CD494u;
    ctx->downcount -= 6;
    // 805CD494: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD498:
    // 805CD498: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD49C:
    ctx->pc = 0x805CD49Cu;
    // 805CD49C: lwz     r12, 256(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(256);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD4A0:
    ctx->pc = 0x805CD4A0u;
    // 805CD4A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD4A4:
    ctx->pc = 0x805CD4A4u;
    // 805CD4A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD4A8u;
            ctx->pc = target;
            return;
        }
    }

label_805CD4A8:
    ctx->pc = 0x805CD4A8u;
    ctx->downcount -= 3;
    // 805CD4A8: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD4AC:
    // 805CD4AC: addi    r4, r4, 1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(1);

label_805CD4B0:
    // 805CD4B0: bl      0x803457B8
    {
            ctx->lr = 0x805CD4B4u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CD4B4:
    ctx->pc = 0x805CD4B4u;
    ctx->downcount -= 6;
    // 805CD4B4: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD4B8:
    // 805CD4B8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD4BC:
    ctx->pc = 0x805CD4BCu;
    // 805CD4BC: lwz     r12, 108(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(108);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD4C0:
    ctx->pc = 0x805CD4C0u;
    // 805CD4C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD4C4:
    ctx->pc = 0x805CD4C4u;
    // 805CD4C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD4C8u;
            ctx->pc = target;
            return;
        }
    }

label_805CD4C8:
    ctx->pc = 0x805CD4C8u;
    ctx->downcount -= 6;
    // 805CD4C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD4CC:
    ctx->pc = 0x805CD4CCu;
    // 805CD4CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD4D0:
    ctx->pc = 0x805CD4D0u;
    // 805CD4D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD4D4:
    // 805CD4D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD4D8:
    ctx->pc = 0x805CD4D8u;
    // 805CD4D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD4DC:
    ctx->pc = 0x805CD4DCu;
    ctx->downcount -= 9;
    // 805CD4DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD4E0:
    ctx->pc = 0x805CD4E0u;
    // 805CD4E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD4E4:
    // 805CD4E4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CD4E8:
    ctx->pc = 0x805CD4E8u;
    // 805CD4E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD4EC:
    ctx->pc = 0x805CD4ECu;
    // 805CD4EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD4F0:
    // 805CD4F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD4F4:
    ctx->pc = 0x805CD4F4u;
    // 805CD4F4: lbz     r4, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_805CD4F8:
    // 805CD4F8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CD4FC:
    // 805CD4FC: bl      0x8027765C
    {
            ctx->lr = 0x805CD500u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_805CD500:
    ctx->downcount -= 2;
    // 805CD500: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD504:
    // 805CD504: bl      0x8026FFE0
    {
            ctx->lr = 0x805CD508u;
            ctx->pc = 0x8026FFE0u;
            return;
    }

label_805CD508:
    ctx->pc = 0x805CD508u;
    ctx->downcount -= 4;
    // 805CD508: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD50C:
    // 805CD50C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CD510:
    // 805CD510: addi    r4, r4, 3
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(3);

label_805CD514:
    // 805CD514: bl      0x803457B8
    {
            ctx->lr = 0x805CD518u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CD518:
    ctx->pc = 0x805CD518u;
    ctx->downcount -= 6;
    // 805CD518: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD51C:
    ctx->pc = 0x805CD51Cu;
    // 805CD51C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD520:
    ctx->pc = 0x805CD520u;
    // 805CD520: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD524:
    // 805CD524: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD528:
    ctx->pc = 0x805CD528u;
    // 805CD528: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD52C:
    ctx->pc = 0x805CD52Cu;
    ctx->downcount -= 10;
    // 805CD52C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD530:
    ctx->pc = 0x805CD530u;
    // 805CD530: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD534:
    ctx->pc = 0x805CD534u;
    // 805CD534: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD538:
    ctx->pc = 0x805CD538u;
    // 805CD538: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD53C:
    // 805CD53C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD540:
    ctx->pc = 0x805CD540u;
    // 805CD540: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD544:
    ctx->pc = 0x805CD544u;
    // 805CD544: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CD548:
    ctx->pc = 0x805CD548u;
    // 805CD548: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CD54C:
    ctx->pc = 0x805CD54Cu;
    // 805CD54C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CD550u;
            ctx->pc = target;
            return;
        }
    }

label_805CD550:
    ctx->downcount -= 4;
    // 805CD550: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD554:
    // 805CD554: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD558:
    // 805CD558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CD55C:
    // 805CD55C: bl      0x8027765C
    {
            ctx->lr = 0x805CD560u;
            ctx->pc = 0x8027765Cu;
            return;
    }

label_805CD560:
    ctx->downcount -= 2;
    // 805CD560: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CD564:
    // 805CD564: bl      0x80277768
    {
            ctx->lr = 0x805CD568u;
            ctx->pc = 0x80277768u;
            return;
    }

label_805CD568:
    ctx->pc = 0x805CD568u;
    ctx->downcount -= 3;
    // 805CD568: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD56C:
    // 805CD56C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CD570:
    // 805CD570: bl      0x803457B8
    {
            ctx->lr = 0x805CD574u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CD574:
    ctx->pc = 0x805CD574u;
    ctx->downcount -= 6;
    // 805CD574: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD578:
    ctx->pc = 0x805CD578u;
    // 805CD578: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD57C:
    ctx->pc = 0x805CD57Cu;
    // 805CD57C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD580:
    // 805CD580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD584:
    ctx->pc = 0x805CD584u;
    // 805CD584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD588:
    ctx->pc = 0x805CD588u;
    ctx->downcount -= 23;
    // 805CD588: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD58C:
    ctx->pc = 0x805CD58Cu;
    // 805CD58C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD590:
    ctx->pc = 0x805CD590u;
    // 805CD590: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD594:
    ctx->pc = 0x805CD594u;
    // 805CD594: stmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD598:
    // 805CD598: lis     r30, -32657
    ctx->gpr[30] = ((u32)(s32)(-32657) << 16);

label_805CD59C:
    // 805CD59C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CD5A0:
    // 805CD5A0: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD5A4:
    // 805CD5A4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD5A8:
    // 805CD5A8: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CD5AC:
    // 805CD5AC: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CD5B0:
    // 805CD5B0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD5B4:
    // 805CD5B4: addi    r30, r30, -25832
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-25832);

label_805CD5B8:
    // 805CD5B8: bl      0x802A6748
    {
            ctx->lr = 0x805CD5BCu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_805CD5BC:
    ctx->downcount -= 7;
    // 805CD5BC: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CD5C0:
    // 805CD5C0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CD5C4:
    // 805CD5C4: addi    r4, r4, -25184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-25184);

label_805CD5C8:
    ctx->pc = 0x805CD5C8u;
    // 805CD5C8: stw     r4, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD5CC:
    // 805CD5CC: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_805CD5D0:
    ctx->pc = 0x805CD5D0u;
    // 805CD5D0: stw     r0, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD5D4:
    // 805CD5D4: bl      0x801ED17C
    {
            ctx->lr = 0x805CD5D8u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_805CD5D8:
    ctx->downcount -= 6;
    // 805CD5D8: add   r5, r27, r3
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD5DC:
    // 805CD5DC: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CD5E0:
    // 805CD5E0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD5E4:
    // 805CD5E4: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD5E8:
    // 805CD5E8: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_805CD5EC:
    // 805CD5EC: bl      0x805CD76C
    {
            ctx->lr = 0x805CD5F0u;
            goto label_805CD76C;
    }

label_805CD5F0:
    ctx->downcount -= 3;
    // 805CD5F0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CD5F4:
    // 805CD5F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD5F8:
    // 805CD5F8: bl      0x802A5D48
    {
            ctx->lr = 0x805CD5FCu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_805CD5FC:
    ctx->downcount -= 6;
    // 805CD5FC: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD600:
    // 805CD600: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD604:
    // 805CD604: addi    r4, r30, 344
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(344);

label_805CD608:
    // 805CD608: addi    r5, r30, 356
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(356);

label_805CD60C:
    // 805CD60C: addi    r6, r30, 368
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(368);

label_805CD610:
    // 805CD610: bl      0x805CD88C
    {
            ctx->lr = 0x805CD614u;
            goto label_805CD88C;
    }

label_805CD614:
    ctx->downcount -= 2;
    // 805CD614: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CD618:
    // 805CD618: bl      0x802A609C
    {
            ctx->lr = 0x805CD61Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_805CD61C:
    ctx->downcount -= 5;
    // 805CD61C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_805CD620:
    // 805CD620: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CD624:
    // 805CD624: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CD628:
    // 805CD628: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD62C:
    // 805CD62C: bl      0x8027055C
    {
            ctx->lr = 0x805CD630u;
            ctx->pc = 0x8027055Cu;
            return;
    }

label_805CD630:
    ctx->downcount -= 14;
    // 805CD630: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CD634:
    ctx->pc = 0x805CD634u;
    // 805CD634: stw     r27, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_805CD638:
    // 805CD638: addi    r5, r5, -25448
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-25448);

label_805CD63C:
    // 805CD63C: addi    r4, r30, 296
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(296);

label_805CD640:
    // 805CD640: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_805CD644:
    ctx->pc = 0x805CD644u;
    // 805CD644: stw     r3, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD648:
    // 805CD648: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_805CD64C:
    // 805CD64C: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_805CD650:
    ctx->pc = 0x805CD650u;
    // 805CD650: stw     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CD654:
    // 805CD654: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_805CD658:
    // 805CD658: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CD65C:
    ctx->pc = 0x805CD65Cu;
    // 805CD65C: stw     r6, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CD660:
    ctx->pc = 0x805CD660u;
    // 805CD660: stw     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD664:
    // 805CD664: bl      0x8000770C
    {
            ctx->lr = 0x805CD668u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CD668:
    ctx->downcount -= 6;
    // 805CD668: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_805CD66C:
    ctx->pc = 0x805CD66Cu;
    // 805CD66C: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CD670:
    // 805CD670: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD674:
    // 805CD674: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD678:
    // 805CD678: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD67C:
    // 805CD67C: bl      0x805CD250
    {
            ctx->lr = 0x805CD680u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD250u;
                return;
            }
            goto label_805CD250;
    }

label_805CD680:
    ctx->downcount -= 4;
    // 805CD680: addi    r4, r30, 308
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(308);

label_805CD684:
    // 805CD684: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_805CD688:
    // 805CD688: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CD68C:
    // 805CD68C: bl      0x8000770C
    {
            ctx->lr = 0x805CD690u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CD690:
    ctx->pc = 0x805CD690u;
    ctx->downcount -= 6;
    // 805CD690: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CD694:
    // 805CD694: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD698:
    // 805CD698: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD69C:
    // 805CD69C: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD6A0:
    // 805CD6A0: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_805CD6A4:
    // 805CD6A4: bl      0x805CD250
    {
            ctx->lr = 0x805CD6A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD250u;
                return;
            }
            goto label_805CD250;
    }

label_805CD6A8:
    ctx->downcount -= 4;
    // 805CD6A8: addi    r4, r30, 320
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(320);

label_805CD6AC:
    // 805CD6AC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_805CD6B0:
    // 805CD6B0: li      r3, 148
    ctx->gpr[3] = (u32)(s32)(148);

label_805CD6B4:
    // 805CD6B4: bl      0x8000770C
    {
            ctx->lr = 0x805CD6B8u;
            ctx->pc = 0x8000770Cu;
            return;
    }

label_805CD6B8:
    ctx->pc = 0x805CD6B8u;
    ctx->downcount -= 6;
    // 805CD6B8: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CD6BC:
    // 805CD6BC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD6C0:
    // 805CD6C0: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD6C4:
    // 805CD6C4: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD6C8:
    // 805CD6C8: addi    r6, r6, 2
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(2);

label_805CD6CC:
    // 805CD6CC: bl      0x805CD250
    {
            ctx->lr = 0x805CD6D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD250u;
                return;
            }
            goto label_805CD250;
    }

label_805CD6D0:
    ctx->pc = 0x805CD6D0u;
    ctx->downcount -= 6;
    // 805CD6D0: lwz     r6, 252(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CD6D4:
    // 805CD6D4: addi    r3, r26, 100
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(100);

label_805CD6D8:
    // 805CD6D8: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_805CD6DC:
    // 805CD6DC: addi    r5, r30, 332
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(332);

label_805CD6E0:
    // 805CD6E0: addi    r6, r6, 3
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(3);

label_805CD6E4:
    // 805CD6E4: bl      0x805CD250
    {
            ctx->lr = 0x805CD6E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD250u;
                return;
            }
            goto label_805CD250;
    }

label_805CD6E8:
    ctx->downcount -= 17;
    // 805CD6E8: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_805CD6EC:
    ctx->pc = 0x805CD6ECu;
    // 805CD6EC: lmw     r26, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD6F0:
    ctx->pc = 0x805CD6F0u;
    // 805CD6F0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD6F4:
    ctx->pc = 0x805CD6F4u;
    // 805CD6F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD6F8:
    // 805CD6F8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_805CD6FC:
    ctx->pc = 0x805CD6FCu;
    // 805CD6FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD700:
    ctx->pc = 0x805CD700u;
    ctx->downcount -= 1;
    // 805CD700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD704:
    ctx->pc = 0x805CD704u;
    ctx->downcount -= 18;
    // 805CD704: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD708:
    ctx->pc = 0x805CD708u;
    // 805CD708: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD70C:
    // 805CD70C: cmpwi   r3, 0
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

label_805CD710:
    ctx->pc = 0x805CD710u;
    // 805CD710: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD714:
    ctx->pc = 0x805CD714u;
    // 805CD714: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD718:
    // 805CD718: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD71C:
    // 805CD71C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD720:
    // 805CD720: bc    12, 2, 0x805CD750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD750;
        }
    }

label_805CD724:
    ctx->downcount -= 1;
    // 805CD724: bc    12, 2, 0x805CD740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD740;
        }
    }

label_805CD728:
    ctx->downcount -= 3;
    // 805CD728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD72C:
    // 805CD72C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CD730:
    // 805CD730: bl      0x801F5C24
    {
            ctx->lr = 0x805CD734u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805CD734:
    ctx->downcount -= 3;
    // 805CD734: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD738:
    // 805CD738: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD73C:
    // 805CD73C: bl      0x805CD1A8
    {
            ctx->lr = 0x805CD740u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD1A8u;
                return;
            }
            goto label_805CD1A8;
    }

label_805CD740:
    ctx->downcount -= 2;
    // 805CD740: cmpwi   r31, 0
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

label_805CD744:
    // 805CD744: bc    4, 1, 0x805CD750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CD750;
        }
    }

label_805CD748:
    ctx->downcount -= 2;
    // 805CD748: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD74C:
    // 805CD74C: bl      0x801C1C90
    {
            ctx->lr = 0x805CD750u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CD750:
    ctx->downcount -= 17;
    // 805CD750: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CD754:
    ctx->pc = 0x805CD754u;
    // 805CD754: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD758:
    ctx->pc = 0x805CD758u;
    // 805CD758: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD75C:
    ctx->pc = 0x805CD75Cu;
    // 805CD75C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD760:
    // 805CD760: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD764:
    ctx->pc = 0x805CD764u;
    // 805CD764: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD768:
    ctx->pc = 0x805CD768u;
    ctx->downcount -= 1;
    // 805CD768: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD76C:
    ctx->pc = 0x805CD76Cu;
    ctx->downcount -= 17;
    // 805CD76C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD770:
    ctx->pc = 0x805CD770u;
    // 805CD770: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD774:
    ctx->pc = 0x805CD774u;
    // 805CD774: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD778:
    ctx->pc = 0x805CD778u;
    // 805CD778: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD77C:
    // 805CD77C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD780:
    // 805CD780: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CD784:
    // 805CD784: bl      0x803457F4
    {
            ctx->lr = 0x805CD788u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_805CD788:
    ctx->pc = 0x805CD788u;
    ctx->downcount -= 11;
    // 805CD788: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD78C:
    // 805CD78C: lis     r3, -32657
    ctx->gpr[3] = ((u32)(s32)(-32657) << 16);

label_805CD790:
    // 805CD790: addi    r3, r3, -24940
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24940);

label_805CD794:
    ctx->pc = 0x805CD794u;
    // 805CD794: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD798:
    // 805CD798: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD79C:
    ctx->pc = 0x805CD79Cu;
    // 805CD79C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD7A0:
    ctx->pc = 0x805CD7A0u;
    // 805CD7A0: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CD7A4:
    // 805CD7A4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CD7A8:
    // 805CD7A8: bl      0x801C1C80
    {
            ctx->lr = 0x805CD7ACu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CD7AC:
    ctx->pc = 0x805CD7ACu;
    ctx->downcount -= 8;
    // 805CD7AC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD7B0:
    // 805CD7B0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CD7B4:
    ctx->pc = 0x805CD7B4u;
    // 805CD7B4: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD7B8:
    // 805CD7B8: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD7BC:
    ctx->pc = 0x805CD7BCu;
    // 805CD7BC: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD7C0:
    // 805CD7C0: bl      0x801C1C80
    {
            ctx->lr = 0x805CD7C4u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CD7C4:
    ctx->pc = 0x805CD7C4u;
    ctx->downcount -= 8;
    // 805CD7C4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD7C8:
    // 805CD7C8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_805CD7CC:
    ctx->pc = 0x805CD7CCu;
    // 805CD7CC: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD7D0:
    // 805CD7D0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD7D4:
    ctx->pc = 0x805CD7D4u;
    // 805CD7D4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD7D8:
    // 805CD7D8: bl      0x801C1C80
    {
            ctx->lr = 0x805CD7DCu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_805CD7DC:
    ctx->downcount -= 6;
    // 805CD7DC: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_805CD7E0:
    ctx->pc = 0x805CD7E0u;
    // 805CD7E0: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD7E4:
    // 805CD7E4: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_805CD7E8:
    // 805CD7E8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CD7EC:
    // 805CD7EC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_805CD7F0:
    // 805CD7F0: b       0x805CD85C
    {
            goto label_805CD85C;
    }

label_805CD7F4:
    loop_805CD7F4(ctx);
    if (ctx->pc == 0x805CD868u) goto label_805CD868;
    return;
label_805CD7F8:
    // 805CD7F8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_805CD7FC:
    ctx->pc = 0x805CD7FCu;
    // 805CD7FC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD800:
    // 805CD800: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD804:
    ctx->pc = 0x805CD804u;
    // 805CD804: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD808:
    ctx->pc = 0x805CD808u;
    // 805CD808: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD80C:
    ctx->pc = 0x805CD80Cu;
    // 805CD80C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD810:
    ctx->pc = 0x805CD810u;
    // 805CD810: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD814:
    ctx->pc = 0x805CD814u;
    // 805CD814: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD818:
    ctx->pc = 0x805CD818u;
    // 805CD818: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD81C:
    ctx->pc = 0x805CD81Cu;
    // 805CD81C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD820:
    // 805CD820: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD824:
    ctx->pc = 0x805CD824u;
    // 805CD824: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD828:
    ctx->pc = 0x805CD828u;
    // 805CD828: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD82C:
    ctx->pc = 0x805CD82Cu;
    // 805CD82C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD830:
    ctx->pc = 0x805CD830u;
    // 805CD830: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD834:
    ctx->pc = 0x805CD834u;
    // 805CD834: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD838:
    ctx->pc = 0x805CD838u;
    // 805CD838: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD83C:
    ctx->pc = 0x805CD83Cu;
    // 805CD83C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD840:
    // 805CD840: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD844:
    ctx->pc = 0x805CD844u;
    // 805CD844: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD848:
    ctx->pc = 0x805CD848u;
    // 805CD848: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD84C:
    // 805CD84C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_805CD850:
    ctx->pc = 0x805CD850u;
    // 805CD850: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD854:
    ctx->pc = 0x805CD854u;
    // 805CD854: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD858:
    ctx->pc = 0x805CD858u;
    // 805CD858: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD85C:
    ctx->pc = 0x805CD85Cu;
    ctx->downcount -= 3;
    // 805CD85C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD860:
    // 805CD860: cmpw    r7, r0
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

label_805CD864:
    // 805CD864: bc    12, 0, 0x805CD7F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD7F4u;
                return;
            }
            goto label_805CD7F4;
        }
    }

label_805CD868:
    ctx->downcount -= 3;
    // 805CD868: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD86C:
    // 805CD86C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CD870:
    // 805CD870: bl      0x803457CC
    {
            ctx->lr = 0x805CD874u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_805CD874:
    ctx->downcount -= 17;
    // 805CD874: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD878:
    ctx->pc = 0x805CD878u;
    // 805CD878: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD87C:
    ctx->pc = 0x805CD87Cu;
    // 805CD87C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD880:
    ctx->pc = 0x805CD880u;
    // 805CD880: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD884:
    // 805CD884: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD888:
    ctx->pc = 0x805CD888u;
    // 805CD888: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD88C:
    ctx->pc = 0x805CD88Cu;
    ctx->downcount -= 19;
    // 805CD88C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD890:
    ctx->pc = 0x805CD890u;
    // 805CD890: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD894:
    ctx->pc = 0x805CD894u;
    // 805CD894: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD898:
    ctx->pc = 0x805CD898u;
    // 805CD898: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CD89C:
    // 805CD89C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CD8A0:
    // 805CD8A0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CD8A4:
    // 805CD8A4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD8A8:
    // 805CD8A8: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD8AC:
    // 805CD8AC: bl      0x805CD250
    {
            ctx->lr = 0x805CD8B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD250u;
                return;
            }
            goto label_805CD250;
    }

label_805CD8B0:
    ctx->downcount -= 27;
    // 805CD8B0: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_805CD8B4:
    ctx->pc = 0x805CD8B4u;
    // 805CD8B4: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CD8B8:
    ctx->pc = 0x805CD8B8u;
    // 805CD8B8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD8BC:
    ctx->pc = 0x805CD8BCu;
    // 805CD8BC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD8C0:
    // 805CD8C0: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_805CD8C4:
    ctx->pc = 0x805CD8C4u;
    // 805CD8C4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD8C8:
    ctx->pc = 0x805CD8C8u;
    // 805CD8C8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CD8CC:
    ctx->pc = 0x805CD8CCu;
    // 805CD8CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CD8D0:
    ctx->pc = 0x805CD8D0u;
    // 805CD8D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD8D4:
    ctx->pc = 0x805CD8D4u;
    // 805CD8D4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CD8D8:
    ctx->pc = 0x805CD8D8u;
    // 805CD8D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD8DC:
    ctx->pc = 0x805CD8DCu;
    // 805CD8DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD8E0:
    // 805CD8E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CD8E4:
    ctx->pc = 0x805CD8E4u;
    // 805CD8E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD8E8:
    ctx->pc = 0x805CD8E8u;
    ctx->downcount -= 8;
    // 805CD8E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD8EC:
    ctx->pc = 0x805CD8ECu;
    // 805CD8EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD8F0:
    ctx->pc = 0x805CD8F0u;
    // 805CD8F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD8F4:
    ctx->pc = 0x805CD8F4u;
    // 805CD8F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD8F8:
    // 805CD8F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD8FC:
    ctx->pc = 0x805CD8FCu;
    // 805CD8FC: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CD900:
    // 805CD900: cmpwi   r0, 0
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

label_805CD904:
    // 805CD904: bc    12, 2, 0x805CD928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD928;
        }
    }

label_805CD908:
    ctx->pc = 0x805CD908u;
    ctx->downcount -= 3;
    // 805CD908: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CD90C:
    // 805CD90C: cmpwi   r0, 0
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

label_805CD910:
    // 805CD910: bc    12, 2, 0x805CD918
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD918;
        }
    }

label_805CD914:
    ctx->downcount -= 1;
    // 805CD914: bl      0x805CDA0C
    {
            ctx->lr = 0x805CD918u;
            goto label_805CDA0C;
    }

label_805CD918:
    ctx->downcount -= 2;
    // 805CD918: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD91C:
    // 805CD91C: bl      0x803456D4
    {
            ctx->lr = 0x805CD920u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_805CD920:
    ctx->downcount -= 2;
    // 805CD920: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD924:
    // 805CD924: bl      0x805CD94C
    {
            ctx->lr = 0x805CD928u;
            goto label_805CD94C;
    }

label_805CD928:
    ctx->downcount -= 2;
    // 805CD928: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD92C:
    // 805CD92C: bl      0x805CD9AC
    {
            ctx->lr = 0x805CD930u;
            goto label_805CD9AC;
    }

label_805CD930:
    ctx->downcount -= 2;
    // 805CD930: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CD934:
    // 805CD934: bl      0x803456F8
    {
            ctx->lr = 0x805CD938u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_805CD938:
    ctx->pc = 0x805CD938u;
    ctx->downcount -= 6;
    // 805CD938: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD93C:
    ctx->pc = 0x805CD93Cu;
    // 805CD93C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD940:
    ctx->pc = 0x805CD940u;
    // 805CD940: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD944:
    // 805CD944: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD948:
    ctx->pc = 0x805CD948u;
    // 805CD948: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD94C:
    ctx->pc = 0x805CD94Cu;
    ctx->downcount -= 12;
    // 805CD94C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD950:
    ctx->pc = 0x805CD950u;
    // 805CD950: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD954:
    ctx->pc = 0x805CD954u;
    // 805CD954: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD958:
    ctx->pc = 0x805CD958u;
    // 805CD958: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD95C:
    // 805CD95C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD960:
    ctx->pc = 0x805CD960u;
    // 805CD960: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD964:
    ctx->pc = 0x805CD964u;
    // 805CD964: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD968:
    // 805CD968: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD96C:
    // 805CD96C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CD970:
    // 805CD970: bl      0x800076B4
    {
            ctx->lr = 0x805CD974u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CD974:
    ctx->downcount -= 2;
    // 805CD974: cmpwi   r3, 0
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

label_805CD978:
    // 805CD978: bc    12, 2, 0x805CD998
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD998;
        }
    }

label_805CD97C:
    ctx->pc = 0x805CD97Cu;
    ctx->downcount -= 8;
    // 805CD97C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD980:
    ctx->pc = 0x805CD980u;
    // 805CD980: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD984:
    // 805CD984: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD988:
    ctx->pc = 0x805CD988u;
    // 805CD988: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD98C:
    // 805CD98C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CD990:
    // 805CD990: bl      0x800076E4
    {
            ctx->lr = 0x805CD994u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CD994:
    ctx->downcount -= 1;
    // 805CD994: nop
    // nop

label_805CD998:
    ctx->pc = 0x805CD998u;
    ctx->downcount -= 6;
    // 805CD998: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD99C:
    ctx->pc = 0x805CD99Cu;
    // 805CD99C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CD9A0:
    ctx->pc = 0x805CD9A0u;
    // 805CD9A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CD9A4:
    // 805CD9A4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CD9A8:
    ctx->pc = 0x805CD9A8u;
    // 805CD9A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CD9AC:
    ctx->pc = 0x805CD9ACu;
    ctx->downcount -= 12;
    // 805CD9AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CD9B0:
    ctx->pc = 0x805CD9B0u;
    // 805CD9B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CD9B4:
    ctx->pc = 0x805CD9B4u;
    // 805CD9B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CD9B8:
    ctx->pc = 0x805CD9B8u;
    // 805CD9B8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CD9BC:
    // 805CD9BC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CD9C0:
    ctx->pc = 0x805CD9C0u;
    // 805CD9C0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD9C4:
    ctx->pc = 0x805CD9C4u;
    // 805CD9C4: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD9C8:
    // 805CD9C8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD9CC:
    // 805CD9CC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CD9D0:
    // 805CD9D0: bl      0x800076B4
    {
            ctx->lr = 0x805CD9D4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CD9D4:
    ctx->downcount -= 2;
    // 805CD9D4: cmpwi   r3, 0
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

label_805CD9D8:
    // 805CD9D8: bc    12, 2, 0x805CD9F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CD9F8;
        }
    }

label_805CD9DC:
    ctx->pc = 0x805CD9DCu;
    ctx->downcount -= 8;
    // 805CD9DC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD9E0:
    ctx->pc = 0x805CD9E0u;
    // 805CD9E0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CD9E4:
    // 805CD9E4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CD9E8:
    ctx->pc = 0x805CD9E8u;
    // 805CD9E8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CD9EC:
    // 805CD9EC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CD9F0:
    // 805CD9F0: bl      0x800076E4
    {
            ctx->lr = 0x805CD9F4u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CD9F4:
    ctx->downcount -= 1;
    // 805CD9F4: nop
    // nop

label_805CD9F8:
    ctx->pc = 0x805CD9F8u;
    ctx->downcount -= 6;
    // 805CD9F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CD9FC:
    ctx->pc = 0x805CD9FCu;
    // 805CD9FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDA00:
    ctx->pc = 0x805CDA00u;
    // 805CDA00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDA04:
    // 805CDA04: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDA08:
    ctx->pc = 0x805CDA08u;
    // 805CDA08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDA0C:
    ctx->pc = 0x805CDA0Cu;
    ctx->downcount -= 12;
    // 805CDA0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDA10:
    ctx->pc = 0x805CDA10u;
    // 805CDA10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDA14:
    ctx->pc = 0x805CDA14u;
    // 805CDA14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDA18:
    ctx->pc = 0x805CDA18u;
    // 805CDA18: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CDA1C:
    // 805CDA1C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDA20:
    ctx->pc = 0x805CDA20u;
    // 805CDA20: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDA24:
    ctx->pc = 0x805CDA24u;
    // 805CDA24: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDA28:
    // 805CDA28: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CDA2C:
    // 805CDA2C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CDA30:
    // 805CDA30: bl      0x800076B4
    {
            ctx->lr = 0x805CDA34u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_805CDA34:
    ctx->downcount -= 2;
    // 805CDA34: cmpwi   r3, 0
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

label_805CDA38:
    // 805CDA38: bc    12, 2, 0x805CDA58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDA58;
        }
    }

label_805CDA3C:
    ctx->pc = 0x805CDA3Cu;
    ctx->downcount -= 8;
    // 805CDA3C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDA40:
    ctx->pc = 0x805CDA40u;
    // 805CDA40: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDA44:
    // 805CDA44: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CDA48:
    ctx->pc = 0x805CDA48u;
    // 805CDA48: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDA4C:
    // 805CDA4C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_805CDA50:
    // 805CDA50: bl      0x800076E4
    {
            ctx->lr = 0x805CDA54u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_805CDA54:
    ctx->downcount -= 1;
    // 805CDA54: nop
    // nop

label_805CDA58:
    ctx->pc = 0x805CDA58u;
    ctx->downcount -= 6;
    // 805CDA58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDA5C:
    ctx->pc = 0x805CDA5Cu;
    // 805CDA5C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDA60:
    ctx->pc = 0x805CDA60u;
    // 805CDA60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDA64:
    // 805CDA64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDA68:
    ctx->pc = 0x805CDA68u;
    // 805CDA68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDA6C:
    ctx->downcount -= 2;
    // 805CDA6C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CDA70:
    // 805CDA70: b       0x805CD1A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD1A8u;
                return;
            }
            goto label_805CD1A8;
    }

label_805CDA74:
    ctx->downcount -= 2;
    // 805CDA74: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CDA78:
    // 805CDA78: b       0x805CD144
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD144u;
                return;
            }
            goto label_805CD144;
    }

label_805CDA7C:
    ctx->downcount -= 2;
    // 805CDA7C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDA80:
    // 805CDA80: b       0x805CD144
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD144u;
                return;
            }
            goto label_805CD144;
    }

label_805CDA84:
    ctx->downcount -= 2;
    // 805CDA84: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CDA88:
    // 805CDA88: b       0x805CD704
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD704u;
                return;
            }
            goto label_805CD704;
    }

label_805CDA8C:
    ctx->downcount -= 2;
    // 805CDA8C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDA90:
    // 805CDA90: b       0x805CCF7C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCF7Cu;
                return;
            }
            goto label_805CCF7C;
    }

label_805CDA94:
    ctx->downcount -= 2;
    // 805CDA94: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDA98:
    // 805CDA98: b       0x805CD468
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD468u;
                return;
            }
            goto label_805CD468;
    }

label_805CDA9C:
    ctx->downcount -= 2;
    // 805CDA9C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDAA0:
    // 805CDAA0: b       0x805CD704
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD704u;
                return;
            }
            goto label_805CD704;
    }

label_805CDAA4:
    ctx->downcount -= 2;
    // 805CDAA4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDAA8:
    // 805CDAA8: b       0x805CD338
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD338u;
                return;
            }
            goto label_805CD338;
    }

label_805CDAAC:
    ctx->downcount -= 2;
    // 805CDAAC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDAB0:
    // 805CDAB0: b       0x805CD330
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CD330u;
                return;
            }
            goto label_805CD330;
    }

label_805CDAB4:
    ctx->downcount -= 2;
    // 805CDAB4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDAB8:
    // 805CDAB8: b       0x805CCE88
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CCE88u;
                return;
            }
            goto label_805CCE88;
    }

label_805CDABC:
    ctx->pc = 0x805CDABCu;
    ctx->downcount -= 21;
    // 805CDABC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDAC0:
    ctx->pc = 0x805CDAC0u;
    // 805CDAC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDAC4:
    ctx->pc = 0x805CDAC4u;
    // 805CDAC4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDAC8:
    ctx->pc = 0x805CDAC8u;
    // 805CDAC8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CDACC:
    // 805CDACC: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_805CDAD0:
    // 805CDAD0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDAD4:
    // 805CDAD4: addi    r4, r31, 22780
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22780);

label_805CDAD8:
    ctx->pc = 0x805CDAD8u;
    // 805CDAD8: lwz     r5, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CDADC:
    // 805CDADC: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDAE0:
    // 805CDAE0: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CDAE4:
    // 805CDAE4: bl      0x80370BD4
    {
            ctx->lr = 0x805CDAE8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CDAE8:
    ctx->pc = 0x805CDAE8u;
    ctx->downcount -= 3;
    // 805CDAE8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDAEC:
    ctx->pc = 0x805CDAECu;
    // 805CDAEC: lwz     r4, 256(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDAF0:
    // 805CDAF0: bl      0x80263B48
    {
            ctx->lr = 0x805CDAF4u;
            ctx->pc = 0x80263B48u;
            return;
    }

label_805CDAF4:
    ctx->downcount -= 2;
    // 805CDAF4: cmpwi   r3, 0
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

label_805CDAF8:
    // 805CDAF8: bc    12, 2, 0x805CDB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDB7C;
        }
    }

label_805CDAFC:
    ctx->downcount -= 4;
    // 805CDAFC: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_805CDB00:
    // 805CDB00: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_805CDB04:
    // 805CDB04: addi    r4, r4, -27344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27344);

label_805CDB08:
    // 805CDB08: bl      0x8026F970
    {
            ctx->lr = 0x805CDB0Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CDB0C:
    ctx->pc = 0x805CDB0Cu;
    ctx->downcount -= 6;
    // 805CDB0C: lwz     r5, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CDB10:
    // 805CDB10: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDB14:
    // 805CDB14: addi    r4, r31, 22780
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22780);

label_805CDB18:
    // 805CDB18: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDB1C:
    // 805CDB1C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CDB20:
    // 805CDB20: bl      0x80370BD4
    {
            ctx->lr = 0x805CDB24u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CDB24:
    ctx->pc = 0x805CDB24u;
    ctx->downcount -= 3;
    // 805CDB24: lwz     r31, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDB28:
    // 805CDB28: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_805CDB2C:
    // 805CDB2C: bl      0x8026F6CC
    {
            ctx->lr = 0x805CDB30u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_805CDB30:
    ctx->pc = 0x805CDB30u;
    ctx->downcount -= 5;
    // 805CDB30: lwz     r4, 256(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDB34:
    // 805CDB34: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDB38:
    // 805CDB38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CDB3C:
    // 805CDB3C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CDB40:
    // 805CDB40: bl      0x80263BF0
    {
            ctx->lr = 0x805CDB44u;
            ctx->pc = 0x80263BF0u;
            return;
    }

label_805CDB44:
    ctx->downcount -= 2;
    // 805CDB44: cmpwi   r3, 0
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

label_805CDB48:
    // 805CDB48: bc    12, 2, 0x805CDB7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDB7C;
        }
    }

label_805CDB4C:
    ctx->downcount -= 3;
    // 805CDB4C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_805CDB50:
    // 805CDB50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDB54:
    // 805CDB54: bl      0x8026F69C
    {
            ctx->lr = 0x805CDB58u;
            ctx->pc = 0x8026F69Cu;
            return;
    }

label_805CDB58:
    ctx->downcount -= 4;
    // 805CDB58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDB5C:
    // 805CDB5C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_805CDB60:
    // 805CDB60: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CDB64:
    // 805CDB64: bl      0x8026F6AC
    {
            ctx->lr = 0x805CDB68u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CDB68:
    ctx->downcount -= 1;
    // 805CDB68: bl      0x8025EBF0
    {
            ctx->lr = 0x805CDB6Cu;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_805CDB6C:
    ctx->downcount -= 4;
    // 805CDB6C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CDB70:
    // 805CDB70: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CDB74:
    // 805CDB74: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CDB78:
    // 805CDB78: bl      0x802629E4
    {
            ctx->lr = 0x805CDB7Cu;
            ctx->pc = 0x802629E4u;
            return;
    }

label_805CDB7C:
    ctx->pc = 0x805CDB7Cu;
    ctx->downcount -= 16;
    // 805CDB7C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CDB80:
    ctx->pc = 0x805CDB80u;
    // 805CDB80: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDB84:
    ctx->pc = 0x805CDB84u;
    // 805CDB84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDB88:
    // 805CDB88: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CDB8C:
    ctx->pc = 0x805CDB8Cu;
    // 805CDB8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDB90:
    ctx->pc = 0x805CDB90u;
    ctx->downcount -= 10;
    // 805CDB90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDB94:
    ctx->pc = 0x805CDB94u;
    // 805CDB94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDB98:
    // 805CDB98: lis     r4, -32663
    ctx->gpr[4] = ((u32)(s32)(-32663) << 16);

label_805CDB9C:
    ctx->pc = 0x805CDB9Cu;
    // 805CDB9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDBA0:
    // 805CDBA0: addi    r4, r4, -27344
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-27344);

label_805CDBA4:
    ctx->pc = 0x805CDBA4u;
    // 805CDBA4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CDBA8:
    ctx->pc = 0x805CDBA8u;
    // 805CDBA8: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CDBAC:
    // 805CDBAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDBB0:
    // 805CDBB0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CDBB4:
    // 805CDBB4: bl      0x8026F970
    {
            ctx->lr = 0x805CDBB8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_805CDBB8:
    ctx->downcount -= 4;
    // 805CDBB8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDBBC:
    // 805CDBBC: addi    r3, r3, 132
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(132);

label_805CDBC0:
    // 805CDBC0: addi    r4, r30, 260
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(260);

label_805CDBC4:
    // 805CDBC4: bl      0x8003EA50
    {
            ctx->lr = 0x805CDBC8u;
            ctx->pc = 0x8003EA50u;
            return;
    }

label_805CDBC8:
    ctx->downcount -= 3;
    // 805CDBC8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CDBCC:
    // 805CDBCC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_805CDBD0:
    // 805CDBD0: bl      0x80196F80
    {
            ctx->lr = 0x805CDBD4u;
            ctx->pc = 0x80196F80u;
            return;
    }

label_805CDBD4:
    ctx->pc = 0x805CDBD4u;
    ctx->downcount -= 15;
    // 805CDBD4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDBD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDBD8:
    ctx->pc = 0x805CDBD8u;
    // 805CDBD8: stfs     f0, 308(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CDBD8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDBDC:
    ctx->pc = 0x805CDBDCu;
    // 805CDBDC: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDBDCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDBE0:
    ctx->pc = 0x805CDBE0u;
    // 805CDBE0: stfs     f0, 312(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CDBE0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(312);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDBE4:
    ctx->pc = 0x805CDBE4u;
    // 805CDBE4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDBE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDBE8:
    ctx->pc = 0x805CDBE8u;
    // 805CDBE8: stfs     f0, 316(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CDBE8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(316);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDBEC:
    ctx->pc = 0x805CDBECu;
    // 805CDBEC: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDBECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDBF0:
    ctx->pc = 0x805CDBF0u;
    // 805CDBF0: stfs     f0, 320(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CDBF0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDBF4:
    ctx->pc = 0x805CDBF4u;
    // 805CDBF4: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDBF8:
    ctx->pc = 0x805CDBF8u;
    // 805CDBF8: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_805CDBFC:
    ctx->pc = 0x805CDBFCu;
    // 805CDBFC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDC00:
    ctx->pc = 0x805CDC00u;
    // 805CDC00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDC04:
    // 805CDC04: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CDC08:
    ctx->pc = 0x805CDC08u;
    // 805CDC08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDC0C:
    ctx->pc = 0x805CDC0Cu;
    ctx->downcount -= 11;
    // 805CDC0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDC10:
    ctx->pc = 0x805CDC10u;
    // 805CDC10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDC14:
    // 805CDC14: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_805CDC18:
    ctx->pc = 0x805CDC18u;
    // 805CDC18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDC1C:
    // 805CDC1C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_805CDC20:
    ctx->pc = 0x805CDC20u;
    // 805CDC20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CDC24:
    // 805CDC24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDC28:
    ctx->pc = 0x805CDC28u;
    // 805CDC28: lwz     r5, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CDC2C:
    // 805CDC2C: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDC30:
    // 805CDC30: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CDC34:
    // 805CDC34: bl      0x80370BD4
    {
            ctx->lr = 0x805CDC38u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CDC38:
    ctx->pc = 0x805CDC38u;
    ctx->downcount -= 4;
    // 805CDC38: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDC3C:
    // 805CDC3C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CDC40:
    ctx->pc = 0x805CDC40u;
    // 805CDC40: lwz     r4, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDC44:
    // 805CDC44: bl      0x80263D38
    {
            ctx->lr = 0x805CDC48u;
            ctx->pc = 0x80263D38u;
            return;
    }

label_805CDC48:
    ctx->pc = 0x805CDC48u;
    ctx->downcount -= 6;
    // 805CDC48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDC4C:
    ctx->pc = 0x805CDC4Cu;
    // 805CDC4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDC50:
    ctx->pc = 0x805CDC50u;
    // 805CDC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDC54:
    // 805CDC54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDC58:
    ctx->pc = 0x805CDC58u;
    // 805CDC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDC5C:
    ctx->pc = 0x805CDC5Cu;
    ctx->downcount -= 11;
    // 805CDC5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDC60:
    ctx->pc = 0x805CDC60u;
    // 805CDC60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDC64:
    // 805CDC64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDC68:
    // 805CDC68: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CDC6C:
    ctx->pc = 0x805CDC6Cu;
    // 805CDC6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDC70:
    // 805CDC70: li      r7, 1024
    ctx->gpr[7] = (u32)(s32)(1024);

label_805CDC74:
    ctx->pc = 0x805CDC74u;
    // 805CDC74: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CDC78:
    // 805CDC78: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDC7C:
    ctx->pc = 0x805CDC7Cu;
    // 805CDC7C: lwz     r5, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CDC80:
    // 805CDC80: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CDC84:
    // 805CDC84: bl      0x8026FCD4
    {
            ctx->lr = 0x805CDC88u;
            ctx->pc = 0x8026FCD4u;
            return;
    }

label_805CDC88:
    ctx->downcount -= 2;
    // 805CDC88: cmpwi   r3, 0
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

label_805CDC8C:
    // 805CDC8C: bc    12, 2, 0x805CDCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDCEC;
        }
    }

label_805CDC90:
    ctx->downcount -= 2;
    // 805CDC90: li      r3, 451
    ctx->gpr[3] = (u32)(s32)(451);

label_805CDC94:
    // 805CDC94: bl      0x802B73BC
    {
            ctx->lr = 0x805CDC98u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CDC98:
    ctx->pc = 0x805CDC98u;
    ctx->downcount -= 6;
    // 805CDC98: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDC9C:
    // 805CDC9C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_805CDCA0:
    // 805CDCA0: addi    r4, r4, 21472
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21472);

label_805CDCA4:
    // 805CDCA4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDCA8:
    // 805CDCA8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CDCAC:
    // 805CDCAC: bl      0x80370BD4
    {
            ctx->lr = 0x805CDCB0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CDCB0:
    ctx->pc = 0x805CDCB0u;
    ctx->downcount -= 3;
    // 805CDCB0: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDCB4:
    ctx->pc = 0x805CDCB4u;
    // 805CDCB4: lwz     r4, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDCB8:
    // 805CDCB8: bl      0x802779A0
    {
            ctx->lr = 0x805CDCBCu;
            ctx->pc = 0x802779A0u;
            return;
    }

label_805CDCBC:
    ctx->downcount -= 4;
    // 805CDCBC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805CDCC0:
    // 805CDCC0: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_805CDCC4:
    // 805CDCC4: li      r3, 452
    ctx->gpr[3] = (u32)(s32)(452);

label_805CDCC8:
    // 805CDCC8: bl      0x802B735C
    {
            ctx->lr = 0x805CDCCCu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_805CDCCC:
    ctx->pc = 0x805CDCCCu;
    ctx->downcount -= 6;
    // 805CDCCC: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CDCD0:
    // 805CDCD0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CDCD4:
    ctx->pc = 0x805CDCD4u;
    // 805CDCD4: lwz     r12, 116(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(116);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CDCD8:
    ctx->pc = 0x805CDCD8u;
    // 805CDCD8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CDCDC:
    ctx->pc = 0x805CDCDCu;
    // 805CDCDC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CDCE0u;
            ctx->pc = target;
            return;
        }
    }

label_805CDCE0:
    ctx->pc = 0x805CDCE0u;
    ctx->downcount -= 3;
    // 805CDCE0: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CDCE4:
    // 805CDCE4: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_805CDCE8:
    // 805CDCE8: bl      0x803457B8
    {
            ctx->lr = 0x805CDCECu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CDCEC:
    ctx->pc = 0x805CDCECu;
    ctx->downcount -= 6;
    // 805CDCEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDCF0:
    ctx->pc = 0x805CDCF0u;
    // 805CDCF0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDCF4:
    ctx->pc = 0x805CDCF4u;
    // 805CDCF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDCF8:
    // 805CDCF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDCFC:
    ctx->pc = 0x805CDCFCu;
    // 805CDCFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDD00:
    ctx->downcount -= 2;
    // 805CDD00: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_805CDD04:
    // 805CDD04: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_805CDD08:
    ctx->pc = 0x805CDD08u;
    ctx->downcount -= 1;
    // 805CDD08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDD0C:
    ctx->pc = 0x805CDD0Cu;
    ctx->downcount -= 24;
    // 805CDD0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDD10:
    ctx->pc = 0x805CDD10u;
    // 805CDD10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDD14:
    // 805CDD14: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CDD18:
    // 805CDD18: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CDD1C:
    ctx->pc = 0x805CDD1Cu;
    // 805CDD1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDD20:
    // 805CDD20: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CDD24:
    ctx->pc = 0x805CDD24u;
    // 805CDD24: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CDD28:
    // 805CDD28: lis     r31, -32663
    ctx->gpr[31] = ((u32)(s32)(-32663) << 16);

label_805CDD2C:
    // 805CDD2C: addi    r31, r31, -27344
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-27344);

label_805CDD30:
    // 805CDD30: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDD34:
    // 805CDD34: addi    r4, r31, 9
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(9);

label_805CDD38:
    // 805CDD38: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CDD3C:
    // 805CDD3C: addi    r5, r31, 22
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22);

label_805CDD40:
    // 805CDD40: bl      0x802703A8
    {
            ctx->lr = 0x805CDD44u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_805CDD44:
    ctx->downcount -= 6;
    // 805CDD44: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDD48:
    // 805CDD48: addi    r5, r31, 39
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(39);

label_805CDD4C:
    // 805CDD4C: addi    r6, r31, 42
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(42);

label_805CDD50:
    // 805CDD50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDD54:
    // 805CDD54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CDD58:
    // 805CDD58: bl      0x8027035C
    {
            ctx->lr = 0x805CDD5Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CDD5C:
    ctx->downcount -= 6;
    // 805CDD5C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDD60:
    // 805CDD60: addi    r5, r31, 53
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(53);

label_805CDD64:
    // 805CDD64: addi    r6, r31, 59
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(59);

label_805CDD68:
    // 805CDD68: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CDD6C:
    // 805CDD6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CDD70:
    // 805CDD70: bl      0x8027035C
    {
            ctx->lr = 0x805CDD74u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CDD74:
    ctx->downcount -= 6;
    // 805CDD74: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDD78:
    // 805CDD78: addi    r5, r31, 68
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(68);

label_805CDD7C:
    // 805CDD7C: addi    r6, r31, 59
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(59);

label_805CDD80:
    // 805CDD80: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CDD84:
    // 805CDD84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CDD88:
    // 805CDD88: bl      0x8027035C
    {
            ctx->lr = 0x805CDD8Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CDD8C:
    ctx->downcount -= 6;
    // 805CDD8C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDD90:
    // 805CDD90: addi    r5, r31, 75
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(75);

label_805CDD94:
    // 805CDD94: addi    r6, r31, 42
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(42);

label_805CDD98:
    // 805CDD98: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805CDD9C:
    // 805CDD9C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CDDA0:
    // 805CDDA0: bl      0x8027035C
    {
            ctx->lr = 0x805CDDA4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CDDA4:
    ctx->downcount -= 9;
    // 805CDDA4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CDDA8:
    // 805CDDA8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDDAC:
    // 805CDDAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDDB0:
    // 805CDDB0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CDDB4:
    // 805CDDB4: li      r7, 2
    ctx->gpr[7] = (u32)(s32)(2);

label_805CDDB8:
    // 805CDDB8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CDDBC:
    // 805CDDBC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_805CDDC0:
    // 805CDDC0: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_805CDDC4:
    // 805CDDC4: bl      0x802701C0
    {
            ctx->lr = 0x805CDDC8u;
            ctx->pc = 0x802701C0u;
            return;
    }

label_805CDDC8:
    ctx->downcount -= 4;
    // 805CDDC8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CDDCC:
    // 805CDDCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDDD0:
    // 805CDDD0: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_805CDDD4:
    // 805CDDD4: bl      0x80270194
    {
            ctx->lr = 0x805CDDD8u;
            ctx->pc = 0x80270194u;
            return;
    }

label_805CDDD8:
    ctx->pc = 0x805CDDD8u;
    ctx->downcount -= 16;
    // 805CDDD8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CDDDC:
    ctx->pc = 0x805CDDDCu;
    // 805CDDDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDDE0:
    ctx->pc = 0x805CDDE0u;
    // 805CDDE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDDE4:
    // 805CDDE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDDE8:
    ctx->pc = 0x805CDDE8u;
    // 805CDDE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDDEC:
    ctx->pc = 0x805CDDECu;
    ctx->downcount -= 2;
    // 805CDDEC: stw     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CDDF0:
    // 805CDDF0: b       0x801F5C64
    {
            ctx->pc = 0x801F5C64u;
            return;
    }

label_805CDDF4:
    ctx->pc = 0x805CDDF4u;
    ctx->downcount -= 9;
    // 805CDDF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDDF8:
    ctx->pc = 0x805CDDF8u;
    // 805CDDF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDDFC:
    // 805CDDFC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_805CDE00:
    // 805CDE00: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CDE04:
    ctx->pc = 0x805CDE04u;
    // 805CDE04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDE08:
    // 805CDE08: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CDE0C:
    ctx->pc = 0x805CDE0Cu;
    // 805CDE0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CDE10:
    // 805CDE10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDE14:
    // 805CDE14: bl      0x80371C8C
    {
            ctx->lr = 0x805CDE18u;
            ctx->pc = 0x80371C8Cu;
            return;
    }

label_805CDE18:
    ctx->downcount -= 18;
    // 805CDE18: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CDE1C:
    ctx->pc = 0x805CDE1Cu;
    // 805CDE1C: lfs     f0, 24152(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CDE1Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDE20:
    // 805CDE20: addi    r4, r4, -24928
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24928);

label_805CDE24:
    // 805CDE24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CDE28:
    // 805CDE28: addi    r3, r4, 8
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(8);

label_805CDE2C:
    ctx->pc = 0x805CDE2Cu;
    // 805CDE2C: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CDE30:
    // 805CDE30: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_805CDE34:
    ctx->pc = 0x805CDE34u;
    // 805CDE34: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CDE38:
    // 805CDE38: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_805CDE3C:
    // 805CDE3C: addi    r3, r31, 260
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(260);

label_805CDE40:
    ctx->pc = 0x805CDE40u;
    // 805CDE40: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CDE44:
    ctx->pc = 0x805CDE44u;
    // 805CDE44: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CDE48:
    ctx->pc = 0x805CDE48u;
    // 805CDE48: stfs     f0, 308(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CDE48u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDE4C:
    ctx->pc = 0x805CDE4Cu;
    // 805CDE4C: stfs     f0, 312(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CDE4Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(312);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDE50:
    ctx->pc = 0x805CDE50u;
    // 805CDE50: stfs     f0, 316(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CDE50u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(316);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDE54:
    ctx->pc = 0x805CDE54u;
    // 805CDE54: stfs     f0, 320(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CDE54u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDE58:
    ctx->pc = 0x805CDE58u;
    // 805CDE58: stw     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDE5C:
    // 805CDE5C: bl      0x8013C170
    {
            ctx->lr = 0x805CDE60u;
            ctx->pc = 0x8013C170u;
            return;
    }

label_805CDE60:
    ctx->downcount -= 7;
    // 805CDE60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CDE64:
    ctx->pc = 0x805CDE64u;
    // 805CDE64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CDE68:
    ctx->pc = 0x805CDE68u;
    // 805CDE68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDE6C:
    ctx->pc = 0x805CDE6Cu;
    // 805CDE6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDE70:
    // 805CDE70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDE74:
    ctx->pc = 0x805CDE74u;
    // 805CDE74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDE78:
    ctx->pc = 0x805CDE78u;
    ctx->downcount -= 1;
    // 805CDE78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDE7C:
    ctx->pc = 0x805CDE7Cu;
    ctx->downcount -= 18;
    // 805CDE7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDE80:
    ctx->pc = 0x805CDE80u;
    // 805CDE80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDE84:
    // 805CDE84: cmpwi   r3, 0
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

label_805CDE88:
    ctx->pc = 0x805CDE88u;
    // 805CDE88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDE8C:
    ctx->pc = 0x805CDE8Cu;
    // 805CDE8C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CDE90:
    // 805CDE90: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDE94:
    // 805CDE94: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CDE98:
    // 805CDE98: bc    12, 2, 0x805CDECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDECC;
        }
    }

label_805CDE9C:
    ctx->downcount -= 1;
    // 805CDE9C: bc    12, 2, 0x805CDEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDEBC;
        }
    }

label_805CDEA0:
    ctx->downcount -= 1;
    // 805CDEA0: bc    12, 2, 0x805CDEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CDEBC;
        }
    }

label_805CDEA4:
    ctx->downcount -= 3;
    // 805CDEA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDEA8:
    // 805CDEA8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CDEAC:
    // 805CDEAC: bl      0x801F5C24
    {
            ctx->lr = 0x805CDEB0u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_805CDEB0:
    ctx->downcount -= 3;
    // 805CDEB0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CDEB4:
    // 805CDEB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CDEB8:
    // 805CDEB8: bl      0x801F5BBC
    {
            ctx->lr = 0x805CDEBCu;
            ctx->pc = 0x801F5BBCu;
            return;
    }

label_805CDEBC:
    ctx->downcount -= 2;
    // 805CDEBC: cmpwi   r31, 0
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

label_805CDEC0:
    // 805CDEC0: bc    4, 1, 0x805CDECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CDECC;
        }
    }

label_805CDEC4:
    ctx->downcount -= 2;
    // 805CDEC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CDEC8:
    // 805CDEC8: bl      0x801C1C90
    {
            ctx->lr = 0x805CDECCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CDECC:
    ctx->downcount -= 17;
    // 805CDECC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CDED0:
    ctx->pc = 0x805CDED0u;
    // 805CDED0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CDED4:
    ctx->pc = 0x805CDED4u;
    // 805CDED4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CDED8:
    ctx->pc = 0x805CDED8u;
    // 805CDED8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CDEDC:
    // 805CDEDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CDEE0:
    ctx->pc = 0x805CDEE0u;
    // 805CDEE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CDEE4:
    ctx->downcount -= 2;
    // 805CDEE4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_805CDEE8:
    // 805CDEE8: b       0x805CDE7C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDE7Cu;
                return;
            }
            goto label_805CDE7C;
    }

label_805CDEEC:
    ctx->downcount -= 2;
    // 805CDEEC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDEF0:
    // 805CDEF0: b       0x805CDD00
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDD00u;
                return;
            }
            goto label_805CDD00;
    }

label_805CDEF4:
    ctx->downcount -= 2;
    // 805CDEF4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDEF8:
    // 805CDEF8: b       0x805CDD08
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDD08u;
                return;
            }
            goto label_805CDD08;
    }

label_805CDEFC:
    ctx->downcount -= 2;
    // 805CDEFC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDF00:
    // 805CDF00: b       0x805CDABC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDABCu;
                return;
            }
            goto label_805CDABC;
    }

label_805CDF04:
    ctx->downcount -= 2;
    // 805CDF04: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDF08:
    // 805CDF08: b       0x805CDE7C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDE7Cu;
                return;
            }
            goto label_805CDE7C;
    }

label_805CDF0C:
    ctx->downcount -= 2;
    // 805CDF0C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_805CDF10:
    // 805CDF10: b       0x805CDC0C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDC0Cu;
                return;
            }
            goto label_805CDC0C;
    }

label_805CDF14:
    ctx->pc = 0x805CDF14u;
    ctx->downcount -= 5;
    // 805CDF14: stwu     r1, -256(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-256);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CDF18:
    ctx->pc = 0x805CDF18u;
    // 805CDF18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CDF1C:
    ctx->pc = 0x805CDF1Cu;
    // 805CDF1C: stw     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CDF20:
    ctx->pc = 0x805CDF20u;
    // 805CDF20: addi    r11, r1, 256
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(256);

label_805CDF24:
    ctx->pc = 0x805CDF24u;
    // 805CDF24: bl      0x80007848
    {
            ctx->lr = 0x805CDF28u;
            ctx->pc = 0x80007848u;
            return;
    }

label_805CDF28:
    ctx->pc = 0x805CDF28u;
    ctx->downcount -= 13;
    // 805CDF28: lwz     r9, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_805CDF2C:
    ctx->pc = 0x805CDF2Cu;
    // 805CDF2C: lis     r8, -32657
    ctx->gpr[8] = ((u32)(s32)(-32657) << 16);

label_805CDF30:
    ctx->pc = 0x805CDF30u;
    // 805CDF30: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CDF34:
    ctx->pc = 0x805CDF34u;
    // 805CDF34: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CDF38:
    ctx->pc = 0x805CDF38u;
    // 805CDF38: addic   r0, r9, -1
    {
        u64 a = ctx->gpr[9];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDF3C:
    ctx->pc = 0x805CDF3Cu;
    // 805CDF3C: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CDF40:
    ctx->pc = 0x805CDF40u;
    // 805CDF40: or   r26, r6, r6
    {
        ctx->gpr[26] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CDF44:
    ctx->pc = 0x805CDF44u;
    // 805CDF44: or   r27, r7, r7
    {
        ctx->gpr[27] = ctx->gpr[7] | ctx->gpr[7];
    }

label_805CDF48:
    ctx->pc = 0x805CDF48u;
    // 805CDF48: subfe   r3, r0, r9
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[9];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CDF4C:
    ctx->pc = 0x805CDF4Cu;
    // 805CDF4C: addi    r4, r8, -30844
    ctx->gpr[4] = ctx->gpr[8] + (u32)(s32)(-30844);

label_805CDF50:
    ctx->pc = 0x805CDF50u;
    // 805CDF50: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_805CDF54:
    ctx->pc = 0x805CDF54u;
    // 805CDF54: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_805CDF58:
    ctx->pc = 0x805CDF58u;
    // 805CDF58: bl      0x80370BD4
    {
            ctx->lr = 0x805CDF5Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CDF5C:
    ctx->pc = 0x805CDF5Cu;
    ctx->downcount -= 8;
    // 805CDF5C: lwz     r3, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDF60:
    ctx->pc = 0x805CDF60u;
    // 805CDF60: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_805CDF64:
    ctx->pc = 0x805CDF64u;
    // 805CDF64: addi    r5, r1, 148
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(148);

label_805CDF68:
    ctx->pc = 0x805CDF68u;
    // 805CDF68: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDF6C:
    ctx->pc = 0x805CDF6Cu;
    // 805CDF6C: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDF70:
    ctx->pc = 0x805CDF70u;
    // 805CDF70: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_805CDF74:
    ctx->pc = 0x805CDF74u;
    // 805CDF74: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CDF78:
    loop_805CDF78(ctx);
    if (ctx->pc == 0x805CDF8Cu) goto label_805CDF8C;
    return;
label_805CDF7C:
    ctx->pc = 0x805CDF7Cu;
    // 805CDF7C: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_805CDF80:
    ctx->pc = 0x805CDF80u;
    // 805CDF80: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CDF84:
    ctx->pc = 0x805CDF84u;
    // 805CDF84: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_805CDF88:
    // 805CDF88: bc    16, 0, 0x805CDF78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CDF78u;
                return;
            }
            goto label_805CDF78;
        }
    }

label_805CDF8C:
    ctx->pc = 0x805CDF8Cu;
    ctx->downcount -= 69;
    // 805CDF8C: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CDF8Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CDF90:
    ctx->pc = 0x805CDF90u;
    // 805CDF90: lis     r9, -32643
    ctx->gpr[9] = ((u32)(s32)(-32643) << 16);

label_805CDF94:
    ctx->pc = 0x805CDF94u;
    // 805CDF94: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CDF94u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CDF98:
    ctx->pc = 0x805CDF98u;
    // 805CDF98: addi    r9, r9, 24712
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(24712);

label_805CDF9C:
    ctx->pc = 0x805CDF9Cu;
    // 805CDF9C: stfs     f1, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDF9Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CDFA0:
    ctx->pc = 0x805CDFA0u;
    // 805CDFA0: addi    r4, r1, 80
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(80);

label_805CDFA4:
    ctx->pc = 0x805CDFA4u;
    // 805CDFA4: addi    r5, r1, 44
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(44);

label_805CDFA8:
    ctx->pc = 0x805CDFA8u;
    // 805CDFA8: lfs     f2, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CDFA8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CDFAC:
    ctx->pc = 0x805CDFACu;
    // 805CDFAC: stfs     f0, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDFACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDFB0:
    ctx->pc = 0x805CDFB0u;
    // 805CDFB0: addi    r6, r1, 92
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(92);

label_805CDFB4:
    ctx->pc = 0x805CDFB4u;
    // 805CDFB4: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CDFB8:
    ctx->pc = 0x805CDFB8u;
    // 805CDFB8: addi    r10, r1, 56
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(56);

label_805CDFBC:
    ctx->pc = 0x805CDFBCu;
    // 805CDFBC: psq_l   f3, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CDFBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 3u, ea, false, 0u, false, 0x805CDFBCu);
        if (ctx->exception) return;
    }

label_805CDFC0:
    ctx->pc = 0x805CDFC0u;
    // 805CDFC0: addi    r7, r1, 104
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(104);

label_805CDFC4:
    ctx->pc = 0x805CDFC4u;
    // 805CDFC4: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDFC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CDFC8:
    ctx->pc = 0x805CDFC8u;
    // 805CDFC8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CDFCC:
    ctx->pc = 0x805CDFCCu;
    // 805CDFCC: ps_muls0  f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CDFCCu)) return;
    ppc_ps_muls0(ctx, 3, 3, 2);

label_805CDFD0:
    ctx->pc = 0x805CDFD0u;
    // 805CDFD0: lfs     f4, 24172(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CDFD0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_805CDFD4:
    ctx->pc = 0x805CDFD4u;
    // 805CDFD4: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDFD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CDFD8:
    ctx->pc = 0x805CDFD8u;
    // 805CDFD8: addi    r8, r1, 116
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(116);

label_805CDFDC:
    ctx->pc = 0x805CDFDCu;
    // 805CDFDC: psq_l   f6, 0(r9), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CDFDCu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 6u, ea, false, 0u, false, 0x805CDFDCu);
        if (ctx->exception) return;
    }

label_805CDFE0:
    ctx->pc = 0x805CDFE0u;
    // 805CDFE0: addi    r11, r1, 68
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(68);

label_805CDFE4:
    ctx->pc = 0x805CDFE4u;
    // 805CDFE4: psq_l   f7, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CDFE4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 7u, ea, false, 0u, false, 0x805CDFE4u);
        if (ctx->exception) return;
    }

label_805CDFE8:
    ctx->pc = 0x805CDFE8u;
    // 805CDFE8: ps_mr  f0, f3
    if (!ppc_fp_available_inline(ctx, 0x805CDFE8u)) return;
    ctx->fpr[0] = ctx->fpr[3];
    ctx->ps1[0] = ctx->ps1[3];

label_805CDFEC:
    ctx->pc = 0x805CDFECu;
    // 805CDFEC: psq_l   f5, 24(r23), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CDFECu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 5u, ea, false, 0u, false, 0x805CDFECu);
        if (ctx->exception) return;
    }

label_805CDFF0:
    ctx->pc = 0x805CDFF0u;
    // 805CDFF0: addi    r31, r1, 140
    ctx->gpr[31] = ctx->gpr[1] + (u32)(s32)(140);

label_805CDFF4:
    ctx->pc = 0x805CDFF4u;
    // 805CDFF4: ps_muls0  f7, f7, f2
    if (!ppc_fp_available_inline(ctx, 0x805CDFF4u)) return;
    ppc_ps_muls0(ctx, 7, 7, 2);

label_805CDFF8:
    ctx->pc = 0x805CDFF8u;
    // 805CDFF8: stfs     f1, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CDFF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CDFFC:
    ctx->pc = 0x805CDFFCu;
    // 805CDFFC: ps_add  f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x805CDFFCu)) return;
    ppc_ps_add_op(ctx, 5, 6, 5);

label_805CE000:
    ctx->pc = 0x805CE000u;
    // 805CE000: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE000u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE004:
    ctx->pc = 0x805CE004u;
    // 805CE004: ps_muls0  f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE004u)) return;
    ppc_ps_muls0(ctx, 0, 0, 4);

label_805CE008:
    ctx->pc = 0x805CE008u;
    // 805CE008: ps_mr  f1, f7
    if (!ppc_fp_available_inline(ctx, 0x805CE008u)) return;
    ctx->fpr[1] = ctx->fpr[7];
    ctx->ps1[1] = ctx->ps1[7];

label_805CE00C:
    ctx->pc = 0x805CE00Cu;
    // 805CE00C: psq_st   f3, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE00Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 3u, ea, false, 0u, false, 0x805CE00Cu);
        if (ctx->exception) return;
    }

label_805CE010:
    ctx->pc = 0x805CE010u;
    // 805CE010: addi    r30, r1, 128
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(128);

label_805CE014:
    ctx->pc = 0x805CE014u;
    // 805CE014: psq_l   f3, 8(r4), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE014u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 3u, ea, true, 0u, false, 0x805CE014u);
        if (ctx->exception) return;
    }

label_805CE018:
    ctx->pc = 0x805CE018u;
    // 805CE018: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE01C:
    ctx->pc = 0x805CE01Cu;
    // 805CE01C: psq_st   f7, 0(r10), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE01Cu)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 7u, ea, false, 0u, false, 0x805CE01Cu);
        if (ctx->exception) return;
    }

label_805CE020:
    ctx->pc = 0x805CE020u;
    // 805CE020: psq_l   f7, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE020u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 7u, ea, true, 0u, false, 0x805CE020u);
        if (ctx->exception) return;
    }

label_805CE024:
    ctx->pc = 0x805CE024u;
    // 805CE024: ps_muls0  f8, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE024u)) return;
    ppc_ps_muls0(ctx, 8, 1, 4);

label_805CE028:
    ctx->pc = 0x805CE028u;
    // 805CE028: ps_muls0  f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE028u)) return;
    ppc_ps_muls0(ctx, 3, 3, 2);

label_805CE02C:
    ctx->pc = 0x805CE02Cu;
    // 805CE02C: psq_st   f0, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE02Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x805CE02Cu);
        if (ctx->exception) return;
    }

label_805CE030:
    ctx->pc = 0x805CE030u;
    // 805CE030: ps_muls0  f7, f7, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE030u)) return;
    ppc_ps_muls0(ctx, 7, 7, 2);

label_805CE034:
    ctx->pc = 0x805CE034u;
    // 805CE034: psq_l   f6, 8(r9), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE034u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 6u, ea, true, 0u, false, 0x805CE034u);
        if (ctx->exception) return;
    }

label_805CE038:
    ctx->pc = 0x805CE038u;
    // 805CE038: psq_st   f5, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE038u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 5u, ea, false, 0u, false, 0x805CE038u);
        if (ctx->exception) return;
    }

label_805CE03C:
    ctx->pc = 0x805CE03Cu;
    // 805CE03C: psq_l   f5, 32(r23), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE03Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 5u, ea, true, 0u, false, 0x805CE03Cu);
        if (ctx->exception) return;
    }

label_805CE040:
    ctx->pc = 0x805CE040u;
    // 805CE040: psq_st   f8, 0(r11), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE040u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 8u, ea, false, 0u, false, 0x805CE040u);
        if (ctx->exception) return;
    }

label_805CE044:
    ctx->pc = 0x805CE044u;
    // 805CE044: ps_muls0  f0, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE044u)) return;
    ppc_ps_muls0(ctx, 0, 3, 4);

label_805CE048:
    ctx->pc = 0x805CE048u;
    // 805CE048: ps_muls0  f8, f7, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE048u)) return;
    ppc_ps_muls0(ctx, 8, 7, 4);

label_805CE04C:
    ctx->pc = 0x805CE04Cu;
    // 805CE04C: psq_l   f2, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE04Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x805CE04Cu);
        if (ctx->exception) return;
    }

label_805CE050:
    ctx->pc = 0x805CE050u;
    // 805CE050: ps_add  f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x805CE050u)) return;
    ppc_ps_add_op(ctx, 5, 6, 5);

label_805CE054:
    ctx->pc = 0x805CE054u;
    // 805CE054: psq_l   f1, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE054u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x805CE054u);
        if (ctx->exception) return;
    }

label_805CE058:
    ctx->pc = 0x805CE058u;
    // 805CE058: psq_l   f6, 0(r27), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE058u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 6u, ea, false, 0u, false, 0x805CE058u);
        if (ctx->exception) return;
    }

label_805CE05C:
    ctx->pc = 0x805CE05Cu;
    // 805CE05C: ps_sub  f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE05Cu)) return;
    ppc_ps_sub_op(ctx, 1, 2, 1);

label_805CE060:
    ctx->pc = 0x805CE060u;
    // 805CE060: psq_l   f4, 0(r11), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE060u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 4u, ea, false, 0u, false, 0x805CE060u);
        if (ctx->exception) return;
    }

label_805CE064:
    ctx->pc = 0x805CE064u;
    // 805CE064: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE068:
    ctx->pc = 0x805CE068u;
    // 805CE068: psq_st   f1, 0(r31), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE068u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x805CE068u);
        if (ctx->exception) return;
    }

label_805CE06C:
    ctx->pc = 0x805CE06Cu;
    // 805CE06C: ps_sub  f1, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE06Cu)) return;
    ppc_ps_sub_op(ctx, 1, 5, 0);

label_805CE070:
    ctx->pc = 0x805CE070u;
    // 805CE070: ps_sub  f2, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE070u)) return;
    ppc_ps_sub_op(ctx, 2, 6, 4);

label_805CE074:
    ctx->pc = 0x805CE074u;
    // 805CE074: psq_l   f6, 8(r27), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE074u)) return;
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 6u, ea, true, 0u, false, 0x805CE074u);
        if (ctx->exception) return;
    }

label_805CE078:
    ctx->pc = 0x805CE078u;
    // 805CE078: psq_st   f2, 0(r30), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE078u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 2u, ea, false, 0u, false, 0x805CE078u);
        if (ctx->exception) return;
    }

label_805CE07C:
    ctx->pc = 0x805CE07Cu;
    // 805CE07C: ps_sub  f2, f6, f8
    if (!ppc_fp_available_inline(ctx, 0x805CE07Cu)) return;
    ppc_ps_sub_op(ctx, 2, 6, 8);

label_805CE080:
    ctx->pc = 0x805CE080u;
    // 805CE080: psq_st   f3, 8(r6), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE080u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 3u, ea, true, 0u, false, 0x805CE080u);
        if (ctx->exception) return;
    }

label_805CE084:
    ctx->pc = 0x805CE084u;
    // 805CE084: psq_st   f0, 8(r7), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE084u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x805CE084u);
        if (ctx->exception) return;
    }

label_805CE088:
    ctx->pc = 0x805CE088u;
    // 805CE088: psq_st   f5, 8(r8), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE088u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 5u, ea, true, 0u, false, 0x805CE088u);
        if (ctx->exception) return;
    }

label_805CE08C:
    ctx->pc = 0x805CE08Cu;
    // 805CE08C: psq_st   f1, 8(r31), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE08Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x805CE08Cu);
        if (ctx->exception) return;
    }

label_805CE090:
    ctx->pc = 0x805CE090u;
    // 805CE090: psq_st   f7, 8(r10), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE090u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 7u, ea, true, 0u, false, 0x805CE090u);
        if (ctx->exception) return;
    }

label_805CE094:
    ctx->pc = 0x805CE094u;
    // 805CE094: psq_st   f8, 8(r11), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE094u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 8u, ea, true, 0u, false, 0x805CE094u);
        if (ctx->exception) return;
    }

label_805CE098:
    ctx->pc = 0x805CE098u;
    // 805CE098: psq_st   f2, 8(r30), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE098u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 2u, ea, true, 0u, false, 0x805CE098u);
        if (ctx->exception) return;
    }

label_805CE09C:
    ctx->pc = 0x805CE09Cu;
    // 805CE09C: bl      0x80370BD4
    {
            ctx->lr = 0x805CE0A0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE0A0:
    ctx->pc = 0x805CE0A0u;
    ctx->downcount -= 9;
    // 805CE0A0: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE0A4:
    ctx->pc = 0x805CE0A4u;
    // 805CE0A4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CE0A8:
    ctx->pc = 0x805CE0A8u;
    // 805CE0A8: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE0A8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE0AC:
    ctx->pc = 0x805CE0ACu;
    // 805CE0AC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CE0B0:
    ctx->pc = 0x805CE0B0u;
    // 805CE0B0: lfs     f2, 24176(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE0B0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE0B4:
    ctx->pc = 0x805CE0B4u;
    // 805CE0B4: addi    r6, r1, 152
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE0B8:
    ctx->pc = 0x805CE0B8u;
    // 805CE0B8: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE0BC:
    ctx->pc = 0x805CE0BCu;
    // 805CE0BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CE0C0:
    ctx->pc = 0x805CE0C0u;
    // 805CE0C0: bl      0x80331C64
    {
            ctx->lr = 0x805CE0C4u;
            ctx->pc = 0x80331C64u;
            return;
    }

label_805CE0C4:
    ctx->pc = 0x805CE0C4u;
    ctx->downcount -= 2;
    // 805CE0C4: cmpwi   r3, 2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE0C8:
    ctx->pc = 0x805CE0C8u;
    // 805CE0C8: bc    4, 2, 0x805CE0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE0E8;
        }
    }

label_805CE0CC:
    ctx->pc = 0x805CE0CCu;
    ctx->downcount -= 6;
    // 805CE0CC: lhz     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE0D0:
    ctx->pc = 0x805CE0D0u;
    // 805CE0D0: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_805CE0D4:
    ctx->pc = 0x805CE0D4u;
    // 805CE0D4: lwz     r3, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE0D8:
    ctx->pc = 0x805CE0D8u;
    // 805CE0D8: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_805CE0DC:
    ctx->pc = 0x805CE0DCu;
    // 805CE0DC: sth     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE0E0:
    ctx->pc = 0x805CE0E0u;
    // 805CE0E0: bl      0x8024DE0C
    {
            ctx->lr = 0x805CE0E4u;
            ctx->pc = 0x8024DE0Cu;
            return;
    }

label_805CE0E4:
    ctx->pc = 0x805CE0E4u;
    ctx->downcount -= 1;
    // 805CE0E4: b       0x805CE100
    {
            goto label_805CE100;
    }

label_805CE0E8:
    ctx->pc = 0x805CE0E8u;
    ctx->downcount -= 6;
    // 805CE0E8: lhz     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE0EC:
    ctx->pc = 0x805CE0ECu;
    // 805CE0EC: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_805CE0F0:
    ctx->pc = 0x805CE0F0u;
    // 805CE0F0: lwz     r3, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE0F4:
    ctx->pc = 0x805CE0F4u;
    // 805CE0F4: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_805CE0F8:
    ctx->pc = 0x805CE0F8u;
    // 805CE0F8: sth     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE0FC:
    ctx->pc = 0x805CE0FCu;
    // 805CE0FC: bl      0x8024DE0C
    {
            ctx->lr = 0x805CE100u;
            ctx->pc = 0x8024DE0Cu;
            return;
    }

label_805CE100:
    ctx->pc = 0x805CE100u;
    ctx->downcount -= 33;
    // 805CE100: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE100u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE104:
    ctx->pc = 0x805CE104u;
    // 805CE104: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_805CE108:
    ctx->pc = 0x805CE108u;
    // 805CE108: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE108u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE10C:
    ctx->pc = 0x805CE10Cu;
    // 805CE10C: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_805CE110:
    ctx->pc = 0x805CE110u;
    // 805CE110: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE110u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE114:
    ctx->pc = 0x805CE114u;
    // 805CE114: addi    r7, r1, 32
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(32);

label_805CE118:
    ctx->pc = 0x805CE118u;
    // 805CE118: lfs     f2, 24176(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE118u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE11C:
    ctx->pc = 0x805CE11Cu;
    // 805CE11C: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE120:
    ctx->pc = 0x805CE120u;
    // 805CE120: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE120u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE124:
    ctx->pc = 0x805CE124u;
    // 805CE124: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE128:
    ctx->pc = 0x805CE128u;
    // 805CE128: psq_l   f3, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE128u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 3u, ea, false, 0u, false, 0x805CE128u);
        if (ctx->exception) return;
    }

label_805CE12C:
    ctx->pc = 0x805CE12Cu;
    // 805CE12C: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE12Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE130:
    ctx->pc = 0x805CE130u;
    // 805CE130: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE134:
    ctx->pc = 0x805CE134u;
    // 805CE134: ps_muls0  f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE134u)) return;
    ppc_ps_muls0(ctx, 0, 3, 2);

label_805CE138:
    ctx->pc = 0x805CE138u;
    // 805CE138: psq_l   f4, 0(r24), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE138u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 4u, ea, false, 0u, false, 0x805CE138u);
        if (ctx->exception) return;
    }

label_805CE13C:
    ctx->pc = 0x805CE13Cu;
    // 805CE13C: psq_l   f3, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE13Cu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 3u, ea, true, 0u, false, 0x805CE13Cu);
        if (ctx->exception) return;
    }

label_805CE140:
    ctx->pc = 0x805CE140u;
    // 805CE140: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE144:
    ctx->pc = 0x805CE144u;
    // 805CE144: psq_st   f0, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE144u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x805CE144u);
        if (ctx->exception) return;
    }

label_805CE148:
    ctx->pc = 0x805CE148u;
    // 805CE148: ps_muls0  f0, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE148u)) return;
    ppc_ps_muls0(ctx, 0, 3, 2);

label_805CE14C:
    ctx->pc = 0x805CE14Cu;
    // 805CE14C: psq_l   f1, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE14Cu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x805CE14Cu);
        if (ctx->exception) return;
    }

label_805CE150:
    ctx->pc = 0x805CE150u;
    // 805CE150: psq_st   f0, 8(r6), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE150u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x805CE150u);
        if (ctx->exception) return;
    }

label_805CE154:
    ctx->pc = 0x805CE154u;
    // 805CE154: ps_sub  f1, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE154u)) return;
    ppc_ps_sub_op(ctx, 1, 4, 1);

label_805CE158:
    ctx->pc = 0x805CE158u;
    // 805CE158: psq_l   f4, 8(r24), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE158u)) return;
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 4u, ea, true, 0u, false, 0x805CE158u);
        if (ctx->exception) return;
    }

label_805CE15C:
    ctx->pc = 0x805CE15Cu;
    // 805CE15C: psq_st   f1, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE15Cu)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x805CE15Cu);
        if (ctx->exception) return;
    }

label_805CE160:
    ctx->pc = 0x805CE160u;
    // 805CE160: ps_sub  f1, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE160u)) return;
    ppc_ps_sub_op(ctx, 1, 4, 0);

label_805CE164:
    ctx->pc = 0x805CE164u;
    // 805CE164: psq_st   f1, 8(r7), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE164u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x805CE164u);
        if (ctx->exception) return;
    }

label_805CE168:
    ctx->pc = 0x805CE168u;
    // 805CE168: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE168u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE16C:
    ctx->pc = 0x805CE16Cu;
    // 805CE16C: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE16Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE170:
    ctx->pc = 0x805CE170u;
    // 805CE170: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE170u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE174:
    ctx->pc = 0x805CE174u;
    // 805CE174: stfs     f2, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE174u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE178:
    ctx->pc = 0x805CE178u;
    // 805CE178: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE17C:
    ctx->pc = 0x805CE17Cu;
    // 805CE17C: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE17Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE180:
    ctx->pc = 0x805CE180u;
    // 805CE180: bl      0x80370BD4
    {
            ctx->lr = 0x805CE184u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE184:
    ctx->pc = 0x805CE184u;
    ctx->downcount -= 9;
    // 805CE184: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE188:
    ctx->pc = 0x805CE188u;
    // 805CE188: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_805CE18C:
    ctx->pc = 0x805CE18Cu;
    // 805CE18C: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE18Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE190:
    ctx->pc = 0x805CE190u;
    // 805CE190: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_805CE194:
    ctx->pc = 0x805CE194u;
    // 805CE194: lfs     f2, 24176(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE194u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE198:
    ctx->pc = 0x805CE198u;
    // 805CE198: addi    r6, r1, 152
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE19C:
    ctx->pc = 0x805CE19Cu;
    // 805CE19C: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE1A0:
    ctx->pc = 0x805CE1A0u;
    // 805CE1A0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_805CE1A4:
    ctx->pc = 0x805CE1A4u;
    // 805CE1A4: bl      0x80331C64
    {
            ctx->lr = 0x805CE1A8u;
            ctx->pc = 0x80331C64u;
            return;
    }

label_805CE1A8:
    ctx->pc = 0x805CE1A8u;
    ctx->downcount -= 2;
    // 805CE1A8: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE1AC:
    ctx->pc = 0x805CE1ACu;
    // 805CE1AC: bc    4, 2, 0x805CE1B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE1B8;
        }
    }

label_805CE1B0:
    ctx->pc = 0x805CE1B0u;
    ctx->downcount -= 2;
    // 805CE1B0: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_805CE1B4:
    ctx->pc = 0x805CE1B4u;
    // 805CE1B4: b       0x805CE278
    {
            goto label_805CE278;
    }

label_805CE1B8:
    ctx->pc = 0x805CE1B8u;
    ctx->downcount -= 11;
    // 805CE1B8: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE1BC:
    ctx->pc = 0x805CE1BCu;
    // 805CE1BC: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE1C0:
    ctx->pc = 0x805CE1C0u;
    // 805CE1C0: lfs     f2, 0(r25)
    if (!ppc_fp_available_inline(ctx, 0x805CE1C0u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE1C4:
    ctx->pc = 0x805CE1C4u;
    // 805CE1C4: lfs     f1, 4(r25)
    if (!ppc_fp_available_inline(ctx, 0x805CE1C4u)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE1C8:
    ctx->pc = 0x805CE1C8u;
    // 805CE1C8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE1CC:
    ctx->pc = 0x805CE1CCu;
    // 805CE1CC: lfs     f0, 8(r25)
    if (!ppc_fp_available_inline(ctx, 0x805CE1CCu)) return;
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE1D0:
    ctx->pc = 0x805CE1D0u;
    // 805CE1D0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE1D4:
    ctx->pc = 0x805CE1D4u;
    // 805CE1D4: stfs     f2, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE1D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE1D8:
    ctx->pc = 0x805CE1D8u;
    // 805CE1D8: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE1D8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE1DC:
    ctx->pc = 0x805CE1DCu;
    // 805CE1DC: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE1DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE1E0:
    ctx->pc = 0x805CE1E0u;
    // 805CE1E0: bl      0x80370BD4
    {
            ctx->lr = 0x805CE1E4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE1E4:
    ctx->pc = 0x805CE1E4u;
    ctx->downcount -= 9;
    // 805CE1E4: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE1E8:
    ctx->pc = 0x805CE1E8u;
    // 805CE1E8: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_805CE1EC:
    ctx->pc = 0x805CE1ECu;
    // 805CE1EC: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE1ECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE1F0:
    ctx->pc = 0x805CE1F0u;
    // 805CE1F0: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_805CE1F4:
    ctx->pc = 0x805CE1F4u;
    // 805CE1F4: lfs     f2, 24180(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE1F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24180);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE1F8:
    ctx->pc = 0x805CE1F8u;
    // 805CE1F8: addi    r6, r1, 152
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE1FC:
    ctx->pc = 0x805CE1FCu;
    // 805CE1FC: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE200:
    ctx->pc = 0x805CE200u;
    // 805CE200: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_805CE204:
    ctx->pc = 0x805CE204u;
    // 805CE204: bl      0x80331C64
    {
            ctx->lr = 0x805CE208u;
            ctx->pc = 0x80331C64u;
            return;
    }

label_805CE208:
    ctx->pc = 0x805CE208u;
    ctx->downcount -= 2;
    // 805CE208: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE20C:
    ctx->pc = 0x805CE20Cu;
    // 805CE20C: bc    4, 2, 0x805CE21C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE21C;
        }
    }

label_805CE210:
    ctx->pc = 0x805CE210u;
    ctx->downcount -= 3;
    // 805CE210: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_805CE214:
    ctx->pc = 0x805CE214u;
    // 805CE214: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_805CE218:
    ctx->pc = 0x805CE218u;
    // 805CE218: b       0x805CE278
    {
            goto label_805CE278;
    }

label_805CE21C:
    ctx->pc = 0x805CE21Cu;
    ctx->downcount -= 11;
    // 805CE21C: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE220:
    ctx->pc = 0x805CE220u;
    // 805CE220: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE224:
    ctx->pc = 0x805CE224u;
    // 805CE224: lfs     f2, 0(r26)
    if (!ppc_fp_available_inline(ctx, 0x805CE224u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE228:
    ctx->pc = 0x805CE228u;
    // 805CE228: lfs     f1, 4(r26)
    if (!ppc_fp_available_inline(ctx, 0x805CE228u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE22C:
    ctx->pc = 0x805CE22Cu;
    // 805CE22C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE230:
    ctx->pc = 0x805CE230u;
    // 805CE230: lfs     f0, 8(r26)
    if (!ppc_fp_available_inline(ctx, 0x805CE230u)) return;
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE234:
    ctx->pc = 0x805CE234u;
    // 805CE234: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE238:
    ctx->pc = 0x805CE238u;
    // 805CE238: stfs     f2, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE23C:
    ctx->pc = 0x805CE23Cu;
    // 805CE23C: stfs     f1, 132(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE23Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE240:
    ctx->pc = 0x805CE240u;
    // 805CE240: stfs     f0, 136(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE244:
    ctx->pc = 0x805CE244u;
    // 805CE244: bl      0x80370BD4
    {
            ctx->lr = 0x805CE248u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE248:
    ctx->pc = 0x805CE248u;
    ctx->downcount -= 9;
    // 805CE248: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE24C:
    ctx->pc = 0x805CE24Cu;
    // 805CE24C: addi    r3, r1, 140
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(140);

label_805CE250:
    ctx->pc = 0x805CE250u;
    // 805CE250: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE250u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE254:
    ctx->pc = 0x805CE254u;
    // 805CE254: addi    r4, r1, 128
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(128);

label_805CE258:
    ctx->pc = 0x805CE258u;
    // 805CE258: lfs     f2, 24184(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE258u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE25C:
    ctx->pc = 0x805CE25Cu;
    // 805CE25C: addi    r6, r1, 152
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE260:
    ctx->pc = 0x805CE260u;
    // 805CE260: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE264:
    ctx->pc = 0x805CE264u;
    // 805CE264: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_805CE268:
    ctx->pc = 0x805CE268u;
    // 805CE268: bl      0x80331C64
    {
            ctx->lr = 0x805CE26Cu;
            ctx->pc = 0x80331C64u;
            return;
    }

label_805CE26C:
    ctx->pc = 0x805CE26Cu;
    ctx->downcount -= 2;
    // 805CE26C: cmpwi   r3, 1
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE270:
    ctx->pc = 0x805CE270u;
    // 805CE270: bc    4, 2, 0x805CE278
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE278;
        }
    }

label_805CE274:
    ctx->pc = 0x805CE274u;
    ctx->downcount -= 1;
    // 805CE274: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_805CE278:
    ctx->pc = 0x805CE278u;
    ctx->downcount -= 5;
    // 805CE278: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE27C:
    ctx->pc = 0x805CE27Cu;
    // 805CE27C: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE280:
    ctx->pc = 0x805CE280u;
    // 805CE280: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE284:
    ctx->pc = 0x805CE284u;
    // 805CE284: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE288:
    ctx->pc = 0x805CE288u;
    // 805CE288: bl      0x80370BD4
    {
            ctx->lr = 0x805CE28Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE28C:
    ctx->pc = 0x805CE28Cu;
    ctx->downcount -= 5;
    // 805CE28C: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE290:
    ctx->pc = 0x805CE290u;
    // 805CE290: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE294:
    ctx->pc = 0x805CE294u;
    // 805CE294: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE298:
    ctx->pc = 0x805CE298u;
    // 805CE298: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE29C:
    ctx->pc = 0x805CE29Cu;
    // 805CE29C: bc    4, 2, 0x805CE2CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE2CC;
        }
    }

label_805CE2A0:
    ctx->pc = 0x805CE2A0u;
    ctx->downcount -= 11;
    // 805CE2A0: lfs     f1, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE2A0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE2A4:
    ctx->pc = 0x805CE2A4u;
    // 805CE2A4: lfs     f2, 24188(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE2A4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE2A8:
    ctx->pc = 0x805CE2A8u;
    // 805CE2A8: lfs     f0, 88(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE2A8u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE2AC:
    ctx->pc = 0x805CE2ACu;
    // 805CE2AC: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE2ACu)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_805CE2B0:
    ctx->pc = 0x805CE2B0u;
    // 805CE2B0: lhz     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE2B4:
    ctx->pc = 0x805CE2B4u;
    // 805CE2B4: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE2B4u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_805CE2B8:
    ctx->pc = 0x805CE2B8u;
    // 805CE2B8: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_805CE2BC:
    ctx->pc = 0x805CE2BCu;
    // 805CE2BC: stfs     f1, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE2BCu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE2C0:
    ctx->pc = 0x805CE2C0u;
    // 805CE2C0: stfs     f0, 88(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE2C0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE2C4:
    ctx->pc = 0x805CE2C4u;
    // 805CE2C4: sth     r0, 96(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE2C8:
    ctx->pc = 0x805CE2C8u;
    // 805CE2C8: b       0x805CE338
    {
            goto label_805CE338;
    }

label_805CE2CC:
    ctx->pc = 0x805CE2CCu;
    ctx->downcount -= 2;
    // 805CE2CC: cmpwi   r29, 0
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

label_805CE2D0:
    ctx->pc = 0x805CE2D0u;
    // 805CE2D0: bc    4, 2, 0x805CE2E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE2E0;
        }
    }

label_805CE2D4:
    ctx->pc = 0x805CE2D4u;
    ctx->downcount -= 3;
    // 805CE2D4: lbz     r0, 98(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(98);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CE2D8:
    ctx->pc = 0x805CE2D8u;
    // 805CE2D8: cmpwi   r0, 0
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

label_805CE2DC:
    ctx->pc = 0x805CE2DCu;
    // 805CE2DC: bc    12, 2, 0x805CE314
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CE314;
        }
    }

label_805CE2E0:
    ctx->pc = 0x805CE2E0u;
    ctx->downcount -= 2;
    // 805CE2E0: cmpwi   r28, 0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE2E4:
    ctx->pc = 0x805CE2E4u;
    // 805CE2E4: bc    12, 2, 0x805CE2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CE2F0;
        }
    }

label_805CE2E8:
    ctx->pc = 0x805CE2E8u;
    ctx->downcount -= 2;
    // 805CE2E8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_805CE2EC:
    ctx->pc = 0x805CE2ECu;
    // 805CE2EC: stb     r0, 98(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(98);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CE2F0:
    ctx->pc = 0x805CE2F0u;
    ctx->downcount -= 7;
    // 805CE2F0: lfs     f2, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE2F0u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE2F4:
    ctx->pc = 0x805CE2F4u;
    // 805CE2F4: lfs     f1, 24192(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE2F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE2F8:
    ctx->pc = 0x805CE2F8u;
    // 805CE2F8: lfs     f0, 24196(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE2F8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE2FC:
    ctx->pc = 0x805CE2FCu;
    // 805CE2FC: fmuls   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE2FCu)) return;
    ppc_fmuls(ctx, 1, 2, 1);

label_805CE300:
    ctx->pc = 0x805CE300u;
    // 805CE300: stfs     f1, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE300u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE304:
    ctx->pc = 0x805CE304u;
    // 805CE304: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE304u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_805CE308:
    ctx->pc = 0x805CE308u;
    // 805CE308: bc    4, 0, 0x805CE338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE338;
        }
    }

label_805CE30C:
    ctx->pc = 0x805CE30Cu;
    ctx->downcount -= 2;
    // 805CE30C: stfs     f0, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE30Cu)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE310:
    ctx->pc = 0x805CE310u;
    // 805CE310: b       0x805CE338
    {
            goto label_805CE338;
    }

label_805CE314:
    ctx->pc = 0x805CE314u;
    ctx->downcount -= 8;
    // 805CE314: lfs     f3, 24192(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE314u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_805CE318:
    ctx->pc = 0x805CE318u;
    // 805CE318: lfs     f2, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE318u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE31C:
    ctx->pc = 0x805CE31Cu;
    // 805CE31C: lfs     f1, 24200(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE31Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE320:
    ctx->pc = 0x805CE320u;
    // 805CE320: lfs     f0, 24204(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE320u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE324:
    ctx->pc = 0x805CE324u;
    // 805CE324: fmadds f1, f3, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE324u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[3], ctx->fpr[2], ctx->fpr[1], true, false, false, &result))
            ctx->fpr[1] = ctx->ps1[1] = result;
    }

label_805CE328:
    ctx->pc = 0x805CE328u;
    // 805CE328: stfs     f1, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE328u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE32C:
    ctx->pc = 0x805CE32Cu;
    // 805CE32C: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE32Cu)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_805CE330:
    ctx->pc = 0x805CE330u;
    // 805CE330: bc    4, 1, 0x805CE338
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE338;
        }
    }

label_805CE334:
    ctx->pc = 0x805CE334u;
    ctx->downcount -= 1;
    // 805CE334: stfs     f0, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE334u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE338:
    ctx->pc = 0x805CE338u;
    ctx->downcount -= 13;
    // 805CE338: lfs     f0, 84(r23)
    if (!ppc_fp_available_inline(ctx, 0x805CE338u)) return;
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE33C:
    ctx->pc = 0x805CE33Cu;
    // 805CE33C: addi    r11, r1, 256
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(256);

label_805CE340:
    ctx->pc = 0x805CE340u;
    // 805CE340: lwz     r3, 12(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE344:
    ctx->pc = 0x805CE344u;
    // 805CE344: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE344u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_805CE348:
    ctx->pc = 0x805CE348u;
    // 805CE348: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE34C:
    ctx->pc = 0x805CE34Cu;
    // 805CE34C: stfd     f0, 200(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE34Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(200);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_805CE350:
    ctx->pc = 0x805CE350u;
    // 805CE350: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE354:
    ctx->pc = 0x805CE354u;
    // 805CE354: lwz     r0, 204(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE358:
    ctx->pc = 0x805CE358u;
    // 805CE358: sth     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE35C:
    ctx->pc = 0x805CE35Cu;
    // 805CE35C: lhz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE360:
    ctx->pc = 0x805CE360u;
    // 805CE360: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_805CE364:
    ctx->pc = 0x805CE364u;
    // 805CE364: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE368:
    ctx->pc = 0x805CE368u;
    // 805CE368: bl      0x80007894
    {
            ctx->lr = 0x805CE36Cu;
            ctx->pc = 0x80007894u;
            return;
    }

label_805CE36C:
    ctx->pc = 0x805CE36Cu;
    ctx->downcount -= 5;
    // 805CE36C: lwz     r0, 260(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(260);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE370:
    ctx->pc = 0x805CE370u;
    // 805CE370: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CE374:
    ctx->pc = 0x805CE374u;
    // 805CE374: addi    r1, r1, 256
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(256);

label_805CE378:
    ctx->pc = 0x805CE378u;
    // 805CE378: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CE37C:
    ctx->pc = 0x805CE37Cu;
    ctx->downcount -= 5;
    // 805CE37C: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CE380:
    ctx->pc = 0x805CE380u;
    // 805CE380: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CE384:
    ctx->pc = 0x805CE384u;
    // 805CE384: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE388:
    ctx->pc = 0x805CE388u;
    // 805CE388: addi    r11, r1, 192
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(192);

label_805CE38C:
    ctx->pc = 0x805CE38Cu;
    // 805CE38C: bl      0x8000785C
    {
            ctx->lr = 0x805CE390u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_805CE390:
    ctx->pc = 0x805CE390u;
    ctx->downcount -= 8;
    // 805CE390: lwz     r6, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CE394:
    ctx->pc = 0x805CE394u;
    // 805CE394: lis     r5, -32657
    ctx->gpr[5] = ((u32)(s32)(-32657) << 16);

label_805CE398:
    ctx->pc = 0x805CE398u;
    // 805CE398: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CE39C:
    ctx->pc = 0x805CE39Cu;
    // 805CE39C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CE3A0:
    ctx->pc = 0x805CE3A0u;
    // 805CE3A0: addic   r0, r6, -1
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE3A4:
    ctx->pc = 0x805CE3A4u;
    // 805CE3A4: addi    r4, r5, -30844
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-30844);

label_805CE3A8:
    ctx->pc = 0x805CE3A8u;
    // 805CE3A8: subfe   r3, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE3AC:
    ctx->pc = 0x805CE3ACu;
    // 805CE3AC: bl      0x80370BD4
    {
            ctx->lr = 0x805CE3B0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE3B0:
    ctx->pc = 0x805CE3B0u;
    ctx->downcount -= 8;
    // 805CE3B0: lwz     r3, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE3B4:
    ctx->pc = 0x805CE3B4u;
    // 805CE3B4: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_805CE3B8:
    ctx->pc = 0x805CE3B8u;
    // 805CE3B8: addi    r5, r1, 116
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(116);

label_805CE3BC:
    ctx->pc = 0x805CE3BCu;
    // 805CE3BC: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE3C0:
    ctx->pc = 0x805CE3C0u;
    // 805CE3C0: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE3C4:
    ctx->pc = 0x805CE3C4u;
    // 805CE3C4: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_805CE3C8:
    ctx->pc = 0x805CE3C8u;
    // 805CE3C8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CE3CC:
    loop_805CE3CC(ctx);
    if (ctx->pc == 0x805CE3E0u) goto label_805CE3E0;
    return;
label_805CE3D0:
    ctx->pc = 0x805CE3D0u;
    // 805CE3D0: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_805CE3D4:
    ctx->pc = 0x805CE3D4u;
    // 805CE3D4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CE3D8:
    ctx->pc = 0x805CE3D8u;
    // 805CE3D8: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_805CE3DC:
    // 805CE3DC: bc    16, 0, 0x805CE3CC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CE3CCu;
                return;
            }
            goto label_805CE3CC;
        }
    }

label_805CE3E0:
    ctx->pc = 0x805CE3E0u;
    ctx->downcount -= 69;
    // 805CE3E0: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE3E0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE3E4:
    ctx->pc = 0x805CE3E4u;
    // 805CE3E4: lis     r9, -32643
    ctx->gpr[9] = ((u32)(s32)(-32643) << 16);

label_805CE3E8:
    ctx->pc = 0x805CE3E8u;
    // 805CE3E8: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE3E8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE3EC:
    ctx->pc = 0x805CE3ECu;
    // 805CE3EC: addi    r9, r9, 24712
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(24712);

label_805CE3F0:
    ctx->pc = 0x805CE3F0u;
    // 805CE3F0: stfs     f1, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE3F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE3F4:
    ctx->pc = 0x805CE3F4u;
    // 805CE3F4: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_805CE3F8:
    ctx->pc = 0x805CE3F8u;
    // 805CE3F8: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_805CE3FC:
    ctx->pc = 0x805CE3FCu;
    // 805CE3FC: lfs     f2, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE3FCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE400:
    ctx->pc = 0x805CE400u;
    // 805CE400: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE400u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE404:
    ctx->pc = 0x805CE404u;
    // 805CE404: addi    r6, r1, 56
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(56);

label_805CE408:
    ctx->pc = 0x805CE408u;
    // 805CE408: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE40C:
    ctx->pc = 0x805CE40Cu;
    // 805CE40C: addi    r10, r1, 20
    ctx->gpr[10] = ctx->gpr[1] + (u32)(s32)(20);

label_805CE410:
    ctx->pc = 0x805CE410u;
    // 805CE410: psq_l   f3, 0(r4), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE410u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 3u, ea, false, 0u, false, 0x805CE410u);
        if (ctx->exception) return;
    }

label_805CE414:
    ctx->pc = 0x805CE414u;
    // 805CE414: addi    r7, r1, 68
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(68);

label_805CE418:
    ctx->pc = 0x805CE418u;
    // 805CE418: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE41C:
    ctx->pc = 0x805CE41Cu;
    // 805CE41C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE420:
    ctx->pc = 0x805CE420u;
    // 805CE420: ps_muls0  f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE420u)) return;
    ppc_ps_muls0(ctx, 3, 3, 2);

label_805CE424:
    ctx->pc = 0x805CE424u;
    // 805CE424: lfs     f4, 24172(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE424u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_805CE428:
    ctx->pc = 0x805CE428u;
    // 805CE428: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE428u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE42C:
    ctx->pc = 0x805CE42Cu;
    // 805CE42C: addi    r8, r1, 80
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(80);

label_805CE430:
    ctx->pc = 0x805CE430u;
    // 805CE430: psq_l   f6, 0(r9), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE430u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 6u, ea, false, 0u, false, 0x805CE430u);
        if (ctx->exception) return;
    }

label_805CE434:
    ctx->pc = 0x805CE434u;
    // 805CE434: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_805CE438:
    ctx->pc = 0x805CE438u;
    // 805CE438: psq_l   f7, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE438u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 7u, ea, false, 0u, false, 0x805CE438u);
        if (ctx->exception) return;
    }

label_805CE43C:
    ctx->pc = 0x805CE43Cu;
    // 805CE43C: ps_mr  f0, f3
    if (!ppc_fp_available_inline(ctx, 0x805CE43Cu)) return;
    ctx->fpr[0] = ctx->fpr[3];
    ctx->ps1[0] = ctx->ps1[3];

label_805CE440:
    ctx->pc = 0x805CE440u;
    // 805CE440: psq_l   f5, 24(r30), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE440u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 5u, ea, false, 0u, false, 0x805CE440u);
        if (ctx->exception) return;
    }

label_805CE444:
    ctx->pc = 0x805CE444u;
    // 805CE444: addi    r29, r1, 104
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE448:
    ctx->pc = 0x805CE448u;
    // 805CE448: ps_muls0  f7, f7, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE448u)) return;
    ppc_ps_muls0(ctx, 7, 7, 2);

label_805CE44C:
    ctx->pc = 0x805CE44Cu;
    // 805CE44C: stfs     f1, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE44Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE450:
    ctx->pc = 0x805CE450u;
    // 805CE450: ps_add  f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x805CE450u)) return;
    ppc_ps_add_op(ctx, 5, 6, 5);

label_805CE454:
    ctx->pc = 0x805CE454u;
    // 805CE454: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE454u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE458:
    ctx->pc = 0x805CE458u;
    // 805CE458: ps_muls0  f0, f0, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE458u)) return;
    ppc_ps_muls0(ctx, 0, 0, 4);

label_805CE45C:
    ctx->pc = 0x805CE45Cu;
    // 805CE45C: ps_mr  f1, f7
    if (!ppc_fp_available_inline(ctx, 0x805CE45Cu)) return;
    ctx->fpr[1] = ctx->fpr[7];
    ctx->ps1[1] = ctx->ps1[7];

label_805CE460:
    ctx->pc = 0x805CE460u;
    // 805CE460: psq_st   f3, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE460u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 3u, ea, false, 0u, false, 0x805CE460u);
        if (ctx->exception) return;
    }

label_805CE464:
    ctx->pc = 0x805CE464u;
    // 805CE464: addi    r28, r1, 92
    ctx->gpr[28] = ctx->gpr[1] + (u32)(s32)(92);

label_805CE468:
    ctx->pc = 0x805CE468u;
    // 805CE468: psq_l   f3, 8(r4), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE468u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 3u, ea, true, 0u, false, 0x805CE468u);
        if (ctx->exception) return;
    }

label_805CE46C:
    ctx->pc = 0x805CE46Cu;
    // 805CE46C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE470:
    ctx->pc = 0x805CE470u;
    // 805CE470: psq_st   f7, 0(r10), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE470u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 7u, ea, false, 0u, false, 0x805CE470u);
        if (ctx->exception) return;
    }

label_805CE474:
    ctx->pc = 0x805CE474u;
    // 805CE474: psq_l   f7, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE474u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 7u, ea, true, 0u, false, 0x805CE474u);
        if (ctx->exception) return;
    }

label_805CE478:
    ctx->pc = 0x805CE478u;
    // 805CE478: ps_muls0  f8, f1, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE478u)) return;
    ppc_ps_muls0(ctx, 8, 1, 4);

label_805CE47C:
    ctx->pc = 0x805CE47Cu;
    // 805CE47C: ps_muls0  f3, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE47Cu)) return;
    ppc_ps_muls0(ctx, 3, 3, 2);

label_805CE480:
    ctx->pc = 0x805CE480u;
    // 805CE480: psq_st   f0, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE480u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x805CE480u);
        if (ctx->exception) return;
    }

label_805CE484:
    ctx->pc = 0x805CE484u;
    // 805CE484: ps_muls0  f7, f7, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE484u)) return;
    ppc_ps_muls0(ctx, 7, 7, 2);

label_805CE488:
    ctx->pc = 0x805CE488u;
    // 805CE488: psq_l   f6, 8(r9), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE488u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 6u, ea, true, 0u, false, 0x805CE488u);
        if (ctx->exception) return;
    }

label_805CE48C:
    ctx->pc = 0x805CE48Cu;
    // 805CE48C: psq_st   f5, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE48Cu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 5u, ea, false, 0u, false, 0x805CE48Cu);
        if (ctx->exception) return;
    }

label_805CE490:
    ctx->pc = 0x805CE490u;
    // 805CE490: psq_l   f5, 32(r30), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE490u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 5u, ea, true, 0u, false, 0x805CE490u);
        if (ctx->exception) return;
    }

label_805CE494:
    ctx->pc = 0x805CE494u;
    // 805CE494: psq_st   f8, 0(r11), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE494u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 8u, ea, false, 0u, false, 0x805CE494u);
        if (ctx->exception) return;
    }

label_805CE498:
    ctx->pc = 0x805CE498u;
    // 805CE498: ps_muls0  f0, f3, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE498u)) return;
    ppc_ps_muls0(ctx, 0, 3, 4);

label_805CE49C:
    ctx->pc = 0x805CE49Cu;
    // 805CE49C: ps_muls0  f8, f7, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE49Cu)) return;
    ppc_ps_muls0(ctx, 8, 7, 4);

label_805CE4A0:
    ctx->pc = 0x805CE4A0u;
    // 805CE4A0: psq_l   f2, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4A0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x805CE4A0u);
        if (ctx->exception) return;
    }

label_805CE4A4:
    ctx->pc = 0x805CE4A4u;
    // 805CE4A4: ps_add  f5, f6, f5
    if (!ppc_fp_available_inline(ctx, 0x805CE4A4u)) return;
    ppc_ps_add_op(ctx, 5, 6, 5);

label_805CE4A8:
    ctx->pc = 0x805CE4A8u;
    // 805CE4A8: psq_l   f1, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4A8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x805CE4A8u);
        if (ctx->exception) return;
    }

label_805CE4AC:
    ctx->pc = 0x805CE4ACu;
    // 805CE4AC: psq_l   f6, 0(r31), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 6u, ea, false, 0u, false, 0x805CE4ACu);
        if (ctx->exception) return;
    }

label_805CE4B0:
    ctx->pc = 0x805CE4B0u;
    // 805CE4B0: ps_sub  f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE4B0u)) return;
    ppc_ps_sub_op(ctx, 1, 2, 1);

label_805CE4B4:
    ctx->pc = 0x805CE4B4u;
    // 805CE4B4: psq_l   f4, 0(r11), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4B4u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 4u, ea, false, 0u, false, 0x805CE4B4u);
        if (ctx->exception) return;
    }

label_805CE4B8:
    ctx->pc = 0x805CE4B8u;
    // 805CE4B8: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE4BC:
    ctx->pc = 0x805CE4BCu;
    // 805CE4BC: psq_st   f1, 0(r29), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x805CE4BCu);
        if (ctx->exception) return;
    }

label_805CE4C0:
    ctx->pc = 0x805CE4C0u;
    // 805CE4C0: ps_sub  f1, f5, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE4C0u)) return;
    ppc_ps_sub_op(ctx, 1, 5, 0);

label_805CE4C4:
    ctx->pc = 0x805CE4C4u;
    // 805CE4C4: ps_sub  f2, f6, f4
    if (!ppc_fp_available_inline(ctx, 0x805CE4C4u)) return;
    ppc_ps_sub_op(ctx, 2, 6, 4);

label_805CE4C8:
    ctx->pc = 0x805CE4C8u;
    // 805CE4C8: psq_l   f6, 8(r31), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4C8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 6u, ea, true, 0u, false, 0x805CE4C8u);
        if (ctx->exception) return;
    }

label_805CE4CC:
    ctx->pc = 0x805CE4CCu;
    // 805CE4CC: psq_st   f2, 0(r28), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4CCu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 2u, ea, false, 0u, false, 0x805CE4CCu);
        if (ctx->exception) return;
    }

label_805CE4D0:
    ctx->pc = 0x805CE4D0u;
    // 805CE4D0: ps_sub  f2, f6, f8
    if (!ppc_fp_available_inline(ctx, 0x805CE4D0u)) return;
    ppc_ps_sub_op(ctx, 2, 6, 8);

label_805CE4D4:
    ctx->pc = 0x805CE4D4u;
    // 805CE4D4: psq_st   f3, 8(r6), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4D4u)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 3u, ea, true, 0u, false, 0x805CE4D4u);
        if (ctx->exception) return;
    }

label_805CE4D8:
    ctx->pc = 0x805CE4D8u;
    // 805CE4D8: psq_st   f0, 8(r7), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4D8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x805CE4D8u);
        if (ctx->exception) return;
    }

label_805CE4DC:
    ctx->pc = 0x805CE4DCu;
    // 805CE4DC: psq_st   f5, 8(r8), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4DCu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 5u, ea, true, 0u, false, 0x805CE4DCu);
        if (ctx->exception) return;
    }

label_805CE4E0:
    ctx->pc = 0x805CE4E0u;
    // 805CE4E0: psq_st   f1, 8(r29), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4E0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x805CE4E0u);
        if (ctx->exception) return;
    }

label_805CE4E4:
    ctx->pc = 0x805CE4E4u;
    // 805CE4E4: psq_st   f7, 8(r10), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4E4u)) return;
    {
        u32 ea = ctx->gpr[10] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 7u, ea, true, 0u, false, 0x805CE4E4u);
        if (ctx->exception) return;
    }

label_805CE4E8:
    ctx->pc = 0x805CE4E8u;
    // 805CE4E8: psq_st   f8, 8(r11), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4E8u)) return;
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 8u, ea, true, 0u, false, 0x805CE4E8u);
        if (ctx->exception) return;
    }

label_805CE4EC:
    ctx->pc = 0x805CE4ECu;
    // 805CE4EC: psq_st   f2, 8(r28), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE4ECu)) return;
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 2u, ea, true, 0u, false, 0x805CE4ECu);
        if (ctx->exception) return;
    }

label_805CE4F0:
    ctx->pc = 0x805CE4F0u;
    // 805CE4F0: bl      0x80370BD4
    {
            ctx->lr = 0x805CE4F4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE4F4:
    ctx->pc = 0x805CE4F4u;
    ctx->downcount -= 9;
    // 805CE4F4: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE4F8:
    ctx->pc = 0x805CE4F8u;
    // 805CE4F8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE4FC:
    ctx->pc = 0x805CE4FCu;
    // 805CE4FC: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE4FCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE500:
    ctx->pc = 0x805CE500u;
    // 805CE500: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE504:
    ctx->pc = 0x805CE504u;
    // 805CE504: lfs     f2, 24176(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE504u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24176);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE508:
    ctx->pc = 0x805CE508u;
    // 805CE508: addi    r6, r1, 120
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(120);

label_805CE50C:
    ctx->pc = 0x805CE50Cu;
    // 805CE50C: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE510:
    ctx->pc = 0x805CE510u;
    // 805CE510: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CE514:
    ctx->pc = 0x805CE514u;
    // 805CE514: bl      0x80331C64
    {
            ctx->lr = 0x805CE518u;
            ctx->pc = 0x80331C64u;
            return;
    }

label_805CE518:
    ctx->pc = 0x805CE518u;
    ctx->downcount -= 2;
    // 805CE518: cmpwi   r3, 2
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE51C:
    ctx->pc = 0x805CE51Cu;
    // 805CE51C: bc    4, 2, 0x805CE53C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE53C;
        }
    }

label_805CE520:
    ctx->pc = 0x805CE520u;
    ctx->downcount -= 6;
    // 805CE520: lhz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE524:
    ctx->pc = 0x805CE524u;
    // 805CE524: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_805CE528:
    ctx->pc = 0x805CE528u;
    // 805CE528: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE52C:
    ctx->pc = 0x805CE52Cu;
    // 805CE52C: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_805CE530:
    ctx->pc = 0x805CE530u;
    // 805CE530: sth     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE534:
    ctx->pc = 0x805CE534u;
    // 805CE534: bl      0x8024DE0C
    {
            ctx->lr = 0x805CE538u;
            ctx->pc = 0x8024DE0Cu;
            return;
    }

label_805CE538:
    ctx->pc = 0x805CE538u;
    ctx->downcount -= 1;
    // 805CE538: b       0x805CE554
    {
            goto label_805CE554;
    }

label_805CE53C:
    ctx->pc = 0x805CE53Cu;
    ctx->downcount -= 6;
    // 805CE53C: lhz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE540:
    ctx->pc = 0x805CE540u;
    // 805CE540: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_805CE544:
    ctx->pc = 0x805CE544u;
    // 805CE544: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE548:
    ctx->pc = 0x805CE548u;
    // 805CE548: rlwinm r0, r0, 0, 31, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0xFFFFFFFDu;
    }

label_805CE54C:
    ctx->pc = 0x805CE54Cu;
    // 805CE54C: sth     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE550:
    ctx->pc = 0x805CE550u;
    // 805CE550: bl      0x8024DE0C
    {
            ctx->lr = 0x805CE554u;
            ctx->pc = 0x8024DE0Cu;
            return;
    }

label_805CE554:
    ctx->pc = 0x805CE554u;
    ctx->downcount -= 5;
    // 805CE554: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE558:
    ctx->pc = 0x805CE558u;
    // 805CE558: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE55C:
    ctx->pc = 0x805CE55Cu;
    // 805CE55C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE560:
    ctx->pc = 0x805CE560u;
    // 805CE560: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE564:
    ctx->pc = 0x805CE564u;
    // 805CE564: bl      0x80370BD4
    {
            ctx->lr = 0x805CE568u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE568:
    ctx->pc = 0x805CE568u;
    ctx->downcount -= 5;
    // 805CE568: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE56C:
    ctx->pc = 0x805CE56Cu;
    // 805CE56C: lwz     r3, 96(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE570:
    ctx->pc = 0x805CE570u;
    // 805CE570: lwz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE574:
    ctx->pc = 0x805CE574u;
    // 805CE574: cmpwi   r0, 10
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(10);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE578:
    ctx->pc = 0x805CE578u;
    // 805CE578: bc    4, 2, 0x805CE5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE5A4;
        }
    }

label_805CE57C:
    ctx->pc = 0x805CE57Cu;
    ctx->downcount -= 10;
    // 805CE57C: lfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE57Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE580:
    ctx->pc = 0x805CE580u;
    // 805CE580: lfs     f2, 24188(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE580u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE584:
    ctx->pc = 0x805CE584u;
    // 805CE584: lfs     f0, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE584u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE588:
    ctx->pc = 0x805CE588u;
    // 805CE588: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE588u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_805CE58C:
    ctx->pc = 0x805CE58Cu;
    // 805CE58C: lhz     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE590:
    ctx->pc = 0x805CE590u;
    // 805CE590: fmuls   f0, f0, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE590u)) return;
    ppc_fmuls(ctx, 0, 0, 2);

label_805CE594:
    ctx->pc = 0x805CE594u;
    // 805CE594: ori     r0, r0, 0x0002
    ctx->gpr[0] = ctx->gpr[0] | 0x0002u;

label_805CE598:
    ctx->pc = 0x805CE598u;
    // 805CE598: stfs     f1, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE598u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE59C:
    ctx->pc = 0x805CE59Cu;
    // 805CE59C: stfs     f0, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE59Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE5A0:
    ctx->pc = 0x805CE5A0u;
    // 805CE5A0: sth     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE5A4:
    ctx->pc = 0x805CE5A4u;
    ctx->downcount -= 13;
    // 805CE5A4: lfs     f0, 84(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE5A4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE5A8:
    ctx->pc = 0x805CE5A8u;
    // 805CE5A8: addi    r11, r1, 192
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(192);

label_805CE5AC:
    ctx->pc = 0x805CE5ACu;
    // 805CE5AC: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE5B0:
    ctx->pc = 0x805CE5B0u;
    // 805CE5B0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE5B0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_805CE5B4:
    ctx->pc = 0x805CE5B4u;
    // 805CE5B4: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE5B8:
    ctx->pc = 0x805CE5B8u;
    // 805CE5B8: stfd     f0, 168(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE5B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_805CE5BC:
    ctx->pc = 0x805CE5BCu;
    // 805CE5BC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE5C0:
    ctx->pc = 0x805CE5C0u;
    // 805CE5C0: lwz     r0, 172(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(172);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE5C4:
    ctx->pc = 0x805CE5C4u;
    // 805CE5C4: sth     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE5C8:
    ctx->pc = 0x805CE5C8u;
    // 805CE5C8: lhz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE5CC:
    ctx->pc = 0x805CE5CCu;
    // 805CE5CC: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_805CE5D0:
    ctx->pc = 0x805CE5D0u;
    // 805CE5D0: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE5D4:
    ctx->pc = 0x805CE5D4u;
    // 805CE5D4: bl      0x800078A8
    {
            ctx->lr = 0x805CE5D8u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_805CE5D8:
    ctx->pc = 0x805CE5D8u;
    ctx->downcount -= 5;
    // 805CE5D8: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE5DC:
    ctx->pc = 0x805CE5DCu;
    // 805CE5DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CE5E0:
    ctx->pc = 0x805CE5E0u;
    // 805CE5E0: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_805CE5E4:
    ctx->pc = 0x805CE5E4u;
    // 805CE5E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CE5E8:
    ctx->pc = 0x805CE5E8u;
    ctx->downcount -= 15;
    // 805CE5E8: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CE5EC:
    ctx->pc = 0x805CE5ECu;
    // 805CE5EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CE5F0:
    ctx->pc = 0x805CE5F0u;
    // 805CE5F0: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CE5F4:
    ctx->pc = 0x805CE5F4u;
    // 805CE5F4: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE5F8:
    ctx->pc = 0x805CE5F8u;
    // 805CE5F8: addi    r4, r4, -30844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30844);

label_805CE5FC:
    ctx->pc = 0x805CE5FCu;
    // 805CE5FC: stfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE5FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_805CE600:
    ctx->pc = 0x805CE600u;
    // 805CE600: psq_st   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE600u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x805CE600u);
        if (ctx->exception) return;
    }

label_805CE604:
    ctx->pc = 0x805CE604u;
    // 805CE604: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE604u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_805CE608:
    ctx->pc = 0x805CE608u;
    // 805CE608: stw     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CE60C:
    ctx->pc = 0x805CE60Cu;
    // 805CE60C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CE610:
    ctx->pc = 0x805CE610u;
    // 805CE610: stw     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CE614:
    ctx->pc = 0x805CE614u;
    // 805CE614: lwz     r5, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE618:
    ctx->pc = 0x805CE618u;
    // 805CE618: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE61C:
    ctx->pc = 0x805CE61Cu;
    // 805CE61C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE620:
    ctx->pc = 0x805CE620u;
    // 805CE620: bl      0x80370BD4
    {
            ctx->lr = 0x805CE624u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE624:
    ctx->pc = 0x805CE624u;
    ctx->downcount -= 8;
    // 805CE624: lwz     r3, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE628:
    ctx->pc = 0x805CE628u;
    // 805CE628: li      r0, 6
    ctx->gpr[0] = (u32)(s32)(6);

label_805CE62C:
    ctx->pc = 0x805CE62Cu;
    // 805CE62C: addi    r5, r1, 68
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(68);

label_805CE630:
    ctx->pc = 0x805CE630u;
    // 805CE630: lwz     r3, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE634:
    ctx->pc = 0x805CE634u;
    // 805CE634: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE638:
    ctx->pc = 0x805CE638u;
    // 805CE638: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_805CE63C:
    ctx->pc = 0x805CE63Cu;
    // 805CE63C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_805CE640:
    loop_805CE640(ctx);
    if (ctx->pc == 0x805CE654u) goto label_805CE654;
    return;
label_805CE644:
    ctx->pc = 0x805CE644u;
    // 805CE644: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_805CE648:
    ctx->pc = 0x805CE648u;
    // 805CE648: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CE64C:
    ctx->pc = 0x805CE64Cu;
    // 805CE64C: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_805CE650:
    // 805CE650: bc    16, 0, 0x805CE640
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CE640u;
                return;
            }
            goto label_805CE640;
        }
    }

label_805CE654:
    ctx->pc = 0x805CE654u;
    ctx->downcount -= 42;
    // 805CE654: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE654u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE658:
    ctx->pc = 0x805CE658u;
    // 805CE658: lis     r9, -32643
    ctx->gpr[9] = ((u32)(s32)(-32643) << 16);

label_805CE65C:
    ctx->pc = 0x805CE65Cu;
    // 805CE65C: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE65Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE660:
    ctx->pc = 0x805CE660u;
    // 805CE660: addi    r9, r9, 24712
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(24712);

label_805CE664:
    ctx->pc = 0x805CE664u;
    // 805CE664: stfs     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE664u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE668:
    ctx->pc = 0x805CE668u;
    // 805CE668: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_805CE66C:
    ctx->pc = 0x805CE66Cu;
    // 805CE66C: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE670:
    ctx->pc = 0x805CE670u;
    // 805CE670: addi    r6, r1, 20
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(20);

label_805CE674:
    ctx->pc = 0x805CE674u;
    // 805CE674: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE674u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE678:
    ctx->pc = 0x805CE678u;
    // 805CE678: addi    r7, r1, 32
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(32);

label_805CE67C:
    ctx->pc = 0x805CE67Cu;
    // 805CE67C: psq_l   f4, 0(r9), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE67Cu)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 4u, ea, false, 0u, false, 0x805CE67Cu);
        if (ctx->exception) return;
    }

label_805CE680:
    ctx->pc = 0x805CE680u;
    // 805CE680: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE684:
    ctx->pc = 0x805CE684u;
    // 805CE684: psq_l   f0, 0(r5), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE684u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 0u, ea, false, 0u, false, 0x805CE684u);
        if (ctx->exception) return;
    }

label_805CE688:
    ctx->pc = 0x805CE688u;
    // 805CE688: addi    r8, r1, 44
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(44);

label_805CE68C:
    ctx->pc = 0x805CE68Cu;
    // 805CE68C: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE68Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE690:
    ctx->pc = 0x805CE690u;
    // 805CE690: addi    r30, r1, 56
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(56);

label_805CE694:
    ctx->pc = 0x805CE694u;
    // 805CE694: ps_muls0  f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x805CE694u)) return;
    ppc_ps_muls0(ctx, 3, 0, 31);

label_805CE698:
    ctx->pc = 0x805CE698u;
    // 805CE698: psq_l   f0, 24(r31), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE698u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 0u, ea, false, 0u, false, 0x805CE698u);
        if (ctx->exception) return;
    }

label_805CE69C:
    ctx->pc = 0x805CE69Cu;
    // 805CE69C: lfs     f2, 24172(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE69Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24172);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE6A0:
    ctx->pc = 0x805CE6A0u;
    // 805CE6A0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE6A4:
    ctx->pc = 0x805CE6A4u;
    // 805CE6A4: ps_add  f4, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE6A4u)) return;
    ppc_ps_add_op(ctx, 4, 4, 0);

label_805CE6A8:
    ctx->pc = 0x805CE6A8u;
    // 805CE6A8: psq_l   f0, 8(r5), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6A8u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 0u, ea, true, 0u, false, 0x805CE6A8u);
        if (ctx->exception) return;
    }

label_805CE6AC:
    ctx->pc = 0x805CE6ACu;
    // 805CE6AC: psq_st   f4, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6ACu)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 4u, ea, false, 0u, false, 0x805CE6ACu);
        if (ctx->exception) return;
    }

label_805CE6B0:
    ctx->pc = 0x805CE6B0u;
    // 805CE6B0: ps_muls0  f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE6B0u)) return;
    ppc_ps_muls0(ctx, 1, 3, 2);

label_805CE6B4:
    ctx->pc = 0x805CE6B4u;
    // 805CE6B4: psq_l   f4, 8(r9), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6B4u)) return;
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 4u, ea, true, 0u, false, 0x805CE6B4u);
        if (ctx->exception) return;
    }

label_805CE6B8:
    ctx->pc = 0x805CE6B8u;
    // 805CE6B8: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE6BC:
    ctx->pc = 0x805CE6BCu;
    // 805CE6BC: psq_st   f3, 0(r6), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6BCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 3u, ea, false, 0u, false, 0x805CE6BCu);
        if (ctx->exception) return;
    }

label_805CE6C0:
    ctx->pc = 0x805CE6C0u;
    // 805CE6C0: ps_muls0  f3, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x805CE6C0u)) return;
    ppc_ps_muls0(ctx, 3, 0, 31);

label_805CE6C4:
    ctx->pc = 0x805CE6C4u;
    // 805CE6C4: psq_l   f0, 32(r31), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6C4u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 0u, ea, true, 0u, false, 0x805CE6C4u);
        if (ctx->exception) return;
    }

label_805CE6C8:
    ctx->pc = 0x805CE6C8u;
    // 805CE6C8: psq_st   f1, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6C8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 1u, ea, false, 0u, false, 0x805CE6C8u);
        if (ctx->exception) return;
    }

label_805CE6CC:
    ctx->pc = 0x805CE6CCu;
    // 805CE6CC: ps_muls0  f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE6CCu)) return;
    ppc_ps_muls0(ctx, 1, 3, 2);

label_805CE6D0:
    ctx->pc = 0x805CE6D0u;
    // 805CE6D0: psq_l   f5, 0(r8), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6D0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 5u, ea, false, 0u, false, 0x805CE6D0u);
        if (ctx->exception) return;
    }

label_805CE6D4:
    ctx->pc = 0x805CE6D4u;
    // 805CE6D4: ps_add  f4, f4, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE6D4u)) return;
    ppc_ps_add_op(ctx, 4, 4, 0);

label_805CE6D8:
    ctx->pc = 0x805CE6D8u;
    // 805CE6D8: psq_l   f2, 0(r7), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6D8u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x805CE6D8u);
        if (ctx->exception) return;
    }

label_805CE6DC:
    ctx->pc = 0x805CE6DCu;
    // 805CE6DC: psq_st   f3, 8(r6), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6DCu)) return;
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 3u, ea, true, 0u, false, 0x805CE6DCu);
        if (ctx->exception) return;
    }

label_805CE6E0:
    ctx->pc = 0x805CE6E0u;
    // 805CE6E0: ps_sub  f0, f5, f2
    if (!ppc_fp_available_inline(ctx, 0x805CE6E0u)) return;
    ppc_ps_sub_op(ctx, 0, 5, 2);

label_805CE6E4:
    ctx->pc = 0x805CE6E4u;
    // 805CE6E4: psq_st   f1, 8(r7), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6E4u)) return;
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 1u, ea, true, 0u, false, 0x805CE6E4u);
        if (ctx->exception) return;
    }

label_805CE6E8:
    ctx->pc = 0x805CE6E8u;
    // 805CE6E8: psq_st   f0, 0(r30), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6E8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x805CE6E8u);
        if (ctx->exception) return;
    }

label_805CE6EC:
    ctx->pc = 0x805CE6ECu;
    // 805CE6EC: ps_sub  f0, f4, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE6ECu)) return;
    ppc_ps_sub_op(ctx, 0, 4, 1);

label_805CE6F0:
    ctx->pc = 0x805CE6F0u;
    // 805CE6F0: psq_st   f4, 8(r8), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6F0u)) return;
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 4u, ea, true, 0u, false, 0x805CE6F0u);
        if (ctx->exception) return;
    }

label_805CE6F4:
    ctx->pc = 0x805CE6F4u;
    // 805CE6F4: psq_st   f0, 8(r30), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE6F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x805CE6F4u);
        if (ctx->exception) return;
    }

label_805CE6F8:
    ctx->pc = 0x805CE6F8u;
    // 805CE6F8: bl      0x80370BD4
    {
            ctx->lr = 0x805CE6FCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE6FC:
    ctx->pc = 0x805CE6FCu;
    ctx->downcount -= 6;
    // 805CE6FC: lwz     r5, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE700:
    ctx->pc = 0x805CE700u;
    // 805CE700: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x805CE700u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_805CE704:
    ctx->pc = 0x805CE704u;
    // 805CE704: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_805CE708:
    ctx->pc = 0x805CE708u;
    // 805CE708: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_805CE70C:
    ctx->pc = 0x805CE70Cu;
    // 805CE70C: lwz     r5, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE710:
    ctx->pc = 0x805CE710u;
    // 805CE710: bl      0x80331E00
    {
            ctx->lr = 0x805CE714u;
            ctx->pc = 0x80331E00u;
            return;
    }

label_805CE714:
    ctx->pc = 0x805CE714u;
    ctx->downcount -= 9;
    // 805CE714: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE718:
    ctx->pc = 0x805CE718u;
    // 805CE718: psq_l   f31, 136(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE718u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x805CE718u);
        if (ctx->exception) return;
    }

label_805CE71C:
    ctx->pc = 0x805CE71Cu;
    // 805CE71C: lfd     f31, 128(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE71Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(128);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_805CE720:
    ctx->pc = 0x805CE720u;
    // 805CE720: lwz     r31, 124(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(124);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CE724:
    ctx->pc = 0x805CE724u;
    // 805CE724: lwz     r30, 120(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(120);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_805CE728:
    ctx->pc = 0x805CE728u;
    // 805CE728: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CE72C:
    ctx->pc = 0x805CE72Cu;
    // 805CE72C: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_805CE730:
    ctx->pc = 0x805CE730u;
    // 805CE730: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CE734:
    ctx->pc = 0x805CE734u;
    ctx->downcount -= 5;
    // 805CE734: stwu     r1, -464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-464);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CE738:
    ctx->pc = 0x805CE738u;
    // 805CE738: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CE73C:
    ctx->pc = 0x805CE73Cu;
    // 805CE73C: stw     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE740:
    ctx->pc = 0x805CE740u;
    // 805CE740: addi    r11, r1, 464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(464);

label_805CE744:
    ctx->pc = 0x805CE744u;
    // 805CE744: bl      0x8000785C
    {
            ctx->lr = 0x805CE748u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_805CE748:
    ctx->pc = 0x805CE748u;
    ctx->downcount -= 8;
    // 805CE748: lwz     r6, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_805CE74C:
    ctx->pc = 0x805CE74Cu;
    // 805CE74C: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CE750:
    ctx->pc = 0x805CE750u;
    // 805CE750: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CE754:
    ctx->pc = 0x805CE754u;
    // 805CE754: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CE758:
    ctx->pc = 0x805CE758u;
    // 805CE758: addic   r0, r6, -1
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CE75C:
    ctx->pc = 0x805CE75Cu;
    // 805CE75C: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CE760:
    ctx->pc = 0x805CE760u;
    // 805CE760: subfe   r3, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CE764:
    ctx->pc = 0x805CE764u;
    // 805CE764: bl      0x80370BD4
    {
            ctx->lr = 0x805CE768u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CE768:
    ctx->pc = 0x805CE768u;
    ctx->downcount -= 5;
    // 805CE768: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE76C:
    ctx->pc = 0x805CE76Cu;
    // 805CE76C: lwz     r3, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE770:
    ctx->pc = 0x805CE770u;
    // 805CE770: lwz     r0, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE774:
    ctx->pc = 0x805CE774u;
    // 805CE774: cmpwi   r0, 0
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

label_805CE778:
    ctx->pc = 0x805CE778u;
    // 805CE778: bc    4, 2, 0x805CE9E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE9E4;
        }
    }

label_805CE77C:
    ctx->pc = 0x805CE77Cu;
    ctx->downcount -= 2;
    // 805CE77C: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE780:
    ctx->pc = 0x805CE780u;
    // 805CE780: bl      0x8003E730
    {
            ctx->lr = 0x805CE784u;
            ctx->pc = 0x8003E730u;
            return;
    }

label_805CE784:
    ctx->pc = 0x805CE784u;
    ctx->downcount -= 22;
    // 805CE784: lis     r7, -32643
    ctx->gpr[7] = ((u32)(s32)(-32643) << 16);

label_805CE788:
    ctx->pc = 0x805CE788u;
    // 805CE788: lwzu     r6, 24712(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(24712);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[7] = ea;
    }

label_805CE78C:
    ctx->pc = 0x805CE78Cu;
    // 805CE78C: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE790:
    ctx->pc = 0x805CE790u;
    // 805CE790: stw     r6, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CE794:
    ctx->pc = 0x805CE794u;
    // 805CE794: lwz     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE798:
    ctx->pc = 0x805CE798u;
    // 805CE798: addi    r29, r1, 56
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(56);

label_805CE79C:
    ctx->pc = 0x805CE79Cu;
    // 805CE79C: lwz     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE7A0:
    ctx->pc = 0x805CE7A0u;
    // 805CE7A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CE7A4:
    ctx->pc = 0x805CE7A4u;
    // 805CE7A4: stw     r5, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CE7A8:
    ctx->pc = 0x805CE7A8u;
    // 805CE7A8: stw     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE7AC:
    ctx->pc = 0x805CE7ACu;
    // 805CE7AC: psq_l   f2, 0(r29), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 2u, ea, false, 0u, false, 0x805CE7ACu);
        if (ctx->exception) return;
    }

label_805CE7B0:
    ctx->pc = 0x805CE7B0u;
    // 805CE7B0: psq_l   f0, 24(r30), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7B0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 0u, ea, false, 0u, false, 0x805CE7B0u);
        if (ctx->exception) return;
    }

label_805CE7B4:
    ctx->pc = 0x805CE7B4u;
    // 805CE7B4: ps_add  f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE7B4u)) return;
    ppc_ps_add_op(ctx, 0, 2, 0);

label_805CE7B8:
    ctx->pc = 0x805CE7B8u;
    // 805CE7B8: psq_l   f2, 8(r29), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7B8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 2u, ea, true, 0u, false, 0x805CE7B8u);
        if (ctx->exception) return;
    }

label_805CE7BC:
    ctx->pc = 0x805CE7BCu;
    // 805CE7BC: psq_st   f0, 0(r29), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7BCu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 0u, ea, false, 0u, false, 0x805CE7BCu);
        if (ctx->exception) return;
    }

label_805CE7C0:
    ctx->pc = 0x805CE7C0u;
    // 805CE7C0: psq_l   f0, 32(r30), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7C0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 0u, ea, true, 0u, false, 0x805CE7C0u);
        if (ctx->exception) return;
    }

label_805CE7C4:
    ctx->pc = 0x805CE7C4u;
    // 805CE7C4: lfs     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE7C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE7C8:
    ctx->pc = 0x805CE7C8u;
    // 805CE7C8: ps_add  f0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE7C8u)) return;
    ppc_ps_add_op(ctx, 0, 2, 0);

label_805CE7CC:
    ctx->pc = 0x805CE7CCu;
    // 805CE7CC: lfs     f2, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE7CCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE7D0:
    ctx->pc = 0x805CE7D0u;
    // 805CE7D0: psq_st   f0, 8(r29), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CE7D0u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 0u, ea, true, 0u, false, 0x805CE7D0u);
        if (ctx->exception) return;
    }

label_805CE7D4:
    ctx->pc = 0x805CE7D4u;
    // 805CE7D4: lfs     f3, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE7D4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_805CE7D8:
    ctx->pc = 0x805CE7D8u;
    // 805CE7D8: bl      0x8003EEC0
    {
            ctx->lr = 0x805CE7DCu;
            ctx->pc = 0x8003EEC0u;
            return;
    }

label_805CE7DC:
    ctx->pc = 0x805CE7DCu;
    ctx->downcount -= 6;
    // 805CE7DC: rlwinm r0, r28, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_805CE7E0:
    ctx->pc = 0x805CE7E0u;
    // 805CE7E0: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE7E4:
    ctx->pc = 0x805CE7E4u;
    // 805CE7E4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CE7E8:
    ctx->pc = 0x805CE7E8u;
    // 805CE7E8: lwz     r28, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_805CE7EC:
    ctx->pc = 0x805CE7ECu;
    // 805CE7EC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE7F0:
    ctx->pc = 0x805CE7F0u;
    // 805CE7F0: bl      0x801E5D00
    {
            ctx->lr = 0x805CE7F4u;
            ctx->pc = 0x801E5D00u;
            return;
    }

label_805CE7F4:
    ctx->pc = 0x805CE7F4u;
    ctx->downcount -= 5;
    // 805CE7F4: lfs     f1, 92(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE7F4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE7F8:
    ctx->pc = 0x805CE7F8u;
    // 805CE7F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE7FC:
    ctx->pc = 0x805CE7FCu;
    // 805CE7FC: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE7FCu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_805CE800:
    ctx->pc = 0x805CE800u;
    // 805CE800: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE800u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_805CE804:
    ctx->pc = 0x805CE804u;
    // 805CE804: bl      0x8024DCF4
    {
            ctx->lr = 0x805CE808u;
            ctx->pc = 0x8024DCF4u;
            return;
    }

label_805CE808:
    ctx->pc = 0x805CE808u;
    ctx->downcount -= 2;
    // 805CE808: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE80C:
    ctx->pc = 0x805CE80Cu;
    // 805CE80C: bl      0x8024E11C
    {
            ctx->lr = 0x805CE810u;
            ctx->pc = 0x8024E11Cu;
            return;
    }

label_805CE810:
    ctx->pc = 0x805CE810u;
    ctx->downcount -= 2;
    // 805CE810: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE814:
    ctx->pc = 0x805CE814u;
    // 805CE814: bl      0x8024E08C
    {
            ctx->lr = 0x805CE818u;
            ctx->pc = 0x8024E08Cu;
            return;
    }

label_805CE818:
    ctx->pc = 0x805CE818u;
    ctx->downcount -= 2;
    // 805CE818: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_805CE81C:
    ctx->pc = 0x805CE81Cu;
    // 805CE81C: bl      0x8024E054
    {
            ctx->lr = 0x805CE820u;
            ctx->pc = 0x8024E054u;
            return;
    }

label_805CE820:
    ctx->pc = 0x805CE820u;
    ctx->downcount -= 3;
    // 805CE820: lhz     r3, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        ctx->gpr[3] = mem_read16(ctx, ea);
    }

label_805CE824:
    ctx->pc = 0x805CE824u;
    // 805CE824: rlwinm. r0, r3, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805CE828:
    ctx->pc = 0x805CE828u;
    // 805CE828: bc    4, 2, 0x805CE8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CE8A0;
        }
    }

label_805CE82C:
    ctx->pc = 0x805CE82Cu;
    ctx->downcount -= 7;
    // 805CE82C: ori     r0, r3, 0x0001
    ctx->gpr[0] = ctx->gpr[3] | 0x0001u;

label_805CE830:
    ctx->pc = 0x805CE830u;
    // 805CE830: sth     r0, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE834:
    ctx->pc = 0x805CE834u;
    // 805CE834: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE834u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE838:
    ctx->pc = 0x805CE838u;
    // 805CE838: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CE83C:
    ctx->pc = 0x805CE83Cu;
    // 805CE83C: lwz     r3, 64(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE840:
    ctx->pc = 0x805CE840u;
    // 805CE840: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CE844:
    ctx->pc = 0x805CE844u;
    // 805CE844: bl      0x8024E98C
    {
            ctx->lr = 0x805CE848u;
            ctx->pc = 0x8024E98Cu;
            return;
    }

label_805CE848:
    ctx->pc = 0x805CE848u;
    ctx->downcount -= 2;
    // 805CE848: cmpwi   r31, 2
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CE84C:
    ctx->pc = 0x805CE84Cu;
    // 805CE84C: bc    12, 2, 0x805CE8A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CE8A0;
        }
    }

label_805CE850:
    ctx->pc = 0x805CE850u;
    ctx->downcount -= 7;
    // 805CE850: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CE854:
    ctx->pc = 0x805CE854u;
    // 805CE854: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_805CE858:
    ctx->pc = 0x805CE858u;
    // 805CE858: addi    r4, r4, -24608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24608);

label_805CE85C:
    ctx->pc = 0x805CE85Cu;
    // 805CE85C: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE860:
    ctx->pc = 0x805CE860u;
    // 805CE860: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CE864:
    ctx->pc = 0x805CE864u;
    // 805CE864: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CE868:
    ctx->pc = 0x805CE868u;
    // 805CE868: bl      0x8023EA98
    {
            ctx->lr = 0x805CE86Cu;
            ctx->pc = 0x8023EA98u;
            return;
    }

label_805CE86C:
    ctx->pc = 0x805CE86Cu;
    ctx->downcount -= 2;
    // 805CE86C: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE870:
    ctx->pc = 0x805CE870u;
    // 805CE870: bl      0x8023E91C
    {
            ctx->lr = 0x805CE874u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_805CE874:
    ctx->pc = 0x805CE874u;
    ctx->downcount -= 3;
    // 805CE874: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE878:
    ctx->pc = 0x805CE878u;
    // 805CE878: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE87C:
    ctx->pc = 0x805CE87Cu;
    // 805CE87C: bl      0x8023E498
    {
            ctx->lr = 0x805CE880u;
            ctx->pc = 0x8023E498u;
            return;
    }

label_805CE880:
    ctx->pc = 0x805CE880u;
    ctx->downcount -= 3;
    // 805CE880: lfs     f1, 92(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE880u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE884:
    ctx->pc = 0x805CE884u;
    // 805CE884: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE888:
    ctx->pc = 0x805CE888u;
    // 805CE888: bl      0x8023E4E8
    {
            ctx->lr = 0x805CE88Cu;
            ctx->pc = 0x8023E4E8u;
            return;
    }

label_805CE88C:
    ctx->pc = 0x805CE88Cu;
    ctx->downcount -= 2;
    // 805CE88C: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE890:
    ctx->pc = 0x805CE890u;
    // 805CE890: bl      0x8023E28C
    {
            ctx->lr = 0x805CE894u;
            ctx->pc = 0x8023E28Cu;
            return;
    }

label_805CE894:
    ctx->pc = 0x805CE894u;
    ctx->downcount -= 3;
    // 805CE894: addi    r3, r1, 152
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(152);

label_805CE898:
    ctx->pc = 0x805CE898u;
    // 805CE898: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_805CE89C:
    ctx->pc = 0x805CE89Cu;
    // 805CE89C: bl      0x8023E9C8
    {
            ctx->lr = 0x805CE8A0u;
            ctx->pc = 0x8023E9C8u;
            return;
    }

label_805CE8A0:
    ctx->pc = 0x805CE8A0u;
    ctx->downcount -= 11;
    // 805CE8A0: lis     r31, -32643
    ctx->gpr[31] = ((u32)(s32)(-32643) << 16);

label_805CE8A4:
    ctx->pc = 0x805CE8A4u;
    // 805CE8A4: lwzu     r6, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[6] = mem_read32(ctx, ea);
        ctx->gpr[31] = ea;
    }

label_805CE8A8:
    ctx->pc = 0x805CE8A8u;
    // 805CE8A8: lwz     r29, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_805CE8AC:
    ctx->pc = 0x805CE8ACu;
    // 805CE8AC: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_805CE8B0:
    ctx->pc = 0x805CE8B0u;
    // 805CE8B0: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE8B4:
    ctx->pc = 0x805CE8B4u;
    // 805CE8B4: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE8B8:
    ctx->pc = 0x805CE8B8u;
    // 805CE8B8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE8BC:
    ctx->pc = 0x805CE8BCu;
    // 805CE8BC: stw     r6, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_805CE8C0:
    ctx->pc = 0x805CE8C0u;
    // 805CE8C0: stw     r5, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CE8C4:
    ctx->pc = 0x805CE8C4u;
    // 805CE8C4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE8C8:
    ctx->pc = 0x805CE8C8u;
    // 805CE8C8: bl      0x803305B4
    {
            ctx->lr = 0x805CE8CCu;
            ctx->pc = 0x803305B4u;
            return;
    }

label_805CE8CC:
    ctx->pc = 0x805CE8CCu;
    ctx->downcount -= 11;
    // 805CE8CC: lwz     r5, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CE8D0:
    ctx->pc = 0x805CE8D0u;
    // 805CE8D0: addi    r3, r30, 36
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(36);

label_805CE8D4:
    ctx->pc = 0x805CE8D4u;
    // 805CE8D4: lwz     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CE8D8:
    ctx->pc = 0x805CE8D8u;
    // 805CE8D8: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE8DC:
    ctx->pc = 0x805CE8DCu;
    // 805CE8DC: stw     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CE8E0:
    ctx->pc = 0x805CE8E0u;
    // 805CE8E0: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CE8E4:
    ctx->pc = 0x805CE8E4u;
    // 805CE8E4: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE8E8:
    ctx->pc = 0x805CE8E8u;
    // 805CE8E8: stw     r5, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_805CE8EC:
    ctx->pc = 0x805CE8ECu;
    // 805CE8EC: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CE8F0:
    ctx->pc = 0x805CE8F0u;
    // 805CE8F0: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CE8F4:
    ctx->pc = 0x805CE8F4u;
    // 805CE8F4: bl      0x8003E730
    {
            ctx->lr = 0x805CE8F8u;
            ctx->pc = 0x8003E730u;
            return;
    }

label_805CE8F8:
    ctx->pc = 0x805CE8F8u;
    ctx->downcount -= 20;
    // 805CE8F8: lfs     f2, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE8F8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE8FC:
    ctx->pc = 0x805CE8FCu;
    // 805CE8FC: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_805CE900:
    ctx->pc = 0x805CE900u;
    // 805CE900: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE900u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE904:
    ctx->pc = 0x805CE904u;
    // 805CE904: addi    r6, r1, 32
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(32);

label_805CE908:
    ctx->pc = 0x805CE908u;
    // 805CE908: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE90C:
    ctx->pc = 0x805CE90Cu;
    // 805CE90C: addi    r7, r1, 20
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(20);

label_805CE910:
    ctx->pc = 0x805CE910u;
    // 805CE910: lwz     r3, -12968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12968);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE914:
    ctx->pc = 0x805CE914u;
    // 805CE914: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CE918:
    ctx->pc = 0x805CE918u;
    // 805CE918: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE918u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE91C:
    ctx->pc = 0x805CE91Cu;
    // 805CE91C: li      r8, 1000
    ctx->gpr[8] = (u32)(s32)(1000);

label_805CE920:
    ctx->pc = 0x805CE920u;
    // 805CE920: lfs     f1, 24208(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CE920u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24208);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE924:
    ctx->pc = 0x805CE924u;
    // 805CE924: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE924u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE928:
    ctx->pc = 0x805CE928u;
    // 805CE928: lwz     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE92C:
    ctx->pc = 0x805CE92Cu;
    // 805CE92C: lwz     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE930:
    ctx->pc = 0x805CE930u;
    // 805CE930: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CE934:
    ctx->pc = 0x805CE934u;
    // 805CE934: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CE938:
    ctx->pc = 0x805CE938u;
    // 805CE938: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE93C:
    ctx->pc = 0x805CE93Cu;
    // 805CE93C: bl      0x803292B8
    {
            ctx->lr = 0x805CE940u;
            ctx->pc = 0x803292B8u;
            return;
    }

label_805CE940:
    ctx->pc = 0x805CE940u;
    ctx->downcount -= 2;
    // 805CE940: rlwinm. r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805CE944:
    ctx->pc = 0x805CE944u;
    // 805CE944: bc    12, 2, 0x805CE988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CE988;
        }
    }

label_805CE948:
    ctx->pc = 0x805CE948u;
    ctx->downcount -= 3;
    // 805CE948: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_805CE94C:
    ctx->pc = 0x805CE94Cu;
    // 805CE94C: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE950:
    ctx->pc = 0x805CE950u;
    // 805CE950: bl      0x80330568
    {
            ctx->lr = 0x805CE954u;
            ctx->pc = 0x80330568u;
            return;
    }

label_805CE954:
    ctx->pc = 0x805CE954u;
    ctx->downcount -= 10;
    // 805CE954: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE954u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CE958:
    ctx->pc = 0x805CE958u;
    // 805CE958: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_805CE95C:
    ctx->pc = 0x805CE95Cu;
    // 805CE95C: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE95Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE960:
    ctx->pc = 0x805CE960u;
    // 805CE960: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CE964:
    ctx->pc = 0x805CE964u;
    // 805CE964: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE964u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE968:
    ctx->pc = 0x805CE968u;
    // 805CE968: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_805CE96C:
    ctx->pc = 0x805CE96Cu;
    // 805CE96C: stfs     f2, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE96Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CE970:
    ctx->pc = 0x805CE970u;
    // 805CE970: stfs     f1, 84(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CE974:
    ctx->pc = 0x805CE974u;
    // 805CE974: stfs     f0, 88(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE974u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CE978:
    ctx->pc = 0x805CE978u;
    // 805CE978: bl      0x8032F444
    {
            ctx->lr = 0x805CE97Cu;
            ctx->pc = 0x8032F444u;
            return;
    }

label_805CE97C:
    ctx->pc = 0x805CE97Cu;
    ctx->downcount -= 3;
    // 805CE97C: addi    r3, r1, 68
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(68);

label_805CE980:
    ctx->pc = 0x805CE980u;
    // 805CE980: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE984:
    ctx->pc = 0x805CE984u;
    // 805CE984: bl      0x80330500
    {
            ctx->lr = 0x805CE988u;
            ctx->pc = 0x80330500u;
            return;
    }

label_805CE988:
    ctx->pc = 0x805CE988u;
    ctx->downcount -= 3;
    // 805CE988: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE98C:
    ctx->pc = 0x805CE98Cu;
    // 805CE98C: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_805CE990:
    ctx->pc = 0x805CE990u;
    // 805CE990: bl      0x801E5D00
    {
            ctx->lr = 0x805CE994u;
            ctx->pc = 0x801E5D00u;
            return;
    }

label_805CE994:
    ctx->pc = 0x805CE994u;
    ctx->downcount -= 5;
    // 805CE994: lfs     f1, 92(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE994u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(92);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CE998:
    ctx->pc = 0x805CE998u;
    // 805CE998: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE99C:
    ctx->pc = 0x805CE99Cu;
    // 805CE99C: fmr    f2, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE99Cu)) return;
    ctx->fpr[2] = ctx->fpr[1];

label_805CE9A0:
    ctx->pc = 0x805CE9A0u;
    // 805CE9A0: fmr    f3, f1
    if (!ppc_fp_available_inline(ctx, 0x805CE9A0u)) return;
    ctx->fpr[3] = ctx->fpr[1];

label_805CE9A4:
    ctx->pc = 0x805CE9A4u;
    // 805CE9A4: bl      0x8024DCF4
    {
            ctx->lr = 0x805CE9A8u;
            ctx->pc = 0x8024DCF4u;
            return;
    }

label_805CE9A8:
    ctx->pc = 0x805CE9A8u;
    ctx->downcount -= 2;
    // 805CE9A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE9AC:
    ctx->pc = 0x805CE9ACu;
    // 805CE9AC: bl      0x8024E08C
    {
            ctx->lr = 0x805CE9B0u;
            ctx->pc = 0x8024E08Cu;
            return;
    }

label_805CE9B0:
    ctx->pc = 0x805CE9B0u;
    ctx->downcount -= 2;
    // 805CE9B0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CE9B4:
    ctx->pc = 0x805CE9B4u;
    // 805CE9B4: bl      0x8024E054
    {
            ctx->lr = 0x805CE9B8u;
            ctx->pc = 0x8024E054u;
            return;
    }

label_805CE9B8:
    ctx->pc = 0x805CE9B8u;
    ctx->downcount -= 11;
    // 805CE9B8: lfs     f0, 88(r30)
    if (!ppc_fp_available_inline(ctx, 0x805CE9B8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(88);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CE9BC:
    ctx->pc = 0x805CE9BCu;
    // 805CE9BC: lwz     r3, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE9C0:
    ctx->pc = 0x805CE9C0u;
    // 805CE9C0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x805CE9C0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_805CE9C4:
    ctx->pc = 0x805CE9C4u;
    // 805CE9C4: lwz     r3, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE9C8:
    ctx->pc = 0x805CE9C8u;
    // 805CE9C8: stfd     f0, 432(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CE9C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(432);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_805CE9CC:
    ctx->pc = 0x805CE9CCu;
    // 805CE9CC: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CE9D0:
    ctx->pc = 0x805CE9D0u;
    // 805CE9D0: lwz     r0, 436(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE9D4:
    ctx->pc = 0x805CE9D4u;
    // 805CE9D4: sth     r0, 34(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(34);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE9D8:
    ctx->pc = 0x805CE9D8u;
    // 805CE9D8: lhz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_805CE9DC:
    ctx->pc = 0x805CE9DCu;
    // 805CE9DC: ori     r0, r0, 0x0010
    ctx->gpr[0] = ctx->gpr[0] | 0x0010u;

label_805CE9E0:
    ctx->pc = 0x805CE9E0u;
    // 805CE9E0: sth     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_805CE9E4:
    ctx->pc = 0x805CE9E4u;
    ctx->downcount -= 2;
    // 805CE9E4: addi    r11, r1, 464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(464);

label_805CE9E8:
    ctx->pc = 0x805CE9E8u;
    // 805CE9E8: bl      0x800078A8
    {
            ctx->lr = 0x805CE9ECu;
            ctx->pc = 0x800078A8u;
            return;
    }

label_805CE9EC:
    ctx->pc = 0x805CE9ECu;
    ctx->downcount -= 5;
    // 805CE9EC: lwz     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CE9F0:
    ctx->pc = 0x805CE9F0u;
    // 805CE9F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CE9F4:
    ctx->pc = 0x805CE9F4u;
    // 805CE9F4: addi    r1, r1, 464
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(464);

label_805CE9F8:
    ctx->pc = 0x805CE9F8u;
    // 805CE9F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CE9FC:
    ctx->pc = 0x805CE9FCu;
    ctx->downcount -= 5;
    // 805CE9FC: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEA00:
    ctx->pc = 0x805CEA00u;
    // 805CEA00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEA04:
    ctx->pc = 0x805CEA04u;
    // 805CEA04: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEA08:
    ctx->pc = 0x805CEA08u;
    // 805CEA08: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_805CEA0C:
    ctx->pc = 0x805CEA0Cu;
    // 805CEA0C: bl      0x80007860
    {
            ctx->lr = 0x805CEA10u;
            ctx->pc = 0x80007860u;
            return;
    }

label_805CEA10:
    ctx->pc = 0x805CEA10u;
    ctx->downcount -= 53;
    // 805CEA10: lfs     f2, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEA10u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CEA14:
    ctx->pc = 0x805CEA14u;
    // 805CEA14: addi    r12, r1, 20
    ctx->gpr[12] = ctx->gpr[1] + (u32)(s32)(20);

label_805CEA18:
    ctx->pc = 0x805CEA18u;
    // 805CEA18: lfs     f0, 24164(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEA18u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEA1C:
    ctx->pc = 0x805CEA1Cu;
    // 805CEA1C: addi    r30, r1, 32
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(32);

label_805CEA20:
    ctx->pc = 0x805CEA20u;
    // 805CEA20: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEA20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEA24:
    ctx->pc = 0x805CEA24u;
    // 805CEA24: addi    r29, r1, 56
    ctx->gpr[29] = ctx->gpr[1] + (u32)(s32)(56);

label_805CEA28:
    ctx->pc = 0x805CEA28u;
    // 805CEA28: lfs     f1, 0(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEA28u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEA2C:
    ctx->pc = 0x805CEA2Cu;
    // 805CEA2C: lis     r11, -32643
    ctx->gpr[11] = ((u32)(s32)(-32643) << 16);

label_805CEA30:
    ctx->pc = 0x805CEA30u;
    // 805CEA30: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEA30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEA34:
    ctx->pc = 0x805CEA34u;
    // 805CEA34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEA38:
    ctx->pc = 0x805CEA38u;
    // 805CEA38: lfs     f3, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEA38u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[3] = value;
        ctx->ps1[3] = value;
    }

label_805CEA3C:
    ctx->pc = 0x805CEA3Cu;
    // 805CEA3C: addi    r5, r1, 44
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(44);

label_805CEA40:
    ctx->pc = 0x805CEA40u;
    // 805CEA40: stfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEA40u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEA44:
    ctx->pc = 0x805CEA44u;
    // 805CEA44: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_805CEA48:
    ctx->pc = 0x805CEA48u;
    // 805CEA48: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEA48u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEA4C:
    ctx->pc = 0x805CEA4Cu;
    // 805CEA4C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CEA50:
    ctx->pc = 0x805CEA50u;
    // 805CEA50: lfs     f4, 24212(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEA50u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24212);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[4] = value;
        ctx->ps1[4] = value;
    }

label_805CEA54:
    ctx->pc = 0x805CEA54u;
    // 805CEA54: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CEA58:
    ctx->pc = 0x805CEA58u;
    // 805CEA58: psq_l   f5, 0(r12), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA58u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(0);
        ppc_psq_load_inline(ctx, 5u, ea, false, 0u, false, 0x805CEA58u);
        if (ctx->exception) return;
    }

label_805CEA5C:
    ctx->pc = 0x805CEA5Cu;
    // 805CEA5C: li      r8, 1000
    ctx->gpr[8] = (u32)(s32)(1000);

label_805CEA60:
    ctx->pc = 0x805CEA60u;
    // 805CEA60: stfs     f3, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEA60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[3]));
    }

label_805CEA64:
    ctx->pc = 0x805CEA64u;
    // 805CEA64: ps_muls0  f5, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x805CEA64u)) return;
    ppc_ps_muls0(ctx, 5, 5, 4);

label_805CEA68:
    ctx->pc = 0x805CEA68u;
    // 805CEA68: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEA68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEA6C:
    ctx->pc = 0x805CEA6Cu;
    // 805CEA6C: psq_l   f1, 24(r3), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA6Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 1u, ea, false, 0u, false, 0x805CEA6Cu);
        if (ctx->exception) return;
    }

label_805CEA70:
    ctx->pc = 0x805CEA70u;
    // 805CEA70: lwzu     r10, 1240(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(1240);
        ctx->gpr[10] = mem_read32(ctx, ea);
        ctx->gpr[11] = ea;
    }

label_805CEA74:
    ctx->pc = 0x805CEA74u;
    // 805CEA74: ps_sub  f3, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x805CEA74u)) return;
    ppc_ps_sub_op(ctx, 3, 1, 5);

label_805CEA78:
    ctx->pc = 0x805CEA78u;
    // 805CEA78: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEA78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEA7C:
    ctx->pc = 0x805CEA7Cu;
    // 805CEA7C: lwz     r9, 4(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(4);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_805CEA80:
    ctx->pc = 0x805CEA80u;
    // 805CEA80: psq_st   f5, 0(r30), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA80u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 5u, ea, false, 0u, false, 0x805CEA80u);
        if (ctx->exception) return;
    }

label_805CEA84:
    ctx->pc = 0x805CEA84u;
    // 805CEA84: psq_l   f5, 8(r12), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA84u)) return;
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ppc_psq_load_inline(ctx, 5u, ea, true, 0u, false, 0x805CEA84u);
        if (ctx->exception) return;
    }

label_805CEA88:
    ctx->pc = 0x805CEA88u;
    // 805CEA88: psq_st   f3, 0(r29), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA88u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ppc_psq_store_inline(ctx, 3u, ea, false, 0u, false, 0x805CEA88u);
        if (ctx->exception) return;
    }

label_805CEA8C:
    ctx->pc = 0x805CEA8Cu;
    // 805CEA8C: ps_muls0  f5, f5, f4
    if (!ppc_fp_available_inline(ctx, 0x805CEA8Cu)) return;
    ppc_ps_muls0(ctx, 5, 5, 4);

label_805CEA90:
    ctx->pc = 0x805CEA90u;
    // 805CEA90: lwz     r0, 8(r11)
    {
        u32 ea = ctx->gpr[11] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEA94:
    ctx->pc = 0x805CEA94u;
    // 805CEA94: psq_l   f1, 32(r3), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEA94u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ppc_psq_load_inline(ctx, 1u, ea, true, 0u, false, 0x805CEA94u);
        if (ctx->exception) return;
    }

label_805CEA98:
    ctx->pc = 0x805CEA98u;
    // 805CEA98: lwz     r3, -12968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12968);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEA9C:
    ctx->pc = 0x805CEA9Cu;
    // 805CEA9C: ps_sub  f3, f1, f5
    if (!ppc_fp_available_inline(ctx, 0x805CEA9Cu)) return;
    ppc_ps_sub_op(ctx, 3, 1, 5);

label_805CEAA0:
    ctx->pc = 0x805CEAA0u;
    // 805CEAA0: stw     r10, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_805CEAA4:
    ctx->pc = 0x805CEAA4u;
    // 805CEAA4: lfs     f1, 24216(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEAA4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24216);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEAA8:
    ctx->pc = 0x805CEAA8u;
    // 805CEAA8: psq_st   f3, 8(r29), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEAA8u)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 3u, ea, true, 0u, false, 0x805CEAA8u);
        if (ctx->exception) return;
    }

label_805CEAAC:
    ctx->pc = 0x805CEAACu;
    // 805CEAAC: stw     r9, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_805CEAB0:
    ctx->pc = 0x805CEAB0u;
    // 805CEAB0: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEAB4:
    ctx->pc = 0x805CEAB4u;
    // 805CEAB4: stfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEAB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEAB8:
    ctx->pc = 0x805CEAB8u;
    // 805CEAB8: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEAB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEABC:
    ctx->pc = 0x805CEABCu;
    // 805CEABC: stfs     f2, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEABCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEAC0:
    ctx->pc = 0x805CEAC0u;
    // 805CEAC0: lwz     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEAC4:
    ctx->pc = 0x805CEAC4u;
    // 805CEAC4: psq_st   f5, 8(r30), 1, 0
    if (!ppc_fp_available_inline(ctx, 0x805CEAC4u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ppc_psq_store_inline(ctx, 5u, ea, true, 0u, false, 0x805CEAC4u);
        if (ctx->exception) return;
    }

label_805CEAC8:
    ctx->pc = 0x805CEAC8u;
    // 805CEAC8: lwz     r0, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEACC:
    ctx->pc = 0x805CEACCu;
    // 805CEACC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_805CEAD0:
    ctx->pc = 0x805CEAD0u;
    // 805CEAD0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CEAD4:
    ctx->pc = 0x805CEAD4u;
    // 805CEAD4: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEAD8:
    ctx->pc = 0x805CEAD8u;
    // 805CEAD8: bl      0x803292B8
    {
            ctx->lr = 0x805CEADCu;
            ctx->pc = 0x803292B8u;
            return;
    }

label_805CEADC:
    ctx->pc = 0x805CEADCu;
    ctx->downcount -= 2;
    // 805CEADC: rlwinm. r0, r3, 0, 16, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_805CEAE0:
    ctx->pc = 0x805CEAE0u;
    // 805CEAE0: bc    12, 2, 0x805CEAFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEAFC;
        }
    }

label_805CEAE4:
    ctx->pc = 0x805CEAE4u;
    ctx->downcount -= 6;
    // 805CEAE4: lfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEAE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEAE8:
    ctx->pc = 0x805CEAE8u;
    // 805CEAE8: stfs     f0, 24(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CEAE8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEAEC:
    ctx->pc = 0x805CEAECu;
    // 805CEAEC: lfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEAECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEAF0:
    ctx->pc = 0x805CEAF0u;
    // 805CEAF0: stfs     f0, 28(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CEAF0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEAF4:
    ctx->pc = 0x805CEAF4u;
    // 805CEAF4: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x805CEAF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEAF8:
    ctx->pc = 0x805CEAF8u;
    // 805CEAF8: stfs     f0, 32(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CEAF8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEAFC:
    ctx->pc = 0x805CEAFCu;
    ctx->downcount -= 6;
    // 805CEAFC: lwz     r3, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEB00:
    ctx->pc = 0x805CEB00u;
    // 805CEB00: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CEB04:
    ctx->pc = 0x805CEB04u;
    // 805CEB04: addi    r4, r4, -30844
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30844);

label_805CEB08:
    ctx->pc = 0x805CEB08u;
    // 805CEB08: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CEB0C:
    ctx->pc = 0x805CEB0Cu;
    // 805CEB0C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CEB10:
    ctx->pc = 0x805CEB10u;
    // 805CEB10: bl      0x80370BD4
    {
            ctx->lr = 0x805CEB14u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CEB14:
    ctx->pc = 0x805CEB14u;
    ctx->downcount -= 8;
    // 805CEB14: lwz     r5, -12224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12224);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CEB18:
    ctx->pc = 0x805CEB18u;
    // 805CEB18: addi    r4, r13, -19328
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-19328);

label_805CEB1C:
    ctx->pc = 0x805CEB1Cu;
    // 805CEB1C: lwz     r3, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEB20:
    ctx->pc = 0x805CEB20u;
    // 805CEB20: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CEB24:
    ctx->pc = 0x805CEB24u;
    // 805CEB24: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_805CEB28:
    ctx->pc = 0x805CEB28u;
    // 805CEB28: lwz     r29, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_805CEB2C:
    ctx->pc = 0x805CEB2Cu;
    // 805CEB2C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_805CEB30:
    ctx->pc = 0x805CEB30u;
    // 805CEB30: bl      0x80370BD4
    {
            ctx->lr = 0x805CEB34u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_805CEB34:
    ctx->pc = 0x805CEB34u;
    ctx->downcount -= 6;
    // 805CEB34: lwz     r4, -8608(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-8608);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CEB38:
    ctx->pc = 0x805CEB38u;
    // 805CEB38: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CEB3C:
    ctx->pc = 0x805CEB3Cu;
    // 805CEB3C: lfs     f1, 24168(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB3Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEB40:
    ctx->pc = 0x805CEB40u;
    // 805CEB40: addi    r3, r31, 24
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(24);

label_805CEB44:
    ctx->pc = 0x805CEB44u;
    // 805CEB44: lwz     r4, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CEB48:
    ctx->pc = 0x805CEB48u;
    // 805CEB48: bl      0x80331F38
    {
            ctx->lr = 0x805CEB4Cu;
            ctx->pc = 0x80331F38u;
            return;
    }

label_805CEB4C:
    ctx->pc = 0x805CEB4Cu;
    ctx->downcount -= 5;
    // 805CEB4C: lfs     f0, 24224(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB4Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24224);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEB50:
    ctx->pc = 0x805CEB50u;
    // 805CEB50: lfs     f2, 24220(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB50u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CEB54:
    ctx->pc = 0x805CEB54u;
    // 805CEB54: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x805CEB54u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_805CEB58:
    ctx->pc = 0x805CEB58u;
    // 805CEB58: stfs     f2, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CEB58u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEB5C:
    ctx->pc = 0x805CEB5Cu;
    // 805CEB5C: bc    4, 1, 0x805CEB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CEB68;
        }
    }

label_805CEB60:
    ctx->pc = 0x805CEB60u;
    ctx->downcount -= 2;
    // 805CEB60: lfs     f0, 24228(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB60u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24228);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEB64:
    ctx->pc = 0x805CEB64u;
    // 805CEB64: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x805CEB64u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEB68:
    ctx->pc = 0x805CEB68u;
    ctx->downcount -= 2;
    // 805CEB68: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_805CEB6C:
    ctx->pc = 0x805CEB6Cu;
    // 805CEB6C: bl      0x800078AC
    {
            ctx->lr = 0x805CEB70u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_805CEB70:
    ctx->pc = 0x805CEB70u;
    ctx->downcount -= 5;
    // 805CEB70: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEB74:
    ctx->pc = 0x805CEB74u;
    // 805CEB74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEB78:
    ctx->pc = 0x805CEB78u;
    // 805CEB78: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_805CEB7C:
    ctx->pc = 0x805CEB7Cu;
    // 805CEB7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEB80:
    ctx->pc = 0x805CEB80u;
    ctx->downcount -= 24;
    // 805CEB80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEB84:
    ctx->pc = 0x805CEB84u;
    // 805CEB84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEB88:
    ctx->pc = 0x805CEB88u;
    // 805CEB88: lis     r5, -32643
    ctx->gpr[5] = ((u32)(s32)(-32643) << 16);

label_805CEB8C:
    ctx->pc = 0x805CEB8Cu;
    // 805CEB8C: lfs     f2, 24204(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB8Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24204);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_805CEB90:
    ctx->pc = 0x805CEB90u;
    // 805CEB90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEB94:
    ctx->pc = 0x805CEB94u;
    // 805CEB94: addi    r4, r5, 1240
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(1240);

label_805CEB98:
    ctx->pc = 0x805CEB98u;
    // 805CEB98: lfs     f1, 24232(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEB98u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24232);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEB9C:
    ctx->pc = 0x805CEB9Cu;
    // 805CEB9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEBA0:
    ctx->pc = 0x805CEBA0u;
    // 805CEBA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CEBA4:
    ctx->pc = 0x805CEBA4u;
    // 805CEBA4: lfs     f0, 24220(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEBA4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24220);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEBA8:
    ctx->pc = 0x805CEBA8u;
    // 805CEBA8: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CEBAC:
    ctx->pc = 0x805CEBACu;
    // 805CEBAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEBB0:
    ctx->pc = 0x805CEBB0u;
    // 805CEBB0: stb     r31, 98(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(98);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_805CEBB4:
    ctx->pc = 0x805CEBB4u;
    // 805CEBB4: stfs     f2, 84(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_805CEBB8:
    ctx->pc = 0x805CEBB8u;
    // 805CEBB8: stfs     f1, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBB8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEBBC:
    ctx->pc = 0x805CEBBCu;
    // 805CEBBC: lfs     f1, 1240(r5)
    if (!ppc_fp_available_inline(ctx, 0x805CEBBCu)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(1240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEBC0:
    ctx->pc = 0x805CEBC0u;
    // 805CEBC0: stfs     f1, 24(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBC0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEBC4:
    ctx->pc = 0x805CEBC4u;
    // 805CEBC4: lfs     f1, 4(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEBC4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEBC8:
    ctx->pc = 0x805CEBC8u;
    // 805CEBC8: stfs     f1, 28(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBC8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEBCC:
    ctx->pc = 0x805CEBCCu;
    // 805CEBCC: lfs     f1, 8(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEBCCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEBD0:
    ctx->pc = 0x805CEBD0u;
    // 805CEBD0: stfs     f1, 32(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBD0u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEBD4:
    ctx->pc = 0x805CEBD4u;
    // 805CEBD4: stfs     f0, 92(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEBD4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEBD8:
    ctx->pc = 0x805CEBD8u;
    // 805CEBD8: addi    r3, r3, 36
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(36);

label_805CEBDC:
    ctx->pc = 0x805CEBDCu;
    // 805CEBDC: bl      0x8003E730
    {
            ctx->lr = 0x805CEBE0u;
            ctx->pc = 0x8003E730u;
            return;
    }

label_805CEBE0:
    ctx->pc = 0x805CEBE0u;
    ctx->downcount -= 2;
    // 805CEBE0: sth     r31, 96(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(96);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_805CEBE4:
    ctx->pc = 0x805CEBE4u;
    // 805CEBE4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_805CEBE8:
    ctx->downcount -= 11;
    // 805CEBE8: rlwinm r0, r31, 2, 14, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0x0003FFFCu;
    }

label_805CEBEC:
    // 805CEBEC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CEBF0:
    // 805CEBF0: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_805CEBF4:
    // 805CEBF4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CEBF8:
    ctx->pc = 0x805CEBF8u;
    // 805CEBF8: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEBFC:
    ctx->pc = 0x805CEBFCu;
    // 805CEBFC: lwz     r3, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEC00:
    ctx->pc = 0x805CEC00u;
    // 805CEC00: lwz     r12, 120(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(120);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEC04:
    ctx->pc = 0x805CEC04u;
    // 805CEC04: lwz     r12, 60(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(60);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEC08:
    ctx->pc = 0x805CEC08u;
    // 805CEC08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CEC0C:
    ctx->pc = 0x805CEC0Cu;
    // 805CEC0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CEC10u;
            ctx->pc = target;
            return;
        }
    }

label_805CEC10:
    ctx->downcount -= 3;
    // 805CEC10: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_805CEC14:
    // 805CEC14: cmplwi  r31, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[31]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_805CEC18:
    // 805CEC18: bc    12, 0, 0x805CEBE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x805CEBE8u;
                return;
            }
            goto label_805CEBE8;
        }
    }

label_805CEC1C:
    ctx->pc = 0x805CEC1Cu;
    ctx->downcount -= 7;
    // 805CEC1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEC20:
    ctx->pc = 0x805CEC20u;
    // 805CEC20: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEC24:
    ctx->pc = 0x805CEC24u;
    // 805CEC24: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_805CEC28:
    ctx->pc = 0x805CEC28u;
    // 805CEC28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEC2C:
    ctx->pc = 0x805CEC2Cu;
    // 805CEC2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEC30:
    ctx->pc = 0x805CEC30u;
    // 805CEC30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEC34:
    ctx->pc = 0x805CEC34u;
    ctx->downcount -= 20;
    // 805CEC34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEC38:
    ctx->pc = 0x805CEC38u;
    // 805CEC38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEC3C:
    ctx->pc = 0x805CEC3Cu;
    // 805CEC3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CEC40:
    ctx->pc = 0x805CEC40u;
    // 805CEC40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEC44:
    ctx->pc = 0x805CEC44u;
    // 805CEC44: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CEC48:
    ctx->pc = 0x805CEC48u;
    // 805CEC48: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEC4C:
    ctx->pc = 0x805CEC4Cu;
    // 805CEC4C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_805CEC50:
    ctx->pc = 0x805CEC50u;
    // 805CEC50: lwz     r5, -13440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13440);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CEC54:
    ctx->pc = 0x805CEC54u;
    // 805CEC54: lwz     r28, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_805CEC58:
    ctx->pc = 0x805CEC58u;
    // 805CEC58: bl      0x80231780
    {
            ctx->lr = 0x805CEC5Cu;
            ctx->pc = 0x80231780u;
            return;
    }

label_805CEC5C:
    ctx->pc = 0x805CEC5Cu;
    ctx->downcount -= 6;
    // 805CEC5C: lis     r30, -32663
    ctx->gpr[30] = ((u32)(s32)(-32663) << 16);

label_805CEC60:
    ctx->pc = 0x805CEC60u;
    // 805CEC60: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEC64:
    ctx->pc = 0x805CEC64u;
    // 805CEC64: addi    r30, r30, -27264
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-27264);

label_805CEC68:
    ctx->pc = 0x805CEC68u;
    // 805CEC68: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CEC6C:
    ctx->pc = 0x805CEC6Cu;
    // 805CEC6C: addi    r4, r30, 134
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(134);

label_805CEC70:
    ctx->pc = 0x805CEC70u;
    // 805CEC70: bl      0x80232594
    {
            ctx->lr = 0x805CEC74u;
            ctx->pc = 0x80232594u;
            return;
    }

label_805CEC74:
    ctx->pc = 0x805CEC74u;
    ctx->downcount -= 6;
    // 805CEC74: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEC78:
    ctx->pc = 0x805CEC78u;
    // 805CEC78: lwz     r3, -13104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CEC7C:
    ctx->pc = 0x805CEC7Cu;
    // 805CEC7C: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_805CEC80:
    ctx->pc = 0x805CEC80u;
    // 805CEC80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CEC84:
    ctx->pc = 0x805CEC84u;
    // 805CEC84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CEC88:
    ctx->pc = 0x805CEC88u;
    // 805CEC88: bl      0x80253844
    {
            ctx->lr = 0x805CEC8Cu;
            ctx->pc = 0x80253844u;
            return;
    }

label_805CEC8C:
    ctx->pc = 0x805CEC8Cu;
    ctx->downcount -= 10;
    // 805CEC8C: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CEC90:
    ctx->pc = 0x805CEC90u;
    // 805CEC90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEC94:
    ctx->pc = 0x805CEC94u;
    // 805CEC94: rlwinm r28, r28, 2, 0, 29
    {
        ctx->gpr[28] = dolrecomp_rotl32(ctx->gpr[28], 2u) & 0xFFFFFFFCu;
    }

label_805CEC98:
    ctx->pc = 0x805CEC98u;
    // 805CEC98: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_805CEC9C:
    ctx->pc = 0x805CEC9Cu;
    // 805CEC9C: addi    r4, r4, -24620
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24620);

label_805CECA0:
    ctx->pc = 0x805CECA0u;
    // 805CECA0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CECA4:
    ctx->pc = 0x805CECA4u;
    // 805CECA4: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CECA8:
    ctx->pc = 0x805CECA8u;
    // 805CECA8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CECAC:
    ctx->pc = 0x805CECACu;
    // 805CECAC: li      r7, 264
    ctx->gpr[7] = (u32)(s32)(264);

label_805CECB0:
    ctx->pc = 0x805CECB0u;
    // 805CECB0: bl      0x8024E630
    {
            ctx->lr = 0x805CECB4u;
            ctx->pc = 0x8024E630u;
            return;
    }

label_805CECB4:
    ctx->pc = 0x805CECB4u;
    ctx->downcount -= 6;
    // 805CECB4: stw     r3, 12(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CECB8:
    ctx->pc = 0x805CECB8u;
    // 805CECB8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CECBC:
    ctx->pc = 0x805CECBCu;
    // 805CECBC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CECC0:
    ctx->pc = 0x805CECC0u;
    // 805CECC0: lwz     r29, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_805CECC4:
    ctx->pc = 0x805CECC4u;
    // 805CECC4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CECC8:
    ctx->pc = 0x805CECC8u;
    // 805CECC8: bl      0x8024EE94
    {
            ctx->lr = 0x805CECCCu;
            ctx->pc = 0x8024EE94u;
            return;
    }

label_805CECCC:
    ctx->pc = 0x805CECCCu;
    ctx->downcount -= 11;
    // 805CECCC: lwz     r12, 120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(120);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CECD0:
    ctx->pc = 0x805CECD0u;
    // 805CECD0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CECD4:
    ctx->pc = 0x805CECD4u;
    // 805CECD4: rlwinm r6, r31, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000FFFFu;
    }

label_805CECD8:
    ctx->pc = 0x805CECD8u;
    // 805CECD8: addi    r7, r30, 158
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(158);

label_805CECDC:
    ctx->pc = 0x805CECDCu;
    // 805CECDC: lwz     r12, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CECE0:
    ctx->pc = 0x805CECE0u;
    // 805CECE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CECE4:
    ctx->pc = 0x805CECE4u;
    // 805CECE4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CECE8:
    ctx->pc = 0x805CECE8u;
    // 805CECE8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CECEC:
    ctx->pc = 0x805CECECu;
    // 805CECEC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CECF0:
    ctx->pc = 0x805CECF0u;
    // 805CECF0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CECF4u;
            ctx->pc = target;
            return;
        }
    }

label_805CECF4:
    ctx->pc = 0x805CECF4u;
    ctx->downcount -= 4;
    // 805CECF4: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CECF8:
    ctx->pc = 0x805CECF8u;
    // 805CECF8: addi    r4, r30, 175
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(175);

label_805CECFC:
    ctx->pc = 0x805CECFCu;
    // 805CECFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CED00:
    ctx->pc = 0x805CED00u;
    // 805CED00: bl      0x80232594
    {
            ctx->lr = 0x805CED04u;
            ctx->pc = 0x80232594u;
            return;
    }

label_805CED04:
    ctx->pc = 0x805CED04u;
    ctx->downcount -= 6;
    // 805CED04: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CED08:
    ctx->pc = 0x805CED08u;
    // 805CED08: lwz     r3, -13104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CED0C:
    ctx->pc = 0x805CED0Cu;
    // 805CED0C: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_805CED10:
    ctx->pc = 0x805CED10u;
    // 805CED10: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CED14:
    ctx->pc = 0x805CED14u;
    // 805CED14: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CED18:
    ctx->pc = 0x805CED18u;
    // 805CED18: bl      0x80253844
    {
            ctx->lr = 0x805CED1Cu;
            ctx->pc = 0x80253844u;
            return;
    }

label_805CED1C:
    ctx->pc = 0x805CED1Cu;
    ctx->downcount -= 9;
    // 805CED1C: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CED20:
    ctx->pc = 0x805CED20u;
    // 805CED20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CED24:
    ctx->pc = 0x805CED24u;
    // 805CED24: addi    r4, r4, -24632
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24632);

label_805CED28:
    ctx->pc = 0x805CED28u;
    // 805CED28: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_805CED2C:
    ctx->pc = 0x805CED2Cu;
    // 805CED2C: lwzx    r4, r4, r28
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CED30:
    ctx->pc = 0x805CED30u;
    // 805CED30: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_805CED34:
    ctx->pc = 0x805CED34u;
    // 805CED34: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CED38:
    ctx->pc = 0x805CED38u;
    // 805CED38: li      r7, 264
    ctx->gpr[7] = (u32)(s32)(264);

label_805CED3C:
    ctx->pc = 0x805CED3Cu;
    // 805CED3C: bl      0x8024E630
    {
            ctx->lr = 0x805CED40u;
            ctx->pc = 0x8024E630u;
            return;
    }

label_805CED40:
    ctx->pc = 0x805CED40u;
    ctx->downcount -= 6;
    // 805CED40: stw     r3, 8(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CED44:
    ctx->pc = 0x805CED44u;
    // 805CED44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CED48:
    ctx->pc = 0x805CED48u;
    // 805CED48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CED4C:
    ctx->pc = 0x805CED4Cu;
    // 805CED4C: lwz     r29, 64(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(64);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_805CED50:
    ctx->pc = 0x805CED50u;
    // 805CED50: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CED54:
    ctx->pc = 0x805CED54u;
    // 805CED54: bl      0x8024EE94
    {
            ctx->lr = 0x805CED58u;
            ctx->pc = 0x8024EE94u;
            return;
    }

label_805CED58:
    ctx->pc = 0x805CED58u;
    ctx->downcount -= 11;
    // 805CED58: lwz     r12, 120(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(120);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CED5C:
    ctx->pc = 0x805CED5Cu;
    // 805CED5C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_805CED60:
    ctx->pc = 0x805CED60u;
    // 805CED60: rlwinm r6, r31, 0, 16, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x0000FFFFu;
    }

label_805CED64:
    ctx->pc = 0x805CED64u;
    // 805CED64: addi    r7, r30, 199
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(199);

label_805CED68:
    ctx->pc = 0x805CED68u;
    // 805CED68: lwz     r12, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CED6C:
    ctx->pc = 0x805CED6Cu;
    // 805CED6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CED70:
    ctx->pc = 0x805CED70u;
    // 805CED70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CED74:
    ctx->pc = 0x805CED74u;
    // 805CED74: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CED78:
    ctx->pc = 0x805CED78u;
    // 805CED78: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CED7C:
    ctx->pc = 0x805CED7Cu;
    // 805CED7C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CED80u;
            ctx->pc = target;
            return;
        }
    }

label_805CED80:
    ctx->pc = 0x805CED80u;
    ctx->downcount -= 4;
    // 805CED80: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_805CED84:
    ctx->pc = 0x805CED84u;
    // 805CED84: addi    r4, r30, 216
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(216);

label_805CED88:
    ctx->pc = 0x805CED88u;
    // 805CED88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_805CED8C:
    ctx->pc = 0x805CED8Cu;
    // 805CED8C: bl      0x80232594
    {
            ctx->lr = 0x805CED90u;
            ctx->pc = 0x80232594u;
            return;
    }

label_805CED90:
    ctx->pc = 0x805CED90u;
    ctx->downcount -= 6;
    // 805CED90: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CED94:
    ctx->pc = 0x805CED94u;
    // 805CED94: lwz     r3, -13104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_805CED98:
    ctx->pc = 0x805CED98u;
    // 805CED98: li      r4, 12
    ctx->gpr[4] = (u32)(s32)(12);

label_805CED9C:
    ctx->pc = 0x805CED9Cu;
    // 805CED9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CEDA0:
    ctx->pc = 0x805CEDA0u;
    // 805CEDA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CEDA4:
    ctx->pc = 0x805CEDA4u;
    // 805CEDA4: bl      0x80253844
    {
            ctx->lr = 0x805CEDA8u;
            ctx->pc = 0x80253844u;
            return;
    }

label_805CEDA8:
    ctx->pc = 0x805CEDA8u;
    ctx->downcount -= 6;
    // 805CEDA8: rlwinm r3, r3, 0, 16, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x0000FFFFu;
    }

label_805CEDAC:
    ctx->pc = 0x805CEDACu;
    // 805CEDAC: addi    r4, r30, 247
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(247);

label_805CEDB0:
    ctx->pc = 0x805CEDB0u;
    // 805CEDB0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CEDB4:
    ctx->pc = 0x805CEDB4u;
    // 805CEDB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CEDB8:
    ctx->pc = 0x805CEDB8u;
    // 805CEDB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CEDBC:
    ctx->pc = 0x805CEDBCu;
    // 805CEDBC: bl      0x8024E630
    {
            ctx->lr = 0x805CEDC0u;
            ctx->pc = 0x8024E630u;
            return;
    }

label_805CEDC0:
    ctx->pc = 0x805CEDC0u;
    ctx->downcount -= 3;
    // 805CEDC0: stw     r3, 16(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_805CEDC4:
    ctx->pc = 0x805CEDC4u;
    // 805CEDC4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_805CEDC8:
    ctx->pc = 0x805CEDC8u;
    // 805CEDC8: bl      0x8024DE0C
    {
            ctx->lr = 0x805CEDCCu;
            ctx->pc = 0x8024DE0Cu;
            return;
    }

label_805CEDCC:
    ctx->pc = 0x805CEDCCu;
    ctx->downcount -= 16;
    // 805CEDCC: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CEDD0:
    ctx->pc = 0x805CEDD0u;
    // 805CEDD0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEDD4:
    ctx->pc = 0x805CEDD4u;
    // 805CEDD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEDD8:
    ctx->pc = 0x805CEDD8u;
    // 805CEDD8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CEDDC:
    ctx->pc = 0x805CEDDCu;
    // 805CEDDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEDE0:
    ctx->pc = 0x805CEDE0u;
    ctx->downcount -= 6;
    // 805CEDE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEDE4:
    ctx->pc = 0x805CEDE4u;
    // 805CEDE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEDE8:
    ctx->pc = 0x805CEDE8u;
    // 805CEDE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEDEC:
    ctx->pc = 0x805CEDECu;
    // 805CEDEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEDF0:
    ctx->pc = 0x805CEDF0u;
    // 805CEDF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEDF4:
    ctx->pc = 0x805CEDF4u;
    // 805CEDF4: bl      0x80334984
    {
            ctx->lr = 0x805CEDF8u;
            ctx->pc = 0x80334984u;
            return;
    }

label_805CEDF8:
    ctx->pc = 0x805CEDF8u;
    ctx->downcount -= 10;
    // 805CEDF8: lis     r4, -32657
    ctx->gpr[4] = ((u32)(s32)(-32657) << 16);

label_805CEDFC:
    ctx->pc = 0x805CEDFCu;
    // 805CEDFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CEE00:
    ctx->pc = 0x805CEE00u;
    // 805CEE00: addi    r4, r4, -24596
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24596);

label_805CEE04:
    ctx->pc = 0x805CEE04u;
    // 805CEE04: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_805CEE08:
    ctx->pc = 0x805CEE08u;
    // 805CEE08: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEE0C:
    ctx->pc = 0x805CEE0Cu;
    // 805CEE0C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEE10:
    ctx->pc = 0x805CEE10u;
    // 805CEE10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEE14:
    ctx->pc = 0x805CEE14u;
    // 805CEE14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEE18:
    ctx->pc = 0x805CEE18u;
    // 805CEE18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEE1C:
    ctx->pc = 0x805CEE1Cu;
    ctx->downcount -= 7;
    // 805CEE1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEE20:
    ctx->pc = 0x805CEE20u;
    // 805CEE20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEE24:
    ctx->pc = 0x805CEE24u;
    // 805CEE24: cmpwi   r3, 0
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

label_805CEE28:
    ctx->pc = 0x805CEE28u;
    // 805CEE28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEE2C:
    ctx->pc = 0x805CEE2Cu;
    // 805CEE2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEE30:
    ctx->pc = 0x805CEE30u;
    // 805CEE30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEE34:
    ctx->pc = 0x805CEE34u;
    // 805CEE34: bc    12, 2, 0x805CEE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEE44;
        }
    }

label_805CEE38:
    ctx->pc = 0x805CEE38u;
    ctx->downcount -= 2;
    // 805CEE38: cmpwi   r4, 0
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

label_805CEE3C:
    ctx->pc = 0x805CEE3Cu;
    // 805CEE3C: bc    4, 1, 0x805CEE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_805CEE44;
        }
    }

label_805CEE40:
    ctx->pc = 0x805CEE40u;
    ctx->downcount -= 1;
    // 805CEE40: bl      0x801C1C90
    {
            ctx->lr = 0x805CEE44u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_805CEE44:
    ctx->pc = 0x805CEE44u;
    ctx->downcount -= 7;
    // 805CEE44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CEE48:
    ctx->pc = 0x805CEE48u;
    // 805CEE48: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEE4C:
    ctx->pc = 0x805CEE4Cu;
    // 805CEE4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEE50:
    ctx->pc = 0x805CEE50u;
    // 805CEE50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEE54:
    ctx->pc = 0x805CEE54u;
    // 805CEE54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEE58:
    ctx->pc = 0x805CEE58u;
    // 805CEE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEE5C:
    ctx->pc = 0x805CEE5Cu;
    ctx->downcount -= 8;
    // 805CEE5C: lis     r4, -32643
    ctx->gpr[4] = ((u32)(s32)(-32643) << 16);

label_805CEE60:
    ctx->pc = 0x805CEE60u;
    // 805CEE60: lfs     f1, 24160(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEE60u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEE64:
    ctx->pc = 0x805CEE64u;
    // 805CEE64: addi    r3, r4, 24712
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(24712);

label_805CEE68:
    ctx->pc = 0x805CEE68u;
    // 805CEE68: lfs     f0, 24236(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEE68u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24236);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_805CEE6C:
    ctx->pc = 0x805CEE6Cu;
    // 805CEE6C: stfs     f1, 24712(r4)
    if (!ppc_fp_available_inline(ctx, 0x805CEE6Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24712);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEE70:
    ctx->pc = 0x805CEE70u;
    // 805CEE70: stfs     f0, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEE70u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_805CEE74:
    ctx->pc = 0x805CEE74u;
    // 805CEE74: stfs     f1, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x805CEE74u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_805CEE78:
    ctx->pc = 0x805CEE78u;
    // 805CEE78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEE7C:
    ctx->pc = 0x805CEE7Cu;
    ctx->downcount -= 7;
    // 805CEE7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEE80:
    ctx->pc = 0x805CEE80u;
    // 805CEE80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEE84:
    ctx->pc = 0x805CEE84u;
    // 805CEE84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEE88:
    ctx->pc = 0x805CEE88u;
    // 805CEE88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEE8C:
    ctx->pc = 0x805CEE8Cu;
    // 805CEE8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEE90:
    ctx->pc = 0x805CEE90u;
    // 805CEE90: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CEE94:
    ctx->pc = 0x805CEE94u;
    // 805CEE94: bl      0x8026FF70
    {
            ctx->lr = 0x805CEE98u;
            ctx->pc = 0x8026FF70u;
            return;
    }

label_805CEE98:
    ctx->pc = 0x805CEE98u;
    ctx->downcount -= 2;
    // 805CEE98: cmpwi   r3, 0
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

label_805CEE9C:
    ctx->pc = 0x805CEE9Cu;
    // 805CEE9C: bc    12, 2, 0x805CEEB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEEB4;
        }
    }

label_805CEEA0:
    ctx->pc = 0x805CEEA0u;
    ctx->downcount -= 6;
    // 805CEEA0: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEEA4:
    ctx->pc = 0x805CEEA4u;
    // 805CEEA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CEEA8:
    ctx->pc = 0x805CEEA8u;
    // 805CEEA8: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEEAC:
    ctx->pc = 0x805CEEACu;
    // 805CEEAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CEEB0:
    ctx->pc = 0x805CEEB0u;
    // 805CEEB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CEEB4u;
            ctx->pc = target;
            return;
        }
    }

label_805CEEB4:
    ctx->pc = 0x805CEEB4u;
    ctx->downcount -= 6;
    // 805CEEB4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEEB8:
    ctx->pc = 0x805CEEB8u;
    // 805CEEB8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEEBC:
    ctx->pc = 0x805CEEBCu;
    // 805CEEBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEEC0:
    ctx->pc = 0x805CEEC0u;
    // 805CEEC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEEC4:
    ctx->pc = 0x805CEEC4u;
    // 805CEEC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEEC8:
    ctx->pc = 0x805CEEC8u;
    ctx->downcount -= 10;
    // 805CEEC8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEECC:
    ctx->pc = 0x805CEECCu;
    // 805CEECC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEED0:
    ctx->pc = 0x805CEED0u;
    // 805CEED0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CEED4:
    ctx->pc = 0x805CEED4u;
    // 805CEED4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEED8:
    ctx->pc = 0x805CEED8u;
    // 805CEED8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CEEDC:
    ctx->pc = 0x805CEEDCu;
    // 805CEEDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEEE0:
    ctx->pc = 0x805CEEE0u;
    // 805CEEE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEEE4:
    ctx->pc = 0x805CEEE4u;
    // 805CEEE4: stw     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEEE8:
    ctx->pc = 0x805CEEE8u;
    // 805CEEE8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CEEEC:
    ctx->pc = 0x805CEEECu;
    // 805CEEEC: bl      0x8026F6AC
    {
            ctx->lr = 0x805CEEF0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CEEF0:
    ctx->pc = 0x805CEEF0u;
    ctx->downcount -= 1;
    // 805CEEF0: bl      0x8025EBF0
    {
            ctx->lr = 0x805CEEF4u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_805CEEF4:
    ctx->pc = 0x805CEEF4u;
    ctx->downcount -= 3;
    // 805CEEF4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CEEF8:
    ctx->pc = 0x805CEEF8u;
    // 805CEEF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CEEFC:
    ctx->pc = 0x805CEEFCu;
    // 805CEEFC: bl      0x8026F6AC
    {
            ctx->lr = 0x805CEF00u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CEF00:
    ctx->pc = 0x805CEF00u;
    ctx->downcount -= 2;
    // 805CEF00: lfs     f1, 24240(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CEF00u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24240);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CEF04:
    ctx->pc = 0x805CEF04u;
    // 805CEF04: bl      0x8025EBE8
    {
            ctx->lr = 0x805CEF08u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CEF08:
    ctx->pc = 0x805CEF08u;
    ctx->downcount -= 6;
    // 805CEF08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEF0C:
    ctx->pc = 0x805CEF0Cu;
    // 805CEF0C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEF10:
    ctx->pc = 0x805CEF10u;
    // 805CEF10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEF14:
    ctx->pc = 0x805CEF14u;
    // 805CEF14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEF18:
    ctx->pc = 0x805CEF18u;
    // 805CEF18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEF1C:
    ctx->pc = 0x805CEF1Cu;
    ctx->downcount -= 9;
    // 805CEF1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEF20:
    ctx->pc = 0x805CEF20u;
    // 805CEF20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEF24:
    ctx->pc = 0x805CEF24u;
    // 805CEF24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEF28:
    ctx->pc = 0x805CEF28u;
    // 805CEF28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEF2C:
    ctx->pc = 0x805CEF2Cu;
    // 805CEF2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEF30:
    ctx->pc = 0x805CEF30u;
    // 805CEF30: lwz     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CEF34:
    ctx->pc = 0x805CEF34u;
    // 805CEF34: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_805CEF38:
    ctx->pc = 0x805CEF38u;
    // 805CEF38: stw     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEF3C:
    ctx->pc = 0x805CEF3Cu;
    // 805CEF3C: bc    12, 1, 0x805CEF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEF70;
        }
    }

label_805CEF40:
    ctx->pc = 0x805CEF40u;
    ctx->downcount -= 3;
    // 805CEF40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CEF44:
    ctx->pc = 0x805CEF44u;
    // 805CEF44: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CEF48:
    ctx->pc = 0x805CEF48u;
    // 805CEF48: bl      0x8026F6AC
    {
            ctx->lr = 0x805CEF4Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CEF4C:
    ctx->pc = 0x805CEF4Cu;
    ctx->downcount -= 1;
    // 805CEF4C: bl      0x8025EAF8
    {
            ctx->lr = 0x805CEF50u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_805CEF50:
    ctx->pc = 0x805CEF50u;
    ctx->downcount -= 2;
    // 805CEF50: cmpwi   r3, 0
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

label_805CEF54:
    ctx->pc = 0x805CEF54u;
    // 805CEF54: bc    12, 2, 0x805CEF70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEF70;
        }
    }

label_805CEF58:
    ctx->pc = 0x805CEF58u;
    ctx->downcount -= 6;
    // 805CEF58: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEF5C:
    ctx->pc = 0x805CEF5Cu;
    // 805CEF5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_805CEF60:
    ctx->pc = 0x805CEF60u;
    // 805CEF60: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_805CEF64:
    ctx->pc = 0x805CEF64u;
    // 805CEF64: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_805CEF68:
    ctx->pc = 0x805CEF68u;
    // 805CEF68: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x805CEF6Cu;
            ctx->pc = target;
            return;
        }
    }

label_805CEF6C:
    ctx->pc = 0x805CEF6Cu;
    ctx->downcount -= 1;
    // 805CEF6C: b       0x805CEF88
    {
            goto label_805CEF88;
    }

label_805CEF70:
    ctx->pc = 0x805CEF70u;
    ctx->downcount -= 3;
    // 805CEF70: lbz     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CEF74:
    ctx->pc = 0x805CEF74u;
    // 805CEF74: cmpwi   r0, 0
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

label_805CEF78:
    ctx->pc = 0x805CEF78u;
    // 805CEF78: bc    12, 2, 0x805CEF88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEF88;
        }
    }

label_805CEF7C:
    ctx->pc = 0x805CEF7Cu;
    ctx->downcount -= 3;
    // 805CEF7C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CEF80:
    ctx->pc = 0x805CEF80u;
    // 805CEF80: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805CEF84:
    ctx->pc = 0x805CEF84u;
    // 805CEF84: bl      0x803457B8
    {
            ctx->lr = 0x805CEF88u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CEF88:
    ctx->pc = 0x805CEF88u;
    ctx->downcount -= 6;
    // 805CEF88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEF8C:
    ctx->pc = 0x805CEF8Cu;
    // 805CEF8C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEF90:
    ctx->pc = 0x805CEF90u;
    // 805CEF90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEF94:
    ctx->pc = 0x805CEF94u;
    // 805CEF94: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEF98:
    ctx->pc = 0x805CEF98u;
    // 805CEF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEF9C:
    ctx->pc = 0x805CEF9Cu;
    ctx->downcount -= 7;
    // 805CEF9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CEFA0:
    ctx->pc = 0x805CEFA0u;
    // 805CEFA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CEFA4:
    ctx->pc = 0x805CEFA4u;
    // 805CEFA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CEFA8:
    ctx->pc = 0x805CEFA8u;
    // 805CEFA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CEFAC:
    ctx->pc = 0x805CEFACu;
    // 805CEFAC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CEFB0:
    ctx->pc = 0x805CEFB0u;
    // 805CEFB0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CEFB4:
    ctx->pc = 0x805CEFB4u;
    // 805CEFB4: bl      0x8026FF70
    {
            ctx->lr = 0x805CEFB8u;
            ctx->pc = 0x8026FF70u;
            return;
    }

label_805CEFB8:
    ctx->pc = 0x805CEFB8u;
    ctx->downcount -= 2;
    // 805CEFB8: cmpwi   r3, 0
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

label_805CEFBC:
    ctx->pc = 0x805CEFBCu;
    // 805CEFBC: bc    12, 2, 0x805CEFD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEFD0;
        }
    }

label_805CEFC0:
    ctx->pc = 0x805CEFC0u;
    ctx->downcount -= 3;
    // 805CEFC0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CEFC4:
    ctx->pc = 0x805CEFC4u;
    // 805CEFC4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_805CEFC8:
    ctx->pc = 0x805CEFC8u;
    // 805CEFC8: bl      0x803457B8
    {
            ctx->lr = 0x805CEFCCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CEFCC:
    ctx->pc = 0x805CEFCCu;
    ctx->downcount -= 1;
    // 805CEFCC: b       0x805CEFE8
    {
            goto label_805CEFE8;
    }

label_805CEFD0:
    ctx->pc = 0x805CEFD0u;
    ctx->downcount -= 3;
    // 805CEFD0: lbz     r0, 264(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(264);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_805CEFD4:
    ctx->pc = 0x805CEFD4u;
    // 805CEFD4: cmpwi   r0, 0
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

label_805CEFD8:
    ctx->pc = 0x805CEFD8u;
    // 805CEFD8: bc    12, 2, 0x805CEFE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_805CEFE8;
        }
    }

label_805CEFDC:
    ctx->pc = 0x805CEFDCu;
    ctx->downcount -= 3;
    // 805CEFDC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_805CEFE0:
    ctx->pc = 0x805CEFE0u;
    // 805CEFE0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_805CEFE4:
    ctx->pc = 0x805CEFE4u;
    // 805CEFE4: bl      0x803457B8
    {
            ctx->lr = 0x805CEFE8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CEFE8:
    ctx->pc = 0x805CEFE8u;
    ctx->downcount -= 6;
    // 805CEFE8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CEFEC:
    ctx->pc = 0x805CEFECu;
    // 805CEFEC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CEFF0:
    ctx->pc = 0x805CEFF0u;
    // 805CEFF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CEFF4:
    ctx->pc = 0x805CEFF4u;
    // 805CEFF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CEFF8:
    ctx->pc = 0x805CEFF8u;
    // 805CEFF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CEFFC:
    ctx->pc = 0x805CEFFCu;
    ctx->downcount -= 9;
    // 805CEFFC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CF000:
    ctx->pc = 0x805CF000u;
    // 805CF000: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CF004:
    ctx->pc = 0x805CF004u;
    // 805CF004: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF008:
    ctx->pc = 0x805CF008u;
    // 805CF008: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CF00C:
    ctx->pc = 0x805CF00Cu;
    // 805CF00C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CF010:
    ctx->pc = 0x805CF010u;
    // 805CF010: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CF014:
    ctx->pc = 0x805CF014u;
    // 805CF014: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CF018:
    ctx->pc = 0x805CF018u;
    // 805CF018: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CF01C:
    ctx->pc = 0x805CF01Cu;
    // 805CF01C: bl      0x8026FEF0
    {
            ctx->lr = 0x805CF020u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CF020:
    ctx->pc = 0x805CF020u;
    ctx->downcount -= 3;
    // 805CF020: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_805CF024:
    ctx->pc = 0x805CF024u;
    // 805CF024: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF028:
    ctx->pc = 0x805CF028u;
    // 805CF028: bl      0x8026F6AC
    {
            ctx->lr = 0x805CF02Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CF02C:
    ctx->pc = 0x805CF02Cu;
    ctx->downcount -= 1;
    // 805CF02C: bl      0x8025EC94
    {
            ctx->lr = 0x805CF030u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CF030:
    ctx->pc = 0x805CF030u;
    ctx->downcount -= 6;
    // 805CF030: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CF034:
    ctx->pc = 0x805CF034u;
    // 805CF034: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_805CF038:
    ctx->pc = 0x805CF038u;
    // 805CF038: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CF03C:
    ctx->pc = 0x805CF03Cu;
    // 805CF03C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CF040:
    ctx->pc = 0x805CF040u;
    // 805CF040: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF044:
    ctx->pc = 0x805CF044u;
    ctx->downcount -= 4;
    // 805CF044: lwz     r4, 260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(260);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CF048:
    ctx->pc = 0x805CF048u;
    // 805CF048: addic.  r0, r4, -1
    {
        u64 a = ctx->gpr[4];
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

label_805CF04C:
    ctx->pc = 0x805CF04Cu;
    // 805CF04C: stw     r0, 260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CF050:
    ctx->pc = 0x805CF050u;
    // 805CF050: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF054:
    ctx->pc = 0x805CF054u;
    ctx->downcount -= 3;
    // 805CF054: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CF058:
    ctx->pc = 0x805CF058u;
    // 805CF058: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_805CF05C:
    ctx->pc = 0x805CF05Cu;
    // 805CF05C: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CF060:
    ctx->pc = 0x805CF060u;
    ctx->downcount -= 1;
    // 805CF060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF064:
    ctx->pc = 0x805CF064u;
    ctx->downcount -= 1;
    // 805CF064: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF068:
    ctx->pc = 0x805CF068u;
    ctx->downcount -= 24;
    // 805CF068: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CF06C:
    ctx->pc = 0x805CF06Cu;
    // 805CF06C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CF070:
    ctx->pc = 0x805CF070u;
    // 805CF070: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_805CF074:
    ctx->pc = 0x805CF074u;
    // 805CF074: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CF078:
    ctx->pc = 0x805CF078u;
    // 805CF078: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CF07C:
    ctx->pc = 0x805CF07Cu;
    // 805CF07C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_805CF080:
    ctx->pc = 0x805CF080u;
    // 805CF080: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_805CF084:
    ctx->pc = 0x805CF084u;
    // 805CF084: lis     r31, -32663
    ctx->gpr[31] = ((u32)(s32)(-32663) << 16);

label_805CF088:
    ctx->pc = 0x805CF088u;
    // 805CF088: addi    r31, r31, -26976
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-26976);

label_805CF08C:
    ctx->pc = 0x805CF08Cu;
    // 805CF08C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CF090:
    ctx->pc = 0x805CF090u;
    // 805CF090: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_805CF094:
    ctx->pc = 0x805CF094u;
    // 805CF094: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CF098:
    ctx->pc = 0x805CF098u;
    // 805CF098: addi    r5, r31, 25
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(25);

label_805CF09C:
    ctx->pc = 0x805CF09Cu;
    // 805CF09C: bl      0x802703A8
    {
            ctx->lr = 0x805CF0A0u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_805CF0A0:
    ctx->pc = 0x805CF0A0u;
    ctx->downcount -= 6;
    // 805CF0A0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CF0A4:
    ctx->pc = 0x805CF0A4u;
    // 805CF0A4: addi    r5, r31, 42
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(42);

label_805CF0A8:
    ctx->pc = 0x805CF0A8u;
    // 805CF0A8: addi    r6, r31, 45
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(45);

label_805CF0AC:
    ctx->pc = 0x805CF0ACu;
    // 805CF0AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF0B0:
    ctx->pc = 0x805CF0B0u;
    // 805CF0B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CF0B4:
    ctx->pc = 0x805CF0B4u;
    // 805CF0B4: bl      0x8027035C
    {
            ctx->lr = 0x805CF0B8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CF0B8:
    ctx->pc = 0x805CF0B8u;
    ctx->downcount -= 6;
    // 805CF0B8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CF0BC:
    ctx->pc = 0x805CF0BCu;
    // 805CF0BC: addi    r5, r31, 56
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(56);

label_805CF0C0:
    ctx->pc = 0x805CF0C0u;
    // 805CF0C0: addi    r6, r31, 45
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(45);

label_805CF0C4:
    ctx->pc = 0x805CF0C4u;
    // 805CF0C4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_805CF0C8:
    ctx->pc = 0x805CF0C8u;
    // 805CF0C8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_805CF0CC:
    ctx->pc = 0x805CF0CCu;
    // 805CF0CC: bl      0x8027035C
    {
            ctx->lr = 0x805CF0D0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_805CF0D0:
    ctx->pc = 0x805CF0D0u;
    ctx->downcount -= 4;
    // 805CF0D0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_805CF0D4:
    ctx->pc = 0x805CF0D4u;
    // 805CF0D4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF0D8:
    ctx->pc = 0x805CF0D8u;
    // 805CF0D8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CF0DC:
    ctx->pc = 0x805CF0DCu;
    // 805CF0DC: bl      0x80270194
    {
            ctx->lr = 0x805CF0E0u;
            ctx->pc = 0x80270194u;
            return;
    }

label_805CF0E0:
    ctx->pc = 0x805CF0E0u;
    ctx->downcount -= 16;
    // 805CF0E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_805CF0E4:
    ctx->pc = 0x805CF0E4u;
    // 805CF0E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CF0E8:
    ctx->pc = 0x805CF0E8u;
    // 805CF0E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CF0EC:
    ctx->pc = 0x805CF0ECu;
    // 805CF0EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_805CF0F0:
    ctx->pc = 0x805CF0F0u;
    // 805CF0F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF0F4:
    ctx->pc = 0x805CF0F4u;
    ctx->downcount -= 5;
    // 805CF0F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CF0F8:
    ctx->pc = 0x805CF0F8u;
    // 805CF0F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_805CF0FC:
    ctx->pc = 0x805CF0FCu;
    // 805CF0FC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_805CF100:
    ctx->pc = 0x805CF100u;
    // 805CF100: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_805CF104:
    ctx->pc = 0x805CF104u;
    // 805CF104: bl      0x8000785C
    {
            ctx->lr = 0x805CF108u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_805CF108:
    ctx->pc = 0x805CF108u;
    ctx->downcount -= 7;
    // 805CF108: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_805CF10C:
    ctx->pc = 0x805CF10Cu;
    // 805CF10C: lwz     r4, -19224(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-19224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_805CF110:
    ctx->pc = 0x805CF110u;
    // 805CF110: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CF114:
    ctx->pc = 0x805CF114u;
    // 805CF114: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_805CF118:
    ctx->pc = 0x805CF118u;
    // 805CF118: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_805CF11C:
    ctx->pc = 0x805CF11Cu;
    // 805CF11C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_805CF120:
    ctx->pc = 0x805CF120u;
    // 805CF120: bl      0x8026F968
    {
            ctx->lr = 0x805CF124u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_805CF124:
    ctx->pc = 0x805CF124u;
    ctx->downcount -= 9;
    // 805CF124: lis     r5, -32663
    ctx->gpr[5] = ((u32)(s32)(-32663) << 16);

label_805CF128:
    ctx->pc = 0x805CF128u;
    // 805CF128: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_805CF12C:
    ctx->pc = 0x805CF12Cu;
    // 805CF12C: rlwinm r0, r29, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0xFFFFFFFCu;
    }

label_805CF130:
    ctx->pc = 0x805CF130u;
    // 805CF130: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CF134:
    ctx->pc = 0x805CF134u;
    // 805CF134: addi    r5, r5, -26992
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-26992);

label_805CF138:
    ctx->pc = 0x805CF138u;
    // 805CF138: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_805CF13C:
    ctx->pc = 0x805CF13Cu;
    // 805CF13C: lwzx    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_805CF140:
    ctx->pc = 0x805CF140u;
    // 805CF140: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_805CF144:
    ctx->pc = 0x805CF144u;
    // 805CF144: bl      0x8026F8C0
    {
            ctx->lr = 0x805CF148u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_805CF148:
    ctx->pc = 0x805CF148u;
    ctx->downcount -= 4;
    // 805CF148: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CF14C:
    ctx->pc = 0x805CF14Cu;
    // 805CF14C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF150:
    ctx->pc = 0x805CF150u;
    // 805CF150: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CF154:
    ctx->pc = 0x805CF154u;
    // 805CF154: bl      0x8026FEF0
    {
            ctx->lr = 0x805CF158u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_805CF158:
    ctx->pc = 0x805CF158u;
    ctx->downcount -= 3;
    // 805CF158: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CF15C:
    ctx->pc = 0x805CF15Cu;
    // 805CF15C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF160:
    ctx->pc = 0x805CF160u;
    // 805CF160: bl      0x8026F6AC
    {
            ctx->lr = 0x805CF164u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CF164:
    ctx->pc = 0x805CF164u;
    ctx->downcount -= 1;
    // 805CF164: bl      0x8025EC94
    {
            ctx->lr = 0x805CF168u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_805CF168:
    ctx->pc = 0x805CF168u;
    ctx->downcount -= 3;
    // 805CF168: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_805CF16C:
    ctx->pc = 0x805CF16Cu;
    // 805CF16C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF170:
    ctx->pc = 0x805CF170u;
    // 805CF170: bl      0x8026F6AC
    {
            ctx->lr = 0x805CF174u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_805CF174:
    ctx->pc = 0x805CF174u;
    ctx->downcount -= 2;
    // 805CF174: lfs     f1, 24244(r2)
    if (!ppc_fp_available_inline(ctx, 0x805CF174u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(24244);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_805CF178:
    ctx->pc = 0x805CF178u;
    // 805CF178: bl      0x8025EBE8
    {
            ctx->lr = 0x805CF17Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_805CF17C:
    ctx->pc = 0x805CF17Cu;
    ctx->downcount -= 9;
    // 805CF17C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_805CF180:
    ctx->pc = 0x805CF180u;
    // 805CF180: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_805CF184:
    ctx->pc = 0x805CF184u;
    // 805CF184: stw     r30, 256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_805CF188:
    ctx->pc = 0x805CF188u;
    // 805CF188: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_805CF18C:
    ctx->pc = 0x805CF18Cu;
    // 805CF18C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_805CF190:
    ctx->pc = 0x805CF190u;
    // 805CF190: stw     r31, 260(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(260);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_805CF194:
    ctx->pc = 0x805CF194u;
    // 805CF194: stb     r5, 265(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(265);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_805CF198:
    ctx->pc = 0x805CF198u;
    // 805CF198: stb     r0, 264(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(264);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_805CF19C:
    ctx->pc = 0x805CF19Cu;
    // 805CF19C: bl      0x803457B8
    {
            ctx->lr = 0x805CF1A0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_805CF1A0:
    ctx->pc = 0x805CF1A0u;
    ctx->downcount -= 2;
    // 805CF1A0: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_805CF1A4:
    ctx->pc = 0x805CF1A4u;
    // 805CF1A4: bl      0x800078A8
    {
            ctx->lr = 0x805CF1A8u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_805CF1A8:
    ctx->pc = 0x805CF1A8u;
    ctx->downcount -= 5;
    // 805CF1A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_805CF1AC:
    ctx->pc = 0x805CF1ACu;
    // 805CF1AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_805CF1B0:
    ctx->pc = 0x805CF1B0u;
    // 805CF1B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_805CF1B4:
    ctx->pc = 0x805CF1B4u;
    // 805CF1B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_805CB1C0;
        }
    }

label_805CF1B8:
    ctx->pc = 0x805CF1B8u;
    ctx->downcount -= 2;
    // 805CF1B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_805CF1BC:
    ctx->pc = 0x805CF1BCu;
    // 805CF1BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

    ctx->pc = 0x805CF1C0u;
    return;
return_dispatch_805CB1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x805CB1D4u: goto label_805CB1D4;
    case 0x805CB1E0u: goto label_805CB1E0;
    case 0x805CB1F8u: goto label_805CB1F8;
    case 0x805CB284u: goto label_805CB284;
    case 0x805CB29Cu: goto label_805CB29C;
    case 0x805CB2BCu: goto label_805CB2BC;
    case 0x805CB2E0u: goto label_805CB2E0;
    case 0x805CB2F8u: goto label_805CB2F8;
    case 0x805CB310u: goto label_805CB310;
    case 0x805CB31Cu: goto label_805CB31C;
    case 0x805CB33Cu: goto label_805CB33C;
    case 0x805CB358u: goto label_805CB358;
    case 0x805CB370u: goto label_805CB370;
    case 0x805CB38Cu: goto label_805CB38C;
    case 0x805CB398u: goto label_805CB398;
    case 0x805CB3ACu: goto label_805CB3AC;
    case 0x805CB3C0u: goto label_805CB3C0;
    case 0x805CB3CCu: goto label_805CB3CC;
    case 0x805CB3E0u: goto label_805CB3E0;
    case 0x805CB41Cu: goto label_805CB41C;
    case 0x805CB428u: goto label_805CB428;
    case 0x805CB44Cu: goto label_805CB44C;
    case 0x805CB46Cu: goto label_805CB46C;
    case 0x805CB478u: goto label_805CB478;
    case 0x805CB49Cu: goto label_805CB49C;
    case 0x805CB518u: goto label_805CB518;
    case 0x805CB530u: goto label_805CB530;
    case 0x805CB53Cu: goto label_805CB53C;
    case 0x805CB558u: goto label_805CB558;
    case 0x805CB57Cu: goto label_805CB57C;
    case 0x805CB594u: goto label_805CB594;
    case 0x805CB5ACu: goto label_805CB5AC;
    case 0x805CB5B8u: goto label_805CB5B8;
    case 0x805CB5C4u: goto label_805CB5C4;
    case 0x805CB5E0u: goto label_805CB5E0;
    case 0x805CB5FCu: goto label_805CB5FC;
    case 0x805CB614u: goto label_805CB614;
    case 0x805CB62Cu: goto label_805CB62C;
    case 0x805CB638u: goto label_805CB638;
    case 0x805CB64Cu: goto label_805CB64C;
    case 0x805CB678u: goto label_805CB678;
    case 0x805CB698u: goto label_805CB698;
    case 0x805CB6E8u: goto label_805CB6E8;
    case 0x805CB770u: goto label_805CB770;
    case 0x805CB7C8u: goto label_805CB7C8;
    case 0x805CB7D8u: goto label_805CB7D8;
    case 0x805CB7E4u: goto label_805CB7E4;
    case 0x805CB7ECu: goto label_805CB7EC;
    case 0x805CB808u: goto label_805CB808;
    case 0x805CB814u: goto label_805CB814;
    case 0x805CB824u: goto label_805CB824;
    case 0x805CB838u: goto label_805CB838;
    case 0x805CB840u: goto label_805CB840;
    case 0x805CB864u: goto label_805CB864;
    case 0x805CB870u: goto label_805CB870;
    case 0x805CB890u: goto label_805CB890;
    case 0x805CB89Cu: goto label_805CB89C;
    case 0x805CB8A0u: goto label_805CB8A0;
    case 0x805CB8B8u: goto label_805CB8B8;
    case 0x805CB8CCu: goto label_805CB8CC;
    case 0x805CB8F8u: goto label_805CB8F8;
    case 0x805CB904u: goto label_805CB904;
    case 0x805CB930u: goto label_805CB930;
    case 0x805CB93Cu: goto label_805CB93C;
    case 0x805CB96Cu: goto label_805CB96C;
    case 0x805CB978u: goto label_805CB978;
    case 0x805CB9C4u: goto label_805CB9C4;
    case 0x805CB9D0u: goto label_805CB9D0;
    case 0x805CBA1Cu: goto label_805CBA1C;
    case 0x805CBA28u: goto label_805CBA28;
    case 0x805CBA50u: goto label_805CBA50;
    case 0x805CBA5Cu: goto label_805CBA5C;
    case 0x805CBA84u: goto label_805CBA84;
    case 0x805CBAD4u: goto label_805CBAD4;
    case 0x805CBB2Cu: goto label_805CBB2C;
    case 0x805CBB8Cu: goto label_805CBB8C;
    case 0x805CBBBCu: goto label_805CBBBC;
    case 0x805CBBC8u: goto label_805CBBC8;
    case 0x805CBBCCu: goto label_805CBBCC;
    case 0x805CBBD8u: goto label_805CBBD8;
    case 0x805CBBE0u: goto label_805CBBE0;
    case 0x805CBBF0u: goto label_805CBBF0;
    case 0x805CBC84u: goto label_805CBC84;
    case 0x805CBCBCu: goto label_805CBCBC;
    case 0x805CBCE4u: goto label_805CBCE4;
    case 0x805CBCF8u: goto label_805CBCF8;
    case 0x805CBD9Cu: goto label_805CBD9C;
    case 0x805CBDA8u: goto label_805CBDA8;
    case 0x805CBDB8u: goto label_805CBDB8;
    case 0x805CBE2Cu: goto label_805CBE2C;
    case 0x805CBE48u: goto label_805CBE48;
    case 0x805CBE84u: goto label_805CBE84;
    case 0x805CBE88u: goto label_805CBE88;
    case 0x805CBE94u: goto label_805CBE94;
    case 0x805CBE9Cu: goto label_805CBE9C;
    case 0x805CBEE0u: goto label_805CBEE0;
    case 0x805CBEE4u: goto label_805CBEE4;
    case 0x805CBF00u: goto label_805CBF00;
    case 0x805CBF1Cu: goto label_805CBF1C;
    case 0x805CBF4Cu: goto label_805CBF4C;
    case 0x805CBF60u: goto label_805CBF60;
    case 0x805CBF7Cu: goto label_805CBF7C;
    case 0x805CBFCCu: goto label_805CBFCC;
    case 0x805CBFE4u: goto label_805CBFE4;
    case 0x805CBFFCu: goto label_805CBFFC;
    case 0x805CC00Cu: goto label_805CC00C;
    case 0x805CC02Cu: goto label_805CC02C;
    case 0x805CC038u: goto label_805CC038;
    case 0x805CC048u: goto label_805CC048;
    case 0x805CC09Cu: goto label_805CC09C;
    case 0x805CC0A8u: goto label_805CC0A8;
    case 0x805CC0ACu: goto label_805CC0AC;
    case 0x805CC0C8u: goto label_805CC0C8;
    case 0x805CC124u: goto label_805CC124;
    case 0x805CC130u: goto label_805CC130;
    case 0x805CC174u: goto label_805CC174;
    case 0x805CC180u: goto label_805CC180;
    case 0x805CC1B0u: goto label_805CC1B0;
    case 0x805CC1DCu: goto label_805CC1DC;
    case 0x805CC1E8u: goto label_805CC1E8;
    case 0x805CC1F4u: goto label_805CC1F4;
    case 0x805CC210u: goto label_805CC210;
    case 0x805CC21Cu: goto label_805CC21C;
    case 0x805CC260u: goto label_805CC260;
    case 0x805CC27Cu: goto label_805CC27C;
    case 0x805CC288u: goto label_805CC288;
    case 0x805CC2E0u: goto label_805CC2E0;
    case 0x805CC314u: goto label_805CC314;
    case 0x805CC320u: goto label_805CC320;
    case 0x805CC360u: goto label_805CC360;
    case 0x805CC398u: goto label_805CC398;
    case 0x805CC3A4u: goto label_805CC3A4;
    case 0x805CC3D4u: goto label_805CC3D4;
    case 0x805CC3E0u: goto label_805CC3E0;
    case 0x805CC3FCu: goto label_805CC3FC;
    case 0x805CC414u: goto label_805CC414;
    case 0x805CC420u: goto label_805CC420;
    case 0x805CC43Cu: goto label_805CC43C;
    case 0x805CC494u: goto label_805CC494;
    case 0x805CC4D0u: goto label_805CC4D0;
    case 0x805CC4E4u: goto label_805CC4E4;
    case 0x805CC4F8u: goto label_805CC4F8;
    case 0x805CC52Cu: goto label_805CC52C;
    case 0x805CC590u: goto label_805CC590;
    case 0x805CC59Cu: goto label_805CC59C;
    case 0x805CC5ACu: goto label_805CC5AC;
    case 0x805CC5F8u: goto label_805CC5F8;
    case 0x805CC604u: goto label_805CC604;
    case 0x805CC614u: goto label_805CC614;
    case 0x805CC654u: goto label_805CC654;
    case 0x805CC694u: goto label_805CC694;
    case 0x805CC71Cu: goto label_805CC71C;
    case 0x805CC724u: goto label_805CC724;
    case 0x805CC738u: goto label_805CC738;
    case 0x805CC778u: goto label_805CC778;
    case 0x805CC794u: goto label_805CC794;
    case 0x805CC7A8u: goto label_805CC7A8;
    case 0x805CC7E0u: goto label_805CC7E0;
    case 0x805CC7F0u: goto label_805CC7F0;
    case 0x805CC828u: goto label_805CC828;
    case 0x805CC838u: goto label_805CC838;
    case 0x805CC868u: goto label_805CC868;
    case 0x805CC870u: goto label_805CC870;
    case 0x805CC8A8u: goto label_805CC8A8;
    case 0x805CC8B0u: goto label_805CC8B0;
    case 0x805CC8C4u: goto label_805CC8C4;
    case 0x805CC8D0u: goto label_805CC8D0;
    case 0x805CC8E4u: goto label_805CC8E4;
    case 0x805CC92Cu: goto label_805CC92C;
    case 0x805CC948u: goto label_805CC948;
    case 0x805CC960u: goto label_805CC960;
    case 0x805CC96Cu: goto label_805CC96C;
    case 0x805CC984u: goto label_805CC984;
    case 0x805CC98Cu: goto label_805CC98C;
    case 0x805CC9A0u: goto label_805CC9A0;
    case 0x805CC9D8u: goto label_805CC9D8;
    case 0x805CC9F0u: goto label_805CC9F0;
    case 0x805CCA00u: goto label_805CCA00;
    case 0x805CCA18u: goto label_805CCA18;
    case 0x805CCA28u: goto label_805CCA28;
    case 0x805CCA40u: goto label_805CCA40;
    case 0x805CCA58u: goto label_805CCA58;
    case 0x805CCAA4u: goto label_805CCAA4;
    case 0x805CCAB0u: goto label_805CCAB0;
    case 0x805CCAC0u: goto label_805CCAC0;
    case 0x805CCAFCu: goto label_805CCAFC;
    case 0x805CCB0Cu: goto label_805CCB0C;
    case 0x805CCB14u: goto label_805CCB14;
    case 0x805CCB20u: goto label_805CCB20;
    case 0x805CCB54u: goto label_805CCB54;
    case 0x805CCB78u: goto label_805CCB78;
    case 0x805CCB90u: goto label_805CCB90;
    case 0x805CCBA8u: goto label_805CCBA8;
    case 0x805CCC40u: goto label_805CCC40;
    case 0x805CCC7Cu: goto label_805CCC7C;
    case 0x805CCCE4u: goto label_805CCCE4;
    case 0x805CCCECu: goto label_805CCCEC;
    case 0x805CCCF4u: goto label_805CCCF4;
    case 0x805CCCFCu: goto label_805CCCFC;
    case 0x805CCD04u: goto label_805CCD04;
    case 0x805CCD40u: goto label_805CCD40;
    case 0x805CCD60u: goto label_805CCD60;
    case 0x805CCDA0u: goto label_805CCDA0;
    case 0x805CCDC0u: goto label_805CCDC0;
    case 0x805CCE00u: goto label_805CCE00;
    case 0x805CCE20u: goto label_805CCE20;
    case 0x805CCECCu: goto label_805CCECC;
    case 0x805CCED0u: goto label_805CCED0;
    case 0x805CCEF8u: goto label_805CCEF8;
    case 0x805CCF4Cu: goto label_805CCF4C;
    case 0x805CCF58u: goto label_805CCF58;
    case 0x805CCF5Cu: goto label_805CCF5C;
    case 0x805CCF68u: goto label_805CCF68;
    case 0x805CCFB4u: goto label_805CCFB4;
    case 0x805CCFD0u: goto label_805CCFD0;
    case 0x805CCFE8u: goto label_805CCFE8;
    case 0x805CD000u: goto label_805CD000;
    case 0x805CD010u: goto label_805CD010;
    case 0x805CD058u: goto label_805CD058;
    case 0x805CD068u: goto label_805CD068;
    case 0x805CD074u: goto label_805CD074;
    case 0x805CD078u: goto label_805CD078;
    case 0x805CD084u: goto label_805CD084;
    case 0x805CD08Cu: goto label_805CD08C;
    case 0x805CD0C8u: goto label_805CD0C8;
    case 0x805CD108u: goto label_805CD108;
    case 0x805CD120u: goto label_805CD120;
    case 0x805CD174u: goto label_805CD174;
    case 0x805CD180u: goto label_805CD180;
    case 0x805CD190u: goto label_805CD190;
    case 0x805CD1DCu: goto label_805CD1DC;
    case 0x805CD1E8u: goto label_805CD1E8;
    case 0x805CD1F8u: goto label_805CD1F8;
    case 0x805CD238u: goto label_805CD238;
    case 0x805CD278u: goto label_805CD278;
    case 0x805CD300u: goto label_805CD300;
    case 0x805CD308u: goto label_805CD308;
    case 0x805CD31Cu: goto label_805CD31C;
    case 0x805CD35Cu: goto label_805CD35C;
    case 0x805CD378u: goto label_805CD378;
    case 0x805CD38Cu: goto label_805CD38C;
    case 0x805CD3C4u: goto label_805CD3C4;
    case 0x805CD3D4u: goto label_805CD3D4;
    case 0x805CD40Cu: goto label_805CD40C;
    case 0x805CD41Cu: goto label_805CD41C;
    case 0x805CD44Cu: goto label_805CD44C;
    case 0x805CD454u: goto label_805CD454;
    case 0x805CD48Cu: goto label_805CD48C;
    case 0x805CD494u: goto label_805CD494;
    case 0x805CD4A8u: goto label_805CD4A8;
    case 0x805CD4B4u: goto label_805CD4B4;
    case 0x805CD4C8u: goto label_805CD4C8;
    case 0x805CD500u: goto label_805CD500;
    case 0x805CD508u: goto label_805CD508;
    case 0x805CD518u: goto label_805CD518;
    case 0x805CD550u: goto label_805CD550;
    case 0x805CD560u: goto label_805CD560;
    case 0x805CD568u: goto label_805CD568;
    case 0x805CD574u: goto label_805CD574;
    case 0x805CD5BCu: goto label_805CD5BC;
    case 0x805CD5D8u: goto label_805CD5D8;
    case 0x805CD5F0u: goto label_805CD5F0;
    case 0x805CD5FCu: goto label_805CD5FC;
    case 0x805CD614u: goto label_805CD614;
    case 0x805CD61Cu: goto label_805CD61C;
    case 0x805CD630u: goto label_805CD630;
    case 0x805CD668u: goto label_805CD668;
    case 0x805CD680u: goto label_805CD680;
    case 0x805CD690u: goto label_805CD690;
    case 0x805CD6A8u: goto label_805CD6A8;
    case 0x805CD6B8u: goto label_805CD6B8;
    case 0x805CD6D0u: goto label_805CD6D0;
    case 0x805CD6E8u: goto label_805CD6E8;
    case 0x805CD734u: goto label_805CD734;
    case 0x805CD740u: goto label_805CD740;
    case 0x805CD750u: goto label_805CD750;
    case 0x805CD788u: goto label_805CD788;
    case 0x805CD7ACu: goto label_805CD7AC;
    case 0x805CD7C4u: goto label_805CD7C4;
    case 0x805CD7DCu: goto label_805CD7DC;
    case 0x805CD874u: goto label_805CD874;
    case 0x805CD8B0u: goto label_805CD8B0;
    case 0x805CD918u: goto label_805CD918;
    case 0x805CD920u: goto label_805CD920;
    case 0x805CD928u: goto label_805CD928;
    case 0x805CD930u: goto label_805CD930;
    case 0x805CD938u: goto label_805CD938;
    case 0x805CD974u: goto label_805CD974;
    case 0x805CD994u: goto label_805CD994;
    case 0x805CD9D4u: goto label_805CD9D4;
    case 0x805CD9F4u: goto label_805CD9F4;
    case 0x805CDA34u: goto label_805CDA34;
    case 0x805CDA54u: goto label_805CDA54;
    case 0x805CDAE8u: goto label_805CDAE8;
    case 0x805CDAF4u: goto label_805CDAF4;
    case 0x805CDB0Cu: goto label_805CDB0C;
    case 0x805CDB24u: goto label_805CDB24;
    case 0x805CDB30u: goto label_805CDB30;
    case 0x805CDB44u: goto label_805CDB44;
    case 0x805CDB58u: goto label_805CDB58;
    case 0x805CDB68u: goto label_805CDB68;
    case 0x805CDB6Cu: goto label_805CDB6C;
    case 0x805CDB7Cu: goto label_805CDB7C;
    case 0x805CDBB8u: goto label_805CDBB8;
    case 0x805CDBC8u: goto label_805CDBC8;
    case 0x805CDBD4u: goto label_805CDBD4;
    case 0x805CDC38u: goto label_805CDC38;
    case 0x805CDC48u: goto label_805CDC48;
    case 0x805CDC88u: goto label_805CDC88;
    case 0x805CDC98u: goto label_805CDC98;
    case 0x805CDCB0u: goto label_805CDCB0;
    case 0x805CDCBCu: goto label_805CDCBC;
    case 0x805CDCCCu: goto label_805CDCCC;
    case 0x805CDCE0u: goto label_805CDCE0;
    case 0x805CDCECu: goto label_805CDCEC;
    case 0x805CDD44u: goto label_805CDD44;
    case 0x805CDD5Cu: goto label_805CDD5C;
    case 0x805CDD74u: goto label_805CDD74;
    case 0x805CDD8Cu: goto label_805CDD8C;
    case 0x805CDDA4u: goto label_805CDDA4;
    case 0x805CDDC8u: goto label_805CDDC8;
    case 0x805CDDD8u: goto label_805CDDD8;
    case 0x805CDE18u: goto label_805CDE18;
    case 0x805CDE60u: goto label_805CDE60;
    case 0x805CDEB0u: goto label_805CDEB0;
    case 0x805CDEBCu: goto label_805CDEBC;
    case 0x805CDECCu: goto label_805CDECC;
    case 0x805CDF28u: goto label_805CDF28;
    case 0x805CDF5Cu: goto label_805CDF5C;
    case 0x805CE0A0u: goto label_805CE0A0;
    case 0x805CE0C4u: goto label_805CE0C4;
    case 0x805CE0E4u: goto label_805CE0E4;
    case 0x805CE100u: goto label_805CE100;
    case 0x805CE184u: goto label_805CE184;
    case 0x805CE1A8u: goto label_805CE1A8;
    case 0x805CE1E4u: goto label_805CE1E4;
    case 0x805CE208u: goto label_805CE208;
    case 0x805CE248u: goto label_805CE248;
    case 0x805CE26Cu: goto label_805CE26C;
    case 0x805CE28Cu: goto label_805CE28C;
    case 0x805CE36Cu: goto label_805CE36C;
    case 0x805CE390u: goto label_805CE390;
    case 0x805CE3B0u: goto label_805CE3B0;
    case 0x805CE4F4u: goto label_805CE4F4;
    case 0x805CE518u: goto label_805CE518;
    case 0x805CE538u: goto label_805CE538;
    case 0x805CE554u: goto label_805CE554;
    case 0x805CE568u: goto label_805CE568;
    case 0x805CE5D8u: goto label_805CE5D8;
    case 0x805CE624u: goto label_805CE624;
    case 0x805CE6FCu: goto label_805CE6FC;
    case 0x805CE714u: goto label_805CE714;
    case 0x805CE748u: goto label_805CE748;
    case 0x805CE768u: goto label_805CE768;
    case 0x805CE784u: goto label_805CE784;
    case 0x805CE7DCu: goto label_805CE7DC;
    case 0x805CE7F4u: goto label_805CE7F4;
    case 0x805CE808u: goto label_805CE808;
    case 0x805CE810u: goto label_805CE810;
    case 0x805CE818u: goto label_805CE818;
    case 0x805CE820u: goto label_805CE820;
    case 0x805CE848u: goto label_805CE848;
    case 0x805CE86Cu: goto label_805CE86C;
    case 0x805CE874u: goto label_805CE874;
    case 0x805CE880u: goto label_805CE880;
    case 0x805CE88Cu: goto label_805CE88C;
    case 0x805CE894u: goto label_805CE894;
    case 0x805CE8A0u: goto label_805CE8A0;
    case 0x805CE8CCu: goto label_805CE8CC;
    case 0x805CE8F8u: goto label_805CE8F8;
    case 0x805CE940u: goto label_805CE940;
    case 0x805CE954u: goto label_805CE954;
    case 0x805CE97Cu: goto label_805CE97C;
    case 0x805CE988u: goto label_805CE988;
    case 0x805CE994u: goto label_805CE994;
    case 0x805CE9A8u: goto label_805CE9A8;
    case 0x805CE9B0u: goto label_805CE9B0;
    case 0x805CE9B8u: goto label_805CE9B8;
    case 0x805CE9ECu: goto label_805CE9EC;
    case 0x805CEA10u: goto label_805CEA10;
    case 0x805CEADCu: goto label_805CEADC;
    case 0x805CEB14u: goto label_805CEB14;
    case 0x805CEB34u: goto label_805CEB34;
    case 0x805CEB4Cu: goto label_805CEB4C;
    case 0x805CEB70u: goto label_805CEB70;
    case 0x805CEBE0u: goto label_805CEBE0;
    case 0x805CEC10u: goto label_805CEC10;
    case 0x805CEC5Cu: goto label_805CEC5C;
    case 0x805CEC74u: goto label_805CEC74;
    case 0x805CEC8Cu: goto label_805CEC8C;
    case 0x805CECB4u: goto label_805CECB4;
    case 0x805CECCCu: goto label_805CECCC;
    case 0x805CECF4u: goto label_805CECF4;
    case 0x805CED04u: goto label_805CED04;
    case 0x805CED1Cu: goto label_805CED1C;
    case 0x805CED40u: goto label_805CED40;
    case 0x805CED58u: goto label_805CED58;
    case 0x805CED80u: goto label_805CED80;
    case 0x805CED90u: goto label_805CED90;
    case 0x805CEDA8u: goto label_805CEDA8;
    case 0x805CEDC0u: goto label_805CEDC0;
    case 0x805CEDCCu: goto label_805CEDCC;
    case 0x805CEDF8u: goto label_805CEDF8;
    case 0x805CEE44u: goto label_805CEE44;
    case 0x805CEE98u: goto label_805CEE98;
    case 0x805CEEB4u: goto label_805CEEB4;
    case 0x805CEEF0u: goto label_805CEEF0;
    case 0x805CEEF4u: goto label_805CEEF4;
    case 0x805CEF00u: goto label_805CEF00;
    case 0x805CEF08u: goto label_805CEF08;
    case 0x805CEF4Cu: goto label_805CEF4C;
    case 0x805CEF50u: goto label_805CEF50;
    case 0x805CEF6Cu: goto label_805CEF6C;
    case 0x805CEF88u: goto label_805CEF88;
    case 0x805CEFB8u: goto label_805CEFB8;
    case 0x805CEFCCu: goto label_805CEFCC;
    case 0x805CEFE8u: goto label_805CEFE8;
    case 0x805CF020u: goto label_805CF020;
    case 0x805CF02Cu: goto label_805CF02C;
    case 0x805CF030u: goto label_805CF030;
    case 0x805CF0A0u: goto label_805CF0A0;
    case 0x805CF0B8u: goto label_805CF0B8;
    case 0x805CF0D0u: goto label_805CF0D0;
    case 0x805CF0E0u: goto label_805CF0E0;
    case 0x805CF108u: goto label_805CF108;
    case 0x805CF124u: goto label_805CF124;
    case 0x805CF148u: goto label_805CF148;
    case 0x805CF158u: goto label_805CF158;
    case 0x805CF164u: goto label_805CF164;
    case 0x805CF168u: goto label_805CF168;
    case 0x805CF174u: goto label_805CF174;
    case 0x805CF17Cu: goto label_805CF17C;
    case 0x805CF1A0u: goto label_805CF1A0;
    case 0x805CF1A8u: goto label_805CF1A8;
    default: return;
    }
}

