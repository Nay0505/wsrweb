// DolRecomp output
#include "../RZTE01.h"

static void loop_802FF878(CPUState* ctx) {
label_802FF878:
    ctx->downcount -= 5;
    ctx->pc = 0x802FF878u;
    // 802FF878: lwz     r5, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802FF87Cu;
    // 802FF87C: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x802FF880u;
    // 802FF880: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x802FF884u;
    // 802FF884: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 802FF888: bc    16, 0, 0x802FF878
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF878u;
                return;
            }
            goto label_802FF878;
        }
    }

    ctx->pc = 0x802FF88Cu;
}

static void loop_802FF9F8(CPUState* ctx) {
label_802FF9F8:
    ctx->downcount -= 5;
    // 802FF9F8: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 802FF9FC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802FFA00u;
    // 802FFA00: stw     r30, 344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    ctx->pc = 0x802FFA04u;
    // 802FFA04: stw     r30, 376(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

    // 802FFA08: bc    16, 0, 0x802FF9F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF9F8u;
                return;
            }
            goto label_802FF9F8;
        }
    }

    ctx->pc = 0x802FFA0Cu;
}

static void loop_802FFA1C(CPUState* ctx) {
label_802FFA1C:
    ctx->downcount -= 4;
    // 802FFA1C: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 802FFA20: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802FFA24u;
    // 802FFA24: stw     r5, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 802FFA28: bc    16, 0, 0x802FFA1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA1Cu;
                return;
            }
            goto label_802FFA1C;
        }
    }

    ctx->pc = 0x802FFA2Cu;
}

static void loop_802FFA3C(CPUState* ctx) {
label_802FFA3C:
    ctx->downcount -= 4;
    // 802FFA3C: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 802FFA40: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802FFA44u;
    // 802FFA44: stw     r5, 424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 802FFA48: bc    16, 0, 0x802FFA3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA3Cu;
                return;
            }
            goto label_802FFA3C;
        }
    }

    ctx->pc = 0x802FFA4Cu;
}

static void loop_802FFA5C(CPUState* ctx) {
label_802FFA5C:
    ctx->downcount -= 4;
    // 802FFA5C: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 802FFA60: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802FFA64u;
    // 802FFA64: stw     r5, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 802FFA68: bc    16, 0, 0x802FFA5C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA5Cu;
                return;
            }
            goto label_802FFA5C;
        }
    }

    ctx->pc = 0x802FFA6Cu;
}

static void loop_802FFC30(CPUState* ctx) {
label_802FFC30:
    ctx->downcount -= 6;
    // 802FFC30: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    ctx->pc = 0x802FFC34u;
    // 802FFC34: lwz     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802FFC38u;
    // 802FFC38: lwz     r4, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802FFC3C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802FFC40u;
    // 802FFC40: stw     r0, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    // 802FFC44: bc    16, 0, 0x802FFC30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFC30u;
                return;
            }
            goto label_802FFC30;
        }
    }

    ctx->pc = 0x802FFC48u;
}

static void loop_80300000(CPUState* ctx) {
label_80300000:
    ctx->downcount -= 26;
    ctx->pc = 0x80300000u;
    // 80300000: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 80300004: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80300008u;
    // 80300008: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030000C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80300010u;
    // 80300010: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300014u;
    // 80300014: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80300018u;
    // 80300018: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030001Cu;
    // 8030001C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300020u;
    // 80300020: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80300024u;
    // 80300024: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300028u;
    // 80300028: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030002C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80300030u;
    // 80300030: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300034u;
    // 80300034: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80300038u;
    // 80300038: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030003Cu;
    // 8030003C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300040u;
    // 80300040: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80300044u;
    // 80300044: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300048u;
    // 80300048: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030004C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80300050u;
    // 80300050: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300054u;
    // 80300054: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80300058: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x8030005Cu;
    // 8030005C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80300060u;
    // 80300060: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300064u;
    // 80300064: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80300068u;
    // 80300068: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030006C: cmpw    r7, r0
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

    // 80300070: bc    12, 0, 0x80300000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300000u;
                return;
            }
            goto label_80300000;
        }
    }

    ctx->pc = 0x80300074u;
}

static void loop_803008FC(CPUState* ctx) {
label_803008FC:
    ctx->downcount -= 5;
    ctx->pc = 0x803008FCu;
    // 803008FC: lwz     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300900u;
    // 80300900: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x80300904u;
    // 80300904: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80300908u;
    // 80300908: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 8030090C: bc    16, 0, 0x803008FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803008FCu;
                return;
            }
            goto label_803008FC;
        }
    }

    ctx->pc = 0x80300910u;
}

static void loop_80300D2C(CPUState* ctx) {
label_80300D2C:
    ctx->downcount -= 5;
    ctx->pc = 0x80300D2Cu;
    // 80300D2C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300D30u;
    // 80300D30: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80300D34u;
    // 80300D34: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80300D38u;
    // 80300D38: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80300D3C: bc    16, 0, 0x80300D2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300D2Cu;
                return;
            }
            goto label_80300D2C;
        }
    }

    ctx->pc = 0x80300D40u;
}

static void loop_80300E54(CPUState* ctx) {
label_80300E54:
    ctx->downcount -= 5;
    ctx->pc = 0x80300E54u;
    // 80300E54: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300E58u;
    // 80300E58: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80300E5Cu;
    // 80300E5C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80300E60u;
    // 80300E60: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80300E64: bc    16, 0, 0x80300E54
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300E54u;
                return;
            }
            goto label_80300E54;
        }
    }

    ctx->pc = 0x80300E68u;
}

static void loop_80300F14(CPUState* ctx) {
label_80300F14:
    ctx->downcount -= 5;
    ctx->pc = 0x80300F14u;
    // 80300F14: lwz     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80300F18u;
    // 80300F18: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x80300F1Cu;
    // 80300F1C: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80300F20u;
    // 80300F20: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 80300F24: bc    16, 0, 0x80300F14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300F14u;
                return;
            }
            goto label_80300F14;
        }
    }

    ctx->pc = 0x80300F28u;
}

static void loop_803013D4(CPUState* ctx) {
label_803013D4:
    ctx->downcount -= 4;
    // 803013D4: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 803013D8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x803013DCu;
    // 803013DC: stw     r5, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 803013E0: bc    16, 0, 0x803013D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803013D4u;
                return;
            }
            goto label_803013D4;
        }
    }

    ctx->pc = 0x803013E4u;
}

static void loop_803013F4(CPUState* ctx) {
label_803013F4:
    ctx->downcount -= 4;
    // 803013F4: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 803013F8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x803013FCu;
    // 803013FC: stw     r5, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 80301400: bc    16, 0, 0x803013F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803013F4u;
                return;
            }
            goto label_803013F4;
        }
    }

    ctx->pc = 0x80301404u;
}

static void loop_80301414(CPUState* ctx) {
label_80301414:
    ctx->downcount -= 4;
    // 80301414: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 80301418: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x8030141Cu;
    // 8030141C: stw     r5, 388(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 80301420: bc    16, 0, 0x80301414
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301414u;
                return;
            }
            goto label_80301414;
        }
    }

    ctx->pc = 0x80301424u;
}

static void loop_80301434(CPUState* ctx) {
label_80301434:
    ctx->downcount -= 4;
    // 80301434: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 80301438: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x8030143Cu;
    // 8030143C: stw     r5, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 80301440: bc    16, 0, 0x80301434
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301434u;
                return;
            }
            goto label_80301434;
        }
    }

    ctx->pc = 0x80301444u;
}

static void loop_80301BA0(CPUState* ctx) {
label_80301BA0:
    ctx->downcount -= 5;
    ctx->pc = 0x80301BA0u;
    // 80301BA0: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80301BA4u;
    // 80301BA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80301BA8u;
    // 80301BA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80301BACu;
    // 80301BAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80301BB0: bc    16, 0, 0x80301BA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301BA0u;
                return;
            }
            goto label_80301BA0;
        }
    }

    ctx->pc = 0x80301BB4u;
}

static void loop_80301C14(CPUState* ctx) {
label_80301C14:
    ctx->downcount -= 5;
    ctx->pc = 0x80301C14u;
    // 80301C14: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80301C18u;
    // 80301C18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80301C1Cu;
    // 80301C1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80301C20u;
    // 80301C20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80301C24: bc    16, 0, 0x80301C14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301C14u;
                return;
            }
            goto label_80301C14;
        }
    }

    ctx->pc = 0x80301C28u;
}

static void loop_80302310(CPUState* ctx) {
label_80302310:
    ctx->downcount -= 26;
    ctx->pc = 0x80302310u;
    // 80302310: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 80302314: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80302318u;
    // 80302318: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030231C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80302320u;
    // 80302320: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302324u;
    // 80302324: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80302328u;
    // 80302328: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030232Cu;
    // 8030232C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302330u;
    // 80302330: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80302334u;
    // 80302334: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302338u;
    // 80302338: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030233C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80302340u;
    // 80302340: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302344u;
    // 80302344: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80302348u;
    // 80302348: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030234Cu;
    // 8030234C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302350u;
    // 80302350: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80302354u;
    // 80302354: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302358u;
    // 80302358: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030235C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80302360u;
    // 80302360: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302364u;
    // 80302364: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80302368: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x8030236Cu;
    // 8030236C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80302370u;
    // 80302370: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80302374u;
    // 80302374: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80302378u;
    // 80302378: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030237C: cmpw    r7, r0
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

    // 80302380: bc    12, 0, 0x80302310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302310u;
                return;
            }
            goto label_80302310;
        }
    }

    ctx->pc = 0x80302384u;
}

static void loop_80302990(CPUState* ctx) {
label_80302990:
    ctx->downcount -= 26;
    ctx->pc = 0x80302990u;
    // 80302990: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 80302994: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80302998u;
    // 80302998: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030299C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803029A0u;
    // 803029A0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029A4u;
    // 803029A4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x803029A8u;
    // 803029A8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029ACu;
    // 803029AC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029B0u;
    // 803029B0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029B4u;
    // 803029B4: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029B8u;
    // 803029B8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803029BC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803029C0u;
    // 803029C0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029C4u;
    // 803029C4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x803029C8u;
    // 803029C8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029CCu;
    // 803029CC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029D0u;
    // 803029D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029D4u;
    // 803029D4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029D8u;
    // 803029D8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803029DC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x803029E0u;
    // 803029E0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029E4u;
    // 803029E4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 803029E8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x803029ECu;
    // 803029EC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029F0u;
    // 803029F0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x803029F4u;
    // 803029F4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x803029F8u;
    // 803029F8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 803029FC: cmpw    r7, r0
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

    // 80302A00: bc    12, 0, 0x80302990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302990u;
                return;
            }
            goto label_80302990;
        }
    }

    ctx->pc = 0x80302A04u;
}

static void loop_80303164(CPUState* ctx) {
label_80303164:
    ctx->downcount -= 5;
    ctx->pc = 0x80303164u;
    // 80303164: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80303168u;
    // 80303168: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x8030316Cu;
    // 8030316C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80303170u;
    // 80303170: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 80303174: bc    16, 0, 0x80303164
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303164u;
                return;
            }
            goto label_80303164;
        }
    }

    ctx->pc = 0x80303178u;
}

void func_802FF1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x802FF1C0u: goto label_802FF1C0;
    case 0x802FF1C4u: goto label_802FF1C4;
    case 0x802FF1C8u: goto label_802FF1C8;
    case 0x802FF1CCu: goto label_802FF1CC;
    case 0x802FF1D0u: goto label_802FF1D0;
    case 0x802FF1D4u: goto label_802FF1D4;
    case 0x802FF1D8u: goto label_802FF1D8;
    case 0x802FF1DCu: goto label_802FF1DC;
    case 0x802FF1E0u: goto label_802FF1E0;
    case 0x802FF1E4u: goto label_802FF1E4;
    case 0x802FF1E8u: goto label_802FF1E8;
    case 0x802FF1ECu: goto label_802FF1EC;
    case 0x802FF1F0u: goto label_802FF1F0;
    case 0x802FF1F4u: goto label_802FF1F4;
    case 0x802FF1F8u: goto label_802FF1F8;
    case 0x802FF1FCu: goto label_802FF1FC;
    case 0x802FF200u: goto label_802FF200;
    case 0x802FF204u: goto label_802FF204;
    case 0x802FF208u: goto label_802FF208;
    case 0x802FF20Cu: goto label_802FF20C;
    case 0x802FF210u: goto label_802FF210;
    case 0x802FF214u: goto label_802FF214;
    case 0x802FF218u: goto label_802FF218;
    case 0x802FF21Cu: goto label_802FF21C;
    case 0x802FF220u: goto label_802FF220;
    case 0x802FF224u: goto label_802FF224;
    case 0x802FF228u: goto label_802FF228;
    case 0x802FF22Cu: goto label_802FF22C;
    case 0x802FF230u: goto label_802FF230;
    case 0x802FF234u: goto label_802FF234;
    case 0x802FF238u: goto label_802FF238;
    case 0x802FF23Cu: goto label_802FF23C;
    case 0x802FF240u: goto label_802FF240;
    case 0x802FF244u: goto label_802FF244;
    case 0x802FF248u: goto label_802FF248;
    case 0x802FF24Cu: goto label_802FF24C;
    case 0x802FF250u: goto label_802FF250;
    case 0x802FF254u: goto label_802FF254;
    case 0x802FF258u: goto label_802FF258;
    case 0x802FF25Cu: goto label_802FF25C;
    case 0x802FF260u: goto label_802FF260;
    case 0x802FF264u: goto label_802FF264;
    case 0x802FF268u: goto label_802FF268;
    case 0x802FF26Cu: goto label_802FF26C;
    case 0x802FF270u: goto label_802FF270;
    case 0x802FF274u: goto label_802FF274;
    case 0x802FF278u: goto label_802FF278;
    case 0x802FF27Cu: goto label_802FF27C;
    case 0x802FF280u: goto label_802FF280;
    case 0x802FF284u: goto label_802FF284;
    case 0x802FF288u: goto label_802FF288;
    case 0x802FF28Cu: goto label_802FF28C;
    case 0x802FF290u: goto label_802FF290;
    case 0x802FF294u: goto label_802FF294;
    case 0x802FF298u: goto label_802FF298;
    case 0x802FF29Cu: goto label_802FF29C;
    case 0x802FF2A0u: goto label_802FF2A0;
    case 0x802FF2A4u: goto label_802FF2A4;
    case 0x802FF2A8u: goto label_802FF2A8;
    case 0x802FF2ACu: goto label_802FF2AC;
    case 0x802FF2B0u: goto label_802FF2B0;
    case 0x802FF2B4u: goto label_802FF2B4;
    case 0x802FF2B8u: goto label_802FF2B8;
    case 0x802FF2BCu: goto label_802FF2BC;
    case 0x802FF2C0u: goto label_802FF2C0;
    case 0x802FF2C4u: goto label_802FF2C4;
    case 0x802FF2C8u: goto label_802FF2C8;
    case 0x802FF2CCu: goto label_802FF2CC;
    case 0x802FF2D0u: goto label_802FF2D0;
    case 0x802FF2D4u: goto label_802FF2D4;
    case 0x802FF2D8u: goto label_802FF2D8;
    case 0x802FF2DCu: goto label_802FF2DC;
    case 0x802FF2E0u: goto label_802FF2E0;
    case 0x802FF2E4u: goto label_802FF2E4;
    case 0x802FF2E8u: goto label_802FF2E8;
    case 0x802FF2ECu: goto label_802FF2EC;
    case 0x802FF2F0u: goto label_802FF2F0;
    case 0x802FF2F4u: goto label_802FF2F4;
    case 0x802FF2F8u: goto label_802FF2F8;
    case 0x802FF2FCu: goto label_802FF2FC;
    case 0x802FF300u: goto label_802FF300;
    case 0x802FF304u: goto label_802FF304;
    case 0x802FF308u: goto label_802FF308;
    case 0x802FF30Cu: goto label_802FF30C;
    case 0x802FF310u: goto label_802FF310;
    case 0x802FF314u: goto label_802FF314;
    case 0x802FF318u: goto label_802FF318;
    case 0x802FF31Cu: goto label_802FF31C;
    case 0x802FF320u: goto label_802FF320;
    case 0x802FF324u: goto label_802FF324;
    case 0x802FF328u: goto label_802FF328;
    case 0x802FF32Cu: goto label_802FF32C;
    case 0x802FF330u: goto label_802FF330;
    case 0x802FF334u: goto label_802FF334;
    case 0x802FF338u: goto label_802FF338;
    case 0x802FF33Cu: goto label_802FF33C;
    case 0x802FF340u: goto label_802FF340;
    case 0x802FF344u: goto label_802FF344;
    case 0x802FF348u: goto label_802FF348;
    case 0x802FF34Cu: goto label_802FF34C;
    case 0x802FF350u: goto label_802FF350;
    case 0x802FF354u: goto label_802FF354;
    case 0x802FF358u: goto label_802FF358;
    case 0x802FF35Cu: goto label_802FF35C;
    case 0x802FF360u: goto label_802FF360;
    case 0x802FF364u: goto label_802FF364;
    case 0x802FF368u: goto label_802FF368;
    case 0x802FF36Cu: goto label_802FF36C;
    case 0x802FF370u: goto label_802FF370;
    case 0x802FF374u: goto label_802FF374;
    case 0x802FF378u: goto label_802FF378;
    case 0x802FF37Cu: goto label_802FF37C;
    case 0x802FF380u: goto label_802FF380;
    case 0x802FF384u: goto label_802FF384;
    case 0x802FF388u: goto label_802FF388;
    case 0x802FF38Cu: goto label_802FF38C;
    case 0x802FF390u: goto label_802FF390;
    case 0x802FF394u: goto label_802FF394;
    case 0x802FF398u: goto label_802FF398;
    case 0x802FF39Cu: goto label_802FF39C;
    case 0x802FF3A0u: goto label_802FF3A0;
    case 0x802FF3A4u: goto label_802FF3A4;
    case 0x802FF3A8u: goto label_802FF3A8;
    case 0x802FF3ACu: goto label_802FF3AC;
    case 0x802FF3B0u: goto label_802FF3B0;
    case 0x802FF3B4u: goto label_802FF3B4;
    case 0x802FF3B8u: goto label_802FF3B8;
    case 0x802FF3BCu: goto label_802FF3BC;
    case 0x802FF3C0u: goto label_802FF3C0;
    case 0x802FF3C4u: goto label_802FF3C4;
    case 0x802FF3C8u: goto label_802FF3C8;
    case 0x802FF3CCu: goto label_802FF3CC;
    case 0x802FF3D0u: goto label_802FF3D0;
    case 0x802FF3D4u: goto label_802FF3D4;
    case 0x802FF3D8u: goto label_802FF3D8;
    case 0x802FF3DCu: goto label_802FF3DC;
    case 0x802FF3E0u: goto label_802FF3E0;
    case 0x802FF3E4u: goto label_802FF3E4;
    case 0x802FF3E8u: goto label_802FF3E8;
    case 0x802FF3ECu: goto label_802FF3EC;
    case 0x802FF3F0u: goto label_802FF3F0;
    case 0x802FF3F4u: goto label_802FF3F4;
    case 0x802FF3F8u: goto label_802FF3F8;
    case 0x802FF3FCu: goto label_802FF3FC;
    case 0x802FF400u: goto label_802FF400;
    case 0x802FF404u: goto label_802FF404;
    case 0x802FF408u: goto label_802FF408;
    case 0x802FF40Cu: goto label_802FF40C;
    case 0x802FF410u: goto label_802FF410;
    case 0x802FF414u: goto label_802FF414;
    case 0x802FF418u: goto label_802FF418;
    case 0x802FF41Cu: goto label_802FF41C;
    case 0x802FF420u: goto label_802FF420;
    case 0x802FF424u: goto label_802FF424;
    case 0x802FF428u: goto label_802FF428;
    case 0x802FF42Cu: goto label_802FF42C;
    case 0x802FF430u: goto label_802FF430;
    case 0x802FF434u: goto label_802FF434;
    case 0x802FF438u: goto label_802FF438;
    case 0x802FF43Cu: goto label_802FF43C;
    case 0x802FF440u: goto label_802FF440;
    case 0x802FF444u: goto label_802FF444;
    case 0x802FF448u: goto label_802FF448;
    case 0x802FF44Cu: goto label_802FF44C;
    case 0x802FF450u: goto label_802FF450;
    case 0x802FF454u: goto label_802FF454;
    case 0x802FF458u: goto label_802FF458;
    case 0x802FF45Cu: goto label_802FF45C;
    case 0x802FF460u: goto label_802FF460;
    case 0x802FF464u: goto label_802FF464;
    case 0x802FF468u: goto label_802FF468;
    case 0x802FF46Cu: goto label_802FF46C;
    case 0x802FF470u: goto label_802FF470;
    case 0x802FF474u: goto label_802FF474;
    case 0x802FF478u: goto label_802FF478;
    case 0x802FF47Cu: goto label_802FF47C;
    case 0x802FF480u: goto label_802FF480;
    case 0x802FF484u: goto label_802FF484;
    case 0x802FF488u: goto label_802FF488;
    case 0x802FF48Cu: goto label_802FF48C;
    case 0x802FF490u: goto label_802FF490;
    case 0x802FF494u: goto label_802FF494;
    case 0x802FF498u: goto label_802FF498;
    case 0x802FF49Cu: goto label_802FF49C;
    case 0x802FF4A0u: goto label_802FF4A0;
    case 0x802FF4A4u: goto label_802FF4A4;
    case 0x802FF4A8u: goto label_802FF4A8;
    case 0x802FF4ACu: goto label_802FF4AC;
    case 0x802FF4B0u: goto label_802FF4B0;
    case 0x802FF4B4u: goto label_802FF4B4;
    case 0x802FF4B8u: goto label_802FF4B8;
    case 0x802FF4BCu: goto label_802FF4BC;
    case 0x802FF4C0u: goto label_802FF4C0;
    case 0x802FF4C4u: goto label_802FF4C4;
    case 0x802FF4C8u: goto label_802FF4C8;
    case 0x802FF4CCu: goto label_802FF4CC;
    case 0x802FF4D0u: goto label_802FF4D0;
    case 0x802FF4D4u: goto label_802FF4D4;
    case 0x802FF4D8u: goto label_802FF4D8;
    case 0x802FF4DCu: goto label_802FF4DC;
    case 0x802FF4E0u: goto label_802FF4E0;
    case 0x802FF4E4u: goto label_802FF4E4;
    case 0x802FF4E8u: goto label_802FF4E8;
    case 0x802FF4ECu: goto label_802FF4EC;
    case 0x802FF4F0u: goto label_802FF4F0;
    case 0x802FF4F4u: goto label_802FF4F4;
    case 0x802FF4F8u: goto label_802FF4F8;
    case 0x802FF4FCu: goto label_802FF4FC;
    case 0x802FF500u: goto label_802FF500;
    case 0x802FF504u: goto label_802FF504;
    case 0x802FF508u: goto label_802FF508;
    case 0x802FF50Cu: goto label_802FF50C;
    case 0x802FF510u: goto label_802FF510;
    case 0x802FF514u: goto label_802FF514;
    case 0x802FF518u: goto label_802FF518;
    case 0x802FF51Cu: goto label_802FF51C;
    case 0x802FF520u: goto label_802FF520;
    case 0x802FF524u: goto label_802FF524;
    case 0x802FF528u: goto label_802FF528;
    case 0x802FF52Cu: goto label_802FF52C;
    case 0x802FF530u: goto label_802FF530;
    case 0x802FF534u: goto label_802FF534;
    case 0x802FF538u: goto label_802FF538;
    case 0x802FF53Cu: goto label_802FF53C;
    case 0x802FF540u: goto label_802FF540;
    case 0x802FF544u: goto label_802FF544;
    case 0x802FF548u: goto label_802FF548;
    case 0x802FF54Cu: goto label_802FF54C;
    case 0x802FF550u: goto label_802FF550;
    case 0x802FF554u: goto label_802FF554;
    case 0x802FF558u: goto label_802FF558;
    case 0x802FF55Cu: goto label_802FF55C;
    case 0x802FF560u: goto label_802FF560;
    case 0x802FF564u: goto label_802FF564;
    case 0x802FF568u: goto label_802FF568;
    case 0x802FF56Cu: goto label_802FF56C;
    case 0x802FF570u: goto label_802FF570;
    case 0x802FF574u: goto label_802FF574;
    case 0x802FF578u: goto label_802FF578;
    case 0x802FF57Cu: goto label_802FF57C;
    case 0x802FF580u: goto label_802FF580;
    case 0x802FF584u: goto label_802FF584;
    case 0x802FF588u: goto label_802FF588;
    case 0x802FF58Cu: goto label_802FF58C;
    case 0x802FF590u: goto label_802FF590;
    case 0x802FF594u: goto label_802FF594;
    case 0x802FF598u: goto label_802FF598;
    case 0x802FF59Cu: goto label_802FF59C;
    case 0x802FF5A0u: goto label_802FF5A0;
    case 0x802FF5A4u: goto label_802FF5A4;
    case 0x802FF5A8u: goto label_802FF5A8;
    case 0x802FF5ACu: goto label_802FF5AC;
    case 0x802FF5B0u: goto label_802FF5B0;
    case 0x802FF5B4u: goto label_802FF5B4;
    case 0x802FF5B8u: goto label_802FF5B8;
    case 0x802FF5BCu: goto label_802FF5BC;
    case 0x802FF5C0u: goto label_802FF5C0;
    case 0x802FF5C4u: goto label_802FF5C4;
    case 0x802FF5C8u: goto label_802FF5C8;
    case 0x802FF5CCu: goto label_802FF5CC;
    case 0x802FF5D0u: goto label_802FF5D0;
    case 0x802FF5D4u: goto label_802FF5D4;
    case 0x802FF5D8u: goto label_802FF5D8;
    case 0x802FF5DCu: goto label_802FF5DC;
    case 0x802FF5E0u: goto label_802FF5E0;
    case 0x802FF5E4u: goto label_802FF5E4;
    case 0x802FF5E8u: goto label_802FF5E8;
    case 0x802FF5ECu: goto label_802FF5EC;
    case 0x802FF5F0u: goto label_802FF5F0;
    case 0x802FF5F4u: goto label_802FF5F4;
    case 0x802FF5F8u: goto label_802FF5F8;
    case 0x802FF5FCu: goto label_802FF5FC;
    case 0x802FF600u: goto label_802FF600;
    case 0x802FF604u: goto label_802FF604;
    case 0x802FF608u: goto label_802FF608;
    case 0x802FF60Cu: goto label_802FF60C;
    case 0x802FF610u: goto label_802FF610;
    case 0x802FF614u: goto label_802FF614;
    case 0x802FF618u: goto label_802FF618;
    case 0x802FF61Cu: goto label_802FF61C;
    case 0x802FF620u: goto label_802FF620;
    case 0x802FF624u: goto label_802FF624;
    case 0x802FF628u: goto label_802FF628;
    case 0x802FF62Cu: goto label_802FF62C;
    case 0x802FF630u: goto label_802FF630;
    case 0x802FF634u: goto label_802FF634;
    case 0x802FF638u: goto label_802FF638;
    case 0x802FF63Cu: goto label_802FF63C;
    case 0x802FF640u: goto label_802FF640;
    case 0x802FF644u: goto label_802FF644;
    case 0x802FF648u: goto label_802FF648;
    case 0x802FF64Cu: goto label_802FF64C;
    case 0x802FF650u: goto label_802FF650;
    case 0x802FF654u: goto label_802FF654;
    case 0x802FF658u: goto label_802FF658;
    case 0x802FF65Cu: goto label_802FF65C;
    case 0x802FF660u: goto label_802FF660;
    case 0x802FF664u: goto label_802FF664;
    case 0x802FF668u: goto label_802FF668;
    case 0x802FF66Cu: goto label_802FF66C;
    case 0x802FF670u: goto label_802FF670;
    case 0x802FF674u: goto label_802FF674;
    case 0x802FF678u: goto label_802FF678;
    case 0x802FF67Cu: goto label_802FF67C;
    case 0x802FF680u: goto label_802FF680;
    case 0x802FF684u: goto label_802FF684;
    case 0x802FF688u: goto label_802FF688;
    case 0x802FF68Cu: goto label_802FF68C;
    case 0x802FF690u: goto label_802FF690;
    case 0x802FF694u: goto label_802FF694;
    case 0x802FF698u: goto label_802FF698;
    case 0x802FF69Cu: goto label_802FF69C;
    case 0x802FF6A0u: goto label_802FF6A0;
    case 0x802FF6A4u: goto label_802FF6A4;
    case 0x802FF6A8u: goto label_802FF6A8;
    case 0x802FF6ACu: goto label_802FF6AC;
    case 0x802FF6B0u: goto label_802FF6B0;
    case 0x802FF6B4u: goto label_802FF6B4;
    case 0x802FF6B8u: goto label_802FF6B8;
    case 0x802FF6BCu: goto label_802FF6BC;
    case 0x802FF6C0u: goto label_802FF6C0;
    case 0x802FF6C4u: goto label_802FF6C4;
    case 0x802FF6C8u: goto label_802FF6C8;
    case 0x802FF6CCu: goto label_802FF6CC;
    case 0x802FF6D0u: goto label_802FF6D0;
    case 0x802FF6D4u: goto label_802FF6D4;
    case 0x802FF6D8u: goto label_802FF6D8;
    case 0x802FF6DCu: goto label_802FF6DC;
    case 0x802FF6E0u: goto label_802FF6E0;
    case 0x802FF6E4u: goto label_802FF6E4;
    case 0x802FF6E8u: goto label_802FF6E8;
    case 0x802FF6ECu: goto label_802FF6EC;
    case 0x802FF6F0u: goto label_802FF6F0;
    case 0x802FF6F4u: goto label_802FF6F4;
    case 0x802FF6F8u: goto label_802FF6F8;
    case 0x802FF6FCu: goto label_802FF6FC;
    case 0x802FF700u: goto label_802FF700;
    case 0x802FF704u: goto label_802FF704;
    case 0x802FF708u: goto label_802FF708;
    case 0x802FF70Cu: goto label_802FF70C;
    case 0x802FF710u: goto label_802FF710;
    case 0x802FF714u: goto label_802FF714;
    case 0x802FF718u: goto label_802FF718;
    case 0x802FF71Cu: goto label_802FF71C;
    case 0x802FF720u: goto label_802FF720;
    case 0x802FF724u: goto label_802FF724;
    case 0x802FF728u: goto label_802FF728;
    case 0x802FF72Cu: goto label_802FF72C;
    case 0x802FF730u: goto label_802FF730;
    case 0x802FF734u: goto label_802FF734;
    case 0x802FF738u: goto label_802FF738;
    case 0x802FF73Cu: goto label_802FF73C;
    case 0x802FF740u: goto label_802FF740;
    case 0x802FF744u: goto label_802FF744;
    case 0x802FF748u: goto label_802FF748;
    case 0x802FF74Cu: goto label_802FF74C;
    case 0x802FF750u: goto label_802FF750;
    case 0x802FF754u: goto label_802FF754;
    case 0x802FF758u: goto label_802FF758;
    case 0x802FF75Cu: goto label_802FF75C;
    case 0x802FF760u: goto label_802FF760;
    case 0x802FF764u: goto label_802FF764;
    case 0x802FF768u: goto label_802FF768;
    case 0x802FF76Cu: goto label_802FF76C;
    case 0x802FF770u: goto label_802FF770;
    case 0x802FF774u: goto label_802FF774;
    case 0x802FF778u: goto label_802FF778;
    case 0x802FF77Cu: goto label_802FF77C;
    case 0x802FF780u: goto label_802FF780;
    case 0x802FF784u: goto label_802FF784;
    case 0x802FF788u: goto label_802FF788;
    case 0x802FF78Cu: goto label_802FF78C;
    case 0x802FF790u: goto label_802FF790;
    case 0x802FF794u: goto label_802FF794;
    case 0x802FF798u: goto label_802FF798;
    case 0x802FF79Cu: goto label_802FF79C;
    case 0x802FF7A0u: goto label_802FF7A0;
    case 0x802FF7A4u: goto label_802FF7A4;
    case 0x802FF7A8u: goto label_802FF7A8;
    case 0x802FF7ACu: goto label_802FF7AC;
    case 0x802FF7B0u: goto label_802FF7B0;
    case 0x802FF7B4u: goto label_802FF7B4;
    case 0x802FF7B8u: goto label_802FF7B8;
    case 0x802FF7BCu: goto label_802FF7BC;
    case 0x802FF7C0u: goto label_802FF7C0;
    case 0x802FF7C4u: goto label_802FF7C4;
    case 0x802FF7C8u: goto label_802FF7C8;
    case 0x802FF7CCu: goto label_802FF7CC;
    case 0x802FF7D0u: goto label_802FF7D0;
    case 0x802FF7D4u: goto label_802FF7D4;
    case 0x802FF7D8u: goto label_802FF7D8;
    case 0x802FF7DCu: goto label_802FF7DC;
    case 0x802FF7E0u: goto label_802FF7E0;
    case 0x802FF7E4u: goto label_802FF7E4;
    case 0x802FF7E8u: goto label_802FF7E8;
    case 0x802FF7ECu: goto label_802FF7EC;
    case 0x802FF7F0u: goto label_802FF7F0;
    case 0x802FF7F4u: goto label_802FF7F4;
    case 0x802FF7F8u: goto label_802FF7F8;
    case 0x802FF7FCu: goto label_802FF7FC;
    case 0x802FF800u: goto label_802FF800;
    case 0x802FF804u: goto label_802FF804;
    case 0x802FF808u: goto label_802FF808;
    case 0x802FF80Cu: goto label_802FF80C;
    case 0x802FF810u: goto label_802FF810;
    case 0x802FF814u: goto label_802FF814;
    case 0x802FF818u: goto label_802FF818;
    case 0x802FF81Cu: goto label_802FF81C;
    case 0x802FF820u: goto label_802FF820;
    case 0x802FF824u: goto label_802FF824;
    case 0x802FF828u: goto label_802FF828;
    case 0x802FF82Cu: goto label_802FF82C;
    case 0x802FF830u: goto label_802FF830;
    case 0x802FF834u: goto label_802FF834;
    case 0x802FF838u: goto label_802FF838;
    case 0x802FF83Cu: goto label_802FF83C;
    case 0x802FF840u: goto label_802FF840;
    case 0x802FF844u: goto label_802FF844;
    case 0x802FF848u: goto label_802FF848;
    case 0x802FF84Cu: goto label_802FF84C;
    case 0x802FF850u: goto label_802FF850;
    case 0x802FF854u: goto label_802FF854;
    case 0x802FF858u: goto label_802FF858;
    case 0x802FF85Cu: goto label_802FF85C;
    case 0x802FF860u: goto label_802FF860;
    case 0x802FF864u: goto label_802FF864;
    case 0x802FF868u: goto label_802FF868;
    case 0x802FF86Cu: goto label_802FF86C;
    case 0x802FF870u: goto label_802FF870;
    case 0x802FF874u: goto label_802FF874;
    case 0x802FF878u: goto label_802FF878;
    case 0x802FF87Cu: goto label_802FF87C;
    case 0x802FF880u: goto label_802FF880;
    case 0x802FF884u: goto label_802FF884;
    case 0x802FF888u: goto label_802FF888;
    case 0x802FF88Cu: goto label_802FF88C;
    case 0x802FF890u: goto label_802FF890;
    case 0x802FF894u: goto label_802FF894;
    case 0x802FF898u: goto label_802FF898;
    case 0x802FF89Cu: goto label_802FF89C;
    case 0x802FF8A0u: goto label_802FF8A0;
    case 0x802FF8A4u: goto label_802FF8A4;
    case 0x802FF8A8u: goto label_802FF8A8;
    case 0x802FF8ACu: goto label_802FF8AC;
    case 0x802FF8B0u: goto label_802FF8B0;
    case 0x802FF8B4u: goto label_802FF8B4;
    case 0x802FF8B8u: goto label_802FF8B8;
    case 0x802FF8BCu: goto label_802FF8BC;
    case 0x802FF8C0u: goto label_802FF8C0;
    case 0x802FF8C4u: goto label_802FF8C4;
    case 0x802FF8C8u: goto label_802FF8C8;
    case 0x802FF8CCu: goto label_802FF8CC;
    case 0x802FF8D0u: goto label_802FF8D0;
    case 0x802FF8D4u: goto label_802FF8D4;
    case 0x802FF8D8u: goto label_802FF8D8;
    case 0x802FF8DCu: goto label_802FF8DC;
    case 0x802FF8E0u: goto label_802FF8E0;
    case 0x802FF8E4u: goto label_802FF8E4;
    case 0x802FF8E8u: goto label_802FF8E8;
    case 0x802FF8ECu: goto label_802FF8EC;
    case 0x802FF8F0u: goto label_802FF8F0;
    case 0x802FF8F4u: goto label_802FF8F4;
    case 0x802FF8F8u: goto label_802FF8F8;
    case 0x802FF8FCu: goto label_802FF8FC;
    case 0x802FF900u: goto label_802FF900;
    case 0x802FF904u: goto label_802FF904;
    case 0x802FF908u: goto label_802FF908;
    case 0x802FF90Cu: goto label_802FF90C;
    case 0x802FF910u: goto label_802FF910;
    case 0x802FF914u: goto label_802FF914;
    case 0x802FF918u: goto label_802FF918;
    case 0x802FF91Cu: goto label_802FF91C;
    case 0x802FF920u: goto label_802FF920;
    case 0x802FF924u: goto label_802FF924;
    case 0x802FF928u: goto label_802FF928;
    case 0x802FF92Cu: goto label_802FF92C;
    case 0x802FF930u: goto label_802FF930;
    case 0x802FF934u: goto label_802FF934;
    case 0x802FF938u: goto label_802FF938;
    case 0x802FF93Cu: goto label_802FF93C;
    case 0x802FF940u: goto label_802FF940;
    case 0x802FF944u: goto label_802FF944;
    case 0x802FF948u: goto label_802FF948;
    case 0x802FF94Cu: goto label_802FF94C;
    case 0x802FF950u: goto label_802FF950;
    case 0x802FF954u: goto label_802FF954;
    case 0x802FF958u: goto label_802FF958;
    case 0x802FF95Cu: goto label_802FF95C;
    case 0x802FF960u: goto label_802FF960;
    case 0x802FF964u: goto label_802FF964;
    case 0x802FF968u: goto label_802FF968;
    case 0x802FF96Cu: goto label_802FF96C;
    case 0x802FF970u: goto label_802FF970;
    case 0x802FF974u: goto label_802FF974;
    case 0x802FF978u: goto label_802FF978;
    case 0x802FF97Cu: goto label_802FF97C;
    case 0x802FF980u: goto label_802FF980;
    case 0x802FF984u: goto label_802FF984;
    case 0x802FF988u: goto label_802FF988;
    case 0x802FF98Cu: goto label_802FF98C;
    case 0x802FF990u: goto label_802FF990;
    case 0x802FF994u: goto label_802FF994;
    case 0x802FF998u: goto label_802FF998;
    case 0x802FF99Cu: goto label_802FF99C;
    case 0x802FF9A0u: goto label_802FF9A0;
    case 0x802FF9A4u: goto label_802FF9A4;
    case 0x802FF9A8u: goto label_802FF9A8;
    case 0x802FF9ACu: goto label_802FF9AC;
    case 0x802FF9B0u: goto label_802FF9B0;
    case 0x802FF9B4u: goto label_802FF9B4;
    case 0x802FF9B8u: goto label_802FF9B8;
    case 0x802FF9BCu: goto label_802FF9BC;
    case 0x802FF9C0u: goto label_802FF9C0;
    case 0x802FF9C4u: goto label_802FF9C4;
    case 0x802FF9C8u: goto label_802FF9C8;
    case 0x802FF9CCu: goto label_802FF9CC;
    case 0x802FF9D0u: goto label_802FF9D0;
    case 0x802FF9D4u: goto label_802FF9D4;
    case 0x802FF9D8u: goto label_802FF9D8;
    case 0x802FF9DCu: goto label_802FF9DC;
    case 0x802FF9E0u: goto label_802FF9E0;
    case 0x802FF9E4u: goto label_802FF9E4;
    case 0x802FF9E8u: goto label_802FF9E8;
    case 0x802FF9ECu: goto label_802FF9EC;
    case 0x802FF9F0u: goto label_802FF9F0;
    case 0x802FF9F4u: goto label_802FF9F4;
    case 0x802FF9F8u: goto label_802FF9F8;
    case 0x802FF9FCu: goto label_802FF9FC;
    case 0x802FFA00u: goto label_802FFA00;
    case 0x802FFA04u: goto label_802FFA04;
    case 0x802FFA08u: goto label_802FFA08;
    case 0x802FFA0Cu: goto label_802FFA0C;
    case 0x802FFA10u: goto label_802FFA10;
    case 0x802FFA14u: goto label_802FFA14;
    case 0x802FFA18u: goto label_802FFA18;
    case 0x802FFA1Cu: goto label_802FFA1C;
    case 0x802FFA20u: goto label_802FFA20;
    case 0x802FFA24u: goto label_802FFA24;
    case 0x802FFA28u: goto label_802FFA28;
    case 0x802FFA2Cu: goto label_802FFA2C;
    case 0x802FFA30u: goto label_802FFA30;
    case 0x802FFA34u: goto label_802FFA34;
    case 0x802FFA38u: goto label_802FFA38;
    case 0x802FFA3Cu: goto label_802FFA3C;
    case 0x802FFA40u: goto label_802FFA40;
    case 0x802FFA44u: goto label_802FFA44;
    case 0x802FFA48u: goto label_802FFA48;
    case 0x802FFA4Cu: goto label_802FFA4C;
    case 0x802FFA50u: goto label_802FFA50;
    case 0x802FFA54u: goto label_802FFA54;
    case 0x802FFA58u: goto label_802FFA58;
    case 0x802FFA5Cu: goto label_802FFA5C;
    case 0x802FFA60u: goto label_802FFA60;
    case 0x802FFA64u: goto label_802FFA64;
    case 0x802FFA68u: goto label_802FFA68;
    case 0x802FFA6Cu: goto label_802FFA6C;
    case 0x802FFA70u: goto label_802FFA70;
    case 0x802FFA74u: goto label_802FFA74;
    case 0x802FFA78u: goto label_802FFA78;
    case 0x802FFA7Cu: goto label_802FFA7C;
    case 0x802FFA80u: goto label_802FFA80;
    case 0x802FFA84u: goto label_802FFA84;
    case 0x802FFA88u: goto label_802FFA88;
    case 0x802FFA8Cu: goto label_802FFA8C;
    case 0x802FFA90u: goto label_802FFA90;
    case 0x802FFA94u: goto label_802FFA94;
    case 0x802FFA98u: goto label_802FFA98;
    case 0x802FFA9Cu: goto label_802FFA9C;
    case 0x802FFAA0u: goto label_802FFAA0;
    case 0x802FFAA4u: goto label_802FFAA4;
    case 0x802FFAA8u: goto label_802FFAA8;
    case 0x802FFAACu: goto label_802FFAAC;
    case 0x802FFAB0u: goto label_802FFAB0;
    case 0x802FFAB4u: goto label_802FFAB4;
    case 0x802FFAB8u: goto label_802FFAB8;
    case 0x802FFABCu: goto label_802FFABC;
    case 0x802FFAC0u: goto label_802FFAC0;
    case 0x802FFAC4u: goto label_802FFAC4;
    case 0x802FFAC8u: goto label_802FFAC8;
    case 0x802FFACCu: goto label_802FFACC;
    case 0x802FFAD0u: goto label_802FFAD0;
    case 0x802FFAD4u: goto label_802FFAD4;
    case 0x802FFAD8u: goto label_802FFAD8;
    case 0x802FFADCu: goto label_802FFADC;
    case 0x802FFAE0u: goto label_802FFAE0;
    case 0x802FFAE4u: goto label_802FFAE4;
    case 0x802FFAE8u: goto label_802FFAE8;
    case 0x802FFAECu: goto label_802FFAEC;
    case 0x802FFAF0u: goto label_802FFAF0;
    case 0x802FFAF4u: goto label_802FFAF4;
    case 0x802FFAF8u: goto label_802FFAF8;
    case 0x802FFAFCu: goto label_802FFAFC;
    case 0x802FFB00u: goto label_802FFB00;
    case 0x802FFB04u: goto label_802FFB04;
    case 0x802FFB08u: goto label_802FFB08;
    case 0x802FFB0Cu: goto label_802FFB0C;
    case 0x802FFB10u: goto label_802FFB10;
    case 0x802FFB14u: goto label_802FFB14;
    case 0x802FFB18u: goto label_802FFB18;
    case 0x802FFB1Cu: goto label_802FFB1C;
    case 0x802FFB20u: goto label_802FFB20;
    case 0x802FFB24u: goto label_802FFB24;
    case 0x802FFB28u: goto label_802FFB28;
    case 0x802FFB2Cu: goto label_802FFB2C;
    case 0x802FFB30u: goto label_802FFB30;
    case 0x802FFB34u: goto label_802FFB34;
    case 0x802FFB38u: goto label_802FFB38;
    case 0x802FFB3Cu: goto label_802FFB3C;
    case 0x802FFB40u: goto label_802FFB40;
    case 0x802FFB44u: goto label_802FFB44;
    case 0x802FFB48u: goto label_802FFB48;
    case 0x802FFB4Cu: goto label_802FFB4C;
    case 0x802FFB50u: goto label_802FFB50;
    case 0x802FFB54u: goto label_802FFB54;
    case 0x802FFB58u: goto label_802FFB58;
    case 0x802FFB5Cu: goto label_802FFB5C;
    case 0x802FFB60u: goto label_802FFB60;
    case 0x802FFB64u: goto label_802FFB64;
    case 0x802FFB68u: goto label_802FFB68;
    case 0x802FFB6Cu: goto label_802FFB6C;
    case 0x802FFB70u: goto label_802FFB70;
    case 0x802FFB74u: goto label_802FFB74;
    case 0x802FFB78u: goto label_802FFB78;
    case 0x802FFB7Cu: goto label_802FFB7C;
    case 0x802FFB80u: goto label_802FFB80;
    case 0x802FFB84u: goto label_802FFB84;
    case 0x802FFB88u: goto label_802FFB88;
    case 0x802FFB8Cu: goto label_802FFB8C;
    case 0x802FFB90u: goto label_802FFB90;
    case 0x802FFB94u: goto label_802FFB94;
    case 0x802FFB98u: goto label_802FFB98;
    case 0x802FFB9Cu: goto label_802FFB9C;
    case 0x802FFBA0u: goto label_802FFBA0;
    case 0x802FFBA4u: goto label_802FFBA4;
    case 0x802FFBA8u: goto label_802FFBA8;
    case 0x802FFBACu: goto label_802FFBAC;
    case 0x802FFBB0u: goto label_802FFBB0;
    case 0x802FFBB4u: goto label_802FFBB4;
    case 0x802FFBB8u: goto label_802FFBB8;
    case 0x802FFBBCu: goto label_802FFBBC;
    case 0x802FFBC0u: goto label_802FFBC0;
    case 0x802FFBC4u: goto label_802FFBC4;
    case 0x802FFBC8u: goto label_802FFBC8;
    case 0x802FFBCCu: goto label_802FFBCC;
    case 0x802FFBD0u: goto label_802FFBD0;
    case 0x802FFBD4u: goto label_802FFBD4;
    case 0x802FFBD8u: goto label_802FFBD8;
    case 0x802FFBDCu: goto label_802FFBDC;
    case 0x802FFBE0u: goto label_802FFBE0;
    case 0x802FFBE4u: goto label_802FFBE4;
    case 0x802FFBE8u: goto label_802FFBE8;
    case 0x802FFBECu: goto label_802FFBEC;
    case 0x802FFBF0u: goto label_802FFBF0;
    case 0x802FFBF4u: goto label_802FFBF4;
    case 0x802FFBF8u: goto label_802FFBF8;
    case 0x802FFBFCu: goto label_802FFBFC;
    case 0x802FFC00u: goto label_802FFC00;
    case 0x802FFC04u: goto label_802FFC04;
    case 0x802FFC08u: goto label_802FFC08;
    case 0x802FFC0Cu: goto label_802FFC0C;
    case 0x802FFC10u: goto label_802FFC10;
    case 0x802FFC14u: goto label_802FFC14;
    case 0x802FFC18u: goto label_802FFC18;
    case 0x802FFC1Cu: goto label_802FFC1C;
    case 0x802FFC20u: goto label_802FFC20;
    case 0x802FFC24u: goto label_802FFC24;
    case 0x802FFC28u: goto label_802FFC28;
    case 0x802FFC2Cu: goto label_802FFC2C;
    case 0x802FFC30u: goto label_802FFC30;
    case 0x802FFC34u: goto label_802FFC34;
    case 0x802FFC38u: goto label_802FFC38;
    case 0x802FFC3Cu: goto label_802FFC3C;
    case 0x802FFC40u: goto label_802FFC40;
    case 0x802FFC44u: goto label_802FFC44;
    case 0x802FFC48u: goto label_802FFC48;
    case 0x802FFC4Cu: goto label_802FFC4C;
    case 0x802FFC50u: goto label_802FFC50;
    case 0x802FFC54u: goto label_802FFC54;
    case 0x802FFC58u: goto label_802FFC58;
    case 0x802FFC5Cu: goto label_802FFC5C;
    case 0x802FFC60u: goto label_802FFC60;
    case 0x802FFC64u: goto label_802FFC64;
    case 0x802FFC68u: goto label_802FFC68;
    case 0x802FFC6Cu: goto label_802FFC6C;
    case 0x802FFC70u: goto label_802FFC70;
    case 0x802FFC74u: goto label_802FFC74;
    case 0x802FFC78u: goto label_802FFC78;
    case 0x802FFC7Cu: goto label_802FFC7C;
    case 0x802FFC80u: goto label_802FFC80;
    case 0x802FFC84u: goto label_802FFC84;
    case 0x802FFC88u: goto label_802FFC88;
    case 0x802FFC8Cu: goto label_802FFC8C;
    case 0x802FFC90u: goto label_802FFC90;
    case 0x802FFC94u: goto label_802FFC94;
    case 0x802FFC98u: goto label_802FFC98;
    case 0x802FFC9Cu: goto label_802FFC9C;
    case 0x802FFCA0u: goto label_802FFCA0;
    case 0x802FFCA4u: goto label_802FFCA4;
    case 0x802FFCA8u: goto label_802FFCA8;
    case 0x802FFCACu: goto label_802FFCAC;
    case 0x802FFCB0u: goto label_802FFCB0;
    case 0x802FFCB4u: goto label_802FFCB4;
    case 0x802FFCB8u: goto label_802FFCB8;
    case 0x802FFCBCu: goto label_802FFCBC;
    case 0x802FFCC0u: goto label_802FFCC0;
    case 0x802FFCC4u: goto label_802FFCC4;
    case 0x802FFCC8u: goto label_802FFCC8;
    case 0x802FFCCCu: goto label_802FFCCC;
    case 0x802FFCD0u: goto label_802FFCD0;
    case 0x802FFCD4u: goto label_802FFCD4;
    case 0x802FFCD8u: goto label_802FFCD8;
    case 0x802FFCDCu: goto label_802FFCDC;
    case 0x802FFCE0u: goto label_802FFCE0;
    case 0x802FFCE4u: goto label_802FFCE4;
    case 0x802FFCE8u: goto label_802FFCE8;
    case 0x802FFCECu: goto label_802FFCEC;
    case 0x802FFCF0u: goto label_802FFCF0;
    case 0x802FFCF4u: goto label_802FFCF4;
    case 0x802FFCF8u: goto label_802FFCF8;
    case 0x802FFCFCu: goto label_802FFCFC;
    case 0x802FFD00u: goto label_802FFD00;
    case 0x802FFD04u: goto label_802FFD04;
    case 0x802FFD08u: goto label_802FFD08;
    case 0x802FFD0Cu: goto label_802FFD0C;
    case 0x802FFD10u: goto label_802FFD10;
    case 0x802FFD14u: goto label_802FFD14;
    case 0x802FFD18u: goto label_802FFD18;
    case 0x802FFD1Cu: goto label_802FFD1C;
    case 0x802FFD20u: goto label_802FFD20;
    case 0x802FFD24u: goto label_802FFD24;
    case 0x802FFD28u: goto label_802FFD28;
    case 0x802FFD2Cu: goto label_802FFD2C;
    case 0x802FFD30u: goto label_802FFD30;
    case 0x802FFD34u: goto label_802FFD34;
    case 0x802FFD38u: goto label_802FFD38;
    case 0x802FFD3Cu: goto label_802FFD3C;
    case 0x802FFD40u: goto label_802FFD40;
    case 0x802FFD44u: goto label_802FFD44;
    case 0x802FFD48u: goto label_802FFD48;
    case 0x802FFD4Cu: goto label_802FFD4C;
    case 0x802FFD50u: goto label_802FFD50;
    case 0x802FFD54u: goto label_802FFD54;
    case 0x802FFD58u: goto label_802FFD58;
    case 0x802FFD5Cu: goto label_802FFD5C;
    case 0x802FFD60u: goto label_802FFD60;
    case 0x802FFD64u: goto label_802FFD64;
    case 0x802FFD68u: goto label_802FFD68;
    case 0x802FFD6Cu: goto label_802FFD6C;
    case 0x802FFD70u: goto label_802FFD70;
    case 0x802FFD74u: goto label_802FFD74;
    case 0x802FFD78u: goto label_802FFD78;
    case 0x802FFD7Cu: goto label_802FFD7C;
    case 0x802FFD80u: goto label_802FFD80;
    case 0x802FFD84u: goto label_802FFD84;
    case 0x802FFD88u: goto label_802FFD88;
    case 0x802FFD8Cu: goto label_802FFD8C;
    case 0x802FFD90u: goto label_802FFD90;
    case 0x802FFD94u: goto label_802FFD94;
    case 0x802FFD98u: goto label_802FFD98;
    case 0x802FFD9Cu: goto label_802FFD9C;
    case 0x802FFDA0u: goto label_802FFDA0;
    case 0x802FFDA4u: goto label_802FFDA4;
    case 0x802FFDA8u: goto label_802FFDA8;
    case 0x802FFDACu: goto label_802FFDAC;
    case 0x802FFDB0u: goto label_802FFDB0;
    case 0x802FFDB4u: goto label_802FFDB4;
    case 0x802FFDB8u: goto label_802FFDB8;
    case 0x802FFDBCu: goto label_802FFDBC;
    case 0x802FFDC0u: goto label_802FFDC0;
    case 0x802FFDC4u: goto label_802FFDC4;
    case 0x802FFDC8u: goto label_802FFDC8;
    case 0x802FFDCCu: goto label_802FFDCC;
    case 0x802FFDD0u: goto label_802FFDD0;
    case 0x802FFDD4u: goto label_802FFDD4;
    case 0x802FFDD8u: goto label_802FFDD8;
    case 0x802FFDDCu: goto label_802FFDDC;
    case 0x802FFDE0u: goto label_802FFDE0;
    case 0x802FFDE4u: goto label_802FFDE4;
    case 0x802FFDE8u: goto label_802FFDE8;
    case 0x802FFDECu: goto label_802FFDEC;
    case 0x802FFDF0u: goto label_802FFDF0;
    case 0x802FFDF4u: goto label_802FFDF4;
    case 0x802FFDF8u: goto label_802FFDF8;
    case 0x802FFDFCu: goto label_802FFDFC;
    case 0x802FFE00u: goto label_802FFE00;
    case 0x802FFE04u: goto label_802FFE04;
    case 0x802FFE08u: goto label_802FFE08;
    case 0x802FFE0Cu: goto label_802FFE0C;
    case 0x802FFE10u: goto label_802FFE10;
    case 0x802FFE14u: goto label_802FFE14;
    case 0x802FFE18u: goto label_802FFE18;
    case 0x802FFE1Cu: goto label_802FFE1C;
    case 0x802FFE20u: goto label_802FFE20;
    case 0x802FFE24u: goto label_802FFE24;
    case 0x802FFE28u: goto label_802FFE28;
    case 0x802FFE2Cu: goto label_802FFE2C;
    case 0x802FFE30u: goto label_802FFE30;
    case 0x802FFE34u: goto label_802FFE34;
    case 0x802FFE38u: goto label_802FFE38;
    case 0x802FFE3Cu: goto label_802FFE3C;
    case 0x802FFE40u: goto label_802FFE40;
    case 0x802FFE44u: goto label_802FFE44;
    case 0x802FFE48u: goto label_802FFE48;
    case 0x802FFE4Cu: goto label_802FFE4C;
    case 0x802FFE50u: goto label_802FFE50;
    case 0x802FFE54u: goto label_802FFE54;
    case 0x802FFE58u: goto label_802FFE58;
    case 0x802FFE5Cu: goto label_802FFE5C;
    case 0x802FFE60u: goto label_802FFE60;
    case 0x802FFE64u: goto label_802FFE64;
    case 0x802FFE68u: goto label_802FFE68;
    case 0x802FFE6Cu: goto label_802FFE6C;
    case 0x802FFE70u: goto label_802FFE70;
    case 0x802FFE74u: goto label_802FFE74;
    case 0x802FFE78u: goto label_802FFE78;
    case 0x802FFE7Cu: goto label_802FFE7C;
    case 0x802FFE80u: goto label_802FFE80;
    case 0x802FFE84u: goto label_802FFE84;
    case 0x802FFE88u: goto label_802FFE88;
    case 0x802FFE8Cu: goto label_802FFE8C;
    case 0x802FFE90u: goto label_802FFE90;
    case 0x802FFE94u: goto label_802FFE94;
    case 0x802FFE98u: goto label_802FFE98;
    case 0x802FFE9Cu: goto label_802FFE9C;
    case 0x802FFEA0u: goto label_802FFEA0;
    case 0x802FFEA4u: goto label_802FFEA4;
    case 0x802FFEA8u: goto label_802FFEA8;
    case 0x802FFEACu: goto label_802FFEAC;
    case 0x802FFEB0u: goto label_802FFEB0;
    case 0x802FFEB4u: goto label_802FFEB4;
    case 0x802FFEB8u: goto label_802FFEB8;
    case 0x802FFEBCu: goto label_802FFEBC;
    case 0x802FFEC0u: goto label_802FFEC0;
    case 0x802FFEC4u: goto label_802FFEC4;
    case 0x802FFEC8u: goto label_802FFEC8;
    case 0x802FFECCu: goto label_802FFECC;
    case 0x802FFED0u: goto label_802FFED0;
    case 0x802FFED4u: goto label_802FFED4;
    case 0x802FFED8u: goto label_802FFED8;
    case 0x802FFEDCu: goto label_802FFEDC;
    case 0x802FFEE0u: goto label_802FFEE0;
    case 0x802FFEE4u: goto label_802FFEE4;
    case 0x802FFEE8u: goto label_802FFEE8;
    case 0x802FFEECu: goto label_802FFEEC;
    case 0x802FFEF0u: goto label_802FFEF0;
    case 0x802FFEF4u: goto label_802FFEF4;
    case 0x802FFEF8u: goto label_802FFEF8;
    case 0x802FFEFCu: goto label_802FFEFC;
    case 0x802FFF00u: goto label_802FFF00;
    case 0x802FFF04u: goto label_802FFF04;
    case 0x802FFF08u: goto label_802FFF08;
    case 0x802FFF0Cu: goto label_802FFF0C;
    case 0x802FFF10u: goto label_802FFF10;
    case 0x802FFF14u: goto label_802FFF14;
    case 0x802FFF18u: goto label_802FFF18;
    case 0x802FFF1Cu: goto label_802FFF1C;
    case 0x802FFF20u: goto label_802FFF20;
    case 0x802FFF24u: goto label_802FFF24;
    case 0x802FFF28u: goto label_802FFF28;
    case 0x802FFF2Cu: goto label_802FFF2C;
    case 0x802FFF30u: goto label_802FFF30;
    case 0x802FFF34u: goto label_802FFF34;
    case 0x802FFF38u: goto label_802FFF38;
    case 0x802FFF3Cu: goto label_802FFF3C;
    case 0x802FFF40u: goto label_802FFF40;
    case 0x802FFF44u: goto label_802FFF44;
    case 0x802FFF48u: goto label_802FFF48;
    case 0x802FFF4Cu: goto label_802FFF4C;
    case 0x802FFF50u: goto label_802FFF50;
    case 0x802FFF54u: goto label_802FFF54;
    case 0x802FFF58u: goto label_802FFF58;
    case 0x802FFF5Cu: goto label_802FFF5C;
    case 0x802FFF60u: goto label_802FFF60;
    case 0x802FFF64u: goto label_802FFF64;
    case 0x802FFF68u: goto label_802FFF68;
    case 0x802FFF6Cu: goto label_802FFF6C;
    case 0x802FFF70u: goto label_802FFF70;
    case 0x802FFF74u: goto label_802FFF74;
    case 0x802FFF78u: goto label_802FFF78;
    case 0x802FFF7Cu: goto label_802FFF7C;
    case 0x802FFF80u: goto label_802FFF80;
    case 0x802FFF84u: goto label_802FFF84;
    case 0x802FFF88u: goto label_802FFF88;
    case 0x802FFF8Cu: goto label_802FFF8C;
    case 0x802FFF90u: goto label_802FFF90;
    case 0x802FFF94u: goto label_802FFF94;
    case 0x802FFF98u: goto label_802FFF98;
    case 0x802FFF9Cu: goto label_802FFF9C;
    case 0x802FFFA0u: goto label_802FFFA0;
    case 0x802FFFA4u: goto label_802FFFA4;
    case 0x802FFFA8u: goto label_802FFFA8;
    case 0x802FFFACu: goto label_802FFFAC;
    case 0x802FFFB0u: goto label_802FFFB0;
    case 0x802FFFB4u: goto label_802FFFB4;
    case 0x802FFFB8u: goto label_802FFFB8;
    case 0x802FFFBCu: goto label_802FFFBC;
    case 0x802FFFC0u: goto label_802FFFC0;
    case 0x802FFFC4u: goto label_802FFFC4;
    case 0x802FFFC8u: goto label_802FFFC8;
    case 0x802FFFCCu: goto label_802FFFCC;
    case 0x802FFFD0u: goto label_802FFFD0;
    case 0x802FFFD4u: goto label_802FFFD4;
    case 0x802FFFD8u: goto label_802FFFD8;
    case 0x802FFFDCu: goto label_802FFFDC;
    case 0x802FFFE0u: goto label_802FFFE0;
    case 0x802FFFE4u: goto label_802FFFE4;
    case 0x802FFFE8u: goto label_802FFFE8;
    case 0x802FFFECu: goto label_802FFFEC;
    case 0x802FFFF0u: goto label_802FFFF0;
    case 0x802FFFF4u: goto label_802FFFF4;
    case 0x802FFFF8u: goto label_802FFFF8;
    case 0x802FFFFCu: goto label_802FFFFC;
    case 0x80300000u: goto label_80300000;
    case 0x80300004u: goto label_80300004;
    case 0x80300008u: goto label_80300008;
    case 0x8030000Cu: goto label_8030000C;
    case 0x80300010u: goto label_80300010;
    case 0x80300014u: goto label_80300014;
    case 0x80300018u: goto label_80300018;
    case 0x8030001Cu: goto label_8030001C;
    case 0x80300020u: goto label_80300020;
    case 0x80300024u: goto label_80300024;
    case 0x80300028u: goto label_80300028;
    case 0x8030002Cu: goto label_8030002C;
    case 0x80300030u: goto label_80300030;
    case 0x80300034u: goto label_80300034;
    case 0x80300038u: goto label_80300038;
    case 0x8030003Cu: goto label_8030003C;
    case 0x80300040u: goto label_80300040;
    case 0x80300044u: goto label_80300044;
    case 0x80300048u: goto label_80300048;
    case 0x8030004Cu: goto label_8030004C;
    case 0x80300050u: goto label_80300050;
    case 0x80300054u: goto label_80300054;
    case 0x80300058u: goto label_80300058;
    case 0x8030005Cu: goto label_8030005C;
    case 0x80300060u: goto label_80300060;
    case 0x80300064u: goto label_80300064;
    case 0x80300068u: goto label_80300068;
    case 0x8030006Cu: goto label_8030006C;
    case 0x80300070u: goto label_80300070;
    case 0x80300074u: goto label_80300074;
    case 0x80300078u: goto label_80300078;
    case 0x8030007Cu: goto label_8030007C;
    case 0x80300080u: goto label_80300080;
    case 0x80300084u: goto label_80300084;
    case 0x80300088u: goto label_80300088;
    case 0x8030008Cu: goto label_8030008C;
    case 0x80300090u: goto label_80300090;
    case 0x80300094u: goto label_80300094;
    case 0x80300098u: goto label_80300098;
    case 0x8030009Cu: goto label_8030009C;
    case 0x803000A0u: goto label_803000A0;
    case 0x803000A4u: goto label_803000A4;
    case 0x803000A8u: goto label_803000A8;
    case 0x803000ACu: goto label_803000AC;
    case 0x803000B0u: goto label_803000B0;
    case 0x803000B4u: goto label_803000B4;
    case 0x803000B8u: goto label_803000B8;
    case 0x803000BCu: goto label_803000BC;
    case 0x803000C0u: goto label_803000C0;
    case 0x803000C4u: goto label_803000C4;
    case 0x803000C8u: goto label_803000C8;
    case 0x803000CCu: goto label_803000CC;
    case 0x803000D0u: goto label_803000D0;
    case 0x803000D4u: goto label_803000D4;
    case 0x803000D8u: goto label_803000D8;
    case 0x803000DCu: goto label_803000DC;
    case 0x803000E0u: goto label_803000E0;
    case 0x803000E4u: goto label_803000E4;
    case 0x803000E8u: goto label_803000E8;
    case 0x803000ECu: goto label_803000EC;
    case 0x803000F0u: goto label_803000F0;
    case 0x803000F4u: goto label_803000F4;
    case 0x803000F8u: goto label_803000F8;
    case 0x803000FCu: goto label_803000FC;
    case 0x80300100u: goto label_80300100;
    case 0x80300104u: goto label_80300104;
    case 0x80300108u: goto label_80300108;
    case 0x8030010Cu: goto label_8030010C;
    case 0x80300110u: goto label_80300110;
    case 0x80300114u: goto label_80300114;
    case 0x80300118u: goto label_80300118;
    case 0x8030011Cu: goto label_8030011C;
    case 0x80300120u: goto label_80300120;
    case 0x80300124u: goto label_80300124;
    case 0x80300128u: goto label_80300128;
    case 0x8030012Cu: goto label_8030012C;
    case 0x80300130u: goto label_80300130;
    case 0x80300134u: goto label_80300134;
    case 0x80300138u: goto label_80300138;
    case 0x8030013Cu: goto label_8030013C;
    case 0x80300140u: goto label_80300140;
    case 0x80300144u: goto label_80300144;
    case 0x80300148u: goto label_80300148;
    case 0x8030014Cu: goto label_8030014C;
    case 0x80300150u: goto label_80300150;
    case 0x80300154u: goto label_80300154;
    case 0x80300158u: goto label_80300158;
    case 0x8030015Cu: goto label_8030015C;
    case 0x80300160u: goto label_80300160;
    case 0x80300164u: goto label_80300164;
    case 0x80300168u: goto label_80300168;
    case 0x8030016Cu: goto label_8030016C;
    case 0x80300170u: goto label_80300170;
    case 0x80300174u: goto label_80300174;
    case 0x80300178u: goto label_80300178;
    case 0x8030017Cu: goto label_8030017C;
    case 0x80300180u: goto label_80300180;
    case 0x80300184u: goto label_80300184;
    case 0x80300188u: goto label_80300188;
    case 0x8030018Cu: goto label_8030018C;
    case 0x80300190u: goto label_80300190;
    case 0x80300194u: goto label_80300194;
    case 0x80300198u: goto label_80300198;
    case 0x8030019Cu: goto label_8030019C;
    case 0x803001A0u: goto label_803001A0;
    case 0x803001A4u: goto label_803001A4;
    case 0x803001A8u: goto label_803001A8;
    case 0x803001ACu: goto label_803001AC;
    case 0x803001B0u: goto label_803001B0;
    case 0x803001B4u: goto label_803001B4;
    case 0x803001B8u: goto label_803001B8;
    case 0x803001BCu: goto label_803001BC;
    case 0x803001C0u: goto label_803001C0;
    case 0x803001C4u: goto label_803001C4;
    case 0x803001C8u: goto label_803001C8;
    case 0x803001CCu: goto label_803001CC;
    case 0x803001D0u: goto label_803001D0;
    case 0x803001D4u: goto label_803001D4;
    case 0x803001D8u: goto label_803001D8;
    case 0x803001DCu: goto label_803001DC;
    case 0x803001E0u: goto label_803001E0;
    case 0x803001E4u: goto label_803001E4;
    case 0x803001E8u: goto label_803001E8;
    case 0x803001ECu: goto label_803001EC;
    case 0x803001F0u: goto label_803001F0;
    case 0x803001F4u: goto label_803001F4;
    case 0x803001F8u: goto label_803001F8;
    case 0x803001FCu: goto label_803001FC;
    case 0x80300200u: goto label_80300200;
    case 0x80300204u: goto label_80300204;
    case 0x80300208u: goto label_80300208;
    case 0x8030020Cu: goto label_8030020C;
    case 0x80300210u: goto label_80300210;
    case 0x80300214u: goto label_80300214;
    case 0x80300218u: goto label_80300218;
    case 0x8030021Cu: goto label_8030021C;
    case 0x80300220u: goto label_80300220;
    case 0x80300224u: goto label_80300224;
    case 0x80300228u: goto label_80300228;
    case 0x8030022Cu: goto label_8030022C;
    case 0x80300230u: goto label_80300230;
    case 0x80300234u: goto label_80300234;
    case 0x80300238u: goto label_80300238;
    case 0x8030023Cu: goto label_8030023C;
    case 0x80300240u: goto label_80300240;
    case 0x80300244u: goto label_80300244;
    case 0x80300248u: goto label_80300248;
    case 0x8030024Cu: goto label_8030024C;
    case 0x80300250u: goto label_80300250;
    case 0x80300254u: goto label_80300254;
    case 0x80300258u: goto label_80300258;
    case 0x8030025Cu: goto label_8030025C;
    case 0x80300260u: goto label_80300260;
    case 0x80300264u: goto label_80300264;
    case 0x80300268u: goto label_80300268;
    case 0x8030026Cu: goto label_8030026C;
    case 0x80300270u: goto label_80300270;
    case 0x80300274u: goto label_80300274;
    case 0x80300278u: goto label_80300278;
    case 0x8030027Cu: goto label_8030027C;
    case 0x80300280u: goto label_80300280;
    case 0x80300284u: goto label_80300284;
    case 0x80300288u: goto label_80300288;
    case 0x8030028Cu: goto label_8030028C;
    case 0x80300290u: goto label_80300290;
    case 0x80300294u: goto label_80300294;
    case 0x80300298u: goto label_80300298;
    case 0x8030029Cu: goto label_8030029C;
    case 0x803002A0u: goto label_803002A0;
    case 0x803002A4u: goto label_803002A4;
    case 0x803002A8u: goto label_803002A8;
    case 0x803002ACu: goto label_803002AC;
    case 0x803002B0u: goto label_803002B0;
    case 0x803002B4u: goto label_803002B4;
    case 0x803002B8u: goto label_803002B8;
    case 0x803002BCu: goto label_803002BC;
    case 0x803002C0u: goto label_803002C0;
    case 0x803002C4u: goto label_803002C4;
    case 0x803002C8u: goto label_803002C8;
    case 0x803002CCu: goto label_803002CC;
    case 0x803002D0u: goto label_803002D0;
    case 0x803002D4u: goto label_803002D4;
    case 0x803002D8u: goto label_803002D8;
    case 0x803002DCu: goto label_803002DC;
    case 0x803002E0u: goto label_803002E0;
    case 0x803002E4u: goto label_803002E4;
    case 0x803002E8u: goto label_803002E8;
    case 0x803002ECu: goto label_803002EC;
    case 0x803002F0u: goto label_803002F0;
    case 0x803002F4u: goto label_803002F4;
    case 0x803002F8u: goto label_803002F8;
    case 0x803002FCu: goto label_803002FC;
    case 0x80300300u: goto label_80300300;
    case 0x80300304u: goto label_80300304;
    case 0x80300308u: goto label_80300308;
    case 0x8030030Cu: goto label_8030030C;
    case 0x80300310u: goto label_80300310;
    case 0x80300314u: goto label_80300314;
    case 0x80300318u: goto label_80300318;
    case 0x8030031Cu: goto label_8030031C;
    case 0x80300320u: goto label_80300320;
    case 0x80300324u: goto label_80300324;
    case 0x80300328u: goto label_80300328;
    case 0x8030032Cu: goto label_8030032C;
    case 0x80300330u: goto label_80300330;
    case 0x80300334u: goto label_80300334;
    case 0x80300338u: goto label_80300338;
    case 0x8030033Cu: goto label_8030033C;
    case 0x80300340u: goto label_80300340;
    case 0x80300344u: goto label_80300344;
    case 0x80300348u: goto label_80300348;
    case 0x8030034Cu: goto label_8030034C;
    case 0x80300350u: goto label_80300350;
    case 0x80300354u: goto label_80300354;
    case 0x80300358u: goto label_80300358;
    case 0x8030035Cu: goto label_8030035C;
    case 0x80300360u: goto label_80300360;
    case 0x80300364u: goto label_80300364;
    case 0x80300368u: goto label_80300368;
    case 0x8030036Cu: goto label_8030036C;
    case 0x80300370u: goto label_80300370;
    case 0x80300374u: goto label_80300374;
    case 0x80300378u: goto label_80300378;
    case 0x8030037Cu: goto label_8030037C;
    case 0x80300380u: goto label_80300380;
    case 0x80300384u: goto label_80300384;
    case 0x80300388u: goto label_80300388;
    case 0x8030038Cu: goto label_8030038C;
    case 0x80300390u: goto label_80300390;
    case 0x80300394u: goto label_80300394;
    case 0x80300398u: goto label_80300398;
    case 0x8030039Cu: goto label_8030039C;
    case 0x803003A0u: goto label_803003A0;
    case 0x803003A4u: goto label_803003A4;
    case 0x803003A8u: goto label_803003A8;
    case 0x803003ACu: goto label_803003AC;
    case 0x803003B0u: goto label_803003B0;
    case 0x803003B4u: goto label_803003B4;
    case 0x803003B8u: goto label_803003B8;
    case 0x803003BCu: goto label_803003BC;
    case 0x803003C0u: goto label_803003C0;
    case 0x803003C4u: goto label_803003C4;
    case 0x803003C8u: goto label_803003C8;
    case 0x803003CCu: goto label_803003CC;
    case 0x803003D0u: goto label_803003D0;
    case 0x803003D4u: goto label_803003D4;
    case 0x803003D8u: goto label_803003D8;
    case 0x803003DCu: goto label_803003DC;
    case 0x803003E0u: goto label_803003E0;
    case 0x803003E4u: goto label_803003E4;
    case 0x803003E8u: goto label_803003E8;
    case 0x803003ECu: goto label_803003EC;
    case 0x803003F0u: goto label_803003F0;
    case 0x803003F4u: goto label_803003F4;
    case 0x803003F8u: goto label_803003F8;
    case 0x803003FCu: goto label_803003FC;
    case 0x80300400u: goto label_80300400;
    case 0x80300404u: goto label_80300404;
    case 0x80300408u: goto label_80300408;
    case 0x8030040Cu: goto label_8030040C;
    case 0x80300410u: goto label_80300410;
    case 0x80300414u: goto label_80300414;
    case 0x80300418u: goto label_80300418;
    case 0x8030041Cu: goto label_8030041C;
    case 0x80300420u: goto label_80300420;
    case 0x80300424u: goto label_80300424;
    case 0x80300428u: goto label_80300428;
    case 0x8030042Cu: goto label_8030042C;
    case 0x80300430u: goto label_80300430;
    case 0x80300434u: goto label_80300434;
    case 0x80300438u: goto label_80300438;
    case 0x8030043Cu: goto label_8030043C;
    case 0x80300440u: goto label_80300440;
    case 0x80300444u: goto label_80300444;
    case 0x80300448u: goto label_80300448;
    case 0x8030044Cu: goto label_8030044C;
    case 0x80300450u: goto label_80300450;
    case 0x80300454u: goto label_80300454;
    case 0x80300458u: goto label_80300458;
    case 0x8030045Cu: goto label_8030045C;
    case 0x80300460u: goto label_80300460;
    case 0x80300464u: goto label_80300464;
    case 0x80300468u: goto label_80300468;
    case 0x8030046Cu: goto label_8030046C;
    case 0x80300470u: goto label_80300470;
    case 0x80300474u: goto label_80300474;
    case 0x80300478u: goto label_80300478;
    case 0x8030047Cu: goto label_8030047C;
    case 0x80300480u: goto label_80300480;
    case 0x80300484u: goto label_80300484;
    case 0x80300488u: goto label_80300488;
    case 0x8030048Cu: goto label_8030048C;
    case 0x80300490u: goto label_80300490;
    case 0x80300494u: goto label_80300494;
    case 0x80300498u: goto label_80300498;
    case 0x8030049Cu: goto label_8030049C;
    case 0x803004A0u: goto label_803004A0;
    case 0x803004A4u: goto label_803004A4;
    case 0x803004A8u: goto label_803004A8;
    case 0x803004ACu: goto label_803004AC;
    case 0x803004B0u: goto label_803004B0;
    case 0x803004B4u: goto label_803004B4;
    case 0x803004B8u: goto label_803004B8;
    case 0x803004BCu: goto label_803004BC;
    case 0x803004C0u: goto label_803004C0;
    case 0x803004C4u: goto label_803004C4;
    case 0x803004C8u: goto label_803004C8;
    case 0x803004CCu: goto label_803004CC;
    case 0x803004D0u: goto label_803004D0;
    case 0x803004D4u: goto label_803004D4;
    case 0x803004D8u: goto label_803004D8;
    case 0x803004DCu: goto label_803004DC;
    case 0x803004E0u: goto label_803004E0;
    case 0x803004E4u: goto label_803004E4;
    case 0x803004E8u: goto label_803004E8;
    case 0x803004ECu: goto label_803004EC;
    case 0x803004F0u: goto label_803004F0;
    case 0x803004F4u: goto label_803004F4;
    case 0x803004F8u: goto label_803004F8;
    case 0x803004FCu: goto label_803004FC;
    case 0x80300500u: goto label_80300500;
    case 0x80300504u: goto label_80300504;
    case 0x80300508u: goto label_80300508;
    case 0x8030050Cu: goto label_8030050C;
    case 0x80300510u: goto label_80300510;
    case 0x80300514u: goto label_80300514;
    case 0x80300518u: goto label_80300518;
    case 0x8030051Cu: goto label_8030051C;
    case 0x80300520u: goto label_80300520;
    case 0x80300524u: goto label_80300524;
    case 0x80300528u: goto label_80300528;
    case 0x8030052Cu: goto label_8030052C;
    case 0x80300530u: goto label_80300530;
    case 0x80300534u: goto label_80300534;
    case 0x80300538u: goto label_80300538;
    case 0x8030053Cu: goto label_8030053C;
    case 0x80300540u: goto label_80300540;
    case 0x80300544u: goto label_80300544;
    case 0x80300548u: goto label_80300548;
    case 0x8030054Cu: goto label_8030054C;
    case 0x80300550u: goto label_80300550;
    case 0x80300554u: goto label_80300554;
    case 0x80300558u: goto label_80300558;
    case 0x8030055Cu: goto label_8030055C;
    case 0x80300560u: goto label_80300560;
    case 0x80300564u: goto label_80300564;
    case 0x80300568u: goto label_80300568;
    case 0x8030056Cu: goto label_8030056C;
    case 0x80300570u: goto label_80300570;
    case 0x80300574u: goto label_80300574;
    case 0x80300578u: goto label_80300578;
    case 0x8030057Cu: goto label_8030057C;
    case 0x80300580u: goto label_80300580;
    case 0x80300584u: goto label_80300584;
    case 0x80300588u: goto label_80300588;
    case 0x8030058Cu: goto label_8030058C;
    case 0x80300590u: goto label_80300590;
    case 0x80300594u: goto label_80300594;
    case 0x80300598u: goto label_80300598;
    case 0x8030059Cu: goto label_8030059C;
    case 0x803005A0u: goto label_803005A0;
    case 0x803005A4u: goto label_803005A4;
    case 0x803005A8u: goto label_803005A8;
    case 0x803005ACu: goto label_803005AC;
    case 0x803005B0u: goto label_803005B0;
    case 0x803005B4u: goto label_803005B4;
    case 0x803005B8u: goto label_803005B8;
    case 0x803005BCu: goto label_803005BC;
    case 0x803005C0u: goto label_803005C0;
    case 0x803005C4u: goto label_803005C4;
    case 0x803005C8u: goto label_803005C8;
    case 0x803005CCu: goto label_803005CC;
    case 0x803005D0u: goto label_803005D0;
    case 0x803005D4u: goto label_803005D4;
    case 0x803005D8u: goto label_803005D8;
    case 0x803005DCu: goto label_803005DC;
    case 0x803005E0u: goto label_803005E0;
    case 0x803005E4u: goto label_803005E4;
    case 0x803005E8u: goto label_803005E8;
    case 0x803005ECu: goto label_803005EC;
    case 0x803005F0u: goto label_803005F0;
    case 0x803005F4u: goto label_803005F4;
    case 0x803005F8u: goto label_803005F8;
    case 0x803005FCu: goto label_803005FC;
    case 0x80300600u: goto label_80300600;
    case 0x80300604u: goto label_80300604;
    case 0x80300608u: goto label_80300608;
    case 0x8030060Cu: goto label_8030060C;
    case 0x80300610u: goto label_80300610;
    case 0x80300614u: goto label_80300614;
    case 0x80300618u: goto label_80300618;
    case 0x8030061Cu: goto label_8030061C;
    case 0x80300620u: goto label_80300620;
    case 0x80300624u: goto label_80300624;
    case 0x80300628u: goto label_80300628;
    case 0x8030062Cu: goto label_8030062C;
    case 0x80300630u: goto label_80300630;
    case 0x80300634u: goto label_80300634;
    case 0x80300638u: goto label_80300638;
    case 0x8030063Cu: goto label_8030063C;
    case 0x80300640u: goto label_80300640;
    case 0x80300644u: goto label_80300644;
    case 0x80300648u: goto label_80300648;
    case 0x8030064Cu: goto label_8030064C;
    case 0x80300650u: goto label_80300650;
    case 0x80300654u: goto label_80300654;
    case 0x80300658u: goto label_80300658;
    case 0x8030065Cu: goto label_8030065C;
    case 0x80300660u: goto label_80300660;
    case 0x80300664u: goto label_80300664;
    case 0x80300668u: goto label_80300668;
    case 0x8030066Cu: goto label_8030066C;
    case 0x80300670u: goto label_80300670;
    case 0x80300674u: goto label_80300674;
    case 0x80300678u: goto label_80300678;
    case 0x8030067Cu: goto label_8030067C;
    case 0x80300680u: goto label_80300680;
    case 0x80300684u: goto label_80300684;
    case 0x80300688u: goto label_80300688;
    case 0x8030068Cu: goto label_8030068C;
    case 0x80300690u: goto label_80300690;
    case 0x80300694u: goto label_80300694;
    case 0x80300698u: goto label_80300698;
    case 0x8030069Cu: goto label_8030069C;
    case 0x803006A0u: goto label_803006A0;
    case 0x803006A4u: goto label_803006A4;
    case 0x803006A8u: goto label_803006A8;
    case 0x803006ACu: goto label_803006AC;
    case 0x803006B0u: goto label_803006B0;
    case 0x803006B4u: goto label_803006B4;
    case 0x803006B8u: goto label_803006B8;
    case 0x803006BCu: goto label_803006BC;
    case 0x803006C0u: goto label_803006C0;
    case 0x803006C4u: goto label_803006C4;
    case 0x803006C8u: goto label_803006C8;
    case 0x803006CCu: goto label_803006CC;
    case 0x803006D0u: goto label_803006D0;
    case 0x803006D4u: goto label_803006D4;
    case 0x803006D8u: goto label_803006D8;
    case 0x803006DCu: goto label_803006DC;
    case 0x803006E0u: goto label_803006E0;
    case 0x803006E4u: goto label_803006E4;
    case 0x803006E8u: goto label_803006E8;
    case 0x803006ECu: goto label_803006EC;
    case 0x803006F0u: goto label_803006F0;
    case 0x803006F4u: goto label_803006F4;
    case 0x803006F8u: goto label_803006F8;
    case 0x803006FCu: goto label_803006FC;
    case 0x80300700u: goto label_80300700;
    case 0x80300704u: goto label_80300704;
    case 0x80300708u: goto label_80300708;
    case 0x8030070Cu: goto label_8030070C;
    case 0x80300710u: goto label_80300710;
    case 0x80300714u: goto label_80300714;
    case 0x80300718u: goto label_80300718;
    case 0x8030071Cu: goto label_8030071C;
    case 0x80300720u: goto label_80300720;
    case 0x80300724u: goto label_80300724;
    case 0x80300728u: goto label_80300728;
    case 0x8030072Cu: goto label_8030072C;
    case 0x80300730u: goto label_80300730;
    case 0x80300734u: goto label_80300734;
    case 0x80300738u: goto label_80300738;
    case 0x8030073Cu: goto label_8030073C;
    case 0x80300740u: goto label_80300740;
    case 0x80300744u: goto label_80300744;
    case 0x80300748u: goto label_80300748;
    case 0x8030074Cu: goto label_8030074C;
    case 0x80300750u: goto label_80300750;
    case 0x80300754u: goto label_80300754;
    case 0x80300758u: goto label_80300758;
    case 0x8030075Cu: goto label_8030075C;
    case 0x80300760u: goto label_80300760;
    case 0x80300764u: goto label_80300764;
    case 0x80300768u: goto label_80300768;
    case 0x8030076Cu: goto label_8030076C;
    case 0x80300770u: goto label_80300770;
    case 0x80300774u: goto label_80300774;
    case 0x80300778u: goto label_80300778;
    case 0x8030077Cu: goto label_8030077C;
    case 0x80300780u: goto label_80300780;
    case 0x80300784u: goto label_80300784;
    case 0x80300788u: goto label_80300788;
    case 0x8030078Cu: goto label_8030078C;
    case 0x80300790u: goto label_80300790;
    case 0x80300794u: goto label_80300794;
    case 0x80300798u: goto label_80300798;
    case 0x8030079Cu: goto label_8030079C;
    case 0x803007A0u: goto label_803007A0;
    case 0x803007A4u: goto label_803007A4;
    case 0x803007A8u: goto label_803007A8;
    case 0x803007ACu: goto label_803007AC;
    case 0x803007B0u: goto label_803007B0;
    case 0x803007B4u: goto label_803007B4;
    case 0x803007B8u: goto label_803007B8;
    case 0x803007BCu: goto label_803007BC;
    case 0x803007C0u: goto label_803007C0;
    case 0x803007C4u: goto label_803007C4;
    case 0x803007C8u: goto label_803007C8;
    case 0x803007CCu: goto label_803007CC;
    case 0x803007D0u: goto label_803007D0;
    case 0x803007D4u: goto label_803007D4;
    case 0x803007D8u: goto label_803007D8;
    case 0x803007DCu: goto label_803007DC;
    case 0x803007E0u: goto label_803007E0;
    case 0x803007E4u: goto label_803007E4;
    case 0x803007E8u: goto label_803007E8;
    case 0x803007ECu: goto label_803007EC;
    case 0x803007F0u: goto label_803007F0;
    case 0x803007F4u: goto label_803007F4;
    case 0x803007F8u: goto label_803007F8;
    case 0x803007FCu: goto label_803007FC;
    case 0x80300800u: goto label_80300800;
    case 0x80300804u: goto label_80300804;
    case 0x80300808u: goto label_80300808;
    case 0x8030080Cu: goto label_8030080C;
    case 0x80300810u: goto label_80300810;
    case 0x80300814u: goto label_80300814;
    case 0x80300818u: goto label_80300818;
    case 0x8030081Cu: goto label_8030081C;
    case 0x80300820u: goto label_80300820;
    case 0x80300824u: goto label_80300824;
    case 0x80300828u: goto label_80300828;
    case 0x8030082Cu: goto label_8030082C;
    case 0x80300830u: goto label_80300830;
    case 0x80300834u: goto label_80300834;
    case 0x80300838u: goto label_80300838;
    case 0x8030083Cu: goto label_8030083C;
    case 0x80300840u: goto label_80300840;
    case 0x80300844u: goto label_80300844;
    case 0x80300848u: goto label_80300848;
    case 0x8030084Cu: goto label_8030084C;
    case 0x80300850u: goto label_80300850;
    case 0x80300854u: goto label_80300854;
    case 0x80300858u: goto label_80300858;
    case 0x8030085Cu: goto label_8030085C;
    case 0x80300860u: goto label_80300860;
    case 0x80300864u: goto label_80300864;
    case 0x80300868u: goto label_80300868;
    case 0x8030086Cu: goto label_8030086C;
    case 0x80300870u: goto label_80300870;
    case 0x80300874u: goto label_80300874;
    case 0x80300878u: goto label_80300878;
    case 0x8030087Cu: goto label_8030087C;
    case 0x80300880u: goto label_80300880;
    case 0x80300884u: goto label_80300884;
    case 0x80300888u: goto label_80300888;
    case 0x8030088Cu: goto label_8030088C;
    case 0x80300890u: goto label_80300890;
    case 0x80300894u: goto label_80300894;
    case 0x80300898u: goto label_80300898;
    case 0x8030089Cu: goto label_8030089C;
    case 0x803008A0u: goto label_803008A0;
    case 0x803008A4u: goto label_803008A4;
    case 0x803008A8u: goto label_803008A8;
    case 0x803008ACu: goto label_803008AC;
    case 0x803008B0u: goto label_803008B0;
    case 0x803008B4u: goto label_803008B4;
    case 0x803008B8u: goto label_803008B8;
    case 0x803008BCu: goto label_803008BC;
    case 0x803008C0u: goto label_803008C0;
    case 0x803008C4u: goto label_803008C4;
    case 0x803008C8u: goto label_803008C8;
    case 0x803008CCu: goto label_803008CC;
    case 0x803008D0u: goto label_803008D0;
    case 0x803008D4u: goto label_803008D4;
    case 0x803008D8u: goto label_803008D8;
    case 0x803008DCu: goto label_803008DC;
    case 0x803008E0u: goto label_803008E0;
    case 0x803008E4u: goto label_803008E4;
    case 0x803008E8u: goto label_803008E8;
    case 0x803008ECu: goto label_803008EC;
    case 0x803008F0u: goto label_803008F0;
    case 0x803008F4u: goto label_803008F4;
    case 0x803008F8u: goto label_803008F8;
    case 0x803008FCu: goto label_803008FC;
    case 0x80300900u: goto label_80300900;
    case 0x80300904u: goto label_80300904;
    case 0x80300908u: goto label_80300908;
    case 0x8030090Cu: goto label_8030090C;
    case 0x80300910u: goto label_80300910;
    case 0x80300914u: goto label_80300914;
    case 0x80300918u: goto label_80300918;
    case 0x8030091Cu: goto label_8030091C;
    case 0x80300920u: goto label_80300920;
    case 0x80300924u: goto label_80300924;
    case 0x80300928u: goto label_80300928;
    case 0x8030092Cu: goto label_8030092C;
    case 0x80300930u: goto label_80300930;
    case 0x80300934u: goto label_80300934;
    case 0x80300938u: goto label_80300938;
    case 0x8030093Cu: goto label_8030093C;
    case 0x80300940u: goto label_80300940;
    case 0x80300944u: goto label_80300944;
    case 0x80300948u: goto label_80300948;
    case 0x8030094Cu: goto label_8030094C;
    case 0x80300950u: goto label_80300950;
    case 0x80300954u: goto label_80300954;
    case 0x80300958u: goto label_80300958;
    case 0x8030095Cu: goto label_8030095C;
    case 0x80300960u: goto label_80300960;
    case 0x80300964u: goto label_80300964;
    case 0x80300968u: goto label_80300968;
    case 0x8030096Cu: goto label_8030096C;
    case 0x80300970u: goto label_80300970;
    case 0x80300974u: goto label_80300974;
    case 0x80300978u: goto label_80300978;
    case 0x8030097Cu: goto label_8030097C;
    case 0x80300980u: goto label_80300980;
    case 0x80300984u: goto label_80300984;
    case 0x80300988u: goto label_80300988;
    case 0x8030098Cu: goto label_8030098C;
    case 0x80300990u: goto label_80300990;
    case 0x80300994u: goto label_80300994;
    case 0x80300998u: goto label_80300998;
    case 0x8030099Cu: goto label_8030099C;
    case 0x803009A0u: goto label_803009A0;
    case 0x803009A4u: goto label_803009A4;
    case 0x803009A8u: goto label_803009A8;
    case 0x803009ACu: goto label_803009AC;
    case 0x803009B0u: goto label_803009B0;
    case 0x803009B4u: goto label_803009B4;
    case 0x803009B8u: goto label_803009B8;
    case 0x803009BCu: goto label_803009BC;
    case 0x803009C0u: goto label_803009C0;
    case 0x803009C4u: goto label_803009C4;
    case 0x803009C8u: goto label_803009C8;
    case 0x803009CCu: goto label_803009CC;
    case 0x803009D0u: goto label_803009D0;
    case 0x803009D4u: goto label_803009D4;
    case 0x803009D8u: goto label_803009D8;
    case 0x803009DCu: goto label_803009DC;
    case 0x803009E0u: goto label_803009E0;
    case 0x803009E4u: goto label_803009E4;
    case 0x803009E8u: goto label_803009E8;
    case 0x803009ECu: goto label_803009EC;
    case 0x803009F0u: goto label_803009F0;
    case 0x803009F4u: goto label_803009F4;
    case 0x803009F8u: goto label_803009F8;
    case 0x803009FCu: goto label_803009FC;
    case 0x80300A00u: goto label_80300A00;
    case 0x80300A04u: goto label_80300A04;
    case 0x80300A08u: goto label_80300A08;
    case 0x80300A0Cu: goto label_80300A0C;
    case 0x80300A10u: goto label_80300A10;
    case 0x80300A14u: goto label_80300A14;
    case 0x80300A18u: goto label_80300A18;
    case 0x80300A1Cu: goto label_80300A1C;
    case 0x80300A20u: goto label_80300A20;
    case 0x80300A24u: goto label_80300A24;
    case 0x80300A28u: goto label_80300A28;
    case 0x80300A2Cu: goto label_80300A2C;
    case 0x80300A30u: goto label_80300A30;
    case 0x80300A34u: goto label_80300A34;
    case 0x80300A38u: goto label_80300A38;
    case 0x80300A3Cu: goto label_80300A3C;
    case 0x80300A40u: goto label_80300A40;
    case 0x80300A44u: goto label_80300A44;
    case 0x80300A48u: goto label_80300A48;
    case 0x80300A4Cu: goto label_80300A4C;
    case 0x80300A50u: goto label_80300A50;
    case 0x80300A54u: goto label_80300A54;
    case 0x80300A58u: goto label_80300A58;
    case 0x80300A5Cu: goto label_80300A5C;
    case 0x80300A60u: goto label_80300A60;
    case 0x80300A64u: goto label_80300A64;
    case 0x80300A68u: goto label_80300A68;
    case 0x80300A6Cu: goto label_80300A6C;
    case 0x80300A70u: goto label_80300A70;
    case 0x80300A74u: goto label_80300A74;
    case 0x80300A78u: goto label_80300A78;
    case 0x80300A7Cu: goto label_80300A7C;
    case 0x80300A80u: goto label_80300A80;
    case 0x80300A84u: goto label_80300A84;
    case 0x80300A88u: goto label_80300A88;
    case 0x80300A8Cu: goto label_80300A8C;
    case 0x80300A90u: goto label_80300A90;
    case 0x80300A94u: goto label_80300A94;
    case 0x80300A98u: goto label_80300A98;
    case 0x80300A9Cu: goto label_80300A9C;
    case 0x80300AA0u: goto label_80300AA0;
    case 0x80300AA4u: goto label_80300AA4;
    case 0x80300AA8u: goto label_80300AA8;
    case 0x80300AACu: goto label_80300AAC;
    case 0x80300AB0u: goto label_80300AB0;
    case 0x80300AB4u: goto label_80300AB4;
    case 0x80300AB8u: goto label_80300AB8;
    case 0x80300ABCu: goto label_80300ABC;
    case 0x80300AC0u: goto label_80300AC0;
    case 0x80300AC4u: goto label_80300AC4;
    case 0x80300AC8u: goto label_80300AC8;
    case 0x80300ACCu: goto label_80300ACC;
    case 0x80300AD0u: goto label_80300AD0;
    case 0x80300AD4u: goto label_80300AD4;
    case 0x80300AD8u: goto label_80300AD8;
    case 0x80300ADCu: goto label_80300ADC;
    case 0x80300AE0u: goto label_80300AE0;
    case 0x80300AE4u: goto label_80300AE4;
    case 0x80300AE8u: goto label_80300AE8;
    case 0x80300AECu: goto label_80300AEC;
    case 0x80300AF0u: goto label_80300AF0;
    case 0x80300AF4u: goto label_80300AF4;
    case 0x80300AF8u: goto label_80300AF8;
    case 0x80300AFCu: goto label_80300AFC;
    case 0x80300B00u: goto label_80300B00;
    case 0x80300B04u: goto label_80300B04;
    case 0x80300B08u: goto label_80300B08;
    case 0x80300B0Cu: goto label_80300B0C;
    case 0x80300B10u: goto label_80300B10;
    case 0x80300B14u: goto label_80300B14;
    case 0x80300B18u: goto label_80300B18;
    case 0x80300B1Cu: goto label_80300B1C;
    case 0x80300B20u: goto label_80300B20;
    case 0x80300B24u: goto label_80300B24;
    case 0x80300B28u: goto label_80300B28;
    case 0x80300B2Cu: goto label_80300B2C;
    case 0x80300B30u: goto label_80300B30;
    case 0x80300B34u: goto label_80300B34;
    case 0x80300B38u: goto label_80300B38;
    case 0x80300B3Cu: goto label_80300B3C;
    case 0x80300B40u: goto label_80300B40;
    case 0x80300B44u: goto label_80300B44;
    case 0x80300B48u: goto label_80300B48;
    case 0x80300B4Cu: goto label_80300B4C;
    case 0x80300B50u: goto label_80300B50;
    case 0x80300B54u: goto label_80300B54;
    case 0x80300B58u: goto label_80300B58;
    case 0x80300B5Cu: goto label_80300B5C;
    case 0x80300B60u: goto label_80300B60;
    case 0x80300B64u: goto label_80300B64;
    case 0x80300B68u: goto label_80300B68;
    case 0x80300B6Cu: goto label_80300B6C;
    case 0x80300B70u: goto label_80300B70;
    case 0x80300B74u: goto label_80300B74;
    case 0x80300B78u: goto label_80300B78;
    case 0x80300B7Cu: goto label_80300B7C;
    case 0x80300B80u: goto label_80300B80;
    case 0x80300B84u: goto label_80300B84;
    case 0x80300B88u: goto label_80300B88;
    case 0x80300B8Cu: goto label_80300B8C;
    case 0x80300B90u: goto label_80300B90;
    case 0x80300B94u: goto label_80300B94;
    case 0x80300B98u: goto label_80300B98;
    case 0x80300B9Cu: goto label_80300B9C;
    case 0x80300BA0u: goto label_80300BA0;
    case 0x80300BA4u: goto label_80300BA4;
    case 0x80300BA8u: goto label_80300BA8;
    case 0x80300BACu: goto label_80300BAC;
    case 0x80300BB0u: goto label_80300BB0;
    case 0x80300BB4u: goto label_80300BB4;
    case 0x80300BB8u: goto label_80300BB8;
    case 0x80300BBCu: goto label_80300BBC;
    case 0x80300BC0u: goto label_80300BC0;
    case 0x80300BC4u: goto label_80300BC4;
    case 0x80300BC8u: goto label_80300BC8;
    case 0x80300BCCu: goto label_80300BCC;
    case 0x80300BD0u: goto label_80300BD0;
    case 0x80300BD4u: goto label_80300BD4;
    case 0x80300BD8u: goto label_80300BD8;
    case 0x80300BDCu: goto label_80300BDC;
    case 0x80300BE0u: goto label_80300BE0;
    case 0x80300BE4u: goto label_80300BE4;
    case 0x80300BE8u: goto label_80300BE8;
    case 0x80300BECu: goto label_80300BEC;
    case 0x80300BF0u: goto label_80300BF0;
    case 0x80300BF4u: goto label_80300BF4;
    case 0x80300BF8u: goto label_80300BF8;
    case 0x80300BFCu: goto label_80300BFC;
    case 0x80300C00u: goto label_80300C00;
    case 0x80300C04u: goto label_80300C04;
    case 0x80300C08u: goto label_80300C08;
    case 0x80300C0Cu: goto label_80300C0C;
    case 0x80300C10u: goto label_80300C10;
    case 0x80300C14u: goto label_80300C14;
    case 0x80300C18u: goto label_80300C18;
    case 0x80300C1Cu: goto label_80300C1C;
    case 0x80300C20u: goto label_80300C20;
    case 0x80300C24u: goto label_80300C24;
    case 0x80300C28u: goto label_80300C28;
    case 0x80300C2Cu: goto label_80300C2C;
    case 0x80300C30u: goto label_80300C30;
    case 0x80300C34u: goto label_80300C34;
    case 0x80300C38u: goto label_80300C38;
    case 0x80300C3Cu: goto label_80300C3C;
    case 0x80300C40u: goto label_80300C40;
    case 0x80300C44u: goto label_80300C44;
    case 0x80300C48u: goto label_80300C48;
    case 0x80300C4Cu: goto label_80300C4C;
    case 0x80300C50u: goto label_80300C50;
    case 0x80300C54u: goto label_80300C54;
    case 0x80300C58u: goto label_80300C58;
    case 0x80300C5Cu: goto label_80300C5C;
    case 0x80300C60u: goto label_80300C60;
    case 0x80300C64u: goto label_80300C64;
    case 0x80300C68u: goto label_80300C68;
    case 0x80300C6Cu: goto label_80300C6C;
    case 0x80300C70u: goto label_80300C70;
    case 0x80300C74u: goto label_80300C74;
    case 0x80300C78u: goto label_80300C78;
    case 0x80300C7Cu: goto label_80300C7C;
    case 0x80300C80u: goto label_80300C80;
    case 0x80300C84u: goto label_80300C84;
    case 0x80300C88u: goto label_80300C88;
    case 0x80300C8Cu: goto label_80300C8C;
    case 0x80300C90u: goto label_80300C90;
    case 0x80300C94u: goto label_80300C94;
    case 0x80300C98u: goto label_80300C98;
    case 0x80300C9Cu: goto label_80300C9C;
    case 0x80300CA0u: goto label_80300CA0;
    case 0x80300CA4u: goto label_80300CA4;
    case 0x80300CA8u: goto label_80300CA8;
    case 0x80300CACu: goto label_80300CAC;
    case 0x80300CB0u: goto label_80300CB0;
    case 0x80300CB4u: goto label_80300CB4;
    case 0x80300CB8u: goto label_80300CB8;
    case 0x80300CBCu: goto label_80300CBC;
    case 0x80300CC0u: goto label_80300CC0;
    case 0x80300CC4u: goto label_80300CC4;
    case 0x80300CC8u: goto label_80300CC8;
    case 0x80300CCCu: goto label_80300CCC;
    case 0x80300CD0u: goto label_80300CD0;
    case 0x80300CD4u: goto label_80300CD4;
    case 0x80300CD8u: goto label_80300CD8;
    case 0x80300CDCu: goto label_80300CDC;
    case 0x80300CE0u: goto label_80300CE0;
    case 0x80300CE4u: goto label_80300CE4;
    case 0x80300CE8u: goto label_80300CE8;
    case 0x80300CECu: goto label_80300CEC;
    case 0x80300CF0u: goto label_80300CF0;
    case 0x80300CF4u: goto label_80300CF4;
    case 0x80300CF8u: goto label_80300CF8;
    case 0x80300CFCu: goto label_80300CFC;
    case 0x80300D00u: goto label_80300D00;
    case 0x80300D04u: goto label_80300D04;
    case 0x80300D08u: goto label_80300D08;
    case 0x80300D0Cu: goto label_80300D0C;
    case 0x80300D10u: goto label_80300D10;
    case 0x80300D14u: goto label_80300D14;
    case 0x80300D18u: goto label_80300D18;
    case 0x80300D1Cu: goto label_80300D1C;
    case 0x80300D20u: goto label_80300D20;
    case 0x80300D24u: goto label_80300D24;
    case 0x80300D28u: goto label_80300D28;
    case 0x80300D2Cu: goto label_80300D2C;
    case 0x80300D30u: goto label_80300D30;
    case 0x80300D34u: goto label_80300D34;
    case 0x80300D38u: goto label_80300D38;
    case 0x80300D3Cu: goto label_80300D3C;
    case 0x80300D40u: goto label_80300D40;
    case 0x80300D44u: goto label_80300D44;
    case 0x80300D48u: goto label_80300D48;
    case 0x80300D4Cu: goto label_80300D4C;
    case 0x80300D50u: goto label_80300D50;
    case 0x80300D54u: goto label_80300D54;
    case 0x80300D58u: goto label_80300D58;
    case 0x80300D5Cu: goto label_80300D5C;
    case 0x80300D60u: goto label_80300D60;
    case 0x80300D64u: goto label_80300D64;
    case 0x80300D68u: goto label_80300D68;
    case 0x80300D6Cu: goto label_80300D6C;
    case 0x80300D70u: goto label_80300D70;
    case 0x80300D74u: goto label_80300D74;
    case 0x80300D78u: goto label_80300D78;
    case 0x80300D7Cu: goto label_80300D7C;
    case 0x80300D80u: goto label_80300D80;
    case 0x80300D84u: goto label_80300D84;
    case 0x80300D88u: goto label_80300D88;
    case 0x80300D8Cu: goto label_80300D8C;
    case 0x80300D90u: goto label_80300D90;
    case 0x80300D94u: goto label_80300D94;
    case 0x80300D98u: goto label_80300D98;
    case 0x80300D9Cu: goto label_80300D9C;
    case 0x80300DA0u: goto label_80300DA0;
    case 0x80300DA4u: goto label_80300DA4;
    case 0x80300DA8u: goto label_80300DA8;
    case 0x80300DACu: goto label_80300DAC;
    case 0x80300DB0u: goto label_80300DB0;
    case 0x80300DB4u: goto label_80300DB4;
    case 0x80300DB8u: goto label_80300DB8;
    case 0x80300DBCu: goto label_80300DBC;
    case 0x80300DC0u: goto label_80300DC0;
    case 0x80300DC4u: goto label_80300DC4;
    case 0x80300DC8u: goto label_80300DC8;
    case 0x80300DCCu: goto label_80300DCC;
    case 0x80300DD0u: goto label_80300DD0;
    case 0x80300DD4u: goto label_80300DD4;
    case 0x80300DD8u: goto label_80300DD8;
    case 0x80300DDCu: goto label_80300DDC;
    case 0x80300DE0u: goto label_80300DE0;
    case 0x80300DE4u: goto label_80300DE4;
    case 0x80300DE8u: goto label_80300DE8;
    case 0x80300DECu: goto label_80300DEC;
    case 0x80300DF0u: goto label_80300DF0;
    case 0x80300DF4u: goto label_80300DF4;
    case 0x80300DF8u: goto label_80300DF8;
    case 0x80300DFCu: goto label_80300DFC;
    case 0x80300E00u: goto label_80300E00;
    case 0x80300E04u: goto label_80300E04;
    case 0x80300E08u: goto label_80300E08;
    case 0x80300E0Cu: goto label_80300E0C;
    case 0x80300E10u: goto label_80300E10;
    case 0x80300E14u: goto label_80300E14;
    case 0x80300E18u: goto label_80300E18;
    case 0x80300E1Cu: goto label_80300E1C;
    case 0x80300E20u: goto label_80300E20;
    case 0x80300E24u: goto label_80300E24;
    case 0x80300E28u: goto label_80300E28;
    case 0x80300E2Cu: goto label_80300E2C;
    case 0x80300E30u: goto label_80300E30;
    case 0x80300E34u: goto label_80300E34;
    case 0x80300E38u: goto label_80300E38;
    case 0x80300E3Cu: goto label_80300E3C;
    case 0x80300E40u: goto label_80300E40;
    case 0x80300E44u: goto label_80300E44;
    case 0x80300E48u: goto label_80300E48;
    case 0x80300E4Cu: goto label_80300E4C;
    case 0x80300E50u: goto label_80300E50;
    case 0x80300E54u: goto label_80300E54;
    case 0x80300E58u: goto label_80300E58;
    case 0x80300E5Cu: goto label_80300E5C;
    case 0x80300E60u: goto label_80300E60;
    case 0x80300E64u: goto label_80300E64;
    case 0x80300E68u: goto label_80300E68;
    case 0x80300E6Cu: goto label_80300E6C;
    case 0x80300E70u: goto label_80300E70;
    case 0x80300E74u: goto label_80300E74;
    case 0x80300E78u: goto label_80300E78;
    case 0x80300E7Cu: goto label_80300E7C;
    case 0x80300E80u: goto label_80300E80;
    case 0x80300E84u: goto label_80300E84;
    case 0x80300E88u: goto label_80300E88;
    case 0x80300E8Cu: goto label_80300E8C;
    case 0x80300E90u: goto label_80300E90;
    case 0x80300E94u: goto label_80300E94;
    case 0x80300E98u: goto label_80300E98;
    case 0x80300E9Cu: goto label_80300E9C;
    case 0x80300EA0u: goto label_80300EA0;
    case 0x80300EA4u: goto label_80300EA4;
    case 0x80300EA8u: goto label_80300EA8;
    case 0x80300EACu: goto label_80300EAC;
    case 0x80300EB0u: goto label_80300EB0;
    case 0x80300EB4u: goto label_80300EB4;
    case 0x80300EB8u: goto label_80300EB8;
    case 0x80300EBCu: goto label_80300EBC;
    case 0x80300EC0u: goto label_80300EC0;
    case 0x80300EC4u: goto label_80300EC4;
    case 0x80300EC8u: goto label_80300EC8;
    case 0x80300ECCu: goto label_80300ECC;
    case 0x80300ED0u: goto label_80300ED0;
    case 0x80300ED4u: goto label_80300ED4;
    case 0x80300ED8u: goto label_80300ED8;
    case 0x80300EDCu: goto label_80300EDC;
    case 0x80300EE0u: goto label_80300EE0;
    case 0x80300EE4u: goto label_80300EE4;
    case 0x80300EE8u: goto label_80300EE8;
    case 0x80300EECu: goto label_80300EEC;
    case 0x80300EF0u: goto label_80300EF0;
    case 0x80300EF4u: goto label_80300EF4;
    case 0x80300EF8u: goto label_80300EF8;
    case 0x80300EFCu: goto label_80300EFC;
    case 0x80300F00u: goto label_80300F00;
    case 0x80300F04u: goto label_80300F04;
    case 0x80300F08u: goto label_80300F08;
    case 0x80300F0Cu: goto label_80300F0C;
    case 0x80300F10u: goto label_80300F10;
    case 0x80300F14u: goto label_80300F14;
    case 0x80300F18u: goto label_80300F18;
    case 0x80300F1Cu: goto label_80300F1C;
    case 0x80300F20u: goto label_80300F20;
    case 0x80300F24u: goto label_80300F24;
    case 0x80300F28u: goto label_80300F28;
    case 0x80300F2Cu: goto label_80300F2C;
    case 0x80300F30u: goto label_80300F30;
    case 0x80300F34u: goto label_80300F34;
    case 0x80300F38u: goto label_80300F38;
    case 0x80300F3Cu: goto label_80300F3C;
    case 0x80300F40u: goto label_80300F40;
    case 0x80300F44u: goto label_80300F44;
    case 0x80300F48u: goto label_80300F48;
    case 0x80300F4Cu: goto label_80300F4C;
    case 0x80300F50u: goto label_80300F50;
    case 0x80300F54u: goto label_80300F54;
    case 0x80300F58u: goto label_80300F58;
    case 0x80300F5Cu: goto label_80300F5C;
    case 0x80300F60u: goto label_80300F60;
    case 0x80300F64u: goto label_80300F64;
    case 0x80300F68u: goto label_80300F68;
    case 0x80300F6Cu: goto label_80300F6C;
    case 0x80300F70u: goto label_80300F70;
    case 0x80300F74u: goto label_80300F74;
    case 0x80300F78u: goto label_80300F78;
    case 0x80300F7Cu: goto label_80300F7C;
    case 0x80300F80u: goto label_80300F80;
    case 0x80300F84u: goto label_80300F84;
    case 0x80300F88u: goto label_80300F88;
    case 0x80300F8Cu: goto label_80300F8C;
    case 0x80300F90u: goto label_80300F90;
    case 0x80300F94u: goto label_80300F94;
    case 0x80300F98u: goto label_80300F98;
    case 0x80300F9Cu: goto label_80300F9C;
    case 0x80300FA0u: goto label_80300FA0;
    case 0x80300FA4u: goto label_80300FA4;
    case 0x80300FA8u: goto label_80300FA8;
    case 0x80300FACu: goto label_80300FAC;
    case 0x80300FB0u: goto label_80300FB0;
    case 0x80300FB4u: goto label_80300FB4;
    case 0x80300FB8u: goto label_80300FB8;
    case 0x80300FBCu: goto label_80300FBC;
    case 0x80300FC0u: goto label_80300FC0;
    case 0x80300FC4u: goto label_80300FC4;
    case 0x80300FC8u: goto label_80300FC8;
    case 0x80300FCCu: goto label_80300FCC;
    case 0x80300FD0u: goto label_80300FD0;
    case 0x80300FD4u: goto label_80300FD4;
    case 0x80300FD8u: goto label_80300FD8;
    case 0x80300FDCu: goto label_80300FDC;
    case 0x80300FE0u: goto label_80300FE0;
    case 0x80300FE4u: goto label_80300FE4;
    case 0x80300FE8u: goto label_80300FE8;
    case 0x80300FECu: goto label_80300FEC;
    case 0x80300FF0u: goto label_80300FF0;
    case 0x80300FF4u: goto label_80300FF4;
    case 0x80300FF8u: goto label_80300FF8;
    case 0x80300FFCu: goto label_80300FFC;
    case 0x80301000u: goto label_80301000;
    case 0x80301004u: goto label_80301004;
    case 0x80301008u: goto label_80301008;
    case 0x8030100Cu: goto label_8030100C;
    case 0x80301010u: goto label_80301010;
    case 0x80301014u: goto label_80301014;
    case 0x80301018u: goto label_80301018;
    case 0x8030101Cu: goto label_8030101C;
    case 0x80301020u: goto label_80301020;
    case 0x80301024u: goto label_80301024;
    case 0x80301028u: goto label_80301028;
    case 0x8030102Cu: goto label_8030102C;
    case 0x80301030u: goto label_80301030;
    case 0x80301034u: goto label_80301034;
    case 0x80301038u: goto label_80301038;
    case 0x8030103Cu: goto label_8030103C;
    case 0x80301040u: goto label_80301040;
    case 0x80301044u: goto label_80301044;
    case 0x80301048u: goto label_80301048;
    case 0x8030104Cu: goto label_8030104C;
    case 0x80301050u: goto label_80301050;
    case 0x80301054u: goto label_80301054;
    case 0x80301058u: goto label_80301058;
    case 0x8030105Cu: goto label_8030105C;
    case 0x80301060u: goto label_80301060;
    case 0x80301064u: goto label_80301064;
    case 0x80301068u: goto label_80301068;
    case 0x8030106Cu: goto label_8030106C;
    case 0x80301070u: goto label_80301070;
    case 0x80301074u: goto label_80301074;
    case 0x80301078u: goto label_80301078;
    case 0x8030107Cu: goto label_8030107C;
    case 0x80301080u: goto label_80301080;
    case 0x80301084u: goto label_80301084;
    case 0x80301088u: goto label_80301088;
    case 0x8030108Cu: goto label_8030108C;
    case 0x80301090u: goto label_80301090;
    case 0x80301094u: goto label_80301094;
    case 0x80301098u: goto label_80301098;
    case 0x8030109Cu: goto label_8030109C;
    case 0x803010A0u: goto label_803010A0;
    case 0x803010A4u: goto label_803010A4;
    case 0x803010A8u: goto label_803010A8;
    case 0x803010ACu: goto label_803010AC;
    case 0x803010B0u: goto label_803010B0;
    case 0x803010B4u: goto label_803010B4;
    case 0x803010B8u: goto label_803010B8;
    case 0x803010BCu: goto label_803010BC;
    case 0x803010C0u: goto label_803010C0;
    case 0x803010C4u: goto label_803010C4;
    case 0x803010C8u: goto label_803010C8;
    case 0x803010CCu: goto label_803010CC;
    case 0x803010D0u: goto label_803010D0;
    case 0x803010D4u: goto label_803010D4;
    case 0x803010D8u: goto label_803010D8;
    case 0x803010DCu: goto label_803010DC;
    case 0x803010E0u: goto label_803010E0;
    case 0x803010E4u: goto label_803010E4;
    case 0x803010E8u: goto label_803010E8;
    case 0x803010ECu: goto label_803010EC;
    case 0x803010F0u: goto label_803010F0;
    case 0x803010F4u: goto label_803010F4;
    case 0x803010F8u: goto label_803010F8;
    case 0x803010FCu: goto label_803010FC;
    case 0x80301100u: goto label_80301100;
    case 0x80301104u: goto label_80301104;
    case 0x80301108u: goto label_80301108;
    case 0x8030110Cu: goto label_8030110C;
    case 0x80301110u: goto label_80301110;
    case 0x80301114u: goto label_80301114;
    case 0x80301118u: goto label_80301118;
    case 0x8030111Cu: goto label_8030111C;
    case 0x80301120u: goto label_80301120;
    case 0x80301124u: goto label_80301124;
    case 0x80301128u: goto label_80301128;
    case 0x8030112Cu: goto label_8030112C;
    case 0x80301130u: goto label_80301130;
    case 0x80301134u: goto label_80301134;
    case 0x80301138u: goto label_80301138;
    case 0x8030113Cu: goto label_8030113C;
    case 0x80301140u: goto label_80301140;
    case 0x80301144u: goto label_80301144;
    case 0x80301148u: goto label_80301148;
    case 0x8030114Cu: goto label_8030114C;
    case 0x80301150u: goto label_80301150;
    case 0x80301154u: goto label_80301154;
    case 0x80301158u: goto label_80301158;
    case 0x8030115Cu: goto label_8030115C;
    case 0x80301160u: goto label_80301160;
    case 0x80301164u: goto label_80301164;
    case 0x80301168u: goto label_80301168;
    case 0x8030116Cu: goto label_8030116C;
    case 0x80301170u: goto label_80301170;
    case 0x80301174u: goto label_80301174;
    case 0x80301178u: goto label_80301178;
    case 0x8030117Cu: goto label_8030117C;
    case 0x80301180u: goto label_80301180;
    case 0x80301184u: goto label_80301184;
    case 0x80301188u: goto label_80301188;
    case 0x8030118Cu: goto label_8030118C;
    case 0x80301190u: goto label_80301190;
    case 0x80301194u: goto label_80301194;
    case 0x80301198u: goto label_80301198;
    case 0x8030119Cu: goto label_8030119C;
    case 0x803011A0u: goto label_803011A0;
    case 0x803011A4u: goto label_803011A4;
    case 0x803011A8u: goto label_803011A8;
    case 0x803011ACu: goto label_803011AC;
    case 0x803011B0u: goto label_803011B0;
    case 0x803011B4u: goto label_803011B4;
    case 0x803011B8u: goto label_803011B8;
    case 0x803011BCu: goto label_803011BC;
    case 0x803011C0u: goto label_803011C0;
    case 0x803011C4u: goto label_803011C4;
    case 0x803011C8u: goto label_803011C8;
    case 0x803011CCu: goto label_803011CC;
    case 0x803011D0u: goto label_803011D0;
    case 0x803011D4u: goto label_803011D4;
    case 0x803011D8u: goto label_803011D8;
    case 0x803011DCu: goto label_803011DC;
    case 0x803011E0u: goto label_803011E0;
    case 0x803011E4u: goto label_803011E4;
    case 0x803011E8u: goto label_803011E8;
    case 0x803011ECu: goto label_803011EC;
    case 0x803011F0u: goto label_803011F0;
    case 0x803011F4u: goto label_803011F4;
    case 0x803011F8u: goto label_803011F8;
    case 0x803011FCu: goto label_803011FC;
    case 0x80301200u: goto label_80301200;
    case 0x80301204u: goto label_80301204;
    case 0x80301208u: goto label_80301208;
    case 0x8030120Cu: goto label_8030120C;
    case 0x80301210u: goto label_80301210;
    case 0x80301214u: goto label_80301214;
    case 0x80301218u: goto label_80301218;
    case 0x8030121Cu: goto label_8030121C;
    case 0x80301220u: goto label_80301220;
    case 0x80301224u: goto label_80301224;
    case 0x80301228u: goto label_80301228;
    case 0x8030122Cu: goto label_8030122C;
    case 0x80301230u: goto label_80301230;
    case 0x80301234u: goto label_80301234;
    case 0x80301238u: goto label_80301238;
    case 0x8030123Cu: goto label_8030123C;
    case 0x80301240u: goto label_80301240;
    case 0x80301244u: goto label_80301244;
    case 0x80301248u: goto label_80301248;
    case 0x8030124Cu: goto label_8030124C;
    case 0x80301250u: goto label_80301250;
    case 0x80301254u: goto label_80301254;
    case 0x80301258u: goto label_80301258;
    case 0x8030125Cu: goto label_8030125C;
    case 0x80301260u: goto label_80301260;
    case 0x80301264u: goto label_80301264;
    case 0x80301268u: goto label_80301268;
    case 0x8030126Cu: goto label_8030126C;
    case 0x80301270u: goto label_80301270;
    case 0x80301274u: goto label_80301274;
    case 0x80301278u: goto label_80301278;
    case 0x8030127Cu: goto label_8030127C;
    case 0x80301280u: goto label_80301280;
    case 0x80301284u: goto label_80301284;
    case 0x80301288u: goto label_80301288;
    case 0x8030128Cu: goto label_8030128C;
    case 0x80301290u: goto label_80301290;
    case 0x80301294u: goto label_80301294;
    case 0x80301298u: goto label_80301298;
    case 0x8030129Cu: goto label_8030129C;
    case 0x803012A0u: goto label_803012A0;
    case 0x803012A4u: goto label_803012A4;
    case 0x803012A8u: goto label_803012A8;
    case 0x803012ACu: goto label_803012AC;
    case 0x803012B0u: goto label_803012B0;
    case 0x803012B4u: goto label_803012B4;
    case 0x803012B8u: goto label_803012B8;
    case 0x803012BCu: goto label_803012BC;
    case 0x803012C0u: goto label_803012C0;
    case 0x803012C4u: goto label_803012C4;
    case 0x803012C8u: goto label_803012C8;
    case 0x803012CCu: goto label_803012CC;
    case 0x803012D0u: goto label_803012D0;
    case 0x803012D4u: goto label_803012D4;
    case 0x803012D8u: goto label_803012D8;
    case 0x803012DCu: goto label_803012DC;
    case 0x803012E0u: goto label_803012E0;
    case 0x803012E4u: goto label_803012E4;
    case 0x803012E8u: goto label_803012E8;
    case 0x803012ECu: goto label_803012EC;
    case 0x803012F0u: goto label_803012F0;
    case 0x803012F4u: goto label_803012F4;
    case 0x803012F8u: goto label_803012F8;
    case 0x803012FCu: goto label_803012FC;
    case 0x80301300u: goto label_80301300;
    case 0x80301304u: goto label_80301304;
    case 0x80301308u: goto label_80301308;
    case 0x8030130Cu: goto label_8030130C;
    case 0x80301310u: goto label_80301310;
    case 0x80301314u: goto label_80301314;
    case 0x80301318u: goto label_80301318;
    case 0x8030131Cu: goto label_8030131C;
    case 0x80301320u: goto label_80301320;
    case 0x80301324u: goto label_80301324;
    case 0x80301328u: goto label_80301328;
    case 0x8030132Cu: goto label_8030132C;
    case 0x80301330u: goto label_80301330;
    case 0x80301334u: goto label_80301334;
    case 0x80301338u: goto label_80301338;
    case 0x8030133Cu: goto label_8030133C;
    case 0x80301340u: goto label_80301340;
    case 0x80301344u: goto label_80301344;
    case 0x80301348u: goto label_80301348;
    case 0x8030134Cu: goto label_8030134C;
    case 0x80301350u: goto label_80301350;
    case 0x80301354u: goto label_80301354;
    case 0x80301358u: goto label_80301358;
    case 0x8030135Cu: goto label_8030135C;
    case 0x80301360u: goto label_80301360;
    case 0x80301364u: goto label_80301364;
    case 0x80301368u: goto label_80301368;
    case 0x8030136Cu: goto label_8030136C;
    case 0x80301370u: goto label_80301370;
    case 0x80301374u: goto label_80301374;
    case 0x80301378u: goto label_80301378;
    case 0x8030137Cu: goto label_8030137C;
    case 0x80301380u: goto label_80301380;
    case 0x80301384u: goto label_80301384;
    case 0x80301388u: goto label_80301388;
    case 0x8030138Cu: goto label_8030138C;
    case 0x80301390u: goto label_80301390;
    case 0x80301394u: goto label_80301394;
    case 0x80301398u: goto label_80301398;
    case 0x8030139Cu: goto label_8030139C;
    case 0x803013A0u: goto label_803013A0;
    case 0x803013A4u: goto label_803013A4;
    case 0x803013A8u: goto label_803013A8;
    case 0x803013ACu: goto label_803013AC;
    case 0x803013B0u: goto label_803013B0;
    case 0x803013B4u: goto label_803013B4;
    case 0x803013B8u: goto label_803013B8;
    case 0x803013BCu: goto label_803013BC;
    case 0x803013C0u: goto label_803013C0;
    case 0x803013C4u: goto label_803013C4;
    case 0x803013C8u: goto label_803013C8;
    case 0x803013CCu: goto label_803013CC;
    case 0x803013D0u: goto label_803013D0;
    case 0x803013D4u: goto label_803013D4;
    case 0x803013D8u: goto label_803013D8;
    case 0x803013DCu: goto label_803013DC;
    case 0x803013E0u: goto label_803013E0;
    case 0x803013E4u: goto label_803013E4;
    case 0x803013E8u: goto label_803013E8;
    case 0x803013ECu: goto label_803013EC;
    case 0x803013F0u: goto label_803013F0;
    case 0x803013F4u: goto label_803013F4;
    case 0x803013F8u: goto label_803013F8;
    case 0x803013FCu: goto label_803013FC;
    case 0x80301400u: goto label_80301400;
    case 0x80301404u: goto label_80301404;
    case 0x80301408u: goto label_80301408;
    case 0x8030140Cu: goto label_8030140C;
    case 0x80301410u: goto label_80301410;
    case 0x80301414u: goto label_80301414;
    case 0x80301418u: goto label_80301418;
    case 0x8030141Cu: goto label_8030141C;
    case 0x80301420u: goto label_80301420;
    case 0x80301424u: goto label_80301424;
    case 0x80301428u: goto label_80301428;
    case 0x8030142Cu: goto label_8030142C;
    case 0x80301430u: goto label_80301430;
    case 0x80301434u: goto label_80301434;
    case 0x80301438u: goto label_80301438;
    case 0x8030143Cu: goto label_8030143C;
    case 0x80301440u: goto label_80301440;
    case 0x80301444u: goto label_80301444;
    case 0x80301448u: goto label_80301448;
    case 0x8030144Cu: goto label_8030144C;
    case 0x80301450u: goto label_80301450;
    case 0x80301454u: goto label_80301454;
    case 0x80301458u: goto label_80301458;
    case 0x8030145Cu: goto label_8030145C;
    case 0x80301460u: goto label_80301460;
    case 0x80301464u: goto label_80301464;
    case 0x80301468u: goto label_80301468;
    case 0x8030146Cu: goto label_8030146C;
    case 0x80301470u: goto label_80301470;
    case 0x80301474u: goto label_80301474;
    case 0x80301478u: goto label_80301478;
    case 0x8030147Cu: goto label_8030147C;
    case 0x80301480u: goto label_80301480;
    case 0x80301484u: goto label_80301484;
    case 0x80301488u: goto label_80301488;
    case 0x8030148Cu: goto label_8030148C;
    case 0x80301490u: goto label_80301490;
    case 0x80301494u: goto label_80301494;
    case 0x80301498u: goto label_80301498;
    case 0x8030149Cu: goto label_8030149C;
    case 0x803014A0u: goto label_803014A0;
    case 0x803014A4u: goto label_803014A4;
    case 0x803014A8u: goto label_803014A8;
    case 0x803014ACu: goto label_803014AC;
    case 0x803014B0u: goto label_803014B0;
    case 0x803014B4u: goto label_803014B4;
    case 0x803014B8u: goto label_803014B8;
    case 0x803014BCu: goto label_803014BC;
    case 0x803014C0u: goto label_803014C0;
    case 0x803014C4u: goto label_803014C4;
    case 0x803014C8u: goto label_803014C8;
    case 0x803014CCu: goto label_803014CC;
    case 0x803014D0u: goto label_803014D0;
    case 0x803014D4u: goto label_803014D4;
    case 0x803014D8u: goto label_803014D8;
    case 0x803014DCu: goto label_803014DC;
    case 0x803014E0u: goto label_803014E0;
    case 0x803014E4u: goto label_803014E4;
    case 0x803014E8u: goto label_803014E8;
    case 0x803014ECu: goto label_803014EC;
    case 0x803014F0u: goto label_803014F0;
    case 0x803014F4u: goto label_803014F4;
    case 0x803014F8u: goto label_803014F8;
    case 0x803014FCu: goto label_803014FC;
    case 0x80301500u: goto label_80301500;
    case 0x80301504u: goto label_80301504;
    case 0x80301508u: goto label_80301508;
    case 0x8030150Cu: goto label_8030150C;
    case 0x80301510u: goto label_80301510;
    case 0x80301514u: goto label_80301514;
    case 0x80301518u: goto label_80301518;
    case 0x8030151Cu: goto label_8030151C;
    case 0x80301520u: goto label_80301520;
    case 0x80301524u: goto label_80301524;
    case 0x80301528u: goto label_80301528;
    case 0x8030152Cu: goto label_8030152C;
    case 0x80301530u: goto label_80301530;
    case 0x80301534u: goto label_80301534;
    case 0x80301538u: goto label_80301538;
    case 0x8030153Cu: goto label_8030153C;
    case 0x80301540u: goto label_80301540;
    case 0x80301544u: goto label_80301544;
    case 0x80301548u: goto label_80301548;
    case 0x8030154Cu: goto label_8030154C;
    case 0x80301550u: goto label_80301550;
    case 0x80301554u: goto label_80301554;
    case 0x80301558u: goto label_80301558;
    case 0x8030155Cu: goto label_8030155C;
    case 0x80301560u: goto label_80301560;
    case 0x80301564u: goto label_80301564;
    case 0x80301568u: goto label_80301568;
    case 0x8030156Cu: goto label_8030156C;
    case 0x80301570u: goto label_80301570;
    case 0x80301574u: goto label_80301574;
    case 0x80301578u: goto label_80301578;
    case 0x8030157Cu: goto label_8030157C;
    case 0x80301580u: goto label_80301580;
    case 0x80301584u: goto label_80301584;
    case 0x80301588u: goto label_80301588;
    case 0x8030158Cu: goto label_8030158C;
    case 0x80301590u: goto label_80301590;
    case 0x80301594u: goto label_80301594;
    case 0x80301598u: goto label_80301598;
    case 0x8030159Cu: goto label_8030159C;
    case 0x803015A0u: goto label_803015A0;
    case 0x803015A4u: goto label_803015A4;
    case 0x803015A8u: goto label_803015A8;
    case 0x803015ACu: goto label_803015AC;
    case 0x803015B0u: goto label_803015B0;
    case 0x803015B4u: goto label_803015B4;
    case 0x803015B8u: goto label_803015B8;
    case 0x803015BCu: goto label_803015BC;
    case 0x803015C0u: goto label_803015C0;
    case 0x803015C4u: goto label_803015C4;
    case 0x803015C8u: goto label_803015C8;
    case 0x803015CCu: goto label_803015CC;
    case 0x803015D0u: goto label_803015D0;
    case 0x803015D4u: goto label_803015D4;
    case 0x803015D8u: goto label_803015D8;
    case 0x803015DCu: goto label_803015DC;
    case 0x803015E0u: goto label_803015E0;
    case 0x803015E4u: goto label_803015E4;
    case 0x803015E8u: goto label_803015E8;
    case 0x803015ECu: goto label_803015EC;
    case 0x803015F0u: goto label_803015F0;
    case 0x803015F4u: goto label_803015F4;
    case 0x803015F8u: goto label_803015F8;
    case 0x803015FCu: goto label_803015FC;
    case 0x80301600u: goto label_80301600;
    case 0x80301604u: goto label_80301604;
    case 0x80301608u: goto label_80301608;
    case 0x8030160Cu: goto label_8030160C;
    case 0x80301610u: goto label_80301610;
    case 0x80301614u: goto label_80301614;
    case 0x80301618u: goto label_80301618;
    case 0x8030161Cu: goto label_8030161C;
    case 0x80301620u: goto label_80301620;
    case 0x80301624u: goto label_80301624;
    case 0x80301628u: goto label_80301628;
    case 0x8030162Cu: goto label_8030162C;
    case 0x80301630u: goto label_80301630;
    case 0x80301634u: goto label_80301634;
    case 0x80301638u: goto label_80301638;
    case 0x8030163Cu: goto label_8030163C;
    case 0x80301640u: goto label_80301640;
    case 0x80301644u: goto label_80301644;
    case 0x80301648u: goto label_80301648;
    case 0x8030164Cu: goto label_8030164C;
    case 0x80301650u: goto label_80301650;
    case 0x80301654u: goto label_80301654;
    case 0x80301658u: goto label_80301658;
    case 0x8030165Cu: goto label_8030165C;
    case 0x80301660u: goto label_80301660;
    case 0x80301664u: goto label_80301664;
    case 0x80301668u: goto label_80301668;
    case 0x8030166Cu: goto label_8030166C;
    case 0x80301670u: goto label_80301670;
    case 0x80301674u: goto label_80301674;
    case 0x80301678u: goto label_80301678;
    case 0x8030167Cu: goto label_8030167C;
    case 0x80301680u: goto label_80301680;
    case 0x80301684u: goto label_80301684;
    case 0x80301688u: goto label_80301688;
    case 0x8030168Cu: goto label_8030168C;
    case 0x80301690u: goto label_80301690;
    case 0x80301694u: goto label_80301694;
    case 0x80301698u: goto label_80301698;
    case 0x8030169Cu: goto label_8030169C;
    case 0x803016A0u: goto label_803016A0;
    case 0x803016A4u: goto label_803016A4;
    case 0x803016A8u: goto label_803016A8;
    case 0x803016ACu: goto label_803016AC;
    case 0x803016B0u: goto label_803016B0;
    case 0x803016B4u: goto label_803016B4;
    case 0x803016B8u: goto label_803016B8;
    case 0x803016BCu: goto label_803016BC;
    case 0x803016C0u: goto label_803016C0;
    case 0x803016C4u: goto label_803016C4;
    case 0x803016C8u: goto label_803016C8;
    case 0x803016CCu: goto label_803016CC;
    case 0x803016D0u: goto label_803016D0;
    case 0x803016D4u: goto label_803016D4;
    case 0x803016D8u: goto label_803016D8;
    case 0x803016DCu: goto label_803016DC;
    case 0x803016E0u: goto label_803016E0;
    case 0x803016E4u: goto label_803016E4;
    case 0x803016E8u: goto label_803016E8;
    case 0x803016ECu: goto label_803016EC;
    case 0x803016F0u: goto label_803016F0;
    case 0x803016F4u: goto label_803016F4;
    case 0x803016F8u: goto label_803016F8;
    case 0x803016FCu: goto label_803016FC;
    case 0x80301700u: goto label_80301700;
    case 0x80301704u: goto label_80301704;
    case 0x80301708u: goto label_80301708;
    case 0x8030170Cu: goto label_8030170C;
    case 0x80301710u: goto label_80301710;
    case 0x80301714u: goto label_80301714;
    case 0x80301718u: goto label_80301718;
    case 0x8030171Cu: goto label_8030171C;
    case 0x80301720u: goto label_80301720;
    case 0x80301724u: goto label_80301724;
    case 0x80301728u: goto label_80301728;
    case 0x8030172Cu: goto label_8030172C;
    case 0x80301730u: goto label_80301730;
    case 0x80301734u: goto label_80301734;
    case 0x80301738u: goto label_80301738;
    case 0x8030173Cu: goto label_8030173C;
    case 0x80301740u: goto label_80301740;
    case 0x80301744u: goto label_80301744;
    case 0x80301748u: goto label_80301748;
    case 0x8030174Cu: goto label_8030174C;
    case 0x80301750u: goto label_80301750;
    case 0x80301754u: goto label_80301754;
    case 0x80301758u: goto label_80301758;
    case 0x8030175Cu: goto label_8030175C;
    case 0x80301760u: goto label_80301760;
    case 0x80301764u: goto label_80301764;
    case 0x80301768u: goto label_80301768;
    case 0x8030176Cu: goto label_8030176C;
    case 0x80301770u: goto label_80301770;
    case 0x80301774u: goto label_80301774;
    case 0x80301778u: goto label_80301778;
    case 0x8030177Cu: goto label_8030177C;
    case 0x80301780u: goto label_80301780;
    case 0x80301784u: goto label_80301784;
    case 0x80301788u: goto label_80301788;
    case 0x8030178Cu: goto label_8030178C;
    case 0x80301790u: goto label_80301790;
    case 0x80301794u: goto label_80301794;
    case 0x80301798u: goto label_80301798;
    case 0x8030179Cu: goto label_8030179C;
    case 0x803017A0u: goto label_803017A0;
    case 0x803017A4u: goto label_803017A4;
    case 0x803017A8u: goto label_803017A8;
    case 0x803017ACu: goto label_803017AC;
    case 0x803017B0u: goto label_803017B0;
    case 0x803017B4u: goto label_803017B4;
    case 0x803017B8u: goto label_803017B8;
    case 0x803017BCu: goto label_803017BC;
    case 0x803017C0u: goto label_803017C0;
    case 0x803017C4u: goto label_803017C4;
    case 0x803017C8u: goto label_803017C8;
    case 0x803017CCu: goto label_803017CC;
    case 0x803017D0u: goto label_803017D0;
    case 0x803017D4u: goto label_803017D4;
    case 0x803017D8u: goto label_803017D8;
    case 0x803017DCu: goto label_803017DC;
    case 0x803017E0u: goto label_803017E0;
    case 0x803017E4u: goto label_803017E4;
    case 0x803017E8u: goto label_803017E8;
    case 0x803017ECu: goto label_803017EC;
    case 0x803017F0u: goto label_803017F0;
    case 0x803017F4u: goto label_803017F4;
    case 0x803017F8u: goto label_803017F8;
    case 0x803017FCu: goto label_803017FC;
    case 0x80301800u: goto label_80301800;
    case 0x80301804u: goto label_80301804;
    case 0x80301808u: goto label_80301808;
    case 0x8030180Cu: goto label_8030180C;
    case 0x80301810u: goto label_80301810;
    case 0x80301814u: goto label_80301814;
    case 0x80301818u: goto label_80301818;
    case 0x8030181Cu: goto label_8030181C;
    case 0x80301820u: goto label_80301820;
    case 0x80301824u: goto label_80301824;
    case 0x80301828u: goto label_80301828;
    case 0x8030182Cu: goto label_8030182C;
    case 0x80301830u: goto label_80301830;
    case 0x80301834u: goto label_80301834;
    case 0x80301838u: goto label_80301838;
    case 0x8030183Cu: goto label_8030183C;
    case 0x80301840u: goto label_80301840;
    case 0x80301844u: goto label_80301844;
    case 0x80301848u: goto label_80301848;
    case 0x8030184Cu: goto label_8030184C;
    case 0x80301850u: goto label_80301850;
    case 0x80301854u: goto label_80301854;
    case 0x80301858u: goto label_80301858;
    case 0x8030185Cu: goto label_8030185C;
    case 0x80301860u: goto label_80301860;
    case 0x80301864u: goto label_80301864;
    case 0x80301868u: goto label_80301868;
    case 0x8030186Cu: goto label_8030186C;
    case 0x80301870u: goto label_80301870;
    case 0x80301874u: goto label_80301874;
    case 0x80301878u: goto label_80301878;
    case 0x8030187Cu: goto label_8030187C;
    case 0x80301880u: goto label_80301880;
    case 0x80301884u: goto label_80301884;
    case 0x80301888u: goto label_80301888;
    case 0x8030188Cu: goto label_8030188C;
    case 0x80301890u: goto label_80301890;
    case 0x80301894u: goto label_80301894;
    case 0x80301898u: goto label_80301898;
    case 0x8030189Cu: goto label_8030189C;
    case 0x803018A0u: goto label_803018A0;
    case 0x803018A4u: goto label_803018A4;
    case 0x803018A8u: goto label_803018A8;
    case 0x803018ACu: goto label_803018AC;
    case 0x803018B0u: goto label_803018B0;
    case 0x803018B4u: goto label_803018B4;
    case 0x803018B8u: goto label_803018B8;
    case 0x803018BCu: goto label_803018BC;
    case 0x803018C0u: goto label_803018C0;
    case 0x803018C4u: goto label_803018C4;
    case 0x803018C8u: goto label_803018C8;
    case 0x803018CCu: goto label_803018CC;
    case 0x803018D0u: goto label_803018D0;
    case 0x803018D4u: goto label_803018D4;
    case 0x803018D8u: goto label_803018D8;
    case 0x803018DCu: goto label_803018DC;
    case 0x803018E0u: goto label_803018E0;
    case 0x803018E4u: goto label_803018E4;
    case 0x803018E8u: goto label_803018E8;
    case 0x803018ECu: goto label_803018EC;
    case 0x803018F0u: goto label_803018F0;
    case 0x803018F4u: goto label_803018F4;
    case 0x803018F8u: goto label_803018F8;
    case 0x803018FCu: goto label_803018FC;
    case 0x80301900u: goto label_80301900;
    case 0x80301904u: goto label_80301904;
    case 0x80301908u: goto label_80301908;
    case 0x8030190Cu: goto label_8030190C;
    case 0x80301910u: goto label_80301910;
    case 0x80301914u: goto label_80301914;
    case 0x80301918u: goto label_80301918;
    case 0x8030191Cu: goto label_8030191C;
    case 0x80301920u: goto label_80301920;
    case 0x80301924u: goto label_80301924;
    case 0x80301928u: goto label_80301928;
    case 0x8030192Cu: goto label_8030192C;
    case 0x80301930u: goto label_80301930;
    case 0x80301934u: goto label_80301934;
    case 0x80301938u: goto label_80301938;
    case 0x8030193Cu: goto label_8030193C;
    case 0x80301940u: goto label_80301940;
    case 0x80301944u: goto label_80301944;
    case 0x80301948u: goto label_80301948;
    case 0x8030194Cu: goto label_8030194C;
    case 0x80301950u: goto label_80301950;
    case 0x80301954u: goto label_80301954;
    case 0x80301958u: goto label_80301958;
    case 0x8030195Cu: goto label_8030195C;
    case 0x80301960u: goto label_80301960;
    case 0x80301964u: goto label_80301964;
    case 0x80301968u: goto label_80301968;
    case 0x8030196Cu: goto label_8030196C;
    case 0x80301970u: goto label_80301970;
    case 0x80301974u: goto label_80301974;
    case 0x80301978u: goto label_80301978;
    case 0x8030197Cu: goto label_8030197C;
    case 0x80301980u: goto label_80301980;
    case 0x80301984u: goto label_80301984;
    case 0x80301988u: goto label_80301988;
    case 0x8030198Cu: goto label_8030198C;
    case 0x80301990u: goto label_80301990;
    case 0x80301994u: goto label_80301994;
    case 0x80301998u: goto label_80301998;
    case 0x8030199Cu: goto label_8030199C;
    case 0x803019A0u: goto label_803019A0;
    case 0x803019A4u: goto label_803019A4;
    case 0x803019A8u: goto label_803019A8;
    case 0x803019ACu: goto label_803019AC;
    case 0x803019B0u: goto label_803019B0;
    case 0x803019B4u: goto label_803019B4;
    case 0x803019B8u: goto label_803019B8;
    case 0x803019BCu: goto label_803019BC;
    case 0x803019C0u: goto label_803019C0;
    case 0x803019C4u: goto label_803019C4;
    case 0x803019C8u: goto label_803019C8;
    case 0x803019CCu: goto label_803019CC;
    case 0x803019D0u: goto label_803019D0;
    case 0x803019D4u: goto label_803019D4;
    case 0x803019D8u: goto label_803019D8;
    case 0x803019DCu: goto label_803019DC;
    case 0x803019E0u: goto label_803019E0;
    case 0x803019E4u: goto label_803019E4;
    case 0x803019E8u: goto label_803019E8;
    case 0x803019ECu: goto label_803019EC;
    case 0x803019F0u: goto label_803019F0;
    case 0x803019F4u: goto label_803019F4;
    case 0x803019F8u: goto label_803019F8;
    case 0x803019FCu: goto label_803019FC;
    case 0x80301A00u: goto label_80301A00;
    case 0x80301A04u: goto label_80301A04;
    case 0x80301A08u: goto label_80301A08;
    case 0x80301A0Cu: goto label_80301A0C;
    case 0x80301A10u: goto label_80301A10;
    case 0x80301A14u: goto label_80301A14;
    case 0x80301A18u: goto label_80301A18;
    case 0x80301A1Cu: goto label_80301A1C;
    case 0x80301A20u: goto label_80301A20;
    case 0x80301A24u: goto label_80301A24;
    case 0x80301A28u: goto label_80301A28;
    case 0x80301A2Cu: goto label_80301A2C;
    case 0x80301A30u: goto label_80301A30;
    case 0x80301A34u: goto label_80301A34;
    case 0x80301A38u: goto label_80301A38;
    case 0x80301A3Cu: goto label_80301A3C;
    case 0x80301A40u: goto label_80301A40;
    case 0x80301A44u: goto label_80301A44;
    case 0x80301A48u: goto label_80301A48;
    case 0x80301A4Cu: goto label_80301A4C;
    case 0x80301A50u: goto label_80301A50;
    case 0x80301A54u: goto label_80301A54;
    case 0x80301A58u: goto label_80301A58;
    case 0x80301A5Cu: goto label_80301A5C;
    case 0x80301A60u: goto label_80301A60;
    case 0x80301A64u: goto label_80301A64;
    case 0x80301A68u: goto label_80301A68;
    case 0x80301A6Cu: goto label_80301A6C;
    case 0x80301A70u: goto label_80301A70;
    case 0x80301A74u: goto label_80301A74;
    case 0x80301A78u: goto label_80301A78;
    case 0x80301A7Cu: goto label_80301A7C;
    case 0x80301A80u: goto label_80301A80;
    case 0x80301A84u: goto label_80301A84;
    case 0x80301A88u: goto label_80301A88;
    case 0x80301A8Cu: goto label_80301A8C;
    case 0x80301A90u: goto label_80301A90;
    case 0x80301A94u: goto label_80301A94;
    case 0x80301A98u: goto label_80301A98;
    case 0x80301A9Cu: goto label_80301A9C;
    case 0x80301AA0u: goto label_80301AA0;
    case 0x80301AA4u: goto label_80301AA4;
    case 0x80301AA8u: goto label_80301AA8;
    case 0x80301AACu: goto label_80301AAC;
    case 0x80301AB0u: goto label_80301AB0;
    case 0x80301AB4u: goto label_80301AB4;
    case 0x80301AB8u: goto label_80301AB8;
    case 0x80301ABCu: goto label_80301ABC;
    case 0x80301AC0u: goto label_80301AC0;
    case 0x80301AC4u: goto label_80301AC4;
    case 0x80301AC8u: goto label_80301AC8;
    case 0x80301ACCu: goto label_80301ACC;
    case 0x80301AD0u: goto label_80301AD0;
    case 0x80301AD4u: goto label_80301AD4;
    case 0x80301AD8u: goto label_80301AD8;
    case 0x80301ADCu: goto label_80301ADC;
    case 0x80301AE0u: goto label_80301AE0;
    case 0x80301AE4u: goto label_80301AE4;
    case 0x80301AE8u: goto label_80301AE8;
    case 0x80301AECu: goto label_80301AEC;
    case 0x80301AF0u: goto label_80301AF0;
    case 0x80301AF4u: goto label_80301AF4;
    case 0x80301AF8u: goto label_80301AF8;
    case 0x80301AFCu: goto label_80301AFC;
    case 0x80301B00u: goto label_80301B00;
    case 0x80301B04u: goto label_80301B04;
    case 0x80301B08u: goto label_80301B08;
    case 0x80301B0Cu: goto label_80301B0C;
    case 0x80301B10u: goto label_80301B10;
    case 0x80301B14u: goto label_80301B14;
    case 0x80301B18u: goto label_80301B18;
    case 0x80301B1Cu: goto label_80301B1C;
    case 0x80301B20u: goto label_80301B20;
    case 0x80301B24u: goto label_80301B24;
    case 0x80301B28u: goto label_80301B28;
    case 0x80301B2Cu: goto label_80301B2C;
    case 0x80301B30u: goto label_80301B30;
    case 0x80301B34u: goto label_80301B34;
    case 0x80301B38u: goto label_80301B38;
    case 0x80301B3Cu: goto label_80301B3C;
    case 0x80301B40u: goto label_80301B40;
    case 0x80301B44u: goto label_80301B44;
    case 0x80301B48u: goto label_80301B48;
    case 0x80301B4Cu: goto label_80301B4C;
    case 0x80301B50u: goto label_80301B50;
    case 0x80301B54u: goto label_80301B54;
    case 0x80301B58u: goto label_80301B58;
    case 0x80301B5Cu: goto label_80301B5C;
    case 0x80301B60u: goto label_80301B60;
    case 0x80301B64u: goto label_80301B64;
    case 0x80301B68u: goto label_80301B68;
    case 0x80301B6Cu: goto label_80301B6C;
    case 0x80301B70u: goto label_80301B70;
    case 0x80301B74u: goto label_80301B74;
    case 0x80301B78u: goto label_80301B78;
    case 0x80301B7Cu: goto label_80301B7C;
    case 0x80301B80u: goto label_80301B80;
    case 0x80301B84u: goto label_80301B84;
    case 0x80301B88u: goto label_80301B88;
    case 0x80301B8Cu: goto label_80301B8C;
    case 0x80301B90u: goto label_80301B90;
    case 0x80301B94u: goto label_80301B94;
    case 0x80301B98u: goto label_80301B98;
    case 0x80301B9Cu: goto label_80301B9C;
    case 0x80301BA0u: goto label_80301BA0;
    case 0x80301BA4u: goto label_80301BA4;
    case 0x80301BA8u: goto label_80301BA8;
    case 0x80301BACu: goto label_80301BAC;
    case 0x80301BB0u: goto label_80301BB0;
    case 0x80301BB4u: goto label_80301BB4;
    case 0x80301BB8u: goto label_80301BB8;
    case 0x80301BBCu: goto label_80301BBC;
    case 0x80301BC0u: goto label_80301BC0;
    case 0x80301BC4u: goto label_80301BC4;
    case 0x80301BC8u: goto label_80301BC8;
    case 0x80301BCCu: goto label_80301BCC;
    case 0x80301BD0u: goto label_80301BD0;
    case 0x80301BD4u: goto label_80301BD4;
    case 0x80301BD8u: goto label_80301BD8;
    case 0x80301BDCu: goto label_80301BDC;
    case 0x80301BE0u: goto label_80301BE0;
    case 0x80301BE4u: goto label_80301BE4;
    case 0x80301BE8u: goto label_80301BE8;
    case 0x80301BECu: goto label_80301BEC;
    case 0x80301BF0u: goto label_80301BF0;
    case 0x80301BF4u: goto label_80301BF4;
    case 0x80301BF8u: goto label_80301BF8;
    case 0x80301BFCu: goto label_80301BFC;
    case 0x80301C00u: goto label_80301C00;
    case 0x80301C04u: goto label_80301C04;
    case 0x80301C08u: goto label_80301C08;
    case 0x80301C0Cu: goto label_80301C0C;
    case 0x80301C10u: goto label_80301C10;
    case 0x80301C14u: goto label_80301C14;
    case 0x80301C18u: goto label_80301C18;
    case 0x80301C1Cu: goto label_80301C1C;
    case 0x80301C20u: goto label_80301C20;
    case 0x80301C24u: goto label_80301C24;
    case 0x80301C28u: goto label_80301C28;
    case 0x80301C2Cu: goto label_80301C2C;
    case 0x80301C30u: goto label_80301C30;
    case 0x80301C34u: goto label_80301C34;
    case 0x80301C38u: goto label_80301C38;
    case 0x80301C3Cu: goto label_80301C3C;
    case 0x80301C40u: goto label_80301C40;
    case 0x80301C44u: goto label_80301C44;
    case 0x80301C48u: goto label_80301C48;
    case 0x80301C4Cu: goto label_80301C4C;
    case 0x80301C50u: goto label_80301C50;
    case 0x80301C54u: goto label_80301C54;
    case 0x80301C58u: goto label_80301C58;
    case 0x80301C5Cu: goto label_80301C5C;
    case 0x80301C60u: goto label_80301C60;
    case 0x80301C64u: goto label_80301C64;
    case 0x80301C68u: goto label_80301C68;
    case 0x80301C6Cu: goto label_80301C6C;
    case 0x80301C70u: goto label_80301C70;
    case 0x80301C74u: goto label_80301C74;
    case 0x80301C78u: goto label_80301C78;
    case 0x80301C7Cu: goto label_80301C7C;
    case 0x80301C80u: goto label_80301C80;
    case 0x80301C84u: goto label_80301C84;
    case 0x80301C88u: goto label_80301C88;
    case 0x80301C8Cu: goto label_80301C8C;
    case 0x80301C90u: goto label_80301C90;
    case 0x80301C94u: goto label_80301C94;
    case 0x80301C98u: goto label_80301C98;
    case 0x80301C9Cu: goto label_80301C9C;
    case 0x80301CA0u: goto label_80301CA0;
    case 0x80301CA4u: goto label_80301CA4;
    case 0x80301CA8u: goto label_80301CA8;
    case 0x80301CACu: goto label_80301CAC;
    case 0x80301CB0u: goto label_80301CB0;
    case 0x80301CB4u: goto label_80301CB4;
    case 0x80301CB8u: goto label_80301CB8;
    case 0x80301CBCu: goto label_80301CBC;
    case 0x80301CC0u: goto label_80301CC0;
    case 0x80301CC4u: goto label_80301CC4;
    case 0x80301CC8u: goto label_80301CC8;
    case 0x80301CCCu: goto label_80301CCC;
    case 0x80301CD0u: goto label_80301CD0;
    case 0x80301CD4u: goto label_80301CD4;
    case 0x80301CD8u: goto label_80301CD8;
    case 0x80301CDCu: goto label_80301CDC;
    case 0x80301CE0u: goto label_80301CE0;
    case 0x80301CE4u: goto label_80301CE4;
    case 0x80301CE8u: goto label_80301CE8;
    case 0x80301CECu: goto label_80301CEC;
    case 0x80301CF0u: goto label_80301CF0;
    case 0x80301CF4u: goto label_80301CF4;
    case 0x80301CF8u: goto label_80301CF8;
    case 0x80301CFCu: goto label_80301CFC;
    case 0x80301D00u: goto label_80301D00;
    case 0x80301D04u: goto label_80301D04;
    case 0x80301D08u: goto label_80301D08;
    case 0x80301D0Cu: goto label_80301D0C;
    case 0x80301D10u: goto label_80301D10;
    case 0x80301D14u: goto label_80301D14;
    case 0x80301D18u: goto label_80301D18;
    case 0x80301D1Cu: goto label_80301D1C;
    case 0x80301D20u: goto label_80301D20;
    case 0x80301D24u: goto label_80301D24;
    case 0x80301D28u: goto label_80301D28;
    case 0x80301D2Cu: goto label_80301D2C;
    case 0x80301D30u: goto label_80301D30;
    case 0x80301D34u: goto label_80301D34;
    case 0x80301D38u: goto label_80301D38;
    case 0x80301D3Cu: goto label_80301D3C;
    case 0x80301D40u: goto label_80301D40;
    case 0x80301D44u: goto label_80301D44;
    case 0x80301D48u: goto label_80301D48;
    case 0x80301D4Cu: goto label_80301D4C;
    case 0x80301D50u: goto label_80301D50;
    case 0x80301D54u: goto label_80301D54;
    case 0x80301D58u: goto label_80301D58;
    case 0x80301D5Cu: goto label_80301D5C;
    case 0x80301D60u: goto label_80301D60;
    case 0x80301D64u: goto label_80301D64;
    case 0x80301D68u: goto label_80301D68;
    case 0x80301D6Cu: goto label_80301D6C;
    case 0x80301D70u: goto label_80301D70;
    case 0x80301D74u: goto label_80301D74;
    case 0x80301D78u: goto label_80301D78;
    case 0x80301D7Cu: goto label_80301D7C;
    case 0x80301D80u: goto label_80301D80;
    case 0x80301D84u: goto label_80301D84;
    case 0x80301D88u: goto label_80301D88;
    case 0x80301D8Cu: goto label_80301D8C;
    case 0x80301D90u: goto label_80301D90;
    case 0x80301D94u: goto label_80301D94;
    case 0x80301D98u: goto label_80301D98;
    case 0x80301D9Cu: goto label_80301D9C;
    case 0x80301DA0u: goto label_80301DA0;
    case 0x80301DA4u: goto label_80301DA4;
    case 0x80301DA8u: goto label_80301DA8;
    case 0x80301DACu: goto label_80301DAC;
    case 0x80301DB0u: goto label_80301DB0;
    case 0x80301DB4u: goto label_80301DB4;
    case 0x80301DB8u: goto label_80301DB8;
    case 0x80301DBCu: goto label_80301DBC;
    case 0x80301DC0u: goto label_80301DC0;
    case 0x80301DC4u: goto label_80301DC4;
    case 0x80301DC8u: goto label_80301DC8;
    case 0x80301DCCu: goto label_80301DCC;
    case 0x80301DD0u: goto label_80301DD0;
    case 0x80301DD4u: goto label_80301DD4;
    case 0x80301DD8u: goto label_80301DD8;
    case 0x80301DDCu: goto label_80301DDC;
    case 0x80301DE0u: goto label_80301DE0;
    case 0x80301DE4u: goto label_80301DE4;
    case 0x80301DE8u: goto label_80301DE8;
    case 0x80301DECu: goto label_80301DEC;
    case 0x80301DF0u: goto label_80301DF0;
    case 0x80301DF4u: goto label_80301DF4;
    case 0x80301DF8u: goto label_80301DF8;
    case 0x80301DFCu: goto label_80301DFC;
    case 0x80301E00u: goto label_80301E00;
    case 0x80301E04u: goto label_80301E04;
    case 0x80301E08u: goto label_80301E08;
    case 0x80301E0Cu: goto label_80301E0C;
    case 0x80301E10u: goto label_80301E10;
    case 0x80301E14u: goto label_80301E14;
    case 0x80301E18u: goto label_80301E18;
    case 0x80301E1Cu: goto label_80301E1C;
    case 0x80301E20u: goto label_80301E20;
    case 0x80301E24u: goto label_80301E24;
    case 0x80301E28u: goto label_80301E28;
    case 0x80301E2Cu: goto label_80301E2C;
    case 0x80301E30u: goto label_80301E30;
    case 0x80301E34u: goto label_80301E34;
    case 0x80301E38u: goto label_80301E38;
    case 0x80301E3Cu: goto label_80301E3C;
    case 0x80301E40u: goto label_80301E40;
    case 0x80301E44u: goto label_80301E44;
    case 0x80301E48u: goto label_80301E48;
    case 0x80301E4Cu: goto label_80301E4C;
    case 0x80301E50u: goto label_80301E50;
    case 0x80301E54u: goto label_80301E54;
    case 0x80301E58u: goto label_80301E58;
    case 0x80301E5Cu: goto label_80301E5C;
    case 0x80301E60u: goto label_80301E60;
    case 0x80301E64u: goto label_80301E64;
    case 0x80301E68u: goto label_80301E68;
    case 0x80301E6Cu: goto label_80301E6C;
    case 0x80301E70u: goto label_80301E70;
    case 0x80301E74u: goto label_80301E74;
    case 0x80301E78u: goto label_80301E78;
    case 0x80301E7Cu: goto label_80301E7C;
    case 0x80301E80u: goto label_80301E80;
    case 0x80301E84u: goto label_80301E84;
    case 0x80301E88u: goto label_80301E88;
    case 0x80301E8Cu: goto label_80301E8C;
    case 0x80301E90u: goto label_80301E90;
    case 0x80301E94u: goto label_80301E94;
    case 0x80301E98u: goto label_80301E98;
    case 0x80301E9Cu: goto label_80301E9C;
    case 0x80301EA0u: goto label_80301EA0;
    case 0x80301EA4u: goto label_80301EA4;
    case 0x80301EA8u: goto label_80301EA8;
    case 0x80301EACu: goto label_80301EAC;
    case 0x80301EB0u: goto label_80301EB0;
    case 0x80301EB4u: goto label_80301EB4;
    case 0x80301EB8u: goto label_80301EB8;
    case 0x80301EBCu: goto label_80301EBC;
    case 0x80301EC0u: goto label_80301EC0;
    case 0x80301EC4u: goto label_80301EC4;
    case 0x80301EC8u: goto label_80301EC8;
    case 0x80301ECCu: goto label_80301ECC;
    case 0x80301ED0u: goto label_80301ED0;
    case 0x80301ED4u: goto label_80301ED4;
    case 0x80301ED8u: goto label_80301ED8;
    case 0x80301EDCu: goto label_80301EDC;
    case 0x80301EE0u: goto label_80301EE0;
    case 0x80301EE4u: goto label_80301EE4;
    case 0x80301EE8u: goto label_80301EE8;
    case 0x80301EECu: goto label_80301EEC;
    case 0x80301EF0u: goto label_80301EF0;
    case 0x80301EF4u: goto label_80301EF4;
    case 0x80301EF8u: goto label_80301EF8;
    case 0x80301EFCu: goto label_80301EFC;
    case 0x80301F00u: goto label_80301F00;
    case 0x80301F04u: goto label_80301F04;
    case 0x80301F08u: goto label_80301F08;
    case 0x80301F0Cu: goto label_80301F0C;
    case 0x80301F10u: goto label_80301F10;
    case 0x80301F14u: goto label_80301F14;
    case 0x80301F18u: goto label_80301F18;
    case 0x80301F1Cu: goto label_80301F1C;
    case 0x80301F20u: goto label_80301F20;
    case 0x80301F24u: goto label_80301F24;
    case 0x80301F28u: goto label_80301F28;
    case 0x80301F2Cu: goto label_80301F2C;
    case 0x80301F30u: goto label_80301F30;
    case 0x80301F34u: goto label_80301F34;
    case 0x80301F38u: goto label_80301F38;
    case 0x80301F3Cu: goto label_80301F3C;
    case 0x80301F40u: goto label_80301F40;
    case 0x80301F44u: goto label_80301F44;
    case 0x80301F48u: goto label_80301F48;
    case 0x80301F4Cu: goto label_80301F4C;
    case 0x80301F50u: goto label_80301F50;
    case 0x80301F54u: goto label_80301F54;
    case 0x80301F58u: goto label_80301F58;
    case 0x80301F5Cu: goto label_80301F5C;
    case 0x80301F60u: goto label_80301F60;
    case 0x80301F64u: goto label_80301F64;
    case 0x80301F68u: goto label_80301F68;
    case 0x80301F6Cu: goto label_80301F6C;
    case 0x80301F70u: goto label_80301F70;
    case 0x80301F74u: goto label_80301F74;
    case 0x80301F78u: goto label_80301F78;
    case 0x80301F7Cu: goto label_80301F7C;
    case 0x80301F80u: goto label_80301F80;
    case 0x80301F84u: goto label_80301F84;
    case 0x80301F88u: goto label_80301F88;
    case 0x80301F8Cu: goto label_80301F8C;
    case 0x80301F90u: goto label_80301F90;
    case 0x80301F94u: goto label_80301F94;
    case 0x80301F98u: goto label_80301F98;
    case 0x80301F9Cu: goto label_80301F9C;
    case 0x80301FA0u: goto label_80301FA0;
    case 0x80301FA4u: goto label_80301FA4;
    case 0x80301FA8u: goto label_80301FA8;
    case 0x80301FACu: goto label_80301FAC;
    case 0x80301FB0u: goto label_80301FB0;
    case 0x80301FB4u: goto label_80301FB4;
    case 0x80301FB8u: goto label_80301FB8;
    case 0x80301FBCu: goto label_80301FBC;
    case 0x80301FC0u: goto label_80301FC0;
    case 0x80301FC4u: goto label_80301FC4;
    case 0x80301FC8u: goto label_80301FC8;
    case 0x80301FCCu: goto label_80301FCC;
    case 0x80301FD0u: goto label_80301FD0;
    case 0x80301FD4u: goto label_80301FD4;
    case 0x80301FD8u: goto label_80301FD8;
    case 0x80301FDCu: goto label_80301FDC;
    case 0x80301FE0u: goto label_80301FE0;
    case 0x80301FE4u: goto label_80301FE4;
    case 0x80301FE8u: goto label_80301FE8;
    case 0x80301FECu: goto label_80301FEC;
    case 0x80301FF0u: goto label_80301FF0;
    case 0x80301FF4u: goto label_80301FF4;
    case 0x80301FF8u: goto label_80301FF8;
    case 0x80301FFCu: goto label_80301FFC;
    case 0x80302000u: goto label_80302000;
    case 0x80302004u: goto label_80302004;
    case 0x80302008u: goto label_80302008;
    case 0x8030200Cu: goto label_8030200C;
    case 0x80302010u: goto label_80302010;
    case 0x80302014u: goto label_80302014;
    case 0x80302018u: goto label_80302018;
    case 0x8030201Cu: goto label_8030201C;
    case 0x80302020u: goto label_80302020;
    case 0x80302024u: goto label_80302024;
    case 0x80302028u: goto label_80302028;
    case 0x8030202Cu: goto label_8030202C;
    case 0x80302030u: goto label_80302030;
    case 0x80302034u: goto label_80302034;
    case 0x80302038u: goto label_80302038;
    case 0x8030203Cu: goto label_8030203C;
    case 0x80302040u: goto label_80302040;
    case 0x80302044u: goto label_80302044;
    case 0x80302048u: goto label_80302048;
    case 0x8030204Cu: goto label_8030204C;
    case 0x80302050u: goto label_80302050;
    case 0x80302054u: goto label_80302054;
    case 0x80302058u: goto label_80302058;
    case 0x8030205Cu: goto label_8030205C;
    case 0x80302060u: goto label_80302060;
    case 0x80302064u: goto label_80302064;
    case 0x80302068u: goto label_80302068;
    case 0x8030206Cu: goto label_8030206C;
    case 0x80302070u: goto label_80302070;
    case 0x80302074u: goto label_80302074;
    case 0x80302078u: goto label_80302078;
    case 0x8030207Cu: goto label_8030207C;
    case 0x80302080u: goto label_80302080;
    case 0x80302084u: goto label_80302084;
    case 0x80302088u: goto label_80302088;
    case 0x8030208Cu: goto label_8030208C;
    case 0x80302090u: goto label_80302090;
    case 0x80302094u: goto label_80302094;
    case 0x80302098u: goto label_80302098;
    case 0x8030209Cu: goto label_8030209C;
    case 0x803020A0u: goto label_803020A0;
    case 0x803020A4u: goto label_803020A4;
    case 0x803020A8u: goto label_803020A8;
    case 0x803020ACu: goto label_803020AC;
    case 0x803020B0u: goto label_803020B0;
    case 0x803020B4u: goto label_803020B4;
    case 0x803020B8u: goto label_803020B8;
    case 0x803020BCu: goto label_803020BC;
    case 0x803020C0u: goto label_803020C0;
    case 0x803020C4u: goto label_803020C4;
    case 0x803020C8u: goto label_803020C8;
    case 0x803020CCu: goto label_803020CC;
    case 0x803020D0u: goto label_803020D0;
    case 0x803020D4u: goto label_803020D4;
    case 0x803020D8u: goto label_803020D8;
    case 0x803020DCu: goto label_803020DC;
    case 0x803020E0u: goto label_803020E0;
    case 0x803020E4u: goto label_803020E4;
    case 0x803020E8u: goto label_803020E8;
    case 0x803020ECu: goto label_803020EC;
    case 0x803020F0u: goto label_803020F0;
    case 0x803020F4u: goto label_803020F4;
    case 0x803020F8u: goto label_803020F8;
    case 0x803020FCu: goto label_803020FC;
    case 0x80302100u: goto label_80302100;
    case 0x80302104u: goto label_80302104;
    case 0x80302108u: goto label_80302108;
    case 0x8030210Cu: goto label_8030210C;
    case 0x80302110u: goto label_80302110;
    case 0x80302114u: goto label_80302114;
    case 0x80302118u: goto label_80302118;
    case 0x8030211Cu: goto label_8030211C;
    case 0x80302120u: goto label_80302120;
    case 0x80302124u: goto label_80302124;
    case 0x80302128u: goto label_80302128;
    case 0x8030212Cu: goto label_8030212C;
    case 0x80302130u: goto label_80302130;
    case 0x80302134u: goto label_80302134;
    case 0x80302138u: goto label_80302138;
    case 0x8030213Cu: goto label_8030213C;
    case 0x80302140u: goto label_80302140;
    case 0x80302144u: goto label_80302144;
    case 0x80302148u: goto label_80302148;
    case 0x8030214Cu: goto label_8030214C;
    case 0x80302150u: goto label_80302150;
    case 0x80302154u: goto label_80302154;
    case 0x80302158u: goto label_80302158;
    case 0x8030215Cu: goto label_8030215C;
    case 0x80302160u: goto label_80302160;
    case 0x80302164u: goto label_80302164;
    case 0x80302168u: goto label_80302168;
    case 0x8030216Cu: goto label_8030216C;
    case 0x80302170u: goto label_80302170;
    case 0x80302174u: goto label_80302174;
    case 0x80302178u: goto label_80302178;
    case 0x8030217Cu: goto label_8030217C;
    case 0x80302180u: goto label_80302180;
    case 0x80302184u: goto label_80302184;
    case 0x80302188u: goto label_80302188;
    case 0x8030218Cu: goto label_8030218C;
    case 0x80302190u: goto label_80302190;
    case 0x80302194u: goto label_80302194;
    case 0x80302198u: goto label_80302198;
    case 0x8030219Cu: goto label_8030219C;
    case 0x803021A0u: goto label_803021A0;
    case 0x803021A4u: goto label_803021A4;
    case 0x803021A8u: goto label_803021A8;
    case 0x803021ACu: goto label_803021AC;
    case 0x803021B0u: goto label_803021B0;
    case 0x803021B4u: goto label_803021B4;
    case 0x803021B8u: goto label_803021B8;
    case 0x803021BCu: goto label_803021BC;
    case 0x803021C0u: goto label_803021C0;
    case 0x803021C4u: goto label_803021C4;
    case 0x803021C8u: goto label_803021C8;
    case 0x803021CCu: goto label_803021CC;
    case 0x803021D0u: goto label_803021D0;
    case 0x803021D4u: goto label_803021D4;
    case 0x803021D8u: goto label_803021D8;
    case 0x803021DCu: goto label_803021DC;
    case 0x803021E0u: goto label_803021E0;
    case 0x803021E4u: goto label_803021E4;
    case 0x803021E8u: goto label_803021E8;
    case 0x803021ECu: goto label_803021EC;
    case 0x803021F0u: goto label_803021F0;
    case 0x803021F4u: goto label_803021F4;
    case 0x803021F8u: goto label_803021F8;
    case 0x803021FCu: goto label_803021FC;
    case 0x80302200u: goto label_80302200;
    case 0x80302204u: goto label_80302204;
    case 0x80302208u: goto label_80302208;
    case 0x8030220Cu: goto label_8030220C;
    case 0x80302210u: goto label_80302210;
    case 0x80302214u: goto label_80302214;
    case 0x80302218u: goto label_80302218;
    case 0x8030221Cu: goto label_8030221C;
    case 0x80302220u: goto label_80302220;
    case 0x80302224u: goto label_80302224;
    case 0x80302228u: goto label_80302228;
    case 0x8030222Cu: goto label_8030222C;
    case 0x80302230u: goto label_80302230;
    case 0x80302234u: goto label_80302234;
    case 0x80302238u: goto label_80302238;
    case 0x8030223Cu: goto label_8030223C;
    case 0x80302240u: goto label_80302240;
    case 0x80302244u: goto label_80302244;
    case 0x80302248u: goto label_80302248;
    case 0x8030224Cu: goto label_8030224C;
    case 0x80302250u: goto label_80302250;
    case 0x80302254u: goto label_80302254;
    case 0x80302258u: goto label_80302258;
    case 0x8030225Cu: goto label_8030225C;
    case 0x80302260u: goto label_80302260;
    case 0x80302264u: goto label_80302264;
    case 0x80302268u: goto label_80302268;
    case 0x8030226Cu: goto label_8030226C;
    case 0x80302270u: goto label_80302270;
    case 0x80302274u: goto label_80302274;
    case 0x80302278u: goto label_80302278;
    case 0x8030227Cu: goto label_8030227C;
    case 0x80302280u: goto label_80302280;
    case 0x80302284u: goto label_80302284;
    case 0x80302288u: goto label_80302288;
    case 0x8030228Cu: goto label_8030228C;
    case 0x80302290u: goto label_80302290;
    case 0x80302294u: goto label_80302294;
    case 0x80302298u: goto label_80302298;
    case 0x8030229Cu: goto label_8030229C;
    case 0x803022A0u: goto label_803022A0;
    case 0x803022A4u: goto label_803022A4;
    case 0x803022A8u: goto label_803022A8;
    case 0x803022ACu: goto label_803022AC;
    case 0x803022B0u: goto label_803022B0;
    case 0x803022B4u: goto label_803022B4;
    case 0x803022B8u: goto label_803022B8;
    case 0x803022BCu: goto label_803022BC;
    case 0x803022C0u: goto label_803022C0;
    case 0x803022C4u: goto label_803022C4;
    case 0x803022C8u: goto label_803022C8;
    case 0x803022CCu: goto label_803022CC;
    case 0x803022D0u: goto label_803022D0;
    case 0x803022D4u: goto label_803022D4;
    case 0x803022D8u: goto label_803022D8;
    case 0x803022DCu: goto label_803022DC;
    case 0x803022E0u: goto label_803022E0;
    case 0x803022E4u: goto label_803022E4;
    case 0x803022E8u: goto label_803022E8;
    case 0x803022ECu: goto label_803022EC;
    case 0x803022F0u: goto label_803022F0;
    case 0x803022F4u: goto label_803022F4;
    case 0x803022F8u: goto label_803022F8;
    case 0x803022FCu: goto label_803022FC;
    case 0x80302300u: goto label_80302300;
    case 0x80302304u: goto label_80302304;
    case 0x80302308u: goto label_80302308;
    case 0x8030230Cu: goto label_8030230C;
    case 0x80302310u: goto label_80302310;
    case 0x80302314u: goto label_80302314;
    case 0x80302318u: goto label_80302318;
    case 0x8030231Cu: goto label_8030231C;
    case 0x80302320u: goto label_80302320;
    case 0x80302324u: goto label_80302324;
    case 0x80302328u: goto label_80302328;
    case 0x8030232Cu: goto label_8030232C;
    case 0x80302330u: goto label_80302330;
    case 0x80302334u: goto label_80302334;
    case 0x80302338u: goto label_80302338;
    case 0x8030233Cu: goto label_8030233C;
    case 0x80302340u: goto label_80302340;
    case 0x80302344u: goto label_80302344;
    case 0x80302348u: goto label_80302348;
    case 0x8030234Cu: goto label_8030234C;
    case 0x80302350u: goto label_80302350;
    case 0x80302354u: goto label_80302354;
    case 0x80302358u: goto label_80302358;
    case 0x8030235Cu: goto label_8030235C;
    case 0x80302360u: goto label_80302360;
    case 0x80302364u: goto label_80302364;
    case 0x80302368u: goto label_80302368;
    case 0x8030236Cu: goto label_8030236C;
    case 0x80302370u: goto label_80302370;
    case 0x80302374u: goto label_80302374;
    case 0x80302378u: goto label_80302378;
    case 0x8030237Cu: goto label_8030237C;
    case 0x80302380u: goto label_80302380;
    case 0x80302384u: goto label_80302384;
    case 0x80302388u: goto label_80302388;
    case 0x8030238Cu: goto label_8030238C;
    case 0x80302390u: goto label_80302390;
    case 0x80302394u: goto label_80302394;
    case 0x80302398u: goto label_80302398;
    case 0x8030239Cu: goto label_8030239C;
    case 0x803023A0u: goto label_803023A0;
    case 0x803023A4u: goto label_803023A4;
    case 0x803023A8u: goto label_803023A8;
    case 0x803023ACu: goto label_803023AC;
    case 0x803023B0u: goto label_803023B0;
    case 0x803023B4u: goto label_803023B4;
    case 0x803023B8u: goto label_803023B8;
    case 0x803023BCu: goto label_803023BC;
    case 0x803023C0u: goto label_803023C0;
    case 0x803023C4u: goto label_803023C4;
    case 0x803023C8u: goto label_803023C8;
    case 0x803023CCu: goto label_803023CC;
    case 0x803023D0u: goto label_803023D0;
    case 0x803023D4u: goto label_803023D4;
    case 0x803023D8u: goto label_803023D8;
    case 0x803023DCu: goto label_803023DC;
    case 0x803023E0u: goto label_803023E0;
    case 0x803023E4u: goto label_803023E4;
    case 0x803023E8u: goto label_803023E8;
    case 0x803023ECu: goto label_803023EC;
    case 0x803023F0u: goto label_803023F0;
    case 0x803023F4u: goto label_803023F4;
    case 0x803023F8u: goto label_803023F8;
    case 0x803023FCu: goto label_803023FC;
    case 0x80302400u: goto label_80302400;
    case 0x80302404u: goto label_80302404;
    case 0x80302408u: goto label_80302408;
    case 0x8030240Cu: goto label_8030240C;
    case 0x80302410u: goto label_80302410;
    case 0x80302414u: goto label_80302414;
    case 0x80302418u: goto label_80302418;
    case 0x8030241Cu: goto label_8030241C;
    case 0x80302420u: goto label_80302420;
    case 0x80302424u: goto label_80302424;
    case 0x80302428u: goto label_80302428;
    case 0x8030242Cu: goto label_8030242C;
    case 0x80302430u: goto label_80302430;
    case 0x80302434u: goto label_80302434;
    case 0x80302438u: goto label_80302438;
    case 0x8030243Cu: goto label_8030243C;
    case 0x80302440u: goto label_80302440;
    case 0x80302444u: goto label_80302444;
    case 0x80302448u: goto label_80302448;
    case 0x8030244Cu: goto label_8030244C;
    case 0x80302450u: goto label_80302450;
    case 0x80302454u: goto label_80302454;
    case 0x80302458u: goto label_80302458;
    case 0x8030245Cu: goto label_8030245C;
    case 0x80302460u: goto label_80302460;
    case 0x80302464u: goto label_80302464;
    case 0x80302468u: goto label_80302468;
    case 0x8030246Cu: goto label_8030246C;
    case 0x80302470u: goto label_80302470;
    case 0x80302474u: goto label_80302474;
    case 0x80302478u: goto label_80302478;
    case 0x8030247Cu: goto label_8030247C;
    case 0x80302480u: goto label_80302480;
    case 0x80302484u: goto label_80302484;
    case 0x80302488u: goto label_80302488;
    case 0x8030248Cu: goto label_8030248C;
    case 0x80302490u: goto label_80302490;
    case 0x80302494u: goto label_80302494;
    case 0x80302498u: goto label_80302498;
    case 0x8030249Cu: goto label_8030249C;
    case 0x803024A0u: goto label_803024A0;
    case 0x803024A4u: goto label_803024A4;
    case 0x803024A8u: goto label_803024A8;
    case 0x803024ACu: goto label_803024AC;
    case 0x803024B0u: goto label_803024B0;
    case 0x803024B4u: goto label_803024B4;
    case 0x803024B8u: goto label_803024B8;
    case 0x803024BCu: goto label_803024BC;
    case 0x803024C0u: goto label_803024C0;
    case 0x803024C4u: goto label_803024C4;
    case 0x803024C8u: goto label_803024C8;
    case 0x803024CCu: goto label_803024CC;
    case 0x803024D0u: goto label_803024D0;
    case 0x803024D4u: goto label_803024D4;
    case 0x803024D8u: goto label_803024D8;
    case 0x803024DCu: goto label_803024DC;
    case 0x803024E0u: goto label_803024E0;
    case 0x803024E4u: goto label_803024E4;
    case 0x803024E8u: goto label_803024E8;
    case 0x803024ECu: goto label_803024EC;
    case 0x803024F0u: goto label_803024F0;
    case 0x803024F4u: goto label_803024F4;
    case 0x803024F8u: goto label_803024F8;
    case 0x803024FCu: goto label_803024FC;
    case 0x80302500u: goto label_80302500;
    case 0x80302504u: goto label_80302504;
    case 0x80302508u: goto label_80302508;
    case 0x8030250Cu: goto label_8030250C;
    case 0x80302510u: goto label_80302510;
    case 0x80302514u: goto label_80302514;
    case 0x80302518u: goto label_80302518;
    case 0x8030251Cu: goto label_8030251C;
    case 0x80302520u: goto label_80302520;
    case 0x80302524u: goto label_80302524;
    case 0x80302528u: goto label_80302528;
    case 0x8030252Cu: goto label_8030252C;
    case 0x80302530u: goto label_80302530;
    case 0x80302534u: goto label_80302534;
    case 0x80302538u: goto label_80302538;
    case 0x8030253Cu: goto label_8030253C;
    case 0x80302540u: goto label_80302540;
    case 0x80302544u: goto label_80302544;
    case 0x80302548u: goto label_80302548;
    case 0x8030254Cu: goto label_8030254C;
    case 0x80302550u: goto label_80302550;
    case 0x80302554u: goto label_80302554;
    case 0x80302558u: goto label_80302558;
    case 0x8030255Cu: goto label_8030255C;
    case 0x80302560u: goto label_80302560;
    case 0x80302564u: goto label_80302564;
    case 0x80302568u: goto label_80302568;
    case 0x8030256Cu: goto label_8030256C;
    case 0x80302570u: goto label_80302570;
    case 0x80302574u: goto label_80302574;
    case 0x80302578u: goto label_80302578;
    case 0x8030257Cu: goto label_8030257C;
    case 0x80302580u: goto label_80302580;
    case 0x80302584u: goto label_80302584;
    case 0x80302588u: goto label_80302588;
    case 0x8030258Cu: goto label_8030258C;
    case 0x80302590u: goto label_80302590;
    case 0x80302594u: goto label_80302594;
    case 0x80302598u: goto label_80302598;
    case 0x8030259Cu: goto label_8030259C;
    case 0x803025A0u: goto label_803025A0;
    case 0x803025A4u: goto label_803025A4;
    case 0x803025A8u: goto label_803025A8;
    case 0x803025ACu: goto label_803025AC;
    case 0x803025B0u: goto label_803025B0;
    case 0x803025B4u: goto label_803025B4;
    case 0x803025B8u: goto label_803025B8;
    case 0x803025BCu: goto label_803025BC;
    case 0x803025C0u: goto label_803025C0;
    case 0x803025C4u: goto label_803025C4;
    case 0x803025C8u: goto label_803025C8;
    case 0x803025CCu: goto label_803025CC;
    case 0x803025D0u: goto label_803025D0;
    case 0x803025D4u: goto label_803025D4;
    case 0x803025D8u: goto label_803025D8;
    case 0x803025DCu: goto label_803025DC;
    case 0x803025E0u: goto label_803025E0;
    case 0x803025E4u: goto label_803025E4;
    case 0x803025E8u: goto label_803025E8;
    case 0x803025ECu: goto label_803025EC;
    case 0x803025F0u: goto label_803025F0;
    case 0x803025F4u: goto label_803025F4;
    case 0x803025F8u: goto label_803025F8;
    case 0x803025FCu: goto label_803025FC;
    case 0x80302600u: goto label_80302600;
    case 0x80302604u: goto label_80302604;
    case 0x80302608u: goto label_80302608;
    case 0x8030260Cu: goto label_8030260C;
    case 0x80302610u: goto label_80302610;
    case 0x80302614u: goto label_80302614;
    case 0x80302618u: goto label_80302618;
    case 0x8030261Cu: goto label_8030261C;
    case 0x80302620u: goto label_80302620;
    case 0x80302624u: goto label_80302624;
    case 0x80302628u: goto label_80302628;
    case 0x8030262Cu: goto label_8030262C;
    case 0x80302630u: goto label_80302630;
    case 0x80302634u: goto label_80302634;
    case 0x80302638u: goto label_80302638;
    case 0x8030263Cu: goto label_8030263C;
    case 0x80302640u: goto label_80302640;
    case 0x80302644u: goto label_80302644;
    case 0x80302648u: goto label_80302648;
    case 0x8030264Cu: goto label_8030264C;
    case 0x80302650u: goto label_80302650;
    case 0x80302654u: goto label_80302654;
    case 0x80302658u: goto label_80302658;
    case 0x8030265Cu: goto label_8030265C;
    case 0x80302660u: goto label_80302660;
    case 0x80302664u: goto label_80302664;
    case 0x80302668u: goto label_80302668;
    case 0x8030266Cu: goto label_8030266C;
    case 0x80302670u: goto label_80302670;
    case 0x80302674u: goto label_80302674;
    case 0x80302678u: goto label_80302678;
    case 0x8030267Cu: goto label_8030267C;
    case 0x80302680u: goto label_80302680;
    case 0x80302684u: goto label_80302684;
    case 0x80302688u: goto label_80302688;
    case 0x8030268Cu: goto label_8030268C;
    case 0x80302690u: goto label_80302690;
    case 0x80302694u: goto label_80302694;
    case 0x80302698u: goto label_80302698;
    case 0x8030269Cu: goto label_8030269C;
    case 0x803026A0u: goto label_803026A0;
    case 0x803026A4u: goto label_803026A4;
    case 0x803026A8u: goto label_803026A8;
    case 0x803026ACu: goto label_803026AC;
    case 0x803026B0u: goto label_803026B0;
    case 0x803026B4u: goto label_803026B4;
    case 0x803026B8u: goto label_803026B8;
    case 0x803026BCu: goto label_803026BC;
    case 0x803026C0u: goto label_803026C0;
    case 0x803026C4u: goto label_803026C4;
    case 0x803026C8u: goto label_803026C8;
    case 0x803026CCu: goto label_803026CC;
    case 0x803026D0u: goto label_803026D0;
    case 0x803026D4u: goto label_803026D4;
    case 0x803026D8u: goto label_803026D8;
    case 0x803026DCu: goto label_803026DC;
    case 0x803026E0u: goto label_803026E0;
    case 0x803026E4u: goto label_803026E4;
    case 0x803026E8u: goto label_803026E8;
    case 0x803026ECu: goto label_803026EC;
    case 0x803026F0u: goto label_803026F0;
    case 0x803026F4u: goto label_803026F4;
    case 0x803026F8u: goto label_803026F8;
    case 0x803026FCu: goto label_803026FC;
    case 0x80302700u: goto label_80302700;
    case 0x80302704u: goto label_80302704;
    case 0x80302708u: goto label_80302708;
    case 0x8030270Cu: goto label_8030270C;
    case 0x80302710u: goto label_80302710;
    case 0x80302714u: goto label_80302714;
    case 0x80302718u: goto label_80302718;
    case 0x8030271Cu: goto label_8030271C;
    case 0x80302720u: goto label_80302720;
    case 0x80302724u: goto label_80302724;
    case 0x80302728u: goto label_80302728;
    case 0x8030272Cu: goto label_8030272C;
    case 0x80302730u: goto label_80302730;
    case 0x80302734u: goto label_80302734;
    case 0x80302738u: goto label_80302738;
    case 0x8030273Cu: goto label_8030273C;
    case 0x80302740u: goto label_80302740;
    case 0x80302744u: goto label_80302744;
    case 0x80302748u: goto label_80302748;
    case 0x8030274Cu: goto label_8030274C;
    case 0x80302750u: goto label_80302750;
    case 0x80302754u: goto label_80302754;
    case 0x80302758u: goto label_80302758;
    case 0x8030275Cu: goto label_8030275C;
    case 0x80302760u: goto label_80302760;
    case 0x80302764u: goto label_80302764;
    case 0x80302768u: goto label_80302768;
    case 0x8030276Cu: goto label_8030276C;
    case 0x80302770u: goto label_80302770;
    case 0x80302774u: goto label_80302774;
    case 0x80302778u: goto label_80302778;
    case 0x8030277Cu: goto label_8030277C;
    case 0x80302780u: goto label_80302780;
    case 0x80302784u: goto label_80302784;
    case 0x80302788u: goto label_80302788;
    case 0x8030278Cu: goto label_8030278C;
    case 0x80302790u: goto label_80302790;
    case 0x80302794u: goto label_80302794;
    case 0x80302798u: goto label_80302798;
    case 0x8030279Cu: goto label_8030279C;
    case 0x803027A0u: goto label_803027A0;
    case 0x803027A4u: goto label_803027A4;
    case 0x803027A8u: goto label_803027A8;
    case 0x803027ACu: goto label_803027AC;
    case 0x803027B0u: goto label_803027B0;
    case 0x803027B4u: goto label_803027B4;
    case 0x803027B8u: goto label_803027B8;
    case 0x803027BCu: goto label_803027BC;
    case 0x803027C0u: goto label_803027C0;
    case 0x803027C4u: goto label_803027C4;
    case 0x803027C8u: goto label_803027C8;
    case 0x803027CCu: goto label_803027CC;
    case 0x803027D0u: goto label_803027D0;
    case 0x803027D4u: goto label_803027D4;
    case 0x803027D8u: goto label_803027D8;
    case 0x803027DCu: goto label_803027DC;
    case 0x803027E0u: goto label_803027E0;
    case 0x803027E4u: goto label_803027E4;
    case 0x803027E8u: goto label_803027E8;
    case 0x803027ECu: goto label_803027EC;
    case 0x803027F0u: goto label_803027F0;
    case 0x803027F4u: goto label_803027F4;
    case 0x803027F8u: goto label_803027F8;
    case 0x803027FCu: goto label_803027FC;
    case 0x80302800u: goto label_80302800;
    case 0x80302804u: goto label_80302804;
    case 0x80302808u: goto label_80302808;
    case 0x8030280Cu: goto label_8030280C;
    case 0x80302810u: goto label_80302810;
    case 0x80302814u: goto label_80302814;
    case 0x80302818u: goto label_80302818;
    case 0x8030281Cu: goto label_8030281C;
    case 0x80302820u: goto label_80302820;
    case 0x80302824u: goto label_80302824;
    case 0x80302828u: goto label_80302828;
    case 0x8030282Cu: goto label_8030282C;
    case 0x80302830u: goto label_80302830;
    case 0x80302834u: goto label_80302834;
    case 0x80302838u: goto label_80302838;
    case 0x8030283Cu: goto label_8030283C;
    case 0x80302840u: goto label_80302840;
    case 0x80302844u: goto label_80302844;
    case 0x80302848u: goto label_80302848;
    case 0x8030284Cu: goto label_8030284C;
    case 0x80302850u: goto label_80302850;
    case 0x80302854u: goto label_80302854;
    case 0x80302858u: goto label_80302858;
    case 0x8030285Cu: goto label_8030285C;
    case 0x80302860u: goto label_80302860;
    case 0x80302864u: goto label_80302864;
    case 0x80302868u: goto label_80302868;
    case 0x8030286Cu: goto label_8030286C;
    case 0x80302870u: goto label_80302870;
    case 0x80302874u: goto label_80302874;
    case 0x80302878u: goto label_80302878;
    case 0x8030287Cu: goto label_8030287C;
    case 0x80302880u: goto label_80302880;
    case 0x80302884u: goto label_80302884;
    case 0x80302888u: goto label_80302888;
    case 0x8030288Cu: goto label_8030288C;
    case 0x80302890u: goto label_80302890;
    case 0x80302894u: goto label_80302894;
    case 0x80302898u: goto label_80302898;
    case 0x8030289Cu: goto label_8030289C;
    case 0x803028A0u: goto label_803028A0;
    case 0x803028A4u: goto label_803028A4;
    case 0x803028A8u: goto label_803028A8;
    case 0x803028ACu: goto label_803028AC;
    case 0x803028B0u: goto label_803028B0;
    case 0x803028B4u: goto label_803028B4;
    case 0x803028B8u: goto label_803028B8;
    case 0x803028BCu: goto label_803028BC;
    case 0x803028C0u: goto label_803028C0;
    case 0x803028C4u: goto label_803028C4;
    case 0x803028C8u: goto label_803028C8;
    case 0x803028CCu: goto label_803028CC;
    case 0x803028D0u: goto label_803028D0;
    case 0x803028D4u: goto label_803028D4;
    case 0x803028D8u: goto label_803028D8;
    case 0x803028DCu: goto label_803028DC;
    case 0x803028E0u: goto label_803028E0;
    case 0x803028E4u: goto label_803028E4;
    case 0x803028E8u: goto label_803028E8;
    case 0x803028ECu: goto label_803028EC;
    case 0x803028F0u: goto label_803028F0;
    case 0x803028F4u: goto label_803028F4;
    case 0x803028F8u: goto label_803028F8;
    case 0x803028FCu: goto label_803028FC;
    case 0x80302900u: goto label_80302900;
    case 0x80302904u: goto label_80302904;
    case 0x80302908u: goto label_80302908;
    case 0x8030290Cu: goto label_8030290C;
    case 0x80302910u: goto label_80302910;
    case 0x80302914u: goto label_80302914;
    case 0x80302918u: goto label_80302918;
    case 0x8030291Cu: goto label_8030291C;
    case 0x80302920u: goto label_80302920;
    case 0x80302924u: goto label_80302924;
    case 0x80302928u: goto label_80302928;
    case 0x8030292Cu: goto label_8030292C;
    case 0x80302930u: goto label_80302930;
    case 0x80302934u: goto label_80302934;
    case 0x80302938u: goto label_80302938;
    case 0x8030293Cu: goto label_8030293C;
    case 0x80302940u: goto label_80302940;
    case 0x80302944u: goto label_80302944;
    case 0x80302948u: goto label_80302948;
    case 0x8030294Cu: goto label_8030294C;
    case 0x80302950u: goto label_80302950;
    case 0x80302954u: goto label_80302954;
    case 0x80302958u: goto label_80302958;
    case 0x8030295Cu: goto label_8030295C;
    case 0x80302960u: goto label_80302960;
    case 0x80302964u: goto label_80302964;
    case 0x80302968u: goto label_80302968;
    case 0x8030296Cu: goto label_8030296C;
    case 0x80302970u: goto label_80302970;
    case 0x80302974u: goto label_80302974;
    case 0x80302978u: goto label_80302978;
    case 0x8030297Cu: goto label_8030297C;
    case 0x80302980u: goto label_80302980;
    case 0x80302984u: goto label_80302984;
    case 0x80302988u: goto label_80302988;
    case 0x8030298Cu: goto label_8030298C;
    case 0x80302990u: goto label_80302990;
    case 0x80302994u: goto label_80302994;
    case 0x80302998u: goto label_80302998;
    case 0x8030299Cu: goto label_8030299C;
    case 0x803029A0u: goto label_803029A0;
    case 0x803029A4u: goto label_803029A4;
    case 0x803029A8u: goto label_803029A8;
    case 0x803029ACu: goto label_803029AC;
    case 0x803029B0u: goto label_803029B0;
    case 0x803029B4u: goto label_803029B4;
    case 0x803029B8u: goto label_803029B8;
    case 0x803029BCu: goto label_803029BC;
    case 0x803029C0u: goto label_803029C0;
    case 0x803029C4u: goto label_803029C4;
    case 0x803029C8u: goto label_803029C8;
    case 0x803029CCu: goto label_803029CC;
    case 0x803029D0u: goto label_803029D0;
    case 0x803029D4u: goto label_803029D4;
    case 0x803029D8u: goto label_803029D8;
    case 0x803029DCu: goto label_803029DC;
    case 0x803029E0u: goto label_803029E0;
    case 0x803029E4u: goto label_803029E4;
    case 0x803029E8u: goto label_803029E8;
    case 0x803029ECu: goto label_803029EC;
    case 0x803029F0u: goto label_803029F0;
    case 0x803029F4u: goto label_803029F4;
    case 0x803029F8u: goto label_803029F8;
    case 0x803029FCu: goto label_803029FC;
    case 0x80302A00u: goto label_80302A00;
    case 0x80302A04u: goto label_80302A04;
    case 0x80302A08u: goto label_80302A08;
    case 0x80302A0Cu: goto label_80302A0C;
    case 0x80302A10u: goto label_80302A10;
    case 0x80302A14u: goto label_80302A14;
    case 0x80302A18u: goto label_80302A18;
    case 0x80302A1Cu: goto label_80302A1C;
    case 0x80302A20u: goto label_80302A20;
    case 0x80302A24u: goto label_80302A24;
    case 0x80302A28u: goto label_80302A28;
    case 0x80302A2Cu: goto label_80302A2C;
    case 0x80302A30u: goto label_80302A30;
    case 0x80302A34u: goto label_80302A34;
    case 0x80302A38u: goto label_80302A38;
    case 0x80302A3Cu: goto label_80302A3C;
    case 0x80302A40u: goto label_80302A40;
    case 0x80302A44u: goto label_80302A44;
    case 0x80302A48u: goto label_80302A48;
    case 0x80302A4Cu: goto label_80302A4C;
    case 0x80302A50u: goto label_80302A50;
    case 0x80302A54u: goto label_80302A54;
    case 0x80302A58u: goto label_80302A58;
    case 0x80302A5Cu: goto label_80302A5C;
    case 0x80302A60u: goto label_80302A60;
    case 0x80302A64u: goto label_80302A64;
    case 0x80302A68u: goto label_80302A68;
    case 0x80302A6Cu: goto label_80302A6C;
    case 0x80302A70u: goto label_80302A70;
    case 0x80302A74u: goto label_80302A74;
    case 0x80302A78u: goto label_80302A78;
    case 0x80302A7Cu: goto label_80302A7C;
    case 0x80302A80u: goto label_80302A80;
    case 0x80302A84u: goto label_80302A84;
    case 0x80302A88u: goto label_80302A88;
    case 0x80302A8Cu: goto label_80302A8C;
    case 0x80302A90u: goto label_80302A90;
    case 0x80302A94u: goto label_80302A94;
    case 0x80302A98u: goto label_80302A98;
    case 0x80302A9Cu: goto label_80302A9C;
    case 0x80302AA0u: goto label_80302AA0;
    case 0x80302AA4u: goto label_80302AA4;
    case 0x80302AA8u: goto label_80302AA8;
    case 0x80302AACu: goto label_80302AAC;
    case 0x80302AB0u: goto label_80302AB0;
    case 0x80302AB4u: goto label_80302AB4;
    case 0x80302AB8u: goto label_80302AB8;
    case 0x80302ABCu: goto label_80302ABC;
    case 0x80302AC0u: goto label_80302AC0;
    case 0x80302AC4u: goto label_80302AC4;
    case 0x80302AC8u: goto label_80302AC8;
    case 0x80302ACCu: goto label_80302ACC;
    case 0x80302AD0u: goto label_80302AD0;
    case 0x80302AD4u: goto label_80302AD4;
    case 0x80302AD8u: goto label_80302AD8;
    case 0x80302ADCu: goto label_80302ADC;
    case 0x80302AE0u: goto label_80302AE0;
    case 0x80302AE4u: goto label_80302AE4;
    case 0x80302AE8u: goto label_80302AE8;
    case 0x80302AECu: goto label_80302AEC;
    case 0x80302AF0u: goto label_80302AF0;
    case 0x80302AF4u: goto label_80302AF4;
    case 0x80302AF8u: goto label_80302AF8;
    case 0x80302AFCu: goto label_80302AFC;
    case 0x80302B00u: goto label_80302B00;
    case 0x80302B04u: goto label_80302B04;
    case 0x80302B08u: goto label_80302B08;
    case 0x80302B0Cu: goto label_80302B0C;
    case 0x80302B10u: goto label_80302B10;
    case 0x80302B14u: goto label_80302B14;
    case 0x80302B18u: goto label_80302B18;
    case 0x80302B1Cu: goto label_80302B1C;
    case 0x80302B20u: goto label_80302B20;
    case 0x80302B24u: goto label_80302B24;
    case 0x80302B28u: goto label_80302B28;
    case 0x80302B2Cu: goto label_80302B2C;
    case 0x80302B30u: goto label_80302B30;
    case 0x80302B34u: goto label_80302B34;
    case 0x80302B38u: goto label_80302B38;
    case 0x80302B3Cu: goto label_80302B3C;
    case 0x80302B40u: goto label_80302B40;
    case 0x80302B44u: goto label_80302B44;
    case 0x80302B48u: goto label_80302B48;
    case 0x80302B4Cu: goto label_80302B4C;
    case 0x80302B50u: goto label_80302B50;
    case 0x80302B54u: goto label_80302B54;
    case 0x80302B58u: goto label_80302B58;
    case 0x80302B5Cu: goto label_80302B5C;
    case 0x80302B60u: goto label_80302B60;
    case 0x80302B64u: goto label_80302B64;
    case 0x80302B68u: goto label_80302B68;
    case 0x80302B6Cu: goto label_80302B6C;
    case 0x80302B70u: goto label_80302B70;
    case 0x80302B74u: goto label_80302B74;
    case 0x80302B78u: goto label_80302B78;
    case 0x80302B7Cu: goto label_80302B7C;
    case 0x80302B80u: goto label_80302B80;
    case 0x80302B84u: goto label_80302B84;
    case 0x80302B88u: goto label_80302B88;
    case 0x80302B8Cu: goto label_80302B8C;
    case 0x80302B90u: goto label_80302B90;
    case 0x80302B94u: goto label_80302B94;
    case 0x80302B98u: goto label_80302B98;
    case 0x80302B9Cu: goto label_80302B9C;
    case 0x80302BA0u: goto label_80302BA0;
    case 0x80302BA4u: goto label_80302BA4;
    case 0x80302BA8u: goto label_80302BA8;
    case 0x80302BACu: goto label_80302BAC;
    case 0x80302BB0u: goto label_80302BB0;
    case 0x80302BB4u: goto label_80302BB4;
    case 0x80302BB8u: goto label_80302BB8;
    case 0x80302BBCu: goto label_80302BBC;
    case 0x80302BC0u: goto label_80302BC0;
    case 0x80302BC4u: goto label_80302BC4;
    case 0x80302BC8u: goto label_80302BC8;
    case 0x80302BCCu: goto label_80302BCC;
    case 0x80302BD0u: goto label_80302BD0;
    case 0x80302BD4u: goto label_80302BD4;
    case 0x80302BD8u: goto label_80302BD8;
    case 0x80302BDCu: goto label_80302BDC;
    case 0x80302BE0u: goto label_80302BE0;
    case 0x80302BE4u: goto label_80302BE4;
    case 0x80302BE8u: goto label_80302BE8;
    case 0x80302BECu: goto label_80302BEC;
    case 0x80302BF0u: goto label_80302BF0;
    case 0x80302BF4u: goto label_80302BF4;
    case 0x80302BF8u: goto label_80302BF8;
    case 0x80302BFCu: goto label_80302BFC;
    case 0x80302C00u: goto label_80302C00;
    case 0x80302C04u: goto label_80302C04;
    case 0x80302C08u: goto label_80302C08;
    case 0x80302C0Cu: goto label_80302C0C;
    case 0x80302C10u: goto label_80302C10;
    case 0x80302C14u: goto label_80302C14;
    case 0x80302C18u: goto label_80302C18;
    case 0x80302C1Cu: goto label_80302C1C;
    case 0x80302C20u: goto label_80302C20;
    case 0x80302C24u: goto label_80302C24;
    case 0x80302C28u: goto label_80302C28;
    case 0x80302C2Cu: goto label_80302C2C;
    case 0x80302C30u: goto label_80302C30;
    case 0x80302C34u: goto label_80302C34;
    case 0x80302C38u: goto label_80302C38;
    case 0x80302C3Cu: goto label_80302C3C;
    case 0x80302C40u: goto label_80302C40;
    case 0x80302C44u: goto label_80302C44;
    case 0x80302C48u: goto label_80302C48;
    case 0x80302C4Cu: goto label_80302C4C;
    case 0x80302C50u: goto label_80302C50;
    case 0x80302C54u: goto label_80302C54;
    case 0x80302C58u: goto label_80302C58;
    case 0x80302C5Cu: goto label_80302C5C;
    case 0x80302C60u: goto label_80302C60;
    case 0x80302C64u: goto label_80302C64;
    case 0x80302C68u: goto label_80302C68;
    case 0x80302C6Cu: goto label_80302C6C;
    case 0x80302C70u: goto label_80302C70;
    case 0x80302C74u: goto label_80302C74;
    case 0x80302C78u: goto label_80302C78;
    case 0x80302C7Cu: goto label_80302C7C;
    case 0x80302C80u: goto label_80302C80;
    case 0x80302C84u: goto label_80302C84;
    case 0x80302C88u: goto label_80302C88;
    case 0x80302C8Cu: goto label_80302C8C;
    case 0x80302C90u: goto label_80302C90;
    case 0x80302C94u: goto label_80302C94;
    case 0x80302C98u: goto label_80302C98;
    case 0x80302C9Cu: goto label_80302C9C;
    case 0x80302CA0u: goto label_80302CA0;
    case 0x80302CA4u: goto label_80302CA4;
    case 0x80302CA8u: goto label_80302CA8;
    case 0x80302CACu: goto label_80302CAC;
    case 0x80302CB0u: goto label_80302CB0;
    case 0x80302CB4u: goto label_80302CB4;
    case 0x80302CB8u: goto label_80302CB8;
    case 0x80302CBCu: goto label_80302CBC;
    case 0x80302CC0u: goto label_80302CC0;
    case 0x80302CC4u: goto label_80302CC4;
    case 0x80302CC8u: goto label_80302CC8;
    case 0x80302CCCu: goto label_80302CCC;
    case 0x80302CD0u: goto label_80302CD0;
    case 0x80302CD4u: goto label_80302CD4;
    case 0x80302CD8u: goto label_80302CD8;
    case 0x80302CDCu: goto label_80302CDC;
    case 0x80302CE0u: goto label_80302CE0;
    case 0x80302CE4u: goto label_80302CE4;
    case 0x80302CE8u: goto label_80302CE8;
    case 0x80302CECu: goto label_80302CEC;
    case 0x80302CF0u: goto label_80302CF0;
    case 0x80302CF4u: goto label_80302CF4;
    case 0x80302CF8u: goto label_80302CF8;
    case 0x80302CFCu: goto label_80302CFC;
    case 0x80302D00u: goto label_80302D00;
    case 0x80302D04u: goto label_80302D04;
    case 0x80302D08u: goto label_80302D08;
    case 0x80302D0Cu: goto label_80302D0C;
    case 0x80302D10u: goto label_80302D10;
    case 0x80302D14u: goto label_80302D14;
    case 0x80302D18u: goto label_80302D18;
    case 0x80302D1Cu: goto label_80302D1C;
    case 0x80302D20u: goto label_80302D20;
    case 0x80302D24u: goto label_80302D24;
    case 0x80302D28u: goto label_80302D28;
    case 0x80302D2Cu: goto label_80302D2C;
    case 0x80302D30u: goto label_80302D30;
    case 0x80302D34u: goto label_80302D34;
    case 0x80302D38u: goto label_80302D38;
    case 0x80302D3Cu: goto label_80302D3C;
    case 0x80302D40u: goto label_80302D40;
    case 0x80302D44u: goto label_80302D44;
    case 0x80302D48u: goto label_80302D48;
    case 0x80302D4Cu: goto label_80302D4C;
    case 0x80302D50u: goto label_80302D50;
    case 0x80302D54u: goto label_80302D54;
    case 0x80302D58u: goto label_80302D58;
    case 0x80302D5Cu: goto label_80302D5C;
    case 0x80302D60u: goto label_80302D60;
    case 0x80302D64u: goto label_80302D64;
    case 0x80302D68u: goto label_80302D68;
    case 0x80302D6Cu: goto label_80302D6C;
    case 0x80302D70u: goto label_80302D70;
    case 0x80302D74u: goto label_80302D74;
    case 0x80302D78u: goto label_80302D78;
    case 0x80302D7Cu: goto label_80302D7C;
    case 0x80302D80u: goto label_80302D80;
    case 0x80302D84u: goto label_80302D84;
    case 0x80302D88u: goto label_80302D88;
    case 0x80302D8Cu: goto label_80302D8C;
    case 0x80302D90u: goto label_80302D90;
    case 0x80302D94u: goto label_80302D94;
    case 0x80302D98u: goto label_80302D98;
    case 0x80302D9Cu: goto label_80302D9C;
    case 0x80302DA0u: goto label_80302DA0;
    case 0x80302DA4u: goto label_80302DA4;
    case 0x80302DA8u: goto label_80302DA8;
    case 0x80302DACu: goto label_80302DAC;
    case 0x80302DB0u: goto label_80302DB0;
    case 0x80302DB4u: goto label_80302DB4;
    case 0x80302DB8u: goto label_80302DB8;
    case 0x80302DBCu: goto label_80302DBC;
    case 0x80302DC0u: goto label_80302DC0;
    case 0x80302DC4u: goto label_80302DC4;
    case 0x80302DC8u: goto label_80302DC8;
    case 0x80302DCCu: goto label_80302DCC;
    case 0x80302DD0u: goto label_80302DD0;
    case 0x80302DD4u: goto label_80302DD4;
    case 0x80302DD8u: goto label_80302DD8;
    case 0x80302DDCu: goto label_80302DDC;
    case 0x80302DE0u: goto label_80302DE0;
    case 0x80302DE4u: goto label_80302DE4;
    case 0x80302DE8u: goto label_80302DE8;
    case 0x80302DECu: goto label_80302DEC;
    case 0x80302DF0u: goto label_80302DF0;
    case 0x80302DF4u: goto label_80302DF4;
    case 0x80302DF8u: goto label_80302DF8;
    case 0x80302DFCu: goto label_80302DFC;
    case 0x80302E00u: goto label_80302E00;
    case 0x80302E04u: goto label_80302E04;
    case 0x80302E08u: goto label_80302E08;
    case 0x80302E0Cu: goto label_80302E0C;
    case 0x80302E10u: goto label_80302E10;
    case 0x80302E14u: goto label_80302E14;
    case 0x80302E18u: goto label_80302E18;
    case 0x80302E1Cu: goto label_80302E1C;
    case 0x80302E20u: goto label_80302E20;
    case 0x80302E24u: goto label_80302E24;
    case 0x80302E28u: goto label_80302E28;
    case 0x80302E2Cu: goto label_80302E2C;
    case 0x80302E30u: goto label_80302E30;
    case 0x80302E34u: goto label_80302E34;
    case 0x80302E38u: goto label_80302E38;
    case 0x80302E3Cu: goto label_80302E3C;
    case 0x80302E40u: goto label_80302E40;
    case 0x80302E44u: goto label_80302E44;
    case 0x80302E48u: goto label_80302E48;
    case 0x80302E4Cu: goto label_80302E4C;
    case 0x80302E50u: goto label_80302E50;
    case 0x80302E54u: goto label_80302E54;
    case 0x80302E58u: goto label_80302E58;
    case 0x80302E5Cu: goto label_80302E5C;
    case 0x80302E60u: goto label_80302E60;
    case 0x80302E64u: goto label_80302E64;
    case 0x80302E68u: goto label_80302E68;
    case 0x80302E6Cu: goto label_80302E6C;
    case 0x80302E70u: goto label_80302E70;
    case 0x80302E74u: goto label_80302E74;
    case 0x80302E78u: goto label_80302E78;
    case 0x80302E7Cu: goto label_80302E7C;
    case 0x80302E80u: goto label_80302E80;
    case 0x80302E84u: goto label_80302E84;
    case 0x80302E88u: goto label_80302E88;
    case 0x80302E8Cu: goto label_80302E8C;
    case 0x80302E90u: goto label_80302E90;
    case 0x80302E94u: goto label_80302E94;
    case 0x80302E98u: goto label_80302E98;
    case 0x80302E9Cu: goto label_80302E9C;
    case 0x80302EA0u: goto label_80302EA0;
    case 0x80302EA4u: goto label_80302EA4;
    case 0x80302EA8u: goto label_80302EA8;
    case 0x80302EACu: goto label_80302EAC;
    case 0x80302EB0u: goto label_80302EB0;
    case 0x80302EB4u: goto label_80302EB4;
    case 0x80302EB8u: goto label_80302EB8;
    case 0x80302EBCu: goto label_80302EBC;
    case 0x80302EC0u: goto label_80302EC0;
    case 0x80302EC4u: goto label_80302EC4;
    case 0x80302EC8u: goto label_80302EC8;
    case 0x80302ECCu: goto label_80302ECC;
    case 0x80302ED0u: goto label_80302ED0;
    case 0x80302ED4u: goto label_80302ED4;
    case 0x80302ED8u: goto label_80302ED8;
    case 0x80302EDCu: goto label_80302EDC;
    case 0x80302EE0u: goto label_80302EE0;
    case 0x80302EE4u: goto label_80302EE4;
    case 0x80302EE8u: goto label_80302EE8;
    case 0x80302EECu: goto label_80302EEC;
    case 0x80302EF0u: goto label_80302EF0;
    case 0x80302EF4u: goto label_80302EF4;
    case 0x80302EF8u: goto label_80302EF8;
    case 0x80302EFCu: goto label_80302EFC;
    case 0x80302F00u: goto label_80302F00;
    case 0x80302F04u: goto label_80302F04;
    case 0x80302F08u: goto label_80302F08;
    case 0x80302F0Cu: goto label_80302F0C;
    case 0x80302F10u: goto label_80302F10;
    case 0x80302F14u: goto label_80302F14;
    case 0x80302F18u: goto label_80302F18;
    case 0x80302F1Cu: goto label_80302F1C;
    case 0x80302F20u: goto label_80302F20;
    case 0x80302F24u: goto label_80302F24;
    case 0x80302F28u: goto label_80302F28;
    case 0x80302F2Cu: goto label_80302F2C;
    case 0x80302F30u: goto label_80302F30;
    case 0x80302F34u: goto label_80302F34;
    case 0x80302F38u: goto label_80302F38;
    case 0x80302F3Cu: goto label_80302F3C;
    case 0x80302F40u: goto label_80302F40;
    case 0x80302F44u: goto label_80302F44;
    case 0x80302F48u: goto label_80302F48;
    case 0x80302F4Cu: goto label_80302F4C;
    case 0x80302F50u: goto label_80302F50;
    case 0x80302F54u: goto label_80302F54;
    case 0x80302F58u: goto label_80302F58;
    case 0x80302F5Cu: goto label_80302F5C;
    case 0x80302F60u: goto label_80302F60;
    case 0x80302F64u: goto label_80302F64;
    case 0x80302F68u: goto label_80302F68;
    case 0x80302F6Cu: goto label_80302F6C;
    case 0x80302F70u: goto label_80302F70;
    case 0x80302F74u: goto label_80302F74;
    case 0x80302F78u: goto label_80302F78;
    case 0x80302F7Cu: goto label_80302F7C;
    case 0x80302F80u: goto label_80302F80;
    case 0x80302F84u: goto label_80302F84;
    case 0x80302F88u: goto label_80302F88;
    case 0x80302F8Cu: goto label_80302F8C;
    case 0x80302F90u: goto label_80302F90;
    case 0x80302F94u: goto label_80302F94;
    case 0x80302F98u: goto label_80302F98;
    case 0x80302F9Cu: goto label_80302F9C;
    case 0x80302FA0u: goto label_80302FA0;
    case 0x80302FA4u: goto label_80302FA4;
    case 0x80302FA8u: goto label_80302FA8;
    case 0x80302FACu: goto label_80302FAC;
    case 0x80302FB0u: goto label_80302FB0;
    case 0x80302FB4u: goto label_80302FB4;
    case 0x80302FB8u: goto label_80302FB8;
    case 0x80302FBCu: goto label_80302FBC;
    case 0x80302FC0u: goto label_80302FC0;
    case 0x80302FC4u: goto label_80302FC4;
    case 0x80302FC8u: goto label_80302FC8;
    case 0x80302FCCu: goto label_80302FCC;
    case 0x80302FD0u: goto label_80302FD0;
    case 0x80302FD4u: goto label_80302FD4;
    case 0x80302FD8u: goto label_80302FD8;
    case 0x80302FDCu: goto label_80302FDC;
    case 0x80302FE0u: goto label_80302FE0;
    case 0x80302FE4u: goto label_80302FE4;
    case 0x80302FE8u: goto label_80302FE8;
    case 0x80302FECu: goto label_80302FEC;
    case 0x80302FF0u: goto label_80302FF0;
    case 0x80302FF4u: goto label_80302FF4;
    case 0x80302FF8u: goto label_80302FF8;
    case 0x80302FFCu: goto label_80302FFC;
    case 0x80303000u: goto label_80303000;
    case 0x80303004u: goto label_80303004;
    case 0x80303008u: goto label_80303008;
    case 0x8030300Cu: goto label_8030300C;
    case 0x80303010u: goto label_80303010;
    case 0x80303014u: goto label_80303014;
    case 0x80303018u: goto label_80303018;
    case 0x8030301Cu: goto label_8030301C;
    case 0x80303020u: goto label_80303020;
    case 0x80303024u: goto label_80303024;
    case 0x80303028u: goto label_80303028;
    case 0x8030302Cu: goto label_8030302C;
    case 0x80303030u: goto label_80303030;
    case 0x80303034u: goto label_80303034;
    case 0x80303038u: goto label_80303038;
    case 0x8030303Cu: goto label_8030303C;
    case 0x80303040u: goto label_80303040;
    case 0x80303044u: goto label_80303044;
    case 0x80303048u: goto label_80303048;
    case 0x8030304Cu: goto label_8030304C;
    case 0x80303050u: goto label_80303050;
    case 0x80303054u: goto label_80303054;
    case 0x80303058u: goto label_80303058;
    case 0x8030305Cu: goto label_8030305C;
    case 0x80303060u: goto label_80303060;
    case 0x80303064u: goto label_80303064;
    case 0x80303068u: goto label_80303068;
    case 0x8030306Cu: goto label_8030306C;
    case 0x80303070u: goto label_80303070;
    case 0x80303074u: goto label_80303074;
    case 0x80303078u: goto label_80303078;
    case 0x8030307Cu: goto label_8030307C;
    case 0x80303080u: goto label_80303080;
    case 0x80303084u: goto label_80303084;
    case 0x80303088u: goto label_80303088;
    case 0x8030308Cu: goto label_8030308C;
    case 0x80303090u: goto label_80303090;
    case 0x80303094u: goto label_80303094;
    case 0x80303098u: goto label_80303098;
    case 0x8030309Cu: goto label_8030309C;
    case 0x803030A0u: goto label_803030A0;
    case 0x803030A4u: goto label_803030A4;
    case 0x803030A8u: goto label_803030A8;
    case 0x803030ACu: goto label_803030AC;
    case 0x803030B0u: goto label_803030B0;
    case 0x803030B4u: goto label_803030B4;
    case 0x803030B8u: goto label_803030B8;
    case 0x803030BCu: goto label_803030BC;
    case 0x803030C0u: goto label_803030C0;
    case 0x803030C4u: goto label_803030C4;
    case 0x803030C8u: goto label_803030C8;
    case 0x803030CCu: goto label_803030CC;
    case 0x803030D0u: goto label_803030D0;
    case 0x803030D4u: goto label_803030D4;
    case 0x803030D8u: goto label_803030D8;
    case 0x803030DCu: goto label_803030DC;
    case 0x803030E0u: goto label_803030E0;
    case 0x803030E4u: goto label_803030E4;
    case 0x803030E8u: goto label_803030E8;
    case 0x803030ECu: goto label_803030EC;
    case 0x803030F0u: goto label_803030F0;
    case 0x803030F4u: goto label_803030F4;
    case 0x803030F8u: goto label_803030F8;
    case 0x803030FCu: goto label_803030FC;
    case 0x80303100u: goto label_80303100;
    case 0x80303104u: goto label_80303104;
    case 0x80303108u: goto label_80303108;
    case 0x8030310Cu: goto label_8030310C;
    case 0x80303110u: goto label_80303110;
    case 0x80303114u: goto label_80303114;
    case 0x80303118u: goto label_80303118;
    case 0x8030311Cu: goto label_8030311C;
    case 0x80303120u: goto label_80303120;
    case 0x80303124u: goto label_80303124;
    case 0x80303128u: goto label_80303128;
    case 0x8030312Cu: goto label_8030312C;
    case 0x80303130u: goto label_80303130;
    case 0x80303134u: goto label_80303134;
    case 0x80303138u: goto label_80303138;
    case 0x8030313Cu: goto label_8030313C;
    case 0x80303140u: goto label_80303140;
    case 0x80303144u: goto label_80303144;
    case 0x80303148u: goto label_80303148;
    case 0x8030314Cu: goto label_8030314C;
    case 0x80303150u: goto label_80303150;
    case 0x80303154u: goto label_80303154;
    case 0x80303158u: goto label_80303158;
    case 0x8030315Cu: goto label_8030315C;
    case 0x80303160u: goto label_80303160;
    case 0x80303164u: goto label_80303164;
    case 0x80303168u: goto label_80303168;
    case 0x8030316Cu: goto label_8030316C;
    case 0x80303170u: goto label_80303170;
    case 0x80303174u: goto label_80303174;
    case 0x80303178u: goto label_80303178;
    case 0x8030317Cu: goto label_8030317C;
    case 0x80303180u: goto label_80303180;
    case 0x80303184u: goto label_80303184;
    case 0x80303188u: goto label_80303188;
    case 0x8030318Cu: goto label_8030318C;
    case 0x80303190u: goto label_80303190;
    case 0x80303194u: goto label_80303194;
    case 0x80303198u: goto label_80303198;
    case 0x8030319Cu: goto label_8030319C;
    case 0x803031A0u: goto label_803031A0;
    case 0x803031A4u: goto label_803031A4;
    case 0x803031A8u: goto label_803031A8;
    case 0x803031ACu: goto label_803031AC;
    case 0x803031B0u: goto label_803031B0;
    case 0x803031B4u: goto label_803031B4;
    case 0x803031B8u: goto label_803031B8;
    case 0x803031BCu: goto label_803031BC;
    default: return;
    }
label_802FF1C0:
    ctx->pc = 0x802FF1C0u;
    ctx->downcount -= 6;
    // 802FF1C0: stb     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FF1C4:
    ctx->pc = 0x802FF1C4u;
    // 802FF1C4: lwz     r3, 456(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF1C8:
    ctx->pc = 0x802FF1C8u;
    // 802FF1C8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FF1CC:
    ctx->pc = 0x802FF1CCu;
    // 802FF1CC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802FF1D0:
    ctx->pc = 0x802FF1D0u;
    // 802FF1D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FF1D4:
    ctx->pc = 0x802FF1D4u;
    // 802FF1D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF1D8:
    ctx->pc = 0x802FF1D8u;
    ctx->downcount -= 21;
    // 802FF1D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF1DC:
    ctx->pc = 0x802FF1DCu;
    // 802FF1DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF1E0:
    ctx->pc = 0x802FF1E0u;
    // 802FF1E0: lwz     r5, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF1E4:
    ctx->pc = 0x802FF1E4u;
    // 802FF1E4: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FF1E8:
    ctx->pc = 0x802FF1E8u;
    // 802FF1E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF1EC:
    ctx->pc = 0x802FF1ECu;
    // 802FF1EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF1F0:
    ctx->pc = 0x802FF1F0u;
    // 802FF1F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF1F4:
    ctx->pc = 0x802FF1F4u;
    // 802FF1F4: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF1F8:
    ctx->pc = 0x802FF1F8u;
    // 802FF1F8: cmpwi   r0, 0
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

label_802FF1FC:
    ctx->pc = 0x802FF1FCu;
    // 802FF1FC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802FF200:
    ctx->pc = 0x802FF200u;
    // 802FF200: bc    12, 2, 0x802FF210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF210;
        }
    }

label_802FF204:
    ctx->pc = 0x802FF204u;
    ctx->downcount -= 2;
    // 802FF204: cmpwi   r5, 1
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF208:
    ctx->pc = 0x802FF208u;
    // 802FF208: bc    4, 2, 0x802FF210
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FF210;
        }
    }

label_802FF20C:
    ctx->pc = 0x802FF20Cu;
    ctx->downcount -= 1;
    // 802FF20C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802FF210:
    ctx->pc = 0x802FF210u;
    ctx->downcount -= 2;
    // 802FF210: cmpwi   r0, 0
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

label_802FF214:
    ctx->pc = 0x802FF214u;
    // 802FF214: bc    12, 2, 0x802FF274
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF274;
        }
    }

label_802FF218:
    ctx->pc = 0x802FF218u;
    ctx->downcount -= 4;
    // 802FF218: lwz     r3, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF21C:
    ctx->pc = 0x802FF21Cu;
    // 802FF21C: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF220:
    ctx->pc = 0x802FF220u;
    // 802FF220: lwz     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF224:
    ctx->pc = 0x802FF224u;
    // 802FF224: bl      0x8036A3E4
    {
            ctx->lr = 0x802FF228u;
            ctx->pc = 0x8036A3E4u;
            return;
    }

label_802FF228:
    ctx->pc = 0x802FF228u;
    ctx->downcount -= 4;
    // 802FF228: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF22C:
    ctx->pc = 0x802FF22Cu;
    // 802FF22C: lwz     r3, 444(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(444);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF230:
    ctx->pc = 0x802FF230u;
    // 802FF230: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF234:
    ctx->pc = 0x802FF234u;
    // 802FF234: bl      0x80260AA4
    {
            ctx->lr = 0x802FF238u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF238:
    ctx->pc = 0x802FF238u;
    ctx->downcount -= 3;
    // 802FF238: lwz     r3, 448(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF23C:
    ctx->pc = 0x802FF23Cu;
    // 802FF23C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF240:
    ctx->pc = 0x802FF240u;
    // 802FF240: bl      0x80260AA4
    {
            ctx->lr = 0x802FF244u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF244:
    ctx->pc = 0x802FF244u;
    ctx->downcount -= 3;
    // 802FF244: lwz     r3, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF248:
    ctx->pc = 0x802FF248u;
    // 802FF248: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF24C:
    ctx->pc = 0x802FF24Cu;
    // 802FF24C: bl      0x80260AA4
    {
            ctx->lr = 0x802FF250u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF250:
    ctx->pc = 0x802FF250u;
    ctx->downcount -= 3;
    // 802FF250: lwz     r3, 456(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF254:
    ctx->pc = 0x802FF254u;
    // 802FF254: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF258:
    ctx->pc = 0x802FF258u;
    // 802FF258: bl      0x80260AA4
    {
            ctx->lr = 0x802FF25Cu;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF25C:
    ctx->pc = 0x802FF25Cu;
    ctx->downcount -= 3;
    // 802FF25C: lwz     r3, 436(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(436);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF260:
    ctx->pc = 0x802FF260u;
    // 802FF260: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF264:
    ctx->pc = 0x802FF264u;
    // 802FF264: bl      0x80260AA4
    {
            ctx->lr = 0x802FF268u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF268:
    ctx->pc = 0x802FF268u;
    ctx->downcount -= 3;
    // 802FF268: lwz     r3, 440(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(440);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF26C:
    ctx->pc = 0x802FF26Cu;
    // 802FF26C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF270:
    ctx->pc = 0x802FF270u;
    // 802FF270: bl      0x80260AA4
    {
            ctx->lr = 0x802FF274u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802FF274:
    ctx->pc = 0x802FF274u;
    ctx->downcount -= 16;
    // 802FF274: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF278:
    ctx->pc = 0x802FF278u;
    // 802FF278: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF27C:
    ctx->pc = 0x802FF27Cu;
    // 802FF27C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF280:
    ctx->pc = 0x802FF280u;
    // 802FF280: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FF284:
    ctx->pc = 0x802FF284u;
    // 802FF284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF288:
    ctx->pc = 0x802FF288u;
    ctx->downcount -= 27;
    // 802FF288: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF28C:
    ctx->pc = 0x802FF28Cu;
    // 802FF28C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF290:
    ctx->pc = 0x802FF290u;
    // 802FF290: lwz     r5, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF294:
    ctx->pc = 0x802FF294u;
    // 802FF294: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF298:
    ctx->pc = 0x802FF298u;
    // 802FF298: neg  r0, r5
    {
        u32 a = ctx->gpr[5];
        ctx->gpr[0] = (~a) + 1u;
    }

label_802FF29C:
    ctx->pc = 0x802FF29Cu;
    // 802FF29C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF2A0:
    ctx->pc = 0x802FF2A0u;
    // 802FF2A0: andc   r5, r0, r5
    {
        ctx->gpr[5] = ctx->gpr[0] & ~ctx->gpr[5];
    }

label_802FF2A4:
    ctx->pc = 0x802FF2A4u;
    // 802FF2A4: rlwinm. r29, r5, 1, 31, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[5], 1u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[29];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802FF2A8:
    ctx->pc = 0x802FF2A8u;
    // 802FF2A8: lwz     r31, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FF2AC:
    ctx->pc = 0x802FF2ACu;
    // 802FF2AC: lwz     r30, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802FF2B0:
    ctx->pc = 0x802FF2B0u;
    // 802FF2B0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF2B4:
    ctx->pc = 0x802FF2B4u;
    // 802FF2B4: lwz     r6, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802FF2B8:
    ctx->pc = 0x802FF2B8u;
    // 802FF2B8: lbz     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FF2BC:
    ctx->pc = 0x802FF2BCu;
    // 802FF2BC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802FF2C0:
    ctx->pc = 0x802FF2C0u;
    // 802FF2C0: rlwimi r0, r5, 1, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 1u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_802FF2C4:
    ctx->pc = 0x802FF2C4u;
    // 802FF2C4: stb     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FF2C8:
    ctx->pc = 0x802FF2C8u;
    // 802FF2C8: bc    12, 2, 0x802FF2EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF2EC;
        }
    }

label_802FF2CC:
    ctx->pc = 0x802FF2CCu;
    ctx->downcount -= 8;
    // 802FF2CC: lwz     r3, 424(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF2D0:
    ctx->pc = 0x802FF2D0u;
    // 802FF2D0: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF2D4:
    ctx->pc = 0x802FF2D4u;
    // 802FF2D4: li      r4, 30010
    ctx->gpr[4] = (u32)(s32)(30010);

label_802FF2D8:
    ctx->pc = 0x802FF2D8u;
    // 802FF2D8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802FF2DC:
    ctx->pc = 0x802FF2DCu;
    // 802FF2DC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802FF2E0:
    ctx->pc = 0x802FF2E0u;
    // 802FF2E0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802FF2E4:
    ctx->pc = 0x802FF2E4u;
    // 802FF2E4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802FF2E8:
    ctx->pc = 0x802FF2E8u;
    // 802FF2E8: bl      0x80261714
    {
            ctx->lr = 0x802FF2ECu;
            ctx->pc = 0x80261714u;
            return;
    }

label_802FF2EC:
    ctx->pc = 0x802FF2ECu;
    ctx->downcount -= 8;
    // 802FF2EC: lwz     r4, 428(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(428);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF2F0:
    ctx->pc = 0x802FF2F0u;
    // 802FF2F0: cntlzw r0, r29
    {
        u32 v = ctx->gpr[29];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802FF2F4:
    ctx->pc = 0x802FF2F4u;
    // 802FF2F4: cmpwi   r29, 0
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

label_802FF2F8:
    ctx->pc = 0x802FF2F8u;
    // 802FF2F8: lbz     r3, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802FF2FC:
    ctx->pc = 0x802FF2FCu;
    // 802FF2FC: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802FF300:
    ctx->pc = 0x802FF300u;
    // 802FF300: rlwimi r0, r3, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[3], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802FF304:
    ctx->pc = 0x802FF304u;
    // 802FF304: stb     r0, 187(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FF308:
    ctx->pc = 0x802FF308u;
    // 802FF308: bc    4, 2, 0x802FF32C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FF32C;
        }
    }

label_802FF30C:
    ctx->pc = 0x802FF30Cu;
    ctx->downcount -= 8;
    // 802FF30C: lwz     r3, 428(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(428);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF310:
    ctx->pc = 0x802FF310u;
    // 802FF310: or   r8, r31, r31
    {
        ctx->gpr[8] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF314:
    ctx->pc = 0x802FF314u;
    // 802FF314: li      r4, 30010
    ctx->gpr[4] = (u32)(s32)(30010);

label_802FF318:
    ctx->pc = 0x802FF318u;
    // 802FF318: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802FF31C:
    ctx->pc = 0x802FF31Cu;
    // 802FF31C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802FF320:
    ctx->pc = 0x802FF320u;
    // 802FF320: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802FF324:
    ctx->pc = 0x802FF324u;
    // 802FF324: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802FF328:
    ctx->pc = 0x802FF328u;
    // 802FF328: bl      0x80261714
    {
            ctx->lr = 0x802FF32Cu;
            ctx->pc = 0x80261714u;
            return;
    }

label_802FF32C:
    ctx->pc = 0x802FF32Cu;
    ctx->downcount -= 8;
    // 802FF32C: lwz     r3, 432(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(432);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF330:
    ctx->pc = 0x802FF330u;
    // 802FF330: or   r8, r30, r30
    {
        ctx->gpr[8] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF334:
    ctx->pc = 0x802FF334u;
    // 802FF334: li      r4, 30011
    ctx->gpr[4] = (u32)(s32)(30011);

label_802FF338:
    ctx->pc = 0x802FF338u;
    // 802FF338: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802FF33C:
    ctx->pc = 0x802FF33Cu;
    // 802FF33C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802FF340:
    ctx->pc = 0x802FF340u;
    // 802FF340: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802FF344:
    ctx->pc = 0x802FF344u;
    // 802FF344: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802FF348:
    ctx->pc = 0x802FF348u;
    // 802FF348: bl      0x80261714
    {
            ctx->lr = 0x802FF34Cu;
            ctx->pc = 0x80261714u;
            return;
    }

label_802FF34C:
    ctx->pc = 0x802FF34Cu;
    ctx->downcount -= 16;
    // 802FF34C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF350:
    ctx->pc = 0x802FF350u;
    // 802FF350: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF354:
    ctx->pc = 0x802FF354u;
    // 802FF354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF358:
    ctx->pc = 0x802FF358u;
    // 802FF358: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FF35C:
    ctx->pc = 0x802FF35Cu;
    // 802FF35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF360:
    ctx->pc = 0x802FF360u;
    ctx->downcount -= 7;
    // 802FF360: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF364:
    ctx->pc = 0x802FF364u;
    // 802FF364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF368:
    ctx->pc = 0x802FF368u;
    // 802FF368: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF36C:
    ctx->pc = 0x802FF36Cu;
    // 802FF36C: lwz     r4, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF370:
    // 802FF370: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_802FF374:
    // 802FF374: cmplwi  r0, 0x0009
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0009u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF378:
    // 802FF378: bc    12, 1, 0x802FF460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF460;
        }
    }

label_802FF37C:
    ctx->downcount -= 7;
    // 802FF37C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802FF380:
    // 802FF380: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FF384:
    // 802FF384: addi    r4, r4, 23552
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23552);

label_802FF388:
    ctx->pc = 0x802FF388u;
    // 802FF388: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF38C:
    ctx->pc = 0x802FF38Cu;
    // 802FF38C: mtctr    r4
    ctx->ctr = ctx->gpr[4];

label_802FF390:
    ctx->pc = 0x802FF390u;
    // 802FF390: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802FF394:
    ctx->downcount -= 2;
    // 802FF394: li      r3, 169
    ctx->gpr[3] = (u32)(s32)(169);

label_802FF398:
    // 802FF398: bl      0x802B7138
    {
            ctx->lr = 0x802FF39Cu;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF39C:
    ctx->downcount -= 1;
    // 802FF39C: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF3A0:
    ctx->downcount -= 2;
    // 802FF3A0: li      r3, 168
    ctx->gpr[3] = (u32)(s32)(168);

label_802FF3A4:
    // 802FF3A4: bl      0x802B7138
    {
            ctx->lr = 0x802FF3A8u;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF3A8:
    ctx->downcount -= 2;
    // 802FF3A8: li      r3, 279
    ctx->gpr[3] = (u32)(s32)(279);

label_802FF3AC:
    // 802FF3AC: bl      0x802B73BC
    {
            ctx->lr = 0x802FF3B0u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF3B0:
    ctx->downcount -= 1;
    // 802FF3B0: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF3B4:
    ctx->downcount -= 2;
    // 802FF3B4: li      r3, 171
    ctx->gpr[3] = (u32)(s32)(171);

label_802FF3B8:
    // 802FF3B8: bl      0x802B7138
    {
            ctx->lr = 0x802FF3BCu;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF3BC:
    ctx->downcount -= 2;
    // 802FF3BC: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802FF3C0:
    // 802FF3C0: bl      0x802B73BC
    {
            ctx->lr = 0x802FF3C4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF3C4:
    ctx->downcount -= 2;
    // 802FF3C4: li      r3, 177
    ctx->gpr[3] = (u32)(s32)(177);

label_802FF3C8:
    // 802FF3C8: bl      0x802B73BC
    {
            ctx->lr = 0x802FF3CCu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF3CC:
    ctx->downcount -= 1;
    // 802FF3CC: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF3D0:
    ctx->downcount -= 2;
    // 802FF3D0: li      r3, 171
    ctx->gpr[3] = (u32)(s32)(171);

label_802FF3D4:
    // 802FF3D4: bl      0x802B7138
    {
            ctx->lr = 0x802FF3D8u;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF3D8:
    ctx->downcount -= 2;
    // 802FF3D8: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802FF3DC:
    // 802FF3DC: bl      0x802B73BC
    {
            ctx->lr = 0x802FF3E0u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF3E0:
    ctx->downcount -= 1;
    // 802FF3E0: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF3E4:
    ctx->downcount -= 2;
    // 802FF3E4: li      r3, 171
    ctx->gpr[3] = (u32)(s32)(171);

label_802FF3E8:
    // 802FF3E8: bl      0x802B7138
    {
            ctx->lr = 0x802FF3ECu;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF3EC:
    ctx->downcount -= 2;
    // 802FF3EC: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802FF3F0:
    // 802FF3F0: bl      0x802B73BC
    {
            ctx->lr = 0x802FF3F4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF3F4:
    ctx->downcount -= 1;
    // 802FF3F4: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF3F8:
    ctx->downcount -= 2;
    // 802FF3F8: li      r3, 173
    ctx->gpr[3] = (u32)(s32)(173);

label_802FF3FC:
    // 802FF3FC: bl      0x802B7138
    {
            ctx->lr = 0x802FF400u;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF400:
    ctx->downcount -= 2;
    // 802FF400: li      r3, 274
    ctx->gpr[3] = (u32)(s32)(274);

label_802FF404:
    // 802FF404: bl      0x802B73BC
    {
            ctx->lr = 0x802FF408u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF408:
    ctx->downcount -= 2;
    // 802FF408: li      r3, 177
    ctx->gpr[3] = (u32)(s32)(177);

label_802FF40C:
    // 802FF40C: bl      0x802B73BC
    {
            ctx->lr = 0x802FF410u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF410:
    ctx->downcount -= 1;
    // 802FF410: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF414:
    ctx->downcount -= 2;
    // 802FF414: li      r3, 174
    ctx->gpr[3] = (u32)(s32)(174);

label_802FF418:
    // 802FF418: bl      0x802B7138
    {
            ctx->lr = 0x802FF41Cu;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF41C:
    ctx->downcount -= 2;
    // 802FF41C: li      r3, 275
    ctx->gpr[3] = (u32)(s32)(275);

label_802FF420:
    // 802FF420: bl      0x802B73BC
    {
            ctx->lr = 0x802FF424u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF424:
    ctx->downcount -= 2;
    // 802FF424: li      r3, 177
    ctx->gpr[3] = (u32)(s32)(177);

label_802FF428:
    // 802FF428: bl      0x802B73BC
    {
            ctx->lr = 0x802FF42Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF42C:
    ctx->downcount -= 1;
    // 802FF42C: b       0x802FF460
    {
            goto label_802FF460;
    }

label_802FF430:
    ctx->pc = 0x802FF430u;
    ctx->downcount -= 3;
    // 802FF430: lwz     r0, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF434:
    // 802FF434: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF438:
    // 802FF438: bc    4, 2, 0x802FF448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FF448;
        }
    }

label_802FF43C:
    ctx->downcount -= 2;
    // 802FF43C: li      r3, 170
    ctx->gpr[3] = (u32)(s32)(170);

label_802FF440:
    // 802FF440: bl      0x802B7138
    {
            ctx->lr = 0x802FF444u;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF444:
    ctx->downcount -= 1;
    // 802FF444: b       0x802FF450
    {
            goto label_802FF450;
    }

label_802FF448:
    ctx->downcount -= 2;
    // 802FF448: li      r3, 171
    ctx->gpr[3] = (u32)(s32)(171);

label_802FF44C:
    // 802FF44C: bl      0x802B7138
    {
            ctx->lr = 0x802FF450u;
            ctx->pc = 0x802B7138u;
            return;
    }

label_802FF450:
    ctx->downcount -= 2;
    // 802FF450: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802FF454:
    // 802FF454: bl      0x802B73BC
    {
            ctx->lr = 0x802FF458u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF458:
    ctx->downcount -= 2;
    // 802FF458: li      r3, 177
    ctx->gpr[3] = (u32)(s32)(177);

label_802FF45C:
    // 802FF45C: bl      0x802B73BC
    {
            ctx->lr = 0x802FF460u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802FF460:
    ctx->pc = 0x802FF460u;
    ctx->downcount -= 5;
    // 802FF460: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF464:
    ctx->pc = 0x802FF464u;
    // 802FF464: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF468:
    // 802FF468: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FF46C:
    ctx->pc = 0x802FF46Cu;
    // 802FF46C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF470:
    ctx->pc = 0x802FF470u;
    ctx->downcount -= 5;
    // 802FF470: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF474:
    ctx->pc = 0x802FF474u;
    // 802FF474: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF478:
    ctx->pc = 0x802FF478u;
    // 802FF478: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF47C:
    // 802FF47C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802FF480:
    // 802FF480: bl      0x8000785C
    {
            ctx->lr = 0x802FF484u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802FF484:
    ctx->downcount -= 3;
    // 802FF484: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF488:
    // 802FF488: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802FF48C:
    // 802FF48C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF490:
    ctx->downcount -= 3;
    // 802FF490: add   r30, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_802FF494:
    // 802FF494: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF498:
    // 802FF498: bl      0x8026F6CC
    {
            ctx->lr = 0x802FF49Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802FF49C:
    ctx->pc = 0x802FF49Cu;
    ctx->downcount -= 4;
    // 802FF49C: lwz     r5, 376(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(376);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF4A0:
    // 802FF4A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF4A4:
    // 802FF4A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802FF4A8:
    // 802FF4A8: bl      0x8025D624
    {
            ctx->lr = 0x802FF4ACu;
            ctx->pc = 0x8025D624u;
            return;
    }

label_802FF4AC:
    ctx->pc = 0x802FF4ACu;
    ctx->downcount -= 9;
    // 802FF4AC: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802FF4B0:
    // 802FF4B0: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_802FF4B4:
    ctx->pc = 0x802FF4B4u;
    // 802FF4B4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802FF4B8:
    ctx->pc = 0x802FF4B8u;
    // 802FF4B8: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4B8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802FF4BC:
    ctx->pc = 0x802FF4BCu;
    // 802FF4BC: stfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4BCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802FF4C0:
    ctx->pc = 0x802FF4C0u;
    // 802FF4C0: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802FF4C4:
    ctx->pc = 0x802FF4C4u;
    // 802FF4C4: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x802FF4C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802FF4C8:
    ctx->pc = 0x802FF4C8u;
    // 802FF4C8: lwz     r3, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF4CC:
    // 802FF4CC: bl      0x8023E498
    {
            ctx->lr = 0x802FF4D0u;
            ctx->pc = 0x8023E498u;
            return;
    }

label_802FF4D0:
    ctx->pc = 0x802FF4D0u;
    ctx->downcount -= 2;
    // 802FF4D0: lwz     r3, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF4D4:
    // 802FF4D4: bl      0x8023E28C
    {
            ctx->lr = 0x802FF4D8u;
            ctx->pc = 0x8023E28Cu;
            return;
    }

label_802FF4D8:
    ctx->downcount -= 4;
    // 802FF4D8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802FF4DC:
    // 802FF4DC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF4E0:
    // 802FF4E0: cmpwi   r29, 8
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF4E4:
    // 802FF4E4: bc    12, 0, 0x802FF490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF490u;
                return;
            }
            goto label_802FF490;
        }
    }

label_802FF4E8:
    ctx->downcount -= 2;
    // 802FF4E8: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802FF4EC:
    // 802FF4EC: bl      0x800078A8
    {
            ctx->lr = 0x802FF4F0u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_802FF4F0:
    ctx->pc = 0x802FF4F0u;
    ctx->downcount -= 5;
    // 802FF4F0: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF4F4:
    ctx->pc = 0x802FF4F4u;
    // 802FF4F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF4F8:
    // 802FF4F8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802FF4FC:
    ctx->pc = 0x802FF4FCu;
    // 802FF4FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF500:
    ctx->pc = 0x802FF500u;
    ctx->downcount -= 17;
    // 802FF500: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF504:
    ctx->pc = 0x802FF504u;
    // 802FF504: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF508:
    ctx->pc = 0x802FF508u;
    // 802FF508: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF50C:
    ctx->pc = 0x802FF50Cu;
    // 802FF50C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF510:
    // 802FF510: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF514:
    // 802FF514: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802FF518:
    // 802FF518: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF51C:
    ctx->downcount -= 3;
    // 802FF51C: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FF520:
    ctx->pc = 0x802FF520u;
    // 802FF520: lwz     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF524:
    // 802FF524: bl      0x8023E888
    {
            ctx->lr = 0x802FF528u;
            ctx->pc = 0x8023E888u;
            return;
    }

label_802FF528:
    ctx->downcount -= 4;
    // 802FF528: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802FF52C:
    // 802FF52C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF530:
    // 802FF530: cmpwi   r30, 8
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF534:
    // 802FF534: bc    12, 0, 0x802FF51C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF51Cu;
                return;
            }
            goto label_802FF51C;
        }
    }

label_802FF538:
    ctx->pc = 0x802FF538u;
    ctx->downcount -= 16;
    // 802FF538: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF53C:
    ctx->pc = 0x802FF53Cu;
    // 802FF53C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF540:
    ctx->pc = 0x802FF540u;
    // 802FF540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF544:
    // 802FF544: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FF548:
    ctx->pc = 0x802FF548u;
    // 802FF548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF54C:
    ctx->pc = 0x802FF54Cu;
    ctx->downcount -= 19;
    // 802FF54C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF550:
    ctx->pc = 0x802FF550u;
    // 802FF550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF554:
    ctx->pc = 0x802FF554u;
    // 802FF554: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF558:
    ctx->pc = 0x802FF558u;
    // 802FF558: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF55C:
    // 802FF55C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF560:
    // 802FF560: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FF564:
    ctx->pc = 0x802FF564u;
    // 802FF564: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF568:
    // 802FF568: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF56C:
    // 802FF56C: bc    12, 0, 0x802FF578
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF578;
        }
    }

label_802FF570:
    ctx->pc = 0x802FF570u;
    ctx->downcount -= 2;
    // 802FF570: lwz     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF574:
    // 802FF574: bl      0x8023E91C
    {
            ctx->lr = 0x802FF578u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF578:
    ctx->pc = 0x802FF578u;
    ctx->downcount -= 3;
    // 802FF578: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF57C:
    // 802FF57C: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF580:
    // 802FF580: bc    12, 2, 0x802FF5B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5B8;
        }
    }

label_802FF584:
    ctx->downcount -= 2;
    // 802FF584: cmpwi   r0, 3
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

label_802FF588:
    // 802FF588: bc    12, 2, 0x802FF5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5C4;
        }
    }

label_802FF58C:
    ctx->downcount -= 2;
    // 802FF58C: cmpwi   r0, 4
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF590:
    // 802FF590: bc    12, 2, 0x802FF5D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5D0;
        }
    }

label_802FF594:
    ctx->downcount -= 2;
    // 802FF594: cmpwi   r0, 5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF598:
    // 802FF598: bc    12, 2, 0x802FF5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5DC;
        }
    }

label_802FF59C:
    ctx->downcount -= 2;
    // 802FF59C: cmpwi   r0, 6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF5A0:
    // 802FF5A0: bc    12, 2, 0x802FF5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5E8;
        }
    }

label_802FF5A4:
    ctx->downcount -= 2;
    // 802FF5A4: cmpwi   r0, 7
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF5A8:
    // 802FF5A8: bc    12, 2, 0x802FF5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF5F4;
        }
    }

label_802FF5AC:
    ctx->downcount -= 2;
    // 802FF5AC: cmpwi   r0, 8
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF5B0:
    // 802FF5B0: bc    12, 2, 0x802FF600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF600;
        }
    }

label_802FF5B4:
    ctx->downcount -= 1;
    // 802FF5B4: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5B8:
    ctx->pc = 0x802FF5B8u;
    ctx->downcount -= 2;
    // 802FF5B8: lwz     r3, 360(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(360);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5BC:
    // 802FF5BC: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5C0u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5C0:
    ctx->downcount -= 1;
    // 802FF5C0: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5C4:
    ctx->pc = 0x802FF5C4u;
    ctx->downcount -= 2;
    // 802FF5C4: lwz     r3, 348(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(348);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5C8:
    // 802FF5C8: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5CCu;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5CC:
    ctx->downcount -= 1;
    // 802FF5CC: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5D0:
    ctx->pc = 0x802FF5D0u;
    ctx->downcount -= 2;
    // 802FF5D0: lwz     r3, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5D4:
    // 802FF5D4: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5D8u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5D8:
    ctx->downcount -= 1;
    // 802FF5D8: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5DC:
    ctx->pc = 0x802FF5DCu;
    ctx->downcount -= 2;
    // 802FF5DC: lwz     r3, 352(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5E0:
    // 802FF5E0: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5E4u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5E4:
    ctx->downcount -= 1;
    // 802FF5E4: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5E8:
    ctx->pc = 0x802FF5E8u;
    ctx->downcount -= 2;
    // 802FF5E8: lwz     r3, 356(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(356);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5EC:
    // 802FF5EC: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5F0u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5F0:
    ctx->downcount -= 1;
    // 802FF5F0: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF5F4:
    ctx->pc = 0x802FF5F4u;
    ctx->downcount -= 2;
    // 802FF5F4: lwz     r3, 368(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF5F8:
    // 802FF5F8: bl      0x8023E91C
    {
            ctx->lr = 0x802FF5FCu;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF5FC:
    ctx->downcount -= 1;
    // 802FF5FC: b       0x802FF608
    {
            goto label_802FF608;
    }

label_802FF600:
    ctx->pc = 0x802FF600u;
    ctx->downcount -= 2;
    // 802FF600: lwz     r3, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FF604:
    // 802FF604: bl      0x8023E91C
    {
            ctx->lr = 0x802FF608u;
            ctx->pc = 0x8023E91Cu;
            return;
    }

label_802FF608:
    ctx->pc = 0x802FF608u;
    ctx->downcount -= 16;
    // 802FF608: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF60C:
    ctx->pc = 0x802FF60Cu;
    // 802FF60C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF610:
    ctx->pc = 0x802FF610u;
    // 802FF610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF614:
    // 802FF614: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FF618:
    ctx->pc = 0x802FF618u;
    // 802FF618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF61C:
    ctx->pc = 0x802FF61Cu;
    ctx->downcount -= 21;
    // 802FF61C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF620:
    ctx->pc = 0x802FF620u;
    // 802FF620: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF624:
    ctx->pc = 0x802FF624u;
    // 802FF624: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF628:
    ctx->pc = 0x802FF628u;
    // 802FF628: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF62C:
    // 802FF62C: lis     r29, -32660
    ctx->gpr[29] = ((u32)(s32)(-32660) << 16);

label_802FF630:
    // 802FF630: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802FF634:
    // 802FF634: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF638:
    // 802FF638: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802FF63C:
    // 802FF63C: addi    r29, r29, 23488
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(23488);

label_802FF640:
    // 802FF640: addi    r30, r30, 23520
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(23520);

label_802FF644:
    // 802FF644: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF648:
    ctx->pc = 0x802FF648u;
    ctx->downcount -= 4;
    // 802FF648: lwz     r4, 84(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF64C:
    // 802FF64C: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802FF650:
    // 802FF650: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FF654:
    // 802FF654: bl      0x801C1C5C
    {
            ctx->lr = 0x802FF658u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802FF658:
    ctx->downcount -= 3;
    // 802FF658: cmpwi   r3, 0
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

label_802FF65C:
    // 802FF65C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF660:
    // 802FF660: bc    12, 2, 0x802FF674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FF674;
        }
    }

label_802FF664:
    ctx->pc = 0x802FF664u;
    ctx->downcount -= 3;
    // 802FF664: lwzx    r4, r29, r31
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF668:
    // 802FF668: li      r5, 14
    ctx->gpr[5] = (u32)(s32)(14);

label_802FF66C:
    // 802FF66C: bl      0x8023EA98
    {
            ctx->lr = 0x802FF670u;
            ctx->pc = 0x8023EA98u;
            return;
    }

label_802FF670:
    ctx->downcount -= 1;
    // 802FF670: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF674:
    ctx->downcount -= 5;
    // 802FF674: add   r28, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802FF678:
    // 802FF678: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802FF67C:
    ctx->pc = 0x802FF67Cu;
    // 802FF67C: stw     r0, 344(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF680:
    ctx->pc = 0x802FF680u;
    // 802FF680: lwzx    r4, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF684:
    // 802FF684: bl      0x8026F970
    {
            ctx->lr = 0x802FF688u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802FF688:
    ctx->downcount -= 5;
    // 802FF688: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802FF68C:
    ctx->pc = 0x802FF68Cu;
    // 802FF68C: stw     r3, 376(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FF690:
    // 802FF690: cmpwi   r27, 8
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF694:
    // 802FF694: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF698:
    // 802FF698: bc    12, 0, 0x802FF648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF648u;
                return;
            }
            goto label_802FF648;
        }
    }

label_802FF69C:
    ctx->pc = 0x802FF69Cu;
    ctx->downcount -= 16;
    // 802FF69C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF6A0:
    ctx->pc = 0x802FF6A0u;
    // 802FF6A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF6A4:
    ctx->pc = 0x802FF6A4u;
    // 802FF6A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF6A8:
    // 802FF6A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FF6AC:
    ctx->pc = 0x802FF6ACu;
    // 802FF6AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF6B0:
    ctx->downcount -= 1;
    // 802FF6B0: b       0x802FF500
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF500u;
                return;
            }
            goto label_802FF500;
    }

label_802FF6B4:
    ctx->downcount -= 1;
    // 802FF6B4: b       0x802FF470
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF470u;
                return;
            }
            goto label_802FF470;
    }

label_802FF6B8:
    ctx->pc = 0x802FF6B8u;
    ctx->downcount -= 28;
    // 802FF6B8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF6BC:
    ctx->pc = 0x802FF6BCu;
    // 802FF6BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF6C0:
    // 802FF6C0: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802FF6C4:
    // 802FF6C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802FF6C8:
    ctx->pc = 0x802FF6C8u;
    // 802FF6C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF6CC:
    // 802FF6CC: addi    r4, r4, 23408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23408);

label_802FF6D0:
    // 802FF6D0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802FF6D4:
    // 802FF6D4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802FF6D8:
    ctx->pc = 0x802FF6D8u;
    // 802FF6D8: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF6DC:
    // 802FF6DC: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_802FF6E0:
    // 802FF6E0: addi    r30, r30, 14400
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(14400);

label_802FF6E4:
    // 802FF6E4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF6E8:
    ctx->pc = 0x802FF6E8u;
    // 802FF6E8: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF6EC:
    // 802FF6EC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802FF6F0:
    // 802FF6F0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FF6F4:
    ctx->pc = 0x802FF6F4u;
    // 802FF6F4: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF6F8:
    // 802FF6F8: addi    r4, r30, 416
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(416);

label_802FF6FC:
    // 802FF6FC: bl      0x802703A8
    {
            ctx->lr = 0x802FF700u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_802FF700:
    ctx->downcount -= 6;
    // 802FF700: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF704:
    // 802FF704: addi    r5, r30, 434
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(434);

label_802FF708:
    // 802FF708: addi    r6, r30, 437
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(437);

label_802FF70C:
    // 802FF70C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FF710:
    // 802FF710: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802FF714:
    // 802FF714: bl      0x8027035C
    {
            ctx->lr = 0x802FF718u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802FF718:
    ctx->downcount -= 6;
    // 802FF718: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF71C:
    // 802FF71C: addi    r5, r30, 448
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(448);

label_802FF720:
    // 802FF720: addi    r6, r30, 437
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(437);

label_802FF724:
    // 802FF724: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802FF728:
    // 802FF728: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802FF72C:
    // 802FF72C: bl      0x8027035C
    {
            ctx->lr = 0x802FF730u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802FF730:
    ctx->downcount -= 6;
    // 802FF730: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF734:
    // 802FF734: addi    r5, r30, 452
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(452);

label_802FF738:
    // 802FF738: addi    r6, r30, 457
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(457);

label_802FF73C:
    // 802FF73C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802FF740:
    // 802FF740: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802FF744:
    // 802FF744: bl      0x8027035C
    {
            ctx->lr = 0x802FF748u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802FF748:
    ctx->downcount -= 4;
    // 802FF748: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF74C:
    // 802FF74C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FF750:
    // 802FF750: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802FF754:
    // 802FF754: bl      0x80270194
    {
            ctx->lr = 0x802FF758u;
            ctx->pc = 0x80270194u;
            return;
    }

label_802FF758:
    ctx->downcount -= 2;
    // 802FF758: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FF75C:
    // 802FF75C: bl      0x802FF61C
    {
            ctx->lr = 0x802FF760u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF61Cu;
                return;
            }
            goto label_802FF61C;
    }

label_802FF760:
    ctx->downcount -= 4;
    // 802FF760: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802FF764:
    // 802FF764: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802FF768:
    // 802FF768: addi    r30, r30, 23424
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(23424);

label_802FF76C:
    // 802FF76C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF770:
    ctx->pc = 0x802FF770u;
    ctx->downcount -= 3;
    // 802FF770: lwzx    r4, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF774:
    // 802FF774: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF778:
    // 802FF778: bl      0x8026F970
    {
            ctx->lr = 0x802FF77Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802FF77C:
    ctx->downcount -= 6;
    // 802FF77C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802FF780:
    // 802FF780: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802FF784:
    // 802FF784: cmpwi   r29, 4
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

label_802FF788:
    ctx->pc = 0x802FF788u;
    // 802FF788: stw     r3, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FF78C:
    // 802FF78C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF790:
    // 802FF790: bc    12, 0, 0x802FF770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF770u;
                return;
            }
            goto label_802FF770;
        }
    }

label_802FF794:
    ctx->downcount -= 4;
    // 802FF794: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802FF798:
    // 802FF798: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802FF79C:
    // 802FF79C: addi    r30, r30, 23440
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(23440);

label_802FF7A0:
    // 802FF7A0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF7A4:
    ctx->pc = 0x802FF7A4u;
    ctx->downcount -= 3;
    // 802FF7A4: lwzx    r4, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF7A8:
    // 802FF7A8: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF7AC:
    // 802FF7AC: bl      0x8026F968
    {
            ctx->lr = 0x802FF7B0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802FF7B0:
    ctx->downcount -= 6;
    // 802FF7B0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802FF7B4:
    // 802FF7B4: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802FF7B8:
    // 802FF7B8: cmpwi   r29, 3
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF7BC:
    ctx->pc = 0x802FF7BCu;
    // 802FF7BC: stw     r3, 424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FF7C0:
    // 802FF7C0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF7C4:
    // 802FF7C4: bc    12, 0, 0x802FF7A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF7A4u;
                return;
            }
            goto label_802FF7A4;
        }
    }

label_802FF7C8:
    ctx->downcount -= 4;
    // 802FF7C8: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802FF7CC:
    // 802FF7CC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802FF7D0:
    // 802FF7D0: addi    r30, r30, 23456
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(23456);

label_802FF7D4:
    // 802FF7D4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FF7D8:
    ctx->pc = 0x802FF7D8u;
    ctx->downcount -= 3;
    // 802FF7D8: lwzx    r4, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FF7DC:
    // 802FF7DC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802FF7E0:
    // 802FF7E0: bl      0x8026F960
    {
            ctx->lr = 0x802FF7E4u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802FF7E4:
    ctx->downcount -= 6;
    // 802FF7E4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802FF7E8:
    // 802FF7E8: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802FF7EC:
    // 802FF7EC: cmpwi   r29, 8
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FF7F0:
    ctx->pc = 0x802FF7F0u;
    // 802FF7F0: stw     r3, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FF7F4:
    // 802FF7F4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FF7F8:
    // 802FF7F8: bc    12, 0, 0x802FF7D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF7D8u;
                return;
            }
            goto label_802FF7D8;
        }
    }

label_802FF7FC:
    ctx->pc = 0x802FF7FCu;
    ctx->downcount -= 16;
    // 802FF7FC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF800:
    ctx->pc = 0x802FF800u;
    // 802FF800: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF804:
    ctx->pc = 0x802FF804u;
    // 802FF804: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF808:
    // 802FF808: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FF80C:
    ctx->pc = 0x802FF80Cu;
    // 802FF80C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF810:
    ctx->pc = 0x802FF810u;
    ctx->downcount -= 37;
    // 802FF810: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF814:
    ctx->pc = 0x802FF814u;
    // 802FF814: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF818:
    // 802FF818: addi    r7, r3, 308
    ctx->gpr[7] = ctx->gpr[3] + (u32)(s32)(308);

label_802FF81C:
    // 802FF81C: addi    r6, r4, 32
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(32);

label_802FF820:
    ctx->pc = 0x802FF820u;
    // 802FF820: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF824:
    // 802FF824: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_802FF828:
    ctx->pc = 0x802FF828u;
    // 802FF828: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF82C:
    // 802FF82C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF830:
    // 802FF830: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FF834:
    ctx->pc = 0x802FF834u;
    // 802FF834: lwz     r5, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF838:
    ctx->pc = 0x802FF838u;
    // 802FF838: stw     r5, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF83C:
    ctx->pc = 0x802FF83Cu;
    // 802FF83C: lwz     r5, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF840:
    ctx->pc = 0x802FF840u;
    // 802FF840: stw     r5, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF844:
    ctx->pc = 0x802FF844u;
    // 802FF844: lwz     r5, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF848:
    ctx->pc = 0x802FF848u;
    // 802FF848: stw     r5, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF84C:
    ctx->pc = 0x802FF84Cu;
    // 802FF84C: lwz     r5, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF850:
    ctx->pc = 0x802FF850u;
    // 802FF850: stw     r5, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF854:
    ctx->pc = 0x802FF854u;
    // 802FF854: lwz     r5, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF858:
    ctx->pc = 0x802FF858u;
    // 802FF858: stw     r5, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF85C:
    ctx->pc = 0x802FF85Cu;
    // 802FF85C: lwz     r5, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF860:
    ctx->pc = 0x802FF860u;
    // 802FF860: stw     r5, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF864:
    ctx->pc = 0x802FF864u;
    // 802FF864: lwz     r5, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF868:
    ctx->pc = 0x802FF868u;
    // 802FF868: stw     r5, 304(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF86C:
    ctx->pc = 0x802FF86Cu;
    // 802FF86C: lwz     r5, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF870:
    ctx->pc = 0x802FF870u;
    // 802FF870: stw     r5, 308(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF874:
    ctx->pc = 0x802FF874u;
    // 802FF874: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FF878:
    loop_802FF878(ctx);
    if (ctx->pc == 0x802FF88Cu) goto label_802FF88C;
    return;
label_802FF87C:
    ctx->pc = 0x802FF87Cu;
    // 802FF87C: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_802FF880:
    ctx->pc = 0x802FF880u;
    // 802FF880: stw     r5, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF884:
    ctx->pc = 0x802FF884u;
    // 802FF884: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_802FF888:
    // 802FF888: bc    16, 0, 0x802FF878
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF878u;
                return;
            }
            goto label_802FF878;
        }
    }

label_802FF88C:
    ctx->pc = 0x802FF88Cu;
    ctx->downcount -= 4;
    // 802FF88C: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF890:
    ctx->pc = 0x802FF890u;
    // 802FF890: stw     r0, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF894:
    // 802FF894: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF898:
    // 802FF898: bl      0x80371554
    {
            ctx->lr = 0x802FF89Cu;
            ctx->pc = 0x80371554u;
            return;
    }

label_802FF89C:
    ctx->downcount -= 4;
    // 802FF89C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802FF8A0:
    // 802FF8A0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802FF8A4:
    // 802FF8A4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802FF8A8:
    // 802FF8A8: bl      0x8026FEF0
    {
            ctx->lr = 0x802FF8ACu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802FF8AC:
    ctx->downcount -= 3;
    // 802FF8AC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802FF8B0:
    // 802FF8B0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802FF8B4:
    // 802FF8B4: bl      0x8026F6AC
    {
            ctx->lr = 0x802FF8B8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802FF8B8:
    ctx->downcount -= 1;
    // 802FF8B8: bl      0x8025EC94
    {
            ctx->lr = 0x802FF8BCu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802FF8BC:
    ctx->downcount -= 3;
    // 802FF8BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF8C0:
    // 802FF8C0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF8C4:
    // 802FF8C4: bl      0x802FF288
    {
            ctx->lr = 0x802FF8C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF288u;
                return;
            }
            goto label_802FF288;
    }

label_802FF8C8:
    ctx->pc = 0x802FF8C8u;
    ctx->downcount -= 4;
    // 802FF8C8: lwz     r29, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802FF8CC:
    // 802FF8CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF8D0:
    // 802FF8D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FF8D4:
    // 802FF8D4: bl      0x802FF12C
    {
            ctx->lr = 0x802FF8D8u;
            ctx->pc = 0x802FF12Cu;
            return;
    }

label_802FF8D8:
    ctx->pc = 0x802FF8D8u;
    ctx->downcount -= 17;
    // 802FF8D8: lwz     r5, 412(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(412);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802FF8DC:
    // 802FF8DC: addi    r0, r29, -1
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(-1);

label_802FF8E0:
    // 802FF8E0: cntlzw r3, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[3] = n;
    }

label_802FF8E4:
    ctx->pc = 0x802FF8E4u;
    // 802FF8E4: lbz     r4, 187(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802FF8E8:
    // 802FF8E8: rlwinm r3, r3, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 27u) & 0x07FFFFFFu;
    }

label_802FF8EC:
    // 802FF8EC: addi    r0, r29, -2
    ctx->gpr[0] = ctx->gpr[29] + (u32)(s32)(-2);

label_802FF8F0:
    // 802FF8F0: rlwimi r3, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[3] = (ctx->gpr[3] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802FF8F4:
    ctx->pc = 0x802FF8F4u;
    // 802FF8F4: stb     r3, 187(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_802FF8F8:
    // 802FF8F8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802FF8FC:
    // 802FF8FC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FF900:
    ctx->pc = 0x802FF900u;
    // 802FF900: lwz     r6, 416(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(416);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802FF904:
    // 802FF904: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802FF908:
    // 802FF908: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF90C:
    ctx->pc = 0x802FF90Cu;
    // 802FF90C: lbz     r5, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802FF910:
    // 802FF910: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802FF914:
    ctx->pc = 0x802FF914u;
    // 802FF914: stb     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FF918:
    // 802FF918: bl      0x802FF0C0
    {
            ctx->lr = 0x802FF91Cu;
            ctx->pc = 0x802FF0C0u;
            return;
    }

label_802FF91C:
    ctx->downcount -= 3;
    // 802FF91C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF920:
    // 802FF920: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF924:
    // 802FF924: bl      0x802FF1D8
    {
            ctx->lr = 0x802FF928u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF1D8u;
                return;
            }
            goto label_802FF1D8;
    }

label_802FF928:
    ctx->downcount -= 3;
    // 802FF928: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF92C:
    // 802FF92C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FF930:
    // 802FF930: bl      0x802FF54C
    {
            ctx->lr = 0x802FF934u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF54Cu;
                return;
            }
            goto label_802FF54C;
    }

label_802FF934:
    ctx->pc = 0x802FF934u;
    ctx->downcount -= 16;
    // 802FF934: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FF938:
    ctx->pc = 0x802FF938u;
    // 802FF938: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FF93C:
    ctx->pc = 0x802FF93Cu;
    // 802FF93C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FF940:
    // 802FF940: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FF944:
    ctx->pc = 0x802FF944u;
    // 802FF944: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FF948:
    ctx->pc = 0x802FF948u;
    ctx->downcount -= 18;
    // 802FF948: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FF94C:
    ctx->pc = 0x802FF94Cu;
    // 802FF94C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FF950:
    ctx->pc = 0x802FF950u;
    // 802FF950: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF954:
    ctx->pc = 0x802FF954u;
    // 802FF954: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FF958:
    // 802FF958: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FF95C:
    // 802FF95C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FF960:
    // 802FF960: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802FF964:
    // 802FF964: bl      0x803715C0
    {
            ctx->lr = 0x802FF968u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_802FF968:
    ctx->downcount -= 31;
    // 802FF968: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802FF96C:
    // 802FF96C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802FF970:
    // 802FF970: addi    r4, r4, 23592
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23592);

label_802FF974:
    // 802FF974: lis     r8, -32660
    ctx->gpr[8] = ((u32)(s32)(-32660) << 16);

label_802FF978:
    // 802FF978: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_802FF97C:
    // 802FF97C: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_802FF980:
    // 802FF980: addi    r5, r4, 8
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(8);

label_802FF984:
    // 802FF984: addi    r10, r4, 120
    ctx->gpr[10] = ctx->gpr[4] + (u32)(s32)(120);

label_802FF988:
    // 802FF988: addi    r9, r4, 136
    ctx->gpr[9] = ctx->gpr[4] + (u32)(s32)(136);

label_802FF98C:
    // 802FF98C: addi    r8, r8, 16568
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(16568);

label_802FF990:
    // 802FF990: li      r7, 14
    ctx->gpr[7] = (u32)(s32)(14);

label_802FF994:
    // 802FF994: li      r6, 10
    ctx->gpr[6] = (u32)(s32)(10);

label_802FF998:
    ctx->pc = 0x802FF998u;
    // 802FF998: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FF99C:
    // 802FF99C: addi    r3, r3, 14400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14400);

label_802FF9A0:
    // 802FF9A0: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802FF9A4:
    ctx->pc = 0x802FF9A4u;
    // 802FF9A4: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802FF9A8:
    // 802FF9A8: addi    r4, r3, 467
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(467);

label_802FF9AC:
    // 802FF9AC: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_802FF9B0:
    ctx->pc = 0x802FF9B0u;
    // 802FF9B0: stw     r10, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_802FF9B4:
    ctx->pc = 0x802FF9B4u;
    // 802FF9B4: stw     r9, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[9]);
    }

label_802FF9B8:
    ctx->pc = 0x802FF9B8u;
    // 802FF9B8: stw     r8, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802FF9BC:
    ctx->pc = 0x802FF9BCu;
    // 802FF9BC: stw     r30, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FF9C0:
    ctx->pc = 0x802FF9C0u;
    // 802FF9C0: stw     r30, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FF9C4:
    ctx->pc = 0x802FF9C4u;
    // 802FF9C4: stw     r7, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802FF9C8:
    ctx->pc = 0x802FF9C8u;
    // 802FF9C8: stw     r6, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802FF9CC:
    ctx->pc = 0x802FF9CCu;
    // 802FF9CC: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF9D0:
    ctx->pc = 0x802FF9D0u;
    // 802FF9D0: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF9D4:
    ctx->pc = 0x802FF9D4u;
    // 802FF9D4: stw     r30, 304(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FF9D8:
    ctx->pc = 0x802FF9D8u;
    // 802FF9D8: stw     r0, 308(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(308);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FF9DC:
    ctx->pc = 0x802FF9DCu;
    // 802FF9DC: stw     r30, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FF9E0:
    // 802FF9E0: bl      0x8000E7F4
    {
            ctx->lr = 0x802FF9E4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802FF9E4:
    ctx->downcount -= 6;
    // 802FF9E4: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_802FF9E8:
    // 802FF9E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FF9EC:
    ctx->pc = 0x802FF9ECu;
    // 802FF9EC: stw     r30, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FF9F0:
    ctx->pc = 0x802FF9F0u;
    // 802FF9F0: stw     r29, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802FF9F4:
    ctx->pc = 0x802FF9F4u;
    // 802FF9F4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FF9F8:
    loop_802FF9F8(ctx);
    if (ctx->pc == 0x802FFA0Cu) goto label_802FFA0C;
    return;
label_802FF9FC:
    // 802FF9FC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802FFA00:
    ctx->pc = 0x802FFA00u;
    // 802FFA00: stw     r30, 344(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FFA04:
    ctx->pc = 0x802FFA04u;
    // 802FFA04: stw     r30, 376(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FFA08:
    // 802FFA08: bc    16, 0, 0x802FF9F8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF9F8u;
                return;
            }
            goto label_802FF9F8;
        }
    }

label_802FFA0C:
    ctx->downcount -= 5;
    // 802FFA0C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802FFA10:
    // 802FFA10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802FFA14:
    // 802FFA14: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802FFA18:
    ctx->pc = 0x802FFA18u;
    // 802FFA18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FFA1C:
    loop_802FFA1C(ctx);
    if (ctx->pc == 0x802FFA2Cu) goto label_802FFA2C;
    return;
label_802FFA20:
    // 802FFA20: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802FFA24:
    ctx->pc = 0x802FFA24u;
    // 802FFA24: stw     r5, 408(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(408);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FFA28:
    // 802FFA28: bc    16, 0, 0x802FFA1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA1Cu;
                return;
            }
            goto label_802FFA1C;
        }
    }

label_802FFA2C:
    ctx->downcount -= 5;
    // 802FFA2C: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_802FFA30:
    // 802FFA30: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802FFA34:
    // 802FFA34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802FFA38:
    ctx->pc = 0x802FFA38u;
    // 802FFA38: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FFA3C:
    loop_802FFA3C(ctx);
    if (ctx->pc == 0x802FFA4Cu) goto label_802FFA4C;
    return;
label_802FFA40:
    // 802FFA40: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802FFA44:
    ctx->pc = 0x802FFA44u;
    // 802FFA44: stw     r5, 424(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(424);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FFA48:
    // 802FFA48: bc    16, 0, 0x802FFA3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA3Cu;
                return;
            }
            goto label_802FFA3C;
        }
    }

label_802FFA4C:
    ctx->downcount -= 5;
    // 802FFA4C: li      r0, 8
    ctx->gpr[0] = (u32)(s32)(8);

label_802FFA50:
    // 802FFA50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802FFA54:
    // 802FFA54: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802FFA58:
    ctx->pc = 0x802FFA58u;
    // 802FFA58: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FFA5C:
    loop_802FFA5C(ctx);
    if (ctx->pc == 0x802FFA6Cu) goto label_802FFA6C;
    return;
label_802FFA60:
    // 802FFA60: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802FFA64:
    ctx->pc = 0x802FFA64u;
    // 802FFA64: stw     r5, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802FFA68:
    // 802FFA68: bc    16, 0, 0x802FFA5C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA5Cu;
                return;
            }
            goto label_802FFA5C;
        }
    }

label_802FFA6C:
    ctx->downcount -= 17;
    // 802FFA6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FFA70:
    ctx->pc = 0x802FFA70u;
    // 802FFA70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FFA74:
    ctx->pc = 0x802FFA74u;
    // 802FFA74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFA78:
    ctx->pc = 0x802FFA78u;
    // 802FFA78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFA7C:
    // 802FFA7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FFA80:
    ctx->pc = 0x802FFA80u;
    // 802FFA80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFA84:
    ctx->pc = 0x802FFA84u;
    ctx->downcount -= 1;
    // 802FFA84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFA88:
    ctx->pc = 0x802FFA88u;
    ctx->downcount -= 18;
    // 802FFA88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFA8C:
    ctx->pc = 0x802FFA8Cu;
    // 802FFA8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFA90:
    // 802FFA90: cmpwi   r3, 0
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

label_802FFA94:
    ctx->pc = 0x802FFA94u;
    // 802FFA94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFA98:
    ctx->pc = 0x802FFA98u;
    // 802FFA98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FFA9C:
    // 802FFA9C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFAA0:
    // 802FFAA0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FFAA4:
    // 802FFAA4: bc    12, 2, 0x802FFAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFAD8;
        }
    }

label_802FFAA8:
    ctx->downcount -= 1;
    // 802FFAA8: bc    12, 2, 0x802FFAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFAC8;
        }
    }

label_802FFAAC:
    ctx->downcount -= 1;
    // 802FFAAC: bc    12, 2, 0x802FFAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFAC8;
        }
    }

label_802FFAB0:
    ctx->downcount -= 3;
    // 802FFAB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFAB4:
    // 802FFAB4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802FFAB8:
    // 802FFAB8: bl      0x801F5C24
    {
            ctx->lr = 0x802FFABCu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802FFABC:
    ctx->downcount -= 3;
    // 802FFABC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFAC0:
    // 802FFAC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFAC4:
    // 802FFAC4: bl      0x801F9C70
    {
            ctx->lr = 0x802FFAC8u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802FFAC8:
    ctx->downcount -= 2;
    // 802FFAC8: cmpwi   r31, 0
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

label_802FFACC:
    // 802FFACC: bc    4, 1, 0x802FFAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FFAD8;
        }
    }

label_802FFAD0:
    ctx->downcount -= 2;
    // 802FFAD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFAD4:
    // 802FFAD4: bl      0x801C1C90
    {
            ctx->lr = 0x802FFAD8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802FFAD8:
    ctx->downcount -= 17;
    // 802FFAD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFADC:
    ctx->pc = 0x802FFADCu;
    // 802FFADC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FFAE0:
    ctx->pc = 0x802FFAE0u;
    // 802FFAE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFAE4:
    ctx->pc = 0x802FFAE4u;
    // 802FFAE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFAE8:
    // 802FFAE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFAEC:
    ctx->pc = 0x802FFAECu;
    // 802FFAEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFAF0:
    ctx->downcount -= 2;
    // 802FFAF0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802FFAF4:
    // 802FFAF4: b       0x802FFA88
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA88u;
                return;
            }
            goto label_802FFA88;
    }

label_802FFAF8:
    ctx->downcount -= 2;
    // 802FFAF8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802FFAFC:
    // 802FFAFC: b       0x802FF360
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF360u;
                return;
            }
            goto label_802FF360;
    }

label_802FFB00:
    ctx->downcount -= 2;
    // 802FFB00: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802FFB04:
    // 802FFB04: b       0x802FF6B4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF6B4u;
                return;
            }
            goto label_802FF6B4;
    }

label_802FFB08:
    ctx->downcount -= 2;
    // 802FFB08: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802FFB0C:
    // 802FFB0C: b       0x802FFA88
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFA88u;
                return;
            }
            goto label_802FFA88;
    }

label_802FFB10:
    ctx->downcount -= 2;
    // 802FFB10: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802FFB14:
    // 802FFB14: b       0x802FF6B0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF6B0u;
                return;
            }
            goto label_802FF6B0;
    }

label_802FFB18:
    ctx->pc = 0x802FFB18u;
    ctx->downcount -= 14;
    // 802FFB18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFB1C:
    ctx->pc = 0x802FFB1Cu;
    // 802FFB1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFB20:
    ctx->pc = 0x802FFB20u;
    // 802FFB20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFB24:
    ctx->pc = 0x802FFB24u;
    // 802FFB24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802FFB28:
    ctx->pc = 0x802FFB28u;
    // 802FFB28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFB2C:
    ctx->pc = 0x802FFB2Cu;
    // 802FFB2C: lbz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FFB30:
    ctx->pc = 0x802FFB30u;
    // 802FFB30: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FFB34:
    ctx->pc = 0x802FFB34u;
    // 802FFB34: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FFB38:
    ctx->pc = 0x802FFB38u;
    // 802FFB38: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFB3C:
    ctx->pc = 0x802FFB3Cu;
    // 802FFB3C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFB40:
    ctx->pc = 0x802FFB40u;
    // 802FFB40: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFB44:
    ctx->pc = 0x802FFB44u;
    // 802FFB44: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFB48:
    ctx->pc = 0x802FFB48u;
    // 802FFB48: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802FFB4Cu;
            ctx->pc = target;
            return;
        }
    }

label_802FFB4C:
    ctx->pc = 0x802FFB4Cu;
    ctx->downcount -= 2;
    // 802FFB4C: cmpwi   r3, 0
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

label_802FFB50:
    ctx->pc = 0x802FFB50u;
    // 802FFB50: bc    12, 2, 0x802FFB68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFB68;
        }
    }

label_802FFB54:
    ctx->pc = 0x802FFB54u;
    ctx->downcount -= 6;
    // 802FFB54: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFB58:
    ctx->pc = 0x802FFB58u;
    // 802FFB58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FFB5C:
    ctx->pc = 0x802FFB5Cu;
    // 802FFB5C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFB60:
    ctx->pc = 0x802FFB60u;
    // 802FFB60: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFB64:
    ctx->pc = 0x802FFB64u;
    // 802FFB64: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802FFB68u;
            ctx->pc = target;
            return;
        }
    }

label_802FFB68:
    ctx->pc = 0x802FFB68u;
    ctx->downcount -= 6;
    // 802FFB68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFB6C:
    ctx->pc = 0x802FFB6Cu;
    // 802FFB6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FFB70:
    ctx->pc = 0x802FFB70u;
    // 802FFB70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFB74:
    ctx->pc = 0x802FFB74u;
    // 802FFB74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFB78:
    ctx->pc = 0x802FFB78u;
    // 802FFB78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFB7C:
    ctx->pc = 0x802FFB7Cu;
    ctx->downcount -= 19;
    // 802FFB7C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFB80:
    ctx->pc = 0x802FFB80u;
    // 802FFB80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFB84:
    ctx->pc = 0x802FFB84u;
    // 802FFB84: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFB88:
    ctx->pc = 0x802FFB88u;
    // 802FFB88: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FFB8C:
    ctx->pc = 0x802FFB8Cu;
    // 802FFB8C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFB90:
    ctx->pc = 0x802FFB90u;
    // 802FFB90: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FFB94:
    ctx->pc = 0x802FFB94u;
    // 802FFB94: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802FFB98:
    ctx->pc = 0x802FFB98u;
    // 802FFB98: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FFB9C:
    ctx->pc = 0x802FFB9Cu;
    // 802FFB9C: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_802FFBA0:
    ctx->pc = 0x802FFBA0u;
    ctx->downcount -= 5;
    // 802FFBA0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFBA4:
    // 802FFBA4: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_802FFBA8:
    // 802FFBA8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802FFBAC:
    // 802FFBAC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802FFBB0:
    // 802FFBB0: bl      0x80370BD4
    {
            ctx->lr = 0x802FFBB4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802FFBB4:
    ctx->downcount -= 8;
    // 802FFBB4: add   r3, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FFBB8:
    ctx->pc = 0x802FFBB8u;
    // 802FFBB8: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802FFBBC:
    ctx->pc = 0x802FFBBCu;
    // 802FFBBC: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFBC0:
    ctx->pc = 0x802FFBC0u;
    // 802FFBC0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFBC4:
    ctx->pc = 0x802FFBC4u;
    // 802FFBC4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFBC8:
    ctx->pc = 0x802FFBC8u;
    // 802FFBC8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFBCC:
    ctx->pc = 0x802FFBCCu;
    // 802FFBCC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802FFBD0u;
            ctx->pc = target;
            return;
        }
    }

label_802FFBD0:
    ctx->downcount -= 5;
    // 802FFBD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFBD4:
    // 802FFBD4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FFBD8:
    // 802FFBD8: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802FFBDC:
    // 802FFBDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802FFBE0:
    // 802FFBE0: bl      0x8027714C
    {
            ctx->lr = 0x802FFBE4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802FFBE4:
    ctx->downcount -= 4;
    // 802FFBE4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802FFBE8:
    // 802FFBE8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FFBEC:
    // 802FFBEC: cmpwi   r28, 3
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

label_802FFBF0:
    // 802FFBF0: bc    12, 0, 0x802FFBA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFBA0u;
                return;
            }
            goto label_802FFBA0;
        }
    }

label_802FFBF4:
    ctx->pc = 0x802FFBF4u;
    ctx->downcount -= 16;
    // 802FFBF4: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FFBF8:
    ctx->pc = 0x802FFBF8u;
    // 802FFBF8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFBFC:
    ctx->pc = 0x802FFBFCu;
    // 802FFBFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFC00:
    ctx->pc = 0x802FFC00u;
    // 802FFC00: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FFC04:
    ctx->pc = 0x802FFC04u;
    // 802FFC04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFC08:
    ctx->pc = 0x802FFC08u;
    ctx->downcount -= 7;
    // 802FFC08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFC0C:
    ctx->pc = 0x802FFC0Cu;
    // 802FFC0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFC10:
    ctx->pc = 0x802FFC10u;
    // 802FFC10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFC14:
    ctx->pc = 0x802FFC14u;
    // 802FFC14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802FFC18:
    ctx->pc = 0x802FFC18u;
    // 802FFC18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFC1C:
    ctx->pc = 0x802FFC1Cu;
    // 802FFC1C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFC20:
    ctx->pc = 0x802FFC20u;
    // 802FFC20: bl      0x8036A440
    {
            ctx->lr = 0x802FFC24u;
            ctx->pc = 0x8036A440u;
            return;
    }

label_802FFC24:
    ctx->pc = 0x802FFC24u;
    ctx->downcount -= 4;
    // 802FFC24: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_802FFC28:
    ctx->pc = 0x802FFC28u;
    // 802FFC28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802FFC2C:
    ctx->pc = 0x802FFC2Cu;
    // 802FFC2C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802FFC30:
    loop_802FFC30(ctx);
    if (ctx->pc == 0x802FFC48u) goto label_802FFC48;
    return;
label_802FFC34:
    ctx->pc = 0x802FFC34u;
    // 802FFC34: lwz     r0, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFC38:
    ctx->pc = 0x802FFC38u;
    // 802FFC38: lwz     r4, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FFC3C:
    // 802FFC3C: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802FFC40:
    ctx->pc = 0x802FFC40u;
    // 802FFC40: stw     r0, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFC44:
    // 802FFC44: bc    16, 0, 0x802FFC30
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFC30u;
                return;
            }
            goto label_802FFC30;
        }
    }

label_802FFC48:
    ctx->pc = 0x802FFC48u;
    ctx->downcount -= 6;
    // 802FFC48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFC4C:
    ctx->pc = 0x802FFC4Cu;
    // 802FFC4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FFC50:
    ctx->pc = 0x802FFC50u;
    // 802FFC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFC54:
    ctx->pc = 0x802FFC54u;
    // 802FFC54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFC58:
    ctx->pc = 0x802FFC58u;
    // 802FFC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFC5C:
    ctx->pc = 0x802FFC5Cu;
    ctx->downcount -= 9;
    // 802FFC5C: lbz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FFC60:
    ctx->pc = 0x802FFC60u;
    // 802FFC60: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FFC64:
    ctx->pc = 0x802FFC64u;
    // 802FFC64: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FFC68:
    ctx->pc = 0x802FFC68u;
    // 802FFC68: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFC6C:
    ctx->pc = 0x802FFC6Cu;
    // 802FFC6C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFC70:
    ctx->pc = 0x802FFC70u;
    // 802FFC70: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFC74:
    ctx->pc = 0x802FFC74u;
    // 802FFC74: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFC78:
    ctx->pc = 0x802FFC78u;
    // 802FFC78: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802FFC7C:
    ctx->pc = 0x802FFC7Cu;
    ctx->downcount -= 6;
    // 802FFC7C: lbz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FFC80:
    ctx->pc = 0x802FFC80u;
    // 802FFC80: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FFC84:
    ctx->pc = 0x802FFC84u;
    // 802FFC84: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FFC88:
    ctx->pc = 0x802FFC88u;
    // 802FFC88: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFC8C:
    ctx->pc = 0x802FFC8Cu;
    // 802FFC8C: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802FFC90:
    ctx->pc = 0x802FFC90u;
    // 802FFC90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFC94:
    ctx->pc = 0x802FFC94u;
    ctx->downcount -= 8;
    // 802FFC94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFC98:
    ctx->pc = 0x802FFC98u;
    // 802FFC98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFC9C:
    ctx->pc = 0x802FFC9Cu;
    // 802FFC9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFCA0:
    ctx->pc = 0x802FFCA0u;
    // 802FFCA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802FFCA4:
    ctx->pc = 0x802FFCA4u;
    // 802FFCA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFCA8:
    ctx->pc = 0x802FFCA8u;
    // 802FFCA8: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFCAC:
    ctx->pc = 0x802FFCACu;
    // 802FFCAC: cmpwi   r0, 0
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

label_802FFCB0:
    ctx->pc = 0x802FFCB0u;
    // 802FFCB0: bc    4, 2, 0x802FFCC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FFCC0;
        }
    }

label_802FFCB4:
    ctx->pc = 0x802FFCB4u;
    ctx->downcount -= 3;
    // 802FFCB4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802FFCB8:
    ctx->pc = 0x802FFCB8u;
    // 802FFCB8: stb     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FFCBC:
    ctx->pc = 0x802FFCBCu;
    // 802FFCBC: b       0x802FFCDC
    {
            goto label_802FFCDC;
    }

label_802FFCC0:
    ctx->pc = 0x802FFCC0u;
    ctx->downcount -= 2;
    // 802FFCC0: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802FFCC4:
    ctx->pc = 0x802FFCC4u;
    // 802FFCC4: bc    4, 2, 0x802FFCD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FFCD4;
        }
    }

label_802FFCC8:
    ctx->pc = 0x802FFCC8u;
    ctx->downcount -= 3;
    // 802FFCC8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_802FFCCC:
    ctx->pc = 0x802FFCCCu;
    // 802FFCCC: stb     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FFCD0:
    ctx->pc = 0x802FFCD0u;
    // 802FFCD0: b       0x802FFCDC
    {
            goto label_802FFCDC;
    }

label_802FFCD4:
    ctx->pc = 0x802FFCD4u;
    ctx->downcount -= 2;
    // 802FFCD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802FFCD8:
    ctx->pc = 0x802FFCD8u;
    // 802FFCD8: stb     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FFCDC:
    ctx->pc = 0x802FFCDCu;
    ctx->downcount -= 5;
    // 802FFCDC: lbz     r0, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802FFCE0:
    ctx->pc = 0x802FFCE0u;
    // 802FFCE0: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802FFCE4:
    ctx->pc = 0x802FFCE4u;
    // 802FFCE4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802FFCE8:
    ctx->pc = 0x802FFCE8u;
    // 802FFCE8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802FFCEC:
    ctx->pc = 0x802FFCECu;
    // 802FFCEC: bl      0x802FF810
    {
            ctx->lr = 0x802FFCF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF810u;
                return;
            }
            goto label_802FF810;
    }

label_802FFCF0:
    ctx->pc = 0x802FFCF0u;
    ctx->downcount -= 3;
    // 802FFCF0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802FFCF4:
    ctx->pc = 0x802FFCF4u;
    // 802FFCF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFCF8:
    ctx->pc = 0x802FFCF8u;
    // 802FFCF8: bl      0x803457B8
    {
            ctx->lr = 0x802FFCFCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802FFCFC:
    ctx->pc = 0x802FFCFCu;
    ctx->downcount -= 6;
    // 802FFCFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFD00:
    ctx->pc = 0x802FFD00u;
    // 802FFD00: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FFD04:
    ctx->pc = 0x802FFD04u;
    // 802FFD04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFD08:
    ctx->pc = 0x802FFD08u;
    // 802FFD08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFD0C:
    ctx->pc = 0x802FFD0Cu;
    // 802FFD0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFD10:
    ctx->pc = 0x802FFD10u;
    ctx->downcount -= 19;
    // 802FFD10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFD14:
    ctx->pc = 0x802FFD14u;
    // 802FFD14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFD18:
    ctx->pc = 0x802FFD18u;
    // 802FFD18: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFD1C:
    ctx->pc = 0x802FFD1Cu;
    // 802FFD1C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FFD20:
    ctx->pc = 0x802FFD20u;
    // 802FFD20: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802FFD24:
    ctx->pc = 0x802FFD24u;
    // 802FFD24: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFD28:
    ctx->pc = 0x802FFD28u;
    // 802FFD28: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FFD2C:
    ctx->pc = 0x802FFD2Cu;
    // 802FFD2C: addi    r31, r31, 23896
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(23896);

label_802FFD30:
    ctx->pc = 0x802FFD30u;
    // 802FFD30: bl      0x802A6748
    {
            ctx->lr = 0x802FFD34u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802FFD34:
    ctx->pc = 0x802FFD34u;
    ctx->downcount -= 7;
    // 802FFD34: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802FFD38:
    ctx->pc = 0x802FFD38u;
    // 802FFD38: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFD3C:
    ctx->pc = 0x802FFD3Cu;
    // 802FFD3C: addi    r4, r4, 24064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24064);

label_802FFD40:
    ctx->pc = 0x802FFD40u;
    // 802FFD40: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802FFD44:
    ctx->pc = 0x802FFD44u;
    // 802FFD44: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802FFD48:
    ctx->pc = 0x802FFD48u;
    // 802FFD48: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFD4C:
    ctx->pc = 0x802FFD4Cu;
    // 802FFD4C: bl      0x801ED17C
    {
            ctx->lr = 0x802FFD50u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802FFD50:
    ctx->pc = 0x802FFD50u;
    ctx->downcount -= 6;
    // 802FFD50: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFD54:
    ctx->pc = 0x802FFD54u;
    // 802FFD54: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFD58:
    ctx->pc = 0x802FFD58u;
    // 802FFD58: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FFD5C:
    ctx->pc = 0x802FFD5Cu;
    // 802FFD5C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802FFD60:
    ctx->pc = 0x802FFD60u;
    // 802FFD60: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_802FFD64:
    ctx->pc = 0x802FFD64u;
    // 802FFD64: bl      0x802FFF78
    {
            ctx->lr = 0x802FFD68u;
            goto label_802FFF78;
    }

label_802FFD68:
    ctx->pc = 0x802FFD68u;
    ctx->downcount -= 3;
    // 802FFD68: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFD6C:
    ctx->pc = 0x802FFD6Cu;
    // 802FFD6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFD70:
    ctx->pc = 0x802FFD70u;
    // 802FFD70: bl      0x802A5D48
    {
            ctx->lr = 0x802FFD74u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802FFD74:
    ctx->pc = 0x802FFD74u;
    ctx->downcount -= 6;
    // 802FFD74: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFD78:
    ctx->pc = 0x802FFD78u;
    // 802FFD78: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802FFD7C:
    ctx->pc = 0x802FFD7Cu;
    // 802FFD7C: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_802FFD80:
    ctx->pc = 0x802FFD80u;
    // 802FFD80: addi    r5, r31, 24
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(24);

label_802FFD84:
    ctx->pc = 0x802FFD84u;
    // 802FFD84: addi    r6, r31, 36
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(36);

label_802FFD88:
    ctx->pc = 0x802FFD88u;
    // 802FFD88: bl      0x80300114
    {
            ctx->lr = 0x802FFD8Cu;
            goto label_80300114;
    }

label_802FFD8C:
    ctx->pc = 0x802FFD8Cu;
    ctx->downcount -= 2;
    // 802FFD8C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFD90:
    ctx->pc = 0x802FFD90u;
    // 802FFD90: bl      0x802A609C
    {
            ctx->lr = 0x802FFD94u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802FFD94:
    ctx->pc = 0x802FFD94u;
    ctx->downcount -= 10;
    // 802FFD94: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802FFD98:
    ctx->pc = 0x802FFD98u;
    // 802FFD98: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802FFD9C:
    ctx->pc = 0x802FFD9Cu;
    // 802FFD9C: addi    r3, r3, 23944
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23944);

label_802FFDA0:
    ctx->pc = 0x802FFDA0u;
    // 802FFDA0: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFDA4:
    ctx->pc = 0x802FFDA4u;
    // 802FFDA4: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_802FFDA8:
    ctx->pc = 0x802FFDA8u;
    // 802FFDA8: addi    r4, r4, 14888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14888);

label_802FFDAC:
    ctx->pc = 0x802FFDACu;
    // 802FFDAC: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFDB0:
    ctx->pc = 0x802FFDB0u;
    // 802FFDB0: addi    r3, r28, 52
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(52);

label_802FFDB4:
    ctx->pc = 0x802FFDB4u;
    // 802FFDB4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802FFDB8:
    ctx->pc = 0x802FFDB8u;
    // 802FFDB8: bl      0x8000E7F4
    {
            ctx->lr = 0x802FFDBCu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802FFDBC:
    ctx->pc = 0x802FFDBCu;
    ctx->downcount -= 6;
    // 802FFDBC: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_802FFDC0:
    ctx->pc = 0x802FFDC0u;
    // 802FFDC0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802FFDC4:
    ctx->pc = 0x802FFDC4u;
    // 802FFDC4: addi    r4, r4, 22144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22144);

label_802FFDC8:
    ctx->pc = 0x802FFDC8u;
    // 802FFDC8: addi    r5, r31, 0
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(0);

label_802FFDCC:
    ctx->pc = 0x802FFDCCu;
    // 802FFDCC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802FFDD0:
    ctx->pc = 0x802FFDD0u;
    // 802FFDD0: bl      0x80300098
    {
            ctx->lr = 0x802FFDD4u;
            goto label_80300098;
    }

label_802FFDD4:
    ctx->pc = 0x802FFDD4u;
    ctx->downcount -= 2;
    // 802FFDD4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802FFDD8:
    ctx->pc = 0x802FFDD8u;
    // 802FFDD8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802FFDDC:
    ctx->downcount -= 4;
    // 802FFDDC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FFDE0:
    // 802FFDE0: li      r3, 468
    ctx->gpr[3] = (u32)(s32)(468);

label_802FFDE4:
    // 802FFDE4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FFDE8:
    // 802FFDE8: bl      0x801C1C5C
    {
            ctx->lr = 0x802FFDECu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802FFDEC:
    ctx->downcount -= 3;
    // 802FFDEC: cmpwi   r3, 0
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

label_802FFDF0:
    // 802FFDF0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFDF4:
    // 802FFDF4: bc    12, 2, 0x802FFE08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFE08;
        }
    }

label_802FFDF8:
    ctx->downcount -= 3;
    // 802FFDF8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFDFC:
    // 802FFDFC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FFE00:
    // 802FFE00: bl      0x802FF948
    {
            ctx->lr = 0x802FFE04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FF948u;
                return;
            }
            goto label_802FF948;
    }

label_802FFE04:
    ctx->downcount -= 1;
    // 802FFE04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFE08:
    ctx->downcount -= 4;
    // 802FFE08: add   r5, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802FFE0C:
    // 802FFE0C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFE10:
    ctx->pc = 0x802FFE10u;
    // 802FFE10: stw     r4, 148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802FFE14:
    // 802FFE14: bl      0x802A6408
    {
            ctx->lr = 0x802FFE18u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802FFE18:
    ctx->downcount -= 4;
    // 802FFE18: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802FFE1C:
    // 802FFE1C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802FFE20:
    // 802FFE20: cmpwi   r30, 3
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

label_802FFE24:
    // 802FFE24: bc    12, 0, 0x802FFDDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFDDCu;
                return;
            }
            goto label_802FFDDC;
        }
    }

label_802FFE28:
    ctx->pc = 0x802FFE28u;
    ctx->downcount -= 4;
    // 802FFE28: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802FFE2C:
    ctx->pc = 0x802FFE2Cu;
    // 802FFE2C: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_802FFE30:
    ctx->pc = 0x802FFE30u;
    // 802FFE30: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FFE34:
    ctx->pc = 0x802FFE34u;
    // 802FFE34: bl      0x801C1C5C
    {
            ctx->lr = 0x802FFE38u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802FFE38:
    ctx->pc = 0x802FFE38u;
    ctx->downcount -= 2;
    // 802FFE38: cmpwi   r3, 0
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

label_802FFE3C:
    ctx->pc = 0x802FFE3Cu;
    // 802FFE3C: bc    12, 2, 0x802FFE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFE48;
        }
    }

label_802FFE40:
    ctx->pc = 0x802FFE40u;
    ctx->downcount -= 2;
    // 802FFE40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFE44:
    ctx->pc = 0x802FFE44u;
    // 802FFE44: bl      0x8036A490
    {
            ctx->lr = 0x802FFE48u;
            ctx->pc = 0x8036A490u;
            return;
    }

label_802FFE48:
    ctx->pc = 0x802FFE48u;
    ctx->downcount -= 20;
    // 802FFE48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802FFE4C:
    ctx->pc = 0x802FFE4Cu;
    // 802FFE4C: stw     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFE50:
    ctx->pc = 0x802FFE50u;
    // 802FFE50: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802FFE54:
    ctx->pc = 0x802FFE54u;
    // 802FFE54: stb     r0, 164(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(164);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802FFE58:
    ctx->pc = 0x802FFE58u;
    // 802FFE58: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FFE5C:
    ctx->pc = 0x802FFE5Cu;
    // 802FFE5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFE60:
    ctx->pc = 0x802FFE60u;
    // 802FFE60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFE64:
    ctx->pc = 0x802FFE64u;
    // 802FFE64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802FFE68:
    ctx->pc = 0x802FFE68u;
    // 802FFE68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFE6C:
    ctx->pc = 0x802FFE6Cu;
    ctx->downcount -= 18;
    // 802FFE6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFE70:
    ctx->pc = 0x802FFE70u;
    // 802FFE70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFE74:
    // 802FFE74: cmpwi   r3, 0
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

label_802FFE78:
    ctx->pc = 0x802FFE78u;
    // 802FFE78: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFE7C:
    ctx->pc = 0x802FFE7Cu;
    // 802FFE7C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FFE80:
    // 802FFE80: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFE84:
    // 802FFE84: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FFE88:
    // 802FFE88: bc    12, 2, 0x802FFEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFEBC;
        }
    }

label_802FFE8C:
    ctx->downcount -= 1;
    // 802FFE8C: bc    12, 2, 0x802FFEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFEAC;
        }
    }

label_802FFE90:
    ctx->downcount -= 1;
    // 802FFE90: bc    12, 2, 0x802FFEAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFEAC;
        }
    }

label_802FFE94:
    ctx->downcount -= 3;
    // 802FFE94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFE98:
    // 802FFE98: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802FFE9C:
    // 802FFE9C: bl      0x801ED098
    {
            ctx->lr = 0x802FFEA0u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802FFEA0:
    ctx->downcount -= 3;
    // 802FFEA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFEA4:
    // 802FFEA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802FFEA8:
    // 802FFEA8: bl      0x801ED058
    {
            ctx->lr = 0x802FFEACu;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802FFEAC:
    ctx->downcount -= 2;
    // 802FFEAC: cmpwi   r31, 0
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

label_802FFEB0:
    // 802FFEB0: bc    4, 1, 0x802FFEBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FFEBC;
        }
    }

label_802FFEB4:
    ctx->downcount -= 2;
    // 802FFEB4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFEB8:
    // 802FFEB8: bl      0x801C1C90
    {
            ctx->lr = 0x802FFEBCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802FFEBC:
    ctx->downcount -= 17;
    // 802FFEBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802FFEC0:
    ctx->pc = 0x802FFEC0u;
    // 802FFEC0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802FFEC4:
    ctx->pc = 0x802FFEC4u;
    // 802FFEC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFEC8:
    ctx->pc = 0x802FFEC8u;
    // 802FFEC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFECC:
    // 802FFECC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFED0:
    ctx->pc = 0x802FFED0u;
    // 802FFED0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFED4:
    ctx->pc = 0x802FFED4u;
    ctx->downcount -= 7;
    // 802FFED4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFED8:
    ctx->pc = 0x802FFED8u;
    // 802FFED8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFEDC:
    // 802FFEDC: cmpwi   r3, 0
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

label_802FFEE0:
    ctx->pc = 0x802FFEE0u;
    // 802FFEE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFEE4:
    ctx->pc = 0x802FFEE4u;
    // 802FFEE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802FFEE8:
    // 802FFEE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFEEC:
    // 802FFEEC: bc    12, 2, 0x802FFEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802FFEFC;
        }
    }

label_802FFEF0:
    ctx->downcount -= 2;
    // 802FFEF0: cmpwi   r4, 0
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

label_802FFEF4:
    // 802FFEF4: bc    4, 1, 0x802FFEFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802FFEFC;
        }
    }

label_802FFEF8:
    ctx->downcount -= 1;
    // 802FFEF8: bl      0x801C1C90
    {
            ctx->lr = 0x802FFEFCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802FFEFC:
    ctx->downcount -= 7;
    // 802FFEFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FFF00:
    ctx->pc = 0x802FFF00u;
    // 802FFF00: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FFF04:
    ctx->pc = 0x802FFF04u;
    // 802FFF04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFF08:
    ctx->pc = 0x802FFF08u;
    // 802FFF08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFF0C:
    // 802FFF0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFF10:
    ctx->pc = 0x802FFF10u;
    // 802FFF10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFF14:
    ctx->pc = 0x802FFF14u;
    ctx->downcount -= 10;
    // 802FFF14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFF18:
    ctx->pc = 0x802FFF18u;
    // 802FFF18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFF1C:
    ctx->pc = 0x802FFF1Cu;
    // 802FFF1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFF20:
    ctx->pc = 0x802FFF20u;
    // 802FFF20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802FFF24:
    // 802FFF24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFF28:
    ctx->pc = 0x802FFF28u;
    // 802FFF28: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFF2C:
    ctx->pc = 0x802FFF2Cu;
    // 802FFF2C: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFF30:
    ctx->pc = 0x802FFF30u;
    // 802FFF30: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFF34:
    ctx->pc = 0x802FFF34u;
    // 802FFF34: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802FFF38u;
            ctx->pc = target;
            return;
        }
    }

label_802FFF38:
    ctx->downcount -= 2;
    // 802FFF38: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802FFF3C:
    // 802FFF3C: bl      0x80300170
    {
            ctx->lr = 0x802FFF40u;
            goto label_80300170;
    }

label_802FFF40:
    ctx->pc = 0x802FFF40u;
    ctx->downcount -= 6;
    // 802FFF40: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFF44:
    // 802FFF44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802FFF48:
    ctx->pc = 0x802FFF48u;
    // 802FFF48: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802FFF4C:
    ctx->pc = 0x802FFF4Cu;
    // 802FFF4C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802FFF50:
    ctx->pc = 0x802FFF50u;
    // 802FFF50: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802FFF54u;
            ctx->pc = target;
            return;
        }
    }

label_802FFF54:
    ctx->pc = 0x802FFF54u;
    ctx->downcount -= 6;
    // 802FFF54: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFF58:
    ctx->pc = 0x802FFF58u;
    // 802FFF58: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802FFF5C:
    ctx->pc = 0x802FFF5Cu;
    // 802FFF5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802FFF60:
    // 802FFF60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802FFF64:
    ctx->pc = 0x802FFF64u;
    // 802FFF64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFF68:
    ctx->downcount -= 2;
    // 802FFF68: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802FFF6C:
    ctx->pc = 0x802FFF6Cu;
    // 802FFF6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFF70:
    ctx->downcount -= 2;
    // 802FFF70: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802FFF74:
    ctx->pc = 0x802FFF74u;
    // 802FFF74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_802FFF78:
    ctx->pc = 0x802FFF78u;
    ctx->downcount -= 17;
    // 802FFF78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802FFF7C:
    ctx->pc = 0x802FFF7Cu;
    // 802FFF7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802FFF80:
    ctx->pc = 0x802FFF80u;
    // 802FFF80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802FFF84:
    ctx->pc = 0x802FFF84u;
    // 802FFF84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802FFF88:
    // 802FFF88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802FFF8C:
    // 802FFF8C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802FFF90:
    // 802FFF90: bl      0x803457F4
    {
            ctx->lr = 0x802FFF94u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802FFF94:
    ctx->pc = 0x802FFF94u;
    ctx->downcount -= 11;
    // 802FFF94: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFF98:
    // 802FFF98: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802FFF9C:
    // 802FFF9C: addi    r3, r3, 24184
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24184);

label_802FFFA0:
    ctx->pc = 0x802FFFA0u;
    // 802FFFA0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFFA4:
    // 802FFFA4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802FFFA8:
    ctx->pc = 0x802FFFA8u;
    // 802FFFA8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FFFAC:
    ctx->pc = 0x802FFFACu;
    // 802FFFAC: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802FFFB0:
    // 802FFFB0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FFFB4:
    // 802FFFB4: bl      0x801C1C80
    {
            ctx->lr = 0x802FFFB8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802FFFB8:
    ctx->pc = 0x802FFFB8u;
    ctx->downcount -= 8;
    // 802FFFB8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFFBC:
    // 802FFFBC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FFFC0:
    ctx->pc = 0x802FFFC0u;
    // 802FFFC0: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFFC4:
    // 802FFFC4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802FFFC8:
    ctx->pc = 0x802FFFC8u;
    // 802FFFC8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FFFCC:
    // 802FFFCC: bl      0x801C1C80
    {
            ctx->lr = 0x802FFFD0u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802FFFD0:
    ctx->pc = 0x802FFFD0u;
    ctx->downcount -= 8;
    // 802FFFD0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802FFFD4:
    // 802FFFD4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802FFFD8:
    ctx->pc = 0x802FFFD8u;
    // 802FFFD8: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFFDC:
    // 802FFFDC: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802FFFE0:
    ctx->pc = 0x802FFFE0u;
    // 802FFFE0: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802FFFE4:
    // 802FFFE4: bl      0x801C1C80
    {
            ctx->lr = 0x802FFFE8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802FFFE8:
    ctx->downcount -= 6;
    // 802FFFE8: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802FFFEC:
    ctx->pc = 0x802FFFECu;
    // 802FFFEC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802FFFF0:
    // 802FFFF0: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802FFFF4:
    // 802FFFF4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802FFFF8:
    // 802FFFF8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802FFFFC:
    // 802FFFFC: b       0x80300068
    {
            goto label_80300068;
    }

label_80300000:
    loop_80300000(ctx);
    if (ctx->pc == 0x80300074u) goto label_80300074;
    return;
label_80300004:
    // 80300004: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80300008:
    ctx->pc = 0x80300008u;
    // 80300008: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030000C:
    // 8030000C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80300010:
    ctx->pc = 0x80300010u;
    // 80300010: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300014:
    ctx->pc = 0x80300014u;
    // 80300014: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300018:
    ctx->pc = 0x80300018u;
    // 80300018: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030001C:
    ctx->pc = 0x8030001Cu;
    // 8030001C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300020:
    ctx->pc = 0x80300020u;
    // 80300020: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300024:
    ctx->pc = 0x80300024u;
    // 80300024: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300028:
    ctx->pc = 0x80300028u;
    // 80300028: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030002C:
    // 8030002C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80300030:
    ctx->pc = 0x80300030u;
    // 80300030: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300034:
    ctx->pc = 0x80300034u;
    // 80300034: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300038:
    ctx->pc = 0x80300038u;
    // 80300038: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030003C:
    ctx->pc = 0x8030003Cu;
    // 8030003C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300040:
    ctx->pc = 0x80300040u;
    // 80300040: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300044:
    ctx->pc = 0x80300044u;
    // 80300044: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300048:
    ctx->pc = 0x80300048u;
    // 80300048: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030004C:
    // 8030004C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80300050:
    ctx->pc = 0x80300050u;
    // 80300050: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300054:
    ctx->pc = 0x80300054u;
    // 80300054: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300058:
    // 80300058: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_8030005C:
    ctx->pc = 0x8030005Cu;
    // 8030005C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300060:
    ctx->pc = 0x80300060u;
    // 80300060: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300064:
    ctx->pc = 0x80300064u;
    // 80300064: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300068:
    ctx->pc = 0x80300068u;
    ctx->downcount -= 3;
    // 80300068: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030006C:
    // 8030006C: cmpw    r7, r0
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

label_80300070:
    // 80300070: bc    12, 0, 0x80300000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300000u;
                return;
            }
            goto label_80300000;
        }
    }

label_80300074:
    ctx->downcount -= 3;
    // 80300074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300078:
    // 80300078: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030007C:
    // 8030007C: bl      0x803457CC
    {
            ctx->lr = 0x80300080u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80300080:
    ctx->downcount -= 17;
    // 80300080: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300084:
    ctx->pc = 0x80300084u;
    // 80300084: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300088:
    ctx->pc = 0x80300088u;
    // 80300088: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030008C:
    ctx->pc = 0x8030008Cu;
    // 8030008C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300090:
    // 80300090: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300094:
    ctx->pc = 0x80300094u;
    // 80300094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300098:
    ctx->pc = 0x80300098u;
    ctx->downcount -= 20;
    // 80300098: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030009C:
    ctx->pc = 0x8030009Cu;
    // 8030009C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803000A0:
    ctx->pc = 0x803000A0u;
    // 803000A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803000A4:
    ctx->pc = 0x803000A4u;
    // 803000A4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803000A8:
    // 803000A8: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_803000AC:
    // 803000AC: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803000B0:
    // 803000B0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803000B4:
    // 803000B4: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803000B8:
    // 803000B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803000BC:
    // 803000BC: bl      0x803456D0
    {
            ctx->lr = 0x803000C0u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_803000C0:
    ctx->downcount -= 34;
    // 803000C0: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_803000C4:
    ctx->pc = 0x803000C4u;
    // 803000C4: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803000C8:
    ctx->pc = 0x803000C8u;
    // 803000C8: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803000CC:
    ctx->pc = 0x803000CCu;
    // 803000CC: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803000D0:
    // 803000D0: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803000D4:
    ctx->pc = 0x803000D4u;
    // 803000D4: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803000D8:
    ctx->pc = 0x803000D8u;
    // 803000D8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803000DC:
    ctx->pc = 0x803000DCu;
    // 803000DC: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803000E0:
    ctx->pc = 0x803000E0u;
    // 803000E0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803000E4:
    ctx->pc = 0x803000E4u;
    // 803000E4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803000E8:
    ctx->pc = 0x803000E8u;
    // 803000E8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803000EC:
    ctx->pc = 0x803000ECu;
    // 803000EC: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803000F0:
    ctx->pc = 0x803000F0u;
    // 803000F0: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803000F4:
    ctx->pc = 0x803000F4u;
    // 803000F4: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_803000F8:
    ctx->pc = 0x803000F8u;
    // 803000F8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803000FC:
    ctx->pc = 0x803000FCu;
    // 803000FC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300100:
    ctx->pc = 0x80300100u;
    // 80300100: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300104:
    ctx->pc = 0x80300104u;
    // 80300104: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300108:
    ctx->pc = 0x80300108u;
    // 80300108: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030010C:
    // 8030010C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80300110:
    ctx->pc = 0x80300110u;
    // 80300110: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300114:
    ctx->pc = 0x80300114u;
    ctx->downcount -= 19;
    // 80300114: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300118:
    ctx->pc = 0x80300118u;
    // 80300118: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030011C:
    ctx->pc = 0x8030011Cu;
    // 8030011C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300120:
    ctx->pc = 0x80300120u;
    // 80300120: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300124:
    // 80300124: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80300128:
    // 80300128: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030012C:
    // 8030012C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300130:
    // 80300130: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300134:
    // 80300134: bl      0x80300098
    {
            ctx->lr = 0x80300138u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300098u;
                return;
            }
            goto label_80300098;
    }

label_80300138:
    ctx->downcount -= 27;
    // 80300138: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030013C:
    ctx->pc = 0x8030013Cu;
    // 8030013C: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80300140:
    ctx->pc = 0x80300140u;
    // 80300140: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300144:
    ctx->pc = 0x80300144u;
    // 80300144: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300148:
    // 80300148: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030014C:
    ctx->pc = 0x8030014Cu;
    // 8030014C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300150:
    ctx->pc = 0x80300150u;
    // 80300150: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300154:
    ctx->pc = 0x80300154u;
    // 80300154: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300158:
    ctx->pc = 0x80300158u;
    // 80300158: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030015C:
    ctx->pc = 0x8030015Cu;
    // 8030015C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300160:
    ctx->pc = 0x80300160u;
    // 80300160: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300164:
    ctx->pc = 0x80300164u;
    // 80300164: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300168:
    // 80300168: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030016C:
    ctx->pc = 0x8030016Cu;
    // 8030016C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300170:
    ctx->pc = 0x80300170u;
    ctx->downcount -= 8;
    // 80300170: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300174:
    ctx->pc = 0x80300174u;
    // 80300174: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300178:
    ctx->pc = 0x80300178u;
    // 80300178: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030017C:
    ctx->pc = 0x8030017Cu;
    // 8030017C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300180:
    // 80300180: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300184:
    ctx->pc = 0x80300184u;
    // 80300184: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80300188:
    // 80300188: cmpwi   r0, 0
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

label_8030018C:
    // 8030018C: bc    12, 2, 0x803001B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803001B0;
        }
    }

label_80300190:
    ctx->pc = 0x80300190u;
    ctx->downcount -= 3;
    // 80300190: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80300194:
    // 80300194: cmpwi   r0, 0
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

label_80300198:
    // 80300198: bc    12, 2, 0x803001A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803001A0;
        }
    }

label_8030019C:
    ctx->downcount -= 1;
    // 8030019C: bl      0x80300294
    {
            ctx->lr = 0x803001A0u;
            goto label_80300294;
    }

label_803001A0:
    ctx->downcount -= 2;
    // 803001A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803001A4:
    // 803001A4: bl      0x803456D4
    {
            ctx->lr = 0x803001A8u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_803001A8:
    ctx->downcount -= 2;
    // 803001A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803001AC:
    // 803001AC: bl      0x803001D4
    {
            ctx->lr = 0x803001B0u;
            goto label_803001D4;
    }

label_803001B0:
    ctx->downcount -= 2;
    // 803001B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803001B4:
    // 803001B4: bl      0x80300234
    {
            ctx->lr = 0x803001B8u;
            goto label_80300234;
    }

label_803001B8:
    ctx->downcount -= 2;
    // 803001B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803001BC:
    // 803001BC: bl      0x803456F8
    {
            ctx->lr = 0x803001C0u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_803001C0:
    ctx->pc = 0x803001C0u;
    ctx->downcount -= 6;
    // 803001C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803001C4:
    ctx->pc = 0x803001C4u;
    // 803001C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803001C8:
    ctx->pc = 0x803001C8u;
    // 803001C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803001CC:
    // 803001CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803001D0:
    ctx->pc = 0x803001D0u;
    // 803001D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803001D4:
    ctx->pc = 0x803001D4u;
    ctx->downcount -= 12;
    // 803001D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803001D8:
    ctx->pc = 0x803001D8u;
    // 803001D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803001DC:
    ctx->pc = 0x803001DCu;
    // 803001DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803001E0:
    ctx->pc = 0x803001E0u;
    // 803001E0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803001E4:
    // 803001E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803001E8:
    ctx->pc = 0x803001E8u;
    // 803001E8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803001EC:
    ctx->pc = 0x803001ECu;
    // 803001EC: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803001F0:
    // 803001F0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803001F4:
    // 803001F4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803001F8:
    // 803001F8: bl      0x800076B4
    {
            ctx->lr = 0x803001FCu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_803001FC:
    ctx->downcount -= 2;
    // 803001FC: cmpwi   r3, 0
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

label_80300200:
    // 80300200: bc    12, 2, 0x80300220
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300220;
        }
    }

label_80300204:
    ctx->pc = 0x80300204u;
    ctx->downcount -= 8;
    // 80300204: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300208:
    ctx->pc = 0x80300208u;
    // 80300208: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030020C:
    // 8030020C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80300210:
    ctx->pc = 0x80300210u;
    // 80300210: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300214:
    // 80300214: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80300218:
    // 80300218: bl      0x800076E4
    {
            ctx->lr = 0x8030021Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030021C:
    ctx->downcount -= 1;
    // 8030021C: nop
    // nop

label_80300220:
    ctx->pc = 0x80300220u;
    ctx->downcount -= 6;
    // 80300220: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300224:
    ctx->pc = 0x80300224u;
    // 80300224: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300228:
    ctx->pc = 0x80300228u;
    // 80300228: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030022C:
    // 8030022C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300230:
    ctx->pc = 0x80300230u;
    // 80300230: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300234:
    ctx->pc = 0x80300234u;
    ctx->downcount -= 12;
    // 80300234: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300238:
    ctx->pc = 0x80300238u;
    // 80300238: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030023C:
    ctx->pc = 0x8030023Cu;
    // 8030023C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300240:
    ctx->pc = 0x80300240u;
    // 80300240: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300244:
    // 80300244: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300248:
    ctx->pc = 0x80300248u;
    // 80300248: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030024C:
    ctx->pc = 0x8030024Cu;
    // 8030024C: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300250:
    // 80300250: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80300254:
    // 80300254: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80300258:
    // 80300258: bl      0x800076B4
    {
            ctx->lr = 0x8030025Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030025C:
    ctx->downcount -= 2;
    // 8030025C: cmpwi   r3, 0
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

label_80300260:
    // 80300260: bc    12, 2, 0x80300280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300280;
        }
    }

label_80300264:
    ctx->pc = 0x80300264u;
    ctx->downcount -= 8;
    // 80300264: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300268:
    ctx->pc = 0x80300268u;
    // 80300268: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030026C:
    // 8030026C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80300270:
    ctx->pc = 0x80300270u;
    // 80300270: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300274:
    // 80300274: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80300278:
    // 80300278: bl      0x800076E4
    {
            ctx->lr = 0x8030027Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030027C:
    ctx->downcount -= 1;
    // 8030027C: nop
    // nop

label_80300280:
    ctx->pc = 0x80300280u;
    ctx->downcount -= 6;
    // 80300280: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300284:
    ctx->pc = 0x80300284u;
    // 80300284: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300288:
    ctx->pc = 0x80300288u;
    // 80300288: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030028C:
    // 8030028C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300290:
    ctx->pc = 0x80300290u;
    // 80300290: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300294:
    ctx->pc = 0x80300294u;
    ctx->downcount -= 12;
    // 80300294: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300298:
    ctx->pc = 0x80300298u;
    // 80300298: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030029C:
    ctx->pc = 0x8030029Cu;
    // 8030029C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803002A0:
    ctx->pc = 0x803002A0u;
    // 803002A0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803002A4:
    // 803002A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803002A8:
    ctx->pc = 0x803002A8u;
    // 803002A8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803002AC:
    ctx->pc = 0x803002ACu;
    // 803002AC: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803002B0:
    // 803002B0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803002B4:
    // 803002B4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803002B8:
    // 803002B8: bl      0x800076B4
    {
            ctx->lr = 0x803002BCu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_803002BC:
    ctx->downcount -= 2;
    // 803002BC: cmpwi   r3, 0
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

label_803002C0:
    // 803002C0: bc    12, 2, 0x803002E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803002E0;
        }
    }

label_803002C4:
    ctx->pc = 0x803002C4u;
    ctx->downcount -= 8;
    // 803002C4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803002C8:
    ctx->pc = 0x803002C8u;
    // 803002C8: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803002CC:
    // 803002CC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803002D0:
    ctx->pc = 0x803002D0u;
    // 803002D0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803002D4:
    // 803002D4: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_803002D8:
    // 803002D8: bl      0x800076E4
    {
            ctx->lr = 0x803002DCu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_803002DC:
    ctx->downcount -= 1;
    // 803002DC: nop
    // nop

label_803002E0:
    ctx->pc = 0x803002E0u;
    ctx->downcount -= 6;
    // 803002E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803002E4:
    ctx->pc = 0x803002E4u;
    // 803002E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803002E8:
    ctx->pc = 0x803002E8u;
    // 803002E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803002EC:
    // 803002EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803002F0:
    ctx->pc = 0x803002F0u;
    // 803002F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803002F4:
    ctx->pc = 0x803002F4u;
    ctx->downcount -= 18;
    // 803002F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803002F8:
    ctx->pc = 0x803002F8u;
    // 803002F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803002FC:
    // 803002FC: cmpwi   r3, 0
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

label_80300300:
    ctx->pc = 0x80300300u;
    // 80300300: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300304:
    ctx->pc = 0x80300304u;
    // 80300304: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300308:
    // 80300308: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030030C:
    // 8030030C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300310:
    // 80300310: bc    12, 2, 0x80300340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300340;
        }
    }

label_80300314:
    ctx->downcount -= 1;
    // 80300314: bc    12, 2, 0x80300330
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300330;
        }
    }

label_80300318:
    ctx->downcount -= 3;
    // 80300318: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030031C:
    // 8030031C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80300320:
    // 80300320: bl      0x802FFED4
    {
            ctx->lr = 0x80300324u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFED4u;
                return;
            }
            goto label_802FFED4;
    }

label_80300324:
    ctx->downcount -= 3;
    // 80300324: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300328:
    // 80300328: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030032C:
    // 8030032C: bl      0x801ED118
    {
            ctx->lr = 0x80300330u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80300330:
    ctx->downcount -= 2;
    // 80300330: cmpwi   r31, 0
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

label_80300334:
    // 80300334: bc    4, 1, 0x80300340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300340;
        }
    }

label_80300338:
    ctx->downcount -= 2;
    // 80300338: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030033C:
    // 8030033C: bl      0x801C1C90
    {
            ctx->lr = 0x80300340u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80300340:
    ctx->downcount -= 17;
    // 80300340: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300344:
    ctx->pc = 0x80300344u;
    // 80300344: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300348:
    ctx->pc = 0x80300348u;
    // 80300348: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030034C:
    ctx->pc = 0x8030034Cu;
    // 8030034C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300350:
    // 80300350: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300354:
    ctx->pc = 0x80300354u;
    // 80300354: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300358:
    ctx->downcount -= 2;
    // 80300358: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030035C:
    // 8030035C: b       0x802FFE6C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802FFE6Cu;
                return;
            }
            goto label_802FFE6C;
    }

label_80300360:
    ctx->downcount -= 2;
    // 80300360: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80300364:
    // 80300364: b       0x803002F4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803002F4u;
                return;
            }
            goto label_803002F4;
    }

label_80300368:
    ctx->pc = 0x80300368u;
    ctx->downcount -= 15;
    // 80300368: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030036C:
    ctx->pc = 0x8030036Cu;
    // 8030036C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300370:
    ctx->pc = 0x80300370u;
    // 80300370: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300374:
    ctx->pc = 0x80300374u;
    // 80300374: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80300378:
    ctx->pc = 0x80300378u;
    // 80300378: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030037C:
    ctx->pc = 0x8030037Cu;
    // 8030037C: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_80300380:
    ctx->pc = 0x80300380u;
    // 80300380: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300380u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80300384:
    ctx->pc = 0x80300384u;
    // 80300384: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80300384u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80300384u);
        if (ctx->exception) return;
    }

label_80300388:
    ctx->pc = 0x80300388u;
    // 80300388: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030038C:
    ctx->pc = 0x8030038Cu;
    // 8030038C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80300390:
    ctx->pc = 0x80300390u;
    // 80300390: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80300394:
    ctx->pc = 0x80300394u;
    // 80300394: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300398:
    ctx->pc = 0x80300398u;
    // 80300398: lwz     r5, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030039C:
    ctx->pc = 0x8030039Cu;
    // 8030039C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803003A0:
    ctx->pc = 0x803003A0u;
    // 803003A0: bl      0x8026FCD4
    {
            ctx->lr = 0x803003A4u;
            ctx->pc = 0x8026FCD4u;
            return;
    }

label_803003A4:
    ctx->pc = 0x803003A4u;
    ctx->downcount -= 2;
    // 803003A4: cmpwi   r3, 0
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

label_803003A8:
    ctx->pc = 0x803003A8u;
    // 803003A8: bc    12, 2, 0x803003B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803003B4;
        }
    }

label_803003AC:
    ctx->pc = 0x803003ACu;
    ctx->downcount -= 2;
    // 803003AC: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_803003B0:
    ctx->pc = 0x803003B0u;
    // 803003B0: b       0x803003D4
    {
            goto label_803003D4;
    }

label_803003B4:
    ctx->pc = 0x803003B4u;
    ctx->downcount -= 3;
    // 803003B4: lwz     r3, -14104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803003B8:
    ctx->pc = 0x803003B8u;
    // 803003B8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803003BC:
    ctx->pc = 0x803003BCu;
    // 803003BC: bl      0x801C4AB8
    {
            ctx->lr = 0x803003C0u;
            ctx->pc = 0x801C4AB8u;
            return;
    }

label_803003C0:
    ctx->pc = 0x803003C0u;
    ctx->downcount -= 2;
    // 803003C0: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_803003C4:
    ctx->pc = 0x803003C4u;
    // 803003C4: bl      0x80240F78
    {
            ctx->lr = 0x803003C8u;
            ctx->pc = 0x80240F78u;
            return;
    }

label_803003C8:
    ctx->pc = 0x803003C8u;
    ctx->downcount -= 2;
    // 803003C8: cmpwi   r3, 0
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

label_803003CC:
    ctx->pc = 0x803003CCu;
    // 803003CC: bc    12, 2, 0x803003D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803003D4;
        }
    }

label_803003D0:
    ctx->pc = 0x803003D0u;
    ctx->downcount -= 1;
    // 803003D0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_803003D4:
    ctx->pc = 0x803003D4u;
    ctx->downcount -= 2;
    // 803003D4: cmpwi   r31, 0
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

label_803003D8:
    ctx->pc = 0x803003D8u;
    // 803003D8: bc    12, 2, 0x80300410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300410;
        }
    }

label_803003DC:
    ctx->pc = 0x803003DCu;
    ctx->downcount -= 3;
    // 803003DC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803003E0:
    ctx->pc = 0x803003E0u;
    // 803003E0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803003E4:
    ctx->pc = 0x803003E4u;
    // 803003E4: bl      0x8026F6AC
    {
            ctx->lr = 0x803003E8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803003E8:
    ctx->pc = 0x803003E8u;
    ctx->downcount -= 1;
    // 803003E8: bl      0x8025EA68
    {
            ctx->lr = 0x803003ECu;
            ctx->pc = 0x8025EA68u;
            return;
    }

label_803003EC:
    ctx->pc = 0x803003ECu;
    ctx->downcount -= 5;
    // 803003EC: lfs     f0, -12080(r2)
    if (!ppc_fp_available_inline(ctx, 0x803003ECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803003F0:
    ctx->pc = 0x803003F0u;
    // 803003F0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803003F4:
    ctx->pc = 0x803003F4u;
    // 803003F4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803003F8:
    ctx->pc = 0x803003F8u;
    // 803003F8: fmuls   f31, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x803003F8u)) return;
    ppc_fmuls(ctx, 31, 1, 0);

label_803003FC:
    ctx->pc = 0x803003FCu;
    // 803003FC: bl      0x8026F6AC
    {
            ctx->lr = 0x80300400u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80300400:
    ctx->pc = 0x80300400u;
    ctx->downcount -= 2;
    // 80300400: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80300400u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80300404:
    ctx->pc = 0x80300404u;
    // 80300404: bl      0x8025EBE8
    {
            ctx->lr = 0x80300408u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_80300408:
    ctx->pc = 0x80300408u;
    ctx->downcount -= 2;
    // 80300408: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030040C:
    ctx->pc = 0x8030040Cu;
    // 8030040C: bl      0x803004B4
    {
            ctx->lr = 0x80300410u;
            goto label_803004B4;
    }

label_80300410:
    ctx->pc = 0x80300410u;
    ctx->downcount -= 9;
    // 80300410: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300414:
    ctx->pc = 0x80300414u;
    // 80300414: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80300414u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80300414u);
        if (ctx->exception) return;
    }

label_80300418:
    ctx->pc = 0x80300418u;
    // 80300418: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300418u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8030041C:
    ctx->pc = 0x8030041Cu;
    // 8030041C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300420:
    ctx->pc = 0x80300420u;
    // 80300420: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80300424:
    ctx->pc = 0x80300424u;
    // 80300424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300428:
    ctx->pc = 0x80300428u;
    // 80300428: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030042C:
    ctx->pc = 0x8030042Cu;
    // 8030042C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300430:
    ctx->pc = 0x80300430u;
    ctx->downcount -= 12;
    // 80300430: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300434:
    ctx->pc = 0x80300434u;
    // 80300434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300438:
    ctx->pc = 0x80300438u;
    // 80300438: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030043C:
    ctx->pc = 0x8030043Cu;
    // 8030043C: li      r6, 32
    ctx->gpr[6] = (u32)(s32)(32);

label_80300440:
    ctx->pc = 0x80300440u;
    // 80300440: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300444:
    ctx->pc = 0x80300444u;
    // 80300444: li      r7, 12
    ctx->gpr[7] = (u32)(s32)(12);

label_80300448:
    ctx->pc = 0x80300448u;
    // 80300448: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8030044C:
    ctx->pc = 0x8030044Cu;
    // 8030044C: stw     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300450:
    ctx->pc = 0x80300450u;
    // 80300450: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300454:
    ctx->pc = 0x80300454u;
    // 80300454: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80300458:
    ctx->pc = 0x80300458u;
    // 80300458: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_8030045C:
    ctx->pc = 0x8030045Cu;
    // 8030045C: bl      0x8034DD6C
    {
            ctx->lr = 0x80300460u;
            ctx->pc = 0x8034DD6Cu;
            return;
    }

label_80300460:
    ctx->pc = 0x80300460u;
    ctx->downcount -= 5;
    // 80300460: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_80300464:
    ctx->pc = 0x80300464u;
    // 80300464: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80300468:
    ctx->pc = 0x80300468u;
    // 80300468: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8030046C:
    ctx->pc = 0x8030046Cu;
    // 8030046C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80300470:
    ctx->pc = 0x80300470u;
    // 80300470: bl      0x8034DCF8
    {
            ctx->lr = 0x80300474u;
            ctx->pc = 0x8034DCF8u;
            return;
    }

label_80300474:
    ctx->pc = 0x80300474u;
    ctx->downcount -= 4;
    // 80300474: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80300478:
    ctx->pc = 0x80300478u;
    // 80300478: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030047C:
    ctx->pc = 0x8030047Cu;
    // 8030047C: addi    r4, r4, 14912
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14912);

label_80300480:
    ctx->pc = 0x80300480u;
    // 80300480: bl      0x8026F968
    {
            ctx->lr = 0x80300484u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80300484:
    ctx->pc = 0x80300484u;
    ctx->downcount -= 7;
    // 80300484: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300488:
    ctx->pc = 0x80300488u;
    // 80300488: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030048C:
    ctx->pc = 0x8030048Cu;
    // 8030048C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_80300490:
    ctx->pc = 0x80300490u;
    // 80300490: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80300494:
    ctx->pc = 0x80300494u;
    // 80300494: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80300498:
    ctx->pc = 0x80300498u;
    // 80300498: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030049C:
    ctx->pc = 0x8030049Cu;
    // 8030049C: bl      0x8026F8C0
    {
            ctx->lr = 0x803004A0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_803004A0:
    ctx->pc = 0x803004A0u;
    ctx->downcount -= 6;
    // 803004A0: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803004A4:
    ctx->pc = 0x803004A4u;
    // 803004A4: lwz     r31, 140(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(140);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803004A8:
    ctx->pc = 0x803004A8u;
    // 803004A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803004AC:
    ctx->pc = 0x803004ACu;
    // 803004AC: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_803004B0:
    ctx->pc = 0x803004B0u;
    // 803004B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803004B4:
    ctx->pc = 0x803004B4u;
    ctx->downcount -= 10;
    // 803004B4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803004B8:
    ctx->pc = 0x803004B8u;
    // 803004B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803004BC:
    ctx->pc = 0x803004BCu;
    // 803004BC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803004C0:
    ctx->pc = 0x803004C0u;
    // 803004C0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803004C4:
    ctx->pc = 0x803004C4u;
    // 803004C4: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x803004C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_803004C8:
    ctx->pc = 0x803004C8u;
    // 803004C8: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x803004C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x803004C8u);
        if (ctx->exception) return;
    }

label_803004CC:
    ctx->pc = 0x803004CCu;
    // 803004CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803004D0:
    ctx->pc = 0x803004D0u;
    // 803004D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803004D4:
    ctx->pc = 0x803004D4u;
    // 803004D4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803004D8:
    ctx->pc = 0x803004D8u;
    // 803004D8: bl      0x8026F6AC
    {
            ctx->lr = 0x803004DCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803004DC:
    ctx->pc = 0x803004DCu;
    ctx->downcount -= 1;
    // 803004DC: bl      0x8025EA68
    {
            ctx->lr = 0x803004E0u;
            ctx->pc = 0x8025EA68u;
            return;
    }

label_803004E0:
    ctx->pc = 0x803004E0u;
    ctx->downcount -= 4;
    // 803004E0: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x803004E0u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_803004E4:
    ctx->pc = 0x803004E4u;
    // 803004E4: lwz     r4, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803004E8:
    ctx->pc = 0x803004E8u;
    // 803004E8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803004EC:
    ctx->pc = 0x803004ECu;
    // 803004EC: bl      0x8026F5F4
    {
            ctx->lr = 0x803004F0u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_803004F0:
    ctx->pc = 0x803004F0u;
    ctx->downcount -= 4;
    // 803004F0: lfs     f0, -12076(r2)
    if (!ppc_fp_available_inline(ctx, 0x803004F0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12076);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803004F4:
    ctx->pc = 0x803004F4u;
    // 803004F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803004F8:
    ctx->pc = 0x803004F8u;
    // 803004F8: fcmpo   cr0, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x803004F8u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[31], ctx->fpr[0], true);

label_803004FC:
    ctx->pc = 0x803004FCu;
    // 803004FC: bc    4, 1, 0x80300534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300534;
        }
    }

label_80300500:
    ctx->pc = 0x80300500u;
    ctx->downcount -= 3;
    // 80300500: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_80300504:
    ctx->pc = 0x80300504u;
    // 80300504: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300508:
    ctx->pc = 0x80300508u;
    // 80300508: bl      0x802B732C
    {
            ctx->lr = 0x8030050Cu;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_8030050C:
    ctx->pc = 0x8030050Cu;
    ctx->downcount -= 3;
    // 8030050C: li      r3, 181
    ctx->gpr[3] = (u32)(s32)(181);

label_80300510:
    ctx->pc = 0x80300510u;
    // 80300510: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300514:
    ctx->pc = 0x80300514u;
    // 80300514: bl      0x802B732C
    {
            ctx->lr = 0x80300518u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80300518:
    ctx->pc = 0x80300518u;
    ctx->downcount -= 2;
    // 80300518: li      r3, 178
    ctx->gpr[3] = (u32)(s32)(178);

label_8030051C:
    ctx->pc = 0x8030051Cu;
    // 8030051C: bl      0x802B73BC
    {
            ctx->lr = 0x80300520u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80300520:
    ctx->pc = 0x80300520u;
    ctx->downcount -= 4;
    // 80300520: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80300524:
    ctx->pc = 0x80300524u;
    // 80300524: li      r3, 179
    ctx->gpr[3] = (u32)(s32)(179);

label_80300528:
    ctx->pc = 0x80300528u;
    // 80300528: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030052C:
    ctx->pc = 0x8030052Cu;
    // 8030052C: bl      0x802B735C
    {
            ctx->lr = 0x80300530u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80300530:
    ctx->pc = 0x80300530u;
    ctx->downcount -= 1;
    // 80300530: b       0x80300564
    {
            goto label_80300564;
    }

label_80300534:
    ctx->pc = 0x80300534u;
    ctx->downcount -= 3;
    // 80300534: li      r3, 178
    ctx->gpr[3] = (u32)(s32)(178);

label_80300538:
    ctx->pc = 0x80300538u;
    // 80300538: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030053C:
    ctx->pc = 0x8030053Cu;
    // 8030053C: bl      0x802B732C
    {
            ctx->lr = 0x80300540u;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_80300540:
    ctx->pc = 0x80300540u;
    ctx->downcount -= 3;
    // 80300540: li      r3, 179
    ctx->gpr[3] = (u32)(s32)(179);

label_80300544:
    ctx->pc = 0x80300544u;
    // 80300544: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300548:
    ctx->pc = 0x80300548u;
    // 80300548: bl      0x802B732C
    {
            ctx->lr = 0x8030054Cu;
            ctx->pc = 0x802B732Cu;
            return;
    }

label_8030054C:
    ctx->pc = 0x8030054Cu;
    ctx->downcount -= 2;
    // 8030054C: li      r3, 180
    ctx->gpr[3] = (u32)(s32)(180);

label_80300550:
    ctx->pc = 0x80300550u;
    // 80300550: bl      0x802B73BC
    {
            ctx->lr = 0x80300554u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80300554:
    ctx->pc = 0x80300554u;
    ctx->downcount -= 4;
    // 80300554: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80300558:
    ctx->pc = 0x80300558u;
    // 80300558: li      r3, 181
    ctx->gpr[3] = (u32)(s32)(181);

label_8030055C:
    ctx->pc = 0x8030055Cu;
    // 8030055C: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80300560:
    ctx->pc = 0x80300560u;
    // 80300560: bl      0x802B735C
    {
            ctx->lr = 0x80300564u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80300564:
    ctx->pc = 0x80300564u;
    ctx->downcount -= 8;
    // 80300564: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300568:
    ctx->pc = 0x80300568u;
    // 80300568: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80300568u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80300568u);
        if (ctx->exception) return;
    }

label_8030056C:
    ctx->pc = 0x8030056Cu;
    // 8030056C: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030056Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80300570:
    ctx->pc = 0x80300570u;
    // 80300570: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300574:
    ctx->pc = 0x80300574u;
    // 80300574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300578:
    ctx->pc = 0x80300578u;
    // 80300578: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030057C:
    ctx->pc = 0x8030057Cu;
    // 8030057C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300580:
    ctx->pc = 0x80300580u;
    ctx->downcount -= 4;
    // 80300580: lfs     f2, -12072(r2)
    if (!ppc_fp_available_inline(ctx, 0x80300580u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12072);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80300584:
    // 80300584: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80300588:
    // 80300588: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030058C:
    // 8030058C: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_80300590:
    ctx->pc = 0x80300590u;
    ctx->downcount -= 1;
    // 80300590: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300594:
    ctx->pc = 0x80300594u;
    ctx->downcount -= 24;
    // 80300594: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300598:
    ctx->pc = 0x80300598u;
    // 80300598: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030059C:
    // 8030059C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_803005A0:
    // 803005A0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_803005A4:
    ctx->pc = 0x803005A4u;
    // 803005A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803005A8:
    // 803005A8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_803005AC:
    ctx->pc = 0x803005ACu;
    // 803005AC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803005B0:
    // 803005B0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_803005B4:
    // 803005B4: addi    r31, r31, 14912
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(14912);

label_803005B8:
    // 803005B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803005BC:
    // 803005BC: addi    r4, r31, 12
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(12);

label_803005C0:
    // 803005C0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803005C4:
    // 803005C4: addi    r5, r31, 27
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(27);

label_803005C8:
    // 803005C8: bl      0x802703A8
    {
            ctx->lr = 0x803005CCu;
            ctx->pc = 0x802703A8u;
            return;
    }

label_803005CC:
    ctx->downcount -= 6;
    // 803005CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803005D0:
    // 803005D0: addi    r5, r31, 57
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(57);

label_803005D4:
    // 803005D4: addi    r6, r31, 60
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(60);

label_803005D8:
    // 803005D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803005DC:
    // 803005DC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_803005E0:
    // 803005E0: bl      0x8027035C
    {
            ctx->lr = 0x803005E4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_803005E4:
    ctx->downcount -= 6;
    // 803005E4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803005E8:
    // 803005E8: addi    r5, r31, 71
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(71);

label_803005EC:
    // 803005EC: addi    r6, r31, 60
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(60);

label_803005F0:
    // 803005F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_803005F4:
    // 803005F4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_803005F8:
    // 803005F8: bl      0x8027035C
    {
            ctx->lr = 0x803005FCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_803005FC:
    ctx->downcount -= 6;
    // 803005FC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80300600:
    // 80300600: addi    r5, r31, 75
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(75);

label_80300604:
    // 80300604: addi    r6, r31, 81
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(81);

label_80300608:
    // 80300608: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030060C:
    // 8030060C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80300610:
    // 80300610: bl      0x8027035C
    {
            ctx->lr = 0x80300614u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80300614:
    ctx->downcount -= 6;
    // 80300614: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80300618:
    // 80300618: addi    r5, r31, 90
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(90);

label_8030061C:
    // 8030061C: addi    r6, r31, 81
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(81);

label_80300620:
    // 80300620: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80300624:
    // 80300624: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80300628:
    // 80300628: bl      0x8027035C
    {
            ctx->lr = 0x8030062Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030062C:
    ctx->downcount -= 6;
    // 8030062C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80300630:
    // 80300630: addi    r5, r31, 97
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(97);

label_80300634:
    // 80300634: addi    r6, r31, 110
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(110);

label_80300638:
    // 80300638: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8030063C:
    // 8030063C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80300640:
    // 80300640: bl      0x8027035C
    {
            ctx->lr = 0x80300644u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80300644:
    ctx->downcount -= 9;
    // 80300644: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80300648:
    // 80300648: addi    r5, r31, 122
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(122);

label_8030064C:
    // 8030064C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300650:
    // 80300650: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80300654:
    // 80300654: li      r7, 3
    ctx->gpr[7] = (u32)(s32)(3);

label_80300658:
    // 80300658: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030065C:
    // 8030065C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_80300660:
    // 80300660: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80300664:
    // 80300664: bl      0x802701C0
    {
            ctx->lr = 0x80300668u;
            ctx->pc = 0x802701C0u;
            return;
    }

label_80300668:
    ctx->downcount -= 4;
    // 80300668: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030066C:
    // 8030066C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300670:
    // 80300670: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80300674:
    // 80300674: bl      0x80270194
    {
            ctx->lr = 0x80300678u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80300678:
    ctx->pc = 0x80300678u;
    ctx->downcount -= 16;
    // 80300678: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030067C:
    ctx->pc = 0x8030067Cu;
    // 8030067C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300680:
    ctx->pc = 0x80300680u;
    // 80300680: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300684:
    // 80300684: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300688:
    ctx->pc = 0x80300688u;
    // 80300688: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030068C:
    ctx->pc = 0x8030068Cu;
    ctx->downcount -= 6;
    // 8030068C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300690:
    ctx->pc = 0x80300690u;
    // 80300690: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300694:
    // 80300694: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300698:
    // 80300698: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030069C:
    ctx->pc = 0x8030069Cu;
    // 8030069C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803006A0:
    // 803006A0: bl      0x8026F69C
    {
            ctx->lr = 0x803006A4u;
            ctx->pc = 0x8026F69Cu;
            return;
    }

label_803006A4:
    ctx->downcount -= 1;
    // 803006A4: bl      0x80262840
    {
            ctx->lr = 0x803006A8u;
            ctx->pc = 0x80262840u;
            return;
    }

label_803006A8:
    ctx->downcount -= 7;
    // 803006A8: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803006AC:
    // 803006AC: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803006B0:
    ctx->pc = 0x803006B0u;
    // 803006B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803006B4:
    ctx->pc = 0x803006B4u;
    // 803006B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803006B8:
    // 803006B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803006BC:
    ctx->pc = 0x803006BCu;
    // 803006BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803006C0:
    ctx->pc = 0x803006C0u;
    ctx->downcount -= 5;
    // 803006C0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803006C4:
    ctx->pc = 0x803006C4u;
    // 803006C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803006C8:
    ctx->pc = 0x803006C8u;
    // 803006C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803006CC:
    // 803006CC: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_803006D0:
    // 803006D0: bl      0x80007860
    {
            ctx->lr = 0x803006D4u;
            ctx->pc = 0x80007860u;
            return;
    }

label_803006D4:
    ctx->pc = 0x803006D4u;
    ctx->downcount -= 5;
    // 803006D4: stw     r7, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_803006D8:
    // 803006D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803006DC:
    // 803006DC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803006E0:
    // 803006E0: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_803006E4:
    // 803006E4: bl      0x801F5C64
    {
            ctx->lr = 0x803006E8u;
            ctx->pc = 0x801F5C64u;
            return;
    }

label_803006E8:
    ctx->downcount -= 4;
    // 803006E8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_803006EC:
    // 803006EC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803006F0:
    // 803006F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803006F4:
    // 803006F4: bl      0x8026FEF0
    {
            ctx->lr = 0x803006F8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_803006F8:
    ctx->downcount -= 3;
    // 803006F8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_803006FC:
    // 803006FC: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80300700:
    // 80300700: bl      0x8026F6AC
    {
            ctx->lr = 0x80300704u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80300704:
    ctx->downcount -= 1;
    // 80300704: bl      0x8025EC94
    {
            ctx->lr = 0x80300708u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80300708:
    ctx->downcount -= 3;
    // 80300708: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030070C:
    // 8030070C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80300710:
    // 80300710: bl      0x8026F6AC
    {
            ctx->lr = 0x80300714u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80300714:
    ctx->pc = 0x80300714u;
    ctx->downcount -= 2;
    // 80300714: lfs     f1, -12080(r2)
    if (!ppc_fp_available_inline(ctx, 0x80300714u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12080);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80300718:
    // 80300718: bl      0x8025EBE8
    {
            ctx->lr = 0x8030071Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8030071C:
    ctx->downcount -= 4;
    // 8030071C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300720:
    // 80300720: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300724:
    // 80300724: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300728:
    // 80300728: bl      0x80300430
    {
            ctx->lr = 0x8030072Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300430u;
                return;
            }
            goto label_80300430;
    }

label_8030072C:
    ctx->downcount -= 2;
    // 8030072C: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_80300730:
    // 80300730: bl      0x800078AC
    {
            ctx->lr = 0x80300734u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_80300734:
    ctx->pc = 0x80300734u;
    ctx->downcount -= 5;
    // 80300734: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300738:
    ctx->pc = 0x80300738u;
    // 80300738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030073C:
    // 8030073C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80300740:
    ctx->pc = 0x80300740u;
    // 80300740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300744:
    ctx->pc = 0x80300744u;
    ctx->downcount -= 9;
    // 80300744: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300748:
    ctx->pc = 0x80300748u;
    // 80300748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030074C:
    // 8030074C: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300750:
    // 80300750: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80300754:
    ctx->pc = 0x80300754u;
    // 80300754: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300758:
    // 80300758: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030075C:
    ctx->pc = 0x8030075Cu;
    // 8030075C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300760:
    // 80300760: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300764:
    // 80300764: bl      0x80371C8C
    {
            ctx->lr = 0x80300768u;
            ctx->pc = 0x80371C8Cu;
            return;
    }

label_80300768:
    ctx->downcount -= 15;
    // 80300768: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_8030076C:
    // 8030076C: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80300770:
    // 80300770: addi    r5, r5, 24216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24216);

label_80300774:
    ctx->pc = 0x80300774u;
    // 80300774: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80300778:
    // 80300778: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_8030077C:
    // 8030077C: addi    r3, r3, 14912
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14912);

label_80300780:
    // 80300780: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_80300784:
    // 80300784: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_80300788:
    ctx->pc = 0x80300788u;
    // 80300788: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030078C:
    // 8030078C: addi    r4, r3, 132
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(132);

label_80300790:
    // 80300790: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_80300794:
    // 80300794: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80300798:
    ctx->pc = 0x80300798u;
    // 80300798: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030079C:
    ctx->pc = 0x8030079Cu;
    // 8030079C: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803007A0:
    // 803007A0: bl      0x8000E7F4
    {
            ctx->lr = 0x803007A4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_803007A4:
    ctx->downcount -= 9;
    // 803007A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803007A8:
    ctx->pc = 0x803007A8u;
    // 803007A8: stw     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803007AC:
    // 803007AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803007B0:
    ctx->pc = 0x803007B0u;
    // 803007B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803007B4:
    ctx->pc = 0x803007B4u;
    // 803007B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803007B8:
    ctx->pc = 0x803007B8u;
    // 803007B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803007BC:
    // 803007BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803007C0:
    ctx->pc = 0x803007C0u;
    // 803007C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803007C4:
    ctx->pc = 0x803007C4u;
    ctx->downcount -= 1;
    // 803007C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803007C8:
    ctx->pc = 0x803007C8u;
    ctx->downcount -= 18;
    // 803007C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803007CC:
    ctx->pc = 0x803007CCu;
    // 803007CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803007D0:
    // 803007D0: cmpwi   r3, 0
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

label_803007D4:
    ctx->pc = 0x803007D4u;
    // 803007D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803007D8:
    ctx->pc = 0x803007D8u;
    // 803007D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803007DC:
    // 803007DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803007E0:
    // 803007E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803007E4:
    // 803007E4: bc    12, 2, 0x80300818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300818;
        }
    }

label_803007E8:
    ctx->downcount -= 1;
    // 803007E8: bc    12, 2, 0x80300808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300808;
        }
    }

label_803007EC:
    ctx->downcount -= 1;
    // 803007EC: bc    12, 2, 0x80300808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300808;
        }
    }

label_803007F0:
    ctx->downcount -= 3;
    // 803007F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803007F4:
    // 803007F4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803007F8:
    // 803007F8: bl      0x801F5C24
    {
            ctx->lr = 0x803007FCu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_803007FC:
    ctx->downcount -= 3;
    // 803007FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300800:
    // 80300800: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300804:
    // 80300804: bl      0x801F5BBC
    {
            ctx->lr = 0x80300808u;
            ctx->pc = 0x801F5BBCu;
            return;
    }

label_80300808:
    ctx->downcount -= 2;
    // 80300808: cmpwi   r31, 0
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

label_8030080C:
    // 8030080C: bc    4, 1, 0x80300818
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300818;
        }
    }

label_80300810:
    ctx->downcount -= 2;
    // 80300810: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300814:
    // 80300814: bl      0x801C1C90
    {
            ctx->lr = 0x80300818u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80300818:
    ctx->downcount -= 17;
    // 80300818: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030081C:
    ctx->pc = 0x8030081Cu;
    // 8030081C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300820:
    ctx->pc = 0x80300820u;
    // 80300820: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300824:
    ctx->pc = 0x80300824u;
    // 80300824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300828:
    // 80300828: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030082C:
    ctx->pc = 0x8030082Cu;
    // 8030082C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300830:
    ctx->downcount -= 2;
    // 80300830: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80300834:
    // 80300834: b       0x803007C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803007C8u;
                return;
            }
            goto label_803007C8;
    }

label_80300838:
    ctx->downcount -= 2;
    // 80300838: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030083C:
    // 8030083C: b       0x80300580
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300580u;
                return;
            }
            goto label_80300580;
    }

label_80300840:
    ctx->downcount -= 2;
    // 80300840: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80300844:
    // 80300844: b       0x80300590
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300590u;
                return;
            }
            goto label_80300590;
    }

label_80300848:
    ctx->downcount -= 2;
    // 80300848: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030084C:
    // 8030084C: b       0x803007C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803007C8u;
                return;
            }
            goto label_803007C8;
    }

label_80300850:
    ctx->pc = 0x80300850u;
    ctx->downcount -= 6;
    // 80300850: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300854:
    ctx->pc = 0x80300854u;
    // 80300854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300858:
    ctx->pc = 0x80300858u;
    // 80300858: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030085C:
    ctx->pc = 0x8030085Cu;
    // 8030085C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300860:
    ctx->pc = 0x80300860u;
    // 80300860: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300864:
    ctx->pc = 0x80300864u;
    // 80300864: bl      0x802C3780
    {
            ctx->lr = 0x80300868u;
            ctx->pc = 0x802C3780u;
            return;
    }

label_80300868:
    ctx->pc = 0x80300868u;
    ctx->downcount -= 12;
    // 80300868: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030086C:
    ctx->pc = 0x8030086Cu;
    // 8030086C: mulli   r0, r0, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)24);

label_80300870:
    ctx->pc = 0x80300870u;
    // 80300870: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80300874:
    ctx->pc = 0x80300874u;
    // 80300874: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300878:
    ctx->pc = 0x80300878u;
    // 80300878: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030087C:
    ctx->pc = 0x8030087Cu;
    // 8030087C: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80300880:
    ctx->pc = 0x80300880u;
    // 80300880: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300884:
    ctx->pc = 0x80300884u;
    // 80300884: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300888:
    ctx->pc = 0x80300888u;
    // 80300888: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030088C:
    ctx->pc = 0x8030088Cu;
    ctx->downcount -= 6;
    // 8030088C: mulli   r0, r4, 24
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)24);

label_80300890:
    ctx->pc = 0x80300890u;
    // 80300890: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80300894:
    ctx->pc = 0x80300894u;
    // 80300894: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80300898:
    ctx->pc = 0x80300898u;
    // 80300898: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030089C:
    ctx->pc = 0x8030089Cu;
    ctx->downcount -= 11;
    // 8030089C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803008A0:
    ctx->pc = 0x803008A0u;
    // 803008A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803008A4:
    ctx->pc = 0x803008A4u;
    // 803008A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803008A8:
    ctx->pc = 0x803008A8u;
    // 803008A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803008AC:
    ctx->pc = 0x803008ACu;
    // 803008AC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803008B0:
    ctx->pc = 0x803008B0u;
    // 803008B0: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803008B4:
    ctx->pc = 0x803008B4u;
    // 803008B4: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_803008B8:
    ctx->pc = 0x803008B8u;
    // 803008B8: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_803008BC:
    ctx->pc = 0x803008BCu;
    // 803008BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803008C0:
    ctx->pc = 0x803008C0u;
    // 803008C0: addi    r3, r31, 15072
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(15072);

label_803008C4:
    ctx->pc = 0x803008C4u;
    // 803008C4: bl      0x80231700
    {
            ctx->lr = 0x803008C8u;
            ctx->pc = 0x80231700u;
            return;
    }

label_803008C8:
    ctx->pc = 0x803008C8u;
    ctx->downcount -= 4;
    // 803008C8: addi    r4, r31, 15072
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(15072);

label_803008CC:
    ctx->pc = 0x803008CCu;
    // 803008CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803008D0:
    ctx->pc = 0x803008D0u;
    // 803008D0: addi    r4, r4, 13
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(13);

label_803008D4:
    ctx->pc = 0x803008D4u;
    // 803008D4: bl      0x80232594
    {
            ctx->lr = 0x803008D8u;
            ctx->pc = 0x80232594u;
            return;
    }

label_803008D8:
    ctx->pc = 0x803008D8u;
    ctx->downcount -= 4;
    // 803008D8: stw     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803008DC:
    ctx->pc = 0x803008DCu;
    // 803008DC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_803008E0:
    ctx->pc = 0x803008E0u;
    // 803008E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803008E4:
    ctx->pc = 0x803008E4u;
    // 803008E4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_803008E8:
    ctx->pc = 0x803008E8u;
    ctx->downcount -= 6;
    // 803008E8: lwz     r0, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803008EC:
    // 803008EC: addi    r7, r1, 4
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(4);

label_803008F0:
    // 803008F0: add   r4, r0, r3
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803008F4:
    // 803008F4: addi    r6, r4, 12
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(12);

label_803008F8:
    ctx->pc = 0x803008F8u;
    // 803008F8: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_803008FC:
    loop_803008FC(ctx);
    if (ctx->pc == 0x80300910u) goto label_80300910;
    return;
label_80300900:
    ctx->pc = 0x80300900u;
    // 80300900: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_80300904:
    ctx->pc = 0x80300904u;
    // 80300904: stw     r4, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300908:
    ctx->pc = 0x80300908u;
    // 80300908: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_8030090C:
    // 8030090C: bc    16, 0, 0x803008FC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803008FCu;
                return;
            }
            goto label_803008FC;
        }
    }

label_80300910:
    ctx->downcount -= 17;
    // 80300910: add   r4, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80300914:
    ctx->pc = 0x80300914u;
    // 80300914: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300914u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80300918:
    ctx->pc = 0x80300918u;
    // 80300918: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x80300918u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030091C:
    // 8030091C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80300920:
    // 80300920: cmpwi   r8, 15
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(15);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300924:
    // 80300924: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80300928:
    ctx->pc = 0x80300928u;
    // 80300928: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300928u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030092C:
    ctx->pc = 0x8030092Cu;
    // 8030092C: stfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x8030092Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80300930:
    ctx->pc = 0x80300930u;
    // 80300930: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300930u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80300934:
    ctx->pc = 0x80300934u;
    // 80300934: stfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x80300934u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80300938:
    ctx->pc = 0x80300938u;
    // 80300938: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300938u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030093C:
    ctx->pc = 0x8030093Cu;
    // 8030093C: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x8030093Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80300940:
    ctx->pc = 0x80300940u;
    // 80300940: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300940u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80300944:
    ctx->pc = 0x80300944u;
    // 80300944: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x80300944u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80300948:
    ctx->pc = 0x80300948u;
    // 80300948: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80300948u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030094C:
    ctx->pc = 0x8030094Cu;
    // 8030094C: stfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x8030094Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80300950:
    // 80300950: bc    12, 0, 0x803008E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803008E8u;
                return;
            }
            goto label_803008E8;
        }
    }

label_80300954:
    ctx->pc = 0x80300954u;
    ctx->downcount -= 7;
    // 80300954: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300958:
    ctx->pc = 0x80300958u;
    // 80300958: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030095C:
    ctx->pc = 0x8030095Cu;
    // 8030095C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80300960:
    ctx->pc = 0x80300960u;
    // 80300960: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300964:
    ctx->pc = 0x80300964u;
    // 80300964: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80300968:
    ctx->pc = 0x80300968u;
    // 80300968: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030096C:
    ctx->pc = 0x8030096Cu;
    ctx->downcount -= 12;
    // 8030096C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300970:
    ctx->pc = 0x80300970u;
    // 80300970: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300974:
    ctx->pc = 0x80300974u;
    // 80300974: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80300978:
    ctx->pc = 0x80300978u;
    // 80300978: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030097C:
    ctx->pc = 0x8030097Cu;
    // 8030097C: addi    r4, r4, 24504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24504);

label_80300980:
    ctx->pc = 0x80300980u;
    // 80300980: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300984:
    ctx->pc = 0x80300984u;
    // 80300984: addi    r31, r3, 4
    ctx->gpr[31] = ctx->gpr[3] + (u32)(s32)(4);

label_80300988:
    ctx->pc = 0x80300988u;
    // 80300988: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030098C:
    ctx->pc = 0x8030098Cu;
    // 8030098C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300990:
    ctx->pc = 0x80300990u;
    // 80300990: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300994:
    ctx->pc = 0x80300994u;
    // 80300994: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300998:
    ctx->pc = 0x80300998u;
    // 80300998: bl      0x801C9238
    {
            ctx->lr = 0x8030099Cu;
            ctx->pc = 0x801C9238u;
            return;
    }

label_8030099C:
    ctx->pc = 0x8030099Cu;
    ctx->downcount -= 9;
    // 8030099C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_803009A0:
    ctx->pc = 0x803009A0u;
    // 803009A0: li      r0, 15
    ctx->gpr[0] = (u32)(s32)(15);

label_803009A4:
    ctx->pc = 0x803009A4u;
    // 803009A4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803009A8:
    ctx->pc = 0x803009A8u;
    // 803009A8: lfs     f0, -12064(r2)
    if (!ppc_fp_available_inline(ctx, 0x803009A8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12064);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803009AC:
    ctx->pc = 0x803009ACu;
    // 803009AC: addi    r4, r4, 24516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24516);

label_803009B0:
    ctx->pc = 0x803009B0u;
    // 803009B0: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803009B4:
    ctx->pc = 0x803009B4u;
    // 803009B4: stw     r3, 20(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803009B8:
    ctx->pc = 0x803009B8u;
    // 803009B8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_803009BC:
    ctx->downcount -= 15;
    // 803009BC: add   r4, r30, r3
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803009C0:
    ctx->pc = 0x803009C0u;
    // 803009C0: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009C0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009C4:
    // 803009C4: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_803009C8:
    ctx->pc = 0x803009C8u;
    // 803009C8: stfs     f0, 24(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009C8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009CC:
    ctx->pc = 0x803009CCu;
    // 803009CC: stfs     f0, 28(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009CCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009D0:
    ctx->pc = 0x803009D0u;
    // 803009D0: stfs     f0, 32(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009D0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009D4:
    ctx->pc = 0x803009D4u;
    // 803009D4: stfs     f0, 36(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009D4u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009D8:
    ctx->pc = 0x803009D8u;
    // 803009D8: stfs     f0, 40(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009D8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009DC:
    ctx->pc = 0x803009DCu;
    // 803009DC: stfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009DCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009E0:
    ctx->pc = 0x803009E0u;
    // 803009E0: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009E0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009E4:
    ctx->pc = 0x803009E4u;
    // 803009E4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009E8:
    ctx->pc = 0x803009E8u;
    // 803009E8: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009EC:
    ctx->pc = 0x803009ECu;
    // 803009EC: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x803009ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009F0:
    ctx->pc = 0x803009F0u;
    // 803009F0: stfs     f0, 44(r4)
    if (!ppc_fp_available_inline(ctx, 0x803009F0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803009F4:
    // 803009F4: bc    16, 0, 0x803009BC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803009BCu;
                return;
            }
            goto label_803009BC;
        }
    }

label_803009F8:
    ctx->pc = 0x803009F8u;
    ctx->downcount -= 8;
    // 803009F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803009FC:
    ctx->pc = 0x803009FCu;
    // 803009FC: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300A00:
    ctx->pc = 0x80300A00u;
    // 80300A00: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80300A04:
    ctx->pc = 0x80300A04u;
    // 80300A04: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300A08:
    ctx->pc = 0x80300A08u;
    // 80300A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300A0C:
    ctx->pc = 0x80300A0Cu;
    // 80300A0C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80300A10:
    ctx->pc = 0x80300A10u;
    // 80300A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300A14:
    ctx->pc = 0x80300A14u;
    ctx->downcount -= 18;
    // 80300A14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300A18:
    ctx->pc = 0x80300A18u;
    // 80300A18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300A1C:
    ctx->pc = 0x80300A1Cu;
    // 80300A1C: cmpwi   r3, 0
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

label_80300A20:
    ctx->pc = 0x80300A20u;
    // 80300A20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300A24:
    ctx->pc = 0x80300A24u;
    // 80300A24: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300A28:
    ctx->pc = 0x80300A28u;
    // 80300A28: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300A2C:
    ctx->pc = 0x80300A2Cu;
    // 80300A2C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300A30:
    ctx->pc = 0x80300A30u;
    // 80300A30: bc    12, 2, 0x80300A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300A64;
        }
    }

label_80300A34:
    ctx->pc = 0x80300A34u;
    ctx->downcount -= 8;
    // 80300A34: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80300A38:
    ctx->pc = 0x80300A38u;
    // 80300A38: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80300A3C:
    ctx->pc = 0x80300A3Cu;
    // 80300A3C: addi    r4, r4, 24516
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24516);

label_80300A40:
    ctx->pc = 0x80300A40u;
    // 80300A40: stw     r4, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80300A44:
    ctx->pc = 0x80300A44u;
    // 80300A44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300A48:
    ctx->pc = 0x80300A48u;
    // 80300A48: stw     r0, -12360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300A4C:
    ctx->pc = 0x80300A4Cu;
    // 80300A4C: stw     r0, -12356(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300A50:
    ctx->pc = 0x80300A50u;
    // 80300A50: bl      0x801C928C
    {
            ctx->lr = 0x80300A54u;
            ctx->pc = 0x801C928Cu;
            return;
    }

label_80300A54:
    ctx->pc = 0x80300A54u;
    ctx->downcount -= 2;
    // 80300A54: cmpwi   r31, 0
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

label_80300A58:
    ctx->pc = 0x80300A58u;
    // 80300A58: bc    4, 1, 0x80300A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300A64;
        }
    }

label_80300A5C:
    ctx->pc = 0x80300A5Cu;
    ctx->downcount -= 2;
    // 80300A5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300A60:
    ctx->pc = 0x80300A60u;
    // 80300A60: bl      0x801C1C90
    {
            ctx->lr = 0x80300A64u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80300A64:
    ctx->pc = 0x80300A64u;
    ctx->downcount -= 17;
    // 80300A64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80300A68:
    ctx->pc = 0x80300A68u;
    // 80300A68: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300A6C:
    ctx->pc = 0x80300A6Cu;
    // 80300A6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300A70:
    ctx->pc = 0x80300A70u;
    // 80300A70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300A74:
    ctx->pc = 0x80300A74u;
    // 80300A74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300A78:
    ctx->pc = 0x80300A78u;
    // 80300A78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300A7C:
    ctx->pc = 0x80300A7Cu;
    ctx->downcount -= 2;
    // 80300A7C: li      r3, 255
    ctx->gpr[3] = (u32)(s32)(255);

label_80300A80:
    ctx->pc = 0x80300A80u;
    // 80300A80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300A84:
    ctx->pc = 0x80300A84u;
    ctx->downcount -= 4;
    // 80300A84: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80300A88:
    ctx->pc = 0x80300A88u;
    // 80300A88: stw     r0, -12360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300A8C:
    ctx->pc = 0x80300A8Cu;
    // 80300A8C: stw     r0, -12356(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12356);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300A90:
    ctx->pc = 0x80300A90u;
    // 80300A90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300A94:
    ctx->pc = 0x80300A94u;
    ctx->downcount -= 9;
    // 80300A94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300A98:
    ctx->pc = 0x80300A98u;
    // 80300A98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300A9C:
    ctx->pc = 0x80300A9Cu;
    // 80300A9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300AA0:
    ctx->pc = 0x80300AA0u;
    // 80300AA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300AA4:
    ctx->pc = 0x80300AA4u;
    // 80300AA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300AA8:
    ctx->pc = 0x80300AA8u;
    // 80300AA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300AAC:
    ctx->pc = 0x80300AACu;
    // 80300AAC: lwz     r0, -12360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12360);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300AB0:
    ctx->pc = 0x80300AB0u;
    // 80300AB0: cmpwi   r0, 0
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

label_80300AB4:
    ctx->pc = 0x80300AB4u;
    // 80300AB4: bc    4, 2, 0x80300AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300AC8;
        }
    }

label_80300AB8:
    ctx->pc = 0x80300AB8u;
    ctx->downcount -= 3;
    // 80300AB8: lwz     r0, -12356(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12356);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300ABC:
    ctx->pc = 0x80300ABCu;
    // 80300ABC: cmpwi   r0, 0
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

label_80300AC0:
    ctx->pc = 0x80300AC0u;
    // 80300AC0: bc    4, 2, 0x80300AC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300AC8;
        }
    }

label_80300AC4:
    ctx->pc = 0x80300AC4u;
    ctx->downcount -= 1;
    // 80300AC4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80300AC8:
    ctx->pc = 0x80300AC8u;
    ctx->downcount -= 4;
    // 80300AC8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80300ACC:
    ctx->pc = 0x80300ACCu;
    // 80300ACC: addi    r4, r4, 15072
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15072);

label_80300AD0:
    ctx->pc = 0x80300AD0u;
    // 80300AD0: addi    r4, r4, 47
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(47);

label_80300AD4:
    ctx->pc = 0x80300AD4u;
    // 80300AD4: bl      0x80370BD8
    {
            ctx->lr = 0x80300AD8u;
            ctx->pc = 0x80370BD8u;
            return;
    }

label_80300AD8:
    ctx->pc = 0x80300AD8u;
    ctx->downcount -= 3;
    // 80300AD8: cmpwi   r31, 0
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

label_80300ADC:
    ctx->pc = 0x80300ADCu;
    // 80300ADC: stw     r31, -12356(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12356);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80300AE0:
    ctx->pc = 0x80300AE0u;
    // 80300AE0: bc    12, 2, 0x80300B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300B08;
        }
    }

label_80300AE4:
    ctx->pc = 0x80300AE4u;
    ctx->downcount -= 4;
    // 80300AE4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300AE8:
    ctx->pc = 0x80300AE8u;
    // 80300AE8: li      r3, 384
    ctx->gpr[3] = (u32)(s32)(384);

label_80300AEC:
    ctx->pc = 0x80300AECu;
    // 80300AEC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80300AF0:
    ctx->pc = 0x80300AF0u;
    // 80300AF0: bl      0x801C1C5C
    {
            ctx->lr = 0x80300AF4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_80300AF4:
    ctx->pc = 0x80300AF4u;
    ctx->downcount -= 2;
    // 80300AF4: cmpwi   r3, 0
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

label_80300AF8:
    ctx->pc = 0x80300AF8u;
    // 80300AF8: bc    12, 2, 0x80300B00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300B00;
        }
    }

label_80300AFC:
    ctx->pc = 0x80300AFCu;
    ctx->downcount -= 1;
    // 80300AFC: bl      0x8030096C
    {
            ctx->lr = 0x80300B00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030096Cu;
                return;
            }
            goto label_8030096C;
    }

label_80300B00:
    ctx->pc = 0x80300B00u;
    ctx->downcount -= 2;
    // 80300B00: stw     r3, -12360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300B04:
    ctx->pc = 0x80300B04u;
    // 80300B04: b       0x80300B20
    {
            goto label_80300B20;
    }

label_80300B08:
    ctx->pc = 0x80300B08u;
    ctx->downcount -= 2;
    // 80300B08: li      r3, 384
    ctx->gpr[3] = (u32)(s32)(384);

label_80300B0C:
    ctx->pc = 0x80300B0Cu;
    // 80300B0C: bl      0x801C1C48
    {
            ctx->lr = 0x80300B10u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80300B10:
    ctx->pc = 0x80300B10u;
    ctx->downcount -= 2;
    // 80300B10: cmpwi   r3, 0
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

label_80300B14:
    ctx->pc = 0x80300B14u;
    // 80300B14: bc    12, 2, 0x80300B1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300B1C;
        }
    }

label_80300B18:
    ctx->pc = 0x80300B18u;
    ctx->downcount -= 1;
    // 80300B18: bl      0x8030096C
    {
            ctx->lr = 0x80300B1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030096Cu;
                return;
            }
            goto label_8030096C;
    }

label_80300B1C:
    ctx->pc = 0x80300B1Cu;
    ctx->downcount -= 1;
    // 80300B1C: stw     r3, -12360(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12360);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300B20:
    ctx->pc = 0x80300B20u;
    ctx->downcount -= 6;
    // 80300B20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300B24:
    ctx->pc = 0x80300B24u;
    // 80300B24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300B28:
    ctx->pc = 0x80300B28u;
    // 80300B28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300B2C:
    ctx->pc = 0x80300B2Cu;
    // 80300B2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300B30:
    ctx->pc = 0x80300B30u;
    // 80300B30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300B34:
    ctx->pc = 0x80300B34u;
    ctx->downcount -= 18;
    // 80300B34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300B38:
    ctx->pc = 0x80300B38u;
    // 80300B38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300B3C:
    ctx->pc = 0x80300B3Cu;
    // 80300B3C: cmpwi   r3, 0
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

label_80300B40:
    ctx->pc = 0x80300B40u;
    // 80300B40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300B44:
    ctx->pc = 0x80300B44u;
    // 80300B44: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300B48:
    ctx->pc = 0x80300B48u;
    // 80300B48: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300B4C:
    ctx->pc = 0x80300B4Cu;
    // 80300B4C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300B50:
    ctx->pc = 0x80300B50u;
    // 80300B50: bc    12, 2, 0x80300B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300B88;
        }
    }

label_80300B54:
    ctx->pc = 0x80300B54u;
    ctx->downcount -= 2;
    // 80300B54: addic.  r31, r3, 4
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(4);
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

label_80300B58:
    ctx->pc = 0x80300B58u;
    // 80300B58: bc    12, 2, 0x80300B78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300B78;
        }
    }

label_80300B5C:
    ctx->pc = 0x80300B5Cu;
    ctx->downcount -= 4;
    // 80300B5C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80300B60:
    ctx->pc = 0x80300B60u;
    // 80300B60: addi    r3, r3, 24516
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24516);

label_80300B64:
    ctx->pc = 0x80300B64u;
    // 80300B64: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300B68:
    ctx->pc = 0x80300B68u;
    // 80300B68: bl      0x80300A84
    {
            ctx->lr = 0x80300B6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300A84u;
                return;
            }
            goto label_80300A84;
    }

label_80300B6C:
    ctx->pc = 0x80300B6Cu;
    ctx->downcount -= 3;
    // 80300B6C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300B70:
    ctx->pc = 0x80300B70u;
    // 80300B70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80300B74:
    ctx->pc = 0x80300B74u;
    // 80300B74: bl      0x801C928C
    {
            ctx->lr = 0x80300B78u;
            ctx->pc = 0x801C928Cu;
            return;
    }

label_80300B78:
    ctx->pc = 0x80300B78u;
    ctx->downcount -= 2;
    // 80300B78: cmpwi   r30, 0
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

label_80300B7C:
    ctx->pc = 0x80300B7Cu;
    // 80300B7C: bc    4, 1, 0x80300B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300B88;
        }
    }

label_80300B80:
    ctx->pc = 0x80300B80u;
    ctx->downcount -= 2;
    // 80300B80: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300B84:
    ctx->pc = 0x80300B84u;
    // 80300B84: bl      0x801C1C90
    {
            ctx->lr = 0x80300B88u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80300B88:
    ctx->pc = 0x80300B88u;
    ctx->downcount -= 17;
    // 80300B88: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300B8C:
    ctx->pc = 0x80300B8Cu;
    // 80300B8C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300B90:
    ctx->pc = 0x80300B90u;
    // 80300B90: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300B94:
    ctx->pc = 0x80300B94u;
    // 80300B94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300B98:
    ctx->pc = 0x80300B98u;
    // 80300B98: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80300B9C:
    ctx->pc = 0x80300B9Cu;
    // 80300B9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300BA0:
    ctx->pc = 0x80300BA0u;
    ctx->downcount -= 4;
    // 80300BA0: lis     r7, -32665
    ctx->gpr[7] = ((u32)(s32)(-32665) << 16);

label_80300BA4:
    ctx->pc = 0x80300BA4u;
    // 80300BA4: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80300BA8:
    ctx->pc = 0x80300BA8u;
    // 80300BA8: addi    r7, r7, 15136
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15136);

label_80300BAC:
    ctx->pc = 0x80300BACu;
    // 80300BAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80300BB0:
    ctx->downcount -= 8;
    // 80300BB0: add   r8, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80300BB4:
    // 80300BB4: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_80300BB8:
    ctx->pc = 0x80300BB8u;
    // 80300BB8: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300BBC:
    // 80300BBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80300BC0:
    ctx->pc = 0x80300BC0u;
    // 80300BC0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80300BC4:
    // 80300BC4: cmpwi   r0, 0
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

label_80300BC8:
    // 80300BC8: bc    4, 1, 0x80300BFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300BFC;
        }
    }

label_80300BCC:
    ctx->downcount -= 4;
    // 80300BCC: add   r9, r8, r6
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80300BD0:
    ctx->pc = 0x80300BD0u;
    // 80300BD0: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300BD4:
    // 80300BD4: cmpw    r3, r0
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

label_80300BD8:
    // 80300BD8: bc    4, 2, 0x80300BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300BF0;
        }
    }

label_80300BDC:
    ctx->pc = 0x80300BDCu;
    ctx->downcount -= 3;
    // 80300BDC: lwz     r0, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300BE0:
    // 80300BE0: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300BE4:
    // 80300BE4: bc    4, 2, 0x80300BF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300BF0;
        }
    }

label_80300BE8:
    ctx->downcount -= 2;
    // 80300BE8: or   r3, r11, r11
    {
        ctx->gpr[3] = ctx->gpr[11] | ctx->gpr[11];
    }

label_80300BEC:
    ctx->pc = 0x80300BECu;
    // 80300BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300BF0:
    ctx->downcount -= 3;
    // 80300BF0: addi    r11, r11, 1
    ctx->gpr[11] = ctx->gpr[11] + (u32)(s32)(1);

label_80300BF4:
    // 80300BF4: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

label_80300BF8:
    // 80300BF8: bc    16, 0, 0x80300BCC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300BCCu;
                return;
            }
            goto label_80300BCC;
        }
    }

label_80300BFC:
    ctx->downcount -= 4;
    // 80300BFC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80300C00:
    // 80300C00: addi    r5, r5, 84
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(84);

label_80300C04:
    // 80300C04: cmpwi   r10, 12
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300C08:
    // 80300C08: bc    12, 0, 0x80300BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300BB0u;
                return;
            }
            goto label_80300BB0;
        }
    }

label_80300C0C:
    ctx->pc = 0x80300C0Cu;
    ctx->downcount -= 2;
    // 80300C0C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80300C10:
    ctx->pc = 0x80300C10u;
    // 80300C10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300C14:
    ctx->pc = 0x80300C14u;
    ctx->downcount -= 4;
    // 80300C14: lis     r7, -32665
    ctx->gpr[7] = ((u32)(s32)(-32665) << 16);

label_80300C18:
    ctx->pc = 0x80300C18u;
    // 80300C18: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_80300C1C:
    ctx->pc = 0x80300C1Cu;
    // 80300C1C: addi    r7, r7, 15136
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15136);

label_80300C20:
    ctx->pc = 0x80300C20u;
    // 80300C20: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80300C24:
    ctx->downcount -= 7;
    // 80300C24: add   r8, r7, r5
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_80300C28:
    // 80300C28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80300C2C:
    ctx->pc = 0x80300C2Cu;
    // 80300C2C: lwz     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300C30:
    ctx->pc = 0x80300C30u;
    // 80300C30: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80300C34:
    // 80300C34: cmpwi   r0, 0
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

label_80300C38:
    // 80300C38: bc    4, 1, 0x80300C68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300C68;
        }
    }

label_80300C3C:
    ctx->downcount -= 4;
    // 80300C3C: add   r9, r8, r6
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[9] = res;
    }

label_80300C40:
    ctx->pc = 0x80300C40u;
    // 80300C40: lwz     r0, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300C44:
    // 80300C44: cmpw    r3, r0
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

label_80300C48:
    // 80300C48: bc    4, 2, 0x80300C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300C60;
        }
    }

label_80300C4C:
    ctx->pc = 0x80300C4Cu;
    ctx->downcount -= 3;
    // 80300C4C: lwz     r0, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300C50:
    // 80300C50: cmpw    r4, r0
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300C54:
    // 80300C54: bc    4, 2, 0x80300C60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300C60;
        }
    }

label_80300C58:
    ctx->downcount -= 2;
    // 80300C58: or   r3, r10, r10
    {
        ctx->gpr[3] = ctx->gpr[10] | ctx->gpr[10];
    }

label_80300C5C:
    ctx->pc = 0x80300C5Cu;
    // 80300C5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300C60:
    ctx->downcount -= 2;
    // 80300C60: addi    r6, r6, 8
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(8);

label_80300C64:
    // 80300C64: bc    16, 0, 0x80300C3C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300C3Cu;
                return;
            }
            goto label_80300C3C;
        }
    }

label_80300C68:
    ctx->downcount -= 4;
    // 80300C68: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_80300C6C:
    // 80300C6C: addi    r5, r5, 84
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(84);

label_80300C70:
    // 80300C70: cmpwi   r10, 12
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300C74:
    // 80300C74: bc    12, 0, 0x80300C24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300C24u;
                return;
            }
            goto label_80300C24;
        }
    }

label_80300C78:
    ctx->pc = 0x80300C78u;
    ctx->downcount -= 2;
    // 80300C78: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80300C7C:
    ctx->pc = 0x80300C7Cu;
    // 80300C7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300C80:
    ctx->pc = 0x80300C80u;
    ctx->downcount -= 12;
    // 80300C80: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300C84:
    ctx->pc = 0x80300C84u;
    // 80300C84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300C88:
    ctx->pc = 0x80300C88u;
    // 80300C88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300C8C:
    ctx->pc = 0x80300C8Cu;
    // 80300C8C: mulli   r0, r3, 84
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)84);

label_80300C90:
    ctx->pc = 0x80300C90u;
    // 80300C90: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80300C94:
    ctx->pc = 0x80300C94u;
    // 80300C94: addi    r3, r3, 15136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15136);

label_80300C98:
    ctx->pc = 0x80300C98u;
    // 80300C98: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80300C9C:
    ctx->pc = 0x80300C9Cu;
    // 80300C9C: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300CA0:
    ctx->pc = 0x80300CA0u;
    // 80300CA0: lwz     r4, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300CA4:
    ctx->pc = 0x80300CA4u;
    // 80300CA4: bl      0x80276B6C
    {
            ctx->lr = 0x80300CA8u;
            ctx->pc = 0x80276B6Cu;
            return;
    }

label_80300CA8:
    ctx->pc = 0x80300CA8u;
    ctx->downcount -= 6;
    // 80300CA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300CAC:
    ctx->pc = 0x80300CACu;
    // 80300CAC: lwz     r3, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300CB0:
    ctx->pc = 0x80300CB0u;
    // 80300CB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300CB4:
    ctx->pc = 0x80300CB4u;
    // 80300CB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80300CB8:
    ctx->pc = 0x80300CB8u;
    // 80300CB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300CBC:
    ctx->pc = 0x80300CBCu;
    ctx->downcount -= 13;
    // 80300CBC: mulli   r0, r3, 84
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)84);

label_80300CC0:
    ctx->pc = 0x80300CC0u;
    // 80300CC0: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80300CC4:
    ctx->pc = 0x80300CC4u;
    // 80300CC4: addi    r3, r3, 15136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15136);

label_80300CC8:
    ctx->pc = 0x80300CC8u;
    // 80300CC8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80300CCC:
    ctx->pc = 0x80300CCCu;
    // 80300CCC: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300CD0:
    ctx->pc = 0x80300CD0u;
    // 80300CD0: xori    r0, r4, 0x0001
    ctx->gpr[0] = ctx->gpr[4] ^ 0x0001u;

label_80300CD4:
    ctx->pc = 0x80300CD4u;
    // 80300CD4: srawi r3, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[3] = value;
        } else if (sh > 31) {
            ctx->gpr[3] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[3] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80300CD8:
    ctx->pc = 0x80300CD8u;
    // 80300CD8: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_80300CDC:
    ctx->pc = 0x80300CDCu;
    // 80300CDC: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80300CE0:
    ctx->pc = 0x80300CE0u;
    // 80300CE0: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_80300CE4:
    ctx->pc = 0x80300CE4u;
    // 80300CE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300CE8:
    ctx->pc = 0x80300CE8u;
    ctx->downcount -= 18;
    // 80300CE8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300CEC:
    ctx->pc = 0x80300CECu;
    // 80300CEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300CF0:
    ctx->pc = 0x80300CF0u;
    // 80300CF0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300CF4:
    ctx->pc = 0x80300CF4u;
    // 80300CF4: stmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300CF8:
    ctx->pc = 0x80300CF8u;
    // 80300CF8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300CFC:
    ctx->pc = 0x80300CFCu;
    // 80300CFC: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300D00:
    ctx->pc = 0x80300D00u;
    // 80300D00: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300D04:
    ctx->pc = 0x80300D04u;
    // 80300D04: bl      0x80234544
    {
            ctx->lr = 0x80300D08u;
            ctx->pc = 0x80234544u;
            return;
    }

label_80300D08:
    ctx->pc = 0x80300D08u;
    ctx->downcount -= 12;
    // 80300D08: mulli   r6, r29, 84
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[29] * (s64)(s32)84);

label_80300D0C:
    ctx->pc = 0x80300D0Cu;
    // 80300D0C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80300D10:
    ctx->pc = 0x80300D10u;
    // 80300D10: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80300D14:
    ctx->pc = 0x80300D14u;
    // 80300D14: addi    r4, r4, 15136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15136);

label_80300D18:
    ctx->pc = 0x80300D18u;
    // 80300D18: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300D1C:
    ctx->pc = 0x80300D1Cu;
    // 80300D1C: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_80300D20:
    ctx->pc = 0x80300D20u;
    // 80300D20: add   r4, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80300D24:
    ctx->pc = 0x80300D24u;
    // 80300D24: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80300D28:
    ctx->pc = 0x80300D28u;
    // 80300D28: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_80300D2C:
    loop_80300D2C(ctx);
    if (ctx->pc == 0x80300D40u) goto label_80300D40;
    return;
label_80300D30:
    ctx->pc = 0x80300D30u;
    // 80300D30: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80300D34:
    ctx->pc = 0x80300D34u;
    // 80300D34: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300D38:
    ctx->pc = 0x80300D38u;
    // 80300D38: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80300D3C:
    // 80300D3C: bc    16, 0, 0x80300D2C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300D2Cu;
                return;
            }
            goto label_80300D2C;
        }
    }

label_80300D40:
    ctx->pc = 0x80300D40u;
    ctx->downcount -= 10;
    // 80300D40: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300D44:
    ctx->pc = 0x80300D44u;
    // 80300D44: rlwinm r6, r28, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[28], 3u) & 0xFFFFFFF8u;
    }

label_80300D48:
    ctx->pc = 0x80300D48u;
    // 80300D48: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300D4C:
    ctx->pc = 0x80300D4Cu;
    // 80300D4C: addi    r4, r1, 20
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(20);

label_80300D50:
    ctx->pc = 0x80300D50u;
    // 80300D50: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80300D54:
    ctx->pc = 0x80300D54u;
    // 80300D54: lwzx    r31, r4, r6
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[6];
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80300D58:
    ctx->pc = 0x80300D58u;
    // 80300D58: lwzx    r28, r3, r6
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[6];
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_80300D5C:
    ctx->pc = 0x80300D5Cu;
    // 80300D5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300D60:
    ctx->pc = 0x80300D60u;
    // 80300D60: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80300D64:
    ctx->pc = 0x80300D64u;
    // 80300D64: bl      0x80276B6C
    {
            ctx->lr = 0x80300D68u;
            ctx->pc = 0x80276B6Cu;
            return;
    }

label_80300D68:
    ctx->pc = 0x80300D68u;
    ctx->downcount -= 4;
    // 80300D68: lbz     r0, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80300D6C:
    ctx->pc = 0x80300D6Cu;
    // 80300D6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300D70:
    ctx->pc = 0x80300D70u;
    // 80300D70: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300D74:
    ctx->pc = 0x80300D74u;
    // 80300D74: bc    12, 1, 0x80300D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80300D80;
        }
    }

label_80300D78:
    ctx->pc = 0x80300D78u;
    ctx->downcount -= 2;
    // 80300D78: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300D7C:
    ctx->pc = 0x80300D7Cu;
    // 80300D7C: b       0x80300E00
    {
            goto label_80300E00;
    }

label_80300D80:
    ctx->pc = 0x80300D80u;
    ctx->downcount -= 2;
    // 80300D80: cmpwi   r31, 0
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

label_80300D84:
    ctx->pc = 0x80300D84u;
    // 80300D84: bc    4, 2, 0x80300D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300D98;
        }
    }

label_80300D88:
    ctx->pc = 0x80300D88u;
    ctx->downcount -= 2;
    // 80300D88: cmpwi   r28, 1
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300D8C:
    ctx->pc = 0x80300D8Cu;
    // 80300D8C: bc    4, 2, 0x80300D98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300D98;
        }
    }

label_80300D90:
    ctx->pc = 0x80300D90u;
    ctx->downcount -= 2;
    // 80300D90: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300D94:
    ctx->pc = 0x80300D94u;
    // 80300D94: b       0x80300E00
    {
            goto label_80300E00;
    }

label_80300D98:
    ctx->pc = 0x80300D98u;
    ctx->downcount -= 2;
    // 80300D98: cmpwi   r31, 9
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

label_80300D9C:
    ctx->pc = 0x80300D9Cu;
    // 80300D9C: bc    4, 2, 0x80300DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300DB0;
        }
    }

label_80300DA0:
    ctx->pc = 0x80300DA0u;
    ctx->downcount -= 2;
    // 80300DA0: cmpwi   r28, 0
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

label_80300DA4:
    ctx->pc = 0x80300DA4u;
    // 80300DA4: bc    4, 2, 0x80300DB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300DB0;
        }
    }

label_80300DA8:
    ctx->pc = 0x80300DA8u;
    ctx->downcount -= 2;
    // 80300DA8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300DAC:
    ctx->pc = 0x80300DACu;
    // 80300DAC: b       0x80300E00
    {
            goto label_80300E00;
    }

label_80300DB0:
    ctx->pc = 0x80300DB0u;
    ctx->downcount -= 4;
    // 80300DB0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80300DB4:
    ctx->pc = 0x80300DB4u;
    // 80300DB4: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80300DB8:
    ctx->pc = 0x80300DB8u;
    // 80300DB8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300DBC:
    ctx->pc = 0x80300DBCu;
    // 80300DBC: bl      0x80276A5C
    {
            ctx->lr = 0x80300DC0u;
            ctx->pc = 0x80276A5Cu;
            return;
    }

label_80300DC0:
    ctx->pc = 0x80300DC0u;
    ctx->downcount -= 3;
    // 80300DC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300DC4:
    ctx->pc = 0x80300DC4u;
    // 80300DC4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80300DC8:
    ctx->pc = 0x80300DC8u;
    // 80300DC8: b       0x80300DF0
    {
            goto label_80300DF0;
    }

label_80300DCC:
    ctx->downcount -= 4;
    // 80300DCC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300DD0:
    // 80300DD0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80300DD4:
    // 80300DD4: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80300DD8:
    // 80300DD8: bl      0x80261F5C
    {
            ctx->lr = 0x80300DDCu;
            ctx->pc = 0x80261F5Cu;
            return;
    }

label_80300DDC:
    ctx->downcount -= 2;
    // 80300DDC: cmpwi   r3, 1
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

label_80300DE0:
    // 80300DE0: bc    4, 2, 0x80300DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300DEC;
        }
    }

label_80300DE4:
    ctx->downcount -= 2;
    // 80300DE4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80300DE8:
    // 80300DE8: b       0x80300E00
    {
            goto label_80300E00;
    }

label_80300DEC:
    ctx->downcount -= 1;
    // 80300DEC: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80300DF0:
    ctx->pc = 0x80300DF0u;
    ctx->downcount -= 3;
    // 80300DF0: lbz     r0, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80300DF4:
    // 80300DF4: cmpw    r28, r0
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300DF8:
    // 80300DF8: bc    12, 0, 0x80300DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300DCCu;
                return;
            }
            goto label_80300DCC;
        }
    }

label_80300DFC:
    ctx->pc = 0x80300DFCu;
    ctx->downcount -= 1;
    // 80300DFC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300E00:
    ctx->pc = 0x80300E00u;
    ctx->downcount -= 16;
    // 80300E00: lmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300E04:
    ctx->pc = 0x80300E04u;
    // 80300E04: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300E08:
    ctx->pc = 0x80300E08u;
    // 80300E08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300E0C:
    ctx->pc = 0x80300E0Cu;
    // 80300E0C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80300E10:
    ctx->pc = 0x80300E10u;
    // 80300E10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300E14:
    ctx->pc = 0x80300E14u;
    ctx->downcount -= 17;
    // 80300E14: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300E18:
    ctx->pc = 0x80300E18u;
    // 80300E18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300E1C:
    ctx->pc = 0x80300E1Cu;
    // 80300E1C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300E20:
    ctx->pc = 0x80300E20u;
    // 80300E20: stmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300E24:
    ctx->pc = 0x80300E24u;
    // 80300E24: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300E28:
    ctx->pc = 0x80300E28u;
    // 80300E28: lwz     r3, -13408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300E2C:
    ctx->pc = 0x80300E2Cu;
    // 80300E2C: bl      0x80234544
    {
            ctx->lr = 0x80300E30u;
            ctx->pc = 0x80234544u;
            return;
    }

label_80300E30:
    ctx->pc = 0x80300E30u;
    ctx->downcount -= 12;
    // 80300E30: mulli   r6, r28, 84
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[28] * (s64)(s32)84);

label_80300E34:
    ctx->pc = 0x80300E34u;
    // 80300E34: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80300E38:
    ctx->pc = 0x80300E38u;
    // 80300E38: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80300E3C:
    ctx->pc = 0x80300E3Cu;
    // 80300E3C: addi    r4, r4, 15136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15136);

label_80300E40:
    ctx->pc = 0x80300E40u;
    // 80300E40: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300E44:
    ctx->pc = 0x80300E44u;
    // 80300E44: addi    r5, r1, 4
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(4);

label_80300E48:
    ctx->pc = 0x80300E48u;
    // 80300E48: add   r4, r4, r6
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80300E4C:
    ctx->pc = 0x80300E4Cu;
    // 80300E4C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80300E50:
    ctx->pc = 0x80300E50u;
    // 80300E50: addi    r4, r4, -4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-4);

label_80300E54:
    loop_80300E54(ctx);
    if (ctx->pc == 0x80300E68u) goto label_80300E68;
    return;
label_80300E58:
    ctx->pc = 0x80300E58u;
    // 80300E58: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80300E5C:
    ctx->pc = 0x80300E5Cu;
    // 80300E5C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300E60:
    ctx->pc = 0x80300E60u;
    // 80300E60: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80300E64:
    // 80300E64: bc    16, 0, 0x80300E54
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300E54u;
                return;
            }
            goto label_80300E54;
        }
    }

label_80300E68:
    ctx->pc = 0x80300E68u;
    ctx->downcount -= 6;
    // 80300E68: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300E6C:
    ctx->pc = 0x80300E6Cu;
    // 80300E6C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80300E70:
    ctx->pc = 0x80300E70u;
    // 80300E70: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300E74:
    ctx->pc = 0x80300E74u;
    // 80300E74: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80300E78:
    ctx->pc = 0x80300E78u;
    // 80300E78: lwz     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80300E7C:
    ctx->pc = 0x80300E7Cu;
    // 80300E7C: b       0x80300EC0
    {
            goto label_80300EC0;
    }

label_80300E80:
    ctx->downcount -= 6;
    // 80300E80: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_80300E84:
    // 80300E84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300E88:
    // 80300E88: add   r5, r5, r31
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80300E8C:
    ctx->pc = 0x80300E8Cu;
    // 80300E8C: lwz     r4, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300E90:
    ctx->pc = 0x80300E90u;
    // 80300E90: lwz     r5, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80300E94:
    // 80300E94: bl      0x80276A5C
    {
            ctx->lr = 0x80300E98u;
            ctx->pc = 0x80276A5Cu;
            return;
    }

label_80300E98:
    ctx->downcount -= 4;
    // 80300E98: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300E9C:
    // 80300E9C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300EA0:
    // 80300EA0: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80300EA4:
    // 80300EA4: bl      0x80261F84
    {
            ctx->lr = 0x80300EA8u;
            ctx->pc = 0x80261F84u;
            return;
    }

label_80300EA8:
    ctx->downcount -= 2;
    // 80300EA8: cmpwi   r3, 1
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

label_80300EAC:
    // 80300EAC: bc    4, 2, 0x80300EB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80300EB8;
        }
    }

label_80300EB0:
    ctx->downcount -= 2;
    // 80300EB0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80300EB4:
    // 80300EB4: b       0x80300ECC
    {
            goto label_80300ECC;
    }

label_80300EB8:
    ctx->downcount -= 2;
    // 80300EB8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80300EBC:
    // 80300EBC: addi    r31, r31, 8
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(8);

label_80300EC0:
    ctx->downcount -= 2;
    // 80300EC0: cmpw    r28, r30
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300EC4:
    // 80300EC4: bc    12, 0, 0x80300E80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300E80u;
                return;
            }
            goto label_80300E80;
        }
    }

label_80300EC8:
    ctx->pc = 0x80300EC8u;
    ctx->downcount -= 1;
    // 80300EC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80300ECC:
    ctx->pc = 0x80300ECCu;
    ctx->downcount -= 16;
    // 80300ECC: lmw     r28, 96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(96);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80300ED0:
    ctx->pc = 0x80300ED0u;
    // 80300ED0: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300ED4:
    ctx->pc = 0x80300ED4u;
    // 80300ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300ED8:
    ctx->pc = 0x80300ED8u;
    // 80300ED8: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_80300EDC:
    ctx->pc = 0x80300EDCu;
    // 80300EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300EE0:
    ctx->pc = 0x80300EE0u;
    ctx->downcount -= 2;
    // 80300EE0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80300EE4:
    ctx->pc = 0x80300EE4u;
    // 80300EE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300EE8:
    ctx->pc = 0x80300EE8u;
    ctx->downcount -= 14;
    // 80300EE8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300EEC:
    ctx->pc = 0x80300EECu;
    // 80300EEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300EF0:
    ctx->pc = 0x80300EF0u;
    // 80300EF0: mulli   r6, r3, 84
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)84);

label_80300EF4:
    ctx->pc = 0x80300EF4u;
    // 80300EF4: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80300EF8:
    ctx->pc = 0x80300EF8u;
    // 80300EF8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300EFC:
    ctx->pc = 0x80300EFCu;
    // 80300EFC: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80300F00:
    ctx->pc = 0x80300F00u;
    // 80300F00: addi    r3, r3, 15136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15136);

label_80300F04:
    ctx->pc = 0x80300F04u;
    // 80300F04: addi    r7, r1, 4
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(4);

label_80300F08:
    ctx->pc = 0x80300F08u;
    // 80300F08: add   r6, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80300F0C:
    ctx->pc = 0x80300F0Cu;
    // 80300F0C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80300F10:
    ctx->pc = 0x80300F10u;
    // 80300F10: addi    r6, r6, -4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-4);

label_80300F14:
    loop_80300F14(ctx);
    if (ctx->pc == 0x80300F28u) goto label_80300F28;
    return;
label_80300F18:
    ctx->pc = 0x80300F18u;
    // 80300F18: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_80300F1C:
    ctx->pc = 0x80300F1Cu;
    // 80300F1C: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300F20:
    ctx->pc = 0x80300F20u;
    // 80300F20: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_80300F24:
    // 80300F24: bc    16, 0, 0x80300F14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300F14u;
                return;
            }
            goto label_80300F14;
        }
    }

label_80300F28:
    ctx->pc = 0x80300F28u;
    ctx->downcount -= 8;
    // 80300F28: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300F2C:
    ctx->pc = 0x80300F2Cu;
    // 80300F2C: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80300F30:
    ctx->pc = 0x80300F30u;
    // 80300F30: stw     r0, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300F34:
    ctx->pc = 0x80300F34u;
    // 80300F34: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80300F38:
    ctx->pc = 0x80300F38u;
    // 80300F38: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_80300F3C:
    ctx->pc = 0x80300F3Cu;
    // 80300F3C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80300F40:
    ctx->pc = 0x80300F40u;
    // 80300F40: lwz     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80300F44:
    ctx->pc = 0x80300F44u;
    // 80300F44: bl      0x802C3574
    {
            ctx->lr = 0x80300F48u;
            ctx->pc = 0x802C3574u;
            return;
    }

label_80300F48:
    ctx->pc = 0x80300F48u;
    ctx->downcount -= 5;
    // 80300F48: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80300F4C:
    ctx->pc = 0x80300F4Cu;
    // 80300F4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80300F50:
    ctx->pc = 0x80300F50u;
    // 80300F50: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80300F54:
    ctx->pc = 0x80300F54u;
    // 80300F54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300F58:
    ctx->pc = 0x80300F58u;
    ctx->downcount -= 7;
    // 80300F58: mulli   r0, r3, 84
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)84);

label_80300F5C:
    ctx->pc = 0x80300F5Cu;
    // 80300F5C: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80300F60:
    ctx->pc = 0x80300F60u;
    // 80300F60: addi    r3, r3, 15136
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(15136);

label_80300F64:
    ctx->pc = 0x80300F64u;
    // 80300F64: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80300F68:
    ctx->pc = 0x80300F68u;
    // 80300F68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80300F6C:
    ctx->pc = 0x80300F6Cu;
    ctx->downcount -= 20;
    // 80300F6C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80300F70:
    ctx->pc = 0x80300F70u;
    // 80300F70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80300F74:
    ctx->pc = 0x80300F74u;
    // 80300F74: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80300F78:
    ctx->pc = 0x80300F78u;
    // 80300F78: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80300F7C:
    ctx->pc = 0x80300F7Cu;
    // 80300F7C: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_80300F80:
    ctx->pc = 0x80300F80u;
    // 80300F80: addi    r29, r28, 16776
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(16776);

label_80300F84:
    ctx->pc = 0x80300F84u;
    // 80300F84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80300F88:
    ctx->pc = 0x80300F88u;
    // 80300F88: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80300F8C:
    ctx->pc = 0x80300F8Cu;
    // 80300F8C: addi    r4, r29, 42
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(42);

label_80300F90:
    ctx->pc = 0x80300F90u;
    // 80300F90: bl      0x8026F970
    {
            ctx->lr = 0x80300F94u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80300F94:
    ctx->pc = 0x80300F94u;
    ctx->downcount -= 4;
    // 80300F94: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300F98:
    ctx->pc = 0x80300F98u;
    // 80300F98: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80300F9C:
    ctx->pc = 0x80300F9Cu;
    // 80300F9C: addi    r4, r29, 52
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(52);

label_80300FA0:
    ctx->pc = 0x80300FA0u;
    // 80300FA0: bl      0x8026F970
    {
            ctx->lr = 0x80300FA4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80300FA4:
    ctx->pc = 0x80300FA4u;
    ctx->downcount -= 3;
    // 80300FA4: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300FA8:
    ctx->pc = 0x80300FA8u;
    // 80300FA8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80300FAC:
    ctx->pc = 0x80300FACu;
    // 80300FAC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80300FB0:
    ctx->downcount -= 6;
    // 80300FB0: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80300FB4:
    // 80300FB4: addi    r3, r1, 56
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(56);

label_80300FB8:
    // 80300FB8: addi    r5, r28, 16776
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(16776);

label_80300FBC:
    // 80300FBC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80300FC0:
    // 80300FC0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80300FC4:
    // 80300FC4: bl      0x8000D074
    {
            ctx->lr = 0x80300FC8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80300FC8:
    ctx->downcount -= 3;
    // 80300FC8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80300FCC:
    // 80300FCC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80300FD0:
    // 80300FD0: bl      0x8026F970
    {
            ctx->lr = 0x80300FD4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80300FD4:
    ctx->downcount -= 6;
    // 80300FD4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80300FD8:
    // 80300FD8: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80300FDC:
    // 80300FDC: cmpwi   r29, 12
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80300FE0:
    ctx->pc = 0x80300FE0u;
    // 80300FE0: stw     r3, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80300FE4:
    // 80300FE4: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80300FE8:
    // 80300FE8: bc    12, 0, 0x80300FB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300FB0u;
                return;
            }
            goto label_80300FB0;
        }
    }

label_80300FEC:
    ctx->pc = 0x80300FECu;
    ctx->downcount -= 4;
    // 80300FEC: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_80300FF0:
    ctx->pc = 0x80300FF0u;
    // 80300FF0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80300FF4:
    ctx->pc = 0x80300FF4u;
    // 80300FF4: addi    r29, r29, 16776
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16776);

label_80300FF8:
    ctx->pc = 0x80300FF8u;
    // 80300FF8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80300FFC:
    ctx->downcount -= 6;
    // 80300FFC: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80301000:
    // 80301000: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_80301004:
    // 80301004: addi    r5, r29, 27
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(27);

label_80301008:
    // 80301008: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030100C:
    // 8030100C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80301010:
    // 80301010: bl      0x8000D074
    {
            ctx->lr = 0x80301014u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80301014:
    ctx->downcount -= 3;
    // 80301014: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80301018:
    // 80301018: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_8030101C:
    // 8030101C: bl      0x8026F970
    {
            ctx->lr = 0x80301020u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80301020:
    ctx->downcount -= 6;
    // 80301020: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80301024:
    // 80301024: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80301028:
    // 80301028: cmpwi   r28, 12
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030102C:
    ctx->pc = 0x8030102Cu;
    // 8030102C: stw     r3, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301030:
    // 80301030: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80301034:
    // 80301034: bc    12, 0, 0x80300FFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300FFCu;
                return;
            }
            goto label_80300FFC;
        }
    }

label_80301038:
    ctx->pc = 0x80301038u;
    ctx->downcount -= 4;
    // 80301038: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_8030103C:
    ctx->pc = 0x8030103Cu;
    // 8030103C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80301040:
    ctx->pc = 0x80301040u;
    // 80301040: addi    r29, r29, 16776
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(16776);

label_80301044:
    ctx->pc = 0x80301044u;
    // 80301044: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80301048:
    ctx->downcount -= 6;
    // 80301048: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030104C:
    // 8030104C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80301050:
    // 80301050: addi    r5, r29, 12
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(12);

label_80301054:
    // 80301054: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80301058:
    // 80301058: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030105C:
    // 8030105C: bl      0x8000D074
    {
            ctx->lr = 0x80301060u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80301060:
    ctx->downcount -= 3;
    // 80301060: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80301064:
    // 80301064: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80301068:
    // 80301068: bl      0x8026F970
    {
            ctx->lr = 0x8030106Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030106C:
    ctx->downcount -= 6;
    // 8030106C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80301070:
    // 80301070: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80301074:
    // 80301074: cmpwi   r28, 12
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301078:
    ctx->pc = 0x80301078u;
    // 80301078: stw     r3, 388(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030107C:
    // 8030107C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80301080:
    // 80301080: bc    12, 0, 0x80301048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301048u;
                return;
            }
            goto label_80301048;
        }
    }

label_80301084:
    ctx->pc = 0x80301084u;
    ctx->downcount -= 3;
    // 80301084: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80301088:
    ctx->pc = 0x80301088u;
    // 80301088: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030108C:
    ctx->pc = 0x8030108Cu;
    // 8030108C: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_80301090:
    ctx->downcount -= 6;
    // 80301090: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80301094:
    // 80301094: addi    r5, r29, 16776
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(16776);

label_80301098:
    // 80301098: addi    r6, r28, 14
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(14);

label_8030109C:
    // 8030109C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_803010A0:
    // 803010A0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803010A4:
    // 803010A4: bl      0x8000D074
    {
            ctx->lr = 0x803010A8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_803010A8:
    ctx->downcount -= 3;
    // 803010A8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803010AC:
    // 803010AC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_803010B0:
    // 803010B0: bl      0x8026F970
    {
            ctx->lr = 0x803010B4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803010B4:
    ctx->downcount -= 6;
    // 803010B4: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_803010B8:
    // 803010B8: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803010BC:
    // 803010BC: cmpwi   r28, 2
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803010C0:
    ctx->pc = 0x803010C0u;
    // 803010C0: stw     r3, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803010C4:
    // 803010C4: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_803010C8:
    // 803010C8: bc    12, 0, 0x80301090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301090u;
                return;
            }
            goto label_80301090;
        }
    }

label_803010CC:
    ctx->pc = 0x803010CCu;
    ctx->downcount -= 16;
    // 803010CC: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803010D0:
    ctx->pc = 0x803010D0u;
    // 803010D0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803010D4:
    ctx->pc = 0x803010D4u;
    // 803010D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803010D8:
    ctx->pc = 0x803010D8u;
    // 803010D8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_803010DC:
    ctx->pc = 0x803010DCu;
    // 803010DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803010E0:
    ctx->pc = 0x803010E0u;
    ctx->downcount -= 13;
    // 803010E0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803010E4:
    ctx->pc = 0x803010E4u;
    // 803010E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803010E8:
    ctx->pc = 0x803010E8u;
    // 803010E8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_803010EC:
    ctx->pc = 0x803010ECu;
    // 803010EC: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803010F0:
    ctx->pc = 0x803010F0u;
    // 803010F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803010F4:
    ctx->pc = 0x803010F4u;
    // 803010F4: addi    r5, r5, 16776
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(16776);

label_803010F8:
    ctx->pc = 0x803010F8u;
    // 803010F8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_803010FC:
    ctx->pc = 0x803010FCu;
    // 803010FC: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301100:
    ctx->pc = 0x80301100u;
    // 80301100: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301104:
    ctx->pc = 0x80301104u;
    // 80301104: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80301108:
    ctx->pc = 0x80301108u;
    // 80301108: addi    r5, r5, 62
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(62);

label_8030110C:
    ctx->pc = 0x8030110Cu;
    // 8030110C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80301110:
    ctx->pc = 0x80301110u;
    // 80301110: bl      0x8000D074
    {
            ctx->lr = 0x80301114u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80301114:
    ctx->pc = 0x80301114u;
    ctx->downcount -= 3;
    // 80301114: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80301118:
    ctx->pc = 0x80301118u;
    // 80301118: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030111C:
    ctx->pc = 0x8030111Cu;
    // 8030111C: bl      0x8026F970
    {
            ctx->lr = 0x80301120u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80301120:
    ctx->pc = 0x80301120u;
    ctx->downcount -= 6;
    // 80301120: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301124:
    ctx->pc = 0x80301124u;
    // 80301124: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301128:
    ctx->pc = 0x80301128u;
    // 80301128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030112C:
    ctx->pc = 0x8030112Cu;
    // 8030112C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80301130:
    ctx->pc = 0x80301130u;
    // 80301130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301134:
    ctx->pc = 0x80301134u;
    ctx->downcount -= 5;
    // 80301134: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80301138:
    ctx->pc = 0x80301138u;
    // 80301138: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030113C:
    ctx->pc = 0x8030113Cu;
    // 8030113C: addi    r4, r4, 16776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16776);

label_80301140:
    ctx->pc = 0x80301140u;
    // 80301140: addi    r4, r4, 76
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(76);

label_80301144:
    ctx->pc = 0x80301144u;
    // 80301144: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_80301148:
    ctx->pc = 0x80301148u;
    ctx->downcount -= 5;
    // 80301148: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030114C:
    ctx->pc = 0x8030114Cu;
    // 8030114C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80301150:
    ctx->pc = 0x80301150u;
    // 80301150: addi    r4, r4, 16776
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16776);

label_80301154:
    ctx->pc = 0x80301154u;
    // 80301154: addi    r4, r4, 88
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(88);

label_80301158:
    ctx->pc = 0x80301158u;
    // 80301158: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030115C:
    ctx->pc = 0x8030115Cu;
    ctx->downcount -= 19;
    // 8030115C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301160:
    ctx->pc = 0x80301160u;
    // 80301160: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301164:
    ctx->pc = 0x80301164u;
    // 80301164: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301168:
    ctx->pc = 0x80301168u;
    // 80301168: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030116C:
    ctx->pc = 0x8030116Cu;
    // 8030116C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301170:
    ctx->pc = 0x80301170u;
    // 80301170: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301174:
    ctx->pc = 0x80301174u;
    // 80301174: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80301178:
    ctx->pc = 0x80301178u;
    // 80301178: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030117C:
    ctx->pc = 0x8030117Cu;
    // 8030117C: bl      0x8026F6CC
    {
            ctx->lr = 0x80301180u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80301180:
    ctx->pc = 0x80301180u;
    ctx->downcount -= 6;
    // 80301180: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80301184:
    ctx->pc = 0x80301184u;
    // 80301184: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301188:
    ctx->pc = 0x80301188u;
    // 80301188: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030118C:
    ctx->pc = 0x8030118Cu;
    // 8030118C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80301190:
    ctx->pc = 0x80301190u;
    // 80301190: lwz     r5, 436(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(436);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301194:
    ctx->pc = 0x80301194u;
    // 80301194: bl      0x8025D624
    {
            ctx->lr = 0x80301198u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80301198:
    ctx->pc = 0x80301198u;
    ctx->downcount -= 22;
    // 80301198: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030119C:
    ctx->pc = 0x8030119Cu;
    // 8030119C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803011A0:
    ctx->pc = 0x803011A0u;
    // 803011A0: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803011A4:
    ctx->pc = 0x803011A4u;
    // 803011A4: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803011A8:
    ctx->pc = 0x803011A8u;
    // 803011A8: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803011AC:
    ctx->pc = 0x803011ACu;
    // 803011AC: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803011B0:
    ctx->pc = 0x803011B0u;
    // 803011B0: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803011B4:
    ctx->pc = 0x803011B4u;
    // 803011B4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803011B8:
    ctx->pc = 0x803011B8u;
    // 803011B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803011BC:
    ctx->pc = 0x803011BCu;
    // 803011BC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_803011C0:
    ctx->pc = 0x803011C0u;
    // 803011C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803011C4:
    ctx->pc = 0x803011C4u;
    ctx->downcount -= 19;
    // 803011C4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803011C8:
    ctx->pc = 0x803011C8u;
    // 803011C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803011CC:
    ctx->pc = 0x803011CCu;
    // 803011CC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803011D0:
    ctx->pc = 0x803011D0u;
    // 803011D0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803011D4:
    ctx->pc = 0x803011D4u;
    // 803011D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803011D8:
    ctx->pc = 0x803011D8u;
    // 803011D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803011DC:
    ctx->pc = 0x803011DCu;
    // 803011DC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803011E0:
    ctx->pc = 0x803011E0u;
    // 803011E0: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_803011E4:
    ctx->pc = 0x803011E4u;
    // 803011E4: bl      0x8026F6CC
    {
            ctx->lr = 0x803011E8u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_803011E8:
    ctx->pc = 0x803011E8u;
    ctx->downcount -= 6;
    // 803011E8: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_803011EC:
    ctx->pc = 0x803011ECu;
    // 803011EC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803011F0:
    ctx->pc = 0x803011F0u;
    // 803011F0: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803011F4:
    ctx->pc = 0x803011F4u;
    // 803011F4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803011F8:
    ctx->pc = 0x803011F8u;
    // 803011F8: lwz     r5, 340(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(340);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803011FC:
    ctx->pc = 0x803011FCu;
    // 803011FC: bl      0x8025D624
    {
            ctx->lr = 0x80301200u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80301200:
    ctx->pc = 0x80301200u;
    ctx->downcount -= 22;
    // 80301200: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301204:
    ctx->pc = 0x80301204u;
    // 80301204: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301208:
    ctx->pc = 0x80301208u;
    // 80301208: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030120C:
    ctx->pc = 0x8030120Cu;
    // 8030120C: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301210:
    ctx->pc = 0x80301210u;
    // 80301210: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301214:
    ctx->pc = 0x80301214u;
    // 80301214: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301218:
    ctx->pc = 0x80301218u;
    // 80301218: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030121C:
    ctx->pc = 0x8030121Cu;
    // 8030121C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301220:
    ctx->pc = 0x80301220u;
    // 80301220: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301224:
    ctx->pc = 0x80301224u;
    // 80301224: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80301228:
    ctx->pc = 0x80301228u;
    // 80301228: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030122C:
    ctx->pc = 0x8030122Cu;
    ctx->downcount -= 19;
    // 8030122C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301230:
    ctx->pc = 0x80301230u;
    // 80301230: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301234:
    ctx->pc = 0x80301234u;
    // 80301234: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301238:
    ctx->pc = 0x80301238u;
    // 80301238: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030123C:
    ctx->pc = 0x8030123Cu;
    // 8030123C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301240:
    ctx->pc = 0x80301240u;
    // 80301240: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301244:
    ctx->pc = 0x80301244u;
    // 80301244: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80301248:
    ctx->pc = 0x80301248u;
    // 80301248: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030124C:
    ctx->pc = 0x8030124Cu;
    // 8030124C: bl      0x8026F6CC
    {
            ctx->lr = 0x80301250u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80301250:
    ctx->pc = 0x80301250u;
    ctx->downcount -= 6;
    // 80301250: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80301254:
    ctx->pc = 0x80301254u;
    // 80301254: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301258:
    ctx->pc = 0x80301258u;
    // 80301258: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030125C:
    ctx->pc = 0x8030125Cu;
    // 8030125C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80301260:
    ctx->pc = 0x80301260u;
    // 80301260: lwz     r5, 292(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(292);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301264:
    ctx->pc = 0x80301264u;
    // 80301264: bl      0x8025D624
    {
            ctx->lr = 0x80301268u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80301268:
    ctx->pc = 0x80301268u;
    ctx->downcount -= 22;
    // 80301268: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030126C:
    ctx->pc = 0x8030126Cu;
    // 8030126C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301270:
    ctx->pc = 0x80301270u;
    // 80301270: stw     r0, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301274:
    ctx->pc = 0x80301274u;
    // 80301274: stw     r3, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301278:
    ctx->pc = 0x80301278u;
    // 80301278: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030127C:
    ctx->pc = 0x8030127Cu;
    // 8030127C: stw     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301280:
    ctx->pc = 0x80301280u;
    // 80301280: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301284:
    ctx->pc = 0x80301284u;
    // 80301284: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301288:
    ctx->pc = 0x80301288u;
    // 80301288: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030128C:
    ctx->pc = 0x8030128Cu;
    // 8030128C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80301290:
    ctx->pc = 0x80301290u;
    // 80301290: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301294:
    ctx->pc = 0x80301294u;
    ctx->downcount -= 18;
    // 80301294: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301298:
    ctx->pc = 0x80301298u;
    // 80301298: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030129C:
    ctx->pc = 0x8030129Cu;
    // 8030129C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803012A0:
    ctx->pc = 0x803012A0u;
    // 803012A0: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803012A4:
    ctx->pc = 0x803012A4u;
    // 803012A4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803012A8:
    ctx->pc = 0x803012A8u;
    // 803012A8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803012AC:
    ctx->pc = 0x803012ACu;
    // 803012AC: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_803012B0:
    ctx->pc = 0x803012B0u;
    // 803012B0: bl      0x8026F6CC
    {
            ctx->lr = 0x803012B4u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_803012B4:
    ctx->pc = 0x803012B4u;
    ctx->downcount -= 4;
    // 803012B4: lwz     r5, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803012B8:
    ctx->pc = 0x803012B8u;
    // 803012B8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803012BC:
    ctx->pc = 0x803012BCu;
    // 803012BC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803012C0:
    ctx->pc = 0x803012C0u;
    // 803012C0: bl      0x8025D624
    {
            ctx->lr = 0x803012C4u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_803012C4:
    ctx->pc = 0x803012C4u;
    ctx->downcount -= 22;
    // 803012C4: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803012C8:
    ctx->pc = 0x803012C8u;
    // 803012C8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803012CC:
    ctx->pc = 0x803012CCu;
    // 803012CC: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803012D0:
    ctx->pc = 0x803012D0u;
    // 803012D0: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803012D4:
    ctx->pc = 0x803012D4u;
    // 803012D4: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803012D8:
    ctx->pc = 0x803012D8u;
    // 803012D8: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803012DC:
    ctx->pc = 0x803012DCu;
    // 803012DC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803012E0:
    ctx->pc = 0x803012E0u;
    // 803012E0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803012E4:
    ctx->pc = 0x803012E4u;
    // 803012E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803012E8:
    ctx->pc = 0x803012E8u;
    // 803012E8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803012EC:
    ctx->pc = 0x803012ECu;
    // 803012EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803012F0:
    ctx->pc = 0x803012F0u;
    ctx->downcount -= 18;
    // 803012F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803012F4:
    ctx->pc = 0x803012F4u;
    // 803012F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803012F8:
    ctx->pc = 0x803012F8u;
    // 803012F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803012FC:
    ctx->pc = 0x803012FCu;
    // 803012FC: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301300:
    ctx->pc = 0x80301300u;
    // 80301300: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301304:
    ctx->pc = 0x80301304u;
    // 80301304: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301308:
    ctx->pc = 0x80301308u;
    // 80301308: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030130C:
    ctx->pc = 0x8030130Cu;
    // 8030130C: bl      0x8026F6CC
    {
            ctx->lr = 0x80301310u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80301310:
    ctx->pc = 0x80301310u;
    ctx->downcount -= 4;
    // 80301310: lwz     r5, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301314:
    ctx->pc = 0x80301314u;
    // 80301314: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301318:
    ctx->pc = 0x80301318u;
    // 80301318: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030131C:
    ctx->pc = 0x8030131Cu;
    // 8030131C: bl      0x8025D624
    {
            ctx->lr = 0x80301320u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80301320:
    ctx->pc = 0x80301320u;
    ctx->downcount -= 22;
    // 80301320: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301324:
    ctx->pc = 0x80301324u;
    // 80301324: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301328:
    ctx->pc = 0x80301328u;
    // 80301328: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030132C:
    ctx->pc = 0x8030132Cu;
    // 8030132C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301330:
    ctx->pc = 0x80301330u;
    // 80301330: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301334:
    ctx->pc = 0x80301334u;
    // 80301334: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301338:
    ctx->pc = 0x80301338u;
    // 80301338: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030133C:
    ctx->pc = 0x8030133Cu;
    // 8030133C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301340:
    ctx->pc = 0x80301340u;
    // 80301340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301344:
    ctx->pc = 0x80301344u;
    // 80301344: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80301348:
    ctx->pc = 0x80301348u;
    // 80301348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030134C:
    ctx->pc = 0x8030134Cu;
    ctx->downcount -= 23;
    // 8030134C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301350:
    ctx->pc = 0x80301350u;
    // 80301350: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301354:
    ctx->pc = 0x80301354u;
    // 80301354: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80301358:
    ctx->pc = 0x80301358u;
    // 80301358: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030135C:
    ctx->pc = 0x8030135Cu;
    // 8030135C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301360:
    ctx->pc = 0x80301360u;
    // 80301360: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80301364:
    ctx->pc = 0x80301364u;
    // 80301364: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301368:
    ctx->pc = 0x80301368u;
    // 80301368: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_8030136C:
    ctx->pc = 0x8030136Cu;
    // 8030136C: addi    r30, r30, 16776
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16776);

label_80301370:
    ctx->pc = 0x80301370u;
    // 80301370: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301374:
    ctx->pc = 0x80301374u;
    // 80301374: addi    r4, r30, 100
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(100);

label_80301378:
    ctx->pc = 0x80301378u;
    // 80301378: addi    r5, r30, 115
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(115);

label_8030137C:
    ctx->pc = 0x8030137Cu;
    // 8030137C: bl      0x8036E758
    {
            ctx->lr = 0x80301380u;
            ctx->pc = 0x8036E758u;
            return;
    }

label_80301380:
    ctx->pc = 0x80301380u;
    ctx->downcount -= 13;
    // 80301380: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_80301384:
    ctx->pc = 0x80301384u;
    // 80301384: addi    r4, r30, 141
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(141);

label_80301388:
    ctx->pc = 0x80301388u;
    // 80301388: addi    r7, r7, 24528
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(24528);

label_8030138C:
    ctx->pc = 0x8030138Cu;
    // 8030138C: stw     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80301390:
    ctx->pc = 0x80301390u;
    // 80301390: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_80301394:
    ctx->pc = 0x80301394u;
    // 80301394: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_80301398:
    ctx->pc = 0x80301398u;
    // 80301398: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_8030139C:
    ctx->pc = 0x8030139Cu;
    // 8030139C: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_803013A0:
    ctx->pc = 0x803013A0u;
    // 803013A0: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803013A4:
    ctx->pc = 0x803013A4u;
    // 803013A4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_803013A8:
    ctx->pc = 0x803013A8u;
    // 803013A8: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_803013AC:
    ctx->pc = 0x803013ACu;
    // 803013AC: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803013B0:
    ctx->pc = 0x803013B0u;
    // 803013B0: bl      0x8000E7F4
    {
            ctx->lr = 0x803013B4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_803013B4:
    ctx->pc = 0x803013B4u;
    ctx->downcount -= 2;
    // 803013B4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803013B8:
    ctx->pc = 0x803013B8u;
    // 803013B8: bl      0x80270188
    {
            ctx->lr = 0x803013BCu;
            ctx->pc = 0x80270188u;
            return;
    }

label_803013BC:
    ctx->pc = 0x803013BCu;
    ctx->downcount -= 7;
    // 803013BC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803013C0:
    ctx->pc = 0x803013C0u;
    // 803013C0: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_803013C4:
    ctx->pc = 0x803013C4u;
    // 803013C4: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803013C8:
    ctx->pc = 0x803013C8u;
    // 803013C8: stw     r5, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803013CC:
    ctx->pc = 0x803013CCu;
    // 803013CC: stw     r5, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803013D0:
    ctx->pc = 0x803013D0u;
    // 803013D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_803013D4:
    loop_803013D4(ctx);
    if (ctx->pc == 0x803013E4u) goto label_803013E4;
    return;
label_803013D8:
    // 803013D8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_803013DC:
    ctx->pc = 0x803013DCu;
    // 803013DC: stw     r5, 292(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803013E0:
    // 803013E0: bc    16, 0, 0x803013D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803013D4u;
                return;
            }
            goto label_803013D4;
        }
    }

label_803013E4:
    ctx->pc = 0x803013E4u;
    ctx->downcount -= 5;
    // 803013E4: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_803013E8:
    ctx->pc = 0x803013E8u;
    // 803013E8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803013EC:
    ctx->pc = 0x803013ECu;
    // 803013EC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803013F0:
    ctx->pc = 0x803013F0u;
    // 803013F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_803013F4:
    loop_803013F4(ctx);
    if (ctx->pc == 0x80301404u) goto label_80301404;
    return;
label_803013F8:
    // 803013F8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_803013FC:
    ctx->pc = 0x803013FCu;
    // 803013FC: stw     r5, 340(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80301400:
    // 80301400: bc    16, 0, 0x803013F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803013F4u;
                return;
            }
            goto label_803013F4;
        }
    }

label_80301404:
    ctx->pc = 0x80301404u;
    ctx->downcount -= 5;
    // 80301404: li      r0, 12
    ctx->gpr[0] = (u32)(s32)(12);

label_80301408:
    ctx->pc = 0x80301408u;
    // 80301408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030140C:
    ctx->pc = 0x8030140Cu;
    // 8030140C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80301410:
    ctx->pc = 0x80301410u;
    // 80301410: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80301414:
    loop_80301414(ctx);
    if (ctx->pc == 0x80301424u) goto label_80301424;
    return;
label_80301418:
    // 80301418: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8030141C:
    ctx->pc = 0x8030141Cu;
    // 8030141C: stw     r5, 388(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80301420:
    // 80301420: bc    16, 0, 0x80301414
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301414u;
                return;
            }
            goto label_80301414;
        }
    }

label_80301424:
    ctx->pc = 0x80301424u;
    ctx->downcount -= 5;
    // 80301424: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80301428:
    ctx->pc = 0x80301428u;
    // 80301428: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030142C:
    ctx->pc = 0x8030142Cu;
    // 8030142C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80301430:
    ctx->pc = 0x80301430u;
    // 80301430: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80301434:
    loop_80301434(ctx);
    if (ctx->pc == 0x80301444u) goto label_80301444;
    return;
label_80301438:
    // 80301438: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8030143C:
    ctx->pc = 0x8030143Cu;
    // 8030143C: stw     r5, 436(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(436);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80301440:
    // 80301440: bc    16, 0, 0x80301434
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301434u;
                return;
            }
            goto label_80301434;
        }
    }

label_80301444:
    ctx->pc = 0x80301444u;
    ctx->downcount -= 17;
    // 80301444: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80301448:
    ctx->pc = 0x80301448u;
    // 80301448: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030144C:
    ctx->pc = 0x8030144Cu;
    // 8030144C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301450:
    ctx->pc = 0x80301450u;
    // 80301450: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301454:
    ctx->pc = 0x80301454u;
    // 80301454: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301458:
    ctx->pc = 0x80301458u;
    // 80301458: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030145C:
    ctx->pc = 0x8030145Cu;
    ctx->downcount -= 18;
    // 8030145C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301460:
    ctx->pc = 0x80301460u;
    // 80301460: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301464:
    ctx->pc = 0x80301464u;
    // 80301464: cmpwi   r3, 0
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

label_80301468:
    ctx->pc = 0x80301468u;
    // 80301468: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030146C:
    ctx->pc = 0x8030146Cu;
    // 8030146C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301470:
    ctx->pc = 0x80301470u;
    // 80301470: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301474:
    ctx->pc = 0x80301474u;
    // 80301474: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301478:
    ctx->pc = 0x80301478u;
    // 80301478: bc    12, 2, 0x803014AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803014AC;
        }
    }

label_8030147C:
    ctx->pc = 0x8030147Cu;
    ctx->downcount -= 1;
    // 8030147C: bc    12, 2, 0x8030149C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030149C;
        }
    }

label_80301480:
    ctx->pc = 0x80301480u;
    ctx->downcount -= 1;
    // 80301480: bc    12, 2, 0x8030149C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030149C;
        }
    }

label_80301484:
    ctx->pc = 0x80301484u;
    ctx->downcount -= 3;
    // 80301484: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301488:
    ctx->pc = 0x80301488u;
    // 80301488: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030148C:
    ctx->pc = 0x8030148Cu;
    // 8030148C: bl      0x801F5C24
    {
            ctx->lr = 0x80301490u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80301490:
    ctx->pc = 0x80301490u;
    ctx->downcount -= 3;
    // 80301490: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301494:
    ctx->pc = 0x80301494u;
    // 80301494: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301498:
    ctx->pc = 0x80301498u;
    // 80301498: bl      0x801F9C70
    {
            ctx->lr = 0x8030149Cu;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_8030149C:
    ctx->pc = 0x8030149Cu;
    ctx->downcount -= 2;
    // 8030149C: cmpwi   r31, 0
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

label_803014A0:
    ctx->pc = 0x803014A0u;
    // 803014A0: bc    4, 1, 0x803014AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803014AC;
        }
    }

label_803014A4:
    ctx->pc = 0x803014A4u;
    ctx->downcount -= 2;
    // 803014A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803014A8:
    ctx->pc = 0x803014A8u;
    // 803014A8: bl      0x801C1C90
    {
            ctx->lr = 0x803014ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803014AC:
    ctx->pc = 0x803014ACu;
    ctx->downcount -= 17;
    // 803014AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803014B0:
    ctx->pc = 0x803014B0u;
    // 803014B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803014B4:
    ctx->pc = 0x803014B4u;
    // 803014B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803014B8:
    ctx->pc = 0x803014B8u;
    // 803014B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803014BC:
    ctx->pc = 0x803014BCu;
    // 803014BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803014C0:
    ctx->pc = 0x803014C0u;
    // 803014C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803014C4:
    ctx->pc = 0x803014C4u;
    ctx->downcount -= 18;
    // 803014C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803014C8:
    ctx->pc = 0x803014C8u;
    // 803014C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803014CC:
    // 803014CC: cmpwi   r3, 0
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

label_803014D0:
    ctx->pc = 0x803014D0u;
    // 803014D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803014D4:
    ctx->pc = 0x803014D4u;
    // 803014D4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803014D8:
    // 803014D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803014DC:
    // 803014DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803014E0:
    // 803014E0: bc    12, 2, 0x80301500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301500;
        }
    }

label_803014E4:
    ctx->downcount -= 1;
    // 803014E4: bc    12, 2, 0x803014F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803014F0;
        }
    }

label_803014E8:
    ctx->downcount -= 2;
    // 803014E8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803014EC:
    // 803014EC: bl      0x801F9B68
    {
            ctx->lr = 0x803014F0u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_803014F0:
    ctx->downcount -= 2;
    // 803014F0: cmpwi   r31, 0
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

label_803014F4:
    // 803014F4: bc    4, 1, 0x80301500
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301500;
        }
    }

label_803014F8:
    ctx->downcount -= 2;
    // 803014F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803014FC:
    // 803014FC: bl      0x801C1C90
    {
            ctx->lr = 0x80301500u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80301500:
    ctx->downcount -= 17;
    // 80301500: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301504:
    ctx->pc = 0x80301504u;
    // 80301504: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301508:
    ctx->pc = 0x80301508u;
    // 80301508: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030150C:
    ctx->pc = 0x8030150Cu;
    // 8030150C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301510:
    // 80301510: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301514:
    ctx->pc = 0x80301514u;
    // 80301514: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301518:
    ctx->downcount -= 2;
    // 80301518: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030151C:
    // 8030151C: b       0x803014C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803014C4u;
                return;
            }
            goto label_803014C4;
    }

label_80301520:
    ctx->downcount -= 2;
    // 80301520: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80301524:
    // 80301524: b       0x8036E5F0
    {
            ctx->pc = 0x8036E5F0u;
            return;
    }

label_80301528:
    ctx->downcount -= 2;
    // 80301528: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030152C:
    // 8030152C: b       0x803014C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803014C4u;
                return;
            }
            goto label_803014C4;
    }

label_80301530:
    ctx->pc = 0x80301530u;
    ctx->downcount -= 8;
    // 80301530: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301534:
    ctx->pc = 0x80301534u;
    // 80301534: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301538:
    // 80301538: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030153C:
    ctx->pc = 0x8030153Cu;
    // 8030153C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301540:
    ctx->pc = 0x80301540u;
    // 80301540: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301544:
    // 80301544: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301548:
    // 80301548: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030154C:
    // 8030154C: bl      0x8026F5F4
    {
            ctx->lr = 0x80301550u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80301550:
    ctx->pc = 0x80301550u;
    ctx->downcount -= 4;
    // 80301550: lwz     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301554:
    // 80301554: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301558:
    // 80301558: cmpwi   r0, 1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030155C:
    // 8030155C: bc    12, 2, 0x8030156C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030156C;
        }
    }

label_80301560:
    ctx->downcount -= 2;
    // 80301560: cmpwi   r0, 2
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

label_80301564:
    // 80301564: bc    12, 2, 0x80301580
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301580;
        }
    }

label_80301568:
    ctx->downcount -= 1;
    // 80301568: b       0x80301590
    {
            goto label_80301590;
    }

label_8030156C:
    ctx->downcount -= 4;
    // 8030156C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80301570:
    // 80301570: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_80301574:
    // 80301574: slw   r4, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80301578:
    // 80301578: bl      0x802B735C
    {
            ctx->lr = 0x8030157Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030157C:
    ctx->downcount -= 1;
    // 8030157C: b       0x80301590
    {
            goto label_80301590;
    }

label_80301580:
    ctx->downcount -= 4;
    // 80301580: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80301584:
    // 80301584: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_80301588:
    // 80301588: slw   r4, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030158C:
    // 8030158C: bl      0x802B735C
    {
            ctx->lr = 0x80301590u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80301590:
    ctx->pc = 0x80301590u;
    ctx->downcount -= 6;
    // 80301590: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301594:
    ctx->pc = 0x80301594u;
    // 80301594: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301598:
    ctx->pc = 0x80301598u;
    // 80301598: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030159C:
    // 8030159C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803015A0:
    ctx->pc = 0x803015A0u;
    // 803015A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803015A4:
    ctx->pc = 0x803015A4u;
    ctx->downcount -= 4;
    // 803015A4: lfs     f2, -12056(r2)
    if (!ppc_fp_available_inline(ctx, 0x803015A4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12056);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_803015A8:
    // 803015A8: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_803015AC:
    // 803015AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803015B0:
    // 803015B0: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_803015B4:
    ctx->pc = 0x803015B4u;
    ctx->downcount -= 24;
    // 803015B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803015B8:
    ctx->pc = 0x803015B8u;
    // 803015B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803015BC:
    // 803015BC: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_803015C0:
    ctx->pc = 0x803015C0u;
    // 803015C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803015C4:
    // 803015C4: addi    r4, r4, 16944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16944);

label_803015C8:
    ctx->pc = 0x803015C8u;
    // 803015C8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803015CC:
    // 803015CC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803015D0:
    // 803015D0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803015D4:
    ctx->pc = 0x803015D4u;
    // 803015D4: lwz     r5, -13440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13440);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803015D8:
    ctx->pc = 0x803015D8u;
    // 803015D8: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803015DC:
    // 803015DC: addi    r0, r5, -3
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-3);

label_803015E0:
    // 803015E0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803015E4:
    // 803015E4: rlwinm r31, r0, 27, 5, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803015E8:
    // 803015E8: bl      0x8026F970
    {
            ctx->lr = 0x803015ECu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803015EC:
    ctx->downcount -= 2;
    // 803015EC: cmpwi   r3, 0
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

label_803015F0:
    // 803015F0: bc    12, 2, 0x80301608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301608;
        }
    }

label_803015F4:
    ctx->pc = 0x803015F4u;
    ctx->downcount -= 5;
    // 803015F4: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_803015F8:
    // 803015F8: cntlzw r0, r31
    {
        u32 v = ctx->gpr[31];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803015FC:
    // 803015FC: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80301600:
    // 80301600: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80301604:
    ctx->pc = 0x80301604u;
    // 80301604: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80301608:
    ctx->downcount -= 5;
    // 80301608: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030160C:
    // 8030160C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80301610:
    // 80301610: addi    r4, r4, 16944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16944);

label_80301614:
    // 80301614: addi    r4, r4, 10
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10);

label_80301618:
    // 80301618: bl      0x8026F970
    {
            ctx->lr = 0x8030161Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030161C:
    ctx->downcount -= 2;
    // 8030161C: cmpwi   r3, 0
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

label_80301620:
    // 80301620: bc    12, 2, 0x80301634
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301634;
        }
    }

label_80301624:
    ctx->pc = 0x80301624u;
    ctx->downcount -= 4;
    // 80301624: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301628:
    // 80301628: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030162C:
    // 8030162C: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_80301630:
    ctx->pc = 0x80301630u;
    // 80301630: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80301634:
    ctx->pc = 0x80301634u;
    ctx->downcount -= 16;
    // 80301634: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301638:
    ctx->pc = 0x80301638u;
    // 80301638: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030163C:
    ctx->pc = 0x8030163Cu;
    // 8030163C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301640:
    // 80301640: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301644:
    ctx->pc = 0x80301644u;
    // 80301644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301648:
    ctx->pc = 0x80301648u;
    ctx->downcount -= 15;
    // 80301648: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030164C:
    ctx->pc = 0x8030164Cu;
    // 8030164C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301650:
    // 80301650: lis     r7, -32665
    ctx->gpr[7] = ((u32)(s32)(-32665) << 16);

label_80301654:
    // 80301654: or   r9, r6, r6
    {
        ctx->gpr[9] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80301658:
    ctx->pc = 0x80301658u;
    // 80301658: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030165C:
    // 8030165C: or   r0, r4, r4
    {
        ctx->gpr[0] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301660:
    // 80301660: addi    r7, r7, 16944
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(16944);

label_80301664:
    // 80301664: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80301668:
    ctx->pc = 0x80301668u;
    // 80301668: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030166C:
    // 8030166C: addi    r5, r7, 24
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(24);

label_80301670:
    // 80301670: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301674:
    // 80301674: or   r6, r0, r0
    {
        ctx->gpr[6] = ctx->gpr[0] | ctx->gpr[0];
    }

label_80301678:
    // 80301678: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8030167C:
    // 8030167C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80301680:
    // 80301680: bl      0x8036B3A4
    {
            ctx->lr = 0x80301684u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_80301684:
    ctx->downcount -= 18;
    // 80301684: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80301688:
    // 80301688: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030168C:
    // 8030168C: addi    r4, r4, 24824
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24824);

label_80301690:
    ctx->pc = 0x80301690u;
    // 80301690: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80301694:
    // 80301694: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80301698:
    // 80301698: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030169C:
    // 8030169C: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_803016A0:
    // 803016A0: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_803016A4:
    ctx->pc = 0x803016A4u;
    // 803016A4: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_803016A8:
    ctx->pc = 0x803016A8u;
    // 803016A8: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803016AC:
    ctx->pc = 0x803016ACu;
    // 803016AC: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803016B0:
    ctx->pc = 0x803016B0u;
    // 803016B0: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803016B4:
    ctx->pc = 0x803016B4u;
    // 803016B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803016B8:
    ctx->pc = 0x803016B8u;
    // 803016B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803016BC:
    ctx->pc = 0x803016BCu;
    // 803016BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803016C0:
    // 803016C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803016C4:
    ctx->pc = 0x803016C4u;
    // 803016C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803016C8:
    ctx->downcount -= 2;
    // 803016C8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803016CC:
    // 803016CC: b       0x802C5FDC
    {
            ctx->pc = 0x802C5FDCu;
            return;
    }

label_803016D0:
    ctx->downcount -= 2;
    // 803016D0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803016D4:
    // 803016D4: b       0x80301530
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301530u;
                return;
            }
            goto label_80301530;
    }

label_803016D8:
    ctx->downcount -= 2;
    // 803016D8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803016DC:
    // 803016DC: b       0x803015A4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803015A4u;
                return;
            }
            goto label_803015A4;
    }

label_803016E0:
    ctx->pc = 0x803016E0u;
    ctx->downcount -= 2;
    // 803016E0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803016E4:
    ctx->pc = 0x803016E4u;
    // 803016E4: b       0x802C5FDC
    {
            ctx->pc = 0x802C5FDCu;
            return;
    }

label_803016E8:
    ctx->pc = 0x803016E8u;
    ctx->downcount -= 2;
    // 803016E8: cmpwi   r4, 3
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803016EC:
    ctx->pc = 0x803016ECu;
    // 803016EC: bc    12, 2, 0x80301720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301720;
        }
    }

label_803016F0:
    ctx->pc = 0x803016F0u;
    ctx->downcount -= 2;
    // 803016F0: cmpwi   r4, 7
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803016F4:
    ctx->pc = 0x803016F4u;
    // 803016F4: bc    12, 2, 0x80301720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301720;
        }
    }

label_803016F8:
    ctx->pc = 0x803016F8u;
    ctx->downcount -= 2;
    // 803016F8: cmpwi   r4, 11
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(11);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803016FC:
    ctx->pc = 0x803016FCu;
    // 803016FC: bc    12, 2, 0x80301720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301720;
        }
    }

label_80301700:
    ctx->pc = 0x80301700u;
    ctx->downcount -= 2;
    // 80301700: cmplwi  r4, 0x000B
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x000Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301704:
    ctx->pc = 0x80301704u;
    // 80301704: bc    12, 1, 0x80301710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301710;
        }
    }

label_80301708:
    ctx->pc = 0x80301708u;
    ctx->downcount -= 2;
    // 80301708: addi    r3, r4, 1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(1);

label_8030170C:
    ctx->pc = 0x8030170Cu;
    // 8030170C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301710:
    ctx->pc = 0x80301710u;
    ctx->downcount -= 2;
    // 80301710: cmpwi   r4, 12
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301714:
    ctx->pc = 0x80301714u;
    // 80301714: bc    4, 2, 0x80301720
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301720;
        }
    }

label_80301718:
    ctx->pc = 0x80301718u;
    ctx->downcount -= 2;
    // 80301718: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_8030171C:
    ctx->pc = 0x8030171Cu;
    // 8030171C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301720:
    ctx->pc = 0x80301720u;
    ctx->downcount -= 2;
    // 80301720: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80301724:
    ctx->pc = 0x80301724u;
    // 80301724: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301728:
    ctx->pc = 0x80301728u;
    ctx->downcount -= 2;
    // 80301728: cmpwi   r4, 0
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

label_8030172C:
    ctx->pc = 0x8030172Cu;
    // 8030172C: bc    12, 2, 0x80301760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301760;
        }
    }

label_80301730:
    ctx->pc = 0x80301730u;
    ctx->downcount -= 2;
    // 80301730: cmpwi   r4, 4
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301734:
    ctx->pc = 0x80301734u;
    // 80301734: bc    12, 2, 0x80301760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301760;
        }
    }

label_80301738:
    ctx->pc = 0x80301738u;
    ctx->downcount -= 2;
    // 80301738: cmpwi   r4, 8
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030173C:
    ctx->pc = 0x8030173Cu;
    // 8030173C: bc    12, 2, 0x80301760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301760;
        }
    }

label_80301740:
    ctx->pc = 0x80301740u;
    ctx->downcount -= 2;
    // 80301740: cmplwi  r4, 0x000B
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x000Bu);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301744:
    ctx->pc = 0x80301744u;
    // 80301744: bc    12, 1, 0x80301750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301750;
        }
    }

label_80301748:
    ctx->pc = 0x80301748u;
    ctx->downcount -= 2;
    // 80301748: addi    r3, r4, -1
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-1);

label_8030174C:
    ctx->pc = 0x8030174Cu;
    // 8030174C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301750:
    ctx->pc = 0x80301750u;
    ctx->downcount -= 2;
    // 80301750: cmpwi   r4, 13
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80301754:
    ctx->pc = 0x80301754u;
    // 80301754: bc    4, 2, 0x80301760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301760;
        }
    }

label_80301758:
    ctx->pc = 0x80301758u;
    ctx->downcount -= 2;
    // 80301758: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8030175C:
    ctx->pc = 0x8030175Cu;
    // 8030175C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301760:
    ctx->pc = 0x80301760u;
    ctx->downcount -= 2;
    // 80301760: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80301764:
    ctx->pc = 0x80301764u;
    // 80301764: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301768:
    ctx->pc = 0x80301768u;
    ctx->downcount -= 2;
    // 80301768: cmplwi  r4, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030176C:
    ctx->pc = 0x8030176Cu;
    // 8030176C: bc    12, 1, 0x80301778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301778;
        }
    }

label_80301770:
    ctx->pc = 0x80301770u;
    ctx->downcount -= 2;
    // 80301770: addi    r3, r4, 4
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(4);

label_80301774:
    ctx->pc = 0x80301774u;
    // 80301774: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301778:
    ctx->pc = 0x80301778u;
    ctx->downcount -= 3;
    // 80301778: addi    r0, r4, -8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-8);

label_8030177C:
    ctx->pc = 0x8030177Cu;
    // 8030177C: cmplwi  r0, 0x0001
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

label_80301780:
    ctx->pc = 0x80301780u;
    // 80301780: bc    12, 1, 0x8030178C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030178C;
        }
    }

label_80301784:
    ctx->pc = 0x80301784u;
    ctx->downcount -= 2;
    // 80301784: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80301788:
    ctx->pc = 0x80301788u;
    // 80301788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030178C:
    ctx->pc = 0x8030178Cu;
    ctx->downcount -= 4;
    // 8030178C: addi    r0, r4, -10
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-10);

label_80301790:
    ctx->pc = 0x80301790u;
    // 80301790: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80301794:
    ctx->pc = 0x80301794u;
    // 80301794: cmplwi  r0, 0x0001
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

label_80301798:
    ctx->pc = 0x80301798u;
    // 80301798: bclr  12, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030179C:
    ctx->pc = 0x8030179Cu;
    ctx->downcount -= 2;
    // 8030179C: li      r3, 13
    ctx->gpr[3] = (u32)(s32)(13);

label_803017A0:
    ctx->pc = 0x803017A0u;
    // 803017A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803017A4:
    ctx->pc = 0x803017A4u;
    ctx->downcount -= 3;
    // 803017A4: addi    r3, r4, -4
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(-4);

label_803017A8:
    ctx->pc = 0x803017A8u;
    // 803017A8: cmplwi  r3, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803017AC:
    ctx->pc = 0x803017ACu;
    // 803017AC: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803017B0:
    ctx->pc = 0x803017B0u;
    ctx->downcount -= 2;
    // 803017B0: cmpwi   r4, 12
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(12);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803017B4:
    ctx->pc = 0x803017B4u;
    // 803017B4: bc    4, 2, 0x803017C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803017C0;
        }
    }

label_803017B8:
    ctx->pc = 0x803017B8u;
    ctx->downcount -= 2;
    // 803017B8: li      r3, 8
    ctx->gpr[3] = (u32)(s32)(8);

label_803017BC:
    ctx->pc = 0x803017BCu;
    // 803017BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803017C0:
    ctx->pc = 0x803017C0u;
    ctx->downcount -= 3;
    // 803017C0: cmpwi   r4, 13
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(13);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803017C4:
    ctx->pc = 0x803017C4u;
    // 803017C4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_803017C8:
    ctx->pc = 0x803017C8u;
    // 803017C8: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803017CC:
    ctx->pc = 0x803017CCu;
    ctx->downcount -= 2;
    // 803017CC: li      r3, 11
    ctx->gpr[3] = (u32)(s32)(11);

label_803017D0:
    ctx->pc = 0x803017D0u;
    // 803017D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803017D4:
    ctx->pc = 0x803017D4u;
    ctx->downcount -= 1;
    // 803017D4: b       0x8026F00C
    {
            ctx->pc = 0x8026F00Cu;
            return;
    }

label_803017D8:
    ctx->pc = 0x803017D8u;
    ctx->downcount -= 5;
    // 803017D8: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_803017DC:
    ctx->pc = 0x803017DCu;
    // 803017DC: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_803017E0:
    ctx->pc = 0x803017E0u;
    // 803017E0: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_803017E4:
    ctx->pc = 0x803017E4u;
    // 803017E4: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_803017E8:
    ctx->pc = 0x803017E8u;
    // 803017E8: b       0x8026F158
    {
            ctx->pc = 0x8026F158u;
            return;
    }

label_803017EC:
    ctx->pc = 0x803017ECu;
    ctx->downcount -= 8;
    // 803017EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803017F0:
    ctx->pc = 0x803017F0u;
    // 803017F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803017F4:
    ctx->pc = 0x803017F4u;
    // 803017F4: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_803017F8:
    ctx->pc = 0x803017F8u;
    // 803017F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803017FC:
    ctx->pc = 0x803017FCu;
    // 803017FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301800:
    ctx->pc = 0x80301800u;
    // 80301800: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301804:
    ctx->pc = 0x80301804u;
    // 80301804: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301808:
    ctx->pc = 0x80301808u;
    // 80301808: bl      0x8026F1B8
    {
            ctx->lr = 0x8030180Cu;
            ctx->pc = 0x8026F1B8u;
            return;
    }

label_8030180C:
    ctx->pc = 0x8030180Cu;
    ctx->downcount -= 10;
    // 8030180C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80301810:
    ctx->pc = 0x80301810u;
    // 80301810: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80301814:
    ctx->pc = 0x80301814u;
    // 80301814: addi    r4, r4, 25120
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25120);

label_80301818:
    ctx->pc = 0x80301818u;
    // 80301818: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030181C:
    ctx->pc = 0x8030181Cu;
    // 8030181C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301820:
    ctx->pc = 0x80301820u;
    // 80301820: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301824:
    ctx->pc = 0x80301824u;
    // 80301824: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301828:
    ctx->pc = 0x80301828u;
    // 80301828: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030182C:
    ctx->pc = 0x8030182Cu;
    // 8030182C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301830:
    ctx->pc = 0x80301830u;
    ctx->downcount -= 7;
    // 80301830: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301834:
    ctx->pc = 0x80301834u;
    // 80301834: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301838:
    ctx->pc = 0x80301838u;
    // 80301838: cmpwi   r3, 0
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

label_8030183C:
    ctx->pc = 0x8030183Cu;
    // 8030183C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301840:
    ctx->pc = 0x80301840u;
    // 80301840: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301844:
    ctx->pc = 0x80301844u;
    // 80301844: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301848:
    ctx->pc = 0x80301848u;
    // 80301848: bc    12, 2, 0x80301858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301858;
        }
    }

label_8030184C:
    ctx->pc = 0x8030184Cu;
    ctx->downcount -= 2;
    // 8030184C: cmpwi   r4, 0
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

label_80301850:
    ctx->pc = 0x80301850u;
    // 80301850: bc    4, 1, 0x80301858
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301858;
        }
    }

label_80301854:
    ctx->pc = 0x80301854u;
    ctx->downcount -= 1;
    // 80301854: bl      0x801C1C90
    {
            ctx->lr = 0x80301858u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80301858:
    ctx->pc = 0x80301858u;
    ctx->downcount -= 7;
    // 80301858: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030185C:
    ctx->pc = 0x8030185Cu;
    // 8030185C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301860:
    ctx->pc = 0x80301860u;
    // 80301860: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301864:
    ctx->pc = 0x80301864u;
    // 80301864: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301868:
    ctx->pc = 0x80301868u;
    // 80301868: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030186C:
    ctx->pc = 0x8030186Cu;
    // 8030186C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301870:
    ctx->pc = 0x80301870u;
    ctx->downcount -= 11;
    // 80301870: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301874:
    ctx->pc = 0x80301874u;
    // 80301874: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301878:
    ctx->pc = 0x80301878u;
    // 80301878: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030187C:
    ctx->pc = 0x8030187Cu;
    // 8030187C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301880:
    ctx->pc = 0x80301880u;
    // 80301880: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301884:
    ctx->pc = 0x80301884u;
    // 80301884: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301888:
    ctx->pc = 0x80301888u;
    // 80301888: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030188C:
    ctx->pc = 0x8030188Cu;
    // 8030188C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301890:
    ctx->pc = 0x80301890u;
    // 80301890: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80301894:
    ctx->pc = 0x80301894u;
    // 80301894: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80301898u;
            ctx->pc = target;
            return;
        }
    }

label_80301898:
    ctx->pc = 0x80301898u;
    ctx->downcount -= 2;
    // 80301898: cmpwi   r3, 0
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

label_8030189C:
    ctx->pc = 0x8030189Cu;
    // 8030189C: bc    12, 2, 0x803018D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803018D0;
        }
    }

label_803018A0:
    ctx->pc = 0x803018A0u;
    ctx->downcount -= 6;
    // 803018A0: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803018A4:
    ctx->pc = 0x803018A4u;
    // 803018A4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803018A8:
    ctx->pc = 0x803018A8u;
    // 803018A8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803018AC:
    ctx->pc = 0x803018ACu;
    // 803018AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803018B0:
    ctx->pc = 0x803018B0u;
    // 803018B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803018B4u;
            ctx->pc = target;
            return;
        }
    }

label_803018B4:
    ctx->pc = 0x803018B4u;
    ctx->downcount -= 2;
    // 803018B4: cmpwi   r3, 0
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

label_803018B8:
    ctx->pc = 0x803018B8u;
    // 803018B8: bc    12, 2, 0x803018D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803018D0;
        }
    }

label_803018BC:
    ctx->pc = 0x803018BCu;
    ctx->downcount -= 6;
    // 803018BC: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803018C0:
    ctx->pc = 0x803018C0u;
    // 803018C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803018C4:
    ctx->pc = 0x803018C4u;
    // 803018C4: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803018C8:
    ctx->pc = 0x803018C8u;
    // 803018C8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803018CC:
    ctx->pc = 0x803018CCu;
    // 803018CC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803018D0u;
            ctx->pc = target;
            return;
        }
    }

label_803018D0:
    ctx->pc = 0x803018D0u;
    ctx->downcount -= 6;
    // 803018D0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803018D4:
    ctx->pc = 0x803018D4u;
    // 803018D4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_803018D8:
    ctx->pc = 0x803018D8u;
    // 803018D8: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803018DC:
    ctx->pc = 0x803018DCu;
    // 803018DC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803018E0:
    ctx->pc = 0x803018E0u;
    // 803018E0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803018E4:
    ctx->pc = 0x803018E4u;
    // 803018E4: bl      0x80370BD4
    {
            ctx->lr = 0x803018E8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803018E8:
    ctx->pc = 0x803018E8u;
    ctx->downcount -= 3;
    // 803018E8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803018EC:
    ctx->pc = 0x803018ECu;
    // 803018EC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803018F0:
    ctx->pc = 0x803018F0u;
    // 803018F0: bl      0x80263ABC
    {
            ctx->lr = 0x803018F4u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803018F4:
    ctx->pc = 0x803018F4u;
    ctx->downcount -= 6;
    // 803018F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803018F8:
    ctx->pc = 0x803018F8u;
    // 803018F8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803018FC:
    ctx->pc = 0x803018FCu;
    // 803018FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301900:
    ctx->pc = 0x80301900u;
    // 80301900: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301904:
    ctx->pc = 0x80301904u;
    // 80301904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301908:
    ctx->pc = 0x80301908u;
    ctx->downcount -= 11;
    // 80301908: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030190C:
    ctx->pc = 0x8030190Cu;
    // 8030190C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301910:
    ctx->pc = 0x80301910u;
    // 80301910: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301914:
    ctx->pc = 0x80301914u;
    // 80301914: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301918:
    ctx->pc = 0x80301918u;
    // 80301918: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030191C:
    ctx->pc = 0x8030191Cu;
    // 8030191C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301920:
    ctx->pc = 0x80301920u;
    // 80301920: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301924:
    ctx->pc = 0x80301924u;
    // 80301924: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301928:
    ctx->pc = 0x80301928u;
    // 80301928: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030192C:
    ctx->pc = 0x8030192Cu;
    // 8030192C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80301930u;
            ctx->pc = target;
            return;
        }
    }

label_80301930:
    ctx->pc = 0x80301930u;
    ctx->downcount -= 6;
    // 80301930: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301934:
    ctx->pc = 0x80301934u;
    // 80301934: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301938:
    ctx->pc = 0x80301938u;
    // 80301938: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030193C:
    ctx->pc = 0x8030193Cu;
    // 8030193C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80301940:
    ctx->pc = 0x80301940u;
    // 80301940: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80301944u;
            ctx->pc = target;
            return;
        }
    }

label_80301944:
    ctx->pc = 0x80301944u;
    ctx->downcount -= 6;
    // 80301944: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301948:
    ctx->pc = 0x80301948u;
    // 80301948: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030194C:
    ctx->pc = 0x8030194Cu;
    // 8030194C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301950:
    ctx->pc = 0x80301950u;
    // 80301950: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301954:
    ctx->pc = 0x80301954u;
    // 80301954: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301958:
    ctx->pc = 0x80301958u;
    ctx->downcount -= 9;
    // 80301958: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030195C:
    ctx->pc = 0x8030195Cu;
    // 8030195C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301960:
    ctx->pc = 0x80301960u;
    // 80301960: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301964:
    ctx->pc = 0x80301964u;
    // 80301964: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301968:
    ctx->pc = 0x80301968u;
    // 80301968: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030196C:
    ctx->pc = 0x8030196Cu;
    // 8030196C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301970:
    ctx->pc = 0x80301970u;
    // 80301970: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301974:
    ctx->pc = 0x80301974u;
    // 80301974: cmpwi   r0, 0
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

label_80301978:
    ctx->pc = 0x80301978u;
    // 80301978: bc    12, 2, 0x80301994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301994;
        }
    }

label_8030197C:
    ctx->pc = 0x8030197Cu;
    ctx->downcount -= 3;
    // 8030197C: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301980:
    ctx->pc = 0x80301980u;
    // 80301980: cmpwi   r0, 0
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

label_80301984:
    ctx->pc = 0x80301984u;
    // 80301984: bc    12, 2, 0x80301994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301994;
        }
    }

label_80301988:
    ctx->pc = 0x80301988u;
    ctx->downcount -= 3;
    // 80301988: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030198C:
    ctx->pc = 0x8030198Cu;
    // 8030198C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80301990:
    ctx->pc = 0x80301990u;
    // 80301990: bl      0x803457B8
    {
            ctx->lr = 0x80301994u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80301994:
    ctx->pc = 0x80301994u;
    ctx->downcount -= 4;
    // 80301994: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301998:
    ctx->pc = 0x80301998u;
    // 80301998: lbz     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030199C:
    ctx->pc = 0x8030199Cu;
    // 8030199C: cmpwi   r0, 0
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

label_803019A0:
    ctx->pc = 0x803019A0u;
    // 803019A0: bc    12, 2, 0x803019BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803019BC;
        }
    }

label_803019A4:
    ctx->pc = 0x803019A4u;
    ctx->downcount -= 3;
    // 803019A4: lbz     r0, 289(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(289);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803019A8:
    ctx->pc = 0x803019A8u;
    // 803019A8: cmpwi   r0, 0
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

label_803019AC:
    ctx->pc = 0x803019ACu;
    // 803019AC: bc    12, 2, 0x803019BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803019BC;
        }
    }

label_803019B0:
    ctx->pc = 0x803019B0u;
    ctx->downcount -= 3;
    // 803019B0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803019B4:
    ctx->pc = 0x803019B4u;
    // 803019B4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803019B8:
    ctx->pc = 0x803019B8u;
    // 803019B8: bl      0x803457B8
    {
            ctx->lr = 0x803019BCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803019BC:
    ctx->pc = 0x803019BCu;
    ctx->downcount -= 6;
    // 803019BC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803019C0:
    ctx->pc = 0x803019C0u;
    // 803019C0: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_803019C4:
    ctx->pc = 0x803019C4u;
    // 803019C4: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803019C8:
    ctx->pc = 0x803019C8u;
    // 803019C8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803019CC:
    ctx->pc = 0x803019CCu;
    // 803019CC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803019D0:
    ctx->pc = 0x803019D0u;
    // 803019D0: bl      0x80370BD4
    {
            ctx->lr = 0x803019D4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803019D4:
    ctx->pc = 0x803019D4u;
    ctx->downcount -= 3;
    // 803019D4: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803019D8:
    ctx->pc = 0x803019D8u;
    // 803019D8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_803019DC:
    ctx->pc = 0x803019DCu;
    // 803019DC: bl      0x80263ABC
    {
            ctx->lr = 0x803019E0u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803019E0:
    ctx->pc = 0x803019E0u;
    ctx->downcount -= 6;
    // 803019E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803019E4:
    ctx->pc = 0x803019E4u;
    // 803019E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803019E8:
    ctx->pc = 0x803019E8u;
    // 803019E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803019EC:
    ctx->pc = 0x803019ECu;
    // 803019EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803019F0:
    ctx->pc = 0x803019F0u;
    // 803019F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803019F4:
    ctx->pc = 0x803019F4u;
    ctx->downcount -= 1;
    // 803019F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803019F8:
    ctx->pc = 0x803019F8u;
    ctx->downcount -= 9;
    // 803019F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803019FC:
    ctx->pc = 0x803019FCu;
    // 803019FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301A00:
    ctx->pc = 0x80301A00u;
    // 80301A00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301A04:
    ctx->pc = 0x80301A04u;
    // 80301A04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301A08:
    ctx->pc = 0x80301A08u;
    // 80301A08: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301A0C:
    ctx->pc = 0x80301A0Cu;
    // 80301A0C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301A10:
    ctx->pc = 0x80301A10u;
    // 80301A10: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301A14:
    ctx->pc = 0x80301A14u;
    // 80301A14: cmpwi   r0, 0
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

label_80301A18:
    ctx->pc = 0x80301A18u;
    // 80301A18: bc    12, 2, 0x80301A58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301A58;
        }
    }

label_80301A1C:
    ctx->pc = 0x80301A1Cu;
    ctx->downcount -= 8;
    // 80301A1C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80301A20:
    ctx->pc = 0x80301A20u;
    // 80301A20: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301A24:
    ctx->pc = 0x80301A24u;
    // 80301A24: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80301A28:
    ctx->pc = 0x80301A28u;
    // 80301A28: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301A2C:
    ctx->pc = 0x80301A2Cu;
    // 80301A2C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80301A30:
    ctx->pc = 0x80301A30u;
    // 80301A30: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80301A34:
    ctx->pc = 0x80301A34u;
    // 80301A34: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80301A38:
    ctx->pc = 0x80301A38u;
    // 80301A38: bl      0x80370BD4
    {
            ctx->lr = 0x80301A3Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80301A3C:
    ctx->pc = 0x80301A3Cu;
    ctx->downcount -= 3;
    // 80301A3C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301A40:
    ctx->pc = 0x80301A40u;
    // 80301A40: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80301A44:
    ctx->pc = 0x80301A44u;
    // 80301A44: bl      0x80263ABC
    {
            ctx->lr = 0x80301A48u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80301A48:
    ctx->pc = 0x80301A48u;
    ctx->downcount -= 3;
    // 80301A48: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80301A4C:
    ctx->pc = 0x80301A4Cu;
    // 80301A4C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80301A50:
    ctx->pc = 0x80301A50u;
    // 80301A50: bl      0x803457B8
    {
            ctx->lr = 0x80301A54u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80301A54:
    ctx->pc = 0x80301A54u;
    ctx->downcount -= 1;
    // 80301A54: b       0x80301AA0
    {
            goto label_80301AA0;
    }

label_80301A58:
    ctx->pc = 0x80301A58u;
    ctx->downcount -= 4;
    // 80301A58: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301A5C:
    ctx->pc = 0x80301A5Cu;
    // 80301A5C: lbz     r0, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301A60:
    ctx->pc = 0x80301A60u;
    // 80301A60: cmpwi   r0, 0
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

label_80301A64:
    ctx->pc = 0x80301A64u;
    // 80301A64: bc    12, 2, 0x80301AA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301AA0;
        }
    }

label_80301A68:
    ctx->pc = 0x80301A68u;
    ctx->downcount -= 8;
    // 80301A68: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80301A6C:
    ctx->pc = 0x80301A6Cu;
    // 80301A6C: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301A70:
    ctx->pc = 0x80301A70u;
    // 80301A70: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80301A74:
    ctx->pc = 0x80301A74u;
    // 80301A74: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301A78:
    ctx->pc = 0x80301A78u;
    // 80301A78: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80301A7C:
    ctx->pc = 0x80301A7Cu;
    // 80301A7C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80301A80:
    ctx->pc = 0x80301A80u;
    // 80301A80: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80301A84:
    ctx->pc = 0x80301A84u;
    // 80301A84: bl      0x80370BD4
    {
            ctx->lr = 0x80301A88u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80301A88:
    ctx->pc = 0x80301A88u;
    ctx->downcount -= 3;
    // 80301A88: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301A8C:
    ctx->pc = 0x80301A8Cu;
    // 80301A8C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80301A90:
    ctx->pc = 0x80301A90u;
    // 80301A90: bl      0x80263ABC
    {
            ctx->lr = 0x80301A94u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80301A94:
    ctx->pc = 0x80301A94u;
    ctx->downcount -= 3;
    // 80301A94: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80301A98:
    ctx->pc = 0x80301A98u;
    // 80301A98: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80301A9C:
    ctx->pc = 0x80301A9Cu;
    // 80301A9C: bl      0x803457B8
    {
            ctx->lr = 0x80301AA0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80301AA0:
    ctx->pc = 0x80301AA0u;
    ctx->downcount -= 6;
    // 80301AA0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301AA4:
    ctx->pc = 0x80301AA4u;
    // 80301AA4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301AA8:
    ctx->pc = 0x80301AA8u;
    // 80301AA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301AAC:
    ctx->pc = 0x80301AACu;
    // 80301AAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301AB0:
    ctx->pc = 0x80301AB0u;
    // 80301AB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301AB4:
    ctx->pc = 0x80301AB4u;
    ctx->downcount -= 1;
    // 80301AB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301AB8:
    ctx->pc = 0x80301AB8u;
    ctx->downcount -= 7;
    // 80301AB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301ABC:
    ctx->pc = 0x80301ABCu;
    // 80301ABC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301AC0:
    ctx->pc = 0x80301AC0u;
    // 80301AC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301AC4:
    ctx->pc = 0x80301AC4u;
    // 80301AC4: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301AC8:
    ctx->pc = 0x80301AC8u;
    // 80301AC8: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301ACC:
    ctx->pc = 0x80301ACCu;
    // 80301ACC: cmpwi   r0, 0
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

label_80301AD0:
    ctx->pc = 0x80301AD0u;
    // 80301AD0: bc    12, 2, 0x80301AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301AF0;
        }
    }

label_80301AD4:
    ctx->pc = 0x80301AD4u;
    ctx->downcount -= 4;
    // 80301AD4: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301AD8:
    ctx->pc = 0x80301AD8u;
    // 80301AD8: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80301ADC:
    ctx->pc = 0x80301ADCu;
    // 80301ADC: cmpwi   r0, 0
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

label_80301AE0:
    ctx->pc = 0x80301AE0u;
    // 80301AE0: bc    12, 2, 0x80301AF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301AF0;
        }
    }

label_80301AE4:
    ctx->pc = 0x80301AE4u;
    ctx->downcount -= 3;
    // 80301AE4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80301AE8:
    ctx->pc = 0x80301AE8u;
    // 80301AE8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80301AEC:
    ctx->pc = 0x80301AECu;
    // 80301AEC: bl      0x803457B8
    {
            ctx->lr = 0x80301AF0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80301AF0:
    ctx->pc = 0x80301AF0u;
    ctx->downcount -= 6;
    // 80301AF0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301AF4:
    ctx->pc = 0x80301AF4u;
    // 80301AF4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80301AF8:
    ctx->pc = 0x80301AF8u;
    // 80301AF8: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80301AFC:
    ctx->pc = 0x80301AFCu;
    // 80301AFC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80301B00:
    ctx->pc = 0x80301B00u;
    // 80301B00: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80301B04:
    ctx->pc = 0x80301B04u;
    // 80301B04: bl      0x80370BD4
    {
            ctx->lr = 0x80301B08u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80301B08:
    ctx->pc = 0x80301B08u;
    ctx->downcount -= 3;
    // 80301B08: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301B0C:
    ctx->pc = 0x80301B0Cu;
    // 80301B0C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80301B10:
    ctx->pc = 0x80301B10u;
    // 80301B10: bl      0x80263ABC
    {
            ctx->lr = 0x80301B14u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80301B14:
    ctx->pc = 0x80301B14u;
    ctx->downcount -= 5;
    // 80301B14: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301B18:
    ctx->pc = 0x80301B18u;
    // 80301B18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301B1C:
    ctx->pc = 0x80301B1Cu;
    // 80301B1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301B20:
    ctx->pc = 0x80301B20u;
    // 80301B20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301B24:
    ctx->pc = 0x80301B24u;
    ctx->downcount -= 9;
    // 80301B24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301B28:
    ctx->pc = 0x80301B28u;
    // 80301B28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301B2C:
    ctx->pc = 0x80301B2Cu;
    // 80301B2C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80301B30:
    ctx->pc = 0x80301B30u;
    // 80301B30: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80301B34:
    ctx->pc = 0x80301B34u;
    // 80301B34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301B38:
    ctx->pc = 0x80301B38u;
    // 80301B38: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301B3C:
    ctx->pc = 0x80301B3Cu;
    // 80301B3C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301B40:
    ctx->pc = 0x80301B40u;
    // 80301B40: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301B44:
    ctx->pc = 0x80301B44u;
    // 80301B44: bl      0x803554B8
    {
            ctx->lr = 0x80301B48u;
            ctx->pc = 0x803554B8u;
            return;
    }

label_80301B48:
    ctx->pc = 0x80301B48u;
    ctx->downcount -= 2;
    // 80301B48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80301B4C:
    ctx->pc = 0x80301B4Cu;
    // 80301B4C: bl      0x80301B74
    {
            ctx->lr = 0x80301B50u;
            goto label_80301B74;
    }

label_80301B50:
    ctx->pc = 0x80301B50u;
    ctx->downcount -= 4;
    // 80301B50: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301B54:
    ctx->pc = 0x80301B54u;
    // 80301B54: lwz     r4, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301B58:
    ctx->pc = 0x80301B58u;
    // 80301B58: lwz     r5, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301B5C:
    ctx->pc = 0x80301B5Cu;
    // 80301B5C: bl      0x80303130
    {
            ctx->lr = 0x80301B60u;
            goto label_80303130;
    }

label_80301B60:
    ctx->pc = 0x80301B60u;
    ctx->downcount -= 6;
    // 80301B60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301B64:
    ctx->pc = 0x80301B64u;
    // 80301B64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80301B68:
    ctx->pc = 0x80301B68u;
    // 80301B68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301B6C:
    ctx->pc = 0x80301B6Cu;
    // 80301B6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301B70:
    ctx->pc = 0x80301B70u;
    // 80301B70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301B74:
    ctx->pc = 0x80301B74u;
    ctx->downcount -= 17;
    // 80301B74: stwu     r1, -672(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-672);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301B78:
    ctx->pc = 0x80301B78u;
    // 80301B78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301B7C:
    ctx->pc = 0x80301B7Cu;
    // 80301B7C: stw     r0, 676(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(676);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301B80:
    ctx->pc = 0x80301B80u;
    // 80301B80: stmw     r29, 660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(660);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301B84:
    ctx->pc = 0x80301B84u;
    // 80301B84: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301B88:
    ctx->pc = 0x80301B88u;
    // 80301B88: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301B8C:
    ctx->pc = 0x80301B8Cu;
    // 80301B8C: bl      0x80300F58
    {
            ctx->lr = 0x80301B90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300F58u;
                return;
            }
            goto label_80300F58;
    }

label_80301B90:
    ctx->pc = 0x80301B90u;
    ctx->downcount -= 5;
    // 80301B90: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80301B94:
    ctx->pc = 0x80301B94u;
    // 80301B94: addi    r5, r1, 172
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(172);

label_80301B98:
    ctx->pc = 0x80301B98u;
    // 80301B98: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_80301B9C:
    ctx->pc = 0x80301B9Cu;
    // 80301B9C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80301BA0:
    loop_80301BA0(ctx);
    if (ctx->pc == 0x80301BB4u) goto label_80301BB4;
    return;
label_80301BA4:
    ctx->pc = 0x80301BA4u;
    // 80301BA4: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80301BA8:
    ctx->pc = 0x80301BA8u;
    // 80301BA8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301BAC:
    ctx->pc = 0x80301BACu;
    // 80301BAC: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80301BB0:
    // 80301BB0: bc    16, 0, 0x80301BA0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301BA0u;
                return;
            }
            goto label_80301BA0;
        }
    }

label_80301BB4:
    ctx->pc = 0x80301BB4u;
    ctx->downcount -= 14;
    // 80301BB4: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301BB8:
    ctx->pc = 0x80301BB8u;
    // 80301BB8: addi    r4, r1, 188
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(188);

label_80301BBC:
    ctx->pc = 0x80301BBCu;
    // 80301BBC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301BC0:
    ctx->pc = 0x80301BC0u;
    // 80301BC0: addi    r3, r1, 192
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(192);

label_80301BC4:
    ctx->pc = 0x80301BC4u;
    // 80301BC4: addi    r6, r1, 48
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(48);

label_80301BC8:
    ctx->pc = 0x80301BC8u;
    // 80301BC8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80301BCC:
    ctx->pc = 0x80301BCCu;
    // 80301BCC: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301BD0:
    ctx->pc = 0x80301BD0u;
    // 80301BD0: li      r7, 64
    ctx->gpr[7] = (u32)(s32)(64);

label_80301BD4:
    ctx->pc = 0x80301BD4u;
    // 80301BD4: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_80301BD8:
    ctx->pc = 0x80301BD8u;
    // 80301BD8: lwzx    r30, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80301BDC:
    ctx->pc = 0x80301BDCu;
    // 80301BDC: lwzx    r29, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80301BE0:
    ctx->pc = 0x80301BE0u;
    // 80301BE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301BE4:
    ctx->pc = 0x80301BE4u;
    // 80301BE4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80301BE8:
    ctx->pc = 0x80301BE8u;
    // 80301BE8: bl      0x802C3574
    {
            ctx->lr = 0x80301BECu;
            ctx->pc = 0x802C3574u;
            return;
    }

label_80301BEC:
    ctx->pc = 0x80301BECu;
    ctx->downcount -= 3;
    // 80301BEC: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301BF0:
    ctx->pc = 0x80301BF0u;
    // 80301BF0: addi    r4, r1, 48
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(48);

label_80301BF4:
    ctx->pc = 0x80301BF4u;
    // 80301BF4: bl      0x803030D4
    {
            ctx->lr = 0x80301BF8u;
            goto label_803030D4;
    }

label_80301BF8:
    ctx->pc = 0x80301BF8u;
    ctx->downcount -= 3;
    // 80301BF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301BFC:
    ctx->pc = 0x80301BFCu;
    // 80301BFC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80301C00:
    ctx->pc = 0x80301C00u;
    // 80301C00: bl      0x80276B6C
    {
            ctx->lr = 0x80301C04u;
            ctx->pc = 0x80276B6Cu;
            return;
    }

label_80301C04:
    ctx->pc = 0x80301C04u;
    ctx->downcount -= 5;
    // 80301C04: li      r0, 49
    ctx->gpr[0] = (u32)(s32)(49);

label_80301C08:
    ctx->pc = 0x80301C08u;
    // 80301C08: addi    r5, r1, 260
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(260);

label_80301C0C:
    ctx->pc = 0x80301C0Cu;
    // 80301C0C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_80301C10:
    ctx->pc = 0x80301C10u;
    // 80301C10: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80301C14:
    loop_80301C14(ctx);
    if (ctx->pc == 0x80301C28u) goto label_80301C28;
    return;
label_80301C18:
    ctx->pc = 0x80301C18u;
    // 80301C18: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80301C1C:
    ctx->pc = 0x80301C1Cu;
    // 80301C1C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301C20:
    ctx->pc = 0x80301C20u;
    // 80301C20: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80301C24:
    // 80301C24: bc    16, 0, 0x80301C14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301C14u;
                return;
            }
            goto label_80301C14;
        }
    }

label_80301C28:
    ctx->pc = 0x80301C28u;
    ctx->downcount -= 8;
    // 80301C28: lwz     r4, 608(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(608);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301C2C:
    ctx->pc = 0x80301C2Cu;
    // 80301C2C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301C30:
    ctx->pc = 0x80301C30u;
    // 80301C30: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80301C34:
    ctx->pc = 0x80301C34u;
    // 80301C34: lbz     r5, 604(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(604);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80301C38:
    ctx->pc = 0x80301C38u;
    // 80301C38: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80301C3C:
    ctx->pc = 0x80301C3Cu;
    // 80301C3C: lbz     r6, 605(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(605);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80301C40:
    ctx->pc = 0x80301C40u;
    // 80301C40: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80301C44:
    ctx->pc = 0x80301C44u;
    // 80301C44: bl      0x80302FD0
    {
            ctx->lr = 0x80301C48u;
            goto label_80302FD0;
    }

label_80301C48:
    ctx->pc = 0x80301C48u;
    ctx->downcount -= 10;
    // 80301C48: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301C4C:
    ctx->pc = 0x80301C4Cu;
    // 80301C4C: addi    r0, r1, 236
    ctx->gpr[0] = ctx->gpr[1] + (u32)(s32)(236);

label_80301C50:
    ctx->pc = 0x80301C50u;
    // 80301C50: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80301C54:
    ctx->pc = 0x80301C54u;
    // 80301C54: rlwinm r4, r4, 3, 0, 28
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 3u) & 0xFFFFFFF8u;
    }

label_80301C58:
    ctx->pc = 0x80301C58u;
    // 80301C58: add   r5, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80301C5C:
    ctx->pc = 0x80301C5Cu;
    // 80301C5C: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301C60:
    ctx->pc = 0x80301C60u;
    // 80301C60: lwz     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301C64:
    ctx->pc = 0x80301C64u;
    // 80301C64: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80301C68:
    ctx->pc = 0x80301C68u;
    // 80301C68: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301C6C:
    ctx->pc = 0x80301C6Cu;
    // 80301C6C: bl      0x80262114
    {
            ctx->lr = 0x80301C70u;
            ctx->pc = 0x80262114u;
            return;
    }

label_80301C70:
    ctx->pc = 0x80301C70u;
    ctx->downcount -= 3;
    // 80301C70: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301C74:
    ctx->pc = 0x80301C74u;
    // 80301C74: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80301C78:
    ctx->pc = 0x80301C78u;
    // 80301C78: bl      0x8024C7C4
    {
            ctx->lr = 0x80301C7Cu;
            ctx->pc = 0x8024C7C4u;
            return;
    }

label_80301C7C:
    ctx->pc = 0x80301C7Cu;
    ctx->downcount -= 5;
    // 80301C7C: lwz     r5, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301C80:
    ctx->pc = 0x80301C80u;
    // 80301C80: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80301C84:
    ctx->pc = 0x80301C84u;
    // 80301C84: lwz     r6, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80301C88:
    ctx->pc = 0x80301C88u;
    // 80301C88: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80301C8C:
    ctx->pc = 0x80301C8Cu;
    // 80301C8C: bl      0x8023C574
    {
            ctx->lr = 0x80301C90u;
            ctx->pc = 0x8023C574u;
            return;
    }

label_80301C90:
    ctx->pc = 0x80301C90u;
    ctx->downcount -= 2;
    // 80301C90: cmpwi   r3, 0
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

label_80301C94:
    ctx->pc = 0x80301C94u;
    // 80301C94: bc    12, 2, 0x80301CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301CA8;
        }
    }

label_80301C98:
    ctx->pc = 0x80301C98u;
    ctx->downcount -= 3;
    // 80301C98: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301C9C:
    ctx->pc = 0x80301C9Cu;
    // 80301C9C: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301CA0:
    ctx->pc = 0x80301CA0u;
    // 80301CA0: bl      0x80302F74
    {
            ctx->lr = 0x80301CA4u;
            goto label_80302F74;
    }

label_80301CA4:
    ctx->pc = 0x80301CA4u;
    ctx->downcount -= 1;
    // 80301CA4: b       0x80301CB8
    {
            goto label_80301CB8;
    }

label_80301CA8:
    ctx->pc = 0x80301CA8u;
    ctx->downcount -= 4;
    // 80301CA8: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80301CAC:
    ctx->pc = 0x80301CACu;
    // 80301CAC: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301CB0:
    ctx->pc = 0x80301CB0u;
    // 80301CB0: addi    r4, r4, 25768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25768);

label_80301CB4:
    ctx->pc = 0x80301CB4u;
    // 80301CB4: bl      0x80302F74
    {
            ctx->lr = 0x80301CB8u;
            goto label_80302F74;
    }

label_80301CB8:
    ctx->pc = 0x80301CB8u;
    ctx->downcount -= 6;
    // 80301CB8: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301CBC:
    ctx->pc = 0x80301CBCu;
    // 80301CBC: addi    r4, r1, 212
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(212);

label_80301CC0:
    ctx->pc = 0x80301CC0u;
    // 80301CC0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80301CC4:
    ctx->pc = 0x80301CC4u;
    // 80301CC4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80301CC8:
    ctx->pc = 0x80301CC8u;
    // 80301CC8: lwzx    r29, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80301CCC:
    ctx->pc = 0x80301CCCu;
    // 80301CCC: bl      0x80301D40
    {
            ctx->lr = 0x80301CD0u;
            goto label_80301D40;
    }

label_80301CD0:
    ctx->pc = 0x80301CD0u;
    ctx->downcount -= 4;
    // 80301CD0: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301CD4:
    ctx->pc = 0x80301CD4u;
    // 80301CD4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80301CD8:
    ctx->pc = 0x80301CD8u;
    // 80301CD8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80301CDC:
    ctx->pc = 0x80301CDCu;
    // 80301CDC: bl      0x80317314
    {
            ctx->lr = 0x80301CE0u;
            ctx->pc = 0x80317314u;
            return;
    }

label_80301CE0:
    ctx->pc = 0x80301CE0u;
    ctx->downcount -= 3;
    // 80301CE0: cmpwi   r3, 0
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

label_80301CE4:
    ctx->pc = 0x80301CE4u;
    // 80301CE4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301CE8:
    ctx->pc = 0x80301CE8u;
    // 80301CE8: bc    12, 2, 0x80301CF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301CF4;
        }
    }

label_80301CEC:
    ctx->pc = 0x80301CECu;
    ctx->downcount -= 2;
    // 80301CEC: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301CF0:
    ctx->pc = 0x80301CF0u;
    // 80301CF0: bl      0x80302F30
    {
            ctx->lr = 0x80301CF4u;
            goto label_80302F30;
    }

label_80301CF4:
    ctx->pc = 0x80301CF4u;
    ctx->downcount -= 6;
    // 80301CF4: lwz     r0, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301CF8:
    ctx->pc = 0x80301CF8u;
    // 80301CF8: addi    r4, r1, 224
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(224);

label_80301CFC:
    ctx->pc = 0x80301CFCu;
    // 80301CFC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80301D00:
    ctx->pc = 0x80301D00u;
    // 80301D00: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80301D04:
    ctx->pc = 0x80301D04u;
    // 80301D04: lwzx    r29, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80301D08:
    ctx->pc = 0x80301D08u;
    // 80301D08: bl      0x80301D40
    {
            ctx->lr = 0x80301D0Cu;
            goto label_80301D40;
    }

label_80301D0C:
    ctx->pc = 0x80301D0Cu;
    ctx->downcount -= 3;
    // 80301D0C: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301D10:
    ctx->pc = 0x80301D10u;
    // 80301D10: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80301D14:
    ctx->pc = 0x80301D14u;
    // 80301D14: bl      0x8031AA7C
    {
            ctx->lr = 0x80301D18u;
            ctx->pc = 0x8031AA7Cu;
            return;
    }

label_80301D18:
    ctx->pc = 0x80301D18u;
    ctx->downcount -= 3;
    // 80301D18: cmpwi   r3, 0
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

label_80301D1C:
    ctx->pc = 0x80301D1Cu;
    // 80301D1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301D20:
    ctx->pc = 0x80301D20u;
    // 80301D20: bc    12, 2, 0x80301D2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301D2C;
        }
    }

label_80301D24:
    ctx->pc = 0x80301D24u;
    ctx->downcount -= 2;
    // 80301D24: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301D28:
    ctx->pc = 0x80301D28u;
    // 80301D28: bl      0x80302EEC
    {
            ctx->lr = 0x80301D2Cu;
            goto label_80302EEC;
    }

label_80301D2C:
    ctx->pc = 0x80301D2Cu;
    ctx->downcount -= 16;
    // 80301D2C: lmw     r29, 660(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(660);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301D30:
    ctx->pc = 0x80301D30u;
    // 80301D30: lwz     r0, 676(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(676);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301D34:
    ctx->pc = 0x80301D34u;
    // 80301D34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301D38:
    ctx->pc = 0x80301D38u;
    // 80301D38: addi    r1, r1, 672
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(672);

label_80301D3C:
    ctx->pc = 0x80301D3Cu;
    // 80301D3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301D40:
    ctx->pc = 0x80301D40u;
    ctx->downcount -= 2;
    // 80301D40: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301D44:
    ctx->pc = 0x80301D44u;
    // 80301D44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301D48:
    ctx->pc = 0x80301D48u;
    ctx->downcount -= 21;
    // 80301D48: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301D4C:
    ctx->pc = 0x80301D4Cu;
    // 80301D4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301D50:
    ctx->pc = 0x80301D50u;
    // 80301D50: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301D54:
    ctx->pc = 0x80301D54u;
    // 80301D54: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301D58:
    ctx->pc = 0x80301D58u;
    // 80301D58: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_80301D5C:
    ctx->pc = 0x80301D5Cu;
    // 80301D5C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301D60:
    ctx->pc = 0x80301D60u;
    // 80301D60: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80301D64:
    ctx->pc = 0x80301D64u;
    // 80301D64: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80301D68:
    ctx->pc = 0x80301D68u;
    // 80301D68: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80301D6C:
    ctx->pc = 0x80301D6Cu;
    // 80301D6C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80301D70:
    ctx->pc = 0x80301D70u;
    // 80301D70: bl      0x80370BD4
    {
            ctx->lr = 0x80301D74u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80301D74:
    ctx->pc = 0x80301D74u;
    ctx->downcount -= 7;
    // 80301D74: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301D78:
    ctx->pc = 0x80301D78u;
    // 80301D78: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80301D7C:
    ctx->pc = 0x80301D7Cu;
    // 80301D7C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301D80:
    ctx->pc = 0x80301D80u;
    // 80301D80: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301D84:
    ctx->pc = 0x80301D84u;
    // 80301D84: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80301D88:
    ctx->pc = 0x80301D88u;
    // 80301D88: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80301D8Cu;
            ctx->pc = target;
            return;
        }
    }

label_80301D8C:
    ctx->pc = 0x80301D8Cu;
    ctx->downcount -= 5;
    // 80301D8C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301D90:
    ctx->pc = 0x80301D90u;
    // 80301D90: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301D94:
    ctx->pc = 0x80301D94u;
    // 80301D94: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80301D98:
    ctx->pc = 0x80301D98u;
    // 80301D98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80301D9C:
    ctx->pc = 0x80301D9Cu;
    // 80301D9C: bl      0x8027714C
    {
            ctx->lr = 0x80301DA0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80301DA0:
    ctx->pc = 0x80301DA0u;
    ctx->downcount -= 5;
    // 80301DA0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301DA4:
    ctx->pc = 0x80301DA4u;
    // 80301DA4: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_80301DA8:
    ctx->pc = 0x80301DA8u;
    // 80301DA8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80301DAC:
    ctx->pc = 0x80301DACu;
    // 80301DAC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80301DB0:
    ctx->pc = 0x80301DB0u;
    // 80301DB0: bl      0x80370BD4
    {
            ctx->lr = 0x80301DB4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80301DB4:
    ctx->pc = 0x80301DB4u;
    ctx->downcount -= 7;
    // 80301DB4: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80301DB8:
    ctx->pc = 0x80301DB8u;
    // 80301DB8: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80301DBC:
    ctx->pc = 0x80301DBCu;
    // 80301DBC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301DC0:
    ctx->pc = 0x80301DC0u;
    // 80301DC0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80301DC4:
    ctx->pc = 0x80301DC4u;
    // 80301DC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80301DC8:
    ctx->pc = 0x80301DC8u;
    // 80301DC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80301DCCu;
            ctx->pc = target;
            return;
        }
    }

label_80301DCC:
    ctx->pc = 0x80301DCCu;
    ctx->downcount -= 5;
    // 80301DCC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301DD0:
    ctx->pc = 0x80301DD0u;
    // 80301DD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301DD4:
    ctx->pc = 0x80301DD4u;
    // 80301DD4: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_80301DD8:
    ctx->pc = 0x80301DD8u;
    // 80301DD8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80301DDC:
    ctx->pc = 0x80301DDCu;
    // 80301DDC: bl      0x8027714C
    {
            ctx->lr = 0x80301DE0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80301DE0:
    ctx->pc = 0x80301DE0u;
    ctx->downcount -= 16;
    // 80301DE0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301DE4:
    ctx->pc = 0x80301DE4u;
    // 80301DE4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301DE8:
    ctx->pc = 0x80301DE8u;
    // 80301DE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301DEC:
    ctx->pc = 0x80301DECu;
    // 80301DEC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80301DF0:
    ctx->pc = 0x80301DF0u;
    // 80301DF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301DF4:
    ctx->pc = 0x80301DF4u;
    ctx->downcount -= 7;
    // 80301DF4: stw     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80301DF8:
    ctx->pc = 0x80301DF8u;
    // 80301DF8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80301DFC:
    ctx->pc = 0x80301DFCu;
    // 80301DFC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301E00:
    ctx->pc = 0x80301E00u;
    // 80301E00: stw     r0, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301E04:
    ctx->pc = 0x80301E04u;
    // 80301E04: stw     r5, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80301E08:
    ctx->pc = 0x80301E08u;
    // 80301E08: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80301E0C:
    ctx->pc = 0x80301E0Cu;
    // 80301E0C: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_80301E10:
    ctx->pc = 0x80301E10u;
    ctx->downcount -= 20;
    // 80301E10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301E14:
    ctx->pc = 0x80301E14u;
    // 80301E14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301E18:
    ctx->pc = 0x80301E18u;
    // 80301E18: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80301E1C:
    ctx->pc = 0x80301E1Cu;
    // 80301E1C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80301E20:
    ctx->pc = 0x80301E20u;
    // 80301E20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301E24:
    ctx->pc = 0x80301E24u;
    // 80301E24: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301E28:
    ctx->pc = 0x80301E28u;
    // 80301E28: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_80301E2C:
    ctx->pc = 0x80301E2Cu;
    // 80301E2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301E30:
    ctx->pc = 0x80301E30u;
    // 80301E30: addi    r31, r31, 25160
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(25160);

label_80301E34:
    ctx->pc = 0x80301E34u;
    // 80301E34: bl      0x803020FC
    {
            ctx->lr = 0x80301E38u;
            goto label_803020FC;
    }

label_80301E38:
    ctx->pc = 0x80301E38u;
    ctx->downcount -= 10;
    // 80301E38: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80301E3C:
    ctx->pc = 0x80301E3Cu;
    // 80301E3C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80301E40:
    ctx->pc = 0x80301E40u;
    // 80301E40: addi    r4, r4, 25296
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25296);

label_80301E44:
    ctx->pc = 0x80301E44u;
    // 80301E44: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80301E48:
    ctx->pc = 0x80301E48u;
    // 80301E48: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80301E4C:
    ctx->pc = 0x80301E4Cu;
    // 80301E4C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_80301E50:
    ctx->pc = 0x80301E50u;
    // 80301E50: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301E54:
    ctx->pc = 0x80301E54u;
    // 80301E54: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_80301E58:
    ctx->pc = 0x80301E58u;
    // 80301E58: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80301E5C:
    ctx->pc = 0x80301E5Cu;
    // 80301E5C: bl      0x8030201C
    {
            ctx->lr = 0x80301E60u;
            goto label_8030201C;
    }

label_80301E60:
    ctx->pc = 0x80301E60u;
    ctx->downcount -= 5;
    // 80301E60: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80301E64:
    ctx->pc = 0x80301E64u;
    // 80301E64: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_80301E68:
    ctx->pc = 0x80301E68u;
    // 80301E68: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_80301E6C:
    ctx->pc = 0x80301E6Cu;
    // 80301E6C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80301E70:
    ctx->pc = 0x80301E70u;
    // 80301E70: bl      0x8030201C
    {
            ctx->lr = 0x80301E74u;
            goto label_8030201C;
    }

label_80301E74:
    ctx->pc = 0x80301E74u;
    ctx->downcount -= 5;
    // 80301E74: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80301E78:
    ctx->pc = 0x80301E78u;
    // 80301E78: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_80301E7C:
    ctx->pc = 0x80301E7Cu;
    // 80301E7C: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_80301E80:
    ctx->pc = 0x80301E80u;
    // 80301E80: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_80301E84:
    ctx->pc = 0x80301E84u;
    // 80301E84: bl      0x8030201C
    {
            ctx->lr = 0x80301E88u;
            goto label_8030201C;
    }

label_80301E88:
    ctx->pc = 0x80301E88u;
    ctx->downcount -= 5;
    // 80301E88: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80301E8C:
    ctx->pc = 0x80301E8Cu;
    // 80301E8C: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_80301E90:
    ctx->pc = 0x80301E90u;
    // 80301E90: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_80301E94:
    ctx->pc = 0x80301E94u;
    // 80301E94: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_80301E98:
    ctx->pc = 0x80301E98u;
    // 80301E98: bl      0x8030201C
    {
            ctx->lr = 0x80301E9Cu;
            goto label_8030201C;
    }

label_80301E9C:
    ctx->pc = 0x80301E9Cu;
    ctx->downcount -= 2;
    // 80301E9C: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_80301EA0:
    ctx->pc = 0x80301EA0u;
    // 80301EA0: bl      0x801C1C48
    {
            ctx->lr = 0x80301EA4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80301EA4:
    ctx->pc = 0x80301EA4u;
    ctx->downcount -= 2;
    // 80301EA4: cmpwi   r3, 0
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

label_80301EA8:
    ctx->pc = 0x80301EA8u;
    // 80301EA8: bc    12, 2, 0x80301EB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301EB4;
        }
    }

label_80301EAC:
    ctx->pc = 0x80301EACu;
    ctx->downcount -= 2;
    // 80301EAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301EB0:
    ctx->pc = 0x80301EB0u;
    // 80301EB0: bl      0x803554FC
    {
            ctx->lr = 0x80301EB4u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_80301EB4:
    ctx->pc = 0x80301EB4u;
    ctx->downcount -= 3;
    // 80301EB4: stw     r3, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301EB8:
    ctx->pc = 0x80301EB8u;
    // 80301EB8: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_80301EBC:
    ctx->pc = 0x80301EBCu;
    // 80301EBC: bl      0x801C1C48
    {
            ctx->lr = 0x80301EC0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80301EC0:
    ctx->pc = 0x80301EC0u;
    ctx->downcount -= 2;
    // 80301EC0: cmpwi   r3, 0
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

label_80301EC4:
    ctx->pc = 0x80301EC4u;
    // 80301EC4: bc    12, 2, 0x80301ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301ECC;
        }
    }

label_80301EC8:
    ctx->pc = 0x80301EC8u;
    ctx->downcount -= 1;
    // 80301EC8: bl      0x803031E8
    {
            ctx->lr = 0x80301ECCu;
            ctx->pc = 0x803031E8u;
            return;
    }

label_80301ECC:
    ctx->pc = 0x80301ECCu;
    ctx->downcount -= 4;
    // 80301ECC: stw     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80301ED0:
    ctx->pc = 0x80301ED0u;
    // 80301ED0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301ED4:
    ctx->pc = 0x80301ED4u;
    // 80301ED4: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301ED8:
    ctx->pc = 0x80301ED8u;
    // 80301ED8: bl      0x802A6408
    {
            ctx->lr = 0x80301EDCu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80301EDC:
    ctx->pc = 0x80301EDCu;
    ctx->downcount -= 3;
    // 80301EDC: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80301EE0:
    ctx->pc = 0x80301EE0u;
    // 80301EE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301EE4:
    ctx->pc = 0x80301EE4u;
    // 80301EE4: bl      0x802A6408
    {
            ctx->lr = 0x80301EE8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80301EE8:
    ctx->pc = 0x80301EE8u;
    ctx->downcount -= 21;
    // 80301EE8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80301EEC:
    ctx->pc = 0x80301EECu;
    // 80301EEC: stw     r0, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301EF0:
    ctx->pc = 0x80301EF0u;
    // 80301EF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301EF4:
    ctx->pc = 0x80301EF4u;
    // 80301EF4: stw     r0, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301EF8:
    ctx->pc = 0x80301EF8u;
    // 80301EF8: stw     r0, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301EFC:
    ctx->pc = 0x80301EFCu;
    // 80301EFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301F00:
    ctx->pc = 0x80301F00u;
    // 80301F00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301F04:
    ctx->pc = 0x80301F04u;
    // 80301F04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301F08:
    ctx->pc = 0x80301F08u;
    // 80301F08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301F0C:
    ctx->pc = 0x80301F0Cu;
    // 80301F0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301F10:
    ctx->pc = 0x80301F10u;
    ctx->downcount -= 18;
    // 80301F10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301F14:
    ctx->pc = 0x80301F14u;
    // 80301F14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301F18:
    // 80301F18: cmpwi   r3, 0
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

label_80301F1C:
    ctx->pc = 0x80301F1Cu;
    // 80301F1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301F20:
    ctx->pc = 0x80301F20u;
    // 80301F20: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301F24:
    // 80301F24: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301F28:
    // 80301F28: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301F2C:
    // 80301F2C: bc    12, 2, 0x80301F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301F5C;
        }
    }

label_80301F30:
    ctx->downcount -= 1;
    // 80301F30: bc    12, 2, 0x80301F4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301F4C;
        }
    }

label_80301F34:
    ctx->downcount -= 3;
    // 80301F34: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80301F38:
    // 80301F38: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80301F3C:
    // 80301F3C: bl      0x80301FDC
    {
            ctx->lr = 0x80301F40u;
            goto label_80301FDC;
    }

label_80301F40:
    ctx->downcount -= 3;
    // 80301F40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301F44:
    // 80301F44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301F48:
    // 80301F48: bl      0x801ED118
    {
            ctx->lr = 0x80301F4Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80301F4C:
    ctx->downcount -= 2;
    // 80301F4C: cmpwi   r31, 0
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

label_80301F50:
    // 80301F50: bc    4, 1, 0x80301F5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301F5C;
        }
    }

label_80301F54:
    ctx->downcount -= 2;
    // 80301F54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301F58:
    // 80301F58: bl      0x801C1C90
    {
            ctx->lr = 0x80301F5Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80301F5C:
    ctx->downcount -= 17;
    // 80301F5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301F60:
    ctx->pc = 0x80301F60u;
    // 80301F60: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301F64:
    ctx->pc = 0x80301F64u;
    // 80301F64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301F68:
    ctx->pc = 0x80301F68u;
    // 80301F68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301F6C:
    // 80301F6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301F70:
    ctx->pc = 0x80301F70u;
    // 80301F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301F74:
    ctx->pc = 0x80301F74u;
    ctx->downcount -= 18;
    // 80301F74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301F78:
    ctx->pc = 0x80301F78u;
    // 80301F78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301F7C:
    // 80301F7C: cmpwi   r3, 0
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

label_80301F80:
    ctx->pc = 0x80301F80u;
    // 80301F80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301F84:
    ctx->pc = 0x80301F84u;
    // 80301F84: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80301F88:
    // 80301F88: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301F8C:
    // 80301F8C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80301F90:
    // 80301F90: bc    12, 2, 0x80301FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301FC4;
        }
    }

label_80301F94:
    ctx->downcount -= 1;
    // 80301F94: bc    12, 2, 0x80301FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301FB4;
        }
    }

label_80301F98:
    ctx->downcount -= 1;
    // 80301F98: bc    12, 2, 0x80301FB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80301FB4;
        }
    }

label_80301F9C:
    ctx->downcount -= 3;
    // 80301F9C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301FA0:
    // 80301FA0: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_80301FA4:
    // 80301FA4: bl      0x801ED098
    {
            ctx->lr = 0x80301FA8u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_80301FA8:
    ctx->downcount -= 3;
    // 80301FA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301FAC:
    // 80301FAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80301FB0:
    // 80301FB0: bl      0x801ED058
    {
            ctx->lr = 0x80301FB4u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_80301FB4:
    ctx->downcount -= 2;
    // 80301FB4: cmpwi   r31, 0
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

label_80301FB8:
    // 80301FB8: bc    4, 1, 0x80301FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80301FC4;
        }
    }

label_80301FBC:
    ctx->downcount -= 2;
    // 80301FBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301FC0:
    // 80301FC0: bl      0x801C1C90
    {
            ctx->lr = 0x80301FC4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80301FC4:
    ctx->downcount -= 17;
    // 80301FC4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80301FC8:
    ctx->pc = 0x80301FC8u;
    // 80301FC8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80301FCC:
    ctx->pc = 0x80301FCCu;
    // 80301FCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80301FD0:
    ctx->pc = 0x80301FD0u;
    // 80301FD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80301FD4:
    // 80301FD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80301FD8:
    ctx->pc = 0x80301FD8u;
    // 80301FD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80301FDC:
    ctx->pc = 0x80301FDCu;
    ctx->downcount -= 7;
    // 80301FDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80301FE0:
    ctx->pc = 0x80301FE0u;
    // 80301FE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80301FE4:
    // 80301FE4: cmpwi   r3, 0
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

label_80301FE8:
    ctx->pc = 0x80301FE8u;
    // 80301FE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80301FEC:
    ctx->pc = 0x80301FECu;
    // 80301FEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80301FF0:
    // 80301FF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80301FF4:
    // 80301FF4: bc    12, 2, 0x80302004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302004;
        }
    }

label_80301FF8:
    ctx->downcount -= 2;
    // 80301FF8: cmpwi   r4, 0
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

label_80301FFC:
    // 80301FFC: bc    4, 1, 0x80302004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302004;
        }
    }

label_80302000:
    ctx->downcount -= 1;
    // 80302000: bl      0x801C1C90
    {
            ctx->lr = 0x80302004u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80302004:
    ctx->downcount -= 7;
    // 80302004: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302008:
    ctx->pc = 0x80302008u;
    // 80302008: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030200C:
    ctx->pc = 0x8030200Cu;
    // 8030200C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302010:
    ctx->pc = 0x80302010u;
    // 80302010: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302014:
    // 80302014: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302018:
    ctx->pc = 0x80302018u;
    // 80302018: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_8030201C:
    ctx->pc = 0x8030201Cu;
    ctx->downcount -= 20;
    // 8030201C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302020:
    ctx->pc = 0x80302020u;
    // 80302020: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302024:
    ctx->pc = 0x80302024u;
    // 80302024: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302028:
    ctx->pc = 0x80302028u;
    // 80302028: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030202C:
    // 8030202C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80302030:
    // 80302030: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302034:
    // 80302034: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302038:
    // 80302038: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030203C:
    // 8030203C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302040:
    // 80302040: bl      0x803456D0
    {
            ctx->lr = 0x80302044u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80302044:
    ctx->downcount -= 34;
    // 80302044: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80302048:
    ctx->pc = 0x80302048u;
    // 80302048: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030204C:
    ctx->pc = 0x8030204Cu;
    // 8030204C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302050:
    ctx->pc = 0x80302050u;
    // 80302050: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302054:
    // 80302054: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302058:
    ctx->pc = 0x80302058u;
    // 80302058: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030205C:
    ctx->pc = 0x8030205Cu;
    // 8030205C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302060:
    ctx->pc = 0x80302060u;
    // 80302060: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302064:
    ctx->pc = 0x80302064u;
    // 80302064: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302068:
    ctx->pc = 0x80302068u;
    // 80302068: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030206C:
    ctx->pc = 0x8030206Cu;
    // 8030206C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302070:
    ctx->pc = 0x80302070u;
    // 80302070: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302074:
    ctx->pc = 0x80302074u;
    // 80302074: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302078:
    ctx->pc = 0x80302078u;
    // 80302078: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_8030207C:
    ctx->pc = 0x8030207Cu;
    // 8030207C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302080:
    ctx->pc = 0x80302080u;
    // 80302080: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302084:
    ctx->pc = 0x80302084u;
    // 80302084: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302088:
    ctx->pc = 0x80302088u;
    // 80302088: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030208C:
    ctx->pc = 0x8030208Cu;
    // 8030208C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302090:
    // 80302090: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80302094:
    ctx->pc = 0x80302094u;
    // 80302094: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302098:
    ctx->downcount -= 2;
    // 80302098: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030209C:
    ctx->pc = 0x8030209Cu;
    // 8030209C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803020A0:
    ctx->downcount -= 2;
    // 803020A0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803020A4:
    ctx->pc = 0x803020A4u;
    // 803020A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803020A8:
    ctx->pc = 0x803020A8u;
    ctx->downcount -= 10;
    // 803020A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803020AC:
    ctx->pc = 0x803020ACu;
    // 803020AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803020B0:
    ctx->pc = 0x803020B0u;
    // 803020B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803020B4:
    ctx->pc = 0x803020B4u;
    // 803020B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803020B8:
    // 803020B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803020BC:
    ctx->pc = 0x803020BCu;
    // 803020BC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803020C0:
    ctx->pc = 0x803020C0u;
    // 803020C0: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803020C4:
    ctx->pc = 0x803020C4u;
    // 803020C4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803020C8:
    ctx->pc = 0x803020C8u;
    // 803020C8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803020CCu;
            ctx->pc = target;
            return;
        }
    }

label_803020CC:
    ctx->downcount -= 2;
    // 803020CC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803020D0:
    // 803020D0: bl      0x80302404
    {
            ctx->lr = 0x803020D4u;
            goto label_80302404;
    }

label_803020D4:
    ctx->pc = 0x803020D4u;
    ctx->downcount -= 6;
    // 803020D4: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803020D8:
    // 803020D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803020DC:
    ctx->pc = 0x803020DCu;
    // 803020DC: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803020E0:
    ctx->pc = 0x803020E0u;
    // 803020E0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803020E4:
    ctx->pc = 0x803020E4u;
    // 803020E4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803020E8u;
            ctx->pc = target;
            return;
        }
    }

label_803020E8:
    ctx->pc = 0x803020E8u;
    ctx->downcount -= 6;
    // 803020E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803020EC:
    ctx->pc = 0x803020ECu;
    // 803020EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803020F0:
    ctx->pc = 0x803020F0u;
    // 803020F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803020F4:
    // 803020F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803020F8:
    ctx->pc = 0x803020F8u;
    // 803020F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803020FC:
    ctx->pc = 0x803020FCu;
    ctx->downcount -= 21;
    // 803020FC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302100:
    ctx->pc = 0x80302100u;
    // 80302100: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302104:
    ctx->pc = 0x80302104u;
    // 80302104: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302108:
    ctx->pc = 0x80302108u;
    // 80302108: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030210C:
    // 8030210C: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_80302110:
    // 80302110: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80302114:
    // 80302114: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302118:
    // 80302118: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030211C:
    // 8030211C: addi    r30, r30, 25160
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(25160);

label_80302120:
    // 80302120: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302124:
    // 80302124: bl      0x802A6748
    {
            ctx->lr = 0x80302128u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_80302128:
    ctx->downcount -= 7;
    // 80302128: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_8030212C:
    // 8030212C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80302130:
    // 80302130: addi    r4, r4, 25608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(25608);

label_80302134:
    ctx->pc = 0x80302134u;
    // 80302134: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302138:
    // 80302138: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030213C:
    ctx->pc = 0x8030213Cu;
    // 8030213C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302140:
    // 80302140: bl      0x801ED17C
    {
            ctx->lr = 0x80302144u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_80302144:
    ctx->downcount -= 6;
    // 80302144: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302148:
    // 80302148: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030214C:
    // 8030214C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302150:
    // 80302150: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80302154:
    // 80302154: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302158:
    // 80302158: bl      0x80302288
    {
            ctx->lr = 0x8030215Cu;
            goto label_80302288;
    }

label_8030215C:
    ctx->downcount -= 3;
    // 8030215C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80302160:
    // 80302160: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302164:
    // 80302164: bl      0x802A5D48
    {
            ctx->lr = 0x80302168u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80302168:
    ctx->downcount -= 6;
    // 80302168: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030216C:
    // 8030216C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80302170:
    // 80302170: addi    r4, r30, 292
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(292);

label_80302174:
    // 80302174: addi    r5, r30, 304
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(304);

label_80302178:
    // 80302178: addi    r6, r30, 316
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(316);

label_8030217C:
    // 8030217C: bl      0x803023A8
    {
            ctx->lr = 0x80302180u;
            goto label_803023A8;
    }

label_80302180:
    ctx->downcount -= 2;
    // 80302180: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80302184:
    // 80302184: bl      0x802A609C
    {
            ctx->lr = 0x80302188u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_80302188:
    ctx->downcount -= 10;
    // 80302188: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_8030218C:
    // 8030218C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80302190:
    // 80302190: addi    r3, r3, 25488
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25488);

label_80302194:
    ctx->pc = 0x80302194u;
    // 80302194: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302198:
    // 80302198: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_8030219C:
    ctx->pc = 0x8030219Cu;
    // 8030219C: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803021A0:
    // 803021A0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803021A4:
    // 803021A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_803021A8:
    ctx->pc = 0x803021A8u;
    // 803021A8: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803021AC:
    // 803021AC: bl      0x802A5D48
    {
            ctx->lr = 0x803021B0u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803021B0:
    ctx->downcount -= 6;
    // 803021B0: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_803021B4:
    // 803021B4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803021B8:
    // 803021B8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803021BC:
    // 803021BC: addi    r5, r30, 256
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(256);

label_803021C0:
    // 803021C0: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_803021C4:
    // 803021C4: bl      0x8030201C
    {
            ctx->lr = 0x803021C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030201Cu;
                return;
            }
            goto label_8030201C;
    }

label_803021C8:
    ctx->downcount -= 3;
    // 803021C8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803021CC:
    // 803021CC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803021D0:
    // 803021D0: bl      0x802A5D48
    {
            ctx->lr = 0x803021D4u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803021D4:
    ctx->downcount -= 5;
    // 803021D4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803021D8:
    // 803021D8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803021DC:
    // 803021DC: addi    r4, r30, 268
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(268);

label_803021E0:
    // 803021E0: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_803021E4:
    // 803021E4: bl      0x8030201C
    {
            ctx->lr = 0x803021E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030201Cu;
                return;
            }
            goto label_8030201C;
    }

label_803021E8:
    ctx->downcount -= 3;
    // 803021E8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803021EC:
    // 803021EC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803021F0:
    // 803021F0: bl      0x802A5D48
    {
            ctx->lr = 0x803021F4u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803021F4:
    ctx->downcount -= 5;
    // 803021F4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803021F8:
    // 803021F8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803021FC:
    // 803021FC: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_80302200:
    // 80302200: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_80302204:
    // 80302204: bl      0x8030201C
    {
            ctx->lr = 0x80302208u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030201Cu;
                return;
            }
            goto label_8030201C;
    }

label_80302208:
    ctx->downcount -= 17;
    // 80302208: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030220C:
    ctx->pc = 0x8030220Cu;
    // 8030220C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302210:
    ctx->pc = 0x80302210u;
    // 80302210: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302214:
    ctx->pc = 0x80302214u;
    // 80302214: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302218:
    // 80302218: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030221C:
    ctx->pc = 0x8030221Cu;
    // 8030221C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302220:
    ctx->pc = 0x80302220u;
    ctx->downcount -= 18;
    // 80302220: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302224:
    ctx->pc = 0x80302224u;
    // 80302224: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302228:
    // 80302228: cmpwi   r3, 0
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

label_8030222C:
    ctx->pc = 0x8030222Cu;
    // 8030222C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302230:
    ctx->pc = 0x80302230u;
    // 80302230: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302234:
    // 80302234: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302238:
    // 80302238: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030223C:
    // 8030223C: bc    12, 2, 0x80302270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302270;
        }
    }

label_80302240:
    ctx->downcount -= 1;
    // 80302240: bc    12, 2, 0x80302260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302260;
        }
    }

label_80302244:
    ctx->downcount -= 1;
    // 80302244: bc    12, 2, 0x80302260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302260;
        }
    }

label_80302248:
    ctx->downcount -= 3;
    // 80302248: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030224C:
    // 8030224C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80302250:
    // 80302250: bl      0x80301FDC
    {
            ctx->lr = 0x80302254u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301FDCu;
                return;
            }
            goto label_80301FDC;
    }

label_80302254:
    ctx->downcount -= 3;
    // 80302254: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80302258:
    // 80302258: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030225C:
    // 8030225C: bl      0x801ED118
    {
            ctx->lr = 0x80302260u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80302260:
    ctx->downcount -= 2;
    // 80302260: cmpwi   r31, 0
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

label_80302264:
    // 80302264: bc    4, 1, 0x80302270
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302270;
        }
    }

label_80302268:
    ctx->downcount -= 2;
    // 80302268: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030226C:
    // 8030226C: bl      0x801C1C90
    {
            ctx->lr = 0x80302270u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80302270:
    ctx->downcount -= 17;
    // 80302270: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80302274:
    ctx->pc = 0x80302274u;
    // 80302274: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302278:
    ctx->pc = 0x80302278u;
    // 80302278: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030227C:
    ctx->pc = 0x8030227Cu;
    // 8030227C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302280:
    // 80302280: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302284:
    ctx->pc = 0x80302284u;
    // 80302284: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302288:
    ctx->pc = 0x80302288u;
    ctx->downcount -= 17;
    // 80302288: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030228C:
    ctx->pc = 0x8030228Cu;
    // 8030228C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302290:
    ctx->pc = 0x80302290u;
    // 80302290: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302294:
    ctx->pc = 0x80302294u;
    // 80302294: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302298:
    // 80302298: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030229C:
    // 8030229C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803022A0:
    // 803022A0: bl      0x803457F4
    {
            ctx->lr = 0x803022A4u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_803022A4:
    ctx->pc = 0x803022A4u;
    ctx->downcount -= 11;
    // 803022A4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803022A8:
    // 803022A8: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_803022AC:
    // 803022AC: addi    r3, r3, 25728
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25728);

label_803022B0:
    ctx->pc = 0x803022B0u;
    // 803022B0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803022B4:
    // 803022B4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803022B8:
    ctx->pc = 0x803022B8u;
    // 803022B8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803022BC:
    ctx->pc = 0x803022BCu;
    // 803022BC: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_803022C0:
    // 803022C0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803022C4:
    // 803022C4: bl      0x801C1C80
    {
            ctx->lr = 0x803022C8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803022C8:
    ctx->pc = 0x803022C8u;
    ctx->downcount -= 8;
    // 803022C8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803022CC:
    // 803022CC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803022D0:
    ctx->pc = 0x803022D0u;
    // 803022D0: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803022D4:
    // 803022D4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803022D8:
    ctx->pc = 0x803022D8u;
    // 803022D8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803022DC:
    // 803022DC: bl      0x801C1C80
    {
            ctx->lr = 0x803022E0u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803022E0:
    ctx->pc = 0x803022E0u;
    ctx->downcount -= 8;
    // 803022E0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803022E4:
    // 803022E4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803022E8:
    ctx->pc = 0x803022E8u;
    // 803022E8: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803022EC:
    // 803022EC: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803022F0:
    ctx->pc = 0x803022F0u;
    // 803022F0: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803022F4:
    // 803022F4: bl      0x801C1C80
    {
            ctx->lr = 0x803022F8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803022F8:
    ctx->downcount -= 6;
    // 803022F8: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_803022FC:
    ctx->pc = 0x803022FCu;
    // 803022FC: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302300:
    // 80302300: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_80302304:
    // 80302304: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302308:
    // 80302308: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030230C:
    // 8030230C: b       0x80302378
    {
            goto label_80302378;
    }

label_80302310:
    loop_80302310(ctx);
    if (ctx->pc == 0x80302384u) goto label_80302384;
    return;
label_80302314:
    // 80302314: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80302318:
    ctx->pc = 0x80302318u;
    // 80302318: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030231C:
    // 8030231C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302320:
    ctx->pc = 0x80302320u;
    // 80302320: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302324:
    ctx->pc = 0x80302324u;
    // 80302324: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302328:
    ctx->pc = 0x80302328u;
    // 80302328: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030232C:
    ctx->pc = 0x8030232Cu;
    // 8030232C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302330:
    ctx->pc = 0x80302330u;
    // 80302330: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302334:
    ctx->pc = 0x80302334u;
    // 80302334: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302338:
    ctx->pc = 0x80302338u;
    // 80302338: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030233C:
    // 8030233C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302340:
    ctx->pc = 0x80302340u;
    // 80302340: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302344:
    ctx->pc = 0x80302344u;
    // 80302344: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302348:
    ctx->pc = 0x80302348u;
    // 80302348: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030234C:
    ctx->pc = 0x8030234Cu;
    // 8030234C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302350:
    ctx->pc = 0x80302350u;
    // 80302350: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302354:
    ctx->pc = 0x80302354u;
    // 80302354: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302358:
    ctx->pc = 0x80302358u;
    // 80302358: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030235C:
    // 8030235C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302360:
    ctx->pc = 0x80302360u;
    // 80302360: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302364:
    ctx->pc = 0x80302364u;
    // 80302364: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302368:
    // 80302368: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_8030236C:
    ctx->pc = 0x8030236Cu;
    // 8030236C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302370:
    ctx->pc = 0x80302370u;
    // 80302370: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302374:
    ctx->pc = 0x80302374u;
    // 80302374: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302378:
    ctx->pc = 0x80302378u;
    ctx->downcount -= 3;
    // 80302378: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030237C:
    // 8030237C: cmpw    r7, r0
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

label_80302380:
    // 80302380: bc    12, 0, 0x80302310
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302310u;
                return;
            }
            goto label_80302310;
        }
    }

label_80302384:
    ctx->downcount -= 3;
    // 80302384: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302388:
    // 80302388: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030238C:
    // 8030238C: bl      0x803457CC
    {
            ctx->lr = 0x80302390u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80302390:
    ctx->downcount -= 17;
    // 80302390: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302394:
    ctx->pc = 0x80302394u;
    // 80302394: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302398:
    ctx->pc = 0x80302398u;
    // 80302398: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030239C:
    ctx->pc = 0x8030239Cu;
    // 8030239C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803023A0:
    // 803023A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803023A4:
    ctx->pc = 0x803023A4u;
    // 803023A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803023A8:
    ctx->pc = 0x803023A8u;
    ctx->downcount -= 19;
    // 803023A8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803023AC:
    ctx->pc = 0x803023ACu;
    // 803023AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803023B0:
    ctx->pc = 0x803023B0u;
    // 803023B0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803023B4:
    ctx->pc = 0x803023B4u;
    // 803023B4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803023B8:
    // 803023B8: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_803023BC:
    // 803023BC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_803023C0:
    // 803023C0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803023C4:
    // 803023C4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803023C8:
    // 803023C8: bl      0x8030201C
    {
            ctx->lr = 0x803023CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030201Cu;
                return;
            }
            goto label_8030201C;
    }

label_803023CC:
    ctx->downcount -= 27;
    // 803023CC: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_803023D0:
    ctx->pc = 0x803023D0u;
    // 803023D0: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803023D4:
    ctx->pc = 0x803023D4u;
    // 803023D4: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803023D8:
    ctx->pc = 0x803023D8u;
    // 803023D8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803023DC:
    // 803023DC: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803023E0:
    ctx->pc = 0x803023E0u;
    // 803023E0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803023E4:
    ctx->pc = 0x803023E4u;
    // 803023E4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803023E8:
    ctx->pc = 0x803023E8u;
    // 803023E8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803023EC:
    ctx->pc = 0x803023ECu;
    // 803023EC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803023F0:
    ctx->pc = 0x803023F0u;
    // 803023F0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803023F4:
    ctx->pc = 0x803023F4u;
    // 803023F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803023F8:
    ctx->pc = 0x803023F8u;
    // 803023F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803023FC:
    // 803023FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80302400:
    ctx->pc = 0x80302400u;
    // 80302400: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302404:
    ctx->pc = 0x80302404u;
    ctx->downcount -= 8;
    // 80302404: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302408:
    ctx->pc = 0x80302408u;
    // 80302408: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030240C:
    ctx->pc = 0x8030240Cu;
    // 8030240C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302410:
    ctx->pc = 0x80302410u;
    // 80302410: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302414:
    // 80302414: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302418:
    ctx->pc = 0x80302418u;
    // 80302418: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030241C:
    // 8030241C: cmpwi   r0, 0
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

label_80302420:
    // 80302420: bc    12, 2, 0x80302444
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302444;
        }
    }

label_80302424:
    ctx->pc = 0x80302424u;
    ctx->downcount -= 3;
    // 80302424: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80302428:
    // 80302428: cmpwi   r0, 0
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

label_8030242C:
    // 8030242C: bc    12, 2, 0x80302434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302434;
        }
    }

label_80302430:
    ctx->downcount -= 1;
    // 80302430: bl      0x80302528
    {
            ctx->lr = 0x80302434u;
            goto label_80302528;
    }

label_80302434:
    ctx->downcount -= 2;
    // 80302434: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302438:
    // 80302438: bl      0x803456D4
    {
            ctx->lr = 0x8030243Cu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_8030243C:
    ctx->downcount -= 2;
    // 8030243C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302440:
    // 80302440: bl      0x80302468
    {
            ctx->lr = 0x80302444u;
            goto label_80302468;
    }

label_80302444:
    ctx->downcount -= 2;
    // 80302444: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302448:
    // 80302448: bl      0x803024C8
    {
            ctx->lr = 0x8030244Cu;
            goto label_803024C8;
    }

label_8030244C:
    ctx->downcount -= 2;
    // 8030244C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302450:
    // 80302450: bl      0x803456F8
    {
            ctx->lr = 0x80302454u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_80302454:
    ctx->pc = 0x80302454u;
    ctx->downcount -= 6;
    // 80302454: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302458:
    ctx->pc = 0x80302458u;
    // 80302458: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030245C:
    ctx->pc = 0x8030245Cu;
    // 8030245C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302460:
    // 80302460: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302464:
    ctx->pc = 0x80302464u;
    // 80302464: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302468:
    ctx->pc = 0x80302468u;
    ctx->downcount -= 12;
    // 80302468: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030246C:
    ctx->pc = 0x8030246Cu;
    // 8030246C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302470:
    ctx->pc = 0x80302470u;
    // 80302470: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302474:
    ctx->pc = 0x80302474u;
    // 80302474: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302478:
    // 80302478: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030247C:
    ctx->pc = 0x8030247Cu;
    // 8030247C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302480:
    ctx->pc = 0x80302480u;
    // 80302480: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302484:
    // 80302484: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302488:
    // 80302488: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030248C:
    // 8030248C: bl      0x800076B4
    {
            ctx->lr = 0x80302490u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80302490:
    ctx->downcount -= 2;
    // 80302490: cmpwi   r3, 0
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

label_80302494:
    // 80302494: bc    12, 2, 0x803024B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803024B4;
        }
    }

label_80302498:
    ctx->pc = 0x80302498u;
    ctx->downcount -= 8;
    // 80302498: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030249C:
    ctx->pc = 0x8030249Cu;
    // 8030249C: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803024A0:
    // 803024A0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803024A4:
    ctx->pc = 0x803024A4u;
    // 803024A4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803024A8:
    // 803024A8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_803024AC:
    // 803024AC: bl      0x800076E4
    {
            ctx->lr = 0x803024B0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_803024B0:
    ctx->downcount -= 1;
    // 803024B0: nop
    // nop

label_803024B4:
    ctx->pc = 0x803024B4u;
    ctx->downcount -= 6;
    // 803024B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803024B8:
    ctx->pc = 0x803024B8u;
    // 803024B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803024BC:
    ctx->pc = 0x803024BCu;
    // 803024BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803024C0:
    // 803024C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803024C4:
    ctx->pc = 0x803024C4u;
    // 803024C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803024C8:
    ctx->pc = 0x803024C8u;
    ctx->downcount -= 12;
    // 803024C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803024CC:
    ctx->pc = 0x803024CCu;
    // 803024CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803024D0:
    ctx->pc = 0x803024D0u;
    // 803024D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803024D4:
    ctx->pc = 0x803024D4u;
    // 803024D4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803024D8:
    // 803024D8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803024DC:
    ctx->pc = 0x803024DCu;
    // 803024DC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803024E0:
    ctx->pc = 0x803024E0u;
    // 803024E0: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803024E4:
    // 803024E4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803024E8:
    // 803024E8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803024EC:
    // 803024EC: bl      0x800076B4
    {
            ctx->lr = 0x803024F0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_803024F0:
    ctx->downcount -= 2;
    // 803024F0: cmpwi   r3, 0
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

label_803024F4:
    // 803024F4: bc    12, 2, 0x80302514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302514;
        }
    }

label_803024F8:
    ctx->pc = 0x803024F8u;
    ctx->downcount -= 8;
    // 803024F8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803024FC:
    ctx->pc = 0x803024FCu;
    // 803024FC: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302500:
    // 80302500: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302504:
    ctx->pc = 0x80302504u;
    // 80302504: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302508:
    // 80302508: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030250C:
    // 8030250C: bl      0x800076E4
    {
            ctx->lr = 0x80302510u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80302510:
    ctx->downcount -= 1;
    // 80302510: nop
    // nop

label_80302514:
    ctx->pc = 0x80302514u;
    ctx->downcount -= 6;
    // 80302514: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302518:
    ctx->pc = 0x80302518u;
    // 80302518: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030251C:
    ctx->pc = 0x8030251Cu;
    // 8030251C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302520:
    // 80302520: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302524:
    ctx->pc = 0x80302524u;
    // 80302524: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302528:
    ctx->pc = 0x80302528u;
    ctx->downcount -= 12;
    // 80302528: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030252C:
    ctx->pc = 0x8030252Cu;
    // 8030252C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302530:
    ctx->pc = 0x80302530u;
    // 80302530: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302534:
    ctx->pc = 0x80302534u;
    // 80302534: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302538:
    // 80302538: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030253C:
    ctx->pc = 0x8030253Cu;
    // 8030253C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302540:
    ctx->pc = 0x80302540u;
    // 80302540: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302544:
    // 80302544: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302548:
    // 80302548: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030254C:
    // 8030254C: bl      0x800076B4
    {
            ctx->lr = 0x80302550u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80302550:
    ctx->downcount -= 2;
    // 80302550: cmpwi   r3, 0
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

label_80302554:
    // 80302554: bc    12, 2, 0x80302574
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302574;
        }
    }

label_80302558:
    ctx->pc = 0x80302558u;
    ctx->downcount -= 8;
    // 80302558: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030255C:
    ctx->pc = 0x8030255Cu;
    // 8030255C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302560:
    // 80302560: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302564:
    ctx->pc = 0x80302564u;
    // 80302564: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302568:
    // 80302568: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030256C:
    // 8030256C: bl      0x800076E4
    {
            ctx->lr = 0x80302570u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80302570:
    ctx->downcount -= 1;
    // 80302570: nop
    // nop

label_80302574:
    ctx->pc = 0x80302574u;
    ctx->downcount -= 6;
    // 80302574: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302578:
    ctx->pc = 0x80302578u;
    // 80302578: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030257C:
    ctx->pc = 0x8030257Cu;
    // 8030257C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302580:
    // 80302580: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302584:
    ctx->pc = 0x80302584u;
    // 80302584: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302588:
    ctx->downcount -= 2;
    // 80302588: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030258C:
    // 8030258C: b       0x80301F74
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301F74u;
                return;
            }
            goto label_80301F74;
    }

label_80302590:
    ctx->downcount -= 2;
    // 80302590: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80302594:
    // 80302594: b       0x80301F10
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80301F10u;
                return;
            }
            goto label_80301F10;
    }

label_80302598:
    ctx->downcount -= 2;
    // 80302598: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030259C:
    // 8030259C: b       0x80302220
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302220u;
                return;
            }
            goto label_80302220;
    }

label_803025A0:
    ctx->pc = 0x803025A0u;
    ctx->downcount -= 21;
    // 803025A0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803025A4:
    ctx->pc = 0x803025A4u;
    // 803025A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803025A8:
    ctx->pc = 0x803025A8u;
    // 803025A8: lis     r5, -32768
    ctx->gpr[5] = ((u32)(s32)(-32768) << 16);

label_803025AC:
    ctx->pc = 0x803025ACu;
    // 803025AC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803025B0:
    ctx->pc = 0x803025B0u;
    // 803025B0: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_803025B4:
    ctx->pc = 0x803025B4u;
    // 803025B4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803025B8:
    ctx->pc = 0x803025B8u;
    // 803025B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803025BC:
    ctx->pc = 0x803025BCu;
    // 803025BC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803025C0:
    ctx->pc = 0x803025C0u;
    // 803025C0: lwz     r29, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_803025C4:
    ctx->pc = 0x803025C4u;
    // 803025C4: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_803025C8:
    ctx->pc = 0x803025C8u;
    // 803025C8: b       0x803025F8
    {
            goto label_803025F8;
    }

label_803025CC:
    ctx->pc = 0x803025CCu;
    ctx->downcount -= 3;
    // 803025CC: lwz     r3, 44(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803025D0:
    // 803025D0: cmpw    r3, r0
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

label_803025D4:
    // 803025D4: bc    4, 0, 0x803025F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803025F4;
        }
    }

label_803025D8:
    ctx->downcount -= 3;
    // 803025D8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803025DC:
    // 803025DC: addi    r3, r6, 24
    ctx->gpr[3] = ctx->gpr[6] + (u32)(s32)(24);

label_803025E0:
    // 803025E0: bl      0x8027613C
    {
            ctx->lr = 0x803025E4u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_803025E4:
    ctx->downcount -= 4;
    // 803025E4: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_803025E8:
    // 803025E8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_803025EC:
    ctx->pc = 0x803025ECu;
    // 803025EC: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803025F0:
    // 803025F0: b       0x80302618
    {
            goto label_80302618;
    }

label_803025F4:
    ctx->pc = 0x803025F4u;
    ctx->downcount -= 1;
    // 803025F4: lwz     r6, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_803025F8:
    ctx->downcount -= 2;
    // 803025F8: cmpwi   r6, 0
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

label_803025FC:
    // 803025FC: bc    4, 2, 0x803025CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803025CCu;
                return;
            }
            goto label_803025CC;
        }
    }

label_80302600:
    ctx->pc = 0x80302600u;
    ctx->downcount -= 3;
    // 80302600: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302604:
    ctx->pc = 0x80302604u;
    // 80302604: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80302608:
    ctx->pc = 0x80302608u;
    // 80302608: bl      0x8027613C
    {
            ctx->lr = 0x8030260Cu;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_8030260C:
    ctx->pc = 0x8030260Cu;
    ctx->downcount -= 3;
    // 8030260C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80302610:
    ctx->pc = 0x80302610u;
    // 80302610: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_80302614:
    ctx->pc = 0x80302614u;
    // 80302614: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302618:
    ctx->pc = 0x80302618u;
    ctx->downcount -= 5;
    // 80302618: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8030261C:
    ctx->pc = 0x8030261Cu;
    // 8030261C: lwz     r29, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80302620:
    ctx->pc = 0x80302620u;
    // 80302620: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302624:
    ctx->pc = 0x80302624u;
    // 80302624: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_80302628:
    ctx->pc = 0x80302628u;
    // 80302628: b       0x80302658
    {
            goto label_80302658;
    }

label_8030262C:
    ctx->pc = 0x8030262Cu;
    ctx->downcount -= 3;
    // 8030262C: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302630:
    // 80302630: cmpw    r3, r0
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

label_80302634:
    // 80302634: bc    4, 0, 0x80302654
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302654;
        }
    }

label_80302638:
    ctx->downcount -= 3;
    // 80302638: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030263C:
    // 8030263C: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_80302640:
    // 80302640: bl      0x8027613C
    {
            ctx->lr = 0x80302644u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_80302644:
    ctx->downcount -= 4;
    // 80302644: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80302648:
    // 80302648: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_8030264C:
    ctx->pc = 0x8030264Cu;
    // 8030264C: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302650:
    // 80302650: b       0x80302678
    {
            goto label_80302678;
    }

label_80302654:
    ctx->pc = 0x80302654u;
    ctx->downcount -= 1;
    // 80302654: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302658:
    ctx->downcount -= 2;
    // 80302658: cmpwi   r5, 0
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

label_8030265C:
    // 8030265C: bc    4, 2, 0x8030262C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030262Cu;
                return;
            }
            goto label_8030262C;
        }
    }

label_80302660:
    ctx->pc = 0x80302660u;
    ctx->downcount -= 3;
    // 80302660: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302664:
    ctx->pc = 0x80302664u;
    // 80302664: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80302668:
    ctx->pc = 0x80302668u;
    // 80302668: bl      0x8027613C
    {
            ctx->lr = 0x8030266Cu;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_8030266C:
    ctx->pc = 0x8030266Cu;
    ctx->downcount -= 3;
    // 8030266C: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_80302670:
    ctx->pc = 0x80302670u;
    // 80302670: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_80302674:
    ctx->pc = 0x80302674u;
    // 80302674: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302678:
    ctx->pc = 0x80302678u;
    ctx->downcount -= 5;
    // 80302678: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_8030267C:
    ctx->pc = 0x8030267Cu;
    // 8030267C: lwz     r29, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80302680:
    ctx->pc = 0x80302680u;
    // 80302680: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302684:
    ctx->pc = 0x80302684u;
    // 80302684: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_80302688:
    ctx->pc = 0x80302688u;
    // 80302688: b       0x803026B8
    {
            goto label_803026B8;
    }

label_8030268C:
    ctx->pc = 0x8030268Cu;
    ctx->downcount -= 3;
    // 8030268C: lwz     r3, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302690:
    // 80302690: cmpw    r3, r0
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

label_80302694:
    // 80302694: bc    4, 0, 0x803026B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803026B4;
        }
    }

label_80302698:
    ctx->downcount -= 3;
    // 80302698: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030269C:
    // 8030269C: addi    r3, r5, 24
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(24);

label_803026A0:
    // 803026A0: bl      0x8027613C
    {
            ctx->lr = 0x803026A4u;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_803026A4:
    ctx->downcount -= 4;
    // 803026A4: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_803026A8:
    // 803026A8: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_803026AC:
    ctx->pc = 0x803026ACu;
    // 803026AC: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803026B0:
    // 803026B0: b       0x803026D8
    {
            goto label_803026D8;
    }

label_803026B4:
    ctx->pc = 0x803026B4u;
    ctx->downcount -= 1;
    // 803026B4: lwz     r5, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803026B8:
    ctx->downcount -= 2;
    // 803026B8: cmpwi   r5, 0
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

label_803026BC:
    // 803026BC: bc    4, 2, 0x8030268C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030268Cu;
                return;
            }
            goto label_8030268C;
        }
    }

label_803026C0:
    ctx->pc = 0x803026C0u;
    ctx->downcount -= 3;
    // 803026C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803026C4:
    ctx->pc = 0x803026C4u;
    // 803026C4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_803026C8:
    ctx->pc = 0x803026C8u;
    // 803026C8: bl      0x8027613C
    {
            ctx->lr = 0x803026CCu;
            ctx->pc = 0x8027613Cu;
            return;
    }

label_803026CC:
    ctx->pc = 0x803026CCu;
    ctx->downcount -= 3;
    // 803026CC: lis     r3, -32768
    ctx->gpr[3] = ((u32)(s32)(-32768) << 16);

label_803026D0:
    ctx->pc = 0x803026D0u;
    // 803026D0: addi    r0, r3, -2
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-2);

label_803026D4:
    ctx->pc = 0x803026D4u;
    // 803026D4: stw     r0, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803026D8:
    ctx->pc = 0x803026D8u;
    ctx->downcount -= 16;
    // 803026D8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803026DC:
    ctx->pc = 0x803026DCu;
    // 803026DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803026E0:
    ctx->pc = 0x803026E0u;
    // 803026E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803026E4:
    ctx->pc = 0x803026E4u;
    // 803026E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803026E8:
    ctx->pc = 0x803026E8u;
    // 803026E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803026EC:
    ctx->pc = 0x803026ECu;
    ctx->downcount -= 3;
    // 803026EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803026F0:
    ctx->pc = 0x803026F0u;
    // 803026F0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803026F4:
    ctx->pc = 0x803026F4u;
    // 803026F4: b       0x803457CC
    {
            ctx->pc = 0x803457CCu;
            return;
    }

label_803026F8:
    ctx->pc = 0x803026F8u;
    ctx->downcount -= 19;
    // 803026F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803026FC:
    ctx->pc = 0x803026FCu;
    // 803026FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302700:
    ctx->pc = 0x80302700u;
    // 80302700: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302704:
    ctx->pc = 0x80302704u;
    // 80302704: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302708:
    ctx->pc = 0x80302708u;
    // 80302708: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030270C:
    ctx->pc = 0x8030270Cu;
    // 8030270C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302710:
    ctx->pc = 0x80302710u;
    // 80302710: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80302714:
    ctx->pc = 0x80302714u;
    // 80302714: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302718:
    ctx->pc = 0x80302718u;
    // 80302718: bl      0x80302808
    {
            ctx->lr = 0x8030271Cu;
            goto label_80302808;
    }

label_8030271C:
    ctx->pc = 0x8030271Cu;
    ctx->downcount -= 10;
    // 8030271C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80302720:
    ctx->pc = 0x80302720u;
    // 80302720: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80302724:
    ctx->pc = 0x80302724u;
    // 80302724: addi    r3, r3, 25880
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(25880);

label_80302728:
    ctx->pc = 0x80302728u;
    // 80302728: stw     r3, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030272C:
    ctx->pc = 0x8030272Cu;
    // 8030272C: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_80302730:
    ctx->pc = 0x80302730u;
    // 80302730: addi    r4, r4, 16984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16984);

label_80302734:
    ctx->pc = 0x80302734u;
    // 80302734: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302738:
    ctx->pc = 0x80302738u;
    // 80302738: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_8030273C:
    ctx->pc = 0x8030273Cu;
    // 8030273C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80302740:
    ctx->pc = 0x80302740u;
    // 80302740: bl      0x8000E7F4
    {
            ctx->lr = 0x80302744u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80302744:
    ctx->pc = 0x80302744u;
    ctx->downcount -= 7;
    // 80302744: lis     r4, -32667
    ctx->gpr[4] = ((u32)(s32)(-32667) << 16);

label_80302748:
    ctx->pc = 0x80302748u;
    // 80302748: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_8030274C:
    ctx->pc = 0x8030274Cu;
    // 8030274C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80302750:
    ctx->pc = 0x80302750u;
    // 80302750: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80302754:
    ctx->pc = 0x80302754u;
    // 80302754: addi    r4, r4, 22144
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22144);

label_80302758:
    ctx->pc = 0x80302758u;
    // 80302758: addi    r5, r5, 25828
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(25828);

label_8030275C:
    ctx->pc = 0x8030275Cu;
    // 8030275C: bl      0x80302A28
    {
            ctx->lr = 0x80302760u;
            goto label_80302A28;
    }

label_80302760:
    ctx->pc = 0x80302760u;
    ctx->downcount -= 4;
    // 80302760: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302764:
    ctx->pc = 0x80302764u;
    // 80302764: li      r3, 5532
    ctx->gpr[3] = (u32)(s32)(5532);

label_80302768:
    ctx->pc = 0x80302768u;
    // 80302768: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030276C:
    ctx->pc = 0x8030276Cu;
    // 8030276C: bl      0x801C1C5C
    {
            ctx->lr = 0x80302770u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_80302770:
    ctx->pc = 0x80302770u;
    ctx->downcount -= 2;
    // 80302770: cmpwi   r3, 0
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

label_80302774:
    ctx->pc = 0x80302774u;
    // 80302774: bc    12, 2, 0x80302780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302780;
        }
    }

label_80302778:
    ctx->pc = 0x80302778u;
    ctx->downcount -= 2;
    // 80302778: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030277C:
    ctx->pc = 0x8030277Cu;
    // 8030277C: bl      0x80271E70
    {
            ctx->lr = 0x80302780u;
            ctx->pc = 0x80271E70u;
            return;
    }

label_80302780:
    ctx->pc = 0x80302780u;
    ctx->downcount -= 5;
    // 80302780: stw     r3, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302784:
    ctx->pc = 0x80302784u;
    // 80302784: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302788:
    ctx->pc = 0x80302788u;
    // 80302788: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8030278C:
    ctx->pc = 0x8030278Cu;
    // 8030278C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80302790:
    ctx->pc = 0x80302790u;
    // 80302790: bl      0x801C1C5C
    {
            ctx->lr = 0x80302794u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_80302794:
    ctx->pc = 0x80302794u;
    ctx->downcount -= 2;
    // 80302794: cmpwi   r3, 0
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

label_80302798:
    ctx->pc = 0x80302798u;
    // 80302798: bc    12, 2, 0x803027A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803027A4;
        }
    }

label_8030279C:
    ctx->pc = 0x8030279Cu;
    ctx->downcount -= 2;
    // 8030279C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803027A0:
    ctx->pc = 0x803027A0u;
    // 803027A0: bl      0x8031736C
    {
            ctx->lr = 0x803027A4u;
            ctx->pc = 0x8031736Cu;
            return;
    }

label_803027A4:
    ctx->pc = 0x803027A4u;
    ctx->downcount -= 5;
    // 803027A4: stw     r3, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803027A8:
    ctx->pc = 0x803027A8u;
    // 803027A8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803027AC:
    ctx->pc = 0x803027ACu;
    // 803027AC: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_803027B0:
    ctx->pc = 0x803027B0u;
    // 803027B0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803027B4:
    ctx->pc = 0x803027B4u;
    // 803027B4: bl      0x801C1C5C
    {
            ctx->lr = 0x803027B8u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_803027B8:
    ctx->pc = 0x803027B8u;
    ctx->downcount -= 2;
    // 803027B8: cmpwi   r3, 0
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

label_803027BC:
    ctx->pc = 0x803027BCu;
    // 803027BC: bc    12, 2, 0x803027C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803027C8;
        }
    }

label_803027C0:
    ctx->pc = 0x803027C0u;
    ctx->downcount -= 2;
    // 803027C0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803027C4:
    ctx->pc = 0x803027C4u;
    // 803027C4: bl      0x8031AAD0
    {
            ctx->lr = 0x803027C8u;
            ctx->pc = 0x8031AAD0u;
            return;
    }

label_803027C8:
    ctx->pc = 0x803027C8u;
    ctx->downcount -= 4;
    // 803027C8: stw     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803027CC:
    ctx->pc = 0x803027CCu;
    // 803027CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803027D0:
    ctx->pc = 0x803027D0u;
    // 803027D0: lwz     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803027D4:
    ctx->pc = 0x803027D4u;
    // 803027D4: bl      0x802A6408
    {
            ctx->lr = 0x803027D8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803027D8:
    ctx->pc = 0x803027D8u;
    ctx->downcount -= 3;
    // 803027D8: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803027DC:
    ctx->pc = 0x803027DCu;
    // 803027DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803027E0:
    ctx->pc = 0x803027E0u;
    // 803027E0: bl      0x802A6408
    {
            ctx->lr = 0x803027E4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803027E4:
    ctx->pc = 0x803027E4u;
    ctx->downcount -= 3;
    // 803027E4: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803027E8:
    ctx->pc = 0x803027E8u;
    // 803027E8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803027EC:
    ctx->pc = 0x803027ECu;
    // 803027EC: bl      0x802A6408
    {
            ctx->lr = 0x803027F0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803027F0:
    ctx->pc = 0x803027F0u;
    ctx->downcount -= 17;
    // 803027F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803027F4:
    ctx->pc = 0x803027F4u;
    // 803027F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803027F8:
    ctx->pc = 0x803027F8u;
    // 803027F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803027FC:
    ctx->pc = 0x803027FCu;
    // 803027FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302800:
    ctx->pc = 0x80302800u;
    // 80302800: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302804:
    ctx->pc = 0x80302804u;
    // 80302804: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302808:
    ctx->pc = 0x80302808u;
    ctx->downcount -= 21;
    // 80302808: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030280C:
    ctx->pc = 0x8030280Cu;
    // 8030280C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302810:
    ctx->pc = 0x80302810u;
    // 80302810: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302814:
    ctx->pc = 0x80302814u;
    // 80302814: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302818:
    ctx->pc = 0x80302818u;
    // 80302818: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_8030281C:
    ctx->pc = 0x8030281Cu;
    // 8030281C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80302820:
    ctx->pc = 0x80302820u;
    // 80302820: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302824:
    ctx->pc = 0x80302824u;
    // 80302824: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302828:
    ctx->pc = 0x80302828u;
    // 80302828: addi    r31, r31, 25792
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(25792);

label_8030282C:
    ctx->pc = 0x8030282Cu;
    // 8030282C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80302830:
    ctx->pc = 0x80302830u;
    // 80302830: bl      0x802A6748
    {
            ctx->lr = 0x80302834u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_80302834:
    ctx->pc = 0x80302834u;
    ctx->downcount -= 10;
    // 80302834: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_80302838:
    ctx->pc = 0x80302838u;
    // 80302838: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030283C:
    ctx->pc = 0x8030283Cu;
    // 8030283C: addi    r3, r3, 26120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26120);

label_80302840:
    ctx->pc = 0x80302840u;
    // 80302840: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302844:
    ctx->pc = 0x80302844u;
    // 80302844: addi    r0, r3, 8
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(8);

label_80302848:
    ctx->pc = 0x80302848u;
    // 80302848: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030284C:
    ctx->pc = 0x8030284Cu;
    // 8030284C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302850:
    ctx->pc = 0x80302850u;
    // 80302850: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80302854:
    ctx->pc = 0x80302854u;
    // 80302854: addi    r5, r29, 4
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(4);

label_80302858:
    ctx->pc = 0x80302858u;
    // 80302858: bl      0x80302908
    {
            ctx->lr = 0x8030285Cu;
            goto label_80302908;
    }

label_8030285C:
    ctx->pc = 0x8030285Cu;
    ctx->downcount -= 3;
    // 8030285C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80302860:
    ctx->pc = 0x80302860u;
    // 80302860: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302864:
    ctx->pc = 0x80302864u;
    // 80302864: bl      0x802A5D48
    {
            ctx->lr = 0x80302868u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80302868:
    ctx->pc = 0x80302868u;
    ctx->downcount -= 6;
    // 80302868: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030286C:
    ctx->pc = 0x8030286Cu;
    // 8030286C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80302870:
    ctx->pc = 0x80302870u;
    // 80302870: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_80302874:
    ctx->pc = 0x80302874u;
    // 80302874: addi    r5, r31, 60
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(60);

label_80302878:
    ctx->pc = 0x80302878u;
    // 80302878: addi    r6, r31, 72
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(72);

label_8030287C:
    ctx->pc = 0x8030287Cu;
    // 8030287C: bl      0x80302AA4
    {
            ctx->lr = 0x80302880u;
            goto label_80302AA4;
    }

label_80302880:
    ctx->pc = 0x80302880u;
    ctx->downcount -= 2;
    // 80302880: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80302884:
    ctx->pc = 0x80302884u;
    // 80302884: bl      0x802A609C
    {
            ctx->lr = 0x80302888u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_80302888:
    ctx->pc = 0x80302888u;
    ctx->downcount -= 17;
    // 80302888: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030288C:
    ctx->pc = 0x8030288Cu;
    // 8030288C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302890:
    ctx->pc = 0x80302890u;
    // 80302890: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302894:
    ctx->pc = 0x80302894u;
    // 80302894: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302898:
    ctx->pc = 0x80302898u;
    // 80302898: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030289C:
    ctx->pc = 0x8030289Cu;
    // 8030289C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803028A0:
    ctx->pc = 0x803028A0u;
    ctx->downcount -= 1;
    // 803028A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803028A4:
    ctx->pc = 0x803028A4u;
    ctx->downcount -= 10;
    // 803028A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803028A8:
    ctx->pc = 0x803028A8u;
    // 803028A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803028AC:
    ctx->pc = 0x803028ACu;
    // 803028AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803028B0:
    ctx->pc = 0x803028B0u;
    // 803028B0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803028B4:
    ctx->pc = 0x803028B4u;
    // 803028B4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803028B8:
    ctx->pc = 0x803028B8u;
    // 803028B8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803028BC:
    ctx->pc = 0x803028BCu;
    // 803028BC: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803028C0:
    ctx->pc = 0x803028C0u;
    // 803028C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803028C4:
    ctx->pc = 0x803028C4u;
    // 803028C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803028C8u;
            ctx->pc = target;
            return;
        }
    }

label_803028C8:
    ctx->pc = 0x803028C8u;
    ctx->downcount -= 2;
    // 803028C8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803028CC:
    ctx->pc = 0x803028CCu;
    // 803028CC: bl      0x80302B00
    {
            ctx->lr = 0x803028D0u;
            goto label_80302B00;
    }

label_803028D0:
    ctx->pc = 0x803028D0u;
    ctx->downcount -= 6;
    // 803028D0: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803028D4:
    ctx->pc = 0x803028D4u;
    // 803028D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803028D8:
    ctx->pc = 0x803028D8u;
    // 803028D8: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803028DC:
    ctx->pc = 0x803028DCu;
    // 803028DC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803028E0:
    ctx->pc = 0x803028E0u;
    // 803028E0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803028E4u;
            ctx->pc = target;
            return;
        }
    }

label_803028E4:
    ctx->pc = 0x803028E4u;
    ctx->downcount -= 6;
    // 803028E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803028E8:
    ctx->pc = 0x803028E8u;
    // 803028E8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803028EC:
    ctx->pc = 0x803028ECu;
    // 803028EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803028F0:
    ctx->pc = 0x803028F0u;
    // 803028F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803028F4:
    ctx->pc = 0x803028F4u;
    // 803028F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803028F8:
    ctx->pc = 0x803028F8u;
    ctx->downcount -= 2;
    // 803028F8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803028FC:
    ctx->pc = 0x803028FCu;
    // 803028FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302900:
    ctx->pc = 0x80302900u;
    ctx->downcount -= 2;
    // 80302900: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80302904:
    ctx->pc = 0x80302904u;
    // 80302904: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302908:
    ctx->pc = 0x80302908u;
    ctx->downcount -= 17;
    // 80302908: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030290C:
    ctx->pc = 0x8030290Cu;
    // 8030290C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302910:
    ctx->pc = 0x80302910u;
    // 80302910: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302914:
    ctx->pc = 0x80302914u;
    // 80302914: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302918:
    ctx->pc = 0x80302918u;
    // 80302918: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030291C:
    ctx->pc = 0x8030291Cu;
    // 8030291C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302920:
    ctx->pc = 0x80302920u;
    // 80302920: bl      0x803457F4
    {
            ctx->lr = 0x80302924u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_80302924:
    ctx->pc = 0x80302924u;
    ctx->downcount -= 11;
    // 80302924: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302928:
    ctx->pc = 0x80302928u;
    // 80302928: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_8030292C:
    ctx->pc = 0x8030292Cu;
    // 8030292C: addi    r3, r3, 26240
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(26240);

label_80302930:
    ctx->pc = 0x80302930u;
    // 80302930: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302934:
    ctx->pc = 0x80302934u;
    // 80302934: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302938:
    ctx->pc = 0x80302938u;
    // 80302938: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030293C:
    ctx->pc = 0x8030293Cu;
    // 8030293C: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80302940:
    ctx->pc = 0x80302940u;
    // 80302940: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80302944:
    ctx->pc = 0x80302944u;
    // 80302944: bl      0x801C1C80
    {
            ctx->lr = 0x80302948u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80302948:
    ctx->pc = 0x80302948u;
    ctx->downcount -= 8;
    // 80302948: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030294C:
    ctx->pc = 0x8030294Cu;
    // 8030294C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80302950:
    ctx->pc = 0x80302950u;
    // 80302950: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302954:
    ctx->pc = 0x80302954u;
    // 80302954: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302958:
    ctx->pc = 0x80302958u;
    // 80302958: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030295C:
    ctx->pc = 0x8030295Cu;
    // 8030295C: bl      0x801C1C80
    {
            ctx->lr = 0x80302960u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80302960:
    ctx->pc = 0x80302960u;
    ctx->downcount -= 8;
    // 80302960: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302964:
    ctx->pc = 0x80302964u;
    // 80302964: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80302968:
    ctx->pc = 0x80302968u;
    // 80302968: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030296C:
    ctx->pc = 0x8030296Cu;
    // 8030296C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302970:
    ctx->pc = 0x80302970u;
    // 80302970: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302974:
    ctx->pc = 0x80302974u;
    // 80302974: bl      0x801C1C80
    {
            ctx->lr = 0x80302978u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80302978:
    ctx->pc = 0x80302978u;
    ctx->downcount -= 6;
    // 80302978: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_8030297C:
    ctx->pc = 0x8030297Cu;
    // 8030297C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302980:
    ctx->pc = 0x80302980u;
    // 80302980: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_80302984:
    ctx->pc = 0x80302984u;
    // 80302984: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302988:
    ctx->pc = 0x80302988u;
    // 80302988: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030298C:
    ctx->pc = 0x8030298Cu;
    // 8030298C: b       0x803029F8
    {
            goto label_803029F8;
    }

label_80302990:
    loop_80302990(ctx);
    if (ctx->pc == 0x80302A04u) goto label_80302A04;
    return;
label_80302994:
    // 80302994: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80302998:
    ctx->pc = 0x80302998u;
    // 80302998: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030299C:
    // 8030299C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803029A0:
    ctx->pc = 0x803029A0u;
    // 803029A0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803029A4:
    ctx->pc = 0x803029A4u;
    // 803029A4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803029A8:
    ctx->pc = 0x803029A8u;
    // 803029A8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029AC:
    ctx->pc = 0x803029ACu;
    // 803029AC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029B0:
    ctx->pc = 0x803029B0u;
    // 803029B0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029B4:
    ctx->pc = 0x803029B4u;
    // 803029B4: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803029B8:
    ctx->pc = 0x803029B8u;
    // 803029B8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029BC:
    // 803029BC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803029C0:
    ctx->pc = 0x803029C0u;
    // 803029C0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803029C4:
    ctx->pc = 0x803029C4u;
    // 803029C4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803029C8:
    ctx->pc = 0x803029C8u;
    // 803029C8: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029CC:
    ctx->pc = 0x803029CCu;
    // 803029CC: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029D0:
    ctx->pc = 0x803029D0u;
    // 803029D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029D4:
    ctx->pc = 0x803029D4u;
    // 803029D4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803029D8:
    ctx->pc = 0x803029D8u;
    // 803029D8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029DC:
    // 803029DC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_803029E0:
    ctx->pc = 0x803029E0u;
    // 803029E0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803029E4:
    ctx->pc = 0x803029E4u;
    // 803029E4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803029E8:
    // 803029E8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_803029EC:
    ctx->pc = 0x803029ECu;
    // 803029EC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029F0:
    ctx->pc = 0x803029F0u;
    // 803029F0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029F4:
    ctx->pc = 0x803029F4u;
    // 803029F4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803029F8:
    ctx->pc = 0x803029F8u;
    ctx->downcount -= 3;
    // 803029F8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803029FC:
    // 803029FC: cmpw    r7, r0
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

label_80302A00:
    // 80302A00: bc    12, 0, 0x80302990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302990u;
                return;
            }
            goto label_80302990;
        }
    }

label_80302A04:
    ctx->pc = 0x80302A04u;
    ctx->downcount -= 3;
    // 80302A04: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302A08:
    ctx->pc = 0x80302A08u;
    // 80302A08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302A0C:
    ctx->pc = 0x80302A0Cu;
    // 80302A0C: bl      0x803457CC
    {
            ctx->lr = 0x80302A10u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80302A10:
    ctx->pc = 0x80302A10u;
    ctx->downcount -= 17;
    // 80302A10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302A14:
    ctx->pc = 0x80302A14u;
    // 80302A14: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302A18:
    ctx->pc = 0x80302A18u;
    // 80302A18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302A1C:
    ctx->pc = 0x80302A1Cu;
    // 80302A1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302A20:
    ctx->pc = 0x80302A20u;
    // 80302A20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302A24:
    ctx->pc = 0x80302A24u;
    // 80302A24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302A28:
    ctx->pc = 0x80302A28u;
    ctx->downcount -= 20;
    // 80302A28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302A2C:
    ctx->pc = 0x80302A2Cu;
    // 80302A2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302A30:
    ctx->pc = 0x80302A30u;
    // 80302A30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302A34:
    ctx->pc = 0x80302A34u;
    // 80302A34: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302A38:
    ctx->pc = 0x80302A38u;
    // 80302A38: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80302A3C:
    ctx->pc = 0x80302A3Cu;
    // 80302A3C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302A40:
    ctx->pc = 0x80302A40u;
    // 80302A40: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302A44:
    ctx->pc = 0x80302A44u;
    // 80302A44: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80302A48:
    ctx->pc = 0x80302A48u;
    // 80302A48: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302A4C:
    ctx->pc = 0x80302A4Cu;
    // 80302A4C: bl      0x803456D0
    {
            ctx->lr = 0x80302A50u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80302A50:
    ctx->pc = 0x80302A50u;
    ctx->downcount -= 34;
    // 80302A50: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80302A54:
    ctx->pc = 0x80302A54u;
    // 80302A54: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302A58:
    ctx->pc = 0x80302A58u;
    // 80302A58: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302A5C:
    ctx->pc = 0x80302A5Cu;
    // 80302A5C: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302A60:
    ctx->pc = 0x80302A60u;
    // 80302A60: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302A64:
    ctx->pc = 0x80302A64u;
    // 80302A64: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302A68:
    ctx->pc = 0x80302A68u;
    // 80302A68: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302A6C:
    ctx->pc = 0x80302A6Cu;
    // 80302A6C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302A70:
    ctx->pc = 0x80302A70u;
    // 80302A70: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302A74:
    ctx->pc = 0x80302A74u;
    // 80302A74: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302A78:
    ctx->pc = 0x80302A78u;
    // 80302A78: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302A7C:
    ctx->pc = 0x80302A7Cu;
    // 80302A7C: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302A80:
    ctx->pc = 0x80302A80u;
    // 80302A80: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302A84:
    ctx->pc = 0x80302A84u;
    // 80302A84: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_80302A88:
    ctx->pc = 0x80302A88u;
    // 80302A88: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302A8C:
    ctx->pc = 0x80302A8Cu;
    // 80302A8C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302A90:
    ctx->pc = 0x80302A90u;
    // 80302A90: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302A94:
    ctx->pc = 0x80302A94u;
    // 80302A94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302A98:
    ctx->pc = 0x80302A98u;
    // 80302A98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302A9C:
    ctx->pc = 0x80302A9Cu;
    // 80302A9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80302AA0:
    ctx->pc = 0x80302AA0u;
    // 80302AA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302AA4:
    ctx->pc = 0x80302AA4u;
    ctx->downcount -= 19;
    // 80302AA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302AA8:
    ctx->pc = 0x80302AA8u;
    // 80302AA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302AAC:
    ctx->pc = 0x80302AACu;
    // 80302AAC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302AB0:
    ctx->pc = 0x80302AB0u;
    // 80302AB0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302AB4:
    ctx->pc = 0x80302AB4u;
    // 80302AB4: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80302AB8:
    ctx->pc = 0x80302AB8u;
    // 80302AB8: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80302ABC:
    ctx->pc = 0x80302ABCu;
    // 80302ABC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302AC0:
    ctx->pc = 0x80302AC0u;
    // 80302AC0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302AC4:
    ctx->pc = 0x80302AC4u;
    // 80302AC4: bl      0x80302A28
    {
            ctx->lr = 0x80302AC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302A28u;
                return;
            }
            goto label_80302A28;
    }

label_80302AC8:
    ctx->pc = 0x80302AC8u;
    ctx->downcount -= 27;
    // 80302AC8: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80302ACC:
    ctx->pc = 0x80302ACCu;
    // 80302ACC: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80302AD0:
    ctx->pc = 0x80302AD0u;
    // 80302AD0: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302AD4:
    ctx->pc = 0x80302AD4u;
    // 80302AD4: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302AD8:
    ctx->pc = 0x80302AD8u;
    // 80302AD8: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80302ADC:
    ctx->pc = 0x80302ADCu;
    // 80302ADC: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302AE0:
    ctx->pc = 0x80302AE0u;
    // 80302AE0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302AE4:
    ctx->pc = 0x80302AE4u;
    // 80302AE4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80302AE8:
    ctx->pc = 0x80302AE8u;
    // 80302AE8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302AEC:
    ctx->pc = 0x80302AECu;
    // 80302AEC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302AF0:
    ctx->pc = 0x80302AF0u;
    // 80302AF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302AF4:
    ctx->pc = 0x80302AF4u;
    // 80302AF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302AF8:
    ctx->pc = 0x80302AF8u;
    // 80302AF8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80302AFC:
    ctx->pc = 0x80302AFCu;
    // 80302AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302B00:
    ctx->pc = 0x80302B00u;
    ctx->downcount -= 8;
    // 80302B00: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302B04:
    ctx->pc = 0x80302B04u;
    // 80302B04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302B08:
    ctx->pc = 0x80302B08u;
    // 80302B08: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302B0C:
    ctx->pc = 0x80302B0Cu;
    // 80302B0C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302B10:
    ctx->pc = 0x80302B10u;
    // 80302B10: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302B14:
    ctx->pc = 0x80302B14u;
    // 80302B14: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80302B18:
    ctx->pc = 0x80302B18u;
    // 80302B18: cmpwi   r0, 0
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

label_80302B1C:
    ctx->pc = 0x80302B1Cu;
    // 80302B1C: bc    12, 2, 0x80302B40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302B40;
        }
    }

label_80302B20:
    ctx->pc = 0x80302B20u;
    ctx->downcount -= 3;
    // 80302B20: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80302B24:
    ctx->pc = 0x80302B24u;
    // 80302B24: cmpwi   r0, 0
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

label_80302B28:
    ctx->pc = 0x80302B28u;
    // 80302B28: bc    12, 2, 0x80302B30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302B30;
        }
    }

label_80302B2C:
    ctx->pc = 0x80302B2Cu;
    ctx->downcount -= 1;
    // 80302B2C: bl      0x80302C24
    {
            ctx->lr = 0x80302B30u;
            goto label_80302C24;
    }

label_80302B30:
    ctx->pc = 0x80302B30u;
    ctx->downcount -= 2;
    // 80302B30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302B34:
    ctx->pc = 0x80302B34u;
    // 80302B34: bl      0x803456D4
    {
            ctx->lr = 0x80302B38u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_80302B38:
    ctx->pc = 0x80302B38u;
    ctx->downcount -= 2;
    // 80302B38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302B3C:
    ctx->pc = 0x80302B3Cu;
    // 80302B3C: bl      0x80302B64
    {
            ctx->lr = 0x80302B40u;
            goto label_80302B64;
    }

label_80302B40:
    ctx->pc = 0x80302B40u;
    ctx->downcount -= 2;
    // 80302B40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302B44:
    ctx->pc = 0x80302B44u;
    // 80302B44: bl      0x80302BC4
    {
            ctx->lr = 0x80302B48u;
            goto label_80302BC4;
    }

label_80302B48:
    ctx->pc = 0x80302B48u;
    ctx->downcount -= 2;
    // 80302B48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302B4C:
    ctx->pc = 0x80302B4Cu;
    // 80302B4C: bl      0x803456F8
    {
            ctx->lr = 0x80302B50u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_80302B50:
    ctx->pc = 0x80302B50u;
    ctx->downcount -= 6;
    // 80302B50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302B54:
    ctx->pc = 0x80302B54u;
    // 80302B54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302B58:
    ctx->pc = 0x80302B58u;
    // 80302B58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302B5C:
    ctx->pc = 0x80302B5Cu;
    // 80302B5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302B60:
    ctx->pc = 0x80302B60u;
    // 80302B60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302B64:
    ctx->pc = 0x80302B64u;
    ctx->downcount -= 12;
    // 80302B64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302B68:
    ctx->pc = 0x80302B68u;
    // 80302B68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302B6C:
    ctx->pc = 0x80302B6Cu;
    // 80302B6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302B70:
    ctx->pc = 0x80302B70u;
    // 80302B70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302B74:
    ctx->pc = 0x80302B74u;
    // 80302B74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302B78:
    ctx->pc = 0x80302B78u;
    // 80302B78: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302B7C:
    ctx->pc = 0x80302B7Cu;
    // 80302B7C: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302B80:
    ctx->pc = 0x80302B80u;
    // 80302B80: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302B84:
    ctx->pc = 0x80302B84u;
    // 80302B84: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80302B88:
    ctx->pc = 0x80302B88u;
    // 80302B88: bl      0x800076B4
    {
            ctx->lr = 0x80302B8Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80302B8C:
    ctx->pc = 0x80302B8Cu;
    ctx->downcount -= 2;
    // 80302B8C: cmpwi   r3, 0
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

label_80302B90:
    ctx->pc = 0x80302B90u;
    // 80302B90: bc    12, 2, 0x80302BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302BB0;
        }
    }

label_80302B94:
    ctx->pc = 0x80302B94u;
    ctx->downcount -= 8;
    // 80302B94: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302B98:
    ctx->pc = 0x80302B98u;
    // 80302B98: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302B9C:
    ctx->pc = 0x80302B9Cu;
    // 80302B9C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302BA0:
    ctx->pc = 0x80302BA0u;
    // 80302BA0: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302BA4:
    ctx->pc = 0x80302BA4u;
    // 80302BA4: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80302BA8:
    ctx->pc = 0x80302BA8u;
    // 80302BA8: bl      0x800076E4
    {
            ctx->lr = 0x80302BACu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80302BAC:
    ctx->pc = 0x80302BACu;
    ctx->downcount -= 1;
    // 80302BAC: nop
    // nop

label_80302BB0:
    ctx->pc = 0x80302BB0u;
    ctx->downcount -= 6;
    // 80302BB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302BB4:
    ctx->pc = 0x80302BB4u;
    // 80302BB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302BB8:
    ctx->pc = 0x80302BB8u;
    // 80302BB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302BBC:
    ctx->pc = 0x80302BBCu;
    // 80302BBC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302BC0:
    ctx->pc = 0x80302BC0u;
    // 80302BC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302BC4:
    ctx->pc = 0x80302BC4u;
    ctx->downcount -= 12;
    // 80302BC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302BC8:
    ctx->pc = 0x80302BC8u;
    // 80302BC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302BCC:
    ctx->pc = 0x80302BCCu;
    // 80302BCC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302BD0:
    ctx->pc = 0x80302BD0u;
    // 80302BD0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302BD4:
    ctx->pc = 0x80302BD4u;
    // 80302BD4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302BD8:
    ctx->pc = 0x80302BD8u;
    // 80302BD8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302BDC:
    ctx->pc = 0x80302BDCu;
    // 80302BDC: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302BE0:
    ctx->pc = 0x80302BE0u;
    // 80302BE0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302BE4:
    ctx->pc = 0x80302BE4u;
    // 80302BE4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80302BE8:
    ctx->pc = 0x80302BE8u;
    // 80302BE8: bl      0x800076B4
    {
            ctx->lr = 0x80302BECu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80302BEC:
    ctx->pc = 0x80302BECu;
    ctx->downcount -= 2;
    // 80302BEC: cmpwi   r3, 0
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

label_80302BF0:
    ctx->pc = 0x80302BF0u;
    // 80302BF0: bc    12, 2, 0x80302C10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302C10;
        }
    }

label_80302BF4:
    ctx->pc = 0x80302BF4u;
    ctx->downcount -= 8;
    // 80302BF4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302BF8:
    ctx->pc = 0x80302BF8u;
    // 80302BF8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302BFC:
    ctx->pc = 0x80302BFCu;
    // 80302BFC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302C00:
    ctx->pc = 0x80302C00u;
    // 80302C00: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302C04:
    ctx->pc = 0x80302C04u;
    // 80302C04: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80302C08:
    ctx->pc = 0x80302C08u;
    // 80302C08: bl      0x800076E4
    {
            ctx->lr = 0x80302C0Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80302C0C:
    ctx->pc = 0x80302C0Cu;
    ctx->downcount -= 1;
    // 80302C0C: nop
    // nop

label_80302C10:
    ctx->pc = 0x80302C10u;
    ctx->downcount -= 6;
    // 80302C10: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302C14:
    ctx->pc = 0x80302C14u;
    // 80302C14: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302C18:
    ctx->pc = 0x80302C18u;
    // 80302C18: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302C1C:
    ctx->pc = 0x80302C1Cu;
    // 80302C1C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302C20:
    ctx->pc = 0x80302C20u;
    // 80302C20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302C24:
    ctx->pc = 0x80302C24u;
    ctx->downcount -= 12;
    // 80302C24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302C28:
    ctx->pc = 0x80302C28u;
    // 80302C28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302C2C:
    ctx->pc = 0x80302C2Cu;
    // 80302C2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302C30:
    ctx->pc = 0x80302C30u;
    // 80302C30: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302C34:
    ctx->pc = 0x80302C34u;
    // 80302C34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302C38:
    ctx->pc = 0x80302C38u;
    // 80302C38: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302C3C:
    ctx->pc = 0x80302C3Cu;
    // 80302C3C: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302C40:
    ctx->pc = 0x80302C40u;
    // 80302C40: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302C44:
    ctx->pc = 0x80302C44u;
    // 80302C44: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80302C48:
    ctx->pc = 0x80302C48u;
    // 80302C48: bl      0x800076B4
    {
            ctx->lr = 0x80302C4Cu;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80302C4C:
    ctx->pc = 0x80302C4Cu;
    ctx->downcount -= 2;
    // 80302C4C: cmpwi   r3, 0
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

label_80302C50:
    ctx->pc = 0x80302C50u;
    // 80302C50: bc    12, 2, 0x80302C70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302C70;
        }
    }

label_80302C54:
    ctx->pc = 0x80302C54u;
    ctx->downcount -= 8;
    // 80302C54: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302C58:
    ctx->pc = 0x80302C58u;
    // 80302C58: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80302C5C:
    ctx->pc = 0x80302C5Cu;
    // 80302C5C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80302C60:
    ctx->pc = 0x80302C60u;
    // 80302C60: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302C64:
    ctx->pc = 0x80302C64u;
    // 80302C64: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80302C68:
    ctx->pc = 0x80302C68u;
    // 80302C68: bl      0x800076E4
    {
            ctx->lr = 0x80302C6Cu;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80302C6C:
    ctx->pc = 0x80302C6Cu;
    ctx->downcount -= 1;
    // 80302C6C: nop
    // nop

label_80302C70:
    ctx->pc = 0x80302C70u;
    ctx->downcount -= 6;
    // 80302C70: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302C74:
    ctx->pc = 0x80302C74u;
    // 80302C74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302C78:
    ctx->pc = 0x80302C78u;
    // 80302C78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302C7C:
    ctx->pc = 0x80302C7Cu;
    // 80302C7C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302C80:
    ctx->pc = 0x80302C80u;
    // 80302C80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302C84:
    ctx->pc = 0x80302C84u;
    ctx->downcount -= 2;
    // 80302C84: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80302C88:
    ctx->pc = 0x80302C88u;
    // 80302C88: b       0x802C8E88
    {
            ctx->pc = 0x802C8E88u;
            return;
    }

label_80302C8C:
    ctx->pc = 0x80302C8Cu;
    ctx->downcount -= 2;
    // 80302C8C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80302C90:
    ctx->pc = 0x80302C90u;
    // 80302C90: b       0x802C8EF0
    {
            ctx->pc = 0x802C8EF0u;
            return;
    }

label_80302C94:
    ctx->pc = 0x80302C94u;
    ctx->downcount -= 2;
    // 80302C94: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80302C98:
    ctx->pc = 0x80302C98u;
    // 80302C98: b       0x802C8FB8
    {
            ctx->pc = 0x802C8FB8u;
            return;
    }

label_80302C9C:
    ctx->pc = 0x80302C9Cu;
    ctx->downcount -= 6;
    // 80302C9C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302CA0:
    ctx->pc = 0x80302CA0u;
    // 80302CA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302CA4:
    ctx->pc = 0x80302CA4u;
    // 80302CA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302CA8:
    ctx->pc = 0x80302CA8u;
    // 80302CA8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302CAC:
    ctx->pc = 0x80302CACu;
    // 80302CAC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302CB0:
    ctx->pc = 0x80302CB0u;
    // 80302CB0: bl      0x8024BAA4
    {
            ctx->lr = 0x80302CB4u;
            ctx->pc = 0x8024BAA4u;
            return;
    }

label_80302CB4:
    ctx->pc = 0x80302CB4u;
    ctx->downcount -= 2;
    // 80302CB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302CB8:
    ctx->pc = 0x80302CB8u;
    // 80302CB8: bl      0x8030AF6C
    {
            ctx->lr = 0x80302CBCu;
            ctx->pc = 0x8030AF6Cu;
            return;
    }

label_80302CBC:
    ctx->pc = 0x80302CBCu;
    ctx->downcount -= 6;
    // 80302CBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302CC0:
    ctx->pc = 0x80302CC0u;
    // 80302CC0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302CC4:
    ctx->pc = 0x80302CC4u;
    // 80302CC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302CC8:
    ctx->pc = 0x80302CC8u;
    // 80302CC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302CCC:
    ctx->pc = 0x80302CCCu;
    // 80302CCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302CD0:
    ctx->pc = 0x80302CD0u;
    ctx->downcount -= 9;
    // 80302CD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302CD4:
    ctx->pc = 0x80302CD4u;
    // 80302CD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302CD8:
    ctx->pc = 0x80302CD8u;
    // 80302CD8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302CDC:
    ctx->pc = 0x80302CDCu;
    // 80302CDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302CE0:
    ctx->pc = 0x80302CE0u;
    // 80302CE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302CE4:
    ctx->pc = 0x80302CE4u;
    // 80302CE4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80302CE8:
    ctx->pc = 0x80302CE8u;
    // 80302CE8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302CEC:
    ctx->pc = 0x80302CECu;
    // 80302CEC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302CF0:
    ctx->pc = 0x80302CF0u;
    // 80302CF0: bl      0x8024C090
    {
            ctx->lr = 0x80302CF4u;
            ctx->pc = 0x8024C090u;
            return;
    }

label_80302CF4:
    ctx->pc = 0x80302CF4u;
    ctx->downcount -= 10;
    // 80302CF4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_80302CF8:
    ctx->pc = 0x80302CF8u;
    // 80302CF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302CFC:
    ctx->pc = 0x80302CFCu;
    // 80302CFC: addi    r4, r4, 26256
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(26256);

label_80302D00:
    ctx->pc = 0x80302D00u;
    // 80302D00: stw     r4, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80302D04:
    ctx->pc = 0x80302D04u;
    // 80302D04: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302D08:
    ctx->pc = 0x80302D08u;
    // 80302D08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302D0C:
    ctx->pc = 0x80302D0Cu;
    // 80302D0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302D10:
    ctx->pc = 0x80302D10u;
    // 80302D10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302D14:
    ctx->pc = 0x80302D14u;
    // 80302D14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302D18:
    ctx->pc = 0x80302D18u;
    ctx->downcount -= 7;
    // 80302D18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302D1C:
    ctx->pc = 0x80302D1Cu;
    // 80302D1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302D20:
    ctx->pc = 0x80302D20u;
    // 80302D20: cmpwi   r3, 0
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

label_80302D24:
    ctx->pc = 0x80302D24u;
    // 80302D24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302D28:
    ctx->pc = 0x80302D28u;
    // 80302D28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302D2C:
    ctx->pc = 0x80302D2Cu;
    // 80302D2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302D30:
    ctx->pc = 0x80302D30u;
    // 80302D30: bc    12, 2, 0x80302D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302D40;
        }
    }

label_80302D34:
    ctx->pc = 0x80302D34u;
    ctx->downcount -= 2;
    // 80302D34: cmpwi   r4, 0
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

label_80302D38:
    ctx->pc = 0x80302D38u;
    // 80302D38: bc    4, 1, 0x80302D40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302D40;
        }
    }

label_80302D3C:
    ctx->pc = 0x80302D3Cu;
    ctx->downcount -= 1;
    // 80302D3C: bl      0x801C1C90
    {
            ctx->lr = 0x80302D40u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80302D40:
    ctx->pc = 0x80302D40u;
    ctx->downcount -= 7;
    // 80302D40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302D44:
    ctx->pc = 0x80302D44u;
    // 80302D44: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302D48:
    ctx->pc = 0x80302D48u;
    // 80302D48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302D4C:
    ctx->pc = 0x80302D4Cu;
    // 80302D4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302D50:
    ctx->pc = 0x80302D50u;
    // 80302D50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302D54:
    ctx->pc = 0x80302D54u;
    // 80302D54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302D58:
    ctx->pc = 0x80302D58u;
    ctx->downcount -= 8;
    // 80302D58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302D5C:
    ctx->pc = 0x80302D5Cu;
    // 80302D5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302D60:
    ctx->pc = 0x80302D60u;
    // 80302D60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302D64:
    ctx->pc = 0x80302D64u;
    // 80302D64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302D68:
    ctx->pc = 0x80302D68u;
    // 80302D68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302D6C:
    ctx->pc = 0x80302D6Cu;
    // 80302D6C: lbz     r0, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80302D70:
    ctx->pc = 0x80302D70u;
    // 80302D70: cmpwi   r0, 0
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

label_80302D74:
    ctx->pc = 0x80302D74u;
    // 80302D74: bc    4, 2, 0x80302DE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302DE0;
        }
    }

label_80302D78:
    ctx->pc = 0x80302D78u;
    ctx->downcount -= 3;
    // 80302D78: lwz     r3, -14104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80302D7C:
    ctx->pc = 0x80302D7Cu;
    // 80302D7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302D80:
    ctx->pc = 0x80302D80u;
    // 80302D80: bl      0x801C4AB8
    {
            ctx->lr = 0x80302D84u;
            ctx->pc = 0x801C4AB8u;
            return;
    }

label_80302D84:
    ctx->pc = 0x80302D84u;
    ctx->downcount -= 2;
    // 80302D84: li      r4, 2048
    ctx->gpr[4] = (u32)(s32)(2048);

label_80302D88:
    ctx->pc = 0x80302D88u;
    // 80302D88: bl      0x80240F78
    {
            ctx->lr = 0x80302D8Cu;
            ctx->pc = 0x80240F78u;
            return;
    }

label_80302D8C:
    ctx->pc = 0x80302D8Cu;
    ctx->downcount -= 2;
    // 80302D8C: cmpwi   r3, 0
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

label_80302D90:
    ctx->pc = 0x80302D90u;
    // 80302D90: bc    12, 2, 0x80302E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302E18;
        }
    }

label_80302D94:
    ctx->pc = 0x80302D94u;
    ctx->downcount -= 3;
    // 80302D94: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80302D98:
    ctx->pc = 0x80302D98u;
    // 80302D98: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80302D9C:
    ctx->pc = 0x80302D9Cu;
    // 80302D9C: bl      0x8026FEDC
    {
            ctx->lr = 0x80302DA0u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_80302DA0:
    ctx->pc = 0x80302DA0u;
    ctx->downcount -= 4;
    // 80302DA0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80302DA4:
    ctx->pc = 0x80302DA4u;
    // 80302DA4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80302DA8:
    ctx->pc = 0x80302DA8u;
    // 80302DA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80302DAC:
    ctx->pc = 0x80302DACu;
    // 80302DAC: bl      0x8026FEF0
    {
            ctx->lr = 0x80302DB0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80302DB0:
    ctx->pc = 0x80302DB0u;
    ctx->downcount -= 3;
    // 80302DB0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80302DB4:
    ctx->pc = 0x80302DB4u;
    // 80302DB4: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80302DB8:
    ctx->pc = 0x80302DB8u;
    // 80302DB8: bl      0x8026F6AC
    {
            ctx->lr = 0x80302DBCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80302DBC:
    ctx->pc = 0x80302DBCu;
    ctx->downcount -= 1;
    // 80302DBC: bl      0x8025EC94
    {
            ctx->lr = 0x80302DC0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_80302DC0:
    ctx->pc = 0x80302DC0u;
    ctx->downcount -= 2;
    // 80302DC0: li      r3, 103
    ctx->gpr[3] = (u32)(s32)(103);

label_80302DC4:
    ctx->pc = 0x80302DC4u;
    // 80302DC4: bl      0x802B73BC
    {
            ctx->lr = 0x80302DC8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80302DC8:
    ctx->pc = 0x80302DC8u;
    ctx->downcount -= 3;
    // 80302DC8: li      r3, 104
    ctx->gpr[3] = (u32)(s32)(104);

label_80302DCC:
    ctx->pc = 0x80302DCCu;
    // 80302DCC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80302DD0:
    ctx->pc = 0x80302DD0u;
    // 80302DD0: bl      0x802B735C
    {
            ctx->lr = 0x80302DD4u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80302DD4:
    ctx->pc = 0x80302DD4u;
    ctx->downcount -= 3;
    // 80302DD4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80302DD8:
    ctx->pc = 0x80302DD8u;
    // 80302DD8: stb     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80302DDC:
    ctx->pc = 0x80302DDCu;
    // 80302DDC: b       0x80302E18
    {
            goto label_80302E18;
    }

label_80302DE0:
    ctx->pc = 0x80302DE0u;
    ctx->downcount -= 3;
    // 80302DE0: lbz     r0, 289(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(289);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80302DE4:
    ctx->pc = 0x80302DE4u;
    // 80302DE4: cmpwi   r0, 0
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

label_80302DE8:
    ctx->pc = 0x80302DE8u;
    // 80302DE8: bc    4, 2, 0x80302E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80302E18;
        }
    }

label_80302DEC:
    ctx->pc = 0x80302DECu;
    ctx->downcount -= 3;
    // 80302DEC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80302DF0:
    ctx->pc = 0x80302DF0u;
    // 80302DF0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80302DF4:
    ctx->pc = 0x80302DF4u;
    // 80302DF4: bl      0x8026F6AC
    {
            ctx->lr = 0x80302DF8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80302DF8:
    ctx->pc = 0x80302DF8u;
    ctx->downcount -= 1;
    // 80302DF8: bl      0x8025EAF8
    {
            ctx->lr = 0x80302DFCu;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_80302DFC:
    ctx->pc = 0x80302DFCu;
    ctx->downcount -= 2;
    // 80302DFC: cmpwi   r3, 0
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

label_80302E00:
    ctx->pc = 0x80302E00u;
    // 80302E00: bc    12, 2, 0x80302E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80302E18;
        }
    }

label_80302E04:
    ctx->pc = 0x80302E04u;
    ctx->downcount -= 3;
    // 80302E04: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80302E08:
    ctx->pc = 0x80302E08u;
    // 80302E08: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80302E0C:
    ctx->pc = 0x80302E0Cu;
    // 80302E0C: bl      0x8026FEDC
    {
            ctx->lr = 0x80302E10u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_80302E10:
    ctx->pc = 0x80302E10u;
    ctx->downcount -= 2;
    // 80302E10: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80302E14:
    ctx->pc = 0x80302E14u;
    // 80302E14: stb     r0, 289(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(289);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80302E18:
    ctx->pc = 0x80302E18u;
    ctx->downcount -= 6;
    // 80302E18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302E1C:
    ctx->pc = 0x80302E1Cu;
    // 80302E1C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302E20:
    ctx->pc = 0x80302E20u;
    // 80302E20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302E24:
    ctx->pc = 0x80302E24u;
    // 80302E24: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302E28:
    ctx->pc = 0x80302E28u;
    // 80302E28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302E2C:
    ctx->pc = 0x80302E2Cu;
    ctx->downcount -= 1;
    // 80302E2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302E30:
    ctx->pc = 0x80302E30u;
    ctx->downcount -= 23;
    // 80302E30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302E34:
    ctx->pc = 0x80302E34u;
    // 80302E34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302E38:
    ctx->pc = 0x80302E38u;
    // 80302E38: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80302E3C:
    ctx->pc = 0x80302E3Cu;
    // 80302E3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302E40:
    ctx->pc = 0x80302E40u;
    // 80302E40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302E44:
    ctx->pc = 0x80302E44u;
    // 80302E44: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80302E48:
    ctx->pc = 0x80302E48u;
    // 80302E48: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302E4C:
    ctx->pc = 0x80302E4Cu;
    // 80302E4C: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80302E50:
    ctx->pc = 0x80302E50u;
    // 80302E50: addi    r4, r31, 17000
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17000);

label_80302E54:
    ctx->pc = 0x80302E54u;
    // 80302E54: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302E58:
    ctx->pc = 0x80302E58u;
    // 80302E58: addi    r5, r4, 15
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15);

label_80302E5C:
    ctx->pc = 0x80302E5Cu;
    // 80302E5C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80302E60:
    ctx->pc = 0x80302E60u;
    // 80302E60: bl      0x802703A8
    {
            ctx->lr = 0x80302E64u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80302E64:
    ctx->pc = 0x80302E64u;
    ctx->downcount -= 7;
    // 80302E64: addi    r31, r31, 17000
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17000);

label_80302E68:
    ctx->pc = 0x80302E68u;
    // 80302E68: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302E6C:
    ctx->pc = 0x80302E6Cu;
    // 80302E6C: addi    r5, r31, 31
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(31);

label_80302E70:
    ctx->pc = 0x80302E70u;
    // 80302E70: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302E74:
    ctx->pc = 0x80302E74u;
    // 80302E74: addi    r6, r31, 34
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(34);

label_80302E78:
    ctx->pc = 0x80302E78u;
    // 80302E78: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302E7C:
    ctx->pc = 0x80302E7Cu;
    // 80302E7C: bl      0x8027035C
    {
            ctx->lr = 0x80302E80u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80302E80:
    ctx->pc = 0x80302E80u;
    ctx->downcount -= 6;
    // 80302E80: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302E84:
    ctx->pc = 0x80302E84u;
    // 80302E84: addi    r5, r31, 45
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(45);

label_80302E88:
    ctx->pc = 0x80302E88u;
    // 80302E88: addi    r6, r31, 34
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(34);

label_80302E8C:
    ctx->pc = 0x80302E8Cu;
    // 80302E8C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80302E90:
    ctx->pc = 0x80302E90u;
    // 80302E90: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302E94:
    ctx->pc = 0x80302E94u;
    // 80302E94: bl      0x8027035C
    {
            ctx->lr = 0x80302E98u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80302E98:
    ctx->pc = 0x80302E98u;
    ctx->downcount -= 6;
    // 80302E98: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302E9C:
    ctx->pc = 0x80302E9Cu;
    // 80302E9C: addi    r5, r31, 49
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(49);

label_80302EA0:
    ctx->pc = 0x80302EA0u;
    // 80302EA0: addi    r6, r31, 59
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(59);

label_80302EA4:
    ctx->pc = 0x80302EA4u;
    // 80302EA4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80302EA8:
    ctx->pc = 0x80302EA8u;
    // 80302EA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302EAC:
    ctx->pc = 0x80302EACu;
    // 80302EAC: bl      0x8027035C
    {
            ctx->lr = 0x80302EB0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80302EB0:
    ctx->pc = 0x80302EB0u;
    ctx->downcount -= 6;
    // 80302EB0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302EB4:
    ctx->pc = 0x80302EB4u;
    // 80302EB4: addi    r5, r31, 70
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(70);

label_80302EB8:
    ctx->pc = 0x80302EB8u;
    // 80302EB8: addi    r6, r31, 59
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(59);

label_80302EBC:
    ctx->pc = 0x80302EBCu;
    // 80302EBC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80302EC0:
    ctx->pc = 0x80302EC0u;
    // 80302EC0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80302EC4:
    ctx->pc = 0x80302EC4u;
    // 80302EC4: bl      0x8027035C
    {
            ctx->lr = 0x80302EC8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80302EC8:
    ctx->pc = 0x80302EC8u;
    ctx->downcount -= 4;
    // 80302EC8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302ECC:
    ctx->pc = 0x80302ECCu;
    // 80302ECC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80302ED0:
    ctx->pc = 0x80302ED0u;
    // 80302ED0: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80302ED4:
    ctx->pc = 0x80302ED4u;
    // 80302ED4: bl      0x80270194
    {
            ctx->lr = 0x80302ED8u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80302ED8:
    ctx->pc = 0x80302ED8u;
    ctx->downcount -= 16;
    // 80302ED8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302EDC:
    ctx->pc = 0x80302EDCu;
    // 80302EDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302EE0:
    ctx->pc = 0x80302EE0u;
    // 80302EE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302EE4:
    ctx->pc = 0x80302EE4u;
    // 80302EE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302EE8:
    ctx->pc = 0x80302EE8u;
    // 80302EE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302EEC:
    ctx->pc = 0x80302EECu;
    ctx->downcount -= 10;
    // 80302EEC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302EF0:
    ctx->pc = 0x80302EF0u;
    // 80302EF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302EF4:
    ctx->pc = 0x80302EF4u;
    // 80302EF4: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80302EF8:
    ctx->pc = 0x80302EF8u;
    // 80302EF8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80302EFC:
    ctx->pc = 0x80302EFCu;
    // 80302EFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302F00:
    ctx->pc = 0x80302F00u;
    // 80302F00: addi    r5, r5, 17000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17000);

label_80302F04:
    ctx->pc = 0x80302F04u;
    // 80302F04: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302F08:
    ctx->pc = 0x80302F08u;
    // 80302F08: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302F0C:
    ctx->pc = 0x80302F0Cu;
    // 80302F0C: addi    r4, r5, 85
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(85);

label_80302F10:
    ctx->pc = 0x80302F10u;
    // 80302F10: bl      0x8026F960
    {
            ctx->lr = 0x80302F14u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80302F14:
    ctx->pc = 0x80302F14u;
    ctx->downcount -= 2;
    // 80302F14: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302F18:
    ctx->pc = 0x80302F18u;
    // 80302F18: bl      0x80260AA4
    {
            ctx->lr = 0x80302F1Cu;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_80302F1C:
    ctx->pc = 0x80302F1Cu;
    ctx->downcount -= 6;
    // 80302F1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302F20:
    ctx->pc = 0x80302F20u;
    // 80302F20: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302F24:
    ctx->pc = 0x80302F24u;
    // 80302F24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302F28:
    ctx->pc = 0x80302F28u;
    // 80302F28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302F2C:
    ctx->pc = 0x80302F2Cu;
    // 80302F2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302F30:
    ctx->pc = 0x80302F30u;
    ctx->downcount -= 10;
    // 80302F30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302F34:
    ctx->pc = 0x80302F34u;
    // 80302F34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302F38:
    ctx->pc = 0x80302F38u;
    // 80302F38: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80302F3C:
    ctx->pc = 0x80302F3Cu;
    // 80302F3C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80302F40:
    ctx->pc = 0x80302F40u;
    // 80302F40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302F44:
    ctx->pc = 0x80302F44u;
    // 80302F44: addi    r5, r5, 17000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17000);

label_80302F48:
    ctx->pc = 0x80302F48u;
    // 80302F48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80302F4C:
    ctx->pc = 0x80302F4Cu;
    // 80302F4C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302F50:
    ctx->pc = 0x80302F50u;
    // 80302F50: addi    r4, r5, 98
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(98);

label_80302F54:
    ctx->pc = 0x80302F54u;
    // 80302F54: bl      0x8026F960
    {
            ctx->lr = 0x80302F58u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80302F58:
    ctx->pc = 0x80302F58u;
    ctx->downcount -= 2;
    // 80302F58: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302F5C:
    ctx->pc = 0x80302F5Cu;
    // 80302F5C: bl      0x80260AA4
    {
            ctx->lr = 0x80302F60u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_80302F60:
    ctx->pc = 0x80302F60u;
    ctx->downcount -= 6;
    // 80302F60: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302F64:
    ctx->pc = 0x80302F64u;
    // 80302F64: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80302F68:
    ctx->pc = 0x80302F68u;
    // 80302F68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302F6C:
    ctx->pc = 0x80302F6Cu;
    // 80302F6C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302F70:
    ctx->pc = 0x80302F70u;
    // 80302F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302F74:
    ctx->pc = 0x80302F74u;
    ctx->downcount -= 21;
    // 80302F74: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302F78:
    ctx->pc = 0x80302F78u;
    // 80302F78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302F7C:
    ctx->pc = 0x80302F7Cu;
    // 80302F7C: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80302F80:
    ctx->pc = 0x80302F80u;
    // 80302F80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302F84:
    ctx->pc = 0x80302F84u;
    // 80302F84: addi    r5, r5, 17000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17000);

label_80302F88:
    ctx->pc = 0x80302F88u;
    // 80302F88: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302F8C:
    ctx->pc = 0x80302F8Cu;
    // 80302F8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302F90:
    ctx->pc = 0x80302F90u;
    // 80302F90: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80302F94:
    ctx->pc = 0x80302F94u;
    // 80302F94: addi    r4, r5, 109
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(109);

label_80302F98:
    ctx->pc = 0x80302F98u;
    // 80302F98: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80302F9C:
    ctx->pc = 0x80302F9Cu;
    // 80302F9C: bl      0x8026F968
    {
            ctx->lr = 0x80302FA0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80302FA0:
    ctx->pc = 0x80302FA0u;
    ctx->downcount -= 7;
    // 80302FA0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302FA4:
    ctx->pc = 0x80302FA4u;
    // 80302FA4: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80302FA8:
    ctx->pc = 0x80302FA8u;
    // 80302FA8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80302FAC:
    ctx->pc = 0x80302FACu;
    // 80302FAC: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_80302FB0:
    ctx->pc = 0x80302FB0u;
    // 80302FB0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80302FB4:
    ctx->pc = 0x80302FB4u;
    // 80302FB4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80302FB8:
    ctx->pc = 0x80302FB8u;
    // 80302FB8: bl      0x8026F8C0
    {
            ctx->lr = 0x80302FBCu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80302FBC:
    ctx->pc = 0x80302FBCu;
    ctx->downcount -= 16;
    // 80302FBC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80302FC0:
    ctx->pc = 0x80302FC0u;
    // 80302FC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80302FC4:
    ctx->pc = 0x80302FC4u;
    // 80302FC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80302FC8:
    ctx->pc = 0x80302FC8u;
    // 80302FC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80302FCC:
    ctx->pc = 0x80302FCCu;
    // 80302FCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80302FD0:
    ctx->pc = 0x80302FD0u;
    ctx->downcount -= 20;
    // 80302FD0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80302FD4:
    ctx->pc = 0x80302FD4u;
    // 80302FD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80302FD8:
    ctx->pc = 0x80302FD8u;
    // 80302FD8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80302FDC:
    ctx->pc = 0x80302FDCu;
    // 80302FDC: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80302FE0:
    ctx->pc = 0x80302FE0u;
    // 80302FE0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80302FE4:
    ctx->pc = 0x80302FE4u;
    // 80302FE4: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80302FE8:
    ctx->pc = 0x80302FE8u;
    // 80302FE8: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80302FEC:
    ctx->pc = 0x80302FECu;
    // 80302FEC: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80302FF0:
    ctx->pc = 0x80302FF0u;
    // 80302FF0: addi    r31, r31, 17000
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(17000);

label_80302FF4:
    ctx->pc = 0x80302FF4u;
    // 80302FF4: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_80302FF8:
    ctx->downcount -= 6;
    // 80302FF8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80302FFC:
    // 80302FFC: addi    r5, r31, 122
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(122);

label_80303000:
    // 80303000: rlwinm r6, r30, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80303004:
    // 80303004: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80303008:
    // 80303008: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030300C:
    // 8030300C: bl      0x8000D074
    {
            ctx->lr = 0x80303010u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80303010:
    ctx->downcount -= 3;
    // 80303010: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80303014:
    // 80303014: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80303018:
    // 80303018: bl      0x8026F970
    {
            ctx->lr = 0x8030301Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030301C:
    ctx->downcount -= 10;
    // 8030301C: rlwinm r0, r30, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80303020:
    // 80303020: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80303024:
    // 80303024: subf   r0, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80303028:
    ctx->pc = 0x80303028u;
    // 80303028: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8030302C:
    // 8030302C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80303030:
    // 80303030: cmplwi  r30, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[30]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303034:
    // 80303034: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80303038:
    // 80303038: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030303C:
    ctx->pc = 0x8030303Cu;
    // 8030303C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80303040:
    // 80303040: bc    4, 1, 0x80302FF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80302FF8u;
                return;
            }
            goto label_80302FF8;
        }
    }

label_80303044:
    ctx->pc = 0x80303044u;
    ctx->downcount -= 5;
    // 80303044: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80303048:
    ctx->pc = 0x80303048u;
    // 80303048: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_8030304C:
    ctx->pc = 0x8030304Cu;
    // 8030304C: addi    r4, r4, 17000
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17000);

label_80303050:
    ctx->pc = 0x80303050u;
    // 80303050: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80303054:
    ctx->pc = 0x80303054u;
    // 80303054: bl      0x8026F968
    {
            ctx->lr = 0x80303058u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80303058:
    ctx->pc = 0x80303058u;
    ctx->downcount -= 3;
    // 80303058: cmplwi  r28, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030305C:
    ctx->pc = 0x8030305Cu;
    // 8030305C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303060:
    ctx->pc = 0x80303060u;
    // 80303060: bc    4, 2, 0x803030A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803030A8;
        }
    }

label_80303064:
    ctx->pc = 0x80303064u;
    ctx->downcount -= 2;
    // 80303064: cmplwi  r29, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303068:
    ctx->pc = 0x80303068u;
    // 80303068: bc    4, 2, 0x80303084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80303084;
        }
    }

label_8030306C:
    ctx->pc = 0x8030306Cu;
    ctx->downcount -= 6;
    // 8030306C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303070:
    ctx->pc = 0x80303070u;
    // 80303070: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80303074:
    ctx->pc = 0x80303074u;
    // 80303074: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_80303078:
    ctx->pc = 0x80303078u;
    // 80303078: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030307C:
    ctx->pc = 0x8030307Cu;
    // 8030307C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80303080:
    ctx->pc = 0x80303080u;
    // 80303080: bl      0x8026F8C0
    {
            ctx->lr = 0x80303084u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80303084:
    ctx->pc = 0x80303084u;
    ctx->downcount -= 2;
    // 80303084: cmplwi  r29, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[29]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80303088:
    ctx->pc = 0x80303088u;
    // 80303088: bc    4, 2, 0x803030C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803030C0;
        }
    }

label_8030308C:
    ctx->pc = 0x8030308Cu;
    ctx->downcount -= 6;
    // 8030308C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80303090:
    ctx->pc = 0x80303090u;
    // 80303090: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80303094:
    ctx->pc = 0x80303094u;
    // 80303094: li      r5, 65
    ctx->gpr[5] = (u32)(s32)(65);

label_80303098:
    ctx->pc = 0x80303098u;
    // 80303098: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030309C:
    ctx->pc = 0x8030309Cu;
    // 8030309C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803030A0:
    ctx->pc = 0x803030A0u;
    // 803030A0: bl      0x8026F8C0
    {
            ctx->lr = 0x803030A4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_803030A4:
    ctx->pc = 0x803030A4u;
    ctx->downcount -= 1;
    // 803030A4: b       0x803030C0
    {
            goto label_803030C0;
    }

label_803030A8:
    ctx->pc = 0x803030A8u;
    ctx->downcount -= 6;
    // 803030A8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803030AC:
    ctx->pc = 0x803030ACu;
    // 803030AC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_803030B0:
    ctx->pc = 0x803030B0u;
    // 803030B0: addi    r5, r29, 59
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(59);

label_803030B4:
    ctx->pc = 0x803030B4u;
    // 803030B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803030B8:
    ctx->pc = 0x803030B8u;
    // 803030B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803030BC:
    ctx->pc = 0x803030BCu;
    // 803030BC: bl      0x8026F8C0
    {
            ctx->lr = 0x803030C0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_803030C0:
    ctx->pc = 0x803030C0u;
    ctx->downcount -= 16;
    // 803030C0: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803030C4:
    ctx->pc = 0x803030C4u;
    // 803030C4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803030C8:
    ctx->pc = 0x803030C8u;
    // 803030C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803030CC:
    ctx->pc = 0x803030CCu;
    // 803030CC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_803030D0:
    ctx->pc = 0x803030D0u;
    // 803030D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_803030D4:
    ctx->pc = 0x803030D4u;
    ctx->downcount -= 21;
    // 803030D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803030D8:
    ctx->pc = 0x803030D8u;
    // 803030D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803030DC:
    ctx->pc = 0x803030DCu;
    // 803030DC: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_803030E0:
    ctx->pc = 0x803030E0u;
    // 803030E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803030E4:
    ctx->pc = 0x803030E4u;
    // 803030E4: addi    r5, r5, 17000
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17000);

label_803030E8:
    ctx->pc = 0x803030E8u;
    // 803030E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803030EC:
    ctx->pc = 0x803030ECu;
    // 803030EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803030F0:
    ctx->pc = 0x803030F0u;
    // 803030F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803030F4:
    ctx->pc = 0x803030F4u;
    // 803030F4: addi    r4, r5, 152
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(152);

label_803030F8:
    ctx->pc = 0x803030F8u;
    // 803030F8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803030FC:
    ctx->pc = 0x803030FCu;
    // 803030FC: bl      0x8026F968
    {
            ctx->lr = 0x80303100u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80303100:
    ctx->pc = 0x80303100u;
    ctx->downcount -= 7;
    // 80303100: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303104:
    ctx->pc = 0x80303104u;
    // 80303104: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80303108:
    ctx->pc = 0x80303108u;
    // 80303108: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030310C:
    ctx->pc = 0x8030310Cu;
    // 8030310C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80303110:
    ctx->pc = 0x80303110u;
    // 80303110: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80303114:
    ctx->pc = 0x80303114u;
    // 80303114: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80303118:
    ctx->pc = 0x80303118u;
    // 80303118: bl      0x8026F8C0
    {
            ctx->lr = 0x8030311Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030311C:
    ctx->pc = 0x8030311Cu;
    ctx->downcount -= 16;
    // 8030311C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80303120:
    ctx->pc = 0x80303120u;
    // 80303120: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303124:
    ctx->pc = 0x80303124u;
    // 80303124: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80303128:
    ctx->pc = 0x80303128u;
    // 80303128: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030312C:
    ctx->pc = 0x8030312Cu;
    // 8030312C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802FF1C0;
        }
    }

label_80303130:
    ctx->pc = 0x80303130u;
    ctx->downcount -= 9;
    // 80303130: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80303134:
    ctx->pc = 0x80303134u;
    // 80303134: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80303138:
    ctx->pc = 0x80303138u;
    // 80303138: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030313C:
    ctx->pc = 0x8030313Cu;
    // 8030313C: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80303140:
    ctx->pc = 0x80303140u;
    // 80303140: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80303144:
    ctx->pc = 0x80303144u;
    // 80303144: stw     r4, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80303148:
    ctx->pc = 0x80303148u;
    // 80303148: stw     r5, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030314C:
    ctx->pc = 0x8030314Cu;
    // 8030314C: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80303150:
    ctx->pc = 0x80303150u;
    // 80303150: bl      0x80300F58
    {
            ctx->lr = 0x80303154u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80300F58u;
                return;
            }
            goto label_80300F58;
    }

label_80303154:
    ctx->pc = 0x80303154u;
    ctx->downcount -= 5;
    // 80303154: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80303158:
    ctx->pc = 0x80303158u;
    // 80303158: addi    r6, r1, 4
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(4);

label_8030315C:
    ctx->pc = 0x8030315Cu;
    // 8030315C: addi    r4, r3, -4
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(-4);

label_80303160:
    ctx->pc = 0x80303160u;
    // 80303160: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80303164:
    loop_80303164(ctx);
    if (ctx->pc == 0x80303178u) goto label_80303178;
    return;
label_80303168:
    ctx->pc = 0x80303168u;
    // 80303168: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_8030316C:
    ctx->pc = 0x8030316Cu;
    // 8030316C: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80303170:
    ctx->pc = 0x80303170u;
    // 80303170: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_80303174:
    // 80303174: bc    16, 0, 0x80303164
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80303164u;
                return;
            }
            goto label_80303164;
        }
    }

label_80303178:
    ctx->pc = 0x80303178u;
    ctx->downcount -= 12;
    // 80303178: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030317C:
    ctx->pc = 0x8030317Cu;
    // 8030317C: addi    r5, r1, 20
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(20);

label_80303180:
    ctx->pc = 0x80303180u;
    // 80303180: stw     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80303184:
    ctx->pc = 0x80303184u;
    // 80303184: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80303188:
    ctx->pc = 0x80303188u;
    // 80303188: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030318C:
    ctx->pc = 0x8030318Cu;
    // 8030318C: lwz     r0, 276(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303190:
    ctx->pc = 0x80303190u;
    // 80303190: rlwinm r6, r0, 3, 0, 28
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_80303194:
    ctx->pc = 0x80303194u;
    // 80303194: lwzx    r0, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80303198:
    ctx->pc = 0x80303198u;
    // 80303198: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030319C:
    ctx->pc = 0x8030319Cu;
    // 8030319C: lwzx    r0, r4, r6
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[6];
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803031A0:
    ctx->pc = 0x803031A0u;
    // 803031A0: stw     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803031A4:
    ctx->pc = 0x803031A4u;
    // 803031A4: bl      0x80371554
    {
            ctx->lr = 0x803031A8u;
            ctx->pc = 0x80371554u;
            return;
    }

label_803031A8:
    ctx->pc = 0x803031A8u;
    ctx->downcount -= 4;
    // 803031A8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803031AC:
    ctx->pc = 0x803031ACu;
    // 803031AC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803031B0:
    ctx->pc = 0x803031B0u;
    // 803031B0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803031B4:
    ctx->pc = 0x803031B4u;
    // 803031B4: bl      0x8026FEF0
    {
            ctx->lr = 0x803031B8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_803031B8:
    ctx->pc = 0x803031B8u;
    ctx->downcount -= 2;
    // 803031B8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_803031BC:
    ctx->pc = 0x803031BCu;
    // 803031BC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

    ctx->pc = 0x803031C0u;
    return;
return_dispatch_802FF1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x802FF228u: goto label_802FF228;
    case 0x802FF238u: goto label_802FF238;
    case 0x802FF244u: goto label_802FF244;
    case 0x802FF250u: goto label_802FF250;
    case 0x802FF25Cu: goto label_802FF25C;
    case 0x802FF268u: goto label_802FF268;
    case 0x802FF274u: goto label_802FF274;
    case 0x802FF2ECu: goto label_802FF2EC;
    case 0x802FF32Cu: goto label_802FF32C;
    case 0x802FF34Cu: goto label_802FF34C;
    case 0x802FF39Cu: goto label_802FF39C;
    case 0x802FF3A8u: goto label_802FF3A8;
    case 0x802FF3B0u: goto label_802FF3B0;
    case 0x802FF3BCu: goto label_802FF3BC;
    case 0x802FF3C4u: goto label_802FF3C4;
    case 0x802FF3CCu: goto label_802FF3CC;
    case 0x802FF3D8u: goto label_802FF3D8;
    case 0x802FF3E0u: goto label_802FF3E0;
    case 0x802FF3ECu: goto label_802FF3EC;
    case 0x802FF3F4u: goto label_802FF3F4;
    case 0x802FF400u: goto label_802FF400;
    case 0x802FF408u: goto label_802FF408;
    case 0x802FF410u: goto label_802FF410;
    case 0x802FF41Cu: goto label_802FF41C;
    case 0x802FF424u: goto label_802FF424;
    case 0x802FF42Cu: goto label_802FF42C;
    case 0x802FF444u: goto label_802FF444;
    case 0x802FF450u: goto label_802FF450;
    case 0x802FF458u: goto label_802FF458;
    case 0x802FF460u: goto label_802FF460;
    case 0x802FF484u: goto label_802FF484;
    case 0x802FF49Cu: goto label_802FF49C;
    case 0x802FF4ACu: goto label_802FF4AC;
    case 0x802FF4D0u: goto label_802FF4D0;
    case 0x802FF4D8u: goto label_802FF4D8;
    case 0x802FF4F0u: goto label_802FF4F0;
    case 0x802FF528u: goto label_802FF528;
    case 0x802FF578u: goto label_802FF578;
    case 0x802FF5C0u: goto label_802FF5C0;
    case 0x802FF5CCu: goto label_802FF5CC;
    case 0x802FF5D8u: goto label_802FF5D8;
    case 0x802FF5E4u: goto label_802FF5E4;
    case 0x802FF5F0u: goto label_802FF5F0;
    case 0x802FF5FCu: goto label_802FF5FC;
    case 0x802FF608u: goto label_802FF608;
    case 0x802FF658u: goto label_802FF658;
    case 0x802FF670u: goto label_802FF670;
    case 0x802FF688u: goto label_802FF688;
    case 0x802FF700u: goto label_802FF700;
    case 0x802FF718u: goto label_802FF718;
    case 0x802FF730u: goto label_802FF730;
    case 0x802FF748u: goto label_802FF748;
    case 0x802FF758u: goto label_802FF758;
    case 0x802FF760u: goto label_802FF760;
    case 0x802FF77Cu: goto label_802FF77C;
    case 0x802FF7B0u: goto label_802FF7B0;
    case 0x802FF7E4u: goto label_802FF7E4;
    case 0x802FF89Cu: goto label_802FF89C;
    case 0x802FF8ACu: goto label_802FF8AC;
    case 0x802FF8B8u: goto label_802FF8B8;
    case 0x802FF8BCu: goto label_802FF8BC;
    case 0x802FF8C8u: goto label_802FF8C8;
    case 0x802FF8D8u: goto label_802FF8D8;
    case 0x802FF91Cu: goto label_802FF91C;
    case 0x802FF928u: goto label_802FF928;
    case 0x802FF934u: goto label_802FF934;
    case 0x802FF968u: goto label_802FF968;
    case 0x802FF9E4u: goto label_802FF9E4;
    case 0x802FFABCu: goto label_802FFABC;
    case 0x802FFAC8u: goto label_802FFAC8;
    case 0x802FFAD8u: goto label_802FFAD8;
    case 0x802FFB4Cu: goto label_802FFB4C;
    case 0x802FFB68u: goto label_802FFB68;
    case 0x802FFBB4u: goto label_802FFBB4;
    case 0x802FFBD0u: goto label_802FFBD0;
    case 0x802FFBE4u: goto label_802FFBE4;
    case 0x802FFC24u: goto label_802FFC24;
    case 0x802FFCF0u: goto label_802FFCF0;
    case 0x802FFCFCu: goto label_802FFCFC;
    case 0x802FFD34u: goto label_802FFD34;
    case 0x802FFD50u: goto label_802FFD50;
    case 0x802FFD68u: goto label_802FFD68;
    case 0x802FFD74u: goto label_802FFD74;
    case 0x802FFD8Cu: goto label_802FFD8C;
    case 0x802FFD94u: goto label_802FFD94;
    case 0x802FFDBCu: goto label_802FFDBC;
    case 0x802FFDD4u: goto label_802FFDD4;
    case 0x802FFDECu: goto label_802FFDEC;
    case 0x802FFE04u: goto label_802FFE04;
    case 0x802FFE18u: goto label_802FFE18;
    case 0x802FFE38u: goto label_802FFE38;
    case 0x802FFE48u: goto label_802FFE48;
    case 0x802FFEA0u: goto label_802FFEA0;
    case 0x802FFEACu: goto label_802FFEAC;
    case 0x802FFEBCu: goto label_802FFEBC;
    case 0x802FFEFCu: goto label_802FFEFC;
    case 0x802FFF38u: goto label_802FFF38;
    case 0x802FFF40u: goto label_802FFF40;
    case 0x802FFF54u: goto label_802FFF54;
    case 0x802FFF94u: goto label_802FFF94;
    case 0x802FFFB8u: goto label_802FFFB8;
    case 0x802FFFD0u: goto label_802FFFD0;
    case 0x802FFFE8u: goto label_802FFFE8;
    case 0x80300080u: goto label_80300080;
    case 0x803000C0u: goto label_803000C0;
    case 0x80300138u: goto label_80300138;
    case 0x803001A0u: goto label_803001A0;
    case 0x803001A8u: goto label_803001A8;
    case 0x803001B0u: goto label_803001B0;
    case 0x803001B8u: goto label_803001B8;
    case 0x803001C0u: goto label_803001C0;
    case 0x803001FCu: goto label_803001FC;
    case 0x8030021Cu: goto label_8030021C;
    case 0x8030025Cu: goto label_8030025C;
    case 0x8030027Cu: goto label_8030027C;
    case 0x803002BCu: goto label_803002BC;
    case 0x803002DCu: goto label_803002DC;
    case 0x80300324u: goto label_80300324;
    case 0x80300330u: goto label_80300330;
    case 0x80300340u: goto label_80300340;
    case 0x803003A4u: goto label_803003A4;
    case 0x803003C0u: goto label_803003C0;
    case 0x803003C8u: goto label_803003C8;
    case 0x803003E8u: goto label_803003E8;
    case 0x803003ECu: goto label_803003EC;
    case 0x80300400u: goto label_80300400;
    case 0x80300408u: goto label_80300408;
    case 0x80300410u: goto label_80300410;
    case 0x80300460u: goto label_80300460;
    case 0x80300474u: goto label_80300474;
    case 0x80300484u: goto label_80300484;
    case 0x803004A0u: goto label_803004A0;
    case 0x803004DCu: goto label_803004DC;
    case 0x803004E0u: goto label_803004E0;
    case 0x803004F0u: goto label_803004F0;
    case 0x8030050Cu: goto label_8030050C;
    case 0x80300518u: goto label_80300518;
    case 0x80300520u: goto label_80300520;
    case 0x80300530u: goto label_80300530;
    case 0x80300540u: goto label_80300540;
    case 0x8030054Cu: goto label_8030054C;
    case 0x80300554u: goto label_80300554;
    case 0x80300564u: goto label_80300564;
    case 0x803005CCu: goto label_803005CC;
    case 0x803005E4u: goto label_803005E4;
    case 0x803005FCu: goto label_803005FC;
    case 0x80300614u: goto label_80300614;
    case 0x8030062Cu: goto label_8030062C;
    case 0x80300644u: goto label_80300644;
    case 0x80300668u: goto label_80300668;
    case 0x80300678u: goto label_80300678;
    case 0x803006A4u: goto label_803006A4;
    case 0x803006A8u: goto label_803006A8;
    case 0x803006D4u: goto label_803006D4;
    case 0x803006E8u: goto label_803006E8;
    case 0x803006F8u: goto label_803006F8;
    case 0x80300704u: goto label_80300704;
    case 0x80300708u: goto label_80300708;
    case 0x80300714u: goto label_80300714;
    case 0x8030071Cu: goto label_8030071C;
    case 0x8030072Cu: goto label_8030072C;
    case 0x80300734u: goto label_80300734;
    case 0x80300768u: goto label_80300768;
    case 0x803007A4u: goto label_803007A4;
    case 0x803007FCu: goto label_803007FC;
    case 0x80300808u: goto label_80300808;
    case 0x80300818u: goto label_80300818;
    case 0x80300868u: goto label_80300868;
    case 0x803008C8u: goto label_803008C8;
    case 0x803008D8u: goto label_803008D8;
    case 0x8030099Cu: goto label_8030099C;
    case 0x80300A54u: goto label_80300A54;
    case 0x80300A64u: goto label_80300A64;
    case 0x80300AD8u: goto label_80300AD8;
    case 0x80300AF4u: goto label_80300AF4;
    case 0x80300B00u: goto label_80300B00;
    case 0x80300B10u: goto label_80300B10;
    case 0x80300B1Cu: goto label_80300B1C;
    case 0x80300B6Cu: goto label_80300B6C;
    case 0x80300B78u: goto label_80300B78;
    case 0x80300B88u: goto label_80300B88;
    case 0x80300CA8u: goto label_80300CA8;
    case 0x80300D08u: goto label_80300D08;
    case 0x80300D68u: goto label_80300D68;
    case 0x80300DC0u: goto label_80300DC0;
    case 0x80300DDCu: goto label_80300DDC;
    case 0x80300E30u: goto label_80300E30;
    case 0x80300E98u: goto label_80300E98;
    case 0x80300EA8u: goto label_80300EA8;
    case 0x80300F48u: goto label_80300F48;
    case 0x80300F94u: goto label_80300F94;
    case 0x80300FA4u: goto label_80300FA4;
    case 0x80300FC8u: goto label_80300FC8;
    case 0x80300FD4u: goto label_80300FD4;
    case 0x80301014u: goto label_80301014;
    case 0x80301020u: goto label_80301020;
    case 0x80301060u: goto label_80301060;
    case 0x8030106Cu: goto label_8030106C;
    case 0x803010A8u: goto label_803010A8;
    case 0x803010B4u: goto label_803010B4;
    case 0x80301114u: goto label_80301114;
    case 0x80301120u: goto label_80301120;
    case 0x80301180u: goto label_80301180;
    case 0x80301198u: goto label_80301198;
    case 0x803011E8u: goto label_803011E8;
    case 0x80301200u: goto label_80301200;
    case 0x80301250u: goto label_80301250;
    case 0x80301268u: goto label_80301268;
    case 0x803012B4u: goto label_803012B4;
    case 0x803012C4u: goto label_803012C4;
    case 0x80301310u: goto label_80301310;
    case 0x80301320u: goto label_80301320;
    case 0x80301380u: goto label_80301380;
    case 0x803013B4u: goto label_803013B4;
    case 0x803013BCu: goto label_803013BC;
    case 0x80301490u: goto label_80301490;
    case 0x8030149Cu: goto label_8030149C;
    case 0x803014ACu: goto label_803014AC;
    case 0x803014F0u: goto label_803014F0;
    case 0x80301500u: goto label_80301500;
    case 0x80301550u: goto label_80301550;
    case 0x8030157Cu: goto label_8030157C;
    case 0x80301590u: goto label_80301590;
    case 0x803015ECu: goto label_803015EC;
    case 0x8030161Cu: goto label_8030161C;
    case 0x80301684u: goto label_80301684;
    case 0x8030180Cu: goto label_8030180C;
    case 0x80301858u: goto label_80301858;
    case 0x80301898u: goto label_80301898;
    case 0x803018B4u: goto label_803018B4;
    case 0x803018D0u: goto label_803018D0;
    case 0x803018E8u: goto label_803018E8;
    case 0x803018F4u: goto label_803018F4;
    case 0x80301930u: goto label_80301930;
    case 0x80301944u: goto label_80301944;
    case 0x80301994u: goto label_80301994;
    case 0x803019BCu: goto label_803019BC;
    case 0x803019D4u: goto label_803019D4;
    case 0x803019E0u: goto label_803019E0;
    case 0x80301A3Cu: goto label_80301A3C;
    case 0x80301A48u: goto label_80301A48;
    case 0x80301A54u: goto label_80301A54;
    case 0x80301A88u: goto label_80301A88;
    case 0x80301A94u: goto label_80301A94;
    case 0x80301AA0u: goto label_80301AA0;
    case 0x80301AF0u: goto label_80301AF0;
    case 0x80301B08u: goto label_80301B08;
    case 0x80301B14u: goto label_80301B14;
    case 0x80301B48u: goto label_80301B48;
    case 0x80301B50u: goto label_80301B50;
    case 0x80301B60u: goto label_80301B60;
    case 0x80301B90u: goto label_80301B90;
    case 0x80301BECu: goto label_80301BEC;
    case 0x80301BF8u: goto label_80301BF8;
    case 0x80301C04u: goto label_80301C04;
    case 0x80301C48u: goto label_80301C48;
    case 0x80301C70u: goto label_80301C70;
    case 0x80301C7Cu: goto label_80301C7C;
    case 0x80301C90u: goto label_80301C90;
    case 0x80301CA4u: goto label_80301CA4;
    case 0x80301CB8u: goto label_80301CB8;
    case 0x80301CD0u: goto label_80301CD0;
    case 0x80301CE0u: goto label_80301CE0;
    case 0x80301CF4u: goto label_80301CF4;
    case 0x80301D0Cu: goto label_80301D0C;
    case 0x80301D18u: goto label_80301D18;
    case 0x80301D2Cu: goto label_80301D2C;
    case 0x80301D74u: goto label_80301D74;
    case 0x80301D8Cu: goto label_80301D8C;
    case 0x80301DA0u: goto label_80301DA0;
    case 0x80301DB4u: goto label_80301DB4;
    case 0x80301DCCu: goto label_80301DCC;
    case 0x80301DE0u: goto label_80301DE0;
    case 0x80301E38u: goto label_80301E38;
    case 0x80301E60u: goto label_80301E60;
    case 0x80301E74u: goto label_80301E74;
    case 0x80301E88u: goto label_80301E88;
    case 0x80301E9Cu: goto label_80301E9C;
    case 0x80301EA4u: goto label_80301EA4;
    case 0x80301EB4u: goto label_80301EB4;
    case 0x80301EC0u: goto label_80301EC0;
    case 0x80301ECCu: goto label_80301ECC;
    case 0x80301EDCu: goto label_80301EDC;
    case 0x80301EE8u: goto label_80301EE8;
    case 0x80301F40u: goto label_80301F40;
    case 0x80301F4Cu: goto label_80301F4C;
    case 0x80301F5Cu: goto label_80301F5C;
    case 0x80301FA8u: goto label_80301FA8;
    case 0x80301FB4u: goto label_80301FB4;
    case 0x80301FC4u: goto label_80301FC4;
    case 0x80302004u: goto label_80302004;
    case 0x80302044u: goto label_80302044;
    case 0x803020CCu: goto label_803020CC;
    case 0x803020D4u: goto label_803020D4;
    case 0x803020E8u: goto label_803020E8;
    case 0x80302128u: goto label_80302128;
    case 0x80302144u: goto label_80302144;
    case 0x8030215Cu: goto label_8030215C;
    case 0x80302168u: goto label_80302168;
    case 0x80302180u: goto label_80302180;
    case 0x80302188u: goto label_80302188;
    case 0x803021B0u: goto label_803021B0;
    case 0x803021C8u: goto label_803021C8;
    case 0x803021D4u: goto label_803021D4;
    case 0x803021E8u: goto label_803021E8;
    case 0x803021F4u: goto label_803021F4;
    case 0x80302208u: goto label_80302208;
    case 0x80302254u: goto label_80302254;
    case 0x80302260u: goto label_80302260;
    case 0x80302270u: goto label_80302270;
    case 0x803022A4u: goto label_803022A4;
    case 0x803022C8u: goto label_803022C8;
    case 0x803022E0u: goto label_803022E0;
    case 0x803022F8u: goto label_803022F8;
    case 0x80302390u: goto label_80302390;
    case 0x803023CCu: goto label_803023CC;
    case 0x80302434u: goto label_80302434;
    case 0x8030243Cu: goto label_8030243C;
    case 0x80302444u: goto label_80302444;
    case 0x8030244Cu: goto label_8030244C;
    case 0x80302454u: goto label_80302454;
    case 0x80302490u: goto label_80302490;
    case 0x803024B0u: goto label_803024B0;
    case 0x803024F0u: goto label_803024F0;
    case 0x80302510u: goto label_80302510;
    case 0x80302550u: goto label_80302550;
    case 0x80302570u: goto label_80302570;
    case 0x803025E4u: goto label_803025E4;
    case 0x8030260Cu: goto label_8030260C;
    case 0x80302644u: goto label_80302644;
    case 0x8030266Cu: goto label_8030266C;
    case 0x803026A4u: goto label_803026A4;
    case 0x803026CCu: goto label_803026CC;
    case 0x8030271Cu: goto label_8030271C;
    case 0x80302744u: goto label_80302744;
    case 0x80302760u: goto label_80302760;
    case 0x80302770u: goto label_80302770;
    case 0x80302780u: goto label_80302780;
    case 0x80302794u: goto label_80302794;
    case 0x803027A4u: goto label_803027A4;
    case 0x803027B8u: goto label_803027B8;
    case 0x803027C8u: goto label_803027C8;
    case 0x803027D8u: goto label_803027D8;
    case 0x803027E4u: goto label_803027E4;
    case 0x803027F0u: goto label_803027F0;
    case 0x80302834u: goto label_80302834;
    case 0x8030285Cu: goto label_8030285C;
    case 0x80302868u: goto label_80302868;
    case 0x80302880u: goto label_80302880;
    case 0x80302888u: goto label_80302888;
    case 0x803028C8u: goto label_803028C8;
    case 0x803028D0u: goto label_803028D0;
    case 0x803028E4u: goto label_803028E4;
    case 0x80302924u: goto label_80302924;
    case 0x80302948u: goto label_80302948;
    case 0x80302960u: goto label_80302960;
    case 0x80302978u: goto label_80302978;
    case 0x80302A10u: goto label_80302A10;
    case 0x80302A50u: goto label_80302A50;
    case 0x80302AC8u: goto label_80302AC8;
    case 0x80302B30u: goto label_80302B30;
    case 0x80302B38u: goto label_80302B38;
    case 0x80302B40u: goto label_80302B40;
    case 0x80302B48u: goto label_80302B48;
    case 0x80302B50u: goto label_80302B50;
    case 0x80302B8Cu: goto label_80302B8C;
    case 0x80302BACu: goto label_80302BAC;
    case 0x80302BECu: goto label_80302BEC;
    case 0x80302C0Cu: goto label_80302C0C;
    case 0x80302C4Cu: goto label_80302C4C;
    case 0x80302C6Cu: goto label_80302C6C;
    case 0x80302CB4u: goto label_80302CB4;
    case 0x80302CBCu: goto label_80302CBC;
    case 0x80302CF4u: goto label_80302CF4;
    case 0x80302D40u: goto label_80302D40;
    case 0x80302D84u: goto label_80302D84;
    case 0x80302D8Cu: goto label_80302D8C;
    case 0x80302DA0u: goto label_80302DA0;
    case 0x80302DB0u: goto label_80302DB0;
    case 0x80302DBCu: goto label_80302DBC;
    case 0x80302DC0u: goto label_80302DC0;
    case 0x80302DC8u: goto label_80302DC8;
    case 0x80302DD4u: goto label_80302DD4;
    case 0x80302DF8u: goto label_80302DF8;
    case 0x80302DFCu: goto label_80302DFC;
    case 0x80302E10u: goto label_80302E10;
    case 0x80302E64u: goto label_80302E64;
    case 0x80302E80u: goto label_80302E80;
    case 0x80302E98u: goto label_80302E98;
    case 0x80302EB0u: goto label_80302EB0;
    case 0x80302EC8u: goto label_80302EC8;
    case 0x80302ED8u: goto label_80302ED8;
    case 0x80302F14u: goto label_80302F14;
    case 0x80302F1Cu: goto label_80302F1C;
    case 0x80302F58u: goto label_80302F58;
    case 0x80302F60u: goto label_80302F60;
    case 0x80302FA0u: goto label_80302FA0;
    case 0x80302FBCu: goto label_80302FBC;
    case 0x80303010u: goto label_80303010;
    case 0x8030301Cu: goto label_8030301C;
    case 0x80303058u: goto label_80303058;
    case 0x80303084u: goto label_80303084;
    case 0x803030A4u: goto label_803030A4;
    case 0x803030C0u: goto label_803030C0;
    case 0x80303100u: goto label_80303100;
    case 0x8030311Cu: goto label_8030311C;
    case 0x80303154u: goto label_80303154;
    case 0x803031A8u: goto label_803031A8;
    case 0x803031B8u: goto label_803031B8;
    default: return;
    }
}

