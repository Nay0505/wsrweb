// DolRecomp output
#include "../RZTE01.h"

static void loop_8030C760(CPUState* ctx) {
label_8030C760:
    ctx->downcount -= 26;
    ctx->pc = 0x8030C760u;
    // 8030C760: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 8030C764: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x8030C768u;
    // 8030C768: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030C76C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030C770u;
    // 8030C770: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C774u;
    // 8030C774: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x8030C778u;
    // 8030C778: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C77Cu;
    // 8030C77C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C780u;
    // 8030C780: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C784u;
    // 8030C784: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C788u;
    // 8030C788: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030C78C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030C790u;
    // 8030C790: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C794u;
    // 8030C794: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x8030C798u;
    // 8030C798: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C79Cu;
    // 8030C79C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C7A0u;
    // 8030C7A0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C7A4u;
    // 8030C7A4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C7A8u;
    // 8030C7A8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030C7AC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030C7B0u;
    // 8030C7B0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C7B4u;
    // 8030C7B4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8030C7B8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x8030C7BCu;
    // 8030C7BC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C7C0u;
    // 8030C7C0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030C7C4u;
    // 8030C7C4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030C7C8u;
    // 8030C7C8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030C7CC: cmpw    r7, r0
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

    // 8030C7D0: bc    12, 0, 0x8030C760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C760u;
                return;
            }
            goto label_8030C760;
        }
    }

    ctx->pc = 0x8030C7D4u;
}

static void loop_8030DF48(CPUState* ctx) {
label_8030DF48:
    ctx->downcount -= 26;
    ctx->pc = 0x8030DF48u;
    // 8030DF48: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 8030DF4C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x8030DF50u;
    // 8030DF50: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030DF54: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030DF58u;
    // 8030DF58: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF5Cu;
    // 8030DF5C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x8030DF60u;
    // 8030DF60: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DF64u;
    // 8030DF64: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF68u;
    // 8030DF68: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DF6Cu;
    // 8030DF6C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF70u;
    // 8030DF70: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030DF74: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030DF78u;
    // 8030DF78: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF7Cu;
    // 8030DF7C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x8030DF80u;
    // 8030DF80: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DF84u;
    // 8030DF84: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF88u;
    // 8030DF88: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DF8Cu;
    // 8030DF8C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF90u;
    // 8030DF90: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030DF94: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x8030DF98u;
    // 8030DF98: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DF9Cu;
    // 8030DF9C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 8030DFA0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x8030DFA4u;
    // 8030DFA4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DFA8u;
    // 8030DFA8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8030DFACu;
    // 8030DFAC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x8030DFB0u;
    // 8030DFB0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 8030DFB4: cmpw    r7, r0
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

    // 8030DFB8: bc    12, 0, 0x8030DF48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DF48u;
                return;
            }
            goto label_8030DF48;
        }
    }

    ctx->pc = 0x8030DFBCu;
}

static void loop_8030EB88(CPUState* ctx) {
label_8030EB88:
    ctx->downcount -= 5;
    // 8030EB88: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 8030EB8C: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

    ctx->pc = 0x8030EB90u;
    // 8030EB90: stw     r5, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8030EB94u;
    // 8030EB94: stw     r5, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8030EB98: bc    16, 0, 0x8030EB88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EB88u;
                return;
            }
            goto label_8030EB88;
        }
    }

    ctx->pc = 0x8030EB9Cu;
}

void func_8030B1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x8030B1C0u: goto label_8030B1C0;
    case 0x8030B1C4u: goto label_8030B1C4;
    case 0x8030B1C8u: goto label_8030B1C8;
    case 0x8030B1CCu: goto label_8030B1CC;
    case 0x8030B1D0u: goto label_8030B1D0;
    case 0x8030B1D4u: goto label_8030B1D4;
    case 0x8030B1D8u: goto label_8030B1D8;
    case 0x8030B1DCu: goto label_8030B1DC;
    case 0x8030B1E0u: goto label_8030B1E0;
    case 0x8030B1E4u: goto label_8030B1E4;
    case 0x8030B1E8u: goto label_8030B1E8;
    case 0x8030B1ECu: goto label_8030B1EC;
    case 0x8030B1F0u: goto label_8030B1F0;
    case 0x8030B1F4u: goto label_8030B1F4;
    case 0x8030B1F8u: goto label_8030B1F8;
    case 0x8030B1FCu: goto label_8030B1FC;
    case 0x8030B200u: goto label_8030B200;
    case 0x8030B204u: goto label_8030B204;
    case 0x8030B208u: goto label_8030B208;
    case 0x8030B20Cu: goto label_8030B20C;
    case 0x8030B210u: goto label_8030B210;
    case 0x8030B214u: goto label_8030B214;
    case 0x8030B218u: goto label_8030B218;
    case 0x8030B21Cu: goto label_8030B21C;
    case 0x8030B220u: goto label_8030B220;
    case 0x8030B224u: goto label_8030B224;
    case 0x8030B228u: goto label_8030B228;
    case 0x8030B22Cu: goto label_8030B22C;
    case 0x8030B230u: goto label_8030B230;
    case 0x8030B234u: goto label_8030B234;
    case 0x8030B238u: goto label_8030B238;
    case 0x8030B23Cu: goto label_8030B23C;
    case 0x8030B240u: goto label_8030B240;
    case 0x8030B244u: goto label_8030B244;
    case 0x8030B248u: goto label_8030B248;
    case 0x8030B24Cu: goto label_8030B24C;
    case 0x8030B250u: goto label_8030B250;
    case 0x8030B254u: goto label_8030B254;
    case 0x8030B258u: goto label_8030B258;
    case 0x8030B25Cu: goto label_8030B25C;
    case 0x8030B260u: goto label_8030B260;
    case 0x8030B264u: goto label_8030B264;
    case 0x8030B268u: goto label_8030B268;
    case 0x8030B26Cu: goto label_8030B26C;
    case 0x8030B270u: goto label_8030B270;
    case 0x8030B274u: goto label_8030B274;
    case 0x8030B278u: goto label_8030B278;
    case 0x8030B27Cu: goto label_8030B27C;
    case 0x8030B280u: goto label_8030B280;
    case 0x8030B284u: goto label_8030B284;
    case 0x8030B288u: goto label_8030B288;
    case 0x8030B28Cu: goto label_8030B28C;
    case 0x8030B290u: goto label_8030B290;
    case 0x8030B294u: goto label_8030B294;
    case 0x8030B298u: goto label_8030B298;
    case 0x8030B29Cu: goto label_8030B29C;
    case 0x8030B2A0u: goto label_8030B2A0;
    case 0x8030B2A4u: goto label_8030B2A4;
    case 0x8030B2A8u: goto label_8030B2A8;
    case 0x8030B2ACu: goto label_8030B2AC;
    case 0x8030B2B0u: goto label_8030B2B0;
    case 0x8030B2B4u: goto label_8030B2B4;
    case 0x8030B2B8u: goto label_8030B2B8;
    case 0x8030B2BCu: goto label_8030B2BC;
    case 0x8030B2C0u: goto label_8030B2C0;
    case 0x8030B2C4u: goto label_8030B2C4;
    case 0x8030B2C8u: goto label_8030B2C8;
    case 0x8030B2CCu: goto label_8030B2CC;
    case 0x8030B2D0u: goto label_8030B2D0;
    case 0x8030B2D4u: goto label_8030B2D4;
    case 0x8030B2D8u: goto label_8030B2D8;
    case 0x8030B2DCu: goto label_8030B2DC;
    case 0x8030B2E0u: goto label_8030B2E0;
    case 0x8030B2E4u: goto label_8030B2E4;
    case 0x8030B2E8u: goto label_8030B2E8;
    case 0x8030B2ECu: goto label_8030B2EC;
    case 0x8030B2F0u: goto label_8030B2F0;
    case 0x8030B2F4u: goto label_8030B2F4;
    case 0x8030B2F8u: goto label_8030B2F8;
    case 0x8030B2FCu: goto label_8030B2FC;
    case 0x8030B300u: goto label_8030B300;
    case 0x8030B304u: goto label_8030B304;
    case 0x8030B308u: goto label_8030B308;
    case 0x8030B30Cu: goto label_8030B30C;
    case 0x8030B310u: goto label_8030B310;
    case 0x8030B314u: goto label_8030B314;
    case 0x8030B318u: goto label_8030B318;
    case 0x8030B31Cu: goto label_8030B31C;
    case 0x8030B320u: goto label_8030B320;
    case 0x8030B324u: goto label_8030B324;
    case 0x8030B328u: goto label_8030B328;
    case 0x8030B32Cu: goto label_8030B32C;
    case 0x8030B330u: goto label_8030B330;
    case 0x8030B334u: goto label_8030B334;
    case 0x8030B338u: goto label_8030B338;
    case 0x8030B33Cu: goto label_8030B33C;
    case 0x8030B340u: goto label_8030B340;
    case 0x8030B344u: goto label_8030B344;
    case 0x8030B348u: goto label_8030B348;
    case 0x8030B34Cu: goto label_8030B34C;
    case 0x8030B350u: goto label_8030B350;
    case 0x8030B354u: goto label_8030B354;
    case 0x8030B358u: goto label_8030B358;
    case 0x8030B35Cu: goto label_8030B35C;
    case 0x8030B360u: goto label_8030B360;
    case 0x8030B364u: goto label_8030B364;
    case 0x8030B368u: goto label_8030B368;
    case 0x8030B36Cu: goto label_8030B36C;
    case 0x8030B370u: goto label_8030B370;
    case 0x8030B374u: goto label_8030B374;
    case 0x8030B378u: goto label_8030B378;
    case 0x8030B37Cu: goto label_8030B37C;
    case 0x8030B380u: goto label_8030B380;
    case 0x8030B384u: goto label_8030B384;
    case 0x8030B388u: goto label_8030B388;
    case 0x8030B38Cu: goto label_8030B38C;
    case 0x8030B390u: goto label_8030B390;
    case 0x8030B394u: goto label_8030B394;
    case 0x8030B398u: goto label_8030B398;
    case 0x8030B39Cu: goto label_8030B39C;
    case 0x8030B3A0u: goto label_8030B3A0;
    case 0x8030B3A4u: goto label_8030B3A4;
    case 0x8030B3A8u: goto label_8030B3A8;
    case 0x8030B3ACu: goto label_8030B3AC;
    case 0x8030B3B0u: goto label_8030B3B0;
    case 0x8030B3B4u: goto label_8030B3B4;
    case 0x8030B3B8u: goto label_8030B3B8;
    case 0x8030B3BCu: goto label_8030B3BC;
    case 0x8030B3C0u: goto label_8030B3C0;
    case 0x8030B3C4u: goto label_8030B3C4;
    case 0x8030B3C8u: goto label_8030B3C8;
    case 0x8030B3CCu: goto label_8030B3CC;
    case 0x8030B3D0u: goto label_8030B3D0;
    case 0x8030B3D4u: goto label_8030B3D4;
    case 0x8030B3D8u: goto label_8030B3D8;
    case 0x8030B3DCu: goto label_8030B3DC;
    case 0x8030B3E0u: goto label_8030B3E0;
    case 0x8030B3E4u: goto label_8030B3E4;
    case 0x8030B3E8u: goto label_8030B3E8;
    case 0x8030B3ECu: goto label_8030B3EC;
    case 0x8030B3F0u: goto label_8030B3F0;
    case 0x8030B3F4u: goto label_8030B3F4;
    case 0x8030B3F8u: goto label_8030B3F8;
    case 0x8030B3FCu: goto label_8030B3FC;
    case 0x8030B400u: goto label_8030B400;
    case 0x8030B404u: goto label_8030B404;
    case 0x8030B408u: goto label_8030B408;
    case 0x8030B40Cu: goto label_8030B40C;
    case 0x8030B410u: goto label_8030B410;
    case 0x8030B414u: goto label_8030B414;
    case 0x8030B418u: goto label_8030B418;
    case 0x8030B41Cu: goto label_8030B41C;
    case 0x8030B420u: goto label_8030B420;
    case 0x8030B424u: goto label_8030B424;
    case 0x8030B428u: goto label_8030B428;
    case 0x8030B42Cu: goto label_8030B42C;
    case 0x8030B430u: goto label_8030B430;
    case 0x8030B434u: goto label_8030B434;
    case 0x8030B438u: goto label_8030B438;
    case 0x8030B43Cu: goto label_8030B43C;
    case 0x8030B440u: goto label_8030B440;
    case 0x8030B444u: goto label_8030B444;
    case 0x8030B448u: goto label_8030B448;
    case 0x8030B44Cu: goto label_8030B44C;
    case 0x8030B450u: goto label_8030B450;
    case 0x8030B454u: goto label_8030B454;
    case 0x8030B458u: goto label_8030B458;
    case 0x8030B45Cu: goto label_8030B45C;
    case 0x8030B460u: goto label_8030B460;
    case 0x8030B464u: goto label_8030B464;
    case 0x8030B468u: goto label_8030B468;
    case 0x8030B46Cu: goto label_8030B46C;
    case 0x8030B470u: goto label_8030B470;
    case 0x8030B474u: goto label_8030B474;
    case 0x8030B478u: goto label_8030B478;
    case 0x8030B47Cu: goto label_8030B47C;
    case 0x8030B480u: goto label_8030B480;
    case 0x8030B484u: goto label_8030B484;
    case 0x8030B488u: goto label_8030B488;
    case 0x8030B48Cu: goto label_8030B48C;
    case 0x8030B490u: goto label_8030B490;
    case 0x8030B494u: goto label_8030B494;
    case 0x8030B498u: goto label_8030B498;
    case 0x8030B49Cu: goto label_8030B49C;
    case 0x8030B4A0u: goto label_8030B4A0;
    case 0x8030B4A4u: goto label_8030B4A4;
    case 0x8030B4A8u: goto label_8030B4A8;
    case 0x8030B4ACu: goto label_8030B4AC;
    case 0x8030B4B0u: goto label_8030B4B0;
    case 0x8030B4B4u: goto label_8030B4B4;
    case 0x8030B4B8u: goto label_8030B4B8;
    case 0x8030B4BCu: goto label_8030B4BC;
    case 0x8030B4C0u: goto label_8030B4C0;
    case 0x8030B4C4u: goto label_8030B4C4;
    case 0x8030B4C8u: goto label_8030B4C8;
    case 0x8030B4CCu: goto label_8030B4CC;
    case 0x8030B4D0u: goto label_8030B4D0;
    case 0x8030B4D4u: goto label_8030B4D4;
    case 0x8030B4D8u: goto label_8030B4D8;
    case 0x8030B4DCu: goto label_8030B4DC;
    case 0x8030B4E0u: goto label_8030B4E0;
    case 0x8030B4E4u: goto label_8030B4E4;
    case 0x8030B4E8u: goto label_8030B4E8;
    case 0x8030B4ECu: goto label_8030B4EC;
    case 0x8030B4F0u: goto label_8030B4F0;
    case 0x8030B4F4u: goto label_8030B4F4;
    case 0x8030B4F8u: goto label_8030B4F8;
    case 0x8030B4FCu: goto label_8030B4FC;
    case 0x8030B500u: goto label_8030B500;
    case 0x8030B504u: goto label_8030B504;
    case 0x8030B508u: goto label_8030B508;
    case 0x8030B50Cu: goto label_8030B50C;
    case 0x8030B510u: goto label_8030B510;
    case 0x8030B514u: goto label_8030B514;
    case 0x8030B518u: goto label_8030B518;
    case 0x8030B51Cu: goto label_8030B51C;
    case 0x8030B520u: goto label_8030B520;
    case 0x8030B524u: goto label_8030B524;
    case 0x8030B528u: goto label_8030B528;
    case 0x8030B52Cu: goto label_8030B52C;
    case 0x8030B530u: goto label_8030B530;
    case 0x8030B534u: goto label_8030B534;
    case 0x8030B538u: goto label_8030B538;
    case 0x8030B53Cu: goto label_8030B53C;
    case 0x8030B540u: goto label_8030B540;
    case 0x8030B544u: goto label_8030B544;
    case 0x8030B548u: goto label_8030B548;
    case 0x8030B54Cu: goto label_8030B54C;
    case 0x8030B550u: goto label_8030B550;
    case 0x8030B554u: goto label_8030B554;
    case 0x8030B558u: goto label_8030B558;
    case 0x8030B55Cu: goto label_8030B55C;
    case 0x8030B560u: goto label_8030B560;
    case 0x8030B564u: goto label_8030B564;
    case 0x8030B568u: goto label_8030B568;
    case 0x8030B56Cu: goto label_8030B56C;
    case 0x8030B570u: goto label_8030B570;
    case 0x8030B574u: goto label_8030B574;
    case 0x8030B578u: goto label_8030B578;
    case 0x8030B57Cu: goto label_8030B57C;
    case 0x8030B580u: goto label_8030B580;
    case 0x8030B584u: goto label_8030B584;
    case 0x8030B588u: goto label_8030B588;
    case 0x8030B58Cu: goto label_8030B58C;
    case 0x8030B590u: goto label_8030B590;
    case 0x8030B594u: goto label_8030B594;
    case 0x8030B598u: goto label_8030B598;
    case 0x8030B59Cu: goto label_8030B59C;
    case 0x8030B5A0u: goto label_8030B5A0;
    case 0x8030B5A4u: goto label_8030B5A4;
    case 0x8030B5A8u: goto label_8030B5A8;
    case 0x8030B5ACu: goto label_8030B5AC;
    case 0x8030B5B0u: goto label_8030B5B0;
    case 0x8030B5B4u: goto label_8030B5B4;
    case 0x8030B5B8u: goto label_8030B5B8;
    case 0x8030B5BCu: goto label_8030B5BC;
    case 0x8030B5C0u: goto label_8030B5C0;
    case 0x8030B5C4u: goto label_8030B5C4;
    case 0x8030B5C8u: goto label_8030B5C8;
    case 0x8030B5CCu: goto label_8030B5CC;
    case 0x8030B5D0u: goto label_8030B5D0;
    case 0x8030B5D4u: goto label_8030B5D4;
    case 0x8030B5D8u: goto label_8030B5D8;
    case 0x8030B5DCu: goto label_8030B5DC;
    case 0x8030B5E0u: goto label_8030B5E0;
    case 0x8030B5E4u: goto label_8030B5E4;
    case 0x8030B5E8u: goto label_8030B5E8;
    case 0x8030B5ECu: goto label_8030B5EC;
    case 0x8030B5F0u: goto label_8030B5F0;
    case 0x8030B5F4u: goto label_8030B5F4;
    case 0x8030B5F8u: goto label_8030B5F8;
    case 0x8030B5FCu: goto label_8030B5FC;
    case 0x8030B600u: goto label_8030B600;
    case 0x8030B604u: goto label_8030B604;
    case 0x8030B608u: goto label_8030B608;
    case 0x8030B60Cu: goto label_8030B60C;
    case 0x8030B610u: goto label_8030B610;
    case 0x8030B614u: goto label_8030B614;
    case 0x8030B618u: goto label_8030B618;
    case 0x8030B61Cu: goto label_8030B61C;
    case 0x8030B620u: goto label_8030B620;
    case 0x8030B624u: goto label_8030B624;
    case 0x8030B628u: goto label_8030B628;
    case 0x8030B62Cu: goto label_8030B62C;
    case 0x8030B630u: goto label_8030B630;
    case 0x8030B634u: goto label_8030B634;
    case 0x8030B638u: goto label_8030B638;
    case 0x8030B63Cu: goto label_8030B63C;
    case 0x8030B640u: goto label_8030B640;
    case 0x8030B644u: goto label_8030B644;
    case 0x8030B648u: goto label_8030B648;
    case 0x8030B64Cu: goto label_8030B64C;
    case 0x8030B650u: goto label_8030B650;
    case 0x8030B654u: goto label_8030B654;
    case 0x8030B658u: goto label_8030B658;
    case 0x8030B65Cu: goto label_8030B65C;
    case 0x8030B660u: goto label_8030B660;
    case 0x8030B664u: goto label_8030B664;
    case 0x8030B668u: goto label_8030B668;
    case 0x8030B66Cu: goto label_8030B66C;
    case 0x8030B670u: goto label_8030B670;
    case 0x8030B674u: goto label_8030B674;
    case 0x8030B678u: goto label_8030B678;
    case 0x8030B67Cu: goto label_8030B67C;
    case 0x8030B680u: goto label_8030B680;
    case 0x8030B684u: goto label_8030B684;
    case 0x8030B688u: goto label_8030B688;
    case 0x8030B68Cu: goto label_8030B68C;
    case 0x8030B690u: goto label_8030B690;
    case 0x8030B694u: goto label_8030B694;
    case 0x8030B698u: goto label_8030B698;
    case 0x8030B69Cu: goto label_8030B69C;
    case 0x8030B6A0u: goto label_8030B6A0;
    case 0x8030B6A4u: goto label_8030B6A4;
    case 0x8030B6A8u: goto label_8030B6A8;
    case 0x8030B6ACu: goto label_8030B6AC;
    case 0x8030B6B0u: goto label_8030B6B0;
    case 0x8030B6B4u: goto label_8030B6B4;
    case 0x8030B6B8u: goto label_8030B6B8;
    case 0x8030B6BCu: goto label_8030B6BC;
    case 0x8030B6C0u: goto label_8030B6C0;
    case 0x8030B6C4u: goto label_8030B6C4;
    case 0x8030B6C8u: goto label_8030B6C8;
    case 0x8030B6CCu: goto label_8030B6CC;
    case 0x8030B6D0u: goto label_8030B6D0;
    case 0x8030B6D4u: goto label_8030B6D4;
    case 0x8030B6D8u: goto label_8030B6D8;
    case 0x8030B6DCu: goto label_8030B6DC;
    case 0x8030B6E0u: goto label_8030B6E0;
    case 0x8030B6E4u: goto label_8030B6E4;
    case 0x8030B6E8u: goto label_8030B6E8;
    case 0x8030B6ECu: goto label_8030B6EC;
    case 0x8030B6F0u: goto label_8030B6F0;
    case 0x8030B6F4u: goto label_8030B6F4;
    case 0x8030B6F8u: goto label_8030B6F8;
    case 0x8030B6FCu: goto label_8030B6FC;
    case 0x8030B700u: goto label_8030B700;
    case 0x8030B704u: goto label_8030B704;
    case 0x8030B708u: goto label_8030B708;
    case 0x8030B70Cu: goto label_8030B70C;
    case 0x8030B710u: goto label_8030B710;
    case 0x8030B714u: goto label_8030B714;
    case 0x8030B718u: goto label_8030B718;
    case 0x8030B71Cu: goto label_8030B71C;
    case 0x8030B720u: goto label_8030B720;
    case 0x8030B724u: goto label_8030B724;
    case 0x8030B728u: goto label_8030B728;
    case 0x8030B72Cu: goto label_8030B72C;
    case 0x8030B730u: goto label_8030B730;
    case 0x8030B734u: goto label_8030B734;
    case 0x8030B738u: goto label_8030B738;
    case 0x8030B73Cu: goto label_8030B73C;
    case 0x8030B740u: goto label_8030B740;
    case 0x8030B744u: goto label_8030B744;
    case 0x8030B748u: goto label_8030B748;
    case 0x8030B74Cu: goto label_8030B74C;
    case 0x8030B750u: goto label_8030B750;
    case 0x8030B754u: goto label_8030B754;
    case 0x8030B758u: goto label_8030B758;
    case 0x8030B75Cu: goto label_8030B75C;
    case 0x8030B760u: goto label_8030B760;
    case 0x8030B764u: goto label_8030B764;
    case 0x8030B768u: goto label_8030B768;
    case 0x8030B76Cu: goto label_8030B76C;
    case 0x8030B770u: goto label_8030B770;
    case 0x8030B774u: goto label_8030B774;
    case 0x8030B778u: goto label_8030B778;
    case 0x8030B77Cu: goto label_8030B77C;
    case 0x8030B780u: goto label_8030B780;
    case 0x8030B784u: goto label_8030B784;
    case 0x8030B788u: goto label_8030B788;
    case 0x8030B78Cu: goto label_8030B78C;
    case 0x8030B790u: goto label_8030B790;
    case 0x8030B794u: goto label_8030B794;
    case 0x8030B798u: goto label_8030B798;
    case 0x8030B79Cu: goto label_8030B79C;
    case 0x8030B7A0u: goto label_8030B7A0;
    case 0x8030B7A4u: goto label_8030B7A4;
    case 0x8030B7A8u: goto label_8030B7A8;
    case 0x8030B7ACu: goto label_8030B7AC;
    case 0x8030B7B0u: goto label_8030B7B0;
    case 0x8030B7B4u: goto label_8030B7B4;
    case 0x8030B7B8u: goto label_8030B7B8;
    case 0x8030B7BCu: goto label_8030B7BC;
    case 0x8030B7C0u: goto label_8030B7C0;
    case 0x8030B7C4u: goto label_8030B7C4;
    case 0x8030B7C8u: goto label_8030B7C8;
    case 0x8030B7CCu: goto label_8030B7CC;
    case 0x8030B7D0u: goto label_8030B7D0;
    case 0x8030B7D4u: goto label_8030B7D4;
    case 0x8030B7D8u: goto label_8030B7D8;
    case 0x8030B7DCu: goto label_8030B7DC;
    case 0x8030B7E0u: goto label_8030B7E0;
    case 0x8030B7E4u: goto label_8030B7E4;
    case 0x8030B7E8u: goto label_8030B7E8;
    case 0x8030B7ECu: goto label_8030B7EC;
    case 0x8030B7F0u: goto label_8030B7F0;
    case 0x8030B7F4u: goto label_8030B7F4;
    case 0x8030B7F8u: goto label_8030B7F8;
    case 0x8030B7FCu: goto label_8030B7FC;
    case 0x8030B800u: goto label_8030B800;
    case 0x8030B804u: goto label_8030B804;
    case 0x8030B808u: goto label_8030B808;
    case 0x8030B80Cu: goto label_8030B80C;
    case 0x8030B810u: goto label_8030B810;
    case 0x8030B814u: goto label_8030B814;
    case 0x8030B818u: goto label_8030B818;
    case 0x8030B81Cu: goto label_8030B81C;
    case 0x8030B820u: goto label_8030B820;
    case 0x8030B824u: goto label_8030B824;
    case 0x8030B828u: goto label_8030B828;
    case 0x8030B82Cu: goto label_8030B82C;
    case 0x8030B830u: goto label_8030B830;
    case 0x8030B834u: goto label_8030B834;
    case 0x8030B838u: goto label_8030B838;
    case 0x8030B83Cu: goto label_8030B83C;
    case 0x8030B840u: goto label_8030B840;
    case 0x8030B844u: goto label_8030B844;
    case 0x8030B848u: goto label_8030B848;
    case 0x8030B84Cu: goto label_8030B84C;
    case 0x8030B850u: goto label_8030B850;
    case 0x8030B854u: goto label_8030B854;
    case 0x8030B858u: goto label_8030B858;
    case 0x8030B85Cu: goto label_8030B85C;
    case 0x8030B860u: goto label_8030B860;
    case 0x8030B864u: goto label_8030B864;
    case 0x8030B868u: goto label_8030B868;
    case 0x8030B86Cu: goto label_8030B86C;
    case 0x8030B870u: goto label_8030B870;
    case 0x8030B874u: goto label_8030B874;
    case 0x8030B878u: goto label_8030B878;
    case 0x8030B87Cu: goto label_8030B87C;
    case 0x8030B880u: goto label_8030B880;
    case 0x8030B884u: goto label_8030B884;
    case 0x8030B888u: goto label_8030B888;
    case 0x8030B88Cu: goto label_8030B88C;
    case 0x8030B890u: goto label_8030B890;
    case 0x8030B894u: goto label_8030B894;
    case 0x8030B898u: goto label_8030B898;
    case 0x8030B89Cu: goto label_8030B89C;
    case 0x8030B8A0u: goto label_8030B8A0;
    case 0x8030B8A4u: goto label_8030B8A4;
    case 0x8030B8A8u: goto label_8030B8A8;
    case 0x8030B8ACu: goto label_8030B8AC;
    case 0x8030B8B0u: goto label_8030B8B0;
    case 0x8030B8B4u: goto label_8030B8B4;
    case 0x8030B8B8u: goto label_8030B8B8;
    case 0x8030B8BCu: goto label_8030B8BC;
    case 0x8030B8C0u: goto label_8030B8C0;
    case 0x8030B8C4u: goto label_8030B8C4;
    case 0x8030B8C8u: goto label_8030B8C8;
    case 0x8030B8CCu: goto label_8030B8CC;
    case 0x8030B8D0u: goto label_8030B8D0;
    case 0x8030B8D4u: goto label_8030B8D4;
    case 0x8030B8D8u: goto label_8030B8D8;
    case 0x8030B8DCu: goto label_8030B8DC;
    case 0x8030B8E0u: goto label_8030B8E0;
    case 0x8030B8E4u: goto label_8030B8E4;
    case 0x8030B8E8u: goto label_8030B8E8;
    case 0x8030B8ECu: goto label_8030B8EC;
    case 0x8030B8F0u: goto label_8030B8F0;
    case 0x8030B8F4u: goto label_8030B8F4;
    case 0x8030B8F8u: goto label_8030B8F8;
    case 0x8030B8FCu: goto label_8030B8FC;
    case 0x8030B900u: goto label_8030B900;
    case 0x8030B904u: goto label_8030B904;
    case 0x8030B908u: goto label_8030B908;
    case 0x8030B90Cu: goto label_8030B90C;
    case 0x8030B910u: goto label_8030B910;
    case 0x8030B914u: goto label_8030B914;
    case 0x8030B918u: goto label_8030B918;
    case 0x8030B91Cu: goto label_8030B91C;
    case 0x8030B920u: goto label_8030B920;
    case 0x8030B924u: goto label_8030B924;
    case 0x8030B928u: goto label_8030B928;
    case 0x8030B92Cu: goto label_8030B92C;
    case 0x8030B930u: goto label_8030B930;
    case 0x8030B934u: goto label_8030B934;
    case 0x8030B938u: goto label_8030B938;
    case 0x8030B93Cu: goto label_8030B93C;
    case 0x8030B940u: goto label_8030B940;
    case 0x8030B944u: goto label_8030B944;
    case 0x8030B948u: goto label_8030B948;
    case 0x8030B94Cu: goto label_8030B94C;
    case 0x8030B950u: goto label_8030B950;
    case 0x8030B954u: goto label_8030B954;
    case 0x8030B958u: goto label_8030B958;
    case 0x8030B95Cu: goto label_8030B95C;
    case 0x8030B960u: goto label_8030B960;
    case 0x8030B964u: goto label_8030B964;
    case 0x8030B968u: goto label_8030B968;
    case 0x8030B96Cu: goto label_8030B96C;
    case 0x8030B970u: goto label_8030B970;
    case 0x8030B974u: goto label_8030B974;
    case 0x8030B978u: goto label_8030B978;
    case 0x8030B97Cu: goto label_8030B97C;
    case 0x8030B980u: goto label_8030B980;
    case 0x8030B984u: goto label_8030B984;
    case 0x8030B988u: goto label_8030B988;
    case 0x8030B98Cu: goto label_8030B98C;
    case 0x8030B990u: goto label_8030B990;
    case 0x8030B994u: goto label_8030B994;
    case 0x8030B998u: goto label_8030B998;
    case 0x8030B99Cu: goto label_8030B99C;
    case 0x8030B9A0u: goto label_8030B9A0;
    case 0x8030B9A4u: goto label_8030B9A4;
    case 0x8030B9A8u: goto label_8030B9A8;
    case 0x8030B9ACu: goto label_8030B9AC;
    case 0x8030B9B0u: goto label_8030B9B0;
    case 0x8030B9B4u: goto label_8030B9B4;
    case 0x8030B9B8u: goto label_8030B9B8;
    case 0x8030B9BCu: goto label_8030B9BC;
    case 0x8030B9C0u: goto label_8030B9C0;
    case 0x8030B9C4u: goto label_8030B9C4;
    case 0x8030B9C8u: goto label_8030B9C8;
    case 0x8030B9CCu: goto label_8030B9CC;
    case 0x8030B9D0u: goto label_8030B9D0;
    case 0x8030B9D4u: goto label_8030B9D4;
    case 0x8030B9D8u: goto label_8030B9D8;
    case 0x8030B9DCu: goto label_8030B9DC;
    case 0x8030B9E0u: goto label_8030B9E0;
    case 0x8030B9E4u: goto label_8030B9E4;
    case 0x8030B9E8u: goto label_8030B9E8;
    case 0x8030B9ECu: goto label_8030B9EC;
    case 0x8030B9F0u: goto label_8030B9F0;
    case 0x8030B9F4u: goto label_8030B9F4;
    case 0x8030B9F8u: goto label_8030B9F8;
    case 0x8030B9FCu: goto label_8030B9FC;
    case 0x8030BA00u: goto label_8030BA00;
    case 0x8030BA04u: goto label_8030BA04;
    case 0x8030BA08u: goto label_8030BA08;
    case 0x8030BA0Cu: goto label_8030BA0C;
    case 0x8030BA10u: goto label_8030BA10;
    case 0x8030BA14u: goto label_8030BA14;
    case 0x8030BA18u: goto label_8030BA18;
    case 0x8030BA1Cu: goto label_8030BA1C;
    case 0x8030BA20u: goto label_8030BA20;
    case 0x8030BA24u: goto label_8030BA24;
    case 0x8030BA28u: goto label_8030BA28;
    case 0x8030BA2Cu: goto label_8030BA2C;
    case 0x8030BA30u: goto label_8030BA30;
    case 0x8030BA34u: goto label_8030BA34;
    case 0x8030BA38u: goto label_8030BA38;
    case 0x8030BA3Cu: goto label_8030BA3C;
    case 0x8030BA40u: goto label_8030BA40;
    case 0x8030BA44u: goto label_8030BA44;
    case 0x8030BA48u: goto label_8030BA48;
    case 0x8030BA4Cu: goto label_8030BA4C;
    case 0x8030BA50u: goto label_8030BA50;
    case 0x8030BA54u: goto label_8030BA54;
    case 0x8030BA58u: goto label_8030BA58;
    case 0x8030BA5Cu: goto label_8030BA5C;
    case 0x8030BA60u: goto label_8030BA60;
    case 0x8030BA64u: goto label_8030BA64;
    case 0x8030BA68u: goto label_8030BA68;
    case 0x8030BA6Cu: goto label_8030BA6C;
    case 0x8030BA70u: goto label_8030BA70;
    case 0x8030BA74u: goto label_8030BA74;
    case 0x8030BA78u: goto label_8030BA78;
    case 0x8030BA7Cu: goto label_8030BA7C;
    case 0x8030BA80u: goto label_8030BA80;
    case 0x8030BA84u: goto label_8030BA84;
    case 0x8030BA88u: goto label_8030BA88;
    case 0x8030BA8Cu: goto label_8030BA8C;
    case 0x8030BA90u: goto label_8030BA90;
    case 0x8030BA94u: goto label_8030BA94;
    case 0x8030BA98u: goto label_8030BA98;
    case 0x8030BA9Cu: goto label_8030BA9C;
    case 0x8030BAA0u: goto label_8030BAA0;
    case 0x8030BAA4u: goto label_8030BAA4;
    case 0x8030BAA8u: goto label_8030BAA8;
    case 0x8030BAACu: goto label_8030BAAC;
    case 0x8030BAB0u: goto label_8030BAB0;
    case 0x8030BAB4u: goto label_8030BAB4;
    case 0x8030BAB8u: goto label_8030BAB8;
    case 0x8030BABCu: goto label_8030BABC;
    case 0x8030BAC0u: goto label_8030BAC0;
    case 0x8030BAC4u: goto label_8030BAC4;
    case 0x8030BAC8u: goto label_8030BAC8;
    case 0x8030BACCu: goto label_8030BACC;
    case 0x8030BAD0u: goto label_8030BAD0;
    case 0x8030BAD4u: goto label_8030BAD4;
    case 0x8030BAD8u: goto label_8030BAD8;
    case 0x8030BADCu: goto label_8030BADC;
    case 0x8030BAE0u: goto label_8030BAE0;
    case 0x8030BAE4u: goto label_8030BAE4;
    case 0x8030BAE8u: goto label_8030BAE8;
    case 0x8030BAECu: goto label_8030BAEC;
    case 0x8030BAF0u: goto label_8030BAF0;
    case 0x8030BAF4u: goto label_8030BAF4;
    case 0x8030BAF8u: goto label_8030BAF8;
    case 0x8030BAFCu: goto label_8030BAFC;
    case 0x8030BB00u: goto label_8030BB00;
    case 0x8030BB04u: goto label_8030BB04;
    case 0x8030BB08u: goto label_8030BB08;
    case 0x8030BB0Cu: goto label_8030BB0C;
    case 0x8030BB10u: goto label_8030BB10;
    case 0x8030BB14u: goto label_8030BB14;
    case 0x8030BB18u: goto label_8030BB18;
    case 0x8030BB1Cu: goto label_8030BB1C;
    case 0x8030BB20u: goto label_8030BB20;
    case 0x8030BB24u: goto label_8030BB24;
    case 0x8030BB28u: goto label_8030BB28;
    case 0x8030BB2Cu: goto label_8030BB2C;
    case 0x8030BB30u: goto label_8030BB30;
    case 0x8030BB34u: goto label_8030BB34;
    case 0x8030BB38u: goto label_8030BB38;
    case 0x8030BB3Cu: goto label_8030BB3C;
    case 0x8030BB40u: goto label_8030BB40;
    case 0x8030BB44u: goto label_8030BB44;
    case 0x8030BB48u: goto label_8030BB48;
    case 0x8030BB4Cu: goto label_8030BB4C;
    case 0x8030BB50u: goto label_8030BB50;
    case 0x8030BB54u: goto label_8030BB54;
    case 0x8030BB58u: goto label_8030BB58;
    case 0x8030BB5Cu: goto label_8030BB5C;
    case 0x8030BB60u: goto label_8030BB60;
    case 0x8030BB64u: goto label_8030BB64;
    case 0x8030BB68u: goto label_8030BB68;
    case 0x8030BB6Cu: goto label_8030BB6C;
    case 0x8030BB70u: goto label_8030BB70;
    case 0x8030BB74u: goto label_8030BB74;
    case 0x8030BB78u: goto label_8030BB78;
    case 0x8030BB7Cu: goto label_8030BB7C;
    case 0x8030BB80u: goto label_8030BB80;
    case 0x8030BB84u: goto label_8030BB84;
    case 0x8030BB88u: goto label_8030BB88;
    case 0x8030BB8Cu: goto label_8030BB8C;
    case 0x8030BB90u: goto label_8030BB90;
    case 0x8030BB94u: goto label_8030BB94;
    case 0x8030BB98u: goto label_8030BB98;
    case 0x8030BB9Cu: goto label_8030BB9C;
    case 0x8030BBA0u: goto label_8030BBA0;
    case 0x8030BBA4u: goto label_8030BBA4;
    case 0x8030BBA8u: goto label_8030BBA8;
    case 0x8030BBACu: goto label_8030BBAC;
    case 0x8030BBB0u: goto label_8030BBB0;
    case 0x8030BBB4u: goto label_8030BBB4;
    case 0x8030BBB8u: goto label_8030BBB8;
    case 0x8030BBBCu: goto label_8030BBBC;
    case 0x8030BBC0u: goto label_8030BBC0;
    case 0x8030BBC4u: goto label_8030BBC4;
    case 0x8030BBC8u: goto label_8030BBC8;
    case 0x8030BBCCu: goto label_8030BBCC;
    case 0x8030BBD0u: goto label_8030BBD0;
    case 0x8030BBD4u: goto label_8030BBD4;
    case 0x8030BBD8u: goto label_8030BBD8;
    case 0x8030BBDCu: goto label_8030BBDC;
    case 0x8030BBE0u: goto label_8030BBE0;
    case 0x8030BBE4u: goto label_8030BBE4;
    case 0x8030BBE8u: goto label_8030BBE8;
    case 0x8030BBECu: goto label_8030BBEC;
    case 0x8030BBF0u: goto label_8030BBF0;
    case 0x8030BBF4u: goto label_8030BBF4;
    case 0x8030BBF8u: goto label_8030BBF8;
    case 0x8030BBFCu: goto label_8030BBFC;
    case 0x8030BC00u: goto label_8030BC00;
    case 0x8030BC04u: goto label_8030BC04;
    case 0x8030BC08u: goto label_8030BC08;
    case 0x8030BC0Cu: goto label_8030BC0C;
    case 0x8030BC10u: goto label_8030BC10;
    case 0x8030BC14u: goto label_8030BC14;
    case 0x8030BC18u: goto label_8030BC18;
    case 0x8030BC1Cu: goto label_8030BC1C;
    case 0x8030BC20u: goto label_8030BC20;
    case 0x8030BC24u: goto label_8030BC24;
    case 0x8030BC28u: goto label_8030BC28;
    case 0x8030BC2Cu: goto label_8030BC2C;
    case 0x8030BC30u: goto label_8030BC30;
    case 0x8030BC34u: goto label_8030BC34;
    case 0x8030BC38u: goto label_8030BC38;
    case 0x8030BC3Cu: goto label_8030BC3C;
    case 0x8030BC40u: goto label_8030BC40;
    case 0x8030BC44u: goto label_8030BC44;
    case 0x8030BC48u: goto label_8030BC48;
    case 0x8030BC4Cu: goto label_8030BC4C;
    case 0x8030BC50u: goto label_8030BC50;
    case 0x8030BC54u: goto label_8030BC54;
    case 0x8030BC58u: goto label_8030BC58;
    case 0x8030BC5Cu: goto label_8030BC5C;
    case 0x8030BC60u: goto label_8030BC60;
    case 0x8030BC64u: goto label_8030BC64;
    case 0x8030BC68u: goto label_8030BC68;
    case 0x8030BC6Cu: goto label_8030BC6C;
    case 0x8030BC70u: goto label_8030BC70;
    case 0x8030BC74u: goto label_8030BC74;
    case 0x8030BC78u: goto label_8030BC78;
    case 0x8030BC7Cu: goto label_8030BC7C;
    case 0x8030BC80u: goto label_8030BC80;
    case 0x8030BC84u: goto label_8030BC84;
    case 0x8030BC88u: goto label_8030BC88;
    case 0x8030BC8Cu: goto label_8030BC8C;
    case 0x8030BC90u: goto label_8030BC90;
    case 0x8030BC94u: goto label_8030BC94;
    case 0x8030BC98u: goto label_8030BC98;
    case 0x8030BC9Cu: goto label_8030BC9C;
    case 0x8030BCA0u: goto label_8030BCA0;
    case 0x8030BCA4u: goto label_8030BCA4;
    case 0x8030BCA8u: goto label_8030BCA8;
    case 0x8030BCACu: goto label_8030BCAC;
    case 0x8030BCB0u: goto label_8030BCB0;
    case 0x8030BCB4u: goto label_8030BCB4;
    case 0x8030BCB8u: goto label_8030BCB8;
    case 0x8030BCBCu: goto label_8030BCBC;
    case 0x8030BCC0u: goto label_8030BCC0;
    case 0x8030BCC4u: goto label_8030BCC4;
    case 0x8030BCC8u: goto label_8030BCC8;
    case 0x8030BCCCu: goto label_8030BCCC;
    case 0x8030BCD0u: goto label_8030BCD0;
    case 0x8030BCD4u: goto label_8030BCD4;
    case 0x8030BCD8u: goto label_8030BCD8;
    case 0x8030BCDCu: goto label_8030BCDC;
    case 0x8030BCE0u: goto label_8030BCE0;
    case 0x8030BCE4u: goto label_8030BCE4;
    case 0x8030BCE8u: goto label_8030BCE8;
    case 0x8030BCECu: goto label_8030BCEC;
    case 0x8030BCF0u: goto label_8030BCF0;
    case 0x8030BCF4u: goto label_8030BCF4;
    case 0x8030BCF8u: goto label_8030BCF8;
    case 0x8030BCFCu: goto label_8030BCFC;
    case 0x8030BD00u: goto label_8030BD00;
    case 0x8030BD04u: goto label_8030BD04;
    case 0x8030BD08u: goto label_8030BD08;
    case 0x8030BD0Cu: goto label_8030BD0C;
    case 0x8030BD10u: goto label_8030BD10;
    case 0x8030BD14u: goto label_8030BD14;
    case 0x8030BD18u: goto label_8030BD18;
    case 0x8030BD1Cu: goto label_8030BD1C;
    case 0x8030BD20u: goto label_8030BD20;
    case 0x8030BD24u: goto label_8030BD24;
    case 0x8030BD28u: goto label_8030BD28;
    case 0x8030BD2Cu: goto label_8030BD2C;
    case 0x8030BD30u: goto label_8030BD30;
    case 0x8030BD34u: goto label_8030BD34;
    case 0x8030BD38u: goto label_8030BD38;
    case 0x8030BD3Cu: goto label_8030BD3C;
    case 0x8030BD40u: goto label_8030BD40;
    case 0x8030BD44u: goto label_8030BD44;
    case 0x8030BD48u: goto label_8030BD48;
    case 0x8030BD4Cu: goto label_8030BD4C;
    case 0x8030BD50u: goto label_8030BD50;
    case 0x8030BD54u: goto label_8030BD54;
    case 0x8030BD58u: goto label_8030BD58;
    case 0x8030BD5Cu: goto label_8030BD5C;
    case 0x8030BD60u: goto label_8030BD60;
    case 0x8030BD64u: goto label_8030BD64;
    case 0x8030BD68u: goto label_8030BD68;
    case 0x8030BD6Cu: goto label_8030BD6C;
    case 0x8030BD70u: goto label_8030BD70;
    case 0x8030BD74u: goto label_8030BD74;
    case 0x8030BD78u: goto label_8030BD78;
    case 0x8030BD7Cu: goto label_8030BD7C;
    case 0x8030BD80u: goto label_8030BD80;
    case 0x8030BD84u: goto label_8030BD84;
    case 0x8030BD88u: goto label_8030BD88;
    case 0x8030BD8Cu: goto label_8030BD8C;
    case 0x8030BD90u: goto label_8030BD90;
    case 0x8030BD94u: goto label_8030BD94;
    case 0x8030BD98u: goto label_8030BD98;
    case 0x8030BD9Cu: goto label_8030BD9C;
    case 0x8030BDA0u: goto label_8030BDA0;
    case 0x8030BDA4u: goto label_8030BDA4;
    case 0x8030BDA8u: goto label_8030BDA8;
    case 0x8030BDACu: goto label_8030BDAC;
    case 0x8030BDB0u: goto label_8030BDB0;
    case 0x8030BDB4u: goto label_8030BDB4;
    case 0x8030BDB8u: goto label_8030BDB8;
    case 0x8030BDBCu: goto label_8030BDBC;
    case 0x8030BDC0u: goto label_8030BDC0;
    case 0x8030BDC4u: goto label_8030BDC4;
    case 0x8030BDC8u: goto label_8030BDC8;
    case 0x8030BDCCu: goto label_8030BDCC;
    case 0x8030BDD0u: goto label_8030BDD0;
    case 0x8030BDD4u: goto label_8030BDD4;
    case 0x8030BDD8u: goto label_8030BDD8;
    case 0x8030BDDCu: goto label_8030BDDC;
    case 0x8030BDE0u: goto label_8030BDE0;
    case 0x8030BDE4u: goto label_8030BDE4;
    case 0x8030BDE8u: goto label_8030BDE8;
    case 0x8030BDECu: goto label_8030BDEC;
    case 0x8030BDF0u: goto label_8030BDF0;
    case 0x8030BDF4u: goto label_8030BDF4;
    case 0x8030BDF8u: goto label_8030BDF8;
    case 0x8030BDFCu: goto label_8030BDFC;
    case 0x8030BE00u: goto label_8030BE00;
    case 0x8030BE04u: goto label_8030BE04;
    case 0x8030BE08u: goto label_8030BE08;
    case 0x8030BE0Cu: goto label_8030BE0C;
    case 0x8030BE10u: goto label_8030BE10;
    case 0x8030BE14u: goto label_8030BE14;
    case 0x8030BE18u: goto label_8030BE18;
    case 0x8030BE1Cu: goto label_8030BE1C;
    case 0x8030BE20u: goto label_8030BE20;
    case 0x8030BE24u: goto label_8030BE24;
    case 0x8030BE28u: goto label_8030BE28;
    case 0x8030BE2Cu: goto label_8030BE2C;
    case 0x8030BE30u: goto label_8030BE30;
    case 0x8030BE34u: goto label_8030BE34;
    case 0x8030BE38u: goto label_8030BE38;
    case 0x8030BE3Cu: goto label_8030BE3C;
    case 0x8030BE40u: goto label_8030BE40;
    case 0x8030BE44u: goto label_8030BE44;
    case 0x8030BE48u: goto label_8030BE48;
    case 0x8030BE4Cu: goto label_8030BE4C;
    case 0x8030BE50u: goto label_8030BE50;
    case 0x8030BE54u: goto label_8030BE54;
    case 0x8030BE58u: goto label_8030BE58;
    case 0x8030BE5Cu: goto label_8030BE5C;
    case 0x8030BE60u: goto label_8030BE60;
    case 0x8030BE64u: goto label_8030BE64;
    case 0x8030BE68u: goto label_8030BE68;
    case 0x8030BE6Cu: goto label_8030BE6C;
    case 0x8030BE70u: goto label_8030BE70;
    case 0x8030BE74u: goto label_8030BE74;
    case 0x8030BE78u: goto label_8030BE78;
    case 0x8030BE7Cu: goto label_8030BE7C;
    case 0x8030BE80u: goto label_8030BE80;
    case 0x8030BE84u: goto label_8030BE84;
    case 0x8030BE88u: goto label_8030BE88;
    case 0x8030BE8Cu: goto label_8030BE8C;
    case 0x8030BE90u: goto label_8030BE90;
    case 0x8030BE94u: goto label_8030BE94;
    case 0x8030BE98u: goto label_8030BE98;
    case 0x8030BE9Cu: goto label_8030BE9C;
    case 0x8030BEA0u: goto label_8030BEA0;
    case 0x8030BEA4u: goto label_8030BEA4;
    case 0x8030BEA8u: goto label_8030BEA8;
    case 0x8030BEACu: goto label_8030BEAC;
    case 0x8030BEB0u: goto label_8030BEB0;
    case 0x8030BEB4u: goto label_8030BEB4;
    case 0x8030BEB8u: goto label_8030BEB8;
    case 0x8030BEBCu: goto label_8030BEBC;
    case 0x8030BEC0u: goto label_8030BEC0;
    case 0x8030BEC4u: goto label_8030BEC4;
    case 0x8030BEC8u: goto label_8030BEC8;
    case 0x8030BECCu: goto label_8030BECC;
    case 0x8030BED0u: goto label_8030BED0;
    case 0x8030BED4u: goto label_8030BED4;
    case 0x8030BED8u: goto label_8030BED8;
    case 0x8030BEDCu: goto label_8030BEDC;
    case 0x8030BEE0u: goto label_8030BEE0;
    case 0x8030BEE4u: goto label_8030BEE4;
    case 0x8030BEE8u: goto label_8030BEE8;
    case 0x8030BEECu: goto label_8030BEEC;
    case 0x8030BEF0u: goto label_8030BEF0;
    case 0x8030BEF4u: goto label_8030BEF4;
    case 0x8030BEF8u: goto label_8030BEF8;
    case 0x8030BEFCu: goto label_8030BEFC;
    case 0x8030BF00u: goto label_8030BF00;
    case 0x8030BF04u: goto label_8030BF04;
    case 0x8030BF08u: goto label_8030BF08;
    case 0x8030BF0Cu: goto label_8030BF0C;
    case 0x8030BF10u: goto label_8030BF10;
    case 0x8030BF14u: goto label_8030BF14;
    case 0x8030BF18u: goto label_8030BF18;
    case 0x8030BF1Cu: goto label_8030BF1C;
    case 0x8030BF20u: goto label_8030BF20;
    case 0x8030BF24u: goto label_8030BF24;
    case 0x8030BF28u: goto label_8030BF28;
    case 0x8030BF2Cu: goto label_8030BF2C;
    case 0x8030BF30u: goto label_8030BF30;
    case 0x8030BF34u: goto label_8030BF34;
    case 0x8030BF38u: goto label_8030BF38;
    case 0x8030BF3Cu: goto label_8030BF3C;
    case 0x8030BF40u: goto label_8030BF40;
    case 0x8030BF44u: goto label_8030BF44;
    case 0x8030BF48u: goto label_8030BF48;
    case 0x8030BF4Cu: goto label_8030BF4C;
    case 0x8030BF50u: goto label_8030BF50;
    case 0x8030BF54u: goto label_8030BF54;
    case 0x8030BF58u: goto label_8030BF58;
    case 0x8030BF5Cu: goto label_8030BF5C;
    case 0x8030BF60u: goto label_8030BF60;
    case 0x8030BF64u: goto label_8030BF64;
    case 0x8030BF68u: goto label_8030BF68;
    case 0x8030BF6Cu: goto label_8030BF6C;
    case 0x8030BF70u: goto label_8030BF70;
    case 0x8030BF74u: goto label_8030BF74;
    case 0x8030BF78u: goto label_8030BF78;
    case 0x8030BF7Cu: goto label_8030BF7C;
    case 0x8030BF80u: goto label_8030BF80;
    case 0x8030BF84u: goto label_8030BF84;
    case 0x8030BF88u: goto label_8030BF88;
    case 0x8030BF8Cu: goto label_8030BF8C;
    case 0x8030BF90u: goto label_8030BF90;
    case 0x8030BF94u: goto label_8030BF94;
    case 0x8030BF98u: goto label_8030BF98;
    case 0x8030BF9Cu: goto label_8030BF9C;
    case 0x8030BFA0u: goto label_8030BFA0;
    case 0x8030BFA4u: goto label_8030BFA4;
    case 0x8030BFA8u: goto label_8030BFA8;
    case 0x8030BFACu: goto label_8030BFAC;
    case 0x8030BFB0u: goto label_8030BFB0;
    case 0x8030BFB4u: goto label_8030BFB4;
    case 0x8030BFB8u: goto label_8030BFB8;
    case 0x8030BFBCu: goto label_8030BFBC;
    case 0x8030BFC0u: goto label_8030BFC0;
    case 0x8030BFC4u: goto label_8030BFC4;
    case 0x8030BFC8u: goto label_8030BFC8;
    case 0x8030BFCCu: goto label_8030BFCC;
    case 0x8030BFD0u: goto label_8030BFD0;
    case 0x8030BFD4u: goto label_8030BFD4;
    case 0x8030BFD8u: goto label_8030BFD8;
    case 0x8030BFDCu: goto label_8030BFDC;
    case 0x8030BFE0u: goto label_8030BFE0;
    case 0x8030BFE4u: goto label_8030BFE4;
    case 0x8030BFE8u: goto label_8030BFE8;
    case 0x8030BFECu: goto label_8030BFEC;
    case 0x8030BFF0u: goto label_8030BFF0;
    case 0x8030BFF4u: goto label_8030BFF4;
    case 0x8030BFF8u: goto label_8030BFF8;
    case 0x8030BFFCu: goto label_8030BFFC;
    case 0x8030C000u: goto label_8030C000;
    case 0x8030C004u: goto label_8030C004;
    case 0x8030C008u: goto label_8030C008;
    case 0x8030C00Cu: goto label_8030C00C;
    case 0x8030C010u: goto label_8030C010;
    case 0x8030C014u: goto label_8030C014;
    case 0x8030C018u: goto label_8030C018;
    case 0x8030C01Cu: goto label_8030C01C;
    case 0x8030C020u: goto label_8030C020;
    case 0x8030C024u: goto label_8030C024;
    case 0x8030C028u: goto label_8030C028;
    case 0x8030C02Cu: goto label_8030C02C;
    case 0x8030C030u: goto label_8030C030;
    case 0x8030C034u: goto label_8030C034;
    case 0x8030C038u: goto label_8030C038;
    case 0x8030C03Cu: goto label_8030C03C;
    case 0x8030C040u: goto label_8030C040;
    case 0x8030C044u: goto label_8030C044;
    case 0x8030C048u: goto label_8030C048;
    case 0x8030C04Cu: goto label_8030C04C;
    case 0x8030C050u: goto label_8030C050;
    case 0x8030C054u: goto label_8030C054;
    case 0x8030C058u: goto label_8030C058;
    case 0x8030C05Cu: goto label_8030C05C;
    case 0x8030C060u: goto label_8030C060;
    case 0x8030C064u: goto label_8030C064;
    case 0x8030C068u: goto label_8030C068;
    case 0x8030C06Cu: goto label_8030C06C;
    case 0x8030C070u: goto label_8030C070;
    case 0x8030C074u: goto label_8030C074;
    case 0x8030C078u: goto label_8030C078;
    case 0x8030C07Cu: goto label_8030C07C;
    case 0x8030C080u: goto label_8030C080;
    case 0x8030C084u: goto label_8030C084;
    case 0x8030C088u: goto label_8030C088;
    case 0x8030C08Cu: goto label_8030C08C;
    case 0x8030C090u: goto label_8030C090;
    case 0x8030C094u: goto label_8030C094;
    case 0x8030C098u: goto label_8030C098;
    case 0x8030C09Cu: goto label_8030C09C;
    case 0x8030C0A0u: goto label_8030C0A0;
    case 0x8030C0A4u: goto label_8030C0A4;
    case 0x8030C0A8u: goto label_8030C0A8;
    case 0x8030C0ACu: goto label_8030C0AC;
    case 0x8030C0B0u: goto label_8030C0B0;
    case 0x8030C0B4u: goto label_8030C0B4;
    case 0x8030C0B8u: goto label_8030C0B8;
    case 0x8030C0BCu: goto label_8030C0BC;
    case 0x8030C0C0u: goto label_8030C0C0;
    case 0x8030C0C4u: goto label_8030C0C4;
    case 0x8030C0C8u: goto label_8030C0C8;
    case 0x8030C0CCu: goto label_8030C0CC;
    case 0x8030C0D0u: goto label_8030C0D0;
    case 0x8030C0D4u: goto label_8030C0D4;
    case 0x8030C0D8u: goto label_8030C0D8;
    case 0x8030C0DCu: goto label_8030C0DC;
    case 0x8030C0E0u: goto label_8030C0E0;
    case 0x8030C0E4u: goto label_8030C0E4;
    case 0x8030C0E8u: goto label_8030C0E8;
    case 0x8030C0ECu: goto label_8030C0EC;
    case 0x8030C0F0u: goto label_8030C0F0;
    case 0x8030C0F4u: goto label_8030C0F4;
    case 0x8030C0F8u: goto label_8030C0F8;
    case 0x8030C0FCu: goto label_8030C0FC;
    case 0x8030C100u: goto label_8030C100;
    case 0x8030C104u: goto label_8030C104;
    case 0x8030C108u: goto label_8030C108;
    case 0x8030C10Cu: goto label_8030C10C;
    case 0x8030C110u: goto label_8030C110;
    case 0x8030C114u: goto label_8030C114;
    case 0x8030C118u: goto label_8030C118;
    case 0x8030C11Cu: goto label_8030C11C;
    case 0x8030C120u: goto label_8030C120;
    case 0x8030C124u: goto label_8030C124;
    case 0x8030C128u: goto label_8030C128;
    case 0x8030C12Cu: goto label_8030C12C;
    case 0x8030C130u: goto label_8030C130;
    case 0x8030C134u: goto label_8030C134;
    case 0x8030C138u: goto label_8030C138;
    case 0x8030C13Cu: goto label_8030C13C;
    case 0x8030C140u: goto label_8030C140;
    case 0x8030C144u: goto label_8030C144;
    case 0x8030C148u: goto label_8030C148;
    case 0x8030C14Cu: goto label_8030C14C;
    case 0x8030C150u: goto label_8030C150;
    case 0x8030C154u: goto label_8030C154;
    case 0x8030C158u: goto label_8030C158;
    case 0x8030C15Cu: goto label_8030C15C;
    case 0x8030C160u: goto label_8030C160;
    case 0x8030C164u: goto label_8030C164;
    case 0x8030C168u: goto label_8030C168;
    case 0x8030C16Cu: goto label_8030C16C;
    case 0x8030C170u: goto label_8030C170;
    case 0x8030C174u: goto label_8030C174;
    case 0x8030C178u: goto label_8030C178;
    case 0x8030C17Cu: goto label_8030C17C;
    case 0x8030C180u: goto label_8030C180;
    case 0x8030C184u: goto label_8030C184;
    case 0x8030C188u: goto label_8030C188;
    case 0x8030C18Cu: goto label_8030C18C;
    case 0x8030C190u: goto label_8030C190;
    case 0x8030C194u: goto label_8030C194;
    case 0x8030C198u: goto label_8030C198;
    case 0x8030C19Cu: goto label_8030C19C;
    case 0x8030C1A0u: goto label_8030C1A0;
    case 0x8030C1A4u: goto label_8030C1A4;
    case 0x8030C1A8u: goto label_8030C1A8;
    case 0x8030C1ACu: goto label_8030C1AC;
    case 0x8030C1B0u: goto label_8030C1B0;
    case 0x8030C1B4u: goto label_8030C1B4;
    case 0x8030C1B8u: goto label_8030C1B8;
    case 0x8030C1BCu: goto label_8030C1BC;
    case 0x8030C1C0u: goto label_8030C1C0;
    case 0x8030C1C4u: goto label_8030C1C4;
    case 0x8030C1C8u: goto label_8030C1C8;
    case 0x8030C1CCu: goto label_8030C1CC;
    case 0x8030C1D0u: goto label_8030C1D0;
    case 0x8030C1D4u: goto label_8030C1D4;
    case 0x8030C1D8u: goto label_8030C1D8;
    case 0x8030C1DCu: goto label_8030C1DC;
    case 0x8030C1E0u: goto label_8030C1E0;
    case 0x8030C1E4u: goto label_8030C1E4;
    case 0x8030C1E8u: goto label_8030C1E8;
    case 0x8030C1ECu: goto label_8030C1EC;
    case 0x8030C1F0u: goto label_8030C1F0;
    case 0x8030C1F4u: goto label_8030C1F4;
    case 0x8030C1F8u: goto label_8030C1F8;
    case 0x8030C1FCu: goto label_8030C1FC;
    case 0x8030C200u: goto label_8030C200;
    case 0x8030C204u: goto label_8030C204;
    case 0x8030C208u: goto label_8030C208;
    case 0x8030C20Cu: goto label_8030C20C;
    case 0x8030C210u: goto label_8030C210;
    case 0x8030C214u: goto label_8030C214;
    case 0x8030C218u: goto label_8030C218;
    case 0x8030C21Cu: goto label_8030C21C;
    case 0x8030C220u: goto label_8030C220;
    case 0x8030C224u: goto label_8030C224;
    case 0x8030C228u: goto label_8030C228;
    case 0x8030C22Cu: goto label_8030C22C;
    case 0x8030C230u: goto label_8030C230;
    case 0x8030C234u: goto label_8030C234;
    case 0x8030C238u: goto label_8030C238;
    case 0x8030C23Cu: goto label_8030C23C;
    case 0x8030C240u: goto label_8030C240;
    case 0x8030C244u: goto label_8030C244;
    case 0x8030C248u: goto label_8030C248;
    case 0x8030C24Cu: goto label_8030C24C;
    case 0x8030C250u: goto label_8030C250;
    case 0x8030C254u: goto label_8030C254;
    case 0x8030C258u: goto label_8030C258;
    case 0x8030C25Cu: goto label_8030C25C;
    case 0x8030C260u: goto label_8030C260;
    case 0x8030C264u: goto label_8030C264;
    case 0x8030C268u: goto label_8030C268;
    case 0x8030C26Cu: goto label_8030C26C;
    case 0x8030C270u: goto label_8030C270;
    case 0x8030C274u: goto label_8030C274;
    case 0x8030C278u: goto label_8030C278;
    case 0x8030C27Cu: goto label_8030C27C;
    case 0x8030C280u: goto label_8030C280;
    case 0x8030C284u: goto label_8030C284;
    case 0x8030C288u: goto label_8030C288;
    case 0x8030C28Cu: goto label_8030C28C;
    case 0x8030C290u: goto label_8030C290;
    case 0x8030C294u: goto label_8030C294;
    case 0x8030C298u: goto label_8030C298;
    case 0x8030C29Cu: goto label_8030C29C;
    case 0x8030C2A0u: goto label_8030C2A0;
    case 0x8030C2A4u: goto label_8030C2A4;
    case 0x8030C2A8u: goto label_8030C2A8;
    case 0x8030C2ACu: goto label_8030C2AC;
    case 0x8030C2B0u: goto label_8030C2B0;
    case 0x8030C2B4u: goto label_8030C2B4;
    case 0x8030C2B8u: goto label_8030C2B8;
    case 0x8030C2BCu: goto label_8030C2BC;
    case 0x8030C2C0u: goto label_8030C2C0;
    case 0x8030C2C4u: goto label_8030C2C4;
    case 0x8030C2C8u: goto label_8030C2C8;
    case 0x8030C2CCu: goto label_8030C2CC;
    case 0x8030C2D0u: goto label_8030C2D0;
    case 0x8030C2D4u: goto label_8030C2D4;
    case 0x8030C2D8u: goto label_8030C2D8;
    case 0x8030C2DCu: goto label_8030C2DC;
    case 0x8030C2E0u: goto label_8030C2E0;
    case 0x8030C2E4u: goto label_8030C2E4;
    case 0x8030C2E8u: goto label_8030C2E8;
    case 0x8030C2ECu: goto label_8030C2EC;
    case 0x8030C2F0u: goto label_8030C2F0;
    case 0x8030C2F4u: goto label_8030C2F4;
    case 0x8030C2F8u: goto label_8030C2F8;
    case 0x8030C2FCu: goto label_8030C2FC;
    case 0x8030C300u: goto label_8030C300;
    case 0x8030C304u: goto label_8030C304;
    case 0x8030C308u: goto label_8030C308;
    case 0x8030C30Cu: goto label_8030C30C;
    case 0x8030C310u: goto label_8030C310;
    case 0x8030C314u: goto label_8030C314;
    case 0x8030C318u: goto label_8030C318;
    case 0x8030C31Cu: goto label_8030C31C;
    case 0x8030C320u: goto label_8030C320;
    case 0x8030C324u: goto label_8030C324;
    case 0x8030C328u: goto label_8030C328;
    case 0x8030C32Cu: goto label_8030C32C;
    case 0x8030C330u: goto label_8030C330;
    case 0x8030C334u: goto label_8030C334;
    case 0x8030C338u: goto label_8030C338;
    case 0x8030C33Cu: goto label_8030C33C;
    case 0x8030C340u: goto label_8030C340;
    case 0x8030C344u: goto label_8030C344;
    case 0x8030C348u: goto label_8030C348;
    case 0x8030C34Cu: goto label_8030C34C;
    case 0x8030C350u: goto label_8030C350;
    case 0x8030C354u: goto label_8030C354;
    case 0x8030C358u: goto label_8030C358;
    case 0x8030C35Cu: goto label_8030C35C;
    case 0x8030C360u: goto label_8030C360;
    case 0x8030C364u: goto label_8030C364;
    case 0x8030C368u: goto label_8030C368;
    case 0x8030C36Cu: goto label_8030C36C;
    case 0x8030C370u: goto label_8030C370;
    case 0x8030C374u: goto label_8030C374;
    case 0x8030C378u: goto label_8030C378;
    case 0x8030C37Cu: goto label_8030C37C;
    case 0x8030C380u: goto label_8030C380;
    case 0x8030C384u: goto label_8030C384;
    case 0x8030C388u: goto label_8030C388;
    case 0x8030C38Cu: goto label_8030C38C;
    case 0x8030C390u: goto label_8030C390;
    case 0x8030C394u: goto label_8030C394;
    case 0x8030C398u: goto label_8030C398;
    case 0x8030C39Cu: goto label_8030C39C;
    case 0x8030C3A0u: goto label_8030C3A0;
    case 0x8030C3A4u: goto label_8030C3A4;
    case 0x8030C3A8u: goto label_8030C3A8;
    case 0x8030C3ACu: goto label_8030C3AC;
    case 0x8030C3B0u: goto label_8030C3B0;
    case 0x8030C3B4u: goto label_8030C3B4;
    case 0x8030C3B8u: goto label_8030C3B8;
    case 0x8030C3BCu: goto label_8030C3BC;
    case 0x8030C3C0u: goto label_8030C3C0;
    case 0x8030C3C4u: goto label_8030C3C4;
    case 0x8030C3C8u: goto label_8030C3C8;
    case 0x8030C3CCu: goto label_8030C3CC;
    case 0x8030C3D0u: goto label_8030C3D0;
    case 0x8030C3D4u: goto label_8030C3D4;
    case 0x8030C3D8u: goto label_8030C3D8;
    case 0x8030C3DCu: goto label_8030C3DC;
    case 0x8030C3E0u: goto label_8030C3E0;
    case 0x8030C3E4u: goto label_8030C3E4;
    case 0x8030C3E8u: goto label_8030C3E8;
    case 0x8030C3ECu: goto label_8030C3EC;
    case 0x8030C3F0u: goto label_8030C3F0;
    case 0x8030C3F4u: goto label_8030C3F4;
    case 0x8030C3F8u: goto label_8030C3F8;
    case 0x8030C3FCu: goto label_8030C3FC;
    case 0x8030C400u: goto label_8030C400;
    case 0x8030C404u: goto label_8030C404;
    case 0x8030C408u: goto label_8030C408;
    case 0x8030C40Cu: goto label_8030C40C;
    case 0x8030C410u: goto label_8030C410;
    case 0x8030C414u: goto label_8030C414;
    case 0x8030C418u: goto label_8030C418;
    case 0x8030C41Cu: goto label_8030C41C;
    case 0x8030C420u: goto label_8030C420;
    case 0x8030C424u: goto label_8030C424;
    case 0x8030C428u: goto label_8030C428;
    case 0x8030C42Cu: goto label_8030C42C;
    case 0x8030C430u: goto label_8030C430;
    case 0x8030C434u: goto label_8030C434;
    case 0x8030C438u: goto label_8030C438;
    case 0x8030C43Cu: goto label_8030C43C;
    case 0x8030C440u: goto label_8030C440;
    case 0x8030C444u: goto label_8030C444;
    case 0x8030C448u: goto label_8030C448;
    case 0x8030C44Cu: goto label_8030C44C;
    case 0x8030C450u: goto label_8030C450;
    case 0x8030C454u: goto label_8030C454;
    case 0x8030C458u: goto label_8030C458;
    case 0x8030C45Cu: goto label_8030C45C;
    case 0x8030C460u: goto label_8030C460;
    case 0x8030C464u: goto label_8030C464;
    case 0x8030C468u: goto label_8030C468;
    case 0x8030C46Cu: goto label_8030C46C;
    case 0x8030C470u: goto label_8030C470;
    case 0x8030C474u: goto label_8030C474;
    case 0x8030C478u: goto label_8030C478;
    case 0x8030C47Cu: goto label_8030C47C;
    case 0x8030C480u: goto label_8030C480;
    case 0x8030C484u: goto label_8030C484;
    case 0x8030C488u: goto label_8030C488;
    case 0x8030C48Cu: goto label_8030C48C;
    case 0x8030C490u: goto label_8030C490;
    case 0x8030C494u: goto label_8030C494;
    case 0x8030C498u: goto label_8030C498;
    case 0x8030C49Cu: goto label_8030C49C;
    case 0x8030C4A0u: goto label_8030C4A0;
    case 0x8030C4A4u: goto label_8030C4A4;
    case 0x8030C4A8u: goto label_8030C4A8;
    case 0x8030C4ACu: goto label_8030C4AC;
    case 0x8030C4B0u: goto label_8030C4B0;
    case 0x8030C4B4u: goto label_8030C4B4;
    case 0x8030C4B8u: goto label_8030C4B8;
    case 0x8030C4BCu: goto label_8030C4BC;
    case 0x8030C4C0u: goto label_8030C4C0;
    case 0x8030C4C4u: goto label_8030C4C4;
    case 0x8030C4C8u: goto label_8030C4C8;
    case 0x8030C4CCu: goto label_8030C4CC;
    case 0x8030C4D0u: goto label_8030C4D0;
    case 0x8030C4D4u: goto label_8030C4D4;
    case 0x8030C4D8u: goto label_8030C4D8;
    case 0x8030C4DCu: goto label_8030C4DC;
    case 0x8030C4E0u: goto label_8030C4E0;
    case 0x8030C4E4u: goto label_8030C4E4;
    case 0x8030C4E8u: goto label_8030C4E8;
    case 0x8030C4ECu: goto label_8030C4EC;
    case 0x8030C4F0u: goto label_8030C4F0;
    case 0x8030C4F4u: goto label_8030C4F4;
    case 0x8030C4F8u: goto label_8030C4F8;
    case 0x8030C4FCu: goto label_8030C4FC;
    case 0x8030C500u: goto label_8030C500;
    case 0x8030C504u: goto label_8030C504;
    case 0x8030C508u: goto label_8030C508;
    case 0x8030C50Cu: goto label_8030C50C;
    case 0x8030C510u: goto label_8030C510;
    case 0x8030C514u: goto label_8030C514;
    case 0x8030C518u: goto label_8030C518;
    case 0x8030C51Cu: goto label_8030C51C;
    case 0x8030C520u: goto label_8030C520;
    case 0x8030C524u: goto label_8030C524;
    case 0x8030C528u: goto label_8030C528;
    case 0x8030C52Cu: goto label_8030C52C;
    case 0x8030C530u: goto label_8030C530;
    case 0x8030C534u: goto label_8030C534;
    case 0x8030C538u: goto label_8030C538;
    case 0x8030C53Cu: goto label_8030C53C;
    case 0x8030C540u: goto label_8030C540;
    case 0x8030C544u: goto label_8030C544;
    case 0x8030C548u: goto label_8030C548;
    case 0x8030C54Cu: goto label_8030C54C;
    case 0x8030C550u: goto label_8030C550;
    case 0x8030C554u: goto label_8030C554;
    case 0x8030C558u: goto label_8030C558;
    case 0x8030C55Cu: goto label_8030C55C;
    case 0x8030C560u: goto label_8030C560;
    case 0x8030C564u: goto label_8030C564;
    case 0x8030C568u: goto label_8030C568;
    case 0x8030C56Cu: goto label_8030C56C;
    case 0x8030C570u: goto label_8030C570;
    case 0x8030C574u: goto label_8030C574;
    case 0x8030C578u: goto label_8030C578;
    case 0x8030C57Cu: goto label_8030C57C;
    case 0x8030C580u: goto label_8030C580;
    case 0x8030C584u: goto label_8030C584;
    case 0x8030C588u: goto label_8030C588;
    case 0x8030C58Cu: goto label_8030C58C;
    case 0x8030C590u: goto label_8030C590;
    case 0x8030C594u: goto label_8030C594;
    case 0x8030C598u: goto label_8030C598;
    case 0x8030C59Cu: goto label_8030C59C;
    case 0x8030C5A0u: goto label_8030C5A0;
    case 0x8030C5A4u: goto label_8030C5A4;
    case 0x8030C5A8u: goto label_8030C5A8;
    case 0x8030C5ACu: goto label_8030C5AC;
    case 0x8030C5B0u: goto label_8030C5B0;
    case 0x8030C5B4u: goto label_8030C5B4;
    case 0x8030C5B8u: goto label_8030C5B8;
    case 0x8030C5BCu: goto label_8030C5BC;
    case 0x8030C5C0u: goto label_8030C5C0;
    case 0x8030C5C4u: goto label_8030C5C4;
    case 0x8030C5C8u: goto label_8030C5C8;
    case 0x8030C5CCu: goto label_8030C5CC;
    case 0x8030C5D0u: goto label_8030C5D0;
    case 0x8030C5D4u: goto label_8030C5D4;
    case 0x8030C5D8u: goto label_8030C5D8;
    case 0x8030C5DCu: goto label_8030C5DC;
    case 0x8030C5E0u: goto label_8030C5E0;
    case 0x8030C5E4u: goto label_8030C5E4;
    case 0x8030C5E8u: goto label_8030C5E8;
    case 0x8030C5ECu: goto label_8030C5EC;
    case 0x8030C5F0u: goto label_8030C5F0;
    case 0x8030C5F4u: goto label_8030C5F4;
    case 0x8030C5F8u: goto label_8030C5F8;
    case 0x8030C5FCu: goto label_8030C5FC;
    case 0x8030C600u: goto label_8030C600;
    case 0x8030C604u: goto label_8030C604;
    case 0x8030C608u: goto label_8030C608;
    case 0x8030C60Cu: goto label_8030C60C;
    case 0x8030C610u: goto label_8030C610;
    case 0x8030C614u: goto label_8030C614;
    case 0x8030C618u: goto label_8030C618;
    case 0x8030C61Cu: goto label_8030C61C;
    case 0x8030C620u: goto label_8030C620;
    case 0x8030C624u: goto label_8030C624;
    case 0x8030C628u: goto label_8030C628;
    case 0x8030C62Cu: goto label_8030C62C;
    case 0x8030C630u: goto label_8030C630;
    case 0x8030C634u: goto label_8030C634;
    case 0x8030C638u: goto label_8030C638;
    case 0x8030C63Cu: goto label_8030C63C;
    case 0x8030C640u: goto label_8030C640;
    case 0x8030C644u: goto label_8030C644;
    case 0x8030C648u: goto label_8030C648;
    case 0x8030C64Cu: goto label_8030C64C;
    case 0x8030C650u: goto label_8030C650;
    case 0x8030C654u: goto label_8030C654;
    case 0x8030C658u: goto label_8030C658;
    case 0x8030C65Cu: goto label_8030C65C;
    case 0x8030C660u: goto label_8030C660;
    case 0x8030C664u: goto label_8030C664;
    case 0x8030C668u: goto label_8030C668;
    case 0x8030C66Cu: goto label_8030C66C;
    case 0x8030C670u: goto label_8030C670;
    case 0x8030C674u: goto label_8030C674;
    case 0x8030C678u: goto label_8030C678;
    case 0x8030C67Cu: goto label_8030C67C;
    case 0x8030C680u: goto label_8030C680;
    case 0x8030C684u: goto label_8030C684;
    case 0x8030C688u: goto label_8030C688;
    case 0x8030C68Cu: goto label_8030C68C;
    case 0x8030C690u: goto label_8030C690;
    case 0x8030C694u: goto label_8030C694;
    case 0x8030C698u: goto label_8030C698;
    case 0x8030C69Cu: goto label_8030C69C;
    case 0x8030C6A0u: goto label_8030C6A0;
    case 0x8030C6A4u: goto label_8030C6A4;
    case 0x8030C6A8u: goto label_8030C6A8;
    case 0x8030C6ACu: goto label_8030C6AC;
    case 0x8030C6B0u: goto label_8030C6B0;
    case 0x8030C6B4u: goto label_8030C6B4;
    case 0x8030C6B8u: goto label_8030C6B8;
    case 0x8030C6BCu: goto label_8030C6BC;
    case 0x8030C6C0u: goto label_8030C6C0;
    case 0x8030C6C4u: goto label_8030C6C4;
    case 0x8030C6C8u: goto label_8030C6C8;
    case 0x8030C6CCu: goto label_8030C6CC;
    case 0x8030C6D0u: goto label_8030C6D0;
    case 0x8030C6D4u: goto label_8030C6D4;
    case 0x8030C6D8u: goto label_8030C6D8;
    case 0x8030C6DCu: goto label_8030C6DC;
    case 0x8030C6E0u: goto label_8030C6E0;
    case 0x8030C6E4u: goto label_8030C6E4;
    case 0x8030C6E8u: goto label_8030C6E8;
    case 0x8030C6ECu: goto label_8030C6EC;
    case 0x8030C6F0u: goto label_8030C6F0;
    case 0x8030C6F4u: goto label_8030C6F4;
    case 0x8030C6F8u: goto label_8030C6F8;
    case 0x8030C6FCu: goto label_8030C6FC;
    case 0x8030C700u: goto label_8030C700;
    case 0x8030C704u: goto label_8030C704;
    case 0x8030C708u: goto label_8030C708;
    case 0x8030C70Cu: goto label_8030C70C;
    case 0x8030C710u: goto label_8030C710;
    case 0x8030C714u: goto label_8030C714;
    case 0x8030C718u: goto label_8030C718;
    case 0x8030C71Cu: goto label_8030C71C;
    case 0x8030C720u: goto label_8030C720;
    case 0x8030C724u: goto label_8030C724;
    case 0x8030C728u: goto label_8030C728;
    case 0x8030C72Cu: goto label_8030C72C;
    case 0x8030C730u: goto label_8030C730;
    case 0x8030C734u: goto label_8030C734;
    case 0x8030C738u: goto label_8030C738;
    case 0x8030C73Cu: goto label_8030C73C;
    case 0x8030C740u: goto label_8030C740;
    case 0x8030C744u: goto label_8030C744;
    case 0x8030C748u: goto label_8030C748;
    case 0x8030C74Cu: goto label_8030C74C;
    case 0x8030C750u: goto label_8030C750;
    case 0x8030C754u: goto label_8030C754;
    case 0x8030C758u: goto label_8030C758;
    case 0x8030C75Cu: goto label_8030C75C;
    case 0x8030C760u: goto label_8030C760;
    case 0x8030C764u: goto label_8030C764;
    case 0x8030C768u: goto label_8030C768;
    case 0x8030C76Cu: goto label_8030C76C;
    case 0x8030C770u: goto label_8030C770;
    case 0x8030C774u: goto label_8030C774;
    case 0x8030C778u: goto label_8030C778;
    case 0x8030C77Cu: goto label_8030C77C;
    case 0x8030C780u: goto label_8030C780;
    case 0x8030C784u: goto label_8030C784;
    case 0x8030C788u: goto label_8030C788;
    case 0x8030C78Cu: goto label_8030C78C;
    case 0x8030C790u: goto label_8030C790;
    case 0x8030C794u: goto label_8030C794;
    case 0x8030C798u: goto label_8030C798;
    case 0x8030C79Cu: goto label_8030C79C;
    case 0x8030C7A0u: goto label_8030C7A0;
    case 0x8030C7A4u: goto label_8030C7A4;
    case 0x8030C7A8u: goto label_8030C7A8;
    case 0x8030C7ACu: goto label_8030C7AC;
    case 0x8030C7B0u: goto label_8030C7B0;
    case 0x8030C7B4u: goto label_8030C7B4;
    case 0x8030C7B8u: goto label_8030C7B8;
    case 0x8030C7BCu: goto label_8030C7BC;
    case 0x8030C7C0u: goto label_8030C7C0;
    case 0x8030C7C4u: goto label_8030C7C4;
    case 0x8030C7C8u: goto label_8030C7C8;
    case 0x8030C7CCu: goto label_8030C7CC;
    case 0x8030C7D0u: goto label_8030C7D0;
    case 0x8030C7D4u: goto label_8030C7D4;
    case 0x8030C7D8u: goto label_8030C7D8;
    case 0x8030C7DCu: goto label_8030C7DC;
    case 0x8030C7E0u: goto label_8030C7E0;
    case 0x8030C7E4u: goto label_8030C7E4;
    case 0x8030C7E8u: goto label_8030C7E8;
    case 0x8030C7ECu: goto label_8030C7EC;
    case 0x8030C7F0u: goto label_8030C7F0;
    case 0x8030C7F4u: goto label_8030C7F4;
    case 0x8030C7F8u: goto label_8030C7F8;
    case 0x8030C7FCu: goto label_8030C7FC;
    case 0x8030C800u: goto label_8030C800;
    case 0x8030C804u: goto label_8030C804;
    case 0x8030C808u: goto label_8030C808;
    case 0x8030C80Cu: goto label_8030C80C;
    case 0x8030C810u: goto label_8030C810;
    case 0x8030C814u: goto label_8030C814;
    case 0x8030C818u: goto label_8030C818;
    case 0x8030C81Cu: goto label_8030C81C;
    case 0x8030C820u: goto label_8030C820;
    case 0x8030C824u: goto label_8030C824;
    case 0x8030C828u: goto label_8030C828;
    case 0x8030C82Cu: goto label_8030C82C;
    case 0x8030C830u: goto label_8030C830;
    case 0x8030C834u: goto label_8030C834;
    case 0x8030C838u: goto label_8030C838;
    case 0x8030C83Cu: goto label_8030C83C;
    case 0x8030C840u: goto label_8030C840;
    case 0x8030C844u: goto label_8030C844;
    case 0x8030C848u: goto label_8030C848;
    case 0x8030C84Cu: goto label_8030C84C;
    case 0x8030C850u: goto label_8030C850;
    case 0x8030C854u: goto label_8030C854;
    case 0x8030C858u: goto label_8030C858;
    case 0x8030C85Cu: goto label_8030C85C;
    case 0x8030C860u: goto label_8030C860;
    case 0x8030C864u: goto label_8030C864;
    case 0x8030C868u: goto label_8030C868;
    case 0x8030C86Cu: goto label_8030C86C;
    case 0x8030C870u: goto label_8030C870;
    case 0x8030C874u: goto label_8030C874;
    case 0x8030C878u: goto label_8030C878;
    case 0x8030C87Cu: goto label_8030C87C;
    case 0x8030C880u: goto label_8030C880;
    case 0x8030C884u: goto label_8030C884;
    case 0x8030C888u: goto label_8030C888;
    case 0x8030C88Cu: goto label_8030C88C;
    case 0x8030C890u: goto label_8030C890;
    case 0x8030C894u: goto label_8030C894;
    case 0x8030C898u: goto label_8030C898;
    case 0x8030C89Cu: goto label_8030C89C;
    case 0x8030C8A0u: goto label_8030C8A0;
    case 0x8030C8A4u: goto label_8030C8A4;
    case 0x8030C8A8u: goto label_8030C8A8;
    case 0x8030C8ACu: goto label_8030C8AC;
    case 0x8030C8B0u: goto label_8030C8B0;
    case 0x8030C8B4u: goto label_8030C8B4;
    case 0x8030C8B8u: goto label_8030C8B8;
    case 0x8030C8BCu: goto label_8030C8BC;
    case 0x8030C8C0u: goto label_8030C8C0;
    case 0x8030C8C4u: goto label_8030C8C4;
    case 0x8030C8C8u: goto label_8030C8C8;
    case 0x8030C8CCu: goto label_8030C8CC;
    case 0x8030C8D0u: goto label_8030C8D0;
    case 0x8030C8D4u: goto label_8030C8D4;
    case 0x8030C8D8u: goto label_8030C8D8;
    case 0x8030C8DCu: goto label_8030C8DC;
    case 0x8030C8E0u: goto label_8030C8E0;
    case 0x8030C8E4u: goto label_8030C8E4;
    case 0x8030C8E8u: goto label_8030C8E8;
    case 0x8030C8ECu: goto label_8030C8EC;
    case 0x8030C8F0u: goto label_8030C8F0;
    case 0x8030C8F4u: goto label_8030C8F4;
    case 0x8030C8F8u: goto label_8030C8F8;
    case 0x8030C8FCu: goto label_8030C8FC;
    case 0x8030C900u: goto label_8030C900;
    case 0x8030C904u: goto label_8030C904;
    case 0x8030C908u: goto label_8030C908;
    case 0x8030C90Cu: goto label_8030C90C;
    case 0x8030C910u: goto label_8030C910;
    case 0x8030C914u: goto label_8030C914;
    case 0x8030C918u: goto label_8030C918;
    case 0x8030C91Cu: goto label_8030C91C;
    case 0x8030C920u: goto label_8030C920;
    case 0x8030C924u: goto label_8030C924;
    case 0x8030C928u: goto label_8030C928;
    case 0x8030C92Cu: goto label_8030C92C;
    case 0x8030C930u: goto label_8030C930;
    case 0x8030C934u: goto label_8030C934;
    case 0x8030C938u: goto label_8030C938;
    case 0x8030C93Cu: goto label_8030C93C;
    case 0x8030C940u: goto label_8030C940;
    case 0x8030C944u: goto label_8030C944;
    case 0x8030C948u: goto label_8030C948;
    case 0x8030C94Cu: goto label_8030C94C;
    case 0x8030C950u: goto label_8030C950;
    case 0x8030C954u: goto label_8030C954;
    case 0x8030C958u: goto label_8030C958;
    case 0x8030C95Cu: goto label_8030C95C;
    case 0x8030C960u: goto label_8030C960;
    case 0x8030C964u: goto label_8030C964;
    case 0x8030C968u: goto label_8030C968;
    case 0x8030C96Cu: goto label_8030C96C;
    case 0x8030C970u: goto label_8030C970;
    case 0x8030C974u: goto label_8030C974;
    case 0x8030C978u: goto label_8030C978;
    case 0x8030C97Cu: goto label_8030C97C;
    case 0x8030C980u: goto label_8030C980;
    case 0x8030C984u: goto label_8030C984;
    case 0x8030C988u: goto label_8030C988;
    case 0x8030C98Cu: goto label_8030C98C;
    case 0x8030C990u: goto label_8030C990;
    case 0x8030C994u: goto label_8030C994;
    case 0x8030C998u: goto label_8030C998;
    case 0x8030C99Cu: goto label_8030C99C;
    case 0x8030C9A0u: goto label_8030C9A0;
    case 0x8030C9A4u: goto label_8030C9A4;
    case 0x8030C9A8u: goto label_8030C9A8;
    case 0x8030C9ACu: goto label_8030C9AC;
    case 0x8030C9B0u: goto label_8030C9B0;
    case 0x8030C9B4u: goto label_8030C9B4;
    case 0x8030C9B8u: goto label_8030C9B8;
    case 0x8030C9BCu: goto label_8030C9BC;
    case 0x8030C9C0u: goto label_8030C9C0;
    case 0x8030C9C4u: goto label_8030C9C4;
    case 0x8030C9C8u: goto label_8030C9C8;
    case 0x8030C9CCu: goto label_8030C9CC;
    case 0x8030C9D0u: goto label_8030C9D0;
    case 0x8030C9D4u: goto label_8030C9D4;
    case 0x8030C9D8u: goto label_8030C9D8;
    case 0x8030C9DCu: goto label_8030C9DC;
    case 0x8030C9E0u: goto label_8030C9E0;
    case 0x8030C9E4u: goto label_8030C9E4;
    case 0x8030C9E8u: goto label_8030C9E8;
    case 0x8030C9ECu: goto label_8030C9EC;
    case 0x8030C9F0u: goto label_8030C9F0;
    case 0x8030C9F4u: goto label_8030C9F4;
    case 0x8030C9F8u: goto label_8030C9F8;
    case 0x8030C9FCu: goto label_8030C9FC;
    case 0x8030CA00u: goto label_8030CA00;
    case 0x8030CA04u: goto label_8030CA04;
    case 0x8030CA08u: goto label_8030CA08;
    case 0x8030CA0Cu: goto label_8030CA0C;
    case 0x8030CA10u: goto label_8030CA10;
    case 0x8030CA14u: goto label_8030CA14;
    case 0x8030CA18u: goto label_8030CA18;
    case 0x8030CA1Cu: goto label_8030CA1C;
    case 0x8030CA20u: goto label_8030CA20;
    case 0x8030CA24u: goto label_8030CA24;
    case 0x8030CA28u: goto label_8030CA28;
    case 0x8030CA2Cu: goto label_8030CA2C;
    case 0x8030CA30u: goto label_8030CA30;
    case 0x8030CA34u: goto label_8030CA34;
    case 0x8030CA38u: goto label_8030CA38;
    case 0x8030CA3Cu: goto label_8030CA3C;
    case 0x8030CA40u: goto label_8030CA40;
    case 0x8030CA44u: goto label_8030CA44;
    case 0x8030CA48u: goto label_8030CA48;
    case 0x8030CA4Cu: goto label_8030CA4C;
    case 0x8030CA50u: goto label_8030CA50;
    case 0x8030CA54u: goto label_8030CA54;
    case 0x8030CA58u: goto label_8030CA58;
    case 0x8030CA5Cu: goto label_8030CA5C;
    case 0x8030CA60u: goto label_8030CA60;
    case 0x8030CA64u: goto label_8030CA64;
    case 0x8030CA68u: goto label_8030CA68;
    case 0x8030CA6Cu: goto label_8030CA6C;
    case 0x8030CA70u: goto label_8030CA70;
    case 0x8030CA74u: goto label_8030CA74;
    case 0x8030CA78u: goto label_8030CA78;
    case 0x8030CA7Cu: goto label_8030CA7C;
    case 0x8030CA80u: goto label_8030CA80;
    case 0x8030CA84u: goto label_8030CA84;
    case 0x8030CA88u: goto label_8030CA88;
    case 0x8030CA8Cu: goto label_8030CA8C;
    case 0x8030CA90u: goto label_8030CA90;
    case 0x8030CA94u: goto label_8030CA94;
    case 0x8030CA98u: goto label_8030CA98;
    case 0x8030CA9Cu: goto label_8030CA9C;
    case 0x8030CAA0u: goto label_8030CAA0;
    case 0x8030CAA4u: goto label_8030CAA4;
    case 0x8030CAA8u: goto label_8030CAA8;
    case 0x8030CAACu: goto label_8030CAAC;
    case 0x8030CAB0u: goto label_8030CAB0;
    case 0x8030CAB4u: goto label_8030CAB4;
    case 0x8030CAB8u: goto label_8030CAB8;
    case 0x8030CABCu: goto label_8030CABC;
    case 0x8030CAC0u: goto label_8030CAC0;
    case 0x8030CAC4u: goto label_8030CAC4;
    case 0x8030CAC8u: goto label_8030CAC8;
    case 0x8030CACCu: goto label_8030CACC;
    case 0x8030CAD0u: goto label_8030CAD0;
    case 0x8030CAD4u: goto label_8030CAD4;
    case 0x8030CAD8u: goto label_8030CAD8;
    case 0x8030CADCu: goto label_8030CADC;
    case 0x8030CAE0u: goto label_8030CAE0;
    case 0x8030CAE4u: goto label_8030CAE4;
    case 0x8030CAE8u: goto label_8030CAE8;
    case 0x8030CAECu: goto label_8030CAEC;
    case 0x8030CAF0u: goto label_8030CAF0;
    case 0x8030CAF4u: goto label_8030CAF4;
    case 0x8030CAF8u: goto label_8030CAF8;
    case 0x8030CAFCu: goto label_8030CAFC;
    case 0x8030CB00u: goto label_8030CB00;
    case 0x8030CB04u: goto label_8030CB04;
    case 0x8030CB08u: goto label_8030CB08;
    case 0x8030CB0Cu: goto label_8030CB0C;
    case 0x8030CB10u: goto label_8030CB10;
    case 0x8030CB14u: goto label_8030CB14;
    case 0x8030CB18u: goto label_8030CB18;
    case 0x8030CB1Cu: goto label_8030CB1C;
    case 0x8030CB20u: goto label_8030CB20;
    case 0x8030CB24u: goto label_8030CB24;
    case 0x8030CB28u: goto label_8030CB28;
    case 0x8030CB2Cu: goto label_8030CB2C;
    case 0x8030CB30u: goto label_8030CB30;
    case 0x8030CB34u: goto label_8030CB34;
    case 0x8030CB38u: goto label_8030CB38;
    case 0x8030CB3Cu: goto label_8030CB3C;
    case 0x8030CB40u: goto label_8030CB40;
    case 0x8030CB44u: goto label_8030CB44;
    case 0x8030CB48u: goto label_8030CB48;
    case 0x8030CB4Cu: goto label_8030CB4C;
    case 0x8030CB50u: goto label_8030CB50;
    case 0x8030CB54u: goto label_8030CB54;
    case 0x8030CB58u: goto label_8030CB58;
    case 0x8030CB5Cu: goto label_8030CB5C;
    case 0x8030CB60u: goto label_8030CB60;
    case 0x8030CB64u: goto label_8030CB64;
    case 0x8030CB68u: goto label_8030CB68;
    case 0x8030CB6Cu: goto label_8030CB6C;
    case 0x8030CB70u: goto label_8030CB70;
    case 0x8030CB74u: goto label_8030CB74;
    case 0x8030CB78u: goto label_8030CB78;
    case 0x8030CB7Cu: goto label_8030CB7C;
    case 0x8030CB80u: goto label_8030CB80;
    case 0x8030CB84u: goto label_8030CB84;
    case 0x8030CB88u: goto label_8030CB88;
    case 0x8030CB8Cu: goto label_8030CB8C;
    case 0x8030CB90u: goto label_8030CB90;
    case 0x8030CB94u: goto label_8030CB94;
    case 0x8030CB98u: goto label_8030CB98;
    case 0x8030CB9Cu: goto label_8030CB9C;
    case 0x8030CBA0u: goto label_8030CBA0;
    case 0x8030CBA4u: goto label_8030CBA4;
    case 0x8030CBA8u: goto label_8030CBA8;
    case 0x8030CBACu: goto label_8030CBAC;
    case 0x8030CBB0u: goto label_8030CBB0;
    case 0x8030CBB4u: goto label_8030CBB4;
    case 0x8030CBB8u: goto label_8030CBB8;
    case 0x8030CBBCu: goto label_8030CBBC;
    case 0x8030CBC0u: goto label_8030CBC0;
    case 0x8030CBC4u: goto label_8030CBC4;
    case 0x8030CBC8u: goto label_8030CBC8;
    case 0x8030CBCCu: goto label_8030CBCC;
    case 0x8030CBD0u: goto label_8030CBD0;
    case 0x8030CBD4u: goto label_8030CBD4;
    case 0x8030CBD8u: goto label_8030CBD8;
    case 0x8030CBDCu: goto label_8030CBDC;
    case 0x8030CBE0u: goto label_8030CBE0;
    case 0x8030CBE4u: goto label_8030CBE4;
    case 0x8030CBE8u: goto label_8030CBE8;
    case 0x8030CBECu: goto label_8030CBEC;
    case 0x8030CBF0u: goto label_8030CBF0;
    case 0x8030CBF4u: goto label_8030CBF4;
    case 0x8030CBF8u: goto label_8030CBF8;
    case 0x8030CBFCu: goto label_8030CBFC;
    case 0x8030CC00u: goto label_8030CC00;
    case 0x8030CC04u: goto label_8030CC04;
    case 0x8030CC08u: goto label_8030CC08;
    case 0x8030CC0Cu: goto label_8030CC0C;
    case 0x8030CC10u: goto label_8030CC10;
    case 0x8030CC14u: goto label_8030CC14;
    case 0x8030CC18u: goto label_8030CC18;
    case 0x8030CC1Cu: goto label_8030CC1C;
    case 0x8030CC20u: goto label_8030CC20;
    case 0x8030CC24u: goto label_8030CC24;
    case 0x8030CC28u: goto label_8030CC28;
    case 0x8030CC2Cu: goto label_8030CC2C;
    case 0x8030CC30u: goto label_8030CC30;
    case 0x8030CC34u: goto label_8030CC34;
    case 0x8030CC38u: goto label_8030CC38;
    case 0x8030CC3Cu: goto label_8030CC3C;
    case 0x8030CC40u: goto label_8030CC40;
    case 0x8030CC44u: goto label_8030CC44;
    case 0x8030CC48u: goto label_8030CC48;
    case 0x8030CC4Cu: goto label_8030CC4C;
    case 0x8030CC50u: goto label_8030CC50;
    case 0x8030CC54u: goto label_8030CC54;
    case 0x8030CC58u: goto label_8030CC58;
    case 0x8030CC5Cu: goto label_8030CC5C;
    case 0x8030CC60u: goto label_8030CC60;
    case 0x8030CC64u: goto label_8030CC64;
    case 0x8030CC68u: goto label_8030CC68;
    case 0x8030CC6Cu: goto label_8030CC6C;
    case 0x8030CC70u: goto label_8030CC70;
    case 0x8030CC74u: goto label_8030CC74;
    case 0x8030CC78u: goto label_8030CC78;
    case 0x8030CC7Cu: goto label_8030CC7C;
    case 0x8030CC80u: goto label_8030CC80;
    case 0x8030CC84u: goto label_8030CC84;
    case 0x8030CC88u: goto label_8030CC88;
    case 0x8030CC8Cu: goto label_8030CC8C;
    case 0x8030CC90u: goto label_8030CC90;
    case 0x8030CC94u: goto label_8030CC94;
    case 0x8030CC98u: goto label_8030CC98;
    case 0x8030CC9Cu: goto label_8030CC9C;
    case 0x8030CCA0u: goto label_8030CCA0;
    case 0x8030CCA4u: goto label_8030CCA4;
    case 0x8030CCA8u: goto label_8030CCA8;
    case 0x8030CCACu: goto label_8030CCAC;
    case 0x8030CCB0u: goto label_8030CCB0;
    case 0x8030CCB4u: goto label_8030CCB4;
    case 0x8030CCB8u: goto label_8030CCB8;
    case 0x8030CCBCu: goto label_8030CCBC;
    case 0x8030CCC0u: goto label_8030CCC0;
    case 0x8030CCC4u: goto label_8030CCC4;
    case 0x8030CCC8u: goto label_8030CCC8;
    case 0x8030CCCCu: goto label_8030CCCC;
    case 0x8030CCD0u: goto label_8030CCD0;
    case 0x8030CCD4u: goto label_8030CCD4;
    case 0x8030CCD8u: goto label_8030CCD8;
    case 0x8030CCDCu: goto label_8030CCDC;
    case 0x8030CCE0u: goto label_8030CCE0;
    case 0x8030CCE4u: goto label_8030CCE4;
    case 0x8030CCE8u: goto label_8030CCE8;
    case 0x8030CCECu: goto label_8030CCEC;
    case 0x8030CCF0u: goto label_8030CCF0;
    case 0x8030CCF4u: goto label_8030CCF4;
    case 0x8030CCF8u: goto label_8030CCF8;
    case 0x8030CCFCu: goto label_8030CCFC;
    case 0x8030CD00u: goto label_8030CD00;
    case 0x8030CD04u: goto label_8030CD04;
    case 0x8030CD08u: goto label_8030CD08;
    case 0x8030CD0Cu: goto label_8030CD0C;
    case 0x8030CD10u: goto label_8030CD10;
    case 0x8030CD14u: goto label_8030CD14;
    case 0x8030CD18u: goto label_8030CD18;
    case 0x8030CD1Cu: goto label_8030CD1C;
    case 0x8030CD20u: goto label_8030CD20;
    case 0x8030CD24u: goto label_8030CD24;
    case 0x8030CD28u: goto label_8030CD28;
    case 0x8030CD2Cu: goto label_8030CD2C;
    case 0x8030CD30u: goto label_8030CD30;
    case 0x8030CD34u: goto label_8030CD34;
    case 0x8030CD38u: goto label_8030CD38;
    case 0x8030CD3Cu: goto label_8030CD3C;
    case 0x8030CD40u: goto label_8030CD40;
    case 0x8030CD44u: goto label_8030CD44;
    case 0x8030CD48u: goto label_8030CD48;
    case 0x8030CD4Cu: goto label_8030CD4C;
    case 0x8030CD50u: goto label_8030CD50;
    case 0x8030CD54u: goto label_8030CD54;
    case 0x8030CD58u: goto label_8030CD58;
    case 0x8030CD5Cu: goto label_8030CD5C;
    case 0x8030CD60u: goto label_8030CD60;
    case 0x8030CD64u: goto label_8030CD64;
    case 0x8030CD68u: goto label_8030CD68;
    case 0x8030CD6Cu: goto label_8030CD6C;
    case 0x8030CD70u: goto label_8030CD70;
    case 0x8030CD74u: goto label_8030CD74;
    case 0x8030CD78u: goto label_8030CD78;
    case 0x8030CD7Cu: goto label_8030CD7C;
    case 0x8030CD80u: goto label_8030CD80;
    case 0x8030CD84u: goto label_8030CD84;
    case 0x8030CD88u: goto label_8030CD88;
    case 0x8030CD8Cu: goto label_8030CD8C;
    case 0x8030CD90u: goto label_8030CD90;
    case 0x8030CD94u: goto label_8030CD94;
    case 0x8030CD98u: goto label_8030CD98;
    case 0x8030CD9Cu: goto label_8030CD9C;
    case 0x8030CDA0u: goto label_8030CDA0;
    case 0x8030CDA4u: goto label_8030CDA4;
    case 0x8030CDA8u: goto label_8030CDA8;
    case 0x8030CDACu: goto label_8030CDAC;
    case 0x8030CDB0u: goto label_8030CDB0;
    case 0x8030CDB4u: goto label_8030CDB4;
    case 0x8030CDB8u: goto label_8030CDB8;
    case 0x8030CDBCu: goto label_8030CDBC;
    case 0x8030CDC0u: goto label_8030CDC0;
    case 0x8030CDC4u: goto label_8030CDC4;
    case 0x8030CDC8u: goto label_8030CDC8;
    case 0x8030CDCCu: goto label_8030CDCC;
    case 0x8030CDD0u: goto label_8030CDD0;
    case 0x8030CDD4u: goto label_8030CDD4;
    case 0x8030CDD8u: goto label_8030CDD8;
    case 0x8030CDDCu: goto label_8030CDDC;
    case 0x8030CDE0u: goto label_8030CDE0;
    case 0x8030CDE4u: goto label_8030CDE4;
    case 0x8030CDE8u: goto label_8030CDE8;
    case 0x8030CDECu: goto label_8030CDEC;
    case 0x8030CDF0u: goto label_8030CDF0;
    case 0x8030CDF4u: goto label_8030CDF4;
    case 0x8030CDF8u: goto label_8030CDF8;
    case 0x8030CDFCu: goto label_8030CDFC;
    case 0x8030CE00u: goto label_8030CE00;
    case 0x8030CE04u: goto label_8030CE04;
    case 0x8030CE08u: goto label_8030CE08;
    case 0x8030CE0Cu: goto label_8030CE0C;
    case 0x8030CE10u: goto label_8030CE10;
    case 0x8030CE14u: goto label_8030CE14;
    case 0x8030CE18u: goto label_8030CE18;
    case 0x8030CE1Cu: goto label_8030CE1C;
    case 0x8030CE20u: goto label_8030CE20;
    case 0x8030CE24u: goto label_8030CE24;
    case 0x8030CE28u: goto label_8030CE28;
    case 0x8030CE2Cu: goto label_8030CE2C;
    case 0x8030CE30u: goto label_8030CE30;
    case 0x8030CE34u: goto label_8030CE34;
    case 0x8030CE38u: goto label_8030CE38;
    case 0x8030CE3Cu: goto label_8030CE3C;
    case 0x8030CE40u: goto label_8030CE40;
    case 0x8030CE44u: goto label_8030CE44;
    case 0x8030CE48u: goto label_8030CE48;
    case 0x8030CE4Cu: goto label_8030CE4C;
    case 0x8030CE50u: goto label_8030CE50;
    case 0x8030CE54u: goto label_8030CE54;
    case 0x8030CE58u: goto label_8030CE58;
    case 0x8030CE5Cu: goto label_8030CE5C;
    case 0x8030CE60u: goto label_8030CE60;
    case 0x8030CE64u: goto label_8030CE64;
    case 0x8030CE68u: goto label_8030CE68;
    case 0x8030CE6Cu: goto label_8030CE6C;
    case 0x8030CE70u: goto label_8030CE70;
    case 0x8030CE74u: goto label_8030CE74;
    case 0x8030CE78u: goto label_8030CE78;
    case 0x8030CE7Cu: goto label_8030CE7C;
    case 0x8030CE80u: goto label_8030CE80;
    case 0x8030CE84u: goto label_8030CE84;
    case 0x8030CE88u: goto label_8030CE88;
    case 0x8030CE8Cu: goto label_8030CE8C;
    case 0x8030CE90u: goto label_8030CE90;
    case 0x8030CE94u: goto label_8030CE94;
    case 0x8030CE98u: goto label_8030CE98;
    case 0x8030CE9Cu: goto label_8030CE9C;
    case 0x8030CEA0u: goto label_8030CEA0;
    case 0x8030CEA4u: goto label_8030CEA4;
    case 0x8030CEA8u: goto label_8030CEA8;
    case 0x8030CEACu: goto label_8030CEAC;
    case 0x8030CEB0u: goto label_8030CEB0;
    case 0x8030CEB4u: goto label_8030CEB4;
    case 0x8030CEB8u: goto label_8030CEB8;
    case 0x8030CEBCu: goto label_8030CEBC;
    case 0x8030CEC0u: goto label_8030CEC0;
    case 0x8030CEC4u: goto label_8030CEC4;
    case 0x8030CEC8u: goto label_8030CEC8;
    case 0x8030CECCu: goto label_8030CECC;
    case 0x8030CED0u: goto label_8030CED0;
    case 0x8030CED4u: goto label_8030CED4;
    case 0x8030CED8u: goto label_8030CED8;
    case 0x8030CEDCu: goto label_8030CEDC;
    case 0x8030CEE0u: goto label_8030CEE0;
    case 0x8030CEE4u: goto label_8030CEE4;
    case 0x8030CEE8u: goto label_8030CEE8;
    case 0x8030CEECu: goto label_8030CEEC;
    case 0x8030CEF0u: goto label_8030CEF0;
    case 0x8030CEF4u: goto label_8030CEF4;
    case 0x8030CEF8u: goto label_8030CEF8;
    case 0x8030CEFCu: goto label_8030CEFC;
    case 0x8030CF00u: goto label_8030CF00;
    case 0x8030CF04u: goto label_8030CF04;
    case 0x8030CF08u: goto label_8030CF08;
    case 0x8030CF0Cu: goto label_8030CF0C;
    case 0x8030CF10u: goto label_8030CF10;
    case 0x8030CF14u: goto label_8030CF14;
    case 0x8030CF18u: goto label_8030CF18;
    case 0x8030CF1Cu: goto label_8030CF1C;
    case 0x8030CF20u: goto label_8030CF20;
    case 0x8030CF24u: goto label_8030CF24;
    case 0x8030CF28u: goto label_8030CF28;
    case 0x8030CF2Cu: goto label_8030CF2C;
    case 0x8030CF30u: goto label_8030CF30;
    case 0x8030CF34u: goto label_8030CF34;
    case 0x8030CF38u: goto label_8030CF38;
    case 0x8030CF3Cu: goto label_8030CF3C;
    case 0x8030CF40u: goto label_8030CF40;
    case 0x8030CF44u: goto label_8030CF44;
    case 0x8030CF48u: goto label_8030CF48;
    case 0x8030CF4Cu: goto label_8030CF4C;
    case 0x8030CF50u: goto label_8030CF50;
    case 0x8030CF54u: goto label_8030CF54;
    case 0x8030CF58u: goto label_8030CF58;
    case 0x8030CF5Cu: goto label_8030CF5C;
    case 0x8030CF60u: goto label_8030CF60;
    case 0x8030CF64u: goto label_8030CF64;
    case 0x8030CF68u: goto label_8030CF68;
    case 0x8030CF6Cu: goto label_8030CF6C;
    case 0x8030CF70u: goto label_8030CF70;
    case 0x8030CF74u: goto label_8030CF74;
    case 0x8030CF78u: goto label_8030CF78;
    case 0x8030CF7Cu: goto label_8030CF7C;
    case 0x8030CF80u: goto label_8030CF80;
    case 0x8030CF84u: goto label_8030CF84;
    case 0x8030CF88u: goto label_8030CF88;
    case 0x8030CF8Cu: goto label_8030CF8C;
    case 0x8030CF90u: goto label_8030CF90;
    case 0x8030CF94u: goto label_8030CF94;
    case 0x8030CF98u: goto label_8030CF98;
    case 0x8030CF9Cu: goto label_8030CF9C;
    case 0x8030CFA0u: goto label_8030CFA0;
    case 0x8030CFA4u: goto label_8030CFA4;
    case 0x8030CFA8u: goto label_8030CFA8;
    case 0x8030CFACu: goto label_8030CFAC;
    case 0x8030CFB0u: goto label_8030CFB0;
    case 0x8030CFB4u: goto label_8030CFB4;
    case 0x8030CFB8u: goto label_8030CFB8;
    case 0x8030CFBCu: goto label_8030CFBC;
    case 0x8030CFC0u: goto label_8030CFC0;
    case 0x8030CFC4u: goto label_8030CFC4;
    case 0x8030CFC8u: goto label_8030CFC8;
    case 0x8030CFCCu: goto label_8030CFCC;
    case 0x8030CFD0u: goto label_8030CFD0;
    case 0x8030CFD4u: goto label_8030CFD4;
    case 0x8030CFD8u: goto label_8030CFD8;
    case 0x8030CFDCu: goto label_8030CFDC;
    case 0x8030CFE0u: goto label_8030CFE0;
    case 0x8030CFE4u: goto label_8030CFE4;
    case 0x8030CFE8u: goto label_8030CFE8;
    case 0x8030CFECu: goto label_8030CFEC;
    case 0x8030CFF0u: goto label_8030CFF0;
    case 0x8030CFF4u: goto label_8030CFF4;
    case 0x8030CFF8u: goto label_8030CFF8;
    case 0x8030CFFCu: goto label_8030CFFC;
    case 0x8030D000u: goto label_8030D000;
    case 0x8030D004u: goto label_8030D004;
    case 0x8030D008u: goto label_8030D008;
    case 0x8030D00Cu: goto label_8030D00C;
    case 0x8030D010u: goto label_8030D010;
    case 0x8030D014u: goto label_8030D014;
    case 0x8030D018u: goto label_8030D018;
    case 0x8030D01Cu: goto label_8030D01C;
    case 0x8030D020u: goto label_8030D020;
    case 0x8030D024u: goto label_8030D024;
    case 0x8030D028u: goto label_8030D028;
    case 0x8030D02Cu: goto label_8030D02C;
    case 0x8030D030u: goto label_8030D030;
    case 0x8030D034u: goto label_8030D034;
    case 0x8030D038u: goto label_8030D038;
    case 0x8030D03Cu: goto label_8030D03C;
    case 0x8030D040u: goto label_8030D040;
    case 0x8030D044u: goto label_8030D044;
    case 0x8030D048u: goto label_8030D048;
    case 0x8030D04Cu: goto label_8030D04C;
    case 0x8030D050u: goto label_8030D050;
    case 0x8030D054u: goto label_8030D054;
    case 0x8030D058u: goto label_8030D058;
    case 0x8030D05Cu: goto label_8030D05C;
    case 0x8030D060u: goto label_8030D060;
    case 0x8030D064u: goto label_8030D064;
    case 0x8030D068u: goto label_8030D068;
    case 0x8030D06Cu: goto label_8030D06C;
    case 0x8030D070u: goto label_8030D070;
    case 0x8030D074u: goto label_8030D074;
    case 0x8030D078u: goto label_8030D078;
    case 0x8030D07Cu: goto label_8030D07C;
    case 0x8030D080u: goto label_8030D080;
    case 0x8030D084u: goto label_8030D084;
    case 0x8030D088u: goto label_8030D088;
    case 0x8030D08Cu: goto label_8030D08C;
    case 0x8030D090u: goto label_8030D090;
    case 0x8030D094u: goto label_8030D094;
    case 0x8030D098u: goto label_8030D098;
    case 0x8030D09Cu: goto label_8030D09C;
    case 0x8030D0A0u: goto label_8030D0A0;
    case 0x8030D0A4u: goto label_8030D0A4;
    case 0x8030D0A8u: goto label_8030D0A8;
    case 0x8030D0ACu: goto label_8030D0AC;
    case 0x8030D0B0u: goto label_8030D0B0;
    case 0x8030D0B4u: goto label_8030D0B4;
    case 0x8030D0B8u: goto label_8030D0B8;
    case 0x8030D0BCu: goto label_8030D0BC;
    case 0x8030D0C0u: goto label_8030D0C0;
    case 0x8030D0C4u: goto label_8030D0C4;
    case 0x8030D0C8u: goto label_8030D0C8;
    case 0x8030D0CCu: goto label_8030D0CC;
    case 0x8030D0D0u: goto label_8030D0D0;
    case 0x8030D0D4u: goto label_8030D0D4;
    case 0x8030D0D8u: goto label_8030D0D8;
    case 0x8030D0DCu: goto label_8030D0DC;
    case 0x8030D0E0u: goto label_8030D0E0;
    case 0x8030D0E4u: goto label_8030D0E4;
    case 0x8030D0E8u: goto label_8030D0E8;
    case 0x8030D0ECu: goto label_8030D0EC;
    case 0x8030D0F0u: goto label_8030D0F0;
    case 0x8030D0F4u: goto label_8030D0F4;
    case 0x8030D0F8u: goto label_8030D0F8;
    case 0x8030D0FCu: goto label_8030D0FC;
    case 0x8030D100u: goto label_8030D100;
    case 0x8030D104u: goto label_8030D104;
    case 0x8030D108u: goto label_8030D108;
    case 0x8030D10Cu: goto label_8030D10C;
    case 0x8030D110u: goto label_8030D110;
    case 0x8030D114u: goto label_8030D114;
    case 0x8030D118u: goto label_8030D118;
    case 0x8030D11Cu: goto label_8030D11C;
    case 0x8030D120u: goto label_8030D120;
    case 0x8030D124u: goto label_8030D124;
    case 0x8030D128u: goto label_8030D128;
    case 0x8030D12Cu: goto label_8030D12C;
    case 0x8030D130u: goto label_8030D130;
    case 0x8030D134u: goto label_8030D134;
    case 0x8030D138u: goto label_8030D138;
    case 0x8030D13Cu: goto label_8030D13C;
    case 0x8030D140u: goto label_8030D140;
    case 0x8030D144u: goto label_8030D144;
    case 0x8030D148u: goto label_8030D148;
    case 0x8030D14Cu: goto label_8030D14C;
    case 0x8030D150u: goto label_8030D150;
    case 0x8030D154u: goto label_8030D154;
    case 0x8030D158u: goto label_8030D158;
    case 0x8030D15Cu: goto label_8030D15C;
    case 0x8030D160u: goto label_8030D160;
    case 0x8030D164u: goto label_8030D164;
    case 0x8030D168u: goto label_8030D168;
    case 0x8030D16Cu: goto label_8030D16C;
    case 0x8030D170u: goto label_8030D170;
    case 0x8030D174u: goto label_8030D174;
    case 0x8030D178u: goto label_8030D178;
    case 0x8030D17Cu: goto label_8030D17C;
    case 0x8030D180u: goto label_8030D180;
    case 0x8030D184u: goto label_8030D184;
    case 0x8030D188u: goto label_8030D188;
    case 0x8030D18Cu: goto label_8030D18C;
    case 0x8030D190u: goto label_8030D190;
    case 0x8030D194u: goto label_8030D194;
    case 0x8030D198u: goto label_8030D198;
    case 0x8030D19Cu: goto label_8030D19C;
    case 0x8030D1A0u: goto label_8030D1A0;
    case 0x8030D1A4u: goto label_8030D1A4;
    case 0x8030D1A8u: goto label_8030D1A8;
    case 0x8030D1ACu: goto label_8030D1AC;
    case 0x8030D1B0u: goto label_8030D1B0;
    case 0x8030D1B4u: goto label_8030D1B4;
    case 0x8030D1B8u: goto label_8030D1B8;
    case 0x8030D1BCu: goto label_8030D1BC;
    case 0x8030D1C0u: goto label_8030D1C0;
    case 0x8030D1C4u: goto label_8030D1C4;
    case 0x8030D1C8u: goto label_8030D1C8;
    case 0x8030D1CCu: goto label_8030D1CC;
    case 0x8030D1D0u: goto label_8030D1D0;
    case 0x8030D1D4u: goto label_8030D1D4;
    case 0x8030D1D8u: goto label_8030D1D8;
    case 0x8030D1DCu: goto label_8030D1DC;
    case 0x8030D1E0u: goto label_8030D1E0;
    case 0x8030D1E4u: goto label_8030D1E4;
    case 0x8030D1E8u: goto label_8030D1E8;
    case 0x8030D1ECu: goto label_8030D1EC;
    case 0x8030D1F0u: goto label_8030D1F0;
    case 0x8030D1F4u: goto label_8030D1F4;
    case 0x8030D1F8u: goto label_8030D1F8;
    case 0x8030D1FCu: goto label_8030D1FC;
    case 0x8030D200u: goto label_8030D200;
    case 0x8030D204u: goto label_8030D204;
    case 0x8030D208u: goto label_8030D208;
    case 0x8030D20Cu: goto label_8030D20C;
    case 0x8030D210u: goto label_8030D210;
    case 0x8030D214u: goto label_8030D214;
    case 0x8030D218u: goto label_8030D218;
    case 0x8030D21Cu: goto label_8030D21C;
    case 0x8030D220u: goto label_8030D220;
    case 0x8030D224u: goto label_8030D224;
    case 0x8030D228u: goto label_8030D228;
    case 0x8030D22Cu: goto label_8030D22C;
    case 0x8030D230u: goto label_8030D230;
    case 0x8030D234u: goto label_8030D234;
    case 0x8030D238u: goto label_8030D238;
    case 0x8030D23Cu: goto label_8030D23C;
    case 0x8030D240u: goto label_8030D240;
    case 0x8030D244u: goto label_8030D244;
    case 0x8030D248u: goto label_8030D248;
    case 0x8030D24Cu: goto label_8030D24C;
    case 0x8030D250u: goto label_8030D250;
    case 0x8030D254u: goto label_8030D254;
    case 0x8030D258u: goto label_8030D258;
    case 0x8030D25Cu: goto label_8030D25C;
    case 0x8030D260u: goto label_8030D260;
    case 0x8030D264u: goto label_8030D264;
    case 0x8030D268u: goto label_8030D268;
    case 0x8030D26Cu: goto label_8030D26C;
    case 0x8030D270u: goto label_8030D270;
    case 0x8030D274u: goto label_8030D274;
    case 0x8030D278u: goto label_8030D278;
    case 0x8030D27Cu: goto label_8030D27C;
    case 0x8030D280u: goto label_8030D280;
    case 0x8030D284u: goto label_8030D284;
    case 0x8030D288u: goto label_8030D288;
    case 0x8030D28Cu: goto label_8030D28C;
    case 0x8030D290u: goto label_8030D290;
    case 0x8030D294u: goto label_8030D294;
    case 0x8030D298u: goto label_8030D298;
    case 0x8030D29Cu: goto label_8030D29C;
    case 0x8030D2A0u: goto label_8030D2A0;
    case 0x8030D2A4u: goto label_8030D2A4;
    case 0x8030D2A8u: goto label_8030D2A8;
    case 0x8030D2ACu: goto label_8030D2AC;
    case 0x8030D2B0u: goto label_8030D2B0;
    case 0x8030D2B4u: goto label_8030D2B4;
    case 0x8030D2B8u: goto label_8030D2B8;
    case 0x8030D2BCu: goto label_8030D2BC;
    case 0x8030D2C0u: goto label_8030D2C0;
    case 0x8030D2C4u: goto label_8030D2C4;
    case 0x8030D2C8u: goto label_8030D2C8;
    case 0x8030D2CCu: goto label_8030D2CC;
    case 0x8030D2D0u: goto label_8030D2D0;
    case 0x8030D2D4u: goto label_8030D2D4;
    case 0x8030D2D8u: goto label_8030D2D8;
    case 0x8030D2DCu: goto label_8030D2DC;
    case 0x8030D2E0u: goto label_8030D2E0;
    case 0x8030D2E4u: goto label_8030D2E4;
    case 0x8030D2E8u: goto label_8030D2E8;
    case 0x8030D2ECu: goto label_8030D2EC;
    case 0x8030D2F0u: goto label_8030D2F0;
    case 0x8030D2F4u: goto label_8030D2F4;
    case 0x8030D2F8u: goto label_8030D2F8;
    case 0x8030D2FCu: goto label_8030D2FC;
    case 0x8030D300u: goto label_8030D300;
    case 0x8030D304u: goto label_8030D304;
    case 0x8030D308u: goto label_8030D308;
    case 0x8030D30Cu: goto label_8030D30C;
    case 0x8030D310u: goto label_8030D310;
    case 0x8030D314u: goto label_8030D314;
    case 0x8030D318u: goto label_8030D318;
    case 0x8030D31Cu: goto label_8030D31C;
    case 0x8030D320u: goto label_8030D320;
    case 0x8030D324u: goto label_8030D324;
    case 0x8030D328u: goto label_8030D328;
    case 0x8030D32Cu: goto label_8030D32C;
    case 0x8030D330u: goto label_8030D330;
    case 0x8030D334u: goto label_8030D334;
    case 0x8030D338u: goto label_8030D338;
    case 0x8030D33Cu: goto label_8030D33C;
    case 0x8030D340u: goto label_8030D340;
    case 0x8030D344u: goto label_8030D344;
    case 0x8030D348u: goto label_8030D348;
    case 0x8030D34Cu: goto label_8030D34C;
    case 0x8030D350u: goto label_8030D350;
    case 0x8030D354u: goto label_8030D354;
    case 0x8030D358u: goto label_8030D358;
    case 0x8030D35Cu: goto label_8030D35C;
    case 0x8030D360u: goto label_8030D360;
    case 0x8030D364u: goto label_8030D364;
    case 0x8030D368u: goto label_8030D368;
    case 0x8030D36Cu: goto label_8030D36C;
    case 0x8030D370u: goto label_8030D370;
    case 0x8030D374u: goto label_8030D374;
    case 0x8030D378u: goto label_8030D378;
    case 0x8030D37Cu: goto label_8030D37C;
    case 0x8030D380u: goto label_8030D380;
    case 0x8030D384u: goto label_8030D384;
    case 0x8030D388u: goto label_8030D388;
    case 0x8030D38Cu: goto label_8030D38C;
    case 0x8030D390u: goto label_8030D390;
    case 0x8030D394u: goto label_8030D394;
    case 0x8030D398u: goto label_8030D398;
    case 0x8030D39Cu: goto label_8030D39C;
    case 0x8030D3A0u: goto label_8030D3A0;
    case 0x8030D3A4u: goto label_8030D3A4;
    case 0x8030D3A8u: goto label_8030D3A8;
    case 0x8030D3ACu: goto label_8030D3AC;
    case 0x8030D3B0u: goto label_8030D3B0;
    case 0x8030D3B4u: goto label_8030D3B4;
    case 0x8030D3B8u: goto label_8030D3B8;
    case 0x8030D3BCu: goto label_8030D3BC;
    case 0x8030D3C0u: goto label_8030D3C0;
    case 0x8030D3C4u: goto label_8030D3C4;
    case 0x8030D3C8u: goto label_8030D3C8;
    case 0x8030D3CCu: goto label_8030D3CC;
    case 0x8030D3D0u: goto label_8030D3D0;
    case 0x8030D3D4u: goto label_8030D3D4;
    case 0x8030D3D8u: goto label_8030D3D8;
    case 0x8030D3DCu: goto label_8030D3DC;
    case 0x8030D3E0u: goto label_8030D3E0;
    case 0x8030D3E4u: goto label_8030D3E4;
    case 0x8030D3E8u: goto label_8030D3E8;
    case 0x8030D3ECu: goto label_8030D3EC;
    case 0x8030D3F0u: goto label_8030D3F0;
    case 0x8030D3F4u: goto label_8030D3F4;
    case 0x8030D3F8u: goto label_8030D3F8;
    case 0x8030D3FCu: goto label_8030D3FC;
    case 0x8030D400u: goto label_8030D400;
    case 0x8030D404u: goto label_8030D404;
    case 0x8030D408u: goto label_8030D408;
    case 0x8030D40Cu: goto label_8030D40C;
    case 0x8030D410u: goto label_8030D410;
    case 0x8030D414u: goto label_8030D414;
    case 0x8030D418u: goto label_8030D418;
    case 0x8030D41Cu: goto label_8030D41C;
    case 0x8030D420u: goto label_8030D420;
    case 0x8030D424u: goto label_8030D424;
    case 0x8030D428u: goto label_8030D428;
    case 0x8030D42Cu: goto label_8030D42C;
    case 0x8030D430u: goto label_8030D430;
    case 0x8030D434u: goto label_8030D434;
    case 0x8030D438u: goto label_8030D438;
    case 0x8030D43Cu: goto label_8030D43C;
    case 0x8030D440u: goto label_8030D440;
    case 0x8030D444u: goto label_8030D444;
    case 0x8030D448u: goto label_8030D448;
    case 0x8030D44Cu: goto label_8030D44C;
    case 0x8030D450u: goto label_8030D450;
    case 0x8030D454u: goto label_8030D454;
    case 0x8030D458u: goto label_8030D458;
    case 0x8030D45Cu: goto label_8030D45C;
    case 0x8030D460u: goto label_8030D460;
    case 0x8030D464u: goto label_8030D464;
    case 0x8030D468u: goto label_8030D468;
    case 0x8030D46Cu: goto label_8030D46C;
    case 0x8030D470u: goto label_8030D470;
    case 0x8030D474u: goto label_8030D474;
    case 0x8030D478u: goto label_8030D478;
    case 0x8030D47Cu: goto label_8030D47C;
    case 0x8030D480u: goto label_8030D480;
    case 0x8030D484u: goto label_8030D484;
    case 0x8030D488u: goto label_8030D488;
    case 0x8030D48Cu: goto label_8030D48C;
    case 0x8030D490u: goto label_8030D490;
    case 0x8030D494u: goto label_8030D494;
    case 0x8030D498u: goto label_8030D498;
    case 0x8030D49Cu: goto label_8030D49C;
    case 0x8030D4A0u: goto label_8030D4A0;
    case 0x8030D4A4u: goto label_8030D4A4;
    case 0x8030D4A8u: goto label_8030D4A8;
    case 0x8030D4ACu: goto label_8030D4AC;
    case 0x8030D4B0u: goto label_8030D4B0;
    case 0x8030D4B4u: goto label_8030D4B4;
    case 0x8030D4B8u: goto label_8030D4B8;
    case 0x8030D4BCu: goto label_8030D4BC;
    case 0x8030D4C0u: goto label_8030D4C0;
    case 0x8030D4C4u: goto label_8030D4C4;
    case 0x8030D4C8u: goto label_8030D4C8;
    case 0x8030D4CCu: goto label_8030D4CC;
    case 0x8030D4D0u: goto label_8030D4D0;
    case 0x8030D4D4u: goto label_8030D4D4;
    case 0x8030D4D8u: goto label_8030D4D8;
    case 0x8030D4DCu: goto label_8030D4DC;
    case 0x8030D4E0u: goto label_8030D4E0;
    case 0x8030D4E4u: goto label_8030D4E4;
    case 0x8030D4E8u: goto label_8030D4E8;
    case 0x8030D4ECu: goto label_8030D4EC;
    case 0x8030D4F0u: goto label_8030D4F0;
    case 0x8030D4F4u: goto label_8030D4F4;
    case 0x8030D4F8u: goto label_8030D4F8;
    case 0x8030D4FCu: goto label_8030D4FC;
    case 0x8030D500u: goto label_8030D500;
    case 0x8030D504u: goto label_8030D504;
    case 0x8030D508u: goto label_8030D508;
    case 0x8030D50Cu: goto label_8030D50C;
    case 0x8030D510u: goto label_8030D510;
    case 0x8030D514u: goto label_8030D514;
    case 0x8030D518u: goto label_8030D518;
    case 0x8030D51Cu: goto label_8030D51C;
    case 0x8030D520u: goto label_8030D520;
    case 0x8030D524u: goto label_8030D524;
    case 0x8030D528u: goto label_8030D528;
    case 0x8030D52Cu: goto label_8030D52C;
    case 0x8030D530u: goto label_8030D530;
    case 0x8030D534u: goto label_8030D534;
    case 0x8030D538u: goto label_8030D538;
    case 0x8030D53Cu: goto label_8030D53C;
    case 0x8030D540u: goto label_8030D540;
    case 0x8030D544u: goto label_8030D544;
    case 0x8030D548u: goto label_8030D548;
    case 0x8030D54Cu: goto label_8030D54C;
    case 0x8030D550u: goto label_8030D550;
    case 0x8030D554u: goto label_8030D554;
    case 0x8030D558u: goto label_8030D558;
    case 0x8030D55Cu: goto label_8030D55C;
    case 0x8030D560u: goto label_8030D560;
    case 0x8030D564u: goto label_8030D564;
    case 0x8030D568u: goto label_8030D568;
    case 0x8030D56Cu: goto label_8030D56C;
    case 0x8030D570u: goto label_8030D570;
    case 0x8030D574u: goto label_8030D574;
    case 0x8030D578u: goto label_8030D578;
    case 0x8030D57Cu: goto label_8030D57C;
    case 0x8030D580u: goto label_8030D580;
    case 0x8030D584u: goto label_8030D584;
    case 0x8030D588u: goto label_8030D588;
    case 0x8030D58Cu: goto label_8030D58C;
    case 0x8030D590u: goto label_8030D590;
    case 0x8030D594u: goto label_8030D594;
    case 0x8030D598u: goto label_8030D598;
    case 0x8030D59Cu: goto label_8030D59C;
    case 0x8030D5A0u: goto label_8030D5A0;
    case 0x8030D5A4u: goto label_8030D5A4;
    case 0x8030D5A8u: goto label_8030D5A8;
    case 0x8030D5ACu: goto label_8030D5AC;
    case 0x8030D5B0u: goto label_8030D5B0;
    case 0x8030D5B4u: goto label_8030D5B4;
    case 0x8030D5B8u: goto label_8030D5B8;
    case 0x8030D5BCu: goto label_8030D5BC;
    case 0x8030D5C0u: goto label_8030D5C0;
    case 0x8030D5C4u: goto label_8030D5C4;
    case 0x8030D5C8u: goto label_8030D5C8;
    case 0x8030D5CCu: goto label_8030D5CC;
    case 0x8030D5D0u: goto label_8030D5D0;
    case 0x8030D5D4u: goto label_8030D5D4;
    case 0x8030D5D8u: goto label_8030D5D8;
    case 0x8030D5DCu: goto label_8030D5DC;
    case 0x8030D5E0u: goto label_8030D5E0;
    case 0x8030D5E4u: goto label_8030D5E4;
    case 0x8030D5E8u: goto label_8030D5E8;
    case 0x8030D5ECu: goto label_8030D5EC;
    case 0x8030D5F0u: goto label_8030D5F0;
    case 0x8030D5F4u: goto label_8030D5F4;
    case 0x8030D5F8u: goto label_8030D5F8;
    case 0x8030D5FCu: goto label_8030D5FC;
    case 0x8030D600u: goto label_8030D600;
    case 0x8030D604u: goto label_8030D604;
    case 0x8030D608u: goto label_8030D608;
    case 0x8030D60Cu: goto label_8030D60C;
    case 0x8030D610u: goto label_8030D610;
    case 0x8030D614u: goto label_8030D614;
    case 0x8030D618u: goto label_8030D618;
    case 0x8030D61Cu: goto label_8030D61C;
    case 0x8030D620u: goto label_8030D620;
    case 0x8030D624u: goto label_8030D624;
    case 0x8030D628u: goto label_8030D628;
    case 0x8030D62Cu: goto label_8030D62C;
    case 0x8030D630u: goto label_8030D630;
    case 0x8030D634u: goto label_8030D634;
    case 0x8030D638u: goto label_8030D638;
    case 0x8030D63Cu: goto label_8030D63C;
    case 0x8030D640u: goto label_8030D640;
    case 0x8030D644u: goto label_8030D644;
    case 0x8030D648u: goto label_8030D648;
    case 0x8030D64Cu: goto label_8030D64C;
    case 0x8030D650u: goto label_8030D650;
    case 0x8030D654u: goto label_8030D654;
    case 0x8030D658u: goto label_8030D658;
    case 0x8030D65Cu: goto label_8030D65C;
    case 0x8030D660u: goto label_8030D660;
    case 0x8030D664u: goto label_8030D664;
    case 0x8030D668u: goto label_8030D668;
    case 0x8030D66Cu: goto label_8030D66C;
    case 0x8030D670u: goto label_8030D670;
    case 0x8030D674u: goto label_8030D674;
    case 0x8030D678u: goto label_8030D678;
    case 0x8030D67Cu: goto label_8030D67C;
    case 0x8030D680u: goto label_8030D680;
    case 0x8030D684u: goto label_8030D684;
    case 0x8030D688u: goto label_8030D688;
    case 0x8030D68Cu: goto label_8030D68C;
    case 0x8030D690u: goto label_8030D690;
    case 0x8030D694u: goto label_8030D694;
    case 0x8030D698u: goto label_8030D698;
    case 0x8030D69Cu: goto label_8030D69C;
    case 0x8030D6A0u: goto label_8030D6A0;
    case 0x8030D6A4u: goto label_8030D6A4;
    case 0x8030D6A8u: goto label_8030D6A8;
    case 0x8030D6ACu: goto label_8030D6AC;
    case 0x8030D6B0u: goto label_8030D6B0;
    case 0x8030D6B4u: goto label_8030D6B4;
    case 0x8030D6B8u: goto label_8030D6B8;
    case 0x8030D6BCu: goto label_8030D6BC;
    case 0x8030D6C0u: goto label_8030D6C0;
    case 0x8030D6C4u: goto label_8030D6C4;
    case 0x8030D6C8u: goto label_8030D6C8;
    case 0x8030D6CCu: goto label_8030D6CC;
    case 0x8030D6D0u: goto label_8030D6D0;
    case 0x8030D6D4u: goto label_8030D6D4;
    case 0x8030D6D8u: goto label_8030D6D8;
    case 0x8030D6DCu: goto label_8030D6DC;
    case 0x8030D6E0u: goto label_8030D6E0;
    case 0x8030D6E4u: goto label_8030D6E4;
    case 0x8030D6E8u: goto label_8030D6E8;
    case 0x8030D6ECu: goto label_8030D6EC;
    case 0x8030D6F0u: goto label_8030D6F0;
    case 0x8030D6F4u: goto label_8030D6F4;
    case 0x8030D6F8u: goto label_8030D6F8;
    case 0x8030D6FCu: goto label_8030D6FC;
    case 0x8030D700u: goto label_8030D700;
    case 0x8030D704u: goto label_8030D704;
    case 0x8030D708u: goto label_8030D708;
    case 0x8030D70Cu: goto label_8030D70C;
    case 0x8030D710u: goto label_8030D710;
    case 0x8030D714u: goto label_8030D714;
    case 0x8030D718u: goto label_8030D718;
    case 0x8030D71Cu: goto label_8030D71C;
    case 0x8030D720u: goto label_8030D720;
    case 0x8030D724u: goto label_8030D724;
    case 0x8030D728u: goto label_8030D728;
    case 0x8030D72Cu: goto label_8030D72C;
    case 0x8030D730u: goto label_8030D730;
    case 0x8030D734u: goto label_8030D734;
    case 0x8030D738u: goto label_8030D738;
    case 0x8030D73Cu: goto label_8030D73C;
    case 0x8030D740u: goto label_8030D740;
    case 0x8030D744u: goto label_8030D744;
    case 0x8030D748u: goto label_8030D748;
    case 0x8030D74Cu: goto label_8030D74C;
    case 0x8030D750u: goto label_8030D750;
    case 0x8030D754u: goto label_8030D754;
    case 0x8030D758u: goto label_8030D758;
    case 0x8030D75Cu: goto label_8030D75C;
    case 0x8030D760u: goto label_8030D760;
    case 0x8030D764u: goto label_8030D764;
    case 0x8030D768u: goto label_8030D768;
    case 0x8030D76Cu: goto label_8030D76C;
    case 0x8030D770u: goto label_8030D770;
    case 0x8030D774u: goto label_8030D774;
    case 0x8030D778u: goto label_8030D778;
    case 0x8030D77Cu: goto label_8030D77C;
    case 0x8030D780u: goto label_8030D780;
    case 0x8030D784u: goto label_8030D784;
    case 0x8030D788u: goto label_8030D788;
    case 0x8030D78Cu: goto label_8030D78C;
    case 0x8030D790u: goto label_8030D790;
    case 0x8030D794u: goto label_8030D794;
    case 0x8030D798u: goto label_8030D798;
    case 0x8030D79Cu: goto label_8030D79C;
    case 0x8030D7A0u: goto label_8030D7A0;
    case 0x8030D7A4u: goto label_8030D7A4;
    case 0x8030D7A8u: goto label_8030D7A8;
    case 0x8030D7ACu: goto label_8030D7AC;
    case 0x8030D7B0u: goto label_8030D7B0;
    case 0x8030D7B4u: goto label_8030D7B4;
    case 0x8030D7B8u: goto label_8030D7B8;
    case 0x8030D7BCu: goto label_8030D7BC;
    case 0x8030D7C0u: goto label_8030D7C0;
    case 0x8030D7C4u: goto label_8030D7C4;
    case 0x8030D7C8u: goto label_8030D7C8;
    case 0x8030D7CCu: goto label_8030D7CC;
    case 0x8030D7D0u: goto label_8030D7D0;
    case 0x8030D7D4u: goto label_8030D7D4;
    case 0x8030D7D8u: goto label_8030D7D8;
    case 0x8030D7DCu: goto label_8030D7DC;
    case 0x8030D7E0u: goto label_8030D7E0;
    case 0x8030D7E4u: goto label_8030D7E4;
    case 0x8030D7E8u: goto label_8030D7E8;
    case 0x8030D7ECu: goto label_8030D7EC;
    case 0x8030D7F0u: goto label_8030D7F0;
    case 0x8030D7F4u: goto label_8030D7F4;
    case 0x8030D7F8u: goto label_8030D7F8;
    case 0x8030D7FCu: goto label_8030D7FC;
    case 0x8030D800u: goto label_8030D800;
    case 0x8030D804u: goto label_8030D804;
    case 0x8030D808u: goto label_8030D808;
    case 0x8030D80Cu: goto label_8030D80C;
    case 0x8030D810u: goto label_8030D810;
    case 0x8030D814u: goto label_8030D814;
    case 0x8030D818u: goto label_8030D818;
    case 0x8030D81Cu: goto label_8030D81C;
    case 0x8030D820u: goto label_8030D820;
    case 0x8030D824u: goto label_8030D824;
    case 0x8030D828u: goto label_8030D828;
    case 0x8030D82Cu: goto label_8030D82C;
    case 0x8030D830u: goto label_8030D830;
    case 0x8030D834u: goto label_8030D834;
    case 0x8030D838u: goto label_8030D838;
    case 0x8030D83Cu: goto label_8030D83C;
    case 0x8030D840u: goto label_8030D840;
    case 0x8030D844u: goto label_8030D844;
    case 0x8030D848u: goto label_8030D848;
    case 0x8030D84Cu: goto label_8030D84C;
    case 0x8030D850u: goto label_8030D850;
    case 0x8030D854u: goto label_8030D854;
    case 0x8030D858u: goto label_8030D858;
    case 0x8030D85Cu: goto label_8030D85C;
    case 0x8030D860u: goto label_8030D860;
    case 0x8030D864u: goto label_8030D864;
    case 0x8030D868u: goto label_8030D868;
    case 0x8030D86Cu: goto label_8030D86C;
    case 0x8030D870u: goto label_8030D870;
    case 0x8030D874u: goto label_8030D874;
    case 0x8030D878u: goto label_8030D878;
    case 0x8030D87Cu: goto label_8030D87C;
    case 0x8030D880u: goto label_8030D880;
    case 0x8030D884u: goto label_8030D884;
    case 0x8030D888u: goto label_8030D888;
    case 0x8030D88Cu: goto label_8030D88C;
    case 0x8030D890u: goto label_8030D890;
    case 0x8030D894u: goto label_8030D894;
    case 0x8030D898u: goto label_8030D898;
    case 0x8030D89Cu: goto label_8030D89C;
    case 0x8030D8A0u: goto label_8030D8A0;
    case 0x8030D8A4u: goto label_8030D8A4;
    case 0x8030D8A8u: goto label_8030D8A8;
    case 0x8030D8ACu: goto label_8030D8AC;
    case 0x8030D8B0u: goto label_8030D8B0;
    case 0x8030D8B4u: goto label_8030D8B4;
    case 0x8030D8B8u: goto label_8030D8B8;
    case 0x8030D8BCu: goto label_8030D8BC;
    case 0x8030D8C0u: goto label_8030D8C0;
    case 0x8030D8C4u: goto label_8030D8C4;
    case 0x8030D8C8u: goto label_8030D8C8;
    case 0x8030D8CCu: goto label_8030D8CC;
    case 0x8030D8D0u: goto label_8030D8D0;
    case 0x8030D8D4u: goto label_8030D8D4;
    case 0x8030D8D8u: goto label_8030D8D8;
    case 0x8030D8DCu: goto label_8030D8DC;
    case 0x8030D8E0u: goto label_8030D8E0;
    case 0x8030D8E4u: goto label_8030D8E4;
    case 0x8030D8E8u: goto label_8030D8E8;
    case 0x8030D8ECu: goto label_8030D8EC;
    case 0x8030D8F0u: goto label_8030D8F0;
    case 0x8030D8F4u: goto label_8030D8F4;
    case 0x8030D8F8u: goto label_8030D8F8;
    case 0x8030D8FCu: goto label_8030D8FC;
    case 0x8030D900u: goto label_8030D900;
    case 0x8030D904u: goto label_8030D904;
    case 0x8030D908u: goto label_8030D908;
    case 0x8030D90Cu: goto label_8030D90C;
    case 0x8030D910u: goto label_8030D910;
    case 0x8030D914u: goto label_8030D914;
    case 0x8030D918u: goto label_8030D918;
    case 0x8030D91Cu: goto label_8030D91C;
    case 0x8030D920u: goto label_8030D920;
    case 0x8030D924u: goto label_8030D924;
    case 0x8030D928u: goto label_8030D928;
    case 0x8030D92Cu: goto label_8030D92C;
    case 0x8030D930u: goto label_8030D930;
    case 0x8030D934u: goto label_8030D934;
    case 0x8030D938u: goto label_8030D938;
    case 0x8030D93Cu: goto label_8030D93C;
    case 0x8030D940u: goto label_8030D940;
    case 0x8030D944u: goto label_8030D944;
    case 0x8030D948u: goto label_8030D948;
    case 0x8030D94Cu: goto label_8030D94C;
    case 0x8030D950u: goto label_8030D950;
    case 0x8030D954u: goto label_8030D954;
    case 0x8030D958u: goto label_8030D958;
    case 0x8030D95Cu: goto label_8030D95C;
    case 0x8030D960u: goto label_8030D960;
    case 0x8030D964u: goto label_8030D964;
    case 0x8030D968u: goto label_8030D968;
    case 0x8030D96Cu: goto label_8030D96C;
    case 0x8030D970u: goto label_8030D970;
    case 0x8030D974u: goto label_8030D974;
    case 0x8030D978u: goto label_8030D978;
    case 0x8030D97Cu: goto label_8030D97C;
    case 0x8030D980u: goto label_8030D980;
    case 0x8030D984u: goto label_8030D984;
    case 0x8030D988u: goto label_8030D988;
    case 0x8030D98Cu: goto label_8030D98C;
    case 0x8030D990u: goto label_8030D990;
    case 0x8030D994u: goto label_8030D994;
    case 0x8030D998u: goto label_8030D998;
    case 0x8030D99Cu: goto label_8030D99C;
    case 0x8030D9A0u: goto label_8030D9A0;
    case 0x8030D9A4u: goto label_8030D9A4;
    case 0x8030D9A8u: goto label_8030D9A8;
    case 0x8030D9ACu: goto label_8030D9AC;
    case 0x8030D9B0u: goto label_8030D9B0;
    case 0x8030D9B4u: goto label_8030D9B4;
    case 0x8030D9B8u: goto label_8030D9B8;
    case 0x8030D9BCu: goto label_8030D9BC;
    case 0x8030D9C0u: goto label_8030D9C0;
    case 0x8030D9C4u: goto label_8030D9C4;
    case 0x8030D9C8u: goto label_8030D9C8;
    case 0x8030D9CCu: goto label_8030D9CC;
    case 0x8030D9D0u: goto label_8030D9D0;
    case 0x8030D9D4u: goto label_8030D9D4;
    case 0x8030D9D8u: goto label_8030D9D8;
    case 0x8030D9DCu: goto label_8030D9DC;
    case 0x8030D9E0u: goto label_8030D9E0;
    case 0x8030D9E4u: goto label_8030D9E4;
    case 0x8030D9E8u: goto label_8030D9E8;
    case 0x8030D9ECu: goto label_8030D9EC;
    case 0x8030D9F0u: goto label_8030D9F0;
    case 0x8030D9F4u: goto label_8030D9F4;
    case 0x8030D9F8u: goto label_8030D9F8;
    case 0x8030D9FCu: goto label_8030D9FC;
    case 0x8030DA00u: goto label_8030DA00;
    case 0x8030DA04u: goto label_8030DA04;
    case 0x8030DA08u: goto label_8030DA08;
    case 0x8030DA0Cu: goto label_8030DA0C;
    case 0x8030DA10u: goto label_8030DA10;
    case 0x8030DA14u: goto label_8030DA14;
    case 0x8030DA18u: goto label_8030DA18;
    case 0x8030DA1Cu: goto label_8030DA1C;
    case 0x8030DA20u: goto label_8030DA20;
    case 0x8030DA24u: goto label_8030DA24;
    case 0x8030DA28u: goto label_8030DA28;
    case 0x8030DA2Cu: goto label_8030DA2C;
    case 0x8030DA30u: goto label_8030DA30;
    case 0x8030DA34u: goto label_8030DA34;
    case 0x8030DA38u: goto label_8030DA38;
    case 0x8030DA3Cu: goto label_8030DA3C;
    case 0x8030DA40u: goto label_8030DA40;
    case 0x8030DA44u: goto label_8030DA44;
    case 0x8030DA48u: goto label_8030DA48;
    case 0x8030DA4Cu: goto label_8030DA4C;
    case 0x8030DA50u: goto label_8030DA50;
    case 0x8030DA54u: goto label_8030DA54;
    case 0x8030DA58u: goto label_8030DA58;
    case 0x8030DA5Cu: goto label_8030DA5C;
    case 0x8030DA60u: goto label_8030DA60;
    case 0x8030DA64u: goto label_8030DA64;
    case 0x8030DA68u: goto label_8030DA68;
    case 0x8030DA6Cu: goto label_8030DA6C;
    case 0x8030DA70u: goto label_8030DA70;
    case 0x8030DA74u: goto label_8030DA74;
    case 0x8030DA78u: goto label_8030DA78;
    case 0x8030DA7Cu: goto label_8030DA7C;
    case 0x8030DA80u: goto label_8030DA80;
    case 0x8030DA84u: goto label_8030DA84;
    case 0x8030DA88u: goto label_8030DA88;
    case 0x8030DA8Cu: goto label_8030DA8C;
    case 0x8030DA90u: goto label_8030DA90;
    case 0x8030DA94u: goto label_8030DA94;
    case 0x8030DA98u: goto label_8030DA98;
    case 0x8030DA9Cu: goto label_8030DA9C;
    case 0x8030DAA0u: goto label_8030DAA0;
    case 0x8030DAA4u: goto label_8030DAA4;
    case 0x8030DAA8u: goto label_8030DAA8;
    case 0x8030DAACu: goto label_8030DAAC;
    case 0x8030DAB0u: goto label_8030DAB0;
    case 0x8030DAB4u: goto label_8030DAB4;
    case 0x8030DAB8u: goto label_8030DAB8;
    case 0x8030DABCu: goto label_8030DABC;
    case 0x8030DAC0u: goto label_8030DAC0;
    case 0x8030DAC4u: goto label_8030DAC4;
    case 0x8030DAC8u: goto label_8030DAC8;
    case 0x8030DACCu: goto label_8030DACC;
    case 0x8030DAD0u: goto label_8030DAD0;
    case 0x8030DAD4u: goto label_8030DAD4;
    case 0x8030DAD8u: goto label_8030DAD8;
    case 0x8030DADCu: goto label_8030DADC;
    case 0x8030DAE0u: goto label_8030DAE0;
    case 0x8030DAE4u: goto label_8030DAE4;
    case 0x8030DAE8u: goto label_8030DAE8;
    case 0x8030DAECu: goto label_8030DAEC;
    case 0x8030DAF0u: goto label_8030DAF0;
    case 0x8030DAF4u: goto label_8030DAF4;
    case 0x8030DAF8u: goto label_8030DAF8;
    case 0x8030DAFCu: goto label_8030DAFC;
    case 0x8030DB00u: goto label_8030DB00;
    case 0x8030DB04u: goto label_8030DB04;
    case 0x8030DB08u: goto label_8030DB08;
    case 0x8030DB0Cu: goto label_8030DB0C;
    case 0x8030DB10u: goto label_8030DB10;
    case 0x8030DB14u: goto label_8030DB14;
    case 0x8030DB18u: goto label_8030DB18;
    case 0x8030DB1Cu: goto label_8030DB1C;
    case 0x8030DB20u: goto label_8030DB20;
    case 0x8030DB24u: goto label_8030DB24;
    case 0x8030DB28u: goto label_8030DB28;
    case 0x8030DB2Cu: goto label_8030DB2C;
    case 0x8030DB30u: goto label_8030DB30;
    case 0x8030DB34u: goto label_8030DB34;
    case 0x8030DB38u: goto label_8030DB38;
    case 0x8030DB3Cu: goto label_8030DB3C;
    case 0x8030DB40u: goto label_8030DB40;
    case 0x8030DB44u: goto label_8030DB44;
    case 0x8030DB48u: goto label_8030DB48;
    case 0x8030DB4Cu: goto label_8030DB4C;
    case 0x8030DB50u: goto label_8030DB50;
    case 0x8030DB54u: goto label_8030DB54;
    case 0x8030DB58u: goto label_8030DB58;
    case 0x8030DB5Cu: goto label_8030DB5C;
    case 0x8030DB60u: goto label_8030DB60;
    case 0x8030DB64u: goto label_8030DB64;
    case 0x8030DB68u: goto label_8030DB68;
    case 0x8030DB6Cu: goto label_8030DB6C;
    case 0x8030DB70u: goto label_8030DB70;
    case 0x8030DB74u: goto label_8030DB74;
    case 0x8030DB78u: goto label_8030DB78;
    case 0x8030DB7Cu: goto label_8030DB7C;
    case 0x8030DB80u: goto label_8030DB80;
    case 0x8030DB84u: goto label_8030DB84;
    case 0x8030DB88u: goto label_8030DB88;
    case 0x8030DB8Cu: goto label_8030DB8C;
    case 0x8030DB90u: goto label_8030DB90;
    case 0x8030DB94u: goto label_8030DB94;
    case 0x8030DB98u: goto label_8030DB98;
    case 0x8030DB9Cu: goto label_8030DB9C;
    case 0x8030DBA0u: goto label_8030DBA0;
    case 0x8030DBA4u: goto label_8030DBA4;
    case 0x8030DBA8u: goto label_8030DBA8;
    case 0x8030DBACu: goto label_8030DBAC;
    case 0x8030DBB0u: goto label_8030DBB0;
    case 0x8030DBB4u: goto label_8030DBB4;
    case 0x8030DBB8u: goto label_8030DBB8;
    case 0x8030DBBCu: goto label_8030DBBC;
    case 0x8030DBC0u: goto label_8030DBC0;
    case 0x8030DBC4u: goto label_8030DBC4;
    case 0x8030DBC8u: goto label_8030DBC8;
    case 0x8030DBCCu: goto label_8030DBCC;
    case 0x8030DBD0u: goto label_8030DBD0;
    case 0x8030DBD4u: goto label_8030DBD4;
    case 0x8030DBD8u: goto label_8030DBD8;
    case 0x8030DBDCu: goto label_8030DBDC;
    case 0x8030DBE0u: goto label_8030DBE0;
    case 0x8030DBE4u: goto label_8030DBE4;
    case 0x8030DBE8u: goto label_8030DBE8;
    case 0x8030DBECu: goto label_8030DBEC;
    case 0x8030DBF0u: goto label_8030DBF0;
    case 0x8030DBF4u: goto label_8030DBF4;
    case 0x8030DBF8u: goto label_8030DBF8;
    case 0x8030DBFCu: goto label_8030DBFC;
    case 0x8030DC00u: goto label_8030DC00;
    case 0x8030DC04u: goto label_8030DC04;
    case 0x8030DC08u: goto label_8030DC08;
    case 0x8030DC0Cu: goto label_8030DC0C;
    case 0x8030DC10u: goto label_8030DC10;
    case 0x8030DC14u: goto label_8030DC14;
    case 0x8030DC18u: goto label_8030DC18;
    case 0x8030DC1Cu: goto label_8030DC1C;
    case 0x8030DC20u: goto label_8030DC20;
    case 0x8030DC24u: goto label_8030DC24;
    case 0x8030DC28u: goto label_8030DC28;
    case 0x8030DC2Cu: goto label_8030DC2C;
    case 0x8030DC30u: goto label_8030DC30;
    case 0x8030DC34u: goto label_8030DC34;
    case 0x8030DC38u: goto label_8030DC38;
    case 0x8030DC3Cu: goto label_8030DC3C;
    case 0x8030DC40u: goto label_8030DC40;
    case 0x8030DC44u: goto label_8030DC44;
    case 0x8030DC48u: goto label_8030DC48;
    case 0x8030DC4Cu: goto label_8030DC4C;
    case 0x8030DC50u: goto label_8030DC50;
    case 0x8030DC54u: goto label_8030DC54;
    case 0x8030DC58u: goto label_8030DC58;
    case 0x8030DC5Cu: goto label_8030DC5C;
    case 0x8030DC60u: goto label_8030DC60;
    case 0x8030DC64u: goto label_8030DC64;
    case 0x8030DC68u: goto label_8030DC68;
    case 0x8030DC6Cu: goto label_8030DC6C;
    case 0x8030DC70u: goto label_8030DC70;
    case 0x8030DC74u: goto label_8030DC74;
    case 0x8030DC78u: goto label_8030DC78;
    case 0x8030DC7Cu: goto label_8030DC7C;
    case 0x8030DC80u: goto label_8030DC80;
    case 0x8030DC84u: goto label_8030DC84;
    case 0x8030DC88u: goto label_8030DC88;
    case 0x8030DC8Cu: goto label_8030DC8C;
    case 0x8030DC90u: goto label_8030DC90;
    case 0x8030DC94u: goto label_8030DC94;
    case 0x8030DC98u: goto label_8030DC98;
    case 0x8030DC9Cu: goto label_8030DC9C;
    case 0x8030DCA0u: goto label_8030DCA0;
    case 0x8030DCA4u: goto label_8030DCA4;
    case 0x8030DCA8u: goto label_8030DCA8;
    case 0x8030DCACu: goto label_8030DCAC;
    case 0x8030DCB0u: goto label_8030DCB0;
    case 0x8030DCB4u: goto label_8030DCB4;
    case 0x8030DCB8u: goto label_8030DCB8;
    case 0x8030DCBCu: goto label_8030DCBC;
    case 0x8030DCC0u: goto label_8030DCC0;
    case 0x8030DCC4u: goto label_8030DCC4;
    case 0x8030DCC8u: goto label_8030DCC8;
    case 0x8030DCCCu: goto label_8030DCCC;
    case 0x8030DCD0u: goto label_8030DCD0;
    case 0x8030DCD4u: goto label_8030DCD4;
    case 0x8030DCD8u: goto label_8030DCD8;
    case 0x8030DCDCu: goto label_8030DCDC;
    case 0x8030DCE0u: goto label_8030DCE0;
    case 0x8030DCE4u: goto label_8030DCE4;
    case 0x8030DCE8u: goto label_8030DCE8;
    case 0x8030DCECu: goto label_8030DCEC;
    case 0x8030DCF0u: goto label_8030DCF0;
    case 0x8030DCF4u: goto label_8030DCF4;
    case 0x8030DCF8u: goto label_8030DCF8;
    case 0x8030DCFCu: goto label_8030DCFC;
    case 0x8030DD00u: goto label_8030DD00;
    case 0x8030DD04u: goto label_8030DD04;
    case 0x8030DD08u: goto label_8030DD08;
    case 0x8030DD0Cu: goto label_8030DD0C;
    case 0x8030DD10u: goto label_8030DD10;
    case 0x8030DD14u: goto label_8030DD14;
    case 0x8030DD18u: goto label_8030DD18;
    case 0x8030DD1Cu: goto label_8030DD1C;
    case 0x8030DD20u: goto label_8030DD20;
    case 0x8030DD24u: goto label_8030DD24;
    case 0x8030DD28u: goto label_8030DD28;
    case 0x8030DD2Cu: goto label_8030DD2C;
    case 0x8030DD30u: goto label_8030DD30;
    case 0x8030DD34u: goto label_8030DD34;
    case 0x8030DD38u: goto label_8030DD38;
    case 0x8030DD3Cu: goto label_8030DD3C;
    case 0x8030DD40u: goto label_8030DD40;
    case 0x8030DD44u: goto label_8030DD44;
    case 0x8030DD48u: goto label_8030DD48;
    case 0x8030DD4Cu: goto label_8030DD4C;
    case 0x8030DD50u: goto label_8030DD50;
    case 0x8030DD54u: goto label_8030DD54;
    case 0x8030DD58u: goto label_8030DD58;
    case 0x8030DD5Cu: goto label_8030DD5C;
    case 0x8030DD60u: goto label_8030DD60;
    case 0x8030DD64u: goto label_8030DD64;
    case 0x8030DD68u: goto label_8030DD68;
    case 0x8030DD6Cu: goto label_8030DD6C;
    case 0x8030DD70u: goto label_8030DD70;
    case 0x8030DD74u: goto label_8030DD74;
    case 0x8030DD78u: goto label_8030DD78;
    case 0x8030DD7Cu: goto label_8030DD7C;
    case 0x8030DD80u: goto label_8030DD80;
    case 0x8030DD84u: goto label_8030DD84;
    case 0x8030DD88u: goto label_8030DD88;
    case 0x8030DD8Cu: goto label_8030DD8C;
    case 0x8030DD90u: goto label_8030DD90;
    case 0x8030DD94u: goto label_8030DD94;
    case 0x8030DD98u: goto label_8030DD98;
    case 0x8030DD9Cu: goto label_8030DD9C;
    case 0x8030DDA0u: goto label_8030DDA0;
    case 0x8030DDA4u: goto label_8030DDA4;
    case 0x8030DDA8u: goto label_8030DDA8;
    case 0x8030DDACu: goto label_8030DDAC;
    case 0x8030DDB0u: goto label_8030DDB0;
    case 0x8030DDB4u: goto label_8030DDB4;
    case 0x8030DDB8u: goto label_8030DDB8;
    case 0x8030DDBCu: goto label_8030DDBC;
    case 0x8030DDC0u: goto label_8030DDC0;
    case 0x8030DDC4u: goto label_8030DDC4;
    case 0x8030DDC8u: goto label_8030DDC8;
    case 0x8030DDCCu: goto label_8030DDCC;
    case 0x8030DDD0u: goto label_8030DDD0;
    case 0x8030DDD4u: goto label_8030DDD4;
    case 0x8030DDD8u: goto label_8030DDD8;
    case 0x8030DDDCu: goto label_8030DDDC;
    case 0x8030DDE0u: goto label_8030DDE0;
    case 0x8030DDE4u: goto label_8030DDE4;
    case 0x8030DDE8u: goto label_8030DDE8;
    case 0x8030DDECu: goto label_8030DDEC;
    case 0x8030DDF0u: goto label_8030DDF0;
    case 0x8030DDF4u: goto label_8030DDF4;
    case 0x8030DDF8u: goto label_8030DDF8;
    case 0x8030DDFCu: goto label_8030DDFC;
    case 0x8030DE00u: goto label_8030DE00;
    case 0x8030DE04u: goto label_8030DE04;
    case 0x8030DE08u: goto label_8030DE08;
    case 0x8030DE0Cu: goto label_8030DE0C;
    case 0x8030DE10u: goto label_8030DE10;
    case 0x8030DE14u: goto label_8030DE14;
    case 0x8030DE18u: goto label_8030DE18;
    case 0x8030DE1Cu: goto label_8030DE1C;
    case 0x8030DE20u: goto label_8030DE20;
    case 0x8030DE24u: goto label_8030DE24;
    case 0x8030DE28u: goto label_8030DE28;
    case 0x8030DE2Cu: goto label_8030DE2C;
    case 0x8030DE30u: goto label_8030DE30;
    case 0x8030DE34u: goto label_8030DE34;
    case 0x8030DE38u: goto label_8030DE38;
    case 0x8030DE3Cu: goto label_8030DE3C;
    case 0x8030DE40u: goto label_8030DE40;
    case 0x8030DE44u: goto label_8030DE44;
    case 0x8030DE48u: goto label_8030DE48;
    case 0x8030DE4Cu: goto label_8030DE4C;
    case 0x8030DE50u: goto label_8030DE50;
    case 0x8030DE54u: goto label_8030DE54;
    case 0x8030DE58u: goto label_8030DE58;
    case 0x8030DE5Cu: goto label_8030DE5C;
    case 0x8030DE60u: goto label_8030DE60;
    case 0x8030DE64u: goto label_8030DE64;
    case 0x8030DE68u: goto label_8030DE68;
    case 0x8030DE6Cu: goto label_8030DE6C;
    case 0x8030DE70u: goto label_8030DE70;
    case 0x8030DE74u: goto label_8030DE74;
    case 0x8030DE78u: goto label_8030DE78;
    case 0x8030DE7Cu: goto label_8030DE7C;
    case 0x8030DE80u: goto label_8030DE80;
    case 0x8030DE84u: goto label_8030DE84;
    case 0x8030DE88u: goto label_8030DE88;
    case 0x8030DE8Cu: goto label_8030DE8C;
    case 0x8030DE90u: goto label_8030DE90;
    case 0x8030DE94u: goto label_8030DE94;
    case 0x8030DE98u: goto label_8030DE98;
    case 0x8030DE9Cu: goto label_8030DE9C;
    case 0x8030DEA0u: goto label_8030DEA0;
    case 0x8030DEA4u: goto label_8030DEA4;
    case 0x8030DEA8u: goto label_8030DEA8;
    case 0x8030DEACu: goto label_8030DEAC;
    case 0x8030DEB0u: goto label_8030DEB0;
    case 0x8030DEB4u: goto label_8030DEB4;
    case 0x8030DEB8u: goto label_8030DEB8;
    case 0x8030DEBCu: goto label_8030DEBC;
    case 0x8030DEC0u: goto label_8030DEC0;
    case 0x8030DEC4u: goto label_8030DEC4;
    case 0x8030DEC8u: goto label_8030DEC8;
    case 0x8030DECCu: goto label_8030DECC;
    case 0x8030DED0u: goto label_8030DED0;
    case 0x8030DED4u: goto label_8030DED4;
    case 0x8030DED8u: goto label_8030DED8;
    case 0x8030DEDCu: goto label_8030DEDC;
    case 0x8030DEE0u: goto label_8030DEE0;
    case 0x8030DEE4u: goto label_8030DEE4;
    case 0x8030DEE8u: goto label_8030DEE8;
    case 0x8030DEECu: goto label_8030DEEC;
    case 0x8030DEF0u: goto label_8030DEF0;
    case 0x8030DEF4u: goto label_8030DEF4;
    case 0x8030DEF8u: goto label_8030DEF8;
    case 0x8030DEFCu: goto label_8030DEFC;
    case 0x8030DF00u: goto label_8030DF00;
    case 0x8030DF04u: goto label_8030DF04;
    case 0x8030DF08u: goto label_8030DF08;
    case 0x8030DF0Cu: goto label_8030DF0C;
    case 0x8030DF10u: goto label_8030DF10;
    case 0x8030DF14u: goto label_8030DF14;
    case 0x8030DF18u: goto label_8030DF18;
    case 0x8030DF1Cu: goto label_8030DF1C;
    case 0x8030DF20u: goto label_8030DF20;
    case 0x8030DF24u: goto label_8030DF24;
    case 0x8030DF28u: goto label_8030DF28;
    case 0x8030DF2Cu: goto label_8030DF2C;
    case 0x8030DF30u: goto label_8030DF30;
    case 0x8030DF34u: goto label_8030DF34;
    case 0x8030DF38u: goto label_8030DF38;
    case 0x8030DF3Cu: goto label_8030DF3C;
    case 0x8030DF40u: goto label_8030DF40;
    case 0x8030DF44u: goto label_8030DF44;
    case 0x8030DF48u: goto label_8030DF48;
    case 0x8030DF4Cu: goto label_8030DF4C;
    case 0x8030DF50u: goto label_8030DF50;
    case 0x8030DF54u: goto label_8030DF54;
    case 0x8030DF58u: goto label_8030DF58;
    case 0x8030DF5Cu: goto label_8030DF5C;
    case 0x8030DF60u: goto label_8030DF60;
    case 0x8030DF64u: goto label_8030DF64;
    case 0x8030DF68u: goto label_8030DF68;
    case 0x8030DF6Cu: goto label_8030DF6C;
    case 0x8030DF70u: goto label_8030DF70;
    case 0x8030DF74u: goto label_8030DF74;
    case 0x8030DF78u: goto label_8030DF78;
    case 0x8030DF7Cu: goto label_8030DF7C;
    case 0x8030DF80u: goto label_8030DF80;
    case 0x8030DF84u: goto label_8030DF84;
    case 0x8030DF88u: goto label_8030DF88;
    case 0x8030DF8Cu: goto label_8030DF8C;
    case 0x8030DF90u: goto label_8030DF90;
    case 0x8030DF94u: goto label_8030DF94;
    case 0x8030DF98u: goto label_8030DF98;
    case 0x8030DF9Cu: goto label_8030DF9C;
    case 0x8030DFA0u: goto label_8030DFA0;
    case 0x8030DFA4u: goto label_8030DFA4;
    case 0x8030DFA8u: goto label_8030DFA8;
    case 0x8030DFACu: goto label_8030DFAC;
    case 0x8030DFB0u: goto label_8030DFB0;
    case 0x8030DFB4u: goto label_8030DFB4;
    case 0x8030DFB8u: goto label_8030DFB8;
    case 0x8030DFBCu: goto label_8030DFBC;
    case 0x8030DFC0u: goto label_8030DFC0;
    case 0x8030DFC4u: goto label_8030DFC4;
    case 0x8030DFC8u: goto label_8030DFC8;
    case 0x8030DFCCu: goto label_8030DFCC;
    case 0x8030DFD0u: goto label_8030DFD0;
    case 0x8030DFD4u: goto label_8030DFD4;
    case 0x8030DFD8u: goto label_8030DFD8;
    case 0x8030DFDCu: goto label_8030DFDC;
    case 0x8030DFE0u: goto label_8030DFE0;
    case 0x8030DFE4u: goto label_8030DFE4;
    case 0x8030DFE8u: goto label_8030DFE8;
    case 0x8030DFECu: goto label_8030DFEC;
    case 0x8030DFF0u: goto label_8030DFF0;
    case 0x8030DFF4u: goto label_8030DFF4;
    case 0x8030DFF8u: goto label_8030DFF8;
    case 0x8030DFFCu: goto label_8030DFFC;
    case 0x8030E000u: goto label_8030E000;
    case 0x8030E004u: goto label_8030E004;
    case 0x8030E008u: goto label_8030E008;
    case 0x8030E00Cu: goto label_8030E00C;
    case 0x8030E010u: goto label_8030E010;
    case 0x8030E014u: goto label_8030E014;
    case 0x8030E018u: goto label_8030E018;
    case 0x8030E01Cu: goto label_8030E01C;
    case 0x8030E020u: goto label_8030E020;
    case 0x8030E024u: goto label_8030E024;
    case 0x8030E028u: goto label_8030E028;
    case 0x8030E02Cu: goto label_8030E02C;
    case 0x8030E030u: goto label_8030E030;
    case 0x8030E034u: goto label_8030E034;
    case 0x8030E038u: goto label_8030E038;
    case 0x8030E03Cu: goto label_8030E03C;
    case 0x8030E040u: goto label_8030E040;
    case 0x8030E044u: goto label_8030E044;
    case 0x8030E048u: goto label_8030E048;
    case 0x8030E04Cu: goto label_8030E04C;
    case 0x8030E050u: goto label_8030E050;
    case 0x8030E054u: goto label_8030E054;
    case 0x8030E058u: goto label_8030E058;
    case 0x8030E05Cu: goto label_8030E05C;
    case 0x8030E060u: goto label_8030E060;
    case 0x8030E064u: goto label_8030E064;
    case 0x8030E068u: goto label_8030E068;
    case 0x8030E06Cu: goto label_8030E06C;
    case 0x8030E070u: goto label_8030E070;
    case 0x8030E074u: goto label_8030E074;
    case 0x8030E078u: goto label_8030E078;
    case 0x8030E07Cu: goto label_8030E07C;
    case 0x8030E080u: goto label_8030E080;
    case 0x8030E084u: goto label_8030E084;
    case 0x8030E088u: goto label_8030E088;
    case 0x8030E08Cu: goto label_8030E08C;
    case 0x8030E090u: goto label_8030E090;
    case 0x8030E094u: goto label_8030E094;
    case 0x8030E098u: goto label_8030E098;
    case 0x8030E09Cu: goto label_8030E09C;
    case 0x8030E0A0u: goto label_8030E0A0;
    case 0x8030E0A4u: goto label_8030E0A4;
    case 0x8030E0A8u: goto label_8030E0A8;
    case 0x8030E0ACu: goto label_8030E0AC;
    case 0x8030E0B0u: goto label_8030E0B0;
    case 0x8030E0B4u: goto label_8030E0B4;
    case 0x8030E0B8u: goto label_8030E0B8;
    case 0x8030E0BCu: goto label_8030E0BC;
    case 0x8030E0C0u: goto label_8030E0C0;
    case 0x8030E0C4u: goto label_8030E0C4;
    case 0x8030E0C8u: goto label_8030E0C8;
    case 0x8030E0CCu: goto label_8030E0CC;
    case 0x8030E0D0u: goto label_8030E0D0;
    case 0x8030E0D4u: goto label_8030E0D4;
    case 0x8030E0D8u: goto label_8030E0D8;
    case 0x8030E0DCu: goto label_8030E0DC;
    case 0x8030E0E0u: goto label_8030E0E0;
    case 0x8030E0E4u: goto label_8030E0E4;
    case 0x8030E0E8u: goto label_8030E0E8;
    case 0x8030E0ECu: goto label_8030E0EC;
    case 0x8030E0F0u: goto label_8030E0F0;
    case 0x8030E0F4u: goto label_8030E0F4;
    case 0x8030E0F8u: goto label_8030E0F8;
    case 0x8030E0FCu: goto label_8030E0FC;
    case 0x8030E100u: goto label_8030E100;
    case 0x8030E104u: goto label_8030E104;
    case 0x8030E108u: goto label_8030E108;
    case 0x8030E10Cu: goto label_8030E10C;
    case 0x8030E110u: goto label_8030E110;
    case 0x8030E114u: goto label_8030E114;
    case 0x8030E118u: goto label_8030E118;
    case 0x8030E11Cu: goto label_8030E11C;
    case 0x8030E120u: goto label_8030E120;
    case 0x8030E124u: goto label_8030E124;
    case 0x8030E128u: goto label_8030E128;
    case 0x8030E12Cu: goto label_8030E12C;
    case 0x8030E130u: goto label_8030E130;
    case 0x8030E134u: goto label_8030E134;
    case 0x8030E138u: goto label_8030E138;
    case 0x8030E13Cu: goto label_8030E13C;
    case 0x8030E140u: goto label_8030E140;
    case 0x8030E144u: goto label_8030E144;
    case 0x8030E148u: goto label_8030E148;
    case 0x8030E14Cu: goto label_8030E14C;
    case 0x8030E150u: goto label_8030E150;
    case 0x8030E154u: goto label_8030E154;
    case 0x8030E158u: goto label_8030E158;
    case 0x8030E15Cu: goto label_8030E15C;
    case 0x8030E160u: goto label_8030E160;
    case 0x8030E164u: goto label_8030E164;
    case 0x8030E168u: goto label_8030E168;
    case 0x8030E16Cu: goto label_8030E16C;
    case 0x8030E170u: goto label_8030E170;
    case 0x8030E174u: goto label_8030E174;
    case 0x8030E178u: goto label_8030E178;
    case 0x8030E17Cu: goto label_8030E17C;
    case 0x8030E180u: goto label_8030E180;
    case 0x8030E184u: goto label_8030E184;
    case 0x8030E188u: goto label_8030E188;
    case 0x8030E18Cu: goto label_8030E18C;
    case 0x8030E190u: goto label_8030E190;
    case 0x8030E194u: goto label_8030E194;
    case 0x8030E198u: goto label_8030E198;
    case 0x8030E19Cu: goto label_8030E19C;
    case 0x8030E1A0u: goto label_8030E1A0;
    case 0x8030E1A4u: goto label_8030E1A4;
    case 0x8030E1A8u: goto label_8030E1A8;
    case 0x8030E1ACu: goto label_8030E1AC;
    case 0x8030E1B0u: goto label_8030E1B0;
    case 0x8030E1B4u: goto label_8030E1B4;
    case 0x8030E1B8u: goto label_8030E1B8;
    case 0x8030E1BCu: goto label_8030E1BC;
    case 0x8030E1C0u: goto label_8030E1C0;
    case 0x8030E1C4u: goto label_8030E1C4;
    case 0x8030E1C8u: goto label_8030E1C8;
    case 0x8030E1CCu: goto label_8030E1CC;
    case 0x8030E1D0u: goto label_8030E1D0;
    case 0x8030E1D4u: goto label_8030E1D4;
    case 0x8030E1D8u: goto label_8030E1D8;
    case 0x8030E1DCu: goto label_8030E1DC;
    case 0x8030E1E0u: goto label_8030E1E0;
    case 0x8030E1E4u: goto label_8030E1E4;
    case 0x8030E1E8u: goto label_8030E1E8;
    case 0x8030E1ECu: goto label_8030E1EC;
    case 0x8030E1F0u: goto label_8030E1F0;
    case 0x8030E1F4u: goto label_8030E1F4;
    case 0x8030E1F8u: goto label_8030E1F8;
    case 0x8030E1FCu: goto label_8030E1FC;
    case 0x8030E200u: goto label_8030E200;
    case 0x8030E204u: goto label_8030E204;
    case 0x8030E208u: goto label_8030E208;
    case 0x8030E20Cu: goto label_8030E20C;
    case 0x8030E210u: goto label_8030E210;
    case 0x8030E214u: goto label_8030E214;
    case 0x8030E218u: goto label_8030E218;
    case 0x8030E21Cu: goto label_8030E21C;
    case 0x8030E220u: goto label_8030E220;
    case 0x8030E224u: goto label_8030E224;
    case 0x8030E228u: goto label_8030E228;
    case 0x8030E22Cu: goto label_8030E22C;
    case 0x8030E230u: goto label_8030E230;
    case 0x8030E234u: goto label_8030E234;
    case 0x8030E238u: goto label_8030E238;
    case 0x8030E23Cu: goto label_8030E23C;
    case 0x8030E240u: goto label_8030E240;
    case 0x8030E244u: goto label_8030E244;
    case 0x8030E248u: goto label_8030E248;
    case 0x8030E24Cu: goto label_8030E24C;
    case 0x8030E250u: goto label_8030E250;
    case 0x8030E254u: goto label_8030E254;
    case 0x8030E258u: goto label_8030E258;
    case 0x8030E25Cu: goto label_8030E25C;
    case 0x8030E260u: goto label_8030E260;
    case 0x8030E264u: goto label_8030E264;
    case 0x8030E268u: goto label_8030E268;
    case 0x8030E26Cu: goto label_8030E26C;
    case 0x8030E270u: goto label_8030E270;
    case 0x8030E274u: goto label_8030E274;
    case 0x8030E278u: goto label_8030E278;
    case 0x8030E27Cu: goto label_8030E27C;
    case 0x8030E280u: goto label_8030E280;
    case 0x8030E284u: goto label_8030E284;
    case 0x8030E288u: goto label_8030E288;
    case 0x8030E28Cu: goto label_8030E28C;
    case 0x8030E290u: goto label_8030E290;
    case 0x8030E294u: goto label_8030E294;
    case 0x8030E298u: goto label_8030E298;
    case 0x8030E29Cu: goto label_8030E29C;
    case 0x8030E2A0u: goto label_8030E2A0;
    case 0x8030E2A4u: goto label_8030E2A4;
    case 0x8030E2A8u: goto label_8030E2A8;
    case 0x8030E2ACu: goto label_8030E2AC;
    case 0x8030E2B0u: goto label_8030E2B0;
    case 0x8030E2B4u: goto label_8030E2B4;
    case 0x8030E2B8u: goto label_8030E2B8;
    case 0x8030E2BCu: goto label_8030E2BC;
    case 0x8030E2C0u: goto label_8030E2C0;
    case 0x8030E2C4u: goto label_8030E2C4;
    case 0x8030E2C8u: goto label_8030E2C8;
    case 0x8030E2CCu: goto label_8030E2CC;
    case 0x8030E2D0u: goto label_8030E2D0;
    case 0x8030E2D4u: goto label_8030E2D4;
    case 0x8030E2D8u: goto label_8030E2D8;
    case 0x8030E2DCu: goto label_8030E2DC;
    case 0x8030E2E0u: goto label_8030E2E0;
    case 0x8030E2E4u: goto label_8030E2E4;
    case 0x8030E2E8u: goto label_8030E2E8;
    case 0x8030E2ECu: goto label_8030E2EC;
    case 0x8030E2F0u: goto label_8030E2F0;
    case 0x8030E2F4u: goto label_8030E2F4;
    case 0x8030E2F8u: goto label_8030E2F8;
    case 0x8030E2FCu: goto label_8030E2FC;
    case 0x8030E300u: goto label_8030E300;
    case 0x8030E304u: goto label_8030E304;
    case 0x8030E308u: goto label_8030E308;
    case 0x8030E30Cu: goto label_8030E30C;
    case 0x8030E310u: goto label_8030E310;
    case 0x8030E314u: goto label_8030E314;
    case 0x8030E318u: goto label_8030E318;
    case 0x8030E31Cu: goto label_8030E31C;
    case 0x8030E320u: goto label_8030E320;
    case 0x8030E324u: goto label_8030E324;
    case 0x8030E328u: goto label_8030E328;
    case 0x8030E32Cu: goto label_8030E32C;
    case 0x8030E330u: goto label_8030E330;
    case 0x8030E334u: goto label_8030E334;
    case 0x8030E338u: goto label_8030E338;
    case 0x8030E33Cu: goto label_8030E33C;
    case 0x8030E340u: goto label_8030E340;
    case 0x8030E344u: goto label_8030E344;
    case 0x8030E348u: goto label_8030E348;
    case 0x8030E34Cu: goto label_8030E34C;
    case 0x8030E350u: goto label_8030E350;
    case 0x8030E354u: goto label_8030E354;
    case 0x8030E358u: goto label_8030E358;
    case 0x8030E35Cu: goto label_8030E35C;
    case 0x8030E360u: goto label_8030E360;
    case 0x8030E364u: goto label_8030E364;
    case 0x8030E368u: goto label_8030E368;
    case 0x8030E36Cu: goto label_8030E36C;
    case 0x8030E370u: goto label_8030E370;
    case 0x8030E374u: goto label_8030E374;
    case 0x8030E378u: goto label_8030E378;
    case 0x8030E37Cu: goto label_8030E37C;
    case 0x8030E380u: goto label_8030E380;
    case 0x8030E384u: goto label_8030E384;
    case 0x8030E388u: goto label_8030E388;
    case 0x8030E38Cu: goto label_8030E38C;
    case 0x8030E390u: goto label_8030E390;
    case 0x8030E394u: goto label_8030E394;
    case 0x8030E398u: goto label_8030E398;
    case 0x8030E39Cu: goto label_8030E39C;
    case 0x8030E3A0u: goto label_8030E3A0;
    case 0x8030E3A4u: goto label_8030E3A4;
    case 0x8030E3A8u: goto label_8030E3A8;
    case 0x8030E3ACu: goto label_8030E3AC;
    case 0x8030E3B0u: goto label_8030E3B0;
    case 0x8030E3B4u: goto label_8030E3B4;
    case 0x8030E3B8u: goto label_8030E3B8;
    case 0x8030E3BCu: goto label_8030E3BC;
    case 0x8030E3C0u: goto label_8030E3C0;
    case 0x8030E3C4u: goto label_8030E3C4;
    case 0x8030E3C8u: goto label_8030E3C8;
    case 0x8030E3CCu: goto label_8030E3CC;
    case 0x8030E3D0u: goto label_8030E3D0;
    case 0x8030E3D4u: goto label_8030E3D4;
    case 0x8030E3D8u: goto label_8030E3D8;
    case 0x8030E3DCu: goto label_8030E3DC;
    case 0x8030E3E0u: goto label_8030E3E0;
    case 0x8030E3E4u: goto label_8030E3E4;
    case 0x8030E3E8u: goto label_8030E3E8;
    case 0x8030E3ECu: goto label_8030E3EC;
    case 0x8030E3F0u: goto label_8030E3F0;
    case 0x8030E3F4u: goto label_8030E3F4;
    case 0x8030E3F8u: goto label_8030E3F8;
    case 0x8030E3FCu: goto label_8030E3FC;
    case 0x8030E400u: goto label_8030E400;
    case 0x8030E404u: goto label_8030E404;
    case 0x8030E408u: goto label_8030E408;
    case 0x8030E40Cu: goto label_8030E40C;
    case 0x8030E410u: goto label_8030E410;
    case 0x8030E414u: goto label_8030E414;
    case 0x8030E418u: goto label_8030E418;
    case 0x8030E41Cu: goto label_8030E41C;
    case 0x8030E420u: goto label_8030E420;
    case 0x8030E424u: goto label_8030E424;
    case 0x8030E428u: goto label_8030E428;
    case 0x8030E42Cu: goto label_8030E42C;
    case 0x8030E430u: goto label_8030E430;
    case 0x8030E434u: goto label_8030E434;
    case 0x8030E438u: goto label_8030E438;
    case 0x8030E43Cu: goto label_8030E43C;
    case 0x8030E440u: goto label_8030E440;
    case 0x8030E444u: goto label_8030E444;
    case 0x8030E448u: goto label_8030E448;
    case 0x8030E44Cu: goto label_8030E44C;
    case 0x8030E450u: goto label_8030E450;
    case 0x8030E454u: goto label_8030E454;
    case 0x8030E458u: goto label_8030E458;
    case 0x8030E45Cu: goto label_8030E45C;
    case 0x8030E460u: goto label_8030E460;
    case 0x8030E464u: goto label_8030E464;
    case 0x8030E468u: goto label_8030E468;
    case 0x8030E46Cu: goto label_8030E46C;
    case 0x8030E470u: goto label_8030E470;
    case 0x8030E474u: goto label_8030E474;
    case 0x8030E478u: goto label_8030E478;
    case 0x8030E47Cu: goto label_8030E47C;
    case 0x8030E480u: goto label_8030E480;
    case 0x8030E484u: goto label_8030E484;
    case 0x8030E488u: goto label_8030E488;
    case 0x8030E48Cu: goto label_8030E48C;
    case 0x8030E490u: goto label_8030E490;
    case 0x8030E494u: goto label_8030E494;
    case 0x8030E498u: goto label_8030E498;
    case 0x8030E49Cu: goto label_8030E49C;
    case 0x8030E4A0u: goto label_8030E4A0;
    case 0x8030E4A4u: goto label_8030E4A4;
    case 0x8030E4A8u: goto label_8030E4A8;
    case 0x8030E4ACu: goto label_8030E4AC;
    case 0x8030E4B0u: goto label_8030E4B0;
    case 0x8030E4B4u: goto label_8030E4B4;
    case 0x8030E4B8u: goto label_8030E4B8;
    case 0x8030E4BCu: goto label_8030E4BC;
    case 0x8030E4C0u: goto label_8030E4C0;
    case 0x8030E4C4u: goto label_8030E4C4;
    case 0x8030E4C8u: goto label_8030E4C8;
    case 0x8030E4CCu: goto label_8030E4CC;
    case 0x8030E4D0u: goto label_8030E4D0;
    case 0x8030E4D4u: goto label_8030E4D4;
    case 0x8030E4D8u: goto label_8030E4D8;
    case 0x8030E4DCu: goto label_8030E4DC;
    case 0x8030E4E0u: goto label_8030E4E0;
    case 0x8030E4E4u: goto label_8030E4E4;
    case 0x8030E4E8u: goto label_8030E4E8;
    case 0x8030E4ECu: goto label_8030E4EC;
    case 0x8030E4F0u: goto label_8030E4F0;
    case 0x8030E4F4u: goto label_8030E4F4;
    case 0x8030E4F8u: goto label_8030E4F8;
    case 0x8030E4FCu: goto label_8030E4FC;
    case 0x8030E500u: goto label_8030E500;
    case 0x8030E504u: goto label_8030E504;
    case 0x8030E508u: goto label_8030E508;
    case 0x8030E50Cu: goto label_8030E50C;
    case 0x8030E510u: goto label_8030E510;
    case 0x8030E514u: goto label_8030E514;
    case 0x8030E518u: goto label_8030E518;
    case 0x8030E51Cu: goto label_8030E51C;
    case 0x8030E520u: goto label_8030E520;
    case 0x8030E524u: goto label_8030E524;
    case 0x8030E528u: goto label_8030E528;
    case 0x8030E52Cu: goto label_8030E52C;
    case 0x8030E530u: goto label_8030E530;
    case 0x8030E534u: goto label_8030E534;
    case 0x8030E538u: goto label_8030E538;
    case 0x8030E53Cu: goto label_8030E53C;
    case 0x8030E540u: goto label_8030E540;
    case 0x8030E544u: goto label_8030E544;
    case 0x8030E548u: goto label_8030E548;
    case 0x8030E54Cu: goto label_8030E54C;
    case 0x8030E550u: goto label_8030E550;
    case 0x8030E554u: goto label_8030E554;
    case 0x8030E558u: goto label_8030E558;
    case 0x8030E55Cu: goto label_8030E55C;
    case 0x8030E560u: goto label_8030E560;
    case 0x8030E564u: goto label_8030E564;
    case 0x8030E568u: goto label_8030E568;
    case 0x8030E56Cu: goto label_8030E56C;
    case 0x8030E570u: goto label_8030E570;
    case 0x8030E574u: goto label_8030E574;
    case 0x8030E578u: goto label_8030E578;
    case 0x8030E57Cu: goto label_8030E57C;
    case 0x8030E580u: goto label_8030E580;
    case 0x8030E584u: goto label_8030E584;
    case 0x8030E588u: goto label_8030E588;
    case 0x8030E58Cu: goto label_8030E58C;
    case 0x8030E590u: goto label_8030E590;
    case 0x8030E594u: goto label_8030E594;
    case 0x8030E598u: goto label_8030E598;
    case 0x8030E59Cu: goto label_8030E59C;
    case 0x8030E5A0u: goto label_8030E5A0;
    case 0x8030E5A4u: goto label_8030E5A4;
    case 0x8030E5A8u: goto label_8030E5A8;
    case 0x8030E5ACu: goto label_8030E5AC;
    case 0x8030E5B0u: goto label_8030E5B0;
    case 0x8030E5B4u: goto label_8030E5B4;
    case 0x8030E5B8u: goto label_8030E5B8;
    case 0x8030E5BCu: goto label_8030E5BC;
    case 0x8030E5C0u: goto label_8030E5C0;
    case 0x8030E5C4u: goto label_8030E5C4;
    case 0x8030E5C8u: goto label_8030E5C8;
    case 0x8030E5CCu: goto label_8030E5CC;
    case 0x8030E5D0u: goto label_8030E5D0;
    case 0x8030E5D4u: goto label_8030E5D4;
    case 0x8030E5D8u: goto label_8030E5D8;
    case 0x8030E5DCu: goto label_8030E5DC;
    case 0x8030E5E0u: goto label_8030E5E0;
    case 0x8030E5E4u: goto label_8030E5E4;
    case 0x8030E5E8u: goto label_8030E5E8;
    case 0x8030E5ECu: goto label_8030E5EC;
    case 0x8030E5F0u: goto label_8030E5F0;
    case 0x8030E5F4u: goto label_8030E5F4;
    case 0x8030E5F8u: goto label_8030E5F8;
    case 0x8030E5FCu: goto label_8030E5FC;
    case 0x8030E600u: goto label_8030E600;
    case 0x8030E604u: goto label_8030E604;
    case 0x8030E608u: goto label_8030E608;
    case 0x8030E60Cu: goto label_8030E60C;
    case 0x8030E610u: goto label_8030E610;
    case 0x8030E614u: goto label_8030E614;
    case 0x8030E618u: goto label_8030E618;
    case 0x8030E61Cu: goto label_8030E61C;
    case 0x8030E620u: goto label_8030E620;
    case 0x8030E624u: goto label_8030E624;
    case 0x8030E628u: goto label_8030E628;
    case 0x8030E62Cu: goto label_8030E62C;
    case 0x8030E630u: goto label_8030E630;
    case 0x8030E634u: goto label_8030E634;
    case 0x8030E638u: goto label_8030E638;
    case 0x8030E63Cu: goto label_8030E63C;
    case 0x8030E640u: goto label_8030E640;
    case 0x8030E644u: goto label_8030E644;
    case 0x8030E648u: goto label_8030E648;
    case 0x8030E64Cu: goto label_8030E64C;
    case 0x8030E650u: goto label_8030E650;
    case 0x8030E654u: goto label_8030E654;
    case 0x8030E658u: goto label_8030E658;
    case 0x8030E65Cu: goto label_8030E65C;
    case 0x8030E660u: goto label_8030E660;
    case 0x8030E664u: goto label_8030E664;
    case 0x8030E668u: goto label_8030E668;
    case 0x8030E66Cu: goto label_8030E66C;
    case 0x8030E670u: goto label_8030E670;
    case 0x8030E674u: goto label_8030E674;
    case 0x8030E678u: goto label_8030E678;
    case 0x8030E67Cu: goto label_8030E67C;
    case 0x8030E680u: goto label_8030E680;
    case 0x8030E684u: goto label_8030E684;
    case 0x8030E688u: goto label_8030E688;
    case 0x8030E68Cu: goto label_8030E68C;
    case 0x8030E690u: goto label_8030E690;
    case 0x8030E694u: goto label_8030E694;
    case 0x8030E698u: goto label_8030E698;
    case 0x8030E69Cu: goto label_8030E69C;
    case 0x8030E6A0u: goto label_8030E6A0;
    case 0x8030E6A4u: goto label_8030E6A4;
    case 0x8030E6A8u: goto label_8030E6A8;
    case 0x8030E6ACu: goto label_8030E6AC;
    case 0x8030E6B0u: goto label_8030E6B0;
    case 0x8030E6B4u: goto label_8030E6B4;
    case 0x8030E6B8u: goto label_8030E6B8;
    case 0x8030E6BCu: goto label_8030E6BC;
    case 0x8030E6C0u: goto label_8030E6C0;
    case 0x8030E6C4u: goto label_8030E6C4;
    case 0x8030E6C8u: goto label_8030E6C8;
    case 0x8030E6CCu: goto label_8030E6CC;
    case 0x8030E6D0u: goto label_8030E6D0;
    case 0x8030E6D4u: goto label_8030E6D4;
    case 0x8030E6D8u: goto label_8030E6D8;
    case 0x8030E6DCu: goto label_8030E6DC;
    case 0x8030E6E0u: goto label_8030E6E0;
    case 0x8030E6E4u: goto label_8030E6E4;
    case 0x8030E6E8u: goto label_8030E6E8;
    case 0x8030E6ECu: goto label_8030E6EC;
    case 0x8030E6F0u: goto label_8030E6F0;
    case 0x8030E6F4u: goto label_8030E6F4;
    case 0x8030E6F8u: goto label_8030E6F8;
    case 0x8030E6FCu: goto label_8030E6FC;
    case 0x8030E700u: goto label_8030E700;
    case 0x8030E704u: goto label_8030E704;
    case 0x8030E708u: goto label_8030E708;
    case 0x8030E70Cu: goto label_8030E70C;
    case 0x8030E710u: goto label_8030E710;
    case 0x8030E714u: goto label_8030E714;
    case 0x8030E718u: goto label_8030E718;
    case 0x8030E71Cu: goto label_8030E71C;
    case 0x8030E720u: goto label_8030E720;
    case 0x8030E724u: goto label_8030E724;
    case 0x8030E728u: goto label_8030E728;
    case 0x8030E72Cu: goto label_8030E72C;
    case 0x8030E730u: goto label_8030E730;
    case 0x8030E734u: goto label_8030E734;
    case 0x8030E738u: goto label_8030E738;
    case 0x8030E73Cu: goto label_8030E73C;
    case 0x8030E740u: goto label_8030E740;
    case 0x8030E744u: goto label_8030E744;
    case 0x8030E748u: goto label_8030E748;
    case 0x8030E74Cu: goto label_8030E74C;
    case 0x8030E750u: goto label_8030E750;
    case 0x8030E754u: goto label_8030E754;
    case 0x8030E758u: goto label_8030E758;
    case 0x8030E75Cu: goto label_8030E75C;
    case 0x8030E760u: goto label_8030E760;
    case 0x8030E764u: goto label_8030E764;
    case 0x8030E768u: goto label_8030E768;
    case 0x8030E76Cu: goto label_8030E76C;
    case 0x8030E770u: goto label_8030E770;
    case 0x8030E774u: goto label_8030E774;
    case 0x8030E778u: goto label_8030E778;
    case 0x8030E77Cu: goto label_8030E77C;
    case 0x8030E780u: goto label_8030E780;
    case 0x8030E784u: goto label_8030E784;
    case 0x8030E788u: goto label_8030E788;
    case 0x8030E78Cu: goto label_8030E78C;
    case 0x8030E790u: goto label_8030E790;
    case 0x8030E794u: goto label_8030E794;
    case 0x8030E798u: goto label_8030E798;
    case 0x8030E79Cu: goto label_8030E79C;
    case 0x8030E7A0u: goto label_8030E7A0;
    case 0x8030E7A4u: goto label_8030E7A4;
    case 0x8030E7A8u: goto label_8030E7A8;
    case 0x8030E7ACu: goto label_8030E7AC;
    case 0x8030E7B0u: goto label_8030E7B0;
    case 0x8030E7B4u: goto label_8030E7B4;
    case 0x8030E7B8u: goto label_8030E7B8;
    case 0x8030E7BCu: goto label_8030E7BC;
    case 0x8030E7C0u: goto label_8030E7C0;
    case 0x8030E7C4u: goto label_8030E7C4;
    case 0x8030E7C8u: goto label_8030E7C8;
    case 0x8030E7CCu: goto label_8030E7CC;
    case 0x8030E7D0u: goto label_8030E7D0;
    case 0x8030E7D4u: goto label_8030E7D4;
    case 0x8030E7D8u: goto label_8030E7D8;
    case 0x8030E7DCu: goto label_8030E7DC;
    case 0x8030E7E0u: goto label_8030E7E0;
    case 0x8030E7E4u: goto label_8030E7E4;
    case 0x8030E7E8u: goto label_8030E7E8;
    case 0x8030E7ECu: goto label_8030E7EC;
    case 0x8030E7F0u: goto label_8030E7F0;
    case 0x8030E7F4u: goto label_8030E7F4;
    case 0x8030E7F8u: goto label_8030E7F8;
    case 0x8030E7FCu: goto label_8030E7FC;
    case 0x8030E800u: goto label_8030E800;
    case 0x8030E804u: goto label_8030E804;
    case 0x8030E808u: goto label_8030E808;
    case 0x8030E80Cu: goto label_8030E80C;
    case 0x8030E810u: goto label_8030E810;
    case 0x8030E814u: goto label_8030E814;
    case 0x8030E818u: goto label_8030E818;
    case 0x8030E81Cu: goto label_8030E81C;
    case 0x8030E820u: goto label_8030E820;
    case 0x8030E824u: goto label_8030E824;
    case 0x8030E828u: goto label_8030E828;
    case 0x8030E82Cu: goto label_8030E82C;
    case 0x8030E830u: goto label_8030E830;
    case 0x8030E834u: goto label_8030E834;
    case 0x8030E838u: goto label_8030E838;
    case 0x8030E83Cu: goto label_8030E83C;
    case 0x8030E840u: goto label_8030E840;
    case 0x8030E844u: goto label_8030E844;
    case 0x8030E848u: goto label_8030E848;
    case 0x8030E84Cu: goto label_8030E84C;
    case 0x8030E850u: goto label_8030E850;
    case 0x8030E854u: goto label_8030E854;
    case 0x8030E858u: goto label_8030E858;
    case 0x8030E85Cu: goto label_8030E85C;
    case 0x8030E860u: goto label_8030E860;
    case 0x8030E864u: goto label_8030E864;
    case 0x8030E868u: goto label_8030E868;
    case 0x8030E86Cu: goto label_8030E86C;
    case 0x8030E870u: goto label_8030E870;
    case 0x8030E874u: goto label_8030E874;
    case 0x8030E878u: goto label_8030E878;
    case 0x8030E87Cu: goto label_8030E87C;
    case 0x8030E880u: goto label_8030E880;
    case 0x8030E884u: goto label_8030E884;
    case 0x8030E888u: goto label_8030E888;
    case 0x8030E88Cu: goto label_8030E88C;
    case 0x8030E890u: goto label_8030E890;
    case 0x8030E894u: goto label_8030E894;
    case 0x8030E898u: goto label_8030E898;
    case 0x8030E89Cu: goto label_8030E89C;
    case 0x8030E8A0u: goto label_8030E8A0;
    case 0x8030E8A4u: goto label_8030E8A4;
    case 0x8030E8A8u: goto label_8030E8A8;
    case 0x8030E8ACu: goto label_8030E8AC;
    case 0x8030E8B0u: goto label_8030E8B0;
    case 0x8030E8B4u: goto label_8030E8B4;
    case 0x8030E8B8u: goto label_8030E8B8;
    case 0x8030E8BCu: goto label_8030E8BC;
    case 0x8030E8C0u: goto label_8030E8C0;
    case 0x8030E8C4u: goto label_8030E8C4;
    case 0x8030E8C8u: goto label_8030E8C8;
    case 0x8030E8CCu: goto label_8030E8CC;
    case 0x8030E8D0u: goto label_8030E8D0;
    case 0x8030E8D4u: goto label_8030E8D4;
    case 0x8030E8D8u: goto label_8030E8D8;
    case 0x8030E8DCu: goto label_8030E8DC;
    case 0x8030E8E0u: goto label_8030E8E0;
    case 0x8030E8E4u: goto label_8030E8E4;
    case 0x8030E8E8u: goto label_8030E8E8;
    case 0x8030E8ECu: goto label_8030E8EC;
    case 0x8030E8F0u: goto label_8030E8F0;
    case 0x8030E8F4u: goto label_8030E8F4;
    case 0x8030E8F8u: goto label_8030E8F8;
    case 0x8030E8FCu: goto label_8030E8FC;
    case 0x8030E900u: goto label_8030E900;
    case 0x8030E904u: goto label_8030E904;
    case 0x8030E908u: goto label_8030E908;
    case 0x8030E90Cu: goto label_8030E90C;
    case 0x8030E910u: goto label_8030E910;
    case 0x8030E914u: goto label_8030E914;
    case 0x8030E918u: goto label_8030E918;
    case 0x8030E91Cu: goto label_8030E91C;
    case 0x8030E920u: goto label_8030E920;
    case 0x8030E924u: goto label_8030E924;
    case 0x8030E928u: goto label_8030E928;
    case 0x8030E92Cu: goto label_8030E92C;
    case 0x8030E930u: goto label_8030E930;
    case 0x8030E934u: goto label_8030E934;
    case 0x8030E938u: goto label_8030E938;
    case 0x8030E93Cu: goto label_8030E93C;
    case 0x8030E940u: goto label_8030E940;
    case 0x8030E944u: goto label_8030E944;
    case 0x8030E948u: goto label_8030E948;
    case 0x8030E94Cu: goto label_8030E94C;
    case 0x8030E950u: goto label_8030E950;
    case 0x8030E954u: goto label_8030E954;
    case 0x8030E958u: goto label_8030E958;
    case 0x8030E95Cu: goto label_8030E95C;
    case 0x8030E960u: goto label_8030E960;
    case 0x8030E964u: goto label_8030E964;
    case 0x8030E968u: goto label_8030E968;
    case 0x8030E96Cu: goto label_8030E96C;
    case 0x8030E970u: goto label_8030E970;
    case 0x8030E974u: goto label_8030E974;
    case 0x8030E978u: goto label_8030E978;
    case 0x8030E97Cu: goto label_8030E97C;
    case 0x8030E980u: goto label_8030E980;
    case 0x8030E984u: goto label_8030E984;
    case 0x8030E988u: goto label_8030E988;
    case 0x8030E98Cu: goto label_8030E98C;
    case 0x8030E990u: goto label_8030E990;
    case 0x8030E994u: goto label_8030E994;
    case 0x8030E998u: goto label_8030E998;
    case 0x8030E99Cu: goto label_8030E99C;
    case 0x8030E9A0u: goto label_8030E9A0;
    case 0x8030E9A4u: goto label_8030E9A4;
    case 0x8030E9A8u: goto label_8030E9A8;
    case 0x8030E9ACu: goto label_8030E9AC;
    case 0x8030E9B0u: goto label_8030E9B0;
    case 0x8030E9B4u: goto label_8030E9B4;
    case 0x8030E9B8u: goto label_8030E9B8;
    case 0x8030E9BCu: goto label_8030E9BC;
    case 0x8030E9C0u: goto label_8030E9C0;
    case 0x8030E9C4u: goto label_8030E9C4;
    case 0x8030E9C8u: goto label_8030E9C8;
    case 0x8030E9CCu: goto label_8030E9CC;
    case 0x8030E9D0u: goto label_8030E9D0;
    case 0x8030E9D4u: goto label_8030E9D4;
    case 0x8030E9D8u: goto label_8030E9D8;
    case 0x8030E9DCu: goto label_8030E9DC;
    case 0x8030E9E0u: goto label_8030E9E0;
    case 0x8030E9E4u: goto label_8030E9E4;
    case 0x8030E9E8u: goto label_8030E9E8;
    case 0x8030E9ECu: goto label_8030E9EC;
    case 0x8030E9F0u: goto label_8030E9F0;
    case 0x8030E9F4u: goto label_8030E9F4;
    case 0x8030E9F8u: goto label_8030E9F8;
    case 0x8030E9FCu: goto label_8030E9FC;
    case 0x8030EA00u: goto label_8030EA00;
    case 0x8030EA04u: goto label_8030EA04;
    case 0x8030EA08u: goto label_8030EA08;
    case 0x8030EA0Cu: goto label_8030EA0C;
    case 0x8030EA10u: goto label_8030EA10;
    case 0x8030EA14u: goto label_8030EA14;
    case 0x8030EA18u: goto label_8030EA18;
    case 0x8030EA1Cu: goto label_8030EA1C;
    case 0x8030EA20u: goto label_8030EA20;
    case 0x8030EA24u: goto label_8030EA24;
    case 0x8030EA28u: goto label_8030EA28;
    case 0x8030EA2Cu: goto label_8030EA2C;
    case 0x8030EA30u: goto label_8030EA30;
    case 0x8030EA34u: goto label_8030EA34;
    case 0x8030EA38u: goto label_8030EA38;
    case 0x8030EA3Cu: goto label_8030EA3C;
    case 0x8030EA40u: goto label_8030EA40;
    case 0x8030EA44u: goto label_8030EA44;
    case 0x8030EA48u: goto label_8030EA48;
    case 0x8030EA4Cu: goto label_8030EA4C;
    case 0x8030EA50u: goto label_8030EA50;
    case 0x8030EA54u: goto label_8030EA54;
    case 0x8030EA58u: goto label_8030EA58;
    case 0x8030EA5Cu: goto label_8030EA5C;
    case 0x8030EA60u: goto label_8030EA60;
    case 0x8030EA64u: goto label_8030EA64;
    case 0x8030EA68u: goto label_8030EA68;
    case 0x8030EA6Cu: goto label_8030EA6C;
    case 0x8030EA70u: goto label_8030EA70;
    case 0x8030EA74u: goto label_8030EA74;
    case 0x8030EA78u: goto label_8030EA78;
    case 0x8030EA7Cu: goto label_8030EA7C;
    case 0x8030EA80u: goto label_8030EA80;
    case 0x8030EA84u: goto label_8030EA84;
    case 0x8030EA88u: goto label_8030EA88;
    case 0x8030EA8Cu: goto label_8030EA8C;
    case 0x8030EA90u: goto label_8030EA90;
    case 0x8030EA94u: goto label_8030EA94;
    case 0x8030EA98u: goto label_8030EA98;
    case 0x8030EA9Cu: goto label_8030EA9C;
    case 0x8030EAA0u: goto label_8030EAA0;
    case 0x8030EAA4u: goto label_8030EAA4;
    case 0x8030EAA8u: goto label_8030EAA8;
    case 0x8030EAACu: goto label_8030EAAC;
    case 0x8030EAB0u: goto label_8030EAB0;
    case 0x8030EAB4u: goto label_8030EAB4;
    case 0x8030EAB8u: goto label_8030EAB8;
    case 0x8030EABCu: goto label_8030EABC;
    case 0x8030EAC0u: goto label_8030EAC0;
    case 0x8030EAC4u: goto label_8030EAC4;
    case 0x8030EAC8u: goto label_8030EAC8;
    case 0x8030EACCu: goto label_8030EACC;
    case 0x8030EAD0u: goto label_8030EAD0;
    case 0x8030EAD4u: goto label_8030EAD4;
    case 0x8030EAD8u: goto label_8030EAD8;
    case 0x8030EADCu: goto label_8030EADC;
    case 0x8030EAE0u: goto label_8030EAE0;
    case 0x8030EAE4u: goto label_8030EAE4;
    case 0x8030EAE8u: goto label_8030EAE8;
    case 0x8030EAECu: goto label_8030EAEC;
    case 0x8030EAF0u: goto label_8030EAF0;
    case 0x8030EAF4u: goto label_8030EAF4;
    case 0x8030EAF8u: goto label_8030EAF8;
    case 0x8030EAFCu: goto label_8030EAFC;
    case 0x8030EB00u: goto label_8030EB00;
    case 0x8030EB04u: goto label_8030EB04;
    case 0x8030EB08u: goto label_8030EB08;
    case 0x8030EB0Cu: goto label_8030EB0C;
    case 0x8030EB10u: goto label_8030EB10;
    case 0x8030EB14u: goto label_8030EB14;
    case 0x8030EB18u: goto label_8030EB18;
    case 0x8030EB1Cu: goto label_8030EB1C;
    case 0x8030EB20u: goto label_8030EB20;
    case 0x8030EB24u: goto label_8030EB24;
    case 0x8030EB28u: goto label_8030EB28;
    case 0x8030EB2Cu: goto label_8030EB2C;
    case 0x8030EB30u: goto label_8030EB30;
    case 0x8030EB34u: goto label_8030EB34;
    case 0x8030EB38u: goto label_8030EB38;
    case 0x8030EB3Cu: goto label_8030EB3C;
    case 0x8030EB40u: goto label_8030EB40;
    case 0x8030EB44u: goto label_8030EB44;
    case 0x8030EB48u: goto label_8030EB48;
    case 0x8030EB4Cu: goto label_8030EB4C;
    case 0x8030EB50u: goto label_8030EB50;
    case 0x8030EB54u: goto label_8030EB54;
    case 0x8030EB58u: goto label_8030EB58;
    case 0x8030EB5Cu: goto label_8030EB5C;
    case 0x8030EB60u: goto label_8030EB60;
    case 0x8030EB64u: goto label_8030EB64;
    case 0x8030EB68u: goto label_8030EB68;
    case 0x8030EB6Cu: goto label_8030EB6C;
    case 0x8030EB70u: goto label_8030EB70;
    case 0x8030EB74u: goto label_8030EB74;
    case 0x8030EB78u: goto label_8030EB78;
    case 0x8030EB7Cu: goto label_8030EB7C;
    case 0x8030EB80u: goto label_8030EB80;
    case 0x8030EB84u: goto label_8030EB84;
    case 0x8030EB88u: goto label_8030EB88;
    case 0x8030EB8Cu: goto label_8030EB8C;
    case 0x8030EB90u: goto label_8030EB90;
    case 0x8030EB94u: goto label_8030EB94;
    case 0x8030EB98u: goto label_8030EB98;
    case 0x8030EB9Cu: goto label_8030EB9C;
    case 0x8030EBA0u: goto label_8030EBA0;
    case 0x8030EBA4u: goto label_8030EBA4;
    case 0x8030EBA8u: goto label_8030EBA8;
    case 0x8030EBACu: goto label_8030EBAC;
    case 0x8030EBB0u: goto label_8030EBB0;
    case 0x8030EBB4u: goto label_8030EBB4;
    case 0x8030EBB8u: goto label_8030EBB8;
    case 0x8030EBBCu: goto label_8030EBBC;
    case 0x8030EBC0u: goto label_8030EBC0;
    case 0x8030EBC4u: goto label_8030EBC4;
    case 0x8030EBC8u: goto label_8030EBC8;
    case 0x8030EBCCu: goto label_8030EBCC;
    case 0x8030EBD0u: goto label_8030EBD0;
    case 0x8030EBD4u: goto label_8030EBD4;
    case 0x8030EBD8u: goto label_8030EBD8;
    case 0x8030EBDCu: goto label_8030EBDC;
    case 0x8030EBE0u: goto label_8030EBE0;
    case 0x8030EBE4u: goto label_8030EBE4;
    case 0x8030EBE8u: goto label_8030EBE8;
    case 0x8030EBECu: goto label_8030EBEC;
    case 0x8030EBF0u: goto label_8030EBF0;
    case 0x8030EBF4u: goto label_8030EBF4;
    case 0x8030EBF8u: goto label_8030EBF8;
    case 0x8030EBFCu: goto label_8030EBFC;
    case 0x8030EC00u: goto label_8030EC00;
    case 0x8030EC04u: goto label_8030EC04;
    case 0x8030EC08u: goto label_8030EC08;
    case 0x8030EC0Cu: goto label_8030EC0C;
    case 0x8030EC10u: goto label_8030EC10;
    case 0x8030EC14u: goto label_8030EC14;
    case 0x8030EC18u: goto label_8030EC18;
    case 0x8030EC1Cu: goto label_8030EC1C;
    case 0x8030EC20u: goto label_8030EC20;
    case 0x8030EC24u: goto label_8030EC24;
    case 0x8030EC28u: goto label_8030EC28;
    case 0x8030EC2Cu: goto label_8030EC2C;
    case 0x8030EC30u: goto label_8030EC30;
    case 0x8030EC34u: goto label_8030EC34;
    case 0x8030EC38u: goto label_8030EC38;
    case 0x8030EC3Cu: goto label_8030EC3C;
    case 0x8030EC40u: goto label_8030EC40;
    case 0x8030EC44u: goto label_8030EC44;
    case 0x8030EC48u: goto label_8030EC48;
    case 0x8030EC4Cu: goto label_8030EC4C;
    case 0x8030EC50u: goto label_8030EC50;
    case 0x8030EC54u: goto label_8030EC54;
    case 0x8030EC58u: goto label_8030EC58;
    case 0x8030EC5Cu: goto label_8030EC5C;
    case 0x8030EC60u: goto label_8030EC60;
    case 0x8030EC64u: goto label_8030EC64;
    case 0x8030EC68u: goto label_8030EC68;
    case 0x8030EC6Cu: goto label_8030EC6C;
    case 0x8030EC70u: goto label_8030EC70;
    case 0x8030EC74u: goto label_8030EC74;
    case 0x8030EC78u: goto label_8030EC78;
    case 0x8030EC7Cu: goto label_8030EC7C;
    case 0x8030EC80u: goto label_8030EC80;
    case 0x8030EC84u: goto label_8030EC84;
    case 0x8030EC88u: goto label_8030EC88;
    case 0x8030EC8Cu: goto label_8030EC8C;
    case 0x8030EC90u: goto label_8030EC90;
    case 0x8030EC94u: goto label_8030EC94;
    case 0x8030EC98u: goto label_8030EC98;
    case 0x8030EC9Cu: goto label_8030EC9C;
    case 0x8030ECA0u: goto label_8030ECA0;
    case 0x8030ECA4u: goto label_8030ECA4;
    case 0x8030ECA8u: goto label_8030ECA8;
    case 0x8030ECACu: goto label_8030ECAC;
    case 0x8030ECB0u: goto label_8030ECB0;
    case 0x8030ECB4u: goto label_8030ECB4;
    case 0x8030ECB8u: goto label_8030ECB8;
    case 0x8030ECBCu: goto label_8030ECBC;
    case 0x8030ECC0u: goto label_8030ECC0;
    case 0x8030ECC4u: goto label_8030ECC4;
    case 0x8030ECC8u: goto label_8030ECC8;
    case 0x8030ECCCu: goto label_8030ECCC;
    case 0x8030ECD0u: goto label_8030ECD0;
    case 0x8030ECD4u: goto label_8030ECD4;
    case 0x8030ECD8u: goto label_8030ECD8;
    case 0x8030ECDCu: goto label_8030ECDC;
    case 0x8030ECE0u: goto label_8030ECE0;
    case 0x8030ECE4u: goto label_8030ECE4;
    case 0x8030ECE8u: goto label_8030ECE8;
    case 0x8030ECECu: goto label_8030ECEC;
    case 0x8030ECF0u: goto label_8030ECF0;
    case 0x8030ECF4u: goto label_8030ECF4;
    case 0x8030ECF8u: goto label_8030ECF8;
    case 0x8030ECFCu: goto label_8030ECFC;
    case 0x8030ED00u: goto label_8030ED00;
    case 0x8030ED04u: goto label_8030ED04;
    case 0x8030ED08u: goto label_8030ED08;
    case 0x8030ED0Cu: goto label_8030ED0C;
    case 0x8030ED10u: goto label_8030ED10;
    case 0x8030ED14u: goto label_8030ED14;
    case 0x8030ED18u: goto label_8030ED18;
    case 0x8030ED1Cu: goto label_8030ED1C;
    case 0x8030ED20u: goto label_8030ED20;
    case 0x8030ED24u: goto label_8030ED24;
    case 0x8030ED28u: goto label_8030ED28;
    case 0x8030ED2Cu: goto label_8030ED2C;
    case 0x8030ED30u: goto label_8030ED30;
    case 0x8030ED34u: goto label_8030ED34;
    case 0x8030ED38u: goto label_8030ED38;
    case 0x8030ED3Cu: goto label_8030ED3C;
    case 0x8030ED40u: goto label_8030ED40;
    case 0x8030ED44u: goto label_8030ED44;
    case 0x8030ED48u: goto label_8030ED48;
    case 0x8030ED4Cu: goto label_8030ED4C;
    case 0x8030ED50u: goto label_8030ED50;
    case 0x8030ED54u: goto label_8030ED54;
    case 0x8030ED58u: goto label_8030ED58;
    case 0x8030ED5Cu: goto label_8030ED5C;
    case 0x8030ED60u: goto label_8030ED60;
    case 0x8030ED64u: goto label_8030ED64;
    case 0x8030ED68u: goto label_8030ED68;
    case 0x8030ED6Cu: goto label_8030ED6C;
    case 0x8030ED70u: goto label_8030ED70;
    case 0x8030ED74u: goto label_8030ED74;
    case 0x8030ED78u: goto label_8030ED78;
    case 0x8030ED7Cu: goto label_8030ED7C;
    case 0x8030ED80u: goto label_8030ED80;
    case 0x8030ED84u: goto label_8030ED84;
    case 0x8030ED88u: goto label_8030ED88;
    case 0x8030ED8Cu: goto label_8030ED8C;
    case 0x8030ED90u: goto label_8030ED90;
    case 0x8030ED94u: goto label_8030ED94;
    case 0x8030ED98u: goto label_8030ED98;
    case 0x8030ED9Cu: goto label_8030ED9C;
    case 0x8030EDA0u: goto label_8030EDA0;
    case 0x8030EDA4u: goto label_8030EDA4;
    case 0x8030EDA8u: goto label_8030EDA8;
    case 0x8030EDACu: goto label_8030EDAC;
    case 0x8030EDB0u: goto label_8030EDB0;
    case 0x8030EDB4u: goto label_8030EDB4;
    case 0x8030EDB8u: goto label_8030EDB8;
    case 0x8030EDBCu: goto label_8030EDBC;
    case 0x8030EDC0u: goto label_8030EDC0;
    case 0x8030EDC4u: goto label_8030EDC4;
    case 0x8030EDC8u: goto label_8030EDC8;
    case 0x8030EDCCu: goto label_8030EDCC;
    case 0x8030EDD0u: goto label_8030EDD0;
    case 0x8030EDD4u: goto label_8030EDD4;
    case 0x8030EDD8u: goto label_8030EDD8;
    case 0x8030EDDCu: goto label_8030EDDC;
    case 0x8030EDE0u: goto label_8030EDE0;
    case 0x8030EDE4u: goto label_8030EDE4;
    case 0x8030EDE8u: goto label_8030EDE8;
    case 0x8030EDECu: goto label_8030EDEC;
    case 0x8030EDF0u: goto label_8030EDF0;
    case 0x8030EDF4u: goto label_8030EDF4;
    case 0x8030EDF8u: goto label_8030EDF8;
    case 0x8030EDFCu: goto label_8030EDFC;
    case 0x8030EE00u: goto label_8030EE00;
    case 0x8030EE04u: goto label_8030EE04;
    case 0x8030EE08u: goto label_8030EE08;
    case 0x8030EE0Cu: goto label_8030EE0C;
    case 0x8030EE10u: goto label_8030EE10;
    case 0x8030EE14u: goto label_8030EE14;
    case 0x8030EE18u: goto label_8030EE18;
    case 0x8030EE1Cu: goto label_8030EE1C;
    case 0x8030EE20u: goto label_8030EE20;
    case 0x8030EE24u: goto label_8030EE24;
    case 0x8030EE28u: goto label_8030EE28;
    case 0x8030EE2Cu: goto label_8030EE2C;
    case 0x8030EE30u: goto label_8030EE30;
    case 0x8030EE34u: goto label_8030EE34;
    case 0x8030EE38u: goto label_8030EE38;
    case 0x8030EE3Cu: goto label_8030EE3C;
    case 0x8030EE40u: goto label_8030EE40;
    case 0x8030EE44u: goto label_8030EE44;
    case 0x8030EE48u: goto label_8030EE48;
    case 0x8030EE4Cu: goto label_8030EE4C;
    case 0x8030EE50u: goto label_8030EE50;
    case 0x8030EE54u: goto label_8030EE54;
    case 0x8030EE58u: goto label_8030EE58;
    case 0x8030EE5Cu: goto label_8030EE5C;
    case 0x8030EE60u: goto label_8030EE60;
    case 0x8030EE64u: goto label_8030EE64;
    case 0x8030EE68u: goto label_8030EE68;
    case 0x8030EE6Cu: goto label_8030EE6C;
    case 0x8030EE70u: goto label_8030EE70;
    case 0x8030EE74u: goto label_8030EE74;
    case 0x8030EE78u: goto label_8030EE78;
    case 0x8030EE7Cu: goto label_8030EE7C;
    case 0x8030EE80u: goto label_8030EE80;
    case 0x8030EE84u: goto label_8030EE84;
    case 0x8030EE88u: goto label_8030EE88;
    case 0x8030EE8Cu: goto label_8030EE8C;
    case 0x8030EE90u: goto label_8030EE90;
    case 0x8030EE94u: goto label_8030EE94;
    case 0x8030EE98u: goto label_8030EE98;
    case 0x8030EE9Cu: goto label_8030EE9C;
    case 0x8030EEA0u: goto label_8030EEA0;
    case 0x8030EEA4u: goto label_8030EEA4;
    case 0x8030EEA8u: goto label_8030EEA8;
    case 0x8030EEACu: goto label_8030EEAC;
    case 0x8030EEB0u: goto label_8030EEB0;
    case 0x8030EEB4u: goto label_8030EEB4;
    case 0x8030EEB8u: goto label_8030EEB8;
    case 0x8030EEBCu: goto label_8030EEBC;
    case 0x8030EEC0u: goto label_8030EEC0;
    case 0x8030EEC4u: goto label_8030EEC4;
    case 0x8030EEC8u: goto label_8030EEC8;
    case 0x8030EECCu: goto label_8030EECC;
    case 0x8030EED0u: goto label_8030EED0;
    case 0x8030EED4u: goto label_8030EED4;
    case 0x8030EED8u: goto label_8030EED8;
    case 0x8030EEDCu: goto label_8030EEDC;
    case 0x8030EEE0u: goto label_8030EEE0;
    case 0x8030EEE4u: goto label_8030EEE4;
    case 0x8030EEE8u: goto label_8030EEE8;
    case 0x8030EEECu: goto label_8030EEEC;
    case 0x8030EEF0u: goto label_8030EEF0;
    case 0x8030EEF4u: goto label_8030EEF4;
    case 0x8030EEF8u: goto label_8030EEF8;
    case 0x8030EEFCu: goto label_8030EEFC;
    case 0x8030EF00u: goto label_8030EF00;
    case 0x8030EF04u: goto label_8030EF04;
    case 0x8030EF08u: goto label_8030EF08;
    case 0x8030EF0Cu: goto label_8030EF0C;
    case 0x8030EF10u: goto label_8030EF10;
    case 0x8030EF14u: goto label_8030EF14;
    case 0x8030EF18u: goto label_8030EF18;
    case 0x8030EF1Cu: goto label_8030EF1C;
    case 0x8030EF20u: goto label_8030EF20;
    case 0x8030EF24u: goto label_8030EF24;
    case 0x8030EF28u: goto label_8030EF28;
    case 0x8030EF2Cu: goto label_8030EF2C;
    case 0x8030EF30u: goto label_8030EF30;
    case 0x8030EF34u: goto label_8030EF34;
    case 0x8030EF38u: goto label_8030EF38;
    case 0x8030EF3Cu: goto label_8030EF3C;
    case 0x8030EF40u: goto label_8030EF40;
    case 0x8030EF44u: goto label_8030EF44;
    case 0x8030EF48u: goto label_8030EF48;
    case 0x8030EF4Cu: goto label_8030EF4C;
    case 0x8030EF50u: goto label_8030EF50;
    case 0x8030EF54u: goto label_8030EF54;
    case 0x8030EF58u: goto label_8030EF58;
    case 0x8030EF5Cu: goto label_8030EF5C;
    case 0x8030EF60u: goto label_8030EF60;
    case 0x8030EF64u: goto label_8030EF64;
    case 0x8030EF68u: goto label_8030EF68;
    case 0x8030EF6Cu: goto label_8030EF6C;
    case 0x8030EF70u: goto label_8030EF70;
    case 0x8030EF74u: goto label_8030EF74;
    case 0x8030EF78u: goto label_8030EF78;
    case 0x8030EF7Cu: goto label_8030EF7C;
    case 0x8030EF80u: goto label_8030EF80;
    case 0x8030EF84u: goto label_8030EF84;
    case 0x8030EF88u: goto label_8030EF88;
    case 0x8030EF8Cu: goto label_8030EF8C;
    case 0x8030EF90u: goto label_8030EF90;
    case 0x8030EF94u: goto label_8030EF94;
    case 0x8030EF98u: goto label_8030EF98;
    case 0x8030EF9Cu: goto label_8030EF9C;
    case 0x8030EFA0u: goto label_8030EFA0;
    case 0x8030EFA4u: goto label_8030EFA4;
    case 0x8030EFA8u: goto label_8030EFA8;
    case 0x8030EFACu: goto label_8030EFAC;
    case 0x8030EFB0u: goto label_8030EFB0;
    case 0x8030EFB4u: goto label_8030EFB4;
    case 0x8030EFB8u: goto label_8030EFB8;
    case 0x8030EFBCu: goto label_8030EFBC;
    case 0x8030EFC0u: goto label_8030EFC0;
    case 0x8030EFC4u: goto label_8030EFC4;
    case 0x8030EFC8u: goto label_8030EFC8;
    case 0x8030EFCCu: goto label_8030EFCC;
    case 0x8030EFD0u: goto label_8030EFD0;
    case 0x8030EFD4u: goto label_8030EFD4;
    case 0x8030EFD8u: goto label_8030EFD8;
    case 0x8030EFDCu: goto label_8030EFDC;
    case 0x8030EFE0u: goto label_8030EFE0;
    case 0x8030EFE4u: goto label_8030EFE4;
    case 0x8030EFE8u: goto label_8030EFE8;
    case 0x8030EFECu: goto label_8030EFEC;
    case 0x8030EFF0u: goto label_8030EFF0;
    case 0x8030EFF4u: goto label_8030EFF4;
    case 0x8030EFF8u: goto label_8030EFF8;
    case 0x8030EFFCu: goto label_8030EFFC;
    case 0x8030F000u: goto label_8030F000;
    case 0x8030F004u: goto label_8030F004;
    case 0x8030F008u: goto label_8030F008;
    case 0x8030F00Cu: goto label_8030F00C;
    case 0x8030F010u: goto label_8030F010;
    case 0x8030F014u: goto label_8030F014;
    case 0x8030F018u: goto label_8030F018;
    case 0x8030F01Cu: goto label_8030F01C;
    case 0x8030F020u: goto label_8030F020;
    case 0x8030F024u: goto label_8030F024;
    case 0x8030F028u: goto label_8030F028;
    case 0x8030F02Cu: goto label_8030F02C;
    case 0x8030F030u: goto label_8030F030;
    case 0x8030F034u: goto label_8030F034;
    case 0x8030F038u: goto label_8030F038;
    case 0x8030F03Cu: goto label_8030F03C;
    case 0x8030F040u: goto label_8030F040;
    case 0x8030F044u: goto label_8030F044;
    case 0x8030F048u: goto label_8030F048;
    case 0x8030F04Cu: goto label_8030F04C;
    case 0x8030F050u: goto label_8030F050;
    case 0x8030F054u: goto label_8030F054;
    case 0x8030F058u: goto label_8030F058;
    case 0x8030F05Cu: goto label_8030F05C;
    case 0x8030F060u: goto label_8030F060;
    case 0x8030F064u: goto label_8030F064;
    case 0x8030F068u: goto label_8030F068;
    case 0x8030F06Cu: goto label_8030F06C;
    case 0x8030F070u: goto label_8030F070;
    case 0x8030F074u: goto label_8030F074;
    case 0x8030F078u: goto label_8030F078;
    case 0x8030F07Cu: goto label_8030F07C;
    case 0x8030F080u: goto label_8030F080;
    case 0x8030F084u: goto label_8030F084;
    case 0x8030F088u: goto label_8030F088;
    case 0x8030F08Cu: goto label_8030F08C;
    case 0x8030F090u: goto label_8030F090;
    case 0x8030F094u: goto label_8030F094;
    case 0x8030F098u: goto label_8030F098;
    case 0x8030F09Cu: goto label_8030F09C;
    case 0x8030F0A0u: goto label_8030F0A0;
    case 0x8030F0A4u: goto label_8030F0A4;
    case 0x8030F0A8u: goto label_8030F0A8;
    case 0x8030F0ACu: goto label_8030F0AC;
    case 0x8030F0B0u: goto label_8030F0B0;
    case 0x8030F0B4u: goto label_8030F0B4;
    case 0x8030F0B8u: goto label_8030F0B8;
    case 0x8030F0BCu: goto label_8030F0BC;
    case 0x8030F0C0u: goto label_8030F0C0;
    case 0x8030F0C4u: goto label_8030F0C4;
    case 0x8030F0C8u: goto label_8030F0C8;
    case 0x8030F0CCu: goto label_8030F0CC;
    case 0x8030F0D0u: goto label_8030F0D0;
    case 0x8030F0D4u: goto label_8030F0D4;
    case 0x8030F0D8u: goto label_8030F0D8;
    case 0x8030F0DCu: goto label_8030F0DC;
    case 0x8030F0E0u: goto label_8030F0E0;
    case 0x8030F0E4u: goto label_8030F0E4;
    case 0x8030F0E8u: goto label_8030F0E8;
    case 0x8030F0ECu: goto label_8030F0EC;
    case 0x8030F0F0u: goto label_8030F0F0;
    case 0x8030F0F4u: goto label_8030F0F4;
    case 0x8030F0F8u: goto label_8030F0F8;
    case 0x8030F0FCu: goto label_8030F0FC;
    case 0x8030F100u: goto label_8030F100;
    case 0x8030F104u: goto label_8030F104;
    case 0x8030F108u: goto label_8030F108;
    case 0x8030F10Cu: goto label_8030F10C;
    case 0x8030F110u: goto label_8030F110;
    case 0x8030F114u: goto label_8030F114;
    case 0x8030F118u: goto label_8030F118;
    case 0x8030F11Cu: goto label_8030F11C;
    case 0x8030F120u: goto label_8030F120;
    case 0x8030F124u: goto label_8030F124;
    case 0x8030F128u: goto label_8030F128;
    case 0x8030F12Cu: goto label_8030F12C;
    case 0x8030F130u: goto label_8030F130;
    case 0x8030F134u: goto label_8030F134;
    case 0x8030F138u: goto label_8030F138;
    case 0x8030F13Cu: goto label_8030F13C;
    case 0x8030F140u: goto label_8030F140;
    case 0x8030F144u: goto label_8030F144;
    case 0x8030F148u: goto label_8030F148;
    case 0x8030F14Cu: goto label_8030F14C;
    case 0x8030F150u: goto label_8030F150;
    case 0x8030F154u: goto label_8030F154;
    case 0x8030F158u: goto label_8030F158;
    case 0x8030F15Cu: goto label_8030F15C;
    case 0x8030F160u: goto label_8030F160;
    case 0x8030F164u: goto label_8030F164;
    case 0x8030F168u: goto label_8030F168;
    case 0x8030F16Cu: goto label_8030F16C;
    case 0x8030F170u: goto label_8030F170;
    case 0x8030F174u: goto label_8030F174;
    case 0x8030F178u: goto label_8030F178;
    case 0x8030F17Cu: goto label_8030F17C;
    case 0x8030F180u: goto label_8030F180;
    case 0x8030F184u: goto label_8030F184;
    case 0x8030F188u: goto label_8030F188;
    case 0x8030F18Cu: goto label_8030F18C;
    case 0x8030F190u: goto label_8030F190;
    case 0x8030F194u: goto label_8030F194;
    case 0x8030F198u: goto label_8030F198;
    case 0x8030F19Cu: goto label_8030F19C;
    case 0x8030F1A0u: goto label_8030F1A0;
    case 0x8030F1A4u: goto label_8030F1A4;
    case 0x8030F1A8u: goto label_8030F1A8;
    case 0x8030F1ACu: goto label_8030F1AC;
    case 0x8030F1B0u: goto label_8030F1B0;
    case 0x8030F1B4u: goto label_8030F1B4;
    case 0x8030F1B8u: goto label_8030F1B8;
    case 0x8030F1BCu: goto label_8030F1BC;
    default: return;
    }
label_8030B1C0:
    ctx->pc = 0x8030B1C0u;
    ctx->downcount -= 4;
    // 8030B1C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B1C4:
    ctx->pc = 0x8030B1C4u;
    // 8030B1C4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8030B1C8:
    ctx->pc = 0x8030B1C8u;
    // 8030B1C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B1CC:
    ctx->pc = 0x8030B1CCu;
    ctx->downcount -= 11;
    // 8030B1CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B1D0:
    ctx->pc = 0x8030B1D0u;
    // 8030B1D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B1D4:
    ctx->pc = 0x8030B1D4u;
    // 8030B1D4: lis     r5, -32643
    ctx->gpr[5] = ((u32)(s32)(-32643) << 16);

label_8030B1D8:
    ctx->pc = 0x8030B1D8u;
    // 8030B1D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B1DC:
    ctx->pc = 0x8030B1DCu;
    // 8030B1DC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B1E0:
    ctx->pc = 0x8030B1E0u;
    // 8030B1E0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B1E4:
    ctx->pc = 0x8030B1E4u;
    // 8030B1E4: stw     r4, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030B1E8:
    ctx->pc = 0x8030B1E8u;
    // 8030B1E8: addi    r3, r5, 744
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(744);

label_8030B1EC:
    ctx->pc = 0x8030B1ECu;
    // 8030B1EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030B1F0:
    ctx->pc = 0x8030B1F0u;
    // 8030B1F0: li      r5, 16
    ctx->gpr[5] = (u32)(s32)(16);

label_8030B1F4:
    ctx->pc = 0x8030B1F4u;
    // 8030B1F4: bl      0x80004350
    {
            ctx->lr = 0x8030B1F8u;
            ctx->pc = 0x80004350u;
            return;
    }

label_8030B1F8:
    ctx->pc = 0x8030B1F8u;
    ctx->downcount -= 2;
    // 8030B1F8: li      r3, 28
    ctx->gpr[3] = (u32)(s32)(28);

label_8030B1FC:
    ctx->pc = 0x8030B1FCu;
    // 8030B1FC: bl      0x801C1C48
    {
            ctx->lr = 0x8030B200u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8030B200:
    ctx->pc = 0x8030B200u;
    ctx->downcount -= 2;
    // 8030B200: cmpwi   r3, 0
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

label_8030B204:
    ctx->pc = 0x8030B204u;
    // 8030B204: bc    12, 2, 0x8030B20C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B20C;
        }
    }

label_8030B208:
    ctx->pc = 0x8030B208u;
    ctx->downcount -= 1;
    // 8030B208: bl      0x80380F5C
    {
            ctx->lr = 0x8030B20Cu;
            ctx->pc = 0x80380F5Cu;
            return;
    }

label_8030B20C:
    ctx->pc = 0x8030B20Cu;
    ctx->downcount -= 9;
    // 8030B20C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030B210:
    ctx->pc = 0x8030B210u;
    // 8030B210: stw     r3, 128(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B214:
    ctx->pc = 0x8030B214u;
    // 8030B214: stb     r0, 68(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(68);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B218:
    ctx->pc = 0x8030B218u;
    // 8030B218: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B21C:
    ctx->pc = 0x8030B21Cu;
    // 8030B21C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B220:
    ctx->pc = 0x8030B220u;
    // 8030B220: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B224:
    ctx->pc = 0x8030B224u;
    // 8030B224: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030B228:
    ctx->pc = 0x8030B228u;
    // 8030B228: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B22C:
    ctx->pc = 0x8030B22Cu;
    ctx->downcount -= 8;
    // 8030B22C: lis     r4, -32643
    ctx->gpr[4] = ((u32)(s32)(-32643) << 16);

label_8030B230:
    ctx->pc = 0x8030B230u;
    // 8030B230: lfs     f1, -11940(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030B230u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11940);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030B234:
    ctx->pc = 0x8030B234u;
    // 8030B234: addi    r3, r4, 760
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(760);

label_8030B238:
    ctx->pc = 0x8030B238u;
    // 8030B238: lfs     f0, -12008(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030B238u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12008);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030B23C:
    ctx->pc = 0x8030B23Cu;
    // 8030B23C: stfs     f1, 760(r4)
    if (!ppc_fp_available_inline(ctx, 0x8030B23Cu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(760);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030B240:
    ctx->pc = 0x8030B240u;
    // 8030B240: stfs     f1, 4(r3)
    if (!ppc_fp_available_inline(ctx, 0x8030B240u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030B244:
    ctx->pc = 0x8030B244u;
    // 8030B244: stfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x8030B244u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030B248:
    ctx->pc = 0x8030B248u;
    // 8030B248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B24C:
    ctx->pc = 0x8030B24Cu;
    ctx->downcount -= 9;
    // 8030B24C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B250:
    ctx->pc = 0x8030B250u;
    // 8030B250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B254:
    ctx->pc = 0x8030B254u;
    // 8030B254: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030B258:
    ctx->pc = 0x8030B258u;
    // 8030B258: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030B25C:
    ctx->pc = 0x8030B25Cu;
    // 8030B25C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B260:
    ctx->pc = 0x8030B260u;
    // 8030B260: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B264:
    ctx->pc = 0x8030B264u;
    // 8030B264: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B268:
    ctx->pc = 0x8030B268u;
    // 8030B268: addi    r4, r5, 19504
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(19504);

label_8030B26C:
    ctx->pc = 0x8030B26Cu;
    // 8030B26C: bl      0x8026F960
    {
            ctx->lr = 0x8030B270u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8030B270:
    ctx->pc = 0x8030B270u;
    ctx->downcount -= 5;
    // 8030B270: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030B274:
    ctx->pc = 0x8030B274u;
    // 8030B274: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030B278:
    ctx->pc = 0x8030B278u;
    // 8030B278: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030B27C:
    ctx->pc = 0x8030B27Cu;
    // 8030B27C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030B280u;
            ctx->pc = target;
            return;
        }
    }

label_8030B280:
    ctx->pc = 0x8030B280u;
    ctx->downcount -= 18;
    // 8030B280: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030B284:
    ctx->pc = 0x8030B284u;
    // 8030B284: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B288:
    ctx->pc = 0x8030B288u;
    // 8030B288: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B28C:
    ctx->pc = 0x8030B28Cu;
    // 8030B28C: sth     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B290:
    ctx->pc = 0x8030B290u;
    // 8030B290: lha     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_8030B294:
    ctx->pc = 0x8030B294u;
    // 8030B294: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030B298:
    ctx->pc = 0x8030B298u;
    // 8030B298: sth     r31, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B29C:
    ctx->pc = 0x8030B29Cu;
    // 8030B29C: sth     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B2A0:
    ctx->pc = 0x8030B2A0u;
    // 8030B2A0: sth     r0, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_8030B2A4:
    ctx->pc = 0x8030B2A4u;
    // 8030B2A4: sth     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B2A8:
    ctx->pc = 0x8030B2A8u;
    // 8030B2A8: sth     r31, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B2AC:
    ctx->pc = 0x8030B2ACu;
    // 8030B2AC: sth     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8030B2B0:
    ctx->pc = 0x8030B2B0u;
    // 8030B2B0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B2B4:
    ctx->pc = 0x8030B2B4u;
    // 8030B2B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B2B8:
    ctx->pc = 0x8030B2B8u;
    // 8030B2B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B2BC:
    ctx->pc = 0x8030B2BCu;
    // 8030B2BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B2C0:
    ctx->pc = 0x8030B2C0u;
    // 8030B2C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B2C4:
    ctx->pc = 0x8030B2C4u;
    ctx->downcount -= 20;
    // 8030B2C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B2C8:
    ctx->pc = 0x8030B2C8u;
    // 8030B2C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B2CC:
    ctx->pc = 0x8030B2CCu;
    // 8030B2CC: cmpwi   r4, 0
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

label_8030B2D0:
    ctx->pc = 0x8030B2D0u;
    // 8030B2D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B2D4:
    ctx->pc = 0x8030B2D4u;
    // 8030B2D4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B2D8:
    ctx->pc = 0x8030B2D8u;
    // 8030B2D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B2DC:
    ctx->pc = 0x8030B2DCu;
    // 8030B2DC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B2E0:
    ctx->pc = 0x8030B2E0u;
    // 8030B2E0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030B2E4:
    ctx->pc = 0x8030B2E4u;
    // 8030B2E4: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_8030B2E8:
    ctx->pc = 0x8030B2E8u;
    // 8030B2E8: bc    4, 2, 0x8030B2F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030B2F0;
        }
    }

label_8030B2EC:
    ctx->pc = 0x8030B2ECu;
    ctx->downcount -= 1;
    // 8030B2EC: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_8030B2F0:
    ctx->pc = 0x8030B2F0u;
    ctx->downcount -= 2;
    // 8030B2F0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030B2F4:
    ctx->pc = 0x8030B2F4u;
    // 8030B2F4: bl      0x8030B24C
    {
            ctx->lr = 0x8030B2F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B24Cu;
                return;
            }
            goto label_8030B24C;
    }

label_8030B2F8:
    ctx->pc = 0x8030B2F8u;
    ctx->downcount -= 10;
    // 8030B2F8: lis     r27, -32665
    ctx->gpr[27] = ((u32)(s32)(-32665) << 16);

label_8030B2FC:
    ctx->pc = 0x8030B2FCu;
    // 8030B2FC: srawi r4, r30, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[30];
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

label_8030B300:
    ctx->pc = 0x8030B300u;
    // 8030B300: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8030B304:
    ctx->pc = 0x8030B304u;
    // 8030B304: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030B308:
    ctx->pc = 0x8030B308u;
    // 8030B308: subfc   r0, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030B30C:
    ctx->pc = 0x8030B30Cu;
    // 8030B30C: addi    r27, r27, 19504
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(19504);

label_8030B310:
    ctx->pc = 0x8030B310u;
    // 8030B310: adde   r28, r4, r3
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[28] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030B314:
    ctx->pc = 0x8030B314u;
    // 8030B314: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B318:
    ctx->pc = 0x8030B318u;
    // 8030B318: addi    r4, r27, 15
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(15);

label_8030B31C:
    ctx->pc = 0x8030B31Cu;
    // 8030B31C: bl      0x8026F970
    {
            ctx->lr = 0x8030B320u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B320:
    ctx->pc = 0x8030B320u;
    ctx->downcount -= 7;
    // 8030B320: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B324:
    ctx->pc = 0x8030B324u;
    // 8030B324: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8030B328:
    ctx->pc = 0x8030B328u;
    // 8030B328: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B32C:
    ctx->pc = 0x8030B32Cu;
    // 8030B32C: or   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[28];
    }

label_8030B330:
    ctx->pc = 0x8030B330u;
    // 8030B330: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B334:
    ctx->pc = 0x8030B334u;
    // 8030B334: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B338:
    ctx->pc = 0x8030B338u;
    // 8030B338: bl      0x8026F970
    {
            ctx->lr = 0x8030B33Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B33C:
    ctx->pc = 0x8030B33Cu;
    ctx->downcount -= 8;
    // 8030B33C: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8030B340:
    ctx->pc = 0x8030B340u;
    // 8030B340: cntlzw r0, r28
    {
        u32 v = ctx->gpr[28];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030B344:
    ctx->pc = 0x8030B344u;
    // 8030B344: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030B348:
    ctx->pc = 0x8030B348u;
    // 8030B348: addi    r4, r27, 28
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(28);

label_8030B34C:
    ctx->pc = 0x8030B34Cu;
    // 8030B34C: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030B350:
    ctx->pc = 0x8030B350u;
    // 8030B350: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B354:
    ctx->pc = 0x8030B354u;
    // 8030B354: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B358:
    ctx->pc = 0x8030B358u;
    // 8030B358: bl      0x8026F970
    {
            ctx->lr = 0x8030B35Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B35C:
    ctx->pc = 0x8030B35Cu;
    ctx->downcount -= 8;
    // 8030B35C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B360:
    ctx->pc = 0x8030B360u;
    // 8030B360: addi    r4, r30, -2
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(-2);

label_8030B364:
    ctx->pc = 0x8030B364u;
    // 8030B364: cmplwi  r4, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030B368:
    ctx->pc = 0x8030B368u;
    // 8030B368: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8030B36C:
    ctx->pc = 0x8030B36Cu;
    // 8030B36C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B370:
    ctx->pc = 0x8030B370u;
    // 8030B370: or   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[28];
    }

label_8030B374:
    ctx->pc = 0x8030B374u;
    // 8030B374: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B378:
    ctx->pc = 0x8030B378u;
    // 8030B378: bc    12, 1, 0x8030B390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B390;
        }
    }

label_8030B37C:
    ctx->pc = 0x8030B37Cu;
    ctx->downcount -= 4;
    // 8030B37C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030B380:
    ctx->pc = 0x8030B380u;
    // 8030B380: slw   r0, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030B384:
    ctx->pc = 0x8030B384u;
    // 8030B384: andi.   r0, r0, 0x001B
    {
        ctx->gpr[0] = ctx->gpr[0] & 0x001Bu;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8030B388:
    ctx->pc = 0x8030B388u;
    // 8030B388: bc    12, 2, 0x8030B390
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B390;
        }
    }

label_8030B38C:
    ctx->pc = 0x8030B38Cu;
    ctx->downcount -= 1;
    // 8030B38C: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_8030B390:
    ctx->pc = 0x8030B390u;
    ctx->downcount -= 5;
    // 8030B390: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B394:
    ctx->pc = 0x8030B394u;
    // 8030B394: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B398:
    ctx->pc = 0x8030B398u;
    // 8030B398: addi    r4, r4, 19504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19504);

label_8030B39C:
    ctx->pc = 0x8030B39Cu;
    // 8030B39C: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_8030B3A0:
    ctx->pc = 0x8030B3A0u;
    // 8030B3A0: bl      0x8026F970
    {
            ctx->lr = 0x8030B3A4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B3A4:
    ctx->pc = 0x8030B3A4u;
    ctx->downcount -= 6;
    // 8030B3A4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B3A8:
    ctx->pc = 0x8030B3A8u;
    // 8030B3A8: cmpwi   r27, 0
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

label_8030B3AC:
    ctx->pc = 0x8030B3ACu;
    // 8030B3AC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B3B0:
    ctx->pc = 0x8030B3B0u;
    // 8030B3B0: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_8030B3B4:
    ctx->pc = 0x8030B3B4u;
    // 8030B3B4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B3B8:
    ctx->pc = 0x8030B3B8u;
    // 8030B3B8: bc    12, 2, 0x8030B434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B434;
        }
    }

label_8030B3BC:
    ctx->pc = 0x8030B3BCu;
    ctx->downcount -= 3;
    // 8030B3BC: cmpwi   r30, 2
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

label_8030B3C0:
    ctx->pc = 0x8030B3C0u;
    // 8030B3C0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8030B3C4:
    ctx->pc = 0x8030B3C4u;
    // 8030B3C4: bc    12, 2, 0x8030B3D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B3D0;
        }
    }

label_8030B3C8:
    ctx->pc = 0x8030B3C8u;
    ctx->downcount -= 2;
    // 8030B3C8: cmpwi   r30, 5
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030B3CC:
    ctx->pc = 0x8030B3CCu;
    // 8030B3CC: bc    4, 2, 0x8030B3D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030B3D4;
        }
    }

label_8030B3D0:
    ctx->pc = 0x8030B3D0u;
    ctx->downcount -= 1;
    // 8030B3D0: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_8030B3D4:
    ctx->pc = 0x8030B3D4u;
    ctx->downcount -= 5;
    // 8030B3D4: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B3D8:
    ctx->pc = 0x8030B3D8u;
    // 8030B3D8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B3DC:
    ctx->pc = 0x8030B3DCu;
    // 8030B3DC: addi    r4, r4, 19504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19504);

label_8030B3E0:
    ctx->pc = 0x8030B3E0u;
    // 8030B3E0: addi    r4, r4, 58
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(58);

label_8030B3E4:
    ctx->pc = 0x8030B3E4u;
    // 8030B3E4: bl      0x8026F970
    {
            ctx->lr = 0x8030B3E8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B3E8:
    ctx->pc = 0x8030B3E8u;
    ctx->downcount -= 7;
    // 8030B3E8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B3EC:
    ctx->pc = 0x8030B3ECu;
    // 8030B3EC: cmpwi   r30, 3
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

label_8030B3F0:
    ctx->pc = 0x8030B3F0u;
    // 8030B3F0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030B3F4:
    ctx->pc = 0x8030B3F4u;
    // 8030B3F4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B3F8:
    ctx->pc = 0x8030B3F8u;
    // 8030B3F8: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_8030B3FC:
    ctx->pc = 0x8030B3FCu;
    // 8030B3FC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B400:
    ctx->pc = 0x8030B400u;
    // 8030B400: bc    12, 2, 0x8030B40C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B40C;
        }
    }

label_8030B404:
    ctx->pc = 0x8030B404u;
    ctx->downcount -= 2;
    // 8030B404: cmpwi   r30, 6
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030B408:
    ctx->pc = 0x8030B408u;
    // 8030B408: bc    4, 2, 0x8030B410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030B410;
        }
    }

label_8030B40C:
    ctx->pc = 0x8030B40Cu;
    ctx->downcount -= 1;
    // 8030B40C: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_8030B410:
    ctx->pc = 0x8030B410u;
    ctx->downcount -= 5;
    // 8030B410: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B414:
    ctx->pc = 0x8030B414u;
    // 8030B414: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B418:
    ctx->pc = 0x8030B418u;
    // 8030B418: addi    r4, r4, 19504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19504);

label_8030B41C:
    ctx->pc = 0x8030B41Cu;
    // 8030B41C: addi    r4, r4, 72
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(72);

label_8030B420:
    ctx->pc = 0x8030B420u;
    // 8030B420: bl      0x8026F970
    {
            ctx->lr = 0x8030B424u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B424:
    ctx->pc = 0x8030B424u;
    ctx->downcount -= 4;
    // 8030B424: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B428:
    ctx->pc = 0x8030B428u;
    // 8030B428: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B42C:
    ctx->pc = 0x8030B42Cu;
    // 8030B42C: or   r0, r0, r28
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[28];
    }

label_8030B430:
    ctx->pc = 0x8030B430u;
    // 8030B430: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B434:
    ctx->pc = 0x8030B434u;
    ctx->downcount -= 5;
    // 8030B434: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B438:
    ctx->pc = 0x8030B438u;
    // 8030B438: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B43C:
    ctx->pc = 0x8030B43Cu;
    // 8030B43C: addi    r4, r4, 19504
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19504);

label_8030B440:
    ctx->pc = 0x8030B440u;
    // 8030B440: addi    r4, r4, 84
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(84);

label_8030B444:
    ctx->pc = 0x8030B444u;
    // 8030B444: bl      0x8026F970
    {
            ctx->lr = 0x8030B448u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B448:
    ctx->pc = 0x8030B448u;
    ctx->downcount -= 20;
    // 8030B448: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030B44C:
    ctx->pc = 0x8030B44Cu;
    // 8030B44C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8030B450:
    ctx->pc = 0x8030B450u;
    // 8030B450: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_8030B454:
    ctx->pc = 0x8030B454u;
    // 8030B454: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B458:
    ctx->pc = 0x8030B458u;
    // 8030B458: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B45C:
    ctx->pc = 0x8030B45Cu;
    // 8030B45C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B460:
    ctx->pc = 0x8030B460u;
    // 8030B460: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B464:
    ctx->pc = 0x8030B464u;
    // 8030B464: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B468:
    ctx->pc = 0x8030B468u;
    // 8030B468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B46C:
    ctx->pc = 0x8030B46Cu;
    ctx->downcount -= 21;
    // 8030B46C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B470:
    ctx->pc = 0x8030B470u;
    // 8030B470: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B474:
    ctx->pc = 0x8030B474u;
    // 8030B474: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B478:
    ctx->pc = 0x8030B478u;
    // 8030B478: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B47C:
    ctx->pc = 0x8030B47Cu;
    // 8030B47C: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030B480:
    ctx->pc = 0x8030B480u;
    // 8030B480: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B484:
    ctx->pc = 0x8030B484u;
    // 8030B484: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B488:
    ctx->pc = 0x8030B488u;
    // 8030B488: addi    r31, r31, 19504
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(19504);

label_8030B48C:
    ctx->pc = 0x8030B48Cu;
    // 8030B48C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030B490:
    ctx->pc = 0x8030B490u;
    // 8030B490: addi    r4, r31, 92
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(92);

label_8030B494:
    ctx->pc = 0x8030B494u;
    // 8030B494: bl      0x8026F970
    {
            ctx->lr = 0x8030B498u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B498:
    ctx->pc = 0x8030B498u;
    ctx->downcount -= 8;
    // 8030B498: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8030B49C:
    ctx->pc = 0x8030B49Cu;
    // 8030B49C: cntlzw r0, r30
    {
        u32 v = ctx->gpr[30];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030B4A0:
    ctx->pc = 0x8030B4A0u;
    // 8030B4A0: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030B4A4:
    ctx->pc = 0x8030B4A4u;
    // 8030B4A4: addi    r4, r31, 107
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(107);

label_8030B4A8:
    ctx->pc = 0x8030B4A8u;
    // 8030B4A8: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030B4AC:
    ctx->pc = 0x8030B4ACu;
    // 8030B4AC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B4B0:
    ctx->pc = 0x8030B4B0u;
    // 8030B4B0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B4B4:
    ctx->pc = 0x8030B4B4u;
    // 8030B4B4: bl      0x8026F970
    {
            ctx->lr = 0x8030B4B8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B4B8:
    ctx->pc = 0x8030B4B8u;
    ctx->downcount -= 9;
    // 8030B4B8: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_8030B4BC:
    ctx->pc = 0x8030B4BCu;
    // 8030B4BC: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8030B4C0:
    ctx->pc = 0x8030B4C0u;
    // 8030B4C0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030B4C4:
    ctx->pc = 0x8030B4C4u;
    // 8030B4C4: addi    r4, r31, 122
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(122);

label_8030B4C8:
    ctx->pc = 0x8030B4C8u;
    // 8030B4C8: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030B4CC:
    ctx->pc = 0x8030B4CCu;
    // 8030B4CC: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030B4D0:
    ctx->pc = 0x8030B4D0u;
    // 8030B4D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B4D4:
    ctx->pc = 0x8030B4D4u;
    // 8030B4D4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B4D8:
    ctx->pc = 0x8030B4D8u;
    // 8030B4D8: bl      0x8026F970
    {
            ctx->lr = 0x8030B4DCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B4DC:
    ctx->pc = 0x8030B4DCu;
    ctx->downcount -= 9;
    // 8030B4DC: addi    r0, r30, -2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-2);

label_8030B4E0:
    ctx->pc = 0x8030B4E0u;
    // 8030B4E0: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8030B4E4:
    ctx->pc = 0x8030B4E4u;
    // 8030B4E4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030B4E8:
    ctx->pc = 0x8030B4E8u;
    // 8030B4E8: addi    r4, r31, 137
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(137);

label_8030B4EC:
    ctx->pc = 0x8030B4ECu;
    // 8030B4EC: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030B4F0:
    ctx->pc = 0x8030B4F0u;
    // 8030B4F0: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030B4F4:
    ctx->pc = 0x8030B4F4u;
    // 8030B4F4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B4F8:
    ctx->pc = 0x8030B4F8u;
    // 8030B4F8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030B4FC:
    ctx->pc = 0x8030B4FCu;
    // 8030B4FC: bl      0x8026F970
    {
            ctx->lr = 0x8030B500u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B500:
    ctx->pc = 0x8030B500u;
    ctx->downcount -= 22;
    // 8030B500: addi    r0, r30, -3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-3);

label_8030B504:
    ctx->pc = 0x8030B504u;
    // 8030B504: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8030B508:
    ctx->pc = 0x8030B508u;
    // 8030B508: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030B50C:
    ctx->pc = 0x8030B50Cu;
    // 8030B50C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030B510:
    ctx->pc = 0x8030B510u;
    // 8030B510: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8030B514:
    ctx->pc = 0x8030B514u;
    // 8030B514: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030B518:
    ctx->pc = 0x8030B518u;
    // 8030B518: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B51C:
    ctx->pc = 0x8030B51Cu;
    // 8030B51C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B520:
    ctx->pc = 0x8030B520u;
    // 8030B520: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B524:
    ctx->pc = 0x8030B524u;
    // 8030B524: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B528:
    ctx->pc = 0x8030B528u;
    // 8030B528: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B52C:
    ctx->pc = 0x8030B52Cu;
    ctx->downcount -= 14;
    // 8030B52C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B530:
    ctx->pc = 0x8030B530u;
    // 8030B530: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B534:
    ctx->pc = 0x8030B534u;
    // 8030B534: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8030B538:
    ctx->pc = 0x8030B538u;
    // 8030B538: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B53C:
    ctx->pc = 0x8030B53Cu;
    // 8030B53C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B540:
    ctx->pc = 0x8030B540u;
    // 8030B540: addi    r6, r6, 19504
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(19504);

label_8030B544:
    ctx->pc = 0x8030B544u;
    // 8030B544: addi    r5, r6, 152
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(152);

label_8030B548:
    ctx->pc = 0x8030B548u;
    // 8030B548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030B54C:
    ctx->pc = 0x8030B54Cu;
    // 8030B54C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B550:
    ctx->pc = 0x8030B550u;
    // 8030B550: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B554:
    ctx->pc = 0x8030B554u;
    // 8030B554: addi    r6, r6, 170
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(170);

label_8030B558:
    ctx->pc = 0x8030B558u;
    // 8030B558: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8030B55C:
    ctx->pc = 0x8030B55Cu;
    // 8030B55C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030B560:
    ctx->pc = 0x8030B560u;
    // 8030B560: bl      0x8036E994
    {
            ctx->lr = 0x8030B564u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_8030B564:
    ctx->pc = 0x8030B564u;
    ctx->downcount -= 16;
    // 8030B564: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_8030B568:
    ctx->pc = 0x8030B568u;
    // 8030B568: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030B56C:
    ctx->pc = 0x8030B56Cu;
    // 8030B56C: addi    r6, r6, 32320
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(32320);

label_8030B570:
    ctx->pc = 0x8030B570u;
    // 8030B570: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030B574:
    ctx->pc = 0x8030B574u;
    // 8030B574: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_8030B578:
    ctx->pc = 0x8030B578u;
    // 8030B578: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8030B57C:
    ctx->pc = 0x8030B57Cu;
    // 8030B57C: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_8030B580:
    ctx->pc = 0x8030B580u;
    // 8030B580: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030B584:
    ctx->pc = 0x8030B584u;
    // 8030B584: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030B588:
    ctx->pc = 0x8030B588u;
    // 8030B588: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B58C:
    ctx->pc = 0x8030B58Cu;
    // 8030B58C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B590:
    ctx->pc = 0x8030B590u;
    // 8030B590: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B594:
    ctx->pc = 0x8030B594u;
    // 8030B594: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B598:
    ctx->pc = 0x8030B598u;
    // 8030B598: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030B59C:
    ctx->pc = 0x8030B59Cu;
    // 8030B59C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B5A0:
    ctx->pc = 0x8030B5A0u;
    ctx->downcount -= 18;
    // 8030B5A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B5A4:
    ctx->pc = 0x8030B5A4u;
    // 8030B5A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B5A8:
    // 8030B5A8: cmpwi   r3, 0
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

label_8030B5AC:
    ctx->pc = 0x8030B5ACu;
    // 8030B5AC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B5B0:
    ctx->pc = 0x8030B5B0u;
    // 8030B5B0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B5B4:
    // 8030B5B4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B5B8:
    // 8030B5B8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B5BC:
    // 8030B5BC: bc    12, 2, 0x8030B5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B5DC;
        }
    }

label_8030B5C0:
    ctx->downcount -= 1;
    // 8030B5C0: bc    12, 2, 0x8030B5CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B5CC;
        }
    }

label_8030B5C4:
    ctx->downcount -= 2;
    // 8030B5C4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030B5C8:
    // 8030B5C8: bl      0x801F9B68
    {
            ctx->lr = 0x8030B5CCu;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8030B5CC:
    ctx->downcount -= 2;
    // 8030B5CC: cmpwi   r31, 0
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

label_8030B5D0:
    // 8030B5D0: bc    4, 1, 0x8030B5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030B5DC;
        }
    }

label_8030B5D4:
    ctx->downcount -= 2;
    // 8030B5D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B5D8:
    // 8030B5D8: bl      0x801C1C90
    {
            ctx->lr = 0x8030B5DCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030B5DC:
    ctx->downcount -= 17;
    // 8030B5DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B5E0:
    ctx->pc = 0x8030B5E0u;
    // 8030B5E0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B5E4:
    ctx->pc = 0x8030B5E4u;
    // 8030B5E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B5E8:
    ctx->pc = 0x8030B5E8u;
    // 8030B5E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B5EC:
    // 8030B5EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030B5F0:
    ctx->pc = 0x8030B5F0u;
    // 8030B5F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B5F4:
    ctx->downcount -= 2;
    // 8030B5F4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030B5F8:
    // 8030B5F8: b       0x8030B5A0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B5A0u;
                return;
            }
            goto label_8030B5A0;
    }

label_8030B5FC:
    ctx->downcount -= 2;
    // 8030B5FC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030B600:
    // 8030B600: b       0x8030B5A0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B5A0u;
                return;
            }
            goto label_8030B5A0;
    }

label_8030B604:
    ctx->pc = 0x8030B604u;
    ctx->downcount -= 12;
    // 8030B604: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B608:
    ctx->pc = 0x8030B608u;
    // 8030B608: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B60C:
    ctx->pc = 0x8030B60Cu;
    // 8030B60C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B610:
    ctx->pc = 0x8030B610u;
    // 8030B610: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030B614:
    ctx->pc = 0x8030B614u;
    // 8030B614: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B618:
    ctx->pc = 0x8030B618u;
    // 8030B618: addi    r5, r4, 19696
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(19696);

label_8030B61C:
    ctx->pc = 0x8030B61Cu;
    // 8030B61C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030B620:
    ctx->pc = 0x8030B620u;
    // 8030B620: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B624:
    ctx->pc = 0x8030B624u;
    // 8030B624: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B628:
    ctx->pc = 0x8030B628u;
    // 8030B628: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B62C:
    ctx->pc = 0x8030B62Cu;
    // 8030B62C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030B630:
    ctx->pc = 0x8030B630u;
    // 8030B630: bl      0x8000D074
    {
            ctx->lr = 0x8030B634u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030B634:
    ctx->pc = 0x8030B634u;
    ctx->downcount -= 3;
    // 8030B634: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030B638:
    ctx->pc = 0x8030B638u;
    // 8030B638: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B63C:
    ctx->pc = 0x8030B63Cu;
    // 8030B63C: bl      0x8026F970
    {
            ctx->lr = 0x8030B640u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B640:
    ctx->pc = 0x8030B640u;
    ctx->downcount -= 6;
    // 8030B640: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B644:
    ctx->pc = 0x8030B644u;
    // 8030B644: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B648:
    ctx->pc = 0x8030B648u;
    // 8030B648: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B64C:
    ctx->pc = 0x8030B64Cu;
    // 8030B64C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B650:
    ctx->pc = 0x8030B650u;
    // 8030B650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B654:
    ctx->pc = 0x8030B654u;
    ctx->downcount -= 23;
    // 8030B654: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B658:
    ctx->pc = 0x8030B658u;
    // 8030B658: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B65C:
    ctx->pc = 0x8030B65Cu;
    // 8030B65C: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030B660:
    ctx->pc = 0x8030B660u;
    // 8030B660: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B664:
    ctx->pc = 0x8030B664u;
    // 8030B664: addi    r5, r5, 19696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19696);

label_8030B668:
    ctx->pc = 0x8030B668u;
    // 8030B668: addi    r5, r5, 14
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(14);

label_8030B66C:
    ctx->pc = 0x8030B66Cu;
    // 8030B66C: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B670:
    ctx->pc = 0x8030B670u;
    // 8030B670: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B674:
    ctx->pc = 0x8030B674u;
    // 8030B674: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B678:
    ctx->pc = 0x8030B678u;
    // 8030B678: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_8030B67C:
    ctx->pc = 0x8030B67Cu;
    // 8030B67C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030B680:
    ctx->pc = 0x8030B680u;
    // 8030B680: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030B684:
    ctx->pc = 0x8030B684u;
    // 8030B684: bl      0x8000D074
    {
            ctx->lr = 0x8030B688u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030B688:
    ctx->pc = 0x8030B688u;
    ctx->downcount -= 2;
    // 8030B688: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030B68C:
    ctx->pc = 0x8030B68Cu;
    // 8030B68C: bl      0x8026F6CC
    {
            ctx->lr = 0x8030B690u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030B690:
    ctx->pc = 0x8030B690u;
    ctx->downcount -= 4;
    // 8030B690: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B694:
    ctx->pc = 0x8030B694u;
    // 8030B694: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B698:
    ctx->pc = 0x8030B698u;
    // 8030B698: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_8030B69C:
    ctx->pc = 0x8030B69Cu;
    // 8030B69C: bl      0x8025D62C
    {
            ctx->lr = 0x8030B6A0u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030B6A0:
    ctx->pc = 0x8030B6A0u;
    ctx->downcount -= 22;
    // 8030B6A0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030B6A4:
    ctx->pc = 0x8030B6A4u;
    // 8030B6A4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B6A8:
    ctx->pc = 0x8030B6A8u;
    // 8030B6A8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B6AC:
    ctx->pc = 0x8030B6ACu;
    // 8030B6AC: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B6B0:
    ctx->pc = 0x8030B6B0u;
    // 8030B6B0: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B6B4:
    ctx->pc = 0x8030B6B4u;
    // 8030B6B4: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B6B8:
    ctx->pc = 0x8030B6B8u;
    // 8030B6B8: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B6BC:
    ctx->pc = 0x8030B6BCu;
    // 8030B6BC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B6C0:
    ctx->pc = 0x8030B6C0u;
    // 8030B6C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B6C4:
    ctx->pc = 0x8030B6C4u;
    // 8030B6C4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8030B6C8:
    ctx->pc = 0x8030B6C8u;
    // 8030B6C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B6CC:
    ctx->pc = 0x8030B6CCu;
    ctx->downcount -= 25;
    // 8030B6CC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B6D0:
    ctx->pc = 0x8030B6D0u;
    // 8030B6D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B6D4:
    ctx->pc = 0x8030B6D4u;
    // 8030B6D4: lis     r8, -32665
    ctx->gpr[8] = ((u32)(s32)(-32665) << 16);

label_8030B6D8:
    ctx->pc = 0x8030B6D8u;
    // 8030B6D8: or   r7, r6, r6
    {
        ctx->gpr[7] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030B6DC:
    ctx->pc = 0x8030B6DCu;
    // 8030B6DC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B6E0:
    ctx->pc = 0x8030B6E0u;
    // 8030B6E0: addi    r8, r8, 19696
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(19696);

label_8030B6E4:
    ctx->pc = 0x8030B6E4u;
    // 8030B6E4: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030B6E8:
    ctx->pc = 0x8030B6E8u;
    // 8030B6E8: stmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B6EC:
    ctx->pc = 0x8030B6ECu;
    // 8030B6EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B6F0:
    ctx->pc = 0x8030B6F0u;
    // 8030B6F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B6F4:
    ctx->pc = 0x8030B6F4u;
    // 8030B6F4: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_8030B6F8:
    ctx->pc = 0x8030B6F8u;
    // 8030B6F8: addi    r5, r8, 25
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(25);

label_8030B6FC:
    ctx->pc = 0x8030B6FCu;
    // 8030B6FC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030B700:
    ctx->pc = 0x8030B700u;
    // 8030B700: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030B704:
    ctx->pc = 0x8030B704u;
    // 8030B704: bl      0x8000D074
    {
            ctx->lr = 0x8030B708u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030B708:
    ctx->pc = 0x8030B708u;
    ctx->downcount -= 2;
    // 8030B708: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030B70C:
    ctx->pc = 0x8030B70Cu;
    // 8030B70C: bl      0x8026F6CC
    {
            ctx->lr = 0x8030B710u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030B710:
    ctx->pc = 0x8030B710u;
    ctx->downcount -= 4;
    // 8030B710: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B714:
    ctx->pc = 0x8030B714u;
    // 8030B714: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B718:
    ctx->pc = 0x8030B718u;
    // 8030B718: addi    r5, r1, 24
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(24);

label_8030B71C:
    ctx->pc = 0x8030B71Cu;
    // 8030B71C: bl      0x8025D62C
    {
            ctx->lr = 0x8030B720u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030B720:
    ctx->pc = 0x8030B720u;
    ctx->downcount -= 22;
    // 8030B720: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030B724:
    ctx->pc = 0x8030B724u;
    // 8030B724: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B728:
    ctx->pc = 0x8030B728u;
    // 8030B728: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B72C:
    ctx->pc = 0x8030B72Cu;
    // 8030B72C: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B730:
    ctx->pc = 0x8030B730u;
    // 8030B730: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B734:
    ctx->pc = 0x8030B734u;
    // 8030B734: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B738:
    ctx->pc = 0x8030B738u;
    // 8030B738: lmw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B73C:
    ctx->pc = 0x8030B73Cu;
    // 8030B73C: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B740:
    ctx->pc = 0x8030B740u;
    // 8030B740: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B744:
    ctx->pc = 0x8030B744u;
    // 8030B744: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8030B748:
    ctx->pc = 0x8030B748u;
    // 8030B748: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B74C:
    ctx->pc = 0x8030B74Cu;
    ctx->downcount -= 7;
    // 8030B74C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B750:
    ctx->pc = 0x8030B750u;
    // 8030B750: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B754:
    ctx->pc = 0x8030B754u;
    // 8030B754: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B758:
    ctx->pc = 0x8030B758u;
    // 8030B758: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B75C:
    ctx->pc = 0x8030B75Cu;
    // 8030B75C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B760:
    ctx->pc = 0x8030B760u;
    // 8030B760: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030B764:
    ctx->pc = 0x8030B764u;
    // 8030B764: bl      0x8026F6CC
    {
            ctx->lr = 0x8030B768u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030B768:
    ctx->pc = 0x8030B768u;
    ctx->downcount -= 6;
    // 8030B768: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030B76C:
    ctx->pc = 0x8030B76Cu;
    // 8030B76C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B770:
    ctx->pc = 0x8030B770u;
    // 8030B770: addi    r5, r5, 19696
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19696);

label_8030B774:
    ctx->pc = 0x8030B774u;
    // 8030B774: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B778:
    ctx->pc = 0x8030B778u;
    // 8030B778: addi    r5, r5, 37
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(37);

label_8030B77C:
    ctx->pc = 0x8030B77Cu;
    // 8030B77C: bl      0x8025D62C
    {
            ctx->lr = 0x8030B780u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030B780:
    ctx->pc = 0x8030B780u;
    ctx->downcount -= 12;
    // 8030B780: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030B784:
    ctx->pc = 0x8030B784u;
    // 8030B784: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B788:
    ctx->pc = 0x8030B788u;
    // 8030B788: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B78C:
    ctx->pc = 0x8030B78Cu;
    // 8030B78C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B790:
    ctx->pc = 0x8030B790u;
    // 8030B790: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B794:
    ctx->pc = 0x8030B794u;
    // 8030B794: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B798:
    ctx->pc = 0x8030B798u;
    // 8030B798: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B79C:
    ctx->pc = 0x8030B79Cu;
    // 8030B79C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B7A0:
    ctx->pc = 0x8030B7A0u;
    // 8030B7A0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B7A4:
    ctx->pc = 0x8030B7A4u;
    // 8030B7A4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B7A8:
    ctx->pc = 0x8030B7A8u;
    // 8030B7A8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B7AC:
    ctx->pc = 0x8030B7ACu;
    ctx->downcount -= 23;
    // 8030B7AC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B7B0:
    ctx->pc = 0x8030B7B0u;
    // 8030B7B0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B7B4:
    ctx->pc = 0x8030B7B4u;
    // 8030B7B4: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B7B8:
    ctx->pc = 0x8030B7B8u;
    // 8030B7B8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030B7BC:
    ctx->pc = 0x8030B7BCu;
    // 8030B7BC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B7C0:
    ctx->pc = 0x8030B7C0u;
    // 8030B7C0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030B7C4:
    ctx->pc = 0x8030B7C4u;
    // 8030B7C4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B7C8:
    ctx->pc = 0x8030B7C8u;
    // 8030B7C8: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030B7CC:
    ctx->pc = 0x8030B7CCu;
    // 8030B7CC: addi    r31, r31, 19696
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(19696);

label_8030B7D0:
    ctx->pc = 0x8030B7D0u;
    // 8030B7D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B7D4:
    ctx->pc = 0x8030B7D4u;
    // 8030B7D4: addi    r4, r31, 49
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(49);

label_8030B7D8:
    ctx->pc = 0x8030B7D8u;
    // 8030B7D8: addi    r5, r31, 67
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(67);

label_8030B7DC:
    ctx->pc = 0x8030B7DCu;
    // 8030B7DC: bl      0x8036E758
    {
            ctx->lr = 0x8030B7E0u;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8030B7E0:
    ctx->pc = 0x8030B7E0u;
    ctx->downcount -= 13;
    // 8030B7E0: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_8030B7E4:
    ctx->pc = 0x8030B7E4u;
    // 8030B7E4: addi    r4, r31, 94
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(94);

label_8030B7E8:
    ctx->pc = 0x8030B7E8u;
    // 8030B7E8: addi    r7, r7, 32624
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(32624);

label_8030B7EC:
    ctx->pc = 0x8030B7ECu;
    // 8030B7EC: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8030B7F0:
    ctx->pc = 0x8030B7F0u;
    // 8030B7F0: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_8030B7F4:
    ctx->pc = 0x8030B7F4u;
    // 8030B7F4: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_8030B7F8:
    ctx->pc = 0x8030B7F8u;
    // 8030B7F8: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_8030B7FC:
    ctx->pc = 0x8030B7FCu;
    // 8030B7FC: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8030B800:
    ctx->pc = 0x8030B800u;
    // 8030B800: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030B804:
    ctx->pc = 0x8030B804u;
    // 8030B804: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8030B808:
    ctx->pc = 0x8030B808u;
    // 8030B808: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030B80C:
    ctx->pc = 0x8030B80Cu;
    // 8030B80C: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B810:
    ctx->pc = 0x8030B810u;
    // 8030B810: bl      0x8000E7F4
    {
            ctx->lr = 0x8030B814u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030B814:
    ctx->pc = 0x8030B814u;
    ctx->downcount -= 2;
    // 8030B814: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030B818:
    ctx->pc = 0x8030B818u;
    // 8030B818: bl      0x80270188
    {
            ctx->lr = 0x8030B81Cu;
            ctx->pc = 0x80270188u;
            return;
    }

label_8030B81C:
    ctx->pc = 0x8030B81Cu;
    ctx->downcount -= 17;
    // 8030B81C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B820:
    ctx->pc = 0x8030B820u;
    // 8030B820: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B824:
    ctx->pc = 0x8030B824u;
    // 8030B824: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B828:
    ctx->pc = 0x8030B828u;
    // 8030B828: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B82C:
    ctx->pc = 0x8030B82Cu;
    // 8030B82C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030B830:
    ctx->pc = 0x8030B830u;
    // 8030B830: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B834:
    ctx->pc = 0x8030B834u;
    ctx->downcount -= 18;
    // 8030B834: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B838:
    ctx->pc = 0x8030B838u;
    // 8030B838: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B83C:
    // 8030B83C: cmpwi   r3, 0
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

label_8030B840:
    ctx->pc = 0x8030B840u;
    // 8030B840: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B844:
    ctx->pc = 0x8030B844u;
    // 8030B844: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B848:
    // 8030B848: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B84C:
    // 8030B84C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B850:
    // 8030B850: bc    12, 2, 0x8030B870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B870;
        }
    }

label_8030B854:
    ctx->downcount -= 1;
    // 8030B854: bc    12, 2, 0x8030B860
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030B860;
        }
    }

label_8030B858:
    ctx->downcount -= 2;
    // 8030B858: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030B85C:
    // 8030B85C: bl      0x801F9B68
    {
            ctx->lr = 0x8030B860u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8030B860:
    ctx->downcount -= 2;
    // 8030B860: cmpwi   r31, 0
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

label_8030B864:
    // 8030B864: bc    4, 1, 0x8030B870
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030B870;
        }
    }

label_8030B868:
    ctx->downcount -= 2;
    // 8030B868: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B86C:
    // 8030B86C: bl      0x801C1C90
    {
            ctx->lr = 0x8030B870u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030B870:
    ctx->downcount -= 17;
    // 8030B870: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B874:
    ctx->pc = 0x8030B874u;
    // 8030B874: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B878:
    ctx->pc = 0x8030B878u;
    // 8030B878: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B87C:
    ctx->pc = 0x8030B87Cu;
    // 8030B87C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B880:
    // 8030B880: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030B884:
    ctx->pc = 0x8030B884u;
    // 8030B884: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B888:
    ctx->downcount -= 2;
    // 8030B888: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030B88C:
    // 8030B88C: b       0x8030B834
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B834u;
                return;
            }
            goto label_8030B834;
    }

label_8030B890:
    ctx->downcount -= 2;
    // 8030B890: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030B894:
    // 8030B894: b       0x8030B834
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B834u;
                return;
            }
            goto label_8030B834;
    }

label_8030B898:
    ctx->pc = 0x8030B898u;
    ctx->downcount -= 4;
    // 8030B898: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B89C:
    ctx->pc = 0x8030B89Cu;
    // 8030B89C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030B8A0:
    ctx->pc = 0x8030B8A0u;
    // 8030B8A0: addi    r4, r4, 19816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19816);

label_8030B8A4:
    ctx->pc = 0x8030B8A4u;
    // 8030B8A4: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B8A8:
    ctx->pc = 0x8030B8A8u;
    ctx->downcount -= 5;
    // 8030B8A8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030B8AC:
    ctx->pc = 0x8030B8ACu;
    // 8030B8AC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030B8B0:
    ctx->pc = 0x8030B8B0u;
    // 8030B8B0: addi    r4, r4, 19816
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19816);

label_8030B8B4:
    ctx->pc = 0x8030B8B4u;
    // 8030B8B4: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_8030B8B8:
    ctx->pc = 0x8030B8B8u;
    // 8030B8B8: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030B8BC:
    ctx->pc = 0x8030B8BCu;
    ctx->downcount -= 7;
    // 8030B8BC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B8C0:
    ctx->pc = 0x8030B8C0u;
    // 8030B8C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B8C4:
    ctx->pc = 0x8030B8C4u;
    // 8030B8C4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B8C8:
    ctx->pc = 0x8030B8C8u;
    // 8030B8C8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B8CC:
    ctx->pc = 0x8030B8CCu;
    // 8030B8CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B8D0:
    ctx->pc = 0x8030B8D0u;
    // 8030B8D0: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030B8D4:
    ctx->pc = 0x8030B8D4u;
    // 8030B8D4: bl      0x8026F6CC
    {
            ctx->lr = 0x8030B8D8u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030B8D8:
    ctx->pc = 0x8030B8D8u;
    ctx->downcount -= 6;
    // 8030B8D8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030B8DC:
    ctx->pc = 0x8030B8DCu;
    // 8030B8DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B8E0:
    ctx->pc = 0x8030B8E0u;
    // 8030B8E0: addi    r5, r5, 19816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19816);

label_8030B8E4:
    ctx->pc = 0x8030B8E4u;
    // 8030B8E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B8E8:
    ctx->pc = 0x8030B8E8u;
    // 8030B8E8: addi    r5, r5, 24
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24);

label_8030B8EC:
    ctx->pc = 0x8030B8ECu;
    // 8030B8EC: bl      0x8025D62C
    {
            ctx->lr = 0x8030B8F0u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030B8F0:
    ctx->pc = 0x8030B8F0u;
    ctx->downcount -= 12;
    // 8030B8F0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030B8F4:
    ctx->pc = 0x8030B8F4u;
    // 8030B8F4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B8F8:
    ctx->pc = 0x8030B8F8u;
    // 8030B8F8: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B8FC:
    ctx->pc = 0x8030B8FCu;
    // 8030B8FC: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B900:
    ctx->pc = 0x8030B900u;
    // 8030B900: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B904:
    ctx->pc = 0x8030B904u;
    // 8030B904: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B908:
    ctx->pc = 0x8030B908u;
    // 8030B908: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B90C:
    ctx->pc = 0x8030B90Cu;
    // 8030B90C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B910:
    ctx->pc = 0x8030B910u;
    // 8030B910: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B914:
    ctx->pc = 0x8030B914u;
    // 8030B914: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B918:
    ctx->pc = 0x8030B918u;
    // 8030B918: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B91C:
    ctx->pc = 0x8030B91Cu;
    ctx->downcount -= 7;
    // 8030B91C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B920:
    ctx->pc = 0x8030B920u;
    // 8030B920: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B924:
    ctx->pc = 0x8030B924u;
    // 8030B924: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B928:
    ctx->pc = 0x8030B928u;
    // 8030B928: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030B92C:
    ctx->pc = 0x8030B92Cu;
    // 8030B92C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B930:
    ctx->pc = 0x8030B930u;
    // 8030B930: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030B934:
    ctx->pc = 0x8030B934u;
    // 8030B934: bl      0x8026F6CC
    {
            ctx->lr = 0x8030B938u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030B938:
    ctx->pc = 0x8030B938u;
    ctx->downcount -= 6;
    // 8030B938: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030B93C:
    ctx->pc = 0x8030B93Cu;
    // 8030B93C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B940:
    ctx->pc = 0x8030B940u;
    // 8030B940: addi    r5, r5, 19816
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(19816);

label_8030B944:
    ctx->pc = 0x8030B944u;
    // 8030B944: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030B948:
    ctx->pc = 0x8030B948u;
    // 8030B948: addi    r5, r5, 34
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(34);

label_8030B94C:
    ctx->pc = 0x8030B94Cu;
    // 8030B94C: bl      0x8025D62C
    {
            ctx->lr = 0x8030B950u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030B950:
    ctx->pc = 0x8030B950u;
    ctx->downcount -= 12;
    // 8030B950: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030B954:
    ctx->pc = 0x8030B954u;
    // 8030B954: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B958:
    ctx->pc = 0x8030B958u;
    // 8030B958: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B95C:
    ctx->pc = 0x8030B95Cu;
    // 8030B95C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030B960:
    ctx->pc = 0x8030B960u;
    // 8030B960: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B964:
    ctx->pc = 0x8030B964u;
    // 8030B964: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B968:
    ctx->pc = 0x8030B968u;
    // 8030B968: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030B96C:
    ctx->pc = 0x8030B96Cu;
    // 8030B96C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B970:
    ctx->pc = 0x8030B970u;
    // 8030B970: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B974:
    ctx->pc = 0x8030B974u;
    // 8030B974: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030B978:
    ctx->pc = 0x8030B978u;
    // 8030B978: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030B97C:
    ctx->pc = 0x8030B97Cu;
    ctx->downcount -= 23;
    // 8030B97C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030B980:
    ctx->pc = 0x8030B980u;
    // 8030B980: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030B984:
    ctx->pc = 0x8030B984u;
    // 8030B984: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030B988:
    ctx->pc = 0x8030B988u;
    // 8030B988: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030B98C:
    ctx->pc = 0x8030B98Cu;
    // 8030B98C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B990:
    ctx->pc = 0x8030B990u;
    // 8030B990: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030B994:
    ctx->pc = 0x8030B994u;
    // 8030B994: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030B998:
    ctx->pc = 0x8030B998u;
    // 8030B998: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030B99C:
    ctx->pc = 0x8030B99Cu;
    // 8030B99C: addi    r31, r31, 19816
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(19816);

label_8030B9A0:
    ctx->pc = 0x8030B9A0u;
    // 8030B9A0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030B9A4:
    ctx->pc = 0x8030B9A4u;
    // 8030B9A4: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_8030B9A8:
    ctx->pc = 0x8030B9A8u;
    // 8030B9A8: addi    r5, r31, 65
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(65);

label_8030B9AC:
    ctx->pc = 0x8030B9ACu;
    // 8030B9AC: bl      0x8036E758
    {
            ctx->lr = 0x8030B9B0u;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8030B9B0:
    ctx->pc = 0x8030B9B0u;
    ctx->downcount -= 13;
    // 8030B9B0: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_8030B9B4:
    ctx->pc = 0x8030B9B4u;
    // 8030B9B4: addi    r4, r31, 107
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(107);

label_8030B9B8:
    ctx->pc = 0x8030B9B8u;
    // 8030B9B8: addi    r7, r7, -32616
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-32616);

label_8030B9BC:
    ctx->pc = 0x8030B9BCu;
    // 8030B9BC: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8030B9C0:
    ctx->pc = 0x8030B9C0u;
    // 8030B9C0: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_8030B9C4:
    ctx->pc = 0x8030B9C4u;
    // 8030B9C4: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_8030B9C8:
    ctx->pc = 0x8030B9C8u;
    // 8030B9C8: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_8030B9CC:
    ctx->pc = 0x8030B9CCu;
    // 8030B9CC: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8030B9D0:
    ctx->pc = 0x8030B9D0u;
    // 8030B9D0: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030B9D4:
    ctx->pc = 0x8030B9D4u;
    // 8030B9D4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8030B9D8:
    ctx->pc = 0x8030B9D8u;
    // 8030B9D8: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030B9DC:
    ctx->pc = 0x8030B9DCu;
    // 8030B9DC: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030B9E0:
    ctx->pc = 0x8030B9E0u;
    // 8030B9E0: bl      0x8000E7F4
    {
            ctx->lr = 0x8030B9E4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030B9E4:
    ctx->pc = 0x8030B9E4u;
    ctx->downcount -= 2;
    // 8030B9E4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030B9E8:
    ctx->pc = 0x8030B9E8u;
    // 8030B9E8: bl      0x80270188
    {
            ctx->lr = 0x8030B9ECu;
            ctx->pc = 0x80270188u;
            return;
    }

label_8030B9EC:
    ctx->pc = 0x8030B9ECu;
    ctx->downcount -= 17;
    // 8030B9EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030B9F0:
    ctx->pc = 0x8030B9F0u;
    // 8030B9F0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030B9F4:
    ctx->pc = 0x8030B9F4u;
    // 8030B9F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030B9F8:
    ctx->pc = 0x8030B9F8u;
    // 8030B9F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030B9FC:
    ctx->pc = 0x8030B9FCu;
    // 8030B9FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BA00:
    ctx->pc = 0x8030BA00u;
    // 8030BA00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BA04:
    ctx->pc = 0x8030BA04u;
    ctx->downcount -= 18;
    // 8030BA04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BA08:
    ctx->pc = 0x8030BA08u;
    // 8030BA08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BA0C:
    // 8030BA0C: cmpwi   r3, 0
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

label_8030BA10:
    ctx->pc = 0x8030BA10u;
    // 8030BA10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BA14:
    ctx->pc = 0x8030BA14u;
    // 8030BA14: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BA18:
    // 8030BA18: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BA1C:
    // 8030BA1C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030BA20:
    // 8030BA20: bc    12, 2, 0x8030BA40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BA40;
        }
    }

label_8030BA24:
    ctx->downcount -= 1;
    // 8030BA24: bc    12, 2, 0x8030BA30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BA30;
        }
    }

label_8030BA28:
    ctx->downcount -= 2;
    // 8030BA28: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030BA2C:
    // 8030BA2C: bl      0x801F9B68
    {
            ctx->lr = 0x8030BA30u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8030BA30:
    ctx->downcount -= 2;
    // 8030BA30: cmpwi   r31, 0
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

label_8030BA34:
    // 8030BA34: bc    4, 1, 0x8030BA40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030BA40;
        }
    }

label_8030BA38:
    ctx->downcount -= 2;
    // 8030BA38: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030BA3C:
    // 8030BA3C: bl      0x801C1C90
    {
            ctx->lr = 0x8030BA40u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030BA40:
    ctx->downcount -= 17;
    // 8030BA40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030BA44:
    ctx->pc = 0x8030BA44u;
    // 8030BA44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030BA48:
    ctx->pc = 0x8030BA48u;
    // 8030BA48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BA4C:
    ctx->pc = 0x8030BA4Cu;
    // 8030BA4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BA50:
    // 8030BA50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BA54:
    ctx->pc = 0x8030BA54u;
    // 8030BA54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BA58:
    ctx->downcount -= 2;
    // 8030BA58: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030BA5C:
    // 8030BA5C: b       0x8030BA04
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BA04u;
                return;
            }
            goto label_8030BA04;
    }

label_8030BA60:
    ctx->downcount -= 2;
    // 8030BA60: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030BA64:
    // 8030BA64: b       0x8030BA04
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BA04u;
                return;
            }
            goto label_8030BA04;
    }

label_8030BA68:
    ctx->pc = 0x8030BA68u;
    ctx->downcount -= 21;
    // 8030BA68: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BA6C:
    ctx->pc = 0x8030BA6Cu;
    // 8030BA6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BA70:
    ctx->pc = 0x8030BA70u;
    // 8030BA70: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BA74:
    ctx->pc = 0x8030BA74u;
    // 8030BA74: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BA78:
    ctx->pc = 0x8030BA78u;
    // 8030BA78: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BA7C:
    ctx->pc = 0x8030BA7Cu;
    // 8030BA7C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BA80:
    ctx->pc = 0x8030BA80u;
    // 8030BA80: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BA84:
    ctx->pc = 0x8030BA84u;
    // 8030BA84: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BA88:
    ctx->pc = 0x8030BA88u;
    // 8030BA88: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BA8C:
    ctx->pc = 0x8030BA8Cu;
    // 8030BA8C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BA90u;
            ctx->pc = target;
            return;
        }
    }

label_8030BA90:
    ctx->pc = 0x8030BA90u;
    ctx->downcount -= 2;
    // 8030BA90: cmpwi   r3, 0
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

label_8030BA94:
    ctx->pc = 0x8030BA94u;
    // 8030BA94: bc    12, 2, 0x8030BB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BB10;
        }
    }

label_8030BA98:
    ctx->pc = 0x8030BA98u;
    ctx->downcount -= 6;
    // 8030BA98: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BA9C:
    ctx->pc = 0x8030BA9Cu;
    // 8030BA9C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BAA0:
    ctx->pc = 0x8030BAA0u;
    // 8030BAA0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BAA4:
    ctx->pc = 0x8030BAA4u;
    // 8030BAA4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BAA8:
    ctx->pc = 0x8030BAA8u;
    // 8030BAA8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BAACu;
            ctx->pc = target;
            return;
        }
    }

label_8030BAAC:
    ctx->pc = 0x8030BAACu;
    ctx->downcount -= 2;
    // 8030BAAC: cmpwi   r3, 0
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

label_8030BAB0:
    ctx->pc = 0x8030BAB0u;
    // 8030BAB0: bc    12, 2, 0x8030BB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BB10;
        }
    }

label_8030BAB4:
    ctx->pc = 0x8030BAB4u;
    ctx->downcount -= 6;
    // 8030BAB4: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BAB8:
    ctx->pc = 0x8030BAB8u;
    // 8030BAB8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BABC:
    ctx->pc = 0x8030BABCu;
    // 8030BABC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BAC0:
    ctx->pc = 0x8030BAC0u;
    // 8030BAC0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BAC4:
    ctx->pc = 0x8030BAC4u;
    // 8030BAC4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BAC8u;
            ctx->pc = target;
            return;
        }
    }

label_8030BAC8:
    ctx->pc = 0x8030BAC8u;
    ctx->downcount -= 2;
    // 8030BAC8: cmpwi   r3, 0
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

label_8030BACC:
    ctx->pc = 0x8030BACCu;
    // 8030BACC: bc    12, 2, 0x8030BB10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BB10;
        }
    }

label_8030BAD0:
    ctx->pc = 0x8030BAD0u;
    ctx->downcount -= 2;
    // 8030BAD0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030BAD4:
    ctx->pc = 0x8030BAD4u;
    // 8030BAD4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030BAD8:
    ctx->downcount -= 3;
    // 8030BAD8: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030BADC:
    ctx->pc = 0x8030BADCu;
    // 8030BADC: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BAE0:
    // 8030BAE0: bl      0x8036B2DC
    {
            ctx->lr = 0x8030BAE4u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_8030BAE4:
    ctx->downcount -= 4;
    // 8030BAE4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030BAE8:
    // 8030BAE8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030BAEC:
    // 8030BAEC: cmpwi   r30, 2
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

label_8030BAF0:
    // 8030BAF0: bc    12, 0, 0x8030BAD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BAD8u;
                return;
            }
            goto label_8030BAD8;
        }
    }

label_8030BAF4:
    ctx->pc = 0x8030BAF4u;
    ctx->downcount -= 2;
    // 8030BAF4: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BAF8:
    ctx->pc = 0x8030BAF8u;
    // 8030BAF8: bl      0x8026EEE8
    {
            ctx->lr = 0x8030BAFCu;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_8030BAFC:
    ctx->pc = 0x8030BAFCu;
    ctx->downcount -= 6;
    // 8030BAFC: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB00:
    ctx->pc = 0x8030BB00u;
    // 8030BB00: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030BB04:
    ctx->pc = 0x8030BB04u;
    // 8030BB04: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB08:
    ctx->pc = 0x8030BB08u;
    // 8030BB08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BB0C:
    ctx->pc = 0x8030BB0Cu;
    // 8030BB0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BB10u;
            ctx->pc = target;
            return;
        }
    }

label_8030BB10:
    ctx->pc = 0x8030BB10u;
    ctx->downcount -= 6;
    // 8030BB10: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BB14:
    ctx->pc = 0x8030BB14u;
    // 8030BB14: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030BB18:
    ctx->pc = 0x8030BB18u;
    // 8030BB18: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030BB1C:
    ctx->pc = 0x8030BB1Cu;
    // 8030BB1C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030BB20:
    ctx->pc = 0x8030BB20u;
    // 8030BB20: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030BB24:
    ctx->pc = 0x8030BB24u;
    // 8030BB24: bl      0x80370BD4
    {
            ctx->lr = 0x8030BB28u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030BB28:
    ctx->pc = 0x8030BB28u;
    ctx->downcount -= 3;
    // 8030BB28: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BB2C:
    ctx->pc = 0x8030BB2Cu;
    // 8030BB2C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BB30:
    ctx->pc = 0x8030BB30u;
    // 8030BB30: bl      0x80263ABC
    {
            ctx->lr = 0x8030BB34u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030BB34:
    ctx->pc = 0x8030BB34u;
    ctx->downcount -= 16;
    // 8030BB34: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030BB38:
    ctx->pc = 0x8030BB38u;
    // 8030BB38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BB3C:
    ctx->pc = 0x8030BB3Cu;
    // 8030BB3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BB40:
    ctx->pc = 0x8030BB40u;
    // 8030BB40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030BB44:
    ctx->pc = 0x8030BB44u;
    // 8030BB44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BB48:
    ctx->pc = 0x8030BB48u;
    ctx->downcount -= 11;
    // 8030BB48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BB4C:
    ctx->pc = 0x8030BB4Cu;
    // 8030BB4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BB50:
    ctx->pc = 0x8030BB50u;
    // 8030BB50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BB54:
    ctx->pc = 0x8030BB54u;
    // 8030BB54: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030BB58:
    ctx->pc = 0x8030BB58u;
    // 8030BB58: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BB5C:
    ctx->pc = 0x8030BB5Cu;
    // 8030BB5C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BB60:
    ctx->pc = 0x8030BB60u;
    // 8030BB60: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB64:
    ctx->pc = 0x8030BB64u;
    // 8030BB64: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB68:
    ctx->pc = 0x8030BB68u;
    // 8030BB68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BB6C:
    ctx->pc = 0x8030BB6Cu;
    // 8030BB6C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BB70u;
            ctx->pc = target;
            return;
        }
    }

label_8030BB70:
    ctx->pc = 0x8030BB70u;
    ctx->downcount -= 6;
    // 8030BB70: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BB74:
    ctx->pc = 0x8030BB74u;
    // 8030BB74: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB78:
    ctx->pc = 0x8030BB78u;
    // 8030BB78: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB7C:
    ctx->pc = 0x8030BB7Cu;
    // 8030BB7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BB80:
    ctx->pc = 0x8030BB80u;
    // 8030BB80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BB84u;
            ctx->pc = target;
            return;
        }
    }

label_8030BB84:
    ctx->pc = 0x8030BB84u;
    ctx->downcount -= 6;
    // 8030BB84: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BB88:
    ctx->pc = 0x8030BB88u;
    // 8030BB88: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB8C:
    ctx->pc = 0x8030BB8Cu;
    // 8030BB8C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BB90:
    ctx->pc = 0x8030BB90u;
    // 8030BB90: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BB94:
    ctx->pc = 0x8030BB94u;
    // 8030BB94: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BB98u;
            ctx->pc = target;
            return;
        }
    }

label_8030BB98:
    ctx->pc = 0x8030BB98u;
    ctx->downcount -= 6;
    // 8030BB98: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BB9C:
    ctx->pc = 0x8030BB9Cu;
    // 8030BB9C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030BBA0:
    ctx->pc = 0x8030BBA0u;
    // 8030BBA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BBA4:
    ctx->pc = 0x8030BBA4u;
    // 8030BBA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BBA8:
    ctx->pc = 0x8030BBA8u;
    // 8030BBA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BBAC:
    ctx->pc = 0x8030BBACu;
    ctx->downcount -= 19;
    // 8030BBAC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BBB0:
    ctx->pc = 0x8030BBB0u;
    // 8030BBB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BBB4:
    ctx->pc = 0x8030BBB4u;
    // 8030BBB4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BBB8:
    ctx->pc = 0x8030BBB8u;
    // 8030BBB8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BBBC:
    ctx->pc = 0x8030BBBCu;
    // 8030BBBC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BBC0:
    ctx->pc = 0x8030BBC0u;
    // 8030BBC0: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BBC4:
    ctx->pc = 0x8030BBC4u;
    // 8030BBC4: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BBC8:
    ctx->pc = 0x8030BBC8u;
    // 8030BBC8: cmpwi   r0, 0
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

label_8030BBCC:
    ctx->pc = 0x8030BBCCu;
    // 8030BBCC: bc    12, 2, 0x8030BBE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BBE8;
        }
    }

label_8030BBD0:
    ctx->pc = 0x8030BBD0u;
    ctx->downcount -= 3;
    // 8030BBD0: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BBD4:
    ctx->pc = 0x8030BBD4u;
    // 8030BBD4: cmpwi   r0, 0
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

label_8030BBD8:
    ctx->pc = 0x8030BBD8u;
    // 8030BBD8: bc    12, 2, 0x8030BBE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BBE8;
        }
    }

label_8030BBDC:
    ctx->pc = 0x8030BBDCu;
    ctx->downcount -= 3;
    // 8030BBDC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030BBE0:
    ctx->pc = 0x8030BBE0u;
    // 8030BBE0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030BBE4:
    ctx->pc = 0x8030BBE4u;
    // 8030BBE4: bl      0x803457B8
    {
            ctx->lr = 0x8030BBE8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030BBE8:
    ctx->pc = 0x8030BBE8u;
    ctx->downcount -= 2;
    // 8030BBE8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030BBEC:
    ctx->pc = 0x8030BBECu;
    // 8030BBEC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030BBF0:
    ctx->downcount -= 5;
    // 8030BBF0: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030BBF4:
    ctx->pc = 0x8030BBF4u;
    // 8030BBF4: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BBF8:
    ctx->pc = 0x8030BBF8u;
    // 8030BBF8: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BBFC:
    // 8030BBFC: cmpwi   r0, 0
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

label_8030BC00:
    // 8030BC00: bc    12, 2, 0x8030BC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BC1C;
        }
    }

label_8030BC04:
    ctx->pc = 0x8030BC04u;
    ctx->downcount -= 3;
    // 8030BC04: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BC08:
    // 8030BC08: cmpwi   r0, 0
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

label_8030BC0C:
    // 8030BC0C: bc    12, 2, 0x8030BC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BC1C;
        }
    }

label_8030BC10:
    ctx->downcount -= 3;
    // 8030BC10: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_8030BC14:
    // 8030BC14: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030BC18:
    // 8030BC18: bl      0x803457B8
    {
            ctx->lr = 0x8030BC1Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030BC1C:
    ctx->downcount -= 4;
    // 8030BC1C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030BC20:
    // 8030BC20: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030BC24:
    // 8030BC24: cmpwi   r30, 2
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

label_8030BC28:
    // 8030BC28: bc    12, 0, 0x8030BBF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BBF0u;
                return;
            }
            goto label_8030BBF0;
        }
    }

label_8030BC2C:
    ctx->pc = 0x8030BC2Cu;
    ctx->downcount -= 6;
    // 8030BC2C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BC30:
    ctx->pc = 0x8030BC30u;
    // 8030BC30: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030BC34:
    ctx->pc = 0x8030BC34u;
    // 8030BC34: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030BC38:
    ctx->pc = 0x8030BC38u;
    // 8030BC38: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030BC3C:
    ctx->pc = 0x8030BC3Cu;
    // 8030BC3C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030BC40:
    ctx->pc = 0x8030BC40u;
    // 8030BC40: bl      0x80370BD4
    {
            ctx->lr = 0x8030BC44u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030BC44:
    ctx->pc = 0x8030BC44u;
    ctx->downcount -= 3;
    // 8030BC44: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BC48:
    ctx->pc = 0x8030BC48u;
    // 8030BC48: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BC4C:
    ctx->pc = 0x8030BC4Cu;
    // 8030BC4C: bl      0x80263ABC
    {
            ctx->lr = 0x8030BC50u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030BC50:
    ctx->pc = 0x8030BC50u;
    ctx->downcount -= 16;
    // 8030BC50: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030BC54:
    ctx->pc = 0x8030BC54u;
    // 8030BC54: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BC58:
    ctx->pc = 0x8030BC58u;
    // 8030BC58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BC5C:
    ctx->pc = 0x8030BC5Cu;
    // 8030BC5C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030BC60:
    ctx->pc = 0x8030BC60u;
    // 8030BC60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BC64:
    ctx->pc = 0x8030BC64u;
    ctx->downcount -= 1;
    // 8030BC64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BC68:
    ctx->pc = 0x8030BC68u;
    ctx->downcount -= 10;
    // 8030BC68: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BC6C:
    ctx->pc = 0x8030BC6Cu;
    // 8030BC6C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BC70:
    ctx->pc = 0x8030BC70u;
    // 8030BC70: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030BC74:
    ctx->pc = 0x8030BC74u;
    // 8030BC74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BC78:
    ctx->pc = 0x8030BC78u;
    // 8030BC78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030BC7C:
    ctx->pc = 0x8030BC7Cu;
    // 8030BC7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BC80:
    ctx->pc = 0x8030BC80u;
    // 8030BC80: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BC84:
    ctx->pc = 0x8030BC84u;
    // 8030BC84: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BC88:
    ctx->pc = 0x8030BC88u;
    // 8030BC88: cmpwi   r0, 0
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

label_8030BC8C:
    ctx->pc = 0x8030BC8Cu;
    // 8030BC8C: bc    12, 2, 0x8030BC9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BC9C;
        }
    }

label_8030BC90:
    ctx->pc = 0x8030BC90u;
    ctx->downcount -= 3;
    // 8030BC90: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030BC94:
    ctx->pc = 0x8030BC94u;
    // 8030BC94: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BC98:
    ctx->pc = 0x8030BC98u;
    // 8030BC98: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8030BC9C:
    ctx->pc = 0x8030BC9Cu;
    ctx->downcount -= 7;
    // 8030BC9C: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8030BCA0:
    ctx->pc = 0x8030BCA0u;
    // 8030BCA0: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030BCA4:
    ctx->pc = 0x8030BCA4u;
    // 8030BCA4: or   r5, r9, r9
    {
        ctx->gpr[5] = ctx->gpr[9] | ctx->gpr[9];
    }

label_8030BCA8:
    ctx->pc = 0x8030BCA8u;
    // 8030BCA8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030BCAC:
    ctx->pc = 0x8030BCACu;
    // 8030BCAC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030BCB0:
    ctx->pc = 0x8030BCB0u;
    // 8030BCB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8030BCB4:
    ctx->downcount -= 5;
    // 8030BCB4: add   r7, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8030BCB8:
    ctx->pc = 0x8030BCB8u;
    // 8030BCB8: lwz     r7, 160(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(160);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8030BCBC:
    ctx->pc = 0x8030BCBCu;
    // 8030BCBC: lbz     r0, 209(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BCC0:
    // 8030BCC0: cmpwi   r0, 0
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

label_8030BCC4:
    // 8030BCC4: bc    12, 2, 0x8030BCE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BCE4;
        }
    }

label_8030BCC8:
    ctx->downcount -= 3;
    // 8030BCC8: cmpwi   r9, 1
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030BCCC:
    ctx->pc = 0x8030BCCCu;
    // 8030BCCC: stw     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030BCD0:
    // 8030BCD0: bc    4, 2, 0x8030BCDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030BCDC;
        }
    }

label_8030BCD4:
    ctx->pc = 0x8030BCD4u;
    ctx->downcount -= 2;
    // 8030BCD4: stw     r5, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030BCD8:
    // 8030BCD8: b       0x8030BCE0
    {
            goto label_8030BCE0;
    }

label_8030BCDC:
    ctx->pc = 0x8030BCDCu;
    ctx->downcount -= 1;
    // 8030BCDC: stw     r6, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030BCE0:
    ctx->downcount -= 1;
    // 8030BCE0: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8030BCE4:
    ctx->downcount -= 3;
    // 8030BCE4: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8030BCE8:
    // 8030BCE8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8030BCEC:
    // 8030BCEC: bc    16, 0, 0x8030BCB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BCB4u;
                return;
            }
            goto label_8030BCB4;
        }
    }

label_8030BCF0:
    ctx->pc = 0x8030BCF0u;
    ctx->downcount -= 2;
    // 8030BCF0: cmpwi   r8, 0
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030BCF4:
    ctx->pc = 0x8030BCF4u;
    // 8030BCF4: bc    12, 2, 0x8030BD28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BD28;
        }
    }

label_8030BCF8:
    ctx->pc = 0x8030BCF8u;
    ctx->downcount -= 6;
    // 8030BCF8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BCFC:
    ctx->pc = 0x8030BCFCu;
    // 8030BCFC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030BD00:
    ctx->pc = 0x8030BD00u;
    // 8030BD00: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030BD04:
    ctx->pc = 0x8030BD04u;
    // 8030BD04: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030BD08:
    ctx->pc = 0x8030BD08u;
    // 8030BD08: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030BD0C:
    ctx->pc = 0x8030BD0Cu;
    // 8030BD0C: bl      0x80370BD4
    {
            ctx->lr = 0x8030BD10u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030BD10:
    ctx->pc = 0x8030BD10u;
    ctx->downcount -= 3;
    // 8030BD10: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BD14:
    ctx->pc = 0x8030BD14u;
    // 8030BD14: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BD18:
    ctx->pc = 0x8030BD18u;
    // 8030BD18: bl      0x80263ABC
    {
            ctx->lr = 0x8030BD1Cu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030BD1C:
    ctx->pc = 0x8030BD1Cu;
    ctx->downcount -= 3;
    // 8030BD1C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030BD20:
    ctx->pc = 0x8030BD20u;
    // 8030BD20: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030BD24:
    ctx->pc = 0x8030BD24u;
    // 8030BD24: bl      0x803457B8
    {
            ctx->lr = 0x8030BD28u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030BD28:
    ctx->pc = 0x8030BD28u;
    ctx->downcount -= 2;
    // 8030BD28: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BD2C:
    ctx->pc = 0x8030BD2Cu;
    // 8030BD2C: bl      0x8026EE88
    {
            ctx->lr = 0x8030BD30u;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_8030BD30:
    ctx->pc = 0x8030BD30u;
    ctx->downcount -= 6;
    // 8030BD30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BD34:
    ctx->pc = 0x8030BD34u;
    // 8030BD34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030BD38:
    ctx->pc = 0x8030BD38u;
    // 8030BD38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BD3C:
    ctx->pc = 0x8030BD3Cu;
    // 8030BD3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BD40:
    ctx->pc = 0x8030BD40u;
    // 8030BD40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BD44:
    ctx->pc = 0x8030BD44u;
    ctx->downcount -= 2;
    // 8030BD44: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BD48:
    ctx->pc = 0x8030BD48u;
    // 8030BD48: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_8030BD4C:
    ctx->pc = 0x8030BD4Cu;
    ctx->downcount -= 7;
    // 8030BD4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BD50:
    ctx->pc = 0x8030BD50u;
    // 8030BD50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BD54:
    ctx->pc = 0x8030BD54u;
    // 8030BD54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BD58:
    ctx->pc = 0x8030BD58u;
    // 8030BD58: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BD5C:
    ctx->pc = 0x8030BD5Cu;
    // 8030BD5C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BD60:
    ctx->pc = 0x8030BD60u;
    // 8030BD60: cmpwi   r0, 0
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

label_8030BD64:
    ctx->pc = 0x8030BD64u;
    // 8030BD64: bc    12, 2, 0x8030BD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BD94;
        }
    }

label_8030BD68:
    ctx->pc = 0x8030BD68u;
    ctx->downcount -= 4;
    // 8030BD68: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BD6C:
    ctx->pc = 0x8030BD6Cu;
    // 8030BD6C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BD70:
    ctx->pc = 0x8030BD70u;
    // 8030BD70: cmpwi   r0, 0
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

label_8030BD74:
    ctx->pc = 0x8030BD74u;
    // 8030BD74: bc    12, 2, 0x8030BD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BD94;
        }
    }

label_8030BD78:
    ctx->pc = 0x8030BD78u;
    ctx->downcount -= 4;
    // 8030BD78: lwz     r4, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BD7C:
    ctx->pc = 0x8030BD7Cu;
    // 8030BD7C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030BD80:
    ctx->pc = 0x8030BD80u;
    // 8030BD80: cmpwi   r0, 0
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

label_8030BD84:
    ctx->pc = 0x8030BD84u;
    // 8030BD84: bc    12, 2, 0x8030BD94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BD94;
        }
    }

label_8030BD88:
    ctx->pc = 0x8030BD88u;
    ctx->downcount -= 3;
    // 8030BD88: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030BD8C:
    ctx->pc = 0x8030BD8Cu;
    // 8030BD8C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030BD90:
    ctx->pc = 0x8030BD90u;
    // 8030BD90: bl      0x803457B8
    {
            ctx->lr = 0x8030BD94u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030BD94:
    ctx->pc = 0x8030BD94u;
    ctx->downcount -= 6;
    // 8030BD94: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BD98:
    ctx->pc = 0x8030BD98u;
    // 8030BD98: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030BD9C:
    ctx->pc = 0x8030BD9Cu;
    // 8030BD9C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030BDA0:
    ctx->pc = 0x8030BDA0u;
    // 8030BDA0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030BDA4:
    ctx->pc = 0x8030BDA4u;
    // 8030BDA4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030BDA8:
    ctx->pc = 0x8030BDA8u;
    // 8030BDA8: bl      0x80370BD4
    {
            ctx->lr = 0x8030BDACu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030BDAC:
    ctx->pc = 0x8030BDACu;
    ctx->downcount -= 3;
    // 8030BDAC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BDB0:
    ctx->pc = 0x8030BDB0u;
    // 8030BDB0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BDB4:
    ctx->pc = 0x8030BDB4u;
    // 8030BDB4: bl      0x80263ABC
    {
            ctx->lr = 0x8030BDB8u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030BDB8:
    ctx->pc = 0x8030BDB8u;
    ctx->downcount -= 5;
    // 8030BDB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BDBC:
    ctx->pc = 0x8030BDBCu;
    // 8030BDBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BDC0:
    ctx->pc = 0x8030BDC0u;
    // 8030BDC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BDC4:
    ctx->pc = 0x8030BDC4u;
    // 8030BDC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BDC8:
    ctx->pc = 0x8030BDC8u;
    ctx->downcount -= 19;
    // 8030BDC8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BDCC:
    ctx->pc = 0x8030BDCCu;
    // 8030BDCC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BDD0:
    ctx->pc = 0x8030BDD0u;
    // 8030BDD0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BDD4:
    ctx->pc = 0x8030BDD4u;
    // 8030BDD4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BDD8:
    ctx->pc = 0x8030BDD8u;
    // 8030BDD8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BDDC:
    ctx->pc = 0x8030BDDCu;
    // 8030BDDC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BDE0:
    ctx->pc = 0x8030BDE0u;
    // 8030BDE0: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BDE4:
    ctx->pc = 0x8030BDE4u;
    // 8030BDE4: lwz     r5, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030BDE8:
    ctx->pc = 0x8030BDE8u;
    // 8030BDE8: bl      0x803554B8
    {
            ctx->lr = 0x8030BDECu;
            ctx->pc = 0x803554B8u;
            return;
    }

label_8030BDEC:
    ctx->pc = 0x8030BDECu;
    ctx->downcount -= 6;
    // 8030BDEC: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BDF0:
    ctx->pc = 0x8030BDF0u;
    // 8030BDF0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BDF4:
    ctx->pc = 0x8030BDF4u;
    // 8030BDF4: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BDF8:
    ctx->pc = 0x8030BDF8u;
    // 8030BDF8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BDFC:
    ctx->pc = 0x8030BDFCu;
    // 8030BDFC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BE00u;
            ctx->pc = target;
            return;
        }
    }

label_8030BE00:
    ctx->pc = 0x8030BE00u;
    ctx->downcount -= 3;
    // 8030BE00: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BE04:
    ctx->pc = 0x8030BE04u;
    // 8030BE04: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8030BE08:
    ctx->pc = 0x8030BE08u;
    // 8030BE08: bl      0x802E3C9C
    {
            ctx->lr = 0x8030BE0Cu;
            ctx->pc = 0x802E3C9Cu;
            return;
    }

label_8030BE0C:
    ctx->pc = 0x8030BE0Cu;
    ctx->downcount -= 2;
    // 8030BE0C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030BE10:
    ctx->pc = 0x8030BE10u;
    // 8030BE10: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030BE14:
    ctx->downcount -= 4;
    // 8030BE14: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030BE18:
    // 8030BE18: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BE1C:
    ctx->pc = 0x8030BE1Cu;
    // 8030BE1C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BE20:
    // 8030BE20: bl      0x8036B330
    {
            ctx->lr = 0x8030BE24u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_8030BE24:
    ctx->downcount -= 4;
    // 8030BE24: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030BE28:
    // 8030BE28: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030BE2C:
    // 8030BE2C: cmpwi   r30, 2
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

label_8030BE30:
    // 8030BE30: bc    12, 0, 0x8030BE14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BE14u;
                return;
            }
            goto label_8030BE14;
        }
    }

label_8030BE34:
    ctx->pc = 0x8030BE34u;
    ctx->downcount -= 3;
    // 8030BE34: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BE38:
    ctx->pc = 0x8030BE38u;
    // 8030BE38: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030BE3C:
    ctx->pc = 0x8030BE3Cu;
    // 8030BE3C: bl      0x8026F12C
    {
            ctx->lr = 0x8030BE40u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_8030BE40:
    ctx->pc = 0x8030BE40u;
    ctx->downcount -= 8;
    // 8030BE40: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BE44:
    ctx->pc = 0x8030BE44u;
    // 8030BE44: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030BE48:
    ctx->pc = 0x8030BE48u;
    // 8030BE48: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030BE4C:
    ctx->pc = 0x8030BE4Cu;
    // 8030BE4C: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BE50:
    ctx->pc = 0x8030BE50u;
    // 8030BE50: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BE54:
    ctx->pc = 0x8030BE54u;
    // 8030BE54: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BE58:
    ctx->pc = 0x8030BE58u;
    // 8030BE58: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BE5Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030BE5C:
    ctx->pc = 0x8030BE5Cu;
    ctx->downcount -= 16;
    // 8030BE5C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030BE60:
    ctx->pc = 0x8030BE60u;
    // 8030BE60: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BE64:
    ctx->pc = 0x8030BE64u;
    // 8030BE64: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BE68:
    ctx->pc = 0x8030BE68u;
    // 8030BE68: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030BE6C:
    ctx->pc = 0x8030BE6Cu;
    // 8030BE6C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BE70:
    ctx->pc = 0x8030BE70u;
    ctx->downcount -= 8;
    // 8030BE70: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BE74:
    ctx->pc = 0x8030BE74u;
    // 8030BE74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BE78:
    ctx->pc = 0x8030BE78u;
    // 8030BE78: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BE7C:
    ctx->pc = 0x8030BE7Cu;
    // 8030BE7C: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030BE80:
    ctx->pc = 0x8030BE80u;
    // 8030BE80: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030BE84:
    ctx->pc = 0x8030BE84u;
    // 8030BE84: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BE88:
    ctx->pc = 0x8030BE88u;
    // 8030BE88: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BE8C:
    ctx->pc = 0x8030BE8Cu;
    // 8030BE8C: bl      0x8036E67C
    {
            ctx->lr = 0x8030BE90u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_8030BE90:
    ctx->pc = 0x8030BE90u;
    ctx->downcount -= 8;
    // 8030BE90: lfs     f0, -11936(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030BE90u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11936);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030BE94:
    ctx->pc = 0x8030BE94u;
    // 8030BE94: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BE98:
    ctx->pc = 0x8030BE98u;
    // 8030BE98: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BE98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030BE9C:
    ctx->pc = 0x8030BE9Cu;
    // 8030BE9C: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_8030BEA0:
    ctx->pc = 0x8030BEA0u;
    // 8030BEA0: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030BEA4:
    ctx->pc = 0x8030BEA4u;
    // 8030BEA4: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030BEA8:
    ctx->pc = 0x8030BEA8u;
    // 8030BEA8: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BEAC:
    ctx->pc = 0x8030BEACu;
    // 8030BEAC: bl      0x8030B91C
    {
            ctx->lr = 0x8030BEB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B91Cu;
                return;
            }
            goto label_8030B91C;
    }

label_8030BEB0:
    ctx->pc = 0x8030BEB0u;
    ctx->downcount -= 9;
    // 8030BEB0: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030BEB4:
    ctx->pc = 0x8030BEB4u;
    // 8030BEB4: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8030BEB8:
    ctx->pc = 0x8030BEB8u;
    // 8030BEB8: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEB8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030BEBC:
    ctx->pc = 0x8030BEBCu;
    // 8030BEBC: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030BEC0:
    ctx->pc = 0x8030BEC0u;
    // 8030BEC0: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEC0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8030BEC4:
    ctx->pc = 0x8030BEC4u;
    // 8030BEC4: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030BEC8:
    ctx->pc = 0x8030BEC8u;
    // 8030BEC8: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEC8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030BECC:
    ctx->pc = 0x8030BECCu;
    // 8030BECC: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BED0:
    ctx->pc = 0x8030BED0u;
    // 8030BED0: bl      0x8036B284
    {
            ctx->lr = 0x8030BED4u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_8030BED4:
    ctx->pc = 0x8030BED4u;
    ctx->downcount -= 3;
    // 8030BED4: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BED8:
    ctx->pc = 0x8030BED8u;
    // 8030BED8: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_8030BEDC:
    ctx->pc = 0x8030BEDCu;
    // 8030BEDC: bl      0x8036B244
    {
            ctx->lr = 0x8030BEE0u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_8030BEE0:
    ctx->pc = 0x8030BEE0u;
    ctx->downcount -= 3;
    // 8030BEE0: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030BEE4:
    ctx->pc = 0x8030BEE4u;
    // 8030BEE4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030BEE8:
    ctx->pc = 0x8030BEE8u;
    // 8030BEE8: bl      0x8030B8BC
    {
            ctx->lr = 0x8030BEECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B8BCu;
                return;
            }
            goto label_8030B8BC;
    }

label_8030BEEC:
    ctx->pc = 0x8030BEECu;
    ctx->downcount -= 9;
    // 8030BEEC: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030BEF0:
    ctx->pc = 0x8030BEF0u;
    // 8030BEF0: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8030BEF4:
    ctx->pc = 0x8030BEF4u;
    // 8030BEF4: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030BEF8:
    ctx->pc = 0x8030BEF8u;
    // 8030BEF8: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030BEFC:
    ctx->pc = 0x8030BEFCu;
    // 8030BEFC: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BEFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8030BF00:
    ctx->pc = 0x8030BF00u;
    // 8030BF00: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BF00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030BF04:
    ctx->pc = 0x8030BF04u;
    // 8030BF04: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030BF04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030BF08:
    ctx->pc = 0x8030BF08u;
    // 8030BF08: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BF0C:
    ctx->pc = 0x8030BF0Cu;
    // 8030BF0C: bl      0x8036B284
    {
            ctx->lr = 0x8030BF10u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_8030BF10:
    ctx->pc = 0x8030BF10u;
    ctx->downcount -= 3;
    // 8030BF10: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BF14:
    ctx->pc = 0x8030BF14u;
    // 8030BF14: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_8030BF18:
    ctx->pc = 0x8030BF18u;
    // 8030BF18: bl      0x8036B244
    {
            ctx->lr = 0x8030BF1Cu;
            ctx->pc = 0x8036B244u;
            return;
    }

label_8030BF1C:
    ctx->pc = 0x8030BF1Cu;
    ctx->downcount -= 7;
    // 8030BF1C: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BF20:
    ctx->pc = 0x8030BF20u;
    // 8030BF20: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030BF24:
    ctx->pc = 0x8030BF24u;
    // 8030BF24: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8030BF28:
    ctx->pc = 0x8030BF28u;
    // 8030BF28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BF2C:
    ctx->pc = 0x8030BF2Cu;
    // 8030BF2C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8030BF30:
    ctx->pc = 0x8030BF30u;
    // 8030BF30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BF34:
    ctx->pc = 0x8030BF34u;
    ctx->downcount -= 21;
    // 8030BF34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BF38:
    ctx->pc = 0x8030BF38u;
    // 8030BF38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BF3C:
    ctx->pc = 0x8030BF3Cu;
    // 8030BF3C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BF40:
    ctx->pc = 0x8030BF40u;
    // 8030BF40: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BF44:
    ctx->pc = 0x8030BF44u;
    // 8030BF44: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BF48:
    ctx->pc = 0x8030BF48u;
    // 8030BF48: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030BF4C:
    ctx->pc = 0x8030BF4Cu;
    // 8030BF4C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BF50:
    ctx->pc = 0x8030BF50u;
    // 8030BF50: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BF54:
    ctx->pc = 0x8030BF54u;
    // 8030BF54: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BF58:
    ctx->pc = 0x8030BF58u;
    // 8030BF58: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BF5Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030BF5C:
    ctx->pc = 0x8030BF5Cu;
    ctx->downcount -= 2;
    // 8030BF5C: cmpwi   r3, 0
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

label_8030BF60:
    ctx->pc = 0x8030BF60u;
    // 8030BF60: bc    4, 2, 0x8030BF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030BF90;
        }
    }

label_8030BF64:
    ctx->pc = 0x8030BF64u;
    ctx->downcount -= 3;
    // 8030BF64: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BF68:
    ctx->pc = 0x8030BF68u;
    // 8030BF68: cmpwi   r0, 0
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

label_8030BF6C:
    ctx->pc = 0x8030BF6Cu;
    // 8030BF6C: bc    12, 2, 0x8030BF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030BF90;
        }
    }

label_8030BF70:
    ctx->pc = 0x8030BF70u;
    ctx->downcount -= 4;
    // 8030BF70: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030BF74:
    ctx->pc = 0x8030BF74u;
    // 8030BF74: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030BF78:
    ctx->pc = 0x8030BF78u;
    // 8030BF78: addi    r4, r4, 19952
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(19952);

label_8030BF7C:
    ctx->pc = 0x8030BF7Cu;
    // 8030BF7C: bl      0x8000E8B0
    {
            ctx->lr = 0x8030BF80u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_8030BF80:
    ctx->pc = 0x8030BF80u;
    ctx->downcount -= 2;
    // 8030BF80: cmpwi   r3, 0
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

label_8030BF84:
    ctx->pc = 0x8030BF84u;
    // 8030BF84: bc    4, 2, 0x8030BF90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030BF90;
        }
    }

label_8030BF88:
    ctx->pc = 0x8030BF88u;
    ctx->downcount -= 2;
    // 8030BF88: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030BF8C:
    ctx->pc = 0x8030BF8Cu;
    // 8030BF8C: bl      0x8030BE70
    {
            ctx->lr = 0x8030BF90u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030BE70u;
                return;
            }
            goto label_8030BE70;
    }

label_8030BF90:
    ctx->pc = 0x8030BF90u;
    ctx->downcount -= 16;
    // 8030BF90: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030BF94:
    ctx->pc = 0x8030BF94u;
    // 8030BF94: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030BF98:
    ctx->pc = 0x8030BF98u;
    // 8030BF98: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030BF9C:
    ctx->pc = 0x8030BF9Cu;
    // 8030BF9C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030BFA0:
    ctx->pc = 0x8030BFA0u;
    // 8030BFA0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030BFA4:
    ctx->pc = 0x8030BFA4u;
    ctx->downcount -= 21;
    // 8030BFA4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030BFA8:
    ctx->pc = 0x8030BFA8u;
    // 8030BFA8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030BFAC:
    ctx->pc = 0x8030BFACu;
    // 8030BFAC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030BFB0:
    ctx->pc = 0x8030BFB0u;
    // 8030BFB0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030BFB4:
    ctx->pc = 0x8030BFB4u;
    // 8030BFB4: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_8030BFB8:
    ctx->pc = 0x8030BFB8u;
    // 8030BFB8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BFBC:
    ctx->pc = 0x8030BFBCu;
    // 8030BFBC: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030BFC0:
    ctx->pc = 0x8030BFC0u;
    // 8030BFC0: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030BFC4:
    ctx->pc = 0x8030BFC4u;
    // 8030BFC4: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030BFC8:
    ctx->pc = 0x8030BFC8u;
    // 8030BFC8: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030BFCC:
    ctx->pc = 0x8030BFCCu;
    // 8030BFCC: bl      0x80370BD4
    {
            ctx->lr = 0x8030BFD0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030BFD0:
    ctx->pc = 0x8030BFD0u;
    ctx->downcount -= 7;
    // 8030BFD0: lwz     r3, 168(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030BFD4:
    ctx->pc = 0x8030BFD4u;
    // 8030BFD4: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030BFD8:
    ctx->pc = 0x8030BFD8u;
    // 8030BFD8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BFDC:
    ctx->pc = 0x8030BFDCu;
    // 8030BFDC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030BFE0:
    ctx->pc = 0x8030BFE0u;
    // 8030BFE0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030BFE4:
    ctx->pc = 0x8030BFE4u;
    // 8030BFE4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030BFE8u;
            ctx->pc = target;
            return;
        }
    }

label_8030BFE8:
    ctx->pc = 0x8030BFE8u;
    ctx->downcount -= 5;
    // 8030BFE8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030BFEC:
    ctx->pc = 0x8030BFECu;
    // 8030BFEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030BFF0:
    ctx->pc = 0x8030BFF0u;
    // 8030BFF0: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030BFF4:
    ctx->pc = 0x8030BFF4u;
    // 8030BFF4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030BFF8:
    ctx->pc = 0x8030BFF8u;
    // 8030BFF8: bl      0x8027714C
    {
            ctx->lr = 0x8030BFFCu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030BFFC:
    ctx->pc = 0x8030BFFCu;
    ctx->downcount -= 5;
    // 8030BFFC: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C000:
    ctx->pc = 0x8030C000u;
    // 8030C000: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030C004:
    ctx->pc = 0x8030C004u;
    // 8030C004: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030C008:
    ctx->pc = 0x8030C008u;
    // 8030C008: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030C00C:
    ctx->pc = 0x8030C00Cu;
    // 8030C00C: bl      0x80370BD4
    {
            ctx->lr = 0x8030C010u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030C010:
    ctx->pc = 0x8030C010u;
    ctx->downcount -= 7;
    // 8030C010: lwz     r3, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C014:
    ctx->pc = 0x8030C014u;
    // 8030C014: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C018:
    ctx->pc = 0x8030C018u;
    // 8030C018: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C01C:
    ctx->pc = 0x8030C01Cu;
    // 8030C01C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C020:
    ctx->pc = 0x8030C020u;
    // 8030C020: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030C024:
    ctx->pc = 0x8030C024u;
    // 8030C024: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030C028u;
            ctx->pc = target;
            return;
        }
    }

label_8030C028:
    ctx->pc = 0x8030C028u;
    ctx->downcount -= 5;
    // 8030C028: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C02C:
    ctx->pc = 0x8030C02Cu;
    // 8030C02C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C030:
    ctx->pc = 0x8030C030u;
    // 8030C030: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030C034:
    ctx->pc = 0x8030C034u;
    // 8030C034: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030C038:
    ctx->pc = 0x8030C038u;
    // 8030C038: bl      0x8027714C
    {
            ctx->lr = 0x8030C03Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030C03C:
    ctx->pc = 0x8030C03Cu;
    ctx->downcount -= 2;
    // 8030C03C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030C040:
    ctx->pc = 0x8030C040u;
    // 8030C040: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030C044:
    ctx->pc = 0x8030C044u;
    ctx->downcount -= 5;
    // 8030C044: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C048:
    // 8030C048: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030C04C:
    // 8030C04C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030C050:
    // 8030C050: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030C054:
    // 8030C054: bl      0x80370BD4
    {
            ctx->lr = 0x8030C058u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030C058:
    ctx->downcount -= 8;
    // 8030C058: add   r3, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030C05C:
    ctx->pc = 0x8030C05Cu;
    // 8030C05C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8030C060:
    ctx->pc = 0x8030C060u;
    // 8030C060: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C064:
    ctx->pc = 0x8030C064u;
    // 8030C064: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C068:
    ctx->pc = 0x8030C068u;
    // 8030C068: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C06C:
    ctx->pc = 0x8030C06Cu;
    // 8030C06C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030C070:
    ctx->pc = 0x8030C070u;
    // 8030C070: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030C074u;
            ctx->pc = target;
            return;
        }
    }

label_8030C074:
    ctx->downcount -= 5;
    // 8030C074: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C078:
    // 8030C078: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C07C:
    // 8030C07C: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030C080:
    // 8030C080: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030C084:
    // 8030C084: bl      0x8027714C
    {
            ctx->lr = 0x8030C088u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030C088:
    ctx->downcount -= 4;
    // 8030C088: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030C08C:
    // 8030C08C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030C090:
    // 8030C090: cmpwi   r28, 2
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

label_8030C094:
    // 8030C094: bc    12, 0, 0x8030C044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C044u;
                return;
            }
            goto label_8030C044;
        }
    }

label_8030C098:
    ctx->pc = 0x8030C098u;
    ctx->downcount -= 2;
    // 8030C098: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C09C:
    ctx->pc = 0x8030C09Cu;
    // 8030C09C: bl      0x8030B8A8
    {
            ctx->lr = 0x8030C0A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B8A8u;
                return;
            }
            goto label_8030B8A8;
    }

label_8030C0A0:
    ctx->pc = 0x8030C0A0u;
    ctx->downcount -= 8;
    // 8030C0A0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C0A4:
    ctx->pc = 0x8030C0A4u;
    // 8030C0A4: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C0A8:
    ctx->pc = 0x8030C0A8u;
    // 8030C0A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C0AC:
    ctx->pc = 0x8030C0ACu;
    // 8030C0AC: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_8030C0B0:
    ctx->pc = 0x8030C0B0u;
    // 8030C0B0: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_8030C0B4:
    ctx->pc = 0x8030C0B4u;
    // 8030C0B4: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_8030C0B8:
    ctx->pc = 0x8030C0B8u;
    // 8030C0B8: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8030C0BC:
    ctx->pc = 0x8030C0BCu;
    // 8030C0BC: bl      0x8026F158
    {
            ctx->lr = 0x8030C0C0u;
            ctx->pc = 0x8026F158u;
            return;
    }

label_8030C0C0:
    ctx->pc = 0x8030C0C0u;
    ctx->downcount -= 2;
    // 8030C0C0: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C0C4:
    ctx->pc = 0x8030C0C4u;
    // 8030C0C4: bl      0x8030B898
    {
            ctx->lr = 0x8030C0C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B898u;
                return;
            }
            goto label_8030B898;
    }

label_8030C0C8:
    ctx->pc = 0x8030C0C8u;
    ctx->downcount -= 8;
    // 8030C0C8: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C0CC:
    ctx->pc = 0x8030C0CCu;
    // 8030C0CC: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C0D0:
    ctx->pc = 0x8030C0D0u;
    // 8030C0D0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030C0D4:
    ctx->pc = 0x8030C0D4u;
    // 8030C0D4: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_8030C0D8:
    ctx->pc = 0x8030C0D8u;
    // 8030C0D8: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_8030C0DC:
    ctx->pc = 0x8030C0DCu;
    // 8030C0DC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030C0E0:
    ctx->pc = 0x8030C0E0u;
    // 8030C0E0: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_8030C0E4:
    ctx->pc = 0x8030C0E4u;
    // 8030C0E4: bl      0x8026F158
    {
            ctx->lr = 0x8030C0E8u;
            ctx->pc = 0x8026F158u;
            return;
    }

label_8030C0E8:
    ctx->pc = 0x8030C0E8u;
    ctx->downcount -= 2;
    // 8030C0E8: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C0EC:
    ctx->pc = 0x8030C0ECu;
    // 8030C0EC: bl      0x8030B8A8
    {
            ctx->lr = 0x8030C0F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B8A8u;
                return;
            }
            goto label_8030B8A8;
    }

label_8030C0F0:
    ctx->pc = 0x8030C0F0u;
    ctx->downcount -= 3;
    // 8030C0F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C0F4:
    ctx->pc = 0x8030C0F4u;
    // 8030C0F4: lwz     r3, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C0F8:
    ctx->pc = 0x8030C0F8u;
    // 8030C0F8: bl      0x8036B234
    {
            ctx->lr = 0x8030C0FCu;
            ctx->pc = 0x8036B234u;
            return;
    }

label_8030C0FC:
    ctx->pc = 0x8030C0FCu;
    ctx->downcount -= 2;
    // 8030C0FC: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C100:
    ctx->pc = 0x8030C100u;
    // 8030C100: bl      0x8030B898
    {
            ctx->lr = 0x8030C104u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B898u;
                return;
            }
            goto label_8030B898;
    }

label_8030C104:
    ctx->pc = 0x8030C104u;
    ctx->downcount -= 3;
    // 8030C104: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C108:
    ctx->pc = 0x8030C108u;
    // 8030C108: lwz     r3, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C10C:
    ctx->pc = 0x8030C10Cu;
    // 8030C10C: bl      0x8036B234
    {
            ctx->lr = 0x8030C110u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_8030C110:
    ctx->pc = 0x8030C110u;
    ctx->downcount -= 16;
    // 8030C110: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C114:
    ctx->pc = 0x8030C114u;
    // 8030C114: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C118:
    ctx->pc = 0x8030C118u;
    // 8030C118: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C11C:
    ctx->pc = 0x8030C11Cu;
    // 8030C11C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030C120:
    ctx->pc = 0x8030C120u;
    // 8030C120: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C124:
    ctx->pc = 0x8030C124u;
    ctx->downcount -= 9;
    // 8030C124: stw     r4, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C128:
    ctx->pc = 0x8030C128u;
    // 8030C128: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030C12C:
    ctx->pc = 0x8030C12Cu;
    // 8030C12C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C130:
    ctx->pc = 0x8030C130u;
    // 8030C130: lwz     r5, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030C134:
    ctx->pc = 0x8030C134u;
    // 8030C134: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030C138:
    ctx->pc = 0x8030C138u;
    // 8030C138: stw     r5, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030C13C:
    ctx->pc = 0x8030C13Cu;
    // 8030C13C: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C140:
    ctx->pc = 0x8030C140u;
    // 8030C140: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030C144:
    ctx->pc = 0x8030C144u;
    // 8030C144: b       0x803457B8
    {
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030C148:
    ctx->pc = 0x8030C148u;
    ctx->downcount -= 21;
    // 8030C148: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C14C:
    ctx->pc = 0x8030C14Cu;
    // 8030C14C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C150:
    ctx->pc = 0x8030C150u;
    // 8030C150: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C154:
    ctx->pc = 0x8030C154u;
    // 8030C154: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C158:
    ctx->pc = 0x8030C158u;
    // 8030C158: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C15C:
    ctx->pc = 0x8030C15Cu;
    // 8030C15C: lis     r31, -32659
    ctx->gpr[31] = ((u32)(s32)(-32659) << 16);

label_8030C160:
    ctx->pc = 0x8030C160u;
    // 8030C160: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C164:
    ctx->pc = 0x8030C164u;
    // 8030C164: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8030C168:
    ctx->pc = 0x8030C168u;
    // 8030C168: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C16C:
    ctx->pc = 0x8030C16Cu;
    // 8030C16C: addi    r31, r31, -32320
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-32320);

label_8030C170:
    ctx->pc = 0x8030C170u;
    // 8030C170: bl      0x8030C54C
    {
            ctx->lr = 0x8030C174u;
            goto label_8030C54C;
    }

label_8030C174:
    ctx->pc = 0x8030C174u;
    ctx->downcount -= 10;
    // 8030C174: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030C178:
    ctx->pc = 0x8030C178u;
    // 8030C178: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C17C:
    ctx->pc = 0x8030C17Cu;
    // 8030C17C: addi    r4, r4, -32184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-32184);

label_8030C180:
    ctx->pc = 0x8030C180u;
    // 8030C180: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C184:
    ctx->pc = 0x8030C184u;
    // 8030C184: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030C188:
    ctx->pc = 0x8030C188u;
    // 8030C188: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_8030C18C:
    ctx->pc = 0x8030C18Cu;
    // 8030C18C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C190:
    ctx->pc = 0x8030C190u;
    // 8030C190: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_8030C194:
    ctx->pc = 0x8030C194u;
    // 8030C194: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030C198:
    ctx->pc = 0x8030C198u;
    // 8030C198: bl      0x8030C46C
    {
            ctx->lr = 0x8030C19Cu;
            goto label_8030C46C;
    }

label_8030C19C:
    ctx->pc = 0x8030C19Cu;
    ctx->downcount -= 5;
    // 8030C19C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C1A0:
    ctx->pc = 0x8030C1A0u;
    // 8030C1A0: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_8030C1A4:
    ctx->pc = 0x8030C1A4u;
    // 8030C1A4: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_8030C1A8:
    ctx->pc = 0x8030C1A8u;
    // 8030C1A8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030C1AC:
    ctx->pc = 0x8030C1ACu;
    // 8030C1AC: bl      0x8030C46C
    {
            ctx->lr = 0x8030C1B0u;
            goto label_8030C46C;
    }

label_8030C1B0:
    ctx->pc = 0x8030C1B0u;
    ctx->downcount -= 5;
    // 8030C1B0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C1B4:
    ctx->pc = 0x8030C1B4u;
    // 8030C1B4: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_8030C1B8:
    ctx->pc = 0x8030C1B8u;
    // 8030C1B8: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_8030C1BC:
    ctx->pc = 0x8030C1BCu;
    // 8030C1BC: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8030C1C0:
    ctx->pc = 0x8030C1C0u;
    // 8030C1C0: bl      0x8030C46C
    {
            ctx->lr = 0x8030C1C4u;
            goto label_8030C46C;
    }

label_8030C1C4:
    ctx->pc = 0x8030C1C4u;
    ctx->downcount -= 5;
    // 8030C1C4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C1C8:
    ctx->pc = 0x8030C1C8u;
    // 8030C1C8: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_8030C1CC:
    ctx->pc = 0x8030C1CCu;
    // 8030C1CC: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_8030C1D0:
    ctx->pc = 0x8030C1D0u;
    // 8030C1D0: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_8030C1D4:
    ctx->pc = 0x8030C1D4u;
    // 8030C1D4: bl      0x8030C46C
    {
            ctx->lr = 0x8030C1D8u;
            goto label_8030C46C;
    }

label_8030C1D8:
    ctx->pc = 0x8030C1D8u;
    ctx->downcount -= 4;
    // 8030C1D8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C1DC:
    ctx->pc = 0x8030C1DCu;
    // 8030C1DC: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_8030C1E0:
    ctx->pc = 0x8030C1E0u;
    // 8030C1E0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C1E4:
    ctx->pc = 0x8030C1E4u;
    // 8030C1E4: bl      0x801C1C5C
    {
            ctx->lr = 0x8030C1E8u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030C1E8:
    ctx->pc = 0x8030C1E8u;
    ctx->downcount -= 2;
    // 8030C1E8: cmpwi   r3, 0
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

label_8030C1EC:
    ctx->pc = 0x8030C1ECu;
    // 8030C1EC: bc    12, 2, 0x8030C1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C1F8;
        }
    }

label_8030C1F0:
    ctx->pc = 0x8030C1F0u;
    ctx->downcount -= 2;
    // 8030C1F0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C1F4:
    ctx->pc = 0x8030C1F4u;
    // 8030C1F4: bl      0x803554FC
    {
            ctx->lr = 0x8030C1F8u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_8030C1F8:
    ctx->pc = 0x8030C1F8u;
    ctx->downcount -= 5;
    // 8030C1F8: stw     r3, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C1FC:
    ctx->pc = 0x8030C1FCu;
    // 8030C1FC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C200:
    ctx->pc = 0x8030C200u;
    // 8030C200: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_8030C204:
    ctx->pc = 0x8030C204u;
    // 8030C204: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C208:
    ctx->pc = 0x8030C208u;
    // 8030C208: bl      0x801C1C5C
    {
            ctx->lr = 0x8030C20Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030C20C:
    ctx->pc = 0x8030C20Cu;
    ctx->downcount -= 2;
    // 8030C20C: cmpwi   r3, 0
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

label_8030C210:
    ctx->pc = 0x8030C210u;
    // 8030C210: bc    12, 2, 0x8030C21C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C21C;
        }
    }

label_8030C214:
    ctx->pc = 0x8030C214u;
    ctx->downcount -= 2;
    // 8030C214: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C218:
    ctx->pc = 0x8030C218u;
    // 8030C218: bl      0x8030B97C
    {
            ctx->lr = 0x8030C21Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030B97Cu;
                return;
            }
            goto label_8030B97C;
    }

label_8030C21C:
    ctx->pc = 0x8030C21Cu;
    ctx->downcount -= 3;
    // 8030C21C: stw     r3, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C220:
    ctx->pc = 0x8030C220u;
    // 8030C220: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030C224:
    ctx->pc = 0x8030C224u;
    // 8030C224: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030C228:
    ctx->downcount -= 4;
    // 8030C228: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C22C:
    // 8030C22C: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_8030C230:
    // 8030C230: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C234:
    // 8030C234: bl      0x801C1C5C
    {
            ctx->lr = 0x8030C238u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030C238:
    ctx->downcount -= 2;
    // 8030C238: cmpwi   r3, 0
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

label_8030C23C:
    // 8030C23C: bc    12, 2, 0x8030C24C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C24C;
        }
    }

label_8030C240:
    ctx->downcount -= 3;
    // 8030C240: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C244:
    // 8030C244: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C248:
    // 8030C248: bl      0x8030CB1C
    {
            ctx->lr = 0x8030C24Cu;
            goto label_8030CB1C;
    }

label_8030C24C:
    ctx->downcount -= 6;
    // 8030C24C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030C250:
    // 8030C250: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030C254:
    // 8030C254: cmpwi   r30, 2
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

label_8030C258:
    ctx->pc = 0x8030C258u;
    // 8030C258: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C25C:
    // 8030C25C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030C260:
    // 8030C260: bc    12, 0, 0x8030C228
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C228u;
                return;
            }
            goto label_8030C228;
        }
    }

label_8030C264:
    ctx->pc = 0x8030C264u;
    ctx->downcount -= 4;
    // 8030C264: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C268:
    ctx->pc = 0x8030C268u;
    // 8030C268: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8030C26C:
    ctx->pc = 0x8030C26Cu;
    // 8030C26C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C270:
    ctx->pc = 0x8030C270u;
    // 8030C270: bl      0x801C1C5C
    {
            ctx->lr = 0x8030C274u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030C274:
    ctx->pc = 0x8030C274u;
    ctx->downcount -= 2;
    // 8030C274: cmpwi   r3, 0
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

label_8030C278:
    ctx->pc = 0x8030C278u;
    // 8030C278: bc    12, 2, 0x8030C284
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C284;
        }
    }

label_8030C27C:
    ctx->pc = 0x8030C27Cu;
    ctx->downcount -= 2;
    // 8030C27C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C280:
    ctx->pc = 0x8030C280u;
    // 8030C280: bl      0x802E3CD8
    {
            ctx->lr = 0x8030C284u;
            ctx->pc = 0x802E3CD8u;
            return;
    }

label_8030C284:
    ctx->pc = 0x8030C284u;
    ctx->downcount -= 4;
    // 8030C284: stw     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C288:
    ctx->pc = 0x8030C288u;
    // 8030C288: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C28C:
    ctx->pc = 0x8030C28Cu;
    // 8030C28C: lwz     r4, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C290:
    ctx->pc = 0x8030C290u;
    // 8030C290: bl      0x802A6408
    {
            ctx->lr = 0x8030C294u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030C294:
    ctx->pc = 0x8030C294u;
    ctx->downcount -= 3;
    // 8030C294: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C298:
    ctx->pc = 0x8030C298u;
    // 8030C298: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C29C:
    ctx->pc = 0x8030C29Cu;
    // 8030C29C: bl      0x802A6408
    {
            ctx->lr = 0x8030C2A0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030C2A0:
    ctx->pc = 0x8030C2A0u;
    ctx->downcount -= 2;
    // 8030C2A0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030C2A4:
    ctx->pc = 0x8030C2A4u;
    // 8030C2A4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030C2A8:
    ctx->downcount -= 4;
    // 8030C2A8: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030C2AC:
    // 8030C2AC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C2B0:
    ctx->pc = 0x8030C2B0u;
    // 8030C2B0: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C2B4:
    // 8030C2B4: bl      0x802A6408
    {
            ctx->lr = 0x8030C2B8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030C2B8:
    ctx->downcount -= 4;
    // 8030C2B8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030C2BC:
    // 8030C2BC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030C2C0:
    // 8030C2C0: cmpwi   r30, 2
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

label_8030C2C4:
    // 8030C2C4: bc    12, 0, 0x8030C2A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C2A8u;
                return;
            }
            goto label_8030C2A8;
        }
    }

label_8030C2C8:
    ctx->pc = 0x8030C2C8u;
    ctx->downcount -= 3;
    // 8030C2C8: lwz     r4, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C2CC:
    ctx->pc = 0x8030C2CCu;
    // 8030C2CC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C2D0:
    ctx->pc = 0x8030C2D0u;
    // 8030C2D0: bl      0x802A6408
    {
            ctx->lr = 0x8030C2D4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030C2D4:
    ctx->pc = 0x8030C2D4u;
    ctx->downcount -= 4;
    // 8030C2D4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C2D8:
    ctx->pc = 0x8030C2D8u;
    // 8030C2D8: li      r3, 44
    ctx->gpr[3] = (u32)(s32)(44);

label_8030C2DC:
    ctx->pc = 0x8030C2DCu;
    // 8030C2DC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C2E0:
    ctx->pc = 0x8030C2E0u;
    // 8030C2E0: bl      0x801C1C5C
    {
            ctx->lr = 0x8030C2E4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030C2E4:
    ctx->pc = 0x8030C2E4u;
    ctx->downcount -= 2;
    // 8030C2E4: cmpwi   r3, 0
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

label_8030C2E8:
    ctx->pc = 0x8030C2E8u;
    // 8030C2E8: bc    12, 2, 0x8030C2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C2F8;
        }
    }

label_8030C2EC:
    ctx->pc = 0x8030C2ECu;
    ctx->downcount -= 3;
    // 8030C2EC: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030C2F0:
    ctx->pc = 0x8030C2F0u;
    // 8030C2F0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030C2F4:
    ctx->pc = 0x8030C2F4u;
    // 8030C2F4: bl      0x8026F1B8
    {
            ctx->lr = 0x8030C2F8u;
            ctx->pc = 0x8026F1B8u;
            return;
    }

label_8030C2F8:
    ctx->pc = 0x8030C2F8u;
    ctx->downcount -= 3;
    // 8030C2F8: stw     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C2FC:
    ctx->pc = 0x8030C2FCu;
    // 8030C2FC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030C300:
    ctx->pc = 0x8030C300u;
    // 8030C300: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030C304:
    ctx->downcount -= 4;
    // 8030C304: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030C308:
    ctx->pc = 0x8030C308u;
    // 8030C308: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C30C:
    // 8030C30C: cmpwi   r4, 0
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

label_8030C310:
    // 8030C310: bc    12, 2, 0x8030C318
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C318;
        }
    }

label_8030C314:
    ctx->downcount -= 1;
    // 8030C314: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_8030C318:
    ctx->pc = 0x8030C318u;
    ctx->downcount -= 2;
    // 8030C318: lwz     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C31C:
    // 8030C31C: bl      0x8026F1B0
    {
            ctx->lr = 0x8030C320u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_8030C320:
    ctx->downcount -= 4;
    // 8030C320: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030C324:
    // 8030C324: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030C328:
    // 8030C328: cmpwi   r30, 2
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

label_8030C32C:
    // 8030C32C: bc    12, 0, 0x8030C304
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C304u;
                return;
            }
            goto label_8030C304;
        }
    }

label_8030C330:
    ctx->pc = 0x8030C330u;
    ctx->downcount -= 23;
    // 8030C330: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C334:
    ctx->pc = 0x8030C334u;
    // 8030C334: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030C338:
    ctx->pc = 0x8030C338u;
    // 8030C338: stw     r4, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C33C:
    ctx->pc = 0x8030C33Cu;
    // 8030C33C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C340:
    ctx->pc = 0x8030C340u;
    // 8030C340: stw     r4, 180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C344:
    ctx->pc = 0x8030C344u;
    // 8030C344: stw     r4, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C348:
    ctx->pc = 0x8030C348u;
    // 8030C348: stw     r0, 188(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C34C:
    ctx->pc = 0x8030C34Cu;
    // 8030C34C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C350:
    ctx->pc = 0x8030C350u;
    // 8030C350: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C354:
    ctx->pc = 0x8030C354u;
    // 8030C354: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C358:
    ctx->pc = 0x8030C358u;
    // 8030C358: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030C35C:
    ctx->pc = 0x8030C35Cu;
    // 8030C35C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C360:
    ctx->pc = 0x8030C360u;
    ctx->downcount -= 18;
    // 8030C360: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C364:
    ctx->pc = 0x8030C364u;
    // 8030C364: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C368:
    // 8030C368: cmpwi   r3, 0
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

label_8030C36C:
    ctx->pc = 0x8030C36Cu;
    // 8030C36C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C370:
    ctx->pc = 0x8030C370u;
    // 8030C370: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C374:
    // 8030C374: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C378:
    // 8030C378: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C37C:
    // 8030C37C: bc    12, 2, 0x8030C3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C3AC;
        }
    }

label_8030C380:
    ctx->downcount -= 1;
    // 8030C380: bc    12, 2, 0x8030C39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C39C;
        }
    }

label_8030C384:
    ctx->downcount -= 3;
    // 8030C384: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030C388:
    // 8030C388: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030C38C:
    // 8030C38C: bl      0x8030C42C
    {
            ctx->lr = 0x8030C390u;
            goto label_8030C42C;
    }

label_8030C390:
    ctx->downcount -= 3;
    // 8030C390: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C394:
    // 8030C394: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C398:
    // 8030C398: bl      0x801ED118
    {
            ctx->lr = 0x8030C39Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8030C39C:
    ctx->downcount -= 2;
    // 8030C39C: cmpwi   r31, 0
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

label_8030C3A0:
    // 8030C3A0: bc    4, 1, 0x8030C3AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030C3AC;
        }
    }

label_8030C3A4:
    ctx->downcount -= 2;
    // 8030C3A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C3A8:
    // 8030C3A8: bl      0x801C1C90
    {
            ctx->lr = 0x8030C3ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030C3AC:
    ctx->downcount -= 17;
    // 8030C3AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C3B0:
    ctx->pc = 0x8030C3B0u;
    // 8030C3B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C3B4:
    ctx->pc = 0x8030C3B4u;
    // 8030C3B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C3B8:
    ctx->pc = 0x8030C3B8u;
    // 8030C3B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C3BC:
    // 8030C3BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C3C0:
    ctx->pc = 0x8030C3C0u;
    // 8030C3C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C3C4:
    ctx->pc = 0x8030C3C4u;
    ctx->downcount -= 18;
    // 8030C3C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C3C8:
    ctx->pc = 0x8030C3C8u;
    // 8030C3C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C3CC:
    // 8030C3CC: cmpwi   r3, 0
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

label_8030C3D0:
    ctx->pc = 0x8030C3D0u;
    // 8030C3D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C3D4:
    ctx->pc = 0x8030C3D4u;
    // 8030C3D4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C3D8:
    // 8030C3D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C3DC:
    // 8030C3DC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C3E0:
    // 8030C3E0: bc    12, 2, 0x8030C414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C414;
        }
    }

label_8030C3E4:
    ctx->downcount -= 1;
    // 8030C3E4: bc    12, 2, 0x8030C404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C404;
        }
    }

label_8030C3E8:
    ctx->downcount -= 1;
    // 8030C3E8: bc    12, 2, 0x8030C404
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C404;
        }
    }

label_8030C3EC:
    ctx->downcount -= 3;
    // 8030C3EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C3F0:
    // 8030C3F0: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_8030C3F4:
    // 8030C3F4: bl      0x801ED098
    {
            ctx->lr = 0x8030C3F8u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_8030C3F8:
    ctx->downcount -= 3;
    // 8030C3F8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C3FC:
    // 8030C3FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C400:
    // 8030C400: bl      0x801ED058
    {
            ctx->lr = 0x8030C404u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_8030C404:
    ctx->downcount -= 2;
    // 8030C404: cmpwi   r31, 0
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

label_8030C408:
    // 8030C408: bc    4, 1, 0x8030C414
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030C414;
        }
    }

label_8030C40C:
    ctx->downcount -= 2;
    // 8030C40C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C410:
    // 8030C410: bl      0x801C1C90
    {
            ctx->lr = 0x8030C414u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030C414:
    ctx->downcount -= 17;
    // 8030C414: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C418:
    ctx->pc = 0x8030C418u;
    // 8030C418: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C41C:
    ctx->pc = 0x8030C41Cu;
    // 8030C41C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C420:
    ctx->pc = 0x8030C420u;
    // 8030C420: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C424:
    // 8030C424: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C428:
    ctx->pc = 0x8030C428u;
    // 8030C428: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C42C:
    ctx->pc = 0x8030C42Cu;
    ctx->downcount -= 7;
    // 8030C42C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C430:
    ctx->pc = 0x8030C430u;
    // 8030C430: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C434:
    // 8030C434: cmpwi   r3, 0
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

label_8030C438:
    ctx->pc = 0x8030C438u;
    // 8030C438: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C43C:
    ctx->pc = 0x8030C43Cu;
    // 8030C43C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C440:
    // 8030C440: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C444:
    // 8030C444: bc    12, 2, 0x8030C454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C454;
        }
    }

label_8030C448:
    ctx->downcount -= 2;
    // 8030C448: cmpwi   r4, 0
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

label_8030C44C:
    // 8030C44C: bc    4, 1, 0x8030C454
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030C454;
        }
    }

label_8030C450:
    ctx->downcount -= 1;
    // 8030C450: bl      0x801C1C90
    {
            ctx->lr = 0x8030C454u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030C454:
    ctx->downcount -= 7;
    // 8030C454: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C458:
    ctx->pc = 0x8030C458u;
    // 8030C458: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C45C:
    ctx->pc = 0x8030C45Cu;
    // 8030C45C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C460:
    ctx->pc = 0x8030C460u;
    // 8030C460: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C464:
    // 8030C464: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C468:
    ctx->pc = 0x8030C468u;
    // 8030C468: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C46C:
    ctx->pc = 0x8030C46Cu;
    ctx->downcount -= 20;
    // 8030C46C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C470:
    ctx->pc = 0x8030C470u;
    // 8030C470: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C474:
    ctx->pc = 0x8030C474u;
    // 8030C474: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C478:
    ctx->pc = 0x8030C478u;
    // 8030C478: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C47C:
    // 8030C47C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030C480:
    // 8030C480: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C484:
    // 8030C484: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C488:
    // 8030C488: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030C48C:
    // 8030C48C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C490:
    // 8030C490: bl      0x803456D0
    {
            ctx->lr = 0x8030C494u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_8030C494:
    ctx->downcount -= 34;
    // 8030C494: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030C498:
    ctx->pc = 0x8030C498u;
    // 8030C498: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C49C:
    ctx->pc = 0x8030C49Cu;
    // 8030C49C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C4A0:
    ctx->pc = 0x8030C4A0u;
    // 8030C4A0: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C4A4:
    // 8030C4A4: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C4A8:
    ctx->pc = 0x8030C4A8u;
    // 8030C4A8: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C4AC:
    ctx->pc = 0x8030C4ACu;
    // 8030C4AC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C4B0:
    ctx->pc = 0x8030C4B0u;
    // 8030C4B0: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C4B4:
    ctx->pc = 0x8030C4B4u;
    // 8030C4B4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C4B8:
    ctx->pc = 0x8030C4B8u;
    // 8030C4B8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C4BC:
    ctx->pc = 0x8030C4BCu;
    // 8030C4BC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C4C0:
    ctx->pc = 0x8030C4C0u;
    // 8030C4C0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C4C4:
    ctx->pc = 0x8030C4C4u;
    // 8030C4C4: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030C4C8:
    ctx->pc = 0x8030C4C8u;
    // 8030C4C8: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_8030C4CC:
    ctx->pc = 0x8030C4CCu;
    // 8030C4CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C4D0:
    ctx->pc = 0x8030C4D0u;
    // 8030C4D0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C4D4:
    ctx->pc = 0x8030C4D4u;
    // 8030C4D4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C4D8:
    ctx->pc = 0x8030C4D8u;
    // 8030C4D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C4DC:
    ctx->pc = 0x8030C4DCu;
    // 8030C4DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C4E0:
    // 8030C4E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030C4E4:
    ctx->pc = 0x8030C4E4u;
    // 8030C4E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C4E8:
    ctx->downcount -= 2;
    // 8030C4E8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030C4EC:
    ctx->pc = 0x8030C4ECu;
    // 8030C4EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C4F0:
    ctx->downcount -= 2;
    // 8030C4F0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030C4F4:
    ctx->pc = 0x8030C4F4u;
    // 8030C4F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C4F8:
    ctx->pc = 0x8030C4F8u;
    ctx->downcount -= 10;
    // 8030C4F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C4FC:
    ctx->pc = 0x8030C4FCu;
    // 8030C4FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C500:
    ctx->pc = 0x8030C500u;
    // 8030C500: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C504:
    ctx->pc = 0x8030C504u;
    // 8030C504: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C508:
    // 8030C508: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C50C:
    ctx->pc = 0x8030C50Cu;
    // 8030C50C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C510:
    ctx->pc = 0x8030C510u;
    // 8030C510: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C514:
    ctx->pc = 0x8030C514u;
    // 8030C514: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030C518:
    ctx->pc = 0x8030C518u;
    // 8030C518: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030C51Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030C51C:
    ctx->downcount -= 2;
    // 8030C51C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030C520:
    // 8030C520: bl      0x8030C854
    {
            ctx->lr = 0x8030C524u;
            goto label_8030C854;
    }

label_8030C524:
    ctx->pc = 0x8030C524u;
    ctx->downcount -= 6;
    // 8030C524: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C528:
    // 8030C528: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C52C:
    ctx->pc = 0x8030C52Cu;
    // 8030C52C: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030C530:
    ctx->pc = 0x8030C530u;
    // 8030C530: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030C534:
    ctx->pc = 0x8030C534u;
    // 8030C534: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030C538u;
            ctx->pc = target;
            return;
        }
    }

label_8030C538:
    ctx->pc = 0x8030C538u;
    ctx->downcount -= 6;
    // 8030C538: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C53C:
    ctx->pc = 0x8030C53Cu;
    // 8030C53C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C540:
    ctx->pc = 0x8030C540u;
    // 8030C540: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C544:
    // 8030C544: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C548:
    ctx->pc = 0x8030C548u;
    // 8030C548: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C54C:
    ctx->pc = 0x8030C54Cu;
    ctx->downcount -= 21;
    // 8030C54C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C550:
    ctx->pc = 0x8030C550u;
    // 8030C550: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C554:
    ctx->pc = 0x8030C554u;
    // 8030C554: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C558:
    ctx->pc = 0x8030C558u;
    // 8030C558: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C55C:
    // 8030C55C: lis     r30, -32659
    ctx->gpr[30] = ((u32)(s32)(-32659) << 16);

label_8030C560:
    // 8030C560: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030C564:
    // 8030C564: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C568:
    // 8030C568: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C56C:
    // 8030C56C: addi    r30, r30, -32320
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-32320);

label_8030C570:
    // 8030C570: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C574:
    // 8030C574: bl      0x802A6748
    {
            ctx->lr = 0x8030C578u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_8030C578:
    ctx->downcount -= 7;
    // 8030C578: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030C57C:
    // 8030C57C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C580:
    // 8030C580: addi    r4, r4, -31872
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31872);

label_8030C584:
    ctx->pc = 0x8030C584u;
    // 8030C584: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C588:
    // 8030C588: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030C58C:
    ctx->pc = 0x8030C58Cu;
    // 8030C58C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C590:
    // 8030C590: bl      0x801ED17C
    {
            ctx->lr = 0x8030C594u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_8030C594:
    ctx->downcount -= 6;
    // 8030C594: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C598:
    // 8030C598: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C59C:
    // 8030C59C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C5A0:
    // 8030C5A0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C5A4:
    // 8030C5A4: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C5A8:
    // 8030C5A8: bl      0x8030C6D8
    {
            ctx->lr = 0x8030C5ACu;
            goto label_8030C6D8;
    }

label_8030C5AC:
    ctx->downcount -= 3;
    // 8030C5AC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C5B0:
    // 8030C5B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C5B4:
    // 8030C5B4: bl      0x802A5D48
    {
            ctx->lr = 0x8030C5B8u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030C5B8:
    ctx->downcount -= 6;
    // 8030C5B8: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C5BC:
    // 8030C5BC: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C5C0:
    // 8030C5C0: addi    r4, r30, 292
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(292);

label_8030C5C4:
    // 8030C5C4: addi    r5, r30, 304
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(304);

label_8030C5C8:
    // 8030C5C8: addi    r6, r30, 316
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(316);

label_8030C5CC:
    // 8030C5CC: bl      0x8030C7F8
    {
            ctx->lr = 0x8030C5D0u;
            goto label_8030C7F8;
    }

label_8030C5D0:
    ctx->downcount -= 2;
    // 8030C5D0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C5D4:
    // 8030C5D4: bl      0x802A609C
    {
            ctx->lr = 0x8030C5D8u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_8030C5D8:
    ctx->downcount -= 10;
    // 8030C5D8: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8030C5DC:
    // 8030C5DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030C5E0:
    // 8030C5E0: addi    r3, r3, -31992
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31992);

label_8030C5E4:
    ctx->pc = 0x8030C5E4u;
    // 8030C5E4: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C5E8:
    // 8030C5E8: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_8030C5EC:
    ctx->pc = 0x8030C5ECu;
    // 8030C5EC: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C5F0:
    // 8030C5F0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C5F4:
    // 8030C5F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030C5F8:
    ctx->pc = 0x8030C5F8u;
    // 8030C5F8: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C5FC:
    // 8030C5FC: bl      0x802A5D48
    {
            ctx->lr = 0x8030C600u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030C600:
    ctx->downcount -= 6;
    // 8030C600: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_8030C604:
    // 8030C604: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C608:
    // 8030C608: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C60C:
    // 8030C60C: addi    r5, r30, 256
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(256);

label_8030C610:
    // 8030C610: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030C614:
    // 8030C614: bl      0x8030C46C
    {
            ctx->lr = 0x8030C618u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C46Cu;
                return;
            }
            goto label_8030C46C;
    }

label_8030C618:
    ctx->downcount -= 3;
    // 8030C618: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C61C:
    // 8030C61C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030C620:
    // 8030C620: bl      0x802A5D48
    {
            ctx->lr = 0x8030C624u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030C624:
    ctx->downcount -= 5;
    // 8030C624: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C628:
    // 8030C628: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C62C:
    // 8030C62C: addi    r4, r30, 268
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(268);

label_8030C630:
    // 8030C630: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030C634:
    // 8030C634: bl      0x8030C46C
    {
            ctx->lr = 0x8030C638u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C46Cu;
                return;
            }
            goto label_8030C46C;
    }

label_8030C638:
    ctx->downcount -= 3;
    // 8030C638: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C63C:
    // 8030C63C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030C640:
    // 8030C640: bl      0x802A5D48
    {
            ctx->lr = 0x8030C644u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030C644:
    ctx->downcount -= 5;
    // 8030C644: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C648:
    // 8030C648: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030C64C:
    // 8030C64C: addi    r4, r30, 280
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(280);

label_8030C650:
    // 8030C650: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030C654:
    // 8030C654: bl      0x8030C46C
    {
            ctx->lr = 0x8030C658u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C46Cu;
                return;
            }
            goto label_8030C46C;
    }

label_8030C658:
    ctx->downcount -= 17;
    // 8030C658: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030C65C:
    ctx->pc = 0x8030C65Cu;
    // 8030C65C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C660:
    ctx->pc = 0x8030C660u;
    // 8030C660: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C664:
    ctx->pc = 0x8030C664u;
    // 8030C664: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C668:
    // 8030C668: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030C66C:
    ctx->pc = 0x8030C66Cu;
    // 8030C66C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C670:
    ctx->pc = 0x8030C670u;
    ctx->downcount -= 18;
    // 8030C670: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C674:
    ctx->pc = 0x8030C674u;
    // 8030C674: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C678:
    // 8030C678: cmpwi   r3, 0
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

label_8030C67C:
    ctx->pc = 0x8030C67Cu;
    // 8030C67C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C680:
    ctx->pc = 0x8030C680u;
    // 8030C680: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C684:
    // 8030C684: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C688:
    // 8030C688: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C68C:
    // 8030C68C: bc    12, 2, 0x8030C6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C6C0;
        }
    }

label_8030C690:
    ctx->downcount -= 1;
    // 8030C690: bc    12, 2, 0x8030C6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C6B0;
        }
    }

label_8030C694:
    ctx->downcount -= 1;
    // 8030C694: bc    12, 2, 0x8030C6B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C6B0;
        }
    }

label_8030C698:
    ctx->downcount -= 3;
    // 8030C698: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030C69C:
    // 8030C69C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030C6A0:
    // 8030C6A0: bl      0x8030C42C
    {
            ctx->lr = 0x8030C6A4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C42Cu;
                return;
            }
            goto label_8030C42C;
    }

label_8030C6A4:
    ctx->downcount -= 3;
    // 8030C6A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C6A8:
    // 8030C6A8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C6AC:
    // 8030C6AC: bl      0x801ED118
    {
            ctx->lr = 0x8030C6B0u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8030C6B0:
    ctx->downcount -= 2;
    // 8030C6B0: cmpwi   r31, 0
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

label_8030C6B4:
    // 8030C6B4: bc    4, 1, 0x8030C6C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030C6C0;
        }
    }

label_8030C6B8:
    ctx->downcount -= 2;
    // 8030C6B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C6BC:
    // 8030C6BC: bl      0x801C1C90
    {
            ctx->lr = 0x8030C6C0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030C6C0:
    ctx->downcount -= 17;
    // 8030C6C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030C6C4:
    ctx->pc = 0x8030C6C4u;
    // 8030C6C4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C6C8:
    ctx->pc = 0x8030C6C8u;
    // 8030C6C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C6CC:
    ctx->pc = 0x8030C6CCu;
    // 8030C6CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C6D0:
    // 8030C6D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C6D4:
    ctx->pc = 0x8030C6D4u;
    // 8030C6D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C6D8:
    ctx->pc = 0x8030C6D8u;
    ctx->downcount -= 17;
    // 8030C6D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C6DC:
    ctx->pc = 0x8030C6DCu;
    // 8030C6DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C6E0:
    ctx->pc = 0x8030C6E0u;
    // 8030C6E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C6E4:
    ctx->pc = 0x8030C6E4u;
    // 8030C6E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C6E8:
    // 8030C6E8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C6EC:
    // 8030C6EC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030C6F0:
    // 8030C6F0: bl      0x803457F4
    {
            ctx->lr = 0x8030C6F4u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_8030C6F4:
    ctx->pc = 0x8030C6F4u;
    ctx->downcount -= 11;
    // 8030C6F4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C6F8:
    // 8030C6F8: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8030C6FC:
    // 8030C6FC: addi    r3, r3, -31752
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31752);

label_8030C700:
    ctx->pc = 0x8030C700u;
    // 8030C700: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C704:
    // 8030C704: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C708:
    ctx->pc = 0x8030C708u;
    // 8030C708: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C70C:
    ctx->pc = 0x8030C70Cu;
    // 8030C70C: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030C710:
    // 8030C710: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C714:
    // 8030C714: bl      0x801C1C80
    {
            ctx->lr = 0x8030C718u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030C718:
    ctx->pc = 0x8030C718u;
    ctx->downcount -= 8;
    // 8030C718: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C71C:
    // 8030C71C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C720:
    ctx->pc = 0x8030C720u;
    // 8030C720: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C724:
    // 8030C724: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C728:
    ctx->pc = 0x8030C728u;
    // 8030C728: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C72C:
    // 8030C72C: bl      0x801C1C80
    {
            ctx->lr = 0x8030C730u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030C730:
    ctx->pc = 0x8030C730u;
    ctx->downcount -= 8;
    // 8030C730: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C734:
    // 8030C734: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030C738:
    ctx->pc = 0x8030C738u;
    // 8030C738: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C73C:
    // 8030C73C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C740:
    ctx->pc = 0x8030C740u;
    // 8030C740: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C744:
    // 8030C744: bl      0x801C1C80
    {
            ctx->lr = 0x8030C748u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030C748:
    ctx->downcount -= 6;
    // 8030C748: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_8030C74C:
    ctx->pc = 0x8030C74Cu;
    // 8030C74C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C750:
    // 8030C750: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_8030C754:
    // 8030C754: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030C758:
    // 8030C758: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030C75C:
    // 8030C75C: b       0x8030C7C8
    {
            goto label_8030C7C8;
    }

label_8030C760:
    loop_8030C760(ctx);
    if (ctx->pc == 0x8030C7D4u) goto label_8030C7D4;
    return;
label_8030C764:
    // 8030C764: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8030C768:
    ctx->pc = 0x8030C768u;
    // 8030C768: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C76C:
    // 8030C76C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C770:
    ctx->pc = 0x8030C770u;
    // 8030C770: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C774:
    ctx->pc = 0x8030C774u;
    // 8030C774: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C778:
    ctx->pc = 0x8030C778u;
    // 8030C778: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C77C:
    ctx->pc = 0x8030C77Cu;
    // 8030C77C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C780:
    ctx->pc = 0x8030C780u;
    // 8030C780: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C784:
    ctx->pc = 0x8030C784u;
    // 8030C784: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C788:
    ctx->pc = 0x8030C788u;
    // 8030C788: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C78C:
    // 8030C78C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C790:
    ctx->pc = 0x8030C790u;
    // 8030C790: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C794:
    ctx->pc = 0x8030C794u;
    // 8030C794: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C798:
    ctx->pc = 0x8030C798u;
    // 8030C798: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C79C:
    ctx->pc = 0x8030C79Cu;
    // 8030C79C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C7A0:
    ctx->pc = 0x8030C7A0u;
    // 8030C7A0: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C7A4:
    ctx->pc = 0x8030C7A4u;
    // 8030C7A4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C7A8:
    ctx->pc = 0x8030C7A8u;
    // 8030C7A8: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C7AC:
    // 8030C7AC: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C7B0:
    ctx->pc = 0x8030C7B0u;
    // 8030C7B0: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C7B4:
    ctx->pc = 0x8030C7B4u;
    // 8030C7B4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C7B8:
    // 8030C7B8: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_8030C7BC:
    ctx->pc = 0x8030C7BCu;
    // 8030C7BC: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C7C0:
    ctx->pc = 0x8030C7C0u;
    // 8030C7C0: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C7C4:
    ctx->pc = 0x8030C7C4u;
    // 8030C7C4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C7C8:
    ctx->pc = 0x8030C7C8u;
    ctx->downcount -= 3;
    // 8030C7C8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C7CC:
    // 8030C7CC: cmpw    r7, r0
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

label_8030C7D0:
    // 8030C7D0: bc    12, 0, 0x8030C760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C760u;
                return;
            }
            goto label_8030C760;
        }
    }

label_8030C7D4:
    ctx->downcount -= 3;
    // 8030C7D4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C7D8:
    // 8030C7D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030C7DC:
    // 8030C7DC: bl      0x803457CC
    {
            ctx->lr = 0x8030C7E0u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_8030C7E0:
    ctx->downcount -= 17;
    // 8030C7E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C7E4:
    ctx->pc = 0x8030C7E4u;
    // 8030C7E4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C7E8:
    ctx->pc = 0x8030C7E8u;
    // 8030C7E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C7EC:
    ctx->pc = 0x8030C7ECu;
    // 8030C7EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C7F0:
    // 8030C7F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C7F4:
    ctx->pc = 0x8030C7F4u;
    // 8030C7F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C7F8:
    ctx->pc = 0x8030C7F8u;
    ctx->downcount -= 19;
    // 8030C7F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C7FC:
    ctx->pc = 0x8030C7FCu;
    // 8030C7FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C800:
    ctx->pc = 0x8030C800u;
    // 8030C800: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C804:
    ctx->pc = 0x8030C804u;
    // 8030C804: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030C808:
    // 8030C808: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8030C80C:
    // 8030C80C: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030C810:
    // 8030C810: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C814:
    // 8030C814: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C818:
    // 8030C818: bl      0x8030C46C
    {
            ctx->lr = 0x8030C81Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C46Cu;
                return;
            }
            goto label_8030C46C;
    }

label_8030C81C:
    ctx->downcount -= 27;
    // 8030C81C: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030C820:
    ctx->pc = 0x8030C820u;
    // 8030C820: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030C824:
    ctx->pc = 0x8030C824u;
    // 8030C824: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C828:
    ctx->pc = 0x8030C828u;
    // 8030C828: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C82C:
    // 8030C82C: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030C830:
    ctx->pc = 0x8030C830u;
    // 8030C830: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C834:
    ctx->pc = 0x8030C834u;
    // 8030C834: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030C838:
    ctx->pc = 0x8030C838u;
    // 8030C838: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030C83C:
    ctx->pc = 0x8030C83Cu;
    // 8030C83C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C840:
    ctx->pc = 0x8030C840u;
    // 8030C840: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030C844:
    ctx->pc = 0x8030C844u;
    // 8030C844: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C848:
    ctx->pc = 0x8030C848u;
    // 8030C848: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C84C:
    // 8030C84C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030C850:
    ctx->pc = 0x8030C850u;
    // 8030C850: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C854:
    ctx->pc = 0x8030C854u;
    ctx->downcount -= 8;
    // 8030C854: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C858:
    ctx->pc = 0x8030C858u;
    // 8030C858: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C85C:
    ctx->pc = 0x8030C85Cu;
    // 8030C85C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C860:
    ctx->pc = 0x8030C860u;
    // 8030C860: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C864:
    // 8030C864: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C868:
    ctx->pc = 0x8030C868u;
    // 8030C868: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030C86C:
    // 8030C86C: cmpwi   r0, 0
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

label_8030C870:
    // 8030C870: bc    12, 2, 0x8030C894
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C894;
        }
    }

label_8030C874:
    ctx->pc = 0x8030C874u;
    ctx->downcount -= 3;
    // 8030C874: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030C878:
    // 8030C878: cmpwi   r0, 0
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

label_8030C87C:
    // 8030C87C: bc    12, 2, 0x8030C884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C884;
        }
    }

label_8030C880:
    ctx->downcount -= 1;
    // 8030C880: bl      0x8030C978
    {
            ctx->lr = 0x8030C884u;
            goto label_8030C978;
    }

label_8030C884:
    ctx->downcount -= 2;
    // 8030C884: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C888:
    // 8030C888: bl      0x803456D4
    {
            ctx->lr = 0x8030C88Cu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_8030C88C:
    ctx->downcount -= 2;
    // 8030C88C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C890:
    // 8030C890: bl      0x8030C8B8
    {
            ctx->lr = 0x8030C894u;
            goto label_8030C8B8;
    }

label_8030C894:
    ctx->downcount -= 2;
    // 8030C894: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C898:
    // 8030C898: bl      0x8030C918
    {
            ctx->lr = 0x8030C89Cu;
            goto label_8030C918;
    }

label_8030C89C:
    ctx->downcount -= 2;
    // 8030C89C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030C8A0:
    // 8030C8A0: bl      0x803456F8
    {
            ctx->lr = 0x8030C8A4u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_8030C8A4:
    ctx->pc = 0x8030C8A4u;
    ctx->downcount -= 6;
    // 8030C8A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C8A8:
    ctx->pc = 0x8030C8A8u;
    // 8030C8A8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C8AC:
    ctx->pc = 0x8030C8ACu;
    // 8030C8AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C8B0:
    // 8030C8B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C8B4:
    ctx->pc = 0x8030C8B4u;
    // 8030C8B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C8B8:
    ctx->pc = 0x8030C8B8u;
    ctx->downcount -= 12;
    // 8030C8B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C8BC:
    ctx->pc = 0x8030C8BCu;
    // 8030C8BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C8C0:
    ctx->pc = 0x8030C8C0u;
    // 8030C8C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C8C4:
    ctx->pc = 0x8030C8C4u;
    // 8030C8C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C8C8:
    // 8030C8C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C8CC:
    ctx->pc = 0x8030C8CCu;
    // 8030C8CC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C8D0:
    ctx->pc = 0x8030C8D0u;
    // 8030C8D0: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C8D4:
    // 8030C8D4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C8D8:
    // 8030C8D8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030C8DC:
    // 8030C8DC: bl      0x800076B4
    {
            ctx->lr = 0x8030C8E0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030C8E0:
    ctx->downcount -= 2;
    // 8030C8E0: cmpwi   r3, 0
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

label_8030C8E4:
    // 8030C8E4: bc    12, 2, 0x8030C904
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C904;
        }
    }

label_8030C8E8:
    ctx->pc = 0x8030C8E8u;
    ctx->downcount -= 8;
    // 8030C8E8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C8EC:
    ctx->pc = 0x8030C8ECu;
    // 8030C8EC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C8F0:
    // 8030C8F0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C8F4:
    ctx->pc = 0x8030C8F4u;
    // 8030C8F4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C8F8:
    // 8030C8F8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030C8FC:
    // 8030C8FC: bl      0x800076E4
    {
            ctx->lr = 0x8030C900u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030C900:
    ctx->downcount -= 1;
    // 8030C900: nop
    // nop

label_8030C904:
    ctx->pc = 0x8030C904u;
    ctx->downcount -= 6;
    // 8030C904: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C908:
    ctx->pc = 0x8030C908u;
    // 8030C908: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C90C:
    ctx->pc = 0x8030C90Cu;
    // 8030C90C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C910:
    // 8030C910: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C914:
    ctx->pc = 0x8030C914u;
    // 8030C914: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C918:
    ctx->pc = 0x8030C918u;
    ctx->downcount -= 12;
    // 8030C918: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C91C:
    ctx->pc = 0x8030C91Cu;
    // 8030C91C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C920:
    ctx->pc = 0x8030C920u;
    // 8030C920: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C924:
    ctx->pc = 0x8030C924u;
    // 8030C924: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C928:
    // 8030C928: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C92C:
    ctx->pc = 0x8030C92Cu;
    // 8030C92C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C930:
    ctx->pc = 0x8030C930u;
    // 8030C930: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C934:
    // 8030C934: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C938:
    // 8030C938: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030C93C:
    // 8030C93C: bl      0x800076B4
    {
            ctx->lr = 0x8030C940u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030C940:
    ctx->downcount -= 2;
    // 8030C940: cmpwi   r3, 0
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

label_8030C944:
    // 8030C944: bc    12, 2, 0x8030C964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C964;
        }
    }

label_8030C948:
    ctx->pc = 0x8030C948u;
    ctx->downcount -= 8;
    // 8030C948: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C94C:
    ctx->pc = 0x8030C94Cu;
    // 8030C94C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C950:
    // 8030C950: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C954:
    ctx->pc = 0x8030C954u;
    // 8030C954: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C958:
    // 8030C958: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030C95C:
    // 8030C95C: bl      0x800076E4
    {
            ctx->lr = 0x8030C960u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030C960:
    ctx->downcount -= 1;
    // 8030C960: nop
    // nop

label_8030C964:
    ctx->pc = 0x8030C964u;
    ctx->downcount -= 6;
    // 8030C964: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C968:
    ctx->pc = 0x8030C968u;
    // 8030C968: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C96C:
    ctx->pc = 0x8030C96Cu;
    // 8030C96C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C970:
    // 8030C970: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C974:
    ctx->pc = 0x8030C974u;
    // 8030C974: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C978:
    ctx->pc = 0x8030C978u;
    ctx->downcount -= 12;
    // 8030C978: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C97C:
    ctx->pc = 0x8030C97Cu;
    // 8030C97C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C980:
    ctx->pc = 0x8030C980u;
    // 8030C980: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C984:
    ctx->pc = 0x8030C984u;
    // 8030C984: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030C988:
    // 8030C988: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030C98C:
    ctx->pc = 0x8030C98Cu;
    // 8030C98C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C990:
    ctx->pc = 0x8030C990u;
    // 8030C990: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C994:
    // 8030C994: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C998:
    // 8030C998: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030C99C:
    // 8030C99C: bl      0x800076B4
    {
            ctx->lr = 0x8030C9A0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030C9A0:
    ctx->downcount -= 2;
    // 8030C9A0: cmpwi   r3, 0
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

label_8030C9A4:
    // 8030C9A4: bc    12, 2, 0x8030C9C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030C9C4;
        }
    }

label_8030C9A8:
    ctx->pc = 0x8030C9A8u;
    ctx->downcount -= 8;
    // 8030C9A8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C9AC:
    ctx->pc = 0x8030C9ACu;
    // 8030C9AC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030C9B0:
    // 8030C9B0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030C9B4:
    ctx->pc = 0x8030C9B4u;
    // 8030C9B4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030C9B8:
    // 8030C9B8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030C9BC:
    // 8030C9BC: bl      0x800076E4
    {
            ctx->lr = 0x8030C9C0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030C9C0:
    ctx->downcount -= 1;
    // 8030C9C0: nop
    // nop

label_8030C9C4:
    ctx->pc = 0x8030C9C4u;
    ctx->downcount -= 6;
    // 8030C9C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030C9C8:
    ctx->pc = 0x8030C9C8u;
    // 8030C9C8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030C9CC:
    ctx->pc = 0x8030C9CCu;
    // 8030C9CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030C9D0:
    // 8030C9D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030C9D4:
    ctx->pc = 0x8030C9D4u;
    // 8030C9D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030C9D8:
    ctx->downcount -= 2;
    // 8030C9D8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030C9DC:
    // 8030C9DC: b       0x8030C3C4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C3C4u;
                return;
            }
            goto label_8030C3C4;
    }

label_8030C9E0:
    ctx->downcount -= 2;
    // 8030C9E0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030C9E4:
    // 8030C9E4: b       0x8030C360
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C360u;
                return;
            }
            goto label_8030C360;
    }

label_8030C9E8:
    ctx->downcount -= 2;
    // 8030C9E8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030C9EC:
    // 8030C9EC: b       0x8030C670
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C670u;
                return;
            }
            goto label_8030C670;
    }

label_8030C9F0:
    ctx->pc = 0x8030C9F0u;
    ctx->downcount -= 19;
    // 8030C9F0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030C9F4:
    ctx->pc = 0x8030C9F4u;
    // 8030C9F4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030C9F8:
    ctx->pc = 0x8030C9F8u;
    // 8030C9F8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030C9FC:
    ctx->pc = 0x8030C9FCu;
    // 8030C9FC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030CA00:
    // 8030CA00: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CA04:
    // 8030CA04: li      r30, 50
    ctx->gpr[30] = (u32)(s32)(50);

label_8030CA08:
    ctx->pc = 0x8030CA08u;
    // 8030CA08: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CA0C:
    // 8030CA0C: cmpwi   r0, 0
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

label_8030CA10:
    // 8030CA10: bc    4, 2, 0x8030CA1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030CA1C;
        }
    }

label_8030CA14:
    ctx->downcount -= 2;
    // 8030CA14: li      r30, 50
    ctx->gpr[30] = (u32)(s32)(50);

label_8030CA18:
    // 8030CA18: b       0x8030CA28
    {
            goto label_8030CA28;
    }

label_8030CA1C:
    ctx->downcount -= 2;
    // 8030CA1C: cmpwi   r0, 1
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

label_8030CA20:
    // 8030CA20: bc    4, 2, 0x8030CA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030CA28;
        }
    }

label_8030CA24:
    ctx->downcount -= 1;
    // 8030CA24: li      r30, 51
    ctx->gpr[30] = (u32)(s32)(51);

label_8030CA28:
    ctx->downcount -= 4;
    // 8030CA28: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030CA2C:
    // 8030CA2C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030CA30:
    // 8030CA30: addi    r4, r31, 19984
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(19984);

label_8030CA34:
    // 8030CA34: bl      0x8026F968
    {
            ctx->lr = 0x8030CA38u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8030CA38:
    ctx->downcount -= 6;
    // 8030CA38: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CA3C:
    // 8030CA3C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030CA40:
    // 8030CA40: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030CA44:
    // 8030CA44: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030CA48:
    // 8030CA48: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030CA4C:
    // 8030CA4C: bl      0x8026F8C0
    {
            ctx->lr = 0x8030CA50u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030CA50:
    ctx->downcount -= 4;
    // 8030CA50: addi    r4, r31, 19984
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(19984);

label_8030CA54:
    // 8030CA54: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030CA58:
    // 8030CA58: addi    r4, r4, 10
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10);

label_8030CA5C:
    // 8030CA5C: bl      0x8026F968
    {
            ctx->lr = 0x8030CA60u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8030CA60:
    ctx->downcount -= 6;
    // 8030CA60: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CA64:
    // 8030CA64: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030CA68:
    // 8030CA68: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030CA6C:
    // 8030CA6C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030CA70:
    // 8030CA70: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030CA74:
    // 8030CA74: bl      0x8026F8C0
    {
            ctx->lr = 0x8030CA78u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030CA78:
    ctx->pc = 0x8030CA78u;
    ctx->downcount -= 16;
    // 8030CA78: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030CA7C:
    ctx->pc = 0x8030CA7Cu;
    // 8030CA7C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CA80:
    ctx->pc = 0x8030CA80u;
    // 8030CA80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CA84:
    // 8030CA84: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030CA88:
    ctx->pc = 0x8030CA88u;
    // 8030CA88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CA8C:
    ctx->pc = 0x8030CA8Cu;
    ctx->downcount -= 8;
    // 8030CA8C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CA90:
    ctx->pc = 0x8030CA90u;
    // 8030CA90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CA94:
    // 8030CA94: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030CA98:
    ctx->pc = 0x8030CA98u;
    // 8030CA98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CA9C:
    ctx->pc = 0x8030CA9Cu;
    // 8030CA9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030CAA0:
    // 8030CAA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CAA4:
    // 8030CAA4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030CAA8:
    // 8030CAA8: bl      0x8026F5F4
    {
            ctx->lr = 0x8030CAACu;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8030CAAC:
    ctx->pc = 0x8030CAACu;
    ctx->downcount -= 4;
    // 8030CAAC: lwz     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CAB0:
    // 8030CAB0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CAB4:
    // 8030CAB4: cmpwi   r0, 0
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

label_8030CAB8:
    // 8030CAB8: bc    12, 2, 0x8030CAC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CAC8;
        }
    }

label_8030CABC:
    ctx->downcount -= 2;
    // 8030CABC: cmpwi   r0, 1
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

label_8030CAC0:
    // 8030CAC0: bc    12, 2, 0x8030CAE4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CAE4;
        }
    }

label_8030CAC4:
    ctx->downcount -= 1;
    // 8030CAC4: b       0x8030CAF4
    {
            goto label_8030CAF4;
    }

label_8030CAC8:
    ctx->downcount -= 2;
    // 8030CAC8: li      r3, 142
    ctx->gpr[3] = (u32)(s32)(142);

label_8030CACC:
    // 8030CACC: bl      0x802B73BC
    {
            ctx->lr = 0x8030CAD0u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8030CAD0:
    ctx->downcount -= 4;
    // 8030CAD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030CAD4:
    // 8030CAD4: li      r3, 143
    ctx->gpr[3] = (u32)(s32)(143);

label_8030CAD8:
    // 8030CAD8: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030CADC:
    // 8030CADC: bl      0x802B735C
    {
            ctx->lr = 0x8030CAE0u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030CAE0:
    ctx->downcount -= 1;
    // 8030CAE0: b       0x8030CAF4
    {
            goto label_8030CAF4;
    }

label_8030CAE4:
    ctx->downcount -= 4;
    // 8030CAE4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030CAE8:
    // 8030CAE8: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_8030CAEC:
    // 8030CAEC: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030CAF0:
    // 8030CAF0: bl      0x802B735C
    {
            ctx->lr = 0x8030CAF4u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030CAF4:
    ctx->pc = 0x8030CAF4u;
    ctx->downcount -= 6;
    // 8030CAF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CAF8:
    ctx->pc = 0x8030CAF8u;
    // 8030CAF8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030CAFC:
    ctx->pc = 0x8030CAFCu;
    // 8030CAFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CB00:
    // 8030CB00: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CB04:
    ctx->pc = 0x8030CB04u;
    // 8030CB04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CB08:
    ctx->pc = 0x8030CB08u;
    ctx->downcount -= 4;
    // 8030CB08: lfs     f2, -11928(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030CB08u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11928);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030CB0C:
    // 8030CB0C: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_8030CB10:
    // 8030CB10: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030CB14:
    // 8030CB14: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_8030CB18:
    ctx->downcount -= 1;
    // 8030CB18: b       0x8030C9F0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030C9F0u;
                return;
            }
            goto label_8030C9F0;
    }

label_8030CB1C:
    ctx->pc = 0x8030CB1Cu;
    ctx->downcount -= 25;
    // 8030CB1C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CB20:
    ctx->pc = 0x8030CB20u;
    // 8030CB20: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CB24:
    // 8030CB24: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8030CB28:
    // 8030CB28: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030CB2C:
    ctx->pc = 0x8030CB2Cu;
    // 8030CB2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CB30:
    // 8030CB30: addi    r6, r6, 19984
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(19984);

label_8030CB34:
    // 8030CB34: addi    r5, r6, 22
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(22);

label_8030CB38:
    // 8030CB38: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8030CB3C:
    ctx->pc = 0x8030CB3Cu;
    // 8030CB3C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030CB40:
    // 8030CB40: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030CB44:
    // 8030CB44: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CB48:
    // 8030CB48: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030CB4C:
    // 8030CB4C: addi    r6, r6, 43
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(43);

label_8030CB50:
    // 8030CB50: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030CB54:
    // 8030CB54: bl      0x8036B3A4
    {
            ctx->lr = 0x8030CB58u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_8030CB58:
    ctx->downcount -= 27;
    // 8030CB58: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_8030CB5C:
    ctx->pc = 0x8030CB5Cu;
    // 8030CB5C: stw     r31, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030CB60:
    // 8030CB60: addi    r6, r6, -31712
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-31712);

label_8030CB64:
    // 8030CB64: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030CB68:
    // 8030CB68: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_8030CB6C:
    ctx->pc = 0x8030CB6Cu;
    // 8030CB6C: stw     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030CB70:
    // 8030CB70: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8030CB74:
    // 8030CB74: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_8030CB78:
    ctx->pc = 0x8030CB78u;
    // 8030CB78: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030CB7C:
    ctx->pc = 0x8030CB7Cu;
    // 8030CB7C: stw     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030CB80:
    ctx->pc = 0x8030CB80u;
    // 8030CB80: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CB84:
    ctx->pc = 0x8030CB84u;
    // 8030CB84: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030CB88:
    ctx->pc = 0x8030CB88u;
    // 8030CB88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CB8C:
    ctx->pc = 0x8030CB8Cu;
    // 8030CB8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CB90:
    // 8030CB90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CB94:
    ctx->pc = 0x8030CB94u;
    // 8030CB94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CB98:
    ctx->pc = 0x8030CB98u;
    ctx->downcount -= 18;
    // 8030CB98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CB9C:
    ctx->pc = 0x8030CB9Cu;
    // 8030CB9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CBA0:
    // 8030CBA0: cmpwi   r3, 0
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

label_8030CBA4:
    ctx->pc = 0x8030CBA4u;
    // 8030CBA4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CBA8:
    ctx->pc = 0x8030CBA8u;
    // 8030CBA8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030CBAC:
    // 8030CBAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CBB0:
    // 8030CBB0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030CBB4:
    // 8030CBB4: bc    12, 2, 0x8030CBD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CBD4;
        }
    }

label_8030CBB8:
    ctx->downcount -= 1;
    // 8030CBB8: bc    12, 2, 0x8030CBC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CBC4;
        }
    }

label_8030CBBC:
    ctx->downcount -= 2;
    // 8030CBBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030CBC0:
    // 8030CBC0: bl      0x801F5A74
    {
            ctx->lr = 0x8030CBC4u;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_8030CBC4:
    ctx->downcount -= 2;
    // 8030CBC4: cmpwi   r31, 0
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

label_8030CBC8:
    // 8030CBC8: bc    4, 1, 0x8030CBD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030CBD4;
        }
    }

label_8030CBCC:
    ctx->downcount -= 2;
    // 8030CBCC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030CBD0:
    // 8030CBD0: bl      0x801C1C90
    {
            ctx->lr = 0x8030CBD4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030CBD4:
    ctx->downcount -= 17;
    // 8030CBD4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030CBD8:
    ctx->pc = 0x8030CBD8u;
    // 8030CBD8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030CBDC:
    ctx->pc = 0x8030CBDCu;
    // 8030CBDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CBE0:
    ctx->pc = 0x8030CBE0u;
    // 8030CBE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CBE4:
    // 8030CBE4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CBE8:
    ctx->pc = 0x8030CBE8u;
    // 8030CBE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CBEC:
    ctx->downcount -= 2;
    // 8030CBEC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030CBF0:
    // 8030CBF0: b       0x8030CB98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CB98u;
                return;
            }
            goto label_8030CB98;
    }

label_8030CBF4:
    ctx->downcount -= 2;
    // 8030CBF4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030CBF8:
    // 8030CBF8: b       0x8030CA8C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CA8Cu;
                return;
            }
            goto label_8030CA8C;
    }

label_8030CBFC:
    ctx->downcount -= 2;
    // 8030CBFC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030CC00:
    // 8030CC00: b       0x8030CB08
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CB08u;
                return;
            }
            goto label_8030CB08;
    }

label_8030CC04:
    ctx->downcount -= 2;
    // 8030CC04: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030CC08:
    // 8030CC08: b       0x8030CB98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CB98u;
                return;
            }
            goto label_8030CB98;
    }

label_8030CC0C:
    ctx->pc = 0x8030CC0Cu;
    ctx->downcount -= 7;
    // 8030CC0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CC10:
    ctx->pc = 0x8030CC10u;
    // 8030CC10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CC14:
    ctx->pc = 0x8030CC14u;
    // 8030CC14: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CC18:
    ctx->pc = 0x8030CC18u;
    // 8030CC18: lwz     r4, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030CC1C:
    ctx->pc = 0x8030CC1Cu;
    // 8030CC1C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CC20:
    ctx->pc = 0x8030CC20u;
    // 8030CC20: cmpwi   r0, 0
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

label_8030CC24:
    ctx->pc = 0x8030CC24u;
    // 8030CC24: bc    12, 2, 0x8030CC34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CC34;
        }
    }

label_8030CC28:
    ctx->pc = 0x8030CC28u;
    ctx->downcount -= 3;
    // 8030CC28: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030CC2C:
    ctx->pc = 0x8030CC2Cu;
    // 8030CC2C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030CC30:
    ctx->pc = 0x8030CC30u;
    // 8030CC30: bl      0x803457B8
    {
            ctx->lr = 0x8030CC34u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CC34:
    ctx->pc = 0x8030CC34u;
    ctx->downcount -= 6;
    // 8030CC34: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CC38:
    ctx->pc = 0x8030CC38u;
    // 8030CC38: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030CC3C:
    ctx->pc = 0x8030CC3Cu;
    // 8030CC3C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030CC40:
    ctx->pc = 0x8030CC40u;
    // 8030CC40: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030CC44:
    ctx->pc = 0x8030CC44u;
    // 8030CC44: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030CC48:
    ctx->pc = 0x8030CC48u;
    // 8030CC48: bl      0x80370BD4
    {
            ctx->lr = 0x8030CC4Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030CC4C:
    ctx->pc = 0x8030CC4Cu;
    ctx->downcount -= 3;
    // 8030CC4C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CC50:
    ctx->pc = 0x8030CC50u;
    // 8030CC50: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030CC54:
    ctx->pc = 0x8030CC54u;
    // 8030CC54: bl      0x80263ABC
    {
            ctx->lr = 0x8030CC58u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030CC58:
    ctx->pc = 0x8030CC58u;
    ctx->downcount -= 5;
    // 8030CC58: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CC5C:
    ctx->pc = 0x8030CC5Cu;
    // 8030CC5C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CC60:
    ctx->pc = 0x8030CC60u;
    // 8030CC60: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CC64:
    ctx->pc = 0x8030CC64u;
    // 8030CC64: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CC68:
    ctx->pc = 0x8030CC68u;
    ctx->downcount -= 5;
    // 8030CC68: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CC6C:
    ctx->pc = 0x8030CC6Cu;
    // 8030CC6C: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CC70:
    ctx->pc = 0x8030CC70u;
    // 8030CC70: lwz     r4, 180(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030CC74:
    ctx->pc = 0x8030CC74u;
    // 8030CC74: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030CC78:
    ctx->pc = 0x8030CC78u;
    // 8030CC78: b       0x8030EA4C
    {
            goto label_8030EA4C;
    }

label_8030CC7C:
    ctx->pc = 0x8030CC7Cu;
    ctx->downcount -= 11;
    // 8030CC7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CC80:
    ctx->pc = 0x8030CC80u;
    // 8030CC80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CC84:
    ctx->pc = 0x8030CC84u;
    // 8030CC84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CC88:
    ctx->pc = 0x8030CC88u;
    // 8030CC88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030CC8C:
    ctx->pc = 0x8030CC8Cu;
    // 8030CC8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CC90:
    ctx->pc = 0x8030CC90u;
    // 8030CC90: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CC94:
    ctx->pc = 0x8030CC94u;
    // 8030CC94: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CC98:
    ctx->pc = 0x8030CC98u;
    // 8030CC98: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CC9C:
    ctx->pc = 0x8030CC9Cu;
    // 8030CC9C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CCA0:
    ctx->pc = 0x8030CCA0u;
    // 8030CCA0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CCA4u;
            ctx->pc = target;
            return;
        }
    }

label_8030CCA4:
    ctx->pc = 0x8030CCA4u;
    ctx->downcount -= 2;
    // 8030CCA4: cmpwi   r3, 0
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

label_8030CCA8:
    ctx->pc = 0x8030CCA8u;
    // 8030CCA8: bc    12, 2, 0x8030CCD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CCD8;
        }
    }

label_8030CCAC:
    ctx->pc = 0x8030CCACu;
    ctx->downcount -= 4;
    // 8030CCAC: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CCB0:
    ctx->pc = 0x8030CCB0u;
    // 8030CCB0: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CCB4:
    ctx->pc = 0x8030CCB4u;
    // 8030CCB4: cmpwi   r0, 0
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

label_8030CCB8:
    ctx->pc = 0x8030CCB8u;
    // 8030CCB8: bc    12, 2, 0x8030CCD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CCD8;
        }
    }

label_8030CCBC:
    ctx->pc = 0x8030CCBCu;
    ctx->downcount -= 5;
    // 8030CCBC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CCC0:
    ctx->pc = 0x8030CCC0u;
    // 8030CCC0: lwz     r12, 252(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(252);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CCC4:
    ctx->pc = 0x8030CCC4u;
    // 8030CCC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CCC8:
    ctx->pc = 0x8030CCC8u;
    // 8030CCC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CCCCu;
            ctx->pc = target;
            return;
        }
    }

label_8030CCCC:
    ctx->pc = 0x8030CCCCu;
    ctx->downcount -= 3;
    // 8030CCCC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030CCD0:
    ctx->pc = 0x8030CCD0u;
    // 8030CCD0: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8030CCD4:
    ctx->pc = 0x8030CCD4u;
    // 8030CCD4: bl      0x803457B8
    {
            ctx->lr = 0x8030CCD8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CCD8:
    ctx->pc = 0x8030CCD8u;
    ctx->downcount -= 6;
    // 8030CCD8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CCDC:
    ctx->pc = 0x8030CCDCu;
    // 8030CCDC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030CCE0:
    ctx->pc = 0x8030CCE0u;
    // 8030CCE0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030CCE4:
    ctx->pc = 0x8030CCE4u;
    // 8030CCE4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030CCE8:
    ctx->pc = 0x8030CCE8u;
    // 8030CCE8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030CCEC:
    ctx->pc = 0x8030CCECu;
    // 8030CCEC: bl      0x80370BD4
    {
            ctx->lr = 0x8030CCF0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030CCF0:
    ctx->pc = 0x8030CCF0u;
    ctx->downcount -= 3;
    // 8030CCF0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CCF4:
    ctx->pc = 0x8030CCF4u;
    // 8030CCF4: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030CCF8:
    ctx->pc = 0x8030CCF8u;
    // 8030CCF8: bl      0x80263ABC
    {
            ctx->lr = 0x8030CCFCu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030CCFC:
    ctx->pc = 0x8030CCFCu;
    ctx->downcount -= 6;
    // 8030CCFC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CD00:
    ctx->pc = 0x8030CD00u;
    // 8030CD00: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030CD04:
    ctx->pc = 0x8030CD04u;
    // 8030CD04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CD08:
    ctx->pc = 0x8030CD08u;
    // 8030CD08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CD0C:
    ctx->pc = 0x8030CD0Cu;
    // 8030CD0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CD10:
    ctx->pc = 0x8030CD10u;
    ctx->downcount -= 6;
    // 8030CD10: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CD14:
    ctx->pc = 0x8030CD14u;
    // 8030CD14: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD18:
    ctx->pc = 0x8030CD18u;
    // 8030CD18: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD1C:
    ctx->pc = 0x8030CD1Cu;
    // 8030CD1C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CD20:
    ctx->pc = 0x8030CD20u;
    // 8030CD20: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8030CD24:
    ctx->pc = 0x8030CD24u;
    ctx->downcount -= 21;
    // 8030CD24: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CD28:
    ctx->pc = 0x8030CD28u;
    // 8030CD28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CD2C:
    ctx->pc = 0x8030CD2Cu;
    // 8030CD2C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CD30:
    ctx->pc = 0x8030CD30u;
    // 8030CD30: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030CD34:
    ctx->pc = 0x8030CD34u;
    // 8030CD34: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CD38:
    ctx->pc = 0x8030CD38u;
    // 8030CD38: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CD3C:
    ctx->pc = 0x8030CD3Cu;
    // 8030CD3C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD40:
    ctx->pc = 0x8030CD40u;
    // 8030CD40: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD44:
    ctx->pc = 0x8030CD44u;
    // 8030CD44: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CD48:
    ctx->pc = 0x8030CD48u;
    // 8030CD48: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CD4Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030CD4C:
    ctx->pc = 0x8030CD4Cu;
    ctx->downcount -= 2;
    // 8030CD4C: cmpwi   r3, 0
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

label_8030CD50:
    ctx->pc = 0x8030CD50u;
    // 8030CD50: bc    12, 2, 0x8030CDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CDE8;
        }
    }

label_8030CD54:
    ctx->pc = 0x8030CD54u;
    ctx->downcount -= 6;
    // 8030CD54: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CD58:
    ctx->pc = 0x8030CD58u;
    // 8030CD58: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD5C:
    ctx->pc = 0x8030CD5Cu;
    // 8030CD5C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD60:
    ctx->pc = 0x8030CD60u;
    // 8030CD60: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CD64:
    ctx->pc = 0x8030CD64u;
    // 8030CD64: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CD68u;
            ctx->pc = target;
            return;
        }
    }

label_8030CD68:
    ctx->pc = 0x8030CD68u;
    ctx->downcount -= 2;
    // 8030CD68: cmpwi   r3, 0
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

label_8030CD6C:
    ctx->pc = 0x8030CD6Cu;
    // 8030CD6C: bc    12, 2, 0x8030CDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CDE8;
        }
    }

label_8030CD70:
    ctx->pc = 0x8030CD70u;
    ctx->downcount -= 6;
    // 8030CD70: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CD74:
    ctx->pc = 0x8030CD74u;
    // 8030CD74: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD78:
    ctx->pc = 0x8030CD78u;
    // 8030CD78: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD7C:
    ctx->pc = 0x8030CD7Cu;
    // 8030CD7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CD80:
    ctx->pc = 0x8030CD80u;
    // 8030CD80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CD84u;
            ctx->pc = target;
            return;
        }
    }

label_8030CD84:
    ctx->pc = 0x8030CD84u;
    ctx->downcount -= 2;
    // 8030CD84: cmpwi   r3, 0
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

label_8030CD88:
    ctx->pc = 0x8030CD88u;
    // 8030CD88: bc    12, 2, 0x8030CDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CDE8;
        }
    }

label_8030CD8C:
    ctx->pc = 0x8030CD8Cu;
    ctx->downcount -= 6;
    // 8030CD8C: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CD90:
    ctx->pc = 0x8030CD90u;
    // 8030CD90: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD94:
    ctx->pc = 0x8030CD94u;
    // 8030CD94: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CD98:
    ctx->pc = 0x8030CD98u;
    // 8030CD98: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CD9C:
    ctx->pc = 0x8030CD9Cu;
    // 8030CD9C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CDA0u;
            ctx->pc = target;
            return;
        }
    }

label_8030CDA0:
    ctx->pc = 0x8030CDA0u;
    ctx->downcount -= 2;
    // 8030CDA0: cmpwi   r3, 0
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

label_8030CDA4:
    ctx->pc = 0x8030CDA4u;
    // 8030CDA4: bc    12, 2, 0x8030CDE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CDE8;
        }
    }

label_8030CDA8:
    ctx->pc = 0x8030CDA8u;
    ctx->downcount -= 2;
    // 8030CDA8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030CDAC:
    ctx->pc = 0x8030CDACu;
    // 8030CDAC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030CDB0:
    ctx->downcount -= 3;
    // 8030CDB0: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030CDB4:
    ctx->pc = 0x8030CDB4u;
    // 8030CDB4: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CDB8:
    // 8030CDB8: bl      0x8036B2DC
    {
            ctx->lr = 0x8030CDBCu;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_8030CDBC:
    ctx->downcount -= 4;
    // 8030CDBC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030CDC0:
    // 8030CDC0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030CDC4:
    // 8030CDC4: cmpwi   r30, 2
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

label_8030CDC8:
    // 8030CDC8: bc    12, 0, 0x8030CDB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CDB0u;
                return;
            }
            goto label_8030CDB0;
        }
    }

label_8030CDCC:
    ctx->pc = 0x8030CDCCu;
    ctx->downcount -= 2;
    // 8030CDCC: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CDD0:
    ctx->pc = 0x8030CDD0u;
    // 8030CDD0: bl      0x8026EEE8
    {
            ctx->lr = 0x8030CDD4u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_8030CDD4:
    ctx->pc = 0x8030CDD4u;
    ctx->downcount -= 6;
    // 8030CDD4: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CDD8:
    ctx->pc = 0x8030CDD8u;
    // 8030CDD8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030CDDC:
    ctx->pc = 0x8030CDDCu;
    // 8030CDDC: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CDE0:
    ctx->pc = 0x8030CDE0u;
    // 8030CDE0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CDE4:
    ctx->pc = 0x8030CDE4u;
    // 8030CDE4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CDE8u;
            ctx->pc = target;
            return;
        }
    }

label_8030CDE8:
    ctx->pc = 0x8030CDE8u;
    ctx->downcount -= 6;
    // 8030CDE8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CDEC:
    ctx->pc = 0x8030CDECu;
    // 8030CDEC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030CDF0:
    ctx->pc = 0x8030CDF0u;
    // 8030CDF0: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030CDF4:
    ctx->pc = 0x8030CDF4u;
    // 8030CDF4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030CDF8:
    ctx->pc = 0x8030CDF8u;
    // 8030CDF8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030CDFC:
    ctx->pc = 0x8030CDFCu;
    // 8030CDFC: bl      0x80370BD4
    {
            ctx->lr = 0x8030CE00u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030CE00:
    ctx->pc = 0x8030CE00u;
    ctx->downcount -= 3;
    // 8030CE00: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CE04:
    ctx->pc = 0x8030CE04u;
    // 8030CE04: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030CE08:
    ctx->pc = 0x8030CE08u;
    // 8030CE08: bl      0x80263ABC
    {
            ctx->lr = 0x8030CE0Cu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030CE0C:
    ctx->pc = 0x8030CE0Cu;
    ctx->downcount -= 16;
    // 8030CE0C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030CE10:
    ctx->pc = 0x8030CE10u;
    // 8030CE10: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CE14:
    ctx->pc = 0x8030CE14u;
    // 8030CE14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CE18:
    ctx->pc = 0x8030CE18u;
    // 8030CE18: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030CE1C:
    ctx->pc = 0x8030CE1Cu;
    // 8030CE1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CE20:
    ctx->pc = 0x8030CE20u;
    ctx->downcount -= 11;
    // 8030CE20: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CE24:
    ctx->pc = 0x8030CE24u;
    // 8030CE24: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CE28:
    ctx->pc = 0x8030CE28u;
    // 8030CE28: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CE2C:
    ctx->pc = 0x8030CE2Cu;
    // 8030CE2C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030CE30:
    ctx->pc = 0x8030CE30u;
    // 8030CE30: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CE34:
    ctx->pc = 0x8030CE34u;
    // 8030CE34: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CE38:
    ctx->pc = 0x8030CE38u;
    // 8030CE38: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE3C:
    ctx->pc = 0x8030CE3Cu;
    // 8030CE3C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE40:
    ctx->pc = 0x8030CE40u;
    // 8030CE40: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CE44:
    ctx->pc = 0x8030CE44u;
    // 8030CE44: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CE48u;
            ctx->pc = target;
            return;
        }
    }

label_8030CE48:
    ctx->pc = 0x8030CE48u;
    ctx->downcount -= 6;
    // 8030CE48: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CE4C:
    ctx->pc = 0x8030CE4Cu;
    // 8030CE4C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE50:
    ctx->pc = 0x8030CE50u;
    // 8030CE50: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE54:
    ctx->pc = 0x8030CE54u;
    // 8030CE54: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CE58:
    ctx->pc = 0x8030CE58u;
    // 8030CE58: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CE5Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030CE5C:
    ctx->pc = 0x8030CE5Cu;
    ctx->downcount -= 6;
    // 8030CE5C: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CE60:
    ctx->pc = 0x8030CE60u;
    // 8030CE60: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE64:
    ctx->pc = 0x8030CE64u;
    // 8030CE64: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE68:
    ctx->pc = 0x8030CE68u;
    // 8030CE68: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CE6C:
    ctx->pc = 0x8030CE6Cu;
    // 8030CE6C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CE70u;
            ctx->pc = target;
            return;
        }
    }

label_8030CE70:
    ctx->pc = 0x8030CE70u;
    ctx->downcount -= 6;
    // 8030CE70: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CE74:
    ctx->pc = 0x8030CE74u;
    // 8030CE74: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE78:
    ctx->pc = 0x8030CE78u;
    // 8030CE78: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030CE7C:
    ctx->pc = 0x8030CE7Cu;
    // 8030CE7C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030CE80:
    ctx->pc = 0x8030CE80u;
    // 8030CE80: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030CE84u;
            ctx->pc = target;
            return;
        }
    }

label_8030CE84:
    ctx->pc = 0x8030CE84u;
    ctx->downcount -= 6;
    // 8030CE84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CE88:
    ctx->pc = 0x8030CE88u;
    // 8030CE88: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030CE8C:
    ctx->pc = 0x8030CE8Cu;
    // 8030CE8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CE90:
    ctx->pc = 0x8030CE90u;
    // 8030CE90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030CE94:
    ctx->pc = 0x8030CE94u;
    // 8030CE94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CE98:
    ctx->pc = 0x8030CE98u;
    ctx->downcount -= 19;
    // 8030CE98: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CE9C:
    ctx->pc = 0x8030CE9Cu;
    // 8030CE9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CEA0:
    ctx->pc = 0x8030CEA0u;
    // 8030CEA0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CEA4:
    ctx->pc = 0x8030CEA4u;
    // 8030CEA4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030CEA8:
    ctx->pc = 0x8030CEA8u;
    // 8030CEA8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CEAC:
    ctx->pc = 0x8030CEACu;
    // 8030CEAC: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030CEB0:
    ctx->pc = 0x8030CEB0u;
    // 8030CEB0: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CEB4:
    ctx->pc = 0x8030CEB4u;
    // 8030CEB4: cmpwi   r0, 0
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

label_8030CEB8:
    ctx->pc = 0x8030CEB8u;
    // 8030CEB8: bc    12, 2, 0x8030CEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CEDC;
        }
    }

label_8030CEBC:
    ctx->pc = 0x8030CEBCu;
    ctx->downcount -= 3;
    // 8030CEBC: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CEC0:
    ctx->pc = 0x8030CEC0u;
    // 8030CEC0: cmpwi   r0, 0
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

label_8030CEC4:
    ctx->pc = 0x8030CEC4u;
    // 8030CEC4: bc    12, 2, 0x8030CEDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CEDC;
        }
    }

label_8030CEC8:
    ctx->pc = 0x8030CEC8u;
    ctx->downcount -= 5;
    // 8030CEC8: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030CECC:
    ctx->pc = 0x8030CECCu;
    // 8030CECC: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CED0:
    ctx->pc = 0x8030CED0u;
    // 8030CED0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8030CED4:
    ctx->pc = 0x8030CED4u;
    // 8030CED4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030CED8:
    ctx->pc = 0x8030CED8u;
    // 8030CED8: bl      0x803457B8
    {
            ctx->lr = 0x8030CEDCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CEDC:
    ctx->pc = 0x8030CEDCu;
    ctx->downcount -= 3;
    // 8030CEDC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8030CEE0:
    ctx->pc = 0x8030CEE0u;
    // 8030CEE0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030CEE4:
    ctx->pc = 0x8030CEE4u;
    // 8030CEE4: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_8030CEE8:
    ctx->downcount -= 5;
    // 8030CEE8: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030CEEC:
    ctx->pc = 0x8030CEECu;
    // 8030CEEC: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CEF0:
    ctx->pc = 0x8030CEF0u;
    // 8030CEF0: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CEF4:
    // 8030CEF4: cmpwi   r0, 0
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

label_8030CEF8:
    // 8030CEF8: bc    12, 2, 0x8030CF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CF18;
        }
    }

label_8030CEFC:
    ctx->pc = 0x8030CEFCu;
    ctx->downcount -= 3;
    // 8030CEFC: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CF00:
    // 8030CF00: cmpwi   r0, 0
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

label_8030CF04:
    // 8030CF04: bc    12, 2, 0x8030CF18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CF18;
        }
    }

label_8030CF08:
    ctx->pc = 0x8030CF08u;
    ctx->downcount -= 4;
    // 8030CF08: stw     r30, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030CF0C:
    // 8030CF0C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030CF10:
    // 8030CF10: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8030CF14:
    // 8030CF14: bl      0x803457B8
    {
            ctx->lr = 0x8030CF18u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CF18:
    ctx->downcount -= 4;
    // 8030CF18: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8030CF1C:
    // 8030CF1C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030CF20:
    // 8030CF20: cmpwi   r29, 2
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

label_8030CF24:
    // 8030CF24: bc    12, 0, 0x8030CEE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CEE8u;
                return;
            }
            goto label_8030CEE8;
        }
    }

label_8030CF28:
    ctx->pc = 0x8030CF28u;
    ctx->downcount -= 6;
    // 8030CF28: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CF2C:
    ctx->pc = 0x8030CF2Cu;
    // 8030CF2C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030CF30:
    ctx->pc = 0x8030CF30u;
    // 8030CF30: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030CF34:
    ctx->pc = 0x8030CF34u;
    // 8030CF34: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030CF38:
    ctx->pc = 0x8030CF38u;
    // 8030CF38: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030CF3C:
    ctx->pc = 0x8030CF3Cu;
    // 8030CF3C: bl      0x80370BD4
    {
            ctx->lr = 0x8030CF40u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030CF40:
    ctx->pc = 0x8030CF40u;
    ctx->downcount -= 3;
    // 8030CF40: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CF44:
    ctx->pc = 0x8030CF44u;
    // 8030CF44: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030CF48:
    ctx->pc = 0x8030CF48u;
    // 8030CF48: bl      0x80263ABC
    {
            ctx->lr = 0x8030CF4Cu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030CF4C:
    ctx->pc = 0x8030CF4Cu;
    ctx->downcount -= 16;
    // 8030CF4C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030CF50:
    ctx->pc = 0x8030CF50u;
    // 8030CF50: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030CF54:
    ctx->pc = 0x8030CF54u;
    // 8030CF54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030CF58:
    ctx->pc = 0x8030CF58u;
    // 8030CF58: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030CF5C:
    ctx->pc = 0x8030CF5Cu;
    // 8030CF5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CF60:
    ctx->pc = 0x8030CF60u;
    ctx->downcount -= 1;
    // 8030CF60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030CF64:
    ctx->pc = 0x8030CF64u;
    ctx->downcount -= 9;
    // 8030CF64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030CF68:
    ctx->pc = 0x8030CF68u;
    // 8030CF68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030CF6C:
    ctx->pc = 0x8030CF6Cu;
    // 8030CF6C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CF70:
    ctx->pc = 0x8030CF70u;
    // 8030CF70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030CF74:
    ctx->pc = 0x8030CF74u;
    // 8030CF74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030CF78:
    ctx->pc = 0x8030CF78u;
    // 8030CF78: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030CF7C:
    ctx->pc = 0x8030CF7Cu;
    // 8030CF7C: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CF80:
    ctx->pc = 0x8030CF80u;
    // 8030CF80: cmpwi   r0, 0
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

label_8030CF84:
    ctx->pc = 0x8030CF84u;
    // 8030CF84: bc    12, 2, 0x8030CFC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030CFC4;
        }
    }

label_8030CF88:
    ctx->pc = 0x8030CF88u;
    ctx->downcount -= 8;
    // 8030CF88: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030CF8C:
    ctx->pc = 0x8030CF8Cu;
    // 8030CF8C: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030CF90:
    ctx->pc = 0x8030CF90u;
    // 8030CF90: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030CF94:
    ctx->pc = 0x8030CF94u;
    // 8030CF94: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CF98:
    ctx->pc = 0x8030CF98u;
    // 8030CF98: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030CF9C:
    ctx->pc = 0x8030CF9Cu;
    // 8030CF9C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030CFA0:
    ctx->pc = 0x8030CFA0u;
    // 8030CFA0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030CFA4:
    ctx->pc = 0x8030CFA4u;
    // 8030CFA4: bl      0x80370BD4
    {
            ctx->lr = 0x8030CFA8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030CFA8:
    ctx->pc = 0x8030CFA8u;
    ctx->downcount -= 3;
    // 8030CFA8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030CFAC:
    ctx->pc = 0x8030CFACu;
    // 8030CFAC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030CFB0:
    ctx->pc = 0x8030CFB0u;
    // 8030CFB0: bl      0x80263ABC
    {
            ctx->lr = 0x8030CFB4u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030CFB4:
    ctx->pc = 0x8030CFB4u;
    ctx->downcount -= 3;
    // 8030CFB4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030CFB8:
    ctx->pc = 0x8030CFB8u;
    // 8030CFB8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030CFBC:
    ctx->pc = 0x8030CFBCu;
    // 8030CFBC: bl      0x803457B8
    {
            ctx->lr = 0x8030CFC0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CFC0:
    ctx->pc = 0x8030CFC0u;
    ctx->downcount -= 1;
    // 8030CFC0: b       0x8030D058
    {
            goto label_8030D058;
    }

label_8030CFC4:
    ctx->pc = 0x8030CFC4u;
    ctx->downcount -= 5;
    // 8030CFC4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030CFC8:
    ctx->pc = 0x8030CFC8u;
    // 8030CFC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030CFCC:
    ctx->pc = 0x8030CFCCu;
    // 8030CFCC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030CFD0:
    ctx->pc = 0x8030CFD0u;
    // 8030CFD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8030CFD4:
    ctx->downcount -= 5;
    // 8030CFD4: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030CFD8:
    ctx->pc = 0x8030CFD8u;
    // 8030CFD8: lwz     r5, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030CFDC:
    ctx->pc = 0x8030CFDCu;
    // 8030CFDC: lbz     r0, 209(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030CFE0:
    // 8030CFE0: cmpwi   r0, 0
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

label_8030CFE4:
    // 8030CFE4: bc    12, 2, 0x8030D044
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D044;
        }
    }

label_8030CFE8:
    ctx->downcount -= 2;
    // 8030CFE8: cmpwi   r6, 0
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

label_8030CFEC:
    // 8030CFEC: bc    4, 2, 0x8030D000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D000;
        }
    }

label_8030CFF0:
    ctx->downcount -= 3;
    // 8030CFF0: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8030CFF4:
    // 8030CFF4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030CFF8:
    // 8030CFF8: bl      0x803457B8
    {
            ctx->lr = 0x8030CFFCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030CFFC:
    ctx->downcount -= 1;
    // 8030CFFC: b       0x8030D01C
    {
            goto label_8030D01C;
    }

label_8030D000:
    ctx->downcount -= 2;
    // 8030D000: cmpwi   r6, 1
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030D004:
    // 8030D004: bc    4, 2, 0x8030D01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D01C;
        }
    }

label_8030D008:
    ctx->downcount -= 5;
    // 8030D008: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030D00C:
    ctx->pc = 0x8030D00Cu;
    // 8030D00C: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D010:
    // 8030D010: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030D014:
    // 8030D014: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030D018:
    // 8030D018: bl      0x803457B8
    {
            ctx->lr = 0x8030D01Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030D01C:
    ctx->pc = 0x8030D01Cu;
    ctx->downcount -= 6;
    // 8030D01C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D020:
    // 8030D020: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030D024:
    // 8030D024: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030D028:
    // 8030D028: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D02C:
    // 8030D02C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D030:
    // 8030D030: bl      0x80370BD4
    {
            ctx->lr = 0x8030D034u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D034:
    ctx->pc = 0x8030D034u;
    ctx->downcount -= 3;
    // 8030D034: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D038:
    // 8030D038: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030D03C:
    // 8030D03C: bl      0x80263ABC
    {
            ctx->lr = 0x8030D040u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030D040:
    ctx->downcount -= 1;
    // 8030D040: b       0x8030D058
    {
            goto label_8030D058;
    }

label_8030D044:
    ctx->downcount -= 3;
    // 8030D044: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_8030D048:
    // 8030D048: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8030D04C:
    // 8030D04C: bc    16, 0, 0x8030CFD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030CFD4u;
                return;
            }
            goto label_8030CFD4;
        }
    }

label_8030D050:
    ctx->pc = 0x8030D050u;
    ctx->downcount -= 2;
    // 8030D050: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D054:
    ctx->pc = 0x8030D054u;
    // 8030D054: bl      0x8026EE88
    {
            ctx->lr = 0x8030D058u;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_8030D058:
    ctx->pc = 0x8030D058u;
    ctx->downcount -= 6;
    // 8030D058: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D05C:
    ctx->pc = 0x8030D05Cu;
    // 8030D05C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D060:
    ctx->pc = 0x8030D060u;
    // 8030D060: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D064:
    ctx->pc = 0x8030D064u;
    // 8030D064: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D068:
    ctx->pc = 0x8030D068u;
    // 8030D068: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D06C:
    ctx->pc = 0x8030D06Cu;
    ctx->downcount -= 2;
    // 8030D06C: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D070:
    ctx->pc = 0x8030D070u;
    // 8030D070: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_8030D074:
    ctx->pc = 0x8030D074u;
    ctx->downcount -= 7;
    // 8030D074: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D078:
    ctx->pc = 0x8030D078u;
    // 8030D078: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D07C:
    ctx->pc = 0x8030D07Cu;
    // 8030D07C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D080:
    ctx->pc = 0x8030D080u;
    // 8030D080: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D084:
    ctx->pc = 0x8030D084u;
    // 8030D084: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030D088:
    ctx->pc = 0x8030D088u;
    // 8030D088: cmpwi   r0, 0
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

label_8030D08C:
    ctx->pc = 0x8030D08Cu;
    // 8030D08C: bc    12, 2, 0x8030D0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D0CC;
        }
    }

label_8030D090:
    ctx->pc = 0x8030D090u;
    ctx->downcount -= 4;
    // 8030D090: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D094:
    ctx->pc = 0x8030D094u;
    // 8030D094: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030D098:
    ctx->pc = 0x8030D098u;
    // 8030D098: cmpwi   r0, 0
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

label_8030D09C:
    ctx->pc = 0x8030D09Cu;
    // 8030D09C: bc    12, 2, 0x8030D0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D0CC;
        }
    }

label_8030D0A0:
    ctx->pc = 0x8030D0A0u;
    ctx->downcount -= 4;
    // 8030D0A0: lwz     r4, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D0A4:
    ctx->pc = 0x8030D0A4u;
    // 8030D0A4: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030D0A8:
    ctx->pc = 0x8030D0A8u;
    // 8030D0A8: cmpwi   r0, 0
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

label_8030D0AC:
    ctx->pc = 0x8030D0ACu;
    // 8030D0AC: bc    12, 2, 0x8030D0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D0CC;
        }
    }

label_8030D0B0:
    ctx->pc = 0x8030D0B0u;
    ctx->downcount -= 4;
    // 8030D0B0: lwz     r4, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D0B4:
    ctx->pc = 0x8030D0B4u;
    // 8030D0B4: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030D0B8:
    ctx->pc = 0x8030D0B8u;
    // 8030D0B8: cmpwi   r0, 0
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

label_8030D0BC:
    ctx->pc = 0x8030D0BCu;
    // 8030D0BC: bc    12, 2, 0x8030D0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D0CC;
        }
    }

label_8030D0C0:
    ctx->pc = 0x8030D0C0u;
    ctx->downcount -= 3;
    // 8030D0C0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030D0C4:
    ctx->pc = 0x8030D0C4u;
    // 8030D0C4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030D0C8:
    ctx->pc = 0x8030D0C8u;
    // 8030D0C8: bl      0x803457B8
    {
            ctx->lr = 0x8030D0CCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030D0CC:
    ctx->pc = 0x8030D0CCu;
    ctx->downcount -= 6;
    // 8030D0CC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D0D0:
    ctx->pc = 0x8030D0D0u;
    // 8030D0D0: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030D0D4:
    ctx->pc = 0x8030D0D4u;
    // 8030D0D4: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8030D0D8:
    ctx->pc = 0x8030D0D8u;
    // 8030D0D8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D0DC:
    ctx->pc = 0x8030D0DCu;
    // 8030D0DC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D0E0:
    ctx->pc = 0x8030D0E0u;
    // 8030D0E0: bl      0x80370BD4
    {
            ctx->lr = 0x8030D0E4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D0E4:
    ctx->pc = 0x8030D0E4u;
    ctx->downcount -= 3;
    // 8030D0E4: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D0E8:
    ctx->pc = 0x8030D0E8u;
    // 8030D0E8: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030D0EC:
    ctx->pc = 0x8030D0ECu;
    // 8030D0EC: bl      0x80263ABC
    {
            ctx->lr = 0x8030D0F0u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8030D0F0:
    ctx->pc = 0x8030D0F0u;
    ctx->downcount -= 5;
    // 8030D0F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D0F4:
    ctx->pc = 0x8030D0F4u;
    // 8030D0F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D0F8:
    ctx->pc = 0x8030D0F8u;
    // 8030D0F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D0FC:
    ctx->pc = 0x8030D0FCu;
    // 8030D0FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D100:
    ctx->pc = 0x8030D100u;
    ctx->downcount -= 16;
    // 8030D100: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D104:
    ctx->pc = 0x8030D104u;
    // 8030D104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D108:
    ctx->pc = 0x8030D108u;
    // 8030D108: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D10C:
    ctx->pc = 0x8030D10Cu;
    // 8030D10C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D110:
    ctx->pc = 0x8030D110u;
    // 8030D110: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D114:
    ctx->pc = 0x8030D114u;
    // 8030D114: bl      0x8030D3F8
    {
            ctx->lr = 0x8030D118u;
            goto label_8030D3F8;
    }

label_8030D118:
    ctx->pc = 0x8030D118u;
    ctx->downcount -= 4;
    // 8030D118: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D11C:
    ctx->pc = 0x8030D11Cu;
    // 8030D11C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030D120:
    ctx->pc = 0x8030D120u;
    // 8030D120: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030D124:
    ctx->pc = 0x8030D124u;
    // 8030D124: bl      0x803554B8
    {
            ctx->lr = 0x8030D128u;
            ctx->pc = 0x803554B8u;
            return;
    }

label_8030D128:
    ctx->pc = 0x8030D128u;
    ctx->downcount -= 6;
    // 8030D128: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D12C:
    ctx->pc = 0x8030D12Cu;
    // 8030D12C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D130:
    ctx->pc = 0x8030D130u;
    // 8030D130: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D134:
    ctx->pc = 0x8030D134u;
    // 8030D134: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D138:
    ctx->pc = 0x8030D138u;
    // 8030D138: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D13Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030D13C:
    ctx->pc = 0x8030D13Cu;
    ctx->downcount -= 2;
    // 8030D13C: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D140:
    ctx->pc = 0x8030D140u;
    // 8030D140: bl      0x8030D490
    {
            ctx->lr = 0x8030D144u;
            goto label_8030D490;
    }

label_8030D144:
    ctx->pc = 0x8030D144u;
    ctx->downcount -= 4;
    // 8030D144: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D148:
    ctx->pc = 0x8030D148u;
    // 8030D148: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D14C:
    ctx->pc = 0x8030D14Cu;
    // 8030D14C: lwz     r4, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D150:
    ctx->pc = 0x8030D150u;
    // 8030D150: bl      0x8030E9C0
    {
            ctx->lr = 0x8030D154u;
            goto label_8030E9C0;
    }

label_8030D154:
    ctx->pc = 0x8030D154u;
    ctx->downcount -= 3;
    // 8030D154: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D158:
    ctx->pc = 0x8030D158u;
    // 8030D158: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8030D15C:
    ctx->pc = 0x8030D15Cu;
    // 8030D15C: bl      0x802E3C9C
    {
            ctx->lr = 0x8030D160u;
            ctx->pc = 0x802E3C9Cu;
            return;
    }

label_8030D160:
    ctx->pc = 0x8030D160u;
    ctx->downcount -= 2;
    // 8030D160: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030D164:
    ctx->pc = 0x8030D164u;
    // 8030D164: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030D168:
    ctx->downcount -= 4;
    // 8030D168: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030D16C:
    // 8030D16C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030D170:
    ctx->pc = 0x8030D170u;
    // 8030D170: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D174:
    // 8030D174: bl      0x8036B330
    {
            ctx->lr = 0x8030D178u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_8030D178:
    ctx->downcount -= 4;
    // 8030D178: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030D17C:
    // 8030D17C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030D180:
    // 8030D180: cmpwi   r30, 2
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

label_8030D184:
    // 8030D184: bc    12, 0, 0x8030D168
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D168u;
                return;
            }
            goto label_8030D168;
        }
    }

label_8030D188:
    ctx->pc = 0x8030D188u;
    ctx->downcount -= 3;
    // 8030D188: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D18C:
    ctx->pc = 0x8030D18Cu;
    // 8030D18C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030D190:
    ctx->pc = 0x8030D190u;
    // 8030D190: bl      0x8026F12C
    {
            ctx->lr = 0x8030D194u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_8030D194:
    ctx->pc = 0x8030D194u;
    ctx->downcount -= 8;
    // 8030D194: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D198:
    ctx->pc = 0x8030D198u;
    // 8030D198: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030D19C:
    ctx->pc = 0x8030D19Cu;
    // 8030D19C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030D1A0:
    ctx->pc = 0x8030D1A0u;
    // 8030D1A0: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D1A4:
    ctx->pc = 0x8030D1A4u;
    // 8030D1A4: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D1A8:
    ctx->pc = 0x8030D1A8u;
    // 8030D1A8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D1AC:
    ctx->pc = 0x8030D1ACu;
    // 8030D1AC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D1B0u;
            ctx->pc = target;
            return;
        }
    }

label_8030D1B0:
    ctx->pc = 0x8030D1B0u;
    ctx->downcount -= 16;
    // 8030D1B0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D1B4:
    ctx->pc = 0x8030D1B4u;
    // 8030D1B4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D1B8:
    ctx->pc = 0x8030D1B8u;
    // 8030D1B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D1BC:
    ctx->pc = 0x8030D1BCu;
    // 8030D1BC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030D1C0:
    ctx->pc = 0x8030D1C0u;
    // 8030D1C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D1C4:
    ctx->pc = 0x8030D1C4u;
    ctx->downcount -= 6;
    // 8030D1C4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D1C8:
    ctx->pc = 0x8030D1C8u;
    // 8030D1C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D1CC:
    ctx->pc = 0x8030D1CCu;
    // 8030D1CC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D1D0:
    ctx->pc = 0x8030D1D0u;
    // 8030D1D0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030D1D4:
    ctx->pc = 0x8030D1D4u;
    // 8030D1D4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D1D8:
    ctx->pc = 0x8030D1D8u;
    // 8030D1D8: bl      0x8030D20C
    {
            ctx->lr = 0x8030D1DCu;
            goto label_8030D20C;
    }

label_8030D1DC:
    ctx->pc = 0x8030D1DCu;
    ctx->downcount -= 2;
    // 8030D1DC: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D1E0:
    ctx->pc = 0x8030D1E0u;
    // 8030D1E0: bl      0x802D32F8
    {
            ctx->lr = 0x8030D1E4u;
            ctx->pc = 0x802D32F8u;
            return;
    }

label_8030D1E4:
    ctx->pc = 0x8030D1E4u;
    ctx->downcount -= 2;
    // 8030D1E4: cmpwi   r3, 0
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

label_8030D1E8:
    ctx->pc = 0x8030D1E8u;
    // 8030D1E8: bc    12, 2, 0x8030D1F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D1F8;
        }
    }

label_8030D1EC:
    ctx->pc = 0x8030D1ECu;
    ctx->downcount -= 3;
    // 8030D1EC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030D1F0:
    ctx->pc = 0x8030D1F0u;
    // 8030D1F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030D1F4:
    ctx->pc = 0x8030D1F4u;
    // 8030D1F4: bl      0x803457B8
    {
            ctx->lr = 0x8030D1F8u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030D1F8:
    ctx->pc = 0x8030D1F8u;
    ctx->downcount -= 6;
    // 8030D1F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D1FC:
    ctx->pc = 0x8030D1FCu;
    // 8030D1FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D200:
    ctx->pc = 0x8030D200u;
    // 8030D200: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D204:
    ctx->pc = 0x8030D204u;
    // 8030D204: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D208:
    ctx->pc = 0x8030D208u;
    // 8030D208: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D20C:
    ctx->pc = 0x8030D20Cu;
    ctx->downcount -= 2;
    // 8030D20C: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D210:
    ctx->pc = 0x8030D210u;
    // 8030D210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D214:
    ctx->pc = 0x8030D214u;
    ctx->downcount -= 1;
    // 8030D214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D218:
    ctx->pc = 0x8030D218u;
    ctx->downcount -= 8;
    // 8030D218: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D21C:
    ctx->pc = 0x8030D21Cu;
    // 8030D21C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D220:
    ctx->pc = 0x8030D220u;
    // 8030D220: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D224:
    ctx->pc = 0x8030D224u;
    // 8030D224: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030D228:
    ctx->pc = 0x8030D228u;
    // 8030D228: stw     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030D22C:
    ctx->pc = 0x8030D22Cu;
    // 8030D22C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D230:
    ctx->pc = 0x8030D230u;
    // 8030D230: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D234:
    ctx->pc = 0x8030D234u;
    // 8030D234: bl      0x8036E67C
    {
            ctx->lr = 0x8030D238u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_8030D238:
    ctx->pc = 0x8030D238u;
    ctx->downcount -= 8;
    // 8030D238: lfs     f0, -11920(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030D238u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11920);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030D23C:
    ctx->pc = 0x8030D23Cu;
    // 8030D23C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D240:
    ctx->pc = 0x8030D240u;
    // 8030D240: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D240u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030D244:
    ctx->pc = 0x8030D244u;
    // 8030D244: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_8030D248:
    ctx->pc = 0x8030D248u;
    // 8030D248: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D248u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030D24C:
    ctx->pc = 0x8030D24Cu;
    // 8030D24C: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D24Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030D250:
    ctx->pc = 0x8030D250u;
    // 8030D250: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D254:
    ctx->pc = 0x8030D254u;
    // 8030D254: bl      0x8030EEEC
    {
            ctx->lr = 0x8030D258u;
            goto label_8030EEEC;
    }

label_8030D258:
    ctx->pc = 0x8030D258u;
    ctx->downcount -= 9;
    // 8030D258: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D258u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030D25C:
    ctx->pc = 0x8030D25Cu;
    // 8030D25C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8030D260:
    ctx->pc = 0x8030D260u;
    // 8030D260: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030D264:
    ctx->pc = 0x8030D264u;
    // 8030D264: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030D268:
    ctx->pc = 0x8030D268u;
    // 8030D268: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8030D26C:
    ctx->pc = 0x8030D26Cu;
    // 8030D26C: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D26Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030D270:
    ctx->pc = 0x8030D270u;
    // 8030D270: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030D274:
    ctx->pc = 0x8030D274u;
    // 8030D274: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D278:
    ctx->pc = 0x8030D278u;
    // 8030D278: bl      0x8036B284
    {
            ctx->lr = 0x8030D27Cu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_8030D27C:
    ctx->pc = 0x8030D27Cu;
    ctx->downcount -= 3;
    // 8030D27C: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D280:
    ctx->pc = 0x8030D280u;
    // 8030D280: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_8030D284:
    ctx->pc = 0x8030D284u;
    // 8030D284: bl      0x8036B244
    {
            ctx->lr = 0x8030D288u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_8030D288:
    ctx->pc = 0x8030D288u;
    ctx->downcount -= 3;
    // 8030D288: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D28C:
    ctx->pc = 0x8030D28Cu;
    // 8030D28C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030D290:
    ctx->pc = 0x8030D290u;
    // 8030D290: bl      0x8030EE8C
    {
            ctx->lr = 0x8030D294u;
            goto label_8030EE8C;
    }

label_8030D294:
    ctx->pc = 0x8030D294u;
    ctx->downcount -= 9;
    // 8030D294: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D294u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030D298:
    ctx->pc = 0x8030D298u;
    // 8030D298: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_8030D29C:
    ctx->pc = 0x8030D29Cu;
    // 8030D29C: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D29Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030D2A0:
    ctx->pc = 0x8030D2A0u;
    // 8030D2A0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D2A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030D2A4:
    ctx->pc = 0x8030D2A4u;
    // 8030D2A4: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D2A4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_8030D2A8:
    ctx->pc = 0x8030D2A8u;
    // 8030D2A8: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D2A8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030D2AC:
    ctx->pc = 0x8030D2ACu;
    // 8030D2AC: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030D2ACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030D2B0:
    ctx->pc = 0x8030D2B0u;
    // 8030D2B0: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D2B4:
    ctx->pc = 0x8030D2B4u;
    // 8030D2B4: bl      0x8036B284
    {
            ctx->lr = 0x8030D2B8u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_8030D2B8:
    ctx->pc = 0x8030D2B8u;
    ctx->downcount -= 3;
    // 8030D2B8: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D2BC:
    ctx->pc = 0x8030D2BCu;
    // 8030D2BC: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_8030D2C0:
    ctx->pc = 0x8030D2C0u;
    // 8030D2C0: bl      0x8036B244
    {
            ctx->lr = 0x8030D2C4u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_8030D2C4:
    ctx->pc = 0x8030D2C4u;
    ctx->downcount -= 7;
    // 8030D2C4: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D2C8:
    ctx->pc = 0x8030D2C8u;
    // 8030D2C8: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D2CC:
    ctx->pc = 0x8030D2CCu;
    // 8030D2CC: lwz     r30, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8030D2D0:
    ctx->pc = 0x8030D2D0u;
    // 8030D2D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D2D4:
    ctx->pc = 0x8030D2D4u;
    // 8030D2D4: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_8030D2D8:
    ctx->pc = 0x8030D2D8u;
    // 8030D2D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D2DC:
    ctx->pc = 0x8030D2DCu;
    ctx->downcount -= 16;
    // 8030D2DC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D2E0:
    ctx->pc = 0x8030D2E0u;
    // 8030D2E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D2E4:
    ctx->pc = 0x8030D2E4u;
    // 8030D2E4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D2E8:
    ctx->pc = 0x8030D2E8u;
    // 8030D2E8: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D2EC:
    ctx->pc = 0x8030D2ECu;
    // 8030D2EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D2F0:
    ctx->pc = 0x8030D2F0u;
    // 8030D2F0: bl      0x8030D20C
    {
            ctx->lr = 0x8030D2F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D20Cu;
                return;
            }
            goto label_8030D20C;
    }

label_8030D2F4:
    ctx->pc = 0x8030D2F4u;
    ctx->downcount -= 7;
    // 8030D2F4: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D2F8:
    ctx->pc = 0x8030D2F8u;
    // 8030D2F8: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D2FC:
    ctx->pc = 0x8030D2FCu;
    // 8030D2FC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D300:
    ctx->pc = 0x8030D300u;
    // 8030D300: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D304:
    ctx->pc = 0x8030D304u;
    // 8030D304: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D308:
    ctx->pc = 0x8030D308u;
    // 8030D308: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D30Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030D30C:
    ctx->pc = 0x8030D30Cu;
    ctx->downcount -= 2;
    // 8030D30C: cmpwi   r3, 0
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

label_8030D310:
    ctx->pc = 0x8030D310u;
    // 8030D310: bc    4, 2, 0x8030D364
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D364;
        }
    }

label_8030D314:
    ctx->pc = 0x8030D314u;
    ctx->downcount -= 2;
    // 8030D314: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030D318:
    ctx->pc = 0x8030D318u;
    // 8030D318: b       0x8030D358
    {
            goto label_8030D358;
    }

label_8030D31C:
    ctx->pc = 0x8030D31Cu;
    ctx->downcount -= 3;
    // 8030D31C: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D320:
    // 8030D320: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D324:
    // 8030D324: bl      0x8030E2D0
    {
            ctx->lr = 0x8030D328u;
            goto label_8030E2D0;
    }

label_8030D328:
    ctx->pc = 0x8030D328u;
    ctx->downcount -= 7;
    // 8030D328: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030D32C:
    ctx->pc = 0x8030D32Cu;
    // 8030D32C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030D330:
    ctx->pc = 0x8030D330u;
    // 8030D330: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030D334:
    // 8030D334: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D338:
    ctx->pc = 0x8030D338u;
    // 8030D338: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030D33C:
    ctx->pc = 0x8030D33Cu;
    // 8030D33C: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D340:
    // 8030D340: bl      0x8030E220
    {
            ctx->lr = 0x8030D344u;
            goto label_8030E220;
    }

label_8030D344:
    ctx->downcount -= 4;
    // 8030D344: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D348:
    // 8030D348: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D34C:
    // 8030D34C: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D350:
    // 8030D350: bl      0x802D2980
    {
            ctx->lr = 0x8030D354u;
            ctx->pc = 0x802D2980u;
            return;
    }

label_8030D354:
    ctx->downcount -= 1;
    // 8030D354: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030D358:
    ctx->pc = 0x8030D358u;
    ctx->downcount -= 3;
    // 8030D358: lwz     r0, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D35C:
    // 8030D35C: cmpw    r30, r0
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

label_8030D360:
    // 8030D360: bc    12, 0, 0x8030D31C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D31Cu;
                return;
            }
            goto label_8030D31C;
        }
    }

label_8030D364:
    ctx->pc = 0x8030D364u;
    ctx->downcount -= 16;
    // 8030D364: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D368:
    ctx->pc = 0x8030D368u;
    // 8030D368: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D36C:
    ctx->pc = 0x8030D36Cu;
    // 8030D36C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D370:
    ctx->pc = 0x8030D370u;
    // 8030D370: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8030D374:
    ctx->pc = 0x8030D374u;
    // 8030D374: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D378:
    ctx->pc = 0x8030D378u;
    ctx->downcount -= 21;
    // 8030D378: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D37C:
    ctx->pc = 0x8030D37Cu;
    // 8030D37C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D380:
    ctx->pc = 0x8030D380u;
    // 8030D380: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D384:
    ctx->pc = 0x8030D384u;
    // 8030D384: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D388:
    ctx->pc = 0x8030D388u;
    // 8030D388: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D38C:
    ctx->pc = 0x8030D38Cu;
    // 8030D38C: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D390:
    ctx->pc = 0x8030D390u;
    // 8030D390: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D394:
    ctx->pc = 0x8030D394u;
    // 8030D394: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D398:
    ctx->pc = 0x8030D398u;
    // 8030D398: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D39C:
    ctx->pc = 0x8030D39Cu;
    // 8030D39C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D3A0u;
            ctx->pc = target;
            return;
        }
    }

label_8030D3A0:
    ctx->pc = 0x8030D3A0u;
    ctx->downcount -= 2;
    // 8030D3A0: cmpwi   r3, 0
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

label_8030D3A4:
    ctx->pc = 0x8030D3A4u;
    // 8030D3A4: bc    12, 2, 0x8030D3C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D3C0;
        }
    }

label_8030D3A8:
    ctx->pc = 0x8030D3A8u;
    ctx->downcount -= 2;
    // 8030D3A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D3AC:
    ctx->pc = 0x8030D3ACu;
    // 8030D3AC: bl      0x8030D20C
    {
            ctx->lr = 0x8030D3B0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D20Cu;
                return;
            }
            goto label_8030D20C;
    }

label_8030D3B0:
    ctx->pc = 0x8030D3B0u;
    ctx->downcount -= 3;
    // 8030D3B0: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D3B4:
    ctx->pc = 0x8030D3B4u;
    // 8030D3B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030D3B8:
    ctx->pc = 0x8030D3B8u;
    // 8030D3B8: bl      0x802D337C
    {
            ctx->lr = 0x8030D3BCu;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_8030D3BC:
    ctx->pc = 0x8030D3BCu;
    ctx->downcount -= 1;
    // 8030D3BC: b       0x8030D3E4
    {
            goto label_8030D3E4;
    }

label_8030D3C0:
    ctx->pc = 0x8030D3C0u;
    ctx->downcount -= 2;
    // 8030D3C0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D3C4:
    ctx->pc = 0x8030D3C4u;
    // 8030D3C4: bl      0x8030D20C
    {
            ctx->lr = 0x8030D3C8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D20Cu;
                return;
            }
            goto label_8030D20C;
    }

label_8030D3C8:
    ctx->pc = 0x8030D3C8u;
    ctx->downcount -= 3;
    // 8030D3C8: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D3CC:
    ctx->pc = 0x8030D3CCu;
    // 8030D3CC: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D3D0:
    ctx->pc = 0x8030D3D0u;
    // 8030D3D0: bl      0x8030E374
    {
            ctx->lr = 0x8030D3D4u;
            goto label_8030E374;
    }

label_8030D3D4:
    ctx->pc = 0x8030D3D4u;
    ctx->downcount -= 4;
    // 8030D3D4: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D3D8:
    ctx->pc = 0x8030D3D8u;
    // 8030D3D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D3DC:
    ctx->pc = 0x8030D3DCu;
    // 8030D3DC: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_8030D3E0:
    ctx->pc = 0x8030D3E0u;
    // 8030D3E0: bl      0x802D337C
    {
            ctx->lr = 0x8030D3E4u;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_8030D3E4:
    ctx->pc = 0x8030D3E4u;
    ctx->downcount -= 16;
    // 8030D3E4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D3E8:
    ctx->pc = 0x8030D3E8u;
    // 8030D3E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D3EC:
    ctx->pc = 0x8030D3ECu;
    // 8030D3EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D3F0:
    ctx->pc = 0x8030D3F0u;
    // 8030D3F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D3F4:
    ctx->pc = 0x8030D3F4u;
    // 8030D3F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D3F8:
    ctx->pc = 0x8030D3F8u;
    ctx->downcount -= 16;
    // 8030D3F8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D3FC:
    ctx->pc = 0x8030D3FCu;
    // 8030D3FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D400:
    ctx->pc = 0x8030D400u;
    // 8030D400: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D404:
    ctx->pc = 0x8030D404u;
    // 8030D404: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D408:
    ctx->pc = 0x8030D408u;
    // 8030D408: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D40C:
    ctx->pc = 0x8030D40Cu;
    // 8030D40C: bl      0x8030D20C
    {
            ctx->lr = 0x8030D410u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D20Cu;
                return;
            }
            goto label_8030D20C;
    }

label_8030D410:
    ctx->pc = 0x8030D410u;
    ctx->downcount -= 3;
    // 8030D410: lwz     r30, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8030D414:
    ctx->pc = 0x8030D414u;
    // 8030D414: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8030D418:
    ctx->pc = 0x8030D418u;
    // 8030D418: b       0x8030D470
    {
            goto label_8030D470;
    }

label_8030D41C:
    ctx->downcount -= 3;
    // 8030D41C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D420:
    // 8030D420: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D424:
    // 8030D424: bl      0x802D2998
    {
            ctx->lr = 0x8030D428u;
            ctx->pc = 0x802D2998u;
            return;
    }

label_8030D428:
    ctx->downcount -= 2;
    // 8030D428: cmpwi   r3, 0
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

label_8030D42C:
    // 8030D42C: bc    12, 2, 0x8030D46C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D46C;
        }
    }

label_8030D430:
    ctx->downcount -= 3;
    // 8030D430: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D434:
    // 8030D434: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D438:
    // 8030D438: bl      0x802D2958
    {
            ctx->lr = 0x8030D43Cu;
            ctx->pc = 0x802D2958u;
            return;
    }

label_8030D43C:
    ctx->downcount -= 4;
    // 8030D43C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D440:
    ctx->pc = 0x8030D440u;
    // 8030D440: lwz     r3, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D444:
    // 8030D444: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D448:
    // 8030D448: bl      0x80235850
    {
            ctx->lr = 0x8030D44Cu;
            ctx->pc = 0x80235850u;
            return;
    }

label_8030D44C:
    ctx->downcount -= 3;
    // 8030D44C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D450:
    // 8030D450: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030D454:
    // 8030D454: bl      0x802F3B84
    {
            ctx->lr = 0x8030D458u;
            ctx->pc = 0x802F3B84u;
            return;
    }

label_8030D458:
    ctx->downcount -= 5;
    // 8030D458: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D45C:
    ctx->pc = 0x8030D45Cu;
    // 8030D45C: lwz     r3, 168(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D460:
    ctx->pc = 0x8030D460u;
    // 8030D460: lbz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8030D464:
    // 8030D464: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D468:
    // 8030D468: bl      0x8030E848
    {
            ctx->lr = 0x8030D46Cu;
            goto label_8030E848;
    }

label_8030D46C:
    ctx->downcount -= 1;
    // 8030D46C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8030D470:
    ctx->pc = 0x8030D470u;
    ctx->downcount -= 3;
    // 8030D470: lwz     r0, 180(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D474:
    // 8030D474: cmpw    r29, r0
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

label_8030D478:
    // 8030D478: bc    12, 0, 0x8030D41C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D41Cu;
                return;
            }
            goto label_8030D41C;
        }
    }

label_8030D47C:
    ctx->pc = 0x8030D47Cu;
    ctx->downcount -= 16;
    // 8030D47C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D480:
    ctx->pc = 0x8030D480u;
    // 8030D480: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D484:
    ctx->pc = 0x8030D484u;
    // 8030D484: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D488:
    ctx->pc = 0x8030D488u;
    // 8030D488: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030D48C:
    ctx->pc = 0x8030D48Cu;
    // 8030D48C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D490:
    ctx->pc = 0x8030D490u;
    ctx->downcount -= 21;
    // 8030D490: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D494:
    ctx->pc = 0x8030D494u;
    // 8030D494: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D498:
    ctx->pc = 0x8030D498u;
    // 8030D498: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8030D49C:
    ctx->pc = 0x8030D49Cu;
    // 8030D49C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D4A0:
    ctx->pc = 0x8030D4A0u;
    // 8030D4A0: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_8030D4A4:
    ctx->pc = 0x8030D4A4u;
    // 8030D4A4: stmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D4A8:
    ctx->pc = 0x8030D4A8u;
    // 8030D4A8: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D4AC:
    ctx->pc = 0x8030D4ACu;
    // 8030D4AC: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030D4B0:
    ctx->pc = 0x8030D4B0u;
    // 8030D4B0: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D4B4:
    ctx->pc = 0x8030D4B4u;
    // 8030D4B4: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D4B8:
    ctx->pc = 0x8030D4B8u;
    // 8030D4B8: bl      0x80370BD4
    {
            ctx->lr = 0x8030D4BCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D4BC:
    ctx->pc = 0x8030D4BCu;
    ctx->downcount -= 4;
    // 8030D4BC: lwz     r29, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8030D4C0:
    ctx->pc = 0x8030D4C0u;
    // 8030D4C0: addi    r30, r1, 8
    ctx->gpr[30] = ctx->gpr[1] + (u32)(s32)(8);

label_8030D4C4:
    ctx->pc = 0x8030D4C4u;
    // 8030D4C4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030D4C8:
    ctx->pc = 0x8030D4C8u;
    // 8030D4C8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030D4CC:
    ctx->downcount -= 3;
    // 8030D4CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D4D0:
    // 8030D4D0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030D4D4:
    // 8030D4D4: bl      0x8026A31C
    {
            ctx->lr = 0x8030D4D8u;
            ctx->pc = 0x8026A31Cu;
            return;
    }

label_8030D4D8:
    ctx->downcount -= 5;
    // 8030D4D8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030D4DC:
    ctx->pc = 0x8030D4DCu;
    // 8030D4DC: stwx    r3, r30, r31
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[31];
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030D4E0:
    // 8030D4E0: cmpwi   r28, 4
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

label_8030D4E4:
    // 8030D4E4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030D4E8:
    // 8030D4E8: bc    12, 0, 0x8030D4CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D4CCu;
                return;
            }
            goto label_8030D4CC;
        }
    }

label_8030D4EC:
    ctx->pc = 0x8030D4ECu;
    ctx->downcount -= 3;
    // 8030D4EC: lwz     r0, 180(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D4F0:
    ctx->pc = 0x8030D4F0u;
    // 8030D4F0: cmpwi   r0, 3
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

label_8030D4F4:
    ctx->pc = 0x8030D4F4u;
    // 8030D4F4: bc    4, 2, 0x8030D558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D558;
        }
    }

label_8030D4F8:
    ctx->pc = 0x8030D4F8u;
    ctx->downcount -= 3;
    // 8030D4F8: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D4FC:
    ctx->pc = 0x8030D4FCu;
    // 8030D4FC: cmpwi   r3, 0
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

label_8030D500:
    ctx->pc = 0x8030D500u;
    // 8030D500: bc    4, 2, 0x8030D518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D518;
        }
    }

label_8030D504:
    ctx->pc = 0x8030D504u;
    ctx->downcount -= 3;
    // 8030D504: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D508:
    ctx->pc = 0x8030D508u;
    // 8030D508: cmpwi   r0, 1
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

label_8030D50C:
    ctx->pc = 0x8030D50Cu;
    // 8030D50C: bc    4, 2, 0x8030D518
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D518;
        }
    }

label_8030D510:
    ctx->pc = 0x8030D510u;
    ctx->downcount -= 2;
    // 8030D510: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8030D514:
    ctx->pc = 0x8030D514u;
    // 8030D514: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D518:
    ctx->pc = 0x8030D518u;
    ctx->downcount -= 2;
    // 8030D518: cmpwi   r3, 1
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

label_8030D51C:
    ctx->pc = 0x8030D51Cu;
    // 8030D51C: bc    4, 2, 0x8030D534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D534;
        }
    }

label_8030D520:
    ctx->pc = 0x8030D520u;
    ctx->downcount -= 3;
    // 8030D520: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D524:
    ctx->pc = 0x8030D524u;
    // 8030D524: cmpwi   r0, 0
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

label_8030D528:
    ctx->pc = 0x8030D528u;
    // 8030D528: bc    4, 2, 0x8030D534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D534;
        }
    }

label_8030D52C:
    ctx->pc = 0x8030D52Cu;
    ctx->downcount -= 2;
    // 8030D52C: li      r3, 4
    ctx->gpr[3] = (u32)(s32)(4);

label_8030D530:
    ctx->pc = 0x8030D530u;
    // 8030D530: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D534:
    ctx->pc = 0x8030D534u;
    ctx->downcount -= 2;
    // 8030D534: cmpwi   r3, 1
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

label_8030D538:
    ctx->pc = 0x8030D538u;
    // 8030D538: bc    4, 2, 0x8030D550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D550;
        }
    }

label_8030D53C:
    ctx->pc = 0x8030D53Cu;
    ctx->downcount -= 3;
    // 8030D53C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D540:
    ctx->pc = 0x8030D540u;
    // 8030D540: cmpwi   r0, 1
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

label_8030D544:
    ctx->pc = 0x8030D544u;
    // 8030D544: bc    4, 2, 0x8030D550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D550;
        }
    }

label_8030D548:
    ctx->pc = 0x8030D548u;
    ctx->downcount -= 2;
    // 8030D548: li      r3, 5
    ctx->gpr[3] = (u32)(s32)(5);

label_8030D54C:
    ctx->pc = 0x8030D54Cu;
    // 8030D54C: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D550:
    ctx->pc = 0x8030D550u;
    ctx->downcount -= 2;
    // 8030D550: li      r3, 3
    ctx->gpr[3] = (u32)(s32)(3);

label_8030D554:
    ctx->pc = 0x8030D554u;
    // 8030D554: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D558:
    ctx->pc = 0x8030D558u;
    ctx->downcount -= 2;
    // 8030D558: cmpwi   r0, 4
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

label_8030D55C:
    ctx->pc = 0x8030D55Cu;
    // 8030D55C: bc    4, 2, 0x8030D5E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5E4;
        }
    }

label_8030D560:
    ctx->pc = 0x8030D560u;
    ctx->downcount -= 3;
    // 8030D560: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D564:
    ctx->pc = 0x8030D564u;
    // 8030D564: cmpwi   r3, 0
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

label_8030D568:
    ctx->pc = 0x8030D568u;
    // 8030D568: bc    4, 2, 0x8030D58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D58C;
        }
    }

label_8030D56C:
    ctx->pc = 0x8030D56Cu;
    ctx->downcount -= 3;
    // 8030D56C: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D570:
    ctx->pc = 0x8030D570u;
    // 8030D570: cmpwi   r0, 1
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

label_8030D574:
    ctx->pc = 0x8030D574u;
    // 8030D574: bc    4, 2, 0x8030D58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D58C;
        }
    }

label_8030D578:
    ctx->pc = 0x8030D578u;
    ctx->downcount -= 3;
    // 8030D578: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D57C:
    ctx->pc = 0x8030D57Cu;
    // 8030D57C: cmpwi   r0, 1
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

label_8030D580:
    ctx->pc = 0x8030D580u;
    // 8030D580: bc    4, 2, 0x8030D58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D58C;
        }
    }

label_8030D584:
    ctx->pc = 0x8030D584u;
    ctx->downcount -= 2;
    // 8030D584: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030D588:
    ctx->pc = 0x8030D588u;
    // 8030D588: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D58C:
    ctx->pc = 0x8030D58Cu;
    ctx->downcount -= 2;
    // 8030D58C: cmpwi   r3, 1
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

label_8030D590:
    ctx->pc = 0x8030D590u;
    // 8030D590: bc    4, 2, 0x8030D5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5B4;
        }
    }

label_8030D594:
    ctx->pc = 0x8030D594u;
    ctx->downcount -= 3;
    // 8030D594: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D598:
    ctx->pc = 0x8030D598u;
    // 8030D598: cmpwi   r0, 0
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

label_8030D59C:
    ctx->pc = 0x8030D59Cu;
    // 8030D59C: bc    4, 2, 0x8030D5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5B4;
        }
    }

label_8030D5A0:
    ctx->pc = 0x8030D5A0u;
    ctx->downcount -= 3;
    // 8030D5A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D5A4:
    ctx->pc = 0x8030D5A4u;
    // 8030D5A4: cmpwi   r0, 1
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

label_8030D5A8:
    ctx->pc = 0x8030D5A8u;
    // 8030D5A8: bc    4, 2, 0x8030D5B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5B4;
        }
    }

label_8030D5AC:
    ctx->pc = 0x8030D5ACu;
    ctx->downcount -= 2;
    // 8030D5AC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8030D5B0:
    ctx->pc = 0x8030D5B0u;
    // 8030D5B0: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D5B4:
    ctx->pc = 0x8030D5B4u;
    ctx->downcount -= 2;
    // 8030D5B4: cmpwi   r3, 1
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

label_8030D5B8:
    ctx->pc = 0x8030D5B8u;
    // 8030D5B8: bc    4, 2, 0x8030D5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5DC;
        }
    }

label_8030D5BC:
    ctx->pc = 0x8030D5BCu;
    ctx->downcount -= 3;
    // 8030D5BC: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D5C0:
    ctx->pc = 0x8030D5C0u;
    // 8030D5C0: cmpwi   r0, 1
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

label_8030D5C4:
    ctx->pc = 0x8030D5C4u;
    // 8030D5C4: bc    4, 2, 0x8030D5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5DC;
        }
    }

label_8030D5C8:
    ctx->pc = 0x8030D5C8u;
    ctx->downcount -= 3;
    // 8030D5C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D5CC:
    ctx->pc = 0x8030D5CCu;
    // 8030D5CC: cmpwi   r0, 0
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

label_8030D5D0:
    ctx->pc = 0x8030D5D0u;
    // 8030D5D0: bc    4, 2, 0x8030D5DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D5DC;
        }
    }

label_8030D5D4:
    ctx->pc = 0x8030D5D4u;
    ctx->downcount -= 2;
    // 8030D5D4: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_8030D5D8:
    ctx->pc = 0x8030D5D8u;
    // 8030D5D8: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D5DC:
    ctx->pc = 0x8030D5DCu;
    ctx->downcount -= 2;
    // 8030D5DC: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030D5E0:
    ctx->pc = 0x8030D5E0u;
    // 8030D5E0: b       0x8030D5E8
    {
            goto label_8030D5E8;
    }

label_8030D5E4:
    ctx->pc = 0x8030D5E4u;
    ctx->downcount -= 1;
    // 8030D5E4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_8030D5E8:
    ctx->pc = 0x8030D5E8u;
    ctx->downcount -= 16;
    // 8030D5E8: lmw     r27, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D5EC:
    ctx->pc = 0x8030D5ECu;
    // 8030D5EC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D5F0:
    ctx->pc = 0x8030D5F0u;
    // 8030D5F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D5F4:
    ctx->pc = 0x8030D5F4u;
    // 8030D5F4: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8030D5F8:
    ctx->pc = 0x8030D5F8u;
    // 8030D5F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D5FC:
    ctx->pc = 0x8030D5FCu;
    ctx->downcount -= 21;
    // 8030D5FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D600:
    ctx->pc = 0x8030D600u;
    // 8030D600: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D604:
    ctx->pc = 0x8030D604u;
    // 8030D604: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D608:
    ctx->pc = 0x8030D608u;
    // 8030D608: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D60C:
    ctx->pc = 0x8030D60Cu;
    // 8030D60C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D610:
    ctx->pc = 0x8030D610u;
    // 8030D610: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030D614:
    ctx->pc = 0x8030D614u;
    // 8030D614: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D618:
    ctx->pc = 0x8030D618u;
    // 8030D618: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D61C:
    ctx->pc = 0x8030D61Cu;
    // 8030D61C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D620:
    ctx->pc = 0x8030D620u;
    // 8030D620: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D624u;
            ctx->pc = target;
            return;
        }
    }

label_8030D624:
    ctx->pc = 0x8030D624u;
    ctx->downcount -= 2;
    // 8030D624: cmpwi   r3, 0
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

label_8030D628:
    ctx->pc = 0x8030D628u;
    // 8030D628: bc    4, 2, 0x8030D684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D684;
        }
    }

label_8030D62C:
    ctx->pc = 0x8030D62Cu;
    ctx->downcount -= 3;
    // 8030D62C: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D630:
    ctx->pc = 0x8030D630u;
    // 8030D630: cmpwi   r0, 0
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

label_8030D634:
    ctx->pc = 0x8030D634u;
    // 8030D634: bc    12, 2, 0x8030D684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D684;
        }
    }

label_8030D638:
    ctx->pc = 0x8030D638u;
    ctx->downcount -= 4;
    // 8030D638: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030D63C:
    ctx->pc = 0x8030D63Cu;
    // 8030D63C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D640:
    ctx->pc = 0x8030D640u;
    // 8030D640: addi    r4, r4, 20064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20064);

label_8030D644:
    ctx->pc = 0x8030D644u;
    // 8030D644: bl      0x8000E8B0
    {
            ctx->lr = 0x8030D648u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_8030D648:
    ctx->pc = 0x8030D648u;
    ctx->downcount -= 2;
    // 8030D648: cmpwi   r3, 0
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

label_8030D64C:
    ctx->pc = 0x8030D64Cu;
    // 8030D64C: bc    4, 2, 0x8030D660
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D660;
        }
    }

label_8030D650:
    ctx->pc = 0x8030D650u;
    ctx->downcount -= 2;
    // 8030D650: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D654:
    ctx->pc = 0x8030D654u;
    // 8030D654: bl      0x8030D378
    {
            ctx->lr = 0x8030D658u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D378u;
                return;
            }
            goto label_8030D378;
    }

label_8030D658:
    ctx->pc = 0x8030D658u;
    ctx->downcount -= 2;
    // 8030D658: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D65C:
    ctx->pc = 0x8030D65Cu;
    // 8030D65C: bl      0x8030D2DC
    {
            ctx->lr = 0x8030D660u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D2DCu;
                return;
            }
            goto label_8030D2DC;
    }

label_8030D660:
    ctx->pc = 0x8030D660u;
    ctx->downcount -= 5;
    // 8030D660: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030D664:
    ctx->pc = 0x8030D664u;
    // 8030D664: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D668:
    ctx->pc = 0x8030D668u;
    // 8030D668: addi    r4, r4, 20064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20064);

label_8030D66C:
    ctx->pc = 0x8030D66Cu;
    // 8030D66C: addi    r4, r4, 15
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15);

label_8030D670:
    ctx->pc = 0x8030D670u;
    // 8030D670: bl      0x8000E8B0
    {
            ctx->lr = 0x8030D674u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_8030D674:
    ctx->pc = 0x8030D674u;
    ctx->downcount -= 2;
    // 8030D674: cmpwi   r3, 0
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

label_8030D678:
    ctx->pc = 0x8030D678u;
    // 8030D678: bc    4, 2, 0x8030D684
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030D684;
        }
    }

label_8030D67C:
    ctx->pc = 0x8030D67Cu;
    ctx->downcount -= 2;
    // 8030D67C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030D680:
    ctx->pc = 0x8030D680u;
    // 8030D680: bl      0x8030D218
    {
            ctx->lr = 0x8030D684u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D218u;
                return;
            }
            goto label_8030D218;
    }

label_8030D684:
    ctx->pc = 0x8030D684u;
    ctx->downcount -= 16;
    // 8030D684: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D688:
    ctx->pc = 0x8030D688u;
    // 8030D688: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D68C:
    ctx->pc = 0x8030D68Cu;
    // 8030D68C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D690:
    ctx->pc = 0x8030D690u;
    // 8030D690: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D694:
    ctx->pc = 0x8030D694u;
    // 8030D694: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D698:
    ctx->pc = 0x8030D698u;
    ctx->downcount -= 21;
    // 8030D698: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D69C:
    ctx->pc = 0x8030D69Cu;
    // 8030D69C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D6A0:
    ctx->pc = 0x8030D6A0u;
    // 8030D6A0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D6A4:
    ctx->pc = 0x8030D6A4u;
    // 8030D6A4: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D6A8:
    ctx->pc = 0x8030D6A8u;
    // 8030D6A8: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_8030D6AC:
    ctx->pc = 0x8030D6ACu;
    // 8030D6AC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D6B0:
    ctx->pc = 0x8030D6B0u;
    // 8030D6B0: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030D6B4:
    ctx->pc = 0x8030D6B4u;
    // 8030D6B4: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030D6B8:
    ctx->pc = 0x8030D6B8u;
    // 8030D6B8: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D6BC:
    ctx->pc = 0x8030D6BCu;
    // 8030D6BC: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D6C0:
    ctx->pc = 0x8030D6C0u;
    // 8030D6C0: bl      0x80370BD4
    {
            ctx->lr = 0x8030D6C4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D6C4:
    ctx->pc = 0x8030D6C4u;
    ctx->downcount -= 7;
    // 8030D6C4: lwz     r3, 168(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D6C8:
    ctx->pc = 0x8030D6C8u;
    // 8030D6C8: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D6CC:
    ctx->pc = 0x8030D6CCu;
    // 8030D6CC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D6D0:
    ctx->pc = 0x8030D6D0u;
    // 8030D6D0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D6D4:
    ctx->pc = 0x8030D6D4u;
    // 8030D6D4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D6D8:
    ctx->pc = 0x8030D6D8u;
    // 8030D6D8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D6DCu;
            ctx->pc = target;
            return;
        }
    }

label_8030D6DC:
    ctx->pc = 0x8030D6DCu;
    ctx->downcount -= 5;
    // 8030D6DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D6E0:
    ctx->pc = 0x8030D6E0u;
    // 8030D6E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D6E4:
    ctx->pc = 0x8030D6E4u;
    // 8030D6E4: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8030D6E8:
    ctx->pc = 0x8030D6E8u;
    // 8030D6E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030D6EC:
    ctx->pc = 0x8030D6ECu;
    // 8030D6EC: bl      0x8027714C
    {
            ctx->lr = 0x8030D6F0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030D6F0:
    ctx->pc = 0x8030D6F0u;
    ctx->downcount -= 5;
    // 8030D6F0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D6F4:
    ctx->pc = 0x8030D6F4u;
    // 8030D6F4: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030D6F8:
    ctx->pc = 0x8030D6F8u;
    // 8030D6F8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D6FC:
    ctx->pc = 0x8030D6FCu;
    // 8030D6FC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D700:
    ctx->pc = 0x8030D700u;
    // 8030D700: bl      0x80370BD4
    {
            ctx->lr = 0x8030D704u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D704:
    ctx->pc = 0x8030D704u;
    ctx->downcount -= 7;
    // 8030D704: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D708:
    ctx->pc = 0x8030D708u;
    // 8030D708: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D70C:
    ctx->pc = 0x8030D70Cu;
    // 8030D70C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D710:
    ctx->pc = 0x8030D710u;
    // 8030D710: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D714:
    ctx->pc = 0x8030D714u;
    // 8030D714: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D718:
    ctx->pc = 0x8030D718u;
    // 8030D718: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D71Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030D71C:
    ctx->pc = 0x8030D71Cu;
    ctx->downcount -= 5;
    // 8030D71C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D720:
    ctx->pc = 0x8030D720u;
    // 8030D720: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D724:
    ctx->pc = 0x8030D724u;
    // 8030D724: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030D728:
    ctx->pc = 0x8030D728u;
    // 8030D728: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030D72C:
    ctx->pc = 0x8030D72Cu;
    // 8030D72C: bl      0x8027714C
    {
            ctx->lr = 0x8030D730u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030D730:
    ctx->pc = 0x8030D730u;
    ctx->downcount -= 5;
    // 8030D730: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D734:
    ctx->pc = 0x8030D734u;
    // 8030D734: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030D738:
    ctx->pc = 0x8030D738u;
    // 8030D738: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D73C:
    ctx->pc = 0x8030D73Cu;
    // 8030D73C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D740:
    ctx->pc = 0x8030D740u;
    // 8030D740: bl      0x80370BD4
    {
            ctx->lr = 0x8030D744u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D744:
    ctx->pc = 0x8030D744u;
    ctx->downcount -= 7;
    // 8030D744: lwz     r3, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D748:
    ctx->pc = 0x8030D748u;
    // 8030D748: lwz     r31, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D74C:
    ctx->pc = 0x8030D74Cu;
    // 8030D74C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D750:
    ctx->pc = 0x8030D750u;
    // 8030D750: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D754:
    ctx->pc = 0x8030D754u;
    // 8030D754: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D758:
    ctx->pc = 0x8030D758u;
    // 8030D758: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D75Cu;
            ctx->pc = target;
            return;
        }
    }

label_8030D75C:
    ctx->pc = 0x8030D75Cu;
    ctx->downcount -= 5;
    // 8030D75C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D760:
    ctx->pc = 0x8030D760u;
    // 8030D760: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030D764:
    ctx->pc = 0x8030D764u;
    // 8030D764: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030D768:
    ctx->pc = 0x8030D768u;
    // 8030D768: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030D76C:
    ctx->pc = 0x8030D76Cu;
    // 8030D76C: bl      0x8027714C
    {
            ctx->lr = 0x8030D770u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030D770:
    ctx->pc = 0x8030D770u;
    ctx->downcount -= 2;
    // 8030D770: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030D774:
    ctx->pc = 0x8030D774u;
    // 8030D774: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030D778:
    ctx->pc = 0x8030D778u;
    ctx->downcount -= 5;
    // 8030D778: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D77C:
    // 8030D77C: addi    r4, r30, 22792
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22792);

label_8030D780:
    // 8030D780: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8030D784:
    // 8030D784: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8030D788:
    // 8030D788: bl      0x80370BD4
    {
            ctx->lr = 0x8030D78Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8030D78C:
    ctx->downcount -= 8;
    // 8030D78C: add   r3, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030D790:
    ctx->pc = 0x8030D790u;
    // 8030D790: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8030D794:
    ctx->pc = 0x8030D794u;
    // 8030D794: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D798:
    ctx->pc = 0x8030D798u;
    // 8030D798: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D79C:
    ctx->pc = 0x8030D79Cu;
    // 8030D79C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030D7A0:
    ctx->pc = 0x8030D7A0u;
    // 8030D7A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030D7A4:
    ctx->pc = 0x8030D7A4u;
    // 8030D7A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030D7A8u;
            ctx->pc = target;
            return;
        }
    }

label_8030D7A8:
    ctx->downcount -= 5;
    // 8030D7A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D7AC:
    // 8030D7AC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D7B0:
    // 8030D7B0: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8030D7B4:
    // 8030D7B4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030D7B8:
    // 8030D7B8: bl      0x8027714C
    {
            ctx->lr = 0x8030D7BCu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8030D7BC:
    ctx->downcount -= 4;
    // 8030D7BC: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030D7C0:
    // 8030D7C0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030D7C4:
    // 8030D7C4: cmpwi   r28, 2
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

label_8030D7C8:
    // 8030D7C8: bc    12, 0, 0x8030D778
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D778u;
                return;
            }
            goto label_8030D778;
        }
    }

label_8030D7CC:
    ctx->pc = 0x8030D7CCu;
    ctx->downcount -= 2;
    // 8030D7CC: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D7D0:
    ctx->pc = 0x8030D7D0u;
    // 8030D7D0: bl      0x8030EE78
    {
            ctx->lr = 0x8030D7D4u;
            goto label_8030EE78;
    }

label_8030D7D4:
    ctx->pc = 0x8030D7D4u;
    ctx->downcount -= 8;
    // 8030D7D4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D7D8:
    ctx->pc = 0x8030D7D8u;
    // 8030D7D8: lwz     r3, 176(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D7DC:
    ctx->pc = 0x8030D7DCu;
    // 8030D7DC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030D7E0:
    ctx->pc = 0x8030D7E0u;
    // 8030D7E0: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_8030D7E4:
    ctx->pc = 0x8030D7E4u;
    // 8030D7E4: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_8030D7E8:
    ctx->pc = 0x8030D7E8u;
    // 8030D7E8: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_8030D7EC:
    ctx->pc = 0x8030D7ECu;
    // 8030D7EC: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_8030D7F0:
    ctx->pc = 0x8030D7F0u;
    // 8030D7F0: bl      0x8026F158
    {
            ctx->lr = 0x8030D7F4u;
            ctx->pc = 0x8026F158u;
            return;
    }

label_8030D7F4:
    ctx->pc = 0x8030D7F4u;
    ctx->downcount -= 2;
    // 8030D7F4: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D7F8:
    ctx->pc = 0x8030D7F8u;
    // 8030D7F8: bl      0x8030EE68
    {
            ctx->lr = 0x8030D7FCu;
            goto label_8030EE68;
    }

label_8030D7FC:
    ctx->pc = 0x8030D7FCu;
    ctx->downcount -= 8;
    // 8030D7FC: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D800:
    ctx->pc = 0x8030D800u;
    // 8030D800: lwz     r3, 176(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D804:
    ctx->pc = 0x8030D804u;
    // 8030D804: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030D808:
    ctx->pc = 0x8030D808u;
    // 8030D808: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_8030D80C:
    ctx->pc = 0x8030D80Cu;
    // 8030D80C: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_8030D810:
    ctx->pc = 0x8030D810u;
    // 8030D810: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030D814:
    ctx->pc = 0x8030D814u;
    // 8030D814: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_8030D818:
    ctx->pc = 0x8030D818u;
    // 8030D818: bl      0x8026F158
    {
            ctx->lr = 0x8030D81Cu;
            ctx->pc = 0x8026F158u;
            return;
    }

label_8030D81C:
    ctx->pc = 0x8030D81Cu;
    ctx->downcount -= 2;
    // 8030D81C: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D820:
    ctx->pc = 0x8030D820u;
    // 8030D820: bl      0x8030EE78
    {
            ctx->lr = 0x8030D824u;
            goto label_8030EE78;
    }

label_8030D824:
    ctx->pc = 0x8030D824u;
    ctx->downcount -= 3;
    // 8030D824: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D828:
    ctx->pc = 0x8030D828u;
    // 8030D828: lwz     r3, 160(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D82C:
    ctx->pc = 0x8030D82Cu;
    // 8030D82C: bl      0x8036B234
    {
            ctx->lr = 0x8030D830u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_8030D830:
    ctx->pc = 0x8030D830u;
    ctx->downcount -= 2;
    // 8030D830: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D834:
    ctx->pc = 0x8030D834u;
    // 8030D834: bl      0x8030EE68
    {
            ctx->lr = 0x8030D838u;
            goto label_8030EE68;
    }

label_8030D838:
    ctx->pc = 0x8030D838u;
    ctx->downcount -= 3;
    // 8030D838: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D83C:
    ctx->pc = 0x8030D83Cu;
    // 8030D83C: lwz     r3, 164(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D840:
    ctx->pc = 0x8030D840u;
    // 8030D840: bl      0x8036B234
    {
            ctx->lr = 0x8030D844u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_8030D844:
    ctx->pc = 0x8030D844u;
    ctx->downcount -= 16;
    // 8030D844: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030D848:
    ctx->pc = 0x8030D848u;
    // 8030D848: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D84C:
    ctx->pc = 0x8030D84Cu;
    // 8030D84C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D850:
    ctx->pc = 0x8030D850u;
    // 8030D850: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030D854:
    ctx->pc = 0x8030D854u;
    // 8030D854: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D858:
    ctx->pc = 0x8030D858u;
    ctx->downcount -= 2;
    // 8030D858: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D85C:
    ctx->pc = 0x8030D85Cu;
    // 8030D85C: b       0x8030E1D8
    {
            goto label_8030E1D8;
    }

label_8030D860:
    ctx->pc = 0x8030D860u;
    ctx->downcount -= 5;
    // 8030D860: lwz     r3, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D864:
    ctx->pc = 0x8030D864u;
    // 8030D864: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8030D868:
    ctx->pc = 0x8030D868u;
    // 8030D868: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030D86C:
    ctx->pc = 0x8030D86Cu;
    // 8030D86C: lwz     r3, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D870:
    ctx->pc = 0x8030D870u;
    // 8030D870: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D874:
    ctx->pc = 0x8030D874u;
    ctx->downcount -= 11;
    // 8030D874: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D878:
    ctx->pc = 0x8030D878u;
    // 8030D878: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D87C:
    ctx->pc = 0x8030D87Cu;
    // 8030D87C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D880:
    ctx->pc = 0x8030D880u;
    // 8030D880: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030D884:
    ctx->pc = 0x8030D884u;
    // 8030D884: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030D888:
    ctx->pc = 0x8030D888u;
    // 8030D888: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D88C:
    ctx->pc = 0x8030D88Cu;
    // 8030D88C: lwz     r4, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D890:
    ctx->pc = 0x8030D890u;
    // 8030D890: lwz     r4, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D894:
    ctx->pc = 0x8030D894u;
    // 8030D894: stw     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030D898:
    ctx->pc = 0x8030D898u;
    // 8030D898: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D89C:
    ctx->pc = 0x8030D89Cu;
    // 8030D89C: bl      0x8030D20C
    {
            ctx->lr = 0x8030D8A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D20Cu;
                return;
            }
            goto label_8030D20C;
    }

label_8030D8A0:
    ctx->pc = 0x8030D8A0u;
    ctx->downcount -= 4;
    // 8030D8A0: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030D8A4:
    ctx->pc = 0x8030D8A4u;
    // 8030D8A4: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_8030D8A8:
    ctx->pc = 0x8030D8A8u;
    // 8030D8A8: lwz     r4, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030D8AC:
    ctx->pc = 0x8030D8ACu;
    // 8030D8AC: bl      0x802D29F8
    {
            ctx->lr = 0x8030D8B0u;
            ctx->pc = 0x802D29F8u;
            return;
    }

label_8030D8B0:
    ctx->pc = 0x8030D8B0u;
    ctx->downcount -= 3;
    // 8030D8B0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030D8B4:
    ctx->pc = 0x8030D8B4u;
    // 8030D8B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030D8B8:
    ctx->pc = 0x8030D8B8u;
    // 8030D8B8: bl      0x803457B8
    {
            ctx->lr = 0x8030D8BCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8030D8BC:
    ctx->pc = 0x8030D8BCu;
    ctx->downcount -= 6;
    // 8030D8BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030D8C0:
    ctx->pc = 0x8030D8C0u;
    // 8030D8C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030D8C4:
    ctx->pc = 0x8030D8C4u;
    // 8030D8C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030D8C8:
    ctx->pc = 0x8030D8C8u;
    // 8030D8C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030D8CC:
    ctx->pc = 0x8030D8CCu;
    // 8030D8CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030D8D0:
    ctx->pc = 0x8030D8D0u;
    ctx->downcount -= 21;
    // 8030D8D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030D8D4:
    ctx->pc = 0x8030D8D4u;
    // 8030D8D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030D8D8:
    ctx->pc = 0x8030D8D8u;
    // 8030D8D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D8DC:
    ctx->pc = 0x8030D8DCu;
    // 8030D8DC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030D8E0:
    ctx->pc = 0x8030D8E0u;
    // 8030D8E0: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030D8E4:
    ctx->pc = 0x8030D8E4u;
    // 8030D8E4: lis     r31, -32659
    ctx->gpr[31] = ((u32)(s32)(-32659) << 16);

label_8030D8E8:
    ctx->pc = 0x8030D8E8u;
    // 8030D8E8: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030D8EC:
    ctx->pc = 0x8030D8ECu;
    // 8030D8EC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_8030D8F0:
    ctx->pc = 0x8030D8F0u;
    // 8030D8F0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D8F4:
    ctx->pc = 0x8030D8F4u;
    // 8030D8F4: addi    r31, r31, -31416
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-31416);

label_8030D8F8:
    ctx->pc = 0x8030D8F8u;
    // 8030D8F8: bl      0x8030DD34
    {
            ctx->lr = 0x8030D8FCu;
            goto label_8030DD34;
    }

label_8030D8FC:
    ctx->pc = 0x8030D8FCu;
    ctx->downcount -= 10;
    // 8030D8FC: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030D900:
    ctx->pc = 0x8030D900u;
    // 8030D900: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D904:
    ctx->pc = 0x8030D904u;
    // 8030D904: addi    r4, r4, -31208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-31208);

label_8030D908:
    ctx->pc = 0x8030D908u;
    // 8030D908: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030D90C:
    ctx->pc = 0x8030D90Cu;
    // 8030D90C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030D910:
    ctx->pc = 0x8030D910u;
    // 8030D910: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_8030D914:
    ctx->pc = 0x8030D914u;
    // 8030D914: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030D918:
    ctx->pc = 0x8030D918u;
    // 8030D918: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_8030D91C:
    ctx->pc = 0x8030D91Cu;
    // 8030D91C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030D920:
    ctx->pc = 0x8030D920u;
    // 8030D920: bl      0x8030DC54
    {
            ctx->lr = 0x8030D924u;
            goto label_8030DC54;
    }

label_8030D924:
    ctx->pc = 0x8030D924u;
    ctx->downcount -= 5;
    // 8030D924: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D928:
    ctx->pc = 0x8030D928u;
    // 8030D928: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_8030D92C:
    ctx->pc = 0x8030D92Cu;
    // 8030D92C: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_8030D930:
    ctx->pc = 0x8030D930u;
    // 8030D930: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030D934:
    ctx->pc = 0x8030D934u;
    // 8030D934: bl      0x8030DC54
    {
            ctx->lr = 0x8030D938u;
            goto label_8030DC54;
    }

label_8030D938:
    ctx->pc = 0x8030D938u;
    ctx->downcount -= 5;
    // 8030D938: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D93C:
    ctx->pc = 0x8030D93Cu;
    // 8030D93C: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_8030D940:
    ctx->pc = 0x8030D940u;
    // 8030D940: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_8030D944:
    ctx->pc = 0x8030D944u;
    // 8030D944: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_8030D948:
    ctx->pc = 0x8030D948u;
    // 8030D948: bl      0x8030DC54
    {
            ctx->lr = 0x8030D94Cu;
            goto label_8030DC54;
    }

label_8030D94C:
    ctx->pc = 0x8030D94Cu;
    ctx->downcount -= 5;
    // 8030D94C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D950:
    ctx->pc = 0x8030D950u;
    // 8030D950: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_8030D954:
    ctx->pc = 0x8030D954u;
    // 8030D954: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_8030D958:
    ctx->pc = 0x8030D958u;
    // 8030D958: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_8030D95C:
    ctx->pc = 0x8030D95Cu;
    // 8030D95C: bl      0x8030DC54
    {
            ctx->lr = 0x8030D960u;
            goto label_8030DC54;
    }

label_8030D960:
    ctx->pc = 0x8030D960u;
    ctx->downcount -= 5;
    // 8030D960: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D964:
    ctx->pc = 0x8030D964u;
    // 8030D964: addi    r4, r31, 132
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(132);

label_8030D968:
    ctx->pc = 0x8030D968u;
    // 8030D968: addi    r5, r31, 144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(144);

label_8030D96C:
    ctx->pc = 0x8030D96Cu;
    // 8030D96C: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_8030D970:
    ctx->pc = 0x8030D970u;
    // 8030D970: bl      0x8030DC54
    {
            ctx->lr = 0x8030D974u;
            goto label_8030DC54;
    }

label_8030D974:
    ctx->pc = 0x8030D974u;
    ctx->downcount -= 5;
    // 8030D974: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D978:
    ctx->pc = 0x8030D978u;
    // 8030D978: addi    r4, r31, 156
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(156);

label_8030D97C:
    ctx->pc = 0x8030D97Cu;
    // 8030D97C: addi    r5, r31, 168
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(168);

label_8030D980:
    ctx->pc = 0x8030D980u;
    // 8030D980: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_8030D984:
    ctx->pc = 0x8030D984u;
    // 8030D984: bl      0x8030DC54
    {
            ctx->lr = 0x8030D988u;
            goto label_8030DC54;
    }

label_8030D988:
    ctx->pc = 0x8030D988u;
    ctx->downcount -= 5;
    // 8030D988: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030D98C:
    ctx->pc = 0x8030D98Cu;
    // 8030D98C: addi    r4, r31, 180
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(180);

label_8030D990:
    ctx->pc = 0x8030D990u;
    // 8030D990: addi    r5, r31, 192
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(192);

label_8030D994:
    ctx->pc = 0x8030D994u;
    // 8030D994: li      r6, 6
    ctx->gpr[6] = (u32)(s32)(6);

label_8030D998:
    ctx->pc = 0x8030D998u;
    // 8030D998: bl      0x8030DC54
    {
            ctx->lr = 0x8030D99Cu;
            goto label_8030DC54;
    }

label_8030D99C:
    ctx->pc = 0x8030D99Cu;
    ctx->downcount -= 4;
    // 8030D99C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D9A0:
    ctx->pc = 0x8030D9A0u;
    // 8030D9A0: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_8030D9A4:
    ctx->pc = 0x8030D9A4u;
    // 8030D9A4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030D9A8:
    ctx->pc = 0x8030D9A8u;
    // 8030D9A8: bl      0x801C1C5C
    {
            ctx->lr = 0x8030D9ACu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030D9AC:
    ctx->pc = 0x8030D9ACu;
    ctx->downcount -= 2;
    // 8030D9AC: cmpwi   r3, 0
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

label_8030D9B0:
    ctx->pc = 0x8030D9B0u;
    // 8030D9B0: bc    12, 2, 0x8030D9BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D9BC;
        }
    }

label_8030D9B4:
    ctx->pc = 0x8030D9B4u;
    ctx->downcount -= 2;
    // 8030D9B4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D9B8:
    ctx->pc = 0x8030D9B8u;
    // 8030D9B8: bl      0x803554FC
    {
            ctx->lr = 0x8030D9BCu;
            ctx->pc = 0x803554FCu;
            return;
    }

label_8030D9BC:
    ctx->pc = 0x8030D9BCu;
    ctx->downcount -= 5;
    // 8030D9BC: stw     r3, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030D9C0:
    ctx->pc = 0x8030D9C0u;
    // 8030D9C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D9C4:
    ctx->pc = 0x8030D9C4u;
    // 8030D9C4: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_8030D9C8:
    ctx->pc = 0x8030D9C8u;
    // 8030D9C8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030D9CC:
    ctx->pc = 0x8030D9CCu;
    // 8030D9CC: bl      0x801C1C5C
    {
            ctx->lr = 0x8030D9D0u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030D9D0:
    ctx->pc = 0x8030D9D0u;
    ctx->downcount -= 2;
    // 8030D9D0: cmpwi   r3, 0
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

label_8030D9D4:
    ctx->pc = 0x8030D9D4u;
    // 8030D9D4: bc    12, 2, 0x8030D9E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030D9E0;
        }
    }

label_8030D9D8:
    ctx->pc = 0x8030D9D8u;
    ctx->downcount -= 2;
    // 8030D9D8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D9DC:
    ctx->pc = 0x8030D9DCu;
    // 8030D9DC: bl      0x8030EF4C
    {
            ctx->lr = 0x8030D9E0u;
            goto label_8030EF4C;
    }

label_8030D9E0:
    ctx->pc = 0x8030D9E0u;
    ctx->downcount -= 3;
    // 8030D9E0: stw     r3, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030D9E4:
    ctx->pc = 0x8030D9E4u;
    // 8030D9E4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030D9E8:
    ctx->pc = 0x8030D9E8u;
    // 8030D9E8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030D9EC:
    ctx->downcount -= 4;
    // 8030D9EC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030D9F0:
    // 8030D9F0: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_8030D9F4:
    // 8030D9F4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030D9F8:
    // 8030D9F8: bl      0x801C1C5C
    {
            ctx->lr = 0x8030D9FCu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030D9FC:
    ctx->downcount -= 2;
    // 8030D9FC: cmpwi   r3, 0
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

label_8030DA00:
    // 8030DA00: bc    12, 2, 0x8030DA10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DA10;
        }
    }

label_8030DA04:
    ctx->downcount -= 3;
    // 8030DA04: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DA08:
    // 8030DA08: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DA0C:
    // 8030DA0C: bl      0x8030ED78
    {
            ctx->lr = 0x8030DA10u;
            goto label_8030ED78;
    }

label_8030DA10:
    ctx->downcount -= 6;
    // 8030DA10: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030DA14:
    // 8030DA14: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030DA18:
    // 8030DA18: cmpwi   r30, 2
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

label_8030DA1C:
    ctx->pc = 0x8030DA1Cu;
    // 8030DA1C: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DA20:
    // 8030DA20: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030DA24:
    // 8030DA24: bc    12, 0, 0x8030D9EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030D9ECu;
                return;
            }
            goto label_8030D9EC;
        }
    }

label_8030DA28:
    ctx->pc = 0x8030DA28u;
    ctx->downcount -= 4;
    // 8030DA28: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DA2C:
    ctx->pc = 0x8030DA2Cu;
    // 8030DA2C: li      r3, 380
    ctx->gpr[3] = (u32)(s32)(380);

label_8030DA30:
    ctx->pc = 0x8030DA30u;
    // 8030DA30: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DA34:
    ctx->pc = 0x8030DA34u;
    // 8030DA34: bl      0x801C1C5C
    {
            ctx->lr = 0x8030DA38u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030DA38:
    ctx->pc = 0x8030DA38u;
    ctx->downcount -= 2;
    // 8030DA38: cmpwi   r3, 0
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

label_8030DA3C:
    ctx->pc = 0x8030DA3Cu;
    // 8030DA3C: bc    12, 2, 0x8030DA48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DA48;
        }
    }

label_8030DA40:
    ctx->pc = 0x8030DA40u;
    ctx->downcount -= 2;
    // 8030DA40: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DA44:
    ctx->pc = 0x8030DA44u;
    // 8030DA44: bl      0x8030EB14
    {
            ctx->lr = 0x8030DA48u;
            goto label_8030EB14;
    }

label_8030DA48:
    ctx->pc = 0x8030DA48u;
    ctx->downcount -= 5;
    // 8030DA48: stw     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DA4C:
    ctx->pc = 0x8030DA4Cu;
    // 8030DA4C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DA50:
    ctx->pc = 0x8030DA50u;
    // 8030DA50: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8030DA54:
    ctx->pc = 0x8030DA54u;
    // 8030DA54: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DA58:
    ctx->pc = 0x8030DA58u;
    // 8030DA58: bl      0x801C1C5C
    {
            ctx->lr = 0x8030DA5Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030DA5C:
    ctx->pc = 0x8030DA5Cu;
    ctx->downcount -= 2;
    // 8030DA5C: cmpwi   r3, 0
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

label_8030DA60:
    ctx->pc = 0x8030DA60u;
    // 8030DA60: bc    12, 2, 0x8030DA6C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DA6C;
        }
    }

label_8030DA64:
    ctx->pc = 0x8030DA64u;
    ctx->downcount -= 2;
    // 8030DA64: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DA68:
    ctx->pc = 0x8030DA68u;
    // 8030DA68: bl      0x802E3CD8
    {
            ctx->lr = 0x8030DA6Cu;
            ctx->pc = 0x802E3CD8u;
            return;
    }

label_8030DA6C:
    ctx->pc = 0x8030DA6Cu;
    ctx->downcount -= 4;
    // 8030DA6C: stw     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DA70:
    ctx->pc = 0x8030DA70u;
    // 8030DA70: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DA74:
    ctx->pc = 0x8030DA74u;
    // 8030DA74: lwz     r4, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DA78:
    ctx->pc = 0x8030DA78u;
    // 8030DA78: bl      0x802A6408
    {
            ctx->lr = 0x8030DA7Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030DA7C:
    ctx->pc = 0x8030DA7Cu;
    ctx->downcount -= 3;
    // 8030DA7C: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DA80:
    ctx->pc = 0x8030DA80u;
    // 8030DA80: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DA84:
    ctx->pc = 0x8030DA84u;
    // 8030DA84: bl      0x802A6408
    {
            ctx->lr = 0x8030DA88u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030DA88:
    ctx->pc = 0x8030DA88u;
    ctx->downcount -= 2;
    // 8030DA88: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030DA8C:
    ctx->pc = 0x8030DA8Cu;
    // 8030DA8C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030DA90:
    ctx->downcount -= 4;
    // 8030DA90: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030DA94:
    // 8030DA94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DA98:
    ctx->pc = 0x8030DA98u;
    // 8030DA98: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DA9C:
    // 8030DA9C: bl      0x802A6408
    {
            ctx->lr = 0x8030DAA0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030DAA0:
    ctx->downcount -= 4;
    // 8030DAA0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030DAA4:
    // 8030DAA4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030DAA8:
    // 8030DAA8: cmpwi   r30, 2
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

label_8030DAAC:
    // 8030DAAC: bc    12, 0, 0x8030DA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DA90u;
                return;
            }
            goto label_8030DA90;
        }
    }

label_8030DAB0:
    ctx->pc = 0x8030DAB0u;
    ctx->downcount -= 3;
    // 8030DAB0: lwz     r4, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DAB4:
    ctx->pc = 0x8030DAB4u;
    // 8030DAB4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DAB8:
    ctx->pc = 0x8030DAB8u;
    // 8030DAB8: bl      0x802A6408
    {
            ctx->lr = 0x8030DABCu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030DABC:
    ctx->pc = 0x8030DABCu;
    ctx->downcount -= 3;
    // 8030DABC: lwz     r4, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DAC0:
    ctx->pc = 0x8030DAC0u;
    // 8030DAC0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DAC4:
    ctx->pc = 0x8030DAC4u;
    // 8030DAC4: bl      0x802A6408
    {
            ctx->lr = 0x8030DAC8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8030DAC8:
    ctx->pc = 0x8030DAC8u;
    ctx->downcount -= 4;
    // 8030DAC8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DACC:
    ctx->pc = 0x8030DACCu;
    // 8030DACC: li      r3, 44
    ctx->gpr[3] = (u32)(s32)(44);

label_8030DAD0:
    ctx->pc = 0x8030DAD0u;
    // 8030DAD0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DAD4:
    ctx->pc = 0x8030DAD4u;
    // 8030DAD4: bl      0x801C1C5C
    {
            ctx->lr = 0x8030DAD8u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_8030DAD8:
    ctx->pc = 0x8030DAD8u;
    ctx->downcount -= 2;
    // 8030DAD8: cmpwi   r3, 0
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

label_8030DADC:
    ctx->pc = 0x8030DADCu;
    // 8030DADC: bc    12, 2, 0x8030DAEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DAEC;
        }
    }

label_8030DAE0:
    ctx->pc = 0x8030DAE0u;
    ctx->downcount -= 3;
    // 8030DAE0: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8030DAE4:
    ctx->pc = 0x8030DAE4u;
    // 8030DAE4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030DAE8:
    ctx->pc = 0x8030DAE8u;
    // 8030DAE8: bl      0x8026F1B8
    {
            ctx->lr = 0x8030DAECu;
            ctx->pc = 0x8026F1B8u;
            return;
    }

label_8030DAEC:
    ctx->pc = 0x8030DAECu;
    ctx->downcount -= 3;
    // 8030DAEC: stw     r3, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DAF0:
    ctx->pc = 0x8030DAF0u;
    // 8030DAF0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030DAF4:
    ctx->pc = 0x8030DAF4u;
    // 8030DAF4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030DAF8:
    ctx->downcount -= 4;
    // 8030DAF8: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030DAFC:
    ctx->pc = 0x8030DAFCu;
    // 8030DAFC: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DB00:
    // 8030DB00: cmpwi   r4, 0
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

label_8030DB04:
    // 8030DB04: bc    12, 2, 0x8030DB0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DB0C;
        }
    }

label_8030DB08:
    ctx->downcount -= 1;
    // 8030DB08: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_8030DB0C:
    ctx->pc = 0x8030DB0Cu;
    ctx->downcount -= 2;
    // 8030DB0C: lwz     r3, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030DB10:
    // 8030DB10: bl      0x8026F1B0
    {
            ctx->lr = 0x8030DB14u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_8030DB14:
    ctx->downcount -= 4;
    // 8030DB14: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8030DB18:
    // 8030DB18: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030DB1C:
    // 8030DB1C: cmpwi   r30, 2
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

label_8030DB20:
    // 8030DB20: bc    12, 0, 0x8030DAF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DAF8u;
                return;
            }
            goto label_8030DAF8;
        }
    }

label_8030DB24:
    ctx->pc = 0x8030DB24u;
    ctx->downcount -= 20;
    // 8030DB24: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030DB28:
    ctx->pc = 0x8030DB28u;
    // 8030DB28: stw     r0, 180(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DB2C:
    ctx->pc = 0x8030DB2Cu;
    // 8030DB2C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DB30:
    ctx->pc = 0x8030DB30u;
    // 8030DB30: stw     r0, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DB34:
    ctx->pc = 0x8030DB34u;
    // 8030DB34: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DB38:
    ctx->pc = 0x8030DB38u;
    // 8030DB38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DB3C:
    ctx->pc = 0x8030DB3Cu;
    // 8030DB3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DB40:
    ctx->pc = 0x8030DB40u;
    // 8030DB40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030DB44:
    ctx->pc = 0x8030DB44u;
    // 8030DB44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DB48:
    ctx->pc = 0x8030DB48u;
    ctx->downcount -= 18;
    // 8030DB48: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DB4C:
    ctx->pc = 0x8030DB4Cu;
    // 8030DB4C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DB50:
    // 8030DB50: cmpwi   r3, 0
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

label_8030DB54:
    ctx->pc = 0x8030DB54u;
    // 8030DB54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DB58:
    ctx->pc = 0x8030DB58u;
    // 8030DB58: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DB5C:
    // 8030DB5C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DB60:
    // 8030DB60: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DB64:
    // 8030DB64: bc    12, 2, 0x8030DB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DB94;
        }
    }

label_8030DB68:
    ctx->downcount -= 1;
    // 8030DB68: bc    12, 2, 0x8030DB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DB84;
        }
    }

label_8030DB6C:
    ctx->downcount -= 3;
    // 8030DB6C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030DB70:
    // 8030DB70: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030DB74:
    // 8030DB74: bl      0x8030DC14
    {
            ctx->lr = 0x8030DB78u;
            goto label_8030DC14;
    }

label_8030DB78:
    ctx->downcount -= 3;
    // 8030DB78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DB7C:
    // 8030DB7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DB80:
    // 8030DB80: bl      0x801ED118
    {
            ctx->lr = 0x8030DB84u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8030DB84:
    ctx->downcount -= 2;
    // 8030DB84: cmpwi   r31, 0
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

label_8030DB88:
    // 8030DB88: bc    4, 1, 0x8030DB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030DB94;
        }
    }

label_8030DB8C:
    ctx->downcount -= 2;
    // 8030DB8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DB90:
    // 8030DB90: bl      0x801C1C90
    {
            ctx->lr = 0x8030DB94u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030DB94:
    ctx->downcount -= 17;
    // 8030DB94: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DB98:
    ctx->pc = 0x8030DB98u;
    // 8030DB98: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DB9C:
    ctx->pc = 0x8030DB9Cu;
    // 8030DB9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DBA0:
    ctx->pc = 0x8030DBA0u;
    // 8030DBA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DBA4:
    // 8030DBA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DBA8:
    ctx->pc = 0x8030DBA8u;
    // 8030DBA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DBAC:
    ctx->pc = 0x8030DBACu;
    ctx->downcount -= 18;
    // 8030DBAC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DBB0:
    ctx->pc = 0x8030DBB0u;
    // 8030DBB0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DBB4:
    // 8030DBB4: cmpwi   r3, 0
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

label_8030DBB8:
    ctx->pc = 0x8030DBB8u;
    // 8030DBB8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DBBC:
    ctx->pc = 0x8030DBBCu;
    // 8030DBBC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DBC0:
    // 8030DBC0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DBC4:
    // 8030DBC4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DBC8:
    // 8030DBC8: bc    12, 2, 0x8030DBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DBFC;
        }
    }

label_8030DBCC:
    ctx->downcount -= 1;
    // 8030DBCC: bc    12, 2, 0x8030DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DBEC;
        }
    }

label_8030DBD0:
    ctx->downcount -= 1;
    // 8030DBD0: bc    12, 2, 0x8030DBEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DBEC;
        }
    }

label_8030DBD4:
    ctx->downcount -= 3;
    // 8030DBD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DBD8:
    // 8030DBD8: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_8030DBDC:
    // 8030DBDC: bl      0x801ED098
    {
            ctx->lr = 0x8030DBE0u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_8030DBE0:
    ctx->downcount -= 3;
    // 8030DBE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DBE4:
    // 8030DBE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DBE8:
    // 8030DBE8: bl      0x801ED058
    {
            ctx->lr = 0x8030DBECu;
            ctx->pc = 0x801ED058u;
            return;
    }

label_8030DBEC:
    ctx->downcount -= 2;
    // 8030DBEC: cmpwi   r31, 0
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

label_8030DBF0:
    // 8030DBF0: bc    4, 1, 0x8030DBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030DBFC;
        }
    }

label_8030DBF4:
    ctx->downcount -= 2;
    // 8030DBF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DBF8:
    // 8030DBF8: bl      0x801C1C90
    {
            ctx->lr = 0x8030DBFCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030DBFC:
    ctx->downcount -= 17;
    // 8030DBFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DC00:
    ctx->pc = 0x8030DC00u;
    // 8030DC00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DC04:
    ctx->pc = 0x8030DC04u;
    // 8030DC04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DC08:
    ctx->pc = 0x8030DC08u;
    // 8030DC08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DC0C:
    // 8030DC0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DC10:
    ctx->pc = 0x8030DC10u;
    // 8030DC10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DC14:
    ctx->pc = 0x8030DC14u;
    ctx->downcount -= 7;
    // 8030DC14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DC18:
    ctx->pc = 0x8030DC18u;
    // 8030DC18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DC1C:
    // 8030DC1C: cmpwi   r3, 0
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

label_8030DC20:
    ctx->pc = 0x8030DC20u;
    // 8030DC20: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DC24:
    ctx->pc = 0x8030DC24u;
    // 8030DC24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030DC28:
    // 8030DC28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DC2C:
    // 8030DC2C: bc    12, 2, 0x8030DC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DC3C;
        }
    }

label_8030DC30:
    ctx->downcount -= 2;
    // 8030DC30: cmpwi   r4, 0
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

label_8030DC34:
    // 8030DC34: bc    4, 1, 0x8030DC3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030DC3C;
        }
    }

label_8030DC38:
    ctx->downcount -= 1;
    // 8030DC38: bl      0x801C1C90
    {
            ctx->lr = 0x8030DC3Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030DC3C:
    ctx->downcount -= 7;
    // 8030DC3C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DC40:
    ctx->pc = 0x8030DC40u;
    // 8030DC40: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030DC44:
    ctx->pc = 0x8030DC44u;
    // 8030DC44: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DC48:
    ctx->pc = 0x8030DC48u;
    // 8030DC48: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DC4C:
    // 8030DC4C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DC50:
    ctx->pc = 0x8030DC50u;
    // 8030DC50: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DC54:
    ctx->pc = 0x8030DC54u;
    ctx->downcount -= 20;
    // 8030DC54: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DC58:
    ctx->pc = 0x8030DC58u;
    // 8030DC58: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DC5C:
    ctx->pc = 0x8030DC5Cu;
    // 8030DC5C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DC60:
    ctx->pc = 0x8030DC60u;
    // 8030DC60: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DC64:
    // 8030DC64: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030DC68:
    // 8030DC68: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DC6C:
    // 8030DC6C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DC70:
    // 8030DC70: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030DC74:
    // 8030DC74: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DC78:
    // 8030DC78: bl      0x803456D0
    {
            ctx->lr = 0x8030DC7Cu;
            ctx->pc = 0x803456D0u;
            return;
    }

label_8030DC7C:
    ctx->downcount -= 34;
    // 8030DC7C: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030DC80:
    ctx->pc = 0x8030DC80u;
    // 8030DC80: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DC84:
    ctx->pc = 0x8030DC84u;
    // 8030DC84: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DC88:
    ctx->pc = 0x8030DC88u;
    // 8030DC88: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030DC8C:
    // 8030DC8C: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030DC90:
    ctx->pc = 0x8030DC90u;
    // 8030DC90: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DC94:
    ctx->pc = 0x8030DC94u;
    // 8030DC94: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DC98:
    ctx->pc = 0x8030DC98u;
    // 8030DC98: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DC9C:
    ctx->pc = 0x8030DC9Cu;
    // 8030DC9C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DCA0:
    ctx->pc = 0x8030DCA0u;
    // 8030DCA0: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030DCA4:
    ctx->pc = 0x8030DCA4u;
    // 8030DCA4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DCA8:
    ctx->pc = 0x8030DCA8u;
    // 8030DCA8: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DCAC:
    ctx->pc = 0x8030DCACu;
    // 8030DCAC: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030DCB0:
    ctx->pc = 0x8030DCB0u;
    // 8030DCB0: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_8030DCB4:
    ctx->pc = 0x8030DCB4u;
    // 8030DCB4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DCB8:
    ctx->pc = 0x8030DCB8u;
    // 8030DCB8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DCBC:
    ctx->pc = 0x8030DCBCu;
    // 8030DCBC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DCC0:
    ctx->pc = 0x8030DCC0u;
    // 8030DCC0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DCC4:
    ctx->pc = 0x8030DCC4u;
    // 8030DCC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DCC8:
    // 8030DCC8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030DCCC:
    ctx->pc = 0x8030DCCCu;
    // 8030DCCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DCD0:
    ctx->downcount -= 2;
    // 8030DCD0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030DCD4:
    ctx->pc = 0x8030DCD4u;
    // 8030DCD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DCD8:
    ctx->downcount -= 2;
    // 8030DCD8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030DCDC:
    ctx->pc = 0x8030DCDCu;
    // 8030DCDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DCE0:
    ctx->pc = 0x8030DCE0u;
    ctx->downcount -= 10;
    // 8030DCE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DCE4:
    ctx->pc = 0x8030DCE4u;
    // 8030DCE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DCE8:
    ctx->pc = 0x8030DCE8u;
    // 8030DCE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DCEC:
    ctx->pc = 0x8030DCECu;
    // 8030DCEC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030DCF0:
    // 8030DCF0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DCF4:
    ctx->pc = 0x8030DCF4u;
    // 8030DCF4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030DCF8:
    ctx->pc = 0x8030DCF8u;
    // 8030DCF8: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030DCFC:
    ctx->pc = 0x8030DCFCu;
    // 8030DCFC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030DD00:
    ctx->pc = 0x8030DD00u;
    // 8030DD00: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030DD04u;
            ctx->pc = target;
            return;
        }
    }

label_8030DD04:
    ctx->downcount -= 2;
    // 8030DD04: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8030DD08:
    // 8030DD08: bl      0x8030E03C
    {
            ctx->lr = 0x8030DD0Cu;
            goto label_8030E03C;
    }

label_8030DD0C:
    ctx->pc = 0x8030DD0Cu;
    ctx->downcount -= 6;
    // 8030DD0C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030DD10:
    // 8030DD10: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DD14:
    ctx->pc = 0x8030DD14u;
    // 8030DD14: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8030DD18:
    ctx->pc = 0x8030DD18u;
    // 8030DD18: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8030DD1C:
    ctx->pc = 0x8030DD1Cu;
    // 8030DD1C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8030DD20u;
            ctx->pc = target;
            return;
        }
    }

label_8030DD20:
    ctx->pc = 0x8030DD20u;
    ctx->downcount -= 6;
    // 8030DD20: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DD24:
    ctx->pc = 0x8030DD24u;
    // 8030DD24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030DD28:
    ctx->pc = 0x8030DD28u;
    // 8030DD28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DD2C:
    // 8030DD2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DD30:
    ctx->pc = 0x8030DD30u;
    // 8030DD30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DD34:
    ctx->pc = 0x8030DD34u;
    ctx->downcount -= 21;
    // 8030DD34: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DD38:
    ctx->pc = 0x8030DD38u;
    // 8030DD38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DD3C:
    ctx->pc = 0x8030DD3Cu;
    // 8030DD3C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DD40:
    ctx->pc = 0x8030DD40u;
    // 8030DD40: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DD44:
    // 8030DD44: lis     r30, -32659
    ctx->gpr[30] = ((u32)(s32)(-32659) << 16);

label_8030DD48:
    // 8030DD48: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030DD4C:
    // 8030DD4C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DD50:
    // 8030DD50: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DD54:
    // 8030DD54: addi    r30, r30, -31416
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-31416);

label_8030DD58:
    // 8030DD58: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DD5C:
    // 8030DD5C: bl      0x802A6748
    {
            ctx->lr = 0x8030DD60u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_8030DD60:
    ctx->downcount -= 7;
    // 8030DD60: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030DD64:
    // 8030DD64: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DD68:
    // 8030DD68: addi    r4, r4, -30896
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30896);

label_8030DD6C:
    ctx->pc = 0x8030DD6Cu;
    // 8030DD6C: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DD70:
    // 8030DD70: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8030DD74:
    ctx->pc = 0x8030DD74u;
    // 8030DD74: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DD78:
    // 8030DD78: bl      0x801ED17C
    {
            ctx->lr = 0x8030DD7Cu;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_8030DD7C:
    ctx->downcount -= 6;
    // 8030DD7C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DD80:
    // 8030DD80: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DD84:
    // 8030DD84: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DD88:
    // 8030DD88: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030DD8C:
    // 8030DD8C: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030DD90:
    // 8030DD90: bl      0x8030DEC0
    {
            ctx->lr = 0x8030DD94u;
            goto label_8030DEC0;
    }

label_8030DD94:
    ctx->downcount -= 3;
    // 8030DD94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DD98:
    // 8030DD98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DD9C:
    // 8030DD9C: bl      0x802A5D48
    {
            ctx->lr = 0x8030DDA0u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030DDA0:
    ctx->downcount -= 6;
    // 8030DDA0: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DDA4:
    // 8030DDA4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030DDA8:
    // 8030DDA8: addi    r4, r30, 364
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(364);

label_8030DDAC:
    // 8030DDAC: addi    r5, r30, 376
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(376);

label_8030DDB0:
    // 8030DDB0: addi    r6, r30, 388
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(388);

label_8030DDB4:
    // 8030DDB4: bl      0x8030DFE0
    {
            ctx->lr = 0x8030DDB8u;
            goto label_8030DFE0;
    }

label_8030DDB8:
    ctx->downcount -= 2;
    // 8030DDB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DDBC:
    // 8030DDBC: bl      0x802A609C
    {
            ctx->lr = 0x8030DDC0u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_8030DDC0:
    ctx->downcount -= 10;
    // 8030DDC0: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8030DDC4:
    // 8030DDC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030DDC8:
    // 8030DDC8: addi    r3, r3, -31016
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-31016);

label_8030DDCC:
    ctx->pc = 0x8030DDCCu;
    // 8030DDCC: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DDD0:
    // 8030DDD0: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_8030DDD4:
    ctx->pc = 0x8030DDD4u;
    // 8030DDD4: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DDD8:
    // 8030DDD8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DDDC:
    // 8030DDDC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030DDE0:
    ctx->pc = 0x8030DDE0u;
    // 8030DDE0: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DDE4:
    // 8030DDE4: bl      0x802A5D48
    {
            ctx->lr = 0x8030DDE8u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030DDE8:
    ctx->downcount -= 6;
    // 8030DDE8: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_8030DDEC:
    // 8030DDEC: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DDF0:
    // 8030DDF0: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030DDF4:
    // 8030DDF4: addi    r5, r30, 328
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(328);

label_8030DDF8:
    // 8030DDF8: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030DDFC:
    // 8030DDFC: bl      0x8030DC54
    {
            ctx->lr = 0x8030DE00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DC54u;
                return;
            }
            goto label_8030DC54;
    }

label_8030DE00:
    ctx->downcount -= 3;
    // 8030DE00: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DE04:
    // 8030DE04: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030DE08:
    // 8030DE08: bl      0x802A5D48
    {
            ctx->lr = 0x8030DE0Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030DE0C:
    ctx->downcount -= 5;
    // 8030DE0C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DE10:
    // 8030DE10: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030DE14:
    // 8030DE14: addi    r4, r30, 340
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(340);

label_8030DE18:
    // 8030DE18: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030DE1C:
    // 8030DE1C: bl      0x8030DC54
    {
            ctx->lr = 0x8030DE20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DC54u;
                return;
            }
            goto label_8030DC54;
    }

label_8030DE20:
    ctx->downcount -= 3;
    // 8030DE20: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DE24:
    // 8030DE24: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030DE28:
    // 8030DE28: bl      0x802A5D48
    {
            ctx->lr = 0x8030DE2Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8030DE2C:
    ctx->downcount -= 5;
    // 8030DE2C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DE30:
    // 8030DE30: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8030DE34:
    // 8030DE34: addi    r4, r30, 352
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(352);

label_8030DE38:
    // 8030DE38: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_8030DE3C:
    // 8030DE3C: bl      0x8030DC54
    {
            ctx->lr = 0x8030DE40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DC54u;
                return;
            }
            goto label_8030DC54;
    }

label_8030DE40:
    ctx->downcount -= 17;
    // 8030DE40: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030DE44:
    ctx->pc = 0x8030DE44u;
    // 8030DE44: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DE48:
    ctx->pc = 0x8030DE48u;
    // 8030DE48: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DE4C:
    ctx->pc = 0x8030DE4Cu;
    // 8030DE4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DE50:
    // 8030DE50: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030DE54:
    ctx->pc = 0x8030DE54u;
    // 8030DE54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DE58:
    ctx->pc = 0x8030DE58u;
    ctx->downcount -= 18;
    // 8030DE58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DE5C:
    ctx->pc = 0x8030DE5Cu;
    // 8030DE5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DE60:
    // 8030DE60: cmpwi   r3, 0
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

label_8030DE64:
    ctx->pc = 0x8030DE64u;
    // 8030DE64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DE68:
    ctx->pc = 0x8030DE68u;
    // 8030DE68: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DE6C:
    // 8030DE6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DE70:
    // 8030DE70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DE74:
    // 8030DE74: bc    12, 2, 0x8030DEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DEA8;
        }
    }

label_8030DE78:
    ctx->downcount -= 1;
    // 8030DE78: bc    12, 2, 0x8030DE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DE98;
        }
    }

label_8030DE7C:
    ctx->downcount -= 1;
    // 8030DE7C: bc    12, 2, 0x8030DE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030DE98;
        }
    }

label_8030DE80:
    ctx->downcount -= 3;
    // 8030DE80: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8030DE84:
    // 8030DE84: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8030DE88:
    // 8030DE88: bl      0x8030DC14
    {
            ctx->lr = 0x8030DE8Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DC14u;
                return;
            }
            goto label_8030DC14;
    }

label_8030DE8C:
    ctx->downcount -= 3;
    // 8030DE8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DE90:
    // 8030DE90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DE94:
    // 8030DE94: bl      0x801ED118
    {
            ctx->lr = 0x8030DE98u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8030DE98:
    ctx->downcount -= 2;
    // 8030DE98: cmpwi   r31, 0
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

label_8030DE9C:
    // 8030DE9C: bc    4, 1, 0x8030DEA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030DEA8;
        }
    }

label_8030DEA0:
    ctx->downcount -= 2;
    // 8030DEA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DEA4:
    // 8030DEA4: bl      0x801C1C90
    {
            ctx->lr = 0x8030DEA8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030DEA8:
    ctx->downcount -= 17;
    // 8030DEA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030DEAC:
    ctx->pc = 0x8030DEACu;
    // 8030DEAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DEB0:
    ctx->pc = 0x8030DEB0u;
    // 8030DEB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DEB4:
    ctx->pc = 0x8030DEB4u;
    // 8030DEB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DEB8:
    // 8030DEB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DEBC:
    ctx->pc = 0x8030DEBCu;
    // 8030DEBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DEC0:
    ctx->pc = 0x8030DEC0u;
    ctx->downcount -= 17;
    // 8030DEC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DEC4:
    ctx->pc = 0x8030DEC4u;
    // 8030DEC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DEC8:
    ctx->pc = 0x8030DEC8u;
    // 8030DEC8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DECC:
    ctx->pc = 0x8030DECCu;
    // 8030DECC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DED0:
    // 8030DED0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DED4:
    // 8030DED4: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030DED8:
    // 8030DED8: bl      0x803457F4
    {
            ctx->lr = 0x8030DEDCu;
            ctx->pc = 0x803457F4u;
            return;
    }

label_8030DEDC:
    ctx->pc = 0x8030DEDCu;
    ctx->downcount -= 11;
    // 8030DEDC: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DEE0:
    // 8030DEE0: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8030DEE4:
    // 8030DEE4: addi    r3, r3, -30776
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-30776);

label_8030DEE8:
    ctx->pc = 0x8030DEE8u;
    // 8030DEE8: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DEEC:
    // 8030DEEC: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030DEF0:
    ctx->pc = 0x8030DEF0u;
    // 8030DEF0: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DEF4:
    ctx->pc = 0x8030DEF4u;
    // 8030DEF4: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030DEF8:
    // 8030DEF8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DEFC:
    // 8030DEFC: bl      0x801C1C80
    {
            ctx->lr = 0x8030DF00u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030DF00:
    ctx->pc = 0x8030DF00u;
    ctx->downcount -= 8;
    // 8030DF00: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF04:
    // 8030DF04: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DF08:
    ctx->pc = 0x8030DF08u;
    // 8030DF08: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DF0C:
    // 8030DF0C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030DF10:
    ctx->pc = 0x8030DF10u;
    // 8030DF10: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF14:
    // 8030DF14: bl      0x801C1C80
    {
            ctx->lr = 0x8030DF18u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030DF18:
    ctx->pc = 0x8030DF18u;
    ctx->downcount -= 8;
    // 8030DF18: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF1C:
    // 8030DF1C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8030DF20:
    ctx->pc = 0x8030DF20u;
    // 8030DF20: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DF24:
    // 8030DF24: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030DF28:
    ctx->pc = 0x8030DF28u;
    // 8030DF28: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF2C:
    // 8030DF2C: bl      0x801C1C80
    {
            ctx->lr = 0x8030DF30u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_8030DF30:
    ctx->downcount -= 6;
    // 8030DF30: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_8030DF34:
    ctx->pc = 0x8030DF34u;
    // 8030DF34: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030DF38:
    // 8030DF38: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_8030DF3C:
    // 8030DF3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030DF40:
    // 8030DF40: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030DF44:
    // 8030DF44: b       0x8030DFB0
    {
            goto label_8030DFB0;
    }

label_8030DF48:
    loop_8030DF48(ctx);
    if (ctx->pc == 0x8030DFBCu) goto label_8030DFBC;
    return;
label_8030DF4C:
    // 8030DF4C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_8030DF50:
    ctx->pc = 0x8030DF50u;
    // 8030DF50: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF54:
    // 8030DF54: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030DF58:
    ctx->pc = 0x8030DF58u;
    // 8030DF58: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF5C:
    ctx->pc = 0x8030DF5Cu;
    // 8030DF5C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DF60:
    ctx->pc = 0x8030DF60u;
    // 8030DF60: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DF64:
    ctx->pc = 0x8030DF64u;
    // 8030DF64: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF68:
    ctx->pc = 0x8030DF68u;
    // 8030DF68: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DF6C:
    ctx->pc = 0x8030DF6Cu;
    // 8030DF6C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF70:
    ctx->pc = 0x8030DF70u;
    // 8030DF70: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF74:
    // 8030DF74: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030DF78:
    ctx->pc = 0x8030DF78u;
    // 8030DF78: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF7C:
    ctx->pc = 0x8030DF7Cu;
    // 8030DF7C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DF80:
    ctx->pc = 0x8030DF80u;
    // 8030DF80: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DF84:
    ctx->pc = 0x8030DF84u;
    // 8030DF84: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF88:
    ctx->pc = 0x8030DF88u;
    // 8030DF88: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DF8C:
    ctx->pc = 0x8030DF8Cu;
    // 8030DF8C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF90:
    ctx->pc = 0x8030DF90u;
    // 8030DF90: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DF94:
    // 8030DF94: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030DF98:
    ctx->pc = 0x8030DF98u;
    // 8030DF98: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030DF9C:
    ctx->pc = 0x8030DF9Cu;
    // 8030DF9C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030DFA0:
    // 8030DFA0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_8030DFA4:
    ctx->pc = 0x8030DFA4u;
    // 8030DFA4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DFA8:
    ctx->pc = 0x8030DFA8u;
    // 8030DFA8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DFAC:
    ctx->pc = 0x8030DFACu;
    // 8030DFAC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DFB0:
    ctx->pc = 0x8030DFB0u;
    ctx->downcount -= 3;
    // 8030DFB0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DFB4:
    // 8030DFB4: cmpw    r7, r0
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

label_8030DFB8:
    // 8030DFB8: bc    12, 0, 0x8030DF48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DF48u;
                return;
            }
            goto label_8030DF48;
        }
    }

label_8030DFBC:
    ctx->downcount -= 3;
    // 8030DFBC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DFC0:
    // 8030DFC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030DFC4:
    // 8030DFC4: bl      0x803457CC
    {
            ctx->lr = 0x8030DFC8u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_8030DFC8:
    ctx->downcount -= 17;
    // 8030DFC8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030DFCC:
    ctx->pc = 0x8030DFCCu;
    // 8030DFCC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030DFD0:
    ctx->pc = 0x8030DFD0u;
    // 8030DFD0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030DFD4:
    ctx->pc = 0x8030DFD4u;
    // 8030DFD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030DFD8:
    // 8030DFD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030DFDC:
    ctx->pc = 0x8030DFDCu;
    // 8030DFDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030DFE0:
    ctx->pc = 0x8030DFE0u;
    ctx->downcount -= 19;
    // 8030DFE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030DFE4:
    ctx->pc = 0x8030DFE4u;
    // 8030DFE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030DFE8:
    ctx->pc = 0x8030DFE8u;
    // 8030DFE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030DFEC:
    ctx->pc = 0x8030DFECu;
    // 8030DFEC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030DFF0:
    // 8030DFF0: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_8030DFF4:
    // 8030DFF4: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030DFF8:
    // 8030DFF8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030DFFC:
    // 8030DFFC: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E000:
    // 8030E000: bl      0x8030DC54
    {
            ctx->lr = 0x8030E004u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DC54u;
                return;
            }
            goto label_8030DC54;
    }

label_8030E004:
    ctx->downcount -= 27;
    // 8030E004: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_8030E008:
    ctx->pc = 0x8030E008u;
    // 8030E008: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030E00C:
    ctx->pc = 0x8030E00Cu;
    // 8030E00C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E010:
    ctx->pc = 0x8030E010u;
    // 8030E010: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E014:
    // 8030E014: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030E018:
    ctx->pc = 0x8030E018u;
    // 8030E018: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E01C:
    ctx->pc = 0x8030E01Cu;
    // 8030E01C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030E020:
    ctx->pc = 0x8030E020u;
    // 8030E020: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030E024:
    ctx->pc = 0x8030E024u;
    // 8030E024: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E028:
    ctx->pc = 0x8030E028u;
    // 8030E028: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030E02C:
    ctx->pc = 0x8030E02Cu;
    // 8030E02C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E030:
    ctx->pc = 0x8030E030u;
    // 8030E030: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E034:
    // 8030E034: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030E038:
    ctx->pc = 0x8030E038u;
    // 8030E038: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E03C:
    ctx->pc = 0x8030E03Cu;
    ctx->downcount -= 8;
    // 8030E03C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E040:
    ctx->pc = 0x8030E040u;
    // 8030E040: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E044:
    ctx->pc = 0x8030E044u;
    // 8030E044: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E048:
    ctx->pc = 0x8030E048u;
    // 8030E048: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E04C:
    // 8030E04C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E050:
    ctx->pc = 0x8030E050u;
    // 8030E050: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030E054:
    // 8030E054: cmpwi   r0, 0
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

label_8030E058:
    // 8030E058: bc    12, 2, 0x8030E07C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E07C;
        }
    }

label_8030E05C:
    ctx->pc = 0x8030E05Cu;
    ctx->downcount -= 3;
    // 8030E05C: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8030E060:
    // 8030E060: cmpwi   r0, 0
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

label_8030E064:
    // 8030E064: bc    12, 2, 0x8030E06C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E06C;
        }
    }

label_8030E068:
    ctx->downcount -= 1;
    // 8030E068: bl      0x8030E160
    {
            ctx->lr = 0x8030E06Cu;
            goto label_8030E160;
    }

label_8030E06C:
    ctx->downcount -= 2;
    // 8030E06C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E070:
    // 8030E070: bl      0x803456D4
    {
            ctx->lr = 0x8030E074u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_8030E074:
    ctx->downcount -= 2;
    // 8030E074: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E078:
    // 8030E078: bl      0x8030E0A0
    {
            ctx->lr = 0x8030E07Cu;
            goto label_8030E0A0;
    }

label_8030E07C:
    ctx->downcount -= 2;
    // 8030E07C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E080:
    // 8030E080: bl      0x8030E100
    {
            ctx->lr = 0x8030E084u;
            goto label_8030E100;
    }

label_8030E084:
    ctx->downcount -= 2;
    // 8030E084: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E088:
    // 8030E088: bl      0x803456F8
    {
            ctx->lr = 0x8030E08Cu;
            ctx->pc = 0x803456F8u;
            return;
    }

label_8030E08C:
    ctx->pc = 0x8030E08Cu;
    ctx->downcount -= 6;
    // 8030E08C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E090:
    ctx->pc = 0x8030E090u;
    // 8030E090: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E094:
    ctx->pc = 0x8030E094u;
    // 8030E094: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E098:
    // 8030E098: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E09C:
    ctx->pc = 0x8030E09Cu;
    // 8030E09C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E0A0:
    ctx->pc = 0x8030E0A0u;
    ctx->downcount -= 12;
    // 8030E0A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E0A4:
    ctx->pc = 0x8030E0A4u;
    // 8030E0A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E0A8:
    ctx->pc = 0x8030E0A8u;
    // 8030E0A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E0AC:
    ctx->pc = 0x8030E0ACu;
    // 8030E0AC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E0B0:
    // 8030E0B0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E0B4:
    ctx->pc = 0x8030E0B4u;
    // 8030E0B4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E0B8:
    ctx->pc = 0x8030E0B8u;
    // 8030E0B8: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E0BC:
    // 8030E0BC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E0C0:
    // 8030E0C0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E0C4:
    // 8030E0C4: bl      0x800076B4
    {
            ctx->lr = 0x8030E0C8u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030E0C8:
    ctx->downcount -= 2;
    // 8030E0C8: cmpwi   r3, 0
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

label_8030E0CC:
    // 8030E0CC: bc    12, 2, 0x8030E0EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E0EC;
        }
    }

label_8030E0D0:
    ctx->pc = 0x8030E0D0u;
    ctx->downcount -= 8;
    // 8030E0D0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E0D4:
    ctx->pc = 0x8030E0D4u;
    // 8030E0D4: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E0D8:
    // 8030E0D8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E0DC:
    ctx->pc = 0x8030E0DCu;
    // 8030E0DC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E0E0:
    // 8030E0E0: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030E0E4:
    // 8030E0E4: bl      0x800076E4
    {
            ctx->lr = 0x8030E0E8u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030E0E8:
    ctx->downcount -= 1;
    // 8030E0E8: nop
    // nop

label_8030E0EC:
    ctx->pc = 0x8030E0ECu;
    ctx->downcount -= 6;
    // 8030E0EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E0F0:
    ctx->pc = 0x8030E0F0u;
    // 8030E0F0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E0F4:
    ctx->pc = 0x8030E0F4u;
    // 8030E0F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E0F8:
    // 8030E0F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E0FC:
    ctx->pc = 0x8030E0FCu;
    // 8030E0FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E100:
    ctx->pc = 0x8030E100u;
    ctx->downcount -= 12;
    // 8030E100: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E104:
    ctx->pc = 0x8030E104u;
    // 8030E104: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E108:
    ctx->pc = 0x8030E108u;
    // 8030E108: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E10C:
    ctx->pc = 0x8030E10Cu;
    // 8030E10C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E110:
    // 8030E110: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E114:
    ctx->pc = 0x8030E114u;
    // 8030E114: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E118:
    ctx->pc = 0x8030E118u;
    // 8030E118: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E11C:
    // 8030E11C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E120:
    // 8030E120: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E124:
    // 8030E124: bl      0x800076B4
    {
            ctx->lr = 0x8030E128u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030E128:
    ctx->downcount -= 2;
    // 8030E128: cmpwi   r3, 0
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

label_8030E12C:
    // 8030E12C: bc    12, 2, 0x8030E14C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E14C;
        }
    }

label_8030E130:
    ctx->pc = 0x8030E130u;
    ctx->downcount -= 8;
    // 8030E130: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E134:
    ctx->pc = 0x8030E134u;
    // 8030E134: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E138:
    // 8030E138: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E13C:
    ctx->pc = 0x8030E13Cu;
    // 8030E13C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E140:
    // 8030E140: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030E144:
    // 8030E144: bl      0x800076E4
    {
            ctx->lr = 0x8030E148u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030E148:
    ctx->downcount -= 1;
    // 8030E148: nop
    // nop

label_8030E14C:
    ctx->pc = 0x8030E14Cu;
    ctx->downcount -= 6;
    // 8030E14C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E150:
    ctx->pc = 0x8030E150u;
    // 8030E150: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E154:
    ctx->pc = 0x8030E154u;
    // 8030E154: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E158:
    // 8030E158: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E15C:
    ctx->pc = 0x8030E15Cu;
    // 8030E15C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E160:
    ctx->pc = 0x8030E160u;
    ctx->downcount -= 12;
    // 8030E160: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E164:
    ctx->pc = 0x8030E164u;
    // 8030E164: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E168:
    ctx->pc = 0x8030E168u;
    // 8030E168: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E16C:
    ctx->pc = 0x8030E16Cu;
    // 8030E16C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E170:
    // 8030E170: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E174:
    ctx->pc = 0x8030E174u;
    // 8030E174: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E178:
    ctx->pc = 0x8030E178u;
    // 8030E178: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E17C:
    // 8030E17C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E180:
    // 8030E180: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E184:
    // 8030E184: bl      0x800076B4
    {
            ctx->lr = 0x8030E188u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_8030E188:
    ctx->downcount -= 2;
    // 8030E188: cmpwi   r3, 0
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

label_8030E18C:
    // 8030E18C: bc    12, 2, 0x8030E1AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E1AC;
        }
    }

label_8030E190:
    ctx->pc = 0x8030E190u;
    ctx->downcount -= 8;
    // 8030E190: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E194:
    ctx->pc = 0x8030E194u;
    // 8030E194: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E198:
    // 8030E198: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_8030E19C:
    ctx->pc = 0x8030E19Cu;
    // 8030E19C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E1A0:
    // 8030E1A0: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_8030E1A4:
    // 8030E1A4: bl      0x800076E4
    {
            ctx->lr = 0x8030E1A8u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_8030E1A8:
    ctx->downcount -= 1;
    // 8030E1A8: nop
    // nop

label_8030E1AC:
    ctx->pc = 0x8030E1ACu;
    ctx->downcount -= 6;
    // 8030E1AC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E1B0:
    ctx->pc = 0x8030E1B0u;
    // 8030E1B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E1B4:
    ctx->pc = 0x8030E1B4u;
    // 8030E1B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E1B8:
    // 8030E1B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E1BC:
    ctx->pc = 0x8030E1BCu;
    // 8030E1BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E1C0:
    ctx->downcount -= 2;
    // 8030E1C0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030E1C4:
    // 8030E1C4: b       0x8030DBAC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DBACu;
                return;
            }
            goto label_8030DBAC;
    }

label_8030E1C8:
    ctx->downcount -= 2;
    // 8030E1C8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030E1CC:
    // 8030E1CC: b       0x8030DB48
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DB48u;
                return;
            }
            goto label_8030DB48;
    }

label_8030E1D0:
    ctx->downcount -= 2;
    // 8030E1D0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030E1D4:
    // 8030E1D4: b       0x8030DE58
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030DE58u;
                return;
            }
            goto label_8030DE58;
    }

label_8030E1D8:
    ctx->pc = 0x8030E1D8u;
    ctx->downcount -= 9;
    // 8030E1D8: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8030E1DC:
    ctx->pc = 0x8030E1DCu;
    // 8030E1DC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030E1E0:
    ctx->pc = 0x8030E1E0u;
    // 8030E1E0: add   r6, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8030E1E4:
    ctx->pc = 0x8030E1E4u;
    // 8030E1E4: lwz     r6, 280(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(280);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8030E1E8:
    ctx->pc = 0x8030E1E8u;
    // 8030E1E8: rlwinm r0, r6, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[6], 3u) & 0xFFFFFFF8u;
    }

label_8030E1EC:
    ctx->pc = 0x8030E1ECu;
    // 8030E1EC: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E1F0:
    ctx->pc = 0x8030E1F0u;
    // 8030E1F0: lwz     r0, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E1F4:
    ctx->pc = 0x8030E1F4u;
    // 8030E1F4: cmpw    r4, r0
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

label_8030E1F8:
    ctx->pc = 0x8030E1F8u;
    // 8030E1F8: bc    4, 2, 0x8030E204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E204;
        }
    }

label_8030E1FC:
    ctx->pc = 0x8030E1FCu;
    ctx->downcount -= 2;
    // 8030E1FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030E200:
    ctx->pc = 0x8030E200u;
    // 8030E200: b       0x8030E214
    {
            goto label_8030E214;
    }

label_8030E204:
    ctx->pc = 0x8030E204u;
    ctx->downcount -= 3;
    // 8030E204: lwz     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E208:
    ctx->pc = 0x8030E208u;
    // 8030E208: cmpw    r4, r0
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

label_8030E20C:
    ctx->pc = 0x8030E20Cu;
    // 8030E20C: bc    4, 2, 0x8030E214
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E214;
        }
    }

label_8030E210:
    ctx->pc = 0x8030E210u;
    ctx->downcount -= 1;
    // 8030E210: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030E214:
    ctx->pc = 0x8030E214u;
    ctx->downcount -= 3;
    // 8030E214: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030E218:
    ctx->pc = 0x8030E218u;
    // 8030E218: or   r4, r6, r6
    {
        ctx->gpr[4] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8030E21C:
    ctx->pc = 0x8030E21Cu;
    // 8030E21C: b       0x80269BAC
    {
            ctx->pc = 0x80269BACu;
            return;
    }

label_8030E220:
    ctx->pc = 0x8030E220u;
    ctx->downcount -= 15;
    // 8030E220: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E224:
    ctx->pc = 0x8030E224u;
    // 8030E224: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E228:
    ctx->pc = 0x8030E228u;
    // 8030E228: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E22C:
    ctx->pc = 0x8030E22Cu;
    // 8030E22C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E230:
    ctx->pc = 0x8030E230u;
    // 8030E230: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030E234:
    ctx->pc = 0x8030E234u;
    // 8030E234: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E234u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_8030E238:
    ctx->pc = 0x8030E238u;
    // 8030E238: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8030E238u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x8030E238u);
        if (ctx->exception) return;
    }

label_8030E23C:
    ctx->pc = 0x8030E23Cu;
    // 8030E23C: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E240:
    ctx->pc = 0x8030E240u;
    // 8030E240: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030E244:
    ctx->pc = 0x8030E244u;
    // 8030E244: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030E248:
    ctx->pc = 0x8030E248u;
    // 8030E248: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E24C:
    ctx->pc = 0x8030E24Cu;
    // 8030E24C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E250:
    ctx->pc = 0x8030E250u;
    // 8030E250: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030E254:
    ctx->pc = 0x8030E254u;
    // 8030E254: lwz     r4, -27968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E258:
    ctx->pc = 0x8030E258u;
    // 8030E258: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E25Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E25C:
    ctx->pc = 0x8030E25Cu;
    ctx->downcount -= 10;
    // 8030E25C: rlwinm r0, r31, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_8030E260:
    ctx->pc = 0x8030E260u;
    // 8030E260: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030E264:
    ctx->pc = 0x8030E264u;
    // 8030E264: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030E268:
    ctx->pc = 0x8030E268u;
    // 8030E268: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E26C:
    ctx->pc = 0x8030E26Cu;
    // 8030E26C: lwz     r0, 284(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E270:
    ctx->pc = 0x8030E270u;
    // 8030E270: addi    r4, r4, -30720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30720);

label_8030E274:
    ctx->pc = 0x8030E274u;
    // 8030E274: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E278:
    ctx->pc = 0x8030E278u;
    // 8030E278: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8030E27C:
    ctx->pc = 0x8030E27Cu;
    // 8030E27C: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E280:
    ctx->pc = 0x8030E280u;
    // 8030E280: bl      0x8000E864
    {
            ctx->lr = 0x8030E284u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E284:
    ctx->pc = 0x8030E284u;
    ctx->downcount -= 4;
    // 8030E284: lfs     f31, -11912(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030E284u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11912);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_8030E288:
    ctx->pc = 0x8030E288u;
    // 8030E288: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E28C:
    ctx->pc = 0x8030E28Cu;
    // 8030E28C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E290:
    ctx->pc = 0x8030E290u;
    // 8030E290: bl      0x8026F970
    {
            ctx->lr = 0x8030E294u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030E294:
    ctx->pc = 0x8030E294u;
    ctx->downcount -= 5;
    // 8030E294: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x8030E294u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030E298:
    ctx->pc = 0x8030E298u;
    // 8030E298: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E29C:
    ctx->pc = 0x8030E29Cu;
    // 8030E29C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E2A0:
    ctx->pc = 0x8030E2A0u;
    // 8030E2A0: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8030E2A0u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_8030E2A4:
    ctx->pc = 0x8030E2A4u;
    // 8030E2A4: bl      0x8026F970
    {
            ctx->lr = 0x8030E2A8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030E2A8:
    ctx->pc = 0x8030E2A8u;
    ctx->downcount -= 11;
    // 8030E2A8: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x8030E2A8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030E2AC:
    ctx->pc = 0x8030E2ACu;
    // 8030E2AC: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x8030E2ACu)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_8030E2B0:
    ctx->pc = 0x8030E2B0u;
    // 8030E2B0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x8030E2B0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x8030E2B0u);
        if (ctx->exception) return;
    }

label_8030E2B4:
    ctx->pc = 0x8030E2B4u;
    // 8030E2B4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E2B4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8030E2B8:
    ctx->pc = 0x8030E2B8u;
    // 8030E2B8: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E2BC:
    ctx->pc = 0x8030E2BCu;
    // 8030E2BC: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8030E2C0:
    ctx->pc = 0x8030E2C0u;
    // 8030E2C0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E2C4:
    ctx->pc = 0x8030E2C4u;
    // 8030E2C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E2C8:
    ctx->pc = 0x8030E2C8u;
    // 8030E2C8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_8030E2CC:
    ctx->pc = 0x8030E2CCu;
    // 8030E2CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E2D0:
    ctx->pc = 0x8030E2D0u;
    ctx->downcount -= 13;
    // 8030E2D0: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E2D4:
    ctx->pc = 0x8030E2D4u;
    // 8030E2D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E2D8:
    ctx->pc = 0x8030E2D8u;
    // 8030E2D8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E2DC:
    ctx->pc = 0x8030E2DCu;
    // 8030E2DC: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E2E0:
    ctx->pc = 0x8030E2E0u;
    // 8030E2E0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030E2E4:
    ctx->pc = 0x8030E2E4u;
    // 8030E2E4: stw     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E2E8:
    ctx->pc = 0x8030E2E8u;
    // 8030E2E8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030E2EC:
    ctx->pc = 0x8030E2ECu;
    // 8030E2EC: stw     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8030E2F0:
    ctx->pc = 0x8030E2F0u;
    // 8030E2F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E2F4:
    ctx->pc = 0x8030E2F4u;
    // 8030E2F4: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_8030E2F8:
    ctx->pc = 0x8030E2F8u;
    // 8030E2F8: stb     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030E2FC:
    ctx->pc = 0x8030E2FCu;
    // 8030E2FC: lwz     r4, -27968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E300:
    ctx->pc = 0x8030E300u;
    // 8030E300: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E304u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E304:
    ctx->pc = 0x8030E304u;
    ctx->downcount -= 10;
    // 8030E304: rlwinm r0, r31, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 4u) & 0xFFFFFFF0u;
    }

label_8030E308:
    ctx->pc = 0x8030E308u;
    // 8030E308: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030E30C:
    ctx->pc = 0x8030E30Cu;
    // 8030E30C: add   r5, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8030E310:
    ctx->pc = 0x8030E310u;
    // 8030E310: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_8030E314:
    ctx->pc = 0x8030E314u;
    // 8030E314: lwz     r0, 284(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E318:
    ctx->pc = 0x8030E318u;
    // 8030E318: addi    r4, r4, -30720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-30720);

label_8030E31C:
    ctx->pc = 0x8030E31Cu;
    // 8030E31C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E320:
    ctx->pc = 0x8030E320u;
    // 8030E320: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8030E324:
    ctx->pc = 0x8030E324u;
    // 8030E324: lwzx    r4, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E328:
    ctx->pc = 0x8030E328u;
    // 8030E328: bl      0x8000E864
    {
            ctx->lr = 0x8030E32Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E32C:
    ctx->pc = 0x8030E32Cu;
    ctx->downcount -= 2;
    // 8030E32C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E330:
    ctx->pc = 0x8030E330u;
    // 8030E330: bl      0x8026F6CC
    {
            ctx->lr = 0x8030E334u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030E334:
    ctx->pc = 0x8030E334u;
    ctx->downcount -= 4;
    // 8030E334: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E338:
    ctx->pc = 0x8030E338u;
    // 8030E338: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E33C:
    ctx->pc = 0x8030E33Cu;
    // 8030E33C: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_8030E340:
    ctx->pc = 0x8030E340u;
    // 8030E340: bl      0x8025D62C
    {
            ctx->lr = 0x8030E344u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030E344:
    ctx->pc = 0x8030E344u;
    ctx->downcount -= 13;
    // 8030E344: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8030E348:
    ctx->pc = 0x8030E348u;
    // 8030E348: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E348u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8030E34C:
    ctx->pc = 0x8030E34Cu;
    // 8030E34C: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E34Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8030E350:
    ctx->pc = 0x8030E350u;
    // 8030E350: lwz     r31, 108(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E354:
    ctx->pc = 0x8030E354u;
    // 8030E354: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8030E354u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8030E358:
    ctx->pc = 0x8030E358u;
    // 8030E358: lwz     r30, 104(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(104);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8030E35C:
    ctx->pc = 0x8030E35Cu;
    // 8030E35C: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E360:
    ctx->pc = 0x8030E360u;
    // 8030E360: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030E364:
    ctx->pc = 0x8030E364u;
    // 8030E364: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E368:
    ctx->pc = 0x8030E368u;
    // 8030E368: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E36C:
    ctx->pc = 0x8030E36Cu;
    // 8030E36C: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8030E370:
    ctx->pc = 0x8030E370u;
    // 8030E370: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E374:
    ctx->pc = 0x8030E374u;
    ctx->downcount -= 11;
    // 8030E374: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E378:
    ctx->pc = 0x8030E378u;
    // 8030E378: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E37C:
    ctx->pc = 0x8030E37Cu;
    // 8030E37C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E380:
    ctx->pc = 0x8030E380u;
    // 8030E380: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E384:
    ctx->pc = 0x8030E384u;
    // 8030E384: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030E388:
    ctx->pc = 0x8030E388u;
    // 8030E388: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E38C:
    ctx->pc = 0x8030E38Cu;
    // 8030E38C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E390:
    ctx->pc = 0x8030E390u;
    // 8030E390: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E394:
    ctx->pc = 0x8030E394u;
    // 8030E394: stb     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8030E398:
    ctx->pc = 0x8030E398u;
    // 8030E398: lwz     r4, -27968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27968);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E39C:
    ctx->pc = 0x8030E39Cu;
    // 8030E39C: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E3A0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E3A0:
    ctx->pc = 0x8030E3A0u;
    ctx->downcount -= 5;
    // 8030E3A0: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8030E3A4:
    ctx->pc = 0x8030E3A4u;
    // 8030E3A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E3A8:
    ctx->pc = 0x8030E3A8u;
    // 8030E3A8: lwz     r4, -30720(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-30720);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E3AC:
    ctx->pc = 0x8030E3ACu;
    // 8030E3AC: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E3B0:
    ctx->pc = 0x8030E3B0u;
    // 8030E3B0: bl      0x8000E864
    {
            ctx->lr = 0x8030E3B4u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E3B4:
    ctx->pc = 0x8030E3B4u;
    ctx->downcount -= 3;
    // 8030E3B4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030E3B8:
    ctx->pc = 0x8030E3B8u;
    // 8030E3B8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E3BC:
    ctx->pc = 0x8030E3BCu;
    // 8030E3BC: bl      0x8026F970
    {
            ctx->lr = 0x8030E3C0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030E3C0:
    ctx->pc = 0x8030E3C0u;
    ctx->downcount -= 7;
    // 8030E3C0: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030E3C4:
    ctx->pc = 0x8030E3C4u;
    // 8030E3C4: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E3C8:
    ctx->pc = 0x8030E3C8u;
    // 8030E3C8: lbz     r3, 185(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(185);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8030E3CC:
    ctx->pc = 0x8030E3CCu;
    // 8030E3CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E3D0:
    ctx->pc = 0x8030E3D0u;
    // 8030E3D0: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_8030E3D4:
    ctx->pc = 0x8030E3D4u;
    // 8030E3D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E3D8:
    ctx->pc = 0x8030E3D8u;
    ctx->downcount -= 17;
    // 8030E3D8: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E3DC:
    ctx->pc = 0x8030E3DCu;
    // 8030E3DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E3E0:
    ctx->pc = 0x8030E3E0u;
    // 8030E3E0: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E3E4:
    ctx->pc = 0x8030E3E4u;
    // 8030E3E4: stmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030E3E8:
    ctx->pc = 0x8030E3E8u;
    // 8030E3E8: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E3EC:
    ctx->pc = 0x8030E3ECu;
    // 8030E3EC: lwz     r4, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E3F0:
    ctx->pc = 0x8030E3F0u;
    // 8030E3F0: bl      0x8030E4F0
    {
            ctx->lr = 0x8030E3F4u;
            goto label_8030E4F0;
    }

label_8030E3F4:
    ctx->pc = 0x8030E3F4u;
    ctx->downcount -= 2;
    // 8030E3F4: or   r3, r23, r23
    {
        ctx->gpr[3] = ctx->gpr[23] | ctx->gpr[23];
    }

label_8030E3F8:
    ctx->pc = 0x8030E3F8u;
    // 8030E3F8: bl      0x8030E668
    {
            ctx->lr = 0x8030E3FCu;
            goto label_8030E668;
    }

label_8030E3FC:
    ctx->pc = 0x8030E3FCu;
    ctx->downcount -= 7;
    // 8030E3FC: lis     r29, -32659
    ctx->gpr[29] = ((u32)(s32)(-32659) << 16);

label_8030E400:
    ctx->pc = 0x8030E400u;
    // 8030E400: lis     r27, -32659
    ctx->gpr[27] = ((u32)(s32)(-32659) << 16);

label_8030E404:
    ctx->pc = 0x8030E404u;
    // 8030E404: addi    r29, r29, -30688
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-30688);

label_8030E408:
    ctx->pc = 0x8030E408u;
    // 8030E408: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_8030E40C:
    ctx->pc = 0x8030E40Cu;
    // 8030E40C: addi    r27, r27, -30720
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-30720);

label_8030E410:
    ctx->pc = 0x8030E410u;
    // 8030E410: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030E414:
    ctx->pc = 0x8030E414u;
    // 8030E414: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030E418:
    ctx->downcount -= 4;
    // 8030E418: add   r3, r23, r31
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E41C:
    // 8030E41C: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8030E420:
    ctx->pc = 0x8030E420u;
    // 8030E420: lwz     r25, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        ctx->gpr[25] = mem_read32(ctx, ea);
    }

label_8030E424:
    // 8030E424: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030E428:
    ctx->pc = 0x8030E428u;
    ctx->downcount -= 5;
    // 8030E428: stb     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8030E42C:
    // 8030E42C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E430:
    ctx->pc = 0x8030E430u;
    // 8030E430: lwzx    r4, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E434:
    // 8030E434: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E438:
    // 8030E438: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E43Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E43C:
    ctx->pc = 0x8030E43Cu;
    ctx->downcount -= 4;
    // 8030E43C: lwzx    r4, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E440:
    // 8030E440: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E444:
    // 8030E444: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E448:
    // 8030E448: bl      0x8000E864
    {
            ctx->lr = 0x8030E44Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E44C:
    ctx->downcount -= 3;
    // 8030E44C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E450:
    // 8030E450: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E454:
    // 8030E454: bl      0x8026F960
    {
            ctx->lr = 0x8030E458u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8030E458:
    ctx->downcount -= 5;
    // 8030E458: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E45C:
    // 8030E45C: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8030E460:
    // 8030E460: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E464:
    // 8030E464: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E468:
    // 8030E468: bl      0x8026F760
    {
            ctx->lr = 0x8030E46Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8030E46C:
    ctx->downcount -= 4;
    // 8030E46C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8030E470:
    // 8030E470: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8030E474:
    // 8030E474: cmpwi   r24, 3
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E478:
    // 8030E478: bc    12, 0, 0x8030E428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E428u;
                return;
            }
            goto label_8030E428;
        }
    }

label_8030E47C:
    ctx->pc = 0x8030E47Cu;
    ctx->downcount -= 5;
    // 8030E47C: stb     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8030E480:
    // 8030E480: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E484:
    ctx->pc = 0x8030E484u;
    // 8030E484: lwz     r4, -27964(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27964);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E488:
    // 8030E488: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E48C:
    // 8030E48C: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E490u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E490:
    ctx->pc = 0x8030E490u;
    ctx->downcount -= 4;
    // 8030E490: lwzx    r4, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E494:
    // 8030E494: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E498:
    // 8030E498: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E49C:
    // 8030E49C: bl      0x8000E864
    {
            ctx->lr = 0x8030E4A0u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E4A0:
    ctx->downcount -= 3;
    // 8030E4A0: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E4A4:
    // 8030E4A4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E4A8:
    // 8030E4A8: bl      0x8026F958
    {
            ctx->lr = 0x8030E4ACu;
            ctx->pc = 0x8026F958u;
            return;
    }

label_8030E4AC:
    ctx->downcount -= 5;
    // 8030E4AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E4B0:
    // 8030E4B0: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_8030E4B4:
    // 8030E4B4: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E4B8:
    // 8030E4B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E4BC:
    // 8030E4BC: bl      0x8026F720
    {
            ctx->lr = 0x8030E4C0u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_8030E4C0:
    ctx->downcount -= 7;
    // 8030E4C0: rlwinm r0, r25, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[25], 4u) & 0xFFFFFFF0u;
    }

label_8030E4C4:
    // 8030E4C4: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030E4C8:
    // 8030E4C8: add   r3, r23, r0
    {
        u32 a = ctx->gpr[23];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E4CC:
    ctx->pc = 0x8030E4CCu;
    // 8030E4CC: stw     r26, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[26]);
    }

label_8030E4D0:
    // 8030E4D0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8030E4D4:
    // 8030E4D4: cmpwi   r26, 4
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E4D8:
    // 8030E4D8: bc    12, 0, 0x8030E418
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E418u;
                return;
            }
            goto label_8030E418;
        }
    }

label_8030E4DC:
    ctx->pc = 0x8030E4DCu;
    ctx->downcount -= 16;
    // 8030E4DC: lmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030E4E0:
    ctx->pc = 0x8030E4E0u;
    // 8030E4E0: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E4E4:
    ctx->pc = 0x8030E4E4u;
    // 8030E4E4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E4E8:
    ctx->pc = 0x8030E4E8u;
    // 8030E4E8: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8030E4EC:
    ctx->pc = 0x8030E4ECu;
    // 8030E4EC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E4F0:
    ctx->pc = 0x8030E4F0u;
    ctx->downcount -= 2;
    // 8030E4F0: cmpwi   r4, 0
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

label_8030E4F4:
    ctx->pc = 0x8030E4F4u;
    // 8030E4F4: bc    12, 2, 0x8030E524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E524;
        }
    }

label_8030E4F8:
    ctx->pc = 0x8030E4F8u;
    ctx->downcount -= 2;
    // 8030E4F8: cmpwi   r4, 3
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

label_8030E4FC:
    ctx->pc = 0x8030E4FCu;
    // 8030E4FC: bc    12, 2, 0x8030E524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E524;
        }
    }

label_8030E500:
    ctx->pc = 0x8030E500u;
    ctx->downcount -= 2;
    // 8030E500: cmpwi   r4, 1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E504:
    ctx->pc = 0x8030E504u;
    // 8030E504: bc    12, 2, 0x8030E558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E558;
        }
    }

label_8030E508:
    ctx->pc = 0x8030E508u;
    ctx->downcount -= 2;
    // 8030E508: cmpwi   r4, 4
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

label_8030E50C:
    ctx->pc = 0x8030E50Cu;
    // 8030E50C: bc    12, 2, 0x8030E558
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E558;
        }
    }

label_8030E510:
    ctx->pc = 0x8030E510u;
    ctx->downcount -= 2;
    // 8030E510: cmpwi   r4, 2
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E514:
    ctx->pc = 0x8030E514u;
    // 8030E514: bc    12, 2, 0x8030E58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E58C;
        }
    }

label_8030E518:
    ctx->pc = 0x8030E518u;
    ctx->downcount -= 2;
    // 8030E518: cmpwi   r4, 5
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E51C:
    ctx->pc = 0x8030E51Cu;
    // 8030E51C: bc    12, 2, 0x8030E58C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E58C;
        }
    }

label_8030E520:
    ctx->pc = 0x8030E520u;
    ctx->downcount -= 1;
    // 8030E520: b       0x8030E5BC
    {
            goto label_8030E5BC;
    }

label_8030E524:
    ctx->pc = 0x8030E524u;
    ctx->downcount -= 13;
    // 8030E524: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E528:
    ctx->pc = 0x8030E528u;
    // 8030E528: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030E52C:
    ctx->pc = 0x8030E52Cu;
    // 8030E52C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030E530:
    ctx->pc = 0x8030E530u;
    // 8030E530: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030E534:
    ctx->pc = 0x8030E534u;
    // 8030E534: stw     r6, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E538:
    ctx->pc = 0x8030E538u;
    // 8030E538: stw     r6, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E53C:
    ctx->pc = 0x8030E53Cu;
    // 8030E53C: stw     r5, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E540:
    ctx->pc = 0x8030E540u;
    // 8030E540: stw     r5, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E544:
    ctx->pc = 0x8030E544u;
    // 8030E544: stw     r6, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E548:
    ctx->pc = 0x8030E548u;
    // 8030E548: stw     r5, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E54C:
    ctx->pc = 0x8030E54Cu;
    // 8030E54C: stw     r4, 372(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030E550:
    ctx->pc = 0x8030E550u;
    // 8030E550: stw     r0, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E554:
    ctx->pc = 0x8030E554u;
    // 8030E554: b       0x8030E5BC
    {
            goto label_8030E5BC;
    }

label_8030E558:
    ctx->pc = 0x8030E558u;
    ctx->downcount -= 13;
    // 8030E558: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E55C:
    ctx->pc = 0x8030E55Cu;
    // 8030E55C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030E560:
    ctx->pc = 0x8030E560u;
    // 8030E560: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030E564:
    ctx->pc = 0x8030E564u;
    // 8030E564: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030E568:
    ctx->pc = 0x8030E568u;
    // 8030E568: stw     r6, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E56C:
    ctx->pc = 0x8030E56Cu;
    // 8030E56C: stw     r5, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E570:
    ctx->pc = 0x8030E570u;
    // 8030E570: stw     r6, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E574:
    ctx->pc = 0x8030E574u;
    // 8030E574: stw     r5, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E578:
    ctx->pc = 0x8030E578u;
    // 8030E578: stw     r6, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E57C:
    ctx->pc = 0x8030E57Cu;
    // 8030E57C: stw     r4, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030E580:
    ctx->pc = 0x8030E580u;
    // 8030E580: stw     r5, 372(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E584:
    ctx->pc = 0x8030E584u;
    // 8030E584: stw     r0, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E588:
    ctx->pc = 0x8030E588u;
    // 8030E588: b       0x8030E5BC
    {
            goto label_8030E5BC;
    }

label_8030E58C:
    ctx->pc = 0x8030E58Cu;
    ctx->downcount -= 12;
    // 8030E58C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E590:
    ctx->pc = 0x8030E590u;
    // 8030E590: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8030E594:
    ctx->pc = 0x8030E594u;
    // 8030E594: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030E598:
    ctx->pc = 0x8030E598u;
    // 8030E598: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8030E59C:
    ctx->pc = 0x8030E59Cu;
    // 8030E59C: stw     r6, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E5A0:
    ctx->pc = 0x8030E5A0u;
    // 8030E5A0: stw     r5, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E5A4:
    ctx->pc = 0x8030E5A4u;
    // 8030E5A4: stw     r5, 312(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E5A8:
    ctx->pc = 0x8030E5A8u;
    // 8030E5A8: stw     r6, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E5AC:
    ctx->pc = 0x8030E5ACu;
    // 8030E5AC: stw     r6, 364(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(364);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E5B0:
    ctx->pc = 0x8030E5B0u;
    // 8030E5B0: stw     r4, 368(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(368);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030E5B4:
    ctx->pc = 0x8030E5B4u;
    // 8030E5B4: stw     r5, 372(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(372);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E5B8:
    ctx->pc = 0x8030E5B8u;
    // 8030E5B8: stw     r0, 376(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(376);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E5BC:
    ctx->pc = 0x8030E5BCu;
    ctx->downcount -= 7;
    // 8030E5BC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030E5C0:
    ctx->pc = 0x8030E5C0u;
    // 8030E5C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030E5C4:
    ctx->pc = 0x8030E5C4u;
    // 8030E5C4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8030E5C8:
    ctx->pc = 0x8030E5C8u;
    // 8030E5C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030E5CC:
    ctx->pc = 0x8030E5CCu;
    // 8030E5CC: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_8030E5D0:
    ctx->pc = 0x8030E5D0u;
    // 8030E5D0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030E5D4:
    ctx->pc = 0x8030E5D4u;
    // 8030E5D4: b       0x8030E624
    {
            goto label_8030E624;
    }

label_8030E5D8:
    ctx->downcount -= 4;
    // 8030E5D8: add   r7, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8030E5DC:
    ctx->pc = 0x8030E5DCu;
    // 8030E5DC: lwz     r0, 280(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E5E0:
    // 8030E5E0: cmpwi   r0, 0
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

label_8030E5E4:
    // 8030E5E4: bc    4, 2, 0x8030E604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E604;
        }
    }

label_8030E5E8:
    ctx->downcount -= 7;
    // 8030E5E8: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8030E5EC:
    // 8030E5EC: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8030E5F0:
    // 8030E5F0: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8030E5F4:
    // 8030E5F4: add   r7, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8030E5F8:
    // 8030E5F8: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_8030E5FC:
    ctx->pc = 0x8030E5FCu;
    // 8030E5FC: stw     r10, 348(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8030E600:
    // 8030E600: b       0x8030E61C
    {
            goto label_8030E61C;
    }

label_8030E604:
    ctx->downcount -= 6;
    // 8030E604: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_8030E608:
    // 8030E608: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_8030E60C:
    // 8030E60C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_8030E610:
    // 8030E610: add   r7, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_8030E614:
    // 8030E614: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8030E618:
    ctx->pc = 0x8030E618u;
    // 8030E618: stw     r10, 348(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_8030E61C:
    ctx->downcount -= 2;
    // 8030E61C: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_8030E620:
    // 8030E620: addi    r6, r6, 16
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(16);

label_8030E624:
    ctx->pc = 0x8030E624u;
    ctx->downcount -= 3;
    // 8030E624: lwz     r0, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E628:
    // 8030E628: cmpw    r10, r0
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

label_8030E62C:
    // 8030E62C: bc    12, 0, 0x8030E5D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E5D8u;
                return;
            }
            goto label_8030E5D8;
        }
    }

label_8030E630:
    ctx->pc = 0x8030E630u;
    ctx->downcount -= 2;
    // 8030E630: cmpwi   r0, 3
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

label_8030E634:
    ctx->pc = 0x8030E634u;
    // 8030E634: bc    4, 2, 0x8030E64C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E64C;
        }
    }

label_8030E638:
    ctx->pc = 0x8030E638u;
    ctx->downcount -= 2;
    // 8030E638: cmpwi   r8, 2
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E63C:
    ctx->pc = 0x8030E63Cu;
    // 8030E63C: bc    12, 2, 0x8030E64C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E64C;
        }
    }

label_8030E640:
    ctx->pc = 0x8030E640u;
    ctx->downcount -= 3;
    // 8030E640: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8030E644:
    ctx->pc = 0x8030E644u;
    // 8030E644: stw     r0, 352(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E648:
    ctx->pc = 0x8030E648u;
    // 8030E648: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E64C:
    ctx->pc = 0x8030E64Cu;
    ctx->downcount -= 2;
    // 8030E64C: cmpwi   r0, 3
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

label_8030E650:
    ctx->pc = 0x8030E650u;
    // 8030E650: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E654:
    ctx->pc = 0x8030E654u;
    ctx->downcount -= 2;
    // 8030E654: cmpwi   r9, 2
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E658:
    ctx->pc = 0x8030E658u;
    // 8030E658: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E65C:
    ctx->pc = 0x8030E65Cu;
    ctx->downcount -= 3;
    // 8030E65C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8030E660:
    ctx->pc = 0x8030E660u;
    // 8030E660: stw     r0, 360(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(360);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E664:
    ctx->pc = 0x8030E664u;
    // 8030E664: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E668:
    ctx->pc = 0x8030E668u;
    ctx->downcount -= 17;
    // 8030E668: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E66C:
    ctx->pc = 0x8030E66Cu;
    // 8030E66C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E670:
    ctx->pc = 0x8030E670u;
    // 8030E670: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E674:
    ctx->pc = 0x8030E674u;
    // 8030E674: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030E678:
    ctx->pc = 0x8030E678u;
    // 8030E678: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E67C:
    ctx->pc = 0x8030E67Cu;
    // 8030E67C: lwz     r4, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E680:
    ctx->pc = 0x8030E680u;
    // 8030E680: bl      0x8030E6D8
    {
            ctx->lr = 0x8030E684u;
            goto label_8030E6D8;
    }

label_8030E684:
    ctx->pc = 0x8030E684u;
    ctx->downcount -= 5;
    // 8030E684: lwz     r4, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E688:
    ctx->pc = 0x8030E688u;
    // 8030E688: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E68C:
    ctx->pc = 0x8030E68Cu;
    // 8030E68C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_8030E690:
    ctx->pc = 0x8030E690u;
    // 8030E690: cmplwi  r0, 0x0002
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

label_8030E694:
    ctx->pc = 0x8030E694u;
    // 8030E694: bc    12, 1, 0x8030E6A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E6A0;
        }
    }

label_8030E698:
    ctx->pc = 0x8030E698u;
    ctx->downcount -= 2;
    // 8030E698: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E69C:
    ctx->pc = 0x8030E69Cu;
    // 8030E69C: bl      0x8026FEDC
    {
            ctx->lr = 0x8030E6A0u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_8030E6A0:
    ctx->pc = 0x8030E6A0u;
    ctx->downcount -= 4;
    // 8030E6A0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E6A4:
    ctx->pc = 0x8030E6A4u;
    // 8030E6A4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E6A8:
    ctx->pc = 0x8030E6A8u;
    // 8030E6A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030E6AC:
    ctx->pc = 0x8030E6ACu;
    // 8030E6AC: bl      0x8026FEF0
    {
            ctx->lr = 0x8030E6B0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8030E6B0:
    ctx->pc = 0x8030E6B0u;
    ctx->downcount -= 3;
    // 8030E6B0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030E6B4:
    ctx->pc = 0x8030E6B4u;
    // 8030E6B4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030E6B8:
    ctx->pc = 0x8030E6B8u;
    // 8030E6B8: bl      0x8026F6AC
    {
            ctx->lr = 0x8030E6BCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8030E6BC:
    ctx->pc = 0x8030E6BCu;
    ctx->downcount -= 1;
    // 8030E6BC: bl      0x8025EC94
    {
            ctx->lr = 0x8030E6C0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_8030E6C0:
    ctx->pc = 0x8030E6C0u;
    ctx->downcount -= 17;
    // 8030E6C0: stw     r31, 344(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E6C4:
    ctx->pc = 0x8030E6C4u;
    // 8030E6C4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030E6C8:
    ctx->pc = 0x8030E6C8u;
    // 8030E6C8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E6CC:
    ctx->pc = 0x8030E6CCu;
    // 8030E6CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E6D0:
    ctx->pc = 0x8030E6D0u;
    // 8030E6D0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030E6D4:
    ctx->pc = 0x8030E6D4u;
    // 8030E6D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E6D8:
    ctx->pc = 0x8030E6D8u;
    ctx->downcount -= 2;
    // 8030E6D8: cmplwi  r4, 0x0002
    {
        u32 val_a = (u32)(ctx->gpr[4]);
        u32 val_b = (u32)(0x0002u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E6DC:
    ctx->pc = 0x8030E6DCu;
    // 8030E6DC: bc    12, 1, 0x8030E6E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E6E8;
        }
    }

label_8030E6E0:
    ctx->pc = 0x8030E6E0u;
    ctx->downcount -= 2;
    // 8030E6E0: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8030E6E4:
    ctx->pc = 0x8030E6E4u;
    // 8030E6E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E6E8:
    ctx->pc = 0x8030E6E8u;
    ctx->downcount -= 3;
    // 8030E6E8: addi    r0, r4, -3
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-3);

label_8030E6EC:
    ctx->pc = 0x8030E6ECu;
    // 8030E6EC: cmplwi  r0, 0x0002
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

label_8030E6F0:
    ctx->pc = 0x8030E6F0u;
    // 8030E6F0: bc    12, 1, 0x8030E708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E708;
        }
    }

label_8030E6F4:
    ctx->pc = 0x8030E6F4u;
    ctx->downcount -= 5;
    // 8030E6F4: addi    r0, r4, -5
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-5);

label_8030E6F8:
    ctx->pc = 0x8030E6F8u;
    // 8030E6F8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8030E6FC:
    ctx->pc = 0x8030E6FCu;
    // 8030E6FC: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_8030E700:
    ctx->pc = 0x8030E700u;
    // 8030E700: addi    r3, r3, 2
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(2);

label_8030E704:
    ctx->pc = 0x8030E704u;
    // 8030E704: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E708:
    ctx->pc = 0x8030E708u;
    ctx->downcount -= 2;
    // 8030E708: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030E70C:
    ctx->pc = 0x8030E70Cu;
    // 8030E70C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E710:
    ctx->pc = 0x8030E710u;
    ctx->downcount -= 6;
    // 8030E710: lwz     r5, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030E714:
    ctx->pc = 0x8030E714u;
    // 8030E714: lwz     r4, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E718:
    ctx->pc = 0x8030E718u;
    // 8030E718: cmpwi   r5, 3
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E71C:
    ctx->pc = 0x8030E71Cu;
    // 8030E71C: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_8030E720:
    ctx->pc = 0x8030E720u;
    // 8030E720: stw     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E724:
    ctx->pc = 0x8030E724u;
    // 8030E724: bc    4, 2, 0x8030E73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E73C;
        }
    }

label_8030E728:
    ctx->pc = 0x8030E728u;
    ctx->downcount -= 2;
    // 8030E728: cmpwi   r0, 6
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

label_8030E72C:
    ctx->pc = 0x8030E72Cu;
    // 8030E72C: bc    4, 2, 0x8030E73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030E73C;
        }
    }

label_8030E730:
    ctx->pc = 0x8030E730u;
    ctx->downcount -= 3;
    // 8030E730: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030E734:
    ctx->pc = 0x8030E734u;
    // 8030E734: stw     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E738:
    ctx->pc = 0x8030E738u;
    // 8030E738: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E73C:
    ctx->pc = 0x8030E73Cu;
    ctx->downcount -= 2;
    // 8030E73C: cmpwi   r5, 4
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E740:
    ctx->pc = 0x8030E740u;
    // 8030E740: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E744:
    ctx->pc = 0x8030E744u;
    ctx->downcount -= 3;
    // 8030E744: lwz     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E748:
    ctx->pc = 0x8030E748u;
    // 8030E748: cmpwi   r0, 3
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

label_8030E74C:
    ctx->pc = 0x8030E74Cu;
    // 8030E74C: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E750:
    ctx->pc = 0x8030E750u;
    ctx->downcount -= 3;
    // 8030E750: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030E754:
    ctx->pc = 0x8030E754u;
    // 8030E754: stw     r0, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E758:
    ctx->pc = 0x8030E758u;
    // 8030E758: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E75C:
    ctx->pc = 0x8030E75Cu;
    ctx->downcount -= 21;
    // 8030E75C: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E760:
    ctx->pc = 0x8030E760u;
    // 8030E760: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E764:
    ctx->pc = 0x8030E764u;
    // 8030E764: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E768:
    ctx->pc = 0x8030E768u;
    // 8030E768: stmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030E76C:
    ctx->pc = 0x8030E76Cu;
    // 8030E76C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_8030E770:
    ctx->pc = 0x8030E770u;
    // 8030E770: lis     r30, -32659
    ctx->gpr[30] = ((u32)(s32)(-32659) << 16);

label_8030E774:
    ctx->pc = 0x8030E774u;
    // 8030E774: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E778:
    ctx->pc = 0x8030E778u;
    // 8030E778: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030E77C:
    ctx->pc = 0x8030E77Cu;
    // 8030E77C: or   r29, r27, r27
    {
        ctx->gpr[29] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8030E780:
    ctx->pc = 0x8030E780u;
    // 8030E780: addi    r30, r30, -30720
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-30720);

label_8030E784:
    ctx->pc = 0x8030E784u;
    // 8030E784: b       0x8030E824
    {
            goto label_8030E824;
    }

label_8030E788:
    ctx->pc = 0x8030E788u;
    ctx->downcount -= 6;
    // 8030E788: stb     r29, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_8030E78C:
    // 8030E78C: add   r28, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8030E790:
    ctx->pc = 0x8030E790u;
    // 8030E790: lwz     r4, -27976(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27976);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E794:
    // 8030E794: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E798:
    // 8030E798: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E79C:
    // 8030E79C: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E7A0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E7A0:
    ctx->pc = 0x8030E7A0u;
    ctx->downcount -= 6;
    // 8030E7A0: lwz     r0, 284(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E7A4:
    // 8030E7A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E7A8:
    // 8030E7A8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E7AC:
    // 8030E7AC: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8030E7B0:
    ctx->pc = 0x8030E7B0u;
    // 8030E7B0: lwzx    r4, r30, r0
    {
        u32 ea = ctx->gpr[30] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E7B4:
    // 8030E7B4: bl      0x8000E864
    {
            ctx->lr = 0x8030E7B8u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E7B8:
    ctx->downcount -= 3;
    // 8030E7B8: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_8030E7BC:
    // 8030E7BC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E7C0:
    // 8030E7C0: bl      0x8026F968
    {
            ctx->lr = 0x8030E7C4u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8030E7C4:
    ctx->pc = 0x8030E7C4u;
    ctx->downcount -= 7;
    // 8030E7C4: lwz     r7, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_8030E7C8:
    // 8030E7C8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E7CC:
    // 8030E7CC: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_8030E7D0:
    // 8030E7D0: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_8030E7D4:
    // 8030E7D4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030E7D8:
    // 8030E7D8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030E7DC:
    // 8030E7DC: bl      0x8026F8C0
    {
            ctx->lr = 0x8030E7E0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030E7E0:
    ctx->downcount -= 3;
    // 8030E7E0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8030E7E4:
    // 8030E7E4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8030E7E8:
    // 8030E7E8: bl      0x8030E1D8
    {
            ctx->lr = 0x8030E7ECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E1D8u;
                return;
            }
            goto label_8030E1D8;
    }

label_8030E7EC:
    ctx->pc = 0x8030E7ECu;
    ctx->downcount -= 8;
    // 8030E7EC: lwz     r0, 284(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E7F0:
    // 8030E7F0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030E7F4:
    // 8030E7F4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8030E7F8:
    // 8030E7F8: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030E7FC:
    // 8030E7FC: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_8030E800:
    // 8030E800: addi    r28, r4, 4
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(4);

label_8030E804:
    // 8030E804: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030E808:
    // 8030E808: bl      0x8026FEF0
    {
            ctx->lr = 0x8030E80Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8030E80C:
    ctx->downcount -= 3;
    // 8030E80C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030E810:
    // 8030E810: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_8030E814:
    // 8030E814: bl      0x8026F6AC
    {
            ctx->lr = 0x8030E818u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8030E818:
    ctx->downcount -= 1;
    // 8030E818: bl      0x8025EC94
    {
            ctx->lr = 0x8030E81Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_8030E81C:
    ctx->downcount -= 2;
    // 8030E81C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_8030E820:
    // 8030E820: addi    r31, r31, 16
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(16);

label_8030E824:
    ctx->pc = 0x8030E824u;
    ctx->downcount -= 3;
    // 8030E824: lwz     r0, 336(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E828:
    // 8030E828: cmpw    r27, r0
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

label_8030E82C:
    // 8030E82C: bc    12, 0, 0x8030E788
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E788u;
                return;
            }
            goto label_8030E788;
        }
    }

label_8030E830:
    ctx->pc = 0x8030E830u;
    ctx->downcount -= 16;
    // 8030E830: lmw     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030E834:
    ctx->pc = 0x8030E834u;
    // 8030E834: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E838:
    ctx->pc = 0x8030E838u;
    // 8030E838: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E83C:
    ctx->pc = 0x8030E83Cu;
    // 8030E83C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_8030E840:
    ctx->pc = 0x8030E840u;
    // 8030E840: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E844:
    ctx->pc = 0x8030E844u;
    ctx->downcount -= 1;
    // 8030E844: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E848:
    ctx->downcount -= 5;
    // 8030E848: rlwinm r0, r4, 4, 0, 27
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_8030E84C:
    // 8030E84C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8030E850:
    ctx->pc = 0x8030E850u;
    // 8030E850: stw     r5, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030E854:
    ctx->pc = 0x8030E854u;
    // 8030E854: stw     r6, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030E858:
    ctx->pc = 0x8030E858u;
    // 8030E858: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E85C:
    ctx->pc = 0x8030E85Cu;
    ctx->downcount -= 24;
    // 8030E85C: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E860:
    ctx->pc = 0x8030E860u;
    // 8030E860: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E864:
    // 8030E864: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030E868:
    // 8030E868: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E86C:
    ctx->pc = 0x8030E86Cu;
    // 8030E86C: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E870:
    // 8030E870: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030E874:
    ctx->pc = 0x8030E874u;
    // 8030E874: stmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030E878:
    // 8030E878: lis     r27, -32665
    ctx->gpr[27] = ((u32)(s32)(-32665) << 16);

label_8030E87C:
    // 8030E87C: addi    r27, r27, 20104
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(20104);

label_8030E880:
    // 8030E880: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E884:
    // 8030E884: addi    r4, r27, 99
    ctx->gpr[4] = ctx->gpr[27] + (u32)(s32)(99);

label_8030E888:
    // 8030E888: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030E88C:
    // 8030E88C: addi    r5, r27, 116
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(116);

label_8030E890:
    // 8030E890: bl      0x802703A8
    {
            ctx->lr = 0x8030E894u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_8030E894:
    ctx->downcount -= 6;
    // 8030E894: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E898:
    // 8030E898: addi    r5, r27, 139
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(139);

label_8030E89C:
    // 8030E89C: addi    r6, r27, 142
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(142);

label_8030E8A0:
    // 8030E8A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030E8A4:
    // 8030E8A4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E8A8:
    // 8030E8A8: bl      0x8027035C
    {
            ctx->lr = 0x8030E8ACu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E8AC:
    ctx->downcount -= 6;
    // 8030E8AC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E8B0:
    // 8030E8B0: addi    r5, r27, 153
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(153);

label_8030E8B4:
    // 8030E8B4: addi    r6, r27, 163
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(163);

label_8030E8B8:
    // 8030E8B8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030E8BC:
    // 8030E8BC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E8C0:
    // 8030E8C0: bl      0x8027035C
    {
            ctx->lr = 0x8030E8C4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E8C4:
    ctx->downcount -= 6;
    // 8030E8C4: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E8C8:
    // 8030E8C8: addi    r5, r27, 177
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(177);

label_8030E8CC:
    // 8030E8CC: addi    r6, r27, 163
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(163);

label_8030E8D0:
    // 8030E8D0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8030E8D4:
    // 8030E8D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E8D8:
    // 8030E8D8: bl      0x8027035C
    {
            ctx->lr = 0x8030E8DCu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E8DC:
    ctx->downcount -= 6;
    // 8030E8DC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E8E0:
    // 8030E8E0: addi    r5, r27, 193
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(193);

label_8030E8E4:
    // 8030E8E4: addi    r6, r27, 163
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(163);

label_8030E8E8:
    // 8030E8E8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8030E8EC:
    // 8030E8EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E8F0:
    // 8030E8F0: bl      0x8027035C
    {
            ctx->lr = 0x8030E8F4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E8F4:
    ctx->downcount -= 8;
    // 8030E8F4: lis     r29, -32659
    ctx->gpr[29] = ((u32)(s32)(-32659) << 16);

label_8030E8F8:
    // 8030E8F8: lis     r27, -32659
    ctx->gpr[27] = ((u32)(s32)(-32659) << 16);

label_8030E8FC:
    // 8030E8FC: addi    r29, r29, -30704
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(-30704);

label_8030E900:
    // 8030E900: li      r26, 4
    ctx->gpr[26] = (u32)(s32)(4);

label_8030E904:
    // 8030E904: addi    r27, r27, -30720
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(-30720);

label_8030E908:
    // 8030E908: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_8030E90C:
    // 8030E90C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8030E910:
    // 8030E910: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030E914:
    ctx->downcount -= 2;
    // 8030E914: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_8030E918:
    // 8030E918: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030E91C:
    ctx->pc = 0x8030E91Cu;
    ctx->downcount -= 5;
    // 8030E91C: stb     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_8030E920:
    // 8030E920: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E924:
    ctx->pc = 0x8030E924u;
    // 8030E924: lwz     r4, -27972(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-27972);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E928:
    // 8030E928: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E92C:
    // 8030E92C: bl      0x8000E7F4
    {
            ctx->lr = 0x8030E930u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030E930:
    ctx->pc = 0x8030E930u;
    ctx->downcount -= 4;
    // 8030E930: lwzx    r4, r27, r31
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[31];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8030E934:
    // 8030E934: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E938:
    // 8030E938: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_8030E93C:
    // 8030E93C: bl      0x8000E864
    {
            ctx->lr = 0x8030E940u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_8030E940:
    ctx->pc = 0x8030E940u;
    ctx->downcount -= 6;
    // 8030E940: lwzx    r5, r29, r30
    {
        u32 ea = ctx->gpr[29] + ctx->gpr[30];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8030E944:
    // 8030E944: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8030E948:
    // 8030E948: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E94C:
    // 8030E94C: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_8030E950:
    // 8030E950: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E954:
    // 8030E954: bl      0x8027035C
    {
            ctx->lr = 0x8030E958u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E958:
    ctx->downcount -= 5;
    // 8030E958: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_8030E95C:
    // 8030E95C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8030E960:
    // 8030E960: cmpwi   r24, 4
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E964:
    // 8030E964: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_8030E968:
    // 8030E968: bc    12, 0, 0x8030E91C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E91Cu;
                return;
            }
            goto label_8030E91C;
        }
    }

label_8030E96C:
    ctx->downcount -= 4;
    // 8030E96C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_8030E970:
    // 8030E970: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8030E974:
    // 8030E974: cmpwi   r25, 4
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

label_8030E978:
    // 8030E978: bc    12, 0, 0x8030E914
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E914u;
                return;
            }
            goto label_8030E914;
        }
    }

label_8030E97C:
    ctx->downcount -= 8;
    // 8030E97C: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8030E980:
    // 8030E980: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E984:
    // 8030E984: addi    r6, r6, 20104
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20104);

label_8030E988:
    // 8030E988: li      r4, 20
    ctx->gpr[4] = (u32)(s32)(20);

label_8030E98C:
    // 8030E98C: addi    r5, r6, 209
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(209);

label_8030E990:
    // 8030E990: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030E994:
    // 8030E994: addi    r6, r6, 142
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(142);

label_8030E998:
    // 8030E998: bl      0x8027035C
    {
            ctx->lr = 0x8030E99Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8030E99C:
    ctx->downcount -= 4;
    // 8030E99C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_8030E9A0:
    // 8030E9A0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030E9A4:
    // 8030E9A4: li      r5, 20
    ctx->gpr[5] = (u32)(s32)(20);

label_8030E9A8:
    // 8030E9A8: bl      0x80270194
    {
            ctx->lr = 0x8030E9ACu;
            ctx->pc = 0x80270194u;
            return;
    }

label_8030E9AC:
    ctx->pc = 0x8030E9ACu;
    ctx->downcount -= 16;
    // 8030E9AC: lmw     r23, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        for (u32 r = 23; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030E9B0:
    ctx->pc = 0x8030E9B0u;
    // 8030E9B0: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E9B4:
    ctx->pc = 0x8030E9B4u;
    // 8030E9B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030E9B8:
    // 8030E9B8: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_8030E9BC:
    ctx->pc = 0x8030E9BCu;
    // 8030E9BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030E9C0:
    ctx->pc = 0x8030E9C0u;
    ctx->downcount -= 18;
    // 8030E9C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030E9C4:
    ctx->pc = 0x8030E9C4u;
    // 8030E9C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030E9C8:
    ctx->pc = 0x8030E9C8u;
    // 8030E9C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030E9CC:
    ctx->pc = 0x8030E9CCu;
    // 8030E9CC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030E9D0:
    // 8030E9D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030E9D4:
    // 8030E9D4: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030E9D8:
    ctx->pc = 0x8030E9D8u;
    // 8030E9D8: stw     r4, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030E9DC:
    // 8030E9DC: bl      0x80371554
    {
            ctx->lr = 0x8030E9E0u;
            ctx->pc = 0x80371554u;
            return;
    }

label_8030E9E0:
    ctx->pc = 0x8030E9E0u;
    ctx->downcount -= 3;
    // 8030E9E0: lwz     r0, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030E9E4:
    // 8030E9E4: cmpwi   r0, 3
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

label_8030E9E8:
    // 8030E9E8: bc    4, 2, 0x8030EA08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EA08;
        }
    }

label_8030E9EC:
    ctx->downcount -= 2;
    // 8030E9EC: cmpwi   r31, 3
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030E9F0:
    // 8030E9F0: bc    12, 0, 0x8030E9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030E9FC;
        }
    }

label_8030E9F4:
    ctx->pc = 0x8030E9F4u;
    ctx->downcount -= 2;
    // 8030E9F4: stw     r31, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030E9F8:
    // 8030E9F8: b       0x8030EA28
    {
            goto label_8030EA28;
    }

label_8030E9FC:
    ctx->downcount -= 3;
    // 8030E9FC: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030EA00:
    ctx->pc = 0x8030EA00u;
    // 8030EA00: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EA04:
    // 8030EA04: b       0x8030EA28
    {
            goto label_8030EA28;
    }

label_8030EA08:
    ctx->downcount -= 2;
    // 8030EA08: cmpwi   r0, 4
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

label_8030EA0C:
    // 8030EA0C: bc    4, 2, 0x8030EA28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EA28;
        }
    }

label_8030EA10:
    ctx->downcount -= 2;
    // 8030EA10: cmplwi  r31, 0x0002
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

label_8030EA14:
    // 8030EA14: bc    12, 1, 0x8030EA20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EA20;
        }
    }

label_8030EA18:
    ctx->pc = 0x8030EA18u;
    ctx->downcount -= 2;
    // 8030EA18: stw     r31, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030EA1C:
    // 8030EA1C: b       0x8030EA28
    {
            goto label_8030EA28;
    }

label_8030EA20:
    ctx->downcount -= 2;
    // 8030EA20: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030EA24:
    ctx->pc = 0x8030EA24u;
    // 8030EA24: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EA28:
    ctx->downcount -= 2;
    // 8030EA28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EA2C:
    // 8030EA2C: bl      0x8030E3D8
    {
            ctx->lr = 0x8030EA30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E3D8u;
                return;
            }
            goto label_8030E3D8;
    }

label_8030EA30:
    ctx->downcount -= 2;
    // 8030EA30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EA34:
    // 8030EA34: bl      0x8030E75C
    {
            ctx->lr = 0x8030EA38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E75Cu;
                return;
            }
            goto label_8030E75C;
    }

label_8030EA38:
    ctx->pc = 0x8030EA38u;
    ctx->downcount -= 16;
    // 8030EA38: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EA3C:
    ctx->pc = 0x8030EA3Cu;
    // 8030EA3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EA40:
    ctx->pc = 0x8030EA40u;
    // 8030EA40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EA44:
    // 8030EA44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EA48:
    ctx->pc = 0x8030EA48u;
    // 8030EA48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EA4C:
    ctx->pc = 0x8030EA4Cu;
    ctx->downcount -= 18;
    // 8030EA4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EA50:
    ctx->pc = 0x8030EA50u;
    // 8030EA50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EA54:
    ctx->pc = 0x8030EA54u;
    // 8030EA54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EA58:
    ctx->pc = 0x8030EA58u;
    // 8030EA58: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EA5C:
    // 8030EA5C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EA60:
    // 8030EA60: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030EA64:
    ctx->pc = 0x8030EA64u;
    // 8030EA64: stw     r4, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030EA68:
    // 8030EA68: bl      0x80371554
    {
            ctx->lr = 0x8030EA6Cu;
            ctx->pc = 0x80371554u;
            return;
    }

label_8030EA6C:
    ctx->pc = 0x8030EA6Cu;
    ctx->downcount -= 3;
    // 8030EA6C: lwz     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EA70:
    // 8030EA70: cmpwi   r0, -1
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030EA74:
    // 8030EA74: bc    4, 2, 0x8030EAA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EAA4;
        }
    }

label_8030EA78:
    ctx->pc = 0x8030EA78u;
    ctx->downcount -= 3;
    // 8030EA78: lwz     r0, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EA7C:
    // 8030EA7C: cmpwi   r0, 3
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

label_8030EA80:
    // 8030EA80: bc    4, 2, 0x8030EA90
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EA90;
        }
    }

label_8030EA84:
    ctx->downcount -= 3;
    // 8030EA84: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030EA88:
    ctx->pc = 0x8030EA88u;
    // 8030EA88: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EA8C:
    // 8030EA8C: b       0x8030EAF0
    {
            goto label_8030EAF0;
    }

label_8030EA90:
    ctx->downcount -= 2;
    // 8030EA90: cmpwi   r0, 4
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

label_8030EA94:
    // 8030EA94: bc    4, 2, 0x8030EAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EAF0;
        }
    }

label_8030EA98:
    ctx->downcount -= 3;
    // 8030EA98: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030EA9C:
    ctx->pc = 0x8030EA9Cu;
    // 8030EA9C: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EAA0:
    // 8030EAA0: b       0x8030EAF0
    {
            goto label_8030EAF0;
    }

label_8030EAA4:
    ctx->pc = 0x8030EAA4u;
    ctx->downcount -= 3;
    // 8030EAA4: lwz     r3, 336(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(336);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030EAA8:
    // 8030EAA8: cmpwi   r3, 3
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030EAAC:
    // 8030EAAC: bc    4, 2, 0x8030EAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EAC4;
        }
    }

label_8030EAB0:
    ctx->downcount -= 2;
    // 8030EAB0: cmpwi   r0, 3
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

label_8030EAB4:
    // 8030EAB4: bc    4, 0, 0x8030EAC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EAC4;
        }
    }

label_8030EAB8:
    ctx->downcount -= 3;
    // 8030EAB8: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_8030EABC:
    ctx->pc = 0x8030EABCu;
    // 8030EABC: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EAC0:
    // 8030EAC0: b       0x8030EAF0
    {
            goto label_8030EAF0;
    }

label_8030EAC4:
    ctx->downcount -= 2;
    // 8030EAC4: cmpwi   r3, 4
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030EAC8:
    // 8030EAC8: bc    4, 2, 0x8030EAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EAE0;
        }
    }

label_8030EACC:
    ctx->downcount -= 2;
    // 8030EACC: cmpwi   r0, 3
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

label_8030EAD0:
    // 8030EAD0: bc    12, 0, 0x8030EAE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EAE0;
        }
    }

label_8030EAD4:
    ctx->downcount -= 3;
    // 8030EAD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030EAD8:
    ctx->pc = 0x8030EAD8u;
    // 8030EAD8: stw     r0, 340(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EADC:
    // 8030EADC: b       0x8030EAF0
    {
            goto label_8030EAF0;
    }

label_8030EAE0:
    ctx->downcount -= 2;
    // 8030EAE0: cmpwi   r31, 0
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

label_8030EAE4:
    // 8030EAE4: bc    12, 2, 0x8030EAF0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EAF0;
        }
    }

label_8030EAE8:
    ctx->downcount -= 2;
    // 8030EAE8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EAEC:
    // 8030EAEC: bl      0x8030E710
    {
            ctx->lr = 0x8030EAF0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E710u;
                return;
            }
            goto label_8030E710;
    }

label_8030EAF0:
    ctx->downcount -= 2;
    // 8030EAF0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EAF4:
    // 8030EAF4: bl      0x8030E3D8
    {
            ctx->lr = 0x8030EAF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E3D8u;
                return;
            }
            goto label_8030E3D8;
    }

label_8030EAF8:
    ctx->downcount -= 2;
    // 8030EAF8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EAFC:
    // 8030EAFC: bl      0x8030E75C
    {
            ctx->lr = 0x8030EB00u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E75Cu;
                return;
            }
            goto label_8030E75C;
    }

label_8030EB00:
    ctx->pc = 0x8030EB00u;
    ctx->downcount -= 16;
    // 8030EB00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EB04:
    ctx->pc = 0x8030EB04u;
    // 8030EB04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EB08:
    ctx->pc = 0x8030EB08u;
    // 8030EB08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EB0C:
    // 8030EB0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EB10:
    ctx->pc = 0x8030EB10u;
    // 8030EB10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EB14:
    ctx->pc = 0x8030EB14u;
    ctx->downcount -= 8;
    // 8030EB14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EB18:
    ctx->pc = 0x8030EB18u;
    // 8030EB18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EB1C:
    // 8030EB1C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EB20:
    // 8030EB20: li      r4, 21
    ctx->gpr[4] = (u32)(s32)(21);

label_8030EB24:
    ctx->pc = 0x8030EB24u;
    // 8030EB24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EB28:
    ctx->pc = 0x8030EB28u;
    // 8030EB28: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030EB2C:
    // 8030EB2C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EB30:
    // 8030EB30: bl      0x803715C0
    {
            ctx->lr = 0x8030EB34u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_8030EB34:
    ctx->downcount -= 15;
    // 8030EB34: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_8030EB38:
    // 8030EB38: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_8030EB3C:
    // 8030EB3C: addi    r5, r5, -30676
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-30676);

label_8030EB40:
    ctx->pc = 0x8030EB40u;
    // 8030EB40: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030EB44:
    // 8030EB44: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_8030EB48:
    // 8030EB48: addi    r3, r3, 20104
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20104);

label_8030EB4C:
    // 8030EB4C: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_8030EB50:
    // 8030EB50: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_8030EB54:
    ctx->pc = 0x8030EB54u;
    // 8030EB54: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030EB58:
    // 8030EB58: addi    r4, r3, 213
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(213);

label_8030EB5C:
    // 8030EB5C: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_8030EB60:
    // 8030EB60: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8030EB64:
    ctx->pc = 0x8030EB64u;
    // 8030EB64: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030EB68:
    ctx->pc = 0x8030EB68u;
    // 8030EB68: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EB6C:
    // 8030EB6C: bl      0x8000E7F4
    {
            ctx->lr = 0x8030EB70u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030EB70:
    ctx->downcount -= 2;
    // 8030EB70: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030EB74:
    // 8030EB74: bl      0x80270188
    {
            ctx->lr = 0x8030EB78u;
            ctx->pc = 0x80270188u;
            return;
    }

label_8030EB78:
    ctx->downcount -= 5;
    // 8030EB78: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8030EB7C:
    // 8030EB7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8030EB80:
    // 8030EB80: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030EB84:
    ctx->pc = 0x8030EB84u;
    // 8030EB84: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8030EB88:
    loop_8030EB88(ctx);
    if (ctx->pc == 0x8030EB9Cu) goto label_8030EB9C;
    return;
label_8030EB8C:
    // 8030EB8C: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8030EB90:
    ctx->pc = 0x8030EB90u;
    // 8030EB90: stw     r5, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030EB94:
    ctx->pc = 0x8030EB94u;
    // 8030EB94: stw     r5, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030EB98:
    // 8030EB98: bc    16, 0, 0x8030EB88
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EB88u;
                return;
            }
            goto label_8030EB88;
        }
    }

label_8030EB9C:
    ctx->downcount -= 12;
    // 8030EB9C: li      r0, -1
    ctx->gpr[0] = (u32)(s32)(-1);

label_8030EBA0:
    // 8030EBA0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8030EBA4:
    ctx->pc = 0x8030EBA4u;
    // 8030EBA4: stw     r3, 336(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030EBA8:
    // 8030EBA8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030EBAC:
    ctx->pc = 0x8030EBACu;
    // 8030EBAC: stw     r0, 340(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(340);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EBB0:
    ctx->pc = 0x8030EBB0u;
    // 8030EBB0: stw     r0, 344(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(344);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EBB4:
    ctx->pc = 0x8030EBB4u;
    // 8030EBB4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030EBB8:
    ctx->pc = 0x8030EBB8u;
    // 8030EBB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EBBC:
    ctx->pc = 0x8030EBBCu;
    // 8030EBBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EBC0:
    // 8030EBC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EBC4:
    ctx->pc = 0x8030EBC4u;
    // 8030EBC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EBC8:
    ctx->pc = 0x8030EBC8u;
    ctx->downcount -= 1;
    // 8030EBC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EBCC:
    ctx->pc = 0x8030EBCCu;
    ctx->downcount -= 18;
    // 8030EBCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EBD0:
    ctx->pc = 0x8030EBD0u;
    // 8030EBD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EBD4:
    // 8030EBD4: cmpwi   r3, 0
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

label_8030EBD8:
    ctx->pc = 0x8030EBD8u;
    // 8030EBD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EBDC:
    ctx->pc = 0x8030EBDCu;
    // 8030EBDC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EBE0:
    // 8030EBE0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EBE4:
    // 8030EBE4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EBE8:
    // 8030EBE8: bc    12, 2, 0x8030EC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EC1C;
        }
    }

label_8030EBEC:
    ctx->downcount -= 1;
    // 8030EBEC: bc    12, 2, 0x8030EC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EC0C;
        }
    }

label_8030EBF0:
    ctx->downcount -= 1;
    // 8030EBF0: bc    12, 2, 0x8030EC0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EC0C;
        }
    }

label_8030EBF4:
    ctx->downcount -= 3;
    // 8030EBF4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030EBF8:
    // 8030EBF8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030EBFC:
    // 8030EBFC: bl      0x801F5C24
    {
            ctx->lr = 0x8030EC00u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8030EC00:
    ctx->downcount -= 3;
    // 8030EC00: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EC04:
    // 8030EC04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030EC08:
    // 8030EC08: bl      0x801F9C70
    {
            ctx->lr = 0x8030EC0Cu;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_8030EC0C:
    ctx->downcount -= 2;
    // 8030EC0C: cmpwi   r31, 0
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

label_8030EC10:
    // 8030EC10: bc    4, 1, 0x8030EC1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EC1C;
        }
    }

label_8030EC14:
    ctx->downcount -= 2;
    // 8030EC14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EC18:
    // 8030EC18: bl      0x801C1C90
    {
            ctx->lr = 0x8030EC1Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030EC1C:
    ctx->downcount -= 17;
    // 8030EC1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EC20:
    ctx->pc = 0x8030EC20u;
    // 8030EC20: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EC24:
    ctx->pc = 0x8030EC24u;
    // 8030EC24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EC28:
    ctx->pc = 0x8030EC28u;
    // 8030EC28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EC2C:
    // 8030EC2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EC30:
    ctx->pc = 0x8030EC30u;
    // 8030EC30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EC34:
    ctx->downcount -= 2;
    // 8030EC34: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030EC38:
    // 8030EC38: b       0x8030EBCC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EBCCu;
                return;
            }
            goto label_8030EBCC;
    }

label_8030EC3C:
    ctx->downcount -= 2;
    // 8030EC3C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030EC40:
    // 8030EC40: b       0x8030E844
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030E844u;
                return;
            }
            goto label_8030E844;
    }

label_8030EC44:
    ctx->downcount -= 2;
    // 8030EC44: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030EC48:
    // 8030EC48: b       0x8030EBCC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EBCCu;
                return;
            }
            goto label_8030EBCC;
    }

label_8030EC4C:
    ctx->pc = 0x8030EC4Cu;
    ctx->downcount -= 19;
    // 8030EC4C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EC50:
    ctx->pc = 0x8030EC50u;
    // 8030EC50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EC54:
    ctx->pc = 0x8030EC54u;
    // 8030EC54: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EC58:
    ctx->pc = 0x8030EC58u;
    // 8030EC58: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EC5C:
    // 8030EC5C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EC60:
    // 8030EC60: li      r30, 50
    ctx->gpr[30] = (u32)(s32)(50);

label_8030EC64:
    ctx->pc = 0x8030EC64u;
    // 8030EC64: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EC68:
    // 8030EC68: cmpwi   r0, 0
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

label_8030EC6C:
    // 8030EC6C: bc    4, 2, 0x8030EC78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EC78;
        }
    }

label_8030EC70:
    ctx->downcount -= 2;
    // 8030EC70: li      r30, 50
    ctx->gpr[30] = (u32)(s32)(50);

label_8030EC74:
    // 8030EC74: b       0x8030EC84
    {
            goto label_8030EC84;
    }

label_8030EC78:
    ctx->downcount -= 2;
    // 8030EC78: cmpwi   r0, 1
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

label_8030EC7C:
    // 8030EC7C: bc    4, 2, 0x8030EC84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EC84;
        }
    }

label_8030EC80:
    ctx->downcount -= 1;
    // 8030EC80: li      r30, 51
    ctx->gpr[30] = (u32)(s32)(51);

label_8030EC84:
    ctx->downcount -= 4;
    // 8030EC84: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030EC88:
    // 8030EC88: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030EC8C:
    // 8030EC8C: addi    r4, r31, 20336
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(20336);

label_8030EC90:
    // 8030EC90: bl      0x8026F968
    {
            ctx->lr = 0x8030EC94u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8030EC94:
    ctx->downcount -= 6;
    // 8030EC94: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EC98:
    // 8030EC98: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EC9C:
    // 8030EC9C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030ECA0:
    // 8030ECA0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030ECA4:
    // 8030ECA4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030ECA8:
    // 8030ECA8: bl      0x8026F8C0
    {
            ctx->lr = 0x8030ECACu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030ECAC:
    ctx->downcount -= 4;
    // 8030ECAC: addi    r4, r31, 20336
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(20336);

label_8030ECB0:
    // 8030ECB0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030ECB4:
    // 8030ECB4: addi    r4, r4, 10
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10);

label_8030ECB8:
    // 8030ECB8: bl      0x8026F968
    {
            ctx->lr = 0x8030ECBCu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8030ECBC:
    ctx->downcount -= 6;
    // 8030ECBC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030ECC0:
    // 8030ECC0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030ECC4:
    // 8030ECC4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8030ECC8:
    // 8030ECC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8030ECCC:
    // 8030ECCC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030ECD0:
    // 8030ECD0: bl      0x8026F8C0
    {
            ctx->lr = 0x8030ECD4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8030ECD4:
    ctx->pc = 0x8030ECD4u;
    ctx->downcount -= 16;
    // 8030ECD4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030ECD8:
    ctx->pc = 0x8030ECD8u;
    // 8030ECD8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030ECDC:
    ctx->pc = 0x8030ECDCu;
    // 8030ECDC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030ECE0:
    // 8030ECE0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030ECE4:
    ctx->pc = 0x8030ECE4u;
    // 8030ECE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030ECE8:
    ctx->pc = 0x8030ECE8u;
    ctx->downcount -= 8;
    // 8030ECE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030ECEC:
    ctx->pc = 0x8030ECECu;
    // 8030ECEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030ECF0:
    // 8030ECF0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030ECF4:
    ctx->pc = 0x8030ECF4u;
    // 8030ECF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030ECF8:
    ctx->pc = 0x8030ECF8u;
    // 8030ECF8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030ECFC:
    // 8030ECFC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030ED00:
    // 8030ED00: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030ED04:
    // 8030ED04: bl      0x8026F5F4
    {
            ctx->lr = 0x8030ED08u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8030ED08:
    ctx->pc = 0x8030ED08u;
    ctx->downcount -= 4;
    // 8030ED08: lwz     r0, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030ED0C:
    // 8030ED0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030ED10:
    // 8030ED10: cmpwi   r0, 0
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

label_8030ED14:
    // 8030ED14: bc    12, 2, 0x8030ED24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030ED24;
        }
    }

label_8030ED18:
    ctx->downcount -= 2;
    // 8030ED18: cmpwi   r0, 1
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

label_8030ED1C:
    // 8030ED1C: bc    12, 2, 0x8030ED38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030ED38;
        }
    }

label_8030ED20:
    ctx->downcount -= 1;
    // 8030ED20: b       0x8030ED50
    {
            goto label_8030ED50;
    }

label_8030ED24:
    ctx->downcount -= 4;
    // 8030ED24: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030ED28:
    // 8030ED28: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_8030ED2C:
    // 8030ED2C: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030ED30:
    // 8030ED30: bl      0x802B735C
    {
            ctx->lr = 0x8030ED34u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030ED34:
    ctx->downcount -= 1;
    // 8030ED34: b       0x8030ED50
    {
            goto label_8030ED50;
    }

label_8030ED38:
    ctx->downcount -= 2;
    // 8030ED38: li      r3, 142
    ctx->gpr[3] = (u32)(s32)(142);

label_8030ED3C:
    // 8030ED3C: bl      0x802B73BC
    {
            ctx->lr = 0x8030ED40u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8030ED40:
    ctx->downcount -= 4;
    // 8030ED40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030ED44:
    // 8030ED44: li      r3, 143
    ctx->gpr[3] = (u32)(s32)(143);

label_8030ED48:
    // 8030ED48: slw   r4, r0, r31
    {
        u32 sh = ctx->gpr[31] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8030ED4C:
    // 8030ED4C: bl      0x802B735C
    {
            ctx->lr = 0x8030ED50u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8030ED50:
    ctx->pc = 0x8030ED50u;
    ctx->downcount -= 6;
    // 8030ED50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030ED54:
    ctx->pc = 0x8030ED54u;
    // 8030ED54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030ED58:
    ctx->pc = 0x8030ED58u;
    // 8030ED58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030ED5C:
    // 8030ED5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030ED60:
    ctx->pc = 0x8030ED60u;
    // 8030ED60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030ED64:
    ctx->pc = 0x8030ED64u;
    ctx->downcount -= 4;
    // 8030ED64: lfs     f2, -11904(r2)
    if (!ppc_fp_available_inline(ctx, 0x8030ED64u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11904);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8030ED68:
    // 8030ED68: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_8030ED6C:
    // 8030ED6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030ED70:
    // 8030ED70: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_8030ED74:
    ctx->downcount -= 1;
    // 8030ED74: b       0x8030EC4C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EC4Cu;
                return;
            }
            goto label_8030EC4C;
    }

label_8030ED78:
    ctx->pc = 0x8030ED78u;
    ctx->downcount -= 25;
    // 8030ED78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030ED7C:
    ctx->pc = 0x8030ED7Cu;
    // 8030ED7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030ED80:
    // 8030ED80: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8030ED84:
    // 8030ED84: or   r9, r5, r5
    {
        ctx->gpr[9] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030ED88:
    ctx->pc = 0x8030ED88u;
    // 8030ED88: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030ED8C:
    // 8030ED8C: addi    r6, r6, 20336
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(20336);

label_8030ED90:
    // 8030ED90: addi    r5, r6, 22
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(22);

label_8030ED94:
    // 8030ED94: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8030ED98:
    ctx->pc = 0x8030ED98u;
    // 8030ED98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030ED9C:
    // 8030ED9C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EDA0:
    // 8030EDA0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EDA4:
    // 8030EDA4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030EDA8:
    // 8030EDA8: addi    r6, r6, 39
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(39);

label_8030EDAC:
    // 8030EDAC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8030EDB0:
    // 8030EDB0: bl      0x8036B3A4
    {
            ctx->lr = 0x8030EDB4u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_8030EDB4:
    ctx->downcount -= 27;
    // 8030EDB4: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_8030EDB8:
    ctx->pc = 0x8030EDB8u;
    // 8030EDB8: stw     r31, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030EDBC:
    // 8030EDBC: addi    r6, r6, -30384
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-30384);

label_8030EDC0:
    // 8030EDC0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EDC4:
    // 8030EDC4: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_8030EDC8:
    ctx->pc = 0x8030EDC8u;
    // 8030EDC8: stw     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030EDCC:
    // 8030EDCC: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8030EDD0:
    // 8030EDD0: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_8030EDD4:
    ctx->pc = 0x8030EDD4u;
    // 8030EDD4: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030EDD8:
    ctx->pc = 0x8030EDD8u;
    // 8030EDD8: stw     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8030EDDC:
    ctx->pc = 0x8030EDDCu;
    // 8030EDDC: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EDE0:
    ctx->pc = 0x8030EDE0u;
    // 8030EDE0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EDE4:
    ctx->pc = 0x8030EDE4u;
    // 8030EDE4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EDE8:
    ctx->pc = 0x8030EDE8u;
    // 8030EDE8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EDEC:
    // 8030EDEC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EDF0:
    ctx->pc = 0x8030EDF0u;
    // 8030EDF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EDF4:
    ctx->pc = 0x8030EDF4u;
    ctx->downcount -= 18;
    // 8030EDF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EDF8:
    ctx->pc = 0x8030EDF8u;
    // 8030EDF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EDFC:
    // 8030EDFC: cmpwi   r3, 0
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

label_8030EE00:
    ctx->pc = 0x8030EE00u;
    // 8030EE00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EE04:
    ctx->pc = 0x8030EE04u;
    // 8030EE04: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EE08:
    // 8030EE08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EE0C:
    // 8030EE0C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EE10:
    // 8030EE10: bc    12, 2, 0x8030EE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EE30;
        }
    }

label_8030EE14:
    ctx->downcount -= 1;
    // 8030EE14: bc    12, 2, 0x8030EE20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030EE20;
        }
    }

label_8030EE18:
    ctx->downcount -= 2;
    // 8030EE18: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030EE1C:
    // 8030EE1C: bl      0x801F5A74
    {
            ctx->lr = 0x8030EE20u;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_8030EE20:
    ctx->downcount -= 2;
    // 8030EE20: cmpwi   r31, 0
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

label_8030EE24:
    // 8030EE24: bc    4, 1, 0x8030EE30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030EE30;
        }
    }

label_8030EE28:
    ctx->downcount -= 2;
    // 8030EE28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EE2C:
    // 8030EE2C: bl      0x801C1C90
    {
            ctx->lr = 0x8030EE30u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030EE30:
    ctx->downcount -= 17;
    // 8030EE30: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EE34:
    ctx->pc = 0x8030EE34u;
    // 8030EE34: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EE38:
    ctx->pc = 0x8030EE38u;
    // 8030EE38: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EE3C:
    ctx->pc = 0x8030EE3Cu;
    // 8030EE3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EE40:
    // 8030EE40: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EE44:
    ctx->pc = 0x8030EE44u;
    // 8030EE44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EE48:
    ctx->downcount -= 2;
    // 8030EE48: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030EE4C:
    // 8030EE4C: b       0x8030EDF4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EDF4u;
                return;
            }
            goto label_8030EDF4;
    }

label_8030EE50:
    ctx->downcount -= 2;
    // 8030EE50: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030EE54:
    // 8030EE54: b       0x8030ECE8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030ECE8u;
                return;
            }
            goto label_8030ECE8;
    }

label_8030EE58:
    ctx->downcount -= 2;
    // 8030EE58: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030EE5C:
    // 8030EE5C: b       0x8030ED64
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030ED64u;
                return;
            }
            goto label_8030ED64;
    }

label_8030EE60:
    ctx->downcount -= 2;
    // 8030EE60: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030EE64:
    // 8030EE64: b       0x8030EDF4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EDF4u;
                return;
            }
            goto label_8030EDF4;
    }

label_8030EE68:
    ctx->pc = 0x8030EE68u;
    ctx->downcount -= 4;
    // 8030EE68: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030EE6C:
    ctx->pc = 0x8030EE6Cu;
    // 8030EE6C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030EE70:
    ctx->pc = 0x8030EE70u;
    // 8030EE70: addi    r4, r4, 20408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20408);

label_8030EE74:
    ctx->pc = 0x8030EE74u;
    // 8030EE74: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030EE78:
    ctx->pc = 0x8030EE78u;
    ctx->downcount -= 5;
    // 8030EE78: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030EE7C:
    ctx->pc = 0x8030EE7Cu;
    // 8030EE7C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8030EE80:
    ctx->pc = 0x8030EE80u;
    // 8030EE80: addi    r4, r4, 20408
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20408);

label_8030EE84:
    ctx->pc = 0x8030EE84u;
    // 8030EE84: addi    r4, r4, 12
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(12);

label_8030EE88:
    ctx->pc = 0x8030EE88u;
    // 8030EE88: b       0x8026F970
    {
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030EE8C:
    ctx->pc = 0x8030EE8Cu;
    ctx->downcount -= 7;
    // 8030EE8C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EE90:
    ctx->pc = 0x8030EE90u;
    // 8030EE90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EE94:
    ctx->pc = 0x8030EE94u;
    // 8030EE94: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EE98:
    ctx->pc = 0x8030EE98u;
    // 8030EE98: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030EE9C:
    ctx->pc = 0x8030EE9Cu;
    // 8030EE9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EEA0:
    ctx->pc = 0x8030EEA0u;
    // 8030EEA0: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030EEA4:
    ctx->pc = 0x8030EEA4u;
    // 8030EEA4: bl      0x8026F6CC
    {
            ctx->lr = 0x8030EEA8u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030EEA8:
    ctx->pc = 0x8030EEA8u;
    ctx->downcount -= 6;
    // 8030EEA8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030EEAC:
    ctx->pc = 0x8030EEACu;
    // 8030EEAC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EEB0:
    ctx->pc = 0x8030EEB0u;
    // 8030EEB0: addi    r5, r5, 20408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20408);

label_8030EEB4:
    ctx->pc = 0x8030EEB4u;
    // 8030EEB4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030EEB8:
    ctx->pc = 0x8030EEB8u;
    // 8030EEB8: addi    r5, r5, 24
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(24);

label_8030EEBC:
    ctx->pc = 0x8030EEBCu;
    // 8030EEBC: bl      0x8025D62C
    {
            ctx->lr = 0x8030EEC0u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030EEC0:
    ctx->pc = 0x8030EEC0u;
    ctx->downcount -= 12;
    // 8030EEC0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030EEC4:
    ctx->pc = 0x8030EEC4u;
    // 8030EEC4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EEC8:
    ctx->pc = 0x8030EEC8u;
    // 8030EEC8: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EECC:
    ctx->pc = 0x8030EECCu;
    // 8030EECC: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030EED0:
    ctx->pc = 0x8030EED0u;
    // 8030EED0: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EED4:
    ctx->pc = 0x8030EED4u;
    // 8030EED4: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EED8:
    ctx->pc = 0x8030EED8u;
    // 8030EED8: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030EEDC:
    ctx->pc = 0x8030EEDCu;
    // 8030EEDC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EEE0:
    ctx->pc = 0x8030EEE0u;
    // 8030EEE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EEE4:
    ctx->pc = 0x8030EEE4u;
    // 8030EEE4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030EEE8:
    ctx->pc = 0x8030EEE8u;
    // 8030EEE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EEEC:
    ctx->pc = 0x8030EEECu;
    ctx->downcount -= 7;
    // 8030EEEC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EEF0:
    ctx->pc = 0x8030EEF0u;
    // 8030EEF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EEF4:
    ctx->pc = 0x8030EEF4u;
    // 8030EEF4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EEF8:
    ctx->pc = 0x8030EEF8u;
    // 8030EEF8: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030EEFC:
    ctx->pc = 0x8030EEFCu;
    // 8030EEFC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EF00:
    ctx->pc = 0x8030EF00u;
    // 8030EF00: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8030EF04:
    ctx->pc = 0x8030EF04u;
    // 8030EF04: bl      0x8026F6CC
    {
            ctx->lr = 0x8030EF08u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8030EF08:
    ctx->pc = 0x8030EF08u;
    ctx->downcount -= 6;
    // 8030EF08: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030EF0C:
    ctx->pc = 0x8030EF0Cu;
    // 8030EF0C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EF10:
    ctx->pc = 0x8030EF10u;
    // 8030EF10: addi    r5, r5, 20408
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20408);

label_8030EF14:
    ctx->pc = 0x8030EF14u;
    // 8030EF14: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030EF18:
    ctx->pc = 0x8030EF18u;
    // 8030EF18: addi    r5, r5, 34
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(34);

label_8030EF1C:
    ctx->pc = 0x8030EF1Cu;
    // 8030EF1C: bl      0x8025D62C
    {
            ctx->lr = 0x8030EF20u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_8030EF20:
    ctx->pc = 0x8030EF20u;
    ctx->downcount -= 12;
    // 8030EF20: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8030EF24:
    ctx->pc = 0x8030EF24u;
    // 8030EF24: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EF28:
    ctx->pc = 0x8030EF28u;
    // 8030EF28: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EF2C:
    ctx->pc = 0x8030EF2Cu;
    // 8030EF2C: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030EF30:
    ctx->pc = 0x8030EF30u;
    // 8030EF30: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EF34:
    ctx->pc = 0x8030EF34u;
    // 8030EF34: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EF38:
    ctx->pc = 0x8030EF38u;
    // 8030EF38: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030EF3C:
    ctx->pc = 0x8030EF3Cu;
    // 8030EF3C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EF40:
    ctx->pc = 0x8030EF40u;
    // 8030EF40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EF44:
    ctx->pc = 0x8030EF44u;
    // 8030EF44: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030EF48:
    ctx->pc = 0x8030EF48u;
    // 8030EF48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EF4C:
    ctx->pc = 0x8030EF4Cu;
    ctx->downcount -= 23;
    // 8030EF4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EF50:
    ctx->pc = 0x8030EF50u;
    // 8030EF50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EF54:
    ctx->pc = 0x8030EF54u;
    // 8030EF54: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EF58:
    ctx->pc = 0x8030EF58u;
    // 8030EF58: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8030EF5C:
    ctx->pc = 0x8030EF5Cu;
    // 8030EF5C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EF60:
    ctx->pc = 0x8030EF60u;
    // 8030EF60: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8030EF64:
    ctx->pc = 0x8030EF64u;
    // 8030EF64: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EF68:
    ctx->pc = 0x8030EF68u;
    // 8030EF68: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8030EF6C:
    ctx->pc = 0x8030EF6Cu;
    // 8030EF6C: addi    r31, r31, 20408
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(20408);

label_8030EF70:
    ctx->pc = 0x8030EF70u;
    // 8030EF70: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EF74:
    ctx->pc = 0x8030EF74u;
    // 8030EF74: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_8030EF78:
    ctx->pc = 0x8030EF78u;
    // 8030EF78: addi    r5, r31, 61
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(61);

label_8030EF7C:
    ctx->pc = 0x8030EF7Cu;
    // 8030EF7C: bl      0x8036E758
    {
            ctx->lr = 0x8030EF80u;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8030EF80:
    ctx->pc = 0x8030EF80u;
    ctx->downcount -= 13;
    // 8030EF80: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_8030EF84:
    ctx->pc = 0x8030EF84u;
    // 8030EF84: addi    r4, r31, 97
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(97);

label_8030EF88:
    ctx->pc = 0x8030EF88u;
    // 8030EF88: addi    r7, r7, -30088
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-30088);

label_8030EF8C:
    ctx->pc = 0x8030EF8Cu;
    // 8030EF8C: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8030EF90:
    ctx->pc = 0x8030EF90u;
    // 8030EF90: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_8030EF94:
    ctx->pc = 0x8030EF94u;
    // 8030EF94: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_8030EF98:
    ctx->pc = 0x8030EF98u;
    // 8030EF98: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_8030EF9C:
    ctx->pc = 0x8030EF9Cu;
    // 8030EF9C: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8030EFA0:
    ctx->pc = 0x8030EFA0u;
    // 8030EFA0: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8030EFA4:
    ctx->pc = 0x8030EFA4u;
    // 8030EFA4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8030EFA8:
    ctx->pc = 0x8030EFA8u;
    // 8030EFA8: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8030EFAC:
    ctx->pc = 0x8030EFACu;
    // 8030EFAC: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EFB0:
    ctx->pc = 0x8030EFB0u;
    // 8030EFB0: bl      0x8000E7F4
    {
            ctx->lr = 0x8030EFB4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8030EFB4:
    ctx->pc = 0x8030EFB4u;
    ctx->downcount -= 2;
    // 8030EFB4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8030EFB8:
    ctx->pc = 0x8030EFB8u;
    // 8030EFB8: bl      0x80270188
    {
            ctx->lr = 0x8030EFBCu;
            ctx->pc = 0x80270188u;
            return;
    }

label_8030EFBC:
    ctx->pc = 0x8030EFBCu;
    ctx->downcount -= 17;
    // 8030EFBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030EFC0:
    ctx->pc = 0x8030EFC0u;
    // 8030EFC0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030EFC4:
    ctx->pc = 0x8030EFC4u;
    // 8030EFC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030EFC8:
    ctx->pc = 0x8030EFC8u;
    // 8030EFC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030EFCC:
    ctx->pc = 0x8030EFCCu;
    // 8030EFCC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030EFD0:
    ctx->pc = 0x8030EFD0u;
    // 8030EFD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030EFD4:
    ctx->pc = 0x8030EFD4u;
    ctx->downcount -= 18;
    // 8030EFD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030EFD8:
    ctx->pc = 0x8030EFD8u;
    // 8030EFD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030EFDC:
    // 8030EFDC: cmpwi   r3, 0
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

label_8030EFE0:
    ctx->pc = 0x8030EFE0u;
    // 8030EFE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030EFE4:
    ctx->pc = 0x8030EFE4u;
    // 8030EFE4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030EFE8:
    // 8030EFE8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030EFEC:
    // 8030EFEC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8030EFF0:
    // 8030EFF0: bc    12, 2, 0x8030F010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F010;
        }
    }

label_8030EFF4:
    ctx->downcount -= 1;
    // 8030EFF4: bc    12, 2, 0x8030F000
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F000;
        }
    }

label_8030EFF8:
    ctx->downcount -= 2;
    // 8030EFF8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030EFFC:
    // 8030EFFC: bl      0x801F9B68
    {
            ctx->lr = 0x8030F000u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8030F000:
    ctx->downcount -= 2;
    // 8030F000: cmpwi   r31, 0
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

label_8030F004:
    // 8030F004: bc    4, 1, 0x8030F010
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030F010;
        }
    }

label_8030F008:
    ctx->downcount -= 2;
    // 8030F008: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030F00C:
    // 8030F00C: bl      0x801C1C90
    {
            ctx->lr = 0x8030F010u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8030F010:
    ctx->downcount -= 17;
    // 8030F010: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8030F014:
    ctx->pc = 0x8030F014u;
    // 8030F014: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8030F018:
    ctx->pc = 0x8030F018u;
    // 8030F018: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030F01C:
    ctx->pc = 0x8030F01Cu;
    // 8030F01C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030F020:
    // 8030F020: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8030F024:
    ctx->pc = 0x8030F024u;
    // 8030F024: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030F028:
    ctx->downcount -= 2;
    // 8030F028: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8030F02C:
    // 8030F02C: b       0x8030EFD4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EFD4u;
                return;
            }
            goto label_8030EFD4;
    }

label_8030F030:
    ctx->downcount -= 2;
    // 8030F030: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8030F034:
    // 8030F034: b       0x8030EFD4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030EFD4u;
                return;
            }
            goto label_8030EFD4;
    }

label_8030F038:
    ctx->pc = 0x8030F038u;
    ctx->downcount -= 8;
    // 8030F038: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030F03C:
    ctx->pc = 0x8030F03Cu;
    // 8030F03C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030F040:
    ctx->pc = 0x8030F040u;
    // 8030F040: cmpwi   r4, 0
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

label_8030F044:
    ctx->pc = 0x8030F044u;
    // 8030F044: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8030F048:
    ctx->pc = 0x8030F048u;
    // 8030F048: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030F04C:
    ctx->pc = 0x8030F04Cu;
    // 8030F04C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8030F050:
    ctx->pc = 0x8030F050u;
    // 8030F050: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030F054:
    ctx->pc = 0x8030F054u;
    // 8030F054: bc    12, 2, 0x8030F074
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F074;
        }
    }

label_8030F058:
    ctx->pc = 0x8030F058u;
    ctx->downcount -= 2;
    // 8030F058: cmpwi   r4, 1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030F05C:
    ctx->pc = 0x8030F05Cu;
    // 8030F05C: bc    12, 2, 0x8030F090
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F090;
        }
    }

label_8030F060:
    ctx->pc = 0x8030F060u;
    ctx->downcount -= 2;
    // 8030F060: cmpwi   r4, 2
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8030F064:
    ctx->pc = 0x8030F064u;
    // 8030F064: bc    12, 2, 0x8030F0B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F0B0;
        }
    }

label_8030F068:
    ctx->pc = 0x8030F068u;
    ctx->downcount -= 2;
    // 8030F068: cmpwi   r4, 3
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

label_8030F06C:
    ctx->pc = 0x8030F06Cu;
    // 8030F06C: bc    12, 2, 0x8030F0D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8030F0D0;
        }
    }

label_8030F070:
    ctx->pc = 0x8030F070u;
    ctx->downcount -= 1;
    // 8030F070: b       0x8030F114
    {
            goto label_8030F114;
    }

label_8030F074:
    ctx->pc = 0x8030F074u;
    ctx->downcount -= 6;
    // 8030F074: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030F078:
    ctx->pc = 0x8030F078u;
    // 8030F078: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F07C:
    ctx->pc = 0x8030F07Cu;
    // 8030F07C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030F080:
    ctx->pc = 0x8030F080u;
    // 8030F080: addi    r5, r5, 20528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20528);

label_8030F084:
    ctx->pc = 0x8030F084u;
    // 8030F084: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030F088:
    ctx->pc = 0x8030F088u;
    // 8030F088: bl      0x8000D074
    {
            ctx->lr = 0x8030F08Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030F08C:
    ctx->pc = 0x8030F08Cu;
    ctx->downcount -= 1;
    // 8030F08C: b       0x8030F114
    {
            goto label_8030F114;
    }

label_8030F090:
    ctx->pc = 0x8030F090u;
    ctx->downcount -= 7;
    // 8030F090: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030F094:
    ctx->pc = 0x8030F094u;
    // 8030F094: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F098:
    ctx->pc = 0x8030F098u;
    // 8030F098: addi    r4, r4, 20528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20528);

label_8030F09C:
    ctx->pc = 0x8030F09Cu;
    // 8030F09C: addi    r5, r4, 14
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(14);

label_8030F0A0:
    ctx->pc = 0x8030F0A0u;
    // 8030F0A0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030F0A4:
    ctx->pc = 0x8030F0A4u;
    // 8030F0A4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030F0A8:
    ctx->pc = 0x8030F0A8u;
    // 8030F0A8: bl      0x8000D074
    {
            ctx->lr = 0x8030F0ACu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030F0AC:
    ctx->pc = 0x8030F0ACu;
    ctx->downcount -= 1;
    // 8030F0AC: b       0x8030F114
    {
            goto label_8030F114;
    }

label_8030F0B0:
    ctx->pc = 0x8030F0B0u;
    ctx->downcount -= 7;
    // 8030F0B0: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030F0B4:
    ctx->pc = 0x8030F0B4u;
    // 8030F0B4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F0B8:
    ctx->pc = 0x8030F0B8u;
    // 8030F0B8: addi    r4, r4, 20528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20528);

label_8030F0BC:
    ctx->pc = 0x8030F0BCu;
    // 8030F0BC: addi    r5, r4, 28
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28);

label_8030F0C0:
    ctx->pc = 0x8030F0C0u;
    // 8030F0C0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030F0C4:
    ctx->pc = 0x8030F0C4u;
    // 8030F0C4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030F0C8:
    ctx->pc = 0x8030F0C8u;
    // 8030F0C8: bl      0x8000D074
    {
            ctx->lr = 0x8030F0CCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030F0CC:
    ctx->pc = 0x8030F0CCu;
    ctx->downcount -= 1;
    // 8030F0CC: b       0x8030F114
    {
            goto label_8030F114;
    }

label_8030F0D0:
    ctx->pc = 0x8030F0D0u;
    ctx->downcount -= 2;
    // 8030F0D0: cmpwi   r5, 6
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

label_8030F0D4:
    ctx->pc = 0x8030F0D4u;
    // 8030F0D4: bc    4, 2, 0x8030F0F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8030F0F8;
        }
    }

label_8030F0D8:
    ctx->pc = 0x8030F0D8u;
    ctx->downcount -= 7;
    // 8030F0D8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8030F0DC:
    ctx->pc = 0x8030F0DCu;
    // 8030F0DC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F0E0:
    ctx->pc = 0x8030F0E0u;
    // 8030F0E0: addi    r5, r5, 20528
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(20528);

label_8030F0E4:
    ctx->pc = 0x8030F0E4u;
    // 8030F0E4: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030F0E8:
    ctx->pc = 0x8030F0E8u;
    // 8030F0E8: addi    r5, r5, 42
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(42);

label_8030F0EC:
    ctx->pc = 0x8030F0ECu;
    // 8030F0EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030F0F0:
    ctx->pc = 0x8030F0F0u;
    // 8030F0F0: bl      0x8000D074
    {
            ctx->lr = 0x8030F0F4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030F0F4:
    ctx->pc = 0x8030F0F4u;
    ctx->downcount -= 1;
    // 8030F0F4: b       0x8030F114
    {
            goto label_8030F114;
    }

label_8030F0F8:
    ctx->pc = 0x8030F0F8u;
    ctx->downcount -= 7;
    // 8030F0F8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8030F0FC:
    ctx->pc = 0x8030F0FCu;
    // 8030F0FC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F100:
    ctx->pc = 0x8030F100u;
    // 8030F100: addi    r4, r4, 20528
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(20528);

label_8030F104:
    ctx->pc = 0x8030F104u;
    // 8030F104: addi    r5, r4, 28
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(28);

label_8030F108:
    ctx->pc = 0x8030F108u;
    // 8030F108: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8030F10C:
    ctx->pc = 0x8030F10Cu;
    // 8030F10C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8030F110:
    ctx->pc = 0x8030F110u;
    // 8030F110: bl      0x8000D074
    {
            ctx->lr = 0x8030F114u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8030F114:
    ctx->pc = 0x8030F114u;
    ctx->downcount -= 3;
    // 8030F114: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8030F118:
    ctx->pc = 0x8030F118u;
    // 8030F118: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8030F11C:
    ctx->pc = 0x8030F11Cu;
    // 8030F11C: bl      0x8026F970
    {
            ctx->lr = 0x8030F120u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8030F120:
    ctx->pc = 0x8030F120u;
    ctx->downcount -= 6;
    // 8030F120: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8030F124:
    ctx->pc = 0x8030F124u;
    // 8030F124: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8030F128:
    ctx->pc = 0x8030F128u;
    // 8030F128: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8030F12C:
    ctx->pc = 0x8030F12Cu;
    // 8030F12C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8030F130:
    ctx->pc = 0x8030F130u;
    // 8030F130: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_8030B1C0;
        }
    }

label_8030F134:
    ctx->pc = 0x8030F134u;
    ctx->downcount -= 22;
    // 8030F134: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8030F138:
    ctx->pc = 0x8030F138u;
    // 8030F138: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8030F13C:
    ctx->pc = 0x8030F13Cu;
    // 8030F13C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8030F140:
    ctx->pc = 0x8030F140u;
    // 8030F140: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8030F144:
    ctx->pc = 0x8030F144u;
    // 8030F144: mulli   r0, r0, 28
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)28);

label_8030F148:
    ctx->pc = 0x8030F148u;
    // 8030F148: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8030F14C:
    ctx->pc = 0x8030F14Cu;
    // 8030F14C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8030F150:
    ctx->pc = 0x8030F150u;
    // 8030F150: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030F154:
    ctx->pc = 0x8030F154u;
    // 8030F154: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030F158:
    ctx->pc = 0x8030F158u;
    // 8030F158: add   r29, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8030F15C:
    ctx->downcount -= 4;
    // 8030F15C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030F160:
    // 8030F160: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030F164:
    // 8030F164: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8030F168:
    // 8030F168: bl      0x8030F038
    {
            ctx->lr = 0x8030F16Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030F038u;
                return;
            }
            goto label_8030F038;
    }

label_8030F16C:
    ctx->downcount -= 6;
    // 8030F16C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030F170:
    // 8030F170: add   r4, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030F174:
    // 8030F174: cmpwi   r28, 2
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

label_8030F178:
    ctx->pc = 0x8030F178u;
    // 8030F178: stw     r3, 284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030F17C:
    // 8030F17C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8030F180:
    // 8030F180: bc    12, 0, 0x8030F15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030F15Cu;
                return;
            }
            goto label_8030F15C;
        }
    }

label_8030F184:
    ctx->pc = 0x8030F184u;
    ctx->downcount -= 7;
    // 8030F184: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8030F188:
    ctx->pc = 0x8030F188u;
    // 8030F188: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_8030F18C:
    ctx->pc = 0x8030F18Cu;
    // 8030F18C: mulli   r0, r0, 28
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)28);

label_8030F190:
    ctx->pc = 0x8030F190u;
    // 8030F190: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8030F194:
    ctx->pc = 0x8030F194u;
    // 8030F194: add   r29, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_8030F198:
    ctx->downcount -= 4;
    // 8030F198: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8030F19C:
    // 8030F19C: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8030F1A0:
    // 8030F1A0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8030F1A4:
    // 8030F1A4: bl      0x8030F038
    {
            ctx->lr = 0x8030F1A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030F038u;
                return;
            }
            goto label_8030F038;
    }

label_8030F1A8:
    ctx->downcount -= 6;
    // 8030F1A8: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_8030F1AC:
    // 8030F1AC: add   r4, r29, r30
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8030F1B0:
    // 8030F1B0: cmpwi   r28, 3
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

label_8030F1B4:
    ctx->pc = 0x8030F1B4u;
    // 8030F1B4: stw     r3, 284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8030F1B8:
    // 8030F1B8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8030F1BC:
    // 8030F1BC: bc    12, 0, 0x8030F198
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8030F198u;
                return;
            }
            goto label_8030F198;
        }
    }

    ctx->pc = 0x8030F1C0u;
    return;
return_dispatch_8030B1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x8030B1F8u: goto label_8030B1F8;
    case 0x8030B200u: goto label_8030B200;
    case 0x8030B20Cu: goto label_8030B20C;
    case 0x8030B270u: goto label_8030B270;
    case 0x8030B280u: goto label_8030B280;
    case 0x8030B2F8u: goto label_8030B2F8;
    case 0x8030B320u: goto label_8030B320;
    case 0x8030B33Cu: goto label_8030B33C;
    case 0x8030B35Cu: goto label_8030B35C;
    case 0x8030B3A4u: goto label_8030B3A4;
    case 0x8030B3E8u: goto label_8030B3E8;
    case 0x8030B424u: goto label_8030B424;
    case 0x8030B448u: goto label_8030B448;
    case 0x8030B498u: goto label_8030B498;
    case 0x8030B4B8u: goto label_8030B4B8;
    case 0x8030B4DCu: goto label_8030B4DC;
    case 0x8030B500u: goto label_8030B500;
    case 0x8030B564u: goto label_8030B564;
    case 0x8030B5CCu: goto label_8030B5CC;
    case 0x8030B5DCu: goto label_8030B5DC;
    case 0x8030B634u: goto label_8030B634;
    case 0x8030B640u: goto label_8030B640;
    case 0x8030B688u: goto label_8030B688;
    case 0x8030B690u: goto label_8030B690;
    case 0x8030B6A0u: goto label_8030B6A0;
    case 0x8030B708u: goto label_8030B708;
    case 0x8030B710u: goto label_8030B710;
    case 0x8030B720u: goto label_8030B720;
    case 0x8030B768u: goto label_8030B768;
    case 0x8030B780u: goto label_8030B780;
    case 0x8030B7E0u: goto label_8030B7E0;
    case 0x8030B814u: goto label_8030B814;
    case 0x8030B81Cu: goto label_8030B81C;
    case 0x8030B860u: goto label_8030B860;
    case 0x8030B870u: goto label_8030B870;
    case 0x8030B8D8u: goto label_8030B8D8;
    case 0x8030B8F0u: goto label_8030B8F0;
    case 0x8030B938u: goto label_8030B938;
    case 0x8030B950u: goto label_8030B950;
    case 0x8030B9B0u: goto label_8030B9B0;
    case 0x8030B9E4u: goto label_8030B9E4;
    case 0x8030B9ECu: goto label_8030B9EC;
    case 0x8030BA30u: goto label_8030BA30;
    case 0x8030BA40u: goto label_8030BA40;
    case 0x8030BA90u: goto label_8030BA90;
    case 0x8030BAACu: goto label_8030BAAC;
    case 0x8030BAC8u: goto label_8030BAC8;
    case 0x8030BAE4u: goto label_8030BAE4;
    case 0x8030BAFCu: goto label_8030BAFC;
    case 0x8030BB10u: goto label_8030BB10;
    case 0x8030BB28u: goto label_8030BB28;
    case 0x8030BB34u: goto label_8030BB34;
    case 0x8030BB70u: goto label_8030BB70;
    case 0x8030BB84u: goto label_8030BB84;
    case 0x8030BB98u: goto label_8030BB98;
    case 0x8030BBE8u: goto label_8030BBE8;
    case 0x8030BC1Cu: goto label_8030BC1C;
    case 0x8030BC44u: goto label_8030BC44;
    case 0x8030BC50u: goto label_8030BC50;
    case 0x8030BD10u: goto label_8030BD10;
    case 0x8030BD1Cu: goto label_8030BD1C;
    case 0x8030BD28u: goto label_8030BD28;
    case 0x8030BD30u: goto label_8030BD30;
    case 0x8030BD94u: goto label_8030BD94;
    case 0x8030BDACu: goto label_8030BDAC;
    case 0x8030BDB8u: goto label_8030BDB8;
    case 0x8030BDECu: goto label_8030BDEC;
    case 0x8030BE00u: goto label_8030BE00;
    case 0x8030BE0Cu: goto label_8030BE0C;
    case 0x8030BE24u: goto label_8030BE24;
    case 0x8030BE40u: goto label_8030BE40;
    case 0x8030BE5Cu: goto label_8030BE5C;
    case 0x8030BE90u: goto label_8030BE90;
    case 0x8030BEB0u: goto label_8030BEB0;
    case 0x8030BED4u: goto label_8030BED4;
    case 0x8030BEE0u: goto label_8030BEE0;
    case 0x8030BEECu: goto label_8030BEEC;
    case 0x8030BF10u: goto label_8030BF10;
    case 0x8030BF1Cu: goto label_8030BF1C;
    case 0x8030BF5Cu: goto label_8030BF5C;
    case 0x8030BF80u: goto label_8030BF80;
    case 0x8030BF90u: goto label_8030BF90;
    case 0x8030BFD0u: goto label_8030BFD0;
    case 0x8030BFE8u: goto label_8030BFE8;
    case 0x8030BFFCu: goto label_8030BFFC;
    case 0x8030C010u: goto label_8030C010;
    case 0x8030C028u: goto label_8030C028;
    case 0x8030C03Cu: goto label_8030C03C;
    case 0x8030C058u: goto label_8030C058;
    case 0x8030C074u: goto label_8030C074;
    case 0x8030C088u: goto label_8030C088;
    case 0x8030C0A0u: goto label_8030C0A0;
    case 0x8030C0C0u: goto label_8030C0C0;
    case 0x8030C0C8u: goto label_8030C0C8;
    case 0x8030C0E8u: goto label_8030C0E8;
    case 0x8030C0F0u: goto label_8030C0F0;
    case 0x8030C0FCu: goto label_8030C0FC;
    case 0x8030C104u: goto label_8030C104;
    case 0x8030C110u: goto label_8030C110;
    case 0x8030C174u: goto label_8030C174;
    case 0x8030C19Cu: goto label_8030C19C;
    case 0x8030C1B0u: goto label_8030C1B0;
    case 0x8030C1C4u: goto label_8030C1C4;
    case 0x8030C1D8u: goto label_8030C1D8;
    case 0x8030C1E8u: goto label_8030C1E8;
    case 0x8030C1F8u: goto label_8030C1F8;
    case 0x8030C20Cu: goto label_8030C20C;
    case 0x8030C21Cu: goto label_8030C21C;
    case 0x8030C238u: goto label_8030C238;
    case 0x8030C24Cu: goto label_8030C24C;
    case 0x8030C274u: goto label_8030C274;
    case 0x8030C284u: goto label_8030C284;
    case 0x8030C294u: goto label_8030C294;
    case 0x8030C2A0u: goto label_8030C2A0;
    case 0x8030C2B8u: goto label_8030C2B8;
    case 0x8030C2D4u: goto label_8030C2D4;
    case 0x8030C2E4u: goto label_8030C2E4;
    case 0x8030C2F8u: goto label_8030C2F8;
    case 0x8030C320u: goto label_8030C320;
    case 0x8030C390u: goto label_8030C390;
    case 0x8030C39Cu: goto label_8030C39C;
    case 0x8030C3ACu: goto label_8030C3AC;
    case 0x8030C3F8u: goto label_8030C3F8;
    case 0x8030C404u: goto label_8030C404;
    case 0x8030C414u: goto label_8030C414;
    case 0x8030C454u: goto label_8030C454;
    case 0x8030C494u: goto label_8030C494;
    case 0x8030C51Cu: goto label_8030C51C;
    case 0x8030C524u: goto label_8030C524;
    case 0x8030C538u: goto label_8030C538;
    case 0x8030C578u: goto label_8030C578;
    case 0x8030C594u: goto label_8030C594;
    case 0x8030C5ACu: goto label_8030C5AC;
    case 0x8030C5B8u: goto label_8030C5B8;
    case 0x8030C5D0u: goto label_8030C5D0;
    case 0x8030C5D8u: goto label_8030C5D8;
    case 0x8030C600u: goto label_8030C600;
    case 0x8030C618u: goto label_8030C618;
    case 0x8030C624u: goto label_8030C624;
    case 0x8030C638u: goto label_8030C638;
    case 0x8030C644u: goto label_8030C644;
    case 0x8030C658u: goto label_8030C658;
    case 0x8030C6A4u: goto label_8030C6A4;
    case 0x8030C6B0u: goto label_8030C6B0;
    case 0x8030C6C0u: goto label_8030C6C0;
    case 0x8030C6F4u: goto label_8030C6F4;
    case 0x8030C718u: goto label_8030C718;
    case 0x8030C730u: goto label_8030C730;
    case 0x8030C748u: goto label_8030C748;
    case 0x8030C7E0u: goto label_8030C7E0;
    case 0x8030C81Cu: goto label_8030C81C;
    case 0x8030C884u: goto label_8030C884;
    case 0x8030C88Cu: goto label_8030C88C;
    case 0x8030C894u: goto label_8030C894;
    case 0x8030C89Cu: goto label_8030C89C;
    case 0x8030C8A4u: goto label_8030C8A4;
    case 0x8030C8E0u: goto label_8030C8E0;
    case 0x8030C900u: goto label_8030C900;
    case 0x8030C940u: goto label_8030C940;
    case 0x8030C960u: goto label_8030C960;
    case 0x8030C9A0u: goto label_8030C9A0;
    case 0x8030C9C0u: goto label_8030C9C0;
    case 0x8030CA38u: goto label_8030CA38;
    case 0x8030CA50u: goto label_8030CA50;
    case 0x8030CA60u: goto label_8030CA60;
    case 0x8030CA78u: goto label_8030CA78;
    case 0x8030CAACu: goto label_8030CAAC;
    case 0x8030CAD0u: goto label_8030CAD0;
    case 0x8030CAE0u: goto label_8030CAE0;
    case 0x8030CAF4u: goto label_8030CAF4;
    case 0x8030CB58u: goto label_8030CB58;
    case 0x8030CBC4u: goto label_8030CBC4;
    case 0x8030CBD4u: goto label_8030CBD4;
    case 0x8030CC34u: goto label_8030CC34;
    case 0x8030CC4Cu: goto label_8030CC4C;
    case 0x8030CC58u: goto label_8030CC58;
    case 0x8030CCA4u: goto label_8030CCA4;
    case 0x8030CCCCu: goto label_8030CCCC;
    case 0x8030CCD8u: goto label_8030CCD8;
    case 0x8030CCF0u: goto label_8030CCF0;
    case 0x8030CCFCu: goto label_8030CCFC;
    case 0x8030CD4Cu: goto label_8030CD4C;
    case 0x8030CD68u: goto label_8030CD68;
    case 0x8030CD84u: goto label_8030CD84;
    case 0x8030CDA0u: goto label_8030CDA0;
    case 0x8030CDBCu: goto label_8030CDBC;
    case 0x8030CDD4u: goto label_8030CDD4;
    case 0x8030CDE8u: goto label_8030CDE8;
    case 0x8030CE00u: goto label_8030CE00;
    case 0x8030CE0Cu: goto label_8030CE0C;
    case 0x8030CE48u: goto label_8030CE48;
    case 0x8030CE5Cu: goto label_8030CE5C;
    case 0x8030CE70u: goto label_8030CE70;
    case 0x8030CE84u: goto label_8030CE84;
    case 0x8030CEDCu: goto label_8030CEDC;
    case 0x8030CF18u: goto label_8030CF18;
    case 0x8030CF40u: goto label_8030CF40;
    case 0x8030CF4Cu: goto label_8030CF4C;
    case 0x8030CFA8u: goto label_8030CFA8;
    case 0x8030CFB4u: goto label_8030CFB4;
    case 0x8030CFC0u: goto label_8030CFC0;
    case 0x8030CFFCu: goto label_8030CFFC;
    case 0x8030D01Cu: goto label_8030D01C;
    case 0x8030D034u: goto label_8030D034;
    case 0x8030D040u: goto label_8030D040;
    case 0x8030D058u: goto label_8030D058;
    case 0x8030D0CCu: goto label_8030D0CC;
    case 0x8030D0E4u: goto label_8030D0E4;
    case 0x8030D0F0u: goto label_8030D0F0;
    case 0x8030D118u: goto label_8030D118;
    case 0x8030D128u: goto label_8030D128;
    case 0x8030D13Cu: goto label_8030D13C;
    case 0x8030D144u: goto label_8030D144;
    case 0x8030D154u: goto label_8030D154;
    case 0x8030D160u: goto label_8030D160;
    case 0x8030D178u: goto label_8030D178;
    case 0x8030D194u: goto label_8030D194;
    case 0x8030D1B0u: goto label_8030D1B0;
    case 0x8030D1DCu: goto label_8030D1DC;
    case 0x8030D1E4u: goto label_8030D1E4;
    case 0x8030D1F8u: goto label_8030D1F8;
    case 0x8030D238u: goto label_8030D238;
    case 0x8030D258u: goto label_8030D258;
    case 0x8030D27Cu: goto label_8030D27C;
    case 0x8030D288u: goto label_8030D288;
    case 0x8030D294u: goto label_8030D294;
    case 0x8030D2B8u: goto label_8030D2B8;
    case 0x8030D2C4u: goto label_8030D2C4;
    case 0x8030D2F4u: goto label_8030D2F4;
    case 0x8030D30Cu: goto label_8030D30C;
    case 0x8030D328u: goto label_8030D328;
    case 0x8030D344u: goto label_8030D344;
    case 0x8030D354u: goto label_8030D354;
    case 0x8030D3A0u: goto label_8030D3A0;
    case 0x8030D3B0u: goto label_8030D3B0;
    case 0x8030D3BCu: goto label_8030D3BC;
    case 0x8030D3C8u: goto label_8030D3C8;
    case 0x8030D3D4u: goto label_8030D3D4;
    case 0x8030D3E4u: goto label_8030D3E4;
    case 0x8030D410u: goto label_8030D410;
    case 0x8030D428u: goto label_8030D428;
    case 0x8030D43Cu: goto label_8030D43C;
    case 0x8030D44Cu: goto label_8030D44C;
    case 0x8030D458u: goto label_8030D458;
    case 0x8030D46Cu: goto label_8030D46C;
    case 0x8030D4BCu: goto label_8030D4BC;
    case 0x8030D4D8u: goto label_8030D4D8;
    case 0x8030D624u: goto label_8030D624;
    case 0x8030D648u: goto label_8030D648;
    case 0x8030D658u: goto label_8030D658;
    case 0x8030D660u: goto label_8030D660;
    case 0x8030D674u: goto label_8030D674;
    case 0x8030D684u: goto label_8030D684;
    case 0x8030D6C4u: goto label_8030D6C4;
    case 0x8030D6DCu: goto label_8030D6DC;
    case 0x8030D6F0u: goto label_8030D6F0;
    case 0x8030D704u: goto label_8030D704;
    case 0x8030D71Cu: goto label_8030D71C;
    case 0x8030D730u: goto label_8030D730;
    case 0x8030D744u: goto label_8030D744;
    case 0x8030D75Cu: goto label_8030D75C;
    case 0x8030D770u: goto label_8030D770;
    case 0x8030D78Cu: goto label_8030D78C;
    case 0x8030D7A8u: goto label_8030D7A8;
    case 0x8030D7BCu: goto label_8030D7BC;
    case 0x8030D7D4u: goto label_8030D7D4;
    case 0x8030D7F4u: goto label_8030D7F4;
    case 0x8030D7FCu: goto label_8030D7FC;
    case 0x8030D81Cu: goto label_8030D81C;
    case 0x8030D824u: goto label_8030D824;
    case 0x8030D830u: goto label_8030D830;
    case 0x8030D838u: goto label_8030D838;
    case 0x8030D844u: goto label_8030D844;
    case 0x8030D8A0u: goto label_8030D8A0;
    case 0x8030D8B0u: goto label_8030D8B0;
    case 0x8030D8BCu: goto label_8030D8BC;
    case 0x8030D8FCu: goto label_8030D8FC;
    case 0x8030D924u: goto label_8030D924;
    case 0x8030D938u: goto label_8030D938;
    case 0x8030D94Cu: goto label_8030D94C;
    case 0x8030D960u: goto label_8030D960;
    case 0x8030D974u: goto label_8030D974;
    case 0x8030D988u: goto label_8030D988;
    case 0x8030D99Cu: goto label_8030D99C;
    case 0x8030D9ACu: goto label_8030D9AC;
    case 0x8030D9BCu: goto label_8030D9BC;
    case 0x8030D9D0u: goto label_8030D9D0;
    case 0x8030D9E0u: goto label_8030D9E0;
    case 0x8030D9FCu: goto label_8030D9FC;
    case 0x8030DA10u: goto label_8030DA10;
    case 0x8030DA38u: goto label_8030DA38;
    case 0x8030DA48u: goto label_8030DA48;
    case 0x8030DA5Cu: goto label_8030DA5C;
    case 0x8030DA6Cu: goto label_8030DA6C;
    case 0x8030DA7Cu: goto label_8030DA7C;
    case 0x8030DA88u: goto label_8030DA88;
    case 0x8030DAA0u: goto label_8030DAA0;
    case 0x8030DABCu: goto label_8030DABC;
    case 0x8030DAC8u: goto label_8030DAC8;
    case 0x8030DAD8u: goto label_8030DAD8;
    case 0x8030DAECu: goto label_8030DAEC;
    case 0x8030DB14u: goto label_8030DB14;
    case 0x8030DB78u: goto label_8030DB78;
    case 0x8030DB84u: goto label_8030DB84;
    case 0x8030DB94u: goto label_8030DB94;
    case 0x8030DBE0u: goto label_8030DBE0;
    case 0x8030DBECu: goto label_8030DBEC;
    case 0x8030DBFCu: goto label_8030DBFC;
    case 0x8030DC3Cu: goto label_8030DC3C;
    case 0x8030DC7Cu: goto label_8030DC7C;
    case 0x8030DD04u: goto label_8030DD04;
    case 0x8030DD0Cu: goto label_8030DD0C;
    case 0x8030DD20u: goto label_8030DD20;
    case 0x8030DD60u: goto label_8030DD60;
    case 0x8030DD7Cu: goto label_8030DD7C;
    case 0x8030DD94u: goto label_8030DD94;
    case 0x8030DDA0u: goto label_8030DDA0;
    case 0x8030DDB8u: goto label_8030DDB8;
    case 0x8030DDC0u: goto label_8030DDC0;
    case 0x8030DDE8u: goto label_8030DDE8;
    case 0x8030DE00u: goto label_8030DE00;
    case 0x8030DE0Cu: goto label_8030DE0C;
    case 0x8030DE20u: goto label_8030DE20;
    case 0x8030DE2Cu: goto label_8030DE2C;
    case 0x8030DE40u: goto label_8030DE40;
    case 0x8030DE8Cu: goto label_8030DE8C;
    case 0x8030DE98u: goto label_8030DE98;
    case 0x8030DEA8u: goto label_8030DEA8;
    case 0x8030DEDCu: goto label_8030DEDC;
    case 0x8030DF00u: goto label_8030DF00;
    case 0x8030DF18u: goto label_8030DF18;
    case 0x8030DF30u: goto label_8030DF30;
    case 0x8030DFC8u: goto label_8030DFC8;
    case 0x8030E004u: goto label_8030E004;
    case 0x8030E06Cu: goto label_8030E06C;
    case 0x8030E074u: goto label_8030E074;
    case 0x8030E07Cu: goto label_8030E07C;
    case 0x8030E084u: goto label_8030E084;
    case 0x8030E08Cu: goto label_8030E08C;
    case 0x8030E0C8u: goto label_8030E0C8;
    case 0x8030E0E8u: goto label_8030E0E8;
    case 0x8030E128u: goto label_8030E128;
    case 0x8030E148u: goto label_8030E148;
    case 0x8030E188u: goto label_8030E188;
    case 0x8030E1A8u: goto label_8030E1A8;
    case 0x8030E25Cu: goto label_8030E25C;
    case 0x8030E284u: goto label_8030E284;
    case 0x8030E294u: goto label_8030E294;
    case 0x8030E2A8u: goto label_8030E2A8;
    case 0x8030E304u: goto label_8030E304;
    case 0x8030E32Cu: goto label_8030E32C;
    case 0x8030E334u: goto label_8030E334;
    case 0x8030E344u: goto label_8030E344;
    case 0x8030E3A0u: goto label_8030E3A0;
    case 0x8030E3B4u: goto label_8030E3B4;
    case 0x8030E3C0u: goto label_8030E3C0;
    case 0x8030E3F4u: goto label_8030E3F4;
    case 0x8030E3FCu: goto label_8030E3FC;
    case 0x8030E43Cu: goto label_8030E43C;
    case 0x8030E44Cu: goto label_8030E44C;
    case 0x8030E458u: goto label_8030E458;
    case 0x8030E46Cu: goto label_8030E46C;
    case 0x8030E490u: goto label_8030E490;
    case 0x8030E4A0u: goto label_8030E4A0;
    case 0x8030E4ACu: goto label_8030E4AC;
    case 0x8030E4C0u: goto label_8030E4C0;
    case 0x8030E684u: goto label_8030E684;
    case 0x8030E6A0u: goto label_8030E6A0;
    case 0x8030E6B0u: goto label_8030E6B0;
    case 0x8030E6BCu: goto label_8030E6BC;
    case 0x8030E6C0u: goto label_8030E6C0;
    case 0x8030E7A0u: goto label_8030E7A0;
    case 0x8030E7B8u: goto label_8030E7B8;
    case 0x8030E7C4u: goto label_8030E7C4;
    case 0x8030E7E0u: goto label_8030E7E0;
    case 0x8030E7ECu: goto label_8030E7EC;
    case 0x8030E80Cu: goto label_8030E80C;
    case 0x8030E818u: goto label_8030E818;
    case 0x8030E81Cu: goto label_8030E81C;
    case 0x8030E894u: goto label_8030E894;
    case 0x8030E8ACu: goto label_8030E8AC;
    case 0x8030E8C4u: goto label_8030E8C4;
    case 0x8030E8DCu: goto label_8030E8DC;
    case 0x8030E8F4u: goto label_8030E8F4;
    case 0x8030E930u: goto label_8030E930;
    case 0x8030E940u: goto label_8030E940;
    case 0x8030E958u: goto label_8030E958;
    case 0x8030E99Cu: goto label_8030E99C;
    case 0x8030E9ACu: goto label_8030E9AC;
    case 0x8030E9E0u: goto label_8030E9E0;
    case 0x8030EA30u: goto label_8030EA30;
    case 0x8030EA38u: goto label_8030EA38;
    case 0x8030EA6Cu: goto label_8030EA6C;
    case 0x8030EAF0u: goto label_8030EAF0;
    case 0x8030EAF8u: goto label_8030EAF8;
    case 0x8030EB00u: goto label_8030EB00;
    case 0x8030EB34u: goto label_8030EB34;
    case 0x8030EB70u: goto label_8030EB70;
    case 0x8030EB78u: goto label_8030EB78;
    case 0x8030EC00u: goto label_8030EC00;
    case 0x8030EC0Cu: goto label_8030EC0C;
    case 0x8030EC1Cu: goto label_8030EC1C;
    case 0x8030EC94u: goto label_8030EC94;
    case 0x8030ECACu: goto label_8030ECAC;
    case 0x8030ECBCu: goto label_8030ECBC;
    case 0x8030ECD4u: goto label_8030ECD4;
    case 0x8030ED08u: goto label_8030ED08;
    case 0x8030ED34u: goto label_8030ED34;
    case 0x8030ED40u: goto label_8030ED40;
    case 0x8030ED50u: goto label_8030ED50;
    case 0x8030EDB4u: goto label_8030EDB4;
    case 0x8030EE20u: goto label_8030EE20;
    case 0x8030EE30u: goto label_8030EE30;
    case 0x8030EEA8u: goto label_8030EEA8;
    case 0x8030EEC0u: goto label_8030EEC0;
    case 0x8030EF08u: goto label_8030EF08;
    case 0x8030EF20u: goto label_8030EF20;
    case 0x8030EF80u: goto label_8030EF80;
    case 0x8030EFB4u: goto label_8030EFB4;
    case 0x8030EFBCu: goto label_8030EFBC;
    case 0x8030F000u: goto label_8030F000;
    case 0x8030F010u: goto label_8030F010;
    case 0x8030F08Cu: goto label_8030F08C;
    case 0x8030F0ACu: goto label_8030F0AC;
    case 0x8030F0CCu: goto label_8030F0CC;
    case 0x8030F0F4u: goto label_8030F0F4;
    case 0x8030F114u: goto label_8030F114;
    case 0x8030F120u: goto label_8030F120;
    case 0x8030F16Cu: goto label_8030F16C;
    case 0x8030F1A8u: goto label_8030F1A8;
    default: return;
    }
}

