// DolRecomp output
#include "../RZTE01.h"

static void loop_802EB4C4(CPUState* ctx) {
label_802EB4C4:
    ctx->downcount -= 26;
    ctx->pc = 0x802EB4C4u;
    // 802EB4C4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802EB4C8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802EB4CCu;
    // 802EB4CC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EB4D0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EB4D4u;
    // 802EB4D4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB4D8u;
    // 802EB4D8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EB4DCu;
    // 802EB4DC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB4E0u;
    // 802EB4E0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB4E4u;
    // 802EB4E4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB4E8u;
    // 802EB4E8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB4ECu;
    // 802EB4EC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EB4F0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EB4F4u;
    // 802EB4F4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB4F8u;
    // 802EB4F8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EB4FCu;
    // 802EB4FC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB500u;
    // 802EB500: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB504u;
    // 802EB504: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB508u;
    // 802EB508: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB50Cu;
    // 802EB50C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EB510: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EB514u;
    // 802EB514: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB518u;
    // 802EB518: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802EB51C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802EB520u;
    // 802EB520: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB524u;
    // 802EB524: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EB528u;
    // 802EB528: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EB52Cu;
    // 802EB52C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EB530: cmpw    r7, r0
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

    // 802EB534: bc    12, 0, 0x802EB4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB4C4u;
                return;
            }
            goto label_802EB4C4;
        }
    }

    ctx->pc = 0x802EB538u;
}

static void loop_802ECD14(CPUState* ctx) {
label_802ECD14:
    ctx->downcount -= 5;
    // 802ECD14: add   r5, r28, r3
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 802ECD18: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802ECD1Cu;
    // 802ECD1C: stw     r4, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802ECD20u;
    // 802ECD20: stw     r4, 296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802ECD24: bc    16, 0, 0x802ECD14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECD14u;
                return;
            }
            goto label_802ECD14;
        }
    }

    ctx->pc = 0x802ECD28u;
}

static void loop_802ED78C(CPUState* ctx) {
label_802ED78C:
    ctx->downcount -= 4;
    // 802ED78C: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 802ED790: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x802ED794u;
    // 802ED794: stw     r6, 324(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 802ED798: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    ctx->pc = 0x802ED79Cu;
    // 802ED79C: lwz     r0, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802ED7A0: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

    // 802ED7A4: bc    12, 0, 0x802ED78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED78Cu;
                return;
            }
            goto label_802ED78C;
        }
    }

    ctx->pc = 0x802ED7A8u;
}

static void loop_802EDDD0(CPUState* ctx) {
label_802EDDD0:
    ctx->downcount -= 7;
    // 802EDDD0: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

    // 802EDDD4: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 802EDDD8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802EDDDCu;
    // 802EDDDC: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EDDE0u;
    // 802EDDE0: stw     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EDDE4u;
    // 802EDDE4: stw     r4, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802EDDE8: bc    16, 0, 0x802EDDD0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDDD0u;
                return;
            }
            goto label_802EDDD0;
        }
    }

    ctx->pc = 0x802EDDECu;
}

static void loop_802EEA64(CPUState* ctx) {
label_802EEA64:
    ctx->downcount -= 26;
    ctx->pc = 0x802EEA64u;
    // 802EEA64: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802EEA68: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802EEA6Cu;
    // 802EEA6C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EEA70: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EEA74u;
    // 802EEA74: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEA78u;
    // 802EEA78: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EEA7Cu;
    // 802EEA7C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEA80u;
    // 802EEA80: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEA84u;
    // 802EEA84: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEA88u;
    // 802EEA88: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEA8Cu;
    // 802EEA8C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EEA90: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EEA94u;
    // 802EEA94: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEA98u;
    // 802EEA98: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802EEA9Cu;
    // 802EEA9C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEAA0u;
    // 802EEAA0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEAA4u;
    // 802EEAA4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEAA8u;
    // 802EEAA8: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEAACu;
    // 802EEAAC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EEAB0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802EEAB4u;
    // 802EEAB4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEAB8u;
    // 802EEAB8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802EEABC: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802EEAC0u;
    // 802EEAC0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEAC4u;
    // 802EEAC4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EEAC8u;
    // 802EEAC8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802EEACCu;
    // 802EEACC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802EEAD0: cmpw    r7, r0
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

    // 802EEAD4: bc    12, 0, 0x802EEA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EEA64u;
                return;
            }
            goto label_802EEA64;
        }
    }

    ctx->pc = 0x802EEAD8u;
}

void func_802EB1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x802EB1C0u: goto label_802EB1C0;
    case 0x802EB1C4u: goto label_802EB1C4;
    case 0x802EB1C8u: goto label_802EB1C8;
    case 0x802EB1CCu: goto label_802EB1CC;
    case 0x802EB1D0u: goto label_802EB1D0;
    case 0x802EB1D4u: goto label_802EB1D4;
    case 0x802EB1D8u: goto label_802EB1D8;
    case 0x802EB1DCu: goto label_802EB1DC;
    case 0x802EB1E0u: goto label_802EB1E0;
    case 0x802EB1E4u: goto label_802EB1E4;
    case 0x802EB1E8u: goto label_802EB1E8;
    case 0x802EB1ECu: goto label_802EB1EC;
    case 0x802EB1F0u: goto label_802EB1F0;
    case 0x802EB1F4u: goto label_802EB1F4;
    case 0x802EB1F8u: goto label_802EB1F8;
    case 0x802EB1FCu: goto label_802EB1FC;
    case 0x802EB200u: goto label_802EB200;
    case 0x802EB204u: goto label_802EB204;
    case 0x802EB208u: goto label_802EB208;
    case 0x802EB20Cu: goto label_802EB20C;
    case 0x802EB210u: goto label_802EB210;
    case 0x802EB214u: goto label_802EB214;
    case 0x802EB218u: goto label_802EB218;
    case 0x802EB21Cu: goto label_802EB21C;
    case 0x802EB220u: goto label_802EB220;
    case 0x802EB224u: goto label_802EB224;
    case 0x802EB228u: goto label_802EB228;
    case 0x802EB22Cu: goto label_802EB22C;
    case 0x802EB230u: goto label_802EB230;
    case 0x802EB234u: goto label_802EB234;
    case 0x802EB238u: goto label_802EB238;
    case 0x802EB23Cu: goto label_802EB23C;
    case 0x802EB240u: goto label_802EB240;
    case 0x802EB244u: goto label_802EB244;
    case 0x802EB248u: goto label_802EB248;
    case 0x802EB24Cu: goto label_802EB24C;
    case 0x802EB250u: goto label_802EB250;
    case 0x802EB254u: goto label_802EB254;
    case 0x802EB258u: goto label_802EB258;
    case 0x802EB25Cu: goto label_802EB25C;
    case 0x802EB260u: goto label_802EB260;
    case 0x802EB264u: goto label_802EB264;
    case 0x802EB268u: goto label_802EB268;
    case 0x802EB26Cu: goto label_802EB26C;
    case 0x802EB270u: goto label_802EB270;
    case 0x802EB274u: goto label_802EB274;
    case 0x802EB278u: goto label_802EB278;
    case 0x802EB27Cu: goto label_802EB27C;
    case 0x802EB280u: goto label_802EB280;
    case 0x802EB284u: goto label_802EB284;
    case 0x802EB288u: goto label_802EB288;
    case 0x802EB28Cu: goto label_802EB28C;
    case 0x802EB290u: goto label_802EB290;
    case 0x802EB294u: goto label_802EB294;
    case 0x802EB298u: goto label_802EB298;
    case 0x802EB29Cu: goto label_802EB29C;
    case 0x802EB2A0u: goto label_802EB2A0;
    case 0x802EB2A4u: goto label_802EB2A4;
    case 0x802EB2A8u: goto label_802EB2A8;
    case 0x802EB2ACu: goto label_802EB2AC;
    case 0x802EB2B0u: goto label_802EB2B0;
    case 0x802EB2B4u: goto label_802EB2B4;
    case 0x802EB2B8u: goto label_802EB2B8;
    case 0x802EB2BCu: goto label_802EB2BC;
    case 0x802EB2C0u: goto label_802EB2C0;
    case 0x802EB2C4u: goto label_802EB2C4;
    case 0x802EB2C8u: goto label_802EB2C8;
    case 0x802EB2CCu: goto label_802EB2CC;
    case 0x802EB2D0u: goto label_802EB2D0;
    case 0x802EB2D4u: goto label_802EB2D4;
    case 0x802EB2D8u: goto label_802EB2D8;
    case 0x802EB2DCu: goto label_802EB2DC;
    case 0x802EB2E0u: goto label_802EB2E0;
    case 0x802EB2E4u: goto label_802EB2E4;
    case 0x802EB2E8u: goto label_802EB2E8;
    case 0x802EB2ECu: goto label_802EB2EC;
    case 0x802EB2F0u: goto label_802EB2F0;
    case 0x802EB2F4u: goto label_802EB2F4;
    case 0x802EB2F8u: goto label_802EB2F8;
    case 0x802EB2FCu: goto label_802EB2FC;
    case 0x802EB300u: goto label_802EB300;
    case 0x802EB304u: goto label_802EB304;
    case 0x802EB308u: goto label_802EB308;
    case 0x802EB30Cu: goto label_802EB30C;
    case 0x802EB310u: goto label_802EB310;
    case 0x802EB314u: goto label_802EB314;
    case 0x802EB318u: goto label_802EB318;
    case 0x802EB31Cu: goto label_802EB31C;
    case 0x802EB320u: goto label_802EB320;
    case 0x802EB324u: goto label_802EB324;
    case 0x802EB328u: goto label_802EB328;
    case 0x802EB32Cu: goto label_802EB32C;
    case 0x802EB330u: goto label_802EB330;
    case 0x802EB334u: goto label_802EB334;
    case 0x802EB338u: goto label_802EB338;
    case 0x802EB33Cu: goto label_802EB33C;
    case 0x802EB340u: goto label_802EB340;
    case 0x802EB344u: goto label_802EB344;
    case 0x802EB348u: goto label_802EB348;
    case 0x802EB34Cu: goto label_802EB34C;
    case 0x802EB350u: goto label_802EB350;
    case 0x802EB354u: goto label_802EB354;
    case 0x802EB358u: goto label_802EB358;
    case 0x802EB35Cu: goto label_802EB35C;
    case 0x802EB360u: goto label_802EB360;
    case 0x802EB364u: goto label_802EB364;
    case 0x802EB368u: goto label_802EB368;
    case 0x802EB36Cu: goto label_802EB36C;
    case 0x802EB370u: goto label_802EB370;
    case 0x802EB374u: goto label_802EB374;
    case 0x802EB378u: goto label_802EB378;
    case 0x802EB37Cu: goto label_802EB37C;
    case 0x802EB380u: goto label_802EB380;
    case 0x802EB384u: goto label_802EB384;
    case 0x802EB388u: goto label_802EB388;
    case 0x802EB38Cu: goto label_802EB38C;
    case 0x802EB390u: goto label_802EB390;
    case 0x802EB394u: goto label_802EB394;
    case 0x802EB398u: goto label_802EB398;
    case 0x802EB39Cu: goto label_802EB39C;
    case 0x802EB3A0u: goto label_802EB3A0;
    case 0x802EB3A4u: goto label_802EB3A4;
    case 0x802EB3A8u: goto label_802EB3A8;
    case 0x802EB3ACu: goto label_802EB3AC;
    case 0x802EB3B0u: goto label_802EB3B0;
    case 0x802EB3B4u: goto label_802EB3B4;
    case 0x802EB3B8u: goto label_802EB3B8;
    case 0x802EB3BCu: goto label_802EB3BC;
    case 0x802EB3C0u: goto label_802EB3C0;
    case 0x802EB3C4u: goto label_802EB3C4;
    case 0x802EB3C8u: goto label_802EB3C8;
    case 0x802EB3CCu: goto label_802EB3CC;
    case 0x802EB3D0u: goto label_802EB3D0;
    case 0x802EB3D4u: goto label_802EB3D4;
    case 0x802EB3D8u: goto label_802EB3D8;
    case 0x802EB3DCu: goto label_802EB3DC;
    case 0x802EB3E0u: goto label_802EB3E0;
    case 0x802EB3E4u: goto label_802EB3E4;
    case 0x802EB3E8u: goto label_802EB3E8;
    case 0x802EB3ECu: goto label_802EB3EC;
    case 0x802EB3F0u: goto label_802EB3F0;
    case 0x802EB3F4u: goto label_802EB3F4;
    case 0x802EB3F8u: goto label_802EB3F8;
    case 0x802EB3FCu: goto label_802EB3FC;
    case 0x802EB400u: goto label_802EB400;
    case 0x802EB404u: goto label_802EB404;
    case 0x802EB408u: goto label_802EB408;
    case 0x802EB40Cu: goto label_802EB40C;
    case 0x802EB410u: goto label_802EB410;
    case 0x802EB414u: goto label_802EB414;
    case 0x802EB418u: goto label_802EB418;
    case 0x802EB41Cu: goto label_802EB41C;
    case 0x802EB420u: goto label_802EB420;
    case 0x802EB424u: goto label_802EB424;
    case 0x802EB428u: goto label_802EB428;
    case 0x802EB42Cu: goto label_802EB42C;
    case 0x802EB430u: goto label_802EB430;
    case 0x802EB434u: goto label_802EB434;
    case 0x802EB438u: goto label_802EB438;
    case 0x802EB43Cu: goto label_802EB43C;
    case 0x802EB440u: goto label_802EB440;
    case 0x802EB444u: goto label_802EB444;
    case 0x802EB448u: goto label_802EB448;
    case 0x802EB44Cu: goto label_802EB44C;
    case 0x802EB450u: goto label_802EB450;
    case 0x802EB454u: goto label_802EB454;
    case 0x802EB458u: goto label_802EB458;
    case 0x802EB45Cu: goto label_802EB45C;
    case 0x802EB460u: goto label_802EB460;
    case 0x802EB464u: goto label_802EB464;
    case 0x802EB468u: goto label_802EB468;
    case 0x802EB46Cu: goto label_802EB46C;
    case 0x802EB470u: goto label_802EB470;
    case 0x802EB474u: goto label_802EB474;
    case 0x802EB478u: goto label_802EB478;
    case 0x802EB47Cu: goto label_802EB47C;
    case 0x802EB480u: goto label_802EB480;
    case 0x802EB484u: goto label_802EB484;
    case 0x802EB488u: goto label_802EB488;
    case 0x802EB48Cu: goto label_802EB48C;
    case 0x802EB490u: goto label_802EB490;
    case 0x802EB494u: goto label_802EB494;
    case 0x802EB498u: goto label_802EB498;
    case 0x802EB49Cu: goto label_802EB49C;
    case 0x802EB4A0u: goto label_802EB4A0;
    case 0x802EB4A4u: goto label_802EB4A4;
    case 0x802EB4A8u: goto label_802EB4A8;
    case 0x802EB4ACu: goto label_802EB4AC;
    case 0x802EB4B0u: goto label_802EB4B0;
    case 0x802EB4B4u: goto label_802EB4B4;
    case 0x802EB4B8u: goto label_802EB4B8;
    case 0x802EB4BCu: goto label_802EB4BC;
    case 0x802EB4C0u: goto label_802EB4C0;
    case 0x802EB4C4u: goto label_802EB4C4;
    case 0x802EB4C8u: goto label_802EB4C8;
    case 0x802EB4CCu: goto label_802EB4CC;
    case 0x802EB4D0u: goto label_802EB4D0;
    case 0x802EB4D4u: goto label_802EB4D4;
    case 0x802EB4D8u: goto label_802EB4D8;
    case 0x802EB4DCu: goto label_802EB4DC;
    case 0x802EB4E0u: goto label_802EB4E0;
    case 0x802EB4E4u: goto label_802EB4E4;
    case 0x802EB4E8u: goto label_802EB4E8;
    case 0x802EB4ECu: goto label_802EB4EC;
    case 0x802EB4F0u: goto label_802EB4F0;
    case 0x802EB4F4u: goto label_802EB4F4;
    case 0x802EB4F8u: goto label_802EB4F8;
    case 0x802EB4FCu: goto label_802EB4FC;
    case 0x802EB500u: goto label_802EB500;
    case 0x802EB504u: goto label_802EB504;
    case 0x802EB508u: goto label_802EB508;
    case 0x802EB50Cu: goto label_802EB50C;
    case 0x802EB510u: goto label_802EB510;
    case 0x802EB514u: goto label_802EB514;
    case 0x802EB518u: goto label_802EB518;
    case 0x802EB51Cu: goto label_802EB51C;
    case 0x802EB520u: goto label_802EB520;
    case 0x802EB524u: goto label_802EB524;
    case 0x802EB528u: goto label_802EB528;
    case 0x802EB52Cu: goto label_802EB52C;
    case 0x802EB530u: goto label_802EB530;
    case 0x802EB534u: goto label_802EB534;
    case 0x802EB538u: goto label_802EB538;
    case 0x802EB53Cu: goto label_802EB53C;
    case 0x802EB540u: goto label_802EB540;
    case 0x802EB544u: goto label_802EB544;
    case 0x802EB548u: goto label_802EB548;
    case 0x802EB54Cu: goto label_802EB54C;
    case 0x802EB550u: goto label_802EB550;
    case 0x802EB554u: goto label_802EB554;
    case 0x802EB558u: goto label_802EB558;
    case 0x802EB55Cu: goto label_802EB55C;
    case 0x802EB560u: goto label_802EB560;
    case 0x802EB564u: goto label_802EB564;
    case 0x802EB568u: goto label_802EB568;
    case 0x802EB56Cu: goto label_802EB56C;
    case 0x802EB570u: goto label_802EB570;
    case 0x802EB574u: goto label_802EB574;
    case 0x802EB578u: goto label_802EB578;
    case 0x802EB57Cu: goto label_802EB57C;
    case 0x802EB580u: goto label_802EB580;
    case 0x802EB584u: goto label_802EB584;
    case 0x802EB588u: goto label_802EB588;
    case 0x802EB58Cu: goto label_802EB58C;
    case 0x802EB590u: goto label_802EB590;
    case 0x802EB594u: goto label_802EB594;
    case 0x802EB598u: goto label_802EB598;
    case 0x802EB59Cu: goto label_802EB59C;
    case 0x802EB5A0u: goto label_802EB5A0;
    case 0x802EB5A4u: goto label_802EB5A4;
    case 0x802EB5A8u: goto label_802EB5A8;
    case 0x802EB5ACu: goto label_802EB5AC;
    case 0x802EB5B0u: goto label_802EB5B0;
    case 0x802EB5B4u: goto label_802EB5B4;
    case 0x802EB5B8u: goto label_802EB5B8;
    case 0x802EB5BCu: goto label_802EB5BC;
    case 0x802EB5C0u: goto label_802EB5C0;
    case 0x802EB5C4u: goto label_802EB5C4;
    case 0x802EB5C8u: goto label_802EB5C8;
    case 0x802EB5CCu: goto label_802EB5CC;
    case 0x802EB5D0u: goto label_802EB5D0;
    case 0x802EB5D4u: goto label_802EB5D4;
    case 0x802EB5D8u: goto label_802EB5D8;
    case 0x802EB5DCu: goto label_802EB5DC;
    case 0x802EB5E0u: goto label_802EB5E0;
    case 0x802EB5E4u: goto label_802EB5E4;
    case 0x802EB5E8u: goto label_802EB5E8;
    case 0x802EB5ECu: goto label_802EB5EC;
    case 0x802EB5F0u: goto label_802EB5F0;
    case 0x802EB5F4u: goto label_802EB5F4;
    case 0x802EB5F8u: goto label_802EB5F8;
    case 0x802EB5FCu: goto label_802EB5FC;
    case 0x802EB600u: goto label_802EB600;
    case 0x802EB604u: goto label_802EB604;
    case 0x802EB608u: goto label_802EB608;
    case 0x802EB60Cu: goto label_802EB60C;
    case 0x802EB610u: goto label_802EB610;
    case 0x802EB614u: goto label_802EB614;
    case 0x802EB618u: goto label_802EB618;
    case 0x802EB61Cu: goto label_802EB61C;
    case 0x802EB620u: goto label_802EB620;
    case 0x802EB624u: goto label_802EB624;
    case 0x802EB628u: goto label_802EB628;
    case 0x802EB62Cu: goto label_802EB62C;
    case 0x802EB630u: goto label_802EB630;
    case 0x802EB634u: goto label_802EB634;
    case 0x802EB638u: goto label_802EB638;
    case 0x802EB63Cu: goto label_802EB63C;
    case 0x802EB640u: goto label_802EB640;
    case 0x802EB644u: goto label_802EB644;
    case 0x802EB648u: goto label_802EB648;
    case 0x802EB64Cu: goto label_802EB64C;
    case 0x802EB650u: goto label_802EB650;
    case 0x802EB654u: goto label_802EB654;
    case 0x802EB658u: goto label_802EB658;
    case 0x802EB65Cu: goto label_802EB65C;
    case 0x802EB660u: goto label_802EB660;
    case 0x802EB664u: goto label_802EB664;
    case 0x802EB668u: goto label_802EB668;
    case 0x802EB66Cu: goto label_802EB66C;
    case 0x802EB670u: goto label_802EB670;
    case 0x802EB674u: goto label_802EB674;
    case 0x802EB678u: goto label_802EB678;
    case 0x802EB67Cu: goto label_802EB67C;
    case 0x802EB680u: goto label_802EB680;
    case 0x802EB684u: goto label_802EB684;
    case 0x802EB688u: goto label_802EB688;
    case 0x802EB68Cu: goto label_802EB68C;
    case 0x802EB690u: goto label_802EB690;
    case 0x802EB694u: goto label_802EB694;
    case 0x802EB698u: goto label_802EB698;
    case 0x802EB69Cu: goto label_802EB69C;
    case 0x802EB6A0u: goto label_802EB6A0;
    case 0x802EB6A4u: goto label_802EB6A4;
    case 0x802EB6A8u: goto label_802EB6A8;
    case 0x802EB6ACu: goto label_802EB6AC;
    case 0x802EB6B0u: goto label_802EB6B0;
    case 0x802EB6B4u: goto label_802EB6B4;
    case 0x802EB6B8u: goto label_802EB6B8;
    case 0x802EB6BCu: goto label_802EB6BC;
    case 0x802EB6C0u: goto label_802EB6C0;
    case 0x802EB6C4u: goto label_802EB6C4;
    case 0x802EB6C8u: goto label_802EB6C8;
    case 0x802EB6CCu: goto label_802EB6CC;
    case 0x802EB6D0u: goto label_802EB6D0;
    case 0x802EB6D4u: goto label_802EB6D4;
    case 0x802EB6D8u: goto label_802EB6D8;
    case 0x802EB6DCu: goto label_802EB6DC;
    case 0x802EB6E0u: goto label_802EB6E0;
    case 0x802EB6E4u: goto label_802EB6E4;
    case 0x802EB6E8u: goto label_802EB6E8;
    case 0x802EB6ECu: goto label_802EB6EC;
    case 0x802EB6F0u: goto label_802EB6F0;
    case 0x802EB6F4u: goto label_802EB6F4;
    case 0x802EB6F8u: goto label_802EB6F8;
    case 0x802EB6FCu: goto label_802EB6FC;
    case 0x802EB700u: goto label_802EB700;
    case 0x802EB704u: goto label_802EB704;
    case 0x802EB708u: goto label_802EB708;
    case 0x802EB70Cu: goto label_802EB70C;
    case 0x802EB710u: goto label_802EB710;
    case 0x802EB714u: goto label_802EB714;
    case 0x802EB718u: goto label_802EB718;
    case 0x802EB71Cu: goto label_802EB71C;
    case 0x802EB720u: goto label_802EB720;
    case 0x802EB724u: goto label_802EB724;
    case 0x802EB728u: goto label_802EB728;
    case 0x802EB72Cu: goto label_802EB72C;
    case 0x802EB730u: goto label_802EB730;
    case 0x802EB734u: goto label_802EB734;
    case 0x802EB738u: goto label_802EB738;
    case 0x802EB73Cu: goto label_802EB73C;
    case 0x802EB740u: goto label_802EB740;
    case 0x802EB744u: goto label_802EB744;
    case 0x802EB748u: goto label_802EB748;
    case 0x802EB74Cu: goto label_802EB74C;
    case 0x802EB750u: goto label_802EB750;
    case 0x802EB754u: goto label_802EB754;
    case 0x802EB758u: goto label_802EB758;
    case 0x802EB75Cu: goto label_802EB75C;
    case 0x802EB760u: goto label_802EB760;
    case 0x802EB764u: goto label_802EB764;
    case 0x802EB768u: goto label_802EB768;
    case 0x802EB76Cu: goto label_802EB76C;
    case 0x802EB770u: goto label_802EB770;
    case 0x802EB774u: goto label_802EB774;
    case 0x802EB778u: goto label_802EB778;
    case 0x802EB77Cu: goto label_802EB77C;
    case 0x802EB780u: goto label_802EB780;
    case 0x802EB784u: goto label_802EB784;
    case 0x802EB788u: goto label_802EB788;
    case 0x802EB78Cu: goto label_802EB78C;
    case 0x802EB790u: goto label_802EB790;
    case 0x802EB794u: goto label_802EB794;
    case 0x802EB798u: goto label_802EB798;
    case 0x802EB79Cu: goto label_802EB79C;
    case 0x802EB7A0u: goto label_802EB7A0;
    case 0x802EB7A4u: goto label_802EB7A4;
    case 0x802EB7A8u: goto label_802EB7A8;
    case 0x802EB7ACu: goto label_802EB7AC;
    case 0x802EB7B0u: goto label_802EB7B0;
    case 0x802EB7B4u: goto label_802EB7B4;
    case 0x802EB7B8u: goto label_802EB7B8;
    case 0x802EB7BCu: goto label_802EB7BC;
    case 0x802EB7C0u: goto label_802EB7C0;
    case 0x802EB7C4u: goto label_802EB7C4;
    case 0x802EB7C8u: goto label_802EB7C8;
    case 0x802EB7CCu: goto label_802EB7CC;
    case 0x802EB7D0u: goto label_802EB7D0;
    case 0x802EB7D4u: goto label_802EB7D4;
    case 0x802EB7D8u: goto label_802EB7D8;
    case 0x802EB7DCu: goto label_802EB7DC;
    case 0x802EB7E0u: goto label_802EB7E0;
    case 0x802EB7E4u: goto label_802EB7E4;
    case 0x802EB7E8u: goto label_802EB7E8;
    case 0x802EB7ECu: goto label_802EB7EC;
    case 0x802EB7F0u: goto label_802EB7F0;
    case 0x802EB7F4u: goto label_802EB7F4;
    case 0x802EB7F8u: goto label_802EB7F8;
    case 0x802EB7FCu: goto label_802EB7FC;
    case 0x802EB800u: goto label_802EB800;
    case 0x802EB804u: goto label_802EB804;
    case 0x802EB808u: goto label_802EB808;
    case 0x802EB80Cu: goto label_802EB80C;
    case 0x802EB810u: goto label_802EB810;
    case 0x802EB814u: goto label_802EB814;
    case 0x802EB818u: goto label_802EB818;
    case 0x802EB81Cu: goto label_802EB81C;
    case 0x802EB820u: goto label_802EB820;
    case 0x802EB824u: goto label_802EB824;
    case 0x802EB828u: goto label_802EB828;
    case 0x802EB82Cu: goto label_802EB82C;
    case 0x802EB830u: goto label_802EB830;
    case 0x802EB834u: goto label_802EB834;
    case 0x802EB838u: goto label_802EB838;
    case 0x802EB83Cu: goto label_802EB83C;
    case 0x802EB840u: goto label_802EB840;
    case 0x802EB844u: goto label_802EB844;
    case 0x802EB848u: goto label_802EB848;
    case 0x802EB84Cu: goto label_802EB84C;
    case 0x802EB850u: goto label_802EB850;
    case 0x802EB854u: goto label_802EB854;
    case 0x802EB858u: goto label_802EB858;
    case 0x802EB85Cu: goto label_802EB85C;
    case 0x802EB860u: goto label_802EB860;
    case 0x802EB864u: goto label_802EB864;
    case 0x802EB868u: goto label_802EB868;
    case 0x802EB86Cu: goto label_802EB86C;
    case 0x802EB870u: goto label_802EB870;
    case 0x802EB874u: goto label_802EB874;
    case 0x802EB878u: goto label_802EB878;
    case 0x802EB87Cu: goto label_802EB87C;
    case 0x802EB880u: goto label_802EB880;
    case 0x802EB884u: goto label_802EB884;
    case 0x802EB888u: goto label_802EB888;
    case 0x802EB88Cu: goto label_802EB88C;
    case 0x802EB890u: goto label_802EB890;
    case 0x802EB894u: goto label_802EB894;
    case 0x802EB898u: goto label_802EB898;
    case 0x802EB89Cu: goto label_802EB89C;
    case 0x802EB8A0u: goto label_802EB8A0;
    case 0x802EB8A4u: goto label_802EB8A4;
    case 0x802EB8A8u: goto label_802EB8A8;
    case 0x802EB8ACu: goto label_802EB8AC;
    case 0x802EB8B0u: goto label_802EB8B0;
    case 0x802EB8B4u: goto label_802EB8B4;
    case 0x802EB8B8u: goto label_802EB8B8;
    case 0x802EB8BCu: goto label_802EB8BC;
    case 0x802EB8C0u: goto label_802EB8C0;
    case 0x802EB8C4u: goto label_802EB8C4;
    case 0x802EB8C8u: goto label_802EB8C8;
    case 0x802EB8CCu: goto label_802EB8CC;
    case 0x802EB8D0u: goto label_802EB8D0;
    case 0x802EB8D4u: goto label_802EB8D4;
    case 0x802EB8D8u: goto label_802EB8D8;
    case 0x802EB8DCu: goto label_802EB8DC;
    case 0x802EB8E0u: goto label_802EB8E0;
    case 0x802EB8E4u: goto label_802EB8E4;
    case 0x802EB8E8u: goto label_802EB8E8;
    case 0x802EB8ECu: goto label_802EB8EC;
    case 0x802EB8F0u: goto label_802EB8F0;
    case 0x802EB8F4u: goto label_802EB8F4;
    case 0x802EB8F8u: goto label_802EB8F8;
    case 0x802EB8FCu: goto label_802EB8FC;
    case 0x802EB900u: goto label_802EB900;
    case 0x802EB904u: goto label_802EB904;
    case 0x802EB908u: goto label_802EB908;
    case 0x802EB90Cu: goto label_802EB90C;
    case 0x802EB910u: goto label_802EB910;
    case 0x802EB914u: goto label_802EB914;
    case 0x802EB918u: goto label_802EB918;
    case 0x802EB91Cu: goto label_802EB91C;
    case 0x802EB920u: goto label_802EB920;
    case 0x802EB924u: goto label_802EB924;
    case 0x802EB928u: goto label_802EB928;
    case 0x802EB92Cu: goto label_802EB92C;
    case 0x802EB930u: goto label_802EB930;
    case 0x802EB934u: goto label_802EB934;
    case 0x802EB938u: goto label_802EB938;
    case 0x802EB93Cu: goto label_802EB93C;
    case 0x802EB940u: goto label_802EB940;
    case 0x802EB944u: goto label_802EB944;
    case 0x802EB948u: goto label_802EB948;
    case 0x802EB94Cu: goto label_802EB94C;
    case 0x802EB950u: goto label_802EB950;
    case 0x802EB954u: goto label_802EB954;
    case 0x802EB958u: goto label_802EB958;
    case 0x802EB95Cu: goto label_802EB95C;
    case 0x802EB960u: goto label_802EB960;
    case 0x802EB964u: goto label_802EB964;
    case 0x802EB968u: goto label_802EB968;
    case 0x802EB96Cu: goto label_802EB96C;
    case 0x802EB970u: goto label_802EB970;
    case 0x802EB974u: goto label_802EB974;
    case 0x802EB978u: goto label_802EB978;
    case 0x802EB97Cu: goto label_802EB97C;
    case 0x802EB980u: goto label_802EB980;
    case 0x802EB984u: goto label_802EB984;
    case 0x802EB988u: goto label_802EB988;
    case 0x802EB98Cu: goto label_802EB98C;
    case 0x802EB990u: goto label_802EB990;
    case 0x802EB994u: goto label_802EB994;
    case 0x802EB998u: goto label_802EB998;
    case 0x802EB99Cu: goto label_802EB99C;
    case 0x802EB9A0u: goto label_802EB9A0;
    case 0x802EB9A4u: goto label_802EB9A4;
    case 0x802EB9A8u: goto label_802EB9A8;
    case 0x802EB9ACu: goto label_802EB9AC;
    case 0x802EB9B0u: goto label_802EB9B0;
    case 0x802EB9B4u: goto label_802EB9B4;
    case 0x802EB9B8u: goto label_802EB9B8;
    case 0x802EB9BCu: goto label_802EB9BC;
    case 0x802EB9C0u: goto label_802EB9C0;
    case 0x802EB9C4u: goto label_802EB9C4;
    case 0x802EB9C8u: goto label_802EB9C8;
    case 0x802EB9CCu: goto label_802EB9CC;
    case 0x802EB9D0u: goto label_802EB9D0;
    case 0x802EB9D4u: goto label_802EB9D4;
    case 0x802EB9D8u: goto label_802EB9D8;
    case 0x802EB9DCu: goto label_802EB9DC;
    case 0x802EB9E0u: goto label_802EB9E0;
    case 0x802EB9E4u: goto label_802EB9E4;
    case 0x802EB9E8u: goto label_802EB9E8;
    case 0x802EB9ECu: goto label_802EB9EC;
    case 0x802EB9F0u: goto label_802EB9F0;
    case 0x802EB9F4u: goto label_802EB9F4;
    case 0x802EB9F8u: goto label_802EB9F8;
    case 0x802EB9FCu: goto label_802EB9FC;
    case 0x802EBA00u: goto label_802EBA00;
    case 0x802EBA04u: goto label_802EBA04;
    case 0x802EBA08u: goto label_802EBA08;
    case 0x802EBA0Cu: goto label_802EBA0C;
    case 0x802EBA10u: goto label_802EBA10;
    case 0x802EBA14u: goto label_802EBA14;
    case 0x802EBA18u: goto label_802EBA18;
    case 0x802EBA1Cu: goto label_802EBA1C;
    case 0x802EBA20u: goto label_802EBA20;
    case 0x802EBA24u: goto label_802EBA24;
    case 0x802EBA28u: goto label_802EBA28;
    case 0x802EBA2Cu: goto label_802EBA2C;
    case 0x802EBA30u: goto label_802EBA30;
    case 0x802EBA34u: goto label_802EBA34;
    case 0x802EBA38u: goto label_802EBA38;
    case 0x802EBA3Cu: goto label_802EBA3C;
    case 0x802EBA40u: goto label_802EBA40;
    case 0x802EBA44u: goto label_802EBA44;
    case 0x802EBA48u: goto label_802EBA48;
    case 0x802EBA4Cu: goto label_802EBA4C;
    case 0x802EBA50u: goto label_802EBA50;
    case 0x802EBA54u: goto label_802EBA54;
    case 0x802EBA58u: goto label_802EBA58;
    case 0x802EBA5Cu: goto label_802EBA5C;
    case 0x802EBA60u: goto label_802EBA60;
    case 0x802EBA64u: goto label_802EBA64;
    case 0x802EBA68u: goto label_802EBA68;
    case 0x802EBA6Cu: goto label_802EBA6C;
    case 0x802EBA70u: goto label_802EBA70;
    case 0x802EBA74u: goto label_802EBA74;
    case 0x802EBA78u: goto label_802EBA78;
    case 0x802EBA7Cu: goto label_802EBA7C;
    case 0x802EBA80u: goto label_802EBA80;
    case 0x802EBA84u: goto label_802EBA84;
    case 0x802EBA88u: goto label_802EBA88;
    case 0x802EBA8Cu: goto label_802EBA8C;
    case 0x802EBA90u: goto label_802EBA90;
    case 0x802EBA94u: goto label_802EBA94;
    case 0x802EBA98u: goto label_802EBA98;
    case 0x802EBA9Cu: goto label_802EBA9C;
    case 0x802EBAA0u: goto label_802EBAA0;
    case 0x802EBAA4u: goto label_802EBAA4;
    case 0x802EBAA8u: goto label_802EBAA8;
    case 0x802EBAACu: goto label_802EBAAC;
    case 0x802EBAB0u: goto label_802EBAB0;
    case 0x802EBAB4u: goto label_802EBAB4;
    case 0x802EBAB8u: goto label_802EBAB8;
    case 0x802EBABCu: goto label_802EBABC;
    case 0x802EBAC0u: goto label_802EBAC0;
    case 0x802EBAC4u: goto label_802EBAC4;
    case 0x802EBAC8u: goto label_802EBAC8;
    case 0x802EBACCu: goto label_802EBACC;
    case 0x802EBAD0u: goto label_802EBAD0;
    case 0x802EBAD4u: goto label_802EBAD4;
    case 0x802EBAD8u: goto label_802EBAD8;
    case 0x802EBADCu: goto label_802EBADC;
    case 0x802EBAE0u: goto label_802EBAE0;
    case 0x802EBAE4u: goto label_802EBAE4;
    case 0x802EBAE8u: goto label_802EBAE8;
    case 0x802EBAECu: goto label_802EBAEC;
    case 0x802EBAF0u: goto label_802EBAF0;
    case 0x802EBAF4u: goto label_802EBAF4;
    case 0x802EBAF8u: goto label_802EBAF8;
    case 0x802EBAFCu: goto label_802EBAFC;
    case 0x802EBB00u: goto label_802EBB00;
    case 0x802EBB04u: goto label_802EBB04;
    case 0x802EBB08u: goto label_802EBB08;
    case 0x802EBB0Cu: goto label_802EBB0C;
    case 0x802EBB10u: goto label_802EBB10;
    case 0x802EBB14u: goto label_802EBB14;
    case 0x802EBB18u: goto label_802EBB18;
    case 0x802EBB1Cu: goto label_802EBB1C;
    case 0x802EBB20u: goto label_802EBB20;
    case 0x802EBB24u: goto label_802EBB24;
    case 0x802EBB28u: goto label_802EBB28;
    case 0x802EBB2Cu: goto label_802EBB2C;
    case 0x802EBB30u: goto label_802EBB30;
    case 0x802EBB34u: goto label_802EBB34;
    case 0x802EBB38u: goto label_802EBB38;
    case 0x802EBB3Cu: goto label_802EBB3C;
    case 0x802EBB40u: goto label_802EBB40;
    case 0x802EBB44u: goto label_802EBB44;
    case 0x802EBB48u: goto label_802EBB48;
    case 0x802EBB4Cu: goto label_802EBB4C;
    case 0x802EBB50u: goto label_802EBB50;
    case 0x802EBB54u: goto label_802EBB54;
    case 0x802EBB58u: goto label_802EBB58;
    case 0x802EBB5Cu: goto label_802EBB5C;
    case 0x802EBB60u: goto label_802EBB60;
    case 0x802EBB64u: goto label_802EBB64;
    case 0x802EBB68u: goto label_802EBB68;
    case 0x802EBB6Cu: goto label_802EBB6C;
    case 0x802EBB70u: goto label_802EBB70;
    case 0x802EBB74u: goto label_802EBB74;
    case 0x802EBB78u: goto label_802EBB78;
    case 0x802EBB7Cu: goto label_802EBB7C;
    case 0x802EBB80u: goto label_802EBB80;
    case 0x802EBB84u: goto label_802EBB84;
    case 0x802EBB88u: goto label_802EBB88;
    case 0x802EBB8Cu: goto label_802EBB8C;
    case 0x802EBB90u: goto label_802EBB90;
    case 0x802EBB94u: goto label_802EBB94;
    case 0x802EBB98u: goto label_802EBB98;
    case 0x802EBB9Cu: goto label_802EBB9C;
    case 0x802EBBA0u: goto label_802EBBA0;
    case 0x802EBBA4u: goto label_802EBBA4;
    case 0x802EBBA8u: goto label_802EBBA8;
    case 0x802EBBACu: goto label_802EBBAC;
    case 0x802EBBB0u: goto label_802EBBB0;
    case 0x802EBBB4u: goto label_802EBBB4;
    case 0x802EBBB8u: goto label_802EBBB8;
    case 0x802EBBBCu: goto label_802EBBBC;
    case 0x802EBBC0u: goto label_802EBBC0;
    case 0x802EBBC4u: goto label_802EBBC4;
    case 0x802EBBC8u: goto label_802EBBC8;
    case 0x802EBBCCu: goto label_802EBBCC;
    case 0x802EBBD0u: goto label_802EBBD0;
    case 0x802EBBD4u: goto label_802EBBD4;
    case 0x802EBBD8u: goto label_802EBBD8;
    case 0x802EBBDCu: goto label_802EBBDC;
    case 0x802EBBE0u: goto label_802EBBE0;
    case 0x802EBBE4u: goto label_802EBBE4;
    case 0x802EBBE8u: goto label_802EBBE8;
    case 0x802EBBECu: goto label_802EBBEC;
    case 0x802EBBF0u: goto label_802EBBF0;
    case 0x802EBBF4u: goto label_802EBBF4;
    case 0x802EBBF8u: goto label_802EBBF8;
    case 0x802EBBFCu: goto label_802EBBFC;
    case 0x802EBC00u: goto label_802EBC00;
    case 0x802EBC04u: goto label_802EBC04;
    case 0x802EBC08u: goto label_802EBC08;
    case 0x802EBC0Cu: goto label_802EBC0C;
    case 0x802EBC10u: goto label_802EBC10;
    case 0x802EBC14u: goto label_802EBC14;
    case 0x802EBC18u: goto label_802EBC18;
    case 0x802EBC1Cu: goto label_802EBC1C;
    case 0x802EBC20u: goto label_802EBC20;
    case 0x802EBC24u: goto label_802EBC24;
    case 0x802EBC28u: goto label_802EBC28;
    case 0x802EBC2Cu: goto label_802EBC2C;
    case 0x802EBC30u: goto label_802EBC30;
    case 0x802EBC34u: goto label_802EBC34;
    case 0x802EBC38u: goto label_802EBC38;
    case 0x802EBC3Cu: goto label_802EBC3C;
    case 0x802EBC40u: goto label_802EBC40;
    case 0x802EBC44u: goto label_802EBC44;
    case 0x802EBC48u: goto label_802EBC48;
    case 0x802EBC4Cu: goto label_802EBC4C;
    case 0x802EBC50u: goto label_802EBC50;
    case 0x802EBC54u: goto label_802EBC54;
    case 0x802EBC58u: goto label_802EBC58;
    case 0x802EBC5Cu: goto label_802EBC5C;
    case 0x802EBC60u: goto label_802EBC60;
    case 0x802EBC64u: goto label_802EBC64;
    case 0x802EBC68u: goto label_802EBC68;
    case 0x802EBC6Cu: goto label_802EBC6C;
    case 0x802EBC70u: goto label_802EBC70;
    case 0x802EBC74u: goto label_802EBC74;
    case 0x802EBC78u: goto label_802EBC78;
    case 0x802EBC7Cu: goto label_802EBC7C;
    case 0x802EBC80u: goto label_802EBC80;
    case 0x802EBC84u: goto label_802EBC84;
    case 0x802EBC88u: goto label_802EBC88;
    case 0x802EBC8Cu: goto label_802EBC8C;
    case 0x802EBC90u: goto label_802EBC90;
    case 0x802EBC94u: goto label_802EBC94;
    case 0x802EBC98u: goto label_802EBC98;
    case 0x802EBC9Cu: goto label_802EBC9C;
    case 0x802EBCA0u: goto label_802EBCA0;
    case 0x802EBCA4u: goto label_802EBCA4;
    case 0x802EBCA8u: goto label_802EBCA8;
    case 0x802EBCACu: goto label_802EBCAC;
    case 0x802EBCB0u: goto label_802EBCB0;
    case 0x802EBCB4u: goto label_802EBCB4;
    case 0x802EBCB8u: goto label_802EBCB8;
    case 0x802EBCBCu: goto label_802EBCBC;
    case 0x802EBCC0u: goto label_802EBCC0;
    case 0x802EBCC4u: goto label_802EBCC4;
    case 0x802EBCC8u: goto label_802EBCC8;
    case 0x802EBCCCu: goto label_802EBCCC;
    case 0x802EBCD0u: goto label_802EBCD0;
    case 0x802EBCD4u: goto label_802EBCD4;
    case 0x802EBCD8u: goto label_802EBCD8;
    case 0x802EBCDCu: goto label_802EBCDC;
    case 0x802EBCE0u: goto label_802EBCE0;
    case 0x802EBCE4u: goto label_802EBCE4;
    case 0x802EBCE8u: goto label_802EBCE8;
    case 0x802EBCECu: goto label_802EBCEC;
    case 0x802EBCF0u: goto label_802EBCF0;
    case 0x802EBCF4u: goto label_802EBCF4;
    case 0x802EBCF8u: goto label_802EBCF8;
    case 0x802EBCFCu: goto label_802EBCFC;
    case 0x802EBD00u: goto label_802EBD00;
    case 0x802EBD04u: goto label_802EBD04;
    case 0x802EBD08u: goto label_802EBD08;
    case 0x802EBD0Cu: goto label_802EBD0C;
    case 0x802EBD10u: goto label_802EBD10;
    case 0x802EBD14u: goto label_802EBD14;
    case 0x802EBD18u: goto label_802EBD18;
    case 0x802EBD1Cu: goto label_802EBD1C;
    case 0x802EBD20u: goto label_802EBD20;
    case 0x802EBD24u: goto label_802EBD24;
    case 0x802EBD28u: goto label_802EBD28;
    case 0x802EBD2Cu: goto label_802EBD2C;
    case 0x802EBD30u: goto label_802EBD30;
    case 0x802EBD34u: goto label_802EBD34;
    case 0x802EBD38u: goto label_802EBD38;
    case 0x802EBD3Cu: goto label_802EBD3C;
    case 0x802EBD40u: goto label_802EBD40;
    case 0x802EBD44u: goto label_802EBD44;
    case 0x802EBD48u: goto label_802EBD48;
    case 0x802EBD4Cu: goto label_802EBD4C;
    case 0x802EBD50u: goto label_802EBD50;
    case 0x802EBD54u: goto label_802EBD54;
    case 0x802EBD58u: goto label_802EBD58;
    case 0x802EBD5Cu: goto label_802EBD5C;
    case 0x802EBD60u: goto label_802EBD60;
    case 0x802EBD64u: goto label_802EBD64;
    case 0x802EBD68u: goto label_802EBD68;
    case 0x802EBD6Cu: goto label_802EBD6C;
    case 0x802EBD70u: goto label_802EBD70;
    case 0x802EBD74u: goto label_802EBD74;
    case 0x802EBD78u: goto label_802EBD78;
    case 0x802EBD7Cu: goto label_802EBD7C;
    case 0x802EBD80u: goto label_802EBD80;
    case 0x802EBD84u: goto label_802EBD84;
    case 0x802EBD88u: goto label_802EBD88;
    case 0x802EBD8Cu: goto label_802EBD8C;
    case 0x802EBD90u: goto label_802EBD90;
    case 0x802EBD94u: goto label_802EBD94;
    case 0x802EBD98u: goto label_802EBD98;
    case 0x802EBD9Cu: goto label_802EBD9C;
    case 0x802EBDA0u: goto label_802EBDA0;
    case 0x802EBDA4u: goto label_802EBDA4;
    case 0x802EBDA8u: goto label_802EBDA8;
    case 0x802EBDACu: goto label_802EBDAC;
    case 0x802EBDB0u: goto label_802EBDB0;
    case 0x802EBDB4u: goto label_802EBDB4;
    case 0x802EBDB8u: goto label_802EBDB8;
    case 0x802EBDBCu: goto label_802EBDBC;
    case 0x802EBDC0u: goto label_802EBDC0;
    case 0x802EBDC4u: goto label_802EBDC4;
    case 0x802EBDC8u: goto label_802EBDC8;
    case 0x802EBDCCu: goto label_802EBDCC;
    case 0x802EBDD0u: goto label_802EBDD0;
    case 0x802EBDD4u: goto label_802EBDD4;
    case 0x802EBDD8u: goto label_802EBDD8;
    case 0x802EBDDCu: goto label_802EBDDC;
    case 0x802EBDE0u: goto label_802EBDE0;
    case 0x802EBDE4u: goto label_802EBDE4;
    case 0x802EBDE8u: goto label_802EBDE8;
    case 0x802EBDECu: goto label_802EBDEC;
    case 0x802EBDF0u: goto label_802EBDF0;
    case 0x802EBDF4u: goto label_802EBDF4;
    case 0x802EBDF8u: goto label_802EBDF8;
    case 0x802EBDFCu: goto label_802EBDFC;
    case 0x802EBE00u: goto label_802EBE00;
    case 0x802EBE04u: goto label_802EBE04;
    case 0x802EBE08u: goto label_802EBE08;
    case 0x802EBE0Cu: goto label_802EBE0C;
    case 0x802EBE10u: goto label_802EBE10;
    case 0x802EBE14u: goto label_802EBE14;
    case 0x802EBE18u: goto label_802EBE18;
    case 0x802EBE1Cu: goto label_802EBE1C;
    case 0x802EBE20u: goto label_802EBE20;
    case 0x802EBE24u: goto label_802EBE24;
    case 0x802EBE28u: goto label_802EBE28;
    case 0x802EBE2Cu: goto label_802EBE2C;
    case 0x802EBE30u: goto label_802EBE30;
    case 0x802EBE34u: goto label_802EBE34;
    case 0x802EBE38u: goto label_802EBE38;
    case 0x802EBE3Cu: goto label_802EBE3C;
    case 0x802EBE40u: goto label_802EBE40;
    case 0x802EBE44u: goto label_802EBE44;
    case 0x802EBE48u: goto label_802EBE48;
    case 0x802EBE4Cu: goto label_802EBE4C;
    case 0x802EBE50u: goto label_802EBE50;
    case 0x802EBE54u: goto label_802EBE54;
    case 0x802EBE58u: goto label_802EBE58;
    case 0x802EBE5Cu: goto label_802EBE5C;
    case 0x802EBE60u: goto label_802EBE60;
    case 0x802EBE64u: goto label_802EBE64;
    case 0x802EBE68u: goto label_802EBE68;
    case 0x802EBE6Cu: goto label_802EBE6C;
    case 0x802EBE70u: goto label_802EBE70;
    case 0x802EBE74u: goto label_802EBE74;
    case 0x802EBE78u: goto label_802EBE78;
    case 0x802EBE7Cu: goto label_802EBE7C;
    case 0x802EBE80u: goto label_802EBE80;
    case 0x802EBE84u: goto label_802EBE84;
    case 0x802EBE88u: goto label_802EBE88;
    case 0x802EBE8Cu: goto label_802EBE8C;
    case 0x802EBE90u: goto label_802EBE90;
    case 0x802EBE94u: goto label_802EBE94;
    case 0x802EBE98u: goto label_802EBE98;
    case 0x802EBE9Cu: goto label_802EBE9C;
    case 0x802EBEA0u: goto label_802EBEA0;
    case 0x802EBEA4u: goto label_802EBEA4;
    case 0x802EBEA8u: goto label_802EBEA8;
    case 0x802EBEACu: goto label_802EBEAC;
    case 0x802EBEB0u: goto label_802EBEB0;
    case 0x802EBEB4u: goto label_802EBEB4;
    case 0x802EBEB8u: goto label_802EBEB8;
    case 0x802EBEBCu: goto label_802EBEBC;
    case 0x802EBEC0u: goto label_802EBEC0;
    case 0x802EBEC4u: goto label_802EBEC4;
    case 0x802EBEC8u: goto label_802EBEC8;
    case 0x802EBECCu: goto label_802EBECC;
    case 0x802EBED0u: goto label_802EBED0;
    case 0x802EBED4u: goto label_802EBED4;
    case 0x802EBED8u: goto label_802EBED8;
    case 0x802EBEDCu: goto label_802EBEDC;
    case 0x802EBEE0u: goto label_802EBEE0;
    case 0x802EBEE4u: goto label_802EBEE4;
    case 0x802EBEE8u: goto label_802EBEE8;
    case 0x802EBEECu: goto label_802EBEEC;
    case 0x802EBEF0u: goto label_802EBEF0;
    case 0x802EBEF4u: goto label_802EBEF4;
    case 0x802EBEF8u: goto label_802EBEF8;
    case 0x802EBEFCu: goto label_802EBEFC;
    case 0x802EBF00u: goto label_802EBF00;
    case 0x802EBF04u: goto label_802EBF04;
    case 0x802EBF08u: goto label_802EBF08;
    case 0x802EBF0Cu: goto label_802EBF0C;
    case 0x802EBF10u: goto label_802EBF10;
    case 0x802EBF14u: goto label_802EBF14;
    case 0x802EBF18u: goto label_802EBF18;
    case 0x802EBF1Cu: goto label_802EBF1C;
    case 0x802EBF20u: goto label_802EBF20;
    case 0x802EBF24u: goto label_802EBF24;
    case 0x802EBF28u: goto label_802EBF28;
    case 0x802EBF2Cu: goto label_802EBF2C;
    case 0x802EBF30u: goto label_802EBF30;
    case 0x802EBF34u: goto label_802EBF34;
    case 0x802EBF38u: goto label_802EBF38;
    case 0x802EBF3Cu: goto label_802EBF3C;
    case 0x802EBF40u: goto label_802EBF40;
    case 0x802EBF44u: goto label_802EBF44;
    case 0x802EBF48u: goto label_802EBF48;
    case 0x802EBF4Cu: goto label_802EBF4C;
    case 0x802EBF50u: goto label_802EBF50;
    case 0x802EBF54u: goto label_802EBF54;
    case 0x802EBF58u: goto label_802EBF58;
    case 0x802EBF5Cu: goto label_802EBF5C;
    case 0x802EBF60u: goto label_802EBF60;
    case 0x802EBF64u: goto label_802EBF64;
    case 0x802EBF68u: goto label_802EBF68;
    case 0x802EBF6Cu: goto label_802EBF6C;
    case 0x802EBF70u: goto label_802EBF70;
    case 0x802EBF74u: goto label_802EBF74;
    case 0x802EBF78u: goto label_802EBF78;
    case 0x802EBF7Cu: goto label_802EBF7C;
    case 0x802EBF80u: goto label_802EBF80;
    case 0x802EBF84u: goto label_802EBF84;
    case 0x802EBF88u: goto label_802EBF88;
    case 0x802EBF8Cu: goto label_802EBF8C;
    case 0x802EBF90u: goto label_802EBF90;
    case 0x802EBF94u: goto label_802EBF94;
    case 0x802EBF98u: goto label_802EBF98;
    case 0x802EBF9Cu: goto label_802EBF9C;
    case 0x802EBFA0u: goto label_802EBFA0;
    case 0x802EBFA4u: goto label_802EBFA4;
    case 0x802EBFA8u: goto label_802EBFA8;
    case 0x802EBFACu: goto label_802EBFAC;
    case 0x802EBFB0u: goto label_802EBFB0;
    case 0x802EBFB4u: goto label_802EBFB4;
    case 0x802EBFB8u: goto label_802EBFB8;
    case 0x802EBFBCu: goto label_802EBFBC;
    case 0x802EBFC0u: goto label_802EBFC0;
    case 0x802EBFC4u: goto label_802EBFC4;
    case 0x802EBFC8u: goto label_802EBFC8;
    case 0x802EBFCCu: goto label_802EBFCC;
    case 0x802EBFD0u: goto label_802EBFD0;
    case 0x802EBFD4u: goto label_802EBFD4;
    case 0x802EBFD8u: goto label_802EBFD8;
    case 0x802EBFDCu: goto label_802EBFDC;
    case 0x802EBFE0u: goto label_802EBFE0;
    case 0x802EBFE4u: goto label_802EBFE4;
    case 0x802EBFE8u: goto label_802EBFE8;
    case 0x802EBFECu: goto label_802EBFEC;
    case 0x802EBFF0u: goto label_802EBFF0;
    case 0x802EBFF4u: goto label_802EBFF4;
    case 0x802EBFF8u: goto label_802EBFF8;
    case 0x802EBFFCu: goto label_802EBFFC;
    case 0x802EC000u: goto label_802EC000;
    case 0x802EC004u: goto label_802EC004;
    case 0x802EC008u: goto label_802EC008;
    case 0x802EC00Cu: goto label_802EC00C;
    case 0x802EC010u: goto label_802EC010;
    case 0x802EC014u: goto label_802EC014;
    case 0x802EC018u: goto label_802EC018;
    case 0x802EC01Cu: goto label_802EC01C;
    case 0x802EC020u: goto label_802EC020;
    case 0x802EC024u: goto label_802EC024;
    case 0x802EC028u: goto label_802EC028;
    case 0x802EC02Cu: goto label_802EC02C;
    case 0x802EC030u: goto label_802EC030;
    case 0x802EC034u: goto label_802EC034;
    case 0x802EC038u: goto label_802EC038;
    case 0x802EC03Cu: goto label_802EC03C;
    case 0x802EC040u: goto label_802EC040;
    case 0x802EC044u: goto label_802EC044;
    case 0x802EC048u: goto label_802EC048;
    case 0x802EC04Cu: goto label_802EC04C;
    case 0x802EC050u: goto label_802EC050;
    case 0x802EC054u: goto label_802EC054;
    case 0x802EC058u: goto label_802EC058;
    case 0x802EC05Cu: goto label_802EC05C;
    case 0x802EC060u: goto label_802EC060;
    case 0x802EC064u: goto label_802EC064;
    case 0x802EC068u: goto label_802EC068;
    case 0x802EC06Cu: goto label_802EC06C;
    case 0x802EC070u: goto label_802EC070;
    case 0x802EC074u: goto label_802EC074;
    case 0x802EC078u: goto label_802EC078;
    case 0x802EC07Cu: goto label_802EC07C;
    case 0x802EC080u: goto label_802EC080;
    case 0x802EC084u: goto label_802EC084;
    case 0x802EC088u: goto label_802EC088;
    case 0x802EC08Cu: goto label_802EC08C;
    case 0x802EC090u: goto label_802EC090;
    case 0x802EC094u: goto label_802EC094;
    case 0x802EC098u: goto label_802EC098;
    case 0x802EC09Cu: goto label_802EC09C;
    case 0x802EC0A0u: goto label_802EC0A0;
    case 0x802EC0A4u: goto label_802EC0A4;
    case 0x802EC0A8u: goto label_802EC0A8;
    case 0x802EC0ACu: goto label_802EC0AC;
    case 0x802EC0B0u: goto label_802EC0B0;
    case 0x802EC0B4u: goto label_802EC0B4;
    case 0x802EC0B8u: goto label_802EC0B8;
    case 0x802EC0BCu: goto label_802EC0BC;
    case 0x802EC0C0u: goto label_802EC0C0;
    case 0x802EC0C4u: goto label_802EC0C4;
    case 0x802EC0C8u: goto label_802EC0C8;
    case 0x802EC0CCu: goto label_802EC0CC;
    case 0x802EC0D0u: goto label_802EC0D0;
    case 0x802EC0D4u: goto label_802EC0D4;
    case 0x802EC0D8u: goto label_802EC0D8;
    case 0x802EC0DCu: goto label_802EC0DC;
    case 0x802EC0E0u: goto label_802EC0E0;
    case 0x802EC0E4u: goto label_802EC0E4;
    case 0x802EC0E8u: goto label_802EC0E8;
    case 0x802EC0ECu: goto label_802EC0EC;
    case 0x802EC0F0u: goto label_802EC0F0;
    case 0x802EC0F4u: goto label_802EC0F4;
    case 0x802EC0F8u: goto label_802EC0F8;
    case 0x802EC0FCu: goto label_802EC0FC;
    case 0x802EC100u: goto label_802EC100;
    case 0x802EC104u: goto label_802EC104;
    case 0x802EC108u: goto label_802EC108;
    case 0x802EC10Cu: goto label_802EC10C;
    case 0x802EC110u: goto label_802EC110;
    case 0x802EC114u: goto label_802EC114;
    case 0x802EC118u: goto label_802EC118;
    case 0x802EC11Cu: goto label_802EC11C;
    case 0x802EC120u: goto label_802EC120;
    case 0x802EC124u: goto label_802EC124;
    case 0x802EC128u: goto label_802EC128;
    case 0x802EC12Cu: goto label_802EC12C;
    case 0x802EC130u: goto label_802EC130;
    case 0x802EC134u: goto label_802EC134;
    case 0x802EC138u: goto label_802EC138;
    case 0x802EC13Cu: goto label_802EC13C;
    case 0x802EC140u: goto label_802EC140;
    case 0x802EC144u: goto label_802EC144;
    case 0x802EC148u: goto label_802EC148;
    case 0x802EC14Cu: goto label_802EC14C;
    case 0x802EC150u: goto label_802EC150;
    case 0x802EC154u: goto label_802EC154;
    case 0x802EC158u: goto label_802EC158;
    case 0x802EC15Cu: goto label_802EC15C;
    case 0x802EC160u: goto label_802EC160;
    case 0x802EC164u: goto label_802EC164;
    case 0x802EC168u: goto label_802EC168;
    case 0x802EC16Cu: goto label_802EC16C;
    case 0x802EC170u: goto label_802EC170;
    case 0x802EC174u: goto label_802EC174;
    case 0x802EC178u: goto label_802EC178;
    case 0x802EC17Cu: goto label_802EC17C;
    case 0x802EC180u: goto label_802EC180;
    case 0x802EC184u: goto label_802EC184;
    case 0x802EC188u: goto label_802EC188;
    case 0x802EC18Cu: goto label_802EC18C;
    case 0x802EC190u: goto label_802EC190;
    case 0x802EC194u: goto label_802EC194;
    case 0x802EC198u: goto label_802EC198;
    case 0x802EC19Cu: goto label_802EC19C;
    case 0x802EC1A0u: goto label_802EC1A0;
    case 0x802EC1A4u: goto label_802EC1A4;
    case 0x802EC1A8u: goto label_802EC1A8;
    case 0x802EC1ACu: goto label_802EC1AC;
    case 0x802EC1B0u: goto label_802EC1B0;
    case 0x802EC1B4u: goto label_802EC1B4;
    case 0x802EC1B8u: goto label_802EC1B8;
    case 0x802EC1BCu: goto label_802EC1BC;
    case 0x802EC1C0u: goto label_802EC1C0;
    case 0x802EC1C4u: goto label_802EC1C4;
    case 0x802EC1C8u: goto label_802EC1C8;
    case 0x802EC1CCu: goto label_802EC1CC;
    case 0x802EC1D0u: goto label_802EC1D0;
    case 0x802EC1D4u: goto label_802EC1D4;
    case 0x802EC1D8u: goto label_802EC1D8;
    case 0x802EC1DCu: goto label_802EC1DC;
    case 0x802EC1E0u: goto label_802EC1E0;
    case 0x802EC1E4u: goto label_802EC1E4;
    case 0x802EC1E8u: goto label_802EC1E8;
    case 0x802EC1ECu: goto label_802EC1EC;
    case 0x802EC1F0u: goto label_802EC1F0;
    case 0x802EC1F4u: goto label_802EC1F4;
    case 0x802EC1F8u: goto label_802EC1F8;
    case 0x802EC1FCu: goto label_802EC1FC;
    case 0x802EC200u: goto label_802EC200;
    case 0x802EC204u: goto label_802EC204;
    case 0x802EC208u: goto label_802EC208;
    case 0x802EC20Cu: goto label_802EC20C;
    case 0x802EC210u: goto label_802EC210;
    case 0x802EC214u: goto label_802EC214;
    case 0x802EC218u: goto label_802EC218;
    case 0x802EC21Cu: goto label_802EC21C;
    case 0x802EC220u: goto label_802EC220;
    case 0x802EC224u: goto label_802EC224;
    case 0x802EC228u: goto label_802EC228;
    case 0x802EC22Cu: goto label_802EC22C;
    case 0x802EC230u: goto label_802EC230;
    case 0x802EC234u: goto label_802EC234;
    case 0x802EC238u: goto label_802EC238;
    case 0x802EC23Cu: goto label_802EC23C;
    case 0x802EC240u: goto label_802EC240;
    case 0x802EC244u: goto label_802EC244;
    case 0x802EC248u: goto label_802EC248;
    case 0x802EC24Cu: goto label_802EC24C;
    case 0x802EC250u: goto label_802EC250;
    case 0x802EC254u: goto label_802EC254;
    case 0x802EC258u: goto label_802EC258;
    case 0x802EC25Cu: goto label_802EC25C;
    case 0x802EC260u: goto label_802EC260;
    case 0x802EC264u: goto label_802EC264;
    case 0x802EC268u: goto label_802EC268;
    case 0x802EC26Cu: goto label_802EC26C;
    case 0x802EC270u: goto label_802EC270;
    case 0x802EC274u: goto label_802EC274;
    case 0x802EC278u: goto label_802EC278;
    case 0x802EC27Cu: goto label_802EC27C;
    case 0x802EC280u: goto label_802EC280;
    case 0x802EC284u: goto label_802EC284;
    case 0x802EC288u: goto label_802EC288;
    case 0x802EC28Cu: goto label_802EC28C;
    case 0x802EC290u: goto label_802EC290;
    case 0x802EC294u: goto label_802EC294;
    case 0x802EC298u: goto label_802EC298;
    case 0x802EC29Cu: goto label_802EC29C;
    case 0x802EC2A0u: goto label_802EC2A0;
    case 0x802EC2A4u: goto label_802EC2A4;
    case 0x802EC2A8u: goto label_802EC2A8;
    case 0x802EC2ACu: goto label_802EC2AC;
    case 0x802EC2B0u: goto label_802EC2B0;
    case 0x802EC2B4u: goto label_802EC2B4;
    case 0x802EC2B8u: goto label_802EC2B8;
    case 0x802EC2BCu: goto label_802EC2BC;
    case 0x802EC2C0u: goto label_802EC2C0;
    case 0x802EC2C4u: goto label_802EC2C4;
    case 0x802EC2C8u: goto label_802EC2C8;
    case 0x802EC2CCu: goto label_802EC2CC;
    case 0x802EC2D0u: goto label_802EC2D0;
    case 0x802EC2D4u: goto label_802EC2D4;
    case 0x802EC2D8u: goto label_802EC2D8;
    case 0x802EC2DCu: goto label_802EC2DC;
    case 0x802EC2E0u: goto label_802EC2E0;
    case 0x802EC2E4u: goto label_802EC2E4;
    case 0x802EC2E8u: goto label_802EC2E8;
    case 0x802EC2ECu: goto label_802EC2EC;
    case 0x802EC2F0u: goto label_802EC2F0;
    case 0x802EC2F4u: goto label_802EC2F4;
    case 0x802EC2F8u: goto label_802EC2F8;
    case 0x802EC2FCu: goto label_802EC2FC;
    case 0x802EC300u: goto label_802EC300;
    case 0x802EC304u: goto label_802EC304;
    case 0x802EC308u: goto label_802EC308;
    case 0x802EC30Cu: goto label_802EC30C;
    case 0x802EC310u: goto label_802EC310;
    case 0x802EC314u: goto label_802EC314;
    case 0x802EC318u: goto label_802EC318;
    case 0x802EC31Cu: goto label_802EC31C;
    case 0x802EC320u: goto label_802EC320;
    case 0x802EC324u: goto label_802EC324;
    case 0x802EC328u: goto label_802EC328;
    case 0x802EC32Cu: goto label_802EC32C;
    case 0x802EC330u: goto label_802EC330;
    case 0x802EC334u: goto label_802EC334;
    case 0x802EC338u: goto label_802EC338;
    case 0x802EC33Cu: goto label_802EC33C;
    case 0x802EC340u: goto label_802EC340;
    case 0x802EC344u: goto label_802EC344;
    case 0x802EC348u: goto label_802EC348;
    case 0x802EC34Cu: goto label_802EC34C;
    case 0x802EC350u: goto label_802EC350;
    case 0x802EC354u: goto label_802EC354;
    case 0x802EC358u: goto label_802EC358;
    case 0x802EC35Cu: goto label_802EC35C;
    case 0x802EC360u: goto label_802EC360;
    case 0x802EC364u: goto label_802EC364;
    case 0x802EC368u: goto label_802EC368;
    case 0x802EC36Cu: goto label_802EC36C;
    case 0x802EC370u: goto label_802EC370;
    case 0x802EC374u: goto label_802EC374;
    case 0x802EC378u: goto label_802EC378;
    case 0x802EC37Cu: goto label_802EC37C;
    case 0x802EC380u: goto label_802EC380;
    case 0x802EC384u: goto label_802EC384;
    case 0x802EC388u: goto label_802EC388;
    case 0x802EC38Cu: goto label_802EC38C;
    case 0x802EC390u: goto label_802EC390;
    case 0x802EC394u: goto label_802EC394;
    case 0x802EC398u: goto label_802EC398;
    case 0x802EC39Cu: goto label_802EC39C;
    case 0x802EC3A0u: goto label_802EC3A0;
    case 0x802EC3A4u: goto label_802EC3A4;
    case 0x802EC3A8u: goto label_802EC3A8;
    case 0x802EC3ACu: goto label_802EC3AC;
    case 0x802EC3B0u: goto label_802EC3B0;
    case 0x802EC3B4u: goto label_802EC3B4;
    case 0x802EC3B8u: goto label_802EC3B8;
    case 0x802EC3BCu: goto label_802EC3BC;
    case 0x802EC3C0u: goto label_802EC3C0;
    case 0x802EC3C4u: goto label_802EC3C4;
    case 0x802EC3C8u: goto label_802EC3C8;
    case 0x802EC3CCu: goto label_802EC3CC;
    case 0x802EC3D0u: goto label_802EC3D0;
    case 0x802EC3D4u: goto label_802EC3D4;
    case 0x802EC3D8u: goto label_802EC3D8;
    case 0x802EC3DCu: goto label_802EC3DC;
    case 0x802EC3E0u: goto label_802EC3E0;
    case 0x802EC3E4u: goto label_802EC3E4;
    case 0x802EC3E8u: goto label_802EC3E8;
    case 0x802EC3ECu: goto label_802EC3EC;
    case 0x802EC3F0u: goto label_802EC3F0;
    case 0x802EC3F4u: goto label_802EC3F4;
    case 0x802EC3F8u: goto label_802EC3F8;
    case 0x802EC3FCu: goto label_802EC3FC;
    case 0x802EC400u: goto label_802EC400;
    case 0x802EC404u: goto label_802EC404;
    case 0x802EC408u: goto label_802EC408;
    case 0x802EC40Cu: goto label_802EC40C;
    case 0x802EC410u: goto label_802EC410;
    case 0x802EC414u: goto label_802EC414;
    case 0x802EC418u: goto label_802EC418;
    case 0x802EC41Cu: goto label_802EC41C;
    case 0x802EC420u: goto label_802EC420;
    case 0x802EC424u: goto label_802EC424;
    case 0x802EC428u: goto label_802EC428;
    case 0x802EC42Cu: goto label_802EC42C;
    case 0x802EC430u: goto label_802EC430;
    case 0x802EC434u: goto label_802EC434;
    case 0x802EC438u: goto label_802EC438;
    case 0x802EC43Cu: goto label_802EC43C;
    case 0x802EC440u: goto label_802EC440;
    case 0x802EC444u: goto label_802EC444;
    case 0x802EC448u: goto label_802EC448;
    case 0x802EC44Cu: goto label_802EC44C;
    case 0x802EC450u: goto label_802EC450;
    case 0x802EC454u: goto label_802EC454;
    case 0x802EC458u: goto label_802EC458;
    case 0x802EC45Cu: goto label_802EC45C;
    case 0x802EC460u: goto label_802EC460;
    case 0x802EC464u: goto label_802EC464;
    case 0x802EC468u: goto label_802EC468;
    case 0x802EC46Cu: goto label_802EC46C;
    case 0x802EC470u: goto label_802EC470;
    case 0x802EC474u: goto label_802EC474;
    case 0x802EC478u: goto label_802EC478;
    case 0x802EC47Cu: goto label_802EC47C;
    case 0x802EC480u: goto label_802EC480;
    case 0x802EC484u: goto label_802EC484;
    case 0x802EC488u: goto label_802EC488;
    case 0x802EC48Cu: goto label_802EC48C;
    case 0x802EC490u: goto label_802EC490;
    case 0x802EC494u: goto label_802EC494;
    case 0x802EC498u: goto label_802EC498;
    case 0x802EC49Cu: goto label_802EC49C;
    case 0x802EC4A0u: goto label_802EC4A0;
    case 0x802EC4A4u: goto label_802EC4A4;
    case 0x802EC4A8u: goto label_802EC4A8;
    case 0x802EC4ACu: goto label_802EC4AC;
    case 0x802EC4B0u: goto label_802EC4B0;
    case 0x802EC4B4u: goto label_802EC4B4;
    case 0x802EC4B8u: goto label_802EC4B8;
    case 0x802EC4BCu: goto label_802EC4BC;
    case 0x802EC4C0u: goto label_802EC4C0;
    case 0x802EC4C4u: goto label_802EC4C4;
    case 0x802EC4C8u: goto label_802EC4C8;
    case 0x802EC4CCu: goto label_802EC4CC;
    case 0x802EC4D0u: goto label_802EC4D0;
    case 0x802EC4D4u: goto label_802EC4D4;
    case 0x802EC4D8u: goto label_802EC4D8;
    case 0x802EC4DCu: goto label_802EC4DC;
    case 0x802EC4E0u: goto label_802EC4E0;
    case 0x802EC4E4u: goto label_802EC4E4;
    case 0x802EC4E8u: goto label_802EC4E8;
    case 0x802EC4ECu: goto label_802EC4EC;
    case 0x802EC4F0u: goto label_802EC4F0;
    case 0x802EC4F4u: goto label_802EC4F4;
    case 0x802EC4F8u: goto label_802EC4F8;
    case 0x802EC4FCu: goto label_802EC4FC;
    case 0x802EC500u: goto label_802EC500;
    case 0x802EC504u: goto label_802EC504;
    case 0x802EC508u: goto label_802EC508;
    case 0x802EC50Cu: goto label_802EC50C;
    case 0x802EC510u: goto label_802EC510;
    case 0x802EC514u: goto label_802EC514;
    case 0x802EC518u: goto label_802EC518;
    case 0x802EC51Cu: goto label_802EC51C;
    case 0x802EC520u: goto label_802EC520;
    case 0x802EC524u: goto label_802EC524;
    case 0x802EC528u: goto label_802EC528;
    case 0x802EC52Cu: goto label_802EC52C;
    case 0x802EC530u: goto label_802EC530;
    case 0x802EC534u: goto label_802EC534;
    case 0x802EC538u: goto label_802EC538;
    case 0x802EC53Cu: goto label_802EC53C;
    case 0x802EC540u: goto label_802EC540;
    case 0x802EC544u: goto label_802EC544;
    case 0x802EC548u: goto label_802EC548;
    case 0x802EC54Cu: goto label_802EC54C;
    case 0x802EC550u: goto label_802EC550;
    case 0x802EC554u: goto label_802EC554;
    case 0x802EC558u: goto label_802EC558;
    case 0x802EC55Cu: goto label_802EC55C;
    case 0x802EC560u: goto label_802EC560;
    case 0x802EC564u: goto label_802EC564;
    case 0x802EC568u: goto label_802EC568;
    case 0x802EC56Cu: goto label_802EC56C;
    case 0x802EC570u: goto label_802EC570;
    case 0x802EC574u: goto label_802EC574;
    case 0x802EC578u: goto label_802EC578;
    case 0x802EC57Cu: goto label_802EC57C;
    case 0x802EC580u: goto label_802EC580;
    case 0x802EC584u: goto label_802EC584;
    case 0x802EC588u: goto label_802EC588;
    case 0x802EC58Cu: goto label_802EC58C;
    case 0x802EC590u: goto label_802EC590;
    case 0x802EC594u: goto label_802EC594;
    case 0x802EC598u: goto label_802EC598;
    case 0x802EC59Cu: goto label_802EC59C;
    case 0x802EC5A0u: goto label_802EC5A0;
    case 0x802EC5A4u: goto label_802EC5A4;
    case 0x802EC5A8u: goto label_802EC5A8;
    case 0x802EC5ACu: goto label_802EC5AC;
    case 0x802EC5B0u: goto label_802EC5B0;
    case 0x802EC5B4u: goto label_802EC5B4;
    case 0x802EC5B8u: goto label_802EC5B8;
    case 0x802EC5BCu: goto label_802EC5BC;
    case 0x802EC5C0u: goto label_802EC5C0;
    case 0x802EC5C4u: goto label_802EC5C4;
    case 0x802EC5C8u: goto label_802EC5C8;
    case 0x802EC5CCu: goto label_802EC5CC;
    case 0x802EC5D0u: goto label_802EC5D0;
    case 0x802EC5D4u: goto label_802EC5D4;
    case 0x802EC5D8u: goto label_802EC5D8;
    case 0x802EC5DCu: goto label_802EC5DC;
    case 0x802EC5E0u: goto label_802EC5E0;
    case 0x802EC5E4u: goto label_802EC5E4;
    case 0x802EC5E8u: goto label_802EC5E8;
    case 0x802EC5ECu: goto label_802EC5EC;
    case 0x802EC5F0u: goto label_802EC5F0;
    case 0x802EC5F4u: goto label_802EC5F4;
    case 0x802EC5F8u: goto label_802EC5F8;
    case 0x802EC5FCu: goto label_802EC5FC;
    case 0x802EC600u: goto label_802EC600;
    case 0x802EC604u: goto label_802EC604;
    case 0x802EC608u: goto label_802EC608;
    case 0x802EC60Cu: goto label_802EC60C;
    case 0x802EC610u: goto label_802EC610;
    case 0x802EC614u: goto label_802EC614;
    case 0x802EC618u: goto label_802EC618;
    case 0x802EC61Cu: goto label_802EC61C;
    case 0x802EC620u: goto label_802EC620;
    case 0x802EC624u: goto label_802EC624;
    case 0x802EC628u: goto label_802EC628;
    case 0x802EC62Cu: goto label_802EC62C;
    case 0x802EC630u: goto label_802EC630;
    case 0x802EC634u: goto label_802EC634;
    case 0x802EC638u: goto label_802EC638;
    case 0x802EC63Cu: goto label_802EC63C;
    case 0x802EC640u: goto label_802EC640;
    case 0x802EC644u: goto label_802EC644;
    case 0x802EC648u: goto label_802EC648;
    case 0x802EC64Cu: goto label_802EC64C;
    case 0x802EC650u: goto label_802EC650;
    case 0x802EC654u: goto label_802EC654;
    case 0x802EC658u: goto label_802EC658;
    case 0x802EC65Cu: goto label_802EC65C;
    case 0x802EC660u: goto label_802EC660;
    case 0x802EC664u: goto label_802EC664;
    case 0x802EC668u: goto label_802EC668;
    case 0x802EC66Cu: goto label_802EC66C;
    case 0x802EC670u: goto label_802EC670;
    case 0x802EC674u: goto label_802EC674;
    case 0x802EC678u: goto label_802EC678;
    case 0x802EC67Cu: goto label_802EC67C;
    case 0x802EC680u: goto label_802EC680;
    case 0x802EC684u: goto label_802EC684;
    case 0x802EC688u: goto label_802EC688;
    case 0x802EC68Cu: goto label_802EC68C;
    case 0x802EC690u: goto label_802EC690;
    case 0x802EC694u: goto label_802EC694;
    case 0x802EC698u: goto label_802EC698;
    case 0x802EC69Cu: goto label_802EC69C;
    case 0x802EC6A0u: goto label_802EC6A0;
    case 0x802EC6A4u: goto label_802EC6A4;
    case 0x802EC6A8u: goto label_802EC6A8;
    case 0x802EC6ACu: goto label_802EC6AC;
    case 0x802EC6B0u: goto label_802EC6B0;
    case 0x802EC6B4u: goto label_802EC6B4;
    case 0x802EC6B8u: goto label_802EC6B8;
    case 0x802EC6BCu: goto label_802EC6BC;
    case 0x802EC6C0u: goto label_802EC6C0;
    case 0x802EC6C4u: goto label_802EC6C4;
    case 0x802EC6C8u: goto label_802EC6C8;
    case 0x802EC6CCu: goto label_802EC6CC;
    case 0x802EC6D0u: goto label_802EC6D0;
    case 0x802EC6D4u: goto label_802EC6D4;
    case 0x802EC6D8u: goto label_802EC6D8;
    case 0x802EC6DCu: goto label_802EC6DC;
    case 0x802EC6E0u: goto label_802EC6E0;
    case 0x802EC6E4u: goto label_802EC6E4;
    case 0x802EC6E8u: goto label_802EC6E8;
    case 0x802EC6ECu: goto label_802EC6EC;
    case 0x802EC6F0u: goto label_802EC6F0;
    case 0x802EC6F4u: goto label_802EC6F4;
    case 0x802EC6F8u: goto label_802EC6F8;
    case 0x802EC6FCu: goto label_802EC6FC;
    case 0x802EC700u: goto label_802EC700;
    case 0x802EC704u: goto label_802EC704;
    case 0x802EC708u: goto label_802EC708;
    case 0x802EC70Cu: goto label_802EC70C;
    case 0x802EC710u: goto label_802EC710;
    case 0x802EC714u: goto label_802EC714;
    case 0x802EC718u: goto label_802EC718;
    case 0x802EC71Cu: goto label_802EC71C;
    case 0x802EC720u: goto label_802EC720;
    case 0x802EC724u: goto label_802EC724;
    case 0x802EC728u: goto label_802EC728;
    case 0x802EC72Cu: goto label_802EC72C;
    case 0x802EC730u: goto label_802EC730;
    case 0x802EC734u: goto label_802EC734;
    case 0x802EC738u: goto label_802EC738;
    case 0x802EC73Cu: goto label_802EC73C;
    case 0x802EC740u: goto label_802EC740;
    case 0x802EC744u: goto label_802EC744;
    case 0x802EC748u: goto label_802EC748;
    case 0x802EC74Cu: goto label_802EC74C;
    case 0x802EC750u: goto label_802EC750;
    case 0x802EC754u: goto label_802EC754;
    case 0x802EC758u: goto label_802EC758;
    case 0x802EC75Cu: goto label_802EC75C;
    case 0x802EC760u: goto label_802EC760;
    case 0x802EC764u: goto label_802EC764;
    case 0x802EC768u: goto label_802EC768;
    case 0x802EC76Cu: goto label_802EC76C;
    case 0x802EC770u: goto label_802EC770;
    case 0x802EC774u: goto label_802EC774;
    case 0x802EC778u: goto label_802EC778;
    case 0x802EC77Cu: goto label_802EC77C;
    case 0x802EC780u: goto label_802EC780;
    case 0x802EC784u: goto label_802EC784;
    case 0x802EC788u: goto label_802EC788;
    case 0x802EC78Cu: goto label_802EC78C;
    case 0x802EC790u: goto label_802EC790;
    case 0x802EC794u: goto label_802EC794;
    case 0x802EC798u: goto label_802EC798;
    case 0x802EC79Cu: goto label_802EC79C;
    case 0x802EC7A0u: goto label_802EC7A0;
    case 0x802EC7A4u: goto label_802EC7A4;
    case 0x802EC7A8u: goto label_802EC7A8;
    case 0x802EC7ACu: goto label_802EC7AC;
    case 0x802EC7B0u: goto label_802EC7B0;
    case 0x802EC7B4u: goto label_802EC7B4;
    case 0x802EC7B8u: goto label_802EC7B8;
    case 0x802EC7BCu: goto label_802EC7BC;
    case 0x802EC7C0u: goto label_802EC7C0;
    case 0x802EC7C4u: goto label_802EC7C4;
    case 0x802EC7C8u: goto label_802EC7C8;
    case 0x802EC7CCu: goto label_802EC7CC;
    case 0x802EC7D0u: goto label_802EC7D0;
    case 0x802EC7D4u: goto label_802EC7D4;
    case 0x802EC7D8u: goto label_802EC7D8;
    case 0x802EC7DCu: goto label_802EC7DC;
    case 0x802EC7E0u: goto label_802EC7E0;
    case 0x802EC7E4u: goto label_802EC7E4;
    case 0x802EC7E8u: goto label_802EC7E8;
    case 0x802EC7ECu: goto label_802EC7EC;
    case 0x802EC7F0u: goto label_802EC7F0;
    case 0x802EC7F4u: goto label_802EC7F4;
    case 0x802EC7F8u: goto label_802EC7F8;
    case 0x802EC7FCu: goto label_802EC7FC;
    case 0x802EC800u: goto label_802EC800;
    case 0x802EC804u: goto label_802EC804;
    case 0x802EC808u: goto label_802EC808;
    case 0x802EC80Cu: goto label_802EC80C;
    case 0x802EC810u: goto label_802EC810;
    case 0x802EC814u: goto label_802EC814;
    case 0x802EC818u: goto label_802EC818;
    case 0x802EC81Cu: goto label_802EC81C;
    case 0x802EC820u: goto label_802EC820;
    case 0x802EC824u: goto label_802EC824;
    case 0x802EC828u: goto label_802EC828;
    case 0x802EC82Cu: goto label_802EC82C;
    case 0x802EC830u: goto label_802EC830;
    case 0x802EC834u: goto label_802EC834;
    case 0x802EC838u: goto label_802EC838;
    case 0x802EC83Cu: goto label_802EC83C;
    case 0x802EC840u: goto label_802EC840;
    case 0x802EC844u: goto label_802EC844;
    case 0x802EC848u: goto label_802EC848;
    case 0x802EC84Cu: goto label_802EC84C;
    case 0x802EC850u: goto label_802EC850;
    case 0x802EC854u: goto label_802EC854;
    case 0x802EC858u: goto label_802EC858;
    case 0x802EC85Cu: goto label_802EC85C;
    case 0x802EC860u: goto label_802EC860;
    case 0x802EC864u: goto label_802EC864;
    case 0x802EC868u: goto label_802EC868;
    case 0x802EC86Cu: goto label_802EC86C;
    case 0x802EC870u: goto label_802EC870;
    case 0x802EC874u: goto label_802EC874;
    case 0x802EC878u: goto label_802EC878;
    case 0x802EC87Cu: goto label_802EC87C;
    case 0x802EC880u: goto label_802EC880;
    case 0x802EC884u: goto label_802EC884;
    case 0x802EC888u: goto label_802EC888;
    case 0x802EC88Cu: goto label_802EC88C;
    case 0x802EC890u: goto label_802EC890;
    case 0x802EC894u: goto label_802EC894;
    case 0x802EC898u: goto label_802EC898;
    case 0x802EC89Cu: goto label_802EC89C;
    case 0x802EC8A0u: goto label_802EC8A0;
    case 0x802EC8A4u: goto label_802EC8A4;
    case 0x802EC8A8u: goto label_802EC8A8;
    case 0x802EC8ACu: goto label_802EC8AC;
    case 0x802EC8B0u: goto label_802EC8B0;
    case 0x802EC8B4u: goto label_802EC8B4;
    case 0x802EC8B8u: goto label_802EC8B8;
    case 0x802EC8BCu: goto label_802EC8BC;
    case 0x802EC8C0u: goto label_802EC8C0;
    case 0x802EC8C4u: goto label_802EC8C4;
    case 0x802EC8C8u: goto label_802EC8C8;
    case 0x802EC8CCu: goto label_802EC8CC;
    case 0x802EC8D0u: goto label_802EC8D0;
    case 0x802EC8D4u: goto label_802EC8D4;
    case 0x802EC8D8u: goto label_802EC8D8;
    case 0x802EC8DCu: goto label_802EC8DC;
    case 0x802EC8E0u: goto label_802EC8E0;
    case 0x802EC8E4u: goto label_802EC8E4;
    case 0x802EC8E8u: goto label_802EC8E8;
    case 0x802EC8ECu: goto label_802EC8EC;
    case 0x802EC8F0u: goto label_802EC8F0;
    case 0x802EC8F4u: goto label_802EC8F4;
    case 0x802EC8F8u: goto label_802EC8F8;
    case 0x802EC8FCu: goto label_802EC8FC;
    case 0x802EC900u: goto label_802EC900;
    case 0x802EC904u: goto label_802EC904;
    case 0x802EC908u: goto label_802EC908;
    case 0x802EC90Cu: goto label_802EC90C;
    case 0x802EC910u: goto label_802EC910;
    case 0x802EC914u: goto label_802EC914;
    case 0x802EC918u: goto label_802EC918;
    case 0x802EC91Cu: goto label_802EC91C;
    case 0x802EC920u: goto label_802EC920;
    case 0x802EC924u: goto label_802EC924;
    case 0x802EC928u: goto label_802EC928;
    case 0x802EC92Cu: goto label_802EC92C;
    case 0x802EC930u: goto label_802EC930;
    case 0x802EC934u: goto label_802EC934;
    case 0x802EC938u: goto label_802EC938;
    case 0x802EC93Cu: goto label_802EC93C;
    case 0x802EC940u: goto label_802EC940;
    case 0x802EC944u: goto label_802EC944;
    case 0x802EC948u: goto label_802EC948;
    case 0x802EC94Cu: goto label_802EC94C;
    case 0x802EC950u: goto label_802EC950;
    case 0x802EC954u: goto label_802EC954;
    case 0x802EC958u: goto label_802EC958;
    case 0x802EC95Cu: goto label_802EC95C;
    case 0x802EC960u: goto label_802EC960;
    case 0x802EC964u: goto label_802EC964;
    case 0x802EC968u: goto label_802EC968;
    case 0x802EC96Cu: goto label_802EC96C;
    case 0x802EC970u: goto label_802EC970;
    case 0x802EC974u: goto label_802EC974;
    case 0x802EC978u: goto label_802EC978;
    case 0x802EC97Cu: goto label_802EC97C;
    case 0x802EC980u: goto label_802EC980;
    case 0x802EC984u: goto label_802EC984;
    case 0x802EC988u: goto label_802EC988;
    case 0x802EC98Cu: goto label_802EC98C;
    case 0x802EC990u: goto label_802EC990;
    case 0x802EC994u: goto label_802EC994;
    case 0x802EC998u: goto label_802EC998;
    case 0x802EC99Cu: goto label_802EC99C;
    case 0x802EC9A0u: goto label_802EC9A0;
    case 0x802EC9A4u: goto label_802EC9A4;
    case 0x802EC9A8u: goto label_802EC9A8;
    case 0x802EC9ACu: goto label_802EC9AC;
    case 0x802EC9B0u: goto label_802EC9B0;
    case 0x802EC9B4u: goto label_802EC9B4;
    case 0x802EC9B8u: goto label_802EC9B8;
    case 0x802EC9BCu: goto label_802EC9BC;
    case 0x802EC9C0u: goto label_802EC9C0;
    case 0x802EC9C4u: goto label_802EC9C4;
    case 0x802EC9C8u: goto label_802EC9C8;
    case 0x802EC9CCu: goto label_802EC9CC;
    case 0x802EC9D0u: goto label_802EC9D0;
    case 0x802EC9D4u: goto label_802EC9D4;
    case 0x802EC9D8u: goto label_802EC9D8;
    case 0x802EC9DCu: goto label_802EC9DC;
    case 0x802EC9E0u: goto label_802EC9E0;
    case 0x802EC9E4u: goto label_802EC9E4;
    case 0x802EC9E8u: goto label_802EC9E8;
    case 0x802EC9ECu: goto label_802EC9EC;
    case 0x802EC9F0u: goto label_802EC9F0;
    case 0x802EC9F4u: goto label_802EC9F4;
    case 0x802EC9F8u: goto label_802EC9F8;
    case 0x802EC9FCu: goto label_802EC9FC;
    case 0x802ECA00u: goto label_802ECA00;
    case 0x802ECA04u: goto label_802ECA04;
    case 0x802ECA08u: goto label_802ECA08;
    case 0x802ECA0Cu: goto label_802ECA0C;
    case 0x802ECA10u: goto label_802ECA10;
    case 0x802ECA14u: goto label_802ECA14;
    case 0x802ECA18u: goto label_802ECA18;
    case 0x802ECA1Cu: goto label_802ECA1C;
    case 0x802ECA20u: goto label_802ECA20;
    case 0x802ECA24u: goto label_802ECA24;
    case 0x802ECA28u: goto label_802ECA28;
    case 0x802ECA2Cu: goto label_802ECA2C;
    case 0x802ECA30u: goto label_802ECA30;
    case 0x802ECA34u: goto label_802ECA34;
    case 0x802ECA38u: goto label_802ECA38;
    case 0x802ECA3Cu: goto label_802ECA3C;
    case 0x802ECA40u: goto label_802ECA40;
    case 0x802ECA44u: goto label_802ECA44;
    case 0x802ECA48u: goto label_802ECA48;
    case 0x802ECA4Cu: goto label_802ECA4C;
    case 0x802ECA50u: goto label_802ECA50;
    case 0x802ECA54u: goto label_802ECA54;
    case 0x802ECA58u: goto label_802ECA58;
    case 0x802ECA5Cu: goto label_802ECA5C;
    case 0x802ECA60u: goto label_802ECA60;
    case 0x802ECA64u: goto label_802ECA64;
    case 0x802ECA68u: goto label_802ECA68;
    case 0x802ECA6Cu: goto label_802ECA6C;
    case 0x802ECA70u: goto label_802ECA70;
    case 0x802ECA74u: goto label_802ECA74;
    case 0x802ECA78u: goto label_802ECA78;
    case 0x802ECA7Cu: goto label_802ECA7C;
    case 0x802ECA80u: goto label_802ECA80;
    case 0x802ECA84u: goto label_802ECA84;
    case 0x802ECA88u: goto label_802ECA88;
    case 0x802ECA8Cu: goto label_802ECA8C;
    case 0x802ECA90u: goto label_802ECA90;
    case 0x802ECA94u: goto label_802ECA94;
    case 0x802ECA98u: goto label_802ECA98;
    case 0x802ECA9Cu: goto label_802ECA9C;
    case 0x802ECAA0u: goto label_802ECAA0;
    case 0x802ECAA4u: goto label_802ECAA4;
    case 0x802ECAA8u: goto label_802ECAA8;
    case 0x802ECAACu: goto label_802ECAAC;
    case 0x802ECAB0u: goto label_802ECAB0;
    case 0x802ECAB4u: goto label_802ECAB4;
    case 0x802ECAB8u: goto label_802ECAB8;
    case 0x802ECABCu: goto label_802ECABC;
    case 0x802ECAC0u: goto label_802ECAC0;
    case 0x802ECAC4u: goto label_802ECAC4;
    case 0x802ECAC8u: goto label_802ECAC8;
    case 0x802ECACCu: goto label_802ECACC;
    case 0x802ECAD0u: goto label_802ECAD0;
    case 0x802ECAD4u: goto label_802ECAD4;
    case 0x802ECAD8u: goto label_802ECAD8;
    case 0x802ECADCu: goto label_802ECADC;
    case 0x802ECAE0u: goto label_802ECAE0;
    case 0x802ECAE4u: goto label_802ECAE4;
    case 0x802ECAE8u: goto label_802ECAE8;
    case 0x802ECAECu: goto label_802ECAEC;
    case 0x802ECAF0u: goto label_802ECAF0;
    case 0x802ECAF4u: goto label_802ECAF4;
    case 0x802ECAF8u: goto label_802ECAF8;
    case 0x802ECAFCu: goto label_802ECAFC;
    case 0x802ECB00u: goto label_802ECB00;
    case 0x802ECB04u: goto label_802ECB04;
    case 0x802ECB08u: goto label_802ECB08;
    case 0x802ECB0Cu: goto label_802ECB0C;
    case 0x802ECB10u: goto label_802ECB10;
    case 0x802ECB14u: goto label_802ECB14;
    case 0x802ECB18u: goto label_802ECB18;
    case 0x802ECB1Cu: goto label_802ECB1C;
    case 0x802ECB20u: goto label_802ECB20;
    case 0x802ECB24u: goto label_802ECB24;
    case 0x802ECB28u: goto label_802ECB28;
    case 0x802ECB2Cu: goto label_802ECB2C;
    case 0x802ECB30u: goto label_802ECB30;
    case 0x802ECB34u: goto label_802ECB34;
    case 0x802ECB38u: goto label_802ECB38;
    case 0x802ECB3Cu: goto label_802ECB3C;
    case 0x802ECB40u: goto label_802ECB40;
    case 0x802ECB44u: goto label_802ECB44;
    case 0x802ECB48u: goto label_802ECB48;
    case 0x802ECB4Cu: goto label_802ECB4C;
    case 0x802ECB50u: goto label_802ECB50;
    case 0x802ECB54u: goto label_802ECB54;
    case 0x802ECB58u: goto label_802ECB58;
    case 0x802ECB5Cu: goto label_802ECB5C;
    case 0x802ECB60u: goto label_802ECB60;
    case 0x802ECB64u: goto label_802ECB64;
    case 0x802ECB68u: goto label_802ECB68;
    case 0x802ECB6Cu: goto label_802ECB6C;
    case 0x802ECB70u: goto label_802ECB70;
    case 0x802ECB74u: goto label_802ECB74;
    case 0x802ECB78u: goto label_802ECB78;
    case 0x802ECB7Cu: goto label_802ECB7C;
    case 0x802ECB80u: goto label_802ECB80;
    case 0x802ECB84u: goto label_802ECB84;
    case 0x802ECB88u: goto label_802ECB88;
    case 0x802ECB8Cu: goto label_802ECB8C;
    case 0x802ECB90u: goto label_802ECB90;
    case 0x802ECB94u: goto label_802ECB94;
    case 0x802ECB98u: goto label_802ECB98;
    case 0x802ECB9Cu: goto label_802ECB9C;
    case 0x802ECBA0u: goto label_802ECBA0;
    case 0x802ECBA4u: goto label_802ECBA4;
    case 0x802ECBA8u: goto label_802ECBA8;
    case 0x802ECBACu: goto label_802ECBAC;
    case 0x802ECBB0u: goto label_802ECBB0;
    case 0x802ECBB4u: goto label_802ECBB4;
    case 0x802ECBB8u: goto label_802ECBB8;
    case 0x802ECBBCu: goto label_802ECBBC;
    case 0x802ECBC0u: goto label_802ECBC0;
    case 0x802ECBC4u: goto label_802ECBC4;
    case 0x802ECBC8u: goto label_802ECBC8;
    case 0x802ECBCCu: goto label_802ECBCC;
    case 0x802ECBD0u: goto label_802ECBD0;
    case 0x802ECBD4u: goto label_802ECBD4;
    case 0x802ECBD8u: goto label_802ECBD8;
    case 0x802ECBDCu: goto label_802ECBDC;
    case 0x802ECBE0u: goto label_802ECBE0;
    case 0x802ECBE4u: goto label_802ECBE4;
    case 0x802ECBE8u: goto label_802ECBE8;
    case 0x802ECBECu: goto label_802ECBEC;
    case 0x802ECBF0u: goto label_802ECBF0;
    case 0x802ECBF4u: goto label_802ECBF4;
    case 0x802ECBF8u: goto label_802ECBF8;
    case 0x802ECBFCu: goto label_802ECBFC;
    case 0x802ECC00u: goto label_802ECC00;
    case 0x802ECC04u: goto label_802ECC04;
    case 0x802ECC08u: goto label_802ECC08;
    case 0x802ECC0Cu: goto label_802ECC0C;
    case 0x802ECC10u: goto label_802ECC10;
    case 0x802ECC14u: goto label_802ECC14;
    case 0x802ECC18u: goto label_802ECC18;
    case 0x802ECC1Cu: goto label_802ECC1C;
    case 0x802ECC20u: goto label_802ECC20;
    case 0x802ECC24u: goto label_802ECC24;
    case 0x802ECC28u: goto label_802ECC28;
    case 0x802ECC2Cu: goto label_802ECC2C;
    case 0x802ECC30u: goto label_802ECC30;
    case 0x802ECC34u: goto label_802ECC34;
    case 0x802ECC38u: goto label_802ECC38;
    case 0x802ECC3Cu: goto label_802ECC3C;
    case 0x802ECC40u: goto label_802ECC40;
    case 0x802ECC44u: goto label_802ECC44;
    case 0x802ECC48u: goto label_802ECC48;
    case 0x802ECC4Cu: goto label_802ECC4C;
    case 0x802ECC50u: goto label_802ECC50;
    case 0x802ECC54u: goto label_802ECC54;
    case 0x802ECC58u: goto label_802ECC58;
    case 0x802ECC5Cu: goto label_802ECC5C;
    case 0x802ECC60u: goto label_802ECC60;
    case 0x802ECC64u: goto label_802ECC64;
    case 0x802ECC68u: goto label_802ECC68;
    case 0x802ECC6Cu: goto label_802ECC6C;
    case 0x802ECC70u: goto label_802ECC70;
    case 0x802ECC74u: goto label_802ECC74;
    case 0x802ECC78u: goto label_802ECC78;
    case 0x802ECC7Cu: goto label_802ECC7C;
    case 0x802ECC80u: goto label_802ECC80;
    case 0x802ECC84u: goto label_802ECC84;
    case 0x802ECC88u: goto label_802ECC88;
    case 0x802ECC8Cu: goto label_802ECC8C;
    case 0x802ECC90u: goto label_802ECC90;
    case 0x802ECC94u: goto label_802ECC94;
    case 0x802ECC98u: goto label_802ECC98;
    case 0x802ECC9Cu: goto label_802ECC9C;
    case 0x802ECCA0u: goto label_802ECCA0;
    case 0x802ECCA4u: goto label_802ECCA4;
    case 0x802ECCA8u: goto label_802ECCA8;
    case 0x802ECCACu: goto label_802ECCAC;
    case 0x802ECCB0u: goto label_802ECCB0;
    case 0x802ECCB4u: goto label_802ECCB4;
    case 0x802ECCB8u: goto label_802ECCB8;
    case 0x802ECCBCu: goto label_802ECCBC;
    case 0x802ECCC0u: goto label_802ECCC0;
    case 0x802ECCC4u: goto label_802ECCC4;
    case 0x802ECCC8u: goto label_802ECCC8;
    case 0x802ECCCCu: goto label_802ECCCC;
    case 0x802ECCD0u: goto label_802ECCD0;
    case 0x802ECCD4u: goto label_802ECCD4;
    case 0x802ECCD8u: goto label_802ECCD8;
    case 0x802ECCDCu: goto label_802ECCDC;
    case 0x802ECCE0u: goto label_802ECCE0;
    case 0x802ECCE4u: goto label_802ECCE4;
    case 0x802ECCE8u: goto label_802ECCE8;
    case 0x802ECCECu: goto label_802ECCEC;
    case 0x802ECCF0u: goto label_802ECCF0;
    case 0x802ECCF4u: goto label_802ECCF4;
    case 0x802ECCF8u: goto label_802ECCF8;
    case 0x802ECCFCu: goto label_802ECCFC;
    case 0x802ECD00u: goto label_802ECD00;
    case 0x802ECD04u: goto label_802ECD04;
    case 0x802ECD08u: goto label_802ECD08;
    case 0x802ECD0Cu: goto label_802ECD0C;
    case 0x802ECD10u: goto label_802ECD10;
    case 0x802ECD14u: goto label_802ECD14;
    case 0x802ECD18u: goto label_802ECD18;
    case 0x802ECD1Cu: goto label_802ECD1C;
    case 0x802ECD20u: goto label_802ECD20;
    case 0x802ECD24u: goto label_802ECD24;
    case 0x802ECD28u: goto label_802ECD28;
    case 0x802ECD2Cu: goto label_802ECD2C;
    case 0x802ECD30u: goto label_802ECD30;
    case 0x802ECD34u: goto label_802ECD34;
    case 0x802ECD38u: goto label_802ECD38;
    case 0x802ECD3Cu: goto label_802ECD3C;
    case 0x802ECD40u: goto label_802ECD40;
    case 0x802ECD44u: goto label_802ECD44;
    case 0x802ECD48u: goto label_802ECD48;
    case 0x802ECD4Cu: goto label_802ECD4C;
    case 0x802ECD50u: goto label_802ECD50;
    case 0x802ECD54u: goto label_802ECD54;
    case 0x802ECD58u: goto label_802ECD58;
    case 0x802ECD5Cu: goto label_802ECD5C;
    case 0x802ECD60u: goto label_802ECD60;
    case 0x802ECD64u: goto label_802ECD64;
    case 0x802ECD68u: goto label_802ECD68;
    case 0x802ECD6Cu: goto label_802ECD6C;
    case 0x802ECD70u: goto label_802ECD70;
    case 0x802ECD74u: goto label_802ECD74;
    case 0x802ECD78u: goto label_802ECD78;
    case 0x802ECD7Cu: goto label_802ECD7C;
    case 0x802ECD80u: goto label_802ECD80;
    case 0x802ECD84u: goto label_802ECD84;
    case 0x802ECD88u: goto label_802ECD88;
    case 0x802ECD8Cu: goto label_802ECD8C;
    case 0x802ECD90u: goto label_802ECD90;
    case 0x802ECD94u: goto label_802ECD94;
    case 0x802ECD98u: goto label_802ECD98;
    case 0x802ECD9Cu: goto label_802ECD9C;
    case 0x802ECDA0u: goto label_802ECDA0;
    case 0x802ECDA4u: goto label_802ECDA4;
    case 0x802ECDA8u: goto label_802ECDA8;
    case 0x802ECDACu: goto label_802ECDAC;
    case 0x802ECDB0u: goto label_802ECDB0;
    case 0x802ECDB4u: goto label_802ECDB4;
    case 0x802ECDB8u: goto label_802ECDB8;
    case 0x802ECDBCu: goto label_802ECDBC;
    case 0x802ECDC0u: goto label_802ECDC0;
    case 0x802ECDC4u: goto label_802ECDC4;
    case 0x802ECDC8u: goto label_802ECDC8;
    case 0x802ECDCCu: goto label_802ECDCC;
    case 0x802ECDD0u: goto label_802ECDD0;
    case 0x802ECDD4u: goto label_802ECDD4;
    case 0x802ECDD8u: goto label_802ECDD8;
    case 0x802ECDDCu: goto label_802ECDDC;
    case 0x802ECDE0u: goto label_802ECDE0;
    case 0x802ECDE4u: goto label_802ECDE4;
    case 0x802ECDE8u: goto label_802ECDE8;
    case 0x802ECDECu: goto label_802ECDEC;
    case 0x802ECDF0u: goto label_802ECDF0;
    case 0x802ECDF4u: goto label_802ECDF4;
    case 0x802ECDF8u: goto label_802ECDF8;
    case 0x802ECDFCu: goto label_802ECDFC;
    case 0x802ECE00u: goto label_802ECE00;
    case 0x802ECE04u: goto label_802ECE04;
    case 0x802ECE08u: goto label_802ECE08;
    case 0x802ECE0Cu: goto label_802ECE0C;
    case 0x802ECE10u: goto label_802ECE10;
    case 0x802ECE14u: goto label_802ECE14;
    case 0x802ECE18u: goto label_802ECE18;
    case 0x802ECE1Cu: goto label_802ECE1C;
    case 0x802ECE20u: goto label_802ECE20;
    case 0x802ECE24u: goto label_802ECE24;
    case 0x802ECE28u: goto label_802ECE28;
    case 0x802ECE2Cu: goto label_802ECE2C;
    case 0x802ECE30u: goto label_802ECE30;
    case 0x802ECE34u: goto label_802ECE34;
    case 0x802ECE38u: goto label_802ECE38;
    case 0x802ECE3Cu: goto label_802ECE3C;
    case 0x802ECE40u: goto label_802ECE40;
    case 0x802ECE44u: goto label_802ECE44;
    case 0x802ECE48u: goto label_802ECE48;
    case 0x802ECE4Cu: goto label_802ECE4C;
    case 0x802ECE50u: goto label_802ECE50;
    case 0x802ECE54u: goto label_802ECE54;
    case 0x802ECE58u: goto label_802ECE58;
    case 0x802ECE5Cu: goto label_802ECE5C;
    case 0x802ECE60u: goto label_802ECE60;
    case 0x802ECE64u: goto label_802ECE64;
    case 0x802ECE68u: goto label_802ECE68;
    case 0x802ECE6Cu: goto label_802ECE6C;
    case 0x802ECE70u: goto label_802ECE70;
    case 0x802ECE74u: goto label_802ECE74;
    case 0x802ECE78u: goto label_802ECE78;
    case 0x802ECE7Cu: goto label_802ECE7C;
    case 0x802ECE80u: goto label_802ECE80;
    case 0x802ECE84u: goto label_802ECE84;
    case 0x802ECE88u: goto label_802ECE88;
    case 0x802ECE8Cu: goto label_802ECE8C;
    case 0x802ECE90u: goto label_802ECE90;
    case 0x802ECE94u: goto label_802ECE94;
    case 0x802ECE98u: goto label_802ECE98;
    case 0x802ECE9Cu: goto label_802ECE9C;
    case 0x802ECEA0u: goto label_802ECEA0;
    case 0x802ECEA4u: goto label_802ECEA4;
    case 0x802ECEA8u: goto label_802ECEA8;
    case 0x802ECEACu: goto label_802ECEAC;
    case 0x802ECEB0u: goto label_802ECEB0;
    case 0x802ECEB4u: goto label_802ECEB4;
    case 0x802ECEB8u: goto label_802ECEB8;
    case 0x802ECEBCu: goto label_802ECEBC;
    case 0x802ECEC0u: goto label_802ECEC0;
    case 0x802ECEC4u: goto label_802ECEC4;
    case 0x802ECEC8u: goto label_802ECEC8;
    case 0x802ECECCu: goto label_802ECECC;
    case 0x802ECED0u: goto label_802ECED0;
    case 0x802ECED4u: goto label_802ECED4;
    case 0x802ECED8u: goto label_802ECED8;
    case 0x802ECEDCu: goto label_802ECEDC;
    case 0x802ECEE0u: goto label_802ECEE0;
    case 0x802ECEE4u: goto label_802ECEE4;
    case 0x802ECEE8u: goto label_802ECEE8;
    case 0x802ECEECu: goto label_802ECEEC;
    case 0x802ECEF0u: goto label_802ECEF0;
    case 0x802ECEF4u: goto label_802ECEF4;
    case 0x802ECEF8u: goto label_802ECEF8;
    case 0x802ECEFCu: goto label_802ECEFC;
    case 0x802ECF00u: goto label_802ECF00;
    case 0x802ECF04u: goto label_802ECF04;
    case 0x802ECF08u: goto label_802ECF08;
    case 0x802ECF0Cu: goto label_802ECF0C;
    case 0x802ECF10u: goto label_802ECF10;
    case 0x802ECF14u: goto label_802ECF14;
    case 0x802ECF18u: goto label_802ECF18;
    case 0x802ECF1Cu: goto label_802ECF1C;
    case 0x802ECF20u: goto label_802ECF20;
    case 0x802ECF24u: goto label_802ECF24;
    case 0x802ECF28u: goto label_802ECF28;
    case 0x802ECF2Cu: goto label_802ECF2C;
    case 0x802ECF30u: goto label_802ECF30;
    case 0x802ECF34u: goto label_802ECF34;
    case 0x802ECF38u: goto label_802ECF38;
    case 0x802ECF3Cu: goto label_802ECF3C;
    case 0x802ECF40u: goto label_802ECF40;
    case 0x802ECF44u: goto label_802ECF44;
    case 0x802ECF48u: goto label_802ECF48;
    case 0x802ECF4Cu: goto label_802ECF4C;
    case 0x802ECF50u: goto label_802ECF50;
    case 0x802ECF54u: goto label_802ECF54;
    case 0x802ECF58u: goto label_802ECF58;
    case 0x802ECF5Cu: goto label_802ECF5C;
    case 0x802ECF60u: goto label_802ECF60;
    case 0x802ECF64u: goto label_802ECF64;
    case 0x802ECF68u: goto label_802ECF68;
    case 0x802ECF6Cu: goto label_802ECF6C;
    case 0x802ECF70u: goto label_802ECF70;
    case 0x802ECF74u: goto label_802ECF74;
    case 0x802ECF78u: goto label_802ECF78;
    case 0x802ECF7Cu: goto label_802ECF7C;
    case 0x802ECF80u: goto label_802ECF80;
    case 0x802ECF84u: goto label_802ECF84;
    case 0x802ECF88u: goto label_802ECF88;
    case 0x802ECF8Cu: goto label_802ECF8C;
    case 0x802ECF90u: goto label_802ECF90;
    case 0x802ECF94u: goto label_802ECF94;
    case 0x802ECF98u: goto label_802ECF98;
    case 0x802ECF9Cu: goto label_802ECF9C;
    case 0x802ECFA0u: goto label_802ECFA0;
    case 0x802ECFA4u: goto label_802ECFA4;
    case 0x802ECFA8u: goto label_802ECFA8;
    case 0x802ECFACu: goto label_802ECFAC;
    case 0x802ECFB0u: goto label_802ECFB0;
    case 0x802ECFB4u: goto label_802ECFB4;
    case 0x802ECFB8u: goto label_802ECFB8;
    case 0x802ECFBCu: goto label_802ECFBC;
    case 0x802ECFC0u: goto label_802ECFC0;
    case 0x802ECFC4u: goto label_802ECFC4;
    case 0x802ECFC8u: goto label_802ECFC8;
    case 0x802ECFCCu: goto label_802ECFCC;
    case 0x802ECFD0u: goto label_802ECFD0;
    case 0x802ECFD4u: goto label_802ECFD4;
    case 0x802ECFD8u: goto label_802ECFD8;
    case 0x802ECFDCu: goto label_802ECFDC;
    case 0x802ECFE0u: goto label_802ECFE0;
    case 0x802ECFE4u: goto label_802ECFE4;
    case 0x802ECFE8u: goto label_802ECFE8;
    case 0x802ECFECu: goto label_802ECFEC;
    case 0x802ECFF0u: goto label_802ECFF0;
    case 0x802ECFF4u: goto label_802ECFF4;
    case 0x802ECFF8u: goto label_802ECFF8;
    case 0x802ECFFCu: goto label_802ECFFC;
    case 0x802ED000u: goto label_802ED000;
    case 0x802ED004u: goto label_802ED004;
    case 0x802ED008u: goto label_802ED008;
    case 0x802ED00Cu: goto label_802ED00C;
    case 0x802ED010u: goto label_802ED010;
    case 0x802ED014u: goto label_802ED014;
    case 0x802ED018u: goto label_802ED018;
    case 0x802ED01Cu: goto label_802ED01C;
    case 0x802ED020u: goto label_802ED020;
    case 0x802ED024u: goto label_802ED024;
    case 0x802ED028u: goto label_802ED028;
    case 0x802ED02Cu: goto label_802ED02C;
    case 0x802ED030u: goto label_802ED030;
    case 0x802ED034u: goto label_802ED034;
    case 0x802ED038u: goto label_802ED038;
    case 0x802ED03Cu: goto label_802ED03C;
    case 0x802ED040u: goto label_802ED040;
    case 0x802ED044u: goto label_802ED044;
    case 0x802ED048u: goto label_802ED048;
    case 0x802ED04Cu: goto label_802ED04C;
    case 0x802ED050u: goto label_802ED050;
    case 0x802ED054u: goto label_802ED054;
    case 0x802ED058u: goto label_802ED058;
    case 0x802ED05Cu: goto label_802ED05C;
    case 0x802ED060u: goto label_802ED060;
    case 0x802ED064u: goto label_802ED064;
    case 0x802ED068u: goto label_802ED068;
    case 0x802ED06Cu: goto label_802ED06C;
    case 0x802ED070u: goto label_802ED070;
    case 0x802ED074u: goto label_802ED074;
    case 0x802ED078u: goto label_802ED078;
    case 0x802ED07Cu: goto label_802ED07C;
    case 0x802ED080u: goto label_802ED080;
    case 0x802ED084u: goto label_802ED084;
    case 0x802ED088u: goto label_802ED088;
    case 0x802ED08Cu: goto label_802ED08C;
    case 0x802ED090u: goto label_802ED090;
    case 0x802ED094u: goto label_802ED094;
    case 0x802ED098u: goto label_802ED098;
    case 0x802ED09Cu: goto label_802ED09C;
    case 0x802ED0A0u: goto label_802ED0A0;
    case 0x802ED0A4u: goto label_802ED0A4;
    case 0x802ED0A8u: goto label_802ED0A8;
    case 0x802ED0ACu: goto label_802ED0AC;
    case 0x802ED0B0u: goto label_802ED0B0;
    case 0x802ED0B4u: goto label_802ED0B4;
    case 0x802ED0B8u: goto label_802ED0B8;
    case 0x802ED0BCu: goto label_802ED0BC;
    case 0x802ED0C0u: goto label_802ED0C0;
    case 0x802ED0C4u: goto label_802ED0C4;
    case 0x802ED0C8u: goto label_802ED0C8;
    case 0x802ED0CCu: goto label_802ED0CC;
    case 0x802ED0D0u: goto label_802ED0D0;
    case 0x802ED0D4u: goto label_802ED0D4;
    case 0x802ED0D8u: goto label_802ED0D8;
    case 0x802ED0DCu: goto label_802ED0DC;
    case 0x802ED0E0u: goto label_802ED0E0;
    case 0x802ED0E4u: goto label_802ED0E4;
    case 0x802ED0E8u: goto label_802ED0E8;
    case 0x802ED0ECu: goto label_802ED0EC;
    case 0x802ED0F0u: goto label_802ED0F0;
    case 0x802ED0F4u: goto label_802ED0F4;
    case 0x802ED0F8u: goto label_802ED0F8;
    case 0x802ED0FCu: goto label_802ED0FC;
    case 0x802ED100u: goto label_802ED100;
    case 0x802ED104u: goto label_802ED104;
    case 0x802ED108u: goto label_802ED108;
    case 0x802ED10Cu: goto label_802ED10C;
    case 0x802ED110u: goto label_802ED110;
    case 0x802ED114u: goto label_802ED114;
    case 0x802ED118u: goto label_802ED118;
    case 0x802ED11Cu: goto label_802ED11C;
    case 0x802ED120u: goto label_802ED120;
    case 0x802ED124u: goto label_802ED124;
    case 0x802ED128u: goto label_802ED128;
    case 0x802ED12Cu: goto label_802ED12C;
    case 0x802ED130u: goto label_802ED130;
    case 0x802ED134u: goto label_802ED134;
    case 0x802ED138u: goto label_802ED138;
    case 0x802ED13Cu: goto label_802ED13C;
    case 0x802ED140u: goto label_802ED140;
    case 0x802ED144u: goto label_802ED144;
    case 0x802ED148u: goto label_802ED148;
    case 0x802ED14Cu: goto label_802ED14C;
    case 0x802ED150u: goto label_802ED150;
    case 0x802ED154u: goto label_802ED154;
    case 0x802ED158u: goto label_802ED158;
    case 0x802ED15Cu: goto label_802ED15C;
    case 0x802ED160u: goto label_802ED160;
    case 0x802ED164u: goto label_802ED164;
    case 0x802ED168u: goto label_802ED168;
    case 0x802ED16Cu: goto label_802ED16C;
    case 0x802ED170u: goto label_802ED170;
    case 0x802ED174u: goto label_802ED174;
    case 0x802ED178u: goto label_802ED178;
    case 0x802ED17Cu: goto label_802ED17C;
    case 0x802ED180u: goto label_802ED180;
    case 0x802ED184u: goto label_802ED184;
    case 0x802ED188u: goto label_802ED188;
    case 0x802ED18Cu: goto label_802ED18C;
    case 0x802ED190u: goto label_802ED190;
    case 0x802ED194u: goto label_802ED194;
    case 0x802ED198u: goto label_802ED198;
    case 0x802ED19Cu: goto label_802ED19C;
    case 0x802ED1A0u: goto label_802ED1A0;
    case 0x802ED1A4u: goto label_802ED1A4;
    case 0x802ED1A8u: goto label_802ED1A8;
    case 0x802ED1ACu: goto label_802ED1AC;
    case 0x802ED1B0u: goto label_802ED1B0;
    case 0x802ED1B4u: goto label_802ED1B4;
    case 0x802ED1B8u: goto label_802ED1B8;
    case 0x802ED1BCu: goto label_802ED1BC;
    case 0x802ED1C0u: goto label_802ED1C0;
    case 0x802ED1C4u: goto label_802ED1C4;
    case 0x802ED1C8u: goto label_802ED1C8;
    case 0x802ED1CCu: goto label_802ED1CC;
    case 0x802ED1D0u: goto label_802ED1D0;
    case 0x802ED1D4u: goto label_802ED1D4;
    case 0x802ED1D8u: goto label_802ED1D8;
    case 0x802ED1DCu: goto label_802ED1DC;
    case 0x802ED1E0u: goto label_802ED1E0;
    case 0x802ED1E4u: goto label_802ED1E4;
    case 0x802ED1E8u: goto label_802ED1E8;
    case 0x802ED1ECu: goto label_802ED1EC;
    case 0x802ED1F0u: goto label_802ED1F0;
    case 0x802ED1F4u: goto label_802ED1F4;
    case 0x802ED1F8u: goto label_802ED1F8;
    case 0x802ED1FCu: goto label_802ED1FC;
    case 0x802ED200u: goto label_802ED200;
    case 0x802ED204u: goto label_802ED204;
    case 0x802ED208u: goto label_802ED208;
    case 0x802ED20Cu: goto label_802ED20C;
    case 0x802ED210u: goto label_802ED210;
    case 0x802ED214u: goto label_802ED214;
    case 0x802ED218u: goto label_802ED218;
    case 0x802ED21Cu: goto label_802ED21C;
    case 0x802ED220u: goto label_802ED220;
    case 0x802ED224u: goto label_802ED224;
    case 0x802ED228u: goto label_802ED228;
    case 0x802ED22Cu: goto label_802ED22C;
    case 0x802ED230u: goto label_802ED230;
    case 0x802ED234u: goto label_802ED234;
    case 0x802ED238u: goto label_802ED238;
    case 0x802ED23Cu: goto label_802ED23C;
    case 0x802ED240u: goto label_802ED240;
    case 0x802ED244u: goto label_802ED244;
    case 0x802ED248u: goto label_802ED248;
    case 0x802ED24Cu: goto label_802ED24C;
    case 0x802ED250u: goto label_802ED250;
    case 0x802ED254u: goto label_802ED254;
    case 0x802ED258u: goto label_802ED258;
    case 0x802ED25Cu: goto label_802ED25C;
    case 0x802ED260u: goto label_802ED260;
    case 0x802ED264u: goto label_802ED264;
    case 0x802ED268u: goto label_802ED268;
    case 0x802ED26Cu: goto label_802ED26C;
    case 0x802ED270u: goto label_802ED270;
    case 0x802ED274u: goto label_802ED274;
    case 0x802ED278u: goto label_802ED278;
    case 0x802ED27Cu: goto label_802ED27C;
    case 0x802ED280u: goto label_802ED280;
    case 0x802ED284u: goto label_802ED284;
    case 0x802ED288u: goto label_802ED288;
    case 0x802ED28Cu: goto label_802ED28C;
    case 0x802ED290u: goto label_802ED290;
    case 0x802ED294u: goto label_802ED294;
    case 0x802ED298u: goto label_802ED298;
    case 0x802ED29Cu: goto label_802ED29C;
    case 0x802ED2A0u: goto label_802ED2A0;
    case 0x802ED2A4u: goto label_802ED2A4;
    case 0x802ED2A8u: goto label_802ED2A8;
    case 0x802ED2ACu: goto label_802ED2AC;
    case 0x802ED2B0u: goto label_802ED2B0;
    case 0x802ED2B4u: goto label_802ED2B4;
    case 0x802ED2B8u: goto label_802ED2B8;
    case 0x802ED2BCu: goto label_802ED2BC;
    case 0x802ED2C0u: goto label_802ED2C0;
    case 0x802ED2C4u: goto label_802ED2C4;
    case 0x802ED2C8u: goto label_802ED2C8;
    case 0x802ED2CCu: goto label_802ED2CC;
    case 0x802ED2D0u: goto label_802ED2D0;
    case 0x802ED2D4u: goto label_802ED2D4;
    case 0x802ED2D8u: goto label_802ED2D8;
    case 0x802ED2DCu: goto label_802ED2DC;
    case 0x802ED2E0u: goto label_802ED2E0;
    case 0x802ED2E4u: goto label_802ED2E4;
    case 0x802ED2E8u: goto label_802ED2E8;
    case 0x802ED2ECu: goto label_802ED2EC;
    case 0x802ED2F0u: goto label_802ED2F0;
    case 0x802ED2F4u: goto label_802ED2F4;
    case 0x802ED2F8u: goto label_802ED2F8;
    case 0x802ED2FCu: goto label_802ED2FC;
    case 0x802ED300u: goto label_802ED300;
    case 0x802ED304u: goto label_802ED304;
    case 0x802ED308u: goto label_802ED308;
    case 0x802ED30Cu: goto label_802ED30C;
    case 0x802ED310u: goto label_802ED310;
    case 0x802ED314u: goto label_802ED314;
    case 0x802ED318u: goto label_802ED318;
    case 0x802ED31Cu: goto label_802ED31C;
    case 0x802ED320u: goto label_802ED320;
    case 0x802ED324u: goto label_802ED324;
    case 0x802ED328u: goto label_802ED328;
    case 0x802ED32Cu: goto label_802ED32C;
    case 0x802ED330u: goto label_802ED330;
    case 0x802ED334u: goto label_802ED334;
    case 0x802ED338u: goto label_802ED338;
    case 0x802ED33Cu: goto label_802ED33C;
    case 0x802ED340u: goto label_802ED340;
    case 0x802ED344u: goto label_802ED344;
    case 0x802ED348u: goto label_802ED348;
    case 0x802ED34Cu: goto label_802ED34C;
    case 0x802ED350u: goto label_802ED350;
    case 0x802ED354u: goto label_802ED354;
    case 0x802ED358u: goto label_802ED358;
    case 0x802ED35Cu: goto label_802ED35C;
    case 0x802ED360u: goto label_802ED360;
    case 0x802ED364u: goto label_802ED364;
    case 0x802ED368u: goto label_802ED368;
    case 0x802ED36Cu: goto label_802ED36C;
    case 0x802ED370u: goto label_802ED370;
    case 0x802ED374u: goto label_802ED374;
    case 0x802ED378u: goto label_802ED378;
    case 0x802ED37Cu: goto label_802ED37C;
    case 0x802ED380u: goto label_802ED380;
    case 0x802ED384u: goto label_802ED384;
    case 0x802ED388u: goto label_802ED388;
    case 0x802ED38Cu: goto label_802ED38C;
    case 0x802ED390u: goto label_802ED390;
    case 0x802ED394u: goto label_802ED394;
    case 0x802ED398u: goto label_802ED398;
    case 0x802ED39Cu: goto label_802ED39C;
    case 0x802ED3A0u: goto label_802ED3A0;
    case 0x802ED3A4u: goto label_802ED3A4;
    case 0x802ED3A8u: goto label_802ED3A8;
    case 0x802ED3ACu: goto label_802ED3AC;
    case 0x802ED3B0u: goto label_802ED3B0;
    case 0x802ED3B4u: goto label_802ED3B4;
    case 0x802ED3B8u: goto label_802ED3B8;
    case 0x802ED3BCu: goto label_802ED3BC;
    case 0x802ED3C0u: goto label_802ED3C0;
    case 0x802ED3C4u: goto label_802ED3C4;
    case 0x802ED3C8u: goto label_802ED3C8;
    case 0x802ED3CCu: goto label_802ED3CC;
    case 0x802ED3D0u: goto label_802ED3D0;
    case 0x802ED3D4u: goto label_802ED3D4;
    case 0x802ED3D8u: goto label_802ED3D8;
    case 0x802ED3DCu: goto label_802ED3DC;
    case 0x802ED3E0u: goto label_802ED3E0;
    case 0x802ED3E4u: goto label_802ED3E4;
    case 0x802ED3E8u: goto label_802ED3E8;
    case 0x802ED3ECu: goto label_802ED3EC;
    case 0x802ED3F0u: goto label_802ED3F0;
    case 0x802ED3F4u: goto label_802ED3F4;
    case 0x802ED3F8u: goto label_802ED3F8;
    case 0x802ED3FCu: goto label_802ED3FC;
    case 0x802ED400u: goto label_802ED400;
    case 0x802ED404u: goto label_802ED404;
    case 0x802ED408u: goto label_802ED408;
    case 0x802ED40Cu: goto label_802ED40C;
    case 0x802ED410u: goto label_802ED410;
    case 0x802ED414u: goto label_802ED414;
    case 0x802ED418u: goto label_802ED418;
    case 0x802ED41Cu: goto label_802ED41C;
    case 0x802ED420u: goto label_802ED420;
    case 0x802ED424u: goto label_802ED424;
    case 0x802ED428u: goto label_802ED428;
    case 0x802ED42Cu: goto label_802ED42C;
    case 0x802ED430u: goto label_802ED430;
    case 0x802ED434u: goto label_802ED434;
    case 0x802ED438u: goto label_802ED438;
    case 0x802ED43Cu: goto label_802ED43C;
    case 0x802ED440u: goto label_802ED440;
    case 0x802ED444u: goto label_802ED444;
    case 0x802ED448u: goto label_802ED448;
    case 0x802ED44Cu: goto label_802ED44C;
    case 0x802ED450u: goto label_802ED450;
    case 0x802ED454u: goto label_802ED454;
    case 0x802ED458u: goto label_802ED458;
    case 0x802ED45Cu: goto label_802ED45C;
    case 0x802ED460u: goto label_802ED460;
    case 0x802ED464u: goto label_802ED464;
    case 0x802ED468u: goto label_802ED468;
    case 0x802ED46Cu: goto label_802ED46C;
    case 0x802ED470u: goto label_802ED470;
    case 0x802ED474u: goto label_802ED474;
    case 0x802ED478u: goto label_802ED478;
    case 0x802ED47Cu: goto label_802ED47C;
    case 0x802ED480u: goto label_802ED480;
    case 0x802ED484u: goto label_802ED484;
    case 0x802ED488u: goto label_802ED488;
    case 0x802ED48Cu: goto label_802ED48C;
    case 0x802ED490u: goto label_802ED490;
    case 0x802ED494u: goto label_802ED494;
    case 0x802ED498u: goto label_802ED498;
    case 0x802ED49Cu: goto label_802ED49C;
    case 0x802ED4A0u: goto label_802ED4A0;
    case 0x802ED4A4u: goto label_802ED4A4;
    case 0x802ED4A8u: goto label_802ED4A8;
    case 0x802ED4ACu: goto label_802ED4AC;
    case 0x802ED4B0u: goto label_802ED4B0;
    case 0x802ED4B4u: goto label_802ED4B4;
    case 0x802ED4B8u: goto label_802ED4B8;
    case 0x802ED4BCu: goto label_802ED4BC;
    case 0x802ED4C0u: goto label_802ED4C0;
    case 0x802ED4C4u: goto label_802ED4C4;
    case 0x802ED4C8u: goto label_802ED4C8;
    case 0x802ED4CCu: goto label_802ED4CC;
    case 0x802ED4D0u: goto label_802ED4D0;
    case 0x802ED4D4u: goto label_802ED4D4;
    case 0x802ED4D8u: goto label_802ED4D8;
    case 0x802ED4DCu: goto label_802ED4DC;
    case 0x802ED4E0u: goto label_802ED4E0;
    case 0x802ED4E4u: goto label_802ED4E4;
    case 0x802ED4E8u: goto label_802ED4E8;
    case 0x802ED4ECu: goto label_802ED4EC;
    case 0x802ED4F0u: goto label_802ED4F0;
    case 0x802ED4F4u: goto label_802ED4F4;
    case 0x802ED4F8u: goto label_802ED4F8;
    case 0x802ED4FCu: goto label_802ED4FC;
    case 0x802ED500u: goto label_802ED500;
    case 0x802ED504u: goto label_802ED504;
    case 0x802ED508u: goto label_802ED508;
    case 0x802ED50Cu: goto label_802ED50C;
    case 0x802ED510u: goto label_802ED510;
    case 0x802ED514u: goto label_802ED514;
    case 0x802ED518u: goto label_802ED518;
    case 0x802ED51Cu: goto label_802ED51C;
    case 0x802ED520u: goto label_802ED520;
    case 0x802ED524u: goto label_802ED524;
    case 0x802ED528u: goto label_802ED528;
    case 0x802ED52Cu: goto label_802ED52C;
    case 0x802ED530u: goto label_802ED530;
    case 0x802ED534u: goto label_802ED534;
    case 0x802ED538u: goto label_802ED538;
    case 0x802ED53Cu: goto label_802ED53C;
    case 0x802ED540u: goto label_802ED540;
    case 0x802ED544u: goto label_802ED544;
    case 0x802ED548u: goto label_802ED548;
    case 0x802ED54Cu: goto label_802ED54C;
    case 0x802ED550u: goto label_802ED550;
    case 0x802ED554u: goto label_802ED554;
    case 0x802ED558u: goto label_802ED558;
    case 0x802ED55Cu: goto label_802ED55C;
    case 0x802ED560u: goto label_802ED560;
    case 0x802ED564u: goto label_802ED564;
    case 0x802ED568u: goto label_802ED568;
    case 0x802ED56Cu: goto label_802ED56C;
    case 0x802ED570u: goto label_802ED570;
    case 0x802ED574u: goto label_802ED574;
    case 0x802ED578u: goto label_802ED578;
    case 0x802ED57Cu: goto label_802ED57C;
    case 0x802ED580u: goto label_802ED580;
    case 0x802ED584u: goto label_802ED584;
    case 0x802ED588u: goto label_802ED588;
    case 0x802ED58Cu: goto label_802ED58C;
    case 0x802ED590u: goto label_802ED590;
    case 0x802ED594u: goto label_802ED594;
    case 0x802ED598u: goto label_802ED598;
    case 0x802ED59Cu: goto label_802ED59C;
    case 0x802ED5A0u: goto label_802ED5A0;
    case 0x802ED5A4u: goto label_802ED5A4;
    case 0x802ED5A8u: goto label_802ED5A8;
    case 0x802ED5ACu: goto label_802ED5AC;
    case 0x802ED5B0u: goto label_802ED5B0;
    case 0x802ED5B4u: goto label_802ED5B4;
    case 0x802ED5B8u: goto label_802ED5B8;
    case 0x802ED5BCu: goto label_802ED5BC;
    case 0x802ED5C0u: goto label_802ED5C0;
    case 0x802ED5C4u: goto label_802ED5C4;
    case 0x802ED5C8u: goto label_802ED5C8;
    case 0x802ED5CCu: goto label_802ED5CC;
    case 0x802ED5D0u: goto label_802ED5D0;
    case 0x802ED5D4u: goto label_802ED5D4;
    case 0x802ED5D8u: goto label_802ED5D8;
    case 0x802ED5DCu: goto label_802ED5DC;
    case 0x802ED5E0u: goto label_802ED5E0;
    case 0x802ED5E4u: goto label_802ED5E4;
    case 0x802ED5E8u: goto label_802ED5E8;
    case 0x802ED5ECu: goto label_802ED5EC;
    case 0x802ED5F0u: goto label_802ED5F0;
    case 0x802ED5F4u: goto label_802ED5F4;
    case 0x802ED5F8u: goto label_802ED5F8;
    case 0x802ED5FCu: goto label_802ED5FC;
    case 0x802ED600u: goto label_802ED600;
    case 0x802ED604u: goto label_802ED604;
    case 0x802ED608u: goto label_802ED608;
    case 0x802ED60Cu: goto label_802ED60C;
    case 0x802ED610u: goto label_802ED610;
    case 0x802ED614u: goto label_802ED614;
    case 0x802ED618u: goto label_802ED618;
    case 0x802ED61Cu: goto label_802ED61C;
    case 0x802ED620u: goto label_802ED620;
    case 0x802ED624u: goto label_802ED624;
    case 0x802ED628u: goto label_802ED628;
    case 0x802ED62Cu: goto label_802ED62C;
    case 0x802ED630u: goto label_802ED630;
    case 0x802ED634u: goto label_802ED634;
    case 0x802ED638u: goto label_802ED638;
    case 0x802ED63Cu: goto label_802ED63C;
    case 0x802ED640u: goto label_802ED640;
    case 0x802ED644u: goto label_802ED644;
    case 0x802ED648u: goto label_802ED648;
    case 0x802ED64Cu: goto label_802ED64C;
    case 0x802ED650u: goto label_802ED650;
    case 0x802ED654u: goto label_802ED654;
    case 0x802ED658u: goto label_802ED658;
    case 0x802ED65Cu: goto label_802ED65C;
    case 0x802ED660u: goto label_802ED660;
    case 0x802ED664u: goto label_802ED664;
    case 0x802ED668u: goto label_802ED668;
    case 0x802ED66Cu: goto label_802ED66C;
    case 0x802ED670u: goto label_802ED670;
    case 0x802ED674u: goto label_802ED674;
    case 0x802ED678u: goto label_802ED678;
    case 0x802ED67Cu: goto label_802ED67C;
    case 0x802ED680u: goto label_802ED680;
    case 0x802ED684u: goto label_802ED684;
    case 0x802ED688u: goto label_802ED688;
    case 0x802ED68Cu: goto label_802ED68C;
    case 0x802ED690u: goto label_802ED690;
    case 0x802ED694u: goto label_802ED694;
    case 0x802ED698u: goto label_802ED698;
    case 0x802ED69Cu: goto label_802ED69C;
    case 0x802ED6A0u: goto label_802ED6A0;
    case 0x802ED6A4u: goto label_802ED6A4;
    case 0x802ED6A8u: goto label_802ED6A8;
    case 0x802ED6ACu: goto label_802ED6AC;
    case 0x802ED6B0u: goto label_802ED6B0;
    case 0x802ED6B4u: goto label_802ED6B4;
    case 0x802ED6B8u: goto label_802ED6B8;
    case 0x802ED6BCu: goto label_802ED6BC;
    case 0x802ED6C0u: goto label_802ED6C0;
    case 0x802ED6C4u: goto label_802ED6C4;
    case 0x802ED6C8u: goto label_802ED6C8;
    case 0x802ED6CCu: goto label_802ED6CC;
    case 0x802ED6D0u: goto label_802ED6D0;
    case 0x802ED6D4u: goto label_802ED6D4;
    case 0x802ED6D8u: goto label_802ED6D8;
    case 0x802ED6DCu: goto label_802ED6DC;
    case 0x802ED6E0u: goto label_802ED6E0;
    case 0x802ED6E4u: goto label_802ED6E4;
    case 0x802ED6E8u: goto label_802ED6E8;
    case 0x802ED6ECu: goto label_802ED6EC;
    case 0x802ED6F0u: goto label_802ED6F0;
    case 0x802ED6F4u: goto label_802ED6F4;
    case 0x802ED6F8u: goto label_802ED6F8;
    case 0x802ED6FCu: goto label_802ED6FC;
    case 0x802ED700u: goto label_802ED700;
    case 0x802ED704u: goto label_802ED704;
    case 0x802ED708u: goto label_802ED708;
    case 0x802ED70Cu: goto label_802ED70C;
    case 0x802ED710u: goto label_802ED710;
    case 0x802ED714u: goto label_802ED714;
    case 0x802ED718u: goto label_802ED718;
    case 0x802ED71Cu: goto label_802ED71C;
    case 0x802ED720u: goto label_802ED720;
    case 0x802ED724u: goto label_802ED724;
    case 0x802ED728u: goto label_802ED728;
    case 0x802ED72Cu: goto label_802ED72C;
    case 0x802ED730u: goto label_802ED730;
    case 0x802ED734u: goto label_802ED734;
    case 0x802ED738u: goto label_802ED738;
    case 0x802ED73Cu: goto label_802ED73C;
    case 0x802ED740u: goto label_802ED740;
    case 0x802ED744u: goto label_802ED744;
    case 0x802ED748u: goto label_802ED748;
    case 0x802ED74Cu: goto label_802ED74C;
    case 0x802ED750u: goto label_802ED750;
    case 0x802ED754u: goto label_802ED754;
    case 0x802ED758u: goto label_802ED758;
    case 0x802ED75Cu: goto label_802ED75C;
    case 0x802ED760u: goto label_802ED760;
    case 0x802ED764u: goto label_802ED764;
    case 0x802ED768u: goto label_802ED768;
    case 0x802ED76Cu: goto label_802ED76C;
    case 0x802ED770u: goto label_802ED770;
    case 0x802ED774u: goto label_802ED774;
    case 0x802ED778u: goto label_802ED778;
    case 0x802ED77Cu: goto label_802ED77C;
    case 0x802ED780u: goto label_802ED780;
    case 0x802ED784u: goto label_802ED784;
    case 0x802ED788u: goto label_802ED788;
    case 0x802ED78Cu: goto label_802ED78C;
    case 0x802ED790u: goto label_802ED790;
    case 0x802ED794u: goto label_802ED794;
    case 0x802ED798u: goto label_802ED798;
    case 0x802ED79Cu: goto label_802ED79C;
    case 0x802ED7A0u: goto label_802ED7A0;
    case 0x802ED7A4u: goto label_802ED7A4;
    case 0x802ED7A8u: goto label_802ED7A8;
    case 0x802ED7ACu: goto label_802ED7AC;
    case 0x802ED7B0u: goto label_802ED7B0;
    case 0x802ED7B4u: goto label_802ED7B4;
    case 0x802ED7B8u: goto label_802ED7B8;
    case 0x802ED7BCu: goto label_802ED7BC;
    case 0x802ED7C0u: goto label_802ED7C0;
    case 0x802ED7C4u: goto label_802ED7C4;
    case 0x802ED7C8u: goto label_802ED7C8;
    case 0x802ED7CCu: goto label_802ED7CC;
    case 0x802ED7D0u: goto label_802ED7D0;
    case 0x802ED7D4u: goto label_802ED7D4;
    case 0x802ED7D8u: goto label_802ED7D8;
    case 0x802ED7DCu: goto label_802ED7DC;
    case 0x802ED7E0u: goto label_802ED7E0;
    case 0x802ED7E4u: goto label_802ED7E4;
    case 0x802ED7E8u: goto label_802ED7E8;
    case 0x802ED7ECu: goto label_802ED7EC;
    case 0x802ED7F0u: goto label_802ED7F0;
    case 0x802ED7F4u: goto label_802ED7F4;
    case 0x802ED7F8u: goto label_802ED7F8;
    case 0x802ED7FCu: goto label_802ED7FC;
    case 0x802ED800u: goto label_802ED800;
    case 0x802ED804u: goto label_802ED804;
    case 0x802ED808u: goto label_802ED808;
    case 0x802ED80Cu: goto label_802ED80C;
    case 0x802ED810u: goto label_802ED810;
    case 0x802ED814u: goto label_802ED814;
    case 0x802ED818u: goto label_802ED818;
    case 0x802ED81Cu: goto label_802ED81C;
    case 0x802ED820u: goto label_802ED820;
    case 0x802ED824u: goto label_802ED824;
    case 0x802ED828u: goto label_802ED828;
    case 0x802ED82Cu: goto label_802ED82C;
    case 0x802ED830u: goto label_802ED830;
    case 0x802ED834u: goto label_802ED834;
    case 0x802ED838u: goto label_802ED838;
    case 0x802ED83Cu: goto label_802ED83C;
    case 0x802ED840u: goto label_802ED840;
    case 0x802ED844u: goto label_802ED844;
    case 0x802ED848u: goto label_802ED848;
    case 0x802ED84Cu: goto label_802ED84C;
    case 0x802ED850u: goto label_802ED850;
    case 0x802ED854u: goto label_802ED854;
    case 0x802ED858u: goto label_802ED858;
    case 0x802ED85Cu: goto label_802ED85C;
    case 0x802ED860u: goto label_802ED860;
    case 0x802ED864u: goto label_802ED864;
    case 0x802ED868u: goto label_802ED868;
    case 0x802ED86Cu: goto label_802ED86C;
    case 0x802ED870u: goto label_802ED870;
    case 0x802ED874u: goto label_802ED874;
    case 0x802ED878u: goto label_802ED878;
    case 0x802ED87Cu: goto label_802ED87C;
    case 0x802ED880u: goto label_802ED880;
    case 0x802ED884u: goto label_802ED884;
    case 0x802ED888u: goto label_802ED888;
    case 0x802ED88Cu: goto label_802ED88C;
    case 0x802ED890u: goto label_802ED890;
    case 0x802ED894u: goto label_802ED894;
    case 0x802ED898u: goto label_802ED898;
    case 0x802ED89Cu: goto label_802ED89C;
    case 0x802ED8A0u: goto label_802ED8A0;
    case 0x802ED8A4u: goto label_802ED8A4;
    case 0x802ED8A8u: goto label_802ED8A8;
    case 0x802ED8ACu: goto label_802ED8AC;
    case 0x802ED8B0u: goto label_802ED8B0;
    case 0x802ED8B4u: goto label_802ED8B4;
    case 0x802ED8B8u: goto label_802ED8B8;
    case 0x802ED8BCu: goto label_802ED8BC;
    case 0x802ED8C0u: goto label_802ED8C0;
    case 0x802ED8C4u: goto label_802ED8C4;
    case 0x802ED8C8u: goto label_802ED8C8;
    case 0x802ED8CCu: goto label_802ED8CC;
    case 0x802ED8D0u: goto label_802ED8D0;
    case 0x802ED8D4u: goto label_802ED8D4;
    case 0x802ED8D8u: goto label_802ED8D8;
    case 0x802ED8DCu: goto label_802ED8DC;
    case 0x802ED8E0u: goto label_802ED8E0;
    case 0x802ED8E4u: goto label_802ED8E4;
    case 0x802ED8E8u: goto label_802ED8E8;
    case 0x802ED8ECu: goto label_802ED8EC;
    case 0x802ED8F0u: goto label_802ED8F0;
    case 0x802ED8F4u: goto label_802ED8F4;
    case 0x802ED8F8u: goto label_802ED8F8;
    case 0x802ED8FCu: goto label_802ED8FC;
    case 0x802ED900u: goto label_802ED900;
    case 0x802ED904u: goto label_802ED904;
    case 0x802ED908u: goto label_802ED908;
    case 0x802ED90Cu: goto label_802ED90C;
    case 0x802ED910u: goto label_802ED910;
    case 0x802ED914u: goto label_802ED914;
    case 0x802ED918u: goto label_802ED918;
    case 0x802ED91Cu: goto label_802ED91C;
    case 0x802ED920u: goto label_802ED920;
    case 0x802ED924u: goto label_802ED924;
    case 0x802ED928u: goto label_802ED928;
    case 0x802ED92Cu: goto label_802ED92C;
    case 0x802ED930u: goto label_802ED930;
    case 0x802ED934u: goto label_802ED934;
    case 0x802ED938u: goto label_802ED938;
    case 0x802ED93Cu: goto label_802ED93C;
    case 0x802ED940u: goto label_802ED940;
    case 0x802ED944u: goto label_802ED944;
    case 0x802ED948u: goto label_802ED948;
    case 0x802ED94Cu: goto label_802ED94C;
    case 0x802ED950u: goto label_802ED950;
    case 0x802ED954u: goto label_802ED954;
    case 0x802ED958u: goto label_802ED958;
    case 0x802ED95Cu: goto label_802ED95C;
    case 0x802ED960u: goto label_802ED960;
    case 0x802ED964u: goto label_802ED964;
    case 0x802ED968u: goto label_802ED968;
    case 0x802ED96Cu: goto label_802ED96C;
    case 0x802ED970u: goto label_802ED970;
    case 0x802ED974u: goto label_802ED974;
    case 0x802ED978u: goto label_802ED978;
    case 0x802ED97Cu: goto label_802ED97C;
    case 0x802ED980u: goto label_802ED980;
    case 0x802ED984u: goto label_802ED984;
    case 0x802ED988u: goto label_802ED988;
    case 0x802ED98Cu: goto label_802ED98C;
    case 0x802ED990u: goto label_802ED990;
    case 0x802ED994u: goto label_802ED994;
    case 0x802ED998u: goto label_802ED998;
    case 0x802ED99Cu: goto label_802ED99C;
    case 0x802ED9A0u: goto label_802ED9A0;
    case 0x802ED9A4u: goto label_802ED9A4;
    case 0x802ED9A8u: goto label_802ED9A8;
    case 0x802ED9ACu: goto label_802ED9AC;
    case 0x802ED9B0u: goto label_802ED9B0;
    case 0x802ED9B4u: goto label_802ED9B4;
    case 0x802ED9B8u: goto label_802ED9B8;
    case 0x802ED9BCu: goto label_802ED9BC;
    case 0x802ED9C0u: goto label_802ED9C0;
    case 0x802ED9C4u: goto label_802ED9C4;
    case 0x802ED9C8u: goto label_802ED9C8;
    case 0x802ED9CCu: goto label_802ED9CC;
    case 0x802ED9D0u: goto label_802ED9D0;
    case 0x802ED9D4u: goto label_802ED9D4;
    case 0x802ED9D8u: goto label_802ED9D8;
    case 0x802ED9DCu: goto label_802ED9DC;
    case 0x802ED9E0u: goto label_802ED9E0;
    case 0x802ED9E4u: goto label_802ED9E4;
    case 0x802ED9E8u: goto label_802ED9E8;
    case 0x802ED9ECu: goto label_802ED9EC;
    case 0x802ED9F0u: goto label_802ED9F0;
    case 0x802ED9F4u: goto label_802ED9F4;
    case 0x802ED9F8u: goto label_802ED9F8;
    case 0x802ED9FCu: goto label_802ED9FC;
    case 0x802EDA00u: goto label_802EDA00;
    case 0x802EDA04u: goto label_802EDA04;
    case 0x802EDA08u: goto label_802EDA08;
    case 0x802EDA0Cu: goto label_802EDA0C;
    case 0x802EDA10u: goto label_802EDA10;
    case 0x802EDA14u: goto label_802EDA14;
    case 0x802EDA18u: goto label_802EDA18;
    case 0x802EDA1Cu: goto label_802EDA1C;
    case 0x802EDA20u: goto label_802EDA20;
    case 0x802EDA24u: goto label_802EDA24;
    case 0x802EDA28u: goto label_802EDA28;
    case 0x802EDA2Cu: goto label_802EDA2C;
    case 0x802EDA30u: goto label_802EDA30;
    case 0x802EDA34u: goto label_802EDA34;
    case 0x802EDA38u: goto label_802EDA38;
    case 0x802EDA3Cu: goto label_802EDA3C;
    case 0x802EDA40u: goto label_802EDA40;
    case 0x802EDA44u: goto label_802EDA44;
    case 0x802EDA48u: goto label_802EDA48;
    case 0x802EDA4Cu: goto label_802EDA4C;
    case 0x802EDA50u: goto label_802EDA50;
    case 0x802EDA54u: goto label_802EDA54;
    case 0x802EDA58u: goto label_802EDA58;
    case 0x802EDA5Cu: goto label_802EDA5C;
    case 0x802EDA60u: goto label_802EDA60;
    case 0x802EDA64u: goto label_802EDA64;
    case 0x802EDA68u: goto label_802EDA68;
    case 0x802EDA6Cu: goto label_802EDA6C;
    case 0x802EDA70u: goto label_802EDA70;
    case 0x802EDA74u: goto label_802EDA74;
    case 0x802EDA78u: goto label_802EDA78;
    case 0x802EDA7Cu: goto label_802EDA7C;
    case 0x802EDA80u: goto label_802EDA80;
    case 0x802EDA84u: goto label_802EDA84;
    case 0x802EDA88u: goto label_802EDA88;
    case 0x802EDA8Cu: goto label_802EDA8C;
    case 0x802EDA90u: goto label_802EDA90;
    case 0x802EDA94u: goto label_802EDA94;
    case 0x802EDA98u: goto label_802EDA98;
    case 0x802EDA9Cu: goto label_802EDA9C;
    case 0x802EDAA0u: goto label_802EDAA0;
    case 0x802EDAA4u: goto label_802EDAA4;
    case 0x802EDAA8u: goto label_802EDAA8;
    case 0x802EDAACu: goto label_802EDAAC;
    case 0x802EDAB0u: goto label_802EDAB0;
    case 0x802EDAB4u: goto label_802EDAB4;
    case 0x802EDAB8u: goto label_802EDAB8;
    case 0x802EDABCu: goto label_802EDABC;
    case 0x802EDAC0u: goto label_802EDAC0;
    case 0x802EDAC4u: goto label_802EDAC4;
    case 0x802EDAC8u: goto label_802EDAC8;
    case 0x802EDACCu: goto label_802EDACC;
    case 0x802EDAD0u: goto label_802EDAD0;
    case 0x802EDAD4u: goto label_802EDAD4;
    case 0x802EDAD8u: goto label_802EDAD8;
    case 0x802EDADCu: goto label_802EDADC;
    case 0x802EDAE0u: goto label_802EDAE0;
    case 0x802EDAE4u: goto label_802EDAE4;
    case 0x802EDAE8u: goto label_802EDAE8;
    case 0x802EDAECu: goto label_802EDAEC;
    case 0x802EDAF0u: goto label_802EDAF0;
    case 0x802EDAF4u: goto label_802EDAF4;
    case 0x802EDAF8u: goto label_802EDAF8;
    case 0x802EDAFCu: goto label_802EDAFC;
    case 0x802EDB00u: goto label_802EDB00;
    case 0x802EDB04u: goto label_802EDB04;
    case 0x802EDB08u: goto label_802EDB08;
    case 0x802EDB0Cu: goto label_802EDB0C;
    case 0x802EDB10u: goto label_802EDB10;
    case 0x802EDB14u: goto label_802EDB14;
    case 0x802EDB18u: goto label_802EDB18;
    case 0x802EDB1Cu: goto label_802EDB1C;
    case 0x802EDB20u: goto label_802EDB20;
    case 0x802EDB24u: goto label_802EDB24;
    case 0x802EDB28u: goto label_802EDB28;
    case 0x802EDB2Cu: goto label_802EDB2C;
    case 0x802EDB30u: goto label_802EDB30;
    case 0x802EDB34u: goto label_802EDB34;
    case 0x802EDB38u: goto label_802EDB38;
    case 0x802EDB3Cu: goto label_802EDB3C;
    case 0x802EDB40u: goto label_802EDB40;
    case 0x802EDB44u: goto label_802EDB44;
    case 0x802EDB48u: goto label_802EDB48;
    case 0x802EDB4Cu: goto label_802EDB4C;
    case 0x802EDB50u: goto label_802EDB50;
    case 0x802EDB54u: goto label_802EDB54;
    case 0x802EDB58u: goto label_802EDB58;
    case 0x802EDB5Cu: goto label_802EDB5C;
    case 0x802EDB60u: goto label_802EDB60;
    case 0x802EDB64u: goto label_802EDB64;
    case 0x802EDB68u: goto label_802EDB68;
    case 0x802EDB6Cu: goto label_802EDB6C;
    case 0x802EDB70u: goto label_802EDB70;
    case 0x802EDB74u: goto label_802EDB74;
    case 0x802EDB78u: goto label_802EDB78;
    case 0x802EDB7Cu: goto label_802EDB7C;
    case 0x802EDB80u: goto label_802EDB80;
    case 0x802EDB84u: goto label_802EDB84;
    case 0x802EDB88u: goto label_802EDB88;
    case 0x802EDB8Cu: goto label_802EDB8C;
    case 0x802EDB90u: goto label_802EDB90;
    case 0x802EDB94u: goto label_802EDB94;
    case 0x802EDB98u: goto label_802EDB98;
    case 0x802EDB9Cu: goto label_802EDB9C;
    case 0x802EDBA0u: goto label_802EDBA0;
    case 0x802EDBA4u: goto label_802EDBA4;
    case 0x802EDBA8u: goto label_802EDBA8;
    case 0x802EDBACu: goto label_802EDBAC;
    case 0x802EDBB0u: goto label_802EDBB0;
    case 0x802EDBB4u: goto label_802EDBB4;
    case 0x802EDBB8u: goto label_802EDBB8;
    case 0x802EDBBCu: goto label_802EDBBC;
    case 0x802EDBC0u: goto label_802EDBC0;
    case 0x802EDBC4u: goto label_802EDBC4;
    case 0x802EDBC8u: goto label_802EDBC8;
    case 0x802EDBCCu: goto label_802EDBCC;
    case 0x802EDBD0u: goto label_802EDBD0;
    case 0x802EDBD4u: goto label_802EDBD4;
    case 0x802EDBD8u: goto label_802EDBD8;
    case 0x802EDBDCu: goto label_802EDBDC;
    case 0x802EDBE0u: goto label_802EDBE0;
    case 0x802EDBE4u: goto label_802EDBE4;
    case 0x802EDBE8u: goto label_802EDBE8;
    case 0x802EDBECu: goto label_802EDBEC;
    case 0x802EDBF0u: goto label_802EDBF0;
    case 0x802EDBF4u: goto label_802EDBF4;
    case 0x802EDBF8u: goto label_802EDBF8;
    case 0x802EDBFCu: goto label_802EDBFC;
    case 0x802EDC00u: goto label_802EDC00;
    case 0x802EDC04u: goto label_802EDC04;
    case 0x802EDC08u: goto label_802EDC08;
    case 0x802EDC0Cu: goto label_802EDC0C;
    case 0x802EDC10u: goto label_802EDC10;
    case 0x802EDC14u: goto label_802EDC14;
    case 0x802EDC18u: goto label_802EDC18;
    case 0x802EDC1Cu: goto label_802EDC1C;
    case 0x802EDC20u: goto label_802EDC20;
    case 0x802EDC24u: goto label_802EDC24;
    case 0x802EDC28u: goto label_802EDC28;
    case 0x802EDC2Cu: goto label_802EDC2C;
    case 0x802EDC30u: goto label_802EDC30;
    case 0x802EDC34u: goto label_802EDC34;
    case 0x802EDC38u: goto label_802EDC38;
    case 0x802EDC3Cu: goto label_802EDC3C;
    case 0x802EDC40u: goto label_802EDC40;
    case 0x802EDC44u: goto label_802EDC44;
    case 0x802EDC48u: goto label_802EDC48;
    case 0x802EDC4Cu: goto label_802EDC4C;
    case 0x802EDC50u: goto label_802EDC50;
    case 0x802EDC54u: goto label_802EDC54;
    case 0x802EDC58u: goto label_802EDC58;
    case 0x802EDC5Cu: goto label_802EDC5C;
    case 0x802EDC60u: goto label_802EDC60;
    case 0x802EDC64u: goto label_802EDC64;
    case 0x802EDC68u: goto label_802EDC68;
    case 0x802EDC6Cu: goto label_802EDC6C;
    case 0x802EDC70u: goto label_802EDC70;
    case 0x802EDC74u: goto label_802EDC74;
    case 0x802EDC78u: goto label_802EDC78;
    case 0x802EDC7Cu: goto label_802EDC7C;
    case 0x802EDC80u: goto label_802EDC80;
    case 0x802EDC84u: goto label_802EDC84;
    case 0x802EDC88u: goto label_802EDC88;
    case 0x802EDC8Cu: goto label_802EDC8C;
    case 0x802EDC90u: goto label_802EDC90;
    case 0x802EDC94u: goto label_802EDC94;
    case 0x802EDC98u: goto label_802EDC98;
    case 0x802EDC9Cu: goto label_802EDC9C;
    case 0x802EDCA0u: goto label_802EDCA0;
    case 0x802EDCA4u: goto label_802EDCA4;
    case 0x802EDCA8u: goto label_802EDCA8;
    case 0x802EDCACu: goto label_802EDCAC;
    case 0x802EDCB0u: goto label_802EDCB0;
    case 0x802EDCB4u: goto label_802EDCB4;
    case 0x802EDCB8u: goto label_802EDCB8;
    case 0x802EDCBCu: goto label_802EDCBC;
    case 0x802EDCC0u: goto label_802EDCC0;
    case 0x802EDCC4u: goto label_802EDCC4;
    case 0x802EDCC8u: goto label_802EDCC8;
    case 0x802EDCCCu: goto label_802EDCCC;
    case 0x802EDCD0u: goto label_802EDCD0;
    case 0x802EDCD4u: goto label_802EDCD4;
    case 0x802EDCD8u: goto label_802EDCD8;
    case 0x802EDCDCu: goto label_802EDCDC;
    case 0x802EDCE0u: goto label_802EDCE0;
    case 0x802EDCE4u: goto label_802EDCE4;
    case 0x802EDCE8u: goto label_802EDCE8;
    case 0x802EDCECu: goto label_802EDCEC;
    case 0x802EDCF0u: goto label_802EDCF0;
    case 0x802EDCF4u: goto label_802EDCF4;
    case 0x802EDCF8u: goto label_802EDCF8;
    case 0x802EDCFCu: goto label_802EDCFC;
    case 0x802EDD00u: goto label_802EDD00;
    case 0x802EDD04u: goto label_802EDD04;
    case 0x802EDD08u: goto label_802EDD08;
    case 0x802EDD0Cu: goto label_802EDD0C;
    case 0x802EDD10u: goto label_802EDD10;
    case 0x802EDD14u: goto label_802EDD14;
    case 0x802EDD18u: goto label_802EDD18;
    case 0x802EDD1Cu: goto label_802EDD1C;
    case 0x802EDD20u: goto label_802EDD20;
    case 0x802EDD24u: goto label_802EDD24;
    case 0x802EDD28u: goto label_802EDD28;
    case 0x802EDD2Cu: goto label_802EDD2C;
    case 0x802EDD30u: goto label_802EDD30;
    case 0x802EDD34u: goto label_802EDD34;
    case 0x802EDD38u: goto label_802EDD38;
    case 0x802EDD3Cu: goto label_802EDD3C;
    case 0x802EDD40u: goto label_802EDD40;
    case 0x802EDD44u: goto label_802EDD44;
    case 0x802EDD48u: goto label_802EDD48;
    case 0x802EDD4Cu: goto label_802EDD4C;
    case 0x802EDD50u: goto label_802EDD50;
    case 0x802EDD54u: goto label_802EDD54;
    case 0x802EDD58u: goto label_802EDD58;
    case 0x802EDD5Cu: goto label_802EDD5C;
    case 0x802EDD60u: goto label_802EDD60;
    case 0x802EDD64u: goto label_802EDD64;
    case 0x802EDD68u: goto label_802EDD68;
    case 0x802EDD6Cu: goto label_802EDD6C;
    case 0x802EDD70u: goto label_802EDD70;
    case 0x802EDD74u: goto label_802EDD74;
    case 0x802EDD78u: goto label_802EDD78;
    case 0x802EDD7Cu: goto label_802EDD7C;
    case 0x802EDD80u: goto label_802EDD80;
    case 0x802EDD84u: goto label_802EDD84;
    case 0x802EDD88u: goto label_802EDD88;
    case 0x802EDD8Cu: goto label_802EDD8C;
    case 0x802EDD90u: goto label_802EDD90;
    case 0x802EDD94u: goto label_802EDD94;
    case 0x802EDD98u: goto label_802EDD98;
    case 0x802EDD9Cu: goto label_802EDD9C;
    case 0x802EDDA0u: goto label_802EDDA0;
    case 0x802EDDA4u: goto label_802EDDA4;
    case 0x802EDDA8u: goto label_802EDDA8;
    case 0x802EDDACu: goto label_802EDDAC;
    case 0x802EDDB0u: goto label_802EDDB0;
    case 0x802EDDB4u: goto label_802EDDB4;
    case 0x802EDDB8u: goto label_802EDDB8;
    case 0x802EDDBCu: goto label_802EDDBC;
    case 0x802EDDC0u: goto label_802EDDC0;
    case 0x802EDDC4u: goto label_802EDDC4;
    case 0x802EDDC8u: goto label_802EDDC8;
    case 0x802EDDCCu: goto label_802EDDCC;
    case 0x802EDDD0u: goto label_802EDDD0;
    case 0x802EDDD4u: goto label_802EDDD4;
    case 0x802EDDD8u: goto label_802EDDD8;
    case 0x802EDDDCu: goto label_802EDDDC;
    case 0x802EDDE0u: goto label_802EDDE0;
    case 0x802EDDE4u: goto label_802EDDE4;
    case 0x802EDDE8u: goto label_802EDDE8;
    case 0x802EDDECu: goto label_802EDDEC;
    case 0x802EDDF0u: goto label_802EDDF0;
    case 0x802EDDF4u: goto label_802EDDF4;
    case 0x802EDDF8u: goto label_802EDDF8;
    case 0x802EDDFCu: goto label_802EDDFC;
    case 0x802EDE00u: goto label_802EDE00;
    case 0x802EDE04u: goto label_802EDE04;
    case 0x802EDE08u: goto label_802EDE08;
    case 0x802EDE0Cu: goto label_802EDE0C;
    case 0x802EDE10u: goto label_802EDE10;
    case 0x802EDE14u: goto label_802EDE14;
    case 0x802EDE18u: goto label_802EDE18;
    case 0x802EDE1Cu: goto label_802EDE1C;
    case 0x802EDE20u: goto label_802EDE20;
    case 0x802EDE24u: goto label_802EDE24;
    case 0x802EDE28u: goto label_802EDE28;
    case 0x802EDE2Cu: goto label_802EDE2C;
    case 0x802EDE30u: goto label_802EDE30;
    case 0x802EDE34u: goto label_802EDE34;
    case 0x802EDE38u: goto label_802EDE38;
    case 0x802EDE3Cu: goto label_802EDE3C;
    case 0x802EDE40u: goto label_802EDE40;
    case 0x802EDE44u: goto label_802EDE44;
    case 0x802EDE48u: goto label_802EDE48;
    case 0x802EDE4Cu: goto label_802EDE4C;
    case 0x802EDE50u: goto label_802EDE50;
    case 0x802EDE54u: goto label_802EDE54;
    case 0x802EDE58u: goto label_802EDE58;
    case 0x802EDE5Cu: goto label_802EDE5C;
    case 0x802EDE60u: goto label_802EDE60;
    case 0x802EDE64u: goto label_802EDE64;
    case 0x802EDE68u: goto label_802EDE68;
    case 0x802EDE6Cu: goto label_802EDE6C;
    case 0x802EDE70u: goto label_802EDE70;
    case 0x802EDE74u: goto label_802EDE74;
    case 0x802EDE78u: goto label_802EDE78;
    case 0x802EDE7Cu: goto label_802EDE7C;
    case 0x802EDE80u: goto label_802EDE80;
    case 0x802EDE84u: goto label_802EDE84;
    case 0x802EDE88u: goto label_802EDE88;
    case 0x802EDE8Cu: goto label_802EDE8C;
    case 0x802EDE90u: goto label_802EDE90;
    case 0x802EDE94u: goto label_802EDE94;
    case 0x802EDE98u: goto label_802EDE98;
    case 0x802EDE9Cu: goto label_802EDE9C;
    case 0x802EDEA0u: goto label_802EDEA0;
    case 0x802EDEA4u: goto label_802EDEA4;
    case 0x802EDEA8u: goto label_802EDEA8;
    case 0x802EDEACu: goto label_802EDEAC;
    case 0x802EDEB0u: goto label_802EDEB0;
    case 0x802EDEB4u: goto label_802EDEB4;
    case 0x802EDEB8u: goto label_802EDEB8;
    case 0x802EDEBCu: goto label_802EDEBC;
    case 0x802EDEC0u: goto label_802EDEC0;
    case 0x802EDEC4u: goto label_802EDEC4;
    case 0x802EDEC8u: goto label_802EDEC8;
    case 0x802EDECCu: goto label_802EDECC;
    case 0x802EDED0u: goto label_802EDED0;
    case 0x802EDED4u: goto label_802EDED4;
    case 0x802EDED8u: goto label_802EDED8;
    case 0x802EDEDCu: goto label_802EDEDC;
    case 0x802EDEE0u: goto label_802EDEE0;
    case 0x802EDEE4u: goto label_802EDEE4;
    case 0x802EDEE8u: goto label_802EDEE8;
    case 0x802EDEECu: goto label_802EDEEC;
    case 0x802EDEF0u: goto label_802EDEF0;
    case 0x802EDEF4u: goto label_802EDEF4;
    case 0x802EDEF8u: goto label_802EDEF8;
    case 0x802EDEFCu: goto label_802EDEFC;
    case 0x802EDF00u: goto label_802EDF00;
    case 0x802EDF04u: goto label_802EDF04;
    case 0x802EDF08u: goto label_802EDF08;
    case 0x802EDF0Cu: goto label_802EDF0C;
    case 0x802EDF10u: goto label_802EDF10;
    case 0x802EDF14u: goto label_802EDF14;
    case 0x802EDF18u: goto label_802EDF18;
    case 0x802EDF1Cu: goto label_802EDF1C;
    case 0x802EDF20u: goto label_802EDF20;
    case 0x802EDF24u: goto label_802EDF24;
    case 0x802EDF28u: goto label_802EDF28;
    case 0x802EDF2Cu: goto label_802EDF2C;
    case 0x802EDF30u: goto label_802EDF30;
    case 0x802EDF34u: goto label_802EDF34;
    case 0x802EDF38u: goto label_802EDF38;
    case 0x802EDF3Cu: goto label_802EDF3C;
    case 0x802EDF40u: goto label_802EDF40;
    case 0x802EDF44u: goto label_802EDF44;
    case 0x802EDF48u: goto label_802EDF48;
    case 0x802EDF4Cu: goto label_802EDF4C;
    case 0x802EDF50u: goto label_802EDF50;
    case 0x802EDF54u: goto label_802EDF54;
    case 0x802EDF58u: goto label_802EDF58;
    case 0x802EDF5Cu: goto label_802EDF5C;
    case 0x802EDF60u: goto label_802EDF60;
    case 0x802EDF64u: goto label_802EDF64;
    case 0x802EDF68u: goto label_802EDF68;
    case 0x802EDF6Cu: goto label_802EDF6C;
    case 0x802EDF70u: goto label_802EDF70;
    case 0x802EDF74u: goto label_802EDF74;
    case 0x802EDF78u: goto label_802EDF78;
    case 0x802EDF7Cu: goto label_802EDF7C;
    case 0x802EDF80u: goto label_802EDF80;
    case 0x802EDF84u: goto label_802EDF84;
    case 0x802EDF88u: goto label_802EDF88;
    case 0x802EDF8Cu: goto label_802EDF8C;
    case 0x802EDF90u: goto label_802EDF90;
    case 0x802EDF94u: goto label_802EDF94;
    case 0x802EDF98u: goto label_802EDF98;
    case 0x802EDF9Cu: goto label_802EDF9C;
    case 0x802EDFA0u: goto label_802EDFA0;
    case 0x802EDFA4u: goto label_802EDFA4;
    case 0x802EDFA8u: goto label_802EDFA8;
    case 0x802EDFACu: goto label_802EDFAC;
    case 0x802EDFB0u: goto label_802EDFB0;
    case 0x802EDFB4u: goto label_802EDFB4;
    case 0x802EDFB8u: goto label_802EDFB8;
    case 0x802EDFBCu: goto label_802EDFBC;
    case 0x802EDFC0u: goto label_802EDFC0;
    case 0x802EDFC4u: goto label_802EDFC4;
    case 0x802EDFC8u: goto label_802EDFC8;
    case 0x802EDFCCu: goto label_802EDFCC;
    case 0x802EDFD0u: goto label_802EDFD0;
    case 0x802EDFD4u: goto label_802EDFD4;
    case 0x802EDFD8u: goto label_802EDFD8;
    case 0x802EDFDCu: goto label_802EDFDC;
    case 0x802EDFE0u: goto label_802EDFE0;
    case 0x802EDFE4u: goto label_802EDFE4;
    case 0x802EDFE8u: goto label_802EDFE8;
    case 0x802EDFECu: goto label_802EDFEC;
    case 0x802EDFF0u: goto label_802EDFF0;
    case 0x802EDFF4u: goto label_802EDFF4;
    case 0x802EDFF8u: goto label_802EDFF8;
    case 0x802EDFFCu: goto label_802EDFFC;
    case 0x802EE000u: goto label_802EE000;
    case 0x802EE004u: goto label_802EE004;
    case 0x802EE008u: goto label_802EE008;
    case 0x802EE00Cu: goto label_802EE00C;
    case 0x802EE010u: goto label_802EE010;
    case 0x802EE014u: goto label_802EE014;
    case 0x802EE018u: goto label_802EE018;
    case 0x802EE01Cu: goto label_802EE01C;
    case 0x802EE020u: goto label_802EE020;
    case 0x802EE024u: goto label_802EE024;
    case 0x802EE028u: goto label_802EE028;
    case 0x802EE02Cu: goto label_802EE02C;
    case 0x802EE030u: goto label_802EE030;
    case 0x802EE034u: goto label_802EE034;
    case 0x802EE038u: goto label_802EE038;
    case 0x802EE03Cu: goto label_802EE03C;
    case 0x802EE040u: goto label_802EE040;
    case 0x802EE044u: goto label_802EE044;
    case 0x802EE048u: goto label_802EE048;
    case 0x802EE04Cu: goto label_802EE04C;
    case 0x802EE050u: goto label_802EE050;
    case 0x802EE054u: goto label_802EE054;
    case 0x802EE058u: goto label_802EE058;
    case 0x802EE05Cu: goto label_802EE05C;
    case 0x802EE060u: goto label_802EE060;
    case 0x802EE064u: goto label_802EE064;
    case 0x802EE068u: goto label_802EE068;
    case 0x802EE06Cu: goto label_802EE06C;
    case 0x802EE070u: goto label_802EE070;
    case 0x802EE074u: goto label_802EE074;
    case 0x802EE078u: goto label_802EE078;
    case 0x802EE07Cu: goto label_802EE07C;
    case 0x802EE080u: goto label_802EE080;
    case 0x802EE084u: goto label_802EE084;
    case 0x802EE088u: goto label_802EE088;
    case 0x802EE08Cu: goto label_802EE08C;
    case 0x802EE090u: goto label_802EE090;
    case 0x802EE094u: goto label_802EE094;
    case 0x802EE098u: goto label_802EE098;
    case 0x802EE09Cu: goto label_802EE09C;
    case 0x802EE0A0u: goto label_802EE0A0;
    case 0x802EE0A4u: goto label_802EE0A4;
    case 0x802EE0A8u: goto label_802EE0A8;
    case 0x802EE0ACu: goto label_802EE0AC;
    case 0x802EE0B0u: goto label_802EE0B0;
    case 0x802EE0B4u: goto label_802EE0B4;
    case 0x802EE0B8u: goto label_802EE0B8;
    case 0x802EE0BCu: goto label_802EE0BC;
    case 0x802EE0C0u: goto label_802EE0C0;
    case 0x802EE0C4u: goto label_802EE0C4;
    case 0x802EE0C8u: goto label_802EE0C8;
    case 0x802EE0CCu: goto label_802EE0CC;
    case 0x802EE0D0u: goto label_802EE0D0;
    case 0x802EE0D4u: goto label_802EE0D4;
    case 0x802EE0D8u: goto label_802EE0D8;
    case 0x802EE0DCu: goto label_802EE0DC;
    case 0x802EE0E0u: goto label_802EE0E0;
    case 0x802EE0E4u: goto label_802EE0E4;
    case 0x802EE0E8u: goto label_802EE0E8;
    case 0x802EE0ECu: goto label_802EE0EC;
    case 0x802EE0F0u: goto label_802EE0F0;
    case 0x802EE0F4u: goto label_802EE0F4;
    case 0x802EE0F8u: goto label_802EE0F8;
    case 0x802EE0FCu: goto label_802EE0FC;
    case 0x802EE100u: goto label_802EE100;
    case 0x802EE104u: goto label_802EE104;
    case 0x802EE108u: goto label_802EE108;
    case 0x802EE10Cu: goto label_802EE10C;
    case 0x802EE110u: goto label_802EE110;
    case 0x802EE114u: goto label_802EE114;
    case 0x802EE118u: goto label_802EE118;
    case 0x802EE11Cu: goto label_802EE11C;
    case 0x802EE120u: goto label_802EE120;
    case 0x802EE124u: goto label_802EE124;
    case 0x802EE128u: goto label_802EE128;
    case 0x802EE12Cu: goto label_802EE12C;
    case 0x802EE130u: goto label_802EE130;
    case 0x802EE134u: goto label_802EE134;
    case 0x802EE138u: goto label_802EE138;
    case 0x802EE13Cu: goto label_802EE13C;
    case 0x802EE140u: goto label_802EE140;
    case 0x802EE144u: goto label_802EE144;
    case 0x802EE148u: goto label_802EE148;
    case 0x802EE14Cu: goto label_802EE14C;
    case 0x802EE150u: goto label_802EE150;
    case 0x802EE154u: goto label_802EE154;
    case 0x802EE158u: goto label_802EE158;
    case 0x802EE15Cu: goto label_802EE15C;
    case 0x802EE160u: goto label_802EE160;
    case 0x802EE164u: goto label_802EE164;
    case 0x802EE168u: goto label_802EE168;
    case 0x802EE16Cu: goto label_802EE16C;
    case 0x802EE170u: goto label_802EE170;
    case 0x802EE174u: goto label_802EE174;
    case 0x802EE178u: goto label_802EE178;
    case 0x802EE17Cu: goto label_802EE17C;
    case 0x802EE180u: goto label_802EE180;
    case 0x802EE184u: goto label_802EE184;
    case 0x802EE188u: goto label_802EE188;
    case 0x802EE18Cu: goto label_802EE18C;
    case 0x802EE190u: goto label_802EE190;
    case 0x802EE194u: goto label_802EE194;
    case 0x802EE198u: goto label_802EE198;
    case 0x802EE19Cu: goto label_802EE19C;
    case 0x802EE1A0u: goto label_802EE1A0;
    case 0x802EE1A4u: goto label_802EE1A4;
    case 0x802EE1A8u: goto label_802EE1A8;
    case 0x802EE1ACu: goto label_802EE1AC;
    case 0x802EE1B0u: goto label_802EE1B0;
    case 0x802EE1B4u: goto label_802EE1B4;
    case 0x802EE1B8u: goto label_802EE1B8;
    case 0x802EE1BCu: goto label_802EE1BC;
    case 0x802EE1C0u: goto label_802EE1C0;
    case 0x802EE1C4u: goto label_802EE1C4;
    case 0x802EE1C8u: goto label_802EE1C8;
    case 0x802EE1CCu: goto label_802EE1CC;
    case 0x802EE1D0u: goto label_802EE1D0;
    case 0x802EE1D4u: goto label_802EE1D4;
    case 0x802EE1D8u: goto label_802EE1D8;
    case 0x802EE1DCu: goto label_802EE1DC;
    case 0x802EE1E0u: goto label_802EE1E0;
    case 0x802EE1E4u: goto label_802EE1E4;
    case 0x802EE1E8u: goto label_802EE1E8;
    case 0x802EE1ECu: goto label_802EE1EC;
    case 0x802EE1F0u: goto label_802EE1F0;
    case 0x802EE1F4u: goto label_802EE1F4;
    case 0x802EE1F8u: goto label_802EE1F8;
    case 0x802EE1FCu: goto label_802EE1FC;
    case 0x802EE200u: goto label_802EE200;
    case 0x802EE204u: goto label_802EE204;
    case 0x802EE208u: goto label_802EE208;
    case 0x802EE20Cu: goto label_802EE20C;
    case 0x802EE210u: goto label_802EE210;
    case 0x802EE214u: goto label_802EE214;
    case 0x802EE218u: goto label_802EE218;
    case 0x802EE21Cu: goto label_802EE21C;
    case 0x802EE220u: goto label_802EE220;
    case 0x802EE224u: goto label_802EE224;
    case 0x802EE228u: goto label_802EE228;
    case 0x802EE22Cu: goto label_802EE22C;
    case 0x802EE230u: goto label_802EE230;
    case 0x802EE234u: goto label_802EE234;
    case 0x802EE238u: goto label_802EE238;
    case 0x802EE23Cu: goto label_802EE23C;
    case 0x802EE240u: goto label_802EE240;
    case 0x802EE244u: goto label_802EE244;
    case 0x802EE248u: goto label_802EE248;
    case 0x802EE24Cu: goto label_802EE24C;
    case 0x802EE250u: goto label_802EE250;
    case 0x802EE254u: goto label_802EE254;
    case 0x802EE258u: goto label_802EE258;
    case 0x802EE25Cu: goto label_802EE25C;
    case 0x802EE260u: goto label_802EE260;
    case 0x802EE264u: goto label_802EE264;
    case 0x802EE268u: goto label_802EE268;
    case 0x802EE26Cu: goto label_802EE26C;
    case 0x802EE270u: goto label_802EE270;
    case 0x802EE274u: goto label_802EE274;
    case 0x802EE278u: goto label_802EE278;
    case 0x802EE27Cu: goto label_802EE27C;
    case 0x802EE280u: goto label_802EE280;
    case 0x802EE284u: goto label_802EE284;
    case 0x802EE288u: goto label_802EE288;
    case 0x802EE28Cu: goto label_802EE28C;
    case 0x802EE290u: goto label_802EE290;
    case 0x802EE294u: goto label_802EE294;
    case 0x802EE298u: goto label_802EE298;
    case 0x802EE29Cu: goto label_802EE29C;
    case 0x802EE2A0u: goto label_802EE2A0;
    case 0x802EE2A4u: goto label_802EE2A4;
    case 0x802EE2A8u: goto label_802EE2A8;
    case 0x802EE2ACu: goto label_802EE2AC;
    case 0x802EE2B0u: goto label_802EE2B0;
    case 0x802EE2B4u: goto label_802EE2B4;
    case 0x802EE2B8u: goto label_802EE2B8;
    case 0x802EE2BCu: goto label_802EE2BC;
    case 0x802EE2C0u: goto label_802EE2C0;
    case 0x802EE2C4u: goto label_802EE2C4;
    case 0x802EE2C8u: goto label_802EE2C8;
    case 0x802EE2CCu: goto label_802EE2CC;
    case 0x802EE2D0u: goto label_802EE2D0;
    case 0x802EE2D4u: goto label_802EE2D4;
    case 0x802EE2D8u: goto label_802EE2D8;
    case 0x802EE2DCu: goto label_802EE2DC;
    case 0x802EE2E0u: goto label_802EE2E0;
    case 0x802EE2E4u: goto label_802EE2E4;
    case 0x802EE2E8u: goto label_802EE2E8;
    case 0x802EE2ECu: goto label_802EE2EC;
    case 0x802EE2F0u: goto label_802EE2F0;
    case 0x802EE2F4u: goto label_802EE2F4;
    case 0x802EE2F8u: goto label_802EE2F8;
    case 0x802EE2FCu: goto label_802EE2FC;
    case 0x802EE300u: goto label_802EE300;
    case 0x802EE304u: goto label_802EE304;
    case 0x802EE308u: goto label_802EE308;
    case 0x802EE30Cu: goto label_802EE30C;
    case 0x802EE310u: goto label_802EE310;
    case 0x802EE314u: goto label_802EE314;
    case 0x802EE318u: goto label_802EE318;
    case 0x802EE31Cu: goto label_802EE31C;
    case 0x802EE320u: goto label_802EE320;
    case 0x802EE324u: goto label_802EE324;
    case 0x802EE328u: goto label_802EE328;
    case 0x802EE32Cu: goto label_802EE32C;
    case 0x802EE330u: goto label_802EE330;
    case 0x802EE334u: goto label_802EE334;
    case 0x802EE338u: goto label_802EE338;
    case 0x802EE33Cu: goto label_802EE33C;
    case 0x802EE340u: goto label_802EE340;
    case 0x802EE344u: goto label_802EE344;
    case 0x802EE348u: goto label_802EE348;
    case 0x802EE34Cu: goto label_802EE34C;
    case 0x802EE350u: goto label_802EE350;
    case 0x802EE354u: goto label_802EE354;
    case 0x802EE358u: goto label_802EE358;
    case 0x802EE35Cu: goto label_802EE35C;
    case 0x802EE360u: goto label_802EE360;
    case 0x802EE364u: goto label_802EE364;
    case 0x802EE368u: goto label_802EE368;
    case 0x802EE36Cu: goto label_802EE36C;
    case 0x802EE370u: goto label_802EE370;
    case 0x802EE374u: goto label_802EE374;
    case 0x802EE378u: goto label_802EE378;
    case 0x802EE37Cu: goto label_802EE37C;
    case 0x802EE380u: goto label_802EE380;
    case 0x802EE384u: goto label_802EE384;
    case 0x802EE388u: goto label_802EE388;
    case 0x802EE38Cu: goto label_802EE38C;
    case 0x802EE390u: goto label_802EE390;
    case 0x802EE394u: goto label_802EE394;
    case 0x802EE398u: goto label_802EE398;
    case 0x802EE39Cu: goto label_802EE39C;
    case 0x802EE3A0u: goto label_802EE3A0;
    case 0x802EE3A4u: goto label_802EE3A4;
    case 0x802EE3A8u: goto label_802EE3A8;
    case 0x802EE3ACu: goto label_802EE3AC;
    case 0x802EE3B0u: goto label_802EE3B0;
    case 0x802EE3B4u: goto label_802EE3B4;
    case 0x802EE3B8u: goto label_802EE3B8;
    case 0x802EE3BCu: goto label_802EE3BC;
    case 0x802EE3C0u: goto label_802EE3C0;
    case 0x802EE3C4u: goto label_802EE3C4;
    case 0x802EE3C8u: goto label_802EE3C8;
    case 0x802EE3CCu: goto label_802EE3CC;
    case 0x802EE3D0u: goto label_802EE3D0;
    case 0x802EE3D4u: goto label_802EE3D4;
    case 0x802EE3D8u: goto label_802EE3D8;
    case 0x802EE3DCu: goto label_802EE3DC;
    case 0x802EE3E0u: goto label_802EE3E0;
    case 0x802EE3E4u: goto label_802EE3E4;
    case 0x802EE3E8u: goto label_802EE3E8;
    case 0x802EE3ECu: goto label_802EE3EC;
    case 0x802EE3F0u: goto label_802EE3F0;
    case 0x802EE3F4u: goto label_802EE3F4;
    case 0x802EE3F8u: goto label_802EE3F8;
    case 0x802EE3FCu: goto label_802EE3FC;
    case 0x802EE400u: goto label_802EE400;
    case 0x802EE404u: goto label_802EE404;
    case 0x802EE408u: goto label_802EE408;
    case 0x802EE40Cu: goto label_802EE40C;
    case 0x802EE410u: goto label_802EE410;
    case 0x802EE414u: goto label_802EE414;
    case 0x802EE418u: goto label_802EE418;
    case 0x802EE41Cu: goto label_802EE41C;
    case 0x802EE420u: goto label_802EE420;
    case 0x802EE424u: goto label_802EE424;
    case 0x802EE428u: goto label_802EE428;
    case 0x802EE42Cu: goto label_802EE42C;
    case 0x802EE430u: goto label_802EE430;
    case 0x802EE434u: goto label_802EE434;
    case 0x802EE438u: goto label_802EE438;
    case 0x802EE43Cu: goto label_802EE43C;
    case 0x802EE440u: goto label_802EE440;
    case 0x802EE444u: goto label_802EE444;
    case 0x802EE448u: goto label_802EE448;
    case 0x802EE44Cu: goto label_802EE44C;
    case 0x802EE450u: goto label_802EE450;
    case 0x802EE454u: goto label_802EE454;
    case 0x802EE458u: goto label_802EE458;
    case 0x802EE45Cu: goto label_802EE45C;
    case 0x802EE460u: goto label_802EE460;
    case 0x802EE464u: goto label_802EE464;
    case 0x802EE468u: goto label_802EE468;
    case 0x802EE46Cu: goto label_802EE46C;
    case 0x802EE470u: goto label_802EE470;
    case 0x802EE474u: goto label_802EE474;
    case 0x802EE478u: goto label_802EE478;
    case 0x802EE47Cu: goto label_802EE47C;
    case 0x802EE480u: goto label_802EE480;
    case 0x802EE484u: goto label_802EE484;
    case 0x802EE488u: goto label_802EE488;
    case 0x802EE48Cu: goto label_802EE48C;
    case 0x802EE490u: goto label_802EE490;
    case 0x802EE494u: goto label_802EE494;
    case 0x802EE498u: goto label_802EE498;
    case 0x802EE49Cu: goto label_802EE49C;
    case 0x802EE4A0u: goto label_802EE4A0;
    case 0x802EE4A4u: goto label_802EE4A4;
    case 0x802EE4A8u: goto label_802EE4A8;
    case 0x802EE4ACu: goto label_802EE4AC;
    case 0x802EE4B0u: goto label_802EE4B0;
    case 0x802EE4B4u: goto label_802EE4B4;
    case 0x802EE4B8u: goto label_802EE4B8;
    case 0x802EE4BCu: goto label_802EE4BC;
    case 0x802EE4C0u: goto label_802EE4C0;
    case 0x802EE4C4u: goto label_802EE4C4;
    case 0x802EE4C8u: goto label_802EE4C8;
    case 0x802EE4CCu: goto label_802EE4CC;
    case 0x802EE4D0u: goto label_802EE4D0;
    case 0x802EE4D4u: goto label_802EE4D4;
    case 0x802EE4D8u: goto label_802EE4D8;
    case 0x802EE4DCu: goto label_802EE4DC;
    case 0x802EE4E0u: goto label_802EE4E0;
    case 0x802EE4E4u: goto label_802EE4E4;
    case 0x802EE4E8u: goto label_802EE4E8;
    case 0x802EE4ECu: goto label_802EE4EC;
    case 0x802EE4F0u: goto label_802EE4F0;
    case 0x802EE4F4u: goto label_802EE4F4;
    case 0x802EE4F8u: goto label_802EE4F8;
    case 0x802EE4FCu: goto label_802EE4FC;
    case 0x802EE500u: goto label_802EE500;
    case 0x802EE504u: goto label_802EE504;
    case 0x802EE508u: goto label_802EE508;
    case 0x802EE50Cu: goto label_802EE50C;
    case 0x802EE510u: goto label_802EE510;
    case 0x802EE514u: goto label_802EE514;
    case 0x802EE518u: goto label_802EE518;
    case 0x802EE51Cu: goto label_802EE51C;
    case 0x802EE520u: goto label_802EE520;
    case 0x802EE524u: goto label_802EE524;
    case 0x802EE528u: goto label_802EE528;
    case 0x802EE52Cu: goto label_802EE52C;
    case 0x802EE530u: goto label_802EE530;
    case 0x802EE534u: goto label_802EE534;
    case 0x802EE538u: goto label_802EE538;
    case 0x802EE53Cu: goto label_802EE53C;
    case 0x802EE540u: goto label_802EE540;
    case 0x802EE544u: goto label_802EE544;
    case 0x802EE548u: goto label_802EE548;
    case 0x802EE54Cu: goto label_802EE54C;
    case 0x802EE550u: goto label_802EE550;
    case 0x802EE554u: goto label_802EE554;
    case 0x802EE558u: goto label_802EE558;
    case 0x802EE55Cu: goto label_802EE55C;
    case 0x802EE560u: goto label_802EE560;
    case 0x802EE564u: goto label_802EE564;
    case 0x802EE568u: goto label_802EE568;
    case 0x802EE56Cu: goto label_802EE56C;
    case 0x802EE570u: goto label_802EE570;
    case 0x802EE574u: goto label_802EE574;
    case 0x802EE578u: goto label_802EE578;
    case 0x802EE57Cu: goto label_802EE57C;
    case 0x802EE580u: goto label_802EE580;
    case 0x802EE584u: goto label_802EE584;
    case 0x802EE588u: goto label_802EE588;
    case 0x802EE58Cu: goto label_802EE58C;
    case 0x802EE590u: goto label_802EE590;
    case 0x802EE594u: goto label_802EE594;
    case 0x802EE598u: goto label_802EE598;
    case 0x802EE59Cu: goto label_802EE59C;
    case 0x802EE5A0u: goto label_802EE5A0;
    case 0x802EE5A4u: goto label_802EE5A4;
    case 0x802EE5A8u: goto label_802EE5A8;
    case 0x802EE5ACu: goto label_802EE5AC;
    case 0x802EE5B0u: goto label_802EE5B0;
    case 0x802EE5B4u: goto label_802EE5B4;
    case 0x802EE5B8u: goto label_802EE5B8;
    case 0x802EE5BCu: goto label_802EE5BC;
    case 0x802EE5C0u: goto label_802EE5C0;
    case 0x802EE5C4u: goto label_802EE5C4;
    case 0x802EE5C8u: goto label_802EE5C8;
    case 0x802EE5CCu: goto label_802EE5CC;
    case 0x802EE5D0u: goto label_802EE5D0;
    case 0x802EE5D4u: goto label_802EE5D4;
    case 0x802EE5D8u: goto label_802EE5D8;
    case 0x802EE5DCu: goto label_802EE5DC;
    case 0x802EE5E0u: goto label_802EE5E0;
    case 0x802EE5E4u: goto label_802EE5E4;
    case 0x802EE5E8u: goto label_802EE5E8;
    case 0x802EE5ECu: goto label_802EE5EC;
    case 0x802EE5F0u: goto label_802EE5F0;
    case 0x802EE5F4u: goto label_802EE5F4;
    case 0x802EE5F8u: goto label_802EE5F8;
    case 0x802EE5FCu: goto label_802EE5FC;
    case 0x802EE600u: goto label_802EE600;
    case 0x802EE604u: goto label_802EE604;
    case 0x802EE608u: goto label_802EE608;
    case 0x802EE60Cu: goto label_802EE60C;
    case 0x802EE610u: goto label_802EE610;
    case 0x802EE614u: goto label_802EE614;
    case 0x802EE618u: goto label_802EE618;
    case 0x802EE61Cu: goto label_802EE61C;
    case 0x802EE620u: goto label_802EE620;
    case 0x802EE624u: goto label_802EE624;
    case 0x802EE628u: goto label_802EE628;
    case 0x802EE62Cu: goto label_802EE62C;
    case 0x802EE630u: goto label_802EE630;
    case 0x802EE634u: goto label_802EE634;
    case 0x802EE638u: goto label_802EE638;
    case 0x802EE63Cu: goto label_802EE63C;
    case 0x802EE640u: goto label_802EE640;
    case 0x802EE644u: goto label_802EE644;
    case 0x802EE648u: goto label_802EE648;
    case 0x802EE64Cu: goto label_802EE64C;
    case 0x802EE650u: goto label_802EE650;
    case 0x802EE654u: goto label_802EE654;
    case 0x802EE658u: goto label_802EE658;
    case 0x802EE65Cu: goto label_802EE65C;
    case 0x802EE660u: goto label_802EE660;
    case 0x802EE664u: goto label_802EE664;
    case 0x802EE668u: goto label_802EE668;
    case 0x802EE66Cu: goto label_802EE66C;
    case 0x802EE670u: goto label_802EE670;
    case 0x802EE674u: goto label_802EE674;
    case 0x802EE678u: goto label_802EE678;
    case 0x802EE67Cu: goto label_802EE67C;
    case 0x802EE680u: goto label_802EE680;
    case 0x802EE684u: goto label_802EE684;
    case 0x802EE688u: goto label_802EE688;
    case 0x802EE68Cu: goto label_802EE68C;
    case 0x802EE690u: goto label_802EE690;
    case 0x802EE694u: goto label_802EE694;
    case 0x802EE698u: goto label_802EE698;
    case 0x802EE69Cu: goto label_802EE69C;
    case 0x802EE6A0u: goto label_802EE6A0;
    case 0x802EE6A4u: goto label_802EE6A4;
    case 0x802EE6A8u: goto label_802EE6A8;
    case 0x802EE6ACu: goto label_802EE6AC;
    case 0x802EE6B0u: goto label_802EE6B0;
    case 0x802EE6B4u: goto label_802EE6B4;
    case 0x802EE6B8u: goto label_802EE6B8;
    case 0x802EE6BCu: goto label_802EE6BC;
    case 0x802EE6C0u: goto label_802EE6C0;
    case 0x802EE6C4u: goto label_802EE6C4;
    case 0x802EE6C8u: goto label_802EE6C8;
    case 0x802EE6CCu: goto label_802EE6CC;
    case 0x802EE6D0u: goto label_802EE6D0;
    case 0x802EE6D4u: goto label_802EE6D4;
    case 0x802EE6D8u: goto label_802EE6D8;
    case 0x802EE6DCu: goto label_802EE6DC;
    case 0x802EE6E0u: goto label_802EE6E0;
    case 0x802EE6E4u: goto label_802EE6E4;
    case 0x802EE6E8u: goto label_802EE6E8;
    case 0x802EE6ECu: goto label_802EE6EC;
    case 0x802EE6F0u: goto label_802EE6F0;
    case 0x802EE6F4u: goto label_802EE6F4;
    case 0x802EE6F8u: goto label_802EE6F8;
    case 0x802EE6FCu: goto label_802EE6FC;
    case 0x802EE700u: goto label_802EE700;
    case 0x802EE704u: goto label_802EE704;
    case 0x802EE708u: goto label_802EE708;
    case 0x802EE70Cu: goto label_802EE70C;
    case 0x802EE710u: goto label_802EE710;
    case 0x802EE714u: goto label_802EE714;
    case 0x802EE718u: goto label_802EE718;
    case 0x802EE71Cu: goto label_802EE71C;
    case 0x802EE720u: goto label_802EE720;
    case 0x802EE724u: goto label_802EE724;
    case 0x802EE728u: goto label_802EE728;
    case 0x802EE72Cu: goto label_802EE72C;
    case 0x802EE730u: goto label_802EE730;
    case 0x802EE734u: goto label_802EE734;
    case 0x802EE738u: goto label_802EE738;
    case 0x802EE73Cu: goto label_802EE73C;
    case 0x802EE740u: goto label_802EE740;
    case 0x802EE744u: goto label_802EE744;
    case 0x802EE748u: goto label_802EE748;
    case 0x802EE74Cu: goto label_802EE74C;
    case 0x802EE750u: goto label_802EE750;
    case 0x802EE754u: goto label_802EE754;
    case 0x802EE758u: goto label_802EE758;
    case 0x802EE75Cu: goto label_802EE75C;
    case 0x802EE760u: goto label_802EE760;
    case 0x802EE764u: goto label_802EE764;
    case 0x802EE768u: goto label_802EE768;
    case 0x802EE76Cu: goto label_802EE76C;
    case 0x802EE770u: goto label_802EE770;
    case 0x802EE774u: goto label_802EE774;
    case 0x802EE778u: goto label_802EE778;
    case 0x802EE77Cu: goto label_802EE77C;
    case 0x802EE780u: goto label_802EE780;
    case 0x802EE784u: goto label_802EE784;
    case 0x802EE788u: goto label_802EE788;
    case 0x802EE78Cu: goto label_802EE78C;
    case 0x802EE790u: goto label_802EE790;
    case 0x802EE794u: goto label_802EE794;
    case 0x802EE798u: goto label_802EE798;
    case 0x802EE79Cu: goto label_802EE79C;
    case 0x802EE7A0u: goto label_802EE7A0;
    case 0x802EE7A4u: goto label_802EE7A4;
    case 0x802EE7A8u: goto label_802EE7A8;
    case 0x802EE7ACu: goto label_802EE7AC;
    case 0x802EE7B0u: goto label_802EE7B0;
    case 0x802EE7B4u: goto label_802EE7B4;
    case 0x802EE7B8u: goto label_802EE7B8;
    case 0x802EE7BCu: goto label_802EE7BC;
    case 0x802EE7C0u: goto label_802EE7C0;
    case 0x802EE7C4u: goto label_802EE7C4;
    case 0x802EE7C8u: goto label_802EE7C8;
    case 0x802EE7CCu: goto label_802EE7CC;
    case 0x802EE7D0u: goto label_802EE7D0;
    case 0x802EE7D4u: goto label_802EE7D4;
    case 0x802EE7D8u: goto label_802EE7D8;
    case 0x802EE7DCu: goto label_802EE7DC;
    case 0x802EE7E0u: goto label_802EE7E0;
    case 0x802EE7E4u: goto label_802EE7E4;
    case 0x802EE7E8u: goto label_802EE7E8;
    case 0x802EE7ECu: goto label_802EE7EC;
    case 0x802EE7F0u: goto label_802EE7F0;
    case 0x802EE7F4u: goto label_802EE7F4;
    case 0x802EE7F8u: goto label_802EE7F8;
    case 0x802EE7FCu: goto label_802EE7FC;
    case 0x802EE800u: goto label_802EE800;
    case 0x802EE804u: goto label_802EE804;
    case 0x802EE808u: goto label_802EE808;
    case 0x802EE80Cu: goto label_802EE80C;
    case 0x802EE810u: goto label_802EE810;
    case 0x802EE814u: goto label_802EE814;
    case 0x802EE818u: goto label_802EE818;
    case 0x802EE81Cu: goto label_802EE81C;
    case 0x802EE820u: goto label_802EE820;
    case 0x802EE824u: goto label_802EE824;
    case 0x802EE828u: goto label_802EE828;
    case 0x802EE82Cu: goto label_802EE82C;
    case 0x802EE830u: goto label_802EE830;
    case 0x802EE834u: goto label_802EE834;
    case 0x802EE838u: goto label_802EE838;
    case 0x802EE83Cu: goto label_802EE83C;
    case 0x802EE840u: goto label_802EE840;
    case 0x802EE844u: goto label_802EE844;
    case 0x802EE848u: goto label_802EE848;
    case 0x802EE84Cu: goto label_802EE84C;
    case 0x802EE850u: goto label_802EE850;
    case 0x802EE854u: goto label_802EE854;
    case 0x802EE858u: goto label_802EE858;
    case 0x802EE85Cu: goto label_802EE85C;
    case 0x802EE860u: goto label_802EE860;
    case 0x802EE864u: goto label_802EE864;
    case 0x802EE868u: goto label_802EE868;
    case 0x802EE86Cu: goto label_802EE86C;
    case 0x802EE870u: goto label_802EE870;
    case 0x802EE874u: goto label_802EE874;
    case 0x802EE878u: goto label_802EE878;
    case 0x802EE87Cu: goto label_802EE87C;
    case 0x802EE880u: goto label_802EE880;
    case 0x802EE884u: goto label_802EE884;
    case 0x802EE888u: goto label_802EE888;
    case 0x802EE88Cu: goto label_802EE88C;
    case 0x802EE890u: goto label_802EE890;
    case 0x802EE894u: goto label_802EE894;
    case 0x802EE898u: goto label_802EE898;
    case 0x802EE89Cu: goto label_802EE89C;
    case 0x802EE8A0u: goto label_802EE8A0;
    case 0x802EE8A4u: goto label_802EE8A4;
    case 0x802EE8A8u: goto label_802EE8A8;
    case 0x802EE8ACu: goto label_802EE8AC;
    case 0x802EE8B0u: goto label_802EE8B0;
    case 0x802EE8B4u: goto label_802EE8B4;
    case 0x802EE8B8u: goto label_802EE8B8;
    case 0x802EE8BCu: goto label_802EE8BC;
    case 0x802EE8C0u: goto label_802EE8C0;
    case 0x802EE8C4u: goto label_802EE8C4;
    case 0x802EE8C8u: goto label_802EE8C8;
    case 0x802EE8CCu: goto label_802EE8CC;
    case 0x802EE8D0u: goto label_802EE8D0;
    case 0x802EE8D4u: goto label_802EE8D4;
    case 0x802EE8D8u: goto label_802EE8D8;
    case 0x802EE8DCu: goto label_802EE8DC;
    case 0x802EE8E0u: goto label_802EE8E0;
    case 0x802EE8E4u: goto label_802EE8E4;
    case 0x802EE8E8u: goto label_802EE8E8;
    case 0x802EE8ECu: goto label_802EE8EC;
    case 0x802EE8F0u: goto label_802EE8F0;
    case 0x802EE8F4u: goto label_802EE8F4;
    case 0x802EE8F8u: goto label_802EE8F8;
    case 0x802EE8FCu: goto label_802EE8FC;
    case 0x802EE900u: goto label_802EE900;
    case 0x802EE904u: goto label_802EE904;
    case 0x802EE908u: goto label_802EE908;
    case 0x802EE90Cu: goto label_802EE90C;
    case 0x802EE910u: goto label_802EE910;
    case 0x802EE914u: goto label_802EE914;
    case 0x802EE918u: goto label_802EE918;
    case 0x802EE91Cu: goto label_802EE91C;
    case 0x802EE920u: goto label_802EE920;
    case 0x802EE924u: goto label_802EE924;
    case 0x802EE928u: goto label_802EE928;
    case 0x802EE92Cu: goto label_802EE92C;
    case 0x802EE930u: goto label_802EE930;
    case 0x802EE934u: goto label_802EE934;
    case 0x802EE938u: goto label_802EE938;
    case 0x802EE93Cu: goto label_802EE93C;
    case 0x802EE940u: goto label_802EE940;
    case 0x802EE944u: goto label_802EE944;
    case 0x802EE948u: goto label_802EE948;
    case 0x802EE94Cu: goto label_802EE94C;
    case 0x802EE950u: goto label_802EE950;
    case 0x802EE954u: goto label_802EE954;
    case 0x802EE958u: goto label_802EE958;
    case 0x802EE95Cu: goto label_802EE95C;
    case 0x802EE960u: goto label_802EE960;
    case 0x802EE964u: goto label_802EE964;
    case 0x802EE968u: goto label_802EE968;
    case 0x802EE96Cu: goto label_802EE96C;
    case 0x802EE970u: goto label_802EE970;
    case 0x802EE974u: goto label_802EE974;
    case 0x802EE978u: goto label_802EE978;
    case 0x802EE97Cu: goto label_802EE97C;
    case 0x802EE980u: goto label_802EE980;
    case 0x802EE984u: goto label_802EE984;
    case 0x802EE988u: goto label_802EE988;
    case 0x802EE98Cu: goto label_802EE98C;
    case 0x802EE990u: goto label_802EE990;
    case 0x802EE994u: goto label_802EE994;
    case 0x802EE998u: goto label_802EE998;
    case 0x802EE99Cu: goto label_802EE99C;
    case 0x802EE9A0u: goto label_802EE9A0;
    case 0x802EE9A4u: goto label_802EE9A4;
    case 0x802EE9A8u: goto label_802EE9A8;
    case 0x802EE9ACu: goto label_802EE9AC;
    case 0x802EE9B0u: goto label_802EE9B0;
    case 0x802EE9B4u: goto label_802EE9B4;
    case 0x802EE9B8u: goto label_802EE9B8;
    case 0x802EE9BCu: goto label_802EE9BC;
    case 0x802EE9C0u: goto label_802EE9C0;
    case 0x802EE9C4u: goto label_802EE9C4;
    case 0x802EE9C8u: goto label_802EE9C8;
    case 0x802EE9CCu: goto label_802EE9CC;
    case 0x802EE9D0u: goto label_802EE9D0;
    case 0x802EE9D4u: goto label_802EE9D4;
    case 0x802EE9D8u: goto label_802EE9D8;
    case 0x802EE9DCu: goto label_802EE9DC;
    case 0x802EE9E0u: goto label_802EE9E0;
    case 0x802EE9E4u: goto label_802EE9E4;
    case 0x802EE9E8u: goto label_802EE9E8;
    case 0x802EE9ECu: goto label_802EE9EC;
    case 0x802EE9F0u: goto label_802EE9F0;
    case 0x802EE9F4u: goto label_802EE9F4;
    case 0x802EE9F8u: goto label_802EE9F8;
    case 0x802EE9FCu: goto label_802EE9FC;
    case 0x802EEA00u: goto label_802EEA00;
    case 0x802EEA04u: goto label_802EEA04;
    case 0x802EEA08u: goto label_802EEA08;
    case 0x802EEA0Cu: goto label_802EEA0C;
    case 0x802EEA10u: goto label_802EEA10;
    case 0x802EEA14u: goto label_802EEA14;
    case 0x802EEA18u: goto label_802EEA18;
    case 0x802EEA1Cu: goto label_802EEA1C;
    case 0x802EEA20u: goto label_802EEA20;
    case 0x802EEA24u: goto label_802EEA24;
    case 0x802EEA28u: goto label_802EEA28;
    case 0x802EEA2Cu: goto label_802EEA2C;
    case 0x802EEA30u: goto label_802EEA30;
    case 0x802EEA34u: goto label_802EEA34;
    case 0x802EEA38u: goto label_802EEA38;
    case 0x802EEA3Cu: goto label_802EEA3C;
    case 0x802EEA40u: goto label_802EEA40;
    case 0x802EEA44u: goto label_802EEA44;
    case 0x802EEA48u: goto label_802EEA48;
    case 0x802EEA4Cu: goto label_802EEA4C;
    case 0x802EEA50u: goto label_802EEA50;
    case 0x802EEA54u: goto label_802EEA54;
    case 0x802EEA58u: goto label_802EEA58;
    case 0x802EEA5Cu: goto label_802EEA5C;
    case 0x802EEA60u: goto label_802EEA60;
    case 0x802EEA64u: goto label_802EEA64;
    case 0x802EEA68u: goto label_802EEA68;
    case 0x802EEA6Cu: goto label_802EEA6C;
    case 0x802EEA70u: goto label_802EEA70;
    case 0x802EEA74u: goto label_802EEA74;
    case 0x802EEA78u: goto label_802EEA78;
    case 0x802EEA7Cu: goto label_802EEA7C;
    case 0x802EEA80u: goto label_802EEA80;
    case 0x802EEA84u: goto label_802EEA84;
    case 0x802EEA88u: goto label_802EEA88;
    case 0x802EEA8Cu: goto label_802EEA8C;
    case 0x802EEA90u: goto label_802EEA90;
    case 0x802EEA94u: goto label_802EEA94;
    case 0x802EEA98u: goto label_802EEA98;
    case 0x802EEA9Cu: goto label_802EEA9C;
    case 0x802EEAA0u: goto label_802EEAA0;
    case 0x802EEAA4u: goto label_802EEAA4;
    case 0x802EEAA8u: goto label_802EEAA8;
    case 0x802EEAACu: goto label_802EEAAC;
    case 0x802EEAB0u: goto label_802EEAB0;
    case 0x802EEAB4u: goto label_802EEAB4;
    case 0x802EEAB8u: goto label_802EEAB8;
    case 0x802EEABCu: goto label_802EEABC;
    case 0x802EEAC0u: goto label_802EEAC0;
    case 0x802EEAC4u: goto label_802EEAC4;
    case 0x802EEAC8u: goto label_802EEAC8;
    case 0x802EEACCu: goto label_802EEACC;
    case 0x802EEAD0u: goto label_802EEAD0;
    case 0x802EEAD4u: goto label_802EEAD4;
    case 0x802EEAD8u: goto label_802EEAD8;
    case 0x802EEADCu: goto label_802EEADC;
    case 0x802EEAE0u: goto label_802EEAE0;
    case 0x802EEAE4u: goto label_802EEAE4;
    case 0x802EEAE8u: goto label_802EEAE8;
    case 0x802EEAECu: goto label_802EEAEC;
    case 0x802EEAF0u: goto label_802EEAF0;
    case 0x802EEAF4u: goto label_802EEAF4;
    case 0x802EEAF8u: goto label_802EEAF8;
    case 0x802EEAFCu: goto label_802EEAFC;
    case 0x802EEB00u: goto label_802EEB00;
    case 0x802EEB04u: goto label_802EEB04;
    case 0x802EEB08u: goto label_802EEB08;
    case 0x802EEB0Cu: goto label_802EEB0C;
    case 0x802EEB10u: goto label_802EEB10;
    case 0x802EEB14u: goto label_802EEB14;
    case 0x802EEB18u: goto label_802EEB18;
    case 0x802EEB1Cu: goto label_802EEB1C;
    case 0x802EEB20u: goto label_802EEB20;
    case 0x802EEB24u: goto label_802EEB24;
    case 0x802EEB28u: goto label_802EEB28;
    case 0x802EEB2Cu: goto label_802EEB2C;
    case 0x802EEB30u: goto label_802EEB30;
    case 0x802EEB34u: goto label_802EEB34;
    case 0x802EEB38u: goto label_802EEB38;
    case 0x802EEB3Cu: goto label_802EEB3C;
    case 0x802EEB40u: goto label_802EEB40;
    case 0x802EEB44u: goto label_802EEB44;
    case 0x802EEB48u: goto label_802EEB48;
    case 0x802EEB4Cu: goto label_802EEB4C;
    case 0x802EEB50u: goto label_802EEB50;
    case 0x802EEB54u: goto label_802EEB54;
    case 0x802EEB58u: goto label_802EEB58;
    case 0x802EEB5Cu: goto label_802EEB5C;
    case 0x802EEB60u: goto label_802EEB60;
    case 0x802EEB64u: goto label_802EEB64;
    case 0x802EEB68u: goto label_802EEB68;
    case 0x802EEB6Cu: goto label_802EEB6C;
    case 0x802EEB70u: goto label_802EEB70;
    case 0x802EEB74u: goto label_802EEB74;
    case 0x802EEB78u: goto label_802EEB78;
    case 0x802EEB7Cu: goto label_802EEB7C;
    case 0x802EEB80u: goto label_802EEB80;
    case 0x802EEB84u: goto label_802EEB84;
    case 0x802EEB88u: goto label_802EEB88;
    case 0x802EEB8Cu: goto label_802EEB8C;
    case 0x802EEB90u: goto label_802EEB90;
    case 0x802EEB94u: goto label_802EEB94;
    case 0x802EEB98u: goto label_802EEB98;
    case 0x802EEB9Cu: goto label_802EEB9C;
    case 0x802EEBA0u: goto label_802EEBA0;
    case 0x802EEBA4u: goto label_802EEBA4;
    case 0x802EEBA8u: goto label_802EEBA8;
    case 0x802EEBACu: goto label_802EEBAC;
    case 0x802EEBB0u: goto label_802EEBB0;
    case 0x802EEBB4u: goto label_802EEBB4;
    case 0x802EEBB8u: goto label_802EEBB8;
    case 0x802EEBBCu: goto label_802EEBBC;
    case 0x802EEBC0u: goto label_802EEBC0;
    case 0x802EEBC4u: goto label_802EEBC4;
    case 0x802EEBC8u: goto label_802EEBC8;
    case 0x802EEBCCu: goto label_802EEBCC;
    case 0x802EEBD0u: goto label_802EEBD0;
    case 0x802EEBD4u: goto label_802EEBD4;
    case 0x802EEBD8u: goto label_802EEBD8;
    case 0x802EEBDCu: goto label_802EEBDC;
    case 0x802EEBE0u: goto label_802EEBE0;
    case 0x802EEBE4u: goto label_802EEBE4;
    case 0x802EEBE8u: goto label_802EEBE8;
    case 0x802EEBECu: goto label_802EEBEC;
    case 0x802EEBF0u: goto label_802EEBF0;
    case 0x802EEBF4u: goto label_802EEBF4;
    case 0x802EEBF8u: goto label_802EEBF8;
    case 0x802EEBFCu: goto label_802EEBFC;
    case 0x802EEC00u: goto label_802EEC00;
    case 0x802EEC04u: goto label_802EEC04;
    case 0x802EEC08u: goto label_802EEC08;
    case 0x802EEC0Cu: goto label_802EEC0C;
    case 0x802EEC10u: goto label_802EEC10;
    case 0x802EEC14u: goto label_802EEC14;
    case 0x802EEC18u: goto label_802EEC18;
    case 0x802EEC1Cu: goto label_802EEC1C;
    case 0x802EEC20u: goto label_802EEC20;
    case 0x802EEC24u: goto label_802EEC24;
    case 0x802EEC28u: goto label_802EEC28;
    case 0x802EEC2Cu: goto label_802EEC2C;
    case 0x802EEC30u: goto label_802EEC30;
    case 0x802EEC34u: goto label_802EEC34;
    case 0x802EEC38u: goto label_802EEC38;
    case 0x802EEC3Cu: goto label_802EEC3C;
    case 0x802EEC40u: goto label_802EEC40;
    case 0x802EEC44u: goto label_802EEC44;
    case 0x802EEC48u: goto label_802EEC48;
    case 0x802EEC4Cu: goto label_802EEC4C;
    case 0x802EEC50u: goto label_802EEC50;
    case 0x802EEC54u: goto label_802EEC54;
    case 0x802EEC58u: goto label_802EEC58;
    case 0x802EEC5Cu: goto label_802EEC5C;
    case 0x802EEC60u: goto label_802EEC60;
    case 0x802EEC64u: goto label_802EEC64;
    case 0x802EEC68u: goto label_802EEC68;
    case 0x802EEC6Cu: goto label_802EEC6C;
    case 0x802EEC70u: goto label_802EEC70;
    case 0x802EEC74u: goto label_802EEC74;
    case 0x802EEC78u: goto label_802EEC78;
    case 0x802EEC7Cu: goto label_802EEC7C;
    case 0x802EEC80u: goto label_802EEC80;
    case 0x802EEC84u: goto label_802EEC84;
    case 0x802EEC88u: goto label_802EEC88;
    case 0x802EEC8Cu: goto label_802EEC8C;
    case 0x802EEC90u: goto label_802EEC90;
    case 0x802EEC94u: goto label_802EEC94;
    case 0x802EEC98u: goto label_802EEC98;
    case 0x802EEC9Cu: goto label_802EEC9C;
    case 0x802EECA0u: goto label_802EECA0;
    case 0x802EECA4u: goto label_802EECA4;
    case 0x802EECA8u: goto label_802EECA8;
    case 0x802EECACu: goto label_802EECAC;
    case 0x802EECB0u: goto label_802EECB0;
    case 0x802EECB4u: goto label_802EECB4;
    case 0x802EECB8u: goto label_802EECB8;
    case 0x802EECBCu: goto label_802EECBC;
    case 0x802EECC0u: goto label_802EECC0;
    case 0x802EECC4u: goto label_802EECC4;
    case 0x802EECC8u: goto label_802EECC8;
    case 0x802EECCCu: goto label_802EECCC;
    case 0x802EECD0u: goto label_802EECD0;
    case 0x802EECD4u: goto label_802EECD4;
    case 0x802EECD8u: goto label_802EECD8;
    case 0x802EECDCu: goto label_802EECDC;
    case 0x802EECE0u: goto label_802EECE0;
    case 0x802EECE4u: goto label_802EECE4;
    case 0x802EECE8u: goto label_802EECE8;
    case 0x802EECECu: goto label_802EECEC;
    case 0x802EECF0u: goto label_802EECF0;
    case 0x802EECF4u: goto label_802EECF4;
    case 0x802EECF8u: goto label_802EECF8;
    case 0x802EECFCu: goto label_802EECFC;
    case 0x802EED00u: goto label_802EED00;
    case 0x802EED04u: goto label_802EED04;
    case 0x802EED08u: goto label_802EED08;
    case 0x802EED0Cu: goto label_802EED0C;
    case 0x802EED10u: goto label_802EED10;
    case 0x802EED14u: goto label_802EED14;
    case 0x802EED18u: goto label_802EED18;
    case 0x802EED1Cu: goto label_802EED1C;
    case 0x802EED20u: goto label_802EED20;
    case 0x802EED24u: goto label_802EED24;
    case 0x802EED28u: goto label_802EED28;
    case 0x802EED2Cu: goto label_802EED2C;
    case 0x802EED30u: goto label_802EED30;
    case 0x802EED34u: goto label_802EED34;
    case 0x802EED38u: goto label_802EED38;
    case 0x802EED3Cu: goto label_802EED3C;
    case 0x802EED40u: goto label_802EED40;
    case 0x802EED44u: goto label_802EED44;
    case 0x802EED48u: goto label_802EED48;
    case 0x802EED4Cu: goto label_802EED4C;
    case 0x802EED50u: goto label_802EED50;
    case 0x802EED54u: goto label_802EED54;
    case 0x802EED58u: goto label_802EED58;
    case 0x802EED5Cu: goto label_802EED5C;
    case 0x802EED60u: goto label_802EED60;
    case 0x802EED64u: goto label_802EED64;
    case 0x802EED68u: goto label_802EED68;
    case 0x802EED6Cu: goto label_802EED6C;
    case 0x802EED70u: goto label_802EED70;
    case 0x802EED74u: goto label_802EED74;
    case 0x802EED78u: goto label_802EED78;
    case 0x802EED7Cu: goto label_802EED7C;
    case 0x802EED80u: goto label_802EED80;
    case 0x802EED84u: goto label_802EED84;
    case 0x802EED88u: goto label_802EED88;
    case 0x802EED8Cu: goto label_802EED8C;
    case 0x802EED90u: goto label_802EED90;
    case 0x802EED94u: goto label_802EED94;
    case 0x802EED98u: goto label_802EED98;
    case 0x802EED9Cu: goto label_802EED9C;
    case 0x802EEDA0u: goto label_802EEDA0;
    case 0x802EEDA4u: goto label_802EEDA4;
    case 0x802EEDA8u: goto label_802EEDA8;
    case 0x802EEDACu: goto label_802EEDAC;
    case 0x802EEDB0u: goto label_802EEDB0;
    case 0x802EEDB4u: goto label_802EEDB4;
    case 0x802EEDB8u: goto label_802EEDB8;
    case 0x802EEDBCu: goto label_802EEDBC;
    case 0x802EEDC0u: goto label_802EEDC0;
    case 0x802EEDC4u: goto label_802EEDC4;
    case 0x802EEDC8u: goto label_802EEDC8;
    case 0x802EEDCCu: goto label_802EEDCC;
    case 0x802EEDD0u: goto label_802EEDD0;
    case 0x802EEDD4u: goto label_802EEDD4;
    case 0x802EEDD8u: goto label_802EEDD8;
    case 0x802EEDDCu: goto label_802EEDDC;
    case 0x802EEDE0u: goto label_802EEDE0;
    case 0x802EEDE4u: goto label_802EEDE4;
    case 0x802EEDE8u: goto label_802EEDE8;
    case 0x802EEDECu: goto label_802EEDEC;
    case 0x802EEDF0u: goto label_802EEDF0;
    case 0x802EEDF4u: goto label_802EEDF4;
    case 0x802EEDF8u: goto label_802EEDF8;
    case 0x802EEDFCu: goto label_802EEDFC;
    case 0x802EEE00u: goto label_802EEE00;
    case 0x802EEE04u: goto label_802EEE04;
    case 0x802EEE08u: goto label_802EEE08;
    case 0x802EEE0Cu: goto label_802EEE0C;
    case 0x802EEE10u: goto label_802EEE10;
    case 0x802EEE14u: goto label_802EEE14;
    case 0x802EEE18u: goto label_802EEE18;
    case 0x802EEE1Cu: goto label_802EEE1C;
    case 0x802EEE20u: goto label_802EEE20;
    case 0x802EEE24u: goto label_802EEE24;
    case 0x802EEE28u: goto label_802EEE28;
    case 0x802EEE2Cu: goto label_802EEE2C;
    case 0x802EEE30u: goto label_802EEE30;
    case 0x802EEE34u: goto label_802EEE34;
    case 0x802EEE38u: goto label_802EEE38;
    case 0x802EEE3Cu: goto label_802EEE3C;
    case 0x802EEE40u: goto label_802EEE40;
    case 0x802EEE44u: goto label_802EEE44;
    case 0x802EEE48u: goto label_802EEE48;
    case 0x802EEE4Cu: goto label_802EEE4C;
    case 0x802EEE50u: goto label_802EEE50;
    case 0x802EEE54u: goto label_802EEE54;
    case 0x802EEE58u: goto label_802EEE58;
    case 0x802EEE5Cu: goto label_802EEE5C;
    case 0x802EEE60u: goto label_802EEE60;
    case 0x802EEE64u: goto label_802EEE64;
    case 0x802EEE68u: goto label_802EEE68;
    case 0x802EEE6Cu: goto label_802EEE6C;
    case 0x802EEE70u: goto label_802EEE70;
    case 0x802EEE74u: goto label_802EEE74;
    case 0x802EEE78u: goto label_802EEE78;
    case 0x802EEE7Cu: goto label_802EEE7C;
    case 0x802EEE80u: goto label_802EEE80;
    case 0x802EEE84u: goto label_802EEE84;
    case 0x802EEE88u: goto label_802EEE88;
    case 0x802EEE8Cu: goto label_802EEE8C;
    case 0x802EEE90u: goto label_802EEE90;
    case 0x802EEE94u: goto label_802EEE94;
    case 0x802EEE98u: goto label_802EEE98;
    case 0x802EEE9Cu: goto label_802EEE9C;
    case 0x802EEEA0u: goto label_802EEEA0;
    case 0x802EEEA4u: goto label_802EEEA4;
    case 0x802EEEA8u: goto label_802EEEA8;
    case 0x802EEEACu: goto label_802EEEAC;
    case 0x802EEEB0u: goto label_802EEEB0;
    case 0x802EEEB4u: goto label_802EEEB4;
    case 0x802EEEB8u: goto label_802EEEB8;
    case 0x802EEEBCu: goto label_802EEEBC;
    case 0x802EEEC0u: goto label_802EEEC0;
    case 0x802EEEC4u: goto label_802EEEC4;
    case 0x802EEEC8u: goto label_802EEEC8;
    case 0x802EEECCu: goto label_802EEECC;
    case 0x802EEED0u: goto label_802EEED0;
    case 0x802EEED4u: goto label_802EEED4;
    case 0x802EEED8u: goto label_802EEED8;
    case 0x802EEEDCu: goto label_802EEEDC;
    case 0x802EEEE0u: goto label_802EEEE0;
    case 0x802EEEE4u: goto label_802EEEE4;
    case 0x802EEEE8u: goto label_802EEEE8;
    case 0x802EEEECu: goto label_802EEEEC;
    case 0x802EEEF0u: goto label_802EEEF0;
    case 0x802EEEF4u: goto label_802EEEF4;
    case 0x802EEEF8u: goto label_802EEEF8;
    case 0x802EEEFCu: goto label_802EEEFC;
    case 0x802EEF00u: goto label_802EEF00;
    case 0x802EEF04u: goto label_802EEF04;
    case 0x802EEF08u: goto label_802EEF08;
    case 0x802EEF0Cu: goto label_802EEF0C;
    case 0x802EEF10u: goto label_802EEF10;
    case 0x802EEF14u: goto label_802EEF14;
    case 0x802EEF18u: goto label_802EEF18;
    case 0x802EEF1Cu: goto label_802EEF1C;
    case 0x802EEF20u: goto label_802EEF20;
    case 0x802EEF24u: goto label_802EEF24;
    case 0x802EEF28u: goto label_802EEF28;
    case 0x802EEF2Cu: goto label_802EEF2C;
    case 0x802EEF30u: goto label_802EEF30;
    case 0x802EEF34u: goto label_802EEF34;
    case 0x802EEF38u: goto label_802EEF38;
    case 0x802EEF3Cu: goto label_802EEF3C;
    case 0x802EEF40u: goto label_802EEF40;
    case 0x802EEF44u: goto label_802EEF44;
    case 0x802EEF48u: goto label_802EEF48;
    case 0x802EEF4Cu: goto label_802EEF4C;
    case 0x802EEF50u: goto label_802EEF50;
    case 0x802EEF54u: goto label_802EEF54;
    case 0x802EEF58u: goto label_802EEF58;
    case 0x802EEF5Cu: goto label_802EEF5C;
    case 0x802EEF60u: goto label_802EEF60;
    case 0x802EEF64u: goto label_802EEF64;
    case 0x802EEF68u: goto label_802EEF68;
    case 0x802EEF6Cu: goto label_802EEF6C;
    case 0x802EEF70u: goto label_802EEF70;
    case 0x802EEF74u: goto label_802EEF74;
    case 0x802EEF78u: goto label_802EEF78;
    case 0x802EEF7Cu: goto label_802EEF7C;
    case 0x802EEF80u: goto label_802EEF80;
    case 0x802EEF84u: goto label_802EEF84;
    case 0x802EEF88u: goto label_802EEF88;
    case 0x802EEF8Cu: goto label_802EEF8C;
    case 0x802EEF90u: goto label_802EEF90;
    case 0x802EEF94u: goto label_802EEF94;
    case 0x802EEF98u: goto label_802EEF98;
    case 0x802EEF9Cu: goto label_802EEF9C;
    case 0x802EEFA0u: goto label_802EEFA0;
    case 0x802EEFA4u: goto label_802EEFA4;
    case 0x802EEFA8u: goto label_802EEFA8;
    case 0x802EEFACu: goto label_802EEFAC;
    case 0x802EEFB0u: goto label_802EEFB0;
    case 0x802EEFB4u: goto label_802EEFB4;
    case 0x802EEFB8u: goto label_802EEFB8;
    case 0x802EEFBCu: goto label_802EEFBC;
    case 0x802EEFC0u: goto label_802EEFC0;
    case 0x802EEFC4u: goto label_802EEFC4;
    case 0x802EEFC8u: goto label_802EEFC8;
    case 0x802EEFCCu: goto label_802EEFCC;
    case 0x802EEFD0u: goto label_802EEFD0;
    case 0x802EEFD4u: goto label_802EEFD4;
    case 0x802EEFD8u: goto label_802EEFD8;
    case 0x802EEFDCu: goto label_802EEFDC;
    case 0x802EEFE0u: goto label_802EEFE0;
    case 0x802EEFE4u: goto label_802EEFE4;
    case 0x802EEFE8u: goto label_802EEFE8;
    case 0x802EEFECu: goto label_802EEFEC;
    case 0x802EEFF0u: goto label_802EEFF0;
    case 0x802EEFF4u: goto label_802EEFF4;
    case 0x802EEFF8u: goto label_802EEFF8;
    case 0x802EEFFCu: goto label_802EEFFC;
    case 0x802EF000u: goto label_802EF000;
    case 0x802EF004u: goto label_802EF004;
    case 0x802EF008u: goto label_802EF008;
    case 0x802EF00Cu: goto label_802EF00C;
    case 0x802EF010u: goto label_802EF010;
    case 0x802EF014u: goto label_802EF014;
    case 0x802EF018u: goto label_802EF018;
    case 0x802EF01Cu: goto label_802EF01C;
    case 0x802EF020u: goto label_802EF020;
    case 0x802EF024u: goto label_802EF024;
    case 0x802EF028u: goto label_802EF028;
    case 0x802EF02Cu: goto label_802EF02C;
    case 0x802EF030u: goto label_802EF030;
    case 0x802EF034u: goto label_802EF034;
    case 0x802EF038u: goto label_802EF038;
    case 0x802EF03Cu: goto label_802EF03C;
    case 0x802EF040u: goto label_802EF040;
    case 0x802EF044u: goto label_802EF044;
    case 0x802EF048u: goto label_802EF048;
    case 0x802EF04Cu: goto label_802EF04C;
    case 0x802EF050u: goto label_802EF050;
    case 0x802EF054u: goto label_802EF054;
    case 0x802EF058u: goto label_802EF058;
    case 0x802EF05Cu: goto label_802EF05C;
    case 0x802EF060u: goto label_802EF060;
    case 0x802EF064u: goto label_802EF064;
    case 0x802EF068u: goto label_802EF068;
    case 0x802EF06Cu: goto label_802EF06C;
    case 0x802EF070u: goto label_802EF070;
    case 0x802EF074u: goto label_802EF074;
    case 0x802EF078u: goto label_802EF078;
    case 0x802EF07Cu: goto label_802EF07C;
    case 0x802EF080u: goto label_802EF080;
    case 0x802EF084u: goto label_802EF084;
    case 0x802EF088u: goto label_802EF088;
    case 0x802EF08Cu: goto label_802EF08C;
    case 0x802EF090u: goto label_802EF090;
    case 0x802EF094u: goto label_802EF094;
    case 0x802EF098u: goto label_802EF098;
    case 0x802EF09Cu: goto label_802EF09C;
    case 0x802EF0A0u: goto label_802EF0A0;
    case 0x802EF0A4u: goto label_802EF0A4;
    case 0x802EF0A8u: goto label_802EF0A8;
    case 0x802EF0ACu: goto label_802EF0AC;
    case 0x802EF0B0u: goto label_802EF0B0;
    case 0x802EF0B4u: goto label_802EF0B4;
    case 0x802EF0B8u: goto label_802EF0B8;
    case 0x802EF0BCu: goto label_802EF0BC;
    case 0x802EF0C0u: goto label_802EF0C0;
    case 0x802EF0C4u: goto label_802EF0C4;
    case 0x802EF0C8u: goto label_802EF0C8;
    case 0x802EF0CCu: goto label_802EF0CC;
    case 0x802EF0D0u: goto label_802EF0D0;
    case 0x802EF0D4u: goto label_802EF0D4;
    case 0x802EF0D8u: goto label_802EF0D8;
    case 0x802EF0DCu: goto label_802EF0DC;
    case 0x802EF0E0u: goto label_802EF0E0;
    case 0x802EF0E4u: goto label_802EF0E4;
    case 0x802EF0E8u: goto label_802EF0E8;
    case 0x802EF0ECu: goto label_802EF0EC;
    case 0x802EF0F0u: goto label_802EF0F0;
    case 0x802EF0F4u: goto label_802EF0F4;
    case 0x802EF0F8u: goto label_802EF0F8;
    case 0x802EF0FCu: goto label_802EF0FC;
    case 0x802EF100u: goto label_802EF100;
    case 0x802EF104u: goto label_802EF104;
    case 0x802EF108u: goto label_802EF108;
    case 0x802EF10Cu: goto label_802EF10C;
    case 0x802EF110u: goto label_802EF110;
    case 0x802EF114u: goto label_802EF114;
    case 0x802EF118u: goto label_802EF118;
    case 0x802EF11Cu: goto label_802EF11C;
    case 0x802EF120u: goto label_802EF120;
    case 0x802EF124u: goto label_802EF124;
    case 0x802EF128u: goto label_802EF128;
    case 0x802EF12Cu: goto label_802EF12C;
    case 0x802EF130u: goto label_802EF130;
    case 0x802EF134u: goto label_802EF134;
    case 0x802EF138u: goto label_802EF138;
    case 0x802EF13Cu: goto label_802EF13C;
    case 0x802EF140u: goto label_802EF140;
    case 0x802EF144u: goto label_802EF144;
    case 0x802EF148u: goto label_802EF148;
    case 0x802EF14Cu: goto label_802EF14C;
    case 0x802EF150u: goto label_802EF150;
    case 0x802EF154u: goto label_802EF154;
    case 0x802EF158u: goto label_802EF158;
    case 0x802EF15Cu: goto label_802EF15C;
    case 0x802EF160u: goto label_802EF160;
    case 0x802EF164u: goto label_802EF164;
    case 0x802EF168u: goto label_802EF168;
    case 0x802EF16Cu: goto label_802EF16C;
    case 0x802EF170u: goto label_802EF170;
    case 0x802EF174u: goto label_802EF174;
    case 0x802EF178u: goto label_802EF178;
    case 0x802EF17Cu: goto label_802EF17C;
    case 0x802EF180u: goto label_802EF180;
    case 0x802EF184u: goto label_802EF184;
    case 0x802EF188u: goto label_802EF188;
    case 0x802EF18Cu: goto label_802EF18C;
    case 0x802EF190u: goto label_802EF190;
    case 0x802EF194u: goto label_802EF194;
    case 0x802EF198u: goto label_802EF198;
    case 0x802EF19Cu: goto label_802EF19C;
    case 0x802EF1A0u: goto label_802EF1A0;
    case 0x802EF1A4u: goto label_802EF1A4;
    case 0x802EF1A8u: goto label_802EF1A8;
    case 0x802EF1ACu: goto label_802EF1AC;
    case 0x802EF1B0u: goto label_802EF1B0;
    case 0x802EF1B4u: goto label_802EF1B4;
    case 0x802EF1B8u: goto label_802EF1B8;
    case 0x802EF1BCu: goto label_802EF1BC;
    default: return;
    }
label_802EB1C0:
    ctx->pc = 0x802EB1C0u;
    ctx->downcount -= 5;
    // 802EB1C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB1C4:
    ctx->pc = 0x802EB1C4u;
    // 802EB1C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB1C8:
    ctx->pc = 0x802EB1C8u;
    // 802EB1C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB1CC:
    ctx->pc = 0x802EB1CCu;
    // 802EB1CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB1D0:
    ctx->pc = 0x802EB1D0u;
    ctx->downcount -= 20;
    // 802EB1D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB1D4:
    ctx->pc = 0x802EB1D4u;
    // 802EB1D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB1D8:
    ctx->pc = 0x802EB1D8u;
    // 802EB1D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB1DC:
    ctx->pc = 0x802EB1DCu;
    // 802EB1DC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB1E0:
    ctx->pc = 0x802EB1E0u;
    // 802EB1E0: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EB1E4:
    ctx->pc = 0x802EB1E4u;
    // 802EB1E4: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB1E8:
    ctx->pc = 0x802EB1E8u;
    // 802EB1E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB1EC:
    ctx->pc = 0x802EB1ECu;
    // 802EB1EC: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EB1F0:
    ctx->pc = 0x802EB1F0u;
    // 802EB1F0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB1F4:
    ctx->pc = 0x802EB1F4u;
    // 802EB1F4: bl      0x803456D0
    {
            ctx->lr = 0x802EB1F8u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802EB1F8:
    ctx->pc = 0x802EB1F8u;
    ctx->downcount -= 34;
    // 802EB1F8: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802EB1FC:
    ctx->pc = 0x802EB1FCu;
    // 802EB1FC: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB200:
    ctx->pc = 0x802EB200u;
    // 802EB200: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB204:
    ctx->pc = 0x802EB204u;
    // 802EB204: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB208:
    ctx->pc = 0x802EB208u;
    // 802EB208: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB20C:
    ctx->pc = 0x802EB20Cu;
    // 802EB20C: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB210:
    ctx->pc = 0x802EB210u;
    // 802EB210: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB214:
    ctx->pc = 0x802EB214u;
    // 802EB214: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB218:
    ctx->pc = 0x802EB218u;
    // 802EB218: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB21C:
    ctx->pc = 0x802EB21Cu;
    // 802EB21C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB220:
    ctx->pc = 0x802EB220u;
    // 802EB220: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB224:
    ctx->pc = 0x802EB224u;
    // 802EB224: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB228:
    ctx->pc = 0x802EB228u;
    // 802EB228: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EB22C:
    ctx->pc = 0x802EB22Cu;
    // 802EB22C: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802EB230:
    ctx->pc = 0x802EB230u;
    // 802EB230: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB234:
    ctx->pc = 0x802EB234u;
    // 802EB234: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB238:
    ctx->pc = 0x802EB238u;
    // 802EB238: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB23C:
    ctx->pc = 0x802EB23Cu;
    // 802EB23C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB240:
    ctx->pc = 0x802EB240u;
    // 802EB240: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB244:
    ctx->pc = 0x802EB244u;
    // 802EB244: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EB248:
    ctx->pc = 0x802EB248u;
    // 802EB248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB24C:
    ctx->pc = 0x802EB24Cu;
    ctx->downcount -= 2;
    // 802EB24C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EB250:
    ctx->pc = 0x802EB250u;
    // 802EB250: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB254:
    ctx->pc = 0x802EB254u;
    ctx->downcount -= 2;
    // 802EB254: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EB258:
    ctx->pc = 0x802EB258u;
    // 802EB258: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB25C:
    ctx->pc = 0x802EB25Cu;
    ctx->downcount -= 10;
    // 802EB25C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB260:
    ctx->pc = 0x802EB260u;
    // 802EB260: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB264:
    ctx->pc = 0x802EB264u;
    // 802EB264: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB268:
    ctx->pc = 0x802EB268u;
    // 802EB268: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EB26C:
    ctx->pc = 0x802EB26Cu;
    // 802EB26C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB270:
    ctx->pc = 0x802EB270u;
    // 802EB270: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EB274:
    ctx->pc = 0x802EB274u;
    // 802EB274: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EB278:
    ctx->pc = 0x802EB278u;
    // 802EB278: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EB27C:
    ctx->pc = 0x802EB27Cu;
    // 802EB27C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EB280u;
            ctx->pc = target;
            return;
        }
    }

label_802EB280:
    ctx->pc = 0x802EB280u;
    ctx->downcount -= 2;
    // 802EB280: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802EB284:
    ctx->pc = 0x802EB284u;
    // 802EB284: bl      0x802EB5B8
    {
            ctx->lr = 0x802EB288u;
            goto label_802EB5B8;
    }

label_802EB288:
    ctx->pc = 0x802EB288u;
    ctx->downcount -= 6;
    // 802EB288: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EB28C:
    ctx->pc = 0x802EB28Cu;
    // 802EB28C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB290:
    ctx->pc = 0x802EB290u;
    // 802EB290: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EB294:
    ctx->pc = 0x802EB294u;
    // 802EB294: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EB298:
    ctx->pc = 0x802EB298u;
    // 802EB298: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EB29Cu;
            ctx->pc = target;
            return;
        }
    }

label_802EB29C:
    ctx->pc = 0x802EB29Cu;
    ctx->downcount -= 6;
    // 802EB29C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB2A0:
    ctx->pc = 0x802EB2A0u;
    // 802EB2A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB2A4:
    ctx->pc = 0x802EB2A4u;
    // 802EB2A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB2A8:
    ctx->pc = 0x802EB2A8u;
    // 802EB2A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB2AC:
    ctx->pc = 0x802EB2ACu;
    // 802EB2AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB2B0:
    ctx->pc = 0x802EB2B0u;
    ctx->downcount -= 21;
    // 802EB2B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB2B4:
    ctx->pc = 0x802EB2B4u;
    // 802EB2B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB2B8:
    ctx->pc = 0x802EB2B8u;
    // 802EB2B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB2BC:
    ctx->pc = 0x802EB2BCu;
    // 802EB2BC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB2C0:
    ctx->pc = 0x802EB2C0u;
    // 802EB2C0: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802EB2C4:
    ctx->pc = 0x802EB2C4u;
    // 802EB2C4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EB2C8:
    ctx->pc = 0x802EB2C8u;
    // 802EB2C8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB2CC:
    ctx->pc = 0x802EB2CCu;
    // 802EB2CC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB2D0:
    ctx->pc = 0x802EB2D0u;
    // 802EB2D0: addi    r30, r30, 14216
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(14216);

label_802EB2D4:
    ctx->pc = 0x802EB2D4u;
    // 802EB2D4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB2D8:
    ctx->pc = 0x802EB2D8u;
    // 802EB2D8: bl      0x802A6748
    {
            ctx->lr = 0x802EB2DCu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802EB2DC:
    ctx->pc = 0x802EB2DCu;
    ctx->downcount -= 7;
    // 802EB2DC: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EB2E0:
    ctx->pc = 0x802EB2E0u;
    // 802EB2E0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB2E4:
    ctx->pc = 0x802EB2E4u;
    // 802EB2E4: addi    r4, r4, 14616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(14616);

label_802EB2E8:
    ctx->pc = 0x802EB2E8u;
    // 802EB2E8: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB2EC:
    ctx->pc = 0x802EB2ECu;
    // 802EB2EC: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802EB2F0:
    ctx->pc = 0x802EB2F0u;
    // 802EB2F0: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB2F4:
    ctx->pc = 0x802EB2F4u;
    // 802EB2F4: bl      0x801ED17C
    {
            ctx->lr = 0x802EB2F8u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802EB2F8:
    ctx->pc = 0x802EB2F8u;
    ctx->downcount -= 6;
    // 802EB2F8: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB2FC:
    ctx->pc = 0x802EB2FCu;
    // 802EB2FC: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB300:
    ctx->pc = 0x802EB300u;
    // 802EB300: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB304:
    ctx->pc = 0x802EB304u;
    // 802EB304: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EB308:
    ctx->pc = 0x802EB308u;
    // 802EB308: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB30C:
    ctx->pc = 0x802EB30Cu;
    // 802EB30C: bl      0x802EB43C
    {
            ctx->lr = 0x802EB310u;
            goto label_802EB43C;
    }

label_802EB310:
    ctx->pc = 0x802EB310u;
    ctx->downcount -= 3;
    // 802EB310: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB314:
    ctx->pc = 0x802EB314u;
    // 802EB314: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EB318:
    ctx->pc = 0x802EB318u;
    // 802EB318: bl      0x802A5D48
    {
            ctx->lr = 0x802EB31Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EB31C:
    ctx->pc = 0x802EB31Cu;
    ctx->downcount -= 6;
    // 802EB31C: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB320:
    ctx->pc = 0x802EB320u;
    // 802EB320: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EB324:
    ctx->pc = 0x802EB324u;
    // 802EB324: addi    r4, r30, 244
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(244);

label_802EB328:
    ctx->pc = 0x802EB328u;
    // 802EB328: addi    r5, r30, 256
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(256);

label_802EB32C:
    ctx->pc = 0x802EB32Cu;
    // 802EB32C: addi    r6, r30, 268
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(268);

label_802EB330:
    ctx->pc = 0x802EB330u;
    // 802EB330: bl      0x802EB55C
    {
            ctx->lr = 0x802EB334u;
            goto label_802EB55C;
    }

label_802EB334:
    ctx->pc = 0x802EB334u;
    ctx->downcount -= 2;
    // 802EB334: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB338:
    ctx->pc = 0x802EB338u;
    // 802EB338: bl      0x802A609C
    {
            ctx->lr = 0x802EB33Cu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802EB33C:
    ctx->pc = 0x802EB33Cu;
    ctx->downcount -= 10;
    // 802EB33C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802EB340:
    ctx->pc = 0x802EB340u;
    // 802EB340: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EB344:
    ctx->pc = 0x802EB344u;
    // 802EB344: addi    r3, r3, 14496
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14496);

label_802EB348:
    ctx->pc = 0x802EB348u;
    // 802EB348: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB34C:
    ctx->pc = 0x802EB34Cu;
    // 802EB34C: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_802EB350:
    ctx->pc = 0x802EB350u;
    // 802EB350: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB354:
    ctx->pc = 0x802EB354u;
    // 802EB354: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB358:
    ctx->pc = 0x802EB358u;
    // 802EB358: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EB35C:
    ctx->pc = 0x802EB35Cu;
    // 802EB35C: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB360:
    ctx->pc = 0x802EB360u;
    // 802EB360: bl      0x802A5D48
    {
            ctx->lr = 0x802EB364u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EB364:
    ctx->pc = 0x802EB364u;
    ctx->downcount -= 6;
    // 802EB364: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_802EB368:
    ctx->pc = 0x802EB368u;
    // 802EB368: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB36C:
    ctx->pc = 0x802EB36Cu;
    // 802EB36C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EB370:
    ctx->pc = 0x802EB370u;
    // 802EB370: addi    r5, r30, 208
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(208);

label_802EB374:
    ctx->pc = 0x802EB374u;
    // 802EB374: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EB378:
    ctx->pc = 0x802EB378u;
    // 802EB378: bl      0x802EB1D0
    {
            ctx->lr = 0x802EB37Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB1D0u;
                return;
            }
            goto label_802EB1D0;
    }

label_802EB37C:
    ctx->pc = 0x802EB37Cu;
    ctx->downcount -= 3;
    // 802EB37C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB380:
    ctx->pc = 0x802EB380u;
    // 802EB380: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EB384:
    ctx->pc = 0x802EB384u;
    // 802EB384: bl      0x802A5D48
    {
            ctx->lr = 0x802EB388u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EB388:
    ctx->pc = 0x802EB388u;
    ctx->downcount -= 5;
    // 802EB388: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB38C:
    ctx->pc = 0x802EB38Cu;
    // 802EB38C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EB390:
    ctx->pc = 0x802EB390u;
    // 802EB390: addi    r4, r30, 220
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(220);

label_802EB394:
    ctx->pc = 0x802EB394u;
    // 802EB394: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EB398:
    ctx->pc = 0x802EB398u;
    // 802EB398: bl      0x802EB1D0
    {
            ctx->lr = 0x802EB39Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB1D0u;
                return;
            }
            goto label_802EB1D0;
    }

label_802EB39C:
    ctx->pc = 0x802EB39Cu;
    ctx->downcount -= 3;
    // 802EB39C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB3A0:
    ctx->pc = 0x802EB3A0u;
    // 802EB3A0: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EB3A4:
    ctx->pc = 0x802EB3A4u;
    // 802EB3A4: bl      0x802A5D48
    {
            ctx->lr = 0x802EB3A8u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EB3A8:
    ctx->pc = 0x802EB3A8u;
    ctx->downcount -= 5;
    // 802EB3A8: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB3AC:
    ctx->pc = 0x802EB3ACu;
    // 802EB3AC: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EB3B0:
    ctx->pc = 0x802EB3B0u;
    // 802EB3B0: addi    r4, r30, 232
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(232);

label_802EB3B4:
    ctx->pc = 0x802EB3B4u;
    // 802EB3B4: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EB3B8:
    ctx->pc = 0x802EB3B8u;
    // 802EB3B8: bl      0x802EB1D0
    {
            ctx->lr = 0x802EB3BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB1D0u;
                return;
            }
            goto label_802EB1D0;
    }

label_802EB3BC:
    ctx->pc = 0x802EB3BCu;
    ctx->downcount -= 17;
    // 802EB3BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EB3C0:
    ctx->pc = 0x802EB3C0u;
    // 802EB3C0: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB3C4:
    ctx->pc = 0x802EB3C4u;
    // 802EB3C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB3C8:
    ctx->pc = 0x802EB3C8u;
    // 802EB3C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB3CC:
    ctx->pc = 0x802EB3CCu;
    // 802EB3CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EB3D0:
    ctx->pc = 0x802EB3D0u;
    // 802EB3D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB3D4:
    ctx->pc = 0x802EB3D4u;
    ctx->downcount -= 18;
    // 802EB3D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB3D8:
    ctx->pc = 0x802EB3D8u;
    // 802EB3D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB3DC:
    // 802EB3DC: cmpwi   r3, 0
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

label_802EB3E0:
    ctx->pc = 0x802EB3E0u;
    // 802EB3E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB3E4:
    ctx->pc = 0x802EB3E4u;
    // 802EB3E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB3E8:
    // 802EB3E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB3EC:
    // 802EB3EC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB3F0:
    // 802EB3F0: bc    12, 2, 0x802EB424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB424;
        }
    }

label_802EB3F4:
    ctx->downcount -= 1;
    // 802EB3F4: bc    12, 2, 0x802EB414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB414;
        }
    }

label_802EB3F8:
    ctx->downcount -= 1;
    // 802EB3F8: bc    12, 2, 0x802EB414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB414;
        }
    }

label_802EB3FC:
    ctx->downcount -= 3;
    // 802EB3FC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802EB400:
    // 802EB400: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EB404:
    // 802EB404: bl      0x802EB190
    {
            ctx->lr = 0x802EB408u;
            ctx->pc = 0x802EB190u;
            return;
    }

label_802EB408:
    ctx->downcount -= 3;
    // 802EB408: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EB40C:
    // 802EB40C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EB410:
    // 802EB410: bl      0x801ED118
    {
            ctx->lr = 0x802EB414u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802EB414:
    ctx->downcount -= 2;
    // 802EB414: cmpwi   r31, 0
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

label_802EB418:
    // 802EB418: bc    4, 1, 0x802EB424
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB424;
        }
    }

label_802EB41C:
    ctx->downcount -= 2;
    // 802EB41C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EB420:
    // 802EB420: bl      0x801C1C90
    {
            ctx->lr = 0x802EB424u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EB424:
    ctx->downcount -= 17;
    // 802EB424: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EB428:
    ctx->pc = 0x802EB428u;
    // 802EB428: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB42C:
    ctx->pc = 0x802EB42Cu;
    // 802EB42C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB430:
    ctx->pc = 0x802EB430u;
    // 802EB430: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB434:
    // 802EB434: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB438:
    ctx->pc = 0x802EB438u;
    // 802EB438: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB43C:
    ctx->pc = 0x802EB43Cu;
    ctx->downcount -= 17;
    // 802EB43C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB440:
    ctx->pc = 0x802EB440u;
    // 802EB440: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB444:
    ctx->pc = 0x802EB444u;
    // 802EB444: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB448:
    ctx->pc = 0x802EB448u;
    // 802EB448: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB44C:
    // 802EB44C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB450:
    // 802EB450: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB454:
    // 802EB454: bl      0x803457F4
    {
            ctx->lr = 0x802EB458u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802EB458:
    ctx->pc = 0x802EB458u;
    ctx->downcount -= 11;
    // 802EB458: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB45C:
    // 802EB45C: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802EB460:
    // 802EB460: addi    r3, r3, 14736
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(14736);

label_802EB464:
    ctx->pc = 0x802EB464u;
    // 802EB464: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB468:
    // 802EB468: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB46C:
    ctx->pc = 0x802EB46Cu;
    // 802EB46C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB470:
    ctx->pc = 0x802EB470u;
    // 802EB470: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802EB474:
    // 802EB474: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EB478:
    // 802EB478: bl      0x801C1C80
    {
            ctx->lr = 0x802EB47Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EB47C:
    ctx->pc = 0x802EB47Cu;
    ctx->downcount -= 8;
    // 802EB47C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB480:
    // 802EB480: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EB484:
    ctx->pc = 0x802EB484u;
    // 802EB484: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB488:
    // 802EB488: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB48C:
    ctx->pc = 0x802EB48Cu;
    // 802EB48C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB490:
    // 802EB490: bl      0x801C1C80
    {
            ctx->lr = 0x802EB494u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EB494:
    ctx->pc = 0x802EB494u;
    ctx->downcount -= 8;
    // 802EB494: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB498:
    // 802EB498: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EB49C:
    ctx->pc = 0x802EB49Cu;
    // 802EB49C: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB4A0:
    // 802EB4A0: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB4A4:
    ctx->pc = 0x802EB4A4u;
    // 802EB4A4: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB4A8:
    // 802EB4A8: bl      0x801C1C80
    {
            ctx->lr = 0x802EB4ACu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EB4AC:
    ctx->downcount -= 6;
    // 802EB4AC: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802EB4B0:
    ctx->pc = 0x802EB4B0u;
    // 802EB4B0: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB4B4:
    // 802EB4B4: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802EB4B8:
    // 802EB4B8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EB4BC:
    // 802EB4BC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EB4C0:
    // 802EB4C0: b       0x802EB52C
    {
            goto label_802EB52C;
    }

label_802EB4C4:
    loop_802EB4C4(ctx);
    if (ctx->pc == 0x802EB538u) goto label_802EB538;
    return;
label_802EB4C8:
    // 802EB4C8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802EB4CC:
    ctx->pc = 0x802EB4CCu;
    // 802EB4CC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB4D0:
    // 802EB4D0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB4D4:
    ctx->pc = 0x802EB4D4u;
    // 802EB4D4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB4D8:
    ctx->pc = 0x802EB4D8u;
    // 802EB4D8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB4DC:
    ctx->pc = 0x802EB4DCu;
    // 802EB4DC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB4E0:
    ctx->pc = 0x802EB4E0u;
    // 802EB4E0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB4E4:
    ctx->pc = 0x802EB4E4u;
    // 802EB4E4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB4E8:
    ctx->pc = 0x802EB4E8u;
    // 802EB4E8: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB4EC:
    ctx->pc = 0x802EB4ECu;
    // 802EB4EC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB4F0:
    // 802EB4F0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB4F4:
    ctx->pc = 0x802EB4F4u;
    // 802EB4F4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB4F8:
    ctx->pc = 0x802EB4F8u;
    // 802EB4F8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB4FC:
    ctx->pc = 0x802EB4FCu;
    // 802EB4FC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB500:
    ctx->pc = 0x802EB500u;
    // 802EB500: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB504:
    ctx->pc = 0x802EB504u;
    // 802EB504: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB508:
    ctx->pc = 0x802EB508u;
    // 802EB508: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB50C:
    ctx->pc = 0x802EB50Cu;
    // 802EB50C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB510:
    // 802EB510: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB514:
    ctx->pc = 0x802EB514u;
    // 802EB514: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB518:
    ctx->pc = 0x802EB518u;
    // 802EB518: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB51C:
    // 802EB51C: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802EB520:
    ctx->pc = 0x802EB520u;
    // 802EB520: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB524:
    ctx->pc = 0x802EB524u;
    // 802EB524: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB528:
    ctx->pc = 0x802EB528u;
    // 802EB528: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB52C:
    ctx->pc = 0x802EB52Cu;
    ctx->downcount -= 3;
    // 802EB52C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB530:
    // 802EB530: cmpw    r7, r0
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

label_802EB534:
    // 802EB534: bc    12, 0, 0x802EB4C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB4C4u;
                return;
            }
            goto label_802EB4C4;
        }
    }

label_802EB538:
    ctx->downcount -= 3;
    // 802EB538: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB53C:
    // 802EB53C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EB540:
    // 802EB540: bl      0x803457CC
    {
            ctx->lr = 0x802EB544u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802EB544:
    ctx->downcount -= 17;
    // 802EB544: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB548:
    ctx->pc = 0x802EB548u;
    // 802EB548: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB54C:
    ctx->pc = 0x802EB54Cu;
    // 802EB54C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB550:
    ctx->pc = 0x802EB550u;
    // 802EB550: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB554:
    // 802EB554: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB558:
    ctx->pc = 0x802EB558u;
    // 802EB558: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB55C:
    ctx->pc = 0x802EB55Cu;
    ctx->downcount -= 19;
    // 802EB55C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB560:
    ctx->pc = 0x802EB560u;
    // 802EB560: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB564:
    ctx->pc = 0x802EB564u;
    // 802EB564: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB568:
    ctx->pc = 0x802EB568u;
    // 802EB568: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB56C:
    // 802EB56C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802EB570:
    // 802EB570: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EB574:
    // 802EB574: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB578:
    // 802EB578: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB57C:
    // 802EB57C: bl      0x802EB1D0
    {
            ctx->lr = 0x802EB580u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB1D0u;
                return;
            }
            goto label_802EB1D0;
    }

label_802EB580:
    ctx->downcount -= 27;
    // 802EB580: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802EB584:
    ctx->pc = 0x802EB584u;
    // 802EB584: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EB588:
    ctx->pc = 0x802EB588u;
    // 802EB588: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB58C:
    ctx->pc = 0x802EB58Cu;
    // 802EB58C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB590:
    // 802EB590: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB594:
    ctx->pc = 0x802EB594u;
    // 802EB594: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB598:
    ctx->pc = 0x802EB598u;
    // 802EB598: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EB59C:
    ctx->pc = 0x802EB59Cu;
    // 802EB59C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EB5A0:
    ctx->pc = 0x802EB5A0u;
    // 802EB5A0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB5A4:
    ctx->pc = 0x802EB5A4u;
    // 802EB5A4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB5A8:
    ctx->pc = 0x802EB5A8u;
    // 802EB5A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB5AC:
    ctx->pc = 0x802EB5ACu;
    // 802EB5AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB5B0:
    // 802EB5B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EB5B4:
    ctx->pc = 0x802EB5B4u;
    // 802EB5B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB5B8:
    ctx->pc = 0x802EB5B8u;
    ctx->downcount -= 8;
    // 802EB5B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB5BC:
    ctx->pc = 0x802EB5BCu;
    // 802EB5BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB5C0:
    ctx->pc = 0x802EB5C0u;
    // 802EB5C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB5C4:
    ctx->pc = 0x802EB5C4u;
    // 802EB5C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EB5C8:
    // 802EB5C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB5CC:
    ctx->pc = 0x802EB5CCu;
    // 802EB5CC: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EB5D0:
    // 802EB5D0: cmpwi   r0, 0
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

label_802EB5D4:
    // 802EB5D4: bc    12, 2, 0x802EB5F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB5F8;
        }
    }

label_802EB5D8:
    ctx->pc = 0x802EB5D8u;
    ctx->downcount -= 3;
    // 802EB5D8: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EB5DC:
    // 802EB5DC: cmpwi   r0, 0
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

label_802EB5E0:
    // 802EB5E0: bc    12, 2, 0x802EB5E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB5E8;
        }
    }

label_802EB5E4:
    ctx->downcount -= 1;
    // 802EB5E4: bl      0x802EB6DC
    {
            ctx->lr = 0x802EB5E8u;
            goto label_802EB6DC;
    }

label_802EB5E8:
    ctx->downcount -= 2;
    // 802EB5E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB5EC:
    // 802EB5EC: bl      0x803456D4
    {
            ctx->lr = 0x802EB5F0u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802EB5F0:
    ctx->downcount -= 2;
    // 802EB5F0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB5F4:
    // 802EB5F4: bl      0x802EB61C
    {
            ctx->lr = 0x802EB5F8u;
            goto label_802EB61C;
    }

label_802EB5F8:
    ctx->downcount -= 2;
    // 802EB5F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB5FC:
    // 802EB5FC: bl      0x802EB67C
    {
            ctx->lr = 0x802EB600u;
            goto label_802EB67C;
    }

label_802EB600:
    ctx->downcount -= 2;
    // 802EB600: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EB604:
    // 802EB604: bl      0x803456F8
    {
            ctx->lr = 0x802EB608u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802EB608:
    ctx->pc = 0x802EB608u;
    ctx->downcount -= 6;
    // 802EB608: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB60C:
    ctx->pc = 0x802EB60Cu;
    // 802EB60C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB610:
    ctx->pc = 0x802EB610u;
    // 802EB610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB614:
    // 802EB614: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB618:
    ctx->pc = 0x802EB618u;
    // 802EB618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB61C:
    ctx->pc = 0x802EB61Cu;
    ctx->downcount -= 12;
    // 802EB61C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB620:
    ctx->pc = 0x802EB620u;
    // 802EB620: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB624:
    ctx->pc = 0x802EB624u;
    // 802EB624: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB628:
    ctx->pc = 0x802EB628u;
    // 802EB628: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EB62C:
    // 802EB62C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB630:
    ctx->pc = 0x802EB630u;
    // 802EB630: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB634:
    ctx->pc = 0x802EB634u;
    // 802EB634: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB638:
    // 802EB638: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB63C:
    // 802EB63C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EB640:
    // 802EB640: bl      0x800076B4
    {
            ctx->lr = 0x802EB644u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EB644:
    ctx->downcount -= 2;
    // 802EB644: cmpwi   r3, 0
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

label_802EB648:
    // 802EB648: bc    12, 2, 0x802EB668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB668;
        }
    }

label_802EB64C:
    ctx->pc = 0x802EB64Cu;
    ctx->downcount -= 8;
    // 802EB64C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB650:
    ctx->pc = 0x802EB650u;
    // 802EB650: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB654:
    // 802EB654: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB658:
    ctx->pc = 0x802EB658u;
    // 802EB658: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB65C:
    // 802EB65C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EB660:
    // 802EB660: bl      0x800076E4
    {
            ctx->lr = 0x802EB664u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EB664:
    ctx->downcount -= 1;
    // 802EB664: nop
    // nop

label_802EB668:
    ctx->pc = 0x802EB668u;
    ctx->downcount -= 6;
    // 802EB668: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB66C:
    ctx->pc = 0x802EB66Cu;
    // 802EB66C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB670:
    ctx->pc = 0x802EB670u;
    // 802EB670: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB674:
    // 802EB674: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB678:
    ctx->pc = 0x802EB678u;
    // 802EB678: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB67C:
    ctx->pc = 0x802EB67Cu;
    ctx->downcount -= 12;
    // 802EB67C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB680:
    ctx->pc = 0x802EB680u;
    // 802EB680: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB684:
    ctx->pc = 0x802EB684u;
    // 802EB684: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB688:
    ctx->pc = 0x802EB688u;
    // 802EB688: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EB68C:
    // 802EB68C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB690:
    ctx->pc = 0x802EB690u;
    // 802EB690: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB694:
    ctx->pc = 0x802EB694u;
    // 802EB694: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB698:
    // 802EB698: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB69C:
    // 802EB69C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EB6A0:
    // 802EB6A0: bl      0x800076B4
    {
            ctx->lr = 0x802EB6A4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EB6A4:
    ctx->downcount -= 2;
    // 802EB6A4: cmpwi   r3, 0
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

label_802EB6A8:
    // 802EB6A8: bc    12, 2, 0x802EB6C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB6C8;
        }
    }

label_802EB6AC:
    ctx->pc = 0x802EB6ACu;
    ctx->downcount -= 8;
    // 802EB6AC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB6B0:
    ctx->pc = 0x802EB6B0u;
    // 802EB6B0: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB6B4:
    // 802EB6B4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB6B8:
    ctx->pc = 0x802EB6B8u;
    // 802EB6B8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB6BC:
    // 802EB6BC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EB6C0:
    // 802EB6C0: bl      0x800076E4
    {
            ctx->lr = 0x802EB6C4u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EB6C4:
    ctx->downcount -= 1;
    // 802EB6C4: nop
    // nop

label_802EB6C8:
    ctx->pc = 0x802EB6C8u;
    ctx->downcount -= 6;
    // 802EB6C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB6CC:
    ctx->pc = 0x802EB6CCu;
    // 802EB6CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB6D0:
    ctx->pc = 0x802EB6D0u;
    // 802EB6D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB6D4:
    // 802EB6D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB6D8:
    ctx->pc = 0x802EB6D8u;
    // 802EB6D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB6DC:
    ctx->pc = 0x802EB6DCu;
    ctx->downcount -= 12;
    // 802EB6DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB6E0:
    ctx->pc = 0x802EB6E0u;
    // 802EB6E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB6E4:
    ctx->pc = 0x802EB6E4u;
    // 802EB6E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB6E8:
    ctx->pc = 0x802EB6E8u;
    // 802EB6E8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EB6EC:
    // 802EB6EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB6F0:
    ctx->pc = 0x802EB6F0u;
    // 802EB6F0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB6F4:
    ctx->pc = 0x802EB6F4u;
    // 802EB6F4: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB6F8:
    // 802EB6F8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB6FC:
    // 802EB6FC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EB700:
    // 802EB700: bl      0x800076B4
    {
            ctx->lr = 0x802EB704u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EB704:
    ctx->downcount -= 2;
    // 802EB704: cmpwi   r3, 0
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

label_802EB708:
    // 802EB708: bc    12, 2, 0x802EB728
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB728;
        }
    }

label_802EB70C:
    ctx->pc = 0x802EB70Cu;
    ctx->downcount -= 8;
    // 802EB70C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB710:
    ctx->pc = 0x802EB710u;
    // 802EB710: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB714:
    // 802EB714: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EB718:
    ctx->pc = 0x802EB718u;
    // 802EB718: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB71C:
    // 802EB71C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EB720:
    // 802EB720: bl      0x800076E4
    {
            ctx->lr = 0x802EB724u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EB724:
    ctx->downcount -= 1;
    // 802EB724: nop
    // nop

label_802EB728:
    ctx->pc = 0x802EB728u;
    ctx->downcount -= 6;
    // 802EB728: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB72C:
    ctx->pc = 0x802EB72Cu;
    // 802EB72C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB730:
    ctx->pc = 0x802EB730u;
    // 802EB730: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB734:
    // 802EB734: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EB738:
    ctx->pc = 0x802EB738u;
    // 802EB738: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB73C:
    ctx->downcount -= 2;
    // 802EB73C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EB740:
    // 802EB740: b       0x802EB128
    {
            ctx->pc = 0x802EB128u;
            return;
    }

label_802EB744:
    ctx->downcount -= 2;
    // 802EB744: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EB748:
    // 802EB748: b       0x802EB0C4
    {
            ctx->pc = 0x802EB0C4u;
            return;
    }

label_802EB74C:
    ctx->downcount -= 2;
    // 802EB74C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EB750:
    // 802EB750: b       0x802EB3D4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB3D4u;
                return;
            }
            goto label_802EB3D4;
    }

label_802EB754:
    ctx->pc = 0x802EB754u;
    ctx->downcount -= 23;
    // 802EB754: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB758:
    ctx->pc = 0x802EB758u;
    // 802EB758: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB75C:
    ctx->pc = 0x802EB75Cu;
    // 802EB75C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802EB760:
    ctx->pc = 0x802EB760u;
    // 802EB760: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB764:
    ctx->pc = 0x802EB764u;
    // 802EB764: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802EB768:
    ctx->pc = 0x802EB768u;
    // 802EB768: stmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EB76C:
    ctx->pc = 0x802EB76Cu;
    // 802EB76C: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB770:
    ctx->pc = 0x802EB770u;
    // 802EB770: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB774:
    ctx->pc = 0x802EB774u;
    // 802EB774: lwz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EB778:
    ctx->pc = 0x802EB778u;
    // 802EB778: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EB77C:
    ctx->pc = 0x802EB77Cu;
    // 802EB77C: xoris   r5, r31, 0x8000
    ctx->gpr[5] = ctx->gpr[31] ^ (0x8000u << 16);

label_802EB780:
    ctx->pc = 0x802EB780u;
    // 802EB780: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802EB784:
    ctx->downcount -= 3;
    // 802EB784: cmpw    r8, r31
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB788:
    // 802EB788: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_802EB78C:
    // 802EB78C: bc    4, 0, 0x802EB794
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB794;
        }
    }

label_802EB790:
    ctx->downcount -= 1;
    // 802EB790: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EB794:
    ctx->downcount -= 9;
    // 802EB794: add   r7, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802EB798:
    // 802EB798: subf   r0, r31, r8
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802EB79C:
    ctx->pc = 0x802EB79Cu;
    // 802EB79C: stw     r6, 288(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EB7A0:
    // 802EB7A0: addc   r0, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EB7A4:
    // 802EB7A4: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EB7A8:
    // 802EB7A8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802EB7AC:
    ctx->pc = 0x802EB7ACu;
    // 802EB7AC: stw     r0, 304(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB7B0:
    // 802EB7B0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802EB7B4:
    // 802EB7B4: bc    16, 0, 0x802EB784
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB784u;
                return;
            }
            goto label_802EB784;
        }
    }

label_802EB7B8:
    ctx->pc = 0x802EB7B8u;
    ctx->downcount -= 2;
    // 802EB7B8: cmpwi   r31, 1
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB7BC:
    ctx->pc = 0x802EB7BCu;
    // 802EB7BC: bc    12, 2, 0x802EB8F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB8F0;
        }
    }

label_802EB7C0:
    ctx->pc = 0x802EB7C0u;
    ctx->downcount -= 3;
    // 802EB7C0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802EB7C4:
    ctx->pc = 0x802EB7C4u;
    // 802EB7C4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802EB7C8:
    ctx->pc = 0x802EB7C8u;
    // 802EB7C8: b       0x802EB868
    {
            goto label_802EB868;
    }

label_802EB7CC:
    ctx->downcount -= 5;
    // 802EB7CC: add   r30, r26, r24
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_802EB7D0:
    // 802EB7D0: add   r29, r25, r24
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_802EB7D4:
    // 802EB7D4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802EB7D8:
    // 802EB7D8: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_802EB7DC:
    // 802EB7DC: b       0x802EB858
    {
            goto label_802EB858;
    }

label_802EB7E0:
    ctx->downcount -= 2;
    // 802EB7E0: cmpw    r28, r27
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB7E4:
    // 802EB7E4: bc    12, 2, 0x802EB850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB850;
        }
    }

label_802EB7E8:
    ctx->pc = 0x802EB7E8u;
    ctx->downcount -= 2;
    // 802EB7E8: lwz     r3, 4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB7EC:
    // 802EB7EC: bl      0x80292418
    {
            ctx->lr = 0x802EB7F0u;
            ctx->pc = 0x80292418u;
            return;
    }

label_802EB7F0:
    ctx->downcount -= 2;
    // 802EB7F0: cmpwi   r3, 0
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

label_802EB7F4:
    // 802EB7F4: bc    4, 2, 0x802EB81C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB81C;
        }
    }

label_802EB7F8:
    ctx->downcount -= 9;
    // 802EB7F8: add   r3, r26, r23
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EB7FC:
    ctx->pc = 0x802EB7FCu;
    // 802EB7FC: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB800:
    ctx->pc = 0x802EB800u;
    // 802EB800: lwz     r4, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB804:
    // 802EB804: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_802EB808:
    // 802EB808: srawi r3, r0, 1
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

label_802EB80C:
    // 802EB80C: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_802EB810:
    // 802EB810: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802EB814:
    // 802EB814: rlwinm r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802EB818:
    // 802EB818: b       0x802EB83C
    {
            goto label_802EB83C;
    }

label_802EB81C:
    ctx->downcount -= 8;
    // 802EB81C: add   r3, r26, r23
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EB820:
    ctx->pc = 0x802EB820u;
    // 802EB820: lwz     r4, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EB824:
    ctx->pc = 0x802EB824u;
    // 802EB824: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB828:
    // 802EB828: xor   r0, r4, r0
    {
        ctx->gpr[0] = ctx->gpr[4] ^ ctx->gpr[0];
    }

label_802EB82C:
    // 802EB82C: srawi r3, r0, 1
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

label_802EB830:
    // 802EB830: and   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
    }

label_802EB834:
    // 802EB834: subf   r0, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802EB838:
    // 802EB838: rlwinm r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802EB83C:
    ctx->downcount -= 2;
    // 802EB83C: cmpwi   r0, 0
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

label_802EB840:
    // 802EB840: bc    12, 2, 0x802EB850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB850;
        }
    }

label_802EB844:
    ctx->pc = 0x802EB844u;
    ctx->downcount -= 3;
    // 802EB844: lwz     r3, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EB848:
    // 802EB848: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_802EB84C:
    ctx->pc = 0x802EB84Cu;
    // 802EB84C: stw     r0, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB850:
    ctx->downcount -= 2;
    // 802EB850: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802EB854:
    // 802EB854: addi    r23, r23, 4
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(4);

label_802EB858:
    ctx->downcount -= 2;
    // 802EB858: cmpw    r27, r31
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB85C:
    // 802EB85C: bc    12, 0, 0x802EB7E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB7E0u;
                return;
            }
            goto label_802EB7E0;
        }
    }

label_802EB860:
    ctx->downcount -= 2;
    // 802EB860: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802EB864:
    // 802EB864: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_802EB868:
    ctx->downcount -= 2;
    // 802EB868: cmpw    r28, r31
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB86C:
    // 802EB86C: bc    12, 0, 0x802EB7CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB7CCu;
                return;
            }
            goto label_802EB7CC;
        }
    }

label_802EB870:
    ctx->pc = 0x802EB870u;
    ctx->downcount -= 3;
    // 802EB870: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802EB874:
    ctx->pc = 0x802EB874u;
    // 802EB874: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EB878:
    ctx->pc = 0x802EB878u;
    // 802EB878: b       0x802EB8E8
    {
            goto label_802EB8E8;
    }

label_802EB87C:
    ctx->downcount -= 7;
    // 802EB87C: add   r6, r25, r3
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802EB880:
    // 802EB880: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802EB884:
    // 802EB884: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EB888:
    ctx->pc = 0x802EB888u;
    // 802EB888: mtctr    r31
    ctx->ctr = ctx->gpr[31];

label_802EB88C:
    // 802EB88C: cmpwi   r31, 0
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

label_802EB890:
    // 802EB890: bc    4, 1, 0x802EB8E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB8E0;
        }
    }

label_802EB894:
    ctx->downcount -= 2;
    // 802EB894: cmpw    cr1, r8, r9
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 24)) | (cr_bits << 24);
    }

label_802EB898:
    // 802EB898: bc    12, 6, 0x802EB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EB8D4;
        }
    }

label_802EB89C:
    ctx->downcount -= 5;
    // 802EB89C: add   r5, r25, r4
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EB8A0:
    ctx->pc = 0x802EB8A0u;
    // 802EB8A0: lwz     r7, 288(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(288);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EB8A4:
    ctx->pc = 0x802EB8A4u;
    // 802EB8A4: lwz     r0, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB8A8:
    // 802EB8A8: cmpw    r7, r0
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

label_802EB8AC:
    // 802EB8AC: bc    4, 1, 0x802EB8C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB8C0;
        }
    }

label_802EB8B0:
    ctx->pc = 0x802EB8B0u;
    ctx->downcount -= 4;
    // 802EB8B0: lwz     r5, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EB8B4:
    // 802EB8B4: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_802EB8B8:
    ctx->pc = 0x802EB8B8u;
    // 802EB8B8: stw     r0, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB8BC:
    // 802EB8BC: b       0x802EB8D4
    {
            goto label_802EB8D4;
    }

label_802EB8C0:
    ctx->downcount -= 1;
    // 802EB8C0: bc    4, 2, 0x802EB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB8D4;
        }
    }

label_802EB8C4:
    ctx->downcount -= 1;
    // 802EB8C4: bc    4, 5, 0x802EB8D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x04000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EB8D4;
        }
    }

label_802EB8C8:
    ctx->pc = 0x802EB8C8u;
    ctx->downcount -= 3;
    // 802EB8C8: lwz     r5, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EB8CC:
    // 802EB8CC: addi    r0, r5, 1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(1);

label_802EB8D0:
    ctx->pc = 0x802EB8D0u;
    // 802EB8D0: stw     r0, 304(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(304);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB8D4:
    ctx->downcount -= 3;
    // 802EB8D4: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_802EB8D8:
    // 802EB8D8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802EB8DC:
    // 802EB8DC: bc    16, 0, 0x802EB894
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB894u;
                return;
            }
            goto label_802EB894;
        }
    }

label_802EB8E0:
    ctx->downcount -= 2;
    // 802EB8E0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802EB8E4:
    // 802EB8E4: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802EB8E8:
    ctx->downcount -= 2;
    // 802EB8E8: cmpw    r8, r31
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB8EC:
    // 802EB8EC: bc    12, 0, 0x802EB87C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB87Cu;
                return;
            }
            goto label_802EB87C;
        }
    }

label_802EB8F0:
    ctx->pc = 0x802EB8F0u;
    ctx->downcount -= 16;
    // 802EB8F0: lmw     r23, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EB8F4:
    ctx->pc = 0x802EB8F4u;
    // 802EB8F4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB8F8:
    ctx->pc = 0x802EB8F8u;
    // 802EB8F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EB8FC:
    ctx->pc = 0x802EB8FCu;
    // 802EB8FC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802EB900:
    ctx->pc = 0x802EB900u;
    // 802EB900: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EB904:
    ctx->pc = 0x802EB904u;
    ctx->downcount -= 5;
    // 802EB904: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EB908:
    ctx->pc = 0x802EB908u;
    // 802EB908: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EB90C:
    ctx->pc = 0x802EB90Cu;
    // 802EB90C: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EB910:
    ctx->pc = 0x802EB910u;
    // 802EB910: addi    r11, r1, 192
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(192);

label_802EB914:
    ctx->pc = 0x802EB914u;
    // 802EB914: bl      0x80007840
    {
            ctx->lr = 0x802EB918u;
            ctx->pc = 0x80007840u;
            return;
    }

label_802EB918:
    ctx->pc = 0x802EB918u;
    ctx->downcount -= 4;
    // 802EB918: lwz     r26, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_802EB91C:
    ctx->pc = 0x802EB91Cu;
    // 802EB91C: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EB920:
    ctx->pc = 0x802EB920u;
    // 802EB920: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EB924:
    ctx->pc = 0x802EB924u;
    // 802EB924: bl      0x802EB754
    {
            ctx->lr = 0x802EB928u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB754u;
                return;
            }
            goto label_802EB754;
    }

label_802EB928:
    ctx->pc = 0x802EB928u;
    ctx->downcount -= 6;
    // 802EB928: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_802EB92C:
    ctx->pc = 0x802EB92Cu;
    // 802EB92C: xori    r30, r26, 0x0001
    ctx->gpr[30] = ctx->gpr[26] ^ 0x0001u;

label_802EB930:
    ctx->pc = 0x802EB930u;
    // 802EB930: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_802EB934:
    ctx->pc = 0x802EB934u;
    // 802EB934: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_802EB938:
    ctx->pc = 0x802EB938u;
    // 802EB938: addi    r29, r28, 11120
    ctx->gpr[29] = ctx->gpr[28] + (u32)(s32)(11120);

label_802EB93C:
    ctx->pc = 0x802EB93Cu;
    // 802EB93C: and   r31, r30, r26
    {
        ctx->gpr[31] = ctx->gpr[30] & ctx->gpr[26];
    }

label_802EB940:
    ctx->downcount -= 11;
    // 802EB940: xor   r0, r26, r25
    {
        ctx->gpr[0] = ctx->gpr[26] ^ ctx->gpr[25];
    }

label_802EB944:
    // 802EB944: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EB948:
    // 802EB948: srawi r4, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[4] = value;
        } else if (sh > 31) {
            ctx->gpr[4] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[4] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_802EB94C:
    // 802EB94C: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EB950:
    // 802EB950: and   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[26];
    }

label_802EB954:
    // 802EB954: addi    r5, r28, 11120
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(11120);

label_802EB958:
    // 802EB958: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802EB95C:
    // 802EB95C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EB960:
    // 802EB960: rlwinm r21, r0, 1, 31, 31
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802EB964:
    // 802EB964: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EB968:
    // 802EB968: bl      0x8000D074
    {
            ctx->lr = 0x802EB96Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EB96C:
    ctx->downcount -= 3;
    // 802EB96C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EB970:
    // 802EB970: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EB974:
    // 802EB974: bl      0x8026F970
    {
            ctx->lr = 0x802EB978u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EB978:
    ctx->pc = 0x802EB978u;
    ctx->downcount -= 10;
    // 802EB978: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EB97C:
    // 802EB97C: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EB980:
    // 802EB980: addi    r5, r29, 14
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(14);

label_802EB984:
    // 802EB984: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EB988:
    // 802EB988: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EB98C:
    // 802EB98C: or   r0, r0, r21
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[21];
    }

label_802EB990:
    ctx->pc = 0x802EB990u;
    // 802EB990: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EB994:
    // 802EB994: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EB998:
    // 802EB998: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EB99C:
    // 802EB99C: bl      0x8000D074
    {
            ctx->lr = 0x802EB9A0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EB9A0:
    ctx->downcount -= 3;
    // 802EB9A0: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EB9A4:
    // 802EB9A4: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EB9A8:
    // 802EB9A8: bl      0x8026F970
    {
            ctx->lr = 0x802EB9ACu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EB9AC:
    ctx->downcount -= 8;
    // 802EB9AC: srawi r0, r30, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[30];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[0] = value;
        } else if (sh > 31) {
            ctx->gpr[0] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[0] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_802EB9B0:
    ctx->pc = 0x802EB9B0u;
    // 802EB9B0: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802EB9B4:
    // 802EB9B4: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802EB9B8:
    // 802EB9B8: cmpwi   r21, 0
    {
        s32 val_a = (s32)(ctx->gpr[21]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EB9BC:
    // 802EB9BC: rlwinm r0, r0, 1, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802EB9C0:
    // 802EB9C0: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802EB9C4:
    ctx->pc = 0x802EB9C4u;
    // 802EB9C4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EB9C8:
    // 802EB9C8: bc    12, 2, 0x802EBCD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EBCD0;
        }
    }

label_802EB9CC:
    ctx->downcount -= 4;
    // 802EB9CC: add   r27, r23, r22
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_802EB9D0:
    ctx->pc = 0x802EB9D0u;
    // 802EB9D0: lwz     r0, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EB9D4:
    // 802EB9D4: cmpwi   r0, 0
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

label_802EB9D8:
    // 802EB9D8: bc    12, 0, 0x802EBB30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EBB30;
        }
    }

label_802EB9DC:
    ctx->pc = 0x802EB9DCu;
    ctx->downcount -= 7;
    // 802EB9DC: lwz     r7, 304(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(304);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EB9E0:
    // 802EB9E0: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802EB9E4:
    // 802EB9E4: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802EB9E8:
    // 802EB9E8: addi    r5, r29, 26
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(26);

label_802EB9EC:
    // 802EB9EC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EB9F0:
    // 802EB9F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EB9F4:
    // 802EB9F4: bl      0x8000D074
    {
            ctx->lr = 0x802EB9F8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EB9F8:
    ctx->downcount -= 3;
    // 802EB9F8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EB9FC:
    // 802EB9FC: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_802EBA00:
    // 802EBA00: bl      0x8026F970
    {
            ctx->lr = 0x802EBA04u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBA04:
    ctx->pc = 0x802EBA04u;
    ctx->downcount -= 12;
    // 802EBA04: lwz     r4, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EBA08:
    // 802EBA08: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EBA0C:
    ctx->pc = 0x802EBA0Cu;
    // 802EBA0C: lwz     r7, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EBA10:
    // 802EBA10: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBA14:
    ctx->pc = 0x802EBA14u;
    // 802EBA14: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBA18:
    // 802EBA18: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBA1C:
    ctx->pc = 0x802EBA1Cu;
    // 802EBA1C: stw     r4, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EBA20:
    // 802EBA20: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBA24:
    ctx->pc = 0x802EBA24u;
    // 802EBA24: stw     r7, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802EBA28:
    ctx->pc = 0x802EBA28u;
    // 802EBA28: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBA2C:
    // 802EBA2C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBA30:
    // 802EBA30: bl      0x8000D074
    {
            ctx->lr = 0x802EBA34u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBA34:
    ctx->downcount -= 3;
    // 802EBA34: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBA38:
    // 802EBA38: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBA3C:
    // 802EBA3C: bl      0x8026F970
    {
            ctx->lr = 0x802EBA40u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBA40:
    ctx->pc = 0x802EBA40u;
    ctx->downcount -= 12;
    // 802EBA40: lfs     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBA40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBA44:
    // 802EBA44: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBA48:
    ctx->pc = 0x802EBA48u;
    // 802EBA48: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBA48u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBA4C:
    // 802EBA4C: addi    r5, r29, 37
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(37);

label_802EBA50:
    ctx->pc = 0x802EBA50u;
    // 802EBA50: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBA50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBA54:
    // 802EBA54: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBA58:
    ctx->pc = 0x802EBA58u;
    // 802EBA58: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBA58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBA5C:
    ctx->pc = 0x802EBA5Cu;
    // 802EBA5C: lfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBA5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBA60:
    ctx->pc = 0x802EBA60u;
    // 802EBA60: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBA60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBA64:
    // 802EBA64: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBA68:
    // 802EBA68: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBA6C:
    // 802EBA6C: bl      0x8000D074
    {
            ctx->lr = 0x802EBA70u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBA70:
    ctx->pc = 0x802EBA70u;
    ctx->downcount -= 7;
    // 802EBA70: lwz     r5, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EBA74:
    // 802EBA74: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBA78:
    // 802EBA78: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBA7C:
    // 802EBA7C: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_802EBA80:
    // 802EBA80: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802EBA84:
    // 802EBA84: rlwinm r21, r0, 27, 5, 31
    {
        ctx->gpr[21] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802EBA88:
    // 802EBA88: bl      0x8026F970
    {
            ctx->lr = 0x802EBA8Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBA8C:
    ctx->pc = 0x802EBA8Cu;
    ctx->downcount -= 9;
    // 802EBA8C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBA90:
    // 802EBA90: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBA94:
    // 802EBA94: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_802EBA98:
    // 802EBA98: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EBA9C:
    // 802EBA9C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBAA0:
    // 802EBAA0: or   r0, r0, r21
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[21];
    }

label_802EBAA4:
    ctx->pc = 0x802EBAA4u;
    // 802EBAA4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBAA8:
    ctx->pc = 0x802EBAA8u;
    // 802EBAA8: lwz     r3, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EBAAC:
    // 802EBAAC: bl      0x8034E00C
    {
            ctx->lr = 0x802EBAB0u;
            ctx->pc = 0x8034E00Cu;
            return;
    }

label_802EBAB0:
    ctx->downcount -= 6;
    // 802EBAB0: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBAB4:
    // 802EBAB4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBAB8:
    // 802EBAB8: addi    r5, r29, 50
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(50);

label_802EBABC:
    // 802EBABC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBAC0:
    // 802EBAC0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBAC4:
    // 802EBAC4: bl      0x8000D074
    {
            ctx->lr = 0x802EBAC8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBAC8:
    ctx->downcount -= 3;
    // 802EBAC8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBACC:
    // 802EBACC: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBAD0:
    // 802EBAD0: bl      0x8026F968
    {
            ctx->lr = 0x802EBAD4u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EBAD4:
    ctx->downcount -= 7;
    // 802EBAD4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBAD8:
    // 802EBAD8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBADC:
    // 802EBADC: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBAE0:
    // 802EBAE0: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802EBAE4:
    // 802EBAE4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EBAE8:
    // 802EBAE8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBAEC:
    // 802EBAEC: bl      0x8026F8C0
    {
            ctx->lr = 0x802EBAF0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802EBAF0:
    ctx->downcount -= 6;
    // 802EBAF0: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBAF4:
    // 802EBAF4: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBAF8:
    // 802EBAF8: addi    r5, r29, 62
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(62);

label_802EBAFC:
    // 802EBAFC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBB00:
    // 802EBB00: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBB04:
    // 802EBB04: bl      0x8000D074
    {
            ctx->lr = 0x802EBB08u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBB08:
    ctx->downcount -= 3;
    // 802EBB08: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBB0C:
    // 802EBB0C: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBB10:
    // 802EBB10: bl      0x8026F968
    {
            ctx->lr = 0x802EBB14u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EBB14:
    ctx->downcount -= 7;
    // 802EBB14: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBB18:
    // 802EBB18: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBB1C:
    // 802EBB1C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBB20:
    // 802EBB20: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802EBB24:
    // 802EBB24: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EBB28:
    // 802EBB28: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBB2C:
    // 802EBB2C: bl      0x8026F8C0
    {
            ctx->lr = 0x802EBB30u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802EBB30:
    ctx->downcount -= 6;
    // 802EBB30: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBB34:
    // 802EBB34: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBB38:
    // 802EBB38: addi    r5, r29, 75
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(75);

label_802EBB3C:
    // 802EBB3C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBB40:
    // 802EBB40: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBB44:
    // 802EBB44: bl      0x8000D074
    {
            ctx->lr = 0x802EBB48u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBB48:
    ctx->downcount -= 5;
    // 802EBB48: add   r4, r24, r25
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EBB4C:
    // 802EBB4C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBB50:
    ctx->pc = 0x802EBB50u;
    // 802EBB50: lbz     r21, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[21] = mem_read8(ctx, ea);
    }

label_802EBB54:
    // 802EBB54: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBB58:
    // 802EBB58: bl      0x8026F970
    {
            ctx->lr = 0x802EBB5Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBB5C:
    ctx->pc = 0x802EBB5Cu;
    ctx->downcount -= 6;
    // 802EBB5C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBB60:
    // 802EBB60: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBB64:
    // 802EBB64: or   r0, r0, r21
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[21];
    }

label_802EBB68:
    ctx->pc = 0x802EBB68u;
    // 802EBB68: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBB6C:
    ctx->pc = 0x802EBB6Cu;
    // 802EBB6C: lwz     r3, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EBB70:
    // 802EBB70: bl      0x803507B8
    {
            ctx->lr = 0x802EBB74u;
            ctx->pc = 0x803507B8u;
            return;
    }

label_802EBB74:
    ctx->downcount -= 2;
    // 802EBB74: cmpwi   r3, 0
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

label_802EBB78:
    // 802EBB78: bc    12, 2, 0x802EBC28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EBC28;
        }
    }

label_802EBB7C:
    ctx->downcount -= 6;
    // 802EBB7C: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBB80:
    // 802EBB80: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBB84:
    // 802EBB84: addi    r5, r29, 90
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(90);

label_802EBB88:
    // 802EBB88: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBB8C:
    // 802EBB8C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBB90:
    // 802EBB90: bl      0x8000D074
    {
            ctx->lr = 0x802EBB94u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBB94:
    ctx->downcount -= 3;
    // 802EBB94: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBB98:
    // 802EBB98: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBB9C:
    // 802EBB9C: bl      0x8026F968
    {
            ctx->lr = 0x802EBBA0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EBBA0:
    ctx->downcount -= 8;
    // 802EBBA0: add   r6, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802EBBA4:
    // 802EBBA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBBA8:
    ctx->pc = 0x802EBBA8u;
    // 802EBBA8: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EBBAC:
    // 802EBBAC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBBB0:
    ctx->pc = 0x802EBBB0u;
    // 802EBBB0: lwz     r5, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EBBB4:
    // 802EBBB4: li      r6, 51
    ctx->gpr[6] = (u32)(s32)(51);

label_802EBBB8:
    // 802EBBB8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802EBBBC:
    // 802EBBBC: bl      0x8026F7F4
    {
            ctx->lr = 0x802EBBC0u;
            ctx->pc = 0x8026F7F4u;
            return;
    }

label_802EBBC0:
    ctx->downcount -= 6;
    // 802EBBC0: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBBC4:
    // 802EBBC4: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBBC8:
    // 802EBBC8: addi    r5, r29, 107
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(107);

label_802EBBCC:
    // 802EBBCC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBBD0:
    // 802EBBD0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBBD4:
    // 802EBBD4: bl      0x8000D074
    {
            ctx->lr = 0x802EBBD8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBBD8:
    ctx->downcount -= 3;
    // 802EBBD8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBBDC:
    // 802EBBDC: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBBE0:
    // 802EBBE0: bl      0x8026F970
    {
            ctx->lr = 0x802EBBE4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBBE4:
    ctx->pc = 0x802EBBE4u;
    ctx->downcount -= 9;
    // 802EBBE4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBBE8:
    // 802EBBE8: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBBEC:
    // 802EBBEC: addi    r5, r29, 125
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(125);

label_802EBBF0:
    // 802EBBF0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBBF4:
    // 802EBBF4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBBF8:
    ctx->pc = 0x802EBBF8u;
    // 802EBBF8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBBFC:
    // 802EBBFC: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBC00:
    // 802EBC00: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBC04:
    // 802EBC04: bl      0x8000D074
    {
            ctx->lr = 0x802EBC08u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBC08:
    ctx->downcount -= 3;
    // 802EBC08: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBC0C:
    // 802EBC0C: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBC10:
    // 802EBC10: bl      0x8026F970
    {
            ctx->lr = 0x802EBC14u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBC14:
    ctx->pc = 0x802EBC14u;
    ctx->downcount -= 5;
    // 802EBC14: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBC18:
    // 802EBC18: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBC1C:
    // 802EBC1C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802EBC20:
    ctx->pc = 0x802EBC20u;
    // 802EBC20: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBC24:
    // 802EBC24: b       0x802EBCD0
    {
            goto label_802EBCD0;
    }

label_802EBC28:
    ctx->downcount -= 6;
    // 802EBC28: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBC2C:
    // 802EBC2C: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBC30:
    // 802EBC30: addi    r5, r29, 142
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(142);

label_802EBC34:
    // 802EBC34: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBC38:
    // 802EBC38: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBC3C:
    // 802EBC3C: bl      0x8000D074
    {
            ctx->lr = 0x802EBC40u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBC40:
    ctx->downcount -= 3;
    // 802EBC40: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBC44:
    // 802EBC44: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EBC48:
    // 802EBC48: bl      0x8026F968
    {
            ctx->lr = 0x802EBC4Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EBC4C:
    ctx->downcount -= 8;
    // 802EBC4C: add   r6, r24, r22
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[22];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802EBC50:
    // 802EBC50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBC54:
    ctx->pc = 0x802EBC54u;
    // 802EBC54: lwz     r7, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EBC58:
    // 802EBC58: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBC5C:
    ctx->pc = 0x802EBC5Cu;
    // 802EBC5C: lwz     r5, 4(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EBC60:
    // 802EBC60: li      r6, 52
    ctx->gpr[6] = (u32)(s32)(52);

label_802EBC64:
    // 802EBC64: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802EBC68:
    // 802EBC68: bl      0x8026F7F4
    {
            ctx->lr = 0x802EBC6Cu;
            ctx->pc = 0x8026F7F4u;
            return;
    }

label_802EBC6C:
    ctx->downcount -= 6;
    // 802EBC6C: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBC70:
    // 802EBC70: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBC74:
    // 802EBC74: addi    r5, r29, 107
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(107);

label_802EBC78:
    // 802EBC78: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBC7C:
    // 802EBC7C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBC80:
    // 802EBC80: bl      0x8000D074
    {
            ctx->lr = 0x802EBC84u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBC84:
    ctx->downcount -= 3;
    // 802EBC84: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBC88:
    // 802EBC88: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBC8C:
    // 802EBC8C: bl      0x8026F970
    {
            ctx->lr = 0x802EBC90u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBC90:
    ctx->pc = 0x802EBC90u;
    ctx->downcount -= 10;
    // 802EBC90: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBC94:
    // 802EBC94: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802EBC98:
    // 802EBC98: addi    r5, r29, 125
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(125);

label_802EBC9C:
    // 802EBC9C: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBCA0:
    // 802EBCA0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBCA4:
    // 802EBCA4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802EBCA8:
    ctx->pc = 0x802EBCA8u;
    // 802EBCA8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBCAC:
    // 802EBCAC: addi    r3, r1, 104
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBCB0:
    // 802EBCB0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBCB4:
    // 802EBCB4: bl      0x8000D074
    {
            ctx->lr = 0x802EBCB8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBCB8:
    ctx->downcount -= 3;
    // 802EBCB8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_802EBCBC:
    // 802EBCBC: addi    r4, r1, 104
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(104);

label_802EBCC0:
    // 802EBCC0: bl      0x8026F970
    {
            ctx->lr = 0x802EBCC4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBCC4:
    ctx->pc = 0x802EBCC4u;
    ctx->downcount -= 3;
    // 802EBCC4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EBCC8:
    // 802EBCC8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EBCCC:
    ctx->pc = 0x802EBCCCu;
    // 802EBCCC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EBCD0:
    ctx->downcount -= 4;
    // 802EBCD0: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_802EBCD4:
    // 802EBCD4: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_802EBCD8:
    // 802EBCD8: cmpwi   r25, 4
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

label_802EBCDC:
    // 802EBCDC: bc    12, 0, 0x802EB940
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB940u;
                return;
            }
            goto label_802EB940;
        }
    }

label_802EBCE0:
    ctx->pc = 0x802EBCE0u;
    ctx->downcount -= 2;
    // 802EBCE0: addi    r11, r1, 192
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(192);

label_802EBCE4:
    ctx->pc = 0x802EBCE4u;
    // 802EBCE4: bl      0x8000788C
    {
            ctx->lr = 0x802EBCE8u;
            ctx->pc = 0x8000788Cu;
            return;
    }

label_802EBCE8:
    ctx->pc = 0x802EBCE8u;
    ctx->downcount -= 5;
    // 802EBCE8: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBCEC:
    ctx->pc = 0x802EBCECu;
    // 802EBCEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBCF0:
    ctx->pc = 0x802EBCF0u;
    // 802EBCF0: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_802EBCF4:
    ctx->pc = 0x802EBCF4u;
    // 802EBCF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBCF8:
    ctx->pc = 0x802EBCF8u;
    ctx->downcount -= 18;
    // 802EBCF8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBCFC:
    ctx->pc = 0x802EBCFCu;
    // 802EBCFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBD00:
    ctx->pc = 0x802EBD00u;
    // 802EBD00: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBD04:
    ctx->pc = 0x802EBD04u;
    // 802EBD04: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EBD08:
    ctx->pc = 0x802EBD08u;
    // 802EBD08: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBD0C:
    ctx->pc = 0x802EBD0Cu;
    // 802EBD0C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EBD10:
    ctx->pc = 0x802EBD10u;
    // 802EBD10: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802EBD14:
    ctx->pc = 0x802EBD14u;
    // 802EBD14: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EBD18:
    ctx->downcount -= 4;
    // 802EBD18: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EBD1C:
    ctx->pc = 0x802EBD1Cu;
    // 802EBD1C: lwz     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EBD20:
    // 802EBD20: cmpwi   r4, 0
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

label_802EBD24:
    // 802EBD24: bc    12, 2, 0x802EBD34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EBD34;
        }
    }

label_802EBD28:
    ctx->downcount -= 3;
    // 802EBD28: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EBD2C:
    ctx->pc = 0x802EBD2Cu;
    // 802EBD2C: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EBD30:
    // 802EBD30: bl      0x8027CB94
    {
            ctx->lr = 0x802EBD34u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_802EBD34:
    ctx->downcount -= 4;
    // 802EBD34: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802EBD38:
    // 802EBD38: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802EBD3C:
    // 802EBD3C: cmpwi   r30, 4
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

label_802EBD40:
    // 802EBD40: bc    12, 0, 0x802EBD18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EBD18u;
                return;
            }
            goto label_802EBD18;
        }
    }

label_802EBD44:
    ctx->pc = 0x802EBD44u;
    ctx->downcount -= 16;
    // 802EBD44: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EBD48:
    ctx->pc = 0x802EBD48u;
    // 802EBD48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBD4C:
    ctx->pc = 0x802EBD4Cu;
    // 802EBD4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBD50:
    ctx->pc = 0x802EBD50u;
    // 802EBD50: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EBD54:
    ctx->pc = 0x802EBD54u;
    // 802EBD54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBD58:
    ctx->pc = 0x802EBD58u;
    ctx->downcount -= 24;
    // 802EBD58: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBD5C:
    ctx->pc = 0x802EBD5Cu;
    // 802EBD5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBD60:
    ctx->pc = 0x802EBD60u;
    // 802EBD60: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802EBD64:
    ctx->pc = 0x802EBD64u;
    // 802EBD64: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBD68:
    ctx->pc = 0x802EBD68u;
    // 802EBD68: addi    r5, r5, 11120
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(11120);

label_802EBD6C:
    ctx->pc = 0x802EBD6Cu;
    // 802EBD6C: addi    r5, r5, 160
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(160);

label_802EBD70:
    ctx->pc = 0x802EBD70u;
    // 802EBD70: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EBD74:
    ctx->pc = 0x802EBD74u;
    // 802EBD74: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EBD78:
    ctx->pc = 0x802EBD78u;
    // 802EBD78: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBD7C:
    ctx->pc = 0x802EBD7Cu;
    // 802EBD7C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBD80:
    ctx->pc = 0x802EBD80u;
    // 802EBD80: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EBD84:
    ctx->pc = 0x802EBD84u;
    // 802EBD84: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBD88:
    ctx->pc = 0x802EBD88u;
    // 802EBD88: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBD8C:
    ctx->pc = 0x802EBD8Cu;
    // 802EBD8C: bl      0x8000D074
    {
            ctx->lr = 0x802EBD90u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBD90:
    ctx->pc = 0x802EBD90u;
    ctx->downcount -= 3;
    // 802EBD90: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EBD94:
    ctx->pc = 0x802EBD94u;
    // 802EBD94: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBD98:
    ctx->pc = 0x802EBD98u;
    // 802EBD98: bl      0x8026F970
    {
            ctx->lr = 0x802EBD9Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EBD9C:
    ctx->pc = 0x802EBD9Cu;
    ctx->downcount -= 5;
    // 802EBD9C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802EBDA0:
    ctx->pc = 0x802EBDA0u;
    // 802EBDA0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBDA4:
    ctx->pc = 0x802EBDA4u;
    // 802EBDA4: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EBDA8:
    ctx->pc = 0x802EBDA8u;
    // 802EBDA8: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EBDAC:
    ctx->pc = 0x802EBDACu;
    // 802EBDAC: bl      0x8027CC74
    {
            ctx->lr = 0x802EBDB0u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EBDB0:
    ctx->pc = 0x802EBDB0u;
    ctx->downcount -= 16;
    // 802EBDB0: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EBDB4:
    ctx->pc = 0x802EBDB4u;
    // 802EBDB4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBDB8:
    ctx->pc = 0x802EBDB8u;
    // 802EBDB8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBDBC:
    ctx->pc = 0x802EBDBCu;
    // 802EBDBC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802EBDC0:
    ctx->pc = 0x802EBDC0u;
    // 802EBDC0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBDC4:
    ctx->pc = 0x802EBDC4u;
    ctx->downcount -= 1;
    // 802EBDC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBDC8:
    ctx->pc = 0x802EBDC8u;
    ctx->downcount -= 24;
    // 802EBDC8: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBDCC:
    ctx->pc = 0x802EBDCCu;
    // 802EBDCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBDD0:
    // 802EBDD0: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802EBDD4:
    // 802EBDD4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EBDD8:
    ctx->pc = 0x802EBDD8u;
    // 802EBDD8: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBDDC:
    // 802EBDDC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802EBDE0:
    // 802EBDE0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802EBDE4:
    ctx->pc = 0x802EBDE4u;
    // 802EBDE4: stmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EBDE8:
    // 802EBDE8: addi    r31, r4, 11120
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(11120);

label_802EBDEC:
    // 802EBDEC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBDF0:
    // 802EBDF0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802EBDF4:
    // 802EBDF4: addi    r4, r31, 175
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(175);

label_802EBDF8:
    // 802EBDF8: addi    r5, r31, 190
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(190);

label_802EBDFC:
    // 802EBDFC: bl      0x802703A8
    {
            ctx->lr = 0x802EBE00u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_802EBE00:
    ctx->downcount -= 6;
    // 802EBE00: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE04:
    // 802EBE04: addi    r5, r31, 211
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(211);

label_802EBE08:
    // 802EBE08: addi    r6, r31, 214
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(214);

label_802EBE0C:
    // 802EBE0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EBE10:
    // 802EBE10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EBE14:
    // 802EBE14: bl      0x8027035C
    {
            ctx->lr = 0x802EBE18u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802EBE18:
    ctx->downcount -= 6;
    // 802EBE18: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE1C:
    // 802EBE1C: addi    r5, r31, 225
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(225);

label_802EBE20:
    // 802EBE20: addi    r6, r31, 214
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(214);

label_802EBE24:
    // 802EBE24: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EBE28:
    // 802EBE28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EBE2C:
    // 802EBE2C: bl      0x8027035C
    {
            ctx->lr = 0x802EBE30u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802EBE30:
    ctx->downcount -= 6;
    // 802EBE30: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE34:
    // 802EBE34: addi    r5, r31, 229
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(229);

label_802EBE38:
    // 802EBE38: addi    r6, r31, 234
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(234);

label_802EBE3C:
    // 802EBE3C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EBE40:
    // 802EBE40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EBE44:
    // 802EBE44: bl      0x8027035C
    {
            ctx->lr = 0x802EBE48u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802EBE48:
    ctx->downcount -= 6;
    // 802EBE48: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE4C:
    // 802EBE4C: addi    r5, r31, 244
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(244);

label_802EBE50:
    // 802EBE50: addi    r6, r31, 248
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(248);

label_802EBE54:
    // 802EBE54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EBE58:
    // 802EBE58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EBE5C:
    // 802EBE5C: bl      0x8027035C
    {
            ctx->lr = 0x802EBE60u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802EBE60:
    ctx->downcount -= 4;
    // 802EBE60: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE64:
    // 802EBE64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EBE68:
    // 802EBE68: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802EBE6C:
    // 802EBE6C: bl      0x80270194
    {
            ctx->lr = 0x802EBE70u;
            ctx->pc = 0x80270194u;
            return;
    }

label_802EBE70:
    ctx->downcount -= 1;
    // 802EBE70: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802EBE74:
    ctx->downcount -= 6;
    // 802EBE74: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EBE78:
    // 802EBE78: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBE7C:
    // 802EBE7C: addi    r5, r31, 259
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(259);

label_802EBE80:
    // 802EBE80: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBE84:
    // 802EBE84: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBE88:
    // 802EBE88: bl      0x8000D074
    {
            ctx->lr = 0x802EBE8Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBE8C:
    ctx->downcount -= 3;
    // 802EBE8C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBE90:
    // 802EBE90: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBE94:
    // 802EBE94: bl      0x8026F958
    {
            ctx->lr = 0x802EBE98u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_802EBE98:
    ctx->downcount -= 5;
    // 802EBE98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBE9C:
    // 802EBE9C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EBEA0:
    // 802EBEA0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBEA4:
    // 802EBEA4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EBEA8:
    // 802EBEA8: bl      0x8026F720
    {
            ctx->lr = 0x802EBEACu;
            ctx->pc = 0x8026F720u;
            return;
    }

label_802EBEAC:
    ctx->downcount -= 6;
    // 802EBEAC: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EBEB0:
    // 802EBEB0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBEB4:
    // 802EBEB4: addi    r5, r31, 273
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(273);

label_802EBEB8:
    // 802EBEB8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EBEBC:
    // 802EBEBC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EBEC0:
    // 802EBEC0: bl      0x8000D074
    {
            ctx->lr = 0x802EBEC4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EBEC4:
    ctx->downcount -= 3;
    // 802EBEC4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBEC8:
    // 802EBEC8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EBECC:
    // 802EBECC: bl      0x8026F960
    {
            ctx->lr = 0x802EBED0u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802EBED0:
    ctx->downcount -= 5;
    // 802EBED0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBED4:
    // 802EBED4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EBED8:
    // 802EBED8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EBEDC:
    // 802EBEDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EBEE0:
    // 802EBEE0: bl      0x8026F760
    {
            ctx->lr = 0x802EBEE4u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802EBEE4:
    ctx->downcount -= 3;
    // 802EBEE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EBEE8:
    // 802EBEE8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EBEEC:
    // 802EBEEC: bl      0x802EBD58
    {
            ctx->lr = 0x802EBEF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EBD58u;
                return;
            }
            goto label_802EBD58;
    }

label_802EBEF0:
    ctx->downcount -= 3;
    // 802EBEF0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802EBEF4:
    // 802EBEF4: cmpwi   r30, 4
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

label_802EBEF8:
    // 802EBEF8: bc    12, 0, 0x802EBE74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EBE74u;
                return;
            }
            goto label_802EBE74;
        }
    }

label_802EBEFC:
    ctx->downcount -= 3;
    // 802EBEFC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EBF00:
    // 802EBF00: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EBF04:
    // 802EBF04: bl      0x802EBF1C
    {
            ctx->lr = 0x802EBF08u;
            goto label_802EBF1C;
    }

label_802EBF08:
    ctx->pc = 0x802EBF08u;
    ctx->downcount -= 16;
    // 802EBF08: lmw     r29, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EBF0C:
    ctx->pc = 0x802EBF0Cu;
    // 802EBF0C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBF10:
    ctx->pc = 0x802EBF10u;
    // 802EBF10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBF14:
    // 802EBF14: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802EBF18:
    ctx->pc = 0x802EBF18u;
    // 802EBF18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBF1C:
    ctx->pc = 0x802EBF1Cu;
    ctx->downcount -= 9;
    // 802EBF1C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBF20:
    ctx->pc = 0x802EBF20u;
    // 802EBF20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBF24:
    ctx->pc = 0x802EBF24u;
    // 802EBF24: lfs     f0, -12488(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EBF24u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12488);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBF28:
    // 802EBF28: cmpwi   r4, 0
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

label_802EBF2C:
    ctx->pc = 0x802EBF2Cu;
    // 802EBF2C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBF30:
    ctx->pc = 0x802EBF30u;
    // 802EBF30: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF34:
    ctx->pc = 0x802EBF34u;
    // 802EBF34: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF38:
    ctx->pc = 0x802EBF38u;
    // 802EBF38: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF38u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF3C:
    // 802EBF3C: bc    12, 2, 0x802EBF48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EBF48;
        }
    }

label_802EBF40:
    ctx->pc = 0x802EBF40u;
    ctx->downcount -= 2;
    // 802EBF40: lfs     f0, -12484(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EBF40u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12484);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBF44:
    ctx->pc = 0x802EBF44u;
    // 802EBF44: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF48:
    ctx->downcount -= 2;
    // 802EBF48: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802EBF4C:
    // 802EBF4C: bl      0x8026F6CC
    {
            ctx->lr = 0x802EBF50u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802EBF50:
    ctx->downcount -= 1;
    // 802EBF50: bl      0x8025CE24
    {
            ctx->lr = 0x802EBF54u;
            ctx->pc = 0x8025CE24u;
            return;
    }

label_802EBF54:
    ctx->pc = 0x802EBF54u;
    ctx->downcount -= 11;
    // 802EBF54: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBF58:
    ctx->pc = 0x802EBF58u;
    // 802EBF58: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBF58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF5C:
    ctx->pc = 0x802EBF5Cu;
    // 802EBF5C: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBF60:
    ctx->pc = 0x802EBF60u;
    // 802EBF60: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBF60u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF64:
    ctx->pc = 0x802EBF64u;
    // 802EBF64: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EBF64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EBF68:
    ctx->pc = 0x802EBF68u;
    // 802EBF68: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x802EBF68u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EBF6C:
    ctx->pc = 0x802EBF6Cu;
    // 802EBF6C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBF70:
    ctx->pc = 0x802EBF70u;
    // 802EBF70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBF74:
    // 802EBF74: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EBF78:
    ctx->pc = 0x802EBF78u;
    // 802EBF78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBF7C:
    ctx->pc = 0x802EBF7Cu;
    ctx->downcount -= 8;
    // 802EBF7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBF80:
    ctx->pc = 0x802EBF80u;
    // 802EBF80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBF84:
    // 802EBF84: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EBF88:
    ctx->pc = 0x802EBF88u;
    // 802EBF88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBF8C:
    ctx->pc = 0x802EBF8Cu;
    // 802EBF8C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EBF90:
    // 802EBF90: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBF94:
    // 802EBF94: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802EBF98:
    // 802EBF98: bl      0x8026FEDC
    {
            ctx->lr = 0x802EBF9Cu;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802EBF9C:
    ctx->downcount -= 2;
    // 802EBF9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EBFA0:
    // 802EBFA0: bl      0x801ED220
    {
            ctx->lr = 0x802EBFA4u;
            ctx->pc = 0x801ED220u;
            return;
    }

label_802EBFA4:
    ctx->pc = 0x802EBFA4u;
    ctx->downcount -= 6;
    // 802EBFA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EBFA8:
    ctx->pc = 0x802EBFA8u;
    // 802EBFA8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EBFAC:
    ctx->pc = 0x802EBFACu;
    // 802EBFAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EBFB0:
    // 802EBFB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EBFB4:
    ctx->pc = 0x802EBFB4u;
    // 802EBFB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EBFB8:
    ctx->pc = 0x802EBFB8u;
    ctx->downcount -= 17;
    // 802EBFB8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EBFBC:
    ctx->pc = 0x802EBFBCu;
    // 802EBFBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EBFC0:
    ctx->pc = 0x802EBFC0u;
    // 802EBFC0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EBFC4:
    ctx->pc = 0x802EBFC4u;
    // 802EBFC4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EBFC8:
    // 802EBFC8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EBFCC:
    // 802EBFCC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EBFD0:
    // 802EBFD0: bl      0x80371554
    {
            ctx->lr = 0x802EBFD4u;
            ctx->pc = 0x80371554u;
            return;
    }

label_802EBFD4:
    ctx->downcount -= 4;
    // 802EBFD4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EBFD8:
    // 802EBFD8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EBFDC:
    // 802EBFDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EBFE0:
    // 802EBFE0: bl      0x8026FEF0
    {
            ctx->lr = 0x802EBFE4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802EBFE4:
    ctx->downcount -= 3;
    // 802EBFE4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EBFE8:
    // 802EBFE8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EBFEC:
    // 802EBFEC: bl      0x8026F6AC
    {
            ctx->lr = 0x802EBFF0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802EBFF0:
    ctx->downcount -= 1;
    // 802EBFF0: bl      0x8025EC94
    {
            ctx->lr = 0x802EBFF4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802EBFF4:
    ctx->downcount -= 4;
    // 802EBFF4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EBFF8:
    // 802EBFF8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EBFFC:
    // 802EBFFC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EC000:
    // 802EC000: bl      0x8026FEF0
    {
            ctx->lr = 0x802EC004u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802EC004:
    ctx->downcount -= 3;
    // 802EC004: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC008:
    // 802EC008: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EC00C:
    // 802EC00C: bl      0x8026F6AC
    {
            ctx->lr = 0x802EC010u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802EC010:
    ctx->downcount -= 1;
    // 802EC010: bl      0x8025EC94
    {
            ctx->lr = 0x802EC014u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802EC014:
    ctx->downcount -= 3;
    // 802EC014: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC018:
    // 802EC018: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EC01C:
    // 802EC01C: bl      0x802EBCF8
    {
            ctx->lr = 0x802EC020u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EBCF8u;
                return;
            }
            goto label_802EBCF8;
    }

label_802EC020:
    ctx->downcount -= 3;
    // 802EC020: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC024:
    // 802EC024: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EC028:
    // 802EC028: bl      0x802EB904
    {
            ctx->lr = 0x802EC02Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EB904u;
                return;
            }
            goto label_802EB904;
    }

label_802EC02C:
    ctx->pc = 0x802EC02Cu;
    ctx->downcount -= 16;
    // 802EC02C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC030:
    ctx->pc = 0x802EC030u;
    // 802EC030: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC034:
    ctx->pc = 0x802EC034u;
    // 802EC034: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC038:
    // 802EC038: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EC03C:
    ctx->pc = 0x802EC03Cu;
    // 802EC03C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC040:
    ctx->pc = 0x802EC040u;
    ctx->downcount -= 19;
    // 802EC040: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC044:
    ctx->pc = 0x802EC044u;
    // 802EC044: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC048:
    ctx->pc = 0x802EC048u;
    // 802EC048: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC04C:
    ctx->pc = 0x802EC04Cu;
    // 802EC04C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC050:
    // 802EC050: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC054:
    // 802EC054: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC058:
    // 802EC058: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802EC05C:
    // 802EC05C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC060:
    // 802EC060: bl      0x803715C0
    {
            ctx->lr = 0x802EC064u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_802EC064:
    ctx->downcount -= 15;
    // 802EC064: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_802EC068:
    // 802EC068: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_802EC06C:
    // 802EC06C: addi    r5, r5, 14792
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14792);

label_802EC070:
    ctx->pc = 0x802EC070u;
    // 802EC070: stw     r5, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EC074:
    // 802EC074: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_802EC078:
    // 802EC078: addi    r3, r3, 11120
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11120);

label_802EC07C:
    // 802EC07C: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_802EC080:
    // 802EC080: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_802EC084:
    ctx->pc = 0x802EC084u;
    // 802EC084: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC088:
    // 802EC088: addi    r4, r3, 288
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(288);

label_802EC08C:
    // 802EC08C: addi    r3, r28, 52
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(52);

label_802EC090:
    // 802EC090: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802EC094:
    ctx->pc = 0x802EC094u;
    // 802EC094: stw     r6, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EC098:
    ctx->pc = 0x802EC098u;
    // 802EC098: stw     r0, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC09C:
    // 802EC09C: bl      0x8000E7F4
    {
            ctx->lr = 0x802EC0A0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802EC0A0:
    ctx->downcount -= 2;
    // 802EC0A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802EC0A4:
    // 802EC0A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EC0A8:
    ctx->downcount -= 2;
    // 802EC0A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC0AC:
    // 802EC0AC: bl      0x8027CCC0
    {
            ctx->lr = 0x802EC0B0u;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_802EC0B0:
    ctx->downcount -= 6;
    // 802EC0B0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802EC0B4:
    // 802EC0B4: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EC0B8:
    // 802EC0B8: cmpwi   r30, 4
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

label_802EC0BC:
    ctx->pc = 0x802EC0BCu;
    // 802EC0BC: stw     r3, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC0C0:
    // 802EC0C0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802EC0C4:
    // 802EC0C4: bc    12, 0, 0x802EC0A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC0A8u;
                return;
            }
            goto label_802EC0A8;
        }
    }

label_802EC0C8:
    ctx->downcount -= 17;
    // 802EC0C8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC0CC:
    ctx->pc = 0x802EC0CCu;
    // 802EC0CC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC0D0:
    ctx->pc = 0x802EC0D0u;
    // 802EC0D0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC0D4:
    ctx->pc = 0x802EC0D4u;
    // 802EC0D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC0D8:
    // 802EC0D8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EC0DC:
    ctx->pc = 0x802EC0DCu;
    // 802EC0DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC0E0:
    ctx->downcount -= 7;
    // 802EC0E0: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802EC0E4:
    // 802EC0E4: add   r4, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EC0E8:
    // 802EC0E8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EC0EC:
    ctx->pc = 0x802EC0ECu;
    // 802EC0EC: stw     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EC0F0:
    ctx->pc = 0x802EC0F0u;
    // 802EC0F0: stb     r6, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_802EC0F4:
    ctx->pc = 0x802EC0F4u;
    // 802EC0F4: stw     r7, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802EC0F8:
    ctx->pc = 0x802EC0F8u;
    // 802EC0F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC0FC:
    ctx->pc = 0x802EC0FCu;
    ctx->downcount -= 1;
    // 802EC0FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC100:
    ctx->pc = 0x802EC100u;
    ctx->downcount -= 18;
    // 802EC100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC104:
    ctx->pc = 0x802EC104u;
    // 802EC104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC108:
    // 802EC108: cmpwi   r3, 0
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

label_802EC10C:
    ctx->pc = 0x802EC10Cu;
    // 802EC10C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC110:
    ctx->pc = 0x802EC110u;
    // 802EC110: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC114:
    // 802EC114: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC118:
    // 802EC118: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC11C:
    // 802EC11C: bc    12, 2, 0x802EC150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC150;
        }
    }

label_802EC120:
    ctx->downcount -= 1;
    // 802EC120: bc    12, 2, 0x802EC140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC140;
        }
    }

label_802EC124:
    ctx->downcount -= 1;
    // 802EC124: bc    12, 2, 0x802EC140
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC140;
        }
    }

label_802EC128:
    ctx->downcount -= 3;
    // 802EC128: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EC12C:
    // 802EC12C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802EC130:
    // 802EC130: bl      0x801F5C24
    {
            ctx->lr = 0x802EC134u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802EC134:
    ctx->downcount -= 3;
    // 802EC134: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC138:
    // 802EC138: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EC13C:
    // 802EC13C: bl      0x801F9C70
    {
            ctx->lr = 0x802EC140u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802EC140:
    ctx->downcount -= 2;
    // 802EC140: cmpwi   r31, 0
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

label_802EC144:
    // 802EC144: bc    4, 1, 0x802EC150
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC150;
        }
    }

label_802EC148:
    ctx->downcount -= 2;
    // 802EC148: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC14C:
    // 802EC14C: bl      0x801C1C90
    {
            ctx->lr = 0x802EC150u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EC150:
    ctx->downcount -= 17;
    // 802EC150: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC154:
    ctx->pc = 0x802EC154u;
    // 802EC154: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC158:
    ctx->pc = 0x802EC158u;
    // 802EC158: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC15C:
    ctx->pc = 0x802EC15Cu;
    // 802EC15C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC160:
    // 802EC160: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EC164:
    ctx->pc = 0x802EC164u;
    // 802EC164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC168:
    ctx->downcount -= 2;
    // 802EC168: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EC16C:
    // 802EC16C: b       0x802EC100
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC100u;
                return;
            }
            goto label_802EC100;
    }

label_802EC170:
    ctx->downcount -= 2;
    // 802EC170: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802EC174:
    // 802EC174: b       0x802EBDC4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EBDC4u;
                return;
            }
            goto label_802EBDC4;
    }

label_802EC178:
    ctx->downcount -= 2;
    // 802EC178: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802EC17C:
    // 802EC17C: b       0x802EC100
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC100u;
                return;
            }
            goto label_802EC100;
    }

label_802EC180:
    ctx->pc = 0x802EC180u;
    ctx->downcount -= 20;
    // 802EC180: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC184:
    ctx->pc = 0x802EC184u;
    // 802EC184: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC188:
    ctx->pc = 0x802EC188u;
    // 802EC188: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC18C:
    ctx->pc = 0x802EC18Cu;
    // 802EC18C: stmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC190:
    ctx->pc = 0x802EC190u;
    // 802EC190: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EC194:
    ctx->pc = 0x802EC194u;
    // 802EC194: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC198:
    ctx->pc = 0x802EC198u;
    // 802EC198: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC19C:
    ctx->pc = 0x802EC19Cu;
    // 802EC19C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EC1A0:
    ctx->pc = 0x802EC1A0u;
    // 802EC1A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC1A4:
    ctx->pc = 0x802EC1A4u;
    // 802EC1A4: bl      0x803507B8
    {
            ctx->lr = 0x802EC1A8u;
            ctx->pc = 0x803507B8u;
            return;
    }

label_802EC1A8:
    ctx->pc = 0x802EC1A8u;
    ctx->downcount -= 2;
    // 802EC1A8: cmpwi   r3, 0
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

label_802EC1AC:
    ctx->pc = 0x802EC1ACu;
    // 802EC1AC: bc    12, 2, 0x802EC260
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC260;
        }
    }

label_802EC1B0:
    ctx->pc = 0x802EC1B0u;
    ctx->downcount -= 7;
    // 802EC1B0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802EC1B4:
    ctx->pc = 0x802EC1B4u;
    // 802EC1B4: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC1B8:
    ctx->pc = 0x802EC1B8u;
    // 802EC1B8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC1BC:
    ctx->pc = 0x802EC1BCu;
    // 802EC1BC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC1C0:
    ctx->pc = 0x802EC1C0u;
    // 802EC1C0: addi    r5, r31, 11440
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(11440);

label_802EC1C4:
    ctx->pc = 0x802EC1C4u;
    // 802EC1C4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC1C8:
    ctx->pc = 0x802EC1C8u;
    // 802EC1C8: bl      0x8000D074
    {
            ctx->lr = 0x802EC1CCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC1CC:
    ctx->pc = 0x802EC1CCu;
    ctx->downcount -= 3;
    // 802EC1CC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC1D0:
    ctx->pc = 0x802EC1D0u;
    // 802EC1D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC1D4:
    ctx->pc = 0x802EC1D4u;
    // 802EC1D4: bl      0x8026F968
    {
            ctx->lr = 0x802EC1D8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EC1D8:
    ctx->pc = 0x802EC1D8u;
    ctx->downcount -= 7;
    // 802EC1D8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC1DC:
    ctx->pc = 0x802EC1DCu;
    // 802EC1DC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC1E0:
    ctx->pc = 0x802EC1E0u;
    // 802EC1E0: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC1E4:
    ctx->pc = 0x802EC1E4u;
    // 802EC1E4: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC1E8:
    ctx->pc = 0x802EC1E8u;
    // 802EC1E8: li      r6, 51
    ctx->gpr[6] = (u32)(s32)(51);

label_802EC1EC:
    ctx->pc = 0x802EC1ECu;
    // 802EC1EC: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802EC1F0:
    ctx->pc = 0x802EC1F0u;
    // 802EC1F0: bl      0x8026F7F4
    {
            ctx->lr = 0x802EC1F4u;
            ctx->pc = 0x8026F7F4u;
            return;
    }

label_802EC1F4:
    ctx->pc = 0x802EC1F4u;
    ctx->downcount -= 7;
    // 802EC1F4: addi    r31, r31, 11440
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(11440);

label_802EC1F8:
    ctx->pc = 0x802EC1F8u;
    // 802EC1F8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC1FC:
    ctx->pc = 0x802EC1FCu;
    // 802EC1FC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC200:
    ctx->pc = 0x802EC200u;
    // 802EC200: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC204:
    ctx->pc = 0x802EC204u;
    // 802EC204: addi    r5, r31, 17
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(17);

label_802EC208:
    ctx->pc = 0x802EC208u;
    // 802EC208: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC20C:
    ctx->pc = 0x802EC20Cu;
    // 802EC20C: bl      0x8000D074
    {
            ctx->lr = 0x802EC210u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC210:
    ctx->pc = 0x802EC210u;
    ctx->downcount -= 3;
    // 802EC210: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC214:
    ctx->pc = 0x802EC214u;
    // 802EC214: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC218:
    ctx->pc = 0x802EC218u;
    // 802EC218: bl      0x8026F970
    {
            ctx->lr = 0x802EC21Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC21C:
    ctx->pc = 0x802EC21Cu;
    ctx->downcount -= 9;
    // 802EC21C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC220:
    ctx->pc = 0x802EC220u;
    // 802EC220: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC224:
    ctx->pc = 0x802EC224u;
    // 802EC224: addi    r5, r31, 35
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(35);

label_802EC228:
    ctx->pc = 0x802EC228u;
    // 802EC228: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC22C:
    ctx->pc = 0x802EC22Cu;
    // 802EC22C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC230:
    ctx->pc = 0x802EC230u;
    // 802EC230: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC234:
    ctx->pc = 0x802EC234u;
    // 802EC234: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC238:
    ctx->pc = 0x802EC238u;
    // 802EC238: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC23C:
    ctx->pc = 0x802EC23Cu;
    // 802EC23C: bl      0x8000D074
    {
            ctx->lr = 0x802EC240u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC240:
    ctx->pc = 0x802EC240u;
    ctx->downcount -= 3;
    // 802EC240: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC244:
    ctx->pc = 0x802EC244u;
    // 802EC244: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC248:
    ctx->pc = 0x802EC248u;
    // 802EC248: bl      0x8026F970
    {
            ctx->lr = 0x802EC24Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC24C:
    ctx->pc = 0x802EC24Cu;
    ctx->downcount -= 5;
    // 802EC24C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC250:
    ctx->pc = 0x802EC250u;
    // 802EC250: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC254:
    ctx->pc = 0x802EC254u;
    // 802EC254: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802EC258:
    ctx->pc = 0x802EC258u;
    // 802EC258: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC25C:
    ctx->pc = 0x802EC25Cu;
    // 802EC25C: b       0x802EC30C
    {
            goto label_802EC30C;
    }

label_802EC260:
    ctx->pc = 0x802EC260u;
    ctx->downcount -= 8;
    // 802EC260: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802EC264:
    ctx->pc = 0x802EC264u;
    // 802EC264: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC268:
    ctx->pc = 0x802EC268u;
    // 802EC268: addi    r31, r31, 11440
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(11440);

label_802EC26C:
    ctx->pc = 0x802EC26Cu;
    // 802EC26C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC270:
    ctx->pc = 0x802EC270u;
    // 802EC270: addi    r5, r31, 52
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(52);

label_802EC274:
    ctx->pc = 0x802EC274u;
    // 802EC274: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC278:
    ctx->pc = 0x802EC278u;
    // 802EC278: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC27C:
    ctx->pc = 0x802EC27Cu;
    // 802EC27C: bl      0x8000D074
    {
            ctx->lr = 0x802EC280u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC280:
    ctx->pc = 0x802EC280u;
    ctx->downcount -= 3;
    // 802EC280: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC284:
    ctx->pc = 0x802EC284u;
    // 802EC284: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC288:
    ctx->pc = 0x802EC288u;
    // 802EC288: bl      0x8026F968
    {
            ctx->lr = 0x802EC28Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EC28C:
    ctx->pc = 0x802EC28Cu;
    ctx->downcount -= 7;
    // 802EC28C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC290:
    ctx->pc = 0x802EC290u;
    // 802EC290: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC294:
    ctx->pc = 0x802EC294u;
    // 802EC294: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC298:
    ctx->pc = 0x802EC298u;
    // 802EC298: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC29C:
    ctx->pc = 0x802EC29Cu;
    // 802EC29C: li      r6, 52
    ctx->gpr[6] = (u32)(s32)(52);

label_802EC2A0:
    ctx->pc = 0x802EC2A0u;
    // 802EC2A0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802EC2A4:
    ctx->pc = 0x802EC2A4u;
    // 802EC2A4: bl      0x8026F7F4
    {
            ctx->lr = 0x802EC2A8u;
            ctx->pc = 0x8026F7F4u;
            return;
    }

label_802EC2A8:
    ctx->pc = 0x802EC2A8u;
    ctx->downcount -= 6;
    // 802EC2A8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC2AC:
    ctx->pc = 0x802EC2ACu;
    // 802EC2AC: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC2B0:
    ctx->pc = 0x802EC2B0u;
    // 802EC2B0: addi    r5, r31, 17
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(17);

label_802EC2B4:
    ctx->pc = 0x802EC2B4u;
    // 802EC2B4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC2B8:
    ctx->pc = 0x802EC2B8u;
    // 802EC2B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC2BC:
    ctx->pc = 0x802EC2BCu;
    // 802EC2BC: bl      0x8000D074
    {
            ctx->lr = 0x802EC2C0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC2C0:
    ctx->pc = 0x802EC2C0u;
    ctx->downcount -= 3;
    // 802EC2C0: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC2C4:
    ctx->pc = 0x802EC2C4u;
    // 802EC2C4: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC2C8:
    ctx->pc = 0x802EC2C8u;
    // 802EC2C8: bl      0x8026F970
    {
            ctx->lr = 0x802EC2CCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC2CC:
    ctx->pc = 0x802EC2CCu;
    ctx->downcount -= 10;
    // 802EC2CC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC2D0:
    ctx->pc = 0x802EC2D0u;
    // 802EC2D0: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC2D4:
    ctx->pc = 0x802EC2D4u;
    // 802EC2D4: addi    r5, r31, 35
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(35);

label_802EC2D8:
    ctx->pc = 0x802EC2D8u;
    // 802EC2D8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC2DC:
    ctx->pc = 0x802EC2DCu;
    // 802EC2DC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC2E0:
    ctx->pc = 0x802EC2E0u;
    // 802EC2E0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802EC2E4:
    ctx->pc = 0x802EC2E4u;
    // 802EC2E4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC2E8:
    ctx->pc = 0x802EC2E8u;
    // 802EC2E8: addi    r3, r1, 40
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC2EC:
    ctx->pc = 0x802EC2ECu;
    // 802EC2EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC2F0:
    ctx->pc = 0x802EC2F0u;
    // 802EC2F0: bl      0x8000D074
    {
            ctx->lr = 0x802EC2F4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC2F4:
    ctx->pc = 0x802EC2F4u;
    ctx->downcount -= 3;
    // 802EC2F4: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802EC2F8:
    ctx->pc = 0x802EC2F8u;
    // 802EC2F8: addi    r4, r1, 40
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(40);

label_802EC2FC:
    ctx->pc = 0x802EC2FCu;
    // 802EC2FC: bl      0x8026F970
    {
            ctx->lr = 0x802EC300u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC300:
    ctx->pc = 0x802EC300u;
    ctx->downcount -= 3;
    // 802EC300: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC304:
    ctx->pc = 0x802EC304u;
    // 802EC304: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC308:
    ctx->pc = 0x802EC308u;
    // 802EC308: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC30C:
    ctx->pc = 0x802EC30Cu;
    ctx->downcount -= 16;
    // 802EC30C: lmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC310:
    ctx->pc = 0x802EC310u;
    // 802EC310: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC314:
    ctx->pc = 0x802EC314u;
    // 802EC314: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC318:
    ctx->pc = 0x802EC318u;
    // 802EC318: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802EC31C:
    ctx->pc = 0x802EC31Cu;
    // 802EC31C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC320:
    ctx->pc = 0x802EC320u;
    ctx->downcount -= 21;
    // 802EC320: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC324:
    ctx->pc = 0x802EC324u;
    // 802EC324: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC328:
    ctx->pc = 0x802EC328u;
    // 802EC328: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC32C:
    ctx->pc = 0x802EC32Cu;
    // 802EC32C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC330:
    ctx->pc = 0x802EC330u;
    // 802EC330: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802EC334:
    ctx->pc = 0x802EC334u;
    // 802EC334: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC338:
    ctx->pc = 0x802EC338u;
    // 802EC338: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802EC33C:
    ctx->pc = 0x802EC33Cu;
    // 802EC33C: addi    r31, r31, 11440
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(11440);

label_802EC340:
    ctx->pc = 0x802EC340u;
    // 802EC340: lwz     r30, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EC344:
    ctx->pc = 0x802EC344u;
    // 802EC344: addi    r4, r31, 70
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(70);

label_802EC348:
    ctx->pc = 0x802EC348u;
    // 802EC348: bl      0x8026F970
    {
            ctx->lr = 0x802EC34Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC34C:
    ctx->pc = 0x802EC34Cu;
    ctx->downcount -= 6;
    // 802EC34C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC350:
    ctx->pc = 0x802EC350u;
    // 802EC350: addi    r4, r31, 85
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(85);

label_802EC354:
    ctx->pc = 0x802EC354u;
    // 802EC354: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC358:
    ctx->pc = 0x802EC358u;
    // 802EC358: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC35C:
    ctx->pc = 0x802EC35Cu;
    // 802EC35C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC360:
    ctx->pc = 0x802EC360u;
    // 802EC360: bl      0x8026F970
    {
            ctx->lr = 0x802EC364u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC364:
    ctx->pc = 0x802EC364u;
    ctx->downcount -= 6;
    // 802EC364: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC368:
    ctx->pc = 0x802EC368u;
    // 802EC368: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_802EC36C:
    ctx->pc = 0x802EC36Cu;
    // 802EC36C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC370:
    ctx->pc = 0x802EC370u;
    // 802EC370: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC374:
    ctx->pc = 0x802EC374u;
    // 802EC374: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC378:
    ctx->pc = 0x802EC378u;
    // 802EC378: bl      0x8026F970
    {
            ctx->lr = 0x802EC37Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC37C:
    ctx->pc = 0x802EC37Cu;
    ctx->downcount -= 6;
    // 802EC37C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC380:
    ctx->pc = 0x802EC380u;
    // 802EC380: addi    r4, r31, 116
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(116);

label_802EC384:
    ctx->pc = 0x802EC384u;
    // 802EC384: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC388:
    ctx->pc = 0x802EC388u;
    // 802EC388: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC38C:
    ctx->pc = 0x802EC38Cu;
    // 802EC38C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC390:
    ctx->pc = 0x802EC390u;
    // 802EC390: bl      0x8026F970
    {
            ctx->lr = 0x802EC394u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC394:
    ctx->pc = 0x802EC394u;
    ctx->downcount -= 6;
    // 802EC394: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC398:
    ctx->pc = 0x802EC398u;
    // 802EC398: addi    r4, r31, 132
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(132);

label_802EC39C:
    ctx->pc = 0x802EC39Cu;
    // 802EC39C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC3A0:
    ctx->pc = 0x802EC3A0u;
    // 802EC3A0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC3A4:
    ctx->pc = 0x802EC3A4u;
    // 802EC3A4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC3A8:
    ctx->pc = 0x802EC3A8u;
    // 802EC3A8: bl      0x8026F970
    {
            ctx->lr = 0x802EC3ACu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC3AC:
    ctx->pc = 0x802EC3ACu;
    ctx->downcount -= 6;
    // 802EC3AC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC3B0:
    ctx->pc = 0x802EC3B0u;
    // 802EC3B0: addi    r4, r31, 148
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(148);

label_802EC3B4:
    ctx->pc = 0x802EC3B4u;
    // 802EC3B4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC3B8:
    ctx->pc = 0x802EC3B8u;
    // 802EC3B8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC3BC:
    ctx->pc = 0x802EC3BCu;
    // 802EC3BC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC3C0:
    ctx->pc = 0x802EC3C0u;
    // 802EC3C0: bl      0x8026F970
    {
            ctx->lr = 0x802EC3C4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC3C4:
    ctx->pc = 0x802EC3C4u;
    ctx->downcount -= 6;
    // 802EC3C4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC3C8:
    ctx->pc = 0x802EC3C8u;
    // 802EC3C8: addi    r4, r31, 164
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(164);

label_802EC3CC:
    ctx->pc = 0x802EC3CCu;
    // 802EC3CC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC3D0:
    ctx->pc = 0x802EC3D0u;
    // 802EC3D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC3D4:
    ctx->pc = 0x802EC3D4u;
    // 802EC3D4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC3D8:
    ctx->pc = 0x802EC3D8u;
    // 802EC3D8: bl      0x8026F970
    {
            ctx->lr = 0x802EC3DCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC3DC:
    ctx->pc = 0x802EC3DCu;
    ctx->downcount -= 5;
    // 802EC3DC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC3E0:
    ctx->pc = 0x802EC3E0u;
    // 802EC3E0: cmpwi   r30, 1
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

label_802EC3E4:
    ctx->pc = 0x802EC3E4u;
    // 802EC3E4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC3E8:
    ctx->pc = 0x802EC3E8u;
    // 802EC3E8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC3EC:
    ctx->pc = 0x802EC3ECu;
    // 802EC3EC: bc    12, 2, 0x802EC40C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC40C;
        }
    }

label_802EC3F0:
    ctx->pc = 0x802EC3F0u;
    ctx->downcount -= 2;
    // 802EC3F0: cmpwi   r30, 2
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

label_802EC3F4:
    ctx->pc = 0x802EC3F4u;
    // 802EC3F4: bc    12, 2, 0x802EC428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC428;
        }
    }

label_802EC3F8:
    ctx->pc = 0x802EC3F8u;
    ctx->downcount -= 2;
    // 802EC3F8: cmpwi   r30, 3
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

label_802EC3FC:
    ctx->pc = 0x802EC3FCu;
    // 802EC3FC: bc    12, 2, 0x802EC45C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC45C;
        }
    }

label_802EC400:
    ctx->pc = 0x802EC400u;
    ctx->downcount -= 2;
    // 802EC400: cmpwi   r30, 4
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

label_802EC404:
    ctx->pc = 0x802EC404u;
    // 802EC404: bc    12, 2, 0x802EC4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EC4A8;
        }
    }

label_802EC408:
    ctx->pc = 0x802EC408u;
    ctx->downcount -= 1;
    // 802EC408: b       0x802EC508
    {
            goto label_802EC508;
    }

label_802EC40C:
    ctx->pc = 0x802EC40Cu;
    ctx->downcount -= 3;
    // 802EC40C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC410:
    ctx->pc = 0x802EC410u;
    // 802EC410: addi    r4, r31, 164
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(164);

label_802EC414:
    ctx->pc = 0x802EC414u;
    // 802EC414: bl      0x8026F970
    {
            ctx->lr = 0x802EC418u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC418:
    ctx->pc = 0x802EC418u;
    ctx->downcount -= 3;
    // 802EC418: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC41C:
    ctx->pc = 0x802EC41Cu;
    // 802EC41C: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC420:
    ctx->pc = 0x802EC420u;
    // 802EC420: bl      0x8027CC74
    {
            ctx->lr = 0x802EC424u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC424:
    ctx->pc = 0x802EC424u;
    ctx->downcount -= 1;
    // 802EC424: b       0x802EC508
    {
            goto label_802EC508;
    }

label_802EC428:
    ctx->pc = 0x802EC428u;
    ctx->downcount -= 3;
    // 802EC428: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC42C:
    ctx->pc = 0x802EC42Cu;
    // 802EC42C: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_802EC430:
    ctx->pc = 0x802EC430u;
    // 802EC430: bl      0x8026F970
    {
            ctx->lr = 0x802EC434u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC434:
    ctx->pc = 0x802EC434u;
    ctx->downcount -= 3;
    // 802EC434: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC438:
    ctx->pc = 0x802EC438u;
    // 802EC438: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC43C:
    ctx->pc = 0x802EC43Cu;
    // 802EC43C: bl      0x8027CC74
    {
            ctx->lr = 0x802EC440u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC440:
    ctx->pc = 0x802EC440u;
    ctx->downcount -= 3;
    // 802EC440: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC444:
    ctx->pc = 0x802EC444u;
    // 802EC444: addi    r4, r31, 116
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(116);

label_802EC448:
    ctx->pc = 0x802EC448u;
    // 802EC448: bl      0x8026F970
    {
            ctx->lr = 0x802EC44Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC44C:
    ctx->pc = 0x802EC44Cu;
    ctx->downcount -= 3;
    // 802EC44C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC450:
    ctx->pc = 0x802EC450u;
    // 802EC450: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC454:
    ctx->pc = 0x802EC454u;
    // 802EC454: bl      0x8027CC74
    {
            ctx->lr = 0x802EC458u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC458:
    ctx->pc = 0x802EC458u;
    ctx->downcount -= 1;
    // 802EC458: b       0x802EC508
    {
            goto label_802EC508;
    }

label_802EC45C:
    ctx->pc = 0x802EC45Cu;
    ctx->downcount -= 3;
    // 802EC45C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC460:
    ctx->pc = 0x802EC460u;
    // 802EC460: addi    r4, r31, 132
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(132);

label_802EC464:
    ctx->pc = 0x802EC464u;
    // 802EC464: bl      0x8026F970
    {
            ctx->lr = 0x802EC468u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC468:
    ctx->pc = 0x802EC468u;
    ctx->downcount -= 3;
    // 802EC468: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC46C:
    ctx->pc = 0x802EC46Cu;
    // 802EC46C: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC470:
    ctx->pc = 0x802EC470u;
    // 802EC470: bl      0x8027CC74
    {
            ctx->lr = 0x802EC474u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC474:
    ctx->pc = 0x802EC474u;
    ctx->downcount -= 3;
    // 802EC474: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC478:
    ctx->pc = 0x802EC478u;
    // 802EC478: addi    r4, r31, 164
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(164);

label_802EC47C:
    ctx->pc = 0x802EC47Cu;
    // 802EC47C: bl      0x8026F970
    {
            ctx->lr = 0x802EC480u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC480:
    ctx->pc = 0x802EC480u;
    ctx->downcount -= 3;
    // 802EC480: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC484:
    ctx->pc = 0x802EC484u;
    // 802EC484: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC488:
    ctx->pc = 0x802EC488u;
    // 802EC488: bl      0x8027CC74
    {
            ctx->lr = 0x802EC48Cu;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC48C:
    ctx->pc = 0x802EC48Cu;
    ctx->downcount -= 3;
    // 802EC48C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC490:
    ctx->pc = 0x802EC490u;
    // 802EC490: addi    r4, r31, 148
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(148);

label_802EC494:
    ctx->pc = 0x802EC494u;
    // 802EC494: bl      0x8026F970
    {
            ctx->lr = 0x802EC498u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC498:
    ctx->pc = 0x802EC498u;
    ctx->downcount -= 3;
    // 802EC498: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC49C:
    ctx->pc = 0x802EC49Cu;
    // 802EC49C: lwz     r3, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC4A0:
    ctx->pc = 0x802EC4A0u;
    // 802EC4A0: bl      0x8027CC74
    {
            ctx->lr = 0x802EC4A4u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC4A4:
    ctx->pc = 0x802EC4A4u;
    ctx->downcount -= 1;
    // 802EC4A4: b       0x802EC508
    {
            goto label_802EC508;
    }

label_802EC4A8:
    ctx->pc = 0x802EC4A8u;
    ctx->downcount -= 3;
    // 802EC4A8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC4AC:
    ctx->pc = 0x802EC4ACu;
    // 802EC4AC: addi    r4, r31, 70
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(70);

label_802EC4B0:
    ctx->pc = 0x802EC4B0u;
    // 802EC4B0: bl      0x8026F970
    {
            ctx->lr = 0x802EC4B4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC4B4:
    ctx->pc = 0x802EC4B4u;
    ctx->downcount -= 3;
    // 802EC4B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC4B8:
    ctx->pc = 0x802EC4B8u;
    // 802EC4B8: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC4BC:
    ctx->pc = 0x802EC4BCu;
    // 802EC4BC: bl      0x8027CC74
    {
            ctx->lr = 0x802EC4C0u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC4C0:
    ctx->pc = 0x802EC4C0u;
    ctx->downcount -= 3;
    // 802EC4C0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC4C4:
    ctx->pc = 0x802EC4C4u;
    // 802EC4C4: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_802EC4C8:
    ctx->pc = 0x802EC4C8u;
    // 802EC4C8: bl      0x8026F970
    {
            ctx->lr = 0x802EC4CCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC4CC:
    ctx->pc = 0x802EC4CCu;
    ctx->downcount -= 3;
    // 802EC4CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC4D0:
    ctx->pc = 0x802EC4D0u;
    // 802EC4D0: lwz     r3, 276(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC4D4:
    ctx->pc = 0x802EC4D4u;
    // 802EC4D4: bl      0x8027CC74
    {
            ctx->lr = 0x802EC4D8u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC4D8:
    ctx->pc = 0x802EC4D8u;
    ctx->downcount -= 3;
    // 802EC4D8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC4DC:
    ctx->pc = 0x802EC4DCu;
    // 802EC4DC: addi    r4, r31, 116
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(116);

label_802EC4E0:
    ctx->pc = 0x802EC4E0u;
    // 802EC4E0: bl      0x8026F970
    {
            ctx->lr = 0x802EC4E4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC4E4:
    ctx->pc = 0x802EC4E4u;
    ctx->downcount -= 3;
    // 802EC4E4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC4E8:
    ctx->pc = 0x802EC4E8u;
    // 802EC4E8: lwz     r3, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC4EC:
    ctx->pc = 0x802EC4ECu;
    // 802EC4EC: bl      0x8027CC74
    {
            ctx->lr = 0x802EC4F0u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC4F0:
    ctx->pc = 0x802EC4F0u;
    ctx->downcount -= 3;
    // 802EC4F0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802EC4F4:
    ctx->pc = 0x802EC4F4u;
    // 802EC4F4: addi    r4, r31, 85
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(85);

label_802EC4F8:
    ctx->pc = 0x802EC4F8u;
    // 802EC4F8: bl      0x8026F970
    {
            ctx->lr = 0x802EC4FCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC4FC:
    ctx->pc = 0x802EC4FCu;
    ctx->downcount -= 3;
    // 802EC4FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC500:
    ctx->pc = 0x802EC500u;
    // 802EC500: lwz     r3, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC504:
    ctx->pc = 0x802EC504u;
    // 802EC504: bl      0x8027CC74
    {
            ctx->lr = 0x802EC508u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC508:
    ctx->pc = 0x802EC508u;
    ctx->downcount -= 16;
    // 802EC508: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC50C:
    ctx->pc = 0x802EC50Cu;
    // 802EC50C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC510:
    ctx->pc = 0x802EC510u;
    // 802EC510: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC514:
    ctx->pc = 0x802EC514u;
    // 802EC514: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EC518:
    ctx->pc = 0x802EC518u;
    // 802EC518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC51C:
    ctx->pc = 0x802EC51Cu;
    ctx->downcount -= 21;
    // 802EC51C: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC520:
    ctx->pc = 0x802EC520u;
    // 802EC520: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC524:
    ctx->pc = 0x802EC524u;
    // 802EC524: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC528:
    ctx->pc = 0x802EC528u;
    // 802EC528: stmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC52C:
    ctx->pc = 0x802EC52Cu;
    // 802EC52C: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC530:
    ctx->pc = 0x802EC530u;
    // 802EC530: or   r29, r6, r6
    {
        ctx->gpr[29] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EC534:
    ctx->pc = 0x802EC534u;
    // 802EC534: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC538:
    ctx->pc = 0x802EC538u;
    // 802EC538: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EC53C:
    ctx->pc = 0x802EC53Cu;
    // 802EC53C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC540:
    ctx->pc = 0x802EC540u;
    // 802EC540: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC544:
    ctx->pc = 0x802EC544u;
    // 802EC544: bl      0x802ECDA4
    {
            ctx->lr = 0x802EC548u;
            goto label_802ECDA4;
    }

label_802EC548:
    ctx->pc = 0x802EC548u;
    ctx->downcount -= 2;
    // 802EC548: cmpwi   r3, 1
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

label_802EC54C:
    ctx->pc = 0x802EC54Cu;
    // 802EC54C: bc    4, 2, 0x802EC608
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC608;
        }
    }

label_802EC550:
    ctx->pc = 0x802EC550u;
    ctx->downcount -= 4;
    // 802EC550: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC554:
    ctx->pc = 0x802EC554u;
    // 802EC554: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC558:
    ctx->pc = 0x802EC558u;
    // 802EC558: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EC55C:
    ctx->pc = 0x802EC55Cu;
    // 802EC55C: bl      0x802ECD50
    {
            ctx->lr = 0x802EC560u;
            goto label_802ECD50;
    }

label_802EC560:
    ctx->pc = 0x802EC560u;
    ctx->downcount -= 9;
    // 802EC560: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_802EC564:
    ctx->pc = 0x802EC564u;
    // 802EC564: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC568:
    ctx->pc = 0x802EC568u;
    // 802EC568: addi    r30, r30, 11440
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(11440);

label_802EC56C:
    ctx->pc = 0x802EC56Cu;
    // 802EC56C: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC570:
    ctx->pc = 0x802EC570u;
    // 802EC570: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC574:
    ctx->pc = 0x802EC574u;
    // 802EC574: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC578:
    ctx->pc = 0x802EC578u;
    // 802EC578: addi    r5, r30, 180
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(180);

label_802EC57C:
    ctx->pc = 0x802EC57Cu;
    // 802EC57C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC580:
    ctx->pc = 0x802EC580u;
    // 802EC580: bl      0x8000D074
    {
            ctx->lr = 0x802EC584u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC584:
    ctx->pc = 0x802EC584u;
    ctx->downcount -= 3;
    // 802EC584: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC588:
    ctx->pc = 0x802EC588u;
    // 802EC588: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC58C:
    ctx->pc = 0x802EC58Cu;
    // 802EC58C: bl      0x8026F970
    {
            ctx->lr = 0x802EC590u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC590:
    ctx->pc = 0x802EC590u;
    ctx->downcount -= 5;
    // 802EC590: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802EC594:
    ctx->pc = 0x802EC594u;
    // 802EC594: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC598:
    ctx->pc = 0x802EC598u;
    // 802EC598: add   r3, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EC59C:
    ctx->pc = 0x802EC59Cu;
    // 802EC59C: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC5A0:
    ctx->pc = 0x802EC5A0u;
    // 802EC5A0: bl      0x8027CC74
    {
            ctx->lr = 0x802EC5A4u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC5A4:
    ctx->pc = 0x802EC5A4u;
    ctx->downcount -= 6;
    // 802EC5A4: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC5A8:
    ctx->pc = 0x802EC5A8u;
    // 802EC5A8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC5AC:
    ctx->pc = 0x802EC5ACu;
    // 802EC5AC: addi    r5, r30, 197
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(197);

label_802EC5B0:
    ctx->pc = 0x802EC5B0u;
    // 802EC5B0: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC5B4:
    ctx->pc = 0x802EC5B4u;
    // 802EC5B4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC5B8:
    ctx->pc = 0x802EC5B8u;
    // 802EC5B8: bl      0x8000D074
    {
            ctx->lr = 0x802EC5BCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC5BC:
    ctx->pc = 0x802EC5BCu;
    ctx->downcount -= 3;
    // 802EC5BC: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC5C0:
    ctx->pc = 0x802EC5C0u;
    // 802EC5C0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC5C4:
    ctx->pc = 0x802EC5C4u;
    // 802EC5C4: bl      0x8026F970
    {
            ctx->lr = 0x802EC5C8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC5C8:
    ctx->pc = 0x802EC5C8u;
    ctx->downcount -= 9;
    // 802EC5C8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC5CC:
    ctx->pc = 0x802EC5CCu;
    // 802EC5CC: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC5D0:
    ctx->pc = 0x802EC5D0u;
    // 802EC5D0: addi    r5, r30, 214
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(214);

label_802EC5D4:
    ctx->pc = 0x802EC5D4u;
    // 802EC5D4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC5D8:
    ctx->pc = 0x802EC5D8u;
    // 802EC5D8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC5DC:
    ctx->pc = 0x802EC5DCu;
    // 802EC5DC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC5E0:
    ctx->pc = 0x802EC5E0u;
    // 802EC5E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC5E4:
    ctx->pc = 0x802EC5E4u;
    // 802EC5E4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC5E8:
    ctx->pc = 0x802EC5E8u;
    // 802EC5E8: bl      0x8000D074
    {
            ctx->lr = 0x802EC5ECu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC5EC:
    ctx->pc = 0x802EC5ECu;
    ctx->downcount -= 3;
    // 802EC5EC: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC5F0:
    ctx->pc = 0x802EC5F0u;
    // 802EC5F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC5F4:
    ctx->pc = 0x802EC5F4u;
    // 802EC5F4: bl      0x8026F970
    {
            ctx->lr = 0x802EC5F8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC5F8:
    ctx->pc = 0x802EC5F8u;
    ctx->downcount -= 4;
    // 802EC5F8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC5FC:
    ctx->pc = 0x802EC5FCu;
    // 802EC5FC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC600:
    ctx->pc = 0x802EC600u;
    // 802EC600: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC604:
    ctx->pc = 0x802EC604u;
    // 802EC604: b       0x802EC6E0
    {
            goto label_802EC6E0;
    }

label_802EC608:
    ctx->pc = 0x802EC608u;
    ctx->downcount -= 2;
    // 802EC608: cmpwi   r3, 2
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

label_802EC60C:
    ctx->pc = 0x802EC60Cu;
    // 802EC60C: bc    4, 2, 0x802EC6E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC6E0;
        }
    }

label_802EC610:
    ctx->pc = 0x802EC610u;
    ctx->downcount -= 4;
    // 802EC610: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC614:
    ctx->pc = 0x802EC614u;
    // 802EC614: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC618:
    ctx->pc = 0x802EC618u;
    // 802EC618: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EC61C:
    ctx->pc = 0x802EC61Cu;
    // 802EC61C: bl      0x802ECD50
    {
            ctx->lr = 0x802EC620u;
            goto label_802ECD50;
    }

label_802EC620:
    ctx->pc = 0x802EC620u;
    ctx->downcount -= 9;
    // 802EC620: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_802EC624:
    ctx->pc = 0x802EC624u;
    // 802EC624: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC628:
    ctx->pc = 0x802EC628u;
    // 802EC628: addi    r30, r30, 11440
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(11440);

label_802EC62C:
    ctx->pc = 0x802EC62Cu;
    // 802EC62C: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC630:
    ctx->pc = 0x802EC630u;
    // 802EC630: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC634:
    ctx->pc = 0x802EC634u;
    // 802EC634: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC638:
    ctx->pc = 0x802EC638u;
    // 802EC638: addi    r5, r30, 197
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(197);

label_802EC63C:
    ctx->pc = 0x802EC63Cu;
    // 802EC63C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC640:
    ctx->pc = 0x802EC640u;
    // 802EC640: bl      0x8000D074
    {
            ctx->lr = 0x802EC644u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC644:
    ctx->pc = 0x802EC644u;
    ctx->downcount -= 3;
    // 802EC644: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC648:
    ctx->pc = 0x802EC648u;
    // 802EC648: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC64C:
    ctx->pc = 0x802EC64Cu;
    // 802EC64C: bl      0x8026F970
    {
            ctx->lr = 0x802EC650u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC650:
    ctx->pc = 0x802EC650u;
    ctx->downcount -= 5;
    // 802EC650: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802EC654:
    ctx->pc = 0x802EC654u;
    // 802EC654: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC658:
    ctx->pc = 0x802EC658u;
    // 802EC658: add   r3, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EC65C:
    ctx->pc = 0x802EC65Cu;
    // 802EC65C: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC660:
    ctx->pc = 0x802EC660u;
    // 802EC660: bl      0x8027CC74
    {
            ctx->lr = 0x802EC664u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC664:
    ctx->pc = 0x802EC664u;
    ctx->downcount -= 4;
    // 802EC664: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC668:
    ctx->pc = 0x802EC668u;
    // 802EC668: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EC66C:
    ctx->pc = 0x802EC66Cu;
    // 802EC66C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802EC670:
    ctx->pc = 0x802EC670u;
    // 802EC670: bl      0x802ECD50
    {
            ctx->lr = 0x802EC674u;
            goto label_802ECD50;
    }

label_802EC674:
    ctx->pc = 0x802EC674u;
    ctx->downcount -= 7;
    // 802EC674: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC678:
    ctx->pc = 0x802EC678u;
    // 802EC678: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC67C:
    ctx->pc = 0x802EC67Cu;
    // 802EC67C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC680:
    ctx->pc = 0x802EC680u;
    // 802EC680: addi    r5, r30, 214
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(214);

label_802EC684:
    ctx->pc = 0x802EC684u;
    // 802EC684: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC688:
    ctx->pc = 0x802EC688u;
    // 802EC688: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC68C:
    ctx->pc = 0x802EC68Cu;
    // 802EC68C: bl      0x8000D074
    {
            ctx->lr = 0x802EC690u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC690:
    ctx->pc = 0x802EC690u;
    ctx->downcount -= 3;
    // 802EC690: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC694:
    ctx->pc = 0x802EC694u;
    // 802EC694: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC698:
    ctx->pc = 0x802EC698u;
    // 802EC698: bl      0x8026F970
    {
            ctx->lr = 0x802EC69Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC69C:
    ctx->pc = 0x802EC69Cu;
    ctx->downcount -= 5;
    // 802EC69C: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_802EC6A0:
    ctx->pc = 0x802EC6A0u;
    // 802EC6A0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC6A4:
    ctx->pc = 0x802EC6A4u;
    // 802EC6A4: add   r3, r26, r0
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EC6A8:
    ctx->pc = 0x802EC6A8u;
    // 802EC6A8: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC6AC:
    ctx->pc = 0x802EC6ACu;
    // 802EC6AC: bl      0x8027CC74
    {
            ctx->lr = 0x802EC6B0u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802EC6B0:
    ctx->pc = 0x802EC6B0u;
    ctx->downcount -= 6;
    // 802EC6B0: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EC6B4:
    ctx->pc = 0x802EC6B4u;
    // 802EC6B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC6B8:
    ctx->pc = 0x802EC6B8u;
    // 802EC6B8: addi    r5, r30, 180
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(180);

label_802EC6BC:
    ctx->pc = 0x802EC6BCu;
    // 802EC6BC: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_802EC6C0:
    ctx->pc = 0x802EC6C0u;
    // 802EC6C0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC6C4:
    ctx->pc = 0x802EC6C4u;
    // 802EC6C4: bl      0x8000D074
    {
            ctx->lr = 0x802EC6C8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802EC6C8:
    ctx->pc = 0x802EC6C8u;
    ctx->downcount -= 3;
    // 802EC6C8: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802EC6CC:
    ctx->pc = 0x802EC6CCu;
    // 802EC6CC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC6D0:
    ctx->pc = 0x802EC6D0u;
    // 802EC6D0: bl      0x8026F970
    {
            ctx->lr = 0x802EC6D4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC6D4:
    ctx->pc = 0x802EC6D4u;
    ctx->downcount -= 3;
    // 802EC6D4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC6D8:
    ctx->pc = 0x802EC6D8u;
    // 802EC6D8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC6DC:
    ctx->pc = 0x802EC6DCu;
    // 802EC6DC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC6E0:
    ctx->pc = 0x802EC6E0u;
    ctx->downcount -= 16;
    // 802EC6E0: lmw     r26, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC6E4:
    ctx->pc = 0x802EC6E4u;
    // 802EC6E4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC6E8:
    ctx->pc = 0x802EC6E8u;
    // 802EC6E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC6EC:
    ctx->pc = 0x802EC6ECu;
    // 802EC6EC: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802EC6F0:
    ctx->pc = 0x802EC6F0u;
    // 802EC6F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC6F4:
    ctx->pc = 0x802EC6F4u;
    ctx->downcount -= 18;
    // 802EC6F4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC6F8:
    ctx->pc = 0x802EC6F8u;
    // 802EC6F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC6FC:
    ctx->pc = 0x802EC6FCu;
    // 802EC6FC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC700:
    ctx->pc = 0x802EC700u;
    // 802EC700: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC704:
    ctx->pc = 0x802EC704u;
    // 802EC704: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC708:
    ctx->pc = 0x802EC708u;
    // 802EC708: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC70C:
    ctx->pc = 0x802EC70Cu;
    // 802EC70C: lwz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC710:
    ctx->pc = 0x802EC710u;
    // 802EC710: bl      0x80292418
    {
            ctx->lr = 0x802EC714u;
            ctx->pc = 0x80292418u;
            return;
    }

label_802EC714:
    ctx->pc = 0x802EC714u;
    ctx->downcount -= 2;
    // 802EC714: cmpwi   r3, 1
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

label_802EC718:
    ctx->pc = 0x802EC718u;
    // 802EC718: bc    4, 2, 0x802EC78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC78C;
        }
    }

label_802EC71C:
    ctx->pc = 0x802EC71Cu;
    ctx->downcount -= 4;
    // 802EC71C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC720:
    ctx->pc = 0x802EC720u;
    // 802EC720: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC724:
    ctx->pc = 0x802EC724u;
    // 802EC724: cmpw    r3, r0
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

label_802EC728:
    ctx->pc = 0x802EC728u;
    // 802EC728: bc    4, 0, 0x802EC74C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC74C;
        }
    }

label_802EC72C:
    ctx->pc = 0x802EC72Cu;
    ctx->downcount -= 8;
    // 802EC72C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EC730:
    ctx->pc = 0x802EC730u;
    // 802EC730: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_802EC734:
    ctx->pc = 0x802EC734u;
    // 802EC734: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC738:
    ctx->pc = 0x802EC738u;
    // 802EC738: stw     r4, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC73C:
    ctx->pc = 0x802EC73Cu;
    // 802EC73C: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC740:
    ctx->pc = 0x802EC740u;
    // 802EC740: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC744:
    ctx->pc = 0x802EC744u;
    // 802EC744: stw     r4, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC748:
    ctx->pc = 0x802EC748u;
    // 802EC748: b       0x802EC7F8
    {
            goto label_802EC7F8;
    }

label_802EC74C:
    ctx->pc = 0x802EC74Cu;
    ctx->downcount -= 1;
    // 802EC74C: bc    4, 2, 0x802EC76C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC76C;
        }
    }

label_802EC750:
    ctx->pc = 0x802EC750u;
    ctx->downcount -= 7;
    // 802EC750: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802EC754:
    ctx->pc = 0x802EC754u;
    // 802EC754: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC758:
    ctx->pc = 0x802EC758u;
    // 802EC758: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC75C:
    ctx->pc = 0x802EC75Cu;
    // 802EC75C: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC760:
    ctx->pc = 0x802EC760u;
    // 802EC760: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC764:
    ctx->pc = 0x802EC764u;
    // 802EC764: stw     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC768:
    ctx->pc = 0x802EC768u;
    // 802EC768: b       0x802EC7F8
    {
            goto label_802EC7F8;
    }

label_802EC76C:
    ctx->pc = 0x802EC76Cu;
    ctx->downcount -= 8;
    // 802EC76C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802EC770:
    ctx->pc = 0x802EC770u;
    // 802EC770: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EC774:
    ctx->pc = 0x802EC774u;
    // 802EC774: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC778:
    ctx->pc = 0x802EC778u;
    // 802EC778: stw     r4, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC77C:
    ctx->pc = 0x802EC77Cu;
    // 802EC77C: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC780:
    ctx->pc = 0x802EC780u;
    // 802EC780: stw     r3, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC784:
    ctx->pc = 0x802EC784u;
    // 802EC784: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC788:
    ctx->pc = 0x802EC788u;
    // 802EC788: b       0x802EC7F8
    {
            goto label_802EC7F8;
    }

label_802EC78C:
    ctx->pc = 0x802EC78Cu;
    ctx->downcount -= 4;
    // 802EC78C: lwz     r0, 16(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC790:
    ctx->pc = 0x802EC790u;
    // 802EC790: lwz     r3, 12(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC794:
    ctx->pc = 0x802EC794u;
    // 802EC794: cmpw    r3, r0
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

label_802EC798:
    ctx->pc = 0x802EC798u;
    // 802EC798: bc    4, 1, 0x802EC7BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC7BC;
        }
    }

label_802EC79C:
    ctx->pc = 0x802EC79Cu;
    ctx->downcount -= 8;
    // 802EC79C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EC7A0:
    ctx->pc = 0x802EC7A0u;
    // 802EC7A0: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_802EC7A4:
    ctx->pc = 0x802EC7A4u;
    // 802EC7A4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC7A8:
    ctx->pc = 0x802EC7A8u;
    // 802EC7A8: stw     r4, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC7AC:
    ctx->pc = 0x802EC7ACu;
    // 802EC7AC: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7B0:
    ctx->pc = 0x802EC7B0u;
    // 802EC7B0: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC7B4:
    ctx->pc = 0x802EC7B4u;
    // 802EC7B4: stw     r4, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC7B8:
    ctx->pc = 0x802EC7B8u;
    // 802EC7B8: b       0x802EC7F8
    {
            goto label_802EC7F8;
    }

label_802EC7BC:
    ctx->pc = 0x802EC7BCu;
    ctx->downcount -= 1;
    // 802EC7BC: bc    4, 2, 0x802EC7DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EC7DC;
        }
    }

label_802EC7C0:
    ctx->pc = 0x802EC7C0u;
    ctx->downcount -= 7;
    // 802EC7C0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802EC7C4:
    ctx->pc = 0x802EC7C4u;
    // 802EC7C4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC7C8:
    ctx->pc = 0x802EC7C8u;
    // 802EC7C8: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7CC:
    ctx->pc = 0x802EC7CCu;
    // 802EC7CC: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7D0:
    ctx->pc = 0x802EC7D0u;
    // 802EC7D0: stw     r0, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC7D4:
    ctx->pc = 0x802EC7D4u;
    // 802EC7D4: stw     r3, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7D8:
    ctx->pc = 0x802EC7D8u;
    // 802EC7D8: b       0x802EC7F8
    {
            goto label_802EC7F8;
    }

label_802EC7DC:
    ctx->pc = 0x802EC7DCu;
    ctx->downcount -= 7;
    // 802EC7DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802EC7E0:
    ctx->pc = 0x802EC7E0u;
    // 802EC7E0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EC7E4:
    ctx->pc = 0x802EC7E4u;
    // 802EC7E4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EC7E8:
    ctx->pc = 0x802EC7E8u;
    // 802EC7E8: stw     r4, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EC7EC:
    ctx->pc = 0x802EC7ECu;
    // 802EC7EC: stw     r3, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7F0:
    ctx->pc = 0x802EC7F0u;
    // 802EC7F0: stw     r3, 296(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EC7F4:
    ctx->pc = 0x802EC7F4u;
    // 802EC7F4: stw     r0, 300(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC7F8:
    ctx->pc = 0x802EC7F8u;
    ctx->downcount -= 16;
    // 802EC7F8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EC7FC:
    ctx->pc = 0x802EC7FCu;
    // 802EC7FC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC800:
    ctx->pc = 0x802EC800u;
    // 802EC800: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EC804:
    ctx->pc = 0x802EC804u;
    // 802EC804: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EC808:
    ctx->pc = 0x802EC808u;
    // 802EC808: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EC80C:
    ctx->pc = 0x802EC80Cu;
    ctx->downcount -= 17;
    // 802EC80C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EC810:
    ctx->pc = 0x802EC810u;
    // 802EC810: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EC814:
    ctx->pc = 0x802EC814u;
    // 802EC814: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EC818:
    ctx->pc = 0x802EC818u;
    // 802EC818: stmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EC81C:
    ctx->pc = 0x802EC81Cu;
    // 802EC81C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC820:
    ctx->pc = 0x802EC820u;
    // 802EC820: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EC824:
    ctx->pc = 0x802EC824u;
    // 802EC824: bl      0x802EC6F4
    {
            ctx->lr = 0x802EC828u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC6F4u;
                return;
            }
            goto label_802EC6F4;
    }

label_802EC828:
    ctx->pc = 0x802EC828u;
    ctx->downcount -= 8;
    // 802EC828: lwz     r4, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EC82C:
    ctx->pc = 0x802EC82Cu;
    // 802EC82C: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_802EC830:
    ctx->pc = 0x802EC830u;
    // 802EC830: addi    r28, r28, 11440
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(11440);

label_802EC834:
    ctx->pc = 0x802EC834u;
    // 802EC834: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC838:
    ctx->pc = 0x802EC838u;
    // 802EC838: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EC83C:
    ctx->pc = 0x802EC83Cu;
    // 802EC83C: subfe   r27, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[27] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EC840:
    ctx->pc = 0x802EC840u;
    // 802EC840: addi    r4, r28, 231
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(231);

label_802EC844:
    ctx->pc = 0x802EC844u;
    // 802EC844: bl      0x8026F958
    {
            ctx->lr = 0x802EC848u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_802EC848:
    ctx->pc = 0x802EC848u;
    ctx->downcount -= 5;
    // 802EC848: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC84C:
    ctx->pc = 0x802EC84Cu;
    // 802EC84C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC850:
    ctx->pc = 0x802EC850u;
    // 802EC850: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC854:
    ctx->pc = 0x802EC854u;
    // 802EC854: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC858:
    ctx->pc = 0x802EC858u;
    // 802EC858: bl      0x8026F720
    {
            ctx->lr = 0x802EC85Cu;
            ctx->pc = 0x8026F720u;
            return;
    }

label_802EC85C:
    ctx->pc = 0x802EC85Cu;
    ctx->downcount -= 3;
    // 802EC85C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC860:
    ctx->pc = 0x802EC860u;
    // 802EC860: addi    r4, r28, 243
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(243);

label_802EC864:
    ctx->pc = 0x802EC864u;
    // 802EC864: bl      0x8026F960
    {
            ctx->lr = 0x802EC868u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802EC868:
    ctx->pc = 0x802EC868u;
    ctx->downcount -= 5;
    // 802EC868: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC86C:
    ctx->pc = 0x802EC86Cu;
    // 802EC86C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC870:
    ctx->pc = 0x802EC870u;
    // 802EC870: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC874:
    ctx->pc = 0x802EC874u;
    // 802EC874: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC878:
    ctx->pc = 0x802EC878u;
    // 802EC878: bl      0x8026F760
    {
            ctx->lr = 0x802EC87Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802EC87C:
    ctx->pc = 0x802EC87Cu;
    ctx->downcount -= 3;
    // 802EC87C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC880:
    ctx->pc = 0x802EC880u;
    // 802EC880: addi    r4, r28, 255
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(255);

label_802EC884:
    ctx->pc = 0x802EC884u;
    // 802EC884: bl      0x8026F960
    {
            ctx->lr = 0x802EC888u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802EC888:
    ctx->pc = 0x802EC888u;
    ctx->downcount -= 5;
    // 802EC888: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC88C:
    ctx->pc = 0x802EC88Cu;
    // 802EC88C: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC890:
    ctx->pc = 0x802EC890u;
    // 802EC890: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC894:
    ctx->pc = 0x802EC894u;
    // 802EC894: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC898:
    ctx->pc = 0x802EC898u;
    // 802EC898: bl      0x8026F760
    {
            ctx->lr = 0x802EC89Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802EC89C:
    ctx->pc = 0x802EC89Cu;
    ctx->downcount -= 3;
    // 802EC89C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC8A0:
    ctx->pc = 0x802EC8A0u;
    // 802EC8A0: addi    r4, r28, 268
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(268);

label_802EC8A4:
    ctx->pc = 0x802EC8A4u;
    // 802EC8A4: bl      0x8026F970
    {
            ctx->lr = 0x802EC8A8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC8A8:
    ctx->pc = 0x802EC8A8u;
    ctx->downcount -= 11;
    // 802EC8A8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC8AC:
    ctx->pc = 0x802EC8ACu;
    // 802EC8AC: rlwinm r26, r27, 2, 0, 29
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0xFFFFFFFCu;
    }

label_802EC8B0:
    ctx->pc = 0x802EC8B0u;
    // 802EC8B0: add   r7, r30, r26
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802EC8B4:
    ctx->pc = 0x802EC8B4u;
    // 802EC8B4: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_802EC8B8:
    ctx->pc = 0x802EC8B8u;
    // 802EC8B8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC8BC:
    ctx->pc = 0x802EC8BCu;
    // 802EC8BC: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_802EC8C0:
    ctx->pc = 0x802EC8C0u;
    // 802EC8C0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802EC8C4:
    ctx->pc = 0x802EC8C4u;
    // 802EC8C4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC8C8:
    ctx->pc = 0x802EC8C8u;
    // 802EC8C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC8CC:
    ctx->pc = 0x802EC8CCu;
    // 802EC8CC: lwz     r3, 288(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC8D0:
    ctx->pc = 0x802EC8D0u;
    // 802EC8D0: bl      0x8034E00C
    {
            ctx->lr = 0x802EC8D4u;
            ctx->pc = 0x8034E00Cu;
            return;
    }

label_802EC8D4:
    ctx->pc = 0x802EC8D4u;
    ctx->downcount -= 3;
    // 802EC8D4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC8D8:
    ctx->pc = 0x802EC8D8u;
    // 802EC8D8: addi    r4, r28, 279
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(279);

label_802EC8DC:
    ctx->pc = 0x802EC8DCu;
    // 802EC8DC: bl      0x8026F968
    {
            ctx->lr = 0x802EC8E0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EC8E0:
    ctx->pc = 0x802EC8E0u;
    ctx->downcount -= 7;
    // 802EC8E0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC8E4:
    ctx->pc = 0x802EC8E4u;
    // 802EC8E4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC8E8:
    ctx->pc = 0x802EC8E8u;
    // 802EC8E8: addi    r7, r1, 24
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(24);

label_802EC8EC:
    ctx->pc = 0x802EC8ECu;
    // 802EC8EC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802EC8F0:
    ctx->pc = 0x802EC8F0u;
    // 802EC8F0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EC8F4:
    ctx->pc = 0x802EC8F4u;
    // 802EC8F4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802EC8F8:
    ctx->pc = 0x802EC8F8u;
    // 802EC8F8: bl      0x8026F8C0
    {
            ctx->lr = 0x802EC8FCu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802EC8FC:
    ctx->pc = 0x802EC8FCu;
    ctx->downcount -= 6;
    // 802EC8FC: add   r3, r31, r26
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EC900:
    ctx->pc = 0x802EC900u;
    // 802EC900: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EC904:
    ctx->pc = 0x802EC904u;
    // 802EC904: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EC908:
    ctx->pc = 0x802EC908u;
    // 802EC908: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC90C:
    ctx->pc = 0x802EC90Cu;
    // 802EC90C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EC910:
    ctx->pc = 0x802EC910u;
    // 802EC910: bl      0x802EC180
    {
            ctx->lr = 0x802EC914u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC180u;
                return;
            }
            goto label_802EC180;
    }

label_802EC914:
    ctx->pc = 0x802EC914u;
    ctx->downcount -= 5;
    // 802EC914: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EC918:
    ctx->pc = 0x802EC918u;
    // 802EC918: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EC91C:
    ctx->pc = 0x802EC91Cu;
    // 802EC91C: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EC920:
    ctx->pc = 0x802EC920u;
    // 802EC920: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EC924:
    ctx->pc = 0x802EC924u;
    // 802EC924: bl      0x802EC51C
    {
            ctx->lr = 0x802EC928u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC51Cu;
                return;
            }
            goto label_802EC51C;
    }

label_802EC928:
    ctx->pc = 0x802EC928u;
    ctx->downcount -= 6;
    // 802EC928: lwz     r0, 296(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(296);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EC92C:
    ctx->pc = 0x802EC92Cu;
    // 802EC92C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC930:
    ctx->pc = 0x802EC930u;
    // 802EC930: addi    r4, r28, 289
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(289);

label_802EC934:
    ctx->pc = 0x802EC934u;
    // 802EC934: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802EC938:
    ctx->pc = 0x802EC938u;
    // 802EC938: rlwinm r26, r0, 27, 5, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802EC93C:
    ctx->pc = 0x802EC93Cu;
    // 802EC93C: bl      0x8026F958
    {
            ctx->lr = 0x802EC940u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_802EC940:
    ctx->pc = 0x802EC940u;
    ctx->downcount -= 5;
    // 802EC940: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC944:
    ctx->pc = 0x802EC944u;
    // 802EC944: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802EC948:
    ctx->pc = 0x802EC948u;
    // 802EC948: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC94C:
    ctx->pc = 0x802EC94Cu;
    // 802EC94C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC950:
    ctx->pc = 0x802EC950u;
    // 802EC950: bl      0x8026F720
    {
            ctx->lr = 0x802EC954u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_802EC954:
    ctx->pc = 0x802EC954u;
    ctx->downcount -= 3;
    // 802EC954: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC958:
    ctx->pc = 0x802EC958u;
    // 802EC958: addi    r4, r28, 301
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(301);

label_802EC95C:
    ctx->pc = 0x802EC95Cu;
    // 802EC95C: bl      0x8026F960
    {
            ctx->lr = 0x802EC960u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802EC960:
    ctx->pc = 0x802EC960u;
    ctx->downcount -= 5;
    // 802EC960: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC964:
    ctx->pc = 0x802EC964u;
    // 802EC964: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802EC968:
    ctx->pc = 0x802EC968u;
    // 802EC968: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC96C:
    ctx->pc = 0x802EC96Cu;
    // 802EC96C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC970:
    ctx->pc = 0x802EC970u;
    // 802EC970: bl      0x8026F760
    {
            ctx->lr = 0x802EC974u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802EC974:
    ctx->pc = 0x802EC974u;
    ctx->downcount -= 3;
    // 802EC974: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC978:
    ctx->pc = 0x802EC978u;
    // 802EC978: addi    r4, r28, 313
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(313);

label_802EC97C:
    ctx->pc = 0x802EC97Cu;
    // 802EC97C: bl      0x8026F960
    {
            ctx->lr = 0x802EC980u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802EC980:
    ctx->pc = 0x802EC980u;
    ctx->downcount -= 5;
    // 802EC980: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC984:
    ctx->pc = 0x802EC984u;
    // 802EC984: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802EC988:
    ctx->pc = 0x802EC988u;
    // 802EC988: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC98C:
    ctx->pc = 0x802EC98Cu;
    // 802EC98C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC990:
    ctx->pc = 0x802EC990u;
    // 802EC990: bl      0x8026F760
    {
            ctx->lr = 0x802EC994u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802EC994:
    ctx->pc = 0x802EC994u;
    ctx->downcount -= 9;
    // 802EC994: rlwinm r25, r26, 2, 0, 29
    {
        ctx->gpr[25] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_802EC998:
    ctx->pc = 0x802EC998u;
    // 802EC998: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC99C:
    ctx->pc = 0x802EC99Cu;
    // 802EC99C: add   r29, r30, r25
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_802EC9A0:
    ctx->pc = 0x802EC9A0u;
    // 802EC9A0: addi    r4, r28, 326
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(326);

label_802EC9A4:
    ctx->pc = 0x802EC9A4u;
    // 802EC9A4: lwz     r5, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EC9A8:
    ctx->pc = 0x802EC9A8u;
    // 802EC9A8: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_802EC9AC:
    ctx->pc = 0x802EC9ACu;
    // 802EC9AC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802EC9B0:
    ctx->pc = 0x802EC9B0u;
    // 802EC9B0: rlwinm r27, r0, 27, 5, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802EC9B4:
    ctx->pc = 0x802EC9B4u;
    // 802EC9B4: bl      0x8026F970
    {
            ctx->lr = 0x802EC9B8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802EC9B8:
    ctx->pc = 0x802EC9B8u;
    ctx->downcount -= 9;
    // 802EC9B8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EC9BC:
    ctx->pc = 0x802EC9BCu;
    // 802EC9BC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC9C0:
    ctx->pc = 0x802EC9C0u;
    // 802EC9C0: li      r5, 8
    ctx->gpr[5] = (u32)(s32)(8);

label_802EC9C4:
    ctx->pc = 0x802EC9C4u;
    // 802EC9C4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EC9C8:
    ctx->pc = 0x802EC9C8u;
    // 802EC9C8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802EC9CC:
    ctx->pc = 0x802EC9CCu;
    // 802EC9CC: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_802EC9D0:
    ctx->pc = 0x802EC9D0u;
    // 802EC9D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EC9D4:
    ctx->pc = 0x802EC9D4u;
    // 802EC9D4: lwz     r3, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EC9D8:
    ctx->pc = 0x802EC9D8u;
    // 802EC9D8: bl      0x8034E00C
    {
            ctx->lr = 0x802EC9DCu;
            ctx->pc = 0x8034E00Cu;
            return;
    }

label_802EC9DC:
    ctx->pc = 0x802EC9DCu;
    ctx->downcount -= 3;
    // 802EC9DC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC9E0:
    ctx->pc = 0x802EC9E0u;
    // 802EC9E0: addi    r4, r28, 337
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(337);

label_802EC9E4:
    ctx->pc = 0x802EC9E4u;
    // 802EC9E4: bl      0x8026F968
    {
            ctx->lr = 0x802EC9E8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802EC9E8:
    ctx->pc = 0x802EC9E8u;
    ctx->downcount -= 7;
    // 802EC9E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EC9EC:
    ctx->pc = 0x802EC9ECu;
    // 802EC9EC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EC9F0:
    ctx->pc = 0x802EC9F0u;
    // 802EC9F0: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_802EC9F4:
    ctx->pc = 0x802EC9F4u;
    // 802EC9F4: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802EC9F8:
    ctx->pc = 0x802EC9F8u;
    // 802EC9F8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EC9FC:
    ctx->pc = 0x802EC9FCu;
    // 802EC9FC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802ECA00:
    ctx->pc = 0x802ECA00u;
    // 802ECA00: bl      0x8026F8C0
    {
            ctx->lr = 0x802ECA04u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802ECA04:
    ctx->pc = 0x802ECA04u;
    ctx->downcount -= 6;
    // 802ECA04: add   r3, r31, r25
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[25];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECA08:
    ctx->pc = 0x802ECA08u;
    // 802ECA08: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ECA0C:
    ctx->pc = 0x802ECA0Cu;
    // 802ECA0C: lwz     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ECA10:
    ctx->pc = 0x802ECA10u;
    // 802ECA10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECA14:
    ctx->pc = 0x802ECA14u;
    // 802ECA14: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802ECA18:
    ctx->pc = 0x802ECA18u;
    // 802ECA18: bl      0x802EC180
    {
            ctx->lr = 0x802ECA1Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC180u;
                return;
            }
            goto label_802EC180;
    }

label_802ECA1C:
    ctx->pc = 0x802ECA1Cu;
    ctx->downcount -= 5;
    // 802ECA1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECA20:
    ctx->pc = 0x802ECA20u;
    // 802ECA20: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ECA24:
    ctx->pc = 0x802ECA24u;
    // 802ECA24: or   r6, r26, r26
    {
        ctx->gpr[6] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802ECA28:
    ctx->pc = 0x802ECA28u;
    // 802ECA28: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802ECA2C:
    ctx->pc = 0x802ECA2Cu;
    // 802ECA2C: bl      0x802EC51C
    {
            ctx->lr = 0x802ECA30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC51Cu;
                return;
            }
            goto label_802EC51C;
    }

label_802ECA30:
    ctx->pc = 0x802ECA30u;
    ctx->downcount -= 16;
    // 802ECA30: lmw     r25, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECA34:
    ctx->pc = 0x802ECA34u;
    // 802ECA34: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECA38:
    ctx->pc = 0x802ECA38u;
    // 802ECA38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECA3C:
    ctx->pc = 0x802ECA3Cu;
    // 802ECA3C: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_802ECA40:
    ctx->pc = 0x802ECA40u;
    // 802ECA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECA44:
    ctx->pc = 0x802ECA44u;
    ctx->downcount -= 18;
    // 802ECA44: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECA48:
    ctx->pc = 0x802ECA48u;
    // 802ECA48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECA4C:
    ctx->pc = 0x802ECA4Cu;
    // 802ECA4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECA50:
    ctx->pc = 0x802ECA50u;
    // 802ECA50: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECA54:
    ctx->pc = 0x802ECA54u;
    // 802ECA54: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECA58:
    ctx->pc = 0x802ECA58u;
    // 802ECA58: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802ECA5C:
    ctx->pc = 0x802ECA5Cu;
    // 802ECA5C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802ECA60:
    ctx->pc = 0x802ECA60u;
    // 802ECA60: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ECA64:
    ctx->downcount -= 4;
    // 802ECA64: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECA68:
    ctx->pc = 0x802ECA68u;
    // 802ECA68: lwz     r4, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ECA6C:
    // 802ECA6C: cmpwi   r4, 0
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

label_802ECA70:
    // 802ECA70: bc    12, 2, 0x802ECA80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECA80;
        }
    }

label_802ECA74:
    ctx->downcount -= 3;
    // 802ECA74: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECA78:
    ctx->pc = 0x802ECA78u;
    // 802ECA78: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ECA7C:
    // 802ECA7C: bl      0x8027CB94
    {
            ctx->lr = 0x802ECA80u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_802ECA80:
    ctx->downcount -= 4;
    // 802ECA80: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802ECA84:
    // 802ECA84: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ECA88:
    // 802ECA88: cmpwi   r30, 4
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

label_802ECA8C:
    // 802ECA8C: bc    12, 0, 0x802ECA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECA64u;
                return;
            }
            goto label_802ECA64;
        }
    }

label_802ECA90:
    ctx->pc = 0x802ECA90u;
    ctx->downcount -= 16;
    // 802ECA90: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECA94:
    ctx->pc = 0x802ECA94u;
    // 802ECA94: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECA98:
    ctx->pc = 0x802ECA98u;
    // 802ECA98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECA9C:
    ctx->pc = 0x802ECA9Cu;
    // 802ECA9C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802ECAA0:
    ctx->pc = 0x802ECAA0u;
    // 802ECAA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECAA4:
    ctx->pc = 0x802ECAA4u;
    ctx->downcount -= 1;
    // 802ECAA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECAA8:
    ctx->downcount -= 8;
    // 802ECAA8: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_802ECAAC:
    // 802ECAAC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECAB0:
    // 802ECAB0: addi    r6, r6, 11440
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11440);

label_802ECAB4:
    // 802ECAB4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ECAB8:
    // 802ECAB8: addi    r5, r6, 347
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(347);

label_802ECABC:
    // 802ECABC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802ECAC0:
    // 802ECAC0: addi    r6, r6, 351
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(351);

label_802ECAC4:
    // 802ECAC4: b       0x8027035C
    {
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802ECAC8:
    ctx->pc = 0x802ECAC8u;
    ctx->downcount -= 9;
    // 802ECAC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECACC:
    ctx->pc = 0x802ECACCu;
    // 802ECACC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECAD0:
    ctx->pc = 0x802ECAD0u;
    // 802ECAD0: lfs     f0, -12480(r2)
    if (!ppc_fp_available_inline(ctx, 0x802ECAD0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12480);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802ECAD4:
    // 802ECAD4: cmpwi   r4, 0
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

label_802ECAD8:
    ctx->pc = 0x802ECAD8u;
    // 802ECAD8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECADC:
    ctx->pc = 0x802ECADCu;
    // 802ECADC: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECADCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECAE0:
    ctx->pc = 0x802ECAE0u;
    // 802ECAE0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECAE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECAE4:
    ctx->pc = 0x802ECAE4u;
    // 802ECAE4: stfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECAE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECAE8:
    // 802ECAE8: bc    12, 2, 0x802ECAF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECAF4;
        }
    }

label_802ECAEC:
    ctx->pc = 0x802ECAECu;
    ctx->downcount -= 2;
    // 802ECAEC: lfs     f0, -12476(r2)
    if (!ppc_fp_available_inline(ctx, 0x802ECAECu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12476);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802ECAF0:
    ctx->pc = 0x802ECAF0u;
    // 802ECAF0: stfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECAF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECAF4:
    ctx->downcount -= 2;
    // 802ECAF4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802ECAF8:
    // 802ECAF8: bl      0x8026F6CC
    {
            ctx->lr = 0x802ECAFCu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802ECAFC:
    ctx->downcount -= 1;
    // 802ECAFC: bl      0x8025CE24
    {
            ctx->lr = 0x802ECB00u;
            ctx->pc = 0x8025CE24u;
            return;
    }

label_802ECB00:
    ctx->pc = 0x802ECB00u;
    ctx->downcount -= 11;
    // 802ECB00: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECB00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802ECB04:
    ctx->pc = 0x802ECB04u;
    // 802ECB04: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x802ECB04u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECB08:
    ctx->pc = 0x802ECB08u;
    // 802ECB08: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECB08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802ECB0C:
    ctx->pc = 0x802ECB0Cu;
    // 802ECB0C: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x802ECB0Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECB10:
    ctx->pc = 0x802ECB10u;
    // 802ECB10: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802ECB10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802ECB14:
    ctx->pc = 0x802ECB14u;
    // 802ECB14: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x802ECB14u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802ECB18:
    ctx->pc = 0x802ECB18u;
    // 802ECB18: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECB1C:
    ctx->pc = 0x802ECB1Cu;
    // 802ECB1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECB20:
    // 802ECB20: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802ECB24:
    ctx->pc = 0x802ECB24u;
    // 802ECB24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECB28:
    ctx->pc = 0x802ECB28u;
    ctx->downcount -= 17;
    // 802ECB28: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECB2C:
    ctx->pc = 0x802ECB2Cu;
    // 802ECB2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECB30:
    ctx->pc = 0x802ECB30u;
    // 802ECB30: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECB34:
    ctx->pc = 0x802ECB34u;
    // 802ECB34: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECB38:
    // 802ECB38: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECB3C:
    // 802ECB3C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802ECB40:
    // 802ECB40: bl      0x80371554
    {
            ctx->lr = 0x802ECB44u;
            ctx->pc = 0x80371554u;
            return;
    }

label_802ECB44:
    ctx->downcount -= 3;
    // 802ECB44: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECB48:
    // 802ECB48: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ECB4C:
    // 802ECB4C: bl      0x802ECA44
    {
            ctx->lr = 0x802ECB50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECA44u;
                return;
            }
            goto label_802ECA44;
    }

label_802ECB50:
    ctx->pc = 0x802ECB50u;
    ctx->downcount -= 3;
    // 802ECB50: lbz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECB54:
    // 802ECB54: cmpwi   r0, 0
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

label_802ECB58:
    // 802ECB58: bc    12, 2, 0x802ECBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECBC4;
        }
    }

label_802ECB5C:
    ctx->downcount -= 5;
    // 802ECB5C: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_802ECB60:
    // 802ECB60: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECB64:
    // 802ECB64: addi    r29, r29, 11440
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(11440);

label_802ECB68:
    // 802ECB68: addi    r4, r29, 362
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(362);

label_802ECB6C:
    // 802ECB6C: bl      0x8026F970
    {
            ctx->lr = 0x802ECB70u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECB70:
    ctx->pc = 0x802ECB70u;
    ctx->downcount -= 7;
    // 802ECB70: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECB74:
    // 802ECB74: addi    r4, r29, 374
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(374);

label_802ECB78:
    // 802ECB78: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECB7C:
    // 802ECB7C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ECB80:
    ctx->pc = 0x802ECB80u;
    // 802ECB80: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECB84:
    // 802ECB84: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECB88:
    // 802ECB88: bl      0x8026F970
    {
            ctx->lr = 0x802ECB8Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECB8C:
    ctx->pc = 0x802ECB8Cu;
    ctx->downcount -= 7;
    // 802ECB8C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECB90:
    // 802ECB90: addi    r4, r29, 386
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(386);

label_802ECB94:
    // 802ECB94: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECB98:
    // 802ECB98: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ECB9C:
    ctx->pc = 0x802ECB9Cu;
    // 802ECB9C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECBA0:
    // 802ECBA0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECBA4:
    // 802ECBA4: bl      0x8026F970
    {
            ctx->lr = 0x802ECBA8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECBA8:
    ctx->pc = 0x802ECBA8u;
    ctx->downcount -= 6;
    // 802ECBA8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECBAC:
    // 802ECBAC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ECBB0:
    // 802ECBB0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECBB4:
    ctx->pc = 0x802ECBB4u;
    // 802ECBB4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECBB8:
    // 802ECBB8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECBBC:
    // 802ECBBC: bl      0x802EC80C
    {
            ctx->lr = 0x802ECBC0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC80Cu;
                return;
            }
            goto label_802EC80C;
    }

label_802ECBC0:
    ctx->downcount -= 1;
    // 802ECBC0: b       0x802ECC38
    {
            goto label_802ECC38;
    }

label_802ECBC4:
    ctx->downcount -= 5;
    // 802ECBC4: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_802ECBC8:
    // 802ECBC8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECBCC:
    // 802ECBCC: addi    r29, r29, 11440
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(11440);

label_802ECBD0:
    // 802ECBD0: addi    r4, r29, 362
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(362);

label_802ECBD4:
    // 802ECBD4: bl      0x8026F970
    {
            ctx->lr = 0x802ECBD8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECBD8:
    ctx->pc = 0x802ECBD8u;
    ctx->downcount -= 6;
    // 802ECBD8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECBDC:
    // 802ECBDC: addi    r4, r29, 374
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(374);

label_802ECBE0:
    // 802ECBE0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECBE4:
    ctx->pc = 0x802ECBE4u;
    // 802ECBE4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECBE8:
    // 802ECBE8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECBEC:
    // 802ECBEC: bl      0x8026F970
    {
            ctx->lr = 0x802ECBF0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECBF0:
    ctx->pc = 0x802ECBF0u;
    ctx->downcount -= 6;
    // 802ECBF0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECBF4:
    // 802ECBF4: addi    r4, r29, 386
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(386);

label_802ECBF8:
    // 802ECBF8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECBFC:
    ctx->pc = 0x802ECBFCu;
    // 802ECBFC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECC00:
    // 802ECC00: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECC04:
    // 802ECC04: bl      0x8026F970
    {
            ctx->lr = 0x802ECC08u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ECC08:
    ctx->pc = 0x802ECC08u;
    ctx->downcount -= 9;
    // 802ECC08: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECC0C:
    // 802ECC0C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802ECC10:
    // 802ECC10: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ECC14:
    // 802ECC14: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ECC18:
    ctx->pc = 0x802ECC18u;
    // 802ECC18: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ECC1C:
    // 802ECC1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECC20:
    ctx->pc = 0x802ECC20u;
    // 802ECC20: lwz     r5, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ECC24:
    ctx->pc = 0x802ECC24u;
    // 802ECC24: lwz     r6, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ECC28:
    // 802ECC28: bl      0x802EC180
    {
            ctx->lr = 0x802ECC2Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC180u;
                return;
            }
            goto label_802EC180;
    }

label_802ECC2C:
    ctx->downcount -= 3;
    // 802ECC2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECC30:
    // 802ECC30: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ECC34:
    // 802ECC34: bl      0x802EC320
    {
            ctx->lr = 0x802ECC38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EC320u;
                return;
            }
            goto label_802EC320;
    }

label_802ECC38:
    ctx->downcount -= 4;
    // 802ECC38: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECC3C:
    // 802ECC3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECC40:
    // 802ECC40: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802ECC44:
    // 802ECC44: bl      0x8026FEF0
    {
            ctx->lr = 0x802ECC48u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802ECC48:
    ctx->downcount -= 3;
    // 802ECC48: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ECC4C:
    // 802ECC4C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECC50:
    // 802ECC50: bl      0x8026F6AC
    {
            ctx->lr = 0x802ECC54u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802ECC54:
    ctx->downcount -= 1;
    // 802ECC54: bl      0x8025EC94
    {
            ctx->lr = 0x802ECC58u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802ECC58:
    ctx->pc = 0x802ECC58u;
    ctx->downcount -= 16;
    // 802ECC58: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECC5C:
    ctx->pc = 0x802ECC5Cu;
    // 802ECC5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECC60:
    ctx->pc = 0x802ECC60u;
    // 802ECC60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECC64:
    // 802ECC64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802ECC68:
    ctx->pc = 0x802ECC68u;
    // 802ECC68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECC6C:
    ctx->pc = 0x802ECC6Cu;
    ctx->downcount -= 25;
    // 802ECC6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECC70:
    ctx->pc = 0x802ECC70u;
    // 802ECC70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECC74:
    // 802ECC74: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802ECC78:
    // 802ECC78: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802ECC7C:
    ctx->pc = 0x802ECC7Cu;
    // 802ECC7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECC80:
    ctx->pc = 0x802ECC80u;
    // 802ECC80: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECC84:
    // 802ECC84: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802ECC88:
    // 802ECC88: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802ECC8C:
    // 802ECC8C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECC90:
    // 802ECC90: addi    r31, r31, 11440
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(11440);

label_802ECC94:
    // 802ECC94: or   r9, r29, r29
    {
        ctx->gpr[9] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802ECC98:
    // 802ECC98: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802ECC9C:
    // 802ECC9C: addi    r5, r31, 398
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(398);

label_802ECCA0:
    // 802ECCA0: addi    r6, r31, 413
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(413);

label_802ECCA4:
    // 802ECCA4: bl      0x80371668
    {
            ctx->lr = 0x802ECCA8u;
            ctx->pc = 0x80371668u;
            return;
    }

label_802ECCA8:
    ctx->downcount -= 13;
    // 802ECCA8: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_802ECCAC:
    // 802ECCAC: addi    r4, r31, 439
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(439);

label_802ECCB0:
    // 802ECCB0: addi    r7, r7, 15088
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(15088);

label_802ECCB4:
    ctx->pc = 0x802ECCB4u;
    // 802ECCB4: stw     r7, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802ECCB8:
    // 802ECCB8: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_802ECCBC:
    // 802ECCBC: addi    r3, r28, 52
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(52);

label_802ECCC0:
    // 802ECCC0: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_802ECCC4:
    // 802ECCC4: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_802ECCC8:
    ctx->pc = 0x802ECCC8u;
    // 802ECCC8: stw     r5, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ECCCC:
    // 802ECCCC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802ECCD0:
    ctx->pc = 0x802ECCD0u;
    // 802ECCD0: stw     r6, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ECCD4:
    ctx->pc = 0x802ECCD4u;
    // 802ECCD4: stw     r0, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECCD8:
    // 802ECCD8: bl      0x8000E7F4
    {
            ctx->lr = 0x802ECCDCu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ECCDC:
    ctx->downcount -= 2;
    // 802ECCDC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802ECCE0:
    // 802ECCE0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ECCE4:
    ctx->downcount -= 2;
    // 802ECCE4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802ECCE8:
    // 802ECCE8: bl      0x8027CCC0
    {
            ctx->lr = 0x802ECCECu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_802ECCEC:
    ctx->downcount -= 6;
    // 802ECCEC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802ECCF0:
    // 802ECCF0: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802ECCF4:
    // 802ECCF4: cmpwi   r30, 4
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

label_802ECCF8:
    ctx->pc = 0x802ECCF8u;
    // 802ECCF8: stw     r3, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802ECCFC:
    // 802ECCFC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ECD00:
    // 802ECD00: bc    12, 0, 0x802ECCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECCE4u;
                return;
            }
            goto label_802ECCE4;
        }
    }

label_802ECD04:
    ctx->downcount -= 5;
    // 802ECD04: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_802ECD08:
    // 802ECD08: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802ECD0C:
    // 802ECD0C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECD10:
    ctx->pc = 0x802ECD10u;
    // 802ECD10: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802ECD14:
    loop_802ECD14(ctx);
    if (ctx->pc == 0x802ECD28u) goto label_802ECD28;
    return;
label_802ECD18:
    // 802ECD18: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802ECD1C:
    ctx->pc = 0x802ECD1Cu;
    // 802ECD1C: stw     r4, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802ECD20:
    ctx->pc = 0x802ECD20u;
    // 802ECD20: stw     r4, 296(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802ECD24:
    // 802ECD24: bc    16, 0, 0x802ECD14
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECD14u;
                return;
            }
            goto label_802ECD14;
        }
    }

label_802ECD28:
    ctx->downcount -= 17;
    // 802ECD28: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802ECD2C:
    ctx->pc = 0x802ECD2Cu;
    // 802ECD2C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECD30:
    ctx->pc = 0x802ECD30u;
    // 802ECD30: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECD34:
    ctx->pc = 0x802ECD34u;
    // 802ECD34: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECD38:
    // 802ECD38: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802ECD3C:
    ctx->pc = 0x802ECD3Cu;
    // 802ECD3C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECD40:
    ctx->downcount -= 4;
    // 802ECD40: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802ECD44:
    // 802ECD44: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECD48:
    ctx->pc = 0x802ECD48u;
    // 802ECD48: stw     r5, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ECD4C:
    ctx->pc = 0x802ECD4Cu;
    // 802ECD4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECD50:
    ctx->pc = 0x802ECD50u;
    ctx->downcount -= 8;
    // 802ECD50: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECD54:
    // 802ECD54: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802ECD58:
    // 802ECD58: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802ECD5C:
    // 802ECD5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ECD60:
    ctx->pc = 0x802ECD60u;
    // 802ECD60: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802ECD64:
    // 802ECD64: cmpwi   r0, 0
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

label_802ECD68:
    // 802ECD68: bc    4, 1, 0x802ECD9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECD9C;
        }
    }

label_802ECD6C:
    ctx->downcount -= 4;
    // 802ECD6C: add   r7, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802ECD70:
    ctx->pc = 0x802ECD70u;
    // 802ECD70: lwz     r0, 20(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECD74:
    // 802ECD74: cmpw    r4, r0
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

label_802ECD78:
    // 802ECD78: bc    4, 2, 0x802ECD90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECD90;
        }
    }

label_802ECD7C:
    ctx->downcount -= 2;
    // 802ECD7C: cmpw    r5, r8
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[8]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ECD80:
    // 802ECD80: bc    4, 2, 0x802ECD8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECD8C;
        }
    }

label_802ECD84:
    ctx->downcount -= 2;
    // 802ECD84: or   r3, r9, r9
    {
        ctx->gpr[3] = ctx->gpr[9] | ctx->gpr[9];
    }

label_802ECD88:
    ctx->pc = 0x802ECD88u;
    // 802ECD88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECD8C:
    ctx->downcount -= 1;
    // 802ECD8C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802ECD90:
    ctx->downcount -= 3;
    // 802ECD90: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_802ECD94:
    // 802ECD94: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_802ECD98:
    // 802ECD98: bc    16, 0, 0x802ECD6C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECD6Cu;
                return;
            }
            goto label_802ECD6C;
        }
    }

label_802ECD9C:
    ctx->downcount -= 2;
    // 802ECD9C: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_802ECDA0:
    ctx->pc = 0x802ECDA0u;
    // 802ECDA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECDA4:
    ctx->pc = 0x802ECDA4u;
    ctx->downcount -= 7;
    // 802ECDA4: lwz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECDA8:
    // 802ECDA8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ECDAC:
    // 802ECDAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802ECDB0:
    ctx->pc = 0x802ECDB0u;
    // 802ECDB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802ECDB4:
    // 802ECDB4: cmpwi   r0, 0
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

label_802ECDB8:
    // 802ECDB8: bc    4, 1, 0x802ECDD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECDD8;
        }
    }

label_802ECDBC:
    ctx->downcount -= 4;
    // 802ECDBC: add   r6, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802ECDC0:
    ctx->pc = 0x802ECDC0u;
    // 802ECDC0: lwz     r0, 20(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECDC4:
    // 802ECDC4: cmpw    r4, r0
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

label_802ECDC8:
    // 802ECDC8: bc    4, 2, 0x802ECDD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECDD0;
        }
    }

label_802ECDCC:
    ctx->downcount -= 1;
    // 802ECDCC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802ECDD0:
    ctx->downcount -= 2;
    // 802ECDD0: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_802ECDD4:
    // 802ECDD4: bc    16, 0, 0x802ECDBC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECDBCu;
                return;
            }
            goto label_802ECDBC;
        }
    }

label_802ECDD8:
    ctx->downcount -= 2;
    // 802ECDD8: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802ECDDC:
    ctx->pc = 0x802ECDDCu;
    // 802ECDDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECDE0:
    ctx->downcount -= 5;
    // 802ECDE0: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802ECDE4:
    // 802ECDE4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECDE8:
    ctx->pc = 0x802ECDE8u;
    // 802ECDE8: stw     r5, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ECDEC:
    ctx->pc = 0x802ECDECu;
    // 802ECDEC: stw     r6, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ECDF0:
    ctx->pc = 0x802ECDF0u;
    // 802ECDF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECDF4:
    ctx->pc = 0x802ECDF4u;
    ctx->downcount -= 1;
    // 802ECDF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECDF8:
    ctx->pc = 0x802ECDF8u;
    ctx->downcount -= 18;
    // 802ECDF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECDFC:
    ctx->pc = 0x802ECDFCu;
    // 802ECDFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECE00:
    // 802ECE00: cmpwi   r3, 0
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

label_802ECE04:
    ctx->pc = 0x802ECE04u;
    // 802ECE04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECE08:
    ctx->pc = 0x802ECE08u;
    // 802ECE08: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECE0C:
    // 802ECE0C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECE10:
    // 802ECE10: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802ECE14:
    // 802ECE14: bc    12, 2, 0x802ECE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECE48;
        }
    }

label_802ECE18:
    ctx->downcount -= 1;
    // 802ECE18: bc    12, 2, 0x802ECE38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECE38;
        }
    }

label_802ECE1C:
    ctx->downcount -= 1;
    // 802ECE1C: bc    12, 2, 0x802ECE38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ECE38;
        }
    }

label_802ECE20:
    ctx->downcount -= 3;
    // 802ECE20: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECE24:
    // 802ECE24: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802ECE28:
    // 802ECE28: bl      0x801F5C24
    {
            ctx->lr = 0x802ECE2Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802ECE2C:
    ctx->downcount -= 3;
    // 802ECE2C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECE30:
    // 802ECE30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ECE34:
    // 802ECE34: bl      0x801F9C70
    {
            ctx->lr = 0x802ECE38u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802ECE38:
    ctx->downcount -= 2;
    // 802ECE38: cmpwi   r31, 0
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

label_802ECE3C:
    // 802ECE3C: bc    4, 1, 0x802ECE48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECE48;
        }
    }

label_802ECE40:
    ctx->downcount -= 2;
    // 802ECE40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECE44:
    // 802ECE44: bl      0x801C1C90
    {
            ctx->lr = 0x802ECE48u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802ECE48:
    ctx->downcount -= 17;
    // 802ECE48: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802ECE4C:
    ctx->pc = 0x802ECE4Cu;
    // 802ECE4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECE50:
    ctx->pc = 0x802ECE50u;
    // 802ECE50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECE54:
    ctx->pc = 0x802ECE54u;
    // 802ECE54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECE58:
    // 802ECE58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802ECE5C:
    ctx->pc = 0x802ECE5Cu;
    // 802ECE5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECE60:
    ctx->downcount -= 2;
    // 802ECE60: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802ECE64:
    // 802ECE64: b       0x802ECDF8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECDF8u;
                return;
            }
            goto label_802ECDF8;
    }

label_802ECE68:
    ctx->downcount -= 2;
    // 802ECE68: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802ECE6C:
    // 802ECE6C: b       0x802ECAA4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECAA4u;
                return;
            }
            goto label_802ECAA4;
    }

label_802ECE70:
    ctx->downcount -= 2;
    // 802ECE70: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802ECE74:
    // 802ECE74: b       0x802ECDF8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECDF8u;
                return;
            }
            goto label_802ECDF8;
    }

label_802ECE78:
    ctx->pc = 0x802ECE78u;
    ctx->downcount -= 4;
    // 802ECE78: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_802ECE7C:
    ctx->pc = 0x802ECE7Cu;
    // 802ECE7C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECE80:
    ctx->pc = 0x802ECE80u;
    // 802ECE80: lwz     r3, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ECE84:
    ctx->pc = 0x802ECE84u;
    // 802ECE84: b       0x8027CB94
    {
            ctx->pc = 0x8027CB94u;
            return;
    }

label_802ECE88:
    ctx->pc = 0x802ECE88u;
    ctx->downcount -= 8;
    // 802ECE88: mulli   r0, r4, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)12);

label_802ECE8C:
    ctx->pc = 0x802ECE8Cu;
    // 802ECE8C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECE90:
    ctx->pc = 0x802ECE90u;
    // 802ECE90: stw     r5, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ECE94:
    ctx->pc = 0x802ECE94u;
    // 802ECE94: stw     r6, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ECE98:
    ctx->pc = 0x802ECE98u;
    // 802ECE98: stw     r7, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802ECE9C:
    ctx->pc = 0x802ECE9Cu;
    // 802ECE9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECEA0:
    ctx->pc = 0x802ECEA0u;
    ctx->downcount -= 20;
    // 802ECEA0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECEA4:
    ctx->pc = 0x802ECEA4u;
    // 802ECEA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECEA8:
    ctx->pc = 0x802ECEA8u;
    // 802ECEA8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECEAC:
    ctx->pc = 0x802ECEACu;
    // 802ECEAC: stmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECEB0:
    ctx->pc = 0x802ECEB0u;
    // 802ECEB0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802ECEB4:
    ctx->pc = 0x802ECEB4u;
    // 802ECEB4: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802ECEB8:
    ctx->pc = 0x802ECEB8u;
    // 802ECEB8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECEBC:
    ctx->pc = 0x802ECEBCu;
    // 802ECEBC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ECEC0:
    ctx->pc = 0x802ECEC0u;
    // 802ECEC0: or   r29, r28, r28
    {
        ctx->gpr[29] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802ECEC4:
    ctx->pc = 0x802ECEC4u;
    // 802ECEC4: addi    r30, r30, 15416
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(15416);

label_802ECEC8:
    ctx->pc = 0x802ECEC8u;
    ctx->downcount -= 5;
    // 802ECEC8: stb     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_802ECECC:
    // 802ECECC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ECED0:
    ctx->pc = 0x802ECED0u;
    // 802ECED0: lwz     r4, -28124(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ECED4:
    // 802ECED4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ECED8:
    // 802ECED8: bl      0x8000E7F4
    {
            ctx->lr = 0x802ECEDCu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ECEDC:
    ctx->pc = 0x802ECEDCu;
    ctx->downcount -= 4;
    // 802ECEDC: lwzx    r4, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ECEE0:
    // 802ECEE0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ECEE4:
    // 802ECEE4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ECEE8:
    // 802ECEE8: bl      0x8000E864
    {
            ctx->lr = 0x802ECEECu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ECEEC:
    ctx->downcount -= 3;
    // 802ECEEC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802ECEF0:
    // 802ECEF0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ECEF4:
    // 802ECEF4: bl      0x8026F960
    {
            ctx->lr = 0x802ECEF8u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802ECEF8:
    ctx->downcount -= 2;
    // 802ECEF8: cmpwi   r28, 3
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

label_802ECEFC:
    // 802ECEFC: bc    4, 0, 0x802ECF20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ECF20;
        }
    }

label_802ECF00:
    ctx->pc = 0x802ECF00u;
    ctx->downcount -= 7;
    // 802ECF00: lbz     r0, 382(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(382);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ECF04:
    // 802ECF04: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECF08:
    // 802ECF08: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802ECF0C:
    // 802ECF0C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ECF10:
    // 802ECF10: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ECF14:
    // 802ECF14: rlwinm r5, r0, 27, 5, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802ECF18:
    // 802ECF18: bl      0x8026F760
    {
            ctx->lr = 0x802ECF1Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802ECF1C:
    ctx->downcount -= 1;
    // 802ECF1C: b       0x802ECF34
    {
            goto label_802ECF34;
    }

label_802ECF20:
    ctx->pc = 0x802ECF20u;
    ctx->downcount -= 5;
    // 802ECF20: lbz     r5, 382(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(382);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802ECF24:
    // 802ECF24: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECF28:
    // 802ECF28: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802ECF2C:
    // 802ECF2C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ECF30:
    // 802ECF30: bl      0x8026F760
    {
            ctx->lr = 0x802ECF34u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802ECF34:
    ctx->downcount -= 4;
    // 802ECF34: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802ECF38:
    // 802ECF38: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ECF3C:
    // 802ECF3C: cmpwi   r28, 6
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ECF40:
    // 802ECF40: bc    12, 0, 0x802ECEC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECEC8u;
                return;
            }
            goto label_802ECEC8;
        }
    }

label_802ECF44:
    ctx->pc = 0x802ECF44u;
    ctx->downcount -= 16;
    // 802ECF44: lmw     r27, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECF48:
    ctx->pc = 0x802ECF48u;
    // 802ECF48: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECF4C:
    ctx->pc = 0x802ECF4Cu;
    // 802ECF4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECF50:
    ctx->pc = 0x802ECF50u;
    // 802ECF50: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802ECF54:
    ctx->pc = 0x802ECF54u;
    // 802ECF54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECF58:
    ctx->pc = 0x802ECF58u;
    ctx->downcount -= 20;
    // 802ECF58: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECF5C:
    ctx->pc = 0x802ECF5Cu;
    // 802ECF5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECF60:
    ctx->pc = 0x802ECF60u;
    // 802ECF60: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECF64:
    ctx->pc = 0x802ECF64u;
    // 802ECF64: stmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECF68:
    ctx->pc = 0x802ECF68u;
    // 802ECF68: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_802ECF6C:
    ctx->pc = 0x802ECF6Cu;
    // 802ECF6C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECF70:
    ctx->pc = 0x802ECF70u;
    // 802ECF70: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ECF74:
    ctx->pc = 0x802ECF74u;
    // 802ECF74: addi    r30, r30, 11904
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(11904);

label_802ECF78:
    ctx->pc = 0x802ECF78u;
    // 802ECF78: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ECF7C:
    ctx->pc = 0x802ECF7Cu;
    // 802ECF7C: b       0x802ECFC4
    {
            goto label_802ECFC4;
    }

label_802ECF80:
    ctx->downcount -= 7;
    // 802ECF80: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ECF84:
    // 802ECF84: addi    r5, r30, 317
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(317);

label_802ECF88:
    ctx->pc = 0x802ECF88u;
    // 802ECF88: lwz     r7, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802ECF8C:
    // 802ECF8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ECF90:
    // 802ECF90: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802ECF94:
    // 802ECF94: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802ECF98:
    // 802ECF98: bl      0x8000D074
    {
            ctx->lr = 0x802ECF9Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802ECF9C:
    ctx->downcount -= 3;
    // 802ECF9C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ECFA0:
    // 802ECFA0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ECFA4:
    // 802ECFA4: bl      0x8026F960
    {
            ctx->lr = 0x802ECFA8u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802ECFA8:
    ctx->downcount -= 5;
    // 802ECFA8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECFAC:
    // 802ECFAC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802ECFB0:
    // 802ECFB0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ECFB4:
    // 802ECFB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ECFB8:
    // 802ECFB8: bl      0x8026F760
    {
            ctx->lr = 0x802ECFBCu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802ECFBC:
    ctx->downcount -= 2;
    // 802ECFBC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802ECFC0:
    // 802ECFC0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ECFC4:
    ctx->pc = 0x802ECFC4u;
    ctx->downcount -= 3;
    // 802ECFC4: lwz     r6, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ECFC8:
    // 802ECFC8: cmpw    r29, r6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ECFCC:
    // 802ECFCC: bc    12, 0, 0x802ECF80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECF80u;
                return;
            }
            goto label_802ECF80;
        }
    }

label_802ECFD0:
    ctx->pc = 0x802ECFD0u;
    ctx->downcount -= 16;
    // 802ECFD0: lmw     r28, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ECFD4:
    ctx->pc = 0x802ECFD4u;
    // 802ECFD4: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ECFD8:
    ctx->pc = 0x802ECFD8u;
    // 802ECFD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ECFDC:
    ctx->pc = 0x802ECFDCu;
    // 802ECFDC: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802ECFE0:
    ctx->pc = 0x802ECFE0u;
    // 802ECFE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ECFE4:
    ctx->pc = 0x802ECFE4u;
    ctx->downcount -= 24;
    // 802ECFE4: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ECFE8:
    ctx->pc = 0x802ECFE8u;
    // 802ECFE8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ECFEC:
    ctx->pc = 0x802ECFECu;
    // 802ECFEC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ECFF0:
    ctx->pc = 0x802ECFF0u;
    // 802ECFF0: stmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ECFF4:
    ctx->pc = 0x802ECFF4u;
    // 802ECFF4: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_802ECFF8:
    ctx->pc = 0x802ECFF8u;
    // 802ECFF8: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ECFFC:
    ctx->pc = 0x802ECFFCu;
    // 802ECFFC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ED000:
    ctx->pc = 0x802ED000u;
    // 802ED000: or   r30, r25, r25
    {
        ctx->gpr[30] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802ED004:
    ctx->pc = 0x802ED004u;
    // 802ED004: addi    r28, r13, -28088
    ctx->gpr[28] = ctx->gpr[13] + (u32)(s32)(-28088);

label_802ED008:
    ctx->pc = 0x802ED008u;
    // 802ED008: addi    r29, r13, -28096
    ctx->gpr[29] = ctx->gpr[13] + (u32)(s32)(-28096);

label_802ED00C:
    ctx->pc = 0x802ED00Cu;
    // 802ED00C: lbz     r0, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED010:
    ctx->pc = 0x802ED010u;
    // 802ED010: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ED014:
    ctx->pc = 0x802ED014u;
    // 802ED014: rlwinm r27, r0, 29, 3, 29
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x1FFFFFFCu;
    }

label_802ED018:
    ctx->pc = 0x802ED018u;
    // 802ED018: b       0x802ED070
    {
            goto label_802ED070;
    }

label_802ED01C:
    ctx->pc = 0x802ED01Cu;
    ctx->downcount -= 5;
    // 802ED01C: stb     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_802ED020:
    // 802ED020: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED024:
    ctx->pc = 0x802ED024u;
    // 802ED024: lwzx    r4, r28, r27
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[27];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED028:
    // 802ED028: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED02C:
    // 802ED02C: bl      0x8000E864
    {
            ctx->lr = 0x802ED030u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED030:
    ctx->downcount -= 8;
    // 802ED030: add   r26, r24, r31
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_802ED034:
    ctx->pc = 0x802ED034u;
    // 802ED034: lwzx    r4, r29, r27
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[27];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED038:
    ctx->pc = 0x802ED038u;
    // 802ED038: lwz     r0, 324(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(324);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED03C:
    // 802ED03C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED040:
    // 802ED040: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED044:
    // 802ED044: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802ED048:
    ctx->pc = 0x802ED048u;
    // 802ED048: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED04C:
    // 802ED04C: bl      0x8000E864
    {
            ctx->lr = 0x802ED050u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED050:
    ctx->downcount -= 3;
    // 802ED050: addi    r3, r24, 148
    ctx->gpr[3] = ctx->gpr[24] + (u32)(s32)(148);

label_802ED054:
    // 802ED054: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED058:
    // 802ED058: bl      0x8026F970
    {
            ctx->lr = 0x802ED05Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED05C:
    ctx->downcount -= 3;
    // 802ED05C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED060:
    ctx->pc = 0x802ED060u;
    // 802ED060: lwz     r3, 364(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(364);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ED064:
    // 802ED064: bl      0x8027CC74
    {
            ctx->lr = 0x802ED068u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802ED068:
    ctx->downcount -= 2;
    // 802ED068: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_802ED06C:
    // 802ED06C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ED070:
    ctx->pc = 0x802ED070u;
    ctx->downcount -= 3;
    // 802ED070: lwz     r0, 320(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED074:
    // 802ED074: cmpw    r25, r0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED078:
    // 802ED078: bc    12, 0, 0x802ED01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED01Cu;
                return;
            }
            goto label_802ED01C;
        }
    }

label_802ED07C:
    ctx->pc = 0x802ED07Cu;
    ctx->downcount -= 16;
    // 802ED07C: lmw     r24, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED080:
    ctx->pc = 0x802ED080u;
    // 802ED080: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED084:
    ctx->pc = 0x802ED084u;
    // 802ED084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED088:
    ctx->pc = 0x802ED088u;
    // 802ED088: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_802ED08C:
    ctx->pc = 0x802ED08Cu;
    // 802ED08C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED090:
    ctx->pc = 0x802ED090u;
    ctx->downcount -= 27;
    // 802ED090: stwu     r1, -128(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-128);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED094:
    ctx->pc = 0x802ED094u;
    // 802ED094: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED098:
    ctx->pc = 0x802ED098u;
    // 802ED098: stw     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED09C:
    ctx->pc = 0x802ED09Cu;
    // 802ED09C: stmw     r20, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 20; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED0A0:
    ctx->pc = 0x802ED0A0u;
    // 802ED0A0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED0A4:
    ctx->pc = 0x802ED0A4u;
    // 802ED0A4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED0A8:
    ctx->pc = 0x802ED0A8u;
    // 802ED0A8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802ED0AC:
    ctx->pc = 0x802ED0ACu;
    // 802ED0AC: or   r24, r29, r29
    {
        ctx->gpr[24] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802ED0B0:
    ctx->pc = 0x802ED0B0u;
    // 802ED0B0: or   r25, r29, r29
    {
        ctx->gpr[25] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802ED0B4:
    ctx->pc = 0x802ED0B4u;
    // 802ED0B4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802ED0B8:
    ctx->pc = 0x802ED0B8u;
    // 802ED0B8: addi    r21, r13, -28120
    ctx->gpr[21] = ctx->gpr[13] + (u32)(s32)(-28120);

label_802ED0BC:
    ctx->pc = 0x802ED0BCu;
    // 802ED0BC: addi    r22, r13, -28096
    ctx->gpr[22] = ctx->gpr[13] + (u32)(s32)(-28096);

label_802ED0C0:
    ctx->pc = 0x802ED0C0u;
    // 802ED0C0: addi    r31, r13, -28112
    ctx->gpr[31] = ctx->gpr[13] + (u32)(s32)(-28112);

label_802ED0C4:
    ctx->pc = 0x802ED0C4u;
    // 802ED0C4: lbz     r0, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED0C8:
    ctx->pc = 0x802ED0C8u;
    // 802ED0C8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ED0CC:
    ctx->pc = 0x802ED0CCu;
    // 802ED0CC: rlwinm r30, r0, 29, 3, 29
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 29u) & 0x1FFFFFFCu;
    }

label_802ED0D0:
    ctx->pc = 0x802ED0D0u;
    // 802ED0D0: b       0x802ED1A0
    {
            goto label_802ED1A0;
    }

label_802ED0D4:
    ctx->downcount -= 8;
    // 802ED0D4: add   r3, r28, r26
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ED0D8:
    ctx->pc = 0x802ED0D8u;
    // 802ED0D8: lwzx    r4, r21, r30
    {
        u32 ea = ctx->gpr[21] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED0DC:
    ctx->pc = 0x802ED0DCu;
    // 802ED0DC: lwz     r20, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        ctx->gpr[20] = mem_read32(ctx, ea);
    }

label_802ED0E0:
    // 802ED0E0: add   r23, r28, r27
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[23] = res;
    }

label_802ED0E4:
    // 802ED0E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED0E8:
    // 802ED0E8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED0EC:
    ctx->pc = 0x802ED0ECu;
    // 802ED0EC: stb     r24, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[24]);
    }

label_802ED0F0:
    // 802ED0F0: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED0F4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED0F4:
    ctx->pc = 0x802ED0F4u;
    ctx->downcount -= 6;
    // 802ED0F4: lwzx    r4, r22, r30
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED0F8:
    // 802ED0F8: rlwinm r20, r20, 2, 0, 29
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[20], 2u) & 0xFFFFFFFCu;
    }

label_802ED0FC:
    // 802ED0FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED100:
    // 802ED100: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED104:
    ctx->pc = 0x802ED104u;
    // 802ED104: lwzx    r4, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED108:
    // 802ED108: bl      0x8000E864
    {
            ctx->lr = 0x802ED10Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED10C:
    ctx->downcount -= 3;
    // 802ED10C: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED110:
    // 802ED110: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED114:
    // 802ED114: bl      0x8026F968
    {
            ctx->lr = 0x802ED118u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802ED118:
    ctx->pc = 0x802ED118u;
    ctx->downcount -= 7;
    // 802ED118: lwz     r7, 272(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(272);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802ED11C:
    // 802ED11C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED120:
    // 802ED120: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED124:
    // 802ED124: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802ED128:
    // 802ED128: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802ED12C:
    // 802ED12C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802ED130:
    // 802ED130: bl      0x8026F8C0
    {
            ctx->lr = 0x802ED134u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802ED134:
    ctx->pc = 0x802ED134u;
    ctx->downcount -= 3;
    // 802ED134: lbz     r0, 380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED138:
    // 802ED138: cmpwi   r0, 0
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

label_802ED13C:
    // 802ED13C: bc    12, 2, 0x802ED194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ED194;
        }
    }

label_802ED140:
    ctx->pc = 0x802ED140u;
    ctx->downcount -= 5;
    // 802ED140: stb     r25, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[25]);
    }

label_802ED144:
    // 802ED144: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED148:
    ctx->pc = 0x802ED148u;
    // 802ED148: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED14C:
    // 802ED14C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED150:
    // 802ED150: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED154u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED154:
    ctx->pc = 0x802ED154u;
    ctx->downcount -= 5;
    // 802ED154: lwzx    r4, r22, r30
    {
        u32 ea = ctx->gpr[22] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED158:
    // 802ED158: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED15C:
    // 802ED15C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED160:
    ctx->pc = 0x802ED160u;
    // 802ED160: lwzx    r4, r4, r20
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[20];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED164:
    // 802ED164: bl      0x8000E864
    {
            ctx->lr = 0x802ED168u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED168:
    ctx->downcount -= 3;
    // 802ED168: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED16C:
    // 802ED16C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED170:
    // 802ED170: bl      0x8026F968
    {
            ctx->lr = 0x802ED174u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802ED174:
    ctx->pc = 0x802ED174u;
    ctx->downcount -= 8;
    // 802ED174: lwz     r5, 384(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ED178:
    // 802ED178: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED17C:
    ctx->pc = 0x802ED17Cu;
    // 802ED17C: lwz     r7, 276(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(276);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802ED180:
    // 802ED180: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED184:
    // 802ED184: li      r6, 51
    ctx->gpr[6] = (u32)(s32)(51);

label_802ED188:
    // 802ED188: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802ED18C:
    // 802ED18C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802ED190:
    // 802ED190: bl      0x8026F828
    {
            ctx->lr = 0x802ED194u;
            ctx->pc = 0x8026F828u;
            return;
    }

label_802ED194:
    ctx->downcount -= 3;
    // 802ED194: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802ED198:
    // 802ED198: addi    r27, r27, 12
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(12);

label_802ED19C:
    // 802ED19C: addi    r26, r26, 4
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(4);

label_802ED1A0:
    ctx->pc = 0x802ED1A0u;
    ctx->downcount -= 3;
    // 802ED1A0: lwz     r0, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED1A4:
    // 802ED1A4: cmpw    r29, r0
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED1A8:
    // 802ED1A8: bc    12, 0, 0x802ED0D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED0D4u;
                return;
            }
            goto label_802ED0D4;
        }
    }

label_802ED1AC:
    ctx->pc = 0x802ED1ACu;
    ctx->downcount -= 3;
    // 802ED1AC: lbz     r0, 380(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED1B0:
    ctx->pc = 0x802ED1B0u;
    // 802ED1B0: cmpwi   r0, 0
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

label_802ED1B4:
    ctx->pc = 0x802ED1B4u;
    // 802ED1B4: bc    4, 2, 0x802ED22C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED22C;
        }
    }

label_802ED1B8:
    ctx->pc = 0x802ED1B8u;
    ctx->downcount -= 3;
    // 802ED1B8: li      r20, 0
    ctx->gpr[20] = (u32)(s32)(0);

label_802ED1BC:
    ctx->pc = 0x802ED1BCu;
    // 802ED1BC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED1C0:
    ctx->pc = 0x802ED1C0u;
    // 802ED1C0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802ED1C4:
    ctx->pc = 0x802ED1C4u;
    ctx->downcount -= 5;
    // 802ED1C4: stb     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[26]);
    }

label_802ED1C8:
    // 802ED1C8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED1CC:
    ctx->pc = 0x802ED1CCu;
    // 802ED1CC: lwzx    r4, r31, r30
    {
        u32 ea = ctx->gpr[31] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED1D0:
    // 802ED1D0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED1D4:
    // 802ED1D4: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED1D8u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED1D8:
    ctx->pc = 0x802ED1D8u;
    ctx->downcount -= 5;
    // 802ED1D8: lwz     r4, -28096(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28096);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED1DC:
    // 802ED1DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED1E0:
    // 802ED1E0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED1E4:
    ctx->pc = 0x802ED1E4u;
    // 802ED1E4: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED1E8:
    // 802ED1E8: bl      0x8000E864
    {
            ctx->lr = 0x802ED1ECu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED1EC:
    ctx->downcount -= 3;
    // 802ED1EC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED1F0:
    // 802ED1F0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED1F4:
    // 802ED1F4: bl      0x8026F968
    {
            ctx->lr = 0x802ED1F8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802ED1F8:
    ctx->downcount -= 9;
    // 802ED1F8: add   r6, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802ED1FC:
    // 802ED1FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED200:
    ctx->pc = 0x802ED200u;
    // 802ED200: lwz     r7, 356(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(356);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802ED204:
    // 802ED204: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802ED208:
    ctx->pc = 0x802ED208u;
    // 802ED208: lwz     r5, 384(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(384);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ED20C:
    // 802ED20C: li      r6, 51
    ctx->gpr[6] = (u32)(s32)(51);

label_802ED210:
    // 802ED210: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802ED214:
    // 802ED214: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802ED218:
    // 802ED218: bl      0x8026F828
    {
            ctx->lr = 0x802ED21Cu;
            ctx->pc = 0x8026F828u;
            return;
    }

label_802ED21C:
    ctx->downcount -= 4;
    // 802ED21C: addi    r20, r20, 1
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(1);

label_802ED220:
    // 802ED220: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802ED224:
    // 802ED224: cmpwi   r20, 2
    {
        s32 val_a = (s32)(ctx->gpr[20]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED228:
    // 802ED228: bc    12, 0, 0x802ED1C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED1C4u;
                return;
            }
            goto label_802ED1C4;
        }
    }

label_802ED22C:
    ctx->pc = 0x802ED22Cu;
    ctx->downcount -= 2;
    // 802ED22C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802ED230:
    ctx->pc = 0x802ED230u;
    // 802ED230: bl      0x802ECFE4
    {
            ctx->lr = 0x802ED234u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECFE4u;
                return;
            }
            goto label_802ECFE4;
    }

label_802ED234:
    ctx->pc = 0x802ED234u;
    ctx->downcount -= 16;
    // 802ED234: lmw     r20, 80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        for (u32 r = 20; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED238:
    ctx->pc = 0x802ED238u;
    // 802ED238: lwz     r0, 132(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED23C:
    ctx->pc = 0x802ED23Cu;
    // 802ED23C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED240:
    ctx->pc = 0x802ED240u;
    // 802ED240: addi    r1, r1, 128
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(128);

label_802ED244:
    ctx->pc = 0x802ED244u;
    // 802ED244: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED248:
    ctx->pc = 0x802ED248u;
    ctx->downcount -= 18;
    // 802ED248: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED24C:
    ctx->pc = 0x802ED24Cu;
    // 802ED24C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED250:
    ctx->pc = 0x802ED250u;
    // 802ED250: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED254:
    ctx->pc = 0x802ED254u;
    // 802ED254: stmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED258:
    ctx->pc = 0x802ED258u;
    // 802ED258: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED25C:
    ctx->pc = 0x802ED25Cu;
    // 802ED25C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802ED260:
    ctx->pc = 0x802ED260u;
    // 802ED260: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_802ED264:
    ctx->pc = 0x802ED264u;
    // 802ED264: addi    r23, r13, -28104
    ctx->gpr[23] = ctx->gpr[13] + (u32)(s32)(-28104);

label_802ED268:
    ctx->pc = 0x802ED268u;
    ctx->downcount -= 3;
    // 802ED268: lwzx    r4, r23, r22
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[22];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED26C:
    // 802ED26C: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_802ED270:
    // 802ED270: bl      0x8026F970
    {
            ctx->lr = 0x802ED274u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED274:
    ctx->downcount -= 2;
    // 802ED274: cmpwi   r24, 1
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED278:
    // 802ED278: bc    4, 2, 0x802ED290
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED290;
        }
    }

label_802ED27C:
    ctx->pc = 0x802ED27Cu;
    ctx->downcount -= 5;
    // 802ED27C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED280:
    // 802ED280: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED284:
    // 802ED284: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED288:
    ctx->pc = 0x802ED288u;
    // 802ED288: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED28C:
    // 802ED28C: b       0x802ED29C
    {
            goto label_802ED29C;
    }

label_802ED290:
    ctx->pc = 0x802ED290u;
    ctx->downcount -= 3;
    // 802ED290: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED294:
    // 802ED294: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED298:
    ctx->pc = 0x802ED298u;
    // 802ED298: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED29C:
    ctx->downcount -= 4;
    // 802ED29C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_802ED2A0:
    // 802ED2A0: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_802ED2A4:
    // 802ED2A4: cmpwi   r24, 2
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED2A8:
    // 802ED2A8: bc    12, 0, 0x802ED268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED268u;
                return;
            }
            goto label_802ED268;
        }
    }

label_802ED2AC:
    ctx->pc = 0x802ED2ACu;
    ctx->downcount -= 6;
    // 802ED2AC: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802ED2B0:
    ctx->pc = 0x802ED2B0u;
    // 802ED2B0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802ED2B4:
    ctx->pc = 0x802ED2B4u;
    // 802ED2B4: addi    r30, r30, 15416
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(15416);

label_802ED2B8:
    ctx->pc = 0x802ED2B8u;
    // 802ED2B8: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802ED2BC:
    ctx->pc = 0x802ED2BCu;
    // 802ED2BC: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_802ED2C0:
    ctx->pc = 0x802ED2C0u;
    // 802ED2C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ED2C4:
    ctx->downcount -= 5;
    // 802ED2C4: rlwinm r0, r23, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[23], 2u) & 0xFFFFFFFCu;
    }

label_802ED2C8:
    // 802ED2C8: add   r28, r25, r24
    {
        u32 a = ctx->gpr[25];
        u32 b = ctx->gpr[24];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802ED2CC:
    // 802ED2CC: add   r29, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_802ED2D0:
    // 802ED2D0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802ED2D4:
    // 802ED2D4: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_802ED2D8:
    ctx->pc = 0x802ED2D8u;
    ctx->downcount -= 5;
    // 802ED2D8: stb     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_802ED2DC:
    // 802ED2DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED2E0:
    ctx->pc = 0x802ED2E0u;
    // 802ED2E0: lwz     r4, -28132(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28132);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED2E4:
    // 802ED2E4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED2E8:
    // 802ED2E8: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED2ECu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED2EC:
    ctx->pc = 0x802ED2ECu;
    ctx->downcount -= 4;
    // 802ED2EC: lwzx    r4, r29, r22
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[22];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED2F0:
    // 802ED2F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED2F4:
    // 802ED2F4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED2F8:
    // 802ED2F8: bl      0x8000E864
    {
            ctx->lr = 0x802ED2FCu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED2FC:
    ctx->downcount -= 3;
    // 802ED2FC: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_802ED300:
    // 802ED300: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED304:
    // 802ED304: bl      0x8026F970
    {
            ctx->lr = 0x802ED308u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED308:
    ctx->pc = 0x802ED308u;
    ctx->downcount -= 3;
    // 802ED308: lwz     r0, 340(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED30C:
    // 802ED30C: cmpwi   r0, 2
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

label_802ED310:
    // 802ED310: bc    4, 2, 0x802ED340
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED340;
        }
    }

label_802ED314:
    ctx->downcount -= 2;
    // 802ED314: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED318:
    // 802ED318: bc    4, 2, 0x802ED32C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED32C;
        }
    }

label_802ED31C:
    ctx->pc = 0x802ED31Cu;
    ctx->downcount -= 4;
    // 802ED31C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED320:
    // 802ED320: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED324:
    ctx->pc = 0x802ED324u;
    // 802ED324: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED328:
    // 802ED328: b       0x802ED368
    {
            goto label_802ED368;
    }

label_802ED32C:
    ctx->pc = 0x802ED32Cu;
    ctx->downcount -= 5;
    // 802ED32C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED330:
    // 802ED330: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED334:
    // 802ED334: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED338:
    ctx->pc = 0x802ED338u;
    // 802ED338: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED33C:
    // 802ED33C: b       0x802ED368
    {
            goto label_802ED368;
    }

label_802ED340:
    ctx->downcount -= 2;
    // 802ED340: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED344:
    // 802ED344: bc    4, 2, 0x802ED35C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED35C;
        }
    }

label_802ED348:
    ctx->pc = 0x802ED348u;
    ctx->downcount -= 5;
    // 802ED348: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED34C:
    // 802ED34C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED350:
    // 802ED350: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED354:
    ctx->pc = 0x802ED354u;
    // 802ED354: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED358:
    // 802ED358: b       0x802ED368
    {
            goto label_802ED368;
    }

label_802ED35C:
    ctx->pc = 0x802ED35Cu;
    ctx->downcount -= 3;
    // 802ED35C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED360:
    // 802ED360: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED364:
    ctx->pc = 0x802ED364u;
    // 802ED364: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED368:
    ctx->pc = 0x802ED368u;
    ctx->downcount -= 5;
    // 802ED368: stb     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_802ED36C:
    // 802ED36C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED370:
    ctx->pc = 0x802ED370u;
    // 802ED370: lwz     r4, -28128(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28128);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED374:
    // 802ED374: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED378:
    // 802ED378: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED37Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED37C:
    ctx->pc = 0x802ED37Cu;
    ctx->downcount -= 4;
    // 802ED37C: lwzx    r4, r29, r22
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[22];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED380:
    // 802ED380: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED384:
    // 802ED384: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED388:
    // 802ED388: bl      0x8000E864
    {
            ctx->lr = 0x802ED38Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED38C:
    ctx->downcount -= 3;
    // 802ED38C: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_802ED390:
    // 802ED390: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED394:
    // 802ED394: bl      0x8026F970
    {
            ctx->lr = 0x802ED398u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED398:
    ctx->pc = 0x802ED398u;
    ctx->downcount -= 3;
    // 802ED398: lwz     r0, 340(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED39C:
    // 802ED39C: cmpwi   r0, 2
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

label_802ED3A0:
    // 802ED3A0: bc    4, 2, 0x802ED3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED3D0;
        }
    }

label_802ED3A4:
    ctx->downcount -= 2;
    // 802ED3A4: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED3A8:
    // 802ED3A8: bc    4, 2, 0x802ED3BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED3BC;
        }
    }

label_802ED3AC:
    ctx->pc = 0x802ED3ACu;
    ctx->downcount -= 4;
    // 802ED3AC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED3B0:
    // 802ED3B0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED3B4:
    ctx->pc = 0x802ED3B4u;
    // 802ED3B4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED3B8:
    // 802ED3B8: b       0x802ED3F8
    {
            goto label_802ED3F8;
    }

label_802ED3BC:
    ctx->pc = 0x802ED3BCu;
    ctx->downcount -= 5;
    // 802ED3BC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED3C0:
    // 802ED3C0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED3C4:
    // 802ED3C4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED3C8:
    ctx->pc = 0x802ED3C8u;
    // 802ED3C8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED3CC:
    // 802ED3CC: b       0x802ED3F8
    {
            goto label_802ED3F8;
    }

label_802ED3D0:
    ctx->downcount -= 2;
    // 802ED3D0: cmpwi   r26, 2
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED3D4:
    // 802ED3D4: bc    4, 2, 0x802ED3EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED3EC;
        }
    }

label_802ED3D8:
    ctx->pc = 0x802ED3D8u;
    ctx->downcount -= 5;
    // 802ED3D8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED3DC:
    // 802ED3DC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED3E0:
    // 802ED3E0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED3E4:
    ctx->pc = 0x802ED3E4u;
    // 802ED3E4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED3E8:
    // 802ED3E8: b       0x802ED3F8
    {
            goto label_802ED3F8;
    }

label_802ED3EC:
    ctx->pc = 0x802ED3ECu;
    ctx->downcount -= 3;
    // 802ED3EC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED3F0:
    // 802ED3F0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED3F4:
    ctx->pc = 0x802ED3F4u;
    // 802ED3F4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED3F8:
    ctx->downcount -= 4;
    // 802ED3F8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802ED3FC:
    // 802ED3FC: addi    r22, r22, 4
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(4);

label_802ED400:
    // 802ED400: cmpwi   r26, 3
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED404:
    // 802ED404: bc    12, 0, 0x802ED2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED2D8u;
                return;
            }
            goto label_802ED2D8;
        }
    }

label_802ED408:
    ctx->downcount -= 5;
    // 802ED408: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802ED40C:
    // 802ED40C: addi    r23, r23, 3
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(3);

label_802ED410:
    // 802ED410: cmpwi   r27, 2
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

label_802ED414:
    // 802ED414: addi    r24, r24, 4
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(4);

label_802ED418:
    // 802ED418: bc    12, 0, 0x802ED2C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED2C4u;
                return;
            }
            goto label_802ED2C4;
        }
    }

label_802ED41C:
    ctx->pc = 0x802ED41Cu;
    ctx->downcount -= 16;
    // 802ED41C: lmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED420:
    ctx->pc = 0x802ED420u;
    // 802ED420: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED424:
    ctx->pc = 0x802ED424u;
    // 802ED424: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED428:
    ctx->pc = 0x802ED428u;
    // 802ED428: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_802ED42C:
    ctx->pc = 0x802ED42Cu;
    // 802ED42C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED430:
    ctx->pc = 0x802ED430u;
    ctx->downcount -= 18;
    // 802ED430: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED434:
    ctx->pc = 0x802ED434u;
    // 802ED434: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED438:
    ctx->pc = 0x802ED438u;
    // 802ED438: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED43C:
    ctx->pc = 0x802ED43Cu;
    // 802ED43C: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED440:
    ctx->pc = 0x802ED440u;
    // 802ED440: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED444:
    ctx->pc = 0x802ED444u;
    // 802ED444: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802ED448:
    ctx->pc = 0x802ED448u;
    // 802ED448: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED44C:
    ctx->pc = 0x802ED44Cu;
    // 802ED44C: addi    r27, r13, -28104
    ctx->gpr[27] = ctx->gpr[13] + (u32)(s32)(-28104);

label_802ED450:
    ctx->pc = 0x802ED450u;
    ctx->downcount -= 3;
    // 802ED450: lwzx    r4, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED454:
    // 802ED454: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ED458:
    // 802ED458: bl      0x8026F970
    {
            ctx->lr = 0x802ED45Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED45C:
    ctx->downcount -= 2;
    // 802ED45C: cmpwi   r28, 0
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

label_802ED460:
    // 802ED460: bc    4, 2, 0x802ED478
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED478;
        }
    }

label_802ED464:
    ctx->pc = 0x802ED464u;
    ctx->downcount -= 5;
    // 802ED464: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED468:
    // 802ED468: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED46C:
    // 802ED46C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802ED470:
    ctx->pc = 0x802ED470u;
    // 802ED470: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED474:
    // 802ED474: b       0x802ED484
    {
            goto label_802ED484;
    }

label_802ED478:
    ctx->pc = 0x802ED478u;
    ctx->downcount -= 3;
    // 802ED478: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED47C:
    // 802ED47C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED480:
    ctx->pc = 0x802ED480u;
    // 802ED480: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED484:
    ctx->downcount -= 4;
    // 802ED484: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802ED488:
    // 802ED488: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802ED48C:
    // 802ED48C: cmpwi   r28, 2
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

label_802ED490:
    // 802ED490: bc    12, 0, 0x802ED450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED450u;
                return;
            }
            goto label_802ED450;
        }
    }

label_802ED494:
    ctx->pc = 0x802ED494u;
    ctx->downcount -= 5;
    // 802ED494: lis     r27, -32660
    ctx->gpr[27] = ((u32)(s32)(-32660) << 16);

label_802ED498:
    ctx->pc = 0x802ED498u;
    // 802ED498: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ED49C:
    ctx->pc = 0x802ED49Cu;
    // 802ED49C: addi    r27, r27, 15440
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(15440);

label_802ED4A0:
    ctx->pc = 0x802ED4A0u;
    // 802ED4A0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED4A4:
    ctx->pc = 0x802ED4A4u;
    // 802ED4A4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802ED4A8:
    ctx->pc = 0x802ED4A8u;
    ctx->downcount -= 8;
    // 802ED4A8: lwz     r5, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ED4AC:
    // 802ED4AC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ED4B0:
    ctx->pc = 0x802ED4B0u;
    // 802ED4B0: lwzx    r4, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED4B4:
    // 802ED4B4: addi    r0, r5, -1
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-1);

label_802ED4B8:
    // 802ED4B8: subf   r0, r31, r0
    {
        u32 a = ~ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802ED4BC:
    // 802ED4BC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ED4C0:
    // 802ED4C0: rlwinm r26, r0, 27, 5, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802ED4C4:
    // 802ED4C4: bl      0x8026F970
    {
            ctx->lr = 0x802ED4C8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED4C8:
    ctx->pc = 0x802ED4C8u;
    ctx->downcount -= 9;
    // 802ED4C8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED4CC:
    // 802ED4CC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED4D0:
    // 802ED4D0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED4D4:
    // 802ED4D4: or   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[26];
    }

label_802ED4D8:
    ctx->pc = 0x802ED4D8u;
    // 802ED4D8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED4DC:
    // 802ED4DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED4E0:
    ctx->pc = 0x802ED4E0u;
    // 802ED4E0: stb     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_802ED4E4:
    ctx->pc = 0x802ED4E4u;
    // 802ED4E4: lwz     r4, -28136(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28136);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED4E8:
    // 802ED4E8: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED4ECu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED4EC:
    ctx->pc = 0x802ED4ECu;
    ctx->downcount -= 5;
    // 802ED4EC: lwz     r4, -28096(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28096);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED4F0:
    // 802ED4F0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED4F4:
    // 802ED4F4: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED4F8:
    ctx->pc = 0x802ED4F8u;
    // 802ED4F8: lwzx    r4, r4, r29
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED4FC:
    // 802ED4FC: bl      0x8000E864
    {
            ctx->lr = 0x802ED500u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED500:
    ctx->downcount -= 3;
    // 802ED500: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802ED504:
    // 802ED504: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED508:
    // 802ED508: bl      0x8026F970
    {
            ctx->lr = 0x802ED50Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802ED50C:
    ctx->pc = 0x802ED50Cu;
    ctx->downcount -= 13;
    // 802ED50C: lwz     r6, 320(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(320);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ED510:
    // 802ED510: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802ED514:
    ctx->pc = 0x802ED514u;
    // 802ED514: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED518:
    // 802ED518: xor   r4, r6, r31
    {
        ctx->gpr[4] = ctx->gpr[6] ^ ctx->gpr[31];
    }

label_802ED51C:
    // 802ED51C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_802ED520:
    // 802ED520: srawi r5, r4, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[4];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[5] = value;
        } else if (sh > 31) {
            ctx->gpr[5] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[5] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_802ED524:
    // 802ED524: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802ED528:
    // 802ED528: and   r4, r4, r6
    {
        ctx->gpr[4] = ctx->gpr[4] & ctx->gpr[6];
    }

label_802ED52C:
    // 802ED52C: cmpwi   r31, 4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED530:
    // 802ED530: subf   r4, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_802ED534:
    // 802ED534: rlwimi r0, r4, 1, 31, 31
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 1u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x00000001u) | (rot & 0x00000001u);
    }

label_802ED538:
    ctx->pc = 0x802ED538u;
    // 802ED538: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED53C:
    // 802ED53C: bc    12, 0, 0x802ED4A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED4A8u;
                return;
            }
            goto label_802ED4A8;
        }
    }

label_802ED540:
    ctx->pc = 0x802ED540u;
    ctx->downcount -= 16;
    // 802ED540: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED544:
    ctx->pc = 0x802ED544u;
    // 802ED544: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED548:
    ctx->pc = 0x802ED548u;
    // 802ED548: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED54C:
    ctx->pc = 0x802ED54Cu;
    // 802ED54C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802ED550:
    ctx->pc = 0x802ED550u;
    // 802ED550: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED554:
    ctx->pc = 0x802ED554u;
    ctx->downcount -= 16;
    // 802ED554: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED558:
    ctx->pc = 0x802ED558u;
    // 802ED558: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED55C:
    ctx->pc = 0x802ED55Cu;
    // 802ED55C: cmpwi   r4, 0
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

label_802ED560:
    ctx->pc = 0x802ED560u;
    // 802ED560: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ED564:
    ctx->pc = 0x802ED564u;
    // 802ED564: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED568:
    ctx->pc = 0x802ED568u;
    // 802ED568: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802ED56C:
    ctx->pc = 0x802ED56Cu;
    // 802ED56C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802ED570:
    ctx->pc = 0x802ED570u;
    // 802ED570: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED574:
    ctx->pc = 0x802ED574u;
    // 802ED574: lwz     r5, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ED578:
    ctx->pc = 0x802ED578u;
    // 802ED578: lwz     r4, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED57C:
    ctx->pc = 0x802ED57Cu;
    // 802ED57C: stw     r6, 344(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ED580:
    ctx->pc = 0x802ED580u;
    // 802ED580: stw     r6, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ED584:
    ctx->pc = 0x802ED584u;
    // 802ED584: stw     r5, 356(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ED588:
    ctx->pc = 0x802ED588u;
    // 802ED588: stw     r4, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802ED58C:
    ctx->pc = 0x802ED58Cu;
    // 802ED58C: stb     r0, 382(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(382);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED590:
    ctx->pc = 0x802ED590u;
    // 802ED590: bc    12, 2, 0x802ED5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ED5CC;
        }
    }

label_802ED594:
    ctx->pc = 0x802ED594u;
    ctx->downcount -= 2;
    // 802ED594: cmpw    r5, r4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED598:
    ctx->pc = 0x802ED598u;
    // 802ED598: bc    4, 2, 0x802ED5A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED5A4;
        }
    }

label_802ED59C:
    ctx->pc = 0x802ED59Cu;
    ctx->downcount -= 2;
    // 802ED59C: stb     r0, 382(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(382);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802ED5A0:
    ctx->pc = 0x802ED5A0u;
    // 802ED5A0: b       0x802ED5B0
    {
            goto label_802ED5B0;
    }

label_802ED5A4:
    ctx->pc = 0x802ED5A4u;
    ctx->downcount -= 2;
    // 802ED5A4: lwz     r3, 384(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ED5A8:
    ctx->pc = 0x802ED5A8u;
    // 802ED5A8: bl      0x8029242C
    {
            ctx->lr = 0x802ED5ACu;
            ctx->pc = 0x8029242Cu;
            return;
    }

label_802ED5AC:
    ctx->pc = 0x802ED5ACu;
    ctx->downcount -= 1;
    // 802ED5AC: stb     r3, 382(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(382);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_802ED5B0:
    ctx->pc = 0x802ED5B0u;
    ctx->downcount -= 3;
    // 802ED5B0: lbz     r0, 382(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(382);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED5B4:
    ctx->pc = 0x802ED5B4u;
    // 802ED5B4: cmpwi   r0, 0
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

label_802ED5B8:
    ctx->pc = 0x802ED5B8u;
    // 802ED5B8: bc    4, 2, 0x802ED5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED5CC;
        }
    }

label_802ED5BC:
    ctx->pc = 0x802ED5BCu;
    ctx->downcount -= 4;
    // 802ED5BC: lwz     r3, 352(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(352);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ED5C0:
    ctx->pc = 0x802ED5C0u;
    // 802ED5C0: lwz     r0, 348(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED5C4:
    ctx->pc = 0x802ED5C4u;
    // 802ED5C4: stw     r3, 356(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802ED5C8:
    ctx->pc = 0x802ED5C8u;
    // 802ED5C8: stw     r0, 360(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED5CC:
    ctx->pc = 0x802ED5CCu;
    ctx->downcount -= 3;
    // 802ED5CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ED5D0:
    ctx->pc = 0x802ED5D0u;
    // 802ED5D0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802ED5D4:
    ctx->pc = 0x802ED5D4u;
    // 802ED5D4: b       0x802ED610
    {
            goto label_802ED610;
    }

label_802ED5D8:
    ctx->pc = 0x802ED5D8u;
    ctx->downcount -= 5;
    // 802ED5D8: lbz     r0, 382(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(382);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED5DC:
    // 802ED5DC: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802ED5E0:
    ctx->pc = 0x802ED5E0u;
    // 802ED5E0: lwz     r4, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED5E4:
    // 802ED5E4: cmpwi   r0, 0
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

label_802ED5E8:
    // 802ED5E8: bc    4, 2, 0x802ED5F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED5F4;
        }
    }

label_802ED5EC:
    ctx->downcount -= 2;
    // 802ED5EC: cntlzw r0, r4
    {
        u32 v = ctx->gpr[4];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ED5F0:
    // 802ED5F0: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802ED5F4:
    ctx->downcount -= 7;
    // 802ED5F4: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802ED5F8:
    // 802ED5F8: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802ED5FC:
    // 802ED5FC: add   r5, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802ED600:
    // 802ED600: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802ED604:
    ctx->pc = 0x802ED604u;
    // 802ED604: lwz     r4, 340(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED608:
    // 802ED608: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_802ED60C:
    ctx->pc = 0x802ED60Cu;
    // 802ED60C: stw     r0, 340(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED610:
    ctx->pc = 0x802ED610u;
    ctx->downcount -= 3;
    // 802ED610: lwz     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED614:
    // 802ED614: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED618:
    // 802ED618: bc    12, 0, 0x802ED5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED5D8u;
                return;
            }
            goto label_802ED5D8;
        }
    }

label_802ED61C:
    ctx->pc = 0x802ED61Cu;
    ctx->downcount -= 8;
    // 802ED61C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802ED620:
    ctx->pc = 0x802ED620u;
    // 802ED620: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED624:
    ctx->pc = 0x802ED624u;
    // 802ED624: addi    r8, r1, 8
    ctx->gpr[8] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED628:
    ctx->pc = 0x802ED628u;
    // 802ED628: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_802ED62C:
    ctx->pc = 0x802ED62Cu;
    // 802ED62C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED630:
    ctx->pc = 0x802ED630u;
    // 802ED630: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802ED634:
    ctx->pc = 0x802ED634u;
    // 802ED634: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ED638:
    ctx->pc = 0x802ED638u;
    // 802ED638: b       0x802ED6A8
    {
            goto label_802ED6A8;
    }

label_802ED63C:
    ctx->pc = 0x802ED63Cu;
    ctx->downcount -= 5;
    // 802ED63C: lbz     r0, 382(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(382);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED640:
    // 802ED640: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802ED644:
    ctx->pc = 0x802ED644u;
    // 802ED644: lwz     r6, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ED648:
    // 802ED648: cmpwi   r0, 0
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

label_802ED64C:
    // 802ED64C: bc    4, 2, 0x802ED658
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED658;
        }
    }

label_802ED650:
    ctx->downcount -= 2;
    // 802ED650: cntlzw r0, r6
    {
        u32 v = ctx->gpr[6];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802ED654:
    // 802ED654: rlwinm r6, r0, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802ED658:
    ctx->downcount -= 5;
    // 802ED658: rlwinm r9, r6, 2, 0, 29
    {
        ctx->gpr[9] = dolrecomp_rotl32(ctx->gpr[6], 2u) & 0xFFFFFFFCu;
    }

label_802ED65C:
    // 802ED65C: add   r5, r31, r9
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802ED660:
    ctx->pc = 0x802ED660u;
    // 802ED660: lwz     r0, 340(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED664:
    // 802ED664: cmpwi   r0, 1
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

label_802ED668:
    // 802ED668: bc    4, 2, 0x802ED680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED680;
        }
    }

label_802ED66C:
    ctx->downcount -= 7;
    // 802ED66C: mulli   r6, r6, 3
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)3);

label_802ED670:
    // 802ED670: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802ED674:
    // 802ED674: addi    r0, r6, 2
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(2);

label_802ED678:
    ctx->pc = 0x802ED678u;
    // 802ED678: stw     r0, 324(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED67C:
    // 802ED67C: b       0x802ED69C
    {
            goto label_802ED69C;
    }

label_802ED680:
    ctx->downcount -= 9;
    // 802ED680: mulli   r7, r6, 3
    ctx->gpr[7] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)3);

label_802ED684:
    ctx->pc = 0x802ED684u;
    // 802ED684: lwzx    r6, r8, r9
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[9];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802ED688:
    // 802ED688: add   r5, r31, r4
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802ED68C:
    // 802ED68C: addi    r0, r6, 1
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(1);

label_802ED690:
    ctx->pc = 0x802ED690u;
    // 802ED690: stwx    r0, r8, r9
    {
        u32 ea = ctx->gpr[8] + ctx->gpr[9];
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED694:
    // 802ED694: add   r0, r7, r6
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802ED698:
    ctx->pc = 0x802ED698u;
    // 802ED698: stw     r0, 324(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED69C:
    ctx->downcount -= 3;
    // 802ED69C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_802ED6A0:
    // 802ED6A0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802ED6A4:
    // 802ED6A4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802ED6A8:
    ctx->pc = 0x802ED6A8u;
    ctx->downcount -= 3;
    // 802ED6A8: lwz     r0, 320(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED6AC:
    // 802ED6AC: cmpw    r10, r0
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED6B0:
    // 802ED6B0: bc    12, 0, 0x802ED63C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED63Cu;
                return;
            }
            goto label_802ED63C;
        }
    }

label_802ED6B4:
    ctx->pc = 0x802ED6B4u;
    ctx->downcount -= 6;
    // 802ED6B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED6B8:
    ctx->pc = 0x802ED6B8u;
    // 802ED6B8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802ED6BC:
    ctx->pc = 0x802ED6BCu;
    // 802ED6BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED6C0:
    ctx->pc = 0x802ED6C0u;
    // 802ED6C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802ED6C4:
    ctx->pc = 0x802ED6C4u;
    // 802ED6C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED6C8:
    ctx->pc = 0x802ED6C8u;
    ctx->downcount -= 17;
    // 802ED6C8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED6CC:
    ctx->pc = 0x802ED6CCu;
    // 802ED6CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED6D0:
    ctx->pc = 0x802ED6D0u;
    // 802ED6D0: cmpwi   r4, 0
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

label_802ED6D4:
    ctx->pc = 0x802ED6D4u;
    // 802ED6D4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED6D8:
    ctx->pc = 0x802ED6D8u;
    // 802ED6D8: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED6DC:
    ctx->pc = 0x802ED6DCu;
    // 802ED6DC: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED6E0:
    ctx->pc = 0x802ED6E0u;
    // 802ED6E0: bc    12, 2, 0x802ED780
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ED780;
        }
    }

label_802ED6E4:
    ctx->pc = 0x802ED6E4u;
    ctx->downcount -= 4;
    // 802ED6E4: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802ED6E8:
    ctx->pc = 0x802ED6E8u;
    // 802ED6E8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ED6EC:
    ctx->pc = 0x802ED6ECu;
    // 802ED6EC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802ED6F0:
    ctx->pc = 0x802ED6F0u;
    // 802ED6F0: b       0x802ED770
    {
            goto label_802ED770;
    }

label_802ED6F4:
    ctx->downcount -= 5;
    // 802ED6F4: add   r28, r24, r31
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802ED6F8:
    // 802ED6F8: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802ED6FC:
    // 802ED6FC: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_802ED700:
    // 802ED700: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED704:
    // 802ED704: b       0x802ED750
    {
            goto label_802ED750;
    }

label_802ED708:
    ctx->downcount -= 2;
    // 802ED708: cmpw    cr1, r27, r25
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 24)) | (cr_bits << 24);
    }

label_802ED70C:
    // 802ED70C: bc    12, 6, 0x802ED748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x02000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ED748;
        }
    }

label_802ED710:
    ctx->downcount -= 6;
    // 802ED710: add   r3, r24, r29
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ED714:
    ctx->pc = 0x802ED714u;
    // 802ED714: lwz     r5, 276(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(276);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802ED718:
    ctx->pc = 0x802ED718u;
    // 802ED718: lwz     r4, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED71C:
    // 802ED71C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802ED720:
    // 802ED720: cmpw    r4, r5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED724:
    // 802ED724: bc    4, 2, 0x802ED734
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED734;
        }
    }

label_802ED728:
    ctx->downcount -= 1;
    // 802ED728: bc    4, 4, 0x802ED73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x08000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED73C;
        }
    }

label_802ED72C:
    ctx->downcount -= 2;
    // 802ED72C: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802ED730:
    // 802ED730: b       0x802ED73C
    {
            goto label_802ED73C;
    }

label_802ED734:
    ctx->pc = 0x802ED734u;
    ctx->downcount -= 2;
    // 802ED734: lwz     r3, 384(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802ED738:
    // 802ED738: bl      0x8029242C
    {
            ctx->lr = 0x802ED73Cu;
            ctx->pc = 0x8029242Cu;
            return;
    }

label_802ED73C:
    ctx->downcount -= 2;
    // 802ED73C: cmpwi   r3, 0
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

label_802ED740:
    // 802ED740: bc    4, 2, 0x802ED748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED748;
        }
    }

label_802ED744:
    ctx->downcount -= 1;
    // 802ED744: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802ED748:
    ctx->downcount -= 2;
    // 802ED748: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_802ED74C:
    // 802ED74C: addi    r29, r29, 12
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(12);

label_802ED750:
    ctx->pc = 0x802ED750u;
    ctx->downcount -= 3;
    // 802ED750: lwz     r0, 320(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED754:
    // 802ED754: cmpw    r25, r0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED758:
    // 802ED758: bc    12, 0, 0x802ED708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED708u;
                return;
            }
            goto label_802ED708;
        }
    }

label_802ED75C:
    ctx->downcount -= 5;
    // 802ED75C: add   r3, r24, r30
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802ED760:
    // 802ED760: addi    r31, r31, 12
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(12);

label_802ED764:
    ctx->pc = 0x802ED764u;
    // 802ED764: stw     r26, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_802ED768:
    // 802ED768: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802ED76C:
    // 802ED76C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802ED770:
    ctx->pc = 0x802ED770u;
    ctx->downcount -= 3;
    // 802ED770: lwz     r0, 320(r24)
    {
        u32 ea = ctx->gpr[24] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED774:
    // 802ED774: cmpw    r27, r0
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

label_802ED778:
    // 802ED778: bc    12, 0, 0x802ED6F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED6F4u;
                return;
            }
            goto label_802ED6F4;
        }
    }

label_802ED77C:
    ctx->pc = 0x802ED77Cu;
    ctx->downcount -= 1;
    // 802ED77C: b       0x802ED7A8
    {
            goto label_802ED7A8;
    }

label_802ED780:
    ctx->pc = 0x802ED780u;
    ctx->downcount -= 3;
    // 802ED780: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802ED784:
    ctx->pc = 0x802ED784u;
    // 802ED784: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802ED788:
    ctx->pc = 0x802ED788u;
    // 802ED788: b       0x802ED79C
    {
            goto label_802ED79C;
    }

label_802ED78C:
    loop_802ED78C(ctx);
    if (ctx->pc == 0x802ED7A8u) goto label_802ED7A8;
    return;
label_802ED790:
    // 802ED790: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802ED794:
    ctx->pc = 0x802ED794u;
    // 802ED794: stw     r6, 324(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802ED798:
    // 802ED798: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802ED79C:
    ctx->pc = 0x802ED79Cu;
    ctx->downcount -= 3;
    // 802ED79C: lwz     r0, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED7A0:
    // 802ED7A0: cmpw    r6, r0
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED7A4:
    // 802ED7A4: bc    12, 0, 0x802ED78C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED78Cu;
                return;
            }
            goto label_802ED78C;
        }
    }

label_802ED7A8:
    ctx->pc = 0x802ED7A8u;
    ctx->downcount -= 16;
    // 802ED7A8: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED7AC:
    ctx->pc = 0x802ED7ACu;
    // 802ED7AC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED7B0:
    ctx->pc = 0x802ED7B0u;
    // 802ED7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED7B4:
    ctx->pc = 0x802ED7B4u;
    // 802ED7B4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802ED7B8:
    ctx->pc = 0x802ED7B8u;
    // 802ED7B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED7BC:
    ctx->pc = 0x802ED7BCu;
    ctx->downcount -= 1;
    // 802ED7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED7C0:
    ctx->pc = 0x802ED7C0u;
    ctx->downcount -= 24;
    // 802ED7C0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED7C4:
    ctx->pc = 0x802ED7C4u;
    // 802ED7C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED7C8:
    // 802ED7C8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802ED7CC:
    // 802ED7CC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802ED7D0:
    ctx->pc = 0x802ED7D0u;
    // 802ED7D0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED7D4:
    // 802ED7D4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802ED7D8:
    // 802ED7D8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802ED7DC:
    ctx->pc = 0x802ED7DCu;
    // 802ED7DC: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED7E0:
    // 802ED7E0: addi    r30, r4, 11904
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(11904);

label_802ED7E4:
    // 802ED7E4: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED7E8:
    // 802ED7E8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802ED7EC:
    // 802ED7EC: addi    r4, r30, 335
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(335);

label_802ED7F0:
    // 802ED7F0: addi    r5, r30, 350
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(350);

label_802ED7F4:
    // 802ED7F4: bl      0x802703A8
    {
            ctx->lr = 0x802ED7F8u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_802ED7F8:
    ctx->downcount -= 5;
    // 802ED7F8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802ED7FC:
    // 802ED7FC: lis     r28, -32660
    ctx->gpr[28] = ((u32)(s32)(-32660) << 16);

label_802ED800:
    // 802ED800: or   r29, r27, r27
    {
        ctx->gpr[29] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802ED804:
    // 802ED804: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802ED808:
    // 802ED808: addi    r28, r28, 15384
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(15384);

label_802ED80C:
    ctx->pc = 0x802ED80Cu;
    ctx->downcount -= 5;
    // 802ED80C: stb     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_802ED810:
    // 802ED810: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED814:
    ctx->pc = 0x802ED814u;
    // 802ED814: lwz     r4, -28144(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28144);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED818:
    // 802ED818: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED81C:
    // 802ED81C: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED820u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED820:
    ctx->pc = 0x802ED820u;
    ctx->downcount -= 4;
    // 802ED820: lwzx    r4, r28, r31
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED824:
    // 802ED824: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED828:
    // 802ED828: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED82C:
    // 802ED82C: bl      0x8000E864
    {
            ctx->lr = 0x802ED830u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED830:
    ctx->downcount -= 6;
    // 802ED830: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802ED834:
    // 802ED834: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802ED838:
    // 802ED838: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED83C:
    // 802ED83C: addi    r6, r30, 373
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(373);

label_802ED840:
    // 802ED840: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ED844:
    // 802ED844: bl      0x8027035C
    {
            ctx->lr = 0x802ED848u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802ED848:
    ctx->downcount -= 4;
    // 802ED848: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802ED84C:
    // 802ED84C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ED850:
    // 802ED850: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED854:
    // 802ED854: bc    12, 0, 0x802ED80C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED80Cu;
                return;
            }
            goto label_802ED80C;
        }
    }

label_802ED858:
    ctx->downcount -= 8;
    // 802ED858: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802ED85C:
    // 802ED85C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802ED860:
    // 802ED860: addi    r28, r4, 11904
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(11904);

label_802ED864:
    // 802ED864: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ED868:
    // 802ED868: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802ED86C:
    // 802ED86C: addi    r5, r28, 382
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(382);

label_802ED870:
    // 802ED870: addi    r6, r28, 388
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(388);

label_802ED874:
    // 802ED874: bl      0x8027035C
    {
            ctx->lr = 0x802ED878u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802ED878:
    ctx->downcount -= 5;
    // 802ED878: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802ED87C:
    // 802ED87C: li      r27, 5
    ctx->gpr[27] = (u32)(s32)(5);

label_802ED880:
    // 802ED880: addi    r30, r30, 15384
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(15384);

label_802ED884:
    // 802ED884: li      r31, 20
    ctx->gpr[31] = (u32)(s32)(20);

label_802ED888:
    // 802ED888: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802ED88C:
    ctx->pc = 0x802ED88Cu;
    ctx->downcount -= 5;
    // 802ED88C: stb     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_802ED890:
    // 802ED890: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED894:
    ctx->pc = 0x802ED894u;
    // 802ED894: lwz     r4, -28140(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28140);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED898:
    // 802ED898: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED89C:
    // 802ED89C: bl      0x8000E7F4
    {
            ctx->lr = 0x802ED8A0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802ED8A0:
    ctx->downcount -= 5;
    // 802ED8A0: add   r4, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802ED8A4:
    // 802ED8A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED8A8:
    ctx->pc = 0x802ED8A8u;
    // 802ED8A8: lwz     r4, -20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED8AC:
    // 802ED8AC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802ED8B0:
    // 802ED8B0: bl      0x8000E864
    {
            ctx->lr = 0x802ED8B4u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802ED8B4:
    ctx->downcount -= 6;
    // 802ED8B4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802ED8B8:
    // 802ED8B8: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802ED8BC:
    // 802ED8BC: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_802ED8C0:
    // 802ED8C0: addi    r6, r28, 373
    ctx->gpr[6] = ctx->gpr[28] + (u32)(s32)(373);

label_802ED8C4:
    // 802ED8C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ED8C8:
    // 802ED8C8: bl      0x8027035C
    {
            ctx->lr = 0x802ED8CCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802ED8CC:
    ctx->downcount -= 4;
    // 802ED8CC: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802ED8D0:
    // 802ED8D0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802ED8D4:
    // 802ED8D4: cmpwi   r27, 9
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802ED8D8:
    // 802ED8D8: bc    12, 0, 0x802ED88C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED88Cu;
                return;
            }
            goto label_802ED88C;
        }
    }

label_802ED8DC:
    ctx->downcount -= 8;
    // 802ED8DC: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_802ED8E0:
    // 802ED8E0: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_802ED8E4:
    // 802ED8E4: addi    r6, r6, 11904
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(11904);

label_802ED8E8:
    // 802ED8E8: li      r4, 9
    ctx->gpr[4] = (u32)(s32)(9);

label_802ED8EC:
    // 802ED8EC: addi    r5, r6, 402
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(402);

label_802ED8F0:
    // 802ED8F0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802ED8F4:
    // 802ED8F4: addi    r6, r6, 388
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(388);

label_802ED8F8:
    // 802ED8F8: bl      0x8027035C
    {
            ctx->lr = 0x802ED8FCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802ED8FC:
    ctx->pc = 0x802ED8FCu;
    ctx->downcount -= 16;
    // 802ED8FC: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802ED900:
    ctx->pc = 0x802ED900u;
    // 802ED900: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED904:
    ctx->pc = 0x802ED904u;
    // 802ED904: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED908:
    // 802ED908: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802ED90C:
    ctx->pc = 0x802ED90Cu;
    // 802ED90C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED910:
    ctx->pc = 0x802ED910u;
    ctx->downcount -= 10;
    // 802ED910: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED914:
    ctx->pc = 0x802ED914u;
    // 802ED914: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED918:
    ctx->pc = 0x802ED918u;
    // 802ED918: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED91C:
    ctx->pc = 0x802ED91Cu;
    // 802ED91C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802ED920:
    // 802ED920: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED924:
    ctx->pc = 0x802ED924u;
    // 802ED924: lbz     r0, 380(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED928:
    ctx->pc = 0x802ED928u;
    // 802ED928: lwz     r4, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802ED92C:
    // 802ED92C: cmpwi   r0, 0
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

label_802ED930:
    // 802ED930: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_802ED934:
    // 802ED934: bc    4, 2, 0x802ED93C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802ED93C;
        }
    }

label_802ED938:
    ctx->downcount -= 1;
    // 802ED938: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802ED93C:
    ctx->downcount -= 3;
    // 802ED93C: addi    r5, r4, 5
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(5);

label_802ED940:
    // 802ED940: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802ED944:
    // 802ED944: bl      0x80270194
    {
            ctx->lr = 0x802ED948u;
            ctx->pc = 0x80270194u;
            return;
    }

label_802ED948:
    ctx->downcount -= 2;
    // 802ED948: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED94C:
    // 802ED94C: bl      0x80371554
    {
            ctx->lr = 0x802ED950u;
            ctx->pc = 0x80371554u;
            return;
    }

label_802ED950:
    ctx->pc = 0x802ED950u;
    ctx->downcount -= 3;
    // 802ED950: lbz     r0, 380(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(380);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802ED954:
    // 802ED954: cmpwi   r0, 0
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

label_802ED958:
    // 802ED958: bc    12, 2, 0x802ED984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802ED984;
        }
    }

label_802ED95C:
    ctx->pc = 0x802ED95Cu;
    ctx->downcount -= 3;
    // 802ED95C: lbz     r4, 381(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(381);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802ED960:
    // 802ED960: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED964:
    // 802ED964: bl      0x802ED6C8
    {
            ctx->lr = 0x802ED968u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED6C8u;
                return;
            }
            goto label_802ED6C8;
    }

label_802ED968:
    ctx->downcount -= 2;
    // 802ED968: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED96C:
    // 802ED96C: bl      0x802ED430
    {
            ctx->lr = 0x802ED970u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED430u;
                return;
            }
            goto label_802ED430;
    }

label_802ED970:
    ctx->downcount -= 2;
    // 802ED970: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED974:
    // 802ED974: bl      0x802ECF58
    {
            ctx->lr = 0x802ED978u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECF58u;
                return;
            }
            goto label_802ECF58;
    }

label_802ED978:
    ctx->downcount -= 2;
    // 802ED978: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED97C:
    // 802ED97C: bl      0x802ED090
    {
            ctx->lr = 0x802ED980u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED090u;
                return;
            }
            goto label_802ED090;
    }

label_802ED980:
    ctx->downcount -= 1;
    // 802ED980: b       0x802ED9A8
    {
            goto label_802ED9A8;
    }

label_802ED984:
    ctx->pc = 0x802ED984u;
    ctx->downcount -= 3;
    // 802ED984: lbz     r4, 381(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(381);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802ED988:
    // 802ED988: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED98C:
    // 802ED98C: bl      0x802ED554
    {
            ctx->lr = 0x802ED990u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED554u;
                return;
            }
            goto label_802ED554;
    }

label_802ED990:
    ctx->downcount -= 2;
    // 802ED990: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED994:
    // 802ED994: bl      0x802ED248
    {
            ctx->lr = 0x802ED998u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED248u;
                return;
            }
            goto label_802ED248;
    }

label_802ED998:
    ctx->downcount -= 2;
    // 802ED998: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED99C:
    // 802ED99C: bl      0x802ECEA0
    {
            ctx->lr = 0x802ED9A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ECEA0u;
                return;
            }
            goto label_802ECEA0;
    }

label_802ED9A0:
    ctx->downcount -= 2;
    // 802ED9A0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802ED9A4:
    // 802ED9A4: bl      0x802ED090
    {
            ctx->lr = 0x802ED9A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED090u;
                return;
            }
            goto label_802ED090;
    }

label_802ED9A8:
    ctx->pc = 0x802ED9A8u;
    ctx->downcount -= 6;
    // 802ED9A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802ED9AC:
    ctx->pc = 0x802ED9ACu;
    // 802ED9AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802ED9B0:
    ctx->pc = 0x802ED9B0u;
    // 802ED9B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802ED9B4:
    // 802ED9B4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802ED9B8:
    ctx->pc = 0x802ED9B8u;
    // 802ED9B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802ED9BC:
    ctx->pc = 0x802ED9BCu;
    ctx->downcount -= 17;
    // 802ED9BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802ED9C0:
    ctx->pc = 0x802ED9C0u;
    // 802ED9C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802ED9C4:
    // 802ED9C4: li      r4, 10
    ctx->gpr[4] = (u32)(s32)(10);

label_802ED9C8:
    ctx->pc = 0x802ED9C8u;
    // 802ED9C8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802ED9CC:
    ctx->pc = 0x802ED9CCu;
    // 802ED9CC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802ED9D0:
    // 802ED9D0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802ED9D4:
    // 802ED9D4: bl      0x8036A4F8
    {
            ctx->lr = 0x802ED9D8u;
            ctx->pc = 0x8036A4F8u;
            return;
    }

label_802ED9D8:
    ctx->downcount -= 15;
    // 802ED9D8: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_802ED9DC:
    // 802ED9DC: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_802ED9E0:
    // 802ED9E0: addi    r5, r5, 15456
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(15456);

label_802ED9E4:
    ctx->pc = 0x802ED9E4u;
    // 802ED9E4: stw     r5, 48(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802ED9E8:
    // 802ED9E8: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_802ED9EC:
    // 802ED9EC: addi    r3, r3, 11904
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(11904);

label_802ED9F0:
    // 802ED9F0: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_802ED9F4:
    // 802ED9F4: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_802ED9F8:
    ctx->pc = 0x802ED9F8u;
    // 802ED9F8: stw     r4, 24(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802ED9FC:
    // 802ED9FC: addi    r4, r3, 409
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(409);

label_802EDA00:
    // 802EDA00: addi    r3, r26, 52
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(52);

label_802EDA04:
    // 802EDA04: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802EDA08:
    ctx->pc = 0x802EDA08u;
    // 802EDA08: stw     r6, 148(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EDA0C:
    ctx->pc = 0x802EDA0Cu;
    // 802EDA0C: stw     r0, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDA10:
    // 802EDA10: bl      0x8000E7F4
    {
            ctx->lr = 0x802EDA14u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802EDA14:
    ctx->downcount -= 5;
    // 802EDA14: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802EDA18:
    // 802EDA18: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDA1C:
    // 802EDA1C: or   r28, r27, r27
    {
        ctx->gpr[28] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EDA20:
    // 802EDA20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802EDA24:
    // 802EDA24: li      r29, -1
    ctx->gpr[29] = (u32)(s32)(-1);

label_802EDA28:
    ctx->downcount -= 7;
    // 802EDA28: add   r5, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EDA2C:
    // 802EDA2C: add   r4, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EDA30:
    ctx->pc = 0x802EDA30u;
    // 802EDA30: stw     r28, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_802EDA34:
    // 802EDA34: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EDA38:
    ctx->pc = 0x802EDA38u;
    // 802EDA38: stw     r29, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802EDA3C:
    ctx->pc = 0x802EDA3Cu;
    // 802EDA3C: stw     r27, 324(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[27]);
    }

label_802EDA40:
    // 802EDA40: bl      0x8027CCC0
    {
            ctx->lr = 0x802EDA44u;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_802EDA44:
    ctx->downcount -= 7;
    // 802EDA44: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802EDA48:
    // 802EDA48: add   r4, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EDA4C:
    // 802EDA4C: cmpwi   r27, 4
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EDA50:
    ctx->pc = 0x802EDA50u;
    // 802EDA50: stw     r3, 364(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EDA54:
    // 802EDA54: addi    r31, r31, 12
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(12);

label_802EDA58:
    // 802EDA58: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802EDA5C:
    // 802EDA5C: bc    12, 0, 0x802EDA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDA28u;
                return;
            }
            goto label_802EDA28;
        }
    }

label_802EDA60:
    ctx->downcount -= 29;
    // 802EDA60: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EDA64:
    // 802EDA64: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802EDA68:
    // 802EDA68: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802EDA6C:
    ctx->pc = 0x802EDA6Cu;
    // 802EDA6C: stw     r5, 352(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EDA70:
    // 802EDA70: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802EDA74:
    ctx->pc = 0x802EDA74u;
    // 802EDA74: stw     r5, 348(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EDA78:
    ctx->pc = 0x802EDA78u;
    // 802EDA78: stw     r5, 360(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EDA7C:
    ctx->pc = 0x802EDA7Cu;
    // 802EDA7C: stw     r5, 356(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(356);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EDA80:
    ctx->pc = 0x802EDA80u;
    // 802EDA80: stw     r4, 320(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EDA84:
    ctx->pc = 0x802EDA84u;
    // 802EDA84: stb     r5, 380(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(380);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_802EDA88:
    ctx->pc = 0x802EDA88u;
    // 802EDA88: stb     r5, 381(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(381);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_802EDA8C:
    ctx->pc = 0x802EDA8Cu;
    // 802EDA8C: stb     r0, 382(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(382);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EDA90:
    ctx->pc = 0x802EDA90u;
    // 802EDA90: stw     r0, 384(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDA94:
    ctx->pc = 0x802EDA94u;
    // 802EDA94: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDA98:
    ctx->pc = 0x802EDA98u;
    // 802EDA98: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDA9C:
    ctx->pc = 0x802EDA9Cu;
    // 802EDA9C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDAA0:
    // 802EDAA0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EDAA4:
    ctx->pc = 0x802EDAA4u;
    // 802EDAA4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDAA8:
    ctx->pc = 0x802EDAA8u;
    ctx->downcount -= 18;
    // 802EDAA8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDAAC:
    ctx->pc = 0x802EDAACu;
    // 802EDAAC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDAB0:
    // 802EDAB0: cmpwi   r3, 0
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

label_802EDAB4:
    ctx->pc = 0x802EDAB4u;
    // 802EDAB4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDAB8:
    ctx->pc = 0x802EDAB8u;
    // 802EDAB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EDABC:
    // 802EDABC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDAC0:
    // 802EDAC0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EDAC4:
    // 802EDAC4: bc    12, 2, 0x802EDAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDAE4;
        }
    }

label_802EDAC8:
    ctx->downcount -= 1;
    // 802EDAC8: bc    12, 2, 0x802EDAD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDAD4;
        }
    }

label_802EDACC:
    ctx->downcount -= 2;
    // 802EDACC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EDAD0:
    // 802EDAD0: bl      0x801F9B68
    {
            ctx->lr = 0x802EDAD4u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_802EDAD4:
    ctx->downcount -= 2;
    // 802EDAD4: cmpwi   r31, 0
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

label_802EDAD8:
    // 802EDAD8: bc    4, 1, 0x802EDAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EDAE4;
        }
    }

label_802EDADC:
    ctx->downcount -= 2;
    // 802EDADC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EDAE0:
    // 802EDAE0: bl      0x801C1C90
    {
            ctx->lr = 0x802EDAE4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EDAE4:
    ctx->downcount -= 17;
    // 802EDAE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EDAE8:
    ctx->pc = 0x802EDAE8u;
    // 802EDAE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDAEC:
    ctx->pc = 0x802EDAECu;
    // 802EDAEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDAF0:
    ctx->pc = 0x802EDAF0u;
    // 802EDAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDAF4:
    // 802EDAF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EDAF8:
    ctx->pc = 0x802EDAF8u;
    // 802EDAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDAFC:
    ctx->downcount -= 2;
    // 802EDAFC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EDB00:
    // 802EDB00: b       0x802EDAA8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDAA8u;
                return;
            }
            goto label_802EDAA8;
    }

label_802EDB04:
    ctx->downcount -= 2;
    // 802EDB04: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802EDB08:
    // 802EDB08: b       0x802ED7BC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802ED7BCu;
                return;
            }
            goto label_802ED7BC;
    }

label_802EDB0C:
    ctx->downcount -= 2;
    // 802EDB0C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802EDB10:
    // 802EDB10: b       0x802EDAA8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDAA8u;
                return;
            }
            goto label_802EDAA8;
    }

label_802EDB14:
    ctx->pc = 0x802EDB14u;
    ctx->downcount -= 11;
    // 802EDB14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDB18:
    ctx->pc = 0x802EDB18u;
    // 802EDB18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDB1C:
    ctx->pc = 0x802EDB1Cu;
    // 802EDB1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDB20:
    ctx->pc = 0x802EDB20u;
    // 802EDB20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EDB24:
    ctx->pc = 0x802EDB24u;
    // 802EDB24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDB28:
    ctx->pc = 0x802EDB28u;
    // 802EDB28: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDB2C:
    ctx->pc = 0x802EDB2Cu;
    // 802EDB2C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB30:
    ctx->pc = 0x802EDB30u;
    // 802EDB30: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB34:
    ctx->pc = 0x802EDB34u;
    // 802EDB34: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDB38:
    ctx->pc = 0x802EDB38u;
    // 802EDB38: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDB3Cu;
            ctx->pc = target;
            return;
        }
    }

label_802EDB3C:
    ctx->pc = 0x802EDB3Cu;
    ctx->downcount -= 2;
    // 802EDB3C: cmpwi   r3, 0
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

label_802EDB40:
    ctx->pc = 0x802EDB40u;
    // 802EDB40: bc    12, 2, 0x802EDB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDB90;
        }
    }

label_802EDB44:
    ctx->pc = 0x802EDB44u;
    ctx->downcount -= 6;
    // 802EDB44: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDB48:
    ctx->pc = 0x802EDB48u;
    // 802EDB48: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB4C:
    ctx->pc = 0x802EDB4Cu;
    // 802EDB4C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB50:
    ctx->pc = 0x802EDB50u;
    // 802EDB50: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDB54:
    ctx->pc = 0x802EDB54u;
    // 802EDB54: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDB58u;
            ctx->pc = target;
            return;
        }
    }

label_802EDB58:
    ctx->pc = 0x802EDB58u;
    ctx->downcount -= 2;
    // 802EDB58: cmpwi   r3, 0
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

label_802EDB5C:
    ctx->pc = 0x802EDB5Cu;
    // 802EDB5C: bc    12, 2, 0x802EDB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDB90;
        }
    }

label_802EDB60:
    ctx->pc = 0x802EDB60u;
    ctx->downcount -= 6;
    // 802EDB60: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDB64:
    ctx->pc = 0x802EDB64u;
    // 802EDB64: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB68:
    ctx->pc = 0x802EDB68u;
    // 802EDB68: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB6C:
    ctx->pc = 0x802EDB6Cu;
    // 802EDB6C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDB70:
    ctx->pc = 0x802EDB70u;
    // 802EDB70: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDB74u;
            ctx->pc = target;
            return;
        }
    }

label_802EDB74:
    ctx->pc = 0x802EDB74u;
    ctx->downcount -= 2;
    // 802EDB74: cmpwi   r3, 0
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

label_802EDB78:
    ctx->pc = 0x802EDB78u;
    // 802EDB78: bc    12, 2, 0x802EDB90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDB90;
        }
    }

label_802EDB7C:
    ctx->pc = 0x802EDB7Cu;
    ctx->downcount -= 6;
    // 802EDB7C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB80:
    ctx->pc = 0x802EDB80u;
    // 802EDB80: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EDB84:
    ctx->pc = 0x802EDB84u;
    // 802EDB84: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDB88:
    ctx->pc = 0x802EDB88u;
    // 802EDB88: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDB8C:
    ctx->pc = 0x802EDB8Cu;
    // 802EDB8C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDB90u;
            ctx->pc = target;
            return;
        }
    }

label_802EDB90:
    ctx->pc = 0x802EDB90u;
    ctx->downcount -= 6;
    // 802EDB90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDB94:
    ctx->pc = 0x802EDB94u;
    // 802EDB94: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EDB98:
    ctx->pc = 0x802EDB98u;
    // 802EDB98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDB9C:
    ctx->pc = 0x802EDB9Cu;
    // 802EDB9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EDBA0:
    ctx->pc = 0x802EDBA0u;
    // 802EDBA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDBA4:
    ctx->pc = 0x802EDBA4u;
    ctx->downcount -= 11;
    // 802EDBA4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDBA8:
    ctx->pc = 0x802EDBA8u;
    // 802EDBA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDBAC:
    ctx->pc = 0x802EDBACu;
    // 802EDBAC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDBB0:
    ctx->pc = 0x802EDBB0u;
    // 802EDBB0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EDBB4:
    ctx->pc = 0x802EDBB4u;
    // 802EDBB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDBB8:
    ctx->pc = 0x802EDBB8u;
    // 802EDBB8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDBBC:
    ctx->pc = 0x802EDBBCu;
    // 802EDBBC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBC0:
    ctx->pc = 0x802EDBC0u;
    // 802EDBC0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBC4:
    ctx->pc = 0x802EDBC4u;
    // 802EDBC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDBC8:
    ctx->pc = 0x802EDBC8u;
    // 802EDBC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDBCCu;
            ctx->pc = target;
            return;
        }
    }

label_802EDBCC:
    ctx->pc = 0x802EDBCCu;
    ctx->downcount -= 6;
    // 802EDBCC: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDBD0:
    ctx->pc = 0x802EDBD0u;
    // 802EDBD0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBD4:
    ctx->pc = 0x802EDBD4u;
    // 802EDBD4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBD8:
    ctx->pc = 0x802EDBD8u;
    // 802EDBD8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDBDC:
    ctx->pc = 0x802EDBDCu;
    // 802EDBDC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDBE0u;
            ctx->pc = target;
            return;
        }
    }

label_802EDBE0:
    ctx->pc = 0x802EDBE0u;
    ctx->downcount -= 6;
    // 802EDBE0: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDBE4:
    ctx->pc = 0x802EDBE4u;
    // 802EDBE4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBE8:
    ctx->pc = 0x802EDBE8u;
    // 802EDBE8: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EDBEC:
    ctx->pc = 0x802EDBECu;
    // 802EDBEC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EDBF0:
    ctx->pc = 0x802EDBF0u;
    // 802EDBF0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EDBF4u;
            ctx->pc = target;
            return;
        }
    }

label_802EDBF4:
    ctx->pc = 0x802EDBF4u;
    ctx->downcount -= 6;
    // 802EDBF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDBF8:
    ctx->pc = 0x802EDBF8u;
    // 802EDBF8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EDBFC:
    ctx->pc = 0x802EDBFCu;
    // 802EDBFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDC00:
    ctx->pc = 0x802EDC00u;
    // 802EDC00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EDC04:
    ctx->pc = 0x802EDC04u;
    // 802EDC04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDC08:
    ctx->pc = 0x802EDC08u;
    ctx->downcount -= 19;
    // 802EDC08: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDC0C:
    ctx->pc = 0x802EDC0Cu;
    // 802EDC0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDC10:
    ctx->pc = 0x802EDC10u;
    // 802EDC10: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDC14:
    ctx->pc = 0x802EDC14u;
    // 802EDC14: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EDC18:
    ctx->pc = 0x802EDC18u;
    // 802EDC18: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDC1C:
    ctx->pc = 0x802EDC1Cu;
    // 802EDC1C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EDC20:
    ctx->pc = 0x802EDC20u;
    // 802EDC20: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDC24:
    ctx->pc = 0x802EDC24u;
    // 802EDC24: cmpwi   r0, 0
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

label_802EDC28:
    ctx->pc = 0x802EDC28u;
    // 802EDC28: bc    12, 2, 0x802EDC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC88;
        }
    }

label_802EDC2C:
    ctx->pc = 0x802EDC2Cu;
    ctx->downcount -= 4;
    // 802EDC2C: lwz     r30, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EDC30:
    ctx->pc = 0x802EDC30u;
    // 802EDC30: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDC34:
    ctx->pc = 0x802EDC34u;
    // 802EDC34: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EDC38:
    ctx->pc = 0x802EDC38u;
    // 802EDC38: bl      0x802EDC9C
    {
            ctx->lr = 0x802EDC3Cu;
            goto label_802EDC9C;
    }

label_802EDC3C:
    ctx->pc = 0x802EDC3Cu;
    ctx->downcount -= 2;
    // 802EDC3C: cmpwi   r3, 0
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

label_802EDC40:
    ctx->pc = 0x802EDC40u;
    // 802EDC40: bc    12, 2, 0x802EDC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC54;
        }
    }

label_802EDC44:
    ctx->pc = 0x802EDC44u;
    ctx->downcount -= 3;
    // 802EDC44: lbz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDC48:
    ctx->pc = 0x802EDC48u;
    // 802EDC48: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDC4C:
    ctx->pc = 0x802EDC4Cu;
    // 802EDC4C: bc    12, 2, 0x802EDC54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC54;
        }
    }

label_802EDC50:
    ctx->pc = 0x802EDC50u;
    ctx->downcount -= 1;
    // 802EDC50: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_802EDC54:
    ctx->pc = 0x802EDC54u;
    ctx->downcount -= 2;
    // 802EDC54: cmpwi   r31, 0
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

label_802EDC58:
    ctx->pc = 0x802EDC58u;
    // 802EDC58: bc    12, 2, 0x802EDC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC88;
        }
    }

label_802EDC5C:
    ctx->pc = 0x802EDC5Cu;
    ctx->downcount -= 4;
    // 802EDC5C: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDC60:
    ctx->pc = 0x802EDC60u;
    // 802EDC60: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDC64:
    ctx->pc = 0x802EDC64u;
    // 802EDC64: cmpwi   r0, 0
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

label_802EDC68:
    ctx->pc = 0x802EDC68u;
    // 802EDC68: bc    12, 2, 0x802EDC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC88;
        }
    }

label_802EDC6C:
    ctx->pc = 0x802EDC6Cu;
    ctx->downcount -= 4;
    // 802EDC6C: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDC70:
    ctx->pc = 0x802EDC70u;
    // 802EDC70: lbz     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDC74:
    ctx->pc = 0x802EDC74u;
    // 802EDC74: cmpwi   r0, 0
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

label_802EDC78:
    ctx->pc = 0x802EDC78u;
    // 802EDC78: bc    12, 2, 0x802EDC88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDC88;
        }
    }

label_802EDC7C:
    ctx->pc = 0x802EDC7Cu;
    ctx->downcount -= 3;
    // 802EDC7C: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802EDC80:
    ctx->pc = 0x802EDC80u;
    // 802EDC80: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EDC84:
    ctx->pc = 0x802EDC84u;
    // 802EDC84: bl      0x803457B8
    {
            ctx->lr = 0x802EDC88u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EDC88:
    ctx->pc = 0x802EDC88u;
    ctx->downcount -= 16;
    // 802EDC88: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDC8C:
    ctx->pc = 0x802EDC8Cu;
    // 802EDC8C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDC90:
    ctx->pc = 0x802EDC90u;
    // 802EDC90: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDC94:
    ctx->pc = 0x802EDC94u;
    // 802EDC94: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EDC98:
    ctx->pc = 0x802EDC98u;
    // 802EDC98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDC9C:
    ctx->pc = 0x802EDC9Cu;
    ctx->downcount -= 2;
    // 802EDC9C: lbz     r3, 60(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(60);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802EDCA0:
    ctx->pc = 0x802EDCA0u;
    // 802EDCA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDCA4:
    ctx->pc = 0x802EDCA4u;
    ctx->downcount -= 3;
    // 802EDCA4: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDCA8:
    ctx->pc = 0x802EDCA8u;
    // 802EDCA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EDCAC:
    ctx->pc = 0x802EDCACu;
    // 802EDCAC: b       0x80349B74
    {
            ctx->pc = 0x80349B74u;
            return;
    }

label_802EDCB0:
    ctx->pc = 0x802EDCB0u;
    ctx->downcount -= 19;
    // 802EDCB0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDCB4:
    ctx->pc = 0x802EDCB4u;
    // 802EDCB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDCB8:
    ctx->pc = 0x802EDCB8u;
    // 802EDCB8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDCBC:
    ctx->pc = 0x802EDCBCu;
    // 802EDCBC: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EDCC0:
    ctx->pc = 0x802EDCC0u;
    // 802EDCC0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDCC4:
    ctx->pc = 0x802EDCC4u;
    // 802EDCC4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802EDCC8:
    ctx->pc = 0x802EDCC8u;
    // 802EDCC8: lwz     r30, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EDCCC:
    ctx->pc = 0x802EDCCCu;
    // 802EDCCC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EDCD0:
    ctx->pc = 0x802EDCD0u;
    // 802EDCD0: bl      0x802EDC9C
    {
            ctx->lr = 0x802EDCD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDC9Cu;
                return;
            }
            goto label_802EDC9C;
    }

label_802EDCD4:
    ctx->pc = 0x802EDCD4u;
    ctx->downcount -= 2;
    // 802EDCD4: cmpwi   r3, 0
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

label_802EDCD8:
    ctx->pc = 0x802EDCD8u;
    // 802EDCD8: bc    12, 2, 0x802EDCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDCEC;
        }
    }

label_802EDCDC:
    ctx->pc = 0x802EDCDCu;
    ctx->downcount -= 3;
    // 802EDCDC: lbz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDCE0:
    ctx->pc = 0x802EDCE0u;
    // 802EDCE0: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDCE4:
    ctx->pc = 0x802EDCE4u;
    // 802EDCE4: bc    12, 2, 0x802EDCEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDCEC;
        }
    }

label_802EDCE8:
    ctx->pc = 0x802EDCE8u;
    ctx->downcount -= 1;
    // 802EDCE8: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_802EDCEC:
    ctx->pc = 0x802EDCECu;
    ctx->downcount -= 2;
    // 802EDCEC: cmpwi   r29, 0
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

label_802EDCF0:
    ctx->pc = 0x802EDCF0u;
    // 802EDCF0: bc    12, 2, 0x802EDD70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDD70;
        }
    }

label_802EDCF4:
    ctx->pc = 0x802EDCF4u;
    ctx->downcount -= 4;
    // 802EDCF4: lwz     r3, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDCF8:
    ctx->pc = 0x802EDCF8u;
    // 802EDCF8: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDCFC:
    ctx->pc = 0x802EDCFCu;
    // 802EDCFC: cmpwi   r0, 0
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

label_802EDD00:
    ctx->pc = 0x802EDD00u;
    // 802EDD00: bc    12, 2, 0x802EDD70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDD70;
        }
    }

label_802EDD04:
    ctx->pc = 0x802EDD04u;
    ctx->downcount -= 6;
    // 802EDD04: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDD08:
    ctx->pc = 0x802EDD08u;
    // 802EDD08: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EDD0C:
    ctx->pc = 0x802EDD0Cu;
    // 802EDD0C: addi    r4, r4, -30708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30708);

label_802EDD10:
    ctx->pc = 0x802EDD10u;
    // 802EDD10: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EDD14:
    ctx->pc = 0x802EDD14u;
    // 802EDD14: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EDD18:
    ctx->pc = 0x802EDD18u;
    // 802EDD18: bl      0x80370BD4
    {
            ctx->lr = 0x802EDD1Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EDD1C:
    ctx->pc = 0x802EDD1Cu;
    ctx->downcount -= 2;
    // 802EDD1C: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDD20:
    ctx->pc = 0x802EDD20u;
    // 802EDD20: bl      0x80269C90
    {
            ctx->lr = 0x802EDD24u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EDD24:
    ctx->pc = 0x802EDD24u;
    ctx->downcount -= 5;
    // 802EDD24: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDD28:
    ctx->pc = 0x802EDD28u;
    // 802EDD28: addi    r30, r1, 8
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(8);

label_802EDD2C:
    ctx->pc = 0x802EDD2Cu;
    // 802EDD2C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802EDD30:
    ctx->pc = 0x802EDD30u;
    // 802EDD30: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDD34:
    ctx->pc = 0x802EDD34u;
    // 802EDD34: b       0x802EDD50
    {
            goto label_802EDD50;
    }

label_802EDD38:
    ctx->pc = 0x802EDD38u;
    ctx->downcount -= 3;
    // 802EDD38: lwz     r3, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDD3C:
    // 802EDD3C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EDD40:
    // 802EDD40: bl      0x802F5598
    {
            ctx->lr = 0x802EDD44u;
            ctx->pc = 0x802F5598u;
            return;
    }

label_802EDD44:
    ctx->pc = 0x802EDD44u;
    ctx->downcount -= 3;
    // 802EDD44: stwx    r3, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EDD48:
    // 802EDD48: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802EDD4C:
    // 802EDD4C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802EDD50:
    ctx->downcount -= 2;
    // 802EDD50: cmpw    r28, r29
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[29]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EDD54:
    // 802EDD54: bc    12, 0, 0x802EDD38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDD38u;
                return;
            }
            goto label_802EDD38;
        }
    }

label_802EDD58:
    ctx->pc = 0x802EDD58u;
    ctx->downcount -= 3;
    // 802EDD58: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDD5C:
    ctx->pc = 0x802EDD5Cu;
    // 802EDD5C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EDD60:
    ctx->pc = 0x802EDD60u;
    // 802EDD60: bl      0x802F40B4
    {
            ctx->lr = 0x802EDD64u;
            ctx->pc = 0x802F40B4u;
            return;
    }

label_802EDD64:
    ctx->pc = 0x802EDD64u;
    ctx->downcount -= 3;
    // 802EDD64: addi    r3, r27, 100
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(100);

label_802EDD68:
    ctx->pc = 0x802EDD68u;
    // 802EDD68: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EDD6C:
    ctx->pc = 0x802EDD6Cu;
    // 802EDD6C: bl      0x803457B8
    {
            ctx->lr = 0x802EDD70u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EDD70:
    ctx->pc = 0x802EDD70u;
    ctx->downcount -= 16;
    // 802EDD70: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDD74:
    ctx->pc = 0x802EDD74u;
    // 802EDD74: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDD78:
    ctx->pc = 0x802EDD78u;
    // 802EDD78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDD7C:
    ctx->pc = 0x802EDD7Cu;
    // 802EDD7C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802EDD80:
    ctx->pc = 0x802EDD80u;
    // 802EDD80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDD84:
    ctx->pc = 0x802EDD84u;
    ctx->downcount -= 21;
    // 802EDD84: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDD88:
    ctx->pc = 0x802EDD88u;
    // 802EDD88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDD8C:
    ctx->pc = 0x802EDD8Cu;
    // 802EDD8C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EDD90:
    ctx->pc = 0x802EDD90u;
    // 802EDD90: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDD94:
    ctx->pc = 0x802EDD94u;
    // 802EDD94: addi    r4, r4, -30708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30708);

label_802EDD98:
    ctx->pc = 0x802EDD98u;
    // 802EDD98: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EDD9C:
    ctx->pc = 0x802EDD9Cu;
    // 802EDD9C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDDA0:
    ctx->pc = 0x802EDDA0u;
    // 802EDDA0: lwz     r5, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EDDA4:
    ctx->pc = 0x802EDDA4u;
    // 802EDDA4: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EDDA8:
    ctx->pc = 0x802EDDA8u;
    // 802EDDA8: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EDDAC:
    ctx->pc = 0x802EDDACu;
    // 802EDDAC: bl      0x80370BD4
    {
            ctx->lr = 0x802EDDB0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EDDB0:
    ctx->pc = 0x802EDDB0u;
    ctx->downcount -= 2;
    // 802EDDB0: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDDB4:
    ctx->pc = 0x802EDDB4u;
    // 802EDDB4: bl      0x80269C90
    {
            ctx->lr = 0x802EDDB8u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EDDB8:
    ctx->pc = 0x802EDDB8u;
    ctx->downcount -= 7;
    // 802EDDB8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_802EDDBC:
    ctx->pc = 0x802EDDBCu;
    // 802EDDBC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDDC0:
    ctx->pc = 0x802EDDC0u;
    // 802EDDC0: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EDDC4:
    ctx->pc = 0x802EDDC4u;
    // 802EDDC4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EDDC8:
    ctx->pc = 0x802EDDC8u;
    // 802EDDC8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EDDCC:
    ctx->pc = 0x802EDDCCu;
    // 802EDDCC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802EDDD0:
    loop_802EDDD0(ctx);
    if (ctx->pc == 0x802EDDECu) goto label_802EDDEC;
    return;
label_802EDDD4:
    // 802EDDD4: add   r5, r5, r3
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EDDD8:
    // 802EDDD8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802EDDDC:
    ctx->pc = 0x802EDDDCu;
    // 802EDDDC: stw     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EDDE0:
    ctx->pc = 0x802EDDE0u;
    // 802EDDE0: stw     r4, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EDDE4:
    ctx->pc = 0x802EDDE4u;
    // 802EDDE4: stw     r4, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EDDE8:
    // 802EDDE8: bc    16, 0, 0x802EDDD0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDDD0u;
                return;
            }
            goto label_802EDDD0;
        }
    }

label_802EDDEC:
    ctx->pc = 0x802EDDECu;
    ctx->downcount -= 3;
    // 802EDDEC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802EDDF0:
    ctx->pc = 0x802EDDF0u;
    // 802EDDF0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDDF4:
    ctx->pc = 0x802EDDF4u;
    // 802EDDF4: b       0x802EDE34
    {
            goto label_802EDE34;
    }

label_802EDDF8:
    ctx->downcount -= 7;
    // 802EDDF8: add   r5, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EDDFC:
    ctx->pc = 0x802EDDFCu;
    // 802EDDFC: lwz     r3, 372(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDE00:
    ctx->pc = 0x802EDE00u;
    // 802EDE00: lhz     r28, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[28] = mem_read16(ctx, ea);
    }

label_802EDE04:
    // 802EDE04: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_802EDE08:
    ctx->pc = 0x802EDE08u;
    // 802EDE08: lhz     r0, 166(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(166);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_802EDE0C:
    // 802EDE0C: subf   r27, r0, r28
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b + 1u;
        ctx->gpr[27] = res;
    }

label_802EDE10:
    // 802EDE10: bl      0x802F1F9C
    {
            ctx->lr = 0x802EDE14u;
            ctx->pc = 0x802F1F9Cu;
            return;
    }

label_802EDE14:
    ctx->downcount -= 6;
    // 802EDE14: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDE18:
    // 802EDE18: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EDE1C:
    // 802EDE1C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EDE20:
    // 802EDE20: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802EDE24:
    // 802EDE24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802EDE28:
    // 802EDE28: bl      0x802F5D64
    {
            ctx->lr = 0x802EDE2Cu;
            ctx->pc = 0x802F5D64u;
            return;
    }

label_802EDE2C:
    ctx->downcount -= 2;
    // 802EDE2C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802EDE30:
    // 802EDE30: addi    r31, r31, 52
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(52);

label_802EDE34:
    ctx->downcount -= 2;
    // 802EDE34: cmpw    r29, r30
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EDE38:
    // 802EDE38: bc    12, 0, 0x802EDDF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDDF8u;
                return;
            }
            goto label_802EDDF8;
        }
    }

label_802EDE3C:
    ctx->pc = 0x802EDE3Cu;
    ctx->downcount -= 3;
    // 802EDE3C: lwz     r3, 160(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDE40:
    ctx->pc = 0x802EDE40u;
    // 802EDE40: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EDE44:
    ctx->pc = 0x802EDE44u;
    // 802EDE44: bl      0x802F5C50
    {
            ctx->lr = 0x802EDE48u;
            ctx->pc = 0x802F5C50u;
            return;
    }

label_802EDE48:
    ctx->pc = 0x802EDE48u;
    ctx->downcount -= 2;
    // 802EDE48: li      r3, 205
    ctx->gpr[3] = (u32)(s32)(205);

label_802EDE4C:
    ctx->pc = 0x802EDE4Cu;
    // 802EDE4C: bl      0x802B73BC
    {
            ctx->lr = 0x802EDE50u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802EDE50:
    ctx->pc = 0x802EDE50u;
    ctx->downcount -= 16;
    // 802EDE50: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDE54:
    ctx->pc = 0x802EDE54u;
    // 802EDE54: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDE58:
    ctx->pc = 0x802EDE58u;
    // 802EDE58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDE5C:
    ctx->pc = 0x802EDE5Cu;
    // 802EDE5C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_802EDE60:
    ctx->pc = 0x802EDE60u;
    // 802EDE60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDE64:
    ctx->pc = 0x802EDE64u;
    ctx->downcount -= 19;
    // 802EDE64: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDE68:
    ctx->pc = 0x802EDE68u;
    // 802EDE68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDE6C:
    ctx->pc = 0x802EDE6Cu;
    // 802EDE6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDE70:
    ctx->pc = 0x802EDE70u;
    // 802EDE70: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EDE74:
    ctx->pc = 0x802EDE74u;
    // 802EDE74: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDE78:
    ctx->pc = 0x802EDE78u;
    // 802EDE78: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDE7C:
    ctx->pc = 0x802EDE7Cu;
    // 802EDE7C: lwz     r30, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EDE80:
    ctx->pc = 0x802EDE80u;
    // 802EDE80: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802EDE84:
    ctx->pc = 0x802EDE84u;
    // 802EDE84: bl      0x802EDC9C
    {
            ctx->lr = 0x802EDE88u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDC9Cu;
                return;
            }
            goto label_802EDC9C;
    }

label_802EDE88:
    ctx->pc = 0x802EDE88u;
    ctx->downcount -= 2;
    // 802EDE88: cmpwi   r3, 0
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

label_802EDE8C:
    ctx->pc = 0x802EDE8Cu;
    // 802EDE8C: bc    12, 2, 0x802EDEA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEA0;
        }
    }

label_802EDE90:
    ctx->pc = 0x802EDE90u;
    ctx->downcount -= 3;
    // 802EDE90: lbz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDE94:
    ctx->pc = 0x802EDE94u;
    // 802EDE94: rlwinm. r0, r0, 0, 29, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000004u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDE98:
    ctx->pc = 0x802EDE98u;
    // 802EDE98: bc    12, 2, 0x802EDEA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEA0;
        }
    }

label_802EDE9C:
    ctx->pc = 0x802EDE9Cu;
    ctx->downcount -= 1;
    // 802EDE9C: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_802EDEA0:
    ctx->pc = 0x802EDEA0u;
    ctx->downcount -= 2;
    // 802EDEA0: cmpwi   r31, 0
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

label_802EDEA4:
    ctx->pc = 0x802EDEA4u;
    // 802EDEA4: bc    12, 2, 0x802EDEB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEB8;
        }
    }

label_802EDEA8:
    ctx->pc = 0x802EDEA8u;
    ctx->downcount -= 3;
    // 802EDEA8: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802EDEAC:
    ctx->pc = 0x802EDEACu;
    // 802EDEAC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EDEB0:
    ctx->pc = 0x802EDEB0u;
    // 802EDEB0: bl      0x803457B8
    {
            ctx->lr = 0x802EDEB4u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EDEB4:
    ctx->pc = 0x802EDEB4u;
    ctx->downcount -= 1;
    // 802EDEB4: b       0x802EDEF8
    {
            goto label_802EDEF8;
    }

label_802EDEB8:
    ctx->pc = 0x802EDEB8u;
    ctx->downcount -= 4;
    // 802EDEB8: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDEBC:
    ctx->pc = 0x802EDEBCu;
    // 802EDEBC: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDEC0:
    ctx->pc = 0x802EDEC0u;
    // 802EDEC0: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDEC4:
    ctx->pc = 0x802EDEC4u;
    // 802EDEC4: bc    12, 2, 0x802EDEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEF8;
        }
    }

label_802EDEC8:
    ctx->pc = 0x802EDEC8u;
    ctx->downcount -= 3;
    // 802EDEC8: lwz     r3, -14104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDECC:
    ctx->pc = 0x802EDECCu;
    // 802EDECC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EDED0:
    ctx->pc = 0x802EDED0u;
    // 802EDED0: bl      0x801C4AB8
    {
            ctx->lr = 0x802EDED4u;
            ctx->pc = 0x801C4AB8u;
            return;
    }

label_802EDED4:
    ctx->pc = 0x802EDED4u;
    ctx->downcount -= 3;
    // 802EDED4: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDED8:
    ctx->pc = 0x802EDED8u;
    // 802EDED8: rlwinm. r0, r0, 0, 20, 21
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000C00u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDEDC:
    ctx->pc = 0x802EDEDCu;
    // 802EDEDC: bc    12, 2, 0x802EDEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEF8;
        }
    }

label_802EDEE0:
    ctx->pc = 0x802EDEE0u;
    ctx->downcount -= 4;
    // 802EDEE0: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDEE4:
    ctx->pc = 0x802EDEE4u;
    // 802EDEE4: lbz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EDEE8:
    ctx->pc = 0x802EDEE8u;
    // 802EDEE8: rlwinm. r0, r0, 0, 30, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000002u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDEEC:
    ctx->pc = 0x802EDEECu;
    // 802EDEEC: bc    12, 2, 0x802EDEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EDEF8;
        }
    }

label_802EDEF0:
    ctx->pc = 0x802EDEF0u;
    ctx->downcount -= 2;
    // 802EDEF0: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_802EDEF4:
    ctx->pc = 0x802EDEF4u;
    // 802EDEF4: stw     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDEF8:
    ctx->pc = 0x802EDEF8u;
    ctx->downcount -= 6;
    // 802EDEF8: lwz     r0, 116(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDEFC:
    ctx->pc = 0x802EDEFCu;
    // 802EDEFC: rlwinm r3, r0, 1, 31, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802EDF00:
    ctx->pc = 0x802EDF00u;
    // 802EDF00: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_802EDF04:
    ctx->pc = 0x802EDF04u;
    // 802EDF04: xor   r0, r0, r3
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[3];
    }

label_802EDF08:
    ctx->pc = 0x802EDF08u;
    // 802EDF08: subf.   r0, r3, r0
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_802EDF0C:
    ctx->pc = 0x802EDF0Cu;
    // 802EDF0C: bc    4, 2, 0x802EDF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EDF18;
        }
    }

label_802EDF10:
    ctx->pc = 0x802EDF10u;
    ctx->downcount -= 2;
    // 802EDF10: li      r3, 204
    ctx->gpr[3] = (u32)(s32)(204);

label_802EDF14:
    ctx->pc = 0x802EDF14u;
    // 802EDF14: bl      0x802B73BC
    {
            ctx->lr = 0x802EDF18u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_802EDF18:
    ctx->pc = 0x802EDF18u;
    ctx->downcount -= 16;
    // 802EDF18: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EDF1C:
    ctx->pc = 0x802EDF1Cu;
    // 802EDF1C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EDF20:
    ctx->pc = 0x802EDF20u;
    // 802EDF20: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EDF24:
    ctx->pc = 0x802EDF24u;
    // 802EDF24: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EDF28:
    ctx->pc = 0x802EDF28u;
    // 802EDF28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EDF2C:
    ctx->pc = 0x802EDF2Cu;
    ctx->downcount -= 5;
    // 802EDF2C: stwu     r1, -464(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-464);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EDF30:
    ctx->pc = 0x802EDF30u;
    // 802EDF30: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EDF34:
    ctx->pc = 0x802EDF34u;
    // 802EDF34: stw     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EDF38:
    ctx->pc = 0x802EDF38u;
    // 802EDF38: addi    r11, r1, 464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(464);

label_802EDF3C:
    ctx->pc = 0x802EDF3Cu;
    // 802EDF3C: bl      0x8000785C
    {
            ctx->lr = 0x802EDF40u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802EDF40:
    ctx->pc = 0x802EDF40u;
    ctx->downcount -= 7;
    // 802EDF40: lwz     r5, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EDF44:
    ctx->pc = 0x802EDF44u;
    // 802EDF44: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EDF48:
    ctx->pc = 0x802EDF48u;
    // 802EDF48: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDF4C:
    ctx->pc = 0x802EDF4Cu;
    // 802EDF4C: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EDF50:
    ctx->pc = 0x802EDF50u;
    // 802EDF50: addi    r4, r4, -30708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30708);

label_802EDF54:
    ctx->pc = 0x802EDF54u;
    // 802EDF54: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EDF58:
    ctx->pc = 0x802EDF58u;
    // 802EDF58: bl      0x80370BD4
    {
            ctx->lr = 0x802EDF5Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EDF5C:
    ctx->pc = 0x802EDF5Cu;
    ctx->downcount -= 2;
    // 802EDF5C: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EDF60:
    ctx->pc = 0x802EDF60u;
    // 802EDF60: bl      0x80269C90
    {
            ctx->lr = 0x802EDF64u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EDF64:
    ctx->pc = 0x802EDF64u;
    ctx->downcount -= 5;
    // 802EDF64: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EDF68:
    ctx->pc = 0x802EDF68u;
    // 802EDF68: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EDF6C:
    ctx->pc = 0x802EDF6Cu;
    // 802EDF6C: addi    r4, r1, 12
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(12);

label_802EDF70:
    ctx->pc = 0x802EDF70u;
    // 802EDF70: addi    r5, r1, 8
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(8);

label_802EDF74:
    ctx->pc = 0x802EDF74u;
    // 802EDF74: bl      0x802EE024
    {
            ctx->lr = 0x802EDF78u;
            goto label_802EE024;
    }

label_802EDF78:
    ctx->pc = 0x802EDF78u;
    ctx->downcount -= 9;
    // 802EDF78: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EDF78u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802EDF7C:
    ctx->pc = 0x802EDF7Cu;
    // 802EDF7C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EDF80:
    ctx->pc = 0x802EDF80u;
    // 802EDF80: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EDF80u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802EDF84:
    ctx->pc = 0x802EDF84u;
    // 802EDF84: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EDF88:
    ctx->pc = 0x802EDF88u;
    // 802EDF88: stw     r30, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802EDF8C:
    ctx->pc = 0x802EDF8Cu;
    // 802EDF8C: li      r0, 26
    ctx->gpr[0] = (u32)(s32)(26);

label_802EDF90:
    ctx->pc = 0x802EDF90u;
    // 802EDF90: lfs     f0, -12468(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EDF90u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12468);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EDF94:
    ctx->pc = 0x802EDF94u;
    // 802EDF94: stfs     f2, 436(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EDF94u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(436);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802EDF98:
    ctx->pc = 0x802EDF98u;
    // 802EDF98: stfs     f1, 440(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EDF98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(440);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802EDF9C:
    ctx->downcount -= 5;
    // 802EDF9C: addi    r7, r1, 16
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(16);

label_802EDFA0:
    // 802EDFA0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EDFA4:
    // 802EDFA4: add   r7, r7, r3
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802EDFA8:
    ctx->pc = 0x802EDFA8u;
    // 802EDFA8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802EDFAC:
    ctx->downcount -= 4;
    // 802EDFAC: add   r5, r7, r4
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EDFB0:
    // 802EDFB0: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802EDFB4:
    ctx->pc = 0x802EDFB4u;
    // 802EDFB4: stfs     f0, 4(r5)
    if (!ppc_fp_available_inline(ctx, 0x802EDFB4u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EDFB8:
    // 802EDFB8: bc    16, 0, 0x802EDFAC
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDFACu;
                return;
            }
            goto label_802EDFAC;
        }
    }

label_802EDFBC:
    ctx->downcount -= 4;
    // 802EDFBC: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802EDFC0:
    // 802EDFC0: addi    r3, r3, 104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(104);

label_802EDFC4:
    // 802EDFC4: cmpwi   r6, 4
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EDFC8:
    // 802EDFC8: bc    12, 0, 0x802EDF9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDF9Cu;
                return;
            }
            goto label_802EDF9C;
        }
    }

label_802EDFCC:
    ctx->pc = 0x802EDFCCu;
    ctx->downcount -= 3;
    // 802EDFCC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802EDFD0:
    ctx->pc = 0x802EDFD0u;
    // 802EDFD0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802EDFD4:
    ctx->pc = 0x802EDFD4u;
    // 802EDFD4: b       0x802EDFF8
    {
            goto label_802EDFF8;
    }

label_802EDFD8:
    ctx->downcount -= 6;
    // 802EDFD8: add   r5, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EDFDC:
    // 802EDFDC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EDFE0:
    // 802EDFE0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_802EDFE4:
    // 802EDFE4: li      r6, 26
    ctx->gpr[6] = (u32)(s32)(26);

label_802EDFE8:
    // 802EDFE8: addi    r5, r5, 164
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(164);

label_802EDFEC:
    // 802EDFEC: bl      0x802F405C
    {
            ctx->lr = 0x802EDFF0u;
            ctx->pc = 0x802F405Cu;
            return;
    }

label_802EDFF0:
    ctx->downcount -= 2;
    // 802EDFF0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802EDFF4:
    // 802EDFF4: addi    r31, r31, 52
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(52);

label_802EDFF8:
    ctx->downcount -= 2;
    // 802EDFF8: cmpw    r29, r30
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[30]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EDFFC:
    // 802EDFFC: bc    12, 0, 0x802EDFD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EDFD8u;
                return;
            }
            goto label_802EDFD8;
        }
    }

label_802EE000:
    ctx->pc = 0x802EE000u;
    ctx->downcount -= 3;
    // 802EE000: lwz     r3, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE004:
    ctx->pc = 0x802EE004u;
    // 802EE004: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE008:
    ctx->pc = 0x802EE008u;
    // 802EE008: bl      0x802F5050
    {
            ctx->lr = 0x802EE00Cu;
            ctx->pc = 0x802F5050u;
            return;
    }

label_802EE00C:
    ctx->pc = 0x802EE00Cu;
    ctx->downcount -= 2;
    // 802EE00C: addi    r11, r1, 464
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(464);

label_802EE010:
    ctx->pc = 0x802EE010u;
    // 802EE010: bl      0x800078A8
    {
            ctx->lr = 0x802EE014u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_802EE014:
    ctx->pc = 0x802EE014u;
    ctx->downcount -= 5;
    // 802EE014: lwz     r0, 468(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(468);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE018:
    ctx->pc = 0x802EE018u;
    // 802EE018: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE01C:
    ctx->pc = 0x802EE01Cu;
    // 802EE01C: addi    r1, r1, 464
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(464);

label_802EE020:
    ctx->pc = 0x802EE020u;
    // 802EE020: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE024:
    ctx->pc = 0x802EE024u;
    ctx->downcount -= 5;
    // 802EE024: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE028:
    ctx->pc = 0x802EE028u;
    // 802EE028: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE02C:
    ctx->pc = 0x802EE02Cu;
    // 802EE02C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE030:
    ctx->pc = 0x802EE030u;
    // 802EE030: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802EE034:
    ctx->pc = 0x802EE034u;
    // 802EE034: bl      0x80007860
    {
            ctx->lr = 0x802EE038u;
            ctx->pc = 0x80007860u;
            return;
    }

label_802EE038:
    ctx->pc = 0x802EE038u;
    ctx->downcount -= 12;
    // 802EE038: lwz     r7, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802EE03C:
    ctx->pc = 0x802EE03Cu;
    // 802EE03C: lis     r8, 17200
    ctx->gpr[8] = ((u32)(s32)(17200) << 16);

label_802EE040:
    ctx->pc = 0x802EE040u;
    // 802EE040: stw     r8, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802EE044:
    ctx->pc = 0x802EE044u;
    // 802EE044: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_802EE048:
    ctx->pc = 0x802EE048u;
    // 802EE048: addic   r0, r7, -1
    {
        u64 a = ctx->gpr[7];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE04C:
    ctx->pc = 0x802EE04Cu;
    // 802EE04C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE050:
    ctx->pc = 0x802EE050u;
    // 802EE050: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE054:
    ctx->pc = 0x802EE054u;
    // 802EE054: stw     r8, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802EE058:
    ctx->pc = 0x802EE058u;
    // 802EE058: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EE05C:
    ctx->pc = 0x802EE05Cu;
    // 802EE05C: subfe   r3, r0, r7
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[7];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE060:
    ctx->pc = 0x802EE060u;
    // 802EE060: addi    r4, r6, -30708
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(-30708);

label_802EE064:
    ctx->pc = 0x802EE064u;
    // 802EE064: bl      0x80370BD4
    {
            ctx->lr = 0x802EE068u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE068:
    ctx->pc = 0x802EE068u;
    ctx->downcount -= 2;
    // 802EE068: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE06C:
    ctx->pc = 0x802EE06Cu;
    // 802EE06C: bl      0x80269C90
    {
            ctx->lr = 0x802EE070u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EE070:
    ctx->pc = 0x802EE070u;
    ctx->downcount -= 6;
    // 802EE070: li      r6, 9999
    ctx->gpr[6] = (u32)(s32)(9999);

label_802EE074:
    ctx->pc = 0x802EE074u;
    // 802EE074: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE078:
    ctx->pc = 0x802EE078u;
    // 802EE078: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_802EE07C:
    ctx->pc = 0x802EE07Cu;
    // 802EE07C: cmpwi   r3, 0
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

label_802EE080:
    ctx->pc = 0x802EE080u;
    // 802EE080: bc    4, 1, 0x802EE0A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE0A0;
        }
    }

label_802EE084:
    ctx->downcount -= 4;
    // 802EE084: add   r5, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EE088:
    ctx->pc = 0x802EE088u;
    // 802EE088: lhz     r0, 164(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(164);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_802EE08C:
    // 802EE08C: cmpw    r0, r6
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[6]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE090:
    // 802EE090: bc    4, 0, 0x802EE098
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE098;
        }
    }

label_802EE094:
    ctx->downcount -= 1;
    // 802EE094: or   r6, r0, r0
    {
        ctx->gpr[6] = ctx->gpr[0] | ctx->gpr[0];
    }

label_802EE098:
    ctx->downcount -= 2;
    // 802EE098: addi    r4, r4, 52
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(52);

label_802EE09C:
    // 802EE09C: bc    16, 0, 0x802EE084
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE084u;
                return;
            }
            goto label_802EE084;
        }
    }

label_802EE0A0:
    ctx->pc = 0x802EE0A0u;
    ctx->downcount -= 3;
    // 802EE0A0: cmpwi   r6, 1000
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(1000);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE0A4:
    ctx->pc = 0x802EE0A4u;
    // 802EE0A4: li      r7, 1000
    ctx->gpr[7] = (u32)(s32)(1000);

label_802EE0A8:
    ctx->pc = 0x802EE0A8u;
    // 802EE0A8: bc    4, 1, 0x802EE0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE0B0;
        }
    }

label_802EE0AC:
    ctx->pc = 0x802EE0ACu;
    ctx->downcount -= 1;
    // 802EE0AC: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EE0B0:
    ctx->pc = 0x802EE0B0u;
    ctx->downcount -= 6;
    // 802EE0B0: li      r11, 9999
    ctx->gpr[11] = (u32)(s32)(9999);

label_802EE0B4:
    ctx->pc = 0x802EE0B4u;
    // 802EE0B4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802EE0B8:
    ctx->pc = 0x802EE0B8u;
    // 802EE0B8: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_802EE0BC:
    ctx->pc = 0x802EE0BCu;
    // 802EE0BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE0C0:
    ctx->pc = 0x802EE0C0u;
    // 802EE0C0: li      r0, 26
    ctx->gpr[0] = (u32)(s32)(26);

label_802EE0C4:
    ctx->pc = 0x802EE0C4u;
    // 802EE0C4: b       0x802EE104
    {
            goto label_802EE104;
    }

label_802EE0C8:
    ctx->downcount -= 4;
    // 802EE0C8: add   r8, r29, r4
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_802EE0CC:
    // 802EE0CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EE0D0:
    ctx->pc = 0x802EE0D0u;
    // 802EE0D0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802EE0D4:
    ctx->downcount -= 4;
    // 802EE0D4: add   r6, r8, r5
    {
        u32 a = ctx->gpr[8];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802EE0D8:
    ctx->pc = 0x802EE0D8u;
    // 802EE0D8: lhz     r6, 164(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(164);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_802EE0DC:
    // 802EE0DC: cmpw    r6, r11
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[11]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE0E0:
    // 802EE0E0: bc    4, 0, 0x802EE0E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE0E8;
        }
    }

label_802EE0E4:
    ctx->downcount -= 1;
    // 802EE0E4: or   r11, r6, r6
    {
        ctx->gpr[11] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EE0E8:
    ctx->downcount -= 2;
    // 802EE0E8: cmpw    r6, r9
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(ctx->gpr[9]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE0EC:
    // 802EE0EC: bc    4, 1, 0x802EE0F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE0F4;
        }
    }

label_802EE0F0:
    ctx->downcount -= 1;
    // 802EE0F0: or   r9, r6, r6
    {
        ctx->gpr[9] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EE0F4:
    ctx->downcount -= 2;
    // 802EE0F4: addi    r5, r5, 2
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(2);

label_802EE0F8:
    // 802EE0F8: bc    16, 0, 0x802EE0D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE0D4u;
                return;
            }
            goto label_802EE0D4;
        }
    }

label_802EE0FC:
    ctx->downcount -= 2;
    // 802EE0FC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_802EE100:
    // 802EE100: addi    r4, r4, 52
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(52);

label_802EE104:
    ctx->downcount -= 2;
    // 802EE104: cmpw    r10, r3
    {
        s32 val_a = (s32)(ctx->gpr[10]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE108:
    // 802EE108: bc    12, 0, 0x802EE0C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE0C8u;
                return;
            }
            goto label_802EE0C8;
        }
    }

label_802EE10C:
    ctx->pc = 0x802EE10Cu;
    ctx->downcount -= 2;
    // 802EE10C: cmpwi   r11, 0
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

label_802EE110:
    ctx->pc = 0x802EE110u;
    // 802EE110: bc    4, 0, 0x802EE118
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE118;
        }
    }

label_802EE114:
    ctx->pc = 0x802EE114u;
    ctx->downcount -= 1;
    // 802EE114: li      r11, 0
    ctx->gpr[11] = (u32)(s32)(0);

label_802EE118:
    ctx->pc = 0x802EE118u;
    ctx->downcount -= 3;
    // 802EE118: addi    r4, r7, -1000
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(-1000);

label_802EE11C:
    ctx->pc = 0x802EE11Cu;
    // 802EE11C: cmpw    r4, r11
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(ctx->gpr[11]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE120:
    ctx->pc = 0x802EE120u;
    // 802EE120: bc    4, 1, 0x802EE128
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE128;
        }
    }

label_802EE124:
    ctx->pc = 0x802EE124u;
    ctx->downcount -= 1;
    // 802EE124: or   r4, r11, r11
    {
        ctx->gpr[4] = ctx->gpr[11] | ctx->gpr[11];
    }

label_802EE128:
    ctx->pc = 0x802EE128u;
    ctx->downcount -= 67;
    // 802EE128: li      r3, 100
    ctx->gpr[3] = (u32)(s32)(100);

label_802EE12C:
    ctx->pc = 0x802EE12Cu;
    // 802EE12C: addi    r0, r9, 50
    ctx->gpr[0] = ctx->gpr[9] + (u32)(s32)(50);

label_802EE130:
    ctx->pc = 0x802EE130u;
    // 802EE130: divw   r3, r4, r3
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[3];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[3] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_802EE134:
    ctx->pc = 0x802EE134u;
    // 802EE134: lfd     f5, -12456(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EE134u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12456);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802EE138:
    ctx->pc = 0x802EE138u;
    // 802EE138: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_802EE13C:
    ctx->pc = 0x802EE13Cu;
    // 802EE13C: lfs     f1, -12464(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EE13Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12464);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802EE140:
    ctx->pc = 0x802EE140u;
    // 802EE140: mulli   r3, r3, 100
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[3] * (s64)(s32)100);

label_802EE144:
    ctx->pc = 0x802EE144u;
    // 802EE144: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_802EE148:
    ctx->pc = 0x802EE148u;
    // 802EE148: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE14C:
    ctx->pc = 0x802EE14Cu;
    // 802EE14C: subf   r3, r3, r7
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[7];
        u32 res = a + b + 1u;
        ctx->gpr[3] = res;
    }

label_802EE150:
    ctx->pc = 0x802EE150u;
    // 802EE150: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EE150u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802EE154:
    ctx->pc = 0x802EE154u;
    // 802EE154: xoris   r3, r3, 0x8000
    ctx->gpr[3] = ctx->gpr[3] ^ (0x8000u << 16);

label_802EE158:
    ctx->pc = 0x802EE158u;
    // 802EE158: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE15C:
    ctx->pc = 0x802EE15Cu;
    // 802EE15C: fsubs   f4, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x802EE15Cu)) return;
    ppc_fsubs(ctx, 4, 0, 5);

label_802EE160:
    ctx->pc = 0x802EE160u;
    // 802EE160: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EE160u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802EE164:
    ctx->pc = 0x802EE164u;
    // 802EE164: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE168:
    ctx->pc = 0x802EE168u;
    // 802EE168: fsubs   f3, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x802EE168u)) return;
    ppc_fsubs(ctx, 3, 0, 5);

label_802EE16C:
    ctx->pc = 0x802EE16Cu;
    // 802EE16C: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EE16Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802EE170:
    ctx->pc = 0x802EE170u;
    // 802EE170: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE174:
    ctx->pc = 0x802EE174u;
    // 802EE174: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x802EE174u)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_802EE178:
    ctx->pc = 0x802EE178u;
    // 802EE178: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802EE178u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802EE17C:
    ctx->pc = 0x802EE17Cu;
    // 802EE17C: stfs     f4, 0(r30)
    if (!ppc_fp_available_inline(ctx, 0x802EE17Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[4]));
    }

label_802EE180:
    ctx->pc = 0x802EE180u;
    // 802EE180: fmadds f2, f1, f3, f2
    if (!ppc_fp_available_inline(ctx, 0x802EE180u)) return;
    {
        f64 result;
        if (ppc_fma(ctx, ctx->fpr[1], ctx->fpr[3], ctx->fpr[2], true, false, false, &result))
            ctx->fpr[2] = ctx->ps1[2] = result;
    }

label_802EE184:
    ctx->pc = 0x802EE184u;
    // 802EE184: fsubs   f0, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x802EE184u)) return;
    ppc_fsubs(ctx, 0, 0, 5);

label_802EE188:
    ctx->pc = 0x802EE188u;
    // 802EE188: fcmpo   cr0, f2, f0
    if (!ppc_fp_available_inline(ctx, 0x802EE188u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[2], ctx->fpr[0], true);

label_802EE18C:
    ctx->pc = 0x802EE18Cu;
    // 802EE18C: bc    4, 1, 0x802EE194
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE194;
        }
    }

label_802EE190:
    ctx->pc = 0x802EE190u;
    ctx->downcount -= 1;
    // 802EE190: b       0x802EE198
    {
            goto label_802EE198;
    }

label_802EE194:
    ctx->pc = 0x802EE194u;
    ctx->downcount -= 1;
    // 802EE194: fmr    f2, f0
    if (!ppc_fp_available_inline(ctx, 0x802EE194u)) return;
    ctx->fpr[2] = ctx->fpr[0];

label_802EE198:
    ctx->pc = 0x802EE198u;
    ctx->downcount -= 5;
    // 802EE198: frsp    f1, f2
    if (!ppc_fp_available_inline(ctx, 0x802EE198u)) return;
    ppc_frsp(ctx, 1, 2);

label_802EE19C:
    ctx->pc = 0x802EE19Cu;
    // 802EE19C: lfs     f0, -12472(r2)
    if (!ppc_fp_available_inline(ctx, 0x802EE19Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12472);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802EE1A0:
    ctx->pc = 0x802EE1A0u;
    // 802EE1A0: stfs     f2, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x802EE1A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802EE1A4:
    ctx->pc = 0x802EE1A4u;
    // 802EE1A4: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x802EE1A4u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_802EE1A8:
    ctx->pc = 0x802EE1A8u;
    // 802EE1A8: bc    4, 1, 0x802EE1B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE1B0;
        }
    }

label_802EE1AC:
    ctx->pc = 0x802EE1ACu;
    ctx->downcount -= 1;
    // 802EE1AC: stfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x802EE1ACu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802EE1B0:
    ctx->pc = 0x802EE1B0u;
    ctx->downcount -= 2;
    // 802EE1B0: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802EE1B4:
    ctx->pc = 0x802EE1B4u;
    // 802EE1B4: bl      0x800078AC
    {
            ctx->lr = 0x802EE1B8u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_802EE1B8:
    ctx->pc = 0x802EE1B8u;
    ctx->downcount -= 5;
    // 802EE1B8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE1BC:
    ctx->pc = 0x802EE1BCu;
    // 802EE1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE1C0:
    ctx->pc = 0x802EE1C0u;
    // 802EE1C0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802EE1C4:
    ctx->pc = 0x802EE1C4u;
    // 802EE1C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE1C8:
    ctx->pc = 0x802EE1C8u;
    ctx->downcount -= 21;
    // 802EE1C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE1CC:
    ctx->pc = 0x802EE1CCu;
    // 802EE1CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE1D0:
    ctx->pc = 0x802EE1D0u;
    // 802EE1D0: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EE1D4:
    ctx->pc = 0x802EE1D4u;
    // 802EE1D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE1D8:
    ctx->pc = 0x802EE1D8u;
    // 802EE1D8: addi    r4, r4, -30708
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30708);

label_802EE1DC:
    ctx->pc = 0x802EE1DCu;
    // 802EE1DC: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE1E0:
    ctx->pc = 0x802EE1E0u;
    // 802EE1E0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE1E4:
    ctx->pc = 0x802EE1E4u;
    // 802EE1E4: lwz     r5, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EE1E8:
    ctx->pc = 0x802EE1E8u;
    // 802EE1E8: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE1EC:
    ctx->pc = 0x802EE1ECu;
    // 802EE1EC: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE1F0:
    ctx->pc = 0x802EE1F0u;
    // 802EE1F0: bl      0x80370BD4
    {
            ctx->lr = 0x802EE1F4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE1F4:
    ctx->pc = 0x802EE1F4u;
    ctx->downcount -= 2;
    // 802EE1F4: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE1F8:
    ctx->pc = 0x802EE1F8u;
    // 802EE1F8: bl      0x80269C90
    {
            ctx->lr = 0x802EE1FCu;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EE1FC:
    ctx->pc = 0x802EE1FCu;
    ctx->downcount -= 3;
    // 802EE1FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE200:
    ctx->pc = 0x802EE200u;
    // 802EE200: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802EE204:
    ctx->pc = 0x802EE204u;
    // 802EE204: b       0x802EE254
    {
            goto label_802EE254;
    }

label_802EE208:
    ctx->downcount -= 7;
    // 802EE208: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_802EE20C:
    ctx->pc = 0x802EE20Cu;
    // 802EE20C: lwz     r3, 372(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE210:
    // 802EE210: mulli   r0, r4, 52
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)52);

label_802EE214:
    // 802EE214: add   r30, r27, r0
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_802EE218:
    // 802EE218: bl      0x802F1F1C
    {
            ctx->lr = 0x802EE21Cu;
            ctx->pc = 0x802F1F1Cu;
            return;
    }

label_802EE21C:
    ctx->pc = 0x802EE21Cu;
    ctx->downcount -= 2;
    // 802EE21C: sth     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_802EE220:
    // 802EE220: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802EE224:
    ctx->pc = 0x802EE224u;
    ctx->downcount -= 3;
    // 802EE224: lwz     r3, 372(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(372);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE228:
    // 802EE228: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_802EE22C:
    // 802EE22C: bl      0x802F1FDC
    {
            ctx->lr = 0x802EE230u;
            ctx->pc = 0x802F1FDCu;
            return;
    }

label_802EE230:
    ctx->downcount -= 2;
    // 802EE230: rlwinm r4, r28, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_802EE234:
    // 802EE234: bl      0x8027B3AC
    {
            ctx->lr = 0x802EE238u;
            ctx->pc = 0x8027B3ACu;
            return;
    }

label_802EE238:
    ctx->downcount -= 6;
    // 802EE238: rlwinm r0, r28, 1, 23, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 1u) & 0x000001FEu;
    }

label_802EE23C:
    // 802EE23C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802EE240:
    // 802EE240: add   r4, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802EE244:
    // 802EE244: cmplwi  r28, 0x0019
    {
        u32 val_a = (u32)(ctx->gpr[28]);
        u32 val_b = (u32)(0x0019u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE248:
    ctx->pc = 0x802EE248u;
    // 802EE248: sth     r3, 166(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(166);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_802EE24C:
    // 802EE24C: bc    12, 0, 0x802EE224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE224u;
                return;
            }
            goto label_802EE224;
        }
    }

label_802EE250:
    ctx->downcount -= 1;
    // 802EE250: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802EE254:
    ctx->downcount -= 3;
    // 802EE254: rlwinm r0, r29, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_802EE258:
    // 802EE258: cmpw    r0, r31
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE25C:
    // 802EE25C: bc    12, 0, 0x802EE208
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE208u;
                return;
            }
            goto label_802EE208;
        }
    }

label_802EE260:
    ctx->pc = 0x802EE260u;
    ctx->downcount -= 16;
    // 802EE260: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE264:
    ctx->pc = 0x802EE264u;
    // 802EE264: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE268:
    ctx->pc = 0x802EE268u;
    // 802EE268: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE26C:
    ctx->pc = 0x802EE26Cu;
    // 802EE26C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EE270:
    ctx->pc = 0x802EE270u;
    // 802EE270: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE274:
    ctx->pc = 0x802EE274u;
    ctx->downcount -= 22;
    // 802EE274: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE278:
    ctx->pc = 0x802EE278u;
    // 802EE278: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE27C:
    ctx->pc = 0x802EE27Cu;
    // 802EE27C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE280:
    ctx->pc = 0x802EE280u;
    // 802EE280: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE284:
    ctx->pc = 0x802EE284u;
    // 802EE284: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_802EE288:
    ctx->pc = 0x802EE288u;
    // 802EE288: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE28C:
    ctx->pc = 0x802EE28Cu;
    // 802EE28C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE290:
    ctx->pc = 0x802EE290u;
    // 802EE290: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_802EE294:
    ctx->pc = 0x802EE294u;
    // 802EE294: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EE298:
    ctx->pc = 0x802EE298u;
    // 802EE298: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE29C:
    ctx->pc = 0x802EE29Cu;
    // 802EE29C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE2A0:
    ctx->pc = 0x802EE2A0u;
    // 802EE2A0: bl      0x80370BD4
    {
            ctx->lr = 0x802EE2A4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE2A4:
    ctx->pc = 0x802EE2A4u;
    ctx->downcount -= 7;
    // 802EE2A4: lwz     r3, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE2A8:
    ctx->pc = 0x802EE2A8u;
    // 802EE2A8: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EE2AC:
    ctx->pc = 0x802EE2ACu;
    // 802EE2AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE2B0:
    ctx->pc = 0x802EE2B0u;
    // 802EE2B0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE2B4:
    ctx->pc = 0x802EE2B4u;
    // 802EE2B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EE2B8:
    ctx->pc = 0x802EE2B8u;
    // 802EE2B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EE2BCu;
            ctx->pc = target;
            return;
        }
    }

label_802EE2BC:
    ctx->pc = 0x802EE2BCu;
    ctx->downcount -= 5;
    // 802EE2BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE2C0:
    ctx->pc = 0x802EE2C0u;
    // 802EE2C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE2C4:
    ctx->pc = 0x802EE2C4u;
    // 802EE2C4: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EE2C8:
    ctx->pc = 0x802EE2C8u;
    // 802EE2C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EE2CC:
    ctx->pc = 0x802EE2CCu;
    // 802EE2CC: bl      0x8027714C
    {
            ctx->lr = 0x802EE2D0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802EE2D0:
    ctx->pc = 0x802EE2D0u;
    ctx->downcount -= 5;
    // 802EE2D0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE2D4:
    ctx->pc = 0x802EE2D4u;
    // 802EE2D4: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_802EE2D8:
    ctx->pc = 0x802EE2D8u;
    // 802EE2D8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE2DC:
    ctx->pc = 0x802EE2DCu;
    // 802EE2DC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE2E0:
    ctx->pc = 0x802EE2E0u;
    // 802EE2E0: bl      0x80370BD4
    {
            ctx->lr = 0x802EE2E4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE2E4:
    ctx->pc = 0x802EE2E4u;
    ctx->downcount -= 7;
    // 802EE2E4: lwz     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE2E8:
    ctx->pc = 0x802EE2E8u;
    // 802EE2E8: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EE2EC:
    ctx->pc = 0x802EE2ECu;
    // 802EE2EC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE2F0:
    ctx->pc = 0x802EE2F0u;
    // 802EE2F0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE2F4:
    ctx->pc = 0x802EE2F4u;
    // 802EE2F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EE2F8:
    ctx->pc = 0x802EE2F8u;
    // 802EE2F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EE2FCu;
            ctx->pc = target;
            return;
        }
    }

label_802EE2FC:
    ctx->pc = 0x802EE2FCu;
    ctx->downcount -= 5;
    // 802EE2FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE300:
    ctx->pc = 0x802EE300u;
    // 802EE300: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE304:
    ctx->pc = 0x802EE304u;
    // 802EE304: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EE308:
    ctx->pc = 0x802EE308u;
    // 802EE308: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EE30C:
    ctx->pc = 0x802EE30Cu;
    // 802EE30C: bl      0x8027714C
    {
            ctx->lr = 0x802EE310u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802EE310:
    ctx->pc = 0x802EE310u;
    ctx->downcount -= 5;
    // 802EE310: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE314:
    ctx->pc = 0x802EE314u;
    // 802EE314: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_802EE318:
    ctx->pc = 0x802EE318u;
    // 802EE318: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE31C:
    ctx->pc = 0x802EE31Cu;
    // 802EE31C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE320:
    ctx->pc = 0x802EE320u;
    // 802EE320: bl      0x80370BD4
    {
            ctx->lr = 0x802EE324u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE324:
    ctx->pc = 0x802EE324u;
    ctx->downcount -= 7;
    // 802EE324: lwz     r3, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE328:
    ctx->pc = 0x802EE328u;
    // 802EE328: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802EE32C:
    ctx->pc = 0x802EE32Cu;
    // 802EE32C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE330:
    ctx->pc = 0x802EE330u;
    // 802EE330: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE334:
    ctx->pc = 0x802EE334u;
    // 802EE334: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EE338:
    ctx->pc = 0x802EE338u;
    // 802EE338: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EE33Cu;
            ctx->pc = target;
            return;
        }
    }

label_802EE33C:
    ctx->pc = 0x802EE33Cu;
    ctx->downcount -= 5;
    // 802EE33C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE340:
    ctx->pc = 0x802EE340u;
    // 802EE340: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE344:
    ctx->pc = 0x802EE344u;
    // 802EE344: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802EE348:
    ctx->pc = 0x802EE348u;
    // 802EE348: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EE34C:
    ctx->pc = 0x802EE34Cu;
    // 802EE34C: bl      0x8027714C
    {
            ctx->lr = 0x802EE350u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802EE350:
    ctx->pc = 0x802EE350u;
    ctx->downcount -= 16;
    // 802EE350: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE354:
    ctx->pc = 0x802EE354u;
    // 802EE354: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE358:
    ctx->pc = 0x802EE358u;
    // 802EE358: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE35C:
    ctx->pc = 0x802EE35Cu;
    // 802EE35C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EE360:
    ctx->pc = 0x802EE360u;
    // 802EE360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE364:
    ctx->pc = 0x802EE364u;
    ctx->downcount -= 19;
    // 802EE364: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE368:
    ctx->pc = 0x802EE368u;
    // 802EE368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE36C:
    ctx->pc = 0x802EE36Cu;
    // 802EE36C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE370:
    ctx->pc = 0x802EE370u;
    // 802EE370: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE374:
    ctx->pc = 0x802EE374u;
    // 802EE374: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE378:
    ctx->pc = 0x802EE378u;
    // 802EE378: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE37C:
    ctx->pc = 0x802EE37Cu;
    // 802EE37C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802EE380:
    ctx->pc = 0x802EE380u;
    // 802EE380: lis     r29, -32660
    ctx->gpr[29] = ((u32)(s32)(-32660) << 16);

label_802EE384:
    ctx->pc = 0x802EE384u;
    // 802EE384: b       0x802EE38C
    {
            goto label_802EE38C;
    }

label_802EE388:
    ctx->downcount -= 1;
    // 802EE388: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_802EE38C:
    ctx->pc = 0x802EE38Cu;
    ctx->downcount -= 5;
    // 802EE38C: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE390:
    // 802EE390: addi    r4, r29, -30708
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(-30708);

label_802EE394:
    // 802EE394: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EE398:
    // 802EE398: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EE39C:
    // 802EE39C: bl      0x80370BD4
    {
            ctx->lr = 0x802EE3A0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EE3A0:
    ctx->pc = 0x802EE3A0u;
    ctx->downcount -= 2;
    // 802EE3A0: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE3A4:
    // 802EE3A4: bl      0x80269C90
    {
            ctx->lr = 0x802EE3A8u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_802EE3A8:
    ctx->downcount -= 3;
    // 802EE3A8: rlwinm r0, r28, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[28], 0u) & 0x000000FFu;
    }

label_802EE3AC:
    // 802EE3AC: cmpw    r0, r3
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EE3B0:
    // 802EE3B0: bc    12, 0, 0x802EE388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE388u;
                return;
            }
            goto label_802EE388;
        }
    }

label_802EE3B4:
    ctx->pc = 0x802EE3B4u;
    ctx->downcount -= 83;
    // 802EE3B4: lwz     r4, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE3B8:
    ctx->pc = 0x802EE3B8u;
    // 802EE3B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE3BC:
    ctx->pc = 0x802EE3BCu;
    // 802EE3BC: lwz     r0, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3C0:
    ctx->pc = 0x802EE3C0u;
    // 802EE3C0: stw     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3C4:
    ctx->pc = 0x802EE3C4u;
    // 802EE3C4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3C8:
    ctx->pc = 0x802EE3C8u;
    // 802EE3C8: stw     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3CC:
    ctx->pc = 0x802EE3CCu;
    // 802EE3CC: lwz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3D0:
    ctx->pc = 0x802EE3D0u;
    // 802EE3D0: stw     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3D4:
    ctx->pc = 0x802EE3D4u;
    // 802EE3D4: lwz     r0, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3D8:
    ctx->pc = 0x802EE3D8u;
    // 802EE3D8: stw     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3DC:
    ctx->pc = 0x802EE3DCu;
    // 802EE3DC: lwz     r0, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3E0:
    ctx->pc = 0x802EE3E0u;
    // 802EE3E0: stw     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3E4:
    ctx->pc = 0x802EE3E4u;
    // 802EE3E4: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3E8:
    ctx->pc = 0x802EE3E8u;
    // 802EE3E8: stw     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3EC:
    ctx->pc = 0x802EE3ECu;
    // 802EE3EC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3F0:
    ctx->pc = 0x802EE3F0u;
    // 802EE3F0: stw     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3F4:
    ctx->pc = 0x802EE3F4u;
    // 802EE3F4: lwz     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE3F8:
    ctx->pc = 0x802EE3F8u;
    // 802EE3F8: stw     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE3FC:
    ctx->pc = 0x802EE3FCu;
    // 802EE3FC: lwz     r0, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE400:
    ctx->pc = 0x802EE400u;
    // 802EE400: stw     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE404:
    ctx->pc = 0x802EE404u;
    // 802EE404: lwz     r0, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE408:
    ctx->pc = 0x802EE408u;
    // 802EE408: stw     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE40C:
    ctx->pc = 0x802EE40Cu;
    // 802EE40C: lwz     r0, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE410:
    ctx->pc = 0x802EE410u;
    // 802EE410: stw     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE414:
    ctx->pc = 0x802EE414u;
    // 802EE414: lwz     r0, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE418:
    ctx->pc = 0x802EE418u;
    // 802EE418: stw     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE41C:
    ctx->pc = 0x802EE41Cu;
    // 802EE41C: lwz     r0, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE420:
    ctx->pc = 0x802EE420u;
    // 802EE420: stw     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE424:
    ctx->pc = 0x802EE424u;
    // 802EE424: lwz     r0, 52(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE428:
    ctx->pc = 0x802EE428u;
    // 802EE428: stw     r0, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE42C:
    ctx->pc = 0x802EE42Cu;
    // 802EE42C: lwz     r0, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE430:
    ctx->pc = 0x802EE430u;
    // 802EE430: stw     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE434:
    ctx->pc = 0x802EE434u;
    // 802EE434: lwz     r0, 60(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE438:
    ctx->pc = 0x802EE438u;
    // 802EE438: stw     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE43C:
    ctx->pc = 0x802EE43Cu;
    // 802EE43C: lwz     r0, 64(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE440:
    ctx->pc = 0x802EE440u;
    // 802EE440: stw     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE444:
    ctx->pc = 0x802EE444u;
    // 802EE444: lbz     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EE448:
    ctx->pc = 0x802EE448u;
    // 802EE448: stb     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EE44C:
    ctx->pc = 0x802EE44Cu;
    // 802EE44C: lwz     r0, 72(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE450:
    ctx->pc = 0x802EE450u;
    // 802EE450: stw     r0, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE454:
    ctx->pc = 0x802EE454u;
    // 802EE454: lwz     r0, 76(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE458:
    ctx->pc = 0x802EE458u;
    // 802EE458: stw     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE45C:
    ctx->pc = 0x802EE45Cu;
    // 802EE45C: lwz     r0, 80(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE460:
    ctx->pc = 0x802EE460u;
    // 802EE460: stw     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE464:
    ctx->pc = 0x802EE464u;
    // 802EE464: lwz     r0, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE468:
    ctx->pc = 0x802EE468u;
    // 802EE468: stw     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE46C:
    ctx->pc = 0x802EE46Cu;
    // 802EE46C: lwz     r0, 88(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE470:
    ctx->pc = 0x802EE470u;
    // 802EE470: stw     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE474:
    ctx->pc = 0x802EE474u;
    // 802EE474: lwz     r0, 92(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE478:
    ctx->pc = 0x802EE478u;
    // 802EE478: stw     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE47C:
    ctx->pc = 0x802EE47Cu;
    // 802EE47C: lwz     r0, 96(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE480:
    ctx->pc = 0x802EE480u;
    // 802EE480: stw     r0, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE484:
    ctx->pc = 0x802EE484u;
    // 802EE484: lwz     r0, 100(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE488:
    ctx->pc = 0x802EE488u;
    // 802EE488: stw     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE48C:
    ctx->pc = 0x802EE48Cu;
    // 802EE48C: lwz     r0, 104(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE490:
    ctx->pc = 0x802EE490u;
    // 802EE490: stw     r0, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE494:
    ctx->pc = 0x802EE494u;
    // 802EE494: lwz     r0, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE498:
    ctx->pc = 0x802EE498u;
    // 802EE498: stw     r0, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE49C:
    ctx->pc = 0x802EE49Cu;
    // 802EE49C: lwz     r0, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4A0:
    ctx->pc = 0x802EE4A0u;
    // 802EE4A0: stw     r0, 112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4A4:
    ctx->pc = 0x802EE4A4u;
    // 802EE4A4: lwz     r0, 116(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4A8:
    ctx->pc = 0x802EE4A8u;
    // 802EE4A8: stw     r0, 116(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4AC:
    ctx->pc = 0x802EE4ACu;
    // 802EE4AC: lwz     r0, 120(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4B0:
    ctx->pc = 0x802EE4B0u;
    // 802EE4B0: stw     r0, 120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4B4:
    ctx->pc = 0x802EE4B4u;
    // 802EE4B4: lbz     r0, 124(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EE4B8:
    ctx->pc = 0x802EE4B8u;
    // 802EE4B8: stb     r0, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EE4BC:
    ctx->pc = 0x802EE4BCu;
    // 802EE4BC: lbz     r0, 125(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(125);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EE4C0:
    ctx->pc = 0x802EE4C0u;
    // 802EE4C0: stb     r0, 125(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(125);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EE4C4:
    ctx->pc = 0x802EE4C4u;
    // 802EE4C4: lwz     r0, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4C8:
    ctx->pc = 0x802EE4C8u;
    // 802EE4C8: stw     r0, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4CC:
    ctx->pc = 0x802EE4CCu;
    // 802EE4CC: lbz     r0, 132(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EE4D0:
    ctx->pc = 0x802EE4D0u;
    // 802EE4D0: stb     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EE4D4:
    ctx->pc = 0x802EE4D4u;
    // 802EE4D4: lwz     r0, 134(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(134);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4D8:
    ctx->pc = 0x802EE4D8u;
    // 802EE4D8: stw     r0, 134(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(134);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4DC:
    ctx->pc = 0x802EE4DCu;
    // 802EE4DC: lwz     r0, 138(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(138);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4E0:
    ctx->pc = 0x802EE4E0u;
    // 802EE4E0: stw     r0, 138(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(138);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4E4:
    ctx->pc = 0x802EE4E4u;
    // 802EE4E4: lwz     r0, 144(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4E8:
    ctx->pc = 0x802EE4E8u;
    // 802EE4E8: stw     r0, 144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4EC:
    ctx->pc = 0x802EE4ECu;
    // 802EE4EC: lwz     r0, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4F0:
    ctx->pc = 0x802EE4F0u;
    // 802EE4F0: stw     r0, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4F4:
    ctx->pc = 0x802EE4F4u;
    // 802EE4F4: lwz     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE4F8:
    ctx->pc = 0x802EE4F8u;
    // 802EE4F8: stw     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE4FC:
    ctx->pc = 0x802EE4FCu;
    // 802EE4FC: bl      0x802EE1C8
    {
            ctx->lr = 0x802EE500u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE1C8u;
                return;
            }
            goto label_802EE1C8;
    }

label_802EE500:
    ctx->pc = 0x802EE500u;
    ctx->downcount -= 3;
    // 802EE500: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802EE504:
    ctx->pc = 0x802EE504u;
    // 802EE504: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE508:
    ctx->pc = 0x802EE508u;
    // 802EE508: bl      0x803457B8
    {
            ctx->lr = 0x802EE50Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EE50C:
    ctx->pc = 0x802EE50Cu;
    ctx->downcount -= 16;
    // 802EE50C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE510:
    ctx->pc = 0x802EE510u;
    // 802EE510: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE514:
    ctx->pc = 0x802EE514u;
    // 802EE514: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE518:
    ctx->pc = 0x802EE518u;
    // 802EE518: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EE51C:
    ctx->pc = 0x802EE51Cu;
    // 802EE51C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE520:
    ctx->pc = 0x802EE520u;
    ctx->downcount -= 20;
    // 802EE520: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE524:
    ctx->pc = 0x802EE524u;
    // 802EE524: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE528:
    ctx->pc = 0x802EE528u;
    // 802EE528: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802EE52C:
    ctx->pc = 0x802EE52Cu;
    // 802EE52C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EE530:
    ctx->pc = 0x802EE530u;
    // 802EE530: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE534:
    ctx->pc = 0x802EE534u;
    // 802EE534: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE538:
    ctx->pc = 0x802EE538u;
    // 802EE538: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802EE53C:
    ctx->pc = 0x802EE53Cu;
    // 802EE53C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE540:
    ctx->pc = 0x802EE540u;
    // 802EE540: addi    r31, r31, 15752
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(15752);

label_802EE544:
    ctx->pc = 0x802EE544u;
    // 802EE544: bl      0x802EE850
    {
            ctx->lr = 0x802EE548u;
            goto label_802EE850;
    }

label_802EE548:
    ctx->pc = 0x802EE548u;
    ctx->downcount -= 10;
    // 802EE548: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EE54C:
    ctx->pc = 0x802EE54Cu;
    // 802EE54C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802EE550:
    ctx->pc = 0x802EE550u;
    // 802EE550: addi    r4, r4, 15888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15888);

label_802EE554:
    ctx->pc = 0x802EE554u;
    // 802EE554: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE558:
    ctx->pc = 0x802EE558u;
    // 802EE558: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802EE55C:
    ctx->pc = 0x802EE55Cu;
    // 802EE55C: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_802EE560:
    ctx->pc = 0x802EE560u;
    // 802EE560: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE564:
    ctx->pc = 0x802EE564u;
    // 802EE564: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_802EE568:
    ctx->pc = 0x802EE568u;
    // 802EE568: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EE56C:
    ctx->pc = 0x802EE56Cu;
    // 802EE56C: bl      0x802EE770
    {
            ctx->lr = 0x802EE570u;
            goto label_802EE770;
    }

label_802EE570:
    ctx->pc = 0x802EE570u;
    ctx->downcount -= 5;
    // 802EE570: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802EE574:
    ctx->pc = 0x802EE574u;
    // 802EE574: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_802EE578:
    ctx->pc = 0x802EE578u;
    // 802EE578: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_802EE57C:
    ctx->pc = 0x802EE57Cu;
    // 802EE57C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802EE580:
    ctx->pc = 0x802EE580u;
    // 802EE580: bl      0x802EE770
    {
            ctx->lr = 0x802EE584u;
            goto label_802EE770;
    }

label_802EE584:
    ctx->pc = 0x802EE584u;
    ctx->downcount -= 5;
    // 802EE584: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802EE588:
    ctx->pc = 0x802EE588u;
    // 802EE588: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_802EE58C:
    ctx->pc = 0x802EE58Cu;
    // 802EE58C: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_802EE590:
    ctx->pc = 0x802EE590u;
    // 802EE590: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_802EE594:
    ctx->pc = 0x802EE594u;
    // 802EE594: bl      0x802EE770
    {
            ctx->lr = 0x802EE598u;
            goto label_802EE770;
    }

label_802EE598:
    ctx->pc = 0x802EE598u;
    ctx->downcount -= 5;
    // 802EE598: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802EE59C:
    ctx->pc = 0x802EE59Cu;
    // 802EE59C: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_802EE5A0:
    ctx->pc = 0x802EE5A0u;
    // 802EE5A0: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_802EE5A4:
    ctx->pc = 0x802EE5A4u;
    // 802EE5A4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_802EE5A8:
    ctx->pc = 0x802EE5A8u;
    // 802EE5A8: bl      0x802EE770
    {
            ctx->lr = 0x802EE5ACu;
            goto label_802EE770;
    }

label_802EE5AC:
    ctx->pc = 0x802EE5ACu;
    ctx->downcount -= 2;
    // 802EE5AC: li      r3, 280
    ctx->gpr[3] = (u32)(s32)(280);

label_802EE5B0:
    ctx->pc = 0x802EE5B0u;
    // 802EE5B0: bl      0x801C1C48
    {
            ctx->lr = 0x802EE5B4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802EE5B4:
    ctx->pc = 0x802EE5B4u;
    ctx->downcount -= 2;
    // 802EE5B4: cmpwi   r3, 0
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

label_802EE5B8:
    ctx->pc = 0x802EE5B8u;
    // 802EE5B8: bc    12, 2, 0x802EE5C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE5C4;
        }
    }

label_802EE5BC:
    ctx->pc = 0x802EE5BCu;
    ctx->downcount -= 2;
    // 802EE5BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE5C0:
    ctx->pc = 0x802EE5C0u;
    // 802EE5C0: bl      0x80349C58
    {
            ctx->lr = 0x802EE5C4u;
            ctx->pc = 0x80349C58u;
            return;
    }

label_802EE5C4:
    ctx->pc = 0x802EE5C4u;
    ctx->downcount -= 3;
    // 802EE5C4: stw     r3, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE5C8:
    ctx->pc = 0x802EE5C8u;
    // 802EE5C8: li      r3, 344
    ctx->gpr[3] = (u32)(s32)(344);

label_802EE5CC:
    ctx->pc = 0x802EE5CCu;
    // 802EE5CC: bl      0x801C1C48
    {
            ctx->lr = 0x802EE5D0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802EE5D0:
    ctx->pc = 0x802EE5D0u;
    ctx->downcount -= 2;
    // 802EE5D0: cmpwi   r3, 0
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

label_802EE5D4:
    ctx->pc = 0x802EE5D4u;
    // 802EE5D4: bc    12, 2, 0x802EE5E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE5E0;
        }
    }

label_802EE5D8:
    ctx->pc = 0x802EE5D8u;
    ctx->downcount -= 2;
    // 802EE5D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE5DC:
    ctx->pc = 0x802EE5DCu;
    // 802EE5DC: bl      0x802F50D0
    {
            ctx->lr = 0x802EE5E0u;
            ctx->pc = 0x802F50D0u;
            return;
    }

label_802EE5E0:
    ctx->pc = 0x802EE5E0u;
    ctx->downcount -= 3;
    // 802EE5E0: stw     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE5E4:
    ctx->pc = 0x802EE5E4u;
    // 802EE5E4: li      r3, 356
    ctx->gpr[3] = (u32)(s32)(356);

label_802EE5E8:
    ctx->pc = 0x802EE5E8u;
    // 802EE5E8: bl      0x801C1C48
    {
            ctx->lr = 0x802EE5ECu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802EE5EC:
    ctx->pc = 0x802EE5ECu;
    ctx->downcount -= 2;
    // 802EE5EC: cmpwi   r3, 0
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

label_802EE5F0:
    ctx->pc = 0x802EE5F0u;
    // 802EE5F0: bc    12, 2, 0x802EE5FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE5FC;
        }
    }

label_802EE5F4:
    ctx->pc = 0x802EE5F4u;
    ctx->downcount -= 2;
    // 802EE5F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE5F8:
    ctx->pc = 0x802EE5F8u;
    // 802EE5F8: bl      0x802F5C98
    {
            ctx->lr = 0x802EE5FCu;
            ctx->pc = 0x802F5C98u;
            return;
    }

label_802EE5FC:
    ctx->pc = 0x802EE5FCu;
    ctx->downcount -= 3;
    // 802EE5FC: stw     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE600:
    ctx->pc = 0x802EE600u;
    // 802EE600: li      r3, 156
    ctx->gpr[3] = (u32)(s32)(156);

label_802EE604:
    ctx->pc = 0x802EE604u;
    // 802EE604: bl      0x801C1C48
    {
            ctx->lr = 0x802EE608u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_802EE608:
    ctx->pc = 0x802EE608u;
    ctx->downcount -= 2;
    // 802EE608: cmpwi   r3, 0
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

label_802EE60C:
    ctx->pc = 0x802EE60Cu;
    // 802EE60C: bc    12, 2, 0x802EE614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE614;
        }
    }

label_802EE610:
    ctx->pc = 0x802EE610u;
    ctx->downcount -= 1;
    // 802EE610: bl      0x802F1FEC
    {
            ctx->lr = 0x802EE614u;
            ctx->pc = 0x802F1FECu;
            return;
    }

label_802EE614:
    ctx->pc = 0x802EE614u;
    ctx->downcount -= 5;
    // 802EE614: stw     r3, 372(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE618:
    ctx->pc = 0x802EE618u;
    // 802EE618: addi    r3, r30, 164
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(164);

label_802EE61C:
    ctx->pc = 0x802EE61Cu;
    // 802EE61C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE620:
    ctx->pc = 0x802EE620u;
    // 802EE620: li      r5, 208
    ctx->gpr[5] = (u32)(s32)(208);

label_802EE624:
    ctx->pc = 0x802EE624u;
    // 802EE624: bl      0x80004350
    {
            ctx->lr = 0x802EE628u;
            ctx->pc = 0x80004350u;
            return;
    }

label_802EE628:
    ctx->pc = 0x802EE628u;
    ctx->downcount -= 3;
    // 802EE628: lwz     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE62C:
    ctx->pc = 0x802EE62Cu;
    // 802EE62C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE630:
    ctx->pc = 0x802EE630u;
    // 802EE630: bl      0x802A6408
    {
            ctx->lr = 0x802EE634u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802EE634:
    ctx->pc = 0x802EE634u;
    ctx->downcount -= 3;
    // 802EE634: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE638:
    ctx->pc = 0x802EE638u;
    // 802EE638: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE63C:
    ctx->pc = 0x802EE63Cu;
    // 802EE63C: bl      0x802A6408
    {
            ctx->lr = 0x802EE640u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802EE640:
    ctx->pc = 0x802EE640u;
    ctx->downcount -= 3;
    // 802EE640: lwz     r4, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE644:
    ctx->pc = 0x802EE644u;
    // 802EE644: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE648:
    ctx->pc = 0x802EE648u;
    // 802EE648: bl      0x802A6408
    {
            ctx->lr = 0x802EE64Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802EE64C:
    ctx->pc = 0x802EE64Cu;
    ctx->downcount -= 17;
    // 802EE64C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE650:
    ctx->pc = 0x802EE650u;
    // 802EE650: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE654:
    ctx->pc = 0x802EE654u;
    // 802EE654: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE658:
    ctx->pc = 0x802EE658u;
    // 802EE658: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE65C:
    ctx->pc = 0x802EE65Cu;
    // 802EE65C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE660:
    ctx->pc = 0x802EE660u;
    // 802EE660: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE664:
    ctx->pc = 0x802EE664u;
    ctx->downcount -= 18;
    // 802EE664: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE668:
    ctx->pc = 0x802EE668u;
    // 802EE668: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE66C:
    // 802EE66C: cmpwi   r3, 0
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

label_802EE670:
    ctx->pc = 0x802EE670u;
    // 802EE670: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE674:
    ctx->pc = 0x802EE674u;
    // 802EE674: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE678:
    // 802EE678: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE67C:
    // 802EE67C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE680:
    // 802EE680: bc    12, 2, 0x802EE6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE6B0;
        }
    }

label_802EE684:
    ctx->downcount -= 1;
    // 802EE684: bc    12, 2, 0x802EE6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE6A0;
        }
    }

label_802EE688:
    ctx->downcount -= 3;
    // 802EE688: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802EE68C:
    // 802EE68C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EE690:
    // 802EE690: bl      0x802EE730
    {
            ctx->lr = 0x802EE694u;
            goto label_802EE730;
    }

label_802EE694:
    ctx->downcount -= 3;
    // 802EE694: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE698:
    // 802EE698: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE69C:
    // 802EE69C: bl      0x801ED118
    {
            ctx->lr = 0x802EE6A0u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802EE6A0:
    ctx->downcount -= 2;
    // 802EE6A0: cmpwi   r31, 0
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

label_802EE6A4:
    // 802EE6A4: bc    4, 1, 0x802EE6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE6B0;
        }
    }

label_802EE6A8:
    ctx->downcount -= 2;
    // 802EE6A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE6AC:
    // 802EE6AC: bl      0x801C1C90
    {
            ctx->lr = 0x802EE6B0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EE6B0:
    ctx->downcount -= 17;
    // 802EE6B0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE6B4:
    ctx->pc = 0x802EE6B4u;
    // 802EE6B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE6B8:
    ctx->pc = 0x802EE6B8u;
    // 802EE6B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE6BC:
    ctx->pc = 0x802EE6BCu;
    // 802EE6BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE6C0:
    // 802EE6C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE6C4:
    ctx->pc = 0x802EE6C4u;
    // 802EE6C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE6C8:
    ctx->pc = 0x802EE6C8u;
    ctx->downcount -= 18;
    // 802EE6C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE6CC:
    ctx->pc = 0x802EE6CCu;
    // 802EE6CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE6D0:
    // 802EE6D0: cmpwi   r3, 0
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

label_802EE6D4:
    ctx->pc = 0x802EE6D4u;
    // 802EE6D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE6D8:
    ctx->pc = 0x802EE6D8u;
    // 802EE6D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE6DC:
    // 802EE6DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE6E0:
    // 802EE6E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE6E4:
    // 802EE6E4: bc    12, 2, 0x802EE718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE718;
        }
    }

label_802EE6E8:
    ctx->downcount -= 1;
    // 802EE6E8: bc    12, 2, 0x802EE708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE708;
        }
    }

label_802EE6EC:
    ctx->downcount -= 1;
    // 802EE6EC: bc    12, 2, 0x802EE708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE708;
        }
    }

label_802EE6F0:
    ctx->downcount -= 3;
    // 802EE6F0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE6F4:
    // 802EE6F4: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802EE6F8:
    // 802EE6F8: bl      0x801ED098
    {
            ctx->lr = 0x802EE6FCu;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802EE6FC:
    ctx->downcount -= 3;
    // 802EE6FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE700:
    // 802EE700: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE704:
    // 802EE704: bl      0x801ED058
    {
            ctx->lr = 0x802EE708u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802EE708:
    ctx->downcount -= 2;
    // 802EE708: cmpwi   r31, 0
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

label_802EE70C:
    // 802EE70C: bc    4, 1, 0x802EE718
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE718;
        }
    }

label_802EE710:
    ctx->downcount -= 2;
    // 802EE710: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE714:
    // 802EE714: bl      0x801C1C90
    {
            ctx->lr = 0x802EE718u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EE718:
    ctx->downcount -= 17;
    // 802EE718: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE71C:
    ctx->pc = 0x802EE71Cu;
    // 802EE71C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE720:
    ctx->pc = 0x802EE720u;
    // 802EE720: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE724:
    ctx->pc = 0x802EE724u;
    // 802EE724: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE728:
    // 802EE728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE72C:
    ctx->pc = 0x802EE72Cu;
    // 802EE72C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE730:
    ctx->pc = 0x802EE730u;
    ctx->downcount -= 7;
    // 802EE730: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE734:
    ctx->pc = 0x802EE734u;
    // 802EE734: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE738:
    // 802EE738: cmpwi   r3, 0
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

label_802EE73C:
    ctx->pc = 0x802EE73Cu;
    // 802EE73C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE740:
    ctx->pc = 0x802EE740u;
    // 802EE740: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EE744:
    // 802EE744: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE748:
    // 802EE748: bc    12, 2, 0x802EE758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE758;
        }
    }

label_802EE74C:
    ctx->downcount -= 2;
    // 802EE74C: cmpwi   r4, 0
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

label_802EE750:
    // 802EE750: bc    4, 1, 0x802EE758
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE758;
        }
    }

label_802EE754:
    ctx->downcount -= 1;
    // 802EE754: bl      0x801C1C90
    {
            ctx->lr = 0x802EE758u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EE758:
    ctx->downcount -= 7;
    // 802EE758: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EE75C:
    ctx->pc = 0x802EE75Cu;
    // 802EE75C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EE760:
    ctx->pc = 0x802EE760u;
    // 802EE760: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE764:
    ctx->pc = 0x802EE764u;
    // 802EE764: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE768:
    // 802EE768: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE76C:
    ctx->pc = 0x802EE76Cu;
    // 802EE76C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE770:
    ctx->pc = 0x802EE770u;
    ctx->downcount -= 20;
    // 802EE770: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE774:
    ctx->pc = 0x802EE774u;
    // 802EE774: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE778:
    ctx->pc = 0x802EE778u;
    // 802EE778: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE77C:
    ctx->pc = 0x802EE77Cu;
    // 802EE77C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE780:
    // 802EE780: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EE784:
    // 802EE784: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE788:
    // 802EE788: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE78C:
    // 802EE78C: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EE790:
    // 802EE790: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EE794:
    // 802EE794: bl      0x803456D0
    {
            ctx->lr = 0x802EE798u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802EE798:
    ctx->downcount -= 34;
    // 802EE798: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802EE79C:
    ctx->pc = 0x802EE79Cu;
    // 802EE79C: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE7A0:
    ctx->pc = 0x802EE7A0u;
    // 802EE7A0: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE7A4:
    ctx->pc = 0x802EE7A4u;
    // 802EE7A4: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE7A8:
    // 802EE7A8: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EE7AC:
    ctx->pc = 0x802EE7ACu;
    // 802EE7AC: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE7B0:
    ctx->pc = 0x802EE7B0u;
    // 802EE7B0: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE7B4:
    ctx->pc = 0x802EE7B4u;
    // 802EE7B4: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EE7B8:
    ctx->pc = 0x802EE7B8u;
    // 802EE7B8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE7BC:
    ctx->pc = 0x802EE7BCu;
    // 802EE7BC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EE7C0:
    ctx->pc = 0x802EE7C0u;
    // 802EE7C0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE7C4:
    ctx->pc = 0x802EE7C4u;
    // 802EE7C4: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE7C8:
    ctx->pc = 0x802EE7C8u;
    // 802EE7C8: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EE7CC:
    ctx->pc = 0x802EE7CCu;
    // 802EE7CC: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802EE7D0:
    ctx->pc = 0x802EE7D0u;
    // 802EE7D0: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE7D4:
    ctx->pc = 0x802EE7D4u;
    // 802EE7D4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE7D8:
    ctx->pc = 0x802EE7D8u;
    // 802EE7D8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE7DC:
    ctx->pc = 0x802EE7DCu;
    // 802EE7DC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE7E0:
    ctx->pc = 0x802EE7E0u;
    // 802EE7E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE7E4:
    // 802EE7E4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EE7E8:
    ctx->pc = 0x802EE7E8u;
    // 802EE7E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE7EC:
    ctx->downcount -= 2;
    // 802EE7EC: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EE7F0:
    ctx->pc = 0x802EE7F0u;
    // 802EE7F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE7F4:
    ctx->downcount -= 2;
    // 802EE7F4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EE7F8:
    ctx->pc = 0x802EE7F8u;
    // 802EE7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE7FC:
    ctx->pc = 0x802EE7FCu;
    ctx->downcount -= 10;
    // 802EE7FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE800:
    ctx->pc = 0x802EE800u;
    // 802EE800: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE804:
    ctx->pc = 0x802EE804u;
    // 802EE804: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE808:
    ctx->pc = 0x802EE808u;
    // 802EE808: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EE80C:
    // 802EE80C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE810:
    ctx->pc = 0x802EE810u;
    // 802EE810: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE814:
    ctx->pc = 0x802EE814u;
    // 802EE814: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE818:
    ctx->pc = 0x802EE818u;
    // 802EE818: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EE81C:
    ctx->pc = 0x802EE81Cu;
    // 802EE81C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EE820u;
            ctx->pc = target;
            return;
        }
    }

label_802EE820:
    ctx->downcount -= 2;
    // 802EE820: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802EE824:
    // 802EE824: bl      0x802EEB58
    {
            ctx->lr = 0x802EE828u;
            goto label_802EEB58;
    }

label_802EE828:
    ctx->pc = 0x802EE828u;
    ctx->downcount -= 6;
    // 802EE828: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE82C:
    // 802EE82C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EE830:
    ctx->pc = 0x802EE830u;
    // 802EE830: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EE834:
    ctx->pc = 0x802EE834u;
    // 802EE834: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EE838:
    ctx->pc = 0x802EE838u;
    // 802EE838: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EE83Cu;
            ctx->pc = target;
            return;
        }
    }

label_802EE83C:
    ctx->pc = 0x802EE83Cu;
    ctx->downcount -= 6;
    // 802EE83C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE840:
    ctx->pc = 0x802EE840u;
    // 802EE840: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EE844:
    ctx->pc = 0x802EE844u;
    // 802EE844: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE848:
    // 802EE848: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE84C:
    ctx->pc = 0x802EE84Cu;
    // 802EE84C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE850:
    ctx->pc = 0x802EE850u;
    ctx->downcount -= 21;
    // 802EE850: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE854:
    ctx->pc = 0x802EE854u;
    // 802EE854: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE858:
    ctx->pc = 0x802EE858u;
    // 802EE858: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE85C:
    ctx->pc = 0x802EE85Cu;
    // 802EE85C: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE860:
    // 802EE860: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802EE864:
    // 802EE864: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802EE868:
    // 802EE868: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE86C:
    // 802EE86C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE870:
    // 802EE870: addi    r30, r30, 15752
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(15752);

label_802EE874:
    // 802EE874: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EE878:
    // 802EE878: bl      0x802A6748
    {
            ctx->lr = 0x802EE87Cu;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802EE87C:
    ctx->downcount -= 7;
    // 802EE87C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802EE880:
    // 802EE880: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE884:
    // 802EE884: addi    r4, r4, 16200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(16200);

label_802EE888:
    ctx->pc = 0x802EE888u;
    // 802EE888: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE88C:
    // 802EE88C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802EE890:
    ctx->pc = 0x802EE890u;
    // 802EE890: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE894:
    // 802EE894: bl      0x801ED17C
    {
            ctx->lr = 0x802EE898u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802EE898:
    ctx->downcount -= 6;
    // 802EE898: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE89C:
    // 802EE89C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE8A0:
    // 802EE8A0: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EE8A4:
    // 802EE8A4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EE8A8:
    // 802EE8A8: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EE8AC:
    // 802EE8AC: bl      0x802EE9DC
    {
            ctx->lr = 0x802EE8B0u;
            goto label_802EE9DC;
    }

label_802EE8B0:
    ctx->downcount -= 3;
    // 802EE8B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE8B4:
    // 802EE8B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE8B8:
    // 802EE8B8: bl      0x802A5D48
    {
            ctx->lr = 0x802EE8BCu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EE8BC:
    ctx->downcount -= 6;
    // 802EE8BC: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE8C0:
    // 802EE8C0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EE8C4:
    // 802EE8C4: addi    r4, r30, 292
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(292);

label_802EE8C8:
    // 802EE8C8: addi    r5, r30, 304
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(304);

label_802EE8CC:
    // 802EE8CC: addi    r6, r30, 316
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(316);

label_802EE8D0:
    // 802EE8D0: bl      0x802EEAFC
    {
            ctx->lr = 0x802EE8D4u;
            goto label_802EEAFC;
    }

label_802EE8D4:
    ctx->downcount -= 2;
    // 802EE8D4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE8D8:
    // 802EE8D8: bl      0x802A609C
    {
            ctx->lr = 0x802EE8DCu;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802EE8DC:
    ctx->downcount -= 10;
    // 802EE8DC: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802EE8E0:
    // 802EE8E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802EE8E4:
    // 802EE8E4: addi    r3, r3, 16080
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16080);

label_802EE8E8:
    ctx->pc = 0x802EE8E8u;
    // 802EE8E8: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EE8EC:
    // 802EE8EC: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_802EE8F0:
    ctx->pc = 0x802EE8F0u;
    // 802EE8F0: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EE8F4:
    // 802EE8F4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE8F8:
    // 802EE8F8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EE8FC:
    ctx->pc = 0x802EE8FCu;
    // 802EE8FC: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE900:
    // 802EE900: bl      0x802A5D48
    {
            ctx->lr = 0x802EE904u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EE904:
    ctx->downcount -= 6;
    // 802EE904: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_802EE908:
    // 802EE908: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE90C:
    // 802EE90C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EE910:
    // 802EE910: addi    r5, r30, 256
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(256);

label_802EE914:
    // 802EE914: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EE918:
    // 802EE918: bl      0x802EE770
    {
            ctx->lr = 0x802EE91Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE770u;
                return;
            }
            goto label_802EE770;
    }

label_802EE91C:
    ctx->downcount -= 3;
    // 802EE91C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE920:
    // 802EE920: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802EE924:
    // 802EE924: bl      0x802A5D48
    {
            ctx->lr = 0x802EE928u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EE928:
    ctx->downcount -= 5;
    // 802EE928: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE92C:
    // 802EE92C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EE930:
    // 802EE930: addi    r4, r30, 268
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(268);

label_802EE934:
    // 802EE934: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EE938:
    // 802EE938: bl      0x802EE770
    {
            ctx->lr = 0x802EE93Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE770u;
                return;
            }
            goto label_802EE770;
    }

label_802EE93C:
    ctx->downcount -= 3;
    // 802EE93C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE940:
    // 802EE940: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802EE944:
    // 802EE944: bl      0x802A5D48
    {
            ctx->lr = 0x802EE948u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802EE948:
    ctx->downcount -= 5;
    // 802EE948: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE94C:
    // 802EE94C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802EE950:
    // 802EE950: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_802EE954:
    // 802EE954: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802EE958:
    // 802EE958: bl      0x802EE770
    {
            ctx->lr = 0x802EE95Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE770u;
                return;
            }
            goto label_802EE770;
    }

label_802EE95C:
    ctx->downcount -= 17;
    // 802EE95C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802EE960:
    ctx->pc = 0x802EE960u;
    // 802EE960: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE964:
    ctx->pc = 0x802EE964u;
    // 802EE964: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE968:
    ctx->pc = 0x802EE968u;
    // 802EE968: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE96C:
    // 802EE96C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EE970:
    ctx->pc = 0x802EE970u;
    // 802EE970: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE974:
    ctx->pc = 0x802EE974u;
    ctx->downcount -= 18;
    // 802EE974: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE978:
    ctx->pc = 0x802EE978u;
    // 802EE978: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE97C:
    // 802EE97C: cmpwi   r3, 0
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

label_802EE980:
    ctx->pc = 0x802EE980u;
    // 802EE980: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE984:
    ctx->pc = 0x802EE984u;
    // 802EE984: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE988:
    // 802EE988: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE98C:
    // 802EE98C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE990:
    // 802EE990: bc    12, 2, 0x802EE9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE9C4;
        }
    }

label_802EE994:
    ctx->downcount -= 1;
    // 802EE994: bc    12, 2, 0x802EE9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE9B4;
        }
    }

label_802EE998:
    ctx->downcount -= 1;
    // 802EE998: bc    12, 2, 0x802EE9B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EE9B4;
        }
    }

label_802EE99C:
    ctx->downcount -= 3;
    // 802EE99C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802EE9A0:
    // 802EE9A0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802EE9A4:
    // 802EE9A4: bl      0x802EE730
    {
            ctx->lr = 0x802EE9A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE730u;
                return;
            }
            goto label_802EE730;
    }

label_802EE9A8:
    ctx->downcount -= 3;
    // 802EE9A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE9AC:
    // 802EE9AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EE9B0:
    // 802EE9B0: bl      0x801ED118
    {
            ctx->lr = 0x802EE9B4u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802EE9B4:
    ctx->downcount -= 2;
    // 802EE9B4: cmpwi   r31, 0
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

label_802EE9B8:
    // 802EE9B8: bc    4, 1, 0x802EE9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EE9C4;
        }
    }

label_802EE9BC:
    ctx->downcount -= 2;
    // 802EE9BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE9C0:
    // 802EE9C0: bl      0x801C1C90
    {
            ctx->lr = 0x802EE9C4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EE9C4:
    ctx->downcount -= 17;
    // 802EE9C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EE9C8:
    ctx->pc = 0x802EE9C8u;
    // 802EE9C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EE9CC:
    ctx->pc = 0x802EE9CCu;
    // 802EE9CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE9D0:
    ctx->pc = 0x802EE9D0u;
    // 802EE9D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EE9D4:
    // 802EE9D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EE9D8:
    ctx->pc = 0x802EE9D8u;
    // 802EE9D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EE9DC:
    ctx->pc = 0x802EE9DCu;
    ctx->downcount -= 17;
    // 802EE9DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EE9E0:
    ctx->pc = 0x802EE9E0u;
    // 802EE9E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EE9E4:
    ctx->pc = 0x802EE9E4u;
    // 802EE9E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EE9E8:
    ctx->pc = 0x802EE9E8u;
    // 802EE9E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EE9EC:
    // 802EE9EC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EE9F0:
    // 802EE9F0: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EE9F4:
    // 802EE9F4: bl      0x803457F4
    {
            ctx->lr = 0x802EE9F8u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802EE9F8:
    ctx->pc = 0x802EE9F8u;
    ctx->downcount -= 11;
    // 802EE9F8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EE9FC:
    // 802EE9FC: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802EEA00:
    // 802EEA00: addi    r3, r3, 16320
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16320);

label_802EEA04:
    ctx->pc = 0x802EEA04u;
    // 802EEA04: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEA08:
    // 802EEA08: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEA0C:
    ctx->pc = 0x802EEA0Cu;
    // 802EEA0C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA10:
    ctx->pc = 0x802EEA10u;
    // 802EEA10: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802EEA14:
    // 802EEA14: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EEA18:
    // 802EEA18: bl      0x801C1C80
    {
            ctx->lr = 0x802EEA1Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EEA1C:
    ctx->pc = 0x802EEA1Cu;
    ctx->downcount -= 8;
    // 802EEA1C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEA20:
    // 802EEA20: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EEA24:
    ctx->pc = 0x802EEA24u;
    // 802EEA24: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEA28:
    // 802EEA28: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEA2C:
    ctx->pc = 0x802EEA2Cu;
    // 802EEA2C: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA30:
    // 802EEA30: bl      0x801C1C80
    {
            ctx->lr = 0x802EEA34u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EEA34:
    ctx->pc = 0x802EEA34u;
    ctx->downcount -= 8;
    // 802EEA34: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEA38:
    // 802EEA38: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802EEA3C:
    ctx->pc = 0x802EEA3Cu;
    // 802EEA3C: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEA40:
    // 802EEA40: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEA44:
    ctx->pc = 0x802EEA44u;
    // 802EEA44: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA48:
    // 802EEA48: bl      0x801C1C80
    {
            ctx->lr = 0x802EEA4Cu;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802EEA4C:
    ctx->downcount -= 6;
    // 802EEA4C: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802EEA50:
    ctx->pc = 0x802EEA50u;
    // 802EEA50: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEA54:
    // 802EEA54: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802EEA58:
    // 802EEA58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802EEA5C:
    // 802EEA5C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EEA60:
    // 802EEA60: b       0x802EEACC
    {
            goto label_802EEACC;
    }

label_802EEA64:
    loop_802EEA64(ctx);
    if (ctx->pc == 0x802EEAD8u) goto label_802EEAD8;
    return;
label_802EEA68:
    // 802EEA68: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802EEA6C:
    ctx->pc = 0x802EEA6Cu;
    // 802EEA6C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEA70:
    // 802EEA70: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EEA74:
    ctx->pc = 0x802EEA74u;
    // 802EEA74: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA78:
    ctx->pc = 0x802EEA78u;
    // 802EEA78: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEA7C:
    ctx->pc = 0x802EEA7Cu;
    // 802EEA7C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEA80:
    ctx->pc = 0x802EEA80u;
    // 802EEA80: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEA84:
    ctx->pc = 0x802EEA84u;
    // 802EEA84: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEA88:
    ctx->pc = 0x802EEA88u;
    // 802EEA88: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA8C:
    ctx->pc = 0x802EEA8Cu;
    // 802EEA8C: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEA90:
    // 802EEA90: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EEA94:
    ctx->pc = 0x802EEA94u;
    // 802EEA94: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEA98:
    ctx->pc = 0x802EEA98u;
    // 802EEA98: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEA9C:
    ctx->pc = 0x802EEA9Cu;
    // 802EEA9C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEAA0:
    ctx->pc = 0x802EEAA0u;
    // 802EEAA0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEAA4:
    ctx->pc = 0x802EEAA4u;
    // 802EEAA4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEAA8:
    ctx->pc = 0x802EEAA8u;
    // 802EEAA8: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEAAC:
    ctx->pc = 0x802EEAACu;
    // 802EEAAC: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEAB0:
    // 802EEAB0: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EEAB4:
    ctx->pc = 0x802EEAB4u;
    // 802EEAB4: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEAB8:
    ctx->pc = 0x802EEAB8u;
    // 802EEAB8: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEABC:
    // 802EEABC: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802EEAC0:
    ctx->pc = 0x802EEAC0u;
    // 802EEAC0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEAC4:
    ctx->pc = 0x802EEAC4u;
    // 802EEAC4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEAC8:
    ctx->pc = 0x802EEAC8u;
    // 802EEAC8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEACC:
    ctx->pc = 0x802EEACCu;
    ctx->downcount -= 3;
    // 802EEACC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEAD0:
    // 802EEAD0: cmpw    r7, r0
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

label_802EEAD4:
    // 802EEAD4: bc    12, 0, 0x802EEA64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EEA64u;
                return;
            }
            goto label_802EEA64;
        }
    }

label_802EEAD8:
    ctx->downcount -= 3;
    // 802EEAD8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEADC:
    // 802EEADC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EEAE0:
    // 802EEAE0: bl      0x803457CC
    {
            ctx->lr = 0x802EEAE4u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802EEAE4:
    ctx->downcount -= 17;
    // 802EEAE4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEAE8:
    ctx->pc = 0x802EEAE8u;
    // 802EEAE8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EEAEC:
    ctx->pc = 0x802EEAECu;
    // 802EEAEC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEAF0:
    ctx->pc = 0x802EEAF0u;
    // 802EEAF0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEAF4:
    // 802EEAF4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEAF8:
    ctx->pc = 0x802EEAF8u;
    // 802EEAF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEAFC:
    ctx->pc = 0x802EEAFCu;
    ctx->downcount -= 19;
    // 802EEAFC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEB00:
    ctx->pc = 0x802EEB00u;
    // 802EEB00: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEB04:
    ctx->pc = 0x802EEB04u;
    // 802EEB04: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEB08:
    ctx->pc = 0x802EEB08u;
    // 802EEB08: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EEB0C:
    // 802EEB0C: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802EEB10:
    // 802EEB10: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802EEB14:
    // 802EEB14: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEB18:
    // 802EEB18: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEB1C:
    // 802EEB1C: bl      0x802EE770
    {
            ctx->lr = 0x802EEB20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE770u;
                return;
            }
            goto label_802EE770;
    }

label_802EEB20:
    ctx->downcount -= 27;
    // 802EEB20: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802EEB24:
    ctx->pc = 0x802EEB24u;
    // 802EEB24: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EEB28:
    ctx->pc = 0x802EEB28u;
    // 802EEB28: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEB2C:
    ctx->pc = 0x802EEB2Cu;
    // 802EEB2C: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEB30:
    // 802EEB30: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802EEB34:
    ctx->pc = 0x802EEB34u;
    // 802EEB34: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEB38:
    ctx->pc = 0x802EEB38u;
    // 802EEB38: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEB3C:
    ctx->pc = 0x802EEB3Cu;
    // 802EEB3C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEB40:
    ctx->pc = 0x802EEB40u;
    // 802EEB40: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEB44:
    ctx->pc = 0x802EEB44u;
    // 802EEB44: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EEB48:
    ctx->pc = 0x802EEB48u;
    // 802EEB48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEB4C:
    ctx->pc = 0x802EEB4Cu;
    // 802EEB4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEB50:
    // 802EEB50: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802EEB54:
    ctx->pc = 0x802EEB54u;
    // 802EEB54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEB58:
    ctx->pc = 0x802EEB58u;
    ctx->downcount -= 8;
    // 802EEB58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEB5C:
    ctx->pc = 0x802EEB5Cu;
    // 802EEB5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEB60:
    ctx->pc = 0x802EEB60u;
    // 802EEB60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEB64:
    ctx->pc = 0x802EEB64u;
    // 802EEB64: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEB68:
    // 802EEB68: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEB6C:
    ctx->pc = 0x802EEB6Cu;
    // 802EEB6C: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEB70:
    // 802EEB70: cmpwi   r0, 0
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

label_802EEB74:
    // 802EEB74: bc    12, 2, 0x802EEB98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEB98;
        }
    }

label_802EEB78:
    ctx->pc = 0x802EEB78u;
    ctx->downcount -= 3;
    // 802EEB78: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEB7C:
    // 802EEB7C: cmpwi   r0, 0
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

label_802EEB80:
    // 802EEB80: bc    12, 2, 0x802EEB88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEB88;
        }
    }

label_802EEB84:
    ctx->downcount -= 1;
    // 802EEB84: bl      0x802EEC7C
    {
            ctx->lr = 0x802EEB88u;
            goto label_802EEC7C;
    }

label_802EEB88:
    ctx->downcount -= 2;
    // 802EEB88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEB8C:
    // 802EEB8C: bl      0x803456D4
    {
            ctx->lr = 0x802EEB90u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802EEB90:
    ctx->downcount -= 2;
    // 802EEB90: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEB94:
    // 802EEB94: bl      0x802EEBBC
    {
            ctx->lr = 0x802EEB98u;
            goto label_802EEBBC;
    }

label_802EEB98:
    ctx->downcount -= 2;
    // 802EEB98: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEB9C:
    // 802EEB9C: bl      0x802EEC1C
    {
            ctx->lr = 0x802EEBA0u;
            goto label_802EEC1C;
    }

label_802EEBA0:
    ctx->downcount -= 2;
    // 802EEBA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEBA4:
    // 802EEBA4: bl      0x803456F8
    {
            ctx->lr = 0x802EEBA8u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802EEBA8:
    ctx->pc = 0x802EEBA8u;
    ctx->downcount -= 6;
    // 802EEBA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEBAC:
    ctx->pc = 0x802EEBACu;
    // 802EEBAC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEBB0:
    ctx->pc = 0x802EEBB0u;
    // 802EEBB0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEBB4:
    // 802EEBB4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEBB8:
    ctx->pc = 0x802EEBB8u;
    // 802EEBB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEBBC:
    ctx->pc = 0x802EEBBCu;
    ctx->downcount -= 12;
    // 802EEBBC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEBC0:
    ctx->pc = 0x802EEBC0u;
    // 802EEBC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEBC4:
    ctx->pc = 0x802EEBC4u;
    // 802EEBC4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEBC8:
    ctx->pc = 0x802EEBC8u;
    // 802EEBC8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEBCC:
    // 802EEBCC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEBD0:
    ctx->pc = 0x802EEBD0u;
    // 802EEBD0: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEBD4:
    ctx->pc = 0x802EEBD4u;
    // 802EEBD4: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEBD8:
    // 802EEBD8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEBDC:
    // 802EEBDC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EEBE0:
    // 802EEBE0: bl      0x800076B4
    {
            ctx->lr = 0x802EEBE4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EEBE4:
    ctx->downcount -= 2;
    // 802EEBE4: cmpwi   r3, 0
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

label_802EEBE8:
    // 802EEBE8: bc    12, 2, 0x802EEC08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEC08;
        }
    }

label_802EEBEC:
    ctx->pc = 0x802EEBECu;
    ctx->downcount -= 8;
    // 802EEBEC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEBF0:
    ctx->pc = 0x802EEBF0u;
    // 802EEBF0: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEBF4:
    // 802EEBF4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEBF8:
    ctx->pc = 0x802EEBF8u;
    // 802EEBF8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEBFC:
    // 802EEBFC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EEC00:
    // 802EEC00: bl      0x800076E4
    {
            ctx->lr = 0x802EEC04u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EEC04:
    ctx->downcount -= 1;
    // 802EEC04: nop
    // nop

label_802EEC08:
    ctx->pc = 0x802EEC08u;
    ctx->downcount -= 6;
    // 802EEC08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEC0C:
    ctx->pc = 0x802EEC0Cu;
    // 802EEC0C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEC10:
    ctx->pc = 0x802EEC10u;
    // 802EEC10: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEC14:
    // 802EEC14: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEC18:
    ctx->pc = 0x802EEC18u;
    // 802EEC18: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEC1C:
    ctx->pc = 0x802EEC1Cu;
    ctx->downcount -= 12;
    // 802EEC1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEC20:
    ctx->pc = 0x802EEC20u;
    // 802EEC20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEC24:
    ctx->pc = 0x802EEC24u;
    // 802EEC24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEC28:
    ctx->pc = 0x802EEC28u;
    // 802EEC28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEC2C:
    // 802EEC2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEC30:
    ctx->pc = 0x802EEC30u;
    // 802EEC30: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEC34:
    ctx->pc = 0x802EEC34u;
    // 802EEC34: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEC38:
    // 802EEC38: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEC3C:
    // 802EEC3C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EEC40:
    // 802EEC40: bl      0x800076B4
    {
            ctx->lr = 0x802EEC44u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EEC44:
    ctx->downcount -= 2;
    // 802EEC44: cmpwi   r3, 0
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

label_802EEC48:
    // 802EEC48: bc    12, 2, 0x802EEC68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEC68;
        }
    }

label_802EEC4C:
    ctx->pc = 0x802EEC4Cu;
    ctx->downcount -= 8;
    // 802EEC4C: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEC50:
    ctx->pc = 0x802EEC50u;
    // 802EEC50: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEC54:
    // 802EEC54: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEC58:
    ctx->pc = 0x802EEC58u;
    // 802EEC58: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEC5C:
    // 802EEC5C: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EEC60:
    // 802EEC60: bl      0x800076E4
    {
            ctx->lr = 0x802EEC64u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EEC64:
    ctx->downcount -= 1;
    // 802EEC64: nop
    // nop

label_802EEC68:
    ctx->pc = 0x802EEC68u;
    ctx->downcount -= 6;
    // 802EEC68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEC6C:
    ctx->pc = 0x802EEC6Cu;
    // 802EEC6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEC70:
    ctx->pc = 0x802EEC70u;
    // 802EEC70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEC74:
    // 802EEC74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEC78:
    ctx->pc = 0x802EEC78u;
    // 802EEC78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEC7C:
    ctx->pc = 0x802EEC7Cu;
    ctx->downcount -= 12;
    // 802EEC7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEC80:
    ctx->pc = 0x802EEC80u;
    // 802EEC80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEC84:
    ctx->pc = 0x802EEC84u;
    // 802EEC84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEC88:
    ctx->pc = 0x802EEC88u;
    // 802EEC88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEC8C:
    // 802EEC8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEC90:
    ctx->pc = 0x802EEC90u;
    // 802EEC90: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEC94:
    ctx->pc = 0x802EEC94u;
    // 802EEC94: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEC98:
    // 802EEC98: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EEC9C:
    // 802EEC9C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EECA0:
    // 802EECA0: bl      0x800076B4
    {
            ctx->lr = 0x802EECA4u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802EECA4:
    ctx->downcount -= 2;
    // 802EECA4: cmpwi   r3, 0
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

label_802EECA8:
    // 802EECA8: bc    12, 2, 0x802EECC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EECC8;
        }
    }

label_802EECAC:
    ctx->pc = 0x802EECACu;
    ctx->downcount -= 8;
    // 802EECAC: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EECB0:
    ctx->pc = 0x802EECB0u;
    // 802EECB0: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EECB4:
    // 802EECB4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802EECB8:
    ctx->pc = 0x802EECB8u;
    // 802EECB8: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EECBC:
    // 802EECBC: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802EECC0:
    // 802EECC0: bl      0x800076E4
    {
            ctx->lr = 0x802EECC4u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802EECC4:
    ctx->downcount -= 1;
    // 802EECC4: nop
    // nop

label_802EECC8:
    ctx->pc = 0x802EECC8u;
    ctx->downcount -= 6;
    // 802EECC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EECCC:
    ctx->pc = 0x802EECCCu;
    // 802EECCC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EECD0:
    ctx->pc = 0x802EECD0u;
    // 802EECD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EECD4:
    // 802EECD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EECD8:
    ctx->pc = 0x802EECD8u;
    // 802EECD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EECDC:
    ctx->downcount -= 2;
    // 802EECDC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EECE0:
    // 802EECE0: b       0x802EE6C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE6C8u;
                return;
            }
            goto label_802EE6C8;
    }

label_802EECE4:
    ctx->downcount -= 2;
    // 802EECE4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EECE8:
    // 802EECE8: b       0x802EE664
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE664u;
                return;
            }
            goto label_802EE664;
    }

label_802EECEC:
    ctx->downcount -= 2;
    // 802EECEC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802EECF0:
    // 802EECF0: b       0x802EE974
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EE974u;
                return;
            }
            goto label_802EE974;
    }

label_802EECF4:
    ctx->pc = 0x802EECF4u;
    ctx->downcount -= 11;
    // 802EECF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EECF8:
    ctx->pc = 0x802EECF8u;
    // 802EECF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EECFC:
    ctx->pc = 0x802EECFCu;
    // 802EECFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EED00:
    ctx->pc = 0x802EED00u;
    // 802EED00: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EED04:
    ctx->pc = 0x802EED04u;
    // 802EED04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EED08:
    ctx->pc = 0x802EED08u;
    // 802EED08: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EED0C:
    ctx->pc = 0x802EED0Cu;
    // 802EED0C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED10:
    ctx->pc = 0x802EED10u;
    // 802EED10: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED14:
    ctx->pc = 0x802EED14u;
    // 802EED14: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EED18:
    ctx->pc = 0x802EED18u;
    // 802EED18: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EED1Cu;
            ctx->pc = target;
            return;
        }
    }

label_802EED1C:
    ctx->pc = 0x802EED1Cu;
    ctx->downcount -= 2;
    // 802EED1C: cmpwi   r3, 0
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

label_802EED20:
    ctx->pc = 0x802EED20u;
    // 802EED20: bc    12, 2, 0x802EED80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EED80;
        }
    }

label_802EED24:
    ctx->pc = 0x802EED24u;
    ctx->downcount -= 6;
    // 802EED24: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EED28:
    ctx->pc = 0x802EED28u;
    // 802EED28: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED2C:
    ctx->pc = 0x802EED2Cu;
    // 802EED2C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED30:
    ctx->pc = 0x802EED30u;
    // 802EED30: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EED34:
    ctx->pc = 0x802EED34u;
    // 802EED34: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EED38u;
            ctx->pc = target;
            return;
        }
    }

label_802EED38:
    ctx->pc = 0x802EED38u;
    ctx->downcount -= 2;
    // 802EED38: cmpwi   r3, 0
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

label_802EED3C:
    ctx->pc = 0x802EED3Cu;
    // 802EED3C: bc    12, 2, 0x802EED80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EED80;
        }
    }

label_802EED40:
    ctx->pc = 0x802EED40u;
    ctx->downcount -= 5;
    // 802EED40: lbz     r4, 173(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(173);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802EED44:
    ctx->pc = 0x802EED44u;
    // 802EED44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EED48:
    ctx->pc = 0x802EED48u;
    // 802EED48: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_802EED4C:
    ctx->pc = 0x802EED4Cu;
    // 802EED4C: stb     r0, 173(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(173);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EED50:
    ctx->pc = 0x802EED50u;
    // 802EED50: bl      0x802EF070
    {
            ctx->lr = 0x802EED54u;
            goto label_802EF070;
    }

label_802EED54:
    ctx->pc = 0x802EED54u;
    ctx->downcount -= 2;
    // 802EED54: cmpwi   r3, 0
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

label_802EED58:
    ctx->pc = 0x802EED58u;
    // 802EED58: bc    12, 2, 0x802EED6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EED6C;
        }
    }

label_802EED5C:
    ctx->pc = 0x802EED5Cu;
    ctx->downcount -= 3;
    // 802EED5C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802EED60:
    ctx->pc = 0x802EED60u;
    // 802EED60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EED64:
    ctx->pc = 0x802EED64u;
    // 802EED64: bl      0x803457B8
    {
            ctx->lr = 0x802EED68u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EED68:
    ctx->pc = 0x802EED68u;
    ctx->downcount -= 1;
    // 802EED68: b       0x802EED80
    {
            goto label_802EED80;
    }

label_802EED6C:
    ctx->pc = 0x802EED6Cu;
    ctx->downcount -= 6;
    // 802EED6C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED70:
    ctx->pc = 0x802EED70u;
    // 802EED70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EED74:
    ctx->pc = 0x802EED74u;
    // 802EED74: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EED78:
    ctx->pc = 0x802EED78u;
    // 802EED78: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EED7C:
    ctx->pc = 0x802EED7Cu;
    // 802EED7C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EED80u;
            ctx->pc = target;
            return;
        }
    }

label_802EED80:
    ctx->pc = 0x802EED80u;
    ctx->downcount -= 6;
    // 802EED80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EED84:
    ctx->pc = 0x802EED84u;
    // 802EED84: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EED88:
    ctx->pc = 0x802EED88u;
    // 802EED88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EED8C:
    ctx->pc = 0x802EED8Cu;
    // 802EED8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EED90:
    ctx->pc = 0x802EED90u;
    // 802EED90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EED94:
    ctx->pc = 0x802EED94u;
    ctx->downcount -= 11;
    // 802EED94: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EED98:
    ctx->pc = 0x802EED98u;
    // 802EED98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EED9C:
    ctx->pc = 0x802EED9Cu;
    // 802EED9C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEDA0:
    ctx->pc = 0x802EEDA0u;
    // 802EEDA0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEDA4:
    ctx->pc = 0x802EEDA4u;
    // 802EEDA4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEDA8:
    ctx->pc = 0x802EEDA8u;
    // 802EEDA8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEDAC:
    ctx->pc = 0x802EEDACu;
    // 802EEDAC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EEDB0:
    ctx->pc = 0x802EEDB0u;
    // 802EEDB0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EEDB4:
    ctx->pc = 0x802EEDB4u;
    // 802EEDB4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EEDB8:
    ctx->pc = 0x802EEDB8u;
    // 802EEDB8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EEDBCu;
            ctx->pc = target;
            return;
        }
    }

label_802EEDBC:
    ctx->pc = 0x802EEDBCu;
    ctx->downcount -= 2;
    // 802EEDBC: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEDC0:
    ctx->pc = 0x802EEDC0u;
    // 802EEDC0: bl      0x802FFC5C
    {
            ctx->lr = 0x802EEDC4u;
            ctx->pc = 0x802FFC5Cu;
            return;
    }

label_802EEDC4:
    ctx->pc = 0x802EEDC4u;
    ctx->downcount -= 6;
    // 802EEDC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEDC8:
    ctx->pc = 0x802EEDC8u;
    // 802EEDC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEDCC:
    ctx->pc = 0x802EEDCCu;
    // 802EEDCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEDD0:
    ctx->pc = 0x802EEDD0u;
    // 802EEDD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEDD4:
    ctx->pc = 0x802EEDD4u;
    // 802EEDD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEDD8:
    ctx->pc = 0x802EEDD8u;
    ctx->downcount -= 9;
    // 802EEDD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEDDC:
    ctx->pc = 0x802EEDDCu;
    // 802EEDDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEDE0:
    ctx->pc = 0x802EEDE0u;
    // 802EEDE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEDE4:
    ctx->pc = 0x802EEDE4u;
    // 802EEDE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEDE8:
    ctx->pc = 0x802EEDE8u;
    // 802EEDE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEDEC:
    ctx->pc = 0x802EEDECu;
    // 802EEDEC: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEDF0:
    ctx->pc = 0x802EEDF0u;
    // 802EEDF0: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEDF4:
    ctx->pc = 0x802EEDF4u;
    // 802EEDF4: cmpwi   r0, 0
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

label_802EEDF8:
    ctx->pc = 0x802EEDF8u;
    // 802EEDF8: bc    12, 2, 0x802EEE28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEE28;
        }
    }

label_802EEDFC:
    ctx->pc = 0x802EEDFCu;
    ctx->downcount -= 2;
    // 802EEDFC: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEE00:
    ctx->pc = 0x802EEE00u;
    // 802EEE00: bl      0x802FFC7C
    {
            ctx->lr = 0x802EEE04u;
            ctx->pc = 0x802FFC7Cu;
            return;
    }

label_802EEE04:
    ctx->pc = 0x802EEE04u;
    ctx->downcount -= 2;
    // 802EEE04: cmpwi   r3, 0
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

label_802EEE08:
    ctx->pc = 0x802EEE08u;
    // 802EEE08: bc    12, 2, 0x802EEE28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEE28;
        }
    }

label_802EEE0C:
    ctx->pc = 0x802EEE0Cu;
    ctx->downcount -= 4;
    // 802EEE0C: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEE10:
    ctx->pc = 0x802EEE10u;
    // 802EEE10: lbz     r0, 278(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(278);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEE14:
    ctx->pc = 0x802EEE14u;
    // 802EEE14: cmpwi   r0, 0
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

label_802EEE18:
    ctx->pc = 0x802EEE18u;
    // 802EEE18: bc    12, 2, 0x802EEE28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EEE28;
        }
    }

label_802EEE1C:
    ctx->pc = 0x802EEE1Cu;
    ctx->downcount -= 3;
    // 802EEE1C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802EEE20:
    ctx->pc = 0x802EEE20u;
    // 802EEE20: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802EEE24:
    ctx->pc = 0x802EEE24u;
    // 802EEE24: bl      0x803457B8
    {
            ctx->lr = 0x802EEE28u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802EEE28:
    ctx->pc = 0x802EEE28u;
    ctx->downcount -= 6;
    // 802EEE28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEE2C:
    ctx->pc = 0x802EEE2Cu;
    // 802EEE2C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEE30:
    ctx->pc = 0x802EEE30u;
    // 802EEE30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEE34:
    ctx->pc = 0x802EEE34u;
    // 802EEE34: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEE38:
    ctx->pc = 0x802EEE38u;
    // 802EEE38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEE3C:
    ctx->pc = 0x802EEE3Cu;
    ctx->downcount -= 9;
    // 802EEE3C: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEE40:
    ctx->pc = 0x802EEE40u;
    // 802EEE40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEE44:
    ctx->pc = 0x802EEE44u;
    // 802EEE44: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEE48:
    ctx->pc = 0x802EEE48u;
    // 802EEE48: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EEE4C:
    ctx->pc = 0x802EEE4Cu;
    // 802EEE4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEE50:
    ctx->pc = 0x802EEE50u;
    // 802EEE50: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEE54:
    ctx->pc = 0x802EEE54u;
    // 802EEE54: lwz     r4, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEE58:
    ctx->pc = 0x802EEE58u;
    // 802EEE58: lbz     r5, 173(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(173);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802EEE5C:
    ctx->pc = 0x802EEE5Cu;
    // 802EEE5C: bl      0x802FEC8C
    {
            ctx->lr = 0x802EEE60u;
            ctx->pc = 0x802FEC8Cu;
            return;
    }

label_802EEE60:
    ctx->pc = 0x802EEE60u;
    ctx->downcount -= 3;
    // 802EEE60: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEE64:
    ctx->pc = 0x802EEE64u;
    // 802EEE64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802EEE68:
    ctx->pc = 0x802EEE68u;
    // 802EEE68: bl      0x80349B74
    {
            ctx->lr = 0x802EEE6Cu;
            ctx->pc = 0x80349B74u;
            return;
    }

label_802EEE6C:
    ctx->pc = 0x802EEE6Cu;
    ctx->downcount -= 29;
    // 802EEE6C: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_802EEE70:
    ctx->pc = 0x802EEE70u;
    // 802EEE70: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802EEE74:
    ctx->pc = 0x802EEE74u;
    // 802EEE74: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_802EEE78:
    ctx->pc = 0x802EEE78u;
    // 802EEE78: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_802EEE7C:
    ctx->pc = 0x802EEE7Cu;
    // 802EEE7C: addi    r6, r6, 16568
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16568);

label_802EEE80:
    ctx->pc = 0x802EEE80u;
    // 802EEE80: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_802EEE84:
    ctx->pc = 0x802EEE84u;
    // 802EEE84: stw     r6, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EEE88:
    ctx->pc = 0x802EEE88u;
    // 802EEE88: stw     r5, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EEE8C:
    ctx->pc = 0x802EEE8Cu;
    // 802EEE8C: stw     r5, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EEE90:
    ctx->pc = 0x802EEE90u;
    // 802EEE90: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEE94:
    ctx->pc = 0x802EEE94u;
    // 802EEE94: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEE98:
    ctx->pc = 0x802EEE98u;
    // 802EEE98: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEE9C:
    ctx->pc = 0x802EEE9Cu;
    // 802EEE9C: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEEA0:
    ctx->pc = 0x802EEEA0u;
    // 802EEEA0: stw     r5, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EEEA4:
    ctx->pc = 0x802EEEA4u;
    // 802EEEA4: stw     r0, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEEA8:
    ctx->pc = 0x802EEEA8u;
    // 802EEEA8: stw     r5, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802EEEAC:
    ctx->pc = 0x802EEEACu;
    // 802EEEAC: lwz     r4, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEEB0:
    ctx->pc = 0x802EEEB0u;
    // 802EEEB0: addi    r3, r4, 56
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(56);

label_802EEEB4:
    ctx->pc = 0x802EEEB4u;
    // 802EEEB4: addi    r0, r4, 184
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(184);

label_802EEEB8:
    ctx->pc = 0x802EEEB8u;
    // 802EEEB8: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEEBC:
    ctx->pc = 0x802EEEBCu;
    // 802EEEBC: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEEC0:
    ctx->pc = 0x802EEEC0u;
    // 802EEEC0: lwz     r3, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEEC4:
    ctx->pc = 0x802EEEC4u;
    // 802EEEC4: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEEC8:
    ctx->pc = 0x802EEEC8u;
    // 802EEEC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEECC:
    ctx->pc = 0x802EEECCu;
    // 802EEECC: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802EEED0:
    ctx->pc = 0x802EEED0u;
    // 802EEED0: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEED4:
    ctx->pc = 0x802EEED4u;
    // 802EEED4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEED8:
    ctx->pc = 0x802EEED8u;
    // 802EEED8: cmpwi   r0, 1
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

label_802EEEDC:
    ctx->pc = 0x802EEEDCu;
    // 802EEEDC: bc    4, 2, 0x802EEEF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EEEF8;
        }
    }

label_802EEEE0:
    ctx->pc = 0x802EEEE0u;
    ctx->downcount -= 3;
    // 802EEEE0: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEEE4:
    ctx->pc = 0x802EEEE4u;
    // 802EEEE4: lbz     r4, 173(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(173);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802EEEE8:
    ctx->pc = 0x802EEEE8u;
    // 802EEEE8: bl      0x802EEF88
    {
            ctx->lr = 0x802EEEECu;
            goto label_802EEF88;
    }

label_802EEEEC:
    ctx->pc = 0x802EEEECu;
    ctx->downcount -= 3;
    // 802EEEEC: lwz     r0, 420(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(420);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEEF0:
    ctx->pc = 0x802EEEF0u;
    // 802EEEF0: stw     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEEF4:
    ctx->pc = 0x802EEEF4u;
    // 802EEEF4: b       0x802EEF1C
    {
            goto label_802EEF1C;
    }

label_802EEEF8:
    ctx->pc = 0x802EEEF8u;
    ctx->downcount -= 2;
    // 802EEEF8: cmpwi   r0, 2
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

label_802EEEFC:
    ctx->pc = 0x802EEEFCu;
    // 802EEEFC: bc    4, 2, 0x802EEF1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EEF1C;
        }
    }

label_802EEF00:
    ctx->pc = 0x802EEF00u;
    ctx->downcount -= 3;
    // 802EEF00: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEF04:
    ctx->pc = 0x802EEF04u;
    // 802EEF04: lbz     r4, 173(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(173);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802EEF08:
    ctx->pc = 0x802EEF08u;
    // 802EEF08: bl      0x802EEFDC
    {
            ctx->lr = 0x802EEF0Cu;
            goto label_802EEFDC;
    }

label_802EEF0C:
    ctx->pc = 0x802EEF0Cu;
    ctx->downcount -= 4;
    // 802EEF0C: lwz     r4, 436(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(436);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EEF10:
    ctx->pc = 0x802EEF10u;
    // 802EEF10: lwz     r0, 432(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(432);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF14:
    ctx->pc = 0x802EEF14u;
    // 802EEF14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF18:
    ctx->pc = 0x802EEF18u;
    // 802EEF18: stw     r4, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802EEF1C:
    ctx->pc = 0x802EEF1Cu;
    ctx->downcount -= 22;
    // 802EEF1C: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEF20:
    ctx->pc = 0x802EEF20u;
    // 802EEF20: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802EEF24:
    ctx->pc = 0x802EEF24u;
    // 802EEF24: lbz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEF28:
    ctx->pc = 0x802EEF28u;
    // 802EEF28: stb     r0, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EEF2C:
    ctx->pc = 0x802EEF2Cu;
    // 802EEF2C: lwz     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF30:
    ctx->pc = 0x802EEF30u;
    // 802EEF30: stw     r0, 48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF34:
    ctx->pc = 0x802EEF34u;
    // 802EEF34: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF38:
    ctx->pc = 0x802EEF38u;
    // 802EEF38: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF3C:
    ctx->pc = 0x802EEF3Cu;
    // 802EEF3C: lwz     r0, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF40:
    ctx->pc = 0x802EEF40u;
    // 802EEF40: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF44:
    ctx->pc = 0x802EEF44u;
    // 802EEF44: lhz     r0, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_802EEF48:
    ctx->pc = 0x802EEF48u;
    // 802EEF48: sth     r0, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_802EEF4C:
    ctx->pc = 0x802EEF4Cu;
    // 802EEF4C: lbz     r0, 38(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(38);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEF50:
    ctx->pc = 0x802EEF50u;
    // 802EEF50: stb     r0, 62(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(62);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EEF54:
    ctx->pc = 0x802EEF54u;
    // 802EEF54: lbz     r0, 39(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(39);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEF58:
    ctx->pc = 0x802EEF58u;
    // 802EEF58: stb     r0, 63(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(63);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EEF5C:
    ctx->pc = 0x802EEF5Cu;
    // 802EEF5C: lbz     r0, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEF60:
    ctx->pc = 0x802EEF60u;
    // 802EEF60: stb     r0, 64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EEF64:
    ctx->pc = 0x802EEF64u;
    // 802EEF64: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF68:
    ctx->pc = 0x802EEF68u;
    // 802EEF68: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF6C:
    ctx->pc = 0x802EEF6Cu;
    // 802EEF6C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EEF70:
    ctx->pc = 0x802EEF70u;
    // 802EEF70: bl      0x802FFC94
    {
            ctx->lr = 0x802EEF74u;
            ctx->pc = 0x802FFC94u;
            return;
    }

label_802EEF74:
    ctx->pc = 0x802EEF74u;
    ctx->downcount -= 6;
    // 802EEF74: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEF78:
    ctx->pc = 0x802EEF78u;
    // 802EEF78: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EEF7C:
    ctx->pc = 0x802EEF7Cu;
    // 802EEF7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEF80:
    ctx->pc = 0x802EEF80u;
    // 802EEF80: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_802EEF84:
    ctx->pc = 0x802EEF84u;
    // 802EEF84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEF88:
    ctx->pc = 0x802EEF88u;
    ctx->downcount -= 23;
    // 802EEF88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEF8C:
    ctx->pc = 0x802EEF8Cu;
    // 802EEF8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEF90:
    ctx->pc = 0x802EEF90u;
    // 802EEF90: lis     r5, 21872
    ctx->gpr[5] = ((u32)(s32)(21872) << 16);

label_802EEF94:
    ctx->pc = 0x802EEF94u;
    // 802EEF94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEF98:
    ctx->pc = 0x802EEF98u;
    // 802EEF98: addi    r5, r5, 21347
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21347);

label_802EEF9C:
    ctx->pc = 0x802EEF9Cu;
    // 802EEF9C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EEFA0:
    ctx->pc = 0x802EEFA0u;
    // 802EEFA0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEFA4:
    ctx->pc = 0x802EEFA4u;
    // 802EEFA4: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEFA8:
    ctx->pc = 0x802EEFA8u;
    // 802EEFA8: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_802EEFAC:
    ctx->pc = 0x802EEFACu;
    // 802EEFAC: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_802EEFB0:
    ctx->pc = 0x802EEFB0u;
    // 802EEFB0: rlwinm r31, r0, 0, 24, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_802EEFB4:
    ctx->pc = 0x802EEFB4u;
    // 802EEFB4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EEFB8:
    ctx->pc = 0x802EEFB8u;
    // 802EEFB8: bl      0x80297ECC
    {
            ctx->lr = 0x802EEFBCu;
            ctx->pc = 0x80297ECCu;
            return;
    }

label_802EEFBC:
    ctx->pc = 0x802EEFBCu;
    ctx->downcount -= 21;
    // 802EEFBC: mulli   r0, r31, 456
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)456);

label_802EEFC0:
    ctx->pc = 0x802EEFC0u;
    // 802EEFC0: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EEFC4:
    ctx->pc = 0x802EEFC4u;
    // 802EEFC4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EEFC8:
    ctx->pc = 0x802EEFC8u;
    // 802EEFC8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EEFCC:
    ctx->pc = 0x802EEFCCu;
    // 802EEFCC: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802EEFD0:
    ctx->pc = 0x802EEFD0u;
    // 802EEFD0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EEFD4:
    ctx->pc = 0x802EEFD4u;
    // 802EEFD4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EEFD8:
    ctx->pc = 0x802EEFD8u;
    // 802EEFD8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EEFDC:
    ctx->pc = 0x802EEFDCu;
    ctx->downcount -= 23;
    // 802EEFDC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EEFE0:
    ctx->pc = 0x802EEFE0u;
    // 802EEFE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EEFE4:
    ctx->pc = 0x802EEFE4u;
    // 802EEFE4: lis     r5, 19812
    ctx->gpr[5] = ((u32)(s32)(19812) << 16);

label_802EEFE8:
    ctx->pc = 0x802EEFE8u;
    // 802EEFE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EEFEC:
    ctx->pc = 0x802EEFECu;
    // 802EEFEC: addi    r5, r5, 27717
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(27717);

label_802EEFF0:
    ctx->pc = 0x802EEFF0u;
    // 802EEFF0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EEFF4:
    ctx->pc = 0x802EEFF4u;
    // 802EEFF4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EEFF8:
    ctx->pc = 0x802EEFF8u;
    // 802EEFF8: lbz     r0, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802EEFFC:
    ctx->pc = 0x802EEFFCu;
    // 802EEFFC: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_802EF000:
    ctx->pc = 0x802EF000u;
    // 802EF000: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_802EF004:
    ctx->pc = 0x802EF004u;
    // 802EF004: rlwinm r31, r0, 0, 24, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_802EF008:
    ctx->pc = 0x802EF008u;
    // 802EF008: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EF00C:
    ctx->pc = 0x802EF00Cu;
    // 802EF00C: bl      0x80297ECC
    {
            ctx->lr = 0x802EF010u;
            ctx->pc = 0x80297ECCu;
            return;
    }

label_802EF010:
    ctx->pc = 0x802EF010u;
    ctx->downcount -= 21;
    // 802EF010: mulli   r0, r31, 456
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)456);

label_802EF014:
    ctx->pc = 0x802EF014u;
    // 802EF014: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802EF018:
    ctx->pc = 0x802EF018u;
    // 802EF018: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EF01C:
    ctx->pc = 0x802EF01Cu;
    // 802EF01C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EF020:
    ctx->pc = 0x802EF020u;
    // 802EF020: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802EF024:
    ctx->pc = 0x802EF024u;
    // 802EF024: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EF028:
    ctx->pc = 0x802EF028u;
    // 802EF028: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EF02C:
    ctx->pc = 0x802EF02Cu;
    // 802EF02C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EF030:
    ctx->pc = 0x802EF030u;
    ctx->downcount -= 7;
    // 802EF030: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EF034:
    ctx->pc = 0x802EF034u;
    // 802EF034: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EF038:
    ctx->pc = 0x802EF038u;
    // 802EF038: cmpwi   r3, 0
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

label_802EF03C:
    ctx->pc = 0x802EF03Cu;
    // 802EF03C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EF040:
    ctx->pc = 0x802EF040u;
    // 802EF040: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EF044:
    ctx->pc = 0x802EF044u;
    // 802EF044: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EF048:
    ctx->pc = 0x802EF048u;
    // 802EF048: bc    12, 2, 0x802EF058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802EF058;
        }
    }

label_802EF04C:
    ctx->pc = 0x802EF04Cu;
    ctx->downcount -= 2;
    // 802EF04C: cmpwi   r4, 0
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

label_802EF050:
    ctx->pc = 0x802EF050u;
    // 802EF050: bc    4, 1, 0x802EF058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EF058;
        }
    }

label_802EF054:
    ctx->pc = 0x802EF054u;
    ctx->downcount -= 1;
    // 802EF054: bl      0x801C1C90
    {
            ctx->lr = 0x802EF058u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802EF058:
    ctx->pc = 0x802EF058u;
    ctx->downcount -= 7;
    // 802EF058: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EF05C:
    ctx->pc = 0x802EF05Cu;
    // 802EF05C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EF060:
    ctx->pc = 0x802EF060u;
    // 802EF060: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EF064:
    ctx->pc = 0x802EF064u;
    // 802EF064: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EF068:
    ctx->pc = 0x802EF068u;
    // 802EF068: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EF06C:
    ctx->pc = 0x802EF06Cu;
    // 802EF06C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EF070:
    ctx->pc = 0x802EF070u;
    ctx->downcount -= 18;
    // 802EF070: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EF074:
    ctx->pc = 0x802EF074u;
    // 802EF074: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EF078:
    ctx->pc = 0x802EF078u;
    // 802EF078: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EF07C:
    ctx->pc = 0x802EF07Cu;
    // 802EF07C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EF080:
    ctx->pc = 0x802EF080u;
    // 802EF080: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EF084:
    ctx->pc = 0x802EF084u;
    // 802EF084: lwz     r4, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EF088:
    ctx->pc = 0x802EF088u;
    // 802EF088: lbz     r31, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_802EF08C:
    ctx->pc = 0x802EF08Cu;
    // 802EF08C: b       0x802EF0BC
    {
            goto label_802EF0BC;
    }

label_802EF090:
    ctx->pc = 0x802EF090u;
    ctx->downcount -= 3;
    // 802EF090: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EF094:
    ctx->pc = 0x802EF094u;
    // 802EF094: lwz     r4, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802EF098:
    // 802EF098: bl      0x802FED50
    {
            ctx->lr = 0x802EF09Cu;
            ctx->pc = 0x802FED50u;
            return;
    }

label_802EF09C:
    ctx->downcount -= 2;
    // 802EF09C: cmpwi   r3, 0
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

label_802EF0A0:
    // 802EF0A0: bc    4, 2, 0x802EF0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802EF0B4;
        }
    }

label_802EF0A4:
    ctx->pc = 0x802EF0A4u;
    ctx->downcount -= 4;
    // 802EF0A4: lbz     r3, 173(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(173);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802EF0A8:
    // 802EF0A8: addi    r0, r3, 1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(1);

label_802EF0AC:
    ctx->pc = 0x802EF0ACu;
    // 802EF0AC: stb     r0, 173(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(173);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802EF0B0:
    // 802EF0B0: b       0x802EF0BC
    {
            goto label_802EF0BC;
    }

label_802EF0B4:
    ctx->downcount -= 2;
    // 802EF0B4: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802EF0B8:
    // 802EF0B8: b       0x802EF0CC
    {
            goto label_802EF0CC;
    }

label_802EF0BC:
    ctx->pc = 0x802EF0BCu;
    ctx->downcount -= 3;
    // 802EF0BC: lbz     r5, 173(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(173);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802EF0C0:
    // 802EF0C0: cmplw   r5, r31
    {
        u32 val_a = (u32)(ctx->gpr[5]);
        u32 val_b = (u32)(ctx->gpr[31]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802EF0C4:
    // 802EF0C4: bc    12, 0, 0x802EF090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802EF090u;
                return;
            }
            goto label_802EF090;
        }
    }

label_802EF0C8:
    ctx->pc = 0x802EF0C8u;
    ctx->downcount -= 1;
    // 802EF0C8: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802EF0CC:
    ctx->pc = 0x802EF0CCu;
    ctx->downcount -= 16;
    // 802EF0CC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EF0D0:
    ctx->pc = 0x802EF0D0u;
    // 802EF0D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EF0D4:
    ctx->pc = 0x802EF0D4u;
    // 802EF0D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EF0D8:
    ctx->pc = 0x802EF0D8u;
    // 802EF0D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EF0DC:
    ctx->pc = 0x802EF0DCu;
    // 802EF0DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EF0E0:
    ctx->pc = 0x802EF0E0u;
    ctx->downcount -= 18;
    // 802EF0E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EF0E4:
    ctx->pc = 0x802EF0E4u;
    // 802EF0E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EF0E8:
    ctx->pc = 0x802EF0E8u;
    // 802EF0E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EF0EC:
    ctx->pc = 0x802EF0ECu;
    // 802EF0EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802EF0F0:
    ctx->pc = 0x802EF0F0u;
    // 802EF0F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EF0F4:
    ctx->pc = 0x802EF0F4u;
    // 802EF0F4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802EF0F8:
    ctx->pc = 0x802EF0F8u;
    // 802EF0F8: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EF0FC:
    ctx->pc = 0x802EF0FCu;
    // 802EF0FC: bl      0x802FFB7C
    {
            ctx->lr = 0x802EF100u;
            ctx->pc = 0x802FFB7Cu;
            return;
    }

label_802EF100:
    ctx->pc = 0x802EF100u;
    ctx->downcount -= 6;
    // 802EF100: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EF104:
    ctx->pc = 0x802EF104u;
    // 802EF104: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802EF108:
    ctx->pc = 0x802EF108u;
    // 802EF108: addi    r4, r4, 22792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22792);

label_802EF10C:
    ctx->pc = 0x802EF10Cu;
    // 802EF10C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802EF110:
    ctx->pc = 0x802EF110u;
    // 802EF110: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802EF114:
    ctx->pc = 0x802EF114u;
    // 802EF114: bl      0x80370BD4
    {
            ctx->lr = 0x802EF118u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802EF118:
    ctx->pc = 0x802EF118u;
    ctx->downcount -= 7;
    // 802EF118: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802EF11C:
    ctx->pc = 0x802EF11Cu;
    // 802EF11C: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802EF120:
    ctx->pc = 0x802EF120u;
    // 802EF120: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EF124:
    ctx->pc = 0x802EF124u;
    // 802EF124: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802EF128:
    ctx->pc = 0x802EF128u;
    // 802EF128: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802EF12C:
    ctx->pc = 0x802EF12Cu;
    // 802EF12C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802EF130u;
            ctx->pc = target;
            return;
        }
    }

label_802EF130:
    ctx->pc = 0x802EF130u;
    ctx->downcount -= 5;
    // 802EF130: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EF134:
    ctx->pc = 0x802EF134u;
    // 802EF134: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802EF138:
    ctx->pc = 0x802EF138u;
    // 802EF138: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802EF13C:
    ctx->pc = 0x802EF13Cu;
    // 802EF13C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802EF140:
    ctx->pc = 0x802EF140u;
    // 802EF140: bl      0x8027714C
    {
            ctx->lr = 0x802EF144u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802EF144:
    ctx->pc = 0x802EF144u;
    ctx->downcount -= 16;
    // 802EF144: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802EF148:
    ctx->pc = 0x802EF148u;
    // 802EF148: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802EF14C:
    ctx->pc = 0x802EF14Cu;
    // 802EF14C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802EF150:
    ctx->pc = 0x802EF150u;
    // 802EF150: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802EF154:
    ctx->pc = 0x802EF154u;
    // 802EF154: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802EB1C0;
        }
    }

label_802EF158:
    ctx->pc = 0x802EF158u;
    ctx->downcount -= 26;
    // 802EF158: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802EF15C:
    ctx->pc = 0x802EF15Cu;
    // 802EF15C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802EF160:
    ctx->pc = 0x802EF160u;
    // 802EF160: lwz     r6, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF164:
    ctx->pc = 0x802EF164u;
    // 802EF164: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802EF168:
    ctx->pc = 0x802EF168u;
    // 802EF168: li      r0, 1425
    ctx->gpr[0] = (u32)(s32)(1425);

label_802EF16C:
    ctx->pc = 0x802EF16Cu;
    // 802EF16C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802EF170:
    ctx->pc = 0x802EF170u;
    // 802EF170: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802EF174:
    ctx->pc = 0x802EF174u;
    // 802EF174: lwz     r5, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802EF178:
    ctx->pc = 0x802EF178u;
    // 802EF178: stw     r6, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF17C:
    ctx->pc = 0x802EF17Cu;
    // 802EF17C: lwz     r6, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF180:
    ctx->pc = 0x802EF180u;
    // 802EF180: stw     r6, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF184:
    ctx->pc = 0x802EF184u;
    // 802EF184: lwz     r6, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF188:
    ctx->pc = 0x802EF188u;
    // 802EF188: stw     r6, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF18C:
    ctx->pc = 0x802EF18Cu;
    // 802EF18C: lwz     r6, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF190:
    ctx->pc = 0x802EF190u;
    // 802EF190: stw     r6, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF194:
    ctx->pc = 0x802EF194u;
    // 802EF194: lwz     r6, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF198:
    ctx->pc = 0x802EF198u;
    // 802EF198: stw     r6, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF19C:
    ctx->pc = 0x802EF19Cu;
    // 802EF19C: lwz     r6, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF1A0:
    ctx->pc = 0x802EF1A0u;
    // 802EF1A0: stw     r6, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF1A4:
    ctx->pc = 0x802EF1A4u;
    // 802EF1A4: lwz     r6, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF1A8:
    ctx->pc = 0x802EF1A8u;
    // 802EF1A8: stw     r6, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF1AC:
    ctx->pc = 0x802EF1ACu;
    // 802EF1AC: lwz     r6, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF1B0:
    ctx->pc = 0x802EF1B0u;
    // 802EF1B0: stw     r6, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF1B4:
    ctx->pc = 0x802EF1B4u;
    // 802EF1B4: lwz     r6, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802EF1B8:
    ctx->pc = 0x802EF1B8u;
    // 802EF1B8: stw     r6, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802EF1BC:
    ctx->pc = 0x802EF1BCu;
    // 802EF1BC: lwz     r6, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802EF1C0u;
    return;
return_dispatch_802EB1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x802EB1F8u: goto label_802EB1F8;
    case 0x802EB280u: goto label_802EB280;
    case 0x802EB288u: goto label_802EB288;
    case 0x802EB29Cu: goto label_802EB29C;
    case 0x802EB2DCu: goto label_802EB2DC;
    case 0x802EB2F8u: goto label_802EB2F8;
    case 0x802EB310u: goto label_802EB310;
    case 0x802EB31Cu: goto label_802EB31C;
    case 0x802EB334u: goto label_802EB334;
    case 0x802EB33Cu: goto label_802EB33C;
    case 0x802EB364u: goto label_802EB364;
    case 0x802EB37Cu: goto label_802EB37C;
    case 0x802EB388u: goto label_802EB388;
    case 0x802EB39Cu: goto label_802EB39C;
    case 0x802EB3A8u: goto label_802EB3A8;
    case 0x802EB3BCu: goto label_802EB3BC;
    case 0x802EB408u: goto label_802EB408;
    case 0x802EB414u: goto label_802EB414;
    case 0x802EB424u: goto label_802EB424;
    case 0x802EB458u: goto label_802EB458;
    case 0x802EB47Cu: goto label_802EB47C;
    case 0x802EB494u: goto label_802EB494;
    case 0x802EB4ACu: goto label_802EB4AC;
    case 0x802EB544u: goto label_802EB544;
    case 0x802EB580u: goto label_802EB580;
    case 0x802EB5E8u: goto label_802EB5E8;
    case 0x802EB5F0u: goto label_802EB5F0;
    case 0x802EB5F8u: goto label_802EB5F8;
    case 0x802EB600u: goto label_802EB600;
    case 0x802EB608u: goto label_802EB608;
    case 0x802EB644u: goto label_802EB644;
    case 0x802EB664u: goto label_802EB664;
    case 0x802EB6A4u: goto label_802EB6A4;
    case 0x802EB6C4u: goto label_802EB6C4;
    case 0x802EB704u: goto label_802EB704;
    case 0x802EB724u: goto label_802EB724;
    case 0x802EB7F0u: goto label_802EB7F0;
    case 0x802EB918u: goto label_802EB918;
    case 0x802EB928u: goto label_802EB928;
    case 0x802EB96Cu: goto label_802EB96C;
    case 0x802EB978u: goto label_802EB978;
    case 0x802EB9A0u: goto label_802EB9A0;
    case 0x802EB9ACu: goto label_802EB9AC;
    case 0x802EB9F8u: goto label_802EB9F8;
    case 0x802EBA04u: goto label_802EBA04;
    case 0x802EBA34u: goto label_802EBA34;
    case 0x802EBA40u: goto label_802EBA40;
    case 0x802EBA70u: goto label_802EBA70;
    case 0x802EBA8Cu: goto label_802EBA8C;
    case 0x802EBAB0u: goto label_802EBAB0;
    case 0x802EBAC8u: goto label_802EBAC8;
    case 0x802EBAD4u: goto label_802EBAD4;
    case 0x802EBAF0u: goto label_802EBAF0;
    case 0x802EBB08u: goto label_802EBB08;
    case 0x802EBB14u: goto label_802EBB14;
    case 0x802EBB30u: goto label_802EBB30;
    case 0x802EBB48u: goto label_802EBB48;
    case 0x802EBB5Cu: goto label_802EBB5C;
    case 0x802EBB74u: goto label_802EBB74;
    case 0x802EBB94u: goto label_802EBB94;
    case 0x802EBBA0u: goto label_802EBBA0;
    case 0x802EBBC0u: goto label_802EBBC0;
    case 0x802EBBD8u: goto label_802EBBD8;
    case 0x802EBBE4u: goto label_802EBBE4;
    case 0x802EBC08u: goto label_802EBC08;
    case 0x802EBC14u: goto label_802EBC14;
    case 0x802EBC40u: goto label_802EBC40;
    case 0x802EBC4Cu: goto label_802EBC4C;
    case 0x802EBC6Cu: goto label_802EBC6C;
    case 0x802EBC84u: goto label_802EBC84;
    case 0x802EBC90u: goto label_802EBC90;
    case 0x802EBCB8u: goto label_802EBCB8;
    case 0x802EBCC4u: goto label_802EBCC4;
    case 0x802EBCE8u: goto label_802EBCE8;
    case 0x802EBD34u: goto label_802EBD34;
    case 0x802EBD90u: goto label_802EBD90;
    case 0x802EBD9Cu: goto label_802EBD9C;
    case 0x802EBDB0u: goto label_802EBDB0;
    case 0x802EBE00u: goto label_802EBE00;
    case 0x802EBE18u: goto label_802EBE18;
    case 0x802EBE30u: goto label_802EBE30;
    case 0x802EBE48u: goto label_802EBE48;
    case 0x802EBE60u: goto label_802EBE60;
    case 0x802EBE70u: goto label_802EBE70;
    case 0x802EBE8Cu: goto label_802EBE8C;
    case 0x802EBE98u: goto label_802EBE98;
    case 0x802EBEACu: goto label_802EBEAC;
    case 0x802EBEC4u: goto label_802EBEC4;
    case 0x802EBED0u: goto label_802EBED0;
    case 0x802EBEE4u: goto label_802EBEE4;
    case 0x802EBEF0u: goto label_802EBEF0;
    case 0x802EBF08u: goto label_802EBF08;
    case 0x802EBF50u: goto label_802EBF50;
    case 0x802EBF54u: goto label_802EBF54;
    case 0x802EBF9Cu: goto label_802EBF9C;
    case 0x802EBFA4u: goto label_802EBFA4;
    case 0x802EBFD4u: goto label_802EBFD4;
    case 0x802EBFE4u: goto label_802EBFE4;
    case 0x802EBFF0u: goto label_802EBFF0;
    case 0x802EBFF4u: goto label_802EBFF4;
    case 0x802EC004u: goto label_802EC004;
    case 0x802EC010u: goto label_802EC010;
    case 0x802EC014u: goto label_802EC014;
    case 0x802EC020u: goto label_802EC020;
    case 0x802EC02Cu: goto label_802EC02C;
    case 0x802EC064u: goto label_802EC064;
    case 0x802EC0A0u: goto label_802EC0A0;
    case 0x802EC0B0u: goto label_802EC0B0;
    case 0x802EC134u: goto label_802EC134;
    case 0x802EC140u: goto label_802EC140;
    case 0x802EC150u: goto label_802EC150;
    case 0x802EC1A8u: goto label_802EC1A8;
    case 0x802EC1CCu: goto label_802EC1CC;
    case 0x802EC1D8u: goto label_802EC1D8;
    case 0x802EC1F4u: goto label_802EC1F4;
    case 0x802EC210u: goto label_802EC210;
    case 0x802EC21Cu: goto label_802EC21C;
    case 0x802EC240u: goto label_802EC240;
    case 0x802EC24Cu: goto label_802EC24C;
    case 0x802EC280u: goto label_802EC280;
    case 0x802EC28Cu: goto label_802EC28C;
    case 0x802EC2A8u: goto label_802EC2A8;
    case 0x802EC2C0u: goto label_802EC2C0;
    case 0x802EC2CCu: goto label_802EC2CC;
    case 0x802EC2F4u: goto label_802EC2F4;
    case 0x802EC300u: goto label_802EC300;
    case 0x802EC34Cu: goto label_802EC34C;
    case 0x802EC364u: goto label_802EC364;
    case 0x802EC37Cu: goto label_802EC37C;
    case 0x802EC394u: goto label_802EC394;
    case 0x802EC3ACu: goto label_802EC3AC;
    case 0x802EC3C4u: goto label_802EC3C4;
    case 0x802EC3DCu: goto label_802EC3DC;
    case 0x802EC418u: goto label_802EC418;
    case 0x802EC424u: goto label_802EC424;
    case 0x802EC434u: goto label_802EC434;
    case 0x802EC440u: goto label_802EC440;
    case 0x802EC44Cu: goto label_802EC44C;
    case 0x802EC458u: goto label_802EC458;
    case 0x802EC468u: goto label_802EC468;
    case 0x802EC474u: goto label_802EC474;
    case 0x802EC480u: goto label_802EC480;
    case 0x802EC48Cu: goto label_802EC48C;
    case 0x802EC498u: goto label_802EC498;
    case 0x802EC4A4u: goto label_802EC4A4;
    case 0x802EC4B4u: goto label_802EC4B4;
    case 0x802EC4C0u: goto label_802EC4C0;
    case 0x802EC4CCu: goto label_802EC4CC;
    case 0x802EC4D8u: goto label_802EC4D8;
    case 0x802EC4E4u: goto label_802EC4E4;
    case 0x802EC4F0u: goto label_802EC4F0;
    case 0x802EC4FCu: goto label_802EC4FC;
    case 0x802EC508u: goto label_802EC508;
    case 0x802EC548u: goto label_802EC548;
    case 0x802EC560u: goto label_802EC560;
    case 0x802EC584u: goto label_802EC584;
    case 0x802EC590u: goto label_802EC590;
    case 0x802EC5A4u: goto label_802EC5A4;
    case 0x802EC5BCu: goto label_802EC5BC;
    case 0x802EC5C8u: goto label_802EC5C8;
    case 0x802EC5ECu: goto label_802EC5EC;
    case 0x802EC5F8u: goto label_802EC5F8;
    case 0x802EC620u: goto label_802EC620;
    case 0x802EC644u: goto label_802EC644;
    case 0x802EC650u: goto label_802EC650;
    case 0x802EC664u: goto label_802EC664;
    case 0x802EC674u: goto label_802EC674;
    case 0x802EC690u: goto label_802EC690;
    case 0x802EC69Cu: goto label_802EC69C;
    case 0x802EC6B0u: goto label_802EC6B0;
    case 0x802EC6C8u: goto label_802EC6C8;
    case 0x802EC6D4u: goto label_802EC6D4;
    case 0x802EC714u: goto label_802EC714;
    case 0x802EC828u: goto label_802EC828;
    case 0x802EC848u: goto label_802EC848;
    case 0x802EC85Cu: goto label_802EC85C;
    case 0x802EC868u: goto label_802EC868;
    case 0x802EC87Cu: goto label_802EC87C;
    case 0x802EC888u: goto label_802EC888;
    case 0x802EC89Cu: goto label_802EC89C;
    case 0x802EC8A8u: goto label_802EC8A8;
    case 0x802EC8D4u: goto label_802EC8D4;
    case 0x802EC8E0u: goto label_802EC8E0;
    case 0x802EC8FCu: goto label_802EC8FC;
    case 0x802EC914u: goto label_802EC914;
    case 0x802EC928u: goto label_802EC928;
    case 0x802EC940u: goto label_802EC940;
    case 0x802EC954u: goto label_802EC954;
    case 0x802EC960u: goto label_802EC960;
    case 0x802EC974u: goto label_802EC974;
    case 0x802EC980u: goto label_802EC980;
    case 0x802EC994u: goto label_802EC994;
    case 0x802EC9B8u: goto label_802EC9B8;
    case 0x802EC9DCu: goto label_802EC9DC;
    case 0x802EC9E8u: goto label_802EC9E8;
    case 0x802ECA04u: goto label_802ECA04;
    case 0x802ECA1Cu: goto label_802ECA1C;
    case 0x802ECA30u: goto label_802ECA30;
    case 0x802ECA80u: goto label_802ECA80;
    case 0x802ECAFCu: goto label_802ECAFC;
    case 0x802ECB00u: goto label_802ECB00;
    case 0x802ECB44u: goto label_802ECB44;
    case 0x802ECB50u: goto label_802ECB50;
    case 0x802ECB70u: goto label_802ECB70;
    case 0x802ECB8Cu: goto label_802ECB8C;
    case 0x802ECBA8u: goto label_802ECBA8;
    case 0x802ECBC0u: goto label_802ECBC0;
    case 0x802ECBD8u: goto label_802ECBD8;
    case 0x802ECBF0u: goto label_802ECBF0;
    case 0x802ECC08u: goto label_802ECC08;
    case 0x802ECC2Cu: goto label_802ECC2C;
    case 0x802ECC38u: goto label_802ECC38;
    case 0x802ECC48u: goto label_802ECC48;
    case 0x802ECC54u: goto label_802ECC54;
    case 0x802ECC58u: goto label_802ECC58;
    case 0x802ECCA8u: goto label_802ECCA8;
    case 0x802ECCDCu: goto label_802ECCDC;
    case 0x802ECCECu: goto label_802ECCEC;
    case 0x802ECE2Cu: goto label_802ECE2C;
    case 0x802ECE38u: goto label_802ECE38;
    case 0x802ECE48u: goto label_802ECE48;
    case 0x802ECEDCu: goto label_802ECEDC;
    case 0x802ECEECu: goto label_802ECEEC;
    case 0x802ECEF8u: goto label_802ECEF8;
    case 0x802ECF1Cu: goto label_802ECF1C;
    case 0x802ECF34u: goto label_802ECF34;
    case 0x802ECF9Cu: goto label_802ECF9C;
    case 0x802ECFA8u: goto label_802ECFA8;
    case 0x802ECFBCu: goto label_802ECFBC;
    case 0x802ED030u: goto label_802ED030;
    case 0x802ED050u: goto label_802ED050;
    case 0x802ED05Cu: goto label_802ED05C;
    case 0x802ED068u: goto label_802ED068;
    case 0x802ED0F4u: goto label_802ED0F4;
    case 0x802ED10Cu: goto label_802ED10C;
    case 0x802ED118u: goto label_802ED118;
    case 0x802ED134u: goto label_802ED134;
    case 0x802ED154u: goto label_802ED154;
    case 0x802ED168u: goto label_802ED168;
    case 0x802ED174u: goto label_802ED174;
    case 0x802ED194u: goto label_802ED194;
    case 0x802ED1D8u: goto label_802ED1D8;
    case 0x802ED1ECu: goto label_802ED1EC;
    case 0x802ED1F8u: goto label_802ED1F8;
    case 0x802ED21Cu: goto label_802ED21C;
    case 0x802ED234u: goto label_802ED234;
    case 0x802ED274u: goto label_802ED274;
    case 0x802ED2ECu: goto label_802ED2EC;
    case 0x802ED2FCu: goto label_802ED2FC;
    case 0x802ED308u: goto label_802ED308;
    case 0x802ED37Cu: goto label_802ED37C;
    case 0x802ED38Cu: goto label_802ED38C;
    case 0x802ED398u: goto label_802ED398;
    case 0x802ED45Cu: goto label_802ED45C;
    case 0x802ED4C8u: goto label_802ED4C8;
    case 0x802ED4ECu: goto label_802ED4EC;
    case 0x802ED500u: goto label_802ED500;
    case 0x802ED50Cu: goto label_802ED50C;
    case 0x802ED5ACu: goto label_802ED5AC;
    case 0x802ED73Cu: goto label_802ED73C;
    case 0x802ED7F8u: goto label_802ED7F8;
    case 0x802ED820u: goto label_802ED820;
    case 0x802ED830u: goto label_802ED830;
    case 0x802ED848u: goto label_802ED848;
    case 0x802ED878u: goto label_802ED878;
    case 0x802ED8A0u: goto label_802ED8A0;
    case 0x802ED8B4u: goto label_802ED8B4;
    case 0x802ED8CCu: goto label_802ED8CC;
    case 0x802ED8FCu: goto label_802ED8FC;
    case 0x802ED948u: goto label_802ED948;
    case 0x802ED950u: goto label_802ED950;
    case 0x802ED968u: goto label_802ED968;
    case 0x802ED970u: goto label_802ED970;
    case 0x802ED978u: goto label_802ED978;
    case 0x802ED980u: goto label_802ED980;
    case 0x802ED990u: goto label_802ED990;
    case 0x802ED998u: goto label_802ED998;
    case 0x802ED9A0u: goto label_802ED9A0;
    case 0x802ED9A8u: goto label_802ED9A8;
    case 0x802ED9D8u: goto label_802ED9D8;
    case 0x802EDA14u: goto label_802EDA14;
    case 0x802EDA44u: goto label_802EDA44;
    case 0x802EDAD4u: goto label_802EDAD4;
    case 0x802EDAE4u: goto label_802EDAE4;
    case 0x802EDB3Cu: goto label_802EDB3C;
    case 0x802EDB58u: goto label_802EDB58;
    case 0x802EDB74u: goto label_802EDB74;
    case 0x802EDB90u: goto label_802EDB90;
    case 0x802EDBCCu: goto label_802EDBCC;
    case 0x802EDBE0u: goto label_802EDBE0;
    case 0x802EDBF4u: goto label_802EDBF4;
    case 0x802EDC3Cu: goto label_802EDC3C;
    case 0x802EDC88u: goto label_802EDC88;
    case 0x802EDCD4u: goto label_802EDCD4;
    case 0x802EDD1Cu: goto label_802EDD1C;
    case 0x802EDD24u: goto label_802EDD24;
    case 0x802EDD44u: goto label_802EDD44;
    case 0x802EDD64u: goto label_802EDD64;
    case 0x802EDD70u: goto label_802EDD70;
    case 0x802EDDB0u: goto label_802EDDB0;
    case 0x802EDDB8u: goto label_802EDDB8;
    case 0x802EDE14u: goto label_802EDE14;
    case 0x802EDE2Cu: goto label_802EDE2C;
    case 0x802EDE48u: goto label_802EDE48;
    case 0x802EDE50u: goto label_802EDE50;
    case 0x802EDE88u: goto label_802EDE88;
    case 0x802EDEB4u: goto label_802EDEB4;
    case 0x802EDED4u: goto label_802EDED4;
    case 0x802EDF18u: goto label_802EDF18;
    case 0x802EDF40u: goto label_802EDF40;
    case 0x802EDF5Cu: goto label_802EDF5C;
    case 0x802EDF64u: goto label_802EDF64;
    case 0x802EDF78u: goto label_802EDF78;
    case 0x802EDFF0u: goto label_802EDFF0;
    case 0x802EE00Cu: goto label_802EE00C;
    case 0x802EE014u: goto label_802EE014;
    case 0x802EE038u: goto label_802EE038;
    case 0x802EE068u: goto label_802EE068;
    case 0x802EE070u: goto label_802EE070;
    case 0x802EE1B8u: goto label_802EE1B8;
    case 0x802EE1F4u: goto label_802EE1F4;
    case 0x802EE1FCu: goto label_802EE1FC;
    case 0x802EE21Cu: goto label_802EE21C;
    case 0x802EE230u: goto label_802EE230;
    case 0x802EE238u: goto label_802EE238;
    case 0x802EE2A4u: goto label_802EE2A4;
    case 0x802EE2BCu: goto label_802EE2BC;
    case 0x802EE2D0u: goto label_802EE2D0;
    case 0x802EE2E4u: goto label_802EE2E4;
    case 0x802EE2FCu: goto label_802EE2FC;
    case 0x802EE310u: goto label_802EE310;
    case 0x802EE324u: goto label_802EE324;
    case 0x802EE33Cu: goto label_802EE33C;
    case 0x802EE350u: goto label_802EE350;
    case 0x802EE3A0u: goto label_802EE3A0;
    case 0x802EE3A8u: goto label_802EE3A8;
    case 0x802EE500u: goto label_802EE500;
    case 0x802EE50Cu: goto label_802EE50C;
    case 0x802EE548u: goto label_802EE548;
    case 0x802EE570u: goto label_802EE570;
    case 0x802EE584u: goto label_802EE584;
    case 0x802EE598u: goto label_802EE598;
    case 0x802EE5ACu: goto label_802EE5AC;
    case 0x802EE5B4u: goto label_802EE5B4;
    case 0x802EE5C4u: goto label_802EE5C4;
    case 0x802EE5D0u: goto label_802EE5D0;
    case 0x802EE5E0u: goto label_802EE5E0;
    case 0x802EE5ECu: goto label_802EE5EC;
    case 0x802EE5FCu: goto label_802EE5FC;
    case 0x802EE608u: goto label_802EE608;
    case 0x802EE614u: goto label_802EE614;
    case 0x802EE628u: goto label_802EE628;
    case 0x802EE634u: goto label_802EE634;
    case 0x802EE640u: goto label_802EE640;
    case 0x802EE64Cu: goto label_802EE64C;
    case 0x802EE694u: goto label_802EE694;
    case 0x802EE6A0u: goto label_802EE6A0;
    case 0x802EE6B0u: goto label_802EE6B0;
    case 0x802EE6FCu: goto label_802EE6FC;
    case 0x802EE708u: goto label_802EE708;
    case 0x802EE718u: goto label_802EE718;
    case 0x802EE758u: goto label_802EE758;
    case 0x802EE798u: goto label_802EE798;
    case 0x802EE820u: goto label_802EE820;
    case 0x802EE828u: goto label_802EE828;
    case 0x802EE83Cu: goto label_802EE83C;
    case 0x802EE87Cu: goto label_802EE87C;
    case 0x802EE898u: goto label_802EE898;
    case 0x802EE8B0u: goto label_802EE8B0;
    case 0x802EE8BCu: goto label_802EE8BC;
    case 0x802EE8D4u: goto label_802EE8D4;
    case 0x802EE8DCu: goto label_802EE8DC;
    case 0x802EE904u: goto label_802EE904;
    case 0x802EE91Cu: goto label_802EE91C;
    case 0x802EE928u: goto label_802EE928;
    case 0x802EE93Cu: goto label_802EE93C;
    case 0x802EE948u: goto label_802EE948;
    case 0x802EE95Cu: goto label_802EE95C;
    case 0x802EE9A8u: goto label_802EE9A8;
    case 0x802EE9B4u: goto label_802EE9B4;
    case 0x802EE9C4u: goto label_802EE9C4;
    case 0x802EE9F8u: goto label_802EE9F8;
    case 0x802EEA1Cu: goto label_802EEA1C;
    case 0x802EEA34u: goto label_802EEA34;
    case 0x802EEA4Cu: goto label_802EEA4C;
    case 0x802EEAE4u: goto label_802EEAE4;
    case 0x802EEB20u: goto label_802EEB20;
    case 0x802EEB88u: goto label_802EEB88;
    case 0x802EEB90u: goto label_802EEB90;
    case 0x802EEB98u: goto label_802EEB98;
    case 0x802EEBA0u: goto label_802EEBA0;
    case 0x802EEBA8u: goto label_802EEBA8;
    case 0x802EEBE4u: goto label_802EEBE4;
    case 0x802EEC04u: goto label_802EEC04;
    case 0x802EEC44u: goto label_802EEC44;
    case 0x802EEC64u: goto label_802EEC64;
    case 0x802EECA4u: goto label_802EECA4;
    case 0x802EECC4u: goto label_802EECC4;
    case 0x802EED1Cu: goto label_802EED1C;
    case 0x802EED38u: goto label_802EED38;
    case 0x802EED54u: goto label_802EED54;
    case 0x802EED68u: goto label_802EED68;
    case 0x802EED80u: goto label_802EED80;
    case 0x802EEDBCu: goto label_802EEDBC;
    case 0x802EEDC4u: goto label_802EEDC4;
    case 0x802EEE04u: goto label_802EEE04;
    case 0x802EEE28u: goto label_802EEE28;
    case 0x802EEE60u: goto label_802EEE60;
    case 0x802EEE6Cu: goto label_802EEE6C;
    case 0x802EEEECu: goto label_802EEEEC;
    case 0x802EEF0Cu: goto label_802EEF0C;
    case 0x802EEF74u: goto label_802EEF74;
    case 0x802EEFBCu: goto label_802EEFBC;
    case 0x802EF010u: goto label_802EF010;
    case 0x802EF058u: goto label_802EF058;
    case 0x802EF09Cu: goto label_802EF09C;
    case 0x802EF100u: goto label_802EF100;
    case 0x802EF118u: goto label_802EF118;
    case 0x802EF130u: goto label_802EF130;
    case 0x802EF144u: goto label_802EF144;
    default: return;
    }
}

