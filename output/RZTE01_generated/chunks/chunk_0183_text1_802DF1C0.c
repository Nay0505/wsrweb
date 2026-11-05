// DolRecomp output
#include "../RZTE01.h"

static void loop_802DF584(CPUState* ctx) {
label_802DF584:
    ctx->downcount -= 11;
    // 802DF584: add   r6, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 802DF588: add   r4, r31, r7
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    ctx->pc = 0x802DF58Cu;
    // 802DF58C: stw     r5, 272(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 802DF590: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    // 802DF594: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x802DF598u;
    // 802DF598: stw     r5, 312(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x802DF59Cu;
    // 802DF59C: stw     r5, 352(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x802DF5A0u;
    // 802DF5A0: stw     r5, 392(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x802DF5A4u;
    // 802DF5A4: stw     r5, 432(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x802DF5A8u;
    // 802DF5A8: stb     r5, 472(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(472);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

    // 802DF5AC: bc    16, 0, 0x802DF584
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF584u;
                return;
            }
            goto label_802DF584;
        }
    }

    ctx->pc = 0x802DF5B0u;
}

static void loop_802DFE44(CPUState* ctx) {
label_802DFE44:
    ctx->downcount -= 5;
    // 802DFE44: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 802DFE48: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x802DFE4Cu;
    // 802DFE4C: stw     r6, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 802DFE50: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

    // 802DFE54: bc    16, 0, 0x802DFE44
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFE44u;
                return;
            }
            goto label_802DFE44;
        }
    }

    ctx->pc = 0x802DFE58u;
}

static void loop_802E0244(CPUState* ctx) {
label_802E0244:
    ctx->downcount -= 5;
    ctx->pc = 0x802E0244u;
    // 802E0244: lwz     r4, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E0248u;
    // 802E0248: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x802E024Cu;
    // 802E024C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802E0250u;
    // 802E0250: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 802E0254: bc    16, 0, 0x802E0244
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0244u;
                return;
            }
            goto label_802E0244;
        }
    }

    ctx->pc = 0x802E0258u;
}

static void loop_802E03B0(CPUState* ctx) {
label_802E03B0:
    ctx->downcount -= 5;
    ctx->pc = 0x802E03B0u;
    // 802E03B0: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E03B4u;
    // 802E03B4: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x802E03B8u;
    // 802E03B8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x802E03BCu;
    // 802E03BC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

    // 802E03C0: bc    16, 0, 0x802E03B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E03B0u;
                return;
            }
            goto label_802E03B0;
        }
    }

    ctx->pc = 0x802E03C4u;
}

static void loop_802E1C78(CPUState* ctx) {
label_802E1C78:
    ctx->downcount -= 26;
    ctx->pc = 0x802E1C78u;
    // 802E1C78: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 802E1C7C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x802E1C80u;
    // 802E1C80: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802E1C84: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802E1C88u;
    // 802E1C88: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1C8Cu;
    // 802E1C8C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802E1C90u;
    // 802E1C90: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1C94u;
    // 802E1C94: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1C98u;
    // 802E1C98: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1C9Cu;
    // 802E1C9C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CA0u;
    // 802E1CA0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802E1CA4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802E1CA8u;
    // 802E1CA8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CACu;
    // 802E1CAC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x802E1CB0u;
    // 802E1CB0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1CB4u;
    // 802E1CB4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CB8u;
    // 802E1CB8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1CBCu;
    // 802E1CBC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CC0u;
    // 802E1CC0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802E1CC4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x802E1CC8u;
    // 802E1CC8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CCCu;
    // 802E1CCC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 802E1CD0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x802E1CD4u;
    // 802E1CD4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1CD8u;
    // 802E1CD8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E1CDCu;
    // 802E1CDC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x802E1CE0u;
    // 802E1CE0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 802E1CE4: cmpw    r7, r0
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

    // 802E1CE8: bc    12, 0, 0x802E1C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1C78u;
                return;
            }
            goto label_802E1C78;
        }
    }

    ctx->pc = 0x802E1CECu;
}

void func_802DF1C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x802DF1C0u: goto label_802DF1C0;
    case 0x802DF1C4u: goto label_802DF1C4;
    case 0x802DF1C8u: goto label_802DF1C8;
    case 0x802DF1CCu: goto label_802DF1CC;
    case 0x802DF1D0u: goto label_802DF1D0;
    case 0x802DF1D4u: goto label_802DF1D4;
    case 0x802DF1D8u: goto label_802DF1D8;
    case 0x802DF1DCu: goto label_802DF1DC;
    case 0x802DF1E0u: goto label_802DF1E0;
    case 0x802DF1E4u: goto label_802DF1E4;
    case 0x802DF1E8u: goto label_802DF1E8;
    case 0x802DF1ECu: goto label_802DF1EC;
    case 0x802DF1F0u: goto label_802DF1F0;
    case 0x802DF1F4u: goto label_802DF1F4;
    case 0x802DF1F8u: goto label_802DF1F8;
    case 0x802DF1FCu: goto label_802DF1FC;
    case 0x802DF200u: goto label_802DF200;
    case 0x802DF204u: goto label_802DF204;
    case 0x802DF208u: goto label_802DF208;
    case 0x802DF20Cu: goto label_802DF20C;
    case 0x802DF210u: goto label_802DF210;
    case 0x802DF214u: goto label_802DF214;
    case 0x802DF218u: goto label_802DF218;
    case 0x802DF21Cu: goto label_802DF21C;
    case 0x802DF220u: goto label_802DF220;
    case 0x802DF224u: goto label_802DF224;
    case 0x802DF228u: goto label_802DF228;
    case 0x802DF22Cu: goto label_802DF22C;
    case 0x802DF230u: goto label_802DF230;
    case 0x802DF234u: goto label_802DF234;
    case 0x802DF238u: goto label_802DF238;
    case 0x802DF23Cu: goto label_802DF23C;
    case 0x802DF240u: goto label_802DF240;
    case 0x802DF244u: goto label_802DF244;
    case 0x802DF248u: goto label_802DF248;
    case 0x802DF24Cu: goto label_802DF24C;
    case 0x802DF250u: goto label_802DF250;
    case 0x802DF254u: goto label_802DF254;
    case 0x802DF258u: goto label_802DF258;
    case 0x802DF25Cu: goto label_802DF25C;
    case 0x802DF260u: goto label_802DF260;
    case 0x802DF264u: goto label_802DF264;
    case 0x802DF268u: goto label_802DF268;
    case 0x802DF26Cu: goto label_802DF26C;
    case 0x802DF270u: goto label_802DF270;
    case 0x802DF274u: goto label_802DF274;
    case 0x802DF278u: goto label_802DF278;
    case 0x802DF27Cu: goto label_802DF27C;
    case 0x802DF280u: goto label_802DF280;
    case 0x802DF284u: goto label_802DF284;
    case 0x802DF288u: goto label_802DF288;
    case 0x802DF28Cu: goto label_802DF28C;
    case 0x802DF290u: goto label_802DF290;
    case 0x802DF294u: goto label_802DF294;
    case 0x802DF298u: goto label_802DF298;
    case 0x802DF29Cu: goto label_802DF29C;
    case 0x802DF2A0u: goto label_802DF2A0;
    case 0x802DF2A4u: goto label_802DF2A4;
    case 0x802DF2A8u: goto label_802DF2A8;
    case 0x802DF2ACu: goto label_802DF2AC;
    case 0x802DF2B0u: goto label_802DF2B0;
    case 0x802DF2B4u: goto label_802DF2B4;
    case 0x802DF2B8u: goto label_802DF2B8;
    case 0x802DF2BCu: goto label_802DF2BC;
    case 0x802DF2C0u: goto label_802DF2C0;
    case 0x802DF2C4u: goto label_802DF2C4;
    case 0x802DF2C8u: goto label_802DF2C8;
    case 0x802DF2CCu: goto label_802DF2CC;
    case 0x802DF2D0u: goto label_802DF2D0;
    case 0x802DF2D4u: goto label_802DF2D4;
    case 0x802DF2D8u: goto label_802DF2D8;
    case 0x802DF2DCu: goto label_802DF2DC;
    case 0x802DF2E0u: goto label_802DF2E0;
    case 0x802DF2E4u: goto label_802DF2E4;
    case 0x802DF2E8u: goto label_802DF2E8;
    case 0x802DF2ECu: goto label_802DF2EC;
    case 0x802DF2F0u: goto label_802DF2F0;
    case 0x802DF2F4u: goto label_802DF2F4;
    case 0x802DF2F8u: goto label_802DF2F8;
    case 0x802DF2FCu: goto label_802DF2FC;
    case 0x802DF300u: goto label_802DF300;
    case 0x802DF304u: goto label_802DF304;
    case 0x802DF308u: goto label_802DF308;
    case 0x802DF30Cu: goto label_802DF30C;
    case 0x802DF310u: goto label_802DF310;
    case 0x802DF314u: goto label_802DF314;
    case 0x802DF318u: goto label_802DF318;
    case 0x802DF31Cu: goto label_802DF31C;
    case 0x802DF320u: goto label_802DF320;
    case 0x802DF324u: goto label_802DF324;
    case 0x802DF328u: goto label_802DF328;
    case 0x802DF32Cu: goto label_802DF32C;
    case 0x802DF330u: goto label_802DF330;
    case 0x802DF334u: goto label_802DF334;
    case 0x802DF338u: goto label_802DF338;
    case 0x802DF33Cu: goto label_802DF33C;
    case 0x802DF340u: goto label_802DF340;
    case 0x802DF344u: goto label_802DF344;
    case 0x802DF348u: goto label_802DF348;
    case 0x802DF34Cu: goto label_802DF34C;
    case 0x802DF350u: goto label_802DF350;
    case 0x802DF354u: goto label_802DF354;
    case 0x802DF358u: goto label_802DF358;
    case 0x802DF35Cu: goto label_802DF35C;
    case 0x802DF360u: goto label_802DF360;
    case 0x802DF364u: goto label_802DF364;
    case 0x802DF368u: goto label_802DF368;
    case 0x802DF36Cu: goto label_802DF36C;
    case 0x802DF370u: goto label_802DF370;
    case 0x802DF374u: goto label_802DF374;
    case 0x802DF378u: goto label_802DF378;
    case 0x802DF37Cu: goto label_802DF37C;
    case 0x802DF380u: goto label_802DF380;
    case 0x802DF384u: goto label_802DF384;
    case 0x802DF388u: goto label_802DF388;
    case 0x802DF38Cu: goto label_802DF38C;
    case 0x802DF390u: goto label_802DF390;
    case 0x802DF394u: goto label_802DF394;
    case 0x802DF398u: goto label_802DF398;
    case 0x802DF39Cu: goto label_802DF39C;
    case 0x802DF3A0u: goto label_802DF3A0;
    case 0x802DF3A4u: goto label_802DF3A4;
    case 0x802DF3A8u: goto label_802DF3A8;
    case 0x802DF3ACu: goto label_802DF3AC;
    case 0x802DF3B0u: goto label_802DF3B0;
    case 0x802DF3B4u: goto label_802DF3B4;
    case 0x802DF3B8u: goto label_802DF3B8;
    case 0x802DF3BCu: goto label_802DF3BC;
    case 0x802DF3C0u: goto label_802DF3C0;
    case 0x802DF3C4u: goto label_802DF3C4;
    case 0x802DF3C8u: goto label_802DF3C8;
    case 0x802DF3CCu: goto label_802DF3CC;
    case 0x802DF3D0u: goto label_802DF3D0;
    case 0x802DF3D4u: goto label_802DF3D4;
    case 0x802DF3D8u: goto label_802DF3D8;
    case 0x802DF3DCu: goto label_802DF3DC;
    case 0x802DF3E0u: goto label_802DF3E0;
    case 0x802DF3E4u: goto label_802DF3E4;
    case 0x802DF3E8u: goto label_802DF3E8;
    case 0x802DF3ECu: goto label_802DF3EC;
    case 0x802DF3F0u: goto label_802DF3F0;
    case 0x802DF3F4u: goto label_802DF3F4;
    case 0x802DF3F8u: goto label_802DF3F8;
    case 0x802DF3FCu: goto label_802DF3FC;
    case 0x802DF400u: goto label_802DF400;
    case 0x802DF404u: goto label_802DF404;
    case 0x802DF408u: goto label_802DF408;
    case 0x802DF40Cu: goto label_802DF40C;
    case 0x802DF410u: goto label_802DF410;
    case 0x802DF414u: goto label_802DF414;
    case 0x802DF418u: goto label_802DF418;
    case 0x802DF41Cu: goto label_802DF41C;
    case 0x802DF420u: goto label_802DF420;
    case 0x802DF424u: goto label_802DF424;
    case 0x802DF428u: goto label_802DF428;
    case 0x802DF42Cu: goto label_802DF42C;
    case 0x802DF430u: goto label_802DF430;
    case 0x802DF434u: goto label_802DF434;
    case 0x802DF438u: goto label_802DF438;
    case 0x802DF43Cu: goto label_802DF43C;
    case 0x802DF440u: goto label_802DF440;
    case 0x802DF444u: goto label_802DF444;
    case 0x802DF448u: goto label_802DF448;
    case 0x802DF44Cu: goto label_802DF44C;
    case 0x802DF450u: goto label_802DF450;
    case 0x802DF454u: goto label_802DF454;
    case 0x802DF458u: goto label_802DF458;
    case 0x802DF45Cu: goto label_802DF45C;
    case 0x802DF460u: goto label_802DF460;
    case 0x802DF464u: goto label_802DF464;
    case 0x802DF468u: goto label_802DF468;
    case 0x802DF46Cu: goto label_802DF46C;
    case 0x802DF470u: goto label_802DF470;
    case 0x802DF474u: goto label_802DF474;
    case 0x802DF478u: goto label_802DF478;
    case 0x802DF47Cu: goto label_802DF47C;
    case 0x802DF480u: goto label_802DF480;
    case 0x802DF484u: goto label_802DF484;
    case 0x802DF488u: goto label_802DF488;
    case 0x802DF48Cu: goto label_802DF48C;
    case 0x802DF490u: goto label_802DF490;
    case 0x802DF494u: goto label_802DF494;
    case 0x802DF498u: goto label_802DF498;
    case 0x802DF49Cu: goto label_802DF49C;
    case 0x802DF4A0u: goto label_802DF4A0;
    case 0x802DF4A4u: goto label_802DF4A4;
    case 0x802DF4A8u: goto label_802DF4A8;
    case 0x802DF4ACu: goto label_802DF4AC;
    case 0x802DF4B0u: goto label_802DF4B0;
    case 0x802DF4B4u: goto label_802DF4B4;
    case 0x802DF4B8u: goto label_802DF4B8;
    case 0x802DF4BCu: goto label_802DF4BC;
    case 0x802DF4C0u: goto label_802DF4C0;
    case 0x802DF4C4u: goto label_802DF4C4;
    case 0x802DF4C8u: goto label_802DF4C8;
    case 0x802DF4CCu: goto label_802DF4CC;
    case 0x802DF4D0u: goto label_802DF4D0;
    case 0x802DF4D4u: goto label_802DF4D4;
    case 0x802DF4D8u: goto label_802DF4D8;
    case 0x802DF4DCu: goto label_802DF4DC;
    case 0x802DF4E0u: goto label_802DF4E0;
    case 0x802DF4E4u: goto label_802DF4E4;
    case 0x802DF4E8u: goto label_802DF4E8;
    case 0x802DF4ECu: goto label_802DF4EC;
    case 0x802DF4F0u: goto label_802DF4F0;
    case 0x802DF4F4u: goto label_802DF4F4;
    case 0x802DF4F8u: goto label_802DF4F8;
    case 0x802DF4FCu: goto label_802DF4FC;
    case 0x802DF500u: goto label_802DF500;
    case 0x802DF504u: goto label_802DF504;
    case 0x802DF508u: goto label_802DF508;
    case 0x802DF50Cu: goto label_802DF50C;
    case 0x802DF510u: goto label_802DF510;
    case 0x802DF514u: goto label_802DF514;
    case 0x802DF518u: goto label_802DF518;
    case 0x802DF51Cu: goto label_802DF51C;
    case 0x802DF520u: goto label_802DF520;
    case 0x802DF524u: goto label_802DF524;
    case 0x802DF528u: goto label_802DF528;
    case 0x802DF52Cu: goto label_802DF52C;
    case 0x802DF530u: goto label_802DF530;
    case 0x802DF534u: goto label_802DF534;
    case 0x802DF538u: goto label_802DF538;
    case 0x802DF53Cu: goto label_802DF53C;
    case 0x802DF540u: goto label_802DF540;
    case 0x802DF544u: goto label_802DF544;
    case 0x802DF548u: goto label_802DF548;
    case 0x802DF54Cu: goto label_802DF54C;
    case 0x802DF550u: goto label_802DF550;
    case 0x802DF554u: goto label_802DF554;
    case 0x802DF558u: goto label_802DF558;
    case 0x802DF55Cu: goto label_802DF55C;
    case 0x802DF560u: goto label_802DF560;
    case 0x802DF564u: goto label_802DF564;
    case 0x802DF568u: goto label_802DF568;
    case 0x802DF56Cu: goto label_802DF56C;
    case 0x802DF570u: goto label_802DF570;
    case 0x802DF574u: goto label_802DF574;
    case 0x802DF578u: goto label_802DF578;
    case 0x802DF57Cu: goto label_802DF57C;
    case 0x802DF580u: goto label_802DF580;
    case 0x802DF584u: goto label_802DF584;
    case 0x802DF588u: goto label_802DF588;
    case 0x802DF58Cu: goto label_802DF58C;
    case 0x802DF590u: goto label_802DF590;
    case 0x802DF594u: goto label_802DF594;
    case 0x802DF598u: goto label_802DF598;
    case 0x802DF59Cu: goto label_802DF59C;
    case 0x802DF5A0u: goto label_802DF5A0;
    case 0x802DF5A4u: goto label_802DF5A4;
    case 0x802DF5A8u: goto label_802DF5A8;
    case 0x802DF5ACu: goto label_802DF5AC;
    case 0x802DF5B0u: goto label_802DF5B0;
    case 0x802DF5B4u: goto label_802DF5B4;
    case 0x802DF5B8u: goto label_802DF5B8;
    case 0x802DF5BCu: goto label_802DF5BC;
    case 0x802DF5C0u: goto label_802DF5C0;
    case 0x802DF5C4u: goto label_802DF5C4;
    case 0x802DF5C8u: goto label_802DF5C8;
    case 0x802DF5CCu: goto label_802DF5CC;
    case 0x802DF5D0u: goto label_802DF5D0;
    case 0x802DF5D4u: goto label_802DF5D4;
    case 0x802DF5D8u: goto label_802DF5D8;
    case 0x802DF5DCu: goto label_802DF5DC;
    case 0x802DF5E0u: goto label_802DF5E0;
    case 0x802DF5E4u: goto label_802DF5E4;
    case 0x802DF5E8u: goto label_802DF5E8;
    case 0x802DF5ECu: goto label_802DF5EC;
    case 0x802DF5F0u: goto label_802DF5F0;
    case 0x802DF5F4u: goto label_802DF5F4;
    case 0x802DF5F8u: goto label_802DF5F8;
    case 0x802DF5FCu: goto label_802DF5FC;
    case 0x802DF600u: goto label_802DF600;
    case 0x802DF604u: goto label_802DF604;
    case 0x802DF608u: goto label_802DF608;
    case 0x802DF60Cu: goto label_802DF60C;
    case 0x802DF610u: goto label_802DF610;
    case 0x802DF614u: goto label_802DF614;
    case 0x802DF618u: goto label_802DF618;
    case 0x802DF61Cu: goto label_802DF61C;
    case 0x802DF620u: goto label_802DF620;
    case 0x802DF624u: goto label_802DF624;
    case 0x802DF628u: goto label_802DF628;
    case 0x802DF62Cu: goto label_802DF62C;
    case 0x802DF630u: goto label_802DF630;
    case 0x802DF634u: goto label_802DF634;
    case 0x802DF638u: goto label_802DF638;
    case 0x802DF63Cu: goto label_802DF63C;
    case 0x802DF640u: goto label_802DF640;
    case 0x802DF644u: goto label_802DF644;
    case 0x802DF648u: goto label_802DF648;
    case 0x802DF64Cu: goto label_802DF64C;
    case 0x802DF650u: goto label_802DF650;
    case 0x802DF654u: goto label_802DF654;
    case 0x802DF658u: goto label_802DF658;
    case 0x802DF65Cu: goto label_802DF65C;
    case 0x802DF660u: goto label_802DF660;
    case 0x802DF664u: goto label_802DF664;
    case 0x802DF668u: goto label_802DF668;
    case 0x802DF66Cu: goto label_802DF66C;
    case 0x802DF670u: goto label_802DF670;
    case 0x802DF674u: goto label_802DF674;
    case 0x802DF678u: goto label_802DF678;
    case 0x802DF67Cu: goto label_802DF67C;
    case 0x802DF680u: goto label_802DF680;
    case 0x802DF684u: goto label_802DF684;
    case 0x802DF688u: goto label_802DF688;
    case 0x802DF68Cu: goto label_802DF68C;
    case 0x802DF690u: goto label_802DF690;
    case 0x802DF694u: goto label_802DF694;
    case 0x802DF698u: goto label_802DF698;
    case 0x802DF69Cu: goto label_802DF69C;
    case 0x802DF6A0u: goto label_802DF6A0;
    case 0x802DF6A4u: goto label_802DF6A4;
    case 0x802DF6A8u: goto label_802DF6A8;
    case 0x802DF6ACu: goto label_802DF6AC;
    case 0x802DF6B0u: goto label_802DF6B0;
    case 0x802DF6B4u: goto label_802DF6B4;
    case 0x802DF6B8u: goto label_802DF6B8;
    case 0x802DF6BCu: goto label_802DF6BC;
    case 0x802DF6C0u: goto label_802DF6C0;
    case 0x802DF6C4u: goto label_802DF6C4;
    case 0x802DF6C8u: goto label_802DF6C8;
    case 0x802DF6CCu: goto label_802DF6CC;
    case 0x802DF6D0u: goto label_802DF6D0;
    case 0x802DF6D4u: goto label_802DF6D4;
    case 0x802DF6D8u: goto label_802DF6D8;
    case 0x802DF6DCu: goto label_802DF6DC;
    case 0x802DF6E0u: goto label_802DF6E0;
    case 0x802DF6E4u: goto label_802DF6E4;
    case 0x802DF6E8u: goto label_802DF6E8;
    case 0x802DF6ECu: goto label_802DF6EC;
    case 0x802DF6F0u: goto label_802DF6F0;
    case 0x802DF6F4u: goto label_802DF6F4;
    case 0x802DF6F8u: goto label_802DF6F8;
    case 0x802DF6FCu: goto label_802DF6FC;
    case 0x802DF700u: goto label_802DF700;
    case 0x802DF704u: goto label_802DF704;
    case 0x802DF708u: goto label_802DF708;
    case 0x802DF70Cu: goto label_802DF70C;
    case 0x802DF710u: goto label_802DF710;
    case 0x802DF714u: goto label_802DF714;
    case 0x802DF718u: goto label_802DF718;
    case 0x802DF71Cu: goto label_802DF71C;
    case 0x802DF720u: goto label_802DF720;
    case 0x802DF724u: goto label_802DF724;
    case 0x802DF728u: goto label_802DF728;
    case 0x802DF72Cu: goto label_802DF72C;
    case 0x802DF730u: goto label_802DF730;
    case 0x802DF734u: goto label_802DF734;
    case 0x802DF738u: goto label_802DF738;
    case 0x802DF73Cu: goto label_802DF73C;
    case 0x802DF740u: goto label_802DF740;
    case 0x802DF744u: goto label_802DF744;
    case 0x802DF748u: goto label_802DF748;
    case 0x802DF74Cu: goto label_802DF74C;
    case 0x802DF750u: goto label_802DF750;
    case 0x802DF754u: goto label_802DF754;
    case 0x802DF758u: goto label_802DF758;
    case 0x802DF75Cu: goto label_802DF75C;
    case 0x802DF760u: goto label_802DF760;
    case 0x802DF764u: goto label_802DF764;
    case 0x802DF768u: goto label_802DF768;
    case 0x802DF76Cu: goto label_802DF76C;
    case 0x802DF770u: goto label_802DF770;
    case 0x802DF774u: goto label_802DF774;
    case 0x802DF778u: goto label_802DF778;
    case 0x802DF77Cu: goto label_802DF77C;
    case 0x802DF780u: goto label_802DF780;
    case 0x802DF784u: goto label_802DF784;
    case 0x802DF788u: goto label_802DF788;
    case 0x802DF78Cu: goto label_802DF78C;
    case 0x802DF790u: goto label_802DF790;
    case 0x802DF794u: goto label_802DF794;
    case 0x802DF798u: goto label_802DF798;
    case 0x802DF79Cu: goto label_802DF79C;
    case 0x802DF7A0u: goto label_802DF7A0;
    case 0x802DF7A4u: goto label_802DF7A4;
    case 0x802DF7A8u: goto label_802DF7A8;
    case 0x802DF7ACu: goto label_802DF7AC;
    case 0x802DF7B0u: goto label_802DF7B0;
    case 0x802DF7B4u: goto label_802DF7B4;
    case 0x802DF7B8u: goto label_802DF7B8;
    case 0x802DF7BCu: goto label_802DF7BC;
    case 0x802DF7C0u: goto label_802DF7C0;
    case 0x802DF7C4u: goto label_802DF7C4;
    case 0x802DF7C8u: goto label_802DF7C8;
    case 0x802DF7CCu: goto label_802DF7CC;
    case 0x802DF7D0u: goto label_802DF7D0;
    case 0x802DF7D4u: goto label_802DF7D4;
    case 0x802DF7D8u: goto label_802DF7D8;
    case 0x802DF7DCu: goto label_802DF7DC;
    case 0x802DF7E0u: goto label_802DF7E0;
    case 0x802DF7E4u: goto label_802DF7E4;
    case 0x802DF7E8u: goto label_802DF7E8;
    case 0x802DF7ECu: goto label_802DF7EC;
    case 0x802DF7F0u: goto label_802DF7F0;
    case 0x802DF7F4u: goto label_802DF7F4;
    case 0x802DF7F8u: goto label_802DF7F8;
    case 0x802DF7FCu: goto label_802DF7FC;
    case 0x802DF800u: goto label_802DF800;
    case 0x802DF804u: goto label_802DF804;
    case 0x802DF808u: goto label_802DF808;
    case 0x802DF80Cu: goto label_802DF80C;
    case 0x802DF810u: goto label_802DF810;
    case 0x802DF814u: goto label_802DF814;
    case 0x802DF818u: goto label_802DF818;
    case 0x802DF81Cu: goto label_802DF81C;
    case 0x802DF820u: goto label_802DF820;
    case 0x802DF824u: goto label_802DF824;
    case 0x802DF828u: goto label_802DF828;
    case 0x802DF82Cu: goto label_802DF82C;
    case 0x802DF830u: goto label_802DF830;
    case 0x802DF834u: goto label_802DF834;
    case 0x802DF838u: goto label_802DF838;
    case 0x802DF83Cu: goto label_802DF83C;
    case 0x802DF840u: goto label_802DF840;
    case 0x802DF844u: goto label_802DF844;
    case 0x802DF848u: goto label_802DF848;
    case 0x802DF84Cu: goto label_802DF84C;
    case 0x802DF850u: goto label_802DF850;
    case 0x802DF854u: goto label_802DF854;
    case 0x802DF858u: goto label_802DF858;
    case 0x802DF85Cu: goto label_802DF85C;
    case 0x802DF860u: goto label_802DF860;
    case 0x802DF864u: goto label_802DF864;
    case 0x802DF868u: goto label_802DF868;
    case 0x802DF86Cu: goto label_802DF86C;
    case 0x802DF870u: goto label_802DF870;
    case 0x802DF874u: goto label_802DF874;
    case 0x802DF878u: goto label_802DF878;
    case 0x802DF87Cu: goto label_802DF87C;
    case 0x802DF880u: goto label_802DF880;
    case 0x802DF884u: goto label_802DF884;
    case 0x802DF888u: goto label_802DF888;
    case 0x802DF88Cu: goto label_802DF88C;
    case 0x802DF890u: goto label_802DF890;
    case 0x802DF894u: goto label_802DF894;
    case 0x802DF898u: goto label_802DF898;
    case 0x802DF89Cu: goto label_802DF89C;
    case 0x802DF8A0u: goto label_802DF8A0;
    case 0x802DF8A4u: goto label_802DF8A4;
    case 0x802DF8A8u: goto label_802DF8A8;
    case 0x802DF8ACu: goto label_802DF8AC;
    case 0x802DF8B0u: goto label_802DF8B0;
    case 0x802DF8B4u: goto label_802DF8B4;
    case 0x802DF8B8u: goto label_802DF8B8;
    case 0x802DF8BCu: goto label_802DF8BC;
    case 0x802DF8C0u: goto label_802DF8C0;
    case 0x802DF8C4u: goto label_802DF8C4;
    case 0x802DF8C8u: goto label_802DF8C8;
    case 0x802DF8CCu: goto label_802DF8CC;
    case 0x802DF8D0u: goto label_802DF8D0;
    case 0x802DF8D4u: goto label_802DF8D4;
    case 0x802DF8D8u: goto label_802DF8D8;
    case 0x802DF8DCu: goto label_802DF8DC;
    case 0x802DF8E0u: goto label_802DF8E0;
    case 0x802DF8E4u: goto label_802DF8E4;
    case 0x802DF8E8u: goto label_802DF8E8;
    case 0x802DF8ECu: goto label_802DF8EC;
    case 0x802DF8F0u: goto label_802DF8F0;
    case 0x802DF8F4u: goto label_802DF8F4;
    case 0x802DF8F8u: goto label_802DF8F8;
    case 0x802DF8FCu: goto label_802DF8FC;
    case 0x802DF900u: goto label_802DF900;
    case 0x802DF904u: goto label_802DF904;
    case 0x802DF908u: goto label_802DF908;
    case 0x802DF90Cu: goto label_802DF90C;
    case 0x802DF910u: goto label_802DF910;
    case 0x802DF914u: goto label_802DF914;
    case 0x802DF918u: goto label_802DF918;
    case 0x802DF91Cu: goto label_802DF91C;
    case 0x802DF920u: goto label_802DF920;
    case 0x802DF924u: goto label_802DF924;
    case 0x802DF928u: goto label_802DF928;
    case 0x802DF92Cu: goto label_802DF92C;
    case 0x802DF930u: goto label_802DF930;
    case 0x802DF934u: goto label_802DF934;
    case 0x802DF938u: goto label_802DF938;
    case 0x802DF93Cu: goto label_802DF93C;
    case 0x802DF940u: goto label_802DF940;
    case 0x802DF944u: goto label_802DF944;
    case 0x802DF948u: goto label_802DF948;
    case 0x802DF94Cu: goto label_802DF94C;
    case 0x802DF950u: goto label_802DF950;
    case 0x802DF954u: goto label_802DF954;
    case 0x802DF958u: goto label_802DF958;
    case 0x802DF95Cu: goto label_802DF95C;
    case 0x802DF960u: goto label_802DF960;
    case 0x802DF964u: goto label_802DF964;
    case 0x802DF968u: goto label_802DF968;
    case 0x802DF96Cu: goto label_802DF96C;
    case 0x802DF970u: goto label_802DF970;
    case 0x802DF974u: goto label_802DF974;
    case 0x802DF978u: goto label_802DF978;
    case 0x802DF97Cu: goto label_802DF97C;
    case 0x802DF980u: goto label_802DF980;
    case 0x802DF984u: goto label_802DF984;
    case 0x802DF988u: goto label_802DF988;
    case 0x802DF98Cu: goto label_802DF98C;
    case 0x802DF990u: goto label_802DF990;
    case 0x802DF994u: goto label_802DF994;
    case 0x802DF998u: goto label_802DF998;
    case 0x802DF99Cu: goto label_802DF99C;
    case 0x802DF9A0u: goto label_802DF9A0;
    case 0x802DF9A4u: goto label_802DF9A4;
    case 0x802DF9A8u: goto label_802DF9A8;
    case 0x802DF9ACu: goto label_802DF9AC;
    case 0x802DF9B0u: goto label_802DF9B0;
    case 0x802DF9B4u: goto label_802DF9B4;
    case 0x802DF9B8u: goto label_802DF9B8;
    case 0x802DF9BCu: goto label_802DF9BC;
    case 0x802DF9C0u: goto label_802DF9C0;
    case 0x802DF9C4u: goto label_802DF9C4;
    case 0x802DF9C8u: goto label_802DF9C8;
    case 0x802DF9CCu: goto label_802DF9CC;
    case 0x802DF9D0u: goto label_802DF9D0;
    case 0x802DF9D4u: goto label_802DF9D4;
    case 0x802DF9D8u: goto label_802DF9D8;
    case 0x802DF9DCu: goto label_802DF9DC;
    case 0x802DF9E0u: goto label_802DF9E0;
    case 0x802DF9E4u: goto label_802DF9E4;
    case 0x802DF9E8u: goto label_802DF9E8;
    case 0x802DF9ECu: goto label_802DF9EC;
    case 0x802DF9F0u: goto label_802DF9F0;
    case 0x802DF9F4u: goto label_802DF9F4;
    case 0x802DF9F8u: goto label_802DF9F8;
    case 0x802DF9FCu: goto label_802DF9FC;
    case 0x802DFA00u: goto label_802DFA00;
    case 0x802DFA04u: goto label_802DFA04;
    case 0x802DFA08u: goto label_802DFA08;
    case 0x802DFA0Cu: goto label_802DFA0C;
    case 0x802DFA10u: goto label_802DFA10;
    case 0x802DFA14u: goto label_802DFA14;
    case 0x802DFA18u: goto label_802DFA18;
    case 0x802DFA1Cu: goto label_802DFA1C;
    case 0x802DFA20u: goto label_802DFA20;
    case 0x802DFA24u: goto label_802DFA24;
    case 0x802DFA28u: goto label_802DFA28;
    case 0x802DFA2Cu: goto label_802DFA2C;
    case 0x802DFA30u: goto label_802DFA30;
    case 0x802DFA34u: goto label_802DFA34;
    case 0x802DFA38u: goto label_802DFA38;
    case 0x802DFA3Cu: goto label_802DFA3C;
    case 0x802DFA40u: goto label_802DFA40;
    case 0x802DFA44u: goto label_802DFA44;
    case 0x802DFA48u: goto label_802DFA48;
    case 0x802DFA4Cu: goto label_802DFA4C;
    case 0x802DFA50u: goto label_802DFA50;
    case 0x802DFA54u: goto label_802DFA54;
    case 0x802DFA58u: goto label_802DFA58;
    case 0x802DFA5Cu: goto label_802DFA5C;
    case 0x802DFA60u: goto label_802DFA60;
    case 0x802DFA64u: goto label_802DFA64;
    case 0x802DFA68u: goto label_802DFA68;
    case 0x802DFA6Cu: goto label_802DFA6C;
    case 0x802DFA70u: goto label_802DFA70;
    case 0x802DFA74u: goto label_802DFA74;
    case 0x802DFA78u: goto label_802DFA78;
    case 0x802DFA7Cu: goto label_802DFA7C;
    case 0x802DFA80u: goto label_802DFA80;
    case 0x802DFA84u: goto label_802DFA84;
    case 0x802DFA88u: goto label_802DFA88;
    case 0x802DFA8Cu: goto label_802DFA8C;
    case 0x802DFA90u: goto label_802DFA90;
    case 0x802DFA94u: goto label_802DFA94;
    case 0x802DFA98u: goto label_802DFA98;
    case 0x802DFA9Cu: goto label_802DFA9C;
    case 0x802DFAA0u: goto label_802DFAA0;
    case 0x802DFAA4u: goto label_802DFAA4;
    case 0x802DFAA8u: goto label_802DFAA8;
    case 0x802DFAACu: goto label_802DFAAC;
    case 0x802DFAB0u: goto label_802DFAB0;
    case 0x802DFAB4u: goto label_802DFAB4;
    case 0x802DFAB8u: goto label_802DFAB8;
    case 0x802DFABCu: goto label_802DFABC;
    case 0x802DFAC0u: goto label_802DFAC0;
    case 0x802DFAC4u: goto label_802DFAC4;
    case 0x802DFAC8u: goto label_802DFAC8;
    case 0x802DFACCu: goto label_802DFACC;
    case 0x802DFAD0u: goto label_802DFAD0;
    case 0x802DFAD4u: goto label_802DFAD4;
    case 0x802DFAD8u: goto label_802DFAD8;
    case 0x802DFADCu: goto label_802DFADC;
    case 0x802DFAE0u: goto label_802DFAE0;
    case 0x802DFAE4u: goto label_802DFAE4;
    case 0x802DFAE8u: goto label_802DFAE8;
    case 0x802DFAECu: goto label_802DFAEC;
    case 0x802DFAF0u: goto label_802DFAF0;
    case 0x802DFAF4u: goto label_802DFAF4;
    case 0x802DFAF8u: goto label_802DFAF8;
    case 0x802DFAFCu: goto label_802DFAFC;
    case 0x802DFB00u: goto label_802DFB00;
    case 0x802DFB04u: goto label_802DFB04;
    case 0x802DFB08u: goto label_802DFB08;
    case 0x802DFB0Cu: goto label_802DFB0C;
    case 0x802DFB10u: goto label_802DFB10;
    case 0x802DFB14u: goto label_802DFB14;
    case 0x802DFB18u: goto label_802DFB18;
    case 0x802DFB1Cu: goto label_802DFB1C;
    case 0x802DFB20u: goto label_802DFB20;
    case 0x802DFB24u: goto label_802DFB24;
    case 0x802DFB28u: goto label_802DFB28;
    case 0x802DFB2Cu: goto label_802DFB2C;
    case 0x802DFB30u: goto label_802DFB30;
    case 0x802DFB34u: goto label_802DFB34;
    case 0x802DFB38u: goto label_802DFB38;
    case 0x802DFB3Cu: goto label_802DFB3C;
    case 0x802DFB40u: goto label_802DFB40;
    case 0x802DFB44u: goto label_802DFB44;
    case 0x802DFB48u: goto label_802DFB48;
    case 0x802DFB4Cu: goto label_802DFB4C;
    case 0x802DFB50u: goto label_802DFB50;
    case 0x802DFB54u: goto label_802DFB54;
    case 0x802DFB58u: goto label_802DFB58;
    case 0x802DFB5Cu: goto label_802DFB5C;
    case 0x802DFB60u: goto label_802DFB60;
    case 0x802DFB64u: goto label_802DFB64;
    case 0x802DFB68u: goto label_802DFB68;
    case 0x802DFB6Cu: goto label_802DFB6C;
    case 0x802DFB70u: goto label_802DFB70;
    case 0x802DFB74u: goto label_802DFB74;
    case 0x802DFB78u: goto label_802DFB78;
    case 0x802DFB7Cu: goto label_802DFB7C;
    case 0x802DFB80u: goto label_802DFB80;
    case 0x802DFB84u: goto label_802DFB84;
    case 0x802DFB88u: goto label_802DFB88;
    case 0x802DFB8Cu: goto label_802DFB8C;
    case 0x802DFB90u: goto label_802DFB90;
    case 0x802DFB94u: goto label_802DFB94;
    case 0x802DFB98u: goto label_802DFB98;
    case 0x802DFB9Cu: goto label_802DFB9C;
    case 0x802DFBA0u: goto label_802DFBA0;
    case 0x802DFBA4u: goto label_802DFBA4;
    case 0x802DFBA8u: goto label_802DFBA8;
    case 0x802DFBACu: goto label_802DFBAC;
    case 0x802DFBB0u: goto label_802DFBB0;
    case 0x802DFBB4u: goto label_802DFBB4;
    case 0x802DFBB8u: goto label_802DFBB8;
    case 0x802DFBBCu: goto label_802DFBBC;
    case 0x802DFBC0u: goto label_802DFBC0;
    case 0x802DFBC4u: goto label_802DFBC4;
    case 0x802DFBC8u: goto label_802DFBC8;
    case 0x802DFBCCu: goto label_802DFBCC;
    case 0x802DFBD0u: goto label_802DFBD0;
    case 0x802DFBD4u: goto label_802DFBD4;
    case 0x802DFBD8u: goto label_802DFBD8;
    case 0x802DFBDCu: goto label_802DFBDC;
    case 0x802DFBE0u: goto label_802DFBE0;
    case 0x802DFBE4u: goto label_802DFBE4;
    case 0x802DFBE8u: goto label_802DFBE8;
    case 0x802DFBECu: goto label_802DFBEC;
    case 0x802DFBF0u: goto label_802DFBF0;
    case 0x802DFBF4u: goto label_802DFBF4;
    case 0x802DFBF8u: goto label_802DFBF8;
    case 0x802DFBFCu: goto label_802DFBFC;
    case 0x802DFC00u: goto label_802DFC00;
    case 0x802DFC04u: goto label_802DFC04;
    case 0x802DFC08u: goto label_802DFC08;
    case 0x802DFC0Cu: goto label_802DFC0C;
    case 0x802DFC10u: goto label_802DFC10;
    case 0x802DFC14u: goto label_802DFC14;
    case 0x802DFC18u: goto label_802DFC18;
    case 0x802DFC1Cu: goto label_802DFC1C;
    case 0x802DFC20u: goto label_802DFC20;
    case 0x802DFC24u: goto label_802DFC24;
    case 0x802DFC28u: goto label_802DFC28;
    case 0x802DFC2Cu: goto label_802DFC2C;
    case 0x802DFC30u: goto label_802DFC30;
    case 0x802DFC34u: goto label_802DFC34;
    case 0x802DFC38u: goto label_802DFC38;
    case 0x802DFC3Cu: goto label_802DFC3C;
    case 0x802DFC40u: goto label_802DFC40;
    case 0x802DFC44u: goto label_802DFC44;
    case 0x802DFC48u: goto label_802DFC48;
    case 0x802DFC4Cu: goto label_802DFC4C;
    case 0x802DFC50u: goto label_802DFC50;
    case 0x802DFC54u: goto label_802DFC54;
    case 0x802DFC58u: goto label_802DFC58;
    case 0x802DFC5Cu: goto label_802DFC5C;
    case 0x802DFC60u: goto label_802DFC60;
    case 0x802DFC64u: goto label_802DFC64;
    case 0x802DFC68u: goto label_802DFC68;
    case 0x802DFC6Cu: goto label_802DFC6C;
    case 0x802DFC70u: goto label_802DFC70;
    case 0x802DFC74u: goto label_802DFC74;
    case 0x802DFC78u: goto label_802DFC78;
    case 0x802DFC7Cu: goto label_802DFC7C;
    case 0x802DFC80u: goto label_802DFC80;
    case 0x802DFC84u: goto label_802DFC84;
    case 0x802DFC88u: goto label_802DFC88;
    case 0x802DFC8Cu: goto label_802DFC8C;
    case 0x802DFC90u: goto label_802DFC90;
    case 0x802DFC94u: goto label_802DFC94;
    case 0x802DFC98u: goto label_802DFC98;
    case 0x802DFC9Cu: goto label_802DFC9C;
    case 0x802DFCA0u: goto label_802DFCA0;
    case 0x802DFCA4u: goto label_802DFCA4;
    case 0x802DFCA8u: goto label_802DFCA8;
    case 0x802DFCACu: goto label_802DFCAC;
    case 0x802DFCB0u: goto label_802DFCB0;
    case 0x802DFCB4u: goto label_802DFCB4;
    case 0x802DFCB8u: goto label_802DFCB8;
    case 0x802DFCBCu: goto label_802DFCBC;
    case 0x802DFCC0u: goto label_802DFCC0;
    case 0x802DFCC4u: goto label_802DFCC4;
    case 0x802DFCC8u: goto label_802DFCC8;
    case 0x802DFCCCu: goto label_802DFCCC;
    case 0x802DFCD0u: goto label_802DFCD0;
    case 0x802DFCD4u: goto label_802DFCD4;
    case 0x802DFCD8u: goto label_802DFCD8;
    case 0x802DFCDCu: goto label_802DFCDC;
    case 0x802DFCE0u: goto label_802DFCE0;
    case 0x802DFCE4u: goto label_802DFCE4;
    case 0x802DFCE8u: goto label_802DFCE8;
    case 0x802DFCECu: goto label_802DFCEC;
    case 0x802DFCF0u: goto label_802DFCF0;
    case 0x802DFCF4u: goto label_802DFCF4;
    case 0x802DFCF8u: goto label_802DFCF8;
    case 0x802DFCFCu: goto label_802DFCFC;
    case 0x802DFD00u: goto label_802DFD00;
    case 0x802DFD04u: goto label_802DFD04;
    case 0x802DFD08u: goto label_802DFD08;
    case 0x802DFD0Cu: goto label_802DFD0C;
    case 0x802DFD10u: goto label_802DFD10;
    case 0x802DFD14u: goto label_802DFD14;
    case 0x802DFD18u: goto label_802DFD18;
    case 0x802DFD1Cu: goto label_802DFD1C;
    case 0x802DFD20u: goto label_802DFD20;
    case 0x802DFD24u: goto label_802DFD24;
    case 0x802DFD28u: goto label_802DFD28;
    case 0x802DFD2Cu: goto label_802DFD2C;
    case 0x802DFD30u: goto label_802DFD30;
    case 0x802DFD34u: goto label_802DFD34;
    case 0x802DFD38u: goto label_802DFD38;
    case 0x802DFD3Cu: goto label_802DFD3C;
    case 0x802DFD40u: goto label_802DFD40;
    case 0x802DFD44u: goto label_802DFD44;
    case 0x802DFD48u: goto label_802DFD48;
    case 0x802DFD4Cu: goto label_802DFD4C;
    case 0x802DFD50u: goto label_802DFD50;
    case 0x802DFD54u: goto label_802DFD54;
    case 0x802DFD58u: goto label_802DFD58;
    case 0x802DFD5Cu: goto label_802DFD5C;
    case 0x802DFD60u: goto label_802DFD60;
    case 0x802DFD64u: goto label_802DFD64;
    case 0x802DFD68u: goto label_802DFD68;
    case 0x802DFD6Cu: goto label_802DFD6C;
    case 0x802DFD70u: goto label_802DFD70;
    case 0x802DFD74u: goto label_802DFD74;
    case 0x802DFD78u: goto label_802DFD78;
    case 0x802DFD7Cu: goto label_802DFD7C;
    case 0x802DFD80u: goto label_802DFD80;
    case 0x802DFD84u: goto label_802DFD84;
    case 0x802DFD88u: goto label_802DFD88;
    case 0x802DFD8Cu: goto label_802DFD8C;
    case 0x802DFD90u: goto label_802DFD90;
    case 0x802DFD94u: goto label_802DFD94;
    case 0x802DFD98u: goto label_802DFD98;
    case 0x802DFD9Cu: goto label_802DFD9C;
    case 0x802DFDA0u: goto label_802DFDA0;
    case 0x802DFDA4u: goto label_802DFDA4;
    case 0x802DFDA8u: goto label_802DFDA8;
    case 0x802DFDACu: goto label_802DFDAC;
    case 0x802DFDB0u: goto label_802DFDB0;
    case 0x802DFDB4u: goto label_802DFDB4;
    case 0x802DFDB8u: goto label_802DFDB8;
    case 0x802DFDBCu: goto label_802DFDBC;
    case 0x802DFDC0u: goto label_802DFDC0;
    case 0x802DFDC4u: goto label_802DFDC4;
    case 0x802DFDC8u: goto label_802DFDC8;
    case 0x802DFDCCu: goto label_802DFDCC;
    case 0x802DFDD0u: goto label_802DFDD0;
    case 0x802DFDD4u: goto label_802DFDD4;
    case 0x802DFDD8u: goto label_802DFDD8;
    case 0x802DFDDCu: goto label_802DFDDC;
    case 0x802DFDE0u: goto label_802DFDE0;
    case 0x802DFDE4u: goto label_802DFDE4;
    case 0x802DFDE8u: goto label_802DFDE8;
    case 0x802DFDECu: goto label_802DFDEC;
    case 0x802DFDF0u: goto label_802DFDF0;
    case 0x802DFDF4u: goto label_802DFDF4;
    case 0x802DFDF8u: goto label_802DFDF8;
    case 0x802DFDFCu: goto label_802DFDFC;
    case 0x802DFE00u: goto label_802DFE00;
    case 0x802DFE04u: goto label_802DFE04;
    case 0x802DFE08u: goto label_802DFE08;
    case 0x802DFE0Cu: goto label_802DFE0C;
    case 0x802DFE10u: goto label_802DFE10;
    case 0x802DFE14u: goto label_802DFE14;
    case 0x802DFE18u: goto label_802DFE18;
    case 0x802DFE1Cu: goto label_802DFE1C;
    case 0x802DFE20u: goto label_802DFE20;
    case 0x802DFE24u: goto label_802DFE24;
    case 0x802DFE28u: goto label_802DFE28;
    case 0x802DFE2Cu: goto label_802DFE2C;
    case 0x802DFE30u: goto label_802DFE30;
    case 0x802DFE34u: goto label_802DFE34;
    case 0x802DFE38u: goto label_802DFE38;
    case 0x802DFE3Cu: goto label_802DFE3C;
    case 0x802DFE40u: goto label_802DFE40;
    case 0x802DFE44u: goto label_802DFE44;
    case 0x802DFE48u: goto label_802DFE48;
    case 0x802DFE4Cu: goto label_802DFE4C;
    case 0x802DFE50u: goto label_802DFE50;
    case 0x802DFE54u: goto label_802DFE54;
    case 0x802DFE58u: goto label_802DFE58;
    case 0x802DFE5Cu: goto label_802DFE5C;
    case 0x802DFE60u: goto label_802DFE60;
    case 0x802DFE64u: goto label_802DFE64;
    case 0x802DFE68u: goto label_802DFE68;
    case 0x802DFE6Cu: goto label_802DFE6C;
    case 0x802DFE70u: goto label_802DFE70;
    case 0x802DFE74u: goto label_802DFE74;
    case 0x802DFE78u: goto label_802DFE78;
    case 0x802DFE7Cu: goto label_802DFE7C;
    case 0x802DFE80u: goto label_802DFE80;
    case 0x802DFE84u: goto label_802DFE84;
    case 0x802DFE88u: goto label_802DFE88;
    case 0x802DFE8Cu: goto label_802DFE8C;
    case 0x802DFE90u: goto label_802DFE90;
    case 0x802DFE94u: goto label_802DFE94;
    case 0x802DFE98u: goto label_802DFE98;
    case 0x802DFE9Cu: goto label_802DFE9C;
    case 0x802DFEA0u: goto label_802DFEA0;
    case 0x802DFEA4u: goto label_802DFEA4;
    case 0x802DFEA8u: goto label_802DFEA8;
    case 0x802DFEACu: goto label_802DFEAC;
    case 0x802DFEB0u: goto label_802DFEB0;
    case 0x802DFEB4u: goto label_802DFEB4;
    case 0x802DFEB8u: goto label_802DFEB8;
    case 0x802DFEBCu: goto label_802DFEBC;
    case 0x802DFEC0u: goto label_802DFEC0;
    case 0x802DFEC4u: goto label_802DFEC4;
    case 0x802DFEC8u: goto label_802DFEC8;
    case 0x802DFECCu: goto label_802DFECC;
    case 0x802DFED0u: goto label_802DFED0;
    case 0x802DFED4u: goto label_802DFED4;
    case 0x802DFED8u: goto label_802DFED8;
    case 0x802DFEDCu: goto label_802DFEDC;
    case 0x802DFEE0u: goto label_802DFEE0;
    case 0x802DFEE4u: goto label_802DFEE4;
    case 0x802DFEE8u: goto label_802DFEE8;
    case 0x802DFEECu: goto label_802DFEEC;
    case 0x802DFEF0u: goto label_802DFEF0;
    case 0x802DFEF4u: goto label_802DFEF4;
    case 0x802DFEF8u: goto label_802DFEF8;
    case 0x802DFEFCu: goto label_802DFEFC;
    case 0x802DFF00u: goto label_802DFF00;
    case 0x802DFF04u: goto label_802DFF04;
    case 0x802DFF08u: goto label_802DFF08;
    case 0x802DFF0Cu: goto label_802DFF0C;
    case 0x802DFF10u: goto label_802DFF10;
    case 0x802DFF14u: goto label_802DFF14;
    case 0x802DFF18u: goto label_802DFF18;
    case 0x802DFF1Cu: goto label_802DFF1C;
    case 0x802DFF20u: goto label_802DFF20;
    case 0x802DFF24u: goto label_802DFF24;
    case 0x802DFF28u: goto label_802DFF28;
    case 0x802DFF2Cu: goto label_802DFF2C;
    case 0x802DFF30u: goto label_802DFF30;
    case 0x802DFF34u: goto label_802DFF34;
    case 0x802DFF38u: goto label_802DFF38;
    case 0x802DFF3Cu: goto label_802DFF3C;
    case 0x802DFF40u: goto label_802DFF40;
    case 0x802DFF44u: goto label_802DFF44;
    case 0x802DFF48u: goto label_802DFF48;
    case 0x802DFF4Cu: goto label_802DFF4C;
    case 0x802DFF50u: goto label_802DFF50;
    case 0x802DFF54u: goto label_802DFF54;
    case 0x802DFF58u: goto label_802DFF58;
    case 0x802DFF5Cu: goto label_802DFF5C;
    case 0x802DFF60u: goto label_802DFF60;
    case 0x802DFF64u: goto label_802DFF64;
    case 0x802DFF68u: goto label_802DFF68;
    case 0x802DFF6Cu: goto label_802DFF6C;
    case 0x802DFF70u: goto label_802DFF70;
    case 0x802DFF74u: goto label_802DFF74;
    case 0x802DFF78u: goto label_802DFF78;
    case 0x802DFF7Cu: goto label_802DFF7C;
    case 0x802DFF80u: goto label_802DFF80;
    case 0x802DFF84u: goto label_802DFF84;
    case 0x802DFF88u: goto label_802DFF88;
    case 0x802DFF8Cu: goto label_802DFF8C;
    case 0x802DFF90u: goto label_802DFF90;
    case 0x802DFF94u: goto label_802DFF94;
    case 0x802DFF98u: goto label_802DFF98;
    case 0x802DFF9Cu: goto label_802DFF9C;
    case 0x802DFFA0u: goto label_802DFFA0;
    case 0x802DFFA4u: goto label_802DFFA4;
    case 0x802DFFA8u: goto label_802DFFA8;
    case 0x802DFFACu: goto label_802DFFAC;
    case 0x802DFFB0u: goto label_802DFFB0;
    case 0x802DFFB4u: goto label_802DFFB4;
    case 0x802DFFB8u: goto label_802DFFB8;
    case 0x802DFFBCu: goto label_802DFFBC;
    case 0x802DFFC0u: goto label_802DFFC0;
    case 0x802DFFC4u: goto label_802DFFC4;
    case 0x802DFFC8u: goto label_802DFFC8;
    case 0x802DFFCCu: goto label_802DFFCC;
    case 0x802DFFD0u: goto label_802DFFD0;
    case 0x802DFFD4u: goto label_802DFFD4;
    case 0x802DFFD8u: goto label_802DFFD8;
    case 0x802DFFDCu: goto label_802DFFDC;
    case 0x802DFFE0u: goto label_802DFFE0;
    case 0x802DFFE4u: goto label_802DFFE4;
    case 0x802DFFE8u: goto label_802DFFE8;
    case 0x802DFFECu: goto label_802DFFEC;
    case 0x802DFFF0u: goto label_802DFFF0;
    case 0x802DFFF4u: goto label_802DFFF4;
    case 0x802DFFF8u: goto label_802DFFF8;
    case 0x802DFFFCu: goto label_802DFFFC;
    case 0x802E0000u: goto label_802E0000;
    case 0x802E0004u: goto label_802E0004;
    case 0x802E0008u: goto label_802E0008;
    case 0x802E000Cu: goto label_802E000C;
    case 0x802E0010u: goto label_802E0010;
    case 0x802E0014u: goto label_802E0014;
    case 0x802E0018u: goto label_802E0018;
    case 0x802E001Cu: goto label_802E001C;
    case 0x802E0020u: goto label_802E0020;
    case 0x802E0024u: goto label_802E0024;
    case 0x802E0028u: goto label_802E0028;
    case 0x802E002Cu: goto label_802E002C;
    case 0x802E0030u: goto label_802E0030;
    case 0x802E0034u: goto label_802E0034;
    case 0x802E0038u: goto label_802E0038;
    case 0x802E003Cu: goto label_802E003C;
    case 0x802E0040u: goto label_802E0040;
    case 0x802E0044u: goto label_802E0044;
    case 0x802E0048u: goto label_802E0048;
    case 0x802E004Cu: goto label_802E004C;
    case 0x802E0050u: goto label_802E0050;
    case 0x802E0054u: goto label_802E0054;
    case 0x802E0058u: goto label_802E0058;
    case 0x802E005Cu: goto label_802E005C;
    case 0x802E0060u: goto label_802E0060;
    case 0x802E0064u: goto label_802E0064;
    case 0x802E0068u: goto label_802E0068;
    case 0x802E006Cu: goto label_802E006C;
    case 0x802E0070u: goto label_802E0070;
    case 0x802E0074u: goto label_802E0074;
    case 0x802E0078u: goto label_802E0078;
    case 0x802E007Cu: goto label_802E007C;
    case 0x802E0080u: goto label_802E0080;
    case 0x802E0084u: goto label_802E0084;
    case 0x802E0088u: goto label_802E0088;
    case 0x802E008Cu: goto label_802E008C;
    case 0x802E0090u: goto label_802E0090;
    case 0x802E0094u: goto label_802E0094;
    case 0x802E0098u: goto label_802E0098;
    case 0x802E009Cu: goto label_802E009C;
    case 0x802E00A0u: goto label_802E00A0;
    case 0x802E00A4u: goto label_802E00A4;
    case 0x802E00A8u: goto label_802E00A8;
    case 0x802E00ACu: goto label_802E00AC;
    case 0x802E00B0u: goto label_802E00B0;
    case 0x802E00B4u: goto label_802E00B4;
    case 0x802E00B8u: goto label_802E00B8;
    case 0x802E00BCu: goto label_802E00BC;
    case 0x802E00C0u: goto label_802E00C0;
    case 0x802E00C4u: goto label_802E00C4;
    case 0x802E00C8u: goto label_802E00C8;
    case 0x802E00CCu: goto label_802E00CC;
    case 0x802E00D0u: goto label_802E00D0;
    case 0x802E00D4u: goto label_802E00D4;
    case 0x802E00D8u: goto label_802E00D8;
    case 0x802E00DCu: goto label_802E00DC;
    case 0x802E00E0u: goto label_802E00E0;
    case 0x802E00E4u: goto label_802E00E4;
    case 0x802E00E8u: goto label_802E00E8;
    case 0x802E00ECu: goto label_802E00EC;
    case 0x802E00F0u: goto label_802E00F0;
    case 0x802E00F4u: goto label_802E00F4;
    case 0x802E00F8u: goto label_802E00F8;
    case 0x802E00FCu: goto label_802E00FC;
    case 0x802E0100u: goto label_802E0100;
    case 0x802E0104u: goto label_802E0104;
    case 0x802E0108u: goto label_802E0108;
    case 0x802E010Cu: goto label_802E010C;
    case 0x802E0110u: goto label_802E0110;
    case 0x802E0114u: goto label_802E0114;
    case 0x802E0118u: goto label_802E0118;
    case 0x802E011Cu: goto label_802E011C;
    case 0x802E0120u: goto label_802E0120;
    case 0x802E0124u: goto label_802E0124;
    case 0x802E0128u: goto label_802E0128;
    case 0x802E012Cu: goto label_802E012C;
    case 0x802E0130u: goto label_802E0130;
    case 0x802E0134u: goto label_802E0134;
    case 0x802E0138u: goto label_802E0138;
    case 0x802E013Cu: goto label_802E013C;
    case 0x802E0140u: goto label_802E0140;
    case 0x802E0144u: goto label_802E0144;
    case 0x802E0148u: goto label_802E0148;
    case 0x802E014Cu: goto label_802E014C;
    case 0x802E0150u: goto label_802E0150;
    case 0x802E0154u: goto label_802E0154;
    case 0x802E0158u: goto label_802E0158;
    case 0x802E015Cu: goto label_802E015C;
    case 0x802E0160u: goto label_802E0160;
    case 0x802E0164u: goto label_802E0164;
    case 0x802E0168u: goto label_802E0168;
    case 0x802E016Cu: goto label_802E016C;
    case 0x802E0170u: goto label_802E0170;
    case 0x802E0174u: goto label_802E0174;
    case 0x802E0178u: goto label_802E0178;
    case 0x802E017Cu: goto label_802E017C;
    case 0x802E0180u: goto label_802E0180;
    case 0x802E0184u: goto label_802E0184;
    case 0x802E0188u: goto label_802E0188;
    case 0x802E018Cu: goto label_802E018C;
    case 0x802E0190u: goto label_802E0190;
    case 0x802E0194u: goto label_802E0194;
    case 0x802E0198u: goto label_802E0198;
    case 0x802E019Cu: goto label_802E019C;
    case 0x802E01A0u: goto label_802E01A0;
    case 0x802E01A4u: goto label_802E01A4;
    case 0x802E01A8u: goto label_802E01A8;
    case 0x802E01ACu: goto label_802E01AC;
    case 0x802E01B0u: goto label_802E01B0;
    case 0x802E01B4u: goto label_802E01B4;
    case 0x802E01B8u: goto label_802E01B8;
    case 0x802E01BCu: goto label_802E01BC;
    case 0x802E01C0u: goto label_802E01C0;
    case 0x802E01C4u: goto label_802E01C4;
    case 0x802E01C8u: goto label_802E01C8;
    case 0x802E01CCu: goto label_802E01CC;
    case 0x802E01D0u: goto label_802E01D0;
    case 0x802E01D4u: goto label_802E01D4;
    case 0x802E01D8u: goto label_802E01D8;
    case 0x802E01DCu: goto label_802E01DC;
    case 0x802E01E0u: goto label_802E01E0;
    case 0x802E01E4u: goto label_802E01E4;
    case 0x802E01E8u: goto label_802E01E8;
    case 0x802E01ECu: goto label_802E01EC;
    case 0x802E01F0u: goto label_802E01F0;
    case 0x802E01F4u: goto label_802E01F4;
    case 0x802E01F8u: goto label_802E01F8;
    case 0x802E01FCu: goto label_802E01FC;
    case 0x802E0200u: goto label_802E0200;
    case 0x802E0204u: goto label_802E0204;
    case 0x802E0208u: goto label_802E0208;
    case 0x802E020Cu: goto label_802E020C;
    case 0x802E0210u: goto label_802E0210;
    case 0x802E0214u: goto label_802E0214;
    case 0x802E0218u: goto label_802E0218;
    case 0x802E021Cu: goto label_802E021C;
    case 0x802E0220u: goto label_802E0220;
    case 0x802E0224u: goto label_802E0224;
    case 0x802E0228u: goto label_802E0228;
    case 0x802E022Cu: goto label_802E022C;
    case 0x802E0230u: goto label_802E0230;
    case 0x802E0234u: goto label_802E0234;
    case 0x802E0238u: goto label_802E0238;
    case 0x802E023Cu: goto label_802E023C;
    case 0x802E0240u: goto label_802E0240;
    case 0x802E0244u: goto label_802E0244;
    case 0x802E0248u: goto label_802E0248;
    case 0x802E024Cu: goto label_802E024C;
    case 0x802E0250u: goto label_802E0250;
    case 0x802E0254u: goto label_802E0254;
    case 0x802E0258u: goto label_802E0258;
    case 0x802E025Cu: goto label_802E025C;
    case 0x802E0260u: goto label_802E0260;
    case 0x802E0264u: goto label_802E0264;
    case 0x802E0268u: goto label_802E0268;
    case 0x802E026Cu: goto label_802E026C;
    case 0x802E0270u: goto label_802E0270;
    case 0x802E0274u: goto label_802E0274;
    case 0x802E0278u: goto label_802E0278;
    case 0x802E027Cu: goto label_802E027C;
    case 0x802E0280u: goto label_802E0280;
    case 0x802E0284u: goto label_802E0284;
    case 0x802E0288u: goto label_802E0288;
    case 0x802E028Cu: goto label_802E028C;
    case 0x802E0290u: goto label_802E0290;
    case 0x802E0294u: goto label_802E0294;
    case 0x802E0298u: goto label_802E0298;
    case 0x802E029Cu: goto label_802E029C;
    case 0x802E02A0u: goto label_802E02A0;
    case 0x802E02A4u: goto label_802E02A4;
    case 0x802E02A8u: goto label_802E02A8;
    case 0x802E02ACu: goto label_802E02AC;
    case 0x802E02B0u: goto label_802E02B0;
    case 0x802E02B4u: goto label_802E02B4;
    case 0x802E02B8u: goto label_802E02B8;
    case 0x802E02BCu: goto label_802E02BC;
    case 0x802E02C0u: goto label_802E02C0;
    case 0x802E02C4u: goto label_802E02C4;
    case 0x802E02C8u: goto label_802E02C8;
    case 0x802E02CCu: goto label_802E02CC;
    case 0x802E02D0u: goto label_802E02D0;
    case 0x802E02D4u: goto label_802E02D4;
    case 0x802E02D8u: goto label_802E02D8;
    case 0x802E02DCu: goto label_802E02DC;
    case 0x802E02E0u: goto label_802E02E0;
    case 0x802E02E4u: goto label_802E02E4;
    case 0x802E02E8u: goto label_802E02E8;
    case 0x802E02ECu: goto label_802E02EC;
    case 0x802E02F0u: goto label_802E02F0;
    case 0x802E02F4u: goto label_802E02F4;
    case 0x802E02F8u: goto label_802E02F8;
    case 0x802E02FCu: goto label_802E02FC;
    case 0x802E0300u: goto label_802E0300;
    case 0x802E0304u: goto label_802E0304;
    case 0x802E0308u: goto label_802E0308;
    case 0x802E030Cu: goto label_802E030C;
    case 0x802E0310u: goto label_802E0310;
    case 0x802E0314u: goto label_802E0314;
    case 0x802E0318u: goto label_802E0318;
    case 0x802E031Cu: goto label_802E031C;
    case 0x802E0320u: goto label_802E0320;
    case 0x802E0324u: goto label_802E0324;
    case 0x802E0328u: goto label_802E0328;
    case 0x802E032Cu: goto label_802E032C;
    case 0x802E0330u: goto label_802E0330;
    case 0x802E0334u: goto label_802E0334;
    case 0x802E0338u: goto label_802E0338;
    case 0x802E033Cu: goto label_802E033C;
    case 0x802E0340u: goto label_802E0340;
    case 0x802E0344u: goto label_802E0344;
    case 0x802E0348u: goto label_802E0348;
    case 0x802E034Cu: goto label_802E034C;
    case 0x802E0350u: goto label_802E0350;
    case 0x802E0354u: goto label_802E0354;
    case 0x802E0358u: goto label_802E0358;
    case 0x802E035Cu: goto label_802E035C;
    case 0x802E0360u: goto label_802E0360;
    case 0x802E0364u: goto label_802E0364;
    case 0x802E0368u: goto label_802E0368;
    case 0x802E036Cu: goto label_802E036C;
    case 0x802E0370u: goto label_802E0370;
    case 0x802E0374u: goto label_802E0374;
    case 0x802E0378u: goto label_802E0378;
    case 0x802E037Cu: goto label_802E037C;
    case 0x802E0380u: goto label_802E0380;
    case 0x802E0384u: goto label_802E0384;
    case 0x802E0388u: goto label_802E0388;
    case 0x802E038Cu: goto label_802E038C;
    case 0x802E0390u: goto label_802E0390;
    case 0x802E0394u: goto label_802E0394;
    case 0x802E0398u: goto label_802E0398;
    case 0x802E039Cu: goto label_802E039C;
    case 0x802E03A0u: goto label_802E03A0;
    case 0x802E03A4u: goto label_802E03A4;
    case 0x802E03A8u: goto label_802E03A8;
    case 0x802E03ACu: goto label_802E03AC;
    case 0x802E03B0u: goto label_802E03B0;
    case 0x802E03B4u: goto label_802E03B4;
    case 0x802E03B8u: goto label_802E03B8;
    case 0x802E03BCu: goto label_802E03BC;
    case 0x802E03C0u: goto label_802E03C0;
    case 0x802E03C4u: goto label_802E03C4;
    case 0x802E03C8u: goto label_802E03C8;
    case 0x802E03CCu: goto label_802E03CC;
    case 0x802E03D0u: goto label_802E03D0;
    case 0x802E03D4u: goto label_802E03D4;
    case 0x802E03D8u: goto label_802E03D8;
    case 0x802E03DCu: goto label_802E03DC;
    case 0x802E03E0u: goto label_802E03E0;
    case 0x802E03E4u: goto label_802E03E4;
    case 0x802E03E8u: goto label_802E03E8;
    case 0x802E03ECu: goto label_802E03EC;
    case 0x802E03F0u: goto label_802E03F0;
    case 0x802E03F4u: goto label_802E03F4;
    case 0x802E03F8u: goto label_802E03F8;
    case 0x802E03FCu: goto label_802E03FC;
    case 0x802E0400u: goto label_802E0400;
    case 0x802E0404u: goto label_802E0404;
    case 0x802E0408u: goto label_802E0408;
    case 0x802E040Cu: goto label_802E040C;
    case 0x802E0410u: goto label_802E0410;
    case 0x802E0414u: goto label_802E0414;
    case 0x802E0418u: goto label_802E0418;
    case 0x802E041Cu: goto label_802E041C;
    case 0x802E0420u: goto label_802E0420;
    case 0x802E0424u: goto label_802E0424;
    case 0x802E0428u: goto label_802E0428;
    case 0x802E042Cu: goto label_802E042C;
    case 0x802E0430u: goto label_802E0430;
    case 0x802E0434u: goto label_802E0434;
    case 0x802E0438u: goto label_802E0438;
    case 0x802E043Cu: goto label_802E043C;
    case 0x802E0440u: goto label_802E0440;
    case 0x802E0444u: goto label_802E0444;
    case 0x802E0448u: goto label_802E0448;
    case 0x802E044Cu: goto label_802E044C;
    case 0x802E0450u: goto label_802E0450;
    case 0x802E0454u: goto label_802E0454;
    case 0x802E0458u: goto label_802E0458;
    case 0x802E045Cu: goto label_802E045C;
    case 0x802E0460u: goto label_802E0460;
    case 0x802E0464u: goto label_802E0464;
    case 0x802E0468u: goto label_802E0468;
    case 0x802E046Cu: goto label_802E046C;
    case 0x802E0470u: goto label_802E0470;
    case 0x802E0474u: goto label_802E0474;
    case 0x802E0478u: goto label_802E0478;
    case 0x802E047Cu: goto label_802E047C;
    case 0x802E0480u: goto label_802E0480;
    case 0x802E0484u: goto label_802E0484;
    case 0x802E0488u: goto label_802E0488;
    case 0x802E048Cu: goto label_802E048C;
    case 0x802E0490u: goto label_802E0490;
    case 0x802E0494u: goto label_802E0494;
    case 0x802E0498u: goto label_802E0498;
    case 0x802E049Cu: goto label_802E049C;
    case 0x802E04A0u: goto label_802E04A0;
    case 0x802E04A4u: goto label_802E04A4;
    case 0x802E04A8u: goto label_802E04A8;
    case 0x802E04ACu: goto label_802E04AC;
    case 0x802E04B0u: goto label_802E04B0;
    case 0x802E04B4u: goto label_802E04B4;
    case 0x802E04B8u: goto label_802E04B8;
    case 0x802E04BCu: goto label_802E04BC;
    case 0x802E04C0u: goto label_802E04C0;
    case 0x802E04C4u: goto label_802E04C4;
    case 0x802E04C8u: goto label_802E04C8;
    case 0x802E04CCu: goto label_802E04CC;
    case 0x802E04D0u: goto label_802E04D0;
    case 0x802E04D4u: goto label_802E04D4;
    case 0x802E04D8u: goto label_802E04D8;
    case 0x802E04DCu: goto label_802E04DC;
    case 0x802E04E0u: goto label_802E04E0;
    case 0x802E04E4u: goto label_802E04E4;
    case 0x802E04E8u: goto label_802E04E8;
    case 0x802E04ECu: goto label_802E04EC;
    case 0x802E04F0u: goto label_802E04F0;
    case 0x802E04F4u: goto label_802E04F4;
    case 0x802E04F8u: goto label_802E04F8;
    case 0x802E04FCu: goto label_802E04FC;
    case 0x802E0500u: goto label_802E0500;
    case 0x802E0504u: goto label_802E0504;
    case 0x802E0508u: goto label_802E0508;
    case 0x802E050Cu: goto label_802E050C;
    case 0x802E0510u: goto label_802E0510;
    case 0x802E0514u: goto label_802E0514;
    case 0x802E0518u: goto label_802E0518;
    case 0x802E051Cu: goto label_802E051C;
    case 0x802E0520u: goto label_802E0520;
    case 0x802E0524u: goto label_802E0524;
    case 0x802E0528u: goto label_802E0528;
    case 0x802E052Cu: goto label_802E052C;
    case 0x802E0530u: goto label_802E0530;
    case 0x802E0534u: goto label_802E0534;
    case 0x802E0538u: goto label_802E0538;
    case 0x802E053Cu: goto label_802E053C;
    case 0x802E0540u: goto label_802E0540;
    case 0x802E0544u: goto label_802E0544;
    case 0x802E0548u: goto label_802E0548;
    case 0x802E054Cu: goto label_802E054C;
    case 0x802E0550u: goto label_802E0550;
    case 0x802E0554u: goto label_802E0554;
    case 0x802E0558u: goto label_802E0558;
    case 0x802E055Cu: goto label_802E055C;
    case 0x802E0560u: goto label_802E0560;
    case 0x802E0564u: goto label_802E0564;
    case 0x802E0568u: goto label_802E0568;
    case 0x802E056Cu: goto label_802E056C;
    case 0x802E0570u: goto label_802E0570;
    case 0x802E0574u: goto label_802E0574;
    case 0x802E0578u: goto label_802E0578;
    case 0x802E057Cu: goto label_802E057C;
    case 0x802E0580u: goto label_802E0580;
    case 0x802E0584u: goto label_802E0584;
    case 0x802E0588u: goto label_802E0588;
    case 0x802E058Cu: goto label_802E058C;
    case 0x802E0590u: goto label_802E0590;
    case 0x802E0594u: goto label_802E0594;
    case 0x802E0598u: goto label_802E0598;
    case 0x802E059Cu: goto label_802E059C;
    case 0x802E05A0u: goto label_802E05A0;
    case 0x802E05A4u: goto label_802E05A4;
    case 0x802E05A8u: goto label_802E05A8;
    case 0x802E05ACu: goto label_802E05AC;
    case 0x802E05B0u: goto label_802E05B0;
    case 0x802E05B4u: goto label_802E05B4;
    case 0x802E05B8u: goto label_802E05B8;
    case 0x802E05BCu: goto label_802E05BC;
    case 0x802E05C0u: goto label_802E05C0;
    case 0x802E05C4u: goto label_802E05C4;
    case 0x802E05C8u: goto label_802E05C8;
    case 0x802E05CCu: goto label_802E05CC;
    case 0x802E05D0u: goto label_802E05D0;
    case 0x802E05D4u: goto label_802E05D4;
    case 0x802E05D8u: goto label_802E05D8;
    case 0x802E05DCu: goto label_802E05DC;
    case 0x802E05E0u: goto label_802E05E0;
    case 0x802E05E4u: goto label_802E05E4;
    case 0x802E05E8u: goto label_802E05E8;
    case 0x802E05ECu: goto label_802E05EC;
    case 0x802E05F0u: goto label_802E05F0;
    case 0x802E05F4u: goto label_802E05F4;
    case 0x802E05F8u: goto label_802E05F8;
    case 0x802E05FCu: goto label_802E05FC;
    case 0x802E0600u: goto label_802E0600;
    case 0x802E0604u: goto label_802E0604;
    case 0x802E0608u: goto label_802E0608;
    case 0x802E060Cu: goto label_802E060C;
    case 0x802E0610u: goto label_802E0610;
    case 0x802E0614u: goto label_802E0614;
    case 0x802E0618u: goto label_802E0618;
    case 0x802E061Cu: goto label_802E061C;
    case 0x802E0620u: goto label_802E0620;
    case 0x802E0624u: goto label_802E0624;
    case 0x802E0628u: goto label_802E0628;
    case 0x802E062Cu: goto label_802E062C;
    case 0x802E0630u: goto label_802E0630;
    case 0x802E0634u: goto label_802E0634;
    case 0x802E0638u: goto label_802E0638;
    case 0x802E063Cu: goto label_802E063C;
    case 0x802E0640u: goto label_802E0640;
    case 0x802E0644u: goto label_802E0644;
    case 0x802E0648u: goto label_802E0648;
    case 0x802E064Cu: goto label_802E064C;
    case 0x802E0650u: goto label_802E0650;
    case 0x802E0654u: goto label_802E0654;
    case 0x802E0658u: goto label_802E0658;
    case 0x802E065Cu: goto label_802E065C;
    case 0x802E0660u: goto label_802E0660;
    case 0x802E0664u: goto label_802E0664;
    case 0x802E0668u: goto label_802E0668;
    case 0x802E066Cu: goto label_802E066C;
    case 0x802E0670u: goto label_802E0670;
    case 0x802E0674u: goto label_802E0674;
    case 0x802E0678u: goto label_802E0678;
    case 0x802E067Cu: goto label_802E067C;
    case 0x802E0680u: goto label_802E0680;
    case 0x802E0684u: goto label_802E0684;
    case 0x802E0688u: goto label_802E0688;
    case 0x802E068Cu: goto label_802E068C;
    case 0x802E0690u: goto label_802E0690;
    case 0x802E0694u: goto label_802E0694;
    case 0x802E0698u: goto label_802E0698;
    case 0x802E069Cu: goto label_802E069C;
    case 0x802E06A0u: goto label_802E06A0;
    case 0x802E06A4u: goto label_802E06A4;
    case 0x802E06A8u: goto label_802E06A8;
    case 0x802E06ACu: goto label_802E06AC;
    case 0x802E06B0u: goto label_802E06B0;
    case 0x802E06B4u: goto label_802E06B4;
    case 0x802E06B8u: goto label_802E06B8;
    case 0x802E06BCu: goto label_802E06BC;
    case 0x802E06C0u: goto label_802E06C0;
    case 0x802E06C4u: goto label_802E06C4;
    case 0x802E06C8u: goto label_802E06C8;
    case 0x802E06CCu: goto label_802E06CC;
    case 0x802E06D0u: goto label_802E06D0;
    case 0x802E06D4u: goto label_802E06D4;
    case 0x802E06D8u: goto label_802E06D8;
    case 0x802E06DCu: goto label_802E06DC;
    case 0x802E06E0u: goto label_802E06E0;
    case 0x802E06E4u: goto label_802E06E4;
    case 0x802E06E8u: goto label_802E06E8;
    case 0x802E06ECu: goto label_802E06EC;
    case 0x802E06F0u: goto label_802E06F0;
    case 0x802E06F4u: goto label_802E06F4;
    case 0x802E06F8u: goto label_802E06F8;
    case 0x802E06FCu: goto label_802E06FC;
    case 0x802E0700u: goto label_802E0700;
    case 0x802E0704u: goto label_802E0704;
    case 0x802E0708u: goto label_802E0708;
    case 0x802E070Cu: goto label_802E070C;
    case 0x802E0710u: goto label_802E0710;
    case 0x802E0714u: goto label_802E0714;
    case 0x802E0718u: goto label_802E0718;
    case 0x802E071Cu: goto label_802E071C;
    case 0x802E0720u: goto label_802E0720;
    case 0x802E0724u: goto label_802E0724;
    case 0x802E0728u: goto label_802E0728;
    case 0x802E072Cu: goto label_802E072C;
    case 0x802E0730u: goto label_802E0730;
    case 0x802E0734u: goto label_802E0734;
    case 0x802E0738u: goto label_802E0738;
    case 0x802E073Cu: goto label_802E073C;
    case 0x802E0740u: goto label_802E0740;
    case 0x802E0744u: goto label_802E0744;
    case 0x802E0748u: goto label_802E0748;
    case 0x802E074Cu: goto label_802E074C;
    case 0x802E0750u: goto label_802E0750;
    case 0x802E0754u: goto label_802E0754;
    case 0x802E0758u: goto label_802E0758;
    case 0x802E075Cu: goto label_802E075C;
    case 0x802E0760u: goto label_802E0760;
    case 0x802E0764u: goto label_802E0764;
    case 0x802E0768u: goto label_802E0768;
    case 0x802E076Cu: goto label_802E076C;
    case 0x802E0770u: goto label_802E0770;
    case 0x802E0774u: goto label_802E0774;
    case 0x802E0778u: goto label_802E0778;
    case 0x802E077Cu: goto label_802E077C;
    case 0x802E0780u: goto label_802E0780;
    case 0x802E0784u: goto label_802E0784;
    case 0x802E0788u: goto label_802E0788;
    case 0x802E078Cu: goto label_802E078C;
    case 0x802E0790u: goto label_802E0790;
    case 0x802E0794u: goto label_802E0794;
    case 0x802E0798u: goto label_802E0798;
    case 0x802E079Cu: goto label_802E079C;
    case 0x802E07A0u: goto label_802E07A0;
    case 0x802E07A4u: goto label_802E07A4;
    case 0x802E07A8u: goto label_802E07A8;
    case 0x802E07ACu: goto label_802E07AC;
    case 0x802E07B0u: goto label_802E07B0;
    case 0x802E07B4u: goto label_802E07B4;
    case 0x802E07B8u: goto label_802E07B8;
    case 0x802E07BCu: goto label_802E07BC;
    case 0x802E07C0u: goto label_802E07C0;
    case 0x802E07C4u: goto label_802E07C4;
    case 0x802E07C8u: goto label_802E07C8;
    case 0x802E07CCu: goto label_802E07CC;
    case 0x802E07D0u: goto label_802E07D0;
    case 0x802E07D4u: goto label_802E07D4;
    case 0x802E07D8u: goto label_802E07D8;
    case 0x802E07DCu: goto label_802E07DC;
    case 0x802E07E0u: goto label_802E07E0;
    case 0x802E07E4u: goto label_802E07E4;
    case 0x802E07E8u: goto label_802E07E8;
    case 0x802E07ECu: goto label_802E07EC;
    case 0x802E07F0u: goto label_802E07F0;
    case 0x802E07F4u: goto label_802E07F4;
    case 0x802E07F8u: goto label_802E07F8;
    case 0x802E07FCu: goto label_802E07FC;
    case 0x802E0800u: goto label_802E0800;
    case 0x802E0804u: goto label_802E0804;
    case 0x802E0808u: goto label_802E0808;
    case 0x802E080Cu: goto label_802E080C;
    case 0x802E0810u: goto label_802E0810;
    case 0x802E0814u: goto label_802E0814;
    case 0x802E0818u: goto label_802E0818;
    case 0x802E081Cu: goto label_802E081C;
    case 0x802E0820u: goto label_802E0820;
    case 0x802E0824u: goto label_802E0824;
    case 0x802E0828u: goto label_802E0828;
    case 0x802E082Cu: goto label_802E082C;
    case 0x802E0830u: goto label_802E0830;
    case 0x802E0834u: goto label_802E0834;
    case 0x802E0838u: goto label_802E0838;
    case 0x802E083Cu: goto label_802E083C;
    case 0x802E0840u: goto label_802E0840;
    case 0x802E0844u: goto label_802E0844;
    case 0x802E0848u: goto label_802E0848;
    case 0x802E084Cu: goto label_802E084C;
    case 0x802E0850u: goto label_802E0850;
    case 0x802E0854u: goto label_802E0854;
    case 0x802E0858u: goto label_802E0858;
    case 0x802E085Cu: goto label_802E085C;
    case 0x802E0860u: goto label_802E0860;
    case 0x802E0864u: goto label_802E0864;
    case 0x802E0868u: goto label_802E0868;
    case 0x802E086Cu: goto label_802E086C;
    case 0x802E0870u: goto label_802E0870;
    case 0x802E0874u: goto label_802E0874;
    case 0x802E0878u: goto label_802E0878;
    case 0x802E087Cu: goto label_802E087C;
    case 0x802E0880u: goto label_802E0880;
    case 0x802E0884u: goto label_802E0884;
    case 0x802E0888u: goto label_802E0888;
    case 0x802E088Cu: goto label_802E088C;
    case 0x802E0890u: goto label_802E0890;
    case 0x802E0894u: goto label_802E0894;
    case 0x802E0898u: goto label_802E0898;
    case 0x802E089Cu: goto label_802E089C;
    case 0x802E08A0u: goto label_802E08A0;
    case 0x802E08A4u: goto label_802E08A4;
    case 0x802E08A8u: goto label_802E08A8;
    case 0x802E08ACu: goto label_802E08AC;
    case 0x802E08B0u: goto label_802E08B0;
    case 0x802E08B4u: goto label_802E08B4;
    case 0x802E08B8u: goto label_802E08B8;
    case 0x802E08BCu: goto label_802E08BC;
    case 0x802E08C0u: goto label_802E08C0;
    case 0x802E08C4u: goto label_802E08C4;
    case 0x802E08C8u: goto label_802E08C8;
    case 0x802E08CCu: goto label_802E08CC;
    case 0x802E08D0u: goto label_802E08D0;
    case 0x802E08D4u: goto label_802E08D4;
    case 0x802E08D8u: goto label_802E08D8;
    case 0x802E08DCu: goto label_802E08DC;
    case 0x802E08E0u: goto label_802E08E0;
    case 0x802E08E4u: goto label_802E08E4;
    case 0x802E08E8u: goto label_802E08E8;
    case 0x802E08ECu: goto label_802E08EC;
    case 0x802E08F0u: goto label_802E08F0;
    case 0x802E08F4u: goto label_802E08F4;
    case 0x802E08F8u: goto label_802E08F8;
    case 0x802E08FCu: goto label_802E08FC;
    case 0x802E0900u: goto label_802E0900;
    case 0x802E0904u: goto label_802E0904;
    case 0x802E0908u: goto label_802E0908;
    case 0x802E090Cu: goto label_802E090C;
    case 0x802E0910u: goto label_802E0910;
    case 0x802E0914u: goto label_802E0914;
    case 0x802E0918u: goto label_802E0918;
    case 0x802E091Cu: goto label_802E091C;
    case 0x802E0920u: goto label_802E0920;
    case 0x802E0924u: goto label_802E0924;
    case 0x802E0928u: goto label_802E0928;
    case 0x802E092Cu: goto label_802E092C;
    case 0x802E0930u: goto label_802E0930;
    case 0x802E0934u: goto label_802E0934;
    case 0x802E0938u: goto label_802E0938;
    case 0x802E093Cu: goto label_802E093C;
    case 0x802E0940u: goto label_802E0940;
    case 0x802E0944u: goto label_802E0944;
    case 0x802E0948u: goto label_802E0948;
    case 0x802E094Cu: goto label_802E094C;
    case 0x802E0950u: goto label_802E0950;
    case 0x802E0954u: goto label_802E0954;
    case 0x802E0958u: goto label_802E0958;
    case 0x802E095Cu: goto label_802E095C;
    case 0x802E0960u: goto label_802E0960;
    case 0x802E0964u: goto label_802E0964;
    case 0x802E0968u: goto label_802E0968;
    case 0x802E096Cu: goto label_802E096C;
    case 0x802E0970u: goto label_802E0970;
    case 0x802E0974u: goto label_802E0974;
    case 0x802E0978u: goto label_802E0978;
    case 0x802E097Cu: goto label_802E097C;
    case 0x802E0980u: goto label_802E0980;
    case 0x802E0984u: goto label_802E0984;
    case 0x802E0988u: goto label_802E0988;
    case 0x802E098Cu: goto label_802E098C;
    case 0x802E0990u: goto label_802E0990;
    case 0x802E0994u: goto label_802E0994;
    case 0x802E0998u: goto label_802E0998;
    case 0x802E099Cu: goto label_802E099C;
    case 0x802E09A0u: goto label_802E09A0;
    case 0x802E09A4u: goto label_802E09A4;
    case 0x802E09A8u: goto label_802E09A8;
    case 0x802E09ACu: goto label_802E09AC;
    case 0x802E09B0u: goto label_802E09B0;
    case 0x802E09B4u: goto label_802E09B4;
    case 0x802E09B8u: goto label_802E09B8;
    case 0x802E09BCu: goto label_802E09BC;
    case 0x802E09C0u: goto label_802E09C0;
    case 0x802E09C4u: goto label_802E09C4;
    case 0x802E09C8u: goto label_802E09C8;
    case 0x802E09CCu: goto label_802E09CC;
    case 0x802E09D0u: goto label_802E09D0;
    case 0x802E09D4u: goto label_802E09D4;
    case 0x802E09D8u: goto label_802E09D8;
    case 0x802E09DCu: goto label_802E09DC;
    case 0x802E09E0u: goto label_802E09E0;
    case 0x802E09E4u: goto label_802E09E4;
    case 0x802E09E8u: goto label_802E09E8;
    case 0x802E09ECu: goto label_802E09EC;
    case 0x802E09F0u: goto label_802E09F0;
    case 0x802E09F4u: goto label_802E09F4;
    case 0x802E09F8u: goto label_802E09F8;
    case 0x802E09FCu: goto label_802E09FC;
    case 0x802E0A00u: goto label_802E0A00;
    case 0x802E0A04u: goto label_802E0A04;
    case 0x802E0A08u: goto label_802E0A08;
    case 0x802E0A0Cu: goto label_802E0A0C;
    case 0x802E0A10u: goto label_802E0A10;
    case 0x802E0A14u: goto label_802E0A14;
    case 0x802E0A18u: goto label_802E0A18;
    case 0x802E0A1Cu: goto label_802E0A1C;
    case 0x802E0A20u: goto label_802E0A20;
    case 0x802E0A24u: goto label_802E0A24;
    case 0x802E0A28u: goto label_802E0A28;
    case 0x802E0A2Cu: goto label_802E0A2C;
    case 0x802E0A30u: goto label_802E0A30;
    case 0x802E0A34u: goto label_802E0A34;
    case 0x802E0A38u: goto label_802E0A38;
    case 0x802E0A3Cu: goto label_802E0A3C;
    case 0x802E0A40u: goto label_802E0A40;
    case 0x802E0A44u: goto label_802E0A44;
    case 0x802E0A48u: goto label_802E0A48;
    case 0x802E0A4Cu: goto label_802E0A4C;
    case 0x802E0A50u: goto label_802E0A50;
    case 0x802E0A54u: goto label_802E0A54;
    case 0x802E0A58u: goto label_802E0A58;
    case 0x802E0A5Cu: goto label_802E0A5C;
    case 0x802E0A60u: goto label_802E0A60;
    case 0x802E0A64u: goto label_802E0A64;
    case 0x802E0A68u: goto label_802E0A68;
    case 0x802E0A6Cu: goto label_802E0A6C;
    case 0x802E0A70u: goto label_802E0A70;
    case 0x802E0A74u: goto label_802E0A74;
    case 0x802E0A78u: goto label_802E0A78;
    case 0x802E0A7Cu: goto label_802E0A7C;
    case 0x802E0A80u: goto label_802E0A80;
    case 0x802E0A84u: goto label_802E0A84;
    case 0x802E0A88u: goto label_802E0A88;
    case 0x802E0A8Cu: goto label_802E0A8C;
    case 0x802E0A90u: goto label_802E0A90;
    case 0x802E0A94u: goto label_802E0A94;
    case 0x802E0A98u: goto label_802E0A98;
    case 0x802E0A9Cu: goto label_802E0A9C;
    case 0x802E0AA0u: goto label_802E0AA0;
    case 0x802E0AA4u: goto label_802E0AA4;
    case 0x802E0AA8u: goto label_802E0AA8;
    case 0x802E0AACu: goto label_802E0AAC;
    case 0x802E0AB0u: goto label_802E0AB0;
    case 0x802E0AB4u: goto label_802E0AB4;
    case 0x802E0AB8u: goto label_802E0AB8;
    case 0x802E0ABCu: goto label_802E0ABC;
    case 0x802E0AC0u: goto label_802E0AC0;
    case 0x802E0AC4u: goto label_802E0AC4;
    case 0x802E0AC8u: goto label_802E0AC8;
    case 0x802E0ACCu: goto label_802E0ACC;
    case 0x802E0AD0u: goto label_802E0AD0;
    case 0x802E0AD4u: goto label_802E0AD4;
    case 0x802E0AD8u: goto label_802E0AD8;
    case 0x802E0ADCu: goto label_802E0ADC;
    case 0x802E0AE0u: goto label_802E0AE0;
    case 0x802E0AE4u: goto label_802E0AE4;
    case 0x802E0AE8u: goto label_802E0AE8;
    case 0x802E0AECu: goto label_802E0AEC;
    case 0x802E0AF0u: goto label_802E0AF0;
    case 0x802E0AF4u: goto label_802E0AF4;
    case 0x802E0AF8u: goto label_802E0AF8;
    case 0x802E0AFCu: goto label_802E0AFC;
    case 0x802E0B00u: goto label_802E0B00;
    case 0x802E0B04u: goto label_802E0B04;
    case 0x802E0B08u: goto label_802E0B08;
    case 0x802E0B0Cu: goto label_802E0B0C;
    case 0x802E0B10u: goto label_802E0B10;
    case 0x802E0B14u: goto label_802E0B14;
    case 0x802E0B18u: goto label_802E0B18;
    case 0x802E0B1Cu: goto label_802E0B1C;
    case 0x802E0B20u: goto label_802E0B20;
    case 0x802E0B24u: goto label_802E0B24;
    case 0x802E0B28u: goto label_802E0B28;
    case 0x802E0B2Cu: goto label_802E0B2C;
    case 0x802E0B30u: goto label_802E0B30;
    case 0x802E0B34u: goto label_802E0B34;
    case 0x802E0B38u: goto label_802E0B38;
    case 0x802E0B3Cu: goto label_802E0B3C;
    case 0x802E0B40u: goto label_802E0B40;
    case 0x802E0B44u: goto label_802E0B44;
    case 0x802E0B48u: goto label_802E0B48;
    case 0x802E0B4Cu: goto label_802E0B4C;
    case 0x802E0B50u: goto label_802E0B50;
    case 0x802E0B54u: goto label_802E0B54;
    case 0x802E0B58u: goto label_802E0B58;
    case 0x802E0B5Cu: goto label_802E0B5C;
    case 0x802E0B60u: goto label_802E0B60;
    case 0x802E0B64u: goto label_802E0B64;
    case 0x802E0B68u: goto label_802E0B68;
    case 0x802E0B6Cu: goto label_802E0B6C;
    case 0x802E0B70u: goto label_802E0B70;
    case 0x802E0B74u: goto label_802E0B74;
    case 0x802E0B78u: goto label_802E0B78;
    case 0x802E0B7Cu: goto label_802E0B7C;
    case 0x802E0B80u: goto label_802E0B80;
    case 0x802E0B84u: goto label_802E0B84;
    case 0x802E0B88u: goto label_802E0B88;
    case 0x802E0B8Cu: goto label_802E0B8C;
    case 0x802E0B90u: goto label_802E0B90;
    case 0x802E0B94u: goto label_802E0B94;
    case 0x802E0B98u: goto label_802E0B98;
    case 0x802E0B9Cu: goto label_802E0B9C;
    case 0x802E0BA0u: goto label_802E0BA0;
    case 0x802E0BA4u: goto label_802E0BA4;
    case 0x802E0BA8u: goto label_802E0BA8;
    case 0x802E0BACu: goto label_802E0BAC;
    case 0x802E0BB0u: goto label_802E0BB0;
    case 0x802E0BB4u: goto label_802E0BB4;
    case 0x802E0BB8u: goto label_802E0BB8;
    case 0x802E0BBCu: goto label_802E0BBC;
    case 0x802E0BC0u: goto label_802E0BC0;
    case 0x802E0BC4u: goto label_802E0BC4;
    case 0x802E0BC8u: goto label_802E0BC8;
    case 0x802E0BCCu: goto label_802E0BCC;
    case 0x802E0BD0u: goto label_802E0BD0;
    case 0x802E0BD4u: goto label_802E0BD4;
    case 0x802E0BD8u: goto label_802E0BD8;
    case 0x802E0BDCu: goto label_802E0BDC;
    case 0x802E0BE0u: goto label_802E0BE0;
    case 0x802E0BE4u: goto label_802E0BE4;
    case 0x802E0BE8u: goto label_802E0BE8;
    case 0x802E0BECu: goto label_802E0BEC;
    case 0x802E0BF0u: goto label_802E0BF0;
    case 0x802E0BF4u: goto label_802E0BF4;
    case 0x802E0BF8u: goto label_802E0BF8;
    case 0x802E0BFCu: goto label_802E0BFC;
    case 0x802E0C00u: goto label_802E0C00;
    case 0x802E0C04u: goto label_802E0C04;
    case 0x802E0C08u: goto label_802E0C08;
    case 0x802E0C0Cu: goto label_802E0C0C;
    case 0x802E0C10u: goto label_802E0C10;
    case 0x802E0C14u: goto label_802E0C14;
    case 0x802E0C18u: goto label_802E0C18;
    case 0x802E0C1Cu: goto label_802E0C1C;
    case 0x802E0C20u: goto label_802E0C20;
    case 0x802E0C24u: goto label_802E0C24;
    case 0x802E0C28u: goto label_802E0C28;
    case 0x802E0C2Cu: goto label_802E0C2C;
    case 0x802E0C30u: goto label_802E0C30;
    case 0x802E0C34u: goto label_802E0C34;
    case 0x802E0C38u: goto label_802E0C38;
    case 0x802E0C3Cu: goto label_802E0C3C;
    case 0x802E0C40u: goto label_802E0C40;
    case 0x802E0C44u: goto label_802E0C44;
    case 0x802E0C48u: goto label_802E0C48;
    case 0x802E0C4Cu: goto label_802E0C4C;
    case 0x802E0C50u: goto label_802E0C50;
    case 0x802E0C54u: goto label_802E0C54;
    case 0x802E0C58u: goto label_802E0C58;
    case 0x802E0C5Cu: goto label_802E0C5C;
    case 0x802E0C60u: goto label_802E0C60;
    case 0x802E0C64u: goto label_802E0C64;
    case 0x802E0C68u: goto label_802E0C68;
    case 0x802E0C6Cu: goto label_802E0C6C;
    case 0x802E0C70u: goto label_802E0C70;
    case 0x802E0C74u: goto label_802E0C74;
    case 0x802E0C78u: goto label_802E0C78;
    case 0x802E0C7Cu: goto label_802E0C7C;
    case 0x802E0C80u: goto label_802E0C80;
    case 0x802E0C84u: goto label_802E0C84;
    case 0x802E0C88u: goto label_802E0C88;
    case 0x802E0C8Cu: goto label_802E0C8C;
    case 0x802E0C90u: goto label_802E0C90;
    case 0x802E0C94u: goto label_802E0C94;
    case 0x802E0C98u: goto label_802E0C98;
    case 0x802E0C9Cu: goto label_802E0C9C;
    case 0x802E0CA0u: goto label_802E0CA0;
    case 0x802E0CA4u: goto label_802E0CA4;
    case 0x802E0CA8u: goto label_802E0CA8;
    case 0x802E0CACu: goto label_802E0CAC;
    case 0x802E0CB0u: goto label_802E0CB0;
    case 0x802E0CB4u: goto label_802E0CB4;
    case 0x802E0CB8u: goto label_802E0CB8;
    case 0x802E0CBCu: goto label_802E0CBC;
    case 0x802E0CC0u: goto label_802E0CC0;
    case 0x802E0CC4u: goto label_802E0CC4;
    case 0x802E0CC8u: goto label_802E0CC8;
    case 0x802E0CCCu: goto label_802E0CCC;
    case 0x802E0CD0u: goto label_802E0CD0;
    case 0x802E0CD4u: goto label_802E0CD4;
    case 0x802E0CD8u: goto label_802E0CD8;
    case 0x802E0CDCu: goto label_802E0CDC;
    case 0x802E0CE0u: goto label_802E0CE0;
    case 0x802E0CE4u: goto label_802E0CE4;
    case 0x802E0CE8u: goto label_802E0CE8;
    case 0x802E0CECu: goto label_802E0CEC;
    case 0x802E0CF0u: goto label_802E0CF0;
    case 0x802E0CF4u: goto label_802E0CF4;
    case 0x802E0CF8u: goto label_802E0CF8;
    case 0x802E0CFCu: goto label_802E0CFC;
    case 0x802E0D00u: goto label_802E0D00;
    case 0x802E0D04u: goto label_802E0D04;
    case 0x802E0D08u: goto label_802E0D08;
    case 0x802E0D0Cu: goto label_802E0D0C;
    case 0x802E0D10u: goto label_802E0D10;
    case 0x802E0D14u: goto label_802E0D14;
    case 0x802E0D18u: goto label_802E0D18;
    case 0x802E0D1Cu: goto label_802E0D1C;
    case 0x802E0D20u: goto label_802E0D20;
    case 0x802E0D24u: goto label_802E0D24;
    case 0x802E0D28u: goto label_802E0D28;
    case 0x802E0D2Cu: goto label_802E0D2C;
    case 0x802E0D30u: goto label_802E0D30;
    case 0x802E0D34u: goto label_802E0D34;
    case 0x802E0D38u: goto label_802E0D38;
    case 0x802E0D3Cu: goto label_802E0D3C;
    case 0x802E0D40u: goto label_802E0D40;
    case 0x802E0D44u: goto label_802E0D44;
    case 0x802E0D48u: goto label_802E0D48;
    case 0x802E0D4Cu: goto label_802E0D4C;
    case 0x802E0D50u: goto label_802E0D50;
    case 0x802E0D54u: goto label_802E0D54;
    case 0x802E0D58u: goto label_802E0D58;
    case 0x802E0D5Cu: goto label_802E0D5C;
    case 0x802E0D60u: goto label_802E0D60;
    case 0x802E0D64u: goto label_802E0D64;
    case 0x802E0D68u: goto label_802E0D68;
    case 0x802E0D6Cu: goto label_802E0D6C;
    case 0x802E0D70u: goto label_802E0D70;
    case 0x802E0D74u: goto label_802E0D74;
    case 0x802E0D78u: goto label_802E0D78;
    case 0x802E0D7Cu: goto label_802E0D7C;
    case 0x802E0D80u: goto label_802E0D80;
    case 0x802E0D84u: goto label_802E0D84;
    case 0x802E0D88u: goto label_802E0D88;
    case 0x802E0D8Cu: goto label_802E0D8C;
    case 0x802E0D90u: goto label_802E0D90;
    case 0x802E0D94u: goto label_802E0D94;
    case 0x802E0D98u: goto label_802E0D98;
    case 0x802E0D9Cu: goto label_802E0D9C;
    case 0x802E0DA0u: goto label_802E0DA0;
    case 0x802E0DA4u: goto label_802E0DA4;
    case 0x802E0DA8u: goto label_802E0DA8;
    case 0x802E0DACu: goto label_802E0DAC;
    case 0x802E0DB0u: goto label_802E0DB0;
    case 0x802E0DB4u: goto label_802E0DB4;
    case 0x802E0DB8u: goto label_802E0DB8;
    case 0x802E0DBCu: goto label_802E0DBC;
    case 0x802E0DC0u: goto label_802E0DC0;
    case 0x802E0DC4u: goto label_802E0DC4;
    case 0x802E0DC8u: goto label_802E0DC8;
    case 0x802E0DCCu: goto label_802E0DCC;
    case 0x802E0DD0u: goto label_802E0DD0;
    case 0x802E0DD4u: goto label_802E0DD4;
    case 0x802E0DD8u: goto label_802E0DD8;
    case 0x802E0DDCu: goto label_802E0DDC;
    case 0x802E0DE0u: goto label_802E0DE0;
    case 0x802E0DE4u: goto label_802E0DE4;
    case 0x802E0DE8u: goto label_802E0DE8;
    case 0x802E0DECu: goto label_802E0DEC;
    case 0x802E0DF0u: goto label_802E0DF0;
    case 0x802E0DF4u: goto label_802E0DF4;
    case 0x802E0DF8u: goto label_802E0DF8;
    case 0x802E0DFCu: goto label_802E0DFC;
    case 0x802E0E00u: goto label_802E0E00;
    case 0x802E0E04u: goto label_802E0E04;
    case 0x802E0E08u: goto label_802E0E08;
    case 0x802E0E0Cu: goto label_802E0E0C;
    case 0x802E0E10u: goto label_802E0E10;
    case 0x802E0E14u: goto label_802E0E14;
    case 0x802E0E18u: goto label_802E0E18;
    case 0x802E0E1Cu: goto label_802E0E1C;
    case 0x802E0E20u: goto label_802E0E20;
    case 0x802E0E24u: goto label_802E0E24;
    case 0x802E0E28u: goto label_802E0E28;
    case 0x802E0E2Cu: goto label_802E0E2C;
    case 0x802E0E30u: goto label_802E0E30;
    case 0x802E0E34u: goto label_802E0E34;
    case 0x802E0E38u: goto label_802E0E38;
    case 0x802E0E3Cu: goto label_802E0E3C;
    case 0x802E0E40u: goto label_802E0E40;
    case 0x802E0E44u: goto label_802E0E44;
    case 0x802E0E48u: goto label_802E0E48;
    case 0x802E0E4Cu: goto label_802E0E4C;
    case 0x802E0E50u: goto label_802E0E50;
    case 0x802E0E54u: goto label_802E0E54;
    case 0x802E0E58u: goto label_802E0E58;
    case 0x802E0E5Cu: goto label_802E0E5C;
    case 0x802E0E60u: goto label_802E0E60;
    case 0x802E0E64u: goto label_802E0E64;
    case 0x802E0E68u: goto label_802E0E68;
    case 0x802E0E6Cu: goto label_802E0E6C;
    case 0x802E0E70u: goto label_802E0E70;
    case 0x802E0E74u: goto label_802E0E74;
    case 0x802E0E78u: goto label_802E0E78;
    case 0x802E0E7Cu: goto label_802E0E7C;
    case 0x802E0E80u: goto label_802E0E80;
    case 0x802E0E84u: goto label_802E0E84;
    case 0x802E0E88u: goto label_802E0E88;
    case 0x802E0E8Cu: goto label_802E0E8C;
    case 0x802E0E90u: goto label_802E0E90;
    case 0x802E0E94u: goto label_802E0E94;
    case 0x802E0E98u: goto label_802E0E98;
    case 0x802E0E9Cu: goto label_802E0E9C;
    case 0x802E0EA0u: goto label_802E0EA0;
    case 0x802E0EA4u: goto label_802E0EA4;
    case 0x802E0EA8u: goto label_802E0EA8;
    case 0x802E0EACu: goto label_802E0EAC;
    case 0x802E0EB0u: goto label_802E0EB0;
    case 0x802E0EB4u: goto label_802E0EB4;
    case 0x802E0EB8u: goto label_802E0EB8;
    case 0x802E0EBCu: goto label_802E0EBC;
    case 0x802E0EC0u: goto label_802E0EC0;
    case 0x802E0EC4u: goto label_802E0EC4;
    case 0x802E0EC8u: goto label_802E0EC8;
    case 0x802E0ECCu: goto label_802E0ECC;
    case 0x802E0ED0u: goto label_802E0ED0;
    case 0x802E0ED4u: goto label_802E0ED4;
    case 0x802E0ED8u: goto label_802E0ED8;
    case 0x802E0EDCu: goto label_802E0EDC;
    case 0x802E0EE0u: goto label_802E0EE0;
    case 0x802E0EE4u: goto label_802E0EE4;
    case 0x802E0EE8u: goto label_802E0EE8;
    case 0x802E0EECu: goto label_802E0EEC;
    case 0x802E0EF0u: goto label_802E0EF0;
    case 0x802E0EF4u: goto label_802E0EF4;
    case 0x802E0EF8u: goto label_802E0EF8;
    case 0x802E0EFCu: goto label_802E0EFC;
    case 0x802E0F00u: goto label_802E0F00;
    case 0x802E0F04u: goto label_802E0F04;
    case 0x802E0F08u: goto label_802E0F08;
    case 0x802E0F0Cu: goto label_802E0F0C;
    case 0x802E0F10u: goto label_802E0F10;
    case 0x802E0F14u: goto label_802E0F14;
    case 0x802E0F18u: goto label_802E0F18;
    case 0x802E0F1Cu: goto label_802E0F1C;
    case 0x802E0F20u: goto label_802E0F20;
    case 0x802E0F24u: goto label_802E0F24;
    case 0x802E0F28u: goto label_802E0F28;
    case 0x802E0F2Cu: goto label_802E0F2C;
    case 0x802E0F30u: goto label_802E0F30;
    case 0x802E0F34u: goto label_802E0F34;
    case 0x802E0F38u: goto label_802E0F38;
    case 0x802E0F3Cu: goto label_802E0F3C;
    case 0x802E0F40u: goto label_802E0F40;
    case 0x802E0F44u: goto label_802E0F44;
    case 0x802E0F48u: goto label_802E0F48;
    case 0x802E0F4Cu: goto label_802E0F4C;
    case 0x802E0F50u: goto label_802E0F50;
    case 0x802E0F54u: goto label_802E0F54;
    case 0x802E0F58u: goto label_802E0F58;
    case 0x802E0F5Cu: goto label_802E0F5C;
    case 0x802E0F60u: goto label_802E0F60;
    case 0x802E0F64u: goto label_802E0F64;
    case 0x802E0F68u: goto label_802E0F68;
    case 0x802E0F6Cu: goto label_802E0F6C;
    case 0x802E0F70u: goto label_802E0F70;
    case 0x802E0F74u: goto label_802E0F74;
    case 0x802E0F78u: goto label_802E0F78;
    case 0x802E0F7Cu: goto label_802E0F7C;
    case 0x802E0F80u: goto label_802E0F80;
    case 0x802E0F84u: goto label_802E0F84;
    case 0x802E0F88u: goto label_802E0F88;
    case 0x802E0F8Cu: goto label_802E0F8C;
    case 0x802E0F90u: goto label_802E0F90;
    case 0x802E0F94u: goto label_802E0F94;
    case 0x802E0F98u: goto label_802E0F98;
    case 0x802E0F9Cu: goto label_802E0F9C;
    case 0x802E0FA0u: goto label_802E0FA0;
    case 0x802E0FA4u: goto label_802E0FA4;
    case 0x802E0FA8u: goto label_802E0FA8;
    case 0x802E0FACu: goto label_802E0FAC;
    case 0x802E0FB0u: goto label_802E0FB0;
    case 0x802E0FB4u: goto label_802E0FB4;
    case 0x802E0FB8u: goto label_802E0FB8;
    case 0x802E0FBCu: goto label_802E0FBC;
    case 0x802E0FC0u: goto label_802E0FC0;
    case 0x802E0FC4u: goto label_802E0FC4;
    case 0x802E0FC8u: goto label_802E0FC8;
    case 0x802E0FCCu: goto label_802E0FCC;
    case 0x802E0FD0u: goto label_802E0FD0;
    case 0x802E0FD4u: goto label_802E0FD4;
    case 0x802E0FD8u: goto label_802E0FD8;
    case 0x802E0FDCu: goto label_802E0FDC;
    case 0x802E0FE0u: goto label_802E0FE0;
    case 0x802E0FE4u: goto label_802E0FE4;
    case 0x802E0FE8u: goto label_802E0FE8;
    case 0x802E0FECu: goto label_802E0FEC;
    case 0x802E0FF0u: goto label_802E0FF0;
    case 0x802E0FF4u: goto label_802E0FF4;
    case 0x802E0FF8u: goto label_802E0FF8;
    case 0x802E0FFCu: goto label_802E0FFC;
    case 0x802E1000u: goto label_802E1000;
    case 0x802E1004u: goto label_802E1004;
    case 0x802E1008u: goto label_802E1008;
    case 0x802E100Cu: goto label_802E100C;
    case 0x802E1010u: goto label_802E1010;
    case 0x802E1014u: goto label_802E1014;
    case 0x802E1018u: goto label_802E1018;
    case 0x802E101Cu: goto label_802E101C;
    case 0x802E1020u: goto label_802E1020;
    case 0x802E1024u: goto label_802E1024;
    case 0x802E1028u: goto label_802E1028;
    case 0x802E102Cu: goto label_802E102C;
    case 0x802E1030u: goto label_802E1030;
    case 0x802E1034u: goto label_802E1034;
    case 0x802E1038u: goto label_802E1038;
    case 0x802E103Cu: goto label_802E103C;
    case 0x802E1040u: goto label_802E1040;
    case 0x802E1044u: goto label_802E1044;
    case 0x802E1048u: goto label_802E1048;
    case 0x802E104Cu: goto label_802E104C;
    case 0x802E1050u: goto label_802E1050;
    case 0x802E1054u: goto label_802E1054;
    case 0x802E1058u: goto label_802E1058;
    case 0x802E105Cu: goto label_802E105C;
    case 0x802E1060u: goto label_802E1060;
    case 0x802E1064u: goto label_802E1064;
    case 0x802E1068u: goto label_802E1068;
    case 0x802E106Cu: goto label_802E106C;
    case 0x802E1070u: goto label_802E1070;
    case 0x802E1074u: goto label_802E1074;
    case 0x802E1078u: goto label_802E1078;
    case 0x802E107Cu: goto label_802E107C;
    case 0x802E1080u: goto label_802E1080;
    case 0x802E1084u: goto label_802E1084;
    case 0x802E1088u: goto label_802E1088;
    case 0x802E108Cu: goto label_802E108C;
    case 0x802E1090u: goto label_802E1090;
    case 0x802E1094u: goto label_802E1094;
    case 0x802E1098u: goto label_802E1098;
    case 0x802E109Cu: goto label_802E109C;
    case 0x802E10A0u: goto label_802E10A0;
    case 0x802E10A4u: goto label_802E10A4;
    case 0x802E10A8u: goto label_802E10A8;
    case 0x802E10ACu: goto label_802E10AC;
    case 0x802E10B0u: goto label_802E10B0;
    case 0x802E10B4u: goto label_802E10B4;
    case 0x802E10B8u: goto label_802E10B8;
    case 0x802E10BCu: goto label_802E10BC;
    case 0x802E10C0u: goto label_802E10C0;
    case 0x802E10C4u: goto label_802E10C4;
    case 0x802E10C8u: goto label_802E10C8;
    case 0x802E10CCu: goto label_802E10CC;
    case 0x802E10D0u: goto label_802E10D0;
    case 0x802E10D4u: goto label_802E10D4;
    case 0x802E10D8u: goto label_802E10D8;
    case 0x802E10DCu: goto label_802E10DC;
    case 0x802E10E0u: goto label_802E10E0;
    case 0x802E10E4u: goto label_802E10E4;
    case 0x802E10E8u: goto label_802E10E8;
    case 0x802E10ECu: goto label_802E10EC;
    case 0x802E10F0u: goto label_802E10F0;
    case 0x802E10F4u: goto label_802E10F4;
    case 0x802E10F8u: goto label_802E10F8;
    case 0x802E10FCu: goto label_802E10FC;
    case 0x802E1100u: goto label_802E1100;
    case 0x802E1104u: goto label_802E1104;
    case 0x802E1108u: goto label_802E1108;
    case 0x802E110Cu: goto label_802E110C;
    case 0x802E1110u: goto label_802E1110;
    case 0x802E1114u: goto label_802E1114;
    case 0x802E1118u: goto label_802E1118;
    case 0x802E111Cu: goto label_802E111C;
    case 0x802E1120u: goto label_802E1120;
    case 0x802E1124u: goto label_802E1124;
    case 0x802E1128u: goto label_802E1128;
    case 0x802E112Cu: goto label_802E112C;
    case 0x802E1130u: goto label_802E1130;
    case 0x802E1134u: goto label_802E1134;
    case 0x802E1138u: goto label_802E1138;
    case 0x802E113Cu: goto label_802E113C;
    case 0x802E1140u: goto label_802E1140;
    case 0x802E1144u: goto label_802E1144;
    case 0x802E1148u: goto label_802E1148;
    case 0x802E114Cu: goto label_802E114C;
    case 0x802E1150u: goto label_802E1150;
    case 0x802E1154u: goto label_802E1154;
    case 0x802E1158u: goto label_802E1158;
    case 0x802E115Cu: goto label_802E115C;
    case 0x802E1160u: goto label_802E1160;
    case 0x802E1164u: goto label_802E1164;
    case 0x802E1168u: goto label_802E1168;
    case 0x802E116Cu: goto label_802E116C;
    case 0x802E1170u: goto label_802E1170;
    case 0x802E1174u: goto label_802E1174;
    case 0x802E1178u: goto label_802E1178;
    case 0x802E117Cu: goto label_802E117C;
    case 0x802E1180u: goto label_802E1180;
    case 0x802E1184u: goto label_802E1184;
    case 0x802E1188u: goto label_802E1188;
    case 0x802E118Cu: goto label_802E118C;
    case 0x802E1190u: goto label_802E1190;
    case 0x802E1194u: goto label_802E1194;
    case 0x802E1198u: goto label_802E1198;
    case 0x802E119Cu: goto label_802E119C;
    case 0x802E11A0u: goto label_802E11A0;
    case 0x802E11A4u: goto label_802E11A4;
    case 0x802E11A8u: goto label_802E11A8;
    case 0x802E11ACu: goto label_802E11AC;
    case 0x802E11B0u: goto label_802E11B0;
    case 0x802E11B4u: goto label_802E11B4;
    case 0x802E11B8u: goto label_802E11B8;
    case 0x802E11BCu: goto label_802E11BC;
    case 0x802E11C0u: goto label_802E11C0;
    case 0x802E11C4u: goto label_802E11C4;
    case 0x802E11C8u: goto label_802E11C8;
    case 0x802E11CCu: goto label_802E11CC;
    case 0x802E11D0u: goto label_802E11D0;
    case 0x802E11D4u: goto label_802E11D4;
    case 0x802E11D8u: goto label_802E11D8;
    case 0x802E11DCu: goto label_802E11DC;
    case 0x802E11E0u: goto label_802E11E0;
    case 0x802E11E4u: goto label_802E11E4;
    case 0x802E11E8u: goto label_802E11E8;
    case 0x802E11ECu: goto label_802E11EC;
    case 0x802E11F0u: goto label_802E11F0;
    case 0x802E11F4u: goto label_802E11F4;
    case 0x802E11F8u: goto label_802E11F8;
    case 0x802E11FCu: goto label_802E11FC;
    case 0x802E1200u: goto label_802E1200;
    case 0x802E1204u: goto label_802E1204;
    case 0x802E1208u: goto label_802E1208;
    case 0x802E120Cu: goto label_802E120C;
    case 0x802E1210u: goto label_802E1210;
    case 0x802E1214u: goto label_802E1214;
    case 0x802E1218u: goto label_802E1218;
    case 0x802E121Cu: goto label_802E121C;
    case 0x802E1220u: goto label_802E1220;
    case 0x802E1224u: goto label_802E1224;
    case 0x802E1228u: goto label_802E1228;
    case 0x802E122Cu: goto label_802E122C;
    case 0x802E1230u: goto label_802E1230;
    case 0x802E1234u: goto label_802E1234;
    case 0x802E1238u: goto label_802E1238;
    case 0x802E123Cu: goto label_802E123C;
    case 0x802E1240u: goto label_802E1240;
    case 0x802E1244u: goto label_802E1244;
    case 0x802E1248u: goto label_802E1248;
    case 0x802E124Cu: goto label_802E124C;
    case 0x802E1250u: goto label_802E1250;
    case 0x802E1254u: goto label_802E1254;
    case 0x802E1258u: goto label_802E1258;
    case 0x802E125Cu: goto label_802E125C;
    case 0x802E1260u: goto label_802E1260;
    case 0x802E1264u: goto label_802E1264;
    case 0x802E1268u: goto label_802E1268;
    case 0x802E126Cu: goto label_802E126C;
    case 0x802E1270u: goto label_802E1270;
    case 0x802E1274u: goto label_802E1274;
    case 0x802E1278u: goto label_802E1278;
    case 0x802E127Cu: goto label_802E127C;
    case 0x802E1280u: goto label_802E1280;
    case 0x802E1284u: goto label_802E1284;
    case 0x802E1288u: goto label_802E1288;
    case 0x802E128Cu: goto label_802E128C;
    case 0x802E1290u: goto label_802E1290;
    case 0x802E1294u: goto label_802E1294;
    case 0x802E1298u: goto label_802E1298;
    case 0x802E129Cu: goto label_802E129C;
    case 0x802E12A0u: goto label_802E12A0;
    case 0x802E12A4u: goto label_802E12A4;
    case 0x802E12A8u: goto label_802E12A8;
    case 0x802E12ACu: goto label_802E12AC;
    case 0x802E12B0u: goto label_802E12B0;
    case 0x802E12B4u: goto label_802E12B4;
    case 0x802E12B8u: goto label_802E12B8;
    case 0x802E12BCu: goto label_802E12BC;
    case 0x802E12C0u: goto label_802E12C0;
    case 0x802E12C4u: goto label_802E12C4;
    case 0x802E12C8u: goto label_802E12C8;
    case 0x802E12CCu: goto label_802E12CC;
    case 0x802E12D0u: goto label_802E12D0;
    case 0x802E12D4u: goto label_802E12D4;
    case 0x802E12D8u: goto label_802E12D8;
    case 0x802E12DCu: goto label_802E12DC;
    case 0x802E12E0u: goto label_802E12E0;
    case 0x802E12E4u: goto label_802E12E4;
    case 0x802E12E8u: goto label_802E12E8;
    case 0x802E12ECu: goto label_802E12EC;
    case 0x802E12F0u: goto label_802E12F0;
    case 0x802E12F4u: goto label_802E12F4;
    case 0x802E12F8u: goto label_802E12F8;
    case 0x802E12FCu: goto label_802E12FC;
    case 0x802E1300u: goto label_802E1300;
    case 0x802E1304u: goto label_802E1304;
    case 0x802E1308u: goto label_802E1308;
    case 0x802E130Cu: goto label_802E130C;
    case 0x802E1310u: goto label_802E1310;
    case 0x802E1314u: goto label_802E1314;
    case 0x802E1318u: goto label_802E1318;
    case 0x802E131Cu: goto label_802E131C;
    case 0x802E1320u: goto label_802E1320;
    case 0x802E1324u: goto label_802E1324;
    case 0x802E1328u: goto label_802E1328;
    case 0x802E132Cu: goto label_802E132C;
    case 0x802E1330u: goto label_802E1330;
    case 0x802E1334u: goto label_802E1334;
    case 0x802E1338u: goto label_802E1338;
    case 0x802E133Cu: goto label_802E133C;
    case 0x802E1340u: goto label_802E1340;
    case 0x802E1344u: goto label_802E1344;
    case 0x802E1348u: goto label_802E1348;
    case 0x802E134Cu: goto label_802E134C;
    case 0x802E1350u: goto label_802E1350;
    case 0x802E1354u: goto label_802E1354;
    case 0x802E1358u: goto label_802E1358;
    case 0x802E135Cu: goto label_802E135C;
    case 0x802E1360u: goto label_802E1360;
    case 0x802E1364u: goto label_802E1364;
    case 0x802E1368u: goto label_802E1368;
    case 0x802E136Cu: goto label_802E136C;
    case 0x802E1370u: goto label_802E1370;
    case 0x802E1374u: goto label_802E1374;
    case 0x802E1378u: goto label_802E1378;
    case 0x802E137Cu: goto label_802E137C;
    case 0x802E1380u: goto label_802E1380;
    case 0x802E1384u: goto label_802E1384;
    case 0x802E1388u: goto label_802E1388;
    case 0x802E138Cu: goto label_802E138C;
    case 0x802E1390u: goto label_802E1390;
    case 0x802E1394u: goto label_802E1394;
    case 0x802E1398u: goto label_802E1398;
    case 0x802E139Cu: goto label_802E139C;
    case 0x802E13A0u: goto label_802E13A0;
    case 0x802E13A4u: goto label_802E13A4;
    case 0x802E13A8u: goto label_802E13A8;
    case 0x802E13ACu: goto label_802E13AC;
    case 0x802E13B0u: goto label_802E13B0;
    case 0x802E13B4u: goto label_802E13B4;
    case 0x802E13B8u: goto label_802E13B8;
    case 0x802E13BCu: goto label_802E13BC;
    case 0x802E13C0u: goto label_802E13C0;
    case 0x802E13C4u: goto label_802E13C4;
    case 0x802E13C8u: goto label_802E13C8;
    case 0x802E13CCu: goto label_802E13CC;
    case 0x802E13D0u: goto label_802E13D0;
    case 0x802E13D4u: goto label_802E13D4;
    case 0x802E13D8u: goto label_802E13D8;
    case 0x802E13DCu: goto label_802E13DC;
    case 0x802E13E0u: goto label_802E13E0;
    case 0x802E13E4u: goto label_802E13E4;
    case 0x802E13E8u: goto label_802E13E8;
    case 0x802E13ECu: goto label_802E13EC;
    case 0x802E13F0u: goto label_802E13F0;
    case 0x802E13F4u: goto label_802E13F4;
    case 0x802E13F8u: goto label_802E13F8;
    case 0x802E13FCu: goto label_802E13FC;
    case 0x802E1400u: goto label_802E1400;
    case 0x802E1404u: goto label_802E1404;
    case 0x802E1408u: goto label_802E1408;
    case 0x802E140Cu: goto label_802E140C;
    case 0x802E1410u: goto label_802E1410;
    case 0x802E1414u: goto label_802E1414;
    case 0x802E1418u: goto label_802E1418;
    case 0x802E141Cu: goto label_802E141C;
    case 0x802E1420u: goto label_802E1420;
    case 0x802E1424u: goto label_802E1424;
    case 0x802E1428u: goto label_802E1428;
    case 0x802E142Cu: goto label_802E142C;
    case 0x802E1430u: goto label_802E1430;
    case 0x802E1434u: goto label_802E1434;
    case 0x802E1438u: goto label_802E1438;
    case 0x802E143Cu: goto label_802E143C;
    case 0x802E1440u: goto label_802E1440;
    case 0x802E1444u: goto label_802E1444;
    case 0x802E1448u: goto label_802E1448;
    case 0x802E144Cu: goto label_802E144C;
    case 0x802E1450u: goto label_802E1450;
    case 0x802E1454u: goto label_802E1454;
    case 0x802E1458u: goto label_802E1458;
    case 0x802E145Cu: goto label_802E145C;
    case 0x802E1460u: goto label_802E1460;
    case 0x802E1464u: goto label_802E1464;
    case 0x802E1468u: goto label_802E1468;
    case 0x802E146Cu: goto label_802E146C;
    case 0x802E1470u: goto label_802E1470;
    case 0x802E1474u: goto label_802E1474;
    case 0x802E1478u: goto label_802E1478;
    case 0x802E147Cu: goto label_802E147C;
    case 0x802E1480u: goto label_802E1480;
    case 0x802E1484u: goto label_802E1484;
    case 0x802E1488u: goto label_802E1488;
    case 0x802E148Cu: goto label_802E148C;
    case 0x802E1490u: goto label_802E1490;
    case 0x802E1494u: goto label_802E1494;
    case 0x802E1498u: goto label_802E1498;
    case 0x802E149Cu: goto label_802E149C;
    case 0x802E14A0u: goto label_802E14A0;
    case 0x802E14A4u: goto label_802E14A4;
    case 0x802E14A8u: goto label_802E14A8;
    case 0x802E14ACu: goto label_802E14AC;
    case 0x802E14B0u: goto label_802E14B0;
    case 0x802E14B4u: goto label_802E14B4;
    case 0x802E14B8u: goto label_802E14B8;
    case 0x802E14BCu: goto label_802E14BC;
    case 0x802E14C0u: goto label_802E14C0;
    case 0x802E14C4u: goto label_802E14C4;
    case 0x802E14C8u: goto label_802E14C8;
    case 0x802E14CCu: goto label_802E14CC;
    case 0x802E14D0u: goto label_802E14D0;
    case 0x802E14D4u: goto label_802E14D4;
    case 0x802E14D8u: goto label_802E14D8;
    case 0x802E14DCu: goto label_802E14DC;
    case 0x802E14E0u: goto label_802E14E0;
    case 0x802E14E4u: goto label_802E14E4;
    case 0x802E14E8u: goto label_802E14E8;
    case 0x802E14ECu: goto label_802E14EC;
    case 0x802E14F0u: goto label_802E14F0;
    case 0x802E14F4u: goto label_802E14F4;
    case 0x802E14F8u: goto label_802E14F8;
    case 0x802E14FCu: goto label_802E14FC;
    case 0x802E1500u: goto label_802E1500;
    case 0x802E1504u: goto label_802E1504;
    case 0x802E1508u: goto label_802E1508;
    case 0x802E150Cu: goto label_802E150C;
    case 0x802E1510u: goto label_802E1510;
    case 0x802E1514u: goto label_802E1514;
    case 0x802E1518u: goto label_802E1518;
    case 0x802E151Cu: goto label_802E151C;
    case 0x802E1520u: goto label_802E1520;
    case 0x802E1524u: goto label_802E1524;
    case 0x802E1528u: goto label_802E1528;
    case 0x802E152Cu: goto label_802E152C;
    case 0x802E1530u: goto label_802E1530;
    case 0x802E1534u: goto label_802E1534;
    case 0x802E1538u: goto label_802E1538;
    case 0x802E153Cu: goto label_802E153C;
    case 0x802E1540u: goto label_802E1540;
    case 0x802E1544u: goto label_802E1544;
    case 0x802E1548u: goto label_802E1548;
    case 0x802E154Cu: goto label_802E154C;
    case 0x802E1550u: goto label_802E1550;
    case 0x802E1554u: goto label_802E1554;
    case 0x802E1558u: goto label_802E1558;
    case 0x802E155Cu: goto label_802E155C;
    case 0x802E1560u: goto label_802E1560;
    case 0x802E1564u: goto label_802E1564;
    case 0x802E1568u: goto label_802E1568;
    case 0x802E156Cu: goto label_802E156C;
    case 0x802E1570u: goto label_802E1570;
    case 0x802E1574u: goto label_802E1574;
    case 0x802E1578u: goto label_802E1578;
    case 0x802E157Cu: goto label_802E157C;
    case 0x802E1580u: goto label_802E1580;
    case 0x802E1584u: goto label_802E1584;
    case 0x802E1588u: goto label_802E1588;
    case 0x802E158Cu: goto label_802E158C;
    case 0x802E1590u: goto label_802E1590;
    case 0x802E1594u: goto label_802E1594;
    case 0x802E1598u: goto label_802E1598;
    case 0x802E159Cu: goto label_802E159C;
    case 0x802E15A0u: goto label_802E15A0;
    case 0x802E15A4u: goto label_802E15A4;
    case 0x802E15A8u: goto label_802E15A8;
    case 0x802E15ACu: goto label_802E15AC;
    case 0x802E15B0u: goto label_802E15B0;
    case 0x802E15B4u: goto label_802E15B4;
    case 0x802E15B8u: goto label_802E15B8;
    case 0x802E15BCu: goto label_802E15BC;
    case 0x802E15C0u: goto label_802E15C0;
    case 0x802E15C4u: goto label_802E15C4;
    case 0x802E15C8u: goto label_802E15C8;
    case 0x802E15CCu: goto label_802E15CC;
    case 0x802E15D0u: goto label_802E15D0;
    case 0x802E15D4u: goto label_802E15D4;
    case 0x802E15D8u: goto label_802E15D8;
    case 0x802E15DCu: goto label_802E15DC;
    case 0x802E15E0u: goto label_802E15E0;
    case 0x802E15E4u: goto label_802E15E4;
    case 0x802E15E8u: goto label_802E15E8;
    case 0x802E15ECu: goto label_802E15EC;
    case 0x802E15F0u: goto label_802E15F0;
    case 0x802E15F4u: goto label_802E15F4;
    case 0x802E15F8u: goto label_802E15F8;
    case 0x802E15FCu: goto label_802E15FC;
    case 0x802E1600u: goto label_802E1600;
    case 0x802E1604u: goto label_802E1604;
    case 0x802E1608u: goto label_802E1608;
    case 0x802E160Cu: goto label_802E160C;
    case 0x802E1610u: goto label_802E1610;
    case 0x802E1614u: goto label_802E1614;
    case 0x802E1618u: goto label_802E1618;
    case 0x802E161Cu: goto label_802E161C;
    case 0x802E1620u: goto label_802E1620;
    case 0x802E1624u: goto label_802E1624;
    case 0x802E1628u: goto label_802E1628;
    case 0x802E162Cu: goto label_802E162C;
    case 0x802E1630u: goto label_802E1630;
    case 0x802E1634u: goto label_802E1634;
    case 0x802E1638u: goto label_802E1638;
    case 0x802E163Cu: goto label_802E163C;
    case 0x802E1640u: goto label_802E1640;
    case 0x802E1644u: goto label_802E1644;
    case 0x802E1648u: goto label_802E1648;
    case 0x802E164Cu: goto label_802E164C;
    case 0x802E1650u: goto label_802E1650;
    case 0x802E1654u: goto label_802E1654;
    case 0x802E1658u: goto label_802E1658;
    case 0x802E165Cu: goto label_802E165C;
    case 0x802E1660u: goto label_802E1660;
    case 0x802E1664u: goto label_802E1664;
    case 0x802E1668u: goto label_802E1668;
    case 0x802E166Cu: goto label_802E166C;
    case 0x802E1670u: goto label_802E1670;
    case 0x802E1674u: goto label_802E1674;
    case 0x802E1678u: goto label_802E1678;
    case 0x802E167Cu: goto label_802E167C;
    case 0x802E1680u: goto label_802E1680;
    case 0x802E1684u: goto label_802E1684;
    case 0x802E1688u: goto label_802E1688;
    case 0x802E168Cu: goto label_802E168C;
    case 0x802E1690u: goto label_802E1690;
    case 0x802E1694u: goto label_802E1694;
    case 0x802E1698u: goto label_802E1698;
    case 0x802E169Cu: goto label_802E169C;
    case 0x802E16A0u: goto label_802E16A0;
    case 0x802E16A4u: goto label_802E16A4;
    case 0x802E16A8u: goto label_802E16A8;
    case 0x802E16ACu: goto label_802E16AC;
    case 0x802E16B0u: goto label_802E16B0;
    case 0x802E16B4u: goto label_802E16B4;
    case 0x802E16B8u: goto label_802E16B8;
    case 0x802E16BCu: goto label_802E16BC;
    case 0x802E16C0u: goto label_802E16C0;
    case 0x802E16C4u: goto label_802E16C4;
    case 0x802E16C8u: goto label_802E16C8;
    case 0x802E16CCu: goto label_802E16CC;
    case 0x802E16D0u: goto label_802E16D0;
    case 0x802E16D4u: goto label_802E16D4;
    case 0x802E16D8u: goto label_802E16D8;
    case 0x802E16DCu: goto label_802E16DC;
    case 0x802E16E0u: goto label_802E16E0;
    case 0x802E16E4u: goto label_802E16E4;
    case 0x802E16E8u: goto label_802E16E8;
    case 0x802E16ECu: goto label_802E16EC;
    case 0x802E16F0u: goto label_802E16F0;
    case 0x802E16F4u: goto label_802E16F4;
    case 0x802E16F8u: goto label_802E16F8;
    case 0x802E16FCu: goto label_802E16FC;
    case 0x802E1700u: goto label_802E1700;
    case 0x802E1704u: goto label_802E1704;
    case 0x802E1708u: goto label_802E1708;
    case 0x802E170Cu: goto label_802E170C;
    case 0x802E1710u: goto label_802E1710;
    case 0x802E1714u: goto label_802E1714;
    case 0x802E1718u: goto label_802E1718;
    case 0x802E171Cu: goto label_802E171C;
    case 0x802E1720u: goto label_802E1720;
    case 0x802E1724u: goto label_802E1724;
    case 0x802E1728u: goto label_802E1728;
    case 0x802E172Cu: goto label_802E172C;
    case 0x802E1730u: goto label_802E1730;
    case 0x802E1734u: goto label_802E1734;
    case 0x802E1738u: goto label_802E1738;
    case 0x802E173Cu: goto label_802E173C;
    case 0x802E1740u: goto label_802E1740;
    case 0x802E1744u: goto label_802E1744;
    case 0x802E1748u: goto label_802E1748;
    case 0x802E174Cu: goto label_802E174C;
    case 0x802E1750u: goto label_802E1750;
    case 0x802E1754u: goto label_802E1754;
    case 0x802E1758u: goto label_802E1758;
    case 0x802E175Cu: goto label_802E175C;
    case 0x802E1760u: goto label_802E1760;
    case 0x802E1764u: goto label_802E1764;
    case 0x802E1768u: goto label_802E1768;
    case 0x802E176Cu: goto label_802E176C;
    case 0x802E1770u: goto label_802E1770;
    case 0x802E1774u: goto label_802E1774;
    case 0x802E1778u: goto label_802E1778;
    case 0x802E177Cu: goto label_802E177C;
    case 0x802E1780u: goto label_802E1780;
    case 0x802E1784u: goto label_802E1784;
    case 0x802E1788u: goto label_802E1788;
    case 0x802E178Cu: goto label_802E178C;
    case 0x802E1790u: goto label_802E1790;
    case 0x802E1794u: goto label_802E1794;
    case 0x802E1798u: goto label_802E1798;
    case 0x802E179Cu: goto label_802E179C;
    case 0x802E17A0u: goto label_802E17A0;
    case 0x802E17A4u: goto label_802E17A4;
    case 0x802E17A8u: goto label_802E17A8;
    case 0x802E17ACu: goto label_802E17AC;
    case 0x802E17B0u: goto label_802E17B0;
    case 0x802E17B4u: goto label_802E17B4;
    case 0x802E17B8u: goto label_802E17B8;
    case 0x802E17BCu: goto label_802E17BC;
    case 0x802E17C0u: goto label_802E17C0;
    case 0x802E17C4u: goto label_802E17C4;
    case 0x802E17C8u: goto label_802E17C8;
    case 0x802E17CCu: goto label_802E17CC;
    case 0x802E17D0u: goto label_802E17D0;
    case 0x802E17D4u: goto label_802E17D4;
    case 0x802E17D8u: goto label_802E17D8;
    case 0x802E17DCu: goto label_802E17DC;
    case 0x802E17E0u: goto label_802E17E0;
    case 0x802E17E4u: goto label_802E17E4;
    case 0x802E17E8u: goto label_802E17E8;
    case 0x802E17ECu: goto label_802E17EC;
    case 0x802E17F0u: goto label_802E17F0;
    case 0x802E17F4u: goto label_802E17F4;
    case 0x802E17F8u: goto label_802E17F8;
    case 0x802E17FCu: goto label_802E17FC;
    case 0x802E1800u: goto label_802E1800;
    case 0x802E1804u: goto label_802E1804;
    case 0x802E1808u: goto label_802E1808;
    case 0x802E180Cu: goto label_802E180C;
    case 0x802E1810u: goto label_802E1810;
    case 0x802E1814u: goto label_802E1814;
    case 0x802E1818u: goto label_802E1818;
    case 0x802E181Cu: goto label_802E181C;
    case 0x802E1820u: goto label_802E1820;
    case 0x802E1824u: goto label_802E1824;
    case 0x802E1828u: goto label_802E1828;
    case 0x802E182Cu: goto label_802E182C;
    case 0x802E1830u: goto label_802E1830;
    case 0x802E1834u: goto label_802E1834;
    case 0x802E1838u: goto label_802E1838;
    case 0x802E183Cu: goto label_802E183C;
    case 0x802E1840u: goto label_802E1840;
    case 0x802E1844u: goto label_802E1844;
    case 0x802E1848u: goto label_802E1848;
    case 0x802E184Cu: goto label_802E184C;
    case 0x802E1850u: goto label_802E1850;
    case 0x802E1854u: goto label_802E1854;
    case 0x802E1858u: goto label_802E1858;
    case 0x802E185Cu: goto label_802E185C;
    case 0x802E1860u: goto label_802E1860;
    case 0x802E1864u: goto label_802E1864;
    case 0x802E1868u: goto label_802E1868;
    case 0x802E186Cu: goto label_802E186C;
    case 0x802E1870u: goto label_802E1870;
    case 0x802E1874u: goto label_802E1874;
    case 0x802E1878u: goto label_802E1878;
    case 0x802E187Cu: goto label_802E187C;
    case 0x802E1880u: goto label_802E1880;
    case 0x802E1884u: goto label_802E1884;
    case 0x802E1888u: goto label_802E1888;
    case 0x802E188Cu: goto label_802E188C;
    case 0x802E1890u: goto label_802E1890;
    case 0x802E1894u: goto label_802E1894;
    case 0x802E1898u: goto label_802E1898;
    case 0x802E189Cu: goto label_802E189C;
    case 0x802E18A0u: goto label_802E18A0;
    case 0x802E18A4u: goto label_802E18A4;
    case 0x802E18A8u: goto label_802E18A8;
    case 0x802E18ACu: goto label_802E18AC;
    case 0x802E18B0u: goto label_802E18B0;
    case 0x802E18B4u: goto label_802E18B4;
    case 0x802E18B8u: goto label_802E18B8;
    case 0x802E18BCu: goto label_802E18BC;
    case 0x802E18C0u: goto label_802E18C0;
    case 0x802E18C4u: goto label_802E18C4;
    case 0x802E18C8u: goto label_802E18C8;
    case 0x802E18CCu: goto label_802E18CC;
    case 0x802E18D0u: goto label_802E18D0;
    case 0x802E18D4u: goto label_802E18D4;
    case 0x802E18D8u: goto label_802E18D8;
    case 0x802E18DCu: goto label_802E18DC;
    case 0x802E18E0u: goto label_802E18E0;
    case 0x802E18E4u: goto label_802E18E4;
    case 0x802E18E8u: goto label_802E18E8;
    case 0x802E18ECu: goto label_802E18EC;
    case 0x802E18F0u: goto label_802E18F0;
    case 0x802E18F4u: goto label_802E18F4;
    case 0x802E18F8u: goto label_802E18F8;
    case 0x802E18FCu: goto label_802E18FC;
    case 0x802E1900u: goto label_802E1900;
    case 0x802E1904u: goto label_802E1904;
    case 0x802E1908u: goto label_802E1908;
    case 0x802E190Cu: goto label_802E190C;
    case 0x802E1910u: goto label_802E1910;
    case 0x802E1914u: goto label_802E1914;
    case 0x802E1918u: goto label_802E1918;
    case 0x802E191Cu: goto label_802E191C;
    case 0x802E1920u: goto label_802E1920;
    case 0x802E1924u: goto label_802E1924;
    case 0x802E1928u: goto label_802E1928;
    case 0x802E192Cu: goto label_802E192C;
    case 0x802E1930u: goto label_802E1930;
    case 0x802E1934u: goto label_802E1934;
    case 0x802E1938u: goto label_802E1938;
    case 0x802E193Cu: goto label_802E193C;
    case 0x802E1940u: goto label_802E1940;
    case 0x802E1944u: goto label_802E1944;
    case 0x802E1948u: goto label_802E1948;
    case 0x802E194Cu: goto label_802E194C;
    case 0x802E1950u: goto label_802E1950;
    case 0x802E1954u: goto label_802E1954;
    case 0x802E1958u: goto label_802E1958;
    case 0x802E195Cu: goto label_802E195C;
    case 0x802E1960u: goto label_802E1960;
    case 0x802E1964u: goto label_802E1964;
    case 0x802E1968u: goto label_802E1968;
    case 0x802E196Cu: goto label_802E196C;
    case 0x802E1970u: goto label_802E1970;
    case 0x802E1974u: goto label_802E1974;
    case 0x802E1978u: goto label_802E1978;
    case 0x802E197Cu: goto label_802E197C;
    case 0x802E1980u: goto label_802E1980;
    case 0x802E1984u: goto label_802E1984;
    case 0x802E1988u: goto label_802E1988;
    case 0x802E198Cu: goto label_802E198C;
    case 0x802E1990u: goto label_802E1990;
    case 0x802E1994u: goto label_802E1994;
    case 0x802E1998u: goto label_802E1998;
    case 0x802E199Cu: goto label_802E199C;
    case 0x802E19A0u: goto label_802E19A0;
    case 0x802E19A4u: goto label_802E19A4;
    case 0x802E19A8u: goto label_802E19A8;
    case 0x802E19ACu: goto label_802E19AC;
    case 0x802E19B0u: goto label_802E19B0;
    case 0x802E19B4u: goto label_802E19B4;
    case 0x802E19B8u: goto label_802E19B8;
    case 0x802E19BCu: goto label_802E19BC;
    case 0x802E19C0u: goto label_802E19C0;
    case 0x802E19C4u: goto label_802E19C4;
    case 0x802E19C8u: goto label_802E19C8;
    case 0x802E19CCu: goto label_802E19CC;
    case 0x802E19D0u: goto label_802E19D0;
    case 0x802E19D4u: goto label_802E19D4;
    case 0x802E19D8u: goto label_802E19D8;
    case 0x802E19DCu: goto label_802E19DC;
    case 0x802E19E0u: goto label_802E19E0;
    case 0x802E19E4u: goto label_802E19E4;
    case 0x802E19E8u: goto label_802E19E8;
    case 0x802E19ECu: goto label_802E19EC;
    case 0x802E19F0u: goto label_802E19F0;
    case 0x802E19F4u: goto label_802E19F4;
    case 0x802E19F8u: goto label_802E19F8;
    case 0x802E19FCu: goto label_802E19FC;
    case 0x802E1A00u: goto label_802E1A00;
    case 0x802E1A04u: goto label_802E1A04;
    case 0x802E1A08u: goto label_802E1A08;
    case 0x802E1A0Cu: goto label_802E1A0C;
    case 0x802E1A10u: goto label_802E1A10;
    case 0x802E1A14u: goto label_802E1A14;
    case 0x802E1A18u: goto label_802E1A18;
    case 0x802E1A1Cu: goto label_802E1A1C;
    case 0x802E1A20u: goto label_802E1A20;
    case 0x802E1A24u: goto label_802E1A24;
    case 0x802E1A28u: goto label_802E1A28;
    case 0x802E1A2Cu: goto label_802E1A2C;
    case 0x802E1A30u: goto label_802E1A30;
    case 0x802E1A34u: goto label_802E1A34;
    case 0x802E1A38u: goto label_802E1A38;
    case 0x802E1A3Cu: goto label_802E1A3C;
    case 0x802E1A40u: goto label_802E1A40;
    case 0x802E1A44u: goto label_802E1A44;
    case 0x802E1A48u: goto label_802E1A48;
    case 0x802E1A4Cu: goto label_802E1A4C;
    case 0x802E1A50u: goto label_802E1A50;
    case 0x802E1A54u: goto label_802E1A54;
    case 0x802E1A58u: goto label_802E1A58;
    case 0x802E1A5Cu: goto label_802E1A5C;
    case 0x802E1A60u: goto label_802E1A60;
    case 0x802E1A64u: goto label_802E1A64;
    case 0x802E1A68u: goto label_802E1A68;
    case 0x802E1A6Cu: goto label_802E1A6C;
    case 0x802E1A70u: goto label_802E1A70;
    case 0x802E1A74u: goto label_802E1A74;
    case 0x802E1A78u: goto label_802E1A78;
    case 0x802E1A7Cu: goto label_802E1A7C;
    case 0x802E1A80u: goto label_802E1A80;
    case 0x802E1A84u: goto label_802E1A84;
    case 0x802E1A88u: goto label_802E1A88;
    case 0x802E1A8Cu: goto label_802E1A8C;
    case 0x802E1A90u: goto label_802E1A90;
    case 0x802E1A94u: goto label_802E1A94;
    case 0x802E1A98u: goto label_802E1A98;
    case 0x802E1A9Cu: goto label_802E1A9C;
    case 0x802E1AA0u: goto label_802E1AA0;
    case 0x802E1AA4u: goto label_802E1AA4;
    case 0x802E1AA8u: goto label_802E1AA8;
    case 0x802E1AACu: goto label_802E1AAC;
    case 0x802E1AB0u: goto label_802E1AB0;
    case 0x802E1AB4u: goto label_802E1AB4;
    case 0x802E1AB8u: goto label_802E1AB8;
    case 0x802E1ABCu: goto label_802E1ABC;
    case 0x802E1AC0u: goto label_802E1AC0;
    case 0x802E1AC4u: goto label_802E1AC4;
    case 0x802E1AC8u: goto label_802E1AC8;
    case 0x802E1ACCu: goto label_802E1ACC;
    case 0x802E1AD0u: goto label_802E1AD0;
    case 0x802E1AD4u: goto label_802E1AD4;
    case 0x802E1AD8u: goto label_802E1AD8;
    case 0x802E1ADCu: goto label_802E1ADC;
    case 0x802E1AE0u: goto label_802E1AE0;
    case 0x802E1AE4u: goto label_802E1AE4;
    case 0x802E1AE8u: goto label_802E1AE8;
    case 0x802E1AECu: goto label_802E1AEC;
    case 0x802E1AF0u: goto label_802E1AF0;
    case 0x802E1AF4u: goto label_802E1AF4;
    case 0x802E1AF8u: goto label_802E1AF8;
    case 0x802E1AFCu: goto label_802E1AFC;
    case 0x802E1B00u: goto label_802E1B00;
    case 0x802E1B04u: goto label_802E1B04;
    case 0x802E1B08u: goto label_802E1B08;
    case 0x802E1B0Cu: goto label_802E1B0C;
    case 0x802E1B10u: goto label_802E1B10;
    case 0x802E1B14u: goto label_802E1B14;
    case 0x802E1B18u: goto label_802E1B18;
    case 0x802E1B1Cu: goto label_802E1B1C;
    case 0x802E1B20u: goto label_802E1B20;
    case 0x802E1B24u: goto label_802E1B24;
    case 0x802E1B28u: goto label_802E1B28;
    case 0x802E1B2Cu: goto label_802E1B2C;
    case 0x802E1B30u: goto label_802E1B30;
    case 0x802E1B34u: goto label_802E1B34;
    case 0x802E1B38u: goto label_802E1B38;
    case 0x802E1B3Cu: goto label_802E1B3C;
    case 0x802E1B40u: goto label_802E1B40;
    case 0x802E1B44u: goto label_802E1B44;
    case 0x802E1B48u: goto label_802E1B48;
    case 0x802E1B4Cu: goto label_802E1B4C;
    case 0x802E1B50u: goto label_802E1B50;
    case 0x802E1B54u: goto label_802E1B54;
    case 0x802E1B58u: goto label_802E1B58;
    case 0x802E1B5Cu: goto label_802E1B5C;
    case 0x802E1B60u: goto label_802E1B60;
    case 0x802E1B64u: goto label_802E1B64;
    case 0x802E1B68u: goto label_802E1B68;
    case 0x802E1B6Cu: goto label_802E1B6C;
    case 0x802E1B70u: goto label_802E1B70;
    case 0x802E1B74u: goto label_802E1B74;
    case 0x802E1B78u: goto label_802E1B78;
    case 0x802E1B7Cu: goto label_802E1B7C;
    case 0x802E1B80u: goto label_802E1B80;
    case 0x802E1B84u: goto label_802E1B84;
    case 0x802E1B88u: goto label_802E1B88;
    case 0x802E1B8Cu: goto label_802E1B8C;
    case 0x802E1B90u: goto label_802E1B90;
    case 0x802E1B94u: goto label_802E1B94;
    case 0x802E1B98u: goto label_802E1B98;
    case 0x802E1B9Cu: goto label_802E1B9C;
    case 0x802E1BA0u: goto label_802E1BA0;
    case 0x802E1BA4u: goto label_802E1BA4;
    case 0x802E1BA8u: goto label_802E1BA8;
    case 0x802E1BACu: goto label_802E1BAC;
    case 0x802E1BB0u: goto label_802E1BB0;
    case 0x802E1BB4u: goto label_802E1BB4;
    case 0x802E1BB8u: goto label_802E1BB8;
    case 0x802E1BBCu: goto label_802E1BBC;
    case 0x802E1BC0u: goto label_802E1BC0;
    case 0x802E1BC4u: goto label_802E1BC4;
    case 0x802E1BC8u: goto label_802E1BC8;
    case 0x802E1BCCu: goto label_802E1BCC;
    case 0x802E1BD0u: goto label_802E1BD0;
    case 0x802E1BD4u: goto label_802E1BD4;
    case 0x802E1BD8u: goto label_802E1BD8;
    case 0x802E1BDCu: goto label_802E1BDC;
    case 0x802E1BE0u: goto label_802E1BE0;
    case 0x802E1BE4u: goto label_802E1BE4;
    case 0x802E1BE8u: goto label_802E1BE8;
    case 0x802E1BECu: goto label_802E1BEC;
    case 0x802E1BF0u: goto label_802E1BF0;
    case 0x802E1BF4u: goto label_802E1BF4;
    case 0x802E1BF8u: goto label_802E1BF8;
    case 0x802E1BFCu: goto label_802E1BFC;
    case 0x802E1C00u: goto label_802E1C00;
    case 0x802E1C04u: goto label_802E1C04;
    case 0x802E1C08u: goto label_802E1C08;
    case 0x802E1C0Cu: goto label_802E1C0C;
    case 0x802E1C10u: goto label_802E1C10;
    case 0x802E1C14u: goto label_802E1C14;
    case 0x802E1C18u: goto label_802E1C18;
    case 0x802E1C1Cu: goto label_802E1C1C;
    case 0x802E1C20u: goto label_802E1C20;
    case 0x802E1C24u: goto label_802E1C24;
    case 0x802E1C28u: goto label_802E1C28;
    case 0x802E1C2Cu: goto label_802E1C2C;
    case 0x802E1C30u: goto label_802E1C30;
    case 0x802E1C34u: goto label_802E1C34;
    case 0x802E1C38u: goto label_802E1C38;
    case 0x802E1C3Cu: goto label_802E1C3C;
    case 0x802E1C40u: goto label_802E1C40;
    case 0x802E1C44u: goto label_802E1C44;
    case 0x802E1C48u: goto label_802E1C48;
    case 0x802E1C4Cu: goto label_802E1C4C;
    case 0x802E1C50u: goto label_802E1C50;
    case 0x802E1C54u: goto label_802E1C54;
    case 0x802E1C58u: goto label_802E1C58;
    case 0x802E1C5Cu: goto label_802E1C5C;
    case 0x802E1C60u: goto label_802E1C60;
    case 0x802E1C64u: goto label_802E1C64;
    case 0x802E1C68u: goto label_802E1C68;
    case 0x802E1C6Cu: goto label_802E1C6C;
    case 0x802E1C70u: goto label_802E1C70;
    case 0x802E1C74u: goto label_802E1C74;
    case 0x802E1C78u: goto label_802E1C78;
    case 0x802E1C7Cu: goto label_802E1C7C;
    case 0x802E1C80u: goto label_802E1C80;
    case 0x802E1C84u: goto label_802E1C84;
    case 0x802E1C88u: goto label_802E1C88;
    case 0x802E1C8Cu: goto label_802E1C8C;
    case 0x802E1C90u: goto label_802E1C90;
    case 0x802E1C94u: goto label_802E1C94;
    case 0x802E1C98u: goto label_802E1C98;
    case 0x802E1C9Cu: goto label_802E1C9C;
    case 0x802E1CA0u: goto label_802E1CA0;
    case 0x802E1CA4u: goto label_802E1CA4;
    case 0x802E1CA8u: goto label_802E1CA8;
    case 0x802E1CACu: goto label_802E1CAC;
    case 0x802E1CB0u: goto label_802E1CB0;
    case 0x802E1CB4u: goto label_802E1CB4;
    case 0x802E1CB8u: goto label_802E1CB8;
    case 0x802E1CBCu: goto label_802E1CBC;
    case 0x802E1CC0u: goto label_802E1CC0;
    case 0x802E1CC4u: goto label_802E1CC4;
    case 0x802E1CC8u: goto label_802E1CC8;
    case 0x802E1CCCu: goto label_802E1CCC;
    case 0x802E1CD0u: goto label_802E1CD0;
    case 0x802E1CD4u: goto label_802E1CD4;
    case 0x802E1CD8u: goto label_802E1CD8;
    case 0x802E1CDCu: goto label_802E1CDC;
    case 0x802E1CE0u: goto label_802E1CE0;
    case 0x802E1CE4u: goto label_802E1CE4;
    case 0x802E1CE8u: goto label_802E1CE8;
    case 0x802E1CECu: goto label_802E1CEC;
    case 0x802E1CF0u: goto label_802E1CF0;
    case 0x802E1CF4u: goto label_802E1CF4;
    case 0x802E1CF8u: goto label_802E1CF8;
    case 0x802E1CFCu: goto label_802E1CFC;
    case 0x802E1D00u: goto label_802E1D00;
    case 0x802E1D04u: goto label_802E1D04;
    case 0x802E1D08u: goto label_802E1D08;
    case 0x802E1D0Cu: goto label_802E1D0C;
    case 0x802E1D10u: goto label_802E1D10;
    case 0x802E1D14u: goto label_802E1D14;
    case 0x802E1D18u: goto label_802E1D18;
    case 0x802E1D1Cu: goto label_802E1D1C;
    case 0x802E1D20u: goto label_802E1D20;
    case 0x802E1D24u: goto label_802E1D24;
    case 0x802E1D28u: goto label_802E1D28;
    case 0x802E1D2Cu: goto label_802E1D2C;
    case 0x802E1D30u: goto label_802E1D30;
    case 0x802E1D34u: goto label_802E1D34;
    case 0x802E1D38u: goto label_802E1D38;
    case 0x802E1D3Cu: goto label_802E1D3C;
    case 0x802E1D40u: goto label_802E1D40;
    case 0x802E1D44u: goto label_802E1D44;
    case 0x802E1D48u: goto label_802E1D48;
    case 0x802E1D4Cu: goto label_802E1D4C;
    case 0x802E1D50u: goto label_802E1D50;
    case 0x802E1D54u: goto label_802E1D54;
    case 0x802E1D58u: goto label_802E1D58;
    case 0x802E1D5Cu: goto label_802E1D5C;
    case 0x802E1D60u: goto label_802E1D60;
    case 0x802E1D64u: goto label_802E1D64;
    case 0x802E1D68u: goto label_802E1D68;
    case 0x802E1D6Cu: goto label_802E1D6C;
    case 0x802E1D70u: goto label_802E1D70;
    case 0x802E1D74u: goto label_802E1D74;
    case 0x802E1D78u: goto label_802E1D78;
    case 0x802E1D7Cu: goto label_802E1D7C;
    case 0x802E1D80u: goto label_802E1D80;
    case 0x802E1D84u: goto label_802E1D84;
    case 0x802E1D88u: goto label_802E1D88;
    case 0x802E1D8Cu: goto label_802E1D8C;
    case 0x802E1D90u: goto label_802E1D90;
    case 0x802E1D94u: goto label_802E1D94;
    case 0x802E1D98u: goto label_802E1D98;
    case 0x802E1D9Cu: goto label_802E1D9C;
    case 0x802E1DA0u: goto label_802E1DA0;
    case 0x802E1DA4u: goto label_802E1DA4;
    case 0x802E1DA8u: goto label_802E1DA8;
    case 0x802E1DACu: goto label_802E1DAC;
    case 0x802E1DB0u: goto label_802E1DB0;
    case 0x802E1DB4u: goto label_802E1DB4;
    case 0x802E1DB8u: goto label_802E1DB8;
    case 0x802E1DBCu: goto label_802E1DBC;
    case 0x802E1DC0u: goto label_802E1DC0;
    case 0x802E1DC4u: goto label_802E1DC4;
    case 0x802E1DC8u: goto label_802E1DC8;
    case 0x802E1DCCu: goto label_802E1DCC;
    case 0x802E1DD0u: goto label_802E1DD0;
    case 0x802E1DD4u: goto label_802E1DD4;
    case 0x802E1DD8u: goto label_802E1DD8;
    case 0x802E1DDCu: goto label_802E1DDC;
    case 0x802E1DE0u: goto label_802E1DE0;
    case 0x802E1DE4u: goto label_802E1DE4;
    case 0x802E1DE8u: goto label_802E1DE8;
    case 0x802E1DECu: goto label_802E1DEC;
    case 0x802E1DF0u: goto label_802E1DF0;
    case 0x802E1DF4u: goto label_802E1DF4;
    case 0x802E1DF8u: goto label_802E1DF8;
    case 0x802E1DFCu: goto label_802E1DFC;
    case 0x802E1E00u: goto label_802E1E00;
    case 0x802E1E04u: goto label_802E1E04;
    case 0x802E1E08u: goto label_802E1E08;
    case 0x802E1E0Cu: goto label_802E1E0C;
    case 0x802E1E10u: goto label_802E1E10;
    case 0x802E1E14u: goto label_802E1E14;
    case 0x802E1E18u: goto label_802E1E18;
    case 0x802E1E1Cu: goto label_802E1E1C;
    case 0x802E1E20u: goto label_802E1E20;
    case 0x802E1E24u: goto label_802E1E24;
    case 0x802E1E28u: goto label_802E1E28;
    case 0x802E1E2Cu: goto label_802E1E2C;
    case 0x802E1E30u: goto label_802E1E30;
    case 0x802E1E34u: goto label_802E1E34;
    case 0x802E1E38u: goto label_802E1E38;
    case 0x802E1E3Cu: goto label_802E1E3C;
    case 0x802E1E40u: goto label_802E1E40;
    case 0x802E1E44u: goto label_802E1E44;
    case 0x802E1E48u: goto label_802E1E48;
    case 0x802E1E4Cu: goto label_802E1E4C;
    case 0x802E1E50u: goto label_802E1E50;
    case 0x802E1E54u: goto label_802E1E54;
    case 0x802E1E58u: goto label_802E1E58;
    case 0x802E1E5Cu: goto label_802E1E5C;
    case 0x802E1E60u: goto label_802E1E60;
    case 0x802E1E64u: goto label_802E1E64;
    case 0x802E1E68u: goto label_802E1E68;
    case 0x802E1E6Cu: goto label_802E1E6C;
    case 0x802E1E70u: goto label_802E1E70;
    case 0x802E1E74u: goto label_802E1E74;
    case 0x802E1E78u: goto label_802E1E78;
    case 0x802E1E7Cu: goto label_802E1E7C;
    case 0x802E1E80u: goto label_802E1E80;
    case 0x802E1E84u: goto label_802E1E84;
    case 0x802E1E88u: goto label_802E1E88;
    case 0x802E1E8Cu: goto label_802E1E8C;
    case 0x802E1E90u: goto label_802E1E90;
    case 0x802E1E94u: goto label_802E1E94;
    case 0x802E1E98u: goto label_802E1E98;
    case 0x802E1E9Cu: goto label_802E1E9C;
    case 0x802E1EA0u: goto label_802E1EA0;
    case 0x802E1EA4u: goto label_802E1EA4;
    case 0x802E1EA8u: goto label_802E1EA8;
    case 0x802E1EACu: goto label_802E1EAC;
    case 0x802E1EB0u: goto label_802E1EB0;
    case 0x802E1EB4u: goto label_802E1EB4;
    case 0x802E1EB8u: goto label_802E1EB8;
    case 0x802E1EBCu: goto label_802E1EBC;
    case 0x802E1EC0u: goto label_802E1EC0;
    case 0x802E1EC4u: goto label_802E1EC4;
    case 0x802E1EC8u: goto label_802E1EC8;
    case 0x802E1ECCu: goto label_802E1ECC;
    case 0x802E1ED0u: goto label_802E1ED0;
    case 0x802E1ED4u: goto label_802E1ED4;
    case 0x802E1ED8u: goto label_802E1ED8;
    case 0x802E1EDCu: goto label_802E1EDC;
    case 0x802E1EE0u: goto label_802E1EE0;
    case 0x802E1EE4u: goto label_802E1EE4;
    case 0x802E1EE8u: goto label_802E1EE8;
    case 0x802E1EECu: goto label_802E1EEC;
    case 0x802E1EF0u: goto label_802E1EF0;
    case 0x802E1EF4u: goto label_802E1EF4;
    case 0x802E1EF8u: goto label_802E1EF8;
    case 0x802E1EFCu: goto label_802E1EFC;
    case 0x802E1F00u: goto label_802E1F00;
    case 0x802E1F04u: goto label_802E1F04;
    case 0x802E1F08u: goto label_802E1F08;
    case 0x802E1F0Cu: goto label_802E1F0C;
    case 0x802E1F10u: goto label_802E1F10;
    case 0x802E1F14u: goto label_802E1F14;
    case 0x802E1F18u: goto label_802E1F18;
    case 0x802E1F1Cu: goto label_802E1F1C;
    case 0x802E1F20u: goto label_802E1F20;
    case 0x802E1F24u: goto label_802E1F24;
    case 0x802E1F28u: goto label_802E1F28;
    case 0x802E1F2Cu: goto label_802E1F2C;
    case 0x802E1F30u: goto label_802E1F30;
    case 0x802E1F34u: goto label_802E1F34;
    case 0x802E1F38u: goto label_802E1F38;
    case 0x802E1F3Cu: goto label_802E1F3C;
    case 0x802E1F40u: goto label_802E1F40;
    case 0x802E1F44u: goto label_802E1F44;
    case 0x802E1F48u: goto label_802E1F48;
    case 0x802E1F4Cu: goto label_802E1F4C;
    case 0x802E1F50u: goto label_802E1F50;
    case 0x802E1F54u: goto label_802E1F54;
    case 0x802E1F58u: goto label_802E1F58;
    case 0x802E1F5Cu: goto label_802E1F5C;
    case 0x802E1F60u: goto label_802E1F60;
    case 0x802E1F64u: goto label_802E1F64;
    case 0x802E1F68u: goto label_802E1F68;
    case 0x802E1F6Cu: goto label_802E1F6C;
    case 0x802E1F70u: goto label_802E1F70;
    case 0x802E1F74u: goto label_802E1F74;
    case 0x802E1F78u: goto label_802E1F78;
    case 0x802E1F7Cu: goto label_802E1F7C;
    case 0x802E1F80u: goto label_802E1F80;
    case 0x802E1F84u: goto label_802E1F84;
    case 0x802E1F88u: goto label_802E1F88;
    case 0x802E1F8Cu: goto label_802E1F8C;
    case 0x802E1F90u: goto label_802E1F90;
    case 0x802E1F94u: goto label_802E1F94;
    case 0x802E1F98u: goto label_802E1F98;
    case 0x802E1F9Cu: goto label_802E1F9C;
    case 0x802E1FA0u: goto label_802E1FA0;
    case 0x802E1FA4u: goto label_802E1FA4;
    case 0x802E1FA8u: goto label_802E1FA8;
    case 0x802E1FACu: goto label_802E1FAC;
    case 0x802E1FB0u: goto label_802E1FB0;
    case 0x802E1FB4u: goto label_802E1FB4;
    case 0x802E1FB8u: goto label_802E1FB8;
    case 0x802E1FBCu: goto label_802E1FBC;
    case 0x802E1FC0u: goto label_802E1FC0;
    case 0x802E1FC4u: goto label_802E1FC4;
    case 0x802E1FC8u: goto label_802E1FC8;
    case 0x802E1FCCu: goto label_802E1FCC;
    case 0x802E1FD0u: goto label_802E1FD0;
    case 0x802E1FD4u: goto label_802E1FD4;
    case 0x802E1FD8u: goto label_802E1FD8;
    case 0x802E1FDCu: goto label_802E1FDC;
    case 0x802E1FE0u: goto label_802E1FE0;
    case 0x802E1FE4u: goto label_802E1FE4;
    case 0x802E1FE8u: goto label_802E1FE8;
    case 0x802E1FECu: goto label_802E1FEC;
    case 0x802E1FF0u: goto label_802E1FF0;
    case 0x802E1FF4u: goto label_802E1FF4;
    case 0x802E1FF8u: goto label_802E1FF8;
    case 0x802E1FFCu: goto label_802E1FFC;
    case 0x802E2000u: goto label_802E2000;
    case 0x802E2004u: goto label_802E2004;
    case 0x802E2008u: goto label_802E2008;
    case 0x802E200Cu: goto label_802E200C;
    case 0x802E2010u: goto label_802E2010;
    case 0x802E2014u: goto label_802E2014;
    case 0x802E2018u: goto label_802E2018;
    case 0x802E201Cu: goto label_802E201C;
    case 0x802E2020u: goto label_802E2020;
    case 0x802E2024u: goto label_802E2024;
    case 0x802E2028u: goto label_802E2028;
    case 0x802E202Cu: goto label_802E202C;
    case 0x802E2030u: goto label_802E2030;
    case 0x802E2034u: goto label_802E2034;
    case 0x802E2038u: goto label_802E2038;
    case 0x802E203Cu: goto label_802E203C;
    case 0x802E2040u: goto label_802E2040;
    case 0x802E2044u: goto label_802E2044;
    case 0x802E2048u: goto label_802E2048;
    case 0x802E204Cu: goto label_802E204C;
    case 0x802E2050u: goto label_802E2050;
    case 0x802E2054u: goto label_802E2054;
    case 0x802E2058u: goto label_802E2058;
    case 0x802E205Cu: goto label_802E205C;
    case 0x802E2060u: goto label_802E2060;
    case 0x802E2064u: goto label_802E2064;
    case 0x802E2068u: goto label_802E2068;
    case 0x802E206Cu: goto label_802E206C;
    case 0x802E2070u: goto label_802E2070;
    case 0x802E2074u: goto label_802E2074;
    case 0x802E2078u: goto label_802E2078;
    case 0x802E207Cu: goto label_802E207C;
    case 0x802E2080u: goto label_802E2080;
    case 0x802E2084u: goto label_802E2084;
    case 0x802E2088u: goto label_802E2088;
    case 0x802E208Cu: goto label_802E208C;
    case 0x802E2090u: goto label_802E2090;
    case 0x802E2094u: goto label_802E2094;
    case 0x802E2098u: goto label_802E2098;
    case 0x802E209Cu: goto label_802E209C;
    case 0x802E20A0u: goto label_802E20A0;
    case 0x802E20A4u: goto label_802E20A4;
    case 0x802E20A8u: goto label_802E20A8;
    case 0x802E20ACu: goto label_802E20AC;
    case 0x802E20B0u: goto label_802E20B0;
    case 0x802E20B4u: goto label_802E20B4;
    case 0x802E20B8u: goto label_802E20B8;
    case 0x802E20BCu: goto label_802E20BC;
    case 0x802E20C0u: goto label_802E20C0;
    case 0x802E20C4u: goto label_802E20C4;
    case 0x802E20C8u: goto label_802E20C8;
    case 0x802E20CCu: goto label_802E20CC;
    case 0x802E20D0u: goto label_802E20D0;
    case 0x802E20D4u: goto label_802E20D4;
    case 0x802E20D8u: goto label_802E20D8;
    case 0x802E20DCu: goto label_802E20DC;
    case 0x802E20E0u: goto label_802E20E0;
    case 0x802E20E4u: goto label_802E20E4;
    case 0x802E20E8u: goto label_802E20E8;
    case 0x802E20ECu: goto label_802E20EC;
    case 0x802E20F0u: goto label_802E20F0;
    case 0x802E20F4u: goto label_802E20F4;
    case 0x802E20F8u: goto label_802E20F8;
    case 0x802E20FCu: goto label_802E20FC;
    case 0x802E2100u: goto label_802E2100;
    case 0x802E2104u: goto label_802E2104;
    case 0x802E2108u: goto label_802E2108;
    case 0x802E210Cu: goto label_802E210C;
    case 0x802E2110u: goto label_802E2110;
    case 0x802E2114u: goto label_802E2114;
    case 0x802E2118u: goto label_802E2118;
    case 0x802E211Cu: goto label_802E211C;
    case 0x802E2120u: goto label_802E2120;
    case 0x802E2124u: goto label_802E2124;
    case 0x802E2128u: goto label_802E2128;
    case 0x802E212Cu: goto label_802E212C;
    case 0x802E2130u: goto label_802E2130;
    case 0x802E2134u: goto label_802E2134;
    case 0x802E2138u: goto label_802E2138;
    case 0x802E213Cu: goto label_802E213C;
    case 0x802E2140u: goto label_802E2140;
    case 0x802E2144u: goto label_802E2144;
    case 0x802E2148u: goto label_802E2148;
    case 0x802E214Cu: goto label_802E214C;
    case 0x802E2150u: goto label_802E2150;
    case 0x802E2154u: goto label_802E2154;
    case 0x802E2158u: goto label_802E2158;
    case 0x802E215Cu: goto label_802E215C;
    case 0x802E2160u: goto label_802E2160;
    case 0x802E2164u: goto label_802E2164;
    case 0x802E2168u: goto label_802E2168;
    case 0x802E216Cu: goto label_802E216C;
    case 0x802E2170u: goto label_802E2170;
    case 0x802E2174u: goto label_802E2174;
    case 0x802E2178u: goto label_802E2178;
    case 0x802E217Cu: goto label_802E217C;
    case 0x802E2180u: goto label_802E2180;
    case 0x802E2184u: goto label_802E2184;
    case 0x802E2188u: goto label_802E2188;
    case 0x802E218Cu: goto label_802E218C;
    case 0x802E2190u: goto label_802E2190;
    case 0x802E2194u: goto label_802E2194;
    case 0x802E2198u: goto label_802E2198;
    case 0x802E219Cu: goto label_802E219C;
    case 0x802E21A0u: goto label_802E21A0;
    case 0x802E21A4u: goto label_802E21A4;
    case 0x802E21A8u: goto label_802E21A8;
    case 0x802E21ACu: goto label_802E21AC;
    case 0x802E21B0u: goto label_802E21B0;
    case 0x802E21B4u: goto label_802E21B4;
    case 0x802E21B8u: goto label_802E21B8;
    case 0x802E21BCu: goto label_802E21BC;
    case 0x802E21C0u: goto label_802E21C0;
    case 0x802E21C4u: goto label_802E21C4;
    case 0x802E21C8u: goto label_802E21C8;
    case 0x802E21CCu: goto label_802E21CC;
    case 0x802E21D0u: goto label_802E21D0;
    case 0x802E21D4u: goto label_802E21D4;
    case 0x802E21D8u: goto label_802E21D8;
    case 0x802E21DCu: goto label_802E21DC;
    case 0x802E21E0u: goto label_802E21E0;
    case 0x802E21E4u: goto label_802E21E4;
    case 0x802E21E8u: goto label_802E21E8;
    case 0x802E21ECu: goto label_802E21EC;
    case 0x802E21F0u: goto label_802E21F0;
    case 0x802E21F4u: goto label_802E21F4;
    case 0x802E21F8u: goto label_802E21F8;
    case 0x802E21FCu: goto label_802E21FC;
    case 0x802E2200u: goto label_802E2200;
    case 0x802E2204u: goto label_802E2204;
    case 0x802E2208u: goto label_802E2208;
    case 0x802E220Cu: goto label_802E220C;
    case 0x802E2210u: goto label_802E2210;
    case 0x802E2214u: goto label_802E2214;
    case 0x802E2218u: goto label_802E2218;
    case 0x802E221Cu: goto label_802E221C;
    case 0x802E2220u: goto label_802E2220;
    case 0x802E2224u: goto label_802E2224;
    case 0x802E2228u: goto label_802E2228;
    case 0x802E222Cu: goto label_802E222C;
    case 0x802E2230u: goto label_802E2230;
    case 0x802E2234u: goto label_802E2234;
    case 0x802E2238u: goto label_802E2238;
    case 0x802E223Cu: goto label_802E223C;
    case 0x802E2240u: goto label_802E2240;
    case 0x802E2244u: goto label_802E2244;
    case 0x802E2248u: goto label_802E2248;
    case 0x802E224Cu: goto label_802E224C;
    case 0x802E2250u: goto label_802E2250;
    case 0x802E2254u: goto label_802E2254;
    case 0x802E2258u: goto label_802E2258;
    case 0x802E225Cu: goto label_802E225C;
    case 0x802E2260u: goto label_802E2260;
    case 0x802E2264u: goto label_802E2264;
    case 0x802E2268u: goto label_802E2268;
    case 0x802E226Cu: goto label_802E226C;
    case 0x802E2270u: goto label_802E2270;
    case 0x802E2274u: goto label_802E2274;
    case 0x802E2278u: goto label_802E2278;
    case 0x802E227Cu: goto label_802E227C;
    case 0x802E2280u: goto label_802E2280;
    case 0x802E2284u: goto label_802E2284;
    case 0x802E2288u: goto label_802E2288;
    case 0x802E228Cu: goto label_802E228C;
    case 0x802E2290u: goto label_802E2290;
    case 0x802E2294u: goto label_802E2294;
    case 0x802E2298u: goto label_802E2298;
    case 0x802E229Cu: goto label_802E229C;
    case 0x802E22A0u: goto label_802E22A0;
    case 0x802E22A4u: goto label_802E22A4;
    case 0x802E22A8u: goto label_802E22A8;
    case 0x802E22ACu: goto label_802E22AC;
    case 0x802E22B0u: goto label_802E22B0;
    case 0x802E22B4u: goto label_802E22B4;
    case 0x802E22B8u: goto label_802E22B8;
    case 0x802E22BCu: goto label_802E22BC;
    case 0x802E22C0u: goto label_802E22C0;
    case 0x802E22C4u: goto label_802E22C4;
    case 0x802E22C8u: goto label_802E22C8;
    case 0x802E22CCu: goto label_802E22CC;
    case 0x802E22D0u: goto label_802E22D0;
    case 0x802E22D4u: goto label_802E22D4;
    case 0x802E22D8u: goto label_802E22D8;
    case 0x802E22DCu: goto label_802E22DC;
    case 0x802E22E0u: goto label_802E22E0;
    case 0x802E22E4u: goto label_802E22E4;
    case 0x802E22E8u: goto label_802E22E8;
    case 0x802E22ECu: goto label_802E22EC;
    case 0x802E22F0u: goto label_802E22F0;
    case 0x802E22F4u: goto label_802E22F4;
    case 0x802E22F8u: goto label_802E22F8;
    case 0x802E22FCu: goto label_802E22FC;
    case 0x802E2300u: goto label_802E2300;
    case 0x802E2304u: goto label_802E2304;
    case 0x802E2308u: goto label_802E2308;
    case 0x802E230Cu: goto label_802E230C;
    case 0x802E2310u: goto label_802E2310;
    case 0x802E2314u: goto label_802E2314;
    case 0x802E2318u: goto label_802E2318;
    case 0x802E231Cu: goto label_802E231C;
    case 0x802E2320u: goto label_802E2320;
    case 0x802E2324u: goto label_802E2324;
    case 0x802E2328u: goto label_802E2328;
    case 0x802E232Cu: goto label_802E232C;
    case 0x802E2330u: goto label_802E2330;
    case 0x802E2334u: goto label_802E2334;
    case 0x802E2338u: goto label_802E2338;
    case 0x802E233Cu: goto label_802E233C;
    case 0x802E2340u: goto label_802E2340;
    case 0x802E2344u: goto label_802E2344;
    case 0x802E2348u: goto label_802E2348;
    case 0x802E234Cu: goto label_802E234C;
    case 0x802E2350u: goto label_802E2350;
    case 0x802E2354u: goto label_802E2354;
    case 0x802E2358u: goto label_802E2358;
    case 0x802E235Cu: goto label_802E235C;
    case 0x802E2360u: goto label_802E2360;
    case 0x802E2364u: goto label_802E2364;
    case 0x802E2368u: goto label_802E2368;
    case 0x802E236Cu: goto label_802E236C;
    case 0x802E2370u: goto label_802E2370;
    case 0x802E2374u: goto label_802E2374;
    case 0x802E2378u: goto label_802E2378;
    case 0x802E237Cu: goto label_802E237C;
    case 0x802E2380u: goto label_802E2380;
    case 0x802E2384u: goto label_802E2384;
    case 0x802E2388u: goto label_802E2388;
    case 0x802E238Cu: goto label_802E238C;
    case 0x802E2390u: goto label_802E2390;
    case 0x802E2394u: goto label_802E2394;
    case 0x802E2398u: goto label_802E2398;
    case 0x802E239Cu: goto label_802E239C;
    case 0x802E23A0u: goto label_802E23A0;
    case 0x802E23A4u: goto label_802E23A4;
    case 0x802E23A8u: goto label_802E23A8;
    case 0x802E23ACu: goto label_802E23AC;
    case 0x802E23B0u: goto label_802E23B0;
    case 0x802E23B4u: goto label_802E23B4;
    case 0x802E23B8u: goto label_802E23B8;
    case 0x802E23BCu: goto label_802E23BC;
    case 0x802E23C0u: goto label_802E23C0;
    case 0x802E23C4u: goto label_802E23C4;
    case 0x802E23C8u: goto label_802E23C8;
    case 0x802E23CCu: goto label_802E23CC;
    case 0x802E23D0u: goto label_802E23D0;
    case 0x802E23D4u: goto label_802E23D4;
    case 0x802E23D8u: goto label_802E23D8;
    case 0x802E23DCu: goto label_802E23DC;
    case 0x802E23E0u: goto label_802E23E0;
    case 0x802E23E4u: goto label_802E23E4;
    case 0x802E23E8u: goto label_802E23E8;
    case 0x802E23ECu: goto label_802E23EC;
    case 0x802E23F0u: goto label_802E23F0;
    case 0x802E23F4u: goto label_802E23F4;
    case 0x802E23F8u: goto label_802E23F8;
    case 0x802E23FCu: goto label_802E23FC;
    case 0x802E2400u: goto label_802E2400;
    case 0x802E2404u: goto label_802E2404;
    case 0x802E2408u: goto label_802E2408;
    case 0x802E240Cu: goto label_802E240C;
    case 0x802E2410u: goto label_802E2410;
    case 0x802E2414u: goto label_802E2414;
    case 0x802E2418u: goto label_802E2418;
    case 0x802E241Cu: goto label_802E241C;
    case 0x802E2420u: goto label_802E2420;
    case 0x802E2424u: goto label_802E2424;
    case 0x802E2428u: goto label_802E2428;
    case 0x802E242Cu: goto label_802E242C;
    case 0x802E2430u: goto label_802E2430;
    case 0x802E2434u: goto label_802E2434;
    case 0x802E2438u: goto label_802E2438;
    case 0x802E243Cu: goto label_802E243C;
    case 0x802E2440u: goto label_802E2440;
    case 0x802E2444u: goto label_802E2444;
    case 0x802E2448u: goto label_802E2448;
    case 0x802E244Cu: goto label_802E244C;
    case 0x802E2450u: goto label_802E2450;
    case 0x802E2454u: goto label_802E2454;
    case 0x802E2458u: goto label_802E2458;
    case 0x802E245Cu: goto label_802E245C;
    case 0x802E2460u: goto label_802E2460;
    case 0x802E2464u: goto label_802E2464;
    case 0x802E2468u: goto label_802E2468;
    case 0x802E246Cu: goto label_802E246C;
    case 0x802E2470u: goto label_802E2470;
    case 0x802E2474u: goto label_802E2474;
    case 0x802E2478u: goto label_802E2478;
    case 0x802E247Cu: goto label_802E247C;
    case 0x802E2480u: goto label_802E2480;
    case 0x802E2484u: goto label_802E2484;
    case 0x802E2488u: goto label_802E2488;
    case 0x802E248Cu: goto label_802E248C;
    case 0x802E2490u: goto label_802E2490;
    case 0x802E2494u: goto label_802E2494;
    case 0x802E2498u: goto label_802E2498;
    case 0x802E249Cu: goto label_802E249C;
    case 0x802E24A0u: goto label_802E24A0;
    case 0x802E24A4u: goto label_802E24A4;
    case 0x802E24A8u: goto label_802E24A8;
    case 0x802E24ACu: goto label_802E24AC;
    case 0x802E24B0u: goto label_802E24B0;
    case 0x802E24B4u: goto label_802E24B4;
    case 0x802E24B8u: goto label_802E24B8;
    case 0x802E24BCu: goto label_802E24BC;
    case 0x802E24C0u: goto label_802E24C0;
    case 0x802E24C4u: goto label_802E24C4;
    case 0x802E24C8u: goto label_802E24C8;
    case 0x802E24CCu: goto label_802E24CC;
    case 0x802E24D0u: goto label_802E24D0;
    case 0x802E24D4u: goto label_802E24D4;
    case 0x802E24D8u: goto label_802E24D8;
    case 0x802E24DCu: goto label_802E24DC;
    case 0x802E24E0u: goto label_802E24E0;
    case 0x802E24E4u: goto label_802E24E4;
    case 0x802E24E8u: goto label_802E24E8;
    case 0x802E24ECu: goto label_802E24EC;
    case 0x802E24F0u: goto label_802E24F0;
    case 0x802E24F4u: goto label_802E24F4;
    case 0x802E24F8u: goto label_802E24F8;
    case 0x802E24FCu: goto label_802E24FC;
    case 0x802E2500u: goto label_802E2500;
    case 0x802E2504u: goto label_802E2504;
    case 0x802E2508u: goto label_802E2508;
    case 0x802E250Cu: goto label_802E250C;
    case 0x802E2510u: goto label_802E2510;
    case 0x802E2514u: goto label_802E2514;
    case 0x802E2518u: goto label_802E2518;
    case 0x802E251Cu: goto label_802E251C;
    case 0x802E2520u: goto label_802E2520;
    case 0x802E2524u: goto label_802E2524;
    case 0x802E2528u: goto label_802E2528;
    case 0x802E252Cu: goto label_802E252C;
    case 0x802E2530u: goto label_802E2530;
    case 0x802E2534u: goto label_802E2534;
    case 0x802E2538u: goto label_802E2538;
    case 0x802E253Cu: goto label_802E253C;
    case 0x802E2540u: goto label_802E2540;
    case 0x802E2544u: goto label_802E2544;
    case 0x802E2548u: goto label_802E2548;
    case 0x802E254Cu: goto label_802E254C;
    case 0x802E2550u: goto label_802E2550;
    case 0x802E2554u: goto label_802E2554;
    case 0x802E2558u: goto label_802E2558;
    case 0x802E255Cu: goto label_802E255C;
    case 0x802E2560u: goto label_802E2560;
    case 0x802E2564u: goto label_802E2564;
    case 0x802E2568u: goto label_802E2568;
    case 0x802E256Cu: goto label_802E256C;
    case 0x802E2570u: goto label_802E2570;
    case 0x802E2574u: goto label_802E2574;
    case 0x802E2578u: goto label_802E2578;
    case 0x802E257Cu: goto label_802E257C;
    case 0x802E2580u: goto label_802E2580;
    case 0x802E2584u: goto label_802E2584;
    case 0x802E2588u: goto label_802E2588;
    case 0x802E258Cu: goto label_802E258C;
    case 0x802E2590u: goto label_802E2590;
    case 0x802E2594u: goto label_802E2594;
    case 0x802E2598u: goto label_802E2598;
    case 0x802E259Cu: goto label_802E259C;
    case 0x802E25A0u: goto label_802E25A0;
    case 0x802E25A4u: goto label_802E25A4;
    case 0x802E25A8u: goto label_802E25A8;
    case 0x802E25ACu: goto label_802E25AC;
    case 0x802E25B0u: goto label_802E25B0;
    case 0x802E25B4u: goto label_802E25B4;
    case 0x802E25B8u: goto label_802E25B8;
    case 0x802E25BCu: goto label_802E25BC;
    case 0x802E25C0u: goto label_802E25C0;
    case 0x802E25C4u: goto label_802E25C4;
    case 0x802E25C8u: goto label_802E25C8;
    case 0x802E25CCu: goto label_802E25CC;
    case 0x802E25D0u: goto label_802E25D0;
    case 0x802E25D4u: goto label_802E25D4;
    case 0x802E25D8u: goto label_802E25D8;
    case 0x802E25DCu: goto label_802E25DC;
    case 0x802E25E0u: goto label_802E25E0;
    case 0x802E25E4u: goto label_802E25E4;
    case 0x802E25E8u: goto label_802E25E8;
    case 0x802E25ECu: goto label_802E25EC;
    case 0x802E25F0u: goto label_802E25F0;
    case 0x802E25F4u: goto label_802E25F4;
    case 0x802E25F8u: goto label_802E25F8;
    case 0x802E25FCu: goto label_802E25FC;
    case 0x802E2600u: goto label_802E2600;
    case 0x802E2604u: goto label_802E2604;
    case 0x802E2608u: goto label_802E2608;
    case 0x802E260Cu: goto label_802E260C;
    case 0x802E2610u: goto label_802E2610;
    case 0x802E2614u: goto label_802E2614;
    case 0x802E2618u: goto label_802E2618;
    case 0x802E261Cu: goto label_802E261C;
    case 0x802E2620u: goto label_802E2620;
    case 0x802E2624u: goto label_802E2624;
    case 0x802E2628u: goto label_802E2628;
    case 0x802E262Cu: goto label_802E262C;
    case 0x802E2630u: goto label_802E2630;
    case 0x802E2634u: goto label_802E2634;
    case 0x802E2638u: goto label_802E2638;
    case 0x802E263Cu: goto label_802E263C;
    case 0x802E2640u: goto label_802E2640;
    case 0x802E2644u: goto label_802E2644;
    case 0x802E2648u: goto label_802E2648;
    case 0x802E264Cu: goto label_802E264C;
    case 0x802E2650u: goto label_802E2650;
    case 0x802E2654u: goto label_802E2654;
    case 0x802E2658u: goto label_802E2658;
    case 0x802E265Cu: goto label_802E265C;
    case 0x802E2660u: goto label_802E2660;
    case 0x802E2664u: goto label_802E2664;
    case 0x802E2668u: goto label_802E2668;
    case 0x802E266Cu: goto label_802E266C;
    case 0x802E2670u: goto label_802E2670;
    case 0x802E2674u: goto label_802E2674;
    case 0x802E2678u: goto label_802E2678;
    case 0x802E267Cu: goto label_802E267C;
    case 0x802E2680u: goto label_802E2680;
    case 0x802E2684u: goto label_802E2684;
    case 0x802E2688u: goto label_802E2688;
    case 0x802E268Cu: goto label_802E268C;
    case 0x802E2690u: goto label_802E2690;
    case 0x802E2694u: goto label_802E2694;
    case 0x802E2698u: goto label_802E2698;
    case 0x802E269Cu: goto label_802E269C;
    case 0x802E26A0u: goto label_802E26A0;
    case 0x802E26A4u: goto label_802E26A4;
    case 0x802E26A8u: goto label_802E26A8;
    case 0x802E26ACu: goto label_802E26AC;
    case 0x802E26B0u: goto label_802E26B0;
    case 0x802E26B4u: goto label_802E26B4;
    case 0x802E26B8u: goto label_802E26B8;
    case 0x802E26BCu: goto label_802E26BC;
    case 0x802E26C0u: goto label_802E26C0;
    case 0x802E26C4u: goto label_802E26C4;
    case 0x802E26C8u: goto label_802E26C8;
    case 0x802E26CCu: goto label_802E26CC;
    case 0x802E26D0u: goto label_802E26D0;
    case 0x802E26D4u: goto label_802E26D4;
    case 0x802E26D8u: goto label_802E26D8;
    case 0x802E26DCu: goto label_802E26DC;
    case 0x802E26E0u: goto label_802E26E0;
    case 0x802E26E4u: goto label_802E26E4;
    case 0x802E26E8u: goto label_802E26E8;
    case 0x802E26ECu: goto label_802E26EC;
    case 0x802E26F0u: goto label_802E26F0;
    case 0x802E26F4u: goto label_802E26F4;
    case 0x802E26F8u: goto label_802E26F8;
    case 0x802E26FCu: goto label_802E26FC;
    case 0x802E2700u: goto label_802E2700;
    case 0x802E2704u: goto label_802E2704;
    case 0x802E2708u: goto label_802E2708;
    case 0x802E270Cu: goto label_802E270C;
    case 0x802E2710u: goto label_802E2710;
    case 0x802E2714u: goto label_802E2714;
    case 0x802E2718u: goto label_802E2718;
    case 0x802E271Cu: goto label_802E271C;
    case 0x802E2720u: goto label_802E2720;
    case 0x802E2724u: goto label_802E2724;
    case 0x802E2728u: goto label_802E2728;
    case 0x802E272Cu: goto label_802E272C;
    case 0x802E2730u: goto label_802E2730;
    case 0x802E2734u: goto label_802E2734;
    case 0x802E2738u: goto label_802E2738;
    case 0x802E273Cu: goto label_802E273C;
    case 0x802E2740u: goto label_802E2740;
    case 0x802E2744u: goto label_802E2744;
    case 0x802E2748u: goto label_802E2748;
    case 0x802E274Cu: goto label_802E274C;
    case 0x802E2750u: goto label_802E2750;
    case 0x802E2754u: goto label_802E2754;
    case 0x802E2758u: goto label_802E2758;
    case 0x802E275Cu: goto label_802E275C;
    case 0x802E2760u: goto label_802E2760;
    case 0x802E2764u: goto label_802E2764;
    case 0x802E2768u: goto label_802E2768;
    case 0x802E276Cu: goto label_802E276C;
    case 0x802E2770u: goto label_802E2770;
    case 0x802E2774u: goto label_802E2774;
    case 0x802E2778u: goto label_802E2778;
    case 0x802E277Cu: goto label_802E277C;
    case 0x802E2780u: goto label_802E2780;
    case 0x802E2784u: goto label_802E2784;
    case 0x802E2788u: goto label_802E2788;
    case 0x802E278Cu: goto label_802E278C;
    case 0x802E2790u: goto label_802E2790;
    case 0x802E2794u: goto label_802E2794;
    case 0x802E2798u: goto label_802E2798;
    case 0x802E279Cu: goto label_802E279C;
    case 0x802E27A0u: goto label_802E27A0;
    case 0x802E27A4u: goto label_802E27A4;
    case 0x802E27A8u: goto label_802E27A8;
    case 0x802E27ACu: goto label_802E27AC;
    case 0x802E27B0u: goto label_802E27B0;
    case 0x802E27B4u: goto label_802E27B4;
    case 0x802E27B8u: goto label_802E27B8;
    case 0x802E27BCu: goto label_802E27BC;
    case 0x802E27C0u: goto label_802E27C0;
    case 0x802E27C4u: goto label_802E27C4;
    case 0x802E27C8u: goto label_802E27C8;
    case 0x802E27CCu: goto label_802E27CC;
    case 0x802E27D0u: goto label_802E27D0;
    case 0x802E27D4u: goto label_802E27D4;
    case 0x802E27D8u: goto label_802E27D8;
    case 0x802E27DCu: goto label_802E27DC;
    case 0x802E27E0u: goto label_802E27E0;
    case 0x802E27E4u: goto label_802E27E4;
    case 0x802E27E8u: goto label_802E27E8;
    case 0x802E27ECu: goto label_802E27EC;
    case 0x802E27F0u: goto label_802E27F0;
    case 0x802E27F4u: goto label_802E27F4;
    case 0x802E27F8u: goto label_802E27F8;
    case 0x802E27FCu: goto label_802E27FC;
    case 0x802E2800u: goto label_802E2800;
    case 0x802E2804u: goto label_802E2804;
    case 0x802E2808u: goto label_802E2808;
    case 0x802E280Cu: goto label_802E280C;
    case 0x802E2810u: goto label_802E2810;
    case 0x802E2814u: goto label_802E2814;
    case 0x802E2818u: goto label_802E2818;
    case 0x802E281Cu: goto label_802E281C;
    case 0x802E2820u: goto label_802E2820;
    case 0x802E2824u: goto label_802E2824;
    case 0x802E2828u: goto label_802E2828;
    case 0x802E282Cu: goto label_802E282C;
    case 0x802E2830u: goto label_802E2830;
    case 0x802E2834u: goto label_802E2834;
    case 0x802E2838u: goto label_802E2838;
    case 0x802E283Cu: goto label_802E283C;
    case 0x802E2840u: goto label_802E2840;
    case 0x802E2844u: goto label_802E2844;
    case 0x802E2848u: goto label_802E2848;
    case 0x802E284Cu: goto label_802E284C;
    case 0x802E2850u: goto label_802E2850;
    case 0x802E2854u: goto label_802E2854;
    case 0x802E2858u: goto label_802E2858;
    case 0x802E285Cu: goto label_802E285C;
    case 0x802E2860u: goto label_802E2860;
    case 0x802E2864u: goto label_802E2864;
    case 0x802E2868u: goto label_802E2868;
    case 0x802E286Cu: goto label_802E286C;
    case 0x802E2870u: goto label_802E2870;
    case 0x802E2874u: goto label_802E2874;
    case 0x802E2878u: goto label_802E2878;
    case 0x802E287Cu: goto label_802E287C;
    case 0x802E2880u: goto label_802E2880;
    case 0x802E2884u: goto label_802E2884;
    case 0x802E2888u: goto label_802E2888;
    case 0x802E288Cu: goto label_802E288C;
    case 0x802E2890u: goto label_802E2890;
    case 0x802E2894u: goto label_802E2894;
    case 0x802E2898u: goto label_802E2898;
    case 0x802E289Cu: goto label_802E289C;
    case 0x802E28A0u: goto label_802E28A0;
    case 0x802E28A4u: goto label_802E28A4;
    case 0x802E28A8u: goto label_802E28A8;
    case 0x802E28ACu: goto label_802E28AC;
    case 0x802E28B0u: goto label_802E28B0;
    case 0x802E28B4u: goto label_802E28B4;
    case 0x802E28B8u: goto label_802E28B8;
    case 0x802E28BCu: goto label_802E28BC;
    case 0x802E28C0u: goto label_802E28C0;
    case 0x802E28C4u: goto label_802E28C4;
    case 0x802E28C8u: goto label_802E28C8;
    case 0x802E28CCu: goto label_802E28CC;
    case 0x802E28D0u: goto label_802E28D0;
    case 0x802E28D4u: goto label_802E28D4;
    case 0x802E28D8u: goto label_802E28D8;
    case 0x802E28DCu: goto label_802E28DC;
    case 0x802E28E0u: goto label_802E28E0;
    case 0x802E28E4u: goto label_802E28E4;
    case 0x802E28E8u: goto label_802E28E8;
    case 0x802E28ECu: goto label_802E28EC;
    case 0x802E28F0u: goto label_802E28F0;
    case 0x802E28F4u: goto label_802E28F4;
    case 0x802E28F8u: goto label_802E28F8;
    case 0x802E28FCu: goto label_802E28FC;
    case 0x802E2900u: goto label_802E2900;
    case 0x802E2904u: goto label_802E2904;
    case 0x802E2908u: goto label_802E2908;
    case 0x802E290Cu: goto label_802E290C;
    case 0x802E2910u: goto label_802E2910;
    case 0x802E2914u: goto label_802E2914;
    case 0x802E2918u: goto label_802E2918;
    case 0x802E291Cu: goto label_802E291C;
    case 0x802E2920u: goto label_802E2920;
    case 0x802E2924u: goto label_802E2924;
    case 0x802E2928u: goto label_802E2928;
    case 0x802E292Cu: goto label_802E292C;
    case 0x802E2930u: goto label_802E2930;
    case 0x802E2934u: goto label_802E2934;
    case 0x802E2938u: goto label_802E2938;
    case 0x802E293Cu: goto label_802E293C;
    case 0x802E2940u: goto label_802E2940;
    case 0x802E2944u: goto label_802E2944;
    case 0x802E2948u: goto label_802E2948;
    case 0x802E294Cu: goto label_802E294C;
    case 0x802E2950u: goto label_802E2950;
    case 0x802E2954u: goto label_802E2954;
    case 0x802E2958u: goto label_802E2958;
    case 0x802E295Cu: goto label_802E295C;
    case 0x802E2960u: goto label_802E2960;
    case 0x802E2964u: goto label_802E2964;
    case 0x802E2968u: goto label_802E2968;
    case 0x802E296Cu: goto label_802E296C;
    case 0x802E2970u: goto label_802E2970;
    case 0x802E2974u: goto label_802E2974;
    case 0x802E2978u: goto label_802E2978;
    case 0x802E297Cu: goto label_802E297C;
    case 0x802E2980u: goto label_802E2980;
    case 0x802E2984u: goto label_802E2984;
    case 0x802E2988u: goto label_802E2988;
    case 0x802E298Cu: goto label_802E298C;
    case 0x802E2990u: goto label_802E2990;
    case 0x802E2994u: goto label_802E2994;
    case 0x802E2998u: goto label_802E2998;
    case 0x802E299Cu: goto label_802E299C;
    case 0x802E29A0u: goto label_802E29A0;
    case 0x802E29A4u: goto label_802E29A4;
    case 0x802E29A8u: goto label_802E29A8;
    case 0x802E29ACu: goto label_802E29AC;
    case 0x802E29B0u: goto label_802E29B0;
    case 0x802E29B4u: goto label_802E29B4;
    case 0x802E29B8u: goto label_802E29B8;
    case 0x802E29BCu: goto label_802E29BC;
    case 0x802E29C0u: goto label_802E29C0;
    case 0x802E29C4u: goto label_802E29C4;
    case 0x802E29C8u: goto label_802E29C8;
    case 0x802E29CCu: goto label_802E29CC;
    case 0x802E29D0u: goto label_802E29D0;
    case 0x802E29D4u: goto label_802E29D4;
    case 0x802E29D8u: goto label_802E29D8;
    case 0x802E29DCu: goto label_802E29DC;
    case 0x802E29E0u: goto label_802E29E0;
    case 0x802E29E4u: goto label_802E29E4;
    case 0x802E29E8u: goto label_802E29E8;
    case 0x802E29ECu: goto label_802E29EC;
    case 0x802E29F0u: goto label_802E29F0;
    case 0x802E29F4u: goto label_802E29F4;
    case 0x802E29F8u: goto label_802E29F8;
    case 0x802E29FCu: goto label_802E29FC;
    case 0x802E2A00u: goto label_802E2A00;
    case 0x802E2A04u: goto label_802E2A04;
    case 0x802E2A08u: goto label_802E2A08;
    case 0x802E2A0Cu: goto label_802E2A0C;
    case 0x802E2A10u: goto label_802E2A10;
    case 0x802E2A14u: goto label_802E2A14;
    case 0x802E2A18u: goto label_802E2A18;
    case 0x802E2A1Cu: goto label_802E2A1C;
    case 0x802E2A20u: goto label_802E2A20;
    case 0x802E2A24u: goto label_802E2A24;
    case 0x802E2A28u: goto label_802E2A28;
    case 0x802E2A2Cu: goto label_802E2A2C;
    case 0x802E2A30u: goto label_802E2A30;
    case 0x802E2A34u: goto label_802E2A34;
    case 0x802E2A38u: goto label_802E2A38;
    case 0x802E2A3Cu: goto label_802E2A3C;
    case 0x802E2A40u: goto label_802E2A40;
    case 0x802E2A44u: goto label_802E2A44;
    case 0x802E2A48u: goto label_802E2A48;
    case 0x802E2A4Cu: goto label_802E2A4C;
    case 0x802E2A50u: goto label_802E2A50;
    case 0x802E2A54u: goto label_802E2A54;
    case 0x802E2A58u: goto label_802E2A58;
    case 0x802E2A5Cu: goto label_802E2A5C;
    case 0x802E2A60u: goto label_802E2A60;
    case 0x802E2A64u: goto label_802E2A64;
    case 0x802E2A68u: goto label_802E2A68;
    case 0x802E2A6Cu: goto label_802E2A6C;
    case 0x802E2A70u: goto label_802E2A70;
    case 0x802E2A74u: goto label_802E2A74;
    case 0x802E2A78u: goto label_802E2A78;
    case 0x802E2A7Cu: goto label_802E2A7C;
    case 0x802E2A80u: goto label_802E2A80;
    case 0x802E2A84u: goto label_802E2A84;
    case 0x802E2A88u: goto label_802E2A88;
    case 0x802E2A8Cu: goto label_802E2A8C;
    case 0x802E2A90u: goto label_802E2A90;
    case 0x802E2A94u: goto label_802E2A94;
    case 0x802E2A98u: goto label_802E2A98;
    case 0x802E2A9Cu: goto label_802E2A9C;
    case 0x802E2AA0u: goto label_802E2AA0;
    case 0x802E2AA4u: goto label_802E2AA4;
    case 0x802E2AA8u: goto label_802E2AA8;
    case 0x802E2AACu: goto label_802E2AAC;
    case 0x802E2AB0u: goto label_802E2AB0;
    case 0x802E2AB4u: goto label_802E2AB4;
    case 0x802E2AB8u: goto label_802E2AB8;
    case 0x802E2ABCu: goto label_802E2ABC;
    case 0x802E2AC0u: goto label_802E2AC0;
    case 0x802E2AC4u: goto label_802E2AC4;
    case 0x802E2AC8u: goto label_802E2AC8;
    case 0x802E2ACCu: goto label_802E2ACC;
    case 0x802E2AD0u: goto label_802E2AD0;
    case 0x802E2AD4u: goto label_802E2AD4;
    case 0x802E2AD8u: goto label_802E2AD8;
    case 0x802E2ADCu: goto label_802E2ADC;
    case 0x802E2AE0u: goto label_802E2AE0;
    case 0x802E2AE4u: goto label_802E2AE4;
    case 0x802E2AE8u: goto label_802E2AE8;
    case 0x802E2AECu: goto label_802E2AEC;
    case 0x802E2AF0u: goto label_802E2AF0;
    case 0x802E2AF4u: goto label_802E2AF4;
    case 0x802E2AF8u: goto label_802E2AF8;
    case 0x802E2AFCu: goto label_802E2AFC;
    case 0x802E2B00u: goto label_802E2B00;
    case 0x802E2B04u: goto label_802E2B04;
    case 0x802E2B08u: goto label_802E2B08;
    case 0x802E2B0Cu: goto label_802E2B0C;
    case 0x802E2B10u: goto label_802E2B10;
    case 0x802E2B14u: goto label_802E2B14;
    case 0x802E2B18u: goto label_802E2B18;
    case 0x802E2B1Cu: goto label_802E2B1C;
    case 0x802E2B20u: goto label_802E2B20;
    case 0x802E2B24u: goto label_802E2B24;
    case 0x802E2B28u: goto label_802E2B28;
    case 0x802E2B2Cu: goto label_802E2B2C;
    case 0x802E2B30u: goto label_802E2B30;
    case 0x802E2B34u: goto label_802E2B34;
    case 0x802E2B38u: goto label_802E2B38;
    case 0x802E2B3Cu: goto label_802E2B3C;
    case 0x802E2B40u: goto label_802E2B40;
    case 0x802E2B44u: goto label_802E2B44;
    case 0x802E2B48u: goto label_802E2B48;
    case 0x802E2B4Cu: goto label_802E2B4C;
    case 0x802E2B50u: goto label_802E2B50;
    case 0x802E2B54u: goto label_802E2B54;
    case 0x802E2B58u: goto label_802E2B58;
    case 0x802E2B5Cu: goto label_802E2B5C;
    case 0x802E2B60u: goto label_802E2B60;
    case 0x802E2B64u: goto label_802E2B64;
    case 0x802E2B68u: goto label_802E2B68;
    case 0x802E2B6Cu: goto label_802E2B6C;
    case 0x802E2B70u: goto label_802E2B70;
    case 0x802E2B74u: goto label_802E2B74;
    case 0x802E2B78u: goto label_802E2B78;
    case 0x802E2B7Cu: goto label_802E2B7C;
    case 0x802E2B80u: goto label_802E2B80;
    case 0x802E2B84u: goto label_802E2B84;
    case 0x802E2B88u: goto label_802E2B88;
    case 0x802E2B8Cu: goto label_802E2B8C;
    case 0x802E2B90u: goto label_802E2B90;
    case 0x802E2B94u: goto label_802E2B94;
    case 0x802E2B98u: goto label_802E2B98;
    case 0x802E2B9Cu: goto label_802E2B9C;
    case 0x802E2BA0u: goto label_802E2BA0;
    case 0x802E2BA4u: goto label_802E2BA4;
    case 0x802E2BA8u: goto label_802E2BA8;
    case 0x802E2BACu: goto label_802E2BAC;
    case 0x802E2BB0u: goto label_802E2BB0;
    case 0x802E2BB4u: goto label_802E2BB4;
    case 0x802E2BB8u: goto label_802E2BB8;
    case 0x802E2BBCu: goto label_802E2BBC;
    case 0x802E2BC0u: goto label_802E2BC0;
    case 0x802E2BC4u: goto label_802E2BC4;
    case 0x802E2BC8u: goto label_802E2BC8;
    case 0x802E2BCCu: goto label_802E2BCC;
    case 0x802E2BD0u: goto label_802E2BD0;
    case 0x802E2BD4u: goto label_802E2BD4;
    case 0x802E2BD8u: goto label_802E2BD8;
    case 0x802E2BDCu: goto label_802E2BDC;
    case 0x802E2BE0u: goto label_802E2BE0;
    case 0x802E2BE4u: goto label_802E2BE4;
    case 0x802E2BE8u: goto label_802E2BE8;
    case 0x802E2BECu: goto label_802E2BEC;
    case 0x802E2BF0u: goto label_802E2BF0;
    case 0x802E2BF4u: goto label_802E2BF4;
    case 0x802E2BF8u: goto label_802E2BF8;
    case 0x802E2BFCu: goto label_802E2BFC;
    case 0x802E2C00u: goto label_802E2C00;
    case 0x802E2C04u: goto label_802E2C04;
    case 0x802E2C08u: goto label_802E2C08;
    case 0x802E2C0Cu: goto label_802E2C0C;
    case 0x802E2C10u: goto label_802E2C10;
    case 0x802E2C14u: goto label_802E2C14;
    case 0x802E2C18u: goto label_802E2C18;
    case 0x802E2C1Cu: goto label_802E2C1C;
    case 0x802E2C20u: goto label_802E2C20;
    case 0x802E2C24u: goto label_802E2C24;
    case 0x802E2C28u: goto label_802E2C28;
    case 0x802E2C2Cu: goto label_802E2C2C;
    case 0x802E2C30u: goto label_802E2C30;
    case 0x802E2C34u: goto label_802E2C34;
    case 0x802E2C38u: goto label_802E2C38;
    case 0x802E2C3Cu: goto label_802E2C3C;
    case 0x802E2C40u: goto label_802E2C40;
    case 0x802E2C44u: goto label_802E2C44;
    case 0x802E2C48u: goto label_802E2C48;
    case 0x802E2C4Cu: goto label_802E2C4C;
    case 0x802E2C50u: goto label_802E2C50;
    case 0x802E2C54u: goto label_802E2C54;
    case 0x802E2C58u: goto label_802E2C58;
    case 0x802E2C5Cu: goto label_802E2C5C;
    case 0x802E2C60u: goto label_802E2C60;
    case 0x802E2C64u: goto label_802E2C64;
    case 0x802E2C68u: goto label_802E2C68;
    case 0x802E2C6Cu: goto label_802E2C6C;
    case 0x802E2C70u: goto label_802E2C70;
    case 0x802E2C74u: goto label_802E2C74;
    case 0x802E2C78u: goto label_802E2C78;
    case 0x802E2C7Cu: goto label_802E2C7C;
    case 0x802E2C80u: goto label_802E2C80;
    case 0x802E2C84u: goto label_802E2C84;
    case 0x802E2C88u: goto label_802E2C88;
    case 0x802E2C8Cu: goto label_802E2C8C;
    case 0x802E2C90u: goto label_802E2C90;
    case 0x802E2C94u: goto label_802E2C94;
    case 0x802E2C98u: goto label_802E2C98;
    case 0x802E2C9Cu: goto label_802E2C9C;
    case 0x802E2CA0u: goto label_802E2CA0;
    case 0x802E2CA4u: goto label_802E2CA4;
    case 0x802E2CA8u: goto label_802E2CA8;
    case 0x802E2CACu: goto label_802E2CAC;
    case 0x802E2CB0u: goto label_802E2CB0;
    case 0x802E2CB4u: goto label_802E2CB4;
    case 0x802E2CB8u: goto label_802E2CB8;
    case 0x802E2CBCu: goto label_802E2CBC;
    case 0x802E2CC0u: goto label_802E2CC0;
    case 0x802E2CC4u: goto label_802E2CC4;
    case 0x802E2CC8u: goto label_802E2CC8;
    case 0x802E2CCCu: goto label_802E2CCC;
    case 0x802E2CD0u: goto label_802E2CD0;
    case 0x802E2CD4u: goto label_802E2CD4;
    case 0x802E2CD8u: goto label_802E2CD8;
    case 0x802E2CDCu: goto label_802E2CDC;
    case 0x802E2CE0u: goto label_802E2CE0;
    case 0x802E2CE4u: goto label_802E2CE4;
    case 0x802E2CE8u: goto label_802E2CE8;
    case 0x802E2CECu: goto label_802E2CEC;
    case 0x802E2CF0u: goto label_802E2CF0;
    case 0x802E2CF4u: goto label_802E2CF4;
    case 0x802E2CF8u: goto label_802E2CF8;
    case 0x802E2CFCu: goto label_802E2CFC;
    case 0x802E2D00u: goto label_802E2D00;
    case 0x802E2D04u: goto label_802E2D04;
    case 0x802E2D08u: goto label_802E2D08;
    case 0x802E2D0Cu: goto label_802E2D0C;
    case 0x802E2D10u: goto label_802E2D10;
    case 0x802E2D14u: goto label_802E2D14;
    case 0x802E2D18u: goto label_802E2D18;
    case 0x802E2D1Cu: goto label_802E2D1C;
    case 0x802E2D20u: goto label_802E2D20;
    case 0x802E2D24u: goto label_802E2D24;
    case 0x802E2D28u: goto label_802E2D28;
    case 0x802E2D2Cu: goto label_802E2D2C;
    case 0x802E2D30u: goto label_802E2D30;
    case 0x802E2D34u: goto label_802E2D34;
    case 0x802E2D38u: goto label_802E2D38;
    case 0x802E2D3Cu: goto label_802E2D3C;
    case 0x802E2D40u: goto label_802E2D40;
    case 0x802E2D44u: goto label_802E2D44;
    case 0x802E2D48u: goto label_802E2D48;
    case 0x802E2D4Cu: goto label_802E2D4C;
    case 0x802E2D50u: goto label_802E2D50;
    case 0x802E2D54u: goto label_802E2D54;
    case 0x802E2D58u: goto label_802E2D58;
    case 0x802E2D5Cu: goto label_802E2D5C;
    case 0x802E2D60u: goto label_802E2D60;
    case 0x802E2D64u: goto label_802E2D64;
    case 0x802E2D68u: goto label_802E2D68;
    case 0x802E2D6Cu: goto label_802E2D6C;
    case 0x802E2D70u: goto label_802E2D70;
    case 0x802E2D74u: goto label_802E2D74;
    case 0x802E2D78u: goto label_802E2D78;
    case 0x802E2D7Cu: goto label_802E2D7C;
    case 0x802E2D80u: goto label_802E2D80;
    case 0x802E2D84u: goto label_802E2D84;
    case 0x802E2D88u: goto label_802E2D88;
    case 0x802E2D8Cu: goto label_802E2D8C;
    case 0x802E2D90u: goto label_802E2D90;
    case 0x802E2D94u: goto label_802E2D94;
    case 0x802E2D98u: goto label_802E2D98;
    case 0x802E2D9Cu: goto label_802E2D9C;
    case 0x802E2DA0u: goto label_802E2DA0;
    case 0x802E2DA4u: goto label_802E2DA4;
    case 0x802E2DA8u: goto label_802E2DA8;
    case 0x802E2DACu: goto label_802E2DAC;
    case 0x802E2DB0u: goto label_802E2DB0;
    case 0x802E2DB4u: goto label_802E2DB4;
    case 0x802E2DB8u: goto label_802E2DB8;
    case 0x802E2DBCu: goto label_802E2DBC;
    case 0x802E2DC0u: goto label_802E2DC0;
    case 0x802E2DC4u: goto label_802E2DC4;
    case 0x802E2DC8u: goto label_802E2DC8;
    case 0x802E2DCCu: goto label_802E2DCC;
    case 0x802E2DD0u: goto label_802E2DD0;
    case 0x802E2DD4u: goto label_802E2DD4;
    case 0x802E2DD8u: goto label_802E2DD8;
    case 0x802E2DDCu: goto label_802E2DDC;
    case 0x802E2DE0u: goto label_802E2DE0;
    case 0x802E2DE4u: goto label_802E2DE4;
    case 0x802E2DE8u: goto label_802E2DE8;
    case 0x802E2DECu: goto label_802E2DEC;
    case 0x802E2DF0u: goto label_802E2DF0;
    case 0x802E2DF4u: goto label_802E2DF4;
    case 0x802E2DF8u: goto label_802E2DF8;
    case 0x802E2DFCu: goto label_802E2DFC;
    case 0x802E2E00u: goto label_802E2E00;
    case 0x802E2E04u: goto label_802E2E04;
    case 0x802E2E08u: goto label_802E2E08;
    case 0x802E2E0Cu: goto label_802E2E0C;
    case 0x802E2E10u: goto label_802E2E10;
    case 0x802E2E14u: goto label_802E2E14;
    case 0x802E2E18u: goto label_802E2E18;
    case 0x802E2E1Cu: goto label_802E2E1C;
    case 0x802E2E20u: goto label_802E2E20;
    case 0x802E2E24u: goto label_802E2E24;
    case 0x802E2E28u: goto label_802E2E28;
    case 0x802E2E2Cu: goto label_802E2E2C;
    case 0x802E2E30u: goto label_802E2E30;
    case 0x802E2E34u: goto label_802E2E34;
    case 0x802E2E38u: goto label_802E2E38;
    case 0x802E2E3Cu: goto label_802E2E3C;
    case 0x802E2E40u: goto label_802E2E40;
    case 0x802E2E44u: goto label_802E2E44;
    case 0x802E2E48u: goto label_802E2E48;
    case 0x802E2E4Cu: goto label_802E2E4C;
    case 0x802E2E50u: goto label_802E2E50;
    case 0x802E2E54u: goto label_802E2E54;
    case 0x802E2E58u: goto label_802E2E58;
    case 0x802E2E5Cu: goto label_802E2E5C;
    case 0x802E2E60u: goto label_802E2E60;
    case 0x802E2E64u: goto label_802E2E64;
    case 0x802E2E68u: goto label_802E2E68;
    case 0x802E2E6Cu: goto label_802E2E6C;
    case 0x802E2E70u: goto label_802E2E70;
    case 0x802E2E74u: goto label_802E2E74;
    case 0x802E2E78u: goto label_802E2E78;
    case 0x802E2E7Cu: goto label_802E2E7C;
    case 0x802E2E80u: goto label_802E2E80;
    case 0x802E2E84u: goto label_802E2E84;
    case 0x802E2E88u: goto label_802E2E88;
    case 0x802E2E8Cu: goto label_802E2E8C;
    case 0x802E2E90u: goto label_802E2E90;
    case 0x802E2E94u: goto label_802E2E94;
    case 0x802E2E98u: goto label_802E2E98;
    case 0x802E2E9Cu: goto label_802E2E9C;
    case 0x802E2EA0u: goto label_802E2EA0;
    case 0x802E2EA4u: goto label_802E2EA4;
    case 0x802E2EA8u: goto label_802E2EA8;
    case 0x802E2EACu: goto label_802E2EAC;
    case 0x802E2EB0u: goto label_802E2EB0;
    case 0x802E2EB4u: goto label_802E2EB4;
    case 0x802E2EB8u: goto label_802E2EB8;
    case 0x802E2EBCu: goto label_802E2EBC;
    case 0x802E2EC0u: goto label_802E2EC0;
    case 0x802E2EC4u: goto label_802E2EC4;
    case 0x802E2EC8u: goto label_802E2EC8;
    case 0x802E2ECCu: goto label_802E2ECC;
    case 0x802E2ED0u: goto label_802E2ED0;
    case 0x802E2ED4u: goto label_802E2ED4;
    case 0x802E2ED8u: goto label_802E2ED8;
    case 0x802E2EDCu: goto label_802E2EDC;
    case 0x802E2EE0u: goto label_802E2EE0;
    case 0x802E2EE4u: goto label_802E2EE4;
    case 0x802E2EE8u: goto label_802E2EE8;
    case 0x802E2EECu: goto label_802E2EEC;
    case 0x802E2EF0u: goto label_802E2EF0;
    case 0x802E2EF4u: goto label_802E2EF4;
    case 0x802E2EF8u: goto label_802E2EF8;
    case 0x802E2EFCu: goto label_802E2EFC;
    case 0x802E2F00u: goto label_802E2F00;
    case 0x802E2F04u: goto label_802E2F04;
    case 0x802E2F08u: goto label_802E2F08;
    case 0x802E2F0Cu: goto label_802E2F0C;
    case 0x802E2F10u: goto label_802E2F10;
    case 0x802E2F14u: goto label_802E2F14;
    case 0x802E2F18u: goto label_802E2F18;
    case 0x802E2F1Cu: goto label_802E2F1C;
    case 0x802E2F20u: goto label_802E2F20;
    case 0x802E2F24u: goto label_802E2F24;
    case 0x802E2F28u: goto label_802E2F28;
    case 0x802E2F2Cu: goto label_802E2F2C;
    case 0x802E2F30u: goto label_802E2F30;
    case 0x802E2F34u: goto label_802E2F34;
    case 0x802E2F38u: goto label_802E2F38;
    case 0x802E2F3Cu: goto label_802E2F3C;
    case 0x802E2F40u: goto label_802E2F40;
    case 0x802E2F44u: goto label_802E2F44;
    case 0x802E2F48u: goto label_802E2F48;
    case 0x802E2F4Cu: goto label_802E2F4C;
    case 0x802E2F50u: goto label_802E2F50;
    case 0x802E2F54u: goto label_802E2F54;
    case 0x802E2F58u: goto label_802E2F58;
    case 0x802E2F5Cu: goto label_802E2F5C;
    case 0x802E2F60u: goto label_802E2F60;
    case 0x802E2F64u: goto label_802E2F64;
    case 0x802E2F68u: goto label_802E2F68;
    case 0x802E2F6Cu: goto label_802E2F6C;
    case 0x802E2F70u: goto label_802E2F70;
    case 0x802E2F74u: goto label_802E2F74;
    case 0x802E2F78u: goto label_802E2F78;
    case 0x802E2F7Cu: goto label_802E2F7C;
    case 0x802E2F80u: goto label_802E2F80;
    case 0x802E2F84u: goto label_802E2F84;
    case 0x802E2F88u: goto label_802E2F88;
    case 0x802E2F8Cu: goto label_802E2F8C;
    case 0x802E2F90u: goto label_802E2F90;
    case 0x802E2F94u: goto label_802E2F94;
    case 0x802E2F98u: goto label_802E2F98;
    case 0x802E2F9Cu: goto label_802E2F9C;
    case 0x802E2FA0u: goto label_802E2FA0;
    case 0x802E2FA4u: goto label_802E2FA4;
    case 0x802E2FA8u: goto label_802E2FA8;
    case 0x802E2FACu: goto label_802E2FAC;
    case 0x802E2FB0u: goto label_802E2FB0;
    case 0x802E2FB4u: goto label_802E2FB4;
    case 0x802E2FB8u: goto label_802E2FB8;
    case 0x802E2FBCu: goto label_802E2FBC;
    case 0x802E2FC0u: goto label_802E2FC0;
    case 0x802E2FC4u: goto label_802E2FC4;
    case 0x802E2FC8u: goto label_802E2FC8;
    case 0x802E2FCCu: goto label_802E2FCC;
    case 0x802E2FD0u: goto label_802E2FD0;
    case 0x802E2FD4u: goto label_802E2FD4;
    case 0x802E2FD8u: goto label_802E2FD8;
    case 0x802E2FDCu: goto label_802E2FDC;
    case 0x802E2FE0u: goto label_802E2FE0;
    case 0x802E2FE4u: goto label_802E2FE4;
    case 0x802E2FE8u: goto label_802E2FE8;
    case 0x802E2FECu: goto label_802E2FEC;
    case 0x802E2FF0u: goto label_802E2FF0;
    case 0x802E2FF4u: goto label_802E2FF4;
    case 0x802E2FF8u: goto label_802E2FF8;
    case 0x802E2FFCu: goto label_802E2FFC;
    case 0x802E3000u: goto label_802E3000;
    case 0x802E3004u: goto label_802E3004;
    case 0x802E3008u: goto label_802E3008;
    case 0x802E300Cu: goto label_802E300C;
    case 0x802E3010u: goto label_802E3010;
    case 0x802E3014u: goto label_802E3014;
    case 0x802E3018u: goto label_802E3018;
    case 0x802E301Cu: goto label_802E301C;
    case 0x802E3020u: goto label_802E3020;
    case 0x802E3024u: goto label_802E3024;
    case 0x802E3028u: goto label_802E3028;
    case 0x802E302Cu: goto label_802E302C;
    case 0x802E3030u: goto label_802E3030;
    case 0x802E3034u: goto label_802E3034;
    case 0x802E3038u: goto label_802E3038;
    case 0x802E303Cu: goto label_802E303C;
    case 0x802E3040u: goto label_802E3040;
    case 0x802E3044u: goto label_802E3044;
    case 0x802E3048u: goto label_802E3048;
    case 0x802E304Cu: goto label_802E304C;
    case 0x802E3050u: goto label_802E3050;
    case 0x802E3054u: goto label_802E3054;
    case 0x802E3058u: goto label_802E3058;
    case 0x802E305Cu: goto label_802E305C;
    case 0x802E3060u: goto label_802E3060;
    case 0x802E3064u: goto label_802E3064;
    case 0x802E3068u: goto label_802E3068;
    case 0x802E306Cu: goto label_802E306C;
    case 0x802E3070u: goto label_802E3070;
    case 0x802E3074u: goto label_802E3074;
    case 0x802E3078u: goto label_802E3078;
    case 0x802E307Cu: goto label_802E307C;
    case 0x802E3080u: goto label_802E3080;
    case 0x802E3084u: goto label_802E3084;
    case 0x802E3088u: goto label_802E3088;
    case 0x802E308Cu: goto label_802E308C;
    case 0x802E3090u: goto label_802E3090;
    case 0x802E3094u: goto label_802E3094;
    case 0x802E3098u: goto label_802E3098;
    case 0x802E309Cu: goto label_802E309C;
    case 0x802E30A0u: goto label_802E30A0;
    case 0x802E30A4u: goto label_802E30A4;
    case 0x802E30A8u: goto label_802E30A8;
    case 0x802E30ACu: goto label_802E30AC;
    case 0x802E30B0u: goto label_802E30B0;
    case 0x802E30B4u: goto label_802E30B4;
    case 0x802E30B8u: goto label_802E30B8;
    case 0x802E30BCu: goto label_802E30BC;
    case 0x802E30C0u: goto label_802E30C0;
    case 0x802E30C4u: goto label_802E30C4;
    case 0x802E30C8u: goto label_802E30C8;
    case 0x802E30CCu: goto label_802E30CC;
    case 0x802E30D0u: goto label_802E30D0;
    case 0x802E30D4u: goto label_802E30D4;
    case 0x802E30D8u: goto label_802E30D8;
    case 0x802E30DCu: goto label_802E30DC;
    case 0x802E30E0u: goto label_802E30E0;
    case 0x802E30E4u: goto label_802E30E4;
    case 0x802E30E8u: goto label_802E30E8;
    case 0x802E30ECu: goto label_802E30EC;
    case 0x802E30F0u: goto label_802E30F0;
    case 0x802E30F4u: goto label_802E30F4;
    case 0x802E30F8u: goto label_802E30F8;
    case 0x802E30FCu: goto label_802E30FC;
    case 0x802E3100u: goto label_802E3100;
    case 0x802E3104u: goto label_802E3104;
    case 0x802E3108u: goto label_802E3108;
    case 0x802E310Cu: goto label_802E310C;
    case 0x802E3110u: goto label_802E3110;
    case 0x802E3114u: goto label_802E3114;
    case 0x802E3118u: goto label_802E3118;
    case 0x802E311Cu: goto label_802E311C;
    case 0x802E3120u: goto label_802E3120;
    case 0x802E3124u: goto label_802E3124;
    case 0x802E3128u: goto label_802E3128;
    case 0x802E312Cu: goto label_802E312C;
    case 0x802E3130u: goto label_802E3130;
    case 0x802E3134u: goto label_802E3134;
    case 0x802E3138u: goto label_802E3138;
    case 0x802E313Cu: goto label_802E313C;
    case 0x802E3140u: goto label_802E3140;
    case 0x802E3144u: goto label_802E3144;
    case 0x802E3148u: goto label_802E3148;
    case 0x802E314Cu: goto label_802E314C;
    case 0x802E3150u: goto label_802E3150;
    case 0x802E3154u: goto label_802E3154;
    case 0x802E3158u: goto label_802E3158;
    case 0x802E315Cu: goto label_802E315C;
    case 0x802E3160u: goto label_802E3160;
    case 0x802E3164u: goto label_802E3164;
    case 0x802E3168u: goto label_802E3168;
    case 0x802E316Cu: goto label_802E316C;
    case 0x802E3170u: goto label_802E3170;
    case 0x802E3174u: goto label_802E3174;
    case 0x802E3178u: goto label_802E3178;
    case 0x802E317Cu: goto label_802E317C;
    case 0x802E3180u: goto label_802E3180;
    case 0x802E3184u: goto label_802E3184;
    case 0x802E3188u: goto label_802E3188;
    case 0x802E318Cu: goto label_802E318C;
    case 0x802E3190u: goto label_802E3190;
    case 0x802E3194u: goto label_802E3194;
    case 0x802E3198u: goto label_802E3198;
    case 0x802E319Cu: goto label_802E319C;
    case 0x802E31A0u: goto label_802E31A0;
    case 0x802E31A4u: goto label_802E31A4;
    case 0x802E31A8u: goto label_802E31A8;
    case 0x802E31ACu: goto label_802E31AC;
    case 0x802E31B0u: goto label_802E31B0;
    case 0x802E31B4u: goto label_802E31B4;
    case 0x802E31B8u: goto label_802E31B8;
    case 0x802E31BCu: goto label_802E31BC;
    default: return;
    }
label_802DF1C0:
    ctx->pc = 0x802DF1C0u;
    ctx->downcount -= 3;
    // 802DF1C0: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_802DF1C4:
    ctx->pc = 0x802DF1C4u;
    // 802DF1C4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF1C8:
    ctx->pc = 0x802DF1C8u;
    // 802DF1C8: bl      0x8000D074
    {
            ctx->lr = 0x802DF1CCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DF1CC:
    ctx->pc = 0x802DF1CCu;
    ctx->downcount -= 3;
    // 802DF1CC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF1D0:
    ctx->pc = 0x802DF1D0u;
    // 802DF1D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF1D4:
    ctx->pc = 0x802DF1D4u;
    // 802DF1D4: bl      0x8026F970
    {
            ctx->lr = 0x802DF1D8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DF1D8:
    ctx->pc = 0x802DF1D8u;
    ctx->downcount -= 5;
    // 802DF1D8: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x802DF1D8u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802DF1DC:
    ctx->pc = 0x802DF1DCu;
    // 802DF1DC: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF1E0:
    ctx->pc = 0x802DF1E0u;
    // 802DF1E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF1E4:
    ctx->pc = 0x802DF1E4u;
    // 802DF1E4: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x802DF1E4u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_802DF1E8:
    ctx->pc = 0x802DF1E8u;
    // 802DF1E8: bl      0x8026F970
    {
            ctx->lr = 0x802DF1ECu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DF1EC:
    ctx->pc = 0x802DF1ECu;
    ctx->downcount -= 6;
    // 802DF1EC: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x802DF1ECu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802DF1F0:
    ctx->pc = 0x802DF1F0u;
    // 802DF1F0: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x802DF1F0u)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_802DF1F4:
    ctx->pc = 0x802DF1F4u;
    // 802DF1F4: psq_l   f31, 56(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802DF1F4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x802DF1F4u);
        if (ctx->exception) return;
    }

label_802DF1F8:
    ctx->pc = 0x802DF1F8u;
    // 802DF1F8: lfd     f31, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DF1F8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802DF1FC:
    ctx->pc = 0x802DF1FCu;
    // 802DF1FC: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_802DF200:
    ctx->pc = 0x802DF200u;
    // 802DF200: bl      0x800078AC
    {
            ctx->lr = 0x802DF204u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_802DF204:
    ctx->pc = 0x802DF204u;
    ctx->downcount -= 5;
    // 802DF204: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF208:
    ctx->pc = 0x802DF208u;
    // 802DF208: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF20C:
    ctx->pc = 0x802DF20Cu;
    // 802DF20C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802DF210:
    ctx->pc = 0x802DF210u;
    // 802DF210: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF214:
    ctx->pc = 0x802DF214u;
    ctx->downcount -= 13;
    // 802DF214: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF218:
    ctx->pc = 0x802DF218u;
    // 802DF218: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF21C:
    ctx->pc = 0x802DF21Cu;
    // 802DF21C: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802DF220:
    ctx->pc = 0x802DF220u;
    // 802DF220: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DF224:
    ctx->pc = 0x802DF224u;
    // 802DF224: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF228:
    ctx->pc = 0x802DF228u;
    // 802DF228: addi    r5, r5, 9072
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9072);

label_802DF22C:
    ctx->pc = 0x802DF22Cu;
    // 802DF22C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_802DF230:
    ctx->pc = 0x802DF230u;
    // 802DF230: stw     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802DF234:
    ctx->pc = 0x802DF234u;
    // 802DF234: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF238:
    ctx->pc = 0x802DF238u;
    // 802DF238: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF23C:
    ctx->pc = 0x802DF23Cu;
    // 802DF23C: addi    r5, r5, 233
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(233);

label_802DF240:
    ctx->pc = 0x802DF240u;
    // 802DF240: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF244:
    ctx->pc = 0x802DF244u;
    // 802DF244: bl      0x8000D074
    {
            ctx->lr = 0x802DF248u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DF248:
    ctx->pc = 0x802DF248u;
    ctx->downcount -= 2;
    // 802DF248: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF24C:
    ctx->pc = 0x802DF24Cu;
    // 802DF24C: bl      0x8026F6CC
    {
            ctx->lr = 0x802DF250u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802DF250:
    ctx->pc = 0x802DF250u;
    ctx->downcount -= 4;
    // 802DF250: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF254:
    ctx->pc = 0x802DF254u;
    // 802DF254: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_802DF258:
    ctx->pc = 0x802DF258u;
    // 802DF258: addi    r5, r1, 32
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF25C:
    ctx->pc = 0x802DF25Cu;
    // 802DF25C: bl      0x8025D62C
    {
            ctx->lr = 0x802DF260u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_802DF260:
    ctx->pc = 0x802DF260u;
    ctx->downcount -= 12;
    // 802DF260: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DF260u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802DF264:
    ctx->pc = 0x802DF264u;
    // 802DF264: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DF264u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802DF268:
    ctx->pc = 0x802DF268u;
    // 802DF268: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DF268u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802DF26C:
    ctx->pc = 0x802DF26Cu;
    // 802DF26C: lwz     r31, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802DF270:
    ctx->pc = 0x802DF270u;
    // 802DF270: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DF270u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802DF274:
    ctx->pc = 0x802DF274u;
    // 802DF274: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF278:
    ctx->pc = 0x802DF278u;
    // 802DF278: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DF27C:
    ctx->pc = 0x802DF27Cu;
    // 802DF27C: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF280:
    ctx->pc = 0x802DF280u;
    // 802DF280: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF284:
    ctx->pc = 0x802DF284u;
    // 802DF284: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802DF288:
    ctx->pc = 0x802DF288u;
    // 802DF288: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF28C:
    ctx->pc = 0x802DF28Cu;
    ctx->downcount -= 24;
    // 802DF28C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF290:
    ctx->pc = 0x802DF290u;
    // 802DF290: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF294:
    ctx->pc = 0x802DF294u;
    // 802DF294: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF298:
    ctx->pc = 0x802DF298u;
    // 802DF298: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802DF29C:
    ctx->pc = 0x802DF29Cu;
    // 802DF29C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802DF2A0:
    ctx->pc = 0x802DF2A0u;
    // 802DF2A0: rlwinm r29, r4, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802DF2A4:
    ctx->pc = 0x802DF2A4u;
    // 802DF2A4: add   r30, r3, r29
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_802DF2A8:
    ctx->pc = 0x802DF2A8u;
    // 802DF2A8: add   r31, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[31] = res;
    }

label_802DF2AC:
    ctx->pc = 0x802DF2ACu;
    // 802DF2AC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF2B0:
    ctx->pc = 0x802DF2B0u;
    // 802DF2B0: stw     r5, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF2B4:
    ctx->pc = 0x802DF2B4u;
    // 802DF2B4: stb     r0, 472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF2B8:
    ctx->pc = 0x802DF2B8u;
    // 802DF2B8: lwz     r4, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF2BC:
    ctx->pc = 0x802DF2BCu;
    // 802DF2BC: cmplwi  r4, 0x0004
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

label_802DF2C0:
    ctx->pc = 0x802DF2C0u;
    // 802DF2C0: bc    12, 1, 0x802DF2D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF2D8;
        }
    }

label_802DF2C4:
    ctx->pc = 0x802DF2C4u;
    ctx->downcount -= 5;
    // 802DF2C4: lwz     r3, 312(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(312);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DF2C8:
    ctx->pc = 0x802DF2C8u;
    // 802DF2C8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF2CC:
    ctx->pc = 0x802DF2CCu;
    // 802DF2CC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DF2D0:
    ctx->pc = 0x802DF2D0u;
    // 802DF2D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF2D4:
    ctx->pc = 0x802DF2D4u;
    // 802DF2D4: b       0x802DF338
    {
            goto label_802DF338;
    }

label_802DF2D8:
    ctx->pc = 0x802DF2D8u;
    ctx->downcount -= 6;
    // 802DF2D8: addi    r28, r4, -5
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(-5);

label_802DF2DC:
    ctx->pc = 0x802DF2DCu;
    // 802DF2DC: lwz     r4, 312(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(312);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF2E0:
    ctx->pc = 0x802DF2E0u;
    // 802DF2E0: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802DF2E4:
    ctx->pc = 0x802DF2E4u;
    // 802DF2E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF2E8:
    ctx->pc = 0x802DF2E8u;
    // 802DF2E8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DF2EC:
    ctx->pc = 0x802DF2ECu;
    // 802DF2EC: bl      0x8026F720
    {
            ctx->lr = 0x802DF2F0u;
            ctx->pc = 0x8026F720u;
            return;
    }

label_802DF2F0:
    ctx->pc = 0x802DF2F0u;
    ctx->downcount -= 12;
    // 802DF2F0: lwz     r8, 312(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(312);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_802DF2F4:
    ctx->pc = 0x802DF2F4u;
    // 802DF2F4: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802DF2F8:
    ctx->pc = 0x802DF2F8u;
    // 802DF2F8: or   r5, r28, r28
    {
        ctx->gpr[5] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802DF2FC:
    ctx->pc = 0x802DF2FCu;
    // 802DF2FC: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802DF300:
    ctx->pc = 0x802DF300u;
    // 802DF300: lbz     r7, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_802DF304:
    ctx->pc = 0x802DF304u;
    // 802DF304: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF308:
    ctx->pc = 0x802DF308u;
    // 802DF308: rlwinm r7, r7, 0, 24, 30
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FEu;
    }

label_802DF30C:
    ctx->pc = 0x802DF30Cu;
    // 802DF30C: ori     r7, r7, 0x0001
    ctx->gpr[7] = ctx->gpr[7] | 0x0001u;

label_802DF310:
    ctx->pc = 0x802DF310u;
    // 802DF310: stb     r7, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_802DF314:
    ctx->pc = 0x802DF314u;
    // 802DF314: stb     r0, 472(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(472);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF318:
    ctx->pc = 0x802DF318u;
    // 802DF318: lwz     r4, 392(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(392);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF31C:
    ctx->pc = 0x802DF31Cu;
    // 802DF31C: bl      0x8026F760
    {
            ctx->lr = 0x802DF320u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802DF320:
    ctx->pc = 0x802DF320u;
    ctx->downcount -= 6;
    // 802DF320: lwz     r4, 432(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(432);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF324:
    ctx->pc = 0x802DF324u;
    // 802DF324: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_802DF328:
    ctx->pc = 0x802DF328u;
    // 802DF328: addi    r5, r28, 50
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(50);

label_802DF32C:
    ctx->pc = 0x802DF32Cu;
    // 802DF32C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF330:
    ctx->pc = 0x802DF330u;
    // 802DF330: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF334:
    ctx->pc = 0x802DF334u;
    // 802DF334: bl      0x8026F8C0
    {
            ctx->lr = 0x802DF338u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802DF338:
    ctx->pc = 0x802DF338u;
    ctx->downcount -= 16;
    // 802DF338: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802DF33C:
    ctx->pc = 0x802DF33Cu;
    // 802DF33C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF340:
    ctx->pc = 0x802DF340u;
    // 802DF340: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF344:
    ctx->pc = 0x802DF344u;
    // 802DF344: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF348:
    ctx->pc = 0x802DF348u;
    // 802DF348: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF34C:
    ctx->pc = 0x802DF34Cu;
    ctx->downcount -= 7;
    // 802DF34C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802DF350:
    ctx->pc = 0x802DF350u;
    // 802DF350: stb     r0, 488(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(488);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF354:
    ctx->pc = 0x802DF354u;
    // 802DF354: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802DF358:
    ctx->pc = 0x802DF358u;
    // 802DF358: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802DF35C:
    ctx->pc = 0x802DF35Cu;
    // 802DF35C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802DF360:
    ctx->pc = 0x802DF360u;
    // 802DF360: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802DF364:
    ctx->pc = 0x802DF364u;
    ctx->downcount -= 6;
    // 802DF364: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF368:
    ctx->pc = 0x802DF368u;
    // 802DF368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF36C:
    ctx->pc = 0x802DF36Cu;
    // 802DF36C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF370:
    ctx->pc = 0x802DF370u;
    // 802DF370: lwz     r0, 484(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF374:
    ctx->pc = 0x802DF374u;
    // 802DF374: cmpwi   r0, 0
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

label_802DF378:
    ctx->pc = 0x802DF378u;
    // 802DF378: bc    12, 2, 0x802DF388
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF388;
        }
    }

label_802DF37C:
    ctx->pc = 0x802DF37Cu;
    ctx->downcount -= 2;
    // 802DF37C: cmpwi   r0, 1
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

label_802DF380:
    ctx->pc = 0x802DF380u;
    // 802DF380: bc    12, 2, 0x802DF39C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF39C;
        }
    }

label_802DF384:
    ctx->pc = 0x802DF384u;
    ctx->downcount -= 1;
    // 802DF384: b       0x802DF3B0
    {
            goto label_802DF3B0;
    }

label_802DF388:
    ctx->pc = 0x802DF388u;
    ctx->downcount -= 3;
    // 802DF388: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802DF38C:
    ctx->pc = 0x802DF38Cu;
    // 802DF38C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DF390:
    ctx->pc = 0x802DF390u;
    // 802DF390: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF394u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF394:
    ctx->pc = 0x802DF394u;
    ctx->downcount -= 1;
    // 802DF394: bl      0x8025EAF8
    {
            ctx->lr = 0x802DF398u;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_802DF398:
    ctx->pc = 0x802DF398u;
    ctx->downcount -= 1;
    // 802DF398: b       0x802DF3B4
    {
            goto label_802DF3B4;
    }

label_802DF39C:
    ctx->pc = 0x802DF39Cu;
    ctx->downcount -= 3;
    // 802DF39C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802DF3A0:
    ctx->pc = 0x802DF3A0u;
    // 802DF3A0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DF3A4:
    ctx->pc = 0x802DF3A4u;
    // 802DF3A4: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF3A8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF3A8:
    ctx->pc = 0x802DF3A8u;
    ctx->downcount -= 1;
    // 802DF3A8: bl      0x8025EAF8
    {
            ctx->lr = 0x802DF3ACu;
            ctx->pc = 0x8025EAF8u;
            return;
    }

label_802DF3AC:
    ctx->pc = 0x802DF3ACu;
    ctx->downcount -= 1;
    // 802DF3AC: b       0x802DF3B4
    {
            goto label_802DF3B4;
    }

label_802DF3B0:
    ctx->pc = 0x802DF3B0u;
    ctx->downcount -= 1;
    // 802DF3B0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802DF3B4:
    ctx->pc = 0x802DF3B4u;
    ctx->downcount -= 5;
    // 802DF3B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF3B8:
    ctx->pc = 0x802DF3B8u;
    // 802DF3B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF3BC:
    ctx->pc = 0x802DF3BCu;
    // 802DF3BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802DF3C0:
    ctx->pc = 0x802DF3C0u;
    // 802DF3C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF3C4:
    ctx->pc = 0x802DF3C4u;
    ctx->downcount -= 5;
    // 802DF3C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF3C8:
    ctx->pc = 0x802DF3C8u;
    // 802DF3C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF3CC:
    ctx->pc = 0x802DF3CCu;
    // 802DF3CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF3D0:
    ctx->pc = 0x802DF3D0u;
    // 802DF3D0: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF3D4:
    ctx->pc = 0x802DF3D4u;
    // 802DF3D4: bl      0x80007860
    {
            ctx->lr = 0x802DF3D8u;
            ctx->pc = 0x80007860u;
            return;
    }

label_802DF3D8:
    ctx->pc = 0x802DF3D8u;
    ctx->downcount -= 5;
    // 802DF3D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF3DC:
    ctx->pc = 0x802DF3DCu;
    // 802DF3DC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DF3E0:
    ctx->pc = 0x802DF3E0u;
    // 802DF3E0: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802DF3E4:
    ctx->pc = 0x802DF3E4u;
    // 802DF3E4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DF3E8:
    ctx->pc = 0x802DF3E8u;
    // 802DF3E8: bl      0x802700EC
    {
            ctx->lr = 0x802DF3ECu;
            ctx->pc = 0x802700ECu;
            return;
    }

label_802DF3EC:
    ctx->pc = 0x802DF3ECu;
    ctx->downcount -= 5;
    // 802DF3EC: stw     r30, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802DF3F0:
    ctx->pc = 0x802DF3F0u;
    // 802DF3F0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF3F4:
    ctx->pc = 0x802DF3F4u;
    // 802DF3F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DF3F8:
    ctx->pc = 0x802DF3F8u;
    // 802DF3F8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802DF3FC:
    ctx->pc = 0x802DF3FCu;
    // 802DF3FC: bl      0x8026FEF0
    {
            ctx->lr = 0x802DF400u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DF400:
    ctx->pc = 0x802DF400u;
    ctx->downcount -= 3;
    // 802DF400: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF404:
    ctx->pc = 0x802DF404u;
    // 802DF404: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DF408:
    ctx->pc = 0x802DF408u;
    // 802DF408: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF40Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF40C:
    ctx->pc = 0x802DF40Cu;
    ctx->downcount -= 1;
    // 802DF40C: bl      0x8025EBF0
    {
            ctx->lr = 0x802DF410u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_802DF410:
    ctx->pc = 0x802DF410u;
    ctx->downcount -= 3;
    // 802DF410: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF414:
    ctx->pc = 0x802DF414u;
    // 802DF414: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DF418:
    ctx->pc = 0x802DF418u;
    // 802DF418: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF41Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF41C:
    ctx->pc = 0x802DF41Cu;
    ctx->downcount -= 2;
    // 802DF41C: lfs     f1, -12604(r2)
    if (!ppc_fp_available_inline(ctx, 0x802DF41Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12604);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802DF420:
    ctx->pc = 0x802DF420u;
    // 802DF420: bl      0x8025EBE8
    {
            ctx->lr = 0x802DF424u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802DF424:
    ctx->pc = 0x802DF424u;
    ctx->downcount -= 3;
    // 802DF424: lwz     r0, 484(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(484);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF428:
    ctx->pc = 0x802DF428u;
    // 802DF428: cmpwi   r0, 0
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

label_802DF42C:
    ctx->pc = 0x802DF42Cu;
    // 802DF42C: bc    12, 2, 0x802DF43C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF43C;
        }
    }

label_802DF430:
    ctx->pc = 0x802DF430u;
    ctx->downcount -= 2;
    // 802DF430: cmpwi   r0, 1
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

label_802DF434:
    ctx->pc = 0x802DF434u;
    // 802DF434: bc    12, 2, 0x802DF460
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF460;
        }
    }

label_802DF438:
    ctx->pc = 0x802DF438u;
    ctx->downcount -= 1;
    // 802DF438: b       0x802DF480
    {
            goto label_802DF480;
    }

label_802DF43C:
    ctx->pc = 0x802DF43Cu;
    ctx->downcount -= 4;
    // 802DF43C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF440:
    ctx->pc = 0x802DF440u;
    // 802DF440: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802DF444:
    ctx->pc = 0x802DF444u;
    // 802DF444: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DF448:
    ctx->pc = 0x802DF448u;
    // 802DF448: bl      0x8026FEF0
    {
            ctx->lr = 0x802DF44Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DF44C:
    ctx->pc = 0x802DF44Cu;
    ctx->downcount -= 3;
    // 802DF44C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF450:
    ctx->pc = 0x802DF450u;
    // 802DF450: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802DF454:
    ctx->pc = 0x802DF454u;
    // 802DF454: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF458u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF458:
    ctx->pc = 0x802DF458u;
    ctx->downcount -= 1;
    // 802DF458: bl      0x8025EC94
    {
            ctx->lr = 0x802DF45Cu;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DF45C:
    ctx->pc = 0x802DF45Cu;
    ctx->downcount -= 1;
    // 802DF45C: b       0x802DF480
    {
            goto label_802DF480;
    }

label_802DF460:
    ctx->pc = 0x802DF460u;
    ctx->downcount -= 4;
    // 802DF460: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF464:
    ctx->pc = 0x802DF464u;
    // 802DF464: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802DF468:
    ctx->pc = 0x802DF468u;
    // 802DF468: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DF46C:
    ctx->pc = 0x802DF46Cu;
    // 802DF46C: bl      0x8026FEF0
    {
            ctx->lr = 0x802DF470u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DF470:
    ctx->pc = 0x802DF470u;
    ctx->downcount -= 3;
    // 802DF470: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF474:
    ctx->pc = 0x802DF474u;
    // 802DF474: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802DF478:
    ctx->pc = 0x802DF478u;
    // 802DF478: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF47Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF47C:
    ctx->pc = 0x802DF47Cu;
    ctx->downcount -= 1;
    // 802DF47C: bl      0x8025EC94
    {
            ctx->lr = 0x802DF480u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DF480:
    ctx->pc = 0x802DF480u;
    ctx->downcount -= 2;
    // 802DF480: cmpwi   r31, 0
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

label_802DF484:
    ctx->pc = 0x802DF484u;
    // 802DF484: bc    12, 2, 0x802DF494
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF494;
        }
    }

label_802DF488:
    ctx->pc = 0x802DF488u;
    ctx->downcount -= 2;
    // 802DF488: cmpwi   r31, 1
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

label_802DF48C:
    ctx->pc = 0x802DF48Cu;
    // 802DF48C: bc    12, 2, 0x802DF4B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF4B8;
        }
    }

label_802DF490:
    ctx->pc = 0x802DF490u;
    ctx->downcount -= 1;
    // 802DF490: b       0x802DF4D8
    {
            goto label_802DF4D8;
    }

label_802DF494:
    ctx->pc = 0x802DF494u;
    ctx->downcount -= 4;
    // 802DF494: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF498:
    ctx->pc = 0x802DF498u;
    // 802DF498: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802DF49C:
    ctx->pc = 0x802DF49Cu;
    // 802DF49C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DF4A0:
    ctx->pc = 0x802DF4A0u;
    // 802DF4A0: bl      0x8026FEF0
    {
            ctx->lr = 0x802DF4A4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DF4A4:
    ctx->pc = 0x802DF4A4u;
    ctx->downcount -= 3;
    // 802DF4A4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF4A8:
    ctx->pc = 0x802DF4A8u;
    // 802DF4A8: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802DF4AC:
    ctx->pc = 0x802DF4ACu;
    // 802DF4AC: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF4B0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF4B0:
    ctx->pc = 0x802DF4B0u;
    ctx->downcount -= 1;
    // 802DF4B0: bl      0x8025EC94
    {
            ctx->lr = 0x802DF4B4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DF4B4:
    ctx->pc = 0x802DF4B4u;
    ctx->downcount -= 1;
    // 802DF4B4: b       0x802DF4D8
    {
            goto label_802DF4D8;
    }

label_802DF4B8:
    ctx->pc = 0x802DF4B8u;
    ctx->downcount -= 4;
    // 802DF4B8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF4BC:
    ctx->pc = 0x802DF4BCu;
    // 802DF4BC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_802DF4C0:
    ctx->pc = 0x802DF4C0u;
    // 802DF4C0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DF4C4:
    ctx->pc = 0x802DF4C4u;
    // 802DF4C4: bl      0x8026FEF0
    {
            ctx->lr = 0x802DF4C8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DF4C8:
    ctx->pc = 0x802DF4C8u;
    ctx->downcount -= 3;
    // 802DF4C8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802DF4CC:
    ctx->pc = 0x802DF4CCu;
    // 802DF4CC: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_802DF4D0:
    ctx->pc = 0x802DF4D0u;
    // 802DF4D0: bl      0x8026F6AC
    {
            ctx->lr = 0x802DF4D4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DF4D4:
    ctx->pc = 0x802DF4D4u;
    ctx->downcount -= 1;
    // 802DF4D4: bl      0x8025EC94
    {
            ctx->lr = 0x802DF4D8u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DF4D8:
    ctx->pc = 0x802DF4D8u;
    ctx->downcount -= 8;
    // 802DF4D8: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802DF4DC:
    ctx->pc = 0x802DF4DCu;
    // 802DF4DC: stb     r0, 488(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(488);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF4E0:
    ctx->pc = 0x802DF4E0u;
    // 802DF4E0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802DF4E4:
    ctx->pc = 0x802DF4E4u;
    // 802DF4E4: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802DF4E8:
    ctx->pc = 0x802DF4E8u;
    // 802DF4E8: lwz     r12, 284(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(284);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802DF4EC:
    ctx->pc = 0x802DF4ECu;
    // 802DF4EC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802DF4F0:
    ctx->pc = 0x802DF4F0u;
    // 802DF4F0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802DF4F4u;
            ctx->pc = target;
            return;
        }
    }

label_802DF4F4:
    ctx->pc = 0x802DF4F4u;
    ctx->downcount -= 2;
    // 802DF4F4: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF4F8:
    ctx->pc = 0x802DF4F8u;
    // 802DF4F8: bl      0x800078AC
    {
            ctx->lr = 0x802DF4FCu;
            ctx->pc = 0x800078ACu;
            return;
    }

label_802DF4FC:
    ctx->pc = 0x802DF4FCu;
    ctx->downcount -= 5;
    // 802DF4FC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF500:
    ctx->pc = 0x802DF500u;
    // 802DF500: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF504:
    ctx->pc = 0x802DF504u;
    // 802DF504: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802DF508:
    ctx->pc = 0x802DF508u;
    // 802DF508: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF50C:
    ctx->pc = 0x802DF50Cu;
    ctx->downcount -= 8;
    // 802DF50C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF510:
    ctx->pc = 0x802DF510u;
    // 802DF510: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF514:
    ctx->pc = 0x802DF514u;
    // 802DF514: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DF518:
    ctx->pc = 0x802DF518u;
    // 802DF518: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_802DF51C:
    ctx->pc = 0x802DF51Cu;
    // 802DF51C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF520:
    ctx->pc = 0x802DF520u;
    // 802DF520: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802DF524:
    ctx->pc = 0x802DF524u;
    // 802DF524: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF528:
    ctx->pc = 0x802DF528u;
    // 802DF528: bl      0x803715C0
    {
            ctx->lr = 0x802DF52Cu;
            ctx->pc = 0x803715C0u;
            return;
    }

label_802DF52C:
    ctx->pc = 0x802DF52Cu;
    ctx->downcount -= 15;
    // 802DF52C: lis     r5, -32660
    ctx->gpr[5] = ((u32)(s32)(-32660) << 16);

label_802DF530:
    ctx->pc = 0x802DF530u;
    // 802DF530: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_802DF534:
    ctx->pc = 0x802DF534u;
    // 802DF534: addi    r5, r5, 7416
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(7416);

label_802DF538:
    ctx->pc = 0x802DF538u;
    // 802DF538: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF53C:
    ctx->pc = 0x802DF53Cu;
    // 802DF53C: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_802DF540:
    ctx->pc = 0x802DF540u;
    // 802DF540: addi    r3, r3, 9072
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9072);

label_802DF544:
    ctx->pc = 0x802DF544u;
    // 802DF544: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_802DF548:
    ctx->pc = 0x802DF548u;
    // 802DF548: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_802DF54C:
    ctx->pc = 0x802DF54Cu;
    // 802DF54C: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802DF550:
    ctx->pc = 0x802DF550u;
    // 802DF550: addi    r4, r3, 245
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(245);

label_802DF554:
    ctx->pc = 0x802DF554u;
    // 802DF554: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_802DF558:
    ctx->pc = 0x802DF558u;
    // 802DF558: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802DF55C:
    ctx->pc = 0x802DF55Cu;
    // 802DF55C: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802DF560:
    ctx->pc = 0x802DF560u;
    // 802DF560: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF564:
    ctx->pc = 0x802DF564u;
    // 802DF564: bl      0x8000E7F4
    {
            ctx->lr = 0x802DF568u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DF568:
    ctx->pc = 0x802DF568u;
    ctx->downcount -= 2;
    // 802DF568: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF56C:
    ctx->pc = 0x802DF56Cu;
    // 802DF56C: bl      0x80270188
    {
            ctx->lr = 0x802DF570u;
            ctx->pc = 0x80270188u;
            return;
    }

label_802DF570:
    ctx->pc = 0x802DF570u;
    ctx->downcount -= 6;
    // 802DF570: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802DF574:
    ctx->pc = 0x802DF574u;
    // 802DF574: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_802DF578:
    ctx->pc = 0x802DF578u;
    // 802DF578: or   r5, r7, r7
    {
        ctx->gpr[5] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802DF57C:
    ctx->pc = 0x802DF57Cu;
    // 802DF57C: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802DF580:
    ctx->pc = 0x802DF580u;
    // 802DF580: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802DF584:
    loop_802DF584(ctx);
    if (ctx->pc == 0x802DF5B0u) goto label_802DF5B0;
    return;
label_802DF588:
    // 802DF588: add   r4, r31, r7
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[7];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802DF58C:
    ctx->pc = 0x802DF58Cu;
    // 802DF58C: stw     r5, 272(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF590:
    // 802DF590: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802DF594:
    // 802DF594: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_802DF598:
    ctx->pc = 0x802DF598u;
    // 802DF598: stw     r5, 312(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(312);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF59C:
    ctx->pc = 0x802DF59Cu;
    // 802DF59C: stw     r5, 352(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(352);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF5A0:
    ctx->pc = 0x802DF5A0u;
    // 802DF5A0: stw     r5, 392(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(392);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF5A4:
    ctx->pc = 0x802DF5A4u;
    // 802DF5A4: stw     r5, 432(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(432);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802DF5A8:
    ctx->pc = 0x802DF5A8u;
    // 802DF5A8: stb     r5, 472(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(472);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_802DF5AC:
    // 802DF5AC: bc    16, 0, 0x802DF584
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF584u;
                return;
            }
            goto label_802DF584;
        }
    }

label_802DF5B0:
    ctx->pc = 0x802DF5B0u;
    ctx->downcount -= 10;
    // 802DF5B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802DF5B4:
    ctx->pc = 0x802DF5B4u;
    // 802DF5B4: stw     r0, 484(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(484);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF5B8:
    ctx->pc = 0x802DF5B8u;
    // 802DF5B8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802DF5BC:
    ctx->pc = 0x802DF5BCu;
    // 802DF5BC: stb     r0, 488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(488);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF5C0:
    ctx->pc = 0x802DF5C0u;
    // 802DF5C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802DF5C4:
    ctx->pc = 0x802DF5C4u;
    // 802DF5C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF5C8:
    ctx->pc = 0x802DF5C8u;
    // 802DF5C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF5CC:
    ctx->pc = 0x802DF5CCu;
    // 802DF5CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802DF5D0:
    ctx->pc = 0x802DF5D0u;
    // 802DF5D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF5D4:
    ctx->pc = 0x802DF5D4u;
    ctx->downcount -= 1;
    // 802DF5D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF5D8:
    ctx->pc = 0x802DF5D8u;
    ctx->downcount -= 18;
    // 802DF5D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF5DC:
    ctx->pc = 0x802DF5DCu;
    // 802DF5DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF5E0:
    // 802DF5E0: cmpwi   r3, 0
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

label_802DF5E4:
    ctx->pc = 0x802DF5E4u;
    // 802DF5E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF5E8:
    ctx->pc = 0x802DF5E8u;
    // 802DF5E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802DF5EC:
    // 802DF5EC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF5F0:
    // 802DF5F0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DF5F4:
    // 802DF5F4: bc    12, 2, 0x802DF628
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF628;
        }
    }

label_802DF5F8:
    ctx->downcount -= 1;
    // 802DF5F8: bc    12, 2, 0x802DF618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF618;
        }
    }

label_802DF5FC:
    ctx->downcount -= 1;
    // 802DF5FC: bc    12, 2, 0x802DF618
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF618;
        }
    }

label_802DF600:
    ctx->downcount -= 3;
    // 802DF600: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DF604:
    // 802DF604: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DF608:
    // 802DF608: bl      0x801F5C24
    {
            ctx->lr = 0x802DF60Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802DF60C:
    ctx->downcount -= 3;
    // 802DF60C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802DF610:
    // 802DF610: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DF614:
    // 802DF614: bl      0x801F9C70
    {
            ctx->lr = 0x802DF618u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802DF618:
    ctx->downcount -= 2;
    // 802DF618: cmpwi   r31, 0
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

label_802DF61C:
    // 802DF61C: bc    4, 1, 0x802DF628
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DF628;
        }
    }

label_802DF620:
    ctx->downcount -= 2;
    // 802DF620: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802DF624:
    // 802DF624: bl      0x801C1C90
    {
            ctx->lr = 0x802DF628u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802DF628:
    ctx->downcount -= 17;
    // 802DF628: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802DF62C:
    ctx->pc = 0x802DF62Cu;
    // 802DF62C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802DF630:
    ctx->pc = 0x802DF630u;
    // 802DF630: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF634:
    ctx->pc = 0x802DF634u;
    // 802DF634: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF638:
    // 802DF638: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802DF63C:
    ctx->pc = 0x802DF63Cu;
    // 802DF63C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF640:
    ctx->downcount -= 2;
    // 802DF640: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802DF644:
    // 802DF644: b       0x802DF5D8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF5D8u;
                return;
            }
            goto label_802DF5D8;
    }

label_802DF648:
    ctx->downcount -= 2;
    // 802DF648: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802DF64C:
    // 802DF64C: b       0x802DEEB8
    {
            ctx->pc = 0x802DEEB8u;
            return;
    }

label_802DF650:
    ctx->downcount -= 2;
    // 802DF650: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802DF654:
    // 802DF654: b       0x802DEEE8
    {
            ctx->pc = 0x802DEEE8u;
            return;
    }

label_802DF658:
    ctx->downcount -= 2;
    // 802DF658: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802DF65C:
    // 802DF65C: b       0x802DF5D8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF5D8u;
                return;
            }
            goto label_802DF5D8;
    }

label_802DF660:
    ctx->pc = 0x802DF660u;
    ctx->downcount -= 19;
    // 802DF660: stwu     r1, -112(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-112);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF664:
    ctx->pc = 0x802DF664u;
    // 802DF664: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF668:
    ctx->pc = 0x802DF668u;
    // 802DF668: stw     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF66C:
    ctx->pc = 0x802DF66Cu;
    // 802DF66C: stmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802DF670:
    ctx->pc = 0x802DF670u;
    // 802DF670: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF674:
    ctx->pc = 0x802DF674u;
    // 802DF674: lbz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF678:
    ctx->pc = 0x802DF678u;
    // 802DF678: lwz     r26, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_802DF67C:
    ctx->pc = 0x802DF67Cu;
    // 802DF67C: cmpwi   r0, 0
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

label_802DF680:
    ctx->pc = 0x802DF680u;
    // 802DF680: bc    12, 2, 0x802DF704
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF704;
        }
    }

label_802DF684:
    ctx->pc = 0x802DF684u;
    ctx->downcount -= 10;
    // 802DF684: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802DF688:
    ctx->pc = 0x802DF688u;
    // 802DF688: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802DF68C:
    ctx->pc = 0x802DF68Cu;
    // 802DF68C: lis     r27, -32660
    ctx->gpr[27] = ((u32)(s32)(-32660) << 16);

label_802DF690:
    ctx->pc = 0x802DF690u;
    // 802DF690: rlwinm r0, r26, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_802DF694:
    ctx->pc = 0x802DF694u;
    // 802DF694: addi    r3, r3, 7760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7760);

label_802DF698:
    ctx->pc = 0x802DF698u;
    // 802DF698: or   r28, r30, r30
    {
        ctx->gpr[28] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802DF69C:
    ctx->pc = 0x802DF69Cu;
    // 802DF69C: add   r25, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_802DF6A0:
    ctx->pc = 0x802DF6A0u;
    // 802DF6A0: addi    r27, r27, 7712
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(7712);

label_802DF6A4:
    ctx->pc = 0x802DF6A4u;
    // 802DF6A4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802DF6A8:
    ctx->pc = 0x802DF6A8u;
    // 802DF6A8: b       0x802DF6F8
    {
            goto label_802DF6F8;
    }

label_802DF6AC:
    ctx->pc = 0x802DF6ACu;
    ctx->downcount -= 5;
    // 802DF6AC: stb     r28, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_802DF6B0:
    // 802DF6B0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF6B4:
    ctx->pc = 0x802DF6B4u;
    // 802DF6B4: lwz     r4, -4(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(-4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF6B8:
    // 802DF6B8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF6BC:
    // 802DF6BC: bl      0x8000E7F4
    {
            ctx->lr = 0x802DF6C0u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DF6C0:
    ctx->pc = 0x802DF6C0u;
    ctx->downcount -= 4;
    // 802DF6C0: lwzx    r4, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF6C4:
    // 802DF6C4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF6C8:
    // 802DF6C8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF6CC:
    // 802DF6CC: bl      0x8000E864
    {
            ctx->lr = 0x802DF6D0u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DF6D0:
    ctx->downcount -= 3;
    // 802DF6D0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF6D4:
    // 802DF6D4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF6D8:
    // 802DF6D8: bl      0x8026F960
    {
            ctx->lr = 0x802DF6DCu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802DF6DC:
    ctx->downcount -= 5;
    // 802DF6DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF6E0:
    // 802DF6E0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802DF6E4:
    // 802DF6E4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF6E8:
    // 802DF6E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF6EC:
    // 802DF6EC: bl      0x8026F760
    {
            ctx->lr = 0x802DF6F0u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802DF6F0:
    ctx->downcount -= 2;
    // 802DF6F0: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802DF6F4:
    // 802DF6F4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802DF6F8:
    ctx->downcount -= 2;
    // 802DF6F8: cmpw    r30, r26
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[26]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DF6FC:
    // 802DF6FC: bc    12, 0, 0x802DF6AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF6ACu;
                return;
            }
            goto label_802DF6AC;
        }
    }

label_802DF700:
    ctx->pc = 0x802DF700u;
    ctx->downcount -= 1;
    // 802DF700: b       0x802DF7A8
    {
            goto label_802DF7A8;
    }

label_802DF704:
    ctx->pc = 0x802DF704u;
    ctx->downcount -= 10;
    // 802DF704: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802DF708:
    ctx->pc = 0x802DF708u;
    // 802DF708: lis     r28, -32660
    ctx->gpr[28] = ((u32)(s32)(-32660) << 16);

label_802DF70C:
    ctx->pc = 0x802DF70Cu;
    // 802DF70C: rlwinm r0, r26, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[26], 2u) & 0xFFFFFFFCu;
    }

label_802DF710:
    ctx->pc = 0x802DF710u;
    // 802DF710: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802DF714:
    ctx->pc = 0x802DF714u;
    // 802DF714: addi    r3, r3, 7760
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(7760);

label_802DF718:
    ctx->pc = 0x802DF718u;
    // 802DF718: addi    r28, r28, 7712
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7712);

label_802DF71C:
    ctx->pc = 0x802DF71Cu;
    // 802DF71C: add   r26, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_802DF720:
    ctx->pc = 0x802DF720u;
    // 802DF720: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_802DF724:
    ctx->pc = 0x802DF724u;
    // 802DF724: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802DF728:
    ctx->pc = 0x802DF728u;
    // 802DF728: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802DF72C:
    ctx->downcount -= 4;
    // 802DF72C: add   r25, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_802DF730:
    // 802DF730: rlwinm r29, r24, 2, 0, 29
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[24], 2u) & 0xFFFFFFFCu;
    }

label_802DF734:
    // 802DF734: li      r22, 0
    ctx->gpr[22] = (u32)(s32)(0);

label_802DF738:
    // 802DF738: b       0x802DF78C
    {
            goto label_802DF78C;
    }

label_802DF73C:
    ctx->pc = 0x802DF73Cu;
    ctx->downcount -= 5;
    // 802DF73C: stb     r27, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[27]);
    }

label_802DF740:
    // 802DF740: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF744:
    ctx->pc = 0x802DF744u;
    // 802DF744: lwz     r4, -4(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(-4);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF748:
    // 802DF748: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF74C:
    // 802DF74C: bl      0x8000E7F4
    {
            ctx->lr = 0x802DF750u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DF750:
    ctx->pc = 0x802DF750u;
    ctx->downcount -= 4;
    // 802DF750: lwzx    r4, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF754:
    // 802DF754: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF758:
    // 802DF758: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF75C:
    // 802DF75C: bl      0x8000E864
    {
            ctx->lr = 0x802DF760u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DF760:
    ctx->downcount -= 3;
    // 802DF760: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF764:
    // 802DF764: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF768:
    // 802DF768: bl      0x8026F960
    {
            ctx->lr = 0x802DF76Cu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802DF76C:
    ctx->downcount -= 5;
    // 802DF76C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF770:
    // 802DF770: or   r5, r23, r23
    {
        ctx->gpr[5] = ctx->gpr[23] | ctx->gpr[23];
    }

label_802DF774:
    // 802DF774: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802DF778:
    // 802DF778: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF77C:
    // 802DF77C: bl      0x8026F760
    {
            ctx->lr = 0x802DF780u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802DF780:
    ctx->downcount -= 3;
    // 802DF780: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_802DF784:
    // 802DF784: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802DF788:
    // 802DF788: addi    r22, r22, 1
    ctx->gpr[22] = ctx->gpr[22] + (u32)(s32)(1);

label_802DF78C:
    ctx->pc = 0x802DF78Cu;
    ctx->downcount -= 3;
    // 802DF78C: lwz     r0, 292(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF790:
    // 802DF790: cmpw    r22, r0
    {
        s32 val_a = (s32)(ctx->gpr[22]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DF794:
    // 802DF794: bc    12, 0, 0x802DF73C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF73Cu;
                return;
            }
            goto label_802DF73C;
        }
    }

label_802DF798:
    ctx->downcount -= 4;
    // 802DF798: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_802DF79C:
    // 802DF79C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802DF7A0:
    // 802DF7A0: cmpwi   r23, 2
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

label_802DF7A4:
    // 802DF7A4: bc    12, 0, 0x802DF72C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF72Cu;
                return;
            }
            goto label_802DF72C;
        }
    }

label_802DF7A8:
    ctx->pc = 0x802DF7A8u;
    ctx->downcount -= 16;
    // 802DF7A8: lmw     r22, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802DF7AC:
    ctx->pc = 0x802DF7ACu;
    // 802DF7AC: lwz     r0, 116(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF7B0:
    ctx->pc = 0x802DF7B0u;
    // 802DF7B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DF7B4:
    ctx->pc = 0x802DF7B4u;
    // 802DF7B4: addi    r1, r1, 112
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(112);

label_802DF7B8:
    ctx->pc = 0x802DF7B8u;
    // 802DF7B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DF7BC:
    ctx->pc = 0x802DF7BCu;
    ctx->downcount -= 5;
    // 802DF7BC: stwu     r1, -272(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-272);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DF7C0:
    ctx->pc = 0x802DF7C0u;
    // 802DF7C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DF7C4:
    ctx->pc = 0x802DF7C4u;
    // 802DF7C4: stw     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DF7C8:
    ctx->pc = 0x802DF7C8u;
    // 802DF7C8: addi    r11, r1, 272
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(272);

label_802DF7CC:
    ctx->pc = 0x802DF7CCu;
    // 802DF7CC: bl      0x80007824
    {
            ctx->lr = 0x802DF7D0u;
            ctx->pc = 0x80007824u;
            return;
    }

label_802DF7D0:
    ctx->pc = 0x802DF7D0u;
    ctx->downcount -= 16;
    // 802DF7D0: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_802DF7D4:
    ctx->pc = 0x802DF7D4u;
    // 802DF7D4: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802DF7D8:
    ctx->pc = 0x802DF7D8u;
    // 802DF7D8: lis     r6, -32660
    ctx->gpr[6] = ((u32)(s32)(-32660) << 16);

label_802DF7DC:
    ctx->pc = 0x802DF7DCu;
    // 802DF7DC: lwz     r17, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_802DF7E0:
    ctx->pc = 0x802DF7E0u;
    // 802DF7E0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF7E4:
    ctx->pc = 0x802DF7E4u;
    // 802DF7E4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DF7E8:
    ctx->pc = 0x802DF7E8u;
    // 802DF7E8: or   r26, r16, r16
    {
        ctx->gpr[26] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DF7EC:
    ctx->pc = 0x802DF7ECu;
    // 802DF7EC: or   r22, r16, r16
    {
        ctx->gpr[22] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DF7F0:
    ctx->pc = 0x802DF7F0u;
    // 802DF7F0: or   r25, r16, r16
    {
        ctx->gpr[25] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DF7F4:
    ctx->pc = 0x802DF7F4u;
    // 802DF7F4: or   r27, r16, r16
    {
        ctx->gpr[27] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DF7F8:
    ctx->pc = 0x802DF7F8u;
    // 802DF7F8: or   r14, r16, r16
    {
        ctx->gpr[14] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DF7FC:
    ctx->pc = 0x802DF7FCu;
    // 802DF7FC: addi    r24, r5, 9336
    ctx->gpr[24] = ctx->gpr[5] + (u32)(s32)(9336);

label_802DF800:
    ctx->pc = 0x802DF800u;
    // 802DF800: addi    r23, r6, 7712
    ctx->gpr[23] = ctx->gpr[6] + (u32)(s32)(7712);

label_802DF804:
    ctx->pc = 0x802DF804u;
    // 802DF804: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802DF808:
    ctx->pc = 0x802DF808u;
    // 802DF808: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802DF80C:
    ctx->pc = 0x802DF80Cu;
    // 802DF80C: b       0x802DFAF4
    {
            goto label_802DFAF4;
    }

label_802DF810:
    ctx->pc = 0x802DF810u;
    ctx->downcount -= 6;
    // 802DF810: lwz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF814:
    // 802DF814: add   r19, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_802DF818:
    ctx->pc = 0x802DF818u;
    // 802DF818: lwz     r15, 276(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(276);
        ctx->gpr[15] = mem_read32(ctx, ea);
    }

label_802DF81C:
    // 802DF81C: add   r21, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[21] = res;
    }

label_802DF820:
    // 802DF820: cmpwi   r0, 0
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

label_802DF824:
    // 802DF824: bc    4, 2, 0x802DF90C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DF90C;
        }
    }

label_802DF828:
    ctx->pc = 0x802DF828u;
    ctx->downcount -= 5;
    // 802DF828: stb     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[22]);
    }

label_802DF82C:
    // 802DF82C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF830:
    ctx->pc = 0x802DF830u;
    // 802DF830: lwz     r4, -28188(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28188);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF834:
    // 802DF834: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF838:
    // 802DF838: bl      0x8000E7F4
    {
            ctx->lr = 0x802DF83Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DF83C:
    ctx->downcount -= 5;
    // 802DF83C: rlwinm r0, r15, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[15], 2u) & 0xFFFFFFFCu;
    }

label_802DF840:
    // 802DF840: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF844:
    ctx->pc = 0x802DF844u;
    // 802DF844: lwzx    r4, r23, r0
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[0];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF848:
    // 802DF848: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF84C:
    // 802DF84C: bl      0x8000E864
    {
            ctx->lr = 0x802DF850u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DF850:
    ctx->downcount -= 3;
    // 802DF850: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF854:
    // 802DF854: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF858:
    // 802DF858: bl      0x8026F968
    {
            ctx->lr = 0x802DF85Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802DF85C:
    ctx->pc = 0x802DF85Cu;
    ctx->downcount -= 3;
    // 802DF85C: lbz     r0, 44(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF860:
    // 802DF860: cmpwi   r0, 0
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

label_802DF864:
    // 802DF864: bc    4, 2, 0x802DF8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DF8AC;
        }
    }

label_802DF868:
    ctx->pc = 0x802DF868u;
    ctx->downcount -= 9;
    // 802DF868: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF86C:
    // 802DF86C: or   r6, r15, r15
    {
        ctx->gpr[6] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DF870:
    // 802DF870: addi    r5, r24, 262
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(262);

label_802DF874:
    // 802DF874: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DF878:
    // 802DF878: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DF87C:
    ctx->pc = 0x802DF87Cu;
    // 802DF87C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF880:
    // 802DF880: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF884:
    // 802DF884: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF888:
    // 802DF888: bl      0x8000D074
    {
            ctx->lr = 0x802DF88Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DF88C:
    ctx->downcount -= 3;
    // 802DF88C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF890:
    // 802DF890: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF894:
    // 802DF894: bl      0x8026F970
    {
            ctx->lr = 0x802DF898u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DF898:
    ctx->pc = 0x802DF898u;
    ctx->downcount -= 5;
    // 802DF898: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF89C:
    // 802DF89C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DF8A0:
    // 802DF8A0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DF8A4:
    ctx->pc = 0x802DF8A4u;
    // 802DF8A4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF8A8:
    // 802DF8A8: b       0x802DF90C
    {
            goto label_802DF90C;
    }

label_802DF8AC:
    ctx->pc = 0x802DF8ACu;
    ctx->downcount -= 12;
    // 802DF8AC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF8B0:
    // 802DF8B0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF8B4:
    // 802DF8B4: li      r6, 51
    ctx->gpr[6] = (u32)(s32)(51);

label_802DF8B8:
    // 802DF8B8: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_802DF8BC:
    // 802DF8BC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DF8C0:
    // 802DF8C0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_802DF8C4:
    // 802DF8C4: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DF8C8:
    ctx->pc = 0x802DF8C8u;
    // 802DF8C8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF8CC:
    // 802DF8CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF8D0:
    ctx->pc = 0x802DF8D0u;
    // 802DF8D0: lwz     r5, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802DF8D4:
    ctx->pc = 0x802DF8D4u;
    // 802DF8D4: lwz     r7, 28(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(28);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802DF8D8:
    // 802DF8D8: bl      0x8026F828
    {
            ctx->lr = 0x802DF8DCu;
            ctx->pc = 0x8026F828u;
            return;
    }

label_802DF8DC:
    ctx->downcount -= 6;
    // 802DF8DC: or   r6, r15, r15
    {
        ctx->gpr[6] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DF8E0:
    // 802DF8E0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF8E4:
    // 802DF8E4: addi    r5, r24, 262
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(262);

label_802DF8E8:
    // 802DF8E8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DF8EC:
    // 802DF8EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF8F0:
    // 802DF8F0: bl      0x8000D074
    {
            ctx->lr = 0x802DF8F4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DF8F4:
    ctx->downcount -= 3;
    // 802DF8F4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF8F8:
    // 802DF8F8: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF8FC:
    // 802DF8FC: bl      0x8026F970
    {
            ctx->lr = 0x802DF900u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DF900:
    ctx->pc = 0x802DF900u;
    ctx->downcount -= 3;
    // 802DF900: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF904:
    // 802DF904: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DF908:
    ctx->pc = 0x802DF908u;
    // 802DF908: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DF90C:
    ctx->pc = 0x802DF90Cu;
    ctx->downcount -= 5;
    // 802DF90C: stb     r25, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[25]);
    }

label_802DF910:
    // 802DF910: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF914:
    ctx->pc = 0x802DF914u;
    // 802DF914: lwz     r4, -28184(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF918:
    // 802DF918: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF91C:
    // 802DF91C: bl      0x8000E7F4
    {
            ctx->lr = 0x802DF920u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DF920:
    ctx->downcount -= 5;
    // 802DF920: rlwinm r20, r15, 2, 0, 29
    {
        ctx->gpr[20] = dolrecomp_rotl32(ctx->gpr[15], 2u) & 0xFFFFFFFCu;
    }

label_802DF924:
    // 802DF924: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF928:
    ctx->pc = 0x802DF928u;
    // 802DF928: lwzx    r4, r23, r20
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[20];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DF92C:
    // 802DF92C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF930:
    // 802DF930: bl      0x8000E864
    {
            ctx->lr = 0x802DF934u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DF934:
    ctx->downcount -= 3;
    // 802DF934: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF938:
    // 802DF938: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DF93C:
    // 802DF93C: bl      0x8026F968
    {
            ctx->lr = 0x802DF940u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802DF940:
    ctx->pc = 0x802DF940u;
    ctx->downcount -= 4;
    // 802DF940: lwz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF944:
    // 802DF944: or   r18, r3, r3
    {
        ctx->gpr[18] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DF948:
    // 802DF948: cmpwi   r0, 2
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

label_802DF94C:
    // 802DF94C: bc    12, 2, 0x802DF988
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DF988;
        }
    }

label_802DF950:
    ctx->pc = 0x802DF950u;
    ctx->downcount -= 6;
    // 802DF950: sth     r26, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write16(ctx, ea, (u16)ctx->gpr[26]);
    }

label_802DF954:
    // 802DF954: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_802DF958:
    // 802DF958: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF95C:
    // 802DF95C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF960:
    ctx->pc = 0x802DF960u;
    // 802DF960: lwz     r3, 32(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DF964:
    // 802DF964: bl      0x8034E040
    {
            ctx->lr = 0x802DF968u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_802DF968:
    ctx->downcount -= 7;
    // 802DF968: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DF96C:
    // 802DF96C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF970:
    // 802DF970: addi    r7, r1, 72
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(72);

label_802DF974:
    // 802DF974: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_802DF978:
    // 802DF978: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802DF97C:
    // 802DF97C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF980:
    // 802DF980: bl      0x8026F8C0
    {
            ctx->lr = 0x802DF984u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802DF984:
    ctx->downcount -= 1;
    // 802DF984: b       0x802DF9E4
    {
            goto label_802DF9E4;
    }

label_802DF988:
    ctx->pc = 0x802DF988u;
    ctx->downcount -= 3;
    // 802DF988: lbz     r0, 44(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DF98C:
    // 802DF98C: cmpwi   r0, 0
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

label_802DF990:
    // 802DF990: bc    4, 2, 0x802DF9B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DF9B0;
        }
    }

label_802DF994:
    ctx->downcount -= 6;
    // 802DF994: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DF998:
    // 802DF998: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF99C:
    // 802DF99C: li      r5, 53
    ctx->gpr[5] = (u32)(s32)(53);

label_802DF9A0:
    // 802DF9A0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF9A4:
    // 802DF9A4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF9A8:
    // 802DF9A8: bl      0x8026F8C0
    {
            ctx->lr = 0x802DF9ACu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802DF9AC:
    ctx->downcount -= 1;
    // 802DF9AC: b       0x802DF9E4
    {
            goto label_802DF9E4;
    }

label_802DF9B0:
    ctx->pc = 0x802DF9B0u;
    ctx->downcount -= 6;
    // 802DF9B0: sth     r27, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write16(ctx, ea, (u16)ctx->gpr[27]);
    }

label_802DF9B4:
    // 802DF9B4: addi    r4, r1, 72
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(72);

label_802DF9B8:
    // 802DF9B8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DF9BC:
    // 802DF9BC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DF9C0:
    ctx->pc = 0x802DF9C0u;
    // 802DF9C0: lwz     r3, 28(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DF9C4:
    // 802DF9C4: bl      0x8034E040
    {
            ctx->lr = 0x802DF9C8u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_802DF9C8:
    ctx->downcount -= 7;
    // 802DF9C8: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DF9CC:
    // 802DF9CC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF9D0:
    // 802DF9D0: addi    r7, r1, 72
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(72);

label_802DF9D4:
    // 802DF9D4: li      r5, 54
    ctx->gpr[5] = (u32)(s32)(54);

label_802DF9D8:
    // 802DF9D8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802DF9DC:
    // 802DF9DC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DF9E0:
    // 802DF9E0: bl      0x8026F8C0
    {
            ctx->lr = 0x802DF9E4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802DF9E4:
    ctx->pc = 0x802DF9E4u;
    ctx->downcount -= 3;
    // 802DF9E4: lwz     r0, 36(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DF9E8:
    // 802DF9E8: cmpwi   r0, 3
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

label_802DF9EC:
    // 802DF9EC: bc    12, 0, 0x802DFA2C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFA2C;
        }
    }

label_802DF9F0:
    ctx->downcount -= 6;
    // 802DF9F0: add   r4, r20, r0
    {
        u32 a = ctx->gpr[20];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802DF9F4:
    // 802DF9F4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DF9F8:
    // 802DF9F8: addi    r18, r4, 7
    ctx->gpr[18] = ctx->gpr[4] + (u32)(s32)(7);

label_802DF9FC:
    // 802DF9FC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DFA00:
    // 802DFA00: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DFA04:
    // 802DFA04: bl      0x8026FEF0
    {
            ctx->lr = 0x802DFA08u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DFA08:
    ctx->downcount -= 3;
    // 802DFA08: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DFA0C:
    // 802DFA0C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFA10:
    // 802DFA10: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFA14u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFA14:
    ctx->downcount -= 1;
    // 802DFA14: bl      0x8025EC94
    {
            ctx->lr = 0x802DFA18u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DFA18:
    ctx->downcount -= 3;
    // 802DFA18: or   r4, r18, r18
    {
        ctx->gpr[4] = ctx->gpr[18] | ctx->gpr[18];
    }

label_802DFA1C:
    // 802DFA1C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFA20:
    // 802DFA20: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFA24u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFA24:
    ctx->pc = 0x802DFA24u;
    ctx->downcount -= 2;
    // 802DFA24: lfs     f1, -12600(r2)
    if (!ppc_fp_available_inline(ctx, 0x802DFA24u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802DFA28:
    // 802DFA28: bl      0x8025EBE8
    {
            ctx->lr = 0x802DFA2Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802DFA2C:
    ctx->pc = 0x802DFA2Cu;
    ctx->downcount -= 3;
    // 802DFA2C: lwz     r0, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFA30:
    // 802DFA30: cmpwi   r0, 0
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

label_802DFA34:
    // 802DFA34: bc    12, 2, 0x802DFAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFAE8;
        }
    }

label_802DFA38:
    ctx->pc = 0x802DFA38u;
    ctx->downcount -= 5;
    // 802DFA38: stb     r14, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[14]);
    }

label_802DFA3C:
    // 802DFA3C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFA40:
    ctx->pc = 0x802DFA40u;
    // 802DFA40: lwz     r4, -28192(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFA44:
    // 802DFA44: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DFA48:
    // 802DFA48: bl      0x8000E7F4
    {
            ctx->lr = 0x802DFA4Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DFA4C:
    ctx->pc = 0x802DFA4Cu;
    ctx->downcount -= 4;
    // 802DFA4C: lwzx    r4, r23, r20
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[20];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFA50:
    // 802DFA50: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFA54:
    // 802DFA54: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DFA58:
    // 802DFA58: bl      0x8000E864
    {
            ctx->lr = 0x802DFA5Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DFA5C:
    ctx->downcount -= 3;
    // 802DFA5C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFA60:
    // 802DFA60: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFA64:
    // 802DFA64: bl      0x8026F968
    {
            ctx->lr = 0x802DFA68u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802DFA68:
    ctx->pc = 0x802DFA68u;
    ctx->downcount -= 8;
    // 802DFA68: lwz     r6, 24(r21)
    {
        u32 ea = ctx->gpr[21] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802DFA6C:
    // 802DFA6C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DFA70:
    // 802DFA70: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFA74:
    // 802DFA74: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802DFA78:
    // 802DFA78: addi    r7, r6, 112
    ctx->gpr[7] = ctx->gpr[6] + (u32)(s32)(112);

label_802DFA7C:
    // 802DFA7C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802DFA80:
    // 802DFA80: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFA84:
    // 802DFA84: bl      0x8026F8C0
    {
            ctx->lr = 0x802DFA88u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802DFA88:
    ctx->downcount -= 6;
    // 802DFA88: or   r6, r15, r15
    {
        ctx->gpr[6] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DFA8C:
    // 802DFA8C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFA90:
    // 802DFA90: addi    r5, r24, 276
    ctx->gpr[5] = ctx->gpr[24] + (u32)(s32)(276);

label_802DFA94:
    // 802DFA94: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DFA98:
    // 802DFA98: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFA9C:
    // 802DFA9C: bl      0x8000D074
    {
            ctx->lr = 0x802DFAA0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DFAA0:
    ctx->downcount -= 3;
    // 802DFAA0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFAA4:
    // 802DFAA4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFAA8:
    // 802DFAA8: bl      0x8026F970
    {
            ctx->lr = 0x802DFAACu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFAAC:
    ctx->pc = 0x802DFAACu;
    ctx->downcount -= 8;
    // 802DFAAC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFAB0:
    // 802DFAB0: or   r15, r3, r3
    {
        ctx->gpr[15] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DFAB4:
    // 802DFAB4: or   r4, r15, r15
    {
        ctx->gpr[4] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DFAB8:
    // 802DFAB8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFABC:
    // 802DFABC: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DFAC0:
    ctx->pc = 0x802DFAC0u;
    // 802DFAC0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFAC4:
    ctx->pc = 0x802DFAC4u;
    // 802DFAC4: lwz     r3, 300(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DFAC8:
    // 802DFAC8: bl      0x8027CC74
    {
            ctx->lr = 0x802DFACCu;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_802DFACC:
    ctx->pc = 0x802DFACCu;
    ctx->downcount -= 3;
    // 802DFACC: lwz     r3, 12(r15)
    {
        u32 ea = ctx->gpr[15] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802DFAD0:
    // 802DFAD0: cmpwi   r3, 0
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

label_802DFAD4:
    // 802DFAD4: bc    12, 2, 0x802DFAE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFAE8;
        }
    }

label_802DFAD8:
    ctx->pc = 0x802DFAD8u;
    ctx->downcount -= 4;
    // 802DFAD8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFADC:
    // 802DFADC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFAE0:
    // 802DFAE0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DFAE4:
    ctx->pc = 0x802DFAE4u;
    // 802DFAE4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFAE8:
    ctx->downcount -= 3;
    // 802DFAE8: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_802DFAEC:
    // 802DFAEC: addi    r29, r29, 28
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(28);

label_802DFAF0:
    // 802DFAF0: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_802DFAF4:
    ctx->downcount -= 2;
    // 802DFAF4: cmpw    r16, r17
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[17]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFAF8:
    // 802DFAF8: bc    12, 0, 0x802DF810
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF810u;
                return;
            }
            goto label_802DF810;
        }
    }

label_802DFAFC:
    ctx->pc = 0x802DFAFCu;
    ctx->downcount -= 2;
    // 802DFAFC: addi    r11, r1, 272
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(272);

label_802DFB00:
    ctx->pc = 0x802DFB00u;
    // 802DFB00: bl      0x80007870
    {
            ctx->lr = 0x802DFB04u;
            ctx->pc = 0x80007870u;
            return;
    }

label_802DFB04:
    ctx->pc = 0x802DFB04u;
    ctx->downcount -= 5;
    // 802DFB04: lwz     r0, 276(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(276);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFB08:
    ctx->pc = 0x802DFB08u;
    // 802DFB08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DFB0C:
    ctx->pc = 0x802DFB0Cu;
    // 802DFB0C: addi    r1, r1, 272
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(272);

label_802DFB10:
    ctx->pc = 0x802DFB10u;
    // 802DFB10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFB14:
    ctx->pc = 0x802DFB14u;
    ctx->downcount -= 9;
    // 802DFB14: stwu     r1, -192(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-192);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DFB18:
    ctx->pc = 0x802DFB18u;
    // 802DFB18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DFB1C:
    ctx->pc = 0x802DFB1Cu;
    // 802DFB1C: stw     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DFB20:
    ctx->pc = 0x802DFB20u;
    // 802DFB20: addi    r11, r1, 160
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(160);

label_802DFB24:
    ctx->pc = 0x802DFB24u;
    // 802DFB24: stfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DFB24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_802DFB28:
    ctx->pc = 0x802DFB28u;
    // 802DFB28: psq_st   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802DFB28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x802DFB28u);
        if (ctx->exception) return;
    }

label_802DFB2C:
    ctx->pc = 0x802DFB2Cu;
    // 802DFB2C: stfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DFB2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[30]));
    }

label_802DFB30:
    ctx->pc = 0x802DFB30u;
    // 802DFB30: psq_st   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802DFB30u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_store_inline(ctx, 30u, ea, false, 0u, false, 0x802DFB30u);
        if (ctx->exception) return;
    }

label_802DFB34:
    ctx->pc = 0x802DFB34u;
    // 802DFB34: bl      0x80007824
    {
            ctx->lr = 0x802DFB38u;
            ctx->pc = 0x80007824u;
            return;
    }

label_802DFB38:
    ctx->pc = 0x802DFB38u;
    ctx->downcount -= 18;
    // 802DFB38: lwz     r17, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[17] = mem_read32(ctx, ea);
    }

label_802DFB3C:
    ctx->pc = 0x802DFB3Cu;
    // 802DFB3C: li      r16, 0
    ctx->gpr[16] = (u32)(s32)(0);

label_802DFB40:
    ctx->pc = 0x802DFB40u;
    // 802DFB40: lis     r26, -32665
    ctx->gpr[26] = ((u32)(s32)(-32665) << 16);

label_802DFB44:
    ctx->pc = 0x802DFB44u;
    // 802DFB44: lis     r20, -32660
    ctx->gpr[20] = ((u32)(s32)(-32660) << 16);

label_802DFB48:
    ctx->pc = 0x802DFB48u;
    // 802DFB48: lis     r23, -32660
    ctx->gpr[23] = ((u32)(s32)(-32660) << 16);

label_802DFB4C:
    ctx->pc = 0x802DFB4Cu;
    // 802DFB4C: lfd     f31, -12592(r2)
    if (!ppc_fp_available_inline(ctx, 0x802DFB4Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12592);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802DFB50:
    ctx->pc = 0x802DFB50u;
    // 802DFB50: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DFB54:
    ctx->pc = 0x802DFB54u;
    // 802DFB54: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802DFB58:
    ctx->pc = 0x802DFB58u;
    // 802DFB58: or   r22, r16, r16
    {
        ctx->gpr[22] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DFB5C:
    ctx->pc = 0x802DFB5Cu;
    // 802DFB5C: or   r25, r16, r16
    {
        ctx->gpr[25] = ctx->gpr[16] | ctx->gpr[16];
    }

label_802DFB60:
    ctx->pc = 0x802DFB60u;
    // 802DFB60: addi    r26, r26, 9336
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(9336);

label_802DFB64:
    ctx->pc = 0x802DFB64u;
    // 802DFB64: addi    r20, r20, 7744
    ctx->gpr[20] = ctx->gpr[20] + (u32)(s32)(7744);

label_802DFB68:
    ctx->pc = 0x802DFB68u;
    // 802DFB68: addi    r21, r17, -1
    ctx->gpr[21] = ctx->gpr[17] + (u32)(s32)(-1);

label_802DFB6C:
    ctx->pc = 0x802DFB6Cu;
    // 802DFB6C: addi    r23, r23, 7712
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(7712);

label_802DFB70:
    ctx->pc = 0x802DFB70u;
    // 802DFB70: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802DFB74:
    ctx->pc = 0x802DFB74u;
    // 802DFB74: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_802DFB78:
    ctx->pc = 0x802DFB78u;
    // 802DFB78: li      r24, 3
    ctx->gpr[24] = (u32)(s32)(3);

label_802DFB7C:
    ctx->pc = 0x802DFB7Cu;
    // 802DFB7C: lis     r14, 17200
    ctx->gpr[14] = ((u32)(s32)(17200) << 16);

label_802DFB80:
    ctx->pc = 0x802DFB80u;
    ctx->downcount -= 3;
    // 802DFB80: lwzx    r4, r20, r28
    {
        u32 ea = ctx->gpr[20] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFB84:
    // 802DFB84: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFB88:
    // 802DFB88: bl      0x8026F970
    {
            ctx->lr = 0x802DFB8Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFB8C:
    ctx->downcount -= 2;
    // 802DFB8C: cmpw    r16, r21
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[21]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFB90:
    // 802DFB90: bc    4, 2, 0x802DFBA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFBA8;
        }
    }

label_802DFB94:
    ctx->pc = 0x802DFB94u;
    ctx->downcount -= 5;
    // 802DFB94: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFB98:
    // 802DFB98: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFB9C:
    // 802DFB9C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DFBA0:
    ctx->pc = 0x802DFBA0u;
    // 802DFBA0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFBA4:
    // 802DFBA4: b       0x802DFBB4
    {
            goto label_802DFBB4;
    }

label_802DFBA8:
    ctx->pc = 0x802DFBA8u;
    ctx->downcount -= 3;
    // 802DFBA8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFBAC:
    // 802DFBAC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFBB0:
    ctx->pc = 0x802DFBB0u;
    // 802DFBB0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFBB4:
    ctx->pc = 0x802DFBB4u;
    ctx->downcount -= 5;
    // 802DFBB4: stb     r22, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[22]);
    }

label_802DFBB8:
    // 802DFBB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFBBC:
    ctx->pc = 0x802DFBBCu;
    // 802DFBBC: lwz     r4, -28180(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFBC0:
    // 802DFBC0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DFBC4:
    // 802DFBC4: bl      0x8000E7F4
    {
            ctx->lr = 0x802DFBC8u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802DFBC8:
    ctx->pc = 0x802DFBC8u;
    ctx->downcount -= 4;
    // 802DFBC8: lwzx    r4, r23, r28
    {
        u32 ea = ctx->gpr[23] + ctx->gpr[28];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFBCC:
    // 802DFBCC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFBD0:
    // 802DFBD0: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802DFBD4:
    // 802DFBD4: bl      0x8000E864
    {
            ctx->lr = 0x802DFBD8u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802DFBD8:
    ctx->downcount -= 3;
    // 802DFBD8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFBDC:
    // 802DFBDC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFBE0:
    // 802DFBE0: bl      0x8026F970
    {
            ctx->lr = 0x802DFBE4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFBE4:
    ctx->downcount -= 2;
    // 802DFBE4: cmpw    r16, r17
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(ctx->gpr[17]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFBE8:
    // 802DFBE8: bc    12, 0, 0x802DFBFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFBFC;
        }
    }

label_802DFBEC:
    ctx->pc = 0x802DFBECu;
    ctx->downcount -= 4;
    // 802DFBEC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFBF0:
    // 802DFBF0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFBF4:
    ctx->pc = 0x802DFBF4u;
    // 802DFBF4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFBF8:
    // 802DFBF8: b       0x802DFC0C
    {
            goto label_802DFC0C;
    }

label_802DFBFC:
    ctx->pc = 0x802DFBFCu;
    ctx->downcount -= 4;
    // 802DFBFC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFC00:
    // 802DFC00: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFC04:
    // 802DFC04: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DFC08:
    ctx->pc = 0x802DFC08u;
    // 802DFC08: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFC0C:
    ctx->pc = 0x802DFC0Cu;
    ctx->downcount -= 3;
    // 802DFC0C: lwz     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFC10:
    // 802DFC10: cmpwi   r0, 0
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

label_802DFC14:
    // 802DFC14: bc    4, 2, 0x802DFC70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFC70;
        }
    }

label_802DFC18:
    ctx->downcount -= 7;
    // 802DFC18: add   r4, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802DFC1C:
    // 802DFC1C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFC20:
    ctx->pc = 0x802DFC20u;
    // 802DFC20: lwz     r6, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802DFC24:
    // 802DFC24: addi    r5, r26, 291
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(291);

label_802DFC28:
    // 802DFC28: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DFC2C:
    // 802DFC2C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFC30:
    // 802DFC30: bl      0x8000D074
    {
            ctx->lr = 0x802DFC34u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DFC34:
    ctx->downcount -= 3;
    // 802DFC34: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFC38:
    // 802DFC38: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFC3C:
    // 802DFC3C: bl      0x8026F970
    {
            ctx->lr = 0x802DFC40u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFC40:
    ctx->downcount -= 4;
    // 802DFC40: add   r4, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802DFC44:
    ctx->pc = 0x802DFC44u;
    // 802DFC44: lbz     r0, 45(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(45);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFC48:
    // 802DFC48: cmpwi   r0, 0
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

label_802DFC4C:
    // 802DFC4C: bc    12, 2, 0x802DFC64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFC64;
        }
    }

label_802DFC50:
    ctx->pc = 0x802DFC50u;
    ctx->downcount -= 5;
    // 802DFC50: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFC54:
    // 802DFC54: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFC58:
    // 802DFC58: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802DFC5C:
    ctx->pc = 0x802DFC5Cu;
    // 802DFC5C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFC60:
    // 802DFC60: b       0x802DFC70
    {
            goto label_802DFC70;
    }

label_802DFC64:
    ctx->pc = 0x802DFC64u;
    ctx->downcount -= 3;
    // 802DFC64: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFC68:
    // 802DFC68: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFC6C:
    ctx->pc = 0x802DFC6Cu;
    // 802DFC6C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFC70:
    ctx->downcount -= 7;
    // 802DFC70: add   r19, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[19] = res;
    }

label_802DFC74:
    // 802DFC74: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFC78:
    ctx->pc = 0x802DFC78u;
    // 802DFC78: lwz     r6, 276(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(276);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802DFC7C:
    // 802DFC7C: addi    r5, r26, 304
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(304);

label_802DFC80:
    // 802DFC80: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DFC84:
    // 802DFC84: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFC88:
    // 802DFC88: bl      0x8000D074
    {
            ctx->lr = 0x802DFC8Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DFC8C:
    ctx->downcount -= 3;
    // 802DFC8C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFC90:
    // 802DFC90: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFC94:
    // 802DFC94: bl      0x8026F970
    {
            ctx->lr = 0x802DFC98u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFC98:
    ctx->downcount -= 11;
    // 802DFC98: add   r4, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802DFC9C:
    ctx->pc = 0x802DFC9Cu;
    // 802DFC9C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFCA0:
    // 802DFCA0: addi    r18, r4, 24
    ctx->gpr[18] = ctx->gpr[4] + (u32)(s32)(24);

label_802DFCA4:
    ctx->pc = 0x802DFCA4u;
    // 802DFCA4: lwz     r4, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFCA8:
    // 802DFCA8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFCAC:
    // 802DFCAC: li      r15, 0
    ctx->gpr[15] = (u32)(s32)(0);

label_802DFCB0:
    // 802DFCB0: srawi r5, r4, 31
    {
        u32 sh = 31u;
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

label_802DFCB4:
    // 802DFCB4: subfc   r4, r24, r4
    {
        u32 a = ~ctx->gpr[24];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802DFCB8:
    // 802DFCB8: adde   r4, r5, r25
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[25];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802DFCBC:
    // 802DFCBC: or   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[4];
    }

label_802DFCC0:
    ctx->pc = 0x802DFCC0u;
    // 802DFCC0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFCC4:
    ctx->pc = 0x802DFCC4u;
    ctx->downcount -= 14;
    // 802DFCC4: lwz     r9, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_802DFCC8:
    // 802DFCC8: or   r7, r15, r15
    {
        ctx->gpr[7] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DFCCC:
    ctx->pc = 0x802DFCCCu;
    // 802DFCCC: lwz     r4, 276(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFCD0:
    // 802DFCD0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFCD4:
    // 802DFCD4: xor   r0, r9, r15
    {
        ctx->gpr[0] = ctx->gpr[9] ^ ctx->gpr[15];
    }

label_802DFCD8:
    // 802DFCD8: addi    r5, r26, 317
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(317);

label_802DFCDC:
    // 802DFCDC: srawi r8, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[8] = value;
        } else if (sh > 31) {
            ctx->gpr[8] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[8] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_802DFCE0:
    // 802DFCE0: addi    r6, r4, 1
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(1);

label_802DFCE4:
    // 802DFCE4: and   r0, r0, r9
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[9];
    }

label_802DFCE8:
    // 802DFCE8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DFCEC:
    // 802DFCEC: subf   r0, r0, r8
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[8];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802DFCF0:
    // 802DFCF0: rlwinm r27, r0, 1, 31, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802DFCF4:
    // 802DFCF4: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFCF8:
    // 802DFCF8: bl      0x8000D074
    {
            ctx->lr = 0x802DFCFCu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DFCFC:
    ctx->downcount -= 3;
    // 802DFCFC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFD00:
    // 802DFD00: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFD04:
    // 802DFD04: bl      0x8026F970
    {
            ctx->lr = 0x802DFD08u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFD08:
    ctx->pc = 0x802DFD08u;
    ctx->downcount -= 12;
    // 802DFD08: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFD0C:
    // 802DFD0C: or   r7, r15, r15
    {
        ctx->gpr[7] = ctx->gpr[15] | ctx->gpr[15];
    }

label_802DFD10:
    // 802DFD10: addi    r5, r26, 336
    ctx->gpr[5] = ctx->gpr[26] + (u32)(s32)(336);

label_802DFD14:
    // 802DFD14: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802DFD18:
    // 802DFD18: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFD1C:
    // 802DFD1C: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_802DFD20:
    ctx->pc = 0x802DFD20u;
    // 802DFD20: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFD24:
    // 802DFD24: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFD28:
    ctx->pc = 0x802DFD28u;
    // 802DFD28: lwz     r6, 276(r19)
    {
        u32 ea = ctx->gpr[19] + (u32)(s32)(276);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802DFD2C:
    // 802DFD2C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802DFD30:
    // 802DFD30: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802DFD34:
    // 802DFD34: bl      0x8000D074
    {
            ctx->lr = 0x802DFD38u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802DFD38:
    ctx->downcount -= 3;
    // 802DFD38: cmpwi   r27, 0
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

label_802DFD3C:
    // 802DFD3C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802DFD40:
    // 802DFD40: bc    12, 2, 0x802DFD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFD58;
        }
    }

label_802DFD44:
    ctx->downcount -= 4;
    // 802DFD44: add   r3, r15, r18
    {
        u32 a = ctx->gpr[15];
        u32 b = ctx->gpr[18];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802DFD48:
    ctx->pc = 0x802DFD48u;
    // 802DFD48: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFD4C:
    // 802DFD4C: cmpwi   r0, 0
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

label_802DFD50:
    // 802DFD50: bc    12, 2, 0x802DFD58
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFD58;
        }
    }

label_802DFD54:
    ctx->downcount -= 1;
    // 802DFD54: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_802DFD58:
    ctx->downcount -= 3;
    // 802DFD58: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFD5C:
    // 802DFD5C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802DFD60:
    // 802DFD60: bl      0x8026F970
    {
            ctx->lr = 0x802DFD64u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802DFD64:
    ctx->pc = 0x802DFD64u;
    ctx->downcount -= 7;
    // 802DFD64: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFD68:
    // 802DFD68: addi    r15, r15, 1
    ctx->gpr[15] = ctx->gpr[15] + (u32)(s32)(1);

label_802DFD6C:
    // 802DFD6C: cmpwi   r15, 5
    {
        s32 val_a = (s32)(ctx->gpr[15]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFD70:
    // 802DFD70: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802DFD74:
    // 802DFD74: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_802DFD78:
    ctx->pc = 0x802DFD78u;
    // 802DFD78: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802DFD7C:
    // 802DFD7C: bc    12, 0, 0x802DFCC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFCC4u;
                return;
            }
            goto label_802DFCC4;
        }
    }

label_802DFD80:
    ctx->downcount -= 4;
    // 802DFD80: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFD84:
    // 802DFD84: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_802DFD88:
    // 802DFD88: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DFD8C:
    // 802DFD8C: bl      0x8026FEF0
    {
            ctx->lr = 0x802DFD90u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DFD90:
    ctx->downcount -= 3;
    // 802DFD90: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFD94:
    // 802DFD94: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_802DFD98:
    // 802DFD98: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFD9Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFD9C:
    ctx->downcount -= 1;
    // 802DFD9C: bl      0x8025EC94
    {
            ctx->lr = 0x802DFDA0u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DFDA0:
    ctx->pc = 0x802DFDA0u;
    ctx->downcount -= 10;
    // 802DFDA0: lwz     r0, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFDA4:
    // 802DFDA4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFDA8:
    ctx->pc = 0x802DFDA8u;
    // 802DFDA8: stw     r14, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[14]);
    }

label_802DFDAC:
    // 802DFDAC: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_802DFDB0:
    // 802DFDB0: subfic  r0, r0, 5
    {
        u64 res = (u64)(u32)(s32)(5) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802DFDB4:
    // 802DFDB4: xoris   r0, r0, 0x8000
    ctx->gpr[0] = ctx->gpr[0] ^ (0x8000u << 16);

label_802DFDB8:
    ctx->pc = 0x802DFDB8u;
    // 802DFDB8: stw     r0, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DFDBC:
    ctx->pc = 0x802DFDBCu;
    // 802DFDBC: lfd     f0, 72(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DFDBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802DFDC0:
    ctx->pc = 0x802DFDC0u;
    // 802DFDC0: fsubs   f30, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x802DFDC0u)) return;
    ppc_fsubs(ctx, 30, 0, 31);

label_802DFDC4:
    // 802DFDC4: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFDC8u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFDC8:
    ctx->pc = 0x802DFDC8u;
    ctx->downcount -= 2;
    // 802DFDC8: fmr    f1, f30
    if (!ppc_fp_available_inline(ctx, 0x802DFDC8u)) return;
    ctx->fpr[1] = ctx->fpr[30];

label_802DFDCC:
    // 802DFDCC: bl      0x8025EB54
    {
            ctx->lr = 0x802DFDD0u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_802DFDD0:
    ctx->downcount -= 3;
    // 802DFDD0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFDD4:
    // 802DFDD4: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_802DFDD8:
    // 802DFDD8: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFDDCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFDDC:
    ctx->pc = 0x802DFDDCu;
    ctx->downcount -= 2;
    // 802DFDDC: lfs     f1, -12600(r2)
    if (!ppc_fp_available_inline(ctx, 0x802DFDDCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12600);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802DFDE0:
    // 802DFDE0: bl      0x8025EBE8
    {
            ctx->lr = 0x802DFDE4u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802DFDE4:
    ctx->downcount -= 5;
    // 802DFDE4: addi    r16, r16, 1
    ctx->gpr[16] = ctx->gpr[16] + (u32)(s32)(1);

label_802DFDE8:
    // 802DFDE8: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_802DFDEC:
    // 802DFDEC: cmpwi   r16, 4
    {
        s32 val_a = (s32)(ctx->gpr[16]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFDF0:
    // 802DFDF0: addi    r29, r29, 28
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(28);

label_802DFDF4:
    // 802DFDF4: bc    12, 0, 0x802DFB80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFB80u;
                return;
            }
            goto label_802DFB80;
        }
    }

label_802DFDF8:
    ctx->pc = 0x802DFDF8u;
    ctx->downcount -= 6;
    // 802DFDF8: addi    r11, r1, 160
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(160);

label_802DFDFC:
    ctx->pc = 0x802DFDFCu;
    // 802DFDFC: psq_l   f31, 184(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802DFDFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(184);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x802DFDFCu);
        if (ctx->exception) return;
    }

label_802DFE00:
    ctx->pc = 0x802DFE00u;
    // 802DFE00: lfd     f31, 176(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DFE00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(176);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802DFE04:
    ctx->pc = 0x802DFE04u;
    // 802DFE04: psq_l   f30, 168(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802DFE04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        ppc_psq_load_inline(ctx, 30u, ea, false, 0u, false, 0x802DFE04u);
        if (ctx->exception) return;
    }

label_802DFE08:
    ctx->pc = 0x802DFE08u;
    // 802DFE08: lfd     f30, 160(r1)
    if (!ppc_fp_available_inline(ctx, 0x802DFE08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(160);
        ctx->fpr[30] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802DFE0C:
    ctx->pc = 0x802DFE0Cu;
    // 802DFE0C: bl      0x80007870
    {
            ctx->lr = 0x802DFE10u;
            ctx->pc = 0x80007870u;
            return;
    }

label_802DFE10:
    ctx->pc = 0x802DFE10u;
    ctx->downcount -= 5;
    // 802DFE10: lwz     r0, 196(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(196);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFE14:
    ctx->pc = 0x802DFE14u;
    // 802DFE14: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DFE18:
    ctx->pc = 0x802DFE18u;
    // 802DFE18: addi    r1, r1, 192
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(192);

label_802DFE1C:
    ctx->pc = 0x802DFE1Cu;
    // 802DFE1C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFE20:
    ctx->pc = 0x802DFE20u;
    ctx->downcount -= 4;
    // 802DFE20: lbz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFE24:
    ctx->pc = 0x802DFE24u;
    // 802DFE24: lwz     r9, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_802DFE28:
    ctx->pc = 0x802DFE28u;
    // 802DFE28: cmpwi   r0, 0
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

label_802DFE2C:
    ctx->pc = 0x802DFE2Cu;
    // 802DFE2C: bc    12, 2, 0x802DFE5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802DFE5C;
        }
    }

label_802DFE30:
    ctx->pc = 0x802DFE30u;
    ctx->downcount -= 6;
    // 802DFE30: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DFE34:
    ctx->pc = 0x802DFE34u;
    // 802DFE34: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802DFE38:
    ctx->pc = 0x802DFE38u;
    // 802DFE38: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_802DFE3C:
    ctx->pc = 0x802DFE3Cu;
    // 802DFE3C: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFE40:
    ctx->pc = 0x802DFE40u;
    // 802DFE40: bclr  4, 1
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFE44:
    loop_802DFE44(ctx);
    if (ctx->pc == 0x802DFE58u) goto label_802DFE58;
    return;
label_802DFE48:
    // 802DFE48: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802DFE4C:
    ctx->pc = 0x802DFE4Cu;
    // 802DFE4C: stw     r6, 276(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802DFE50:
    // 802DFE50: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_802DFE54:
    // 802DFE54: bc    16, 0, 0x802DFE44
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFE44u;
                return;
            }
            goto label_802DFE44;
        }
    }

label_802DFE58:
    ctx->pc = 0x802DFE58u;
    ctx->downcount -= 1;
    // 802DFE58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFE5C:
    ctx->pc = 0x802DFE5Cu;
    ctx->downcount -= 8;
    // 802DFE5C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802DFE60:
    ctx->pc = 0x802DFE60u;
    // 802DFE60: li      r10, 0
    ctx->gpr[10] = (u32)(s32)(0);

label_802DFE64:
    ctx->pc = 0x802DFE64u;
    // 802DFE64: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DFE68:
    ctx->pc = 0x802DFE68u;
    // 802DFE68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DFE6C:
    ctx->pc = 0x802DFE6Cu;
    // 802DFE6C: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_802DFE70:
    ctx->pc = 0x802DFE70u;
    // 802DFE70: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFE74:
    ctx->pc = 0x802DFE74u;
    // 802DFE74: bc    4, 1, 0x802DFEA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFEA4;
        }
    }

label_802DFE78:
    ctx->downcount -= 4;
    // 802DFE78: add   r7, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802DFE7C:
    ctx->pc = 0x802DFE7Cu;
    // 802DFE7C: lwz     r0, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFE80:
    // 802DFE80: cmpwi   r0, 0
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

label_802DFE84:
    // 802DFE84: bc    4, 2, 0x802DFE98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFE98;
        }
    }

label_802DFE88:
    ctx->downcount -= 4;
    // 802DFE88: add   r7, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802DFE8C:
    // 802DFE8C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802DFE90:
    ctx->pc = 0x802DFE90u;
    // 802DFE90: stw     r10, 276(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_802DFE94:
    // 802DFE94: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_802DFE98:
    ctx->downcount -= 3;
    // 802DFE98: addi    r5, r5, 28
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28);

label_802DFE9C:
    // 802DFE9C: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_802DFEA0:
    // 802DFEA0: bc    16, 0, 0x802DFE78
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFE78u;
                return;
            }
            goto label_802DFE78;
        }
    }

label_802DFEA4:
    ctx->pc = 0x802DFEA4u;
    ctx->downcount -= 8;
    // 802DFEA4: stw     r8, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802DFEA8:
    ctx->pc = 0x802DFEA8u;
    // 802DFEA8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802DFEAC:
    ctx->pc = 0x802DFEACu;
    // 802DFEAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DFEB0:
    ctx->pc = 0x802DFEB0u;
    // 802DFEB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802DFEB4:
    ctx->pc = 0x802DFEB4u;
    // 802DFEB4: mtctr    r9
    ctx->ctr = ctx->gpr[9];

label_802DFEB8:
    ctx->pc = 0x802DFEB8u;
    // 802DFEB8: cmpwi   r9, 0
    {
        s32 val_a = (s32)(ctx->gpr[9]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFEBC:
    ctx->pc = 0x802DFEBCu;
    // 802DFEBC: bc    4, 1, 0x802DFEEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFEEC;
        }
    }

label_802DFEC0:
    ctx->downcount -= 4;
    // 802DFEC0: add   r7, r4, r5
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802DFEC4:
    ctx->pc = 0x802DFEC4u;
    // 802DFEC4: lwz     r0, 40(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFEC8:
    // 802DFEC8: cmpwi   r0, 1
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

label_802DFECC:
    // 802DFECC: bc    4, 2, 0x802DFEE0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFEE0;
        }
    }

label_802DFED0:
    ctx->downcount -= 4;
    // 802DFED0: add   r7, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_802DFED4:
    // 802DFED4: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802DFED8:
    ctx->pc = 0x802DFED8u;
    // 802DFED8: stw     r10, 276(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[10]);
    }

label_802DFEDC:
    // 802DFEDC: addi    r10, r10, 1
    ctx->gpr[10] = ctx->gpr[10] + (u32)(s32)(1);

label_802DFEE0:
    ctx->downcount -= 3;
    // 802DFEE0: addi    r5, r5, 28
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(28);

label_802DFEE4:
    // 802DFEE4: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_802DFEE8:
    // 802DFEE8: bc    16, 0, 0x802DFEC0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFEC0u;
                return;
            }
            goto label_802DFEC0;
        }
    }

label_802DFEEC:
    ctx->pc = 0x802DFEECu;
    ctx->downcount -= 2;
    // 802DFEEC: stw     r8, 296(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(296);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802DFEF0:
    ctx->pc = 0x802DFEF0u;
    // 802DFEF0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFEF4:
    ctx->pc = 0x802DFEF4u;
    ctx->downcount -= 18;
    // 802DFEF4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DFEF8:
    ctx->pc = 0x802DFEF8u;
    // 802DFEF8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DFEFC:
    ctx->pc = 0x802DFEFCu;
    // 802DFEFC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DFF00:
    ctx->pc = 0x802DFF00u;
    // 802DFF00: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802DFF04:
    ctx->pc = 0x802DFF04u;
    // 802DFF04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DFF08:
    ctx->pc = 0x802DFF08u;
    // 802DFF08: lbz     r0, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802DFF0C:
    ctx->pc = 0x802DFF0Cu;
    // 802DFF0C: cmpwi   r0, 0
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

label_802DFF10:
    ctx->pc = 0x802DFF10u;
    // 802DFF10: bc    4, 2, 0x802DFF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFF84;
        }
    }

label_802DFF14:
    ctx->pc = 0x802DFF14u;
    ctx->downcount -= 51;
    // 802DFF14: lhz     r6, 334(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(334);
        ctx->gpr[6] = mem_read16(ctx, ea);
    }

label_802DFF18:
    ctx->pc = 0x802DFF18u;
    // 802DFF18: lwz     r4, 116(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(116);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFF1C:
    ctx->pc = 0x802DFF1Cu;
    // 802DFF1C: addi    r5, r6, -1
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(-1);

label_802DFF20:
    ctx->pc = 0x802DFF20u;
    // 802DFF20: divw   r0, r4, r6
    {
        s32 dividend = (s32)ctx->gpr[4];
        s32 divisor = (s32)ctx->gpr[6];
        bool ov = divisor == 0 || ((u32)dividend == 0x80000000u && divisor == -1);
        ctx->gpr[0] = ov ? ((dividend < 0) ? 0xFFFFFFFFu : 0u) : (u32)(dividend / divisor);
    }

label_802DFF24:
    ctx->pc = 0x802DFF24u;
    // 802DFF24: mullw   r0, r0, r6
    {
        s64 product = (s64)(s32)ctx->gpr[0] * (s64)(s32)ctx->gpr[6];
        ctx->gpr[0] = (u32)product;
    }

label_802DFF28:
    ctx->pc = 0x802DFF28u;
    // 802DFF28: subf   r0, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802DFF2C:
    ctx->pc = 0x802DFF2Cu;
    // 802DFF2C: cmpw    r5, r0
    {
        s32 val_a = (s32)(ctx->gpr[5]);
        s32 val_b = (s32)(ctx->gpr[0]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802DFF30:
    ctx->pc = 0x802DFF30u;
    // 802DFF30: bc    4, 2, 0x802DFF84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802DFF84;
        }
    }

label_802DFF34:
    ctx->pc = 0x802DFF34u;
    ctx->downcount -= 4;
    // 802DFF34: lwz     r4, 452(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFF38:
    ctx->pc = 0x802DFF38u;
    // 802DFF38: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DFF3C:
    ctx->pc = 0x802DFF3Cu;
    // 802DFF3C: addi    r4, r4, 24
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(24);

label_802DFF40:
    ctx->pc = 0x802DFF40u;
    // 802DFF40: bl      0x8026FEDC
    {
            ctx->lr = 0x802DFF44u;
            ctx->pc = 0x8026FEDCu;
            return;
    }

label_802DFF44:
    ctx->pc = 0x802DFF44u;
    ctx->downcount -= 12;
    // 802DFF44: lwz     r4, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802DFF48:
    ctx->pc = 0x802DFF48u;
    // 802DFF48: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFF4C:
    ctx->pc = 0x802DFF4Cu;
    // 802DFF4C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802DFF50:
    ctx->pc = 0x802DFF50u;
    // 802DFF50: addi    r0, r4, 1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(1);

label_802DFF54:
    ctx->pc = 0x802DFF54u;
    // 802DFF54: rlwinm r4, r0, 1, 31, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802DFF58:
    ctx->pc = 0x802DFF58u;
    // 802DFF58: rlwinm r0, r0, 0, 31, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x00000001u;
    }

label_802DFF5C:
    ctx->pc = 0x802DFF5Cu;
    // 802DFF5C: xor   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] ^ ctx->gpr[4];
    }

label_802DFF60:
    ctx->pc = 0x802DFF60u;
    // 802DFF60: subf   r4, r4, r0
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[4] = res;
    }

label_802DFF64:
    ctx->pc = 0x802DFF64u;
    // 802DFF64: stw     r4, 452(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802DFF68:
    ctx->pc = 0x802DFF68u;
    // 802DFF68: addi    r31, r4, 24
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(24);

label_802DFF6C:
    ctx->pc = 0x802DFF6Cu;
    // 802DFF6C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802DFF70:
    ctx->pc = 0x802DFF70u;
    // 802DFF70: bl      0x8026FEF0
    {
            ctx->lr = 0x802DFF74u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802DFF74:
    ctx->pc = 0x802DFF74u;
    ctx->downcount -= 3;
    // 802DFF74: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802DFF78:
    ctx->pc = 0x802DFF78u;
    // 802DFF78: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802DFF7C:
    ctx->pc = 0x802DFF7Cu;
    // 802DFF7C: bl      0x8026F6AC
    {
            ctx->lr = 0x802DFF80u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802DFF80:
    ctx->pc = 0x802DFF80u;
    ctx->downcount -= 1;
    // 802DFF80: bl      0x8025EC94
    {
            ctx->lr = 0x802DFF84u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_802DFF84:
    ctx->pc = 0x802DFF84u;
    ctx->downcount -= 16;
    // 802DFF84: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802DFF88:
    ctx->pc = 0x802DFF88u;
    // 802DFF88: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFF8C:
    ctx->pc = 0x802DFF8Cu;
    // 802DFF8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802DFF90:
    ctx->pc = 0x802DFF90u;
    // 802DFF90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802DFF94:
    ctx->pc = 0x802DFF94u;
    // 802DFF94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFF98:
    ctx->pc = 0x802DFF98u;
    ctx->downcount -= 1;
    // 802DFF98: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802DFF9C:
    ctx->pc = 0x802DFF9Cu;
    ctx->downcount -= 28;
    // 802DFF9C: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802DFFA0:
    ctx->pc = 0x802DFFA0u;
    // 802DFFA0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802DFFA4:
    // 802DFFA4: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802DFFA8:
    // 802DFFA8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802DFFAC:
    ctx->pc = 0x802DFFACu;
    // 802DFFAC: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802DFFB0:
    // 802DFFB0: addi    r4, r4, 7792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(7792);

label_802DFFB4:
    // 802DFFB4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802DFFB8:
    // 802DFFB8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802DFFBC:
    ctx->pc = 0x802DFFBCu;
    // 802DFFBC: stmw     r24, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802DFFC0:
    // 802DFFC0: addi    r30, r5, 9336
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(9336);

label_802DFFC4:
    // 802DFFC4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802DFFC8:
    // 802DFFC8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802DFFCC:
    ctx->pc = 0x802DFFCCu;
    // 802DFFCC: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802DFFD0:
    // 802DFFD0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802DFFD4:
    // 802DFFD4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_802DFFD8:
    ctx->pc = 0x802DFFD8u;
    // 802DFFD8: lwzx    r5, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802DFFDC:
    // 802DFFDC: addi    r4, r30, 353
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(353);

label_802DFFE0:
    // 802DFFE0: bl      0x802703A8
    {
            ctx->lr = 0x802DFFE4u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_802DFFE4:
    ctx->downcount -= 5;
    // 802DFFE4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802DFFE8:
    // 802DFFE8: lis     r27, -32660
    ctx->gpr[27] = ((u32)(s32)(-32660) << 16);

label_802DFFEC:
    // 802DFFEC: or   r28, r26, r26
    {
        ctx->gpr[28] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802DFFF0:
    // 802DFFF0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802DFFF4:
    // 802DFFF4: addi    r27, r27, 7728
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(7728);

label_802DFFF8:
    ctx->pc = 0x802DFFF8u;
    ctx->downcount -= 5;
    // 802DFFF8: stb     r28, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[28]);
    }

label_802DFFFC:
    // 802DFFFC: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0000:
    ctx->pc = 0x802E0000u;
    // 802E0000: lwz     r4, -28200(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0004:
    // 802E0004: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802E0008:
    // 802E0008: bl      0x8000E7F4
    {
            ctx->lr = 0x802E000Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802E000C:
    ctx->pc = 0x802E000Cu;
    ctx->downcount -= 4;
    // 802E000C: lwzx    r4, r27, r29
    {
        u32 ea = ctx->gpr[27] + ctx->gpr[29];
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0010:
    // 802E0010: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0014:
    // 802E0014: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802E0018:
    // 802E0018: bl      0x8000E864
    {
            ctx->lr = 0x802E001Cu;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802E001C:
    ctx->downcount -= 6;
    // 802E001C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802E0020:
    // 802E0020: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0024:
    // 802E0024: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0028:
    // 802E0028: addi    r6, r30, 368
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(368);

label_802E002C:
    // 802E002C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E0030:
    // 802E0030: bl      0x8027035C
    {
            ctx->lr = 0x802E0034u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E0034:
    ctx->downcount -= 4;
    // 802E0034: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E0038:
    // 802E0038: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802E003C:
    // 802E003C: cmpwi   r26, 4
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

label_802E0040:
    // 802E0040: bc    12, 0, 0x802DFFF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFFF8u;
                return;
            }
            goto label_802DFFF8;
        }
    }

label_802E0044:
    ctx->downcount -= 7;
    // 802E0044: lis     r28, -32660
    ctx->gpr[28] = ((u32)(s32)(-32660) << 16);

label_802E0048:
    // 802E0048: lis     r27, -32665
    ctx->gpr[27] = ((u32)(s32)(-32665) << 16);

label_802E004C:
    // 802E004C: addi    r28, r28, 7728
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7728);

label_802E0050:
    // 802E0050: li      r26, 4
    ctx->gpr[26] = (u32)(s32)(4);

label_802E0054:
    // 802E0054: addi    r27, r27, 9336
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(9336);

label_802E0058:
    // 802E0058: li      r29, 16
    ctx->gpr[29] = (u32)(s32)(16);

label_802E005C:
    // 802E005C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0060:
    ctx->pc = 0x802E0060u;
    ctx->downcount -= 5;
    // 802E0060: stb     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_802E0064:
    // 802E0064: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0068:
    ctx->pc = 0x802E0068u;
    // 802E0068: lwz     r4, -28196(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E006C:
    // 802E006C: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802E0070:
    // 802E0070: bl      0x8000E7F4
    {
            ctx->lr = 0x802E0074u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802E0074:
    ctx->downcount -= 5;
    // 802E0074: add   r4, r28, r29
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E0078:
    // 802E0078: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802E007C:
    ctx->pc = 0x802E007Cu;
    // 802E007C: lwz     r4, -16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(-16);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0080:
    // 802E0080: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802E0084:
    // 802E0084: bl      0x8000E864
    {
            ctx->lr = 0x802E0088u;
            ctx->pc = 0x8000E864u;
            return;
    }

label_802E0088:
    ctx->downcount -= 6;
    // 802E0088: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802E008C:
    // 802E008C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0090:
    // 802E0090: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0094:
    // 802E0094: addi    r6, r27, 368
    ctx->gpr[6] = ctx->gpr[27] + (u32)(s32)(368);

label_802E0098:
    // 802E0098: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E009C:
    // 802E009C: bl      0x8027035C
    {
            ctx->lr = 0x802E00A0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E00A0:
    ctx->downcount -= 4;
    // 802E00A0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E00A4:
    // 802E00A4: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802E00A8:
    // 802E00A8: cmpwi   r26, 8
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(8);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802E00AC:
    // 802E00AC: bc    12, 0, 0x802E0060
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0060u;
                return;
            }
            goto label_802E0060;
        }
    }

label_802E00B0:
    ctx->downcount -= 6;
    // 802E00B0: lis     r27, -32665
    ctx->gpr[27] = ((u32)(s32)(-32665) << 16);

label_802E00B4:
    // 802E00B4: lis     r28, -32660
    ctx->gpr[28] = ((u32)(s32)(-32660) << 16);

label_802E00B8:
    // 802E00B8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_802E00BC:
    // 802E00BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E00C0:
    // 802E00C0: addi    r27, r27, 9336
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(9336);

label_802E00C4:
    // 802E00C4: addi    r28, r28, 7776
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(7776);

label_802E00C8:
    ctx->downcount -= 6;
    // 802E00C8: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E00CC:
    // 802E00CC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E00D0:
    // 802E00D0: addi    r5, r27, 377
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(377);

label_802E00D4:
    // 802E00D4: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802E00D8:
    // 802E00D8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E00DC:
    // 802E00DC: bl      0x8000D074
    {
            ctx->lr = 0x802E00E0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802E00E0:
    ctx->downcount -= 3;
    // 802E00E0: addi    r26, r30, 8
    ctx->gpr[26] = ctx->gpr[30] + (u32)(s32)(8);

label_802E00E4:
    // 802E00E4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802E00E8:
    // 802E00E8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E00EC:
    ctx->pc = 0x802E00ECu;
    ctx->downcount -= 6;
    // 802E00EC: lwzx    r6, r28, r29
    {
        u32 ea = ctx->gpr[28] + ctx->gpr[29];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802E00F0:
    // 802E00F0: addi    r3, r1, 72
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(72);

label_802E00F4:
    // 802E00F4: addi    r5, r27, 390
    ctx->gpr[5] = ctx->gpr[27] + (u32)(s32)(390);

label_802E00F8:
    // 802E00F8: li      r4, 64
    ctx->gpr[4] = (u32)(s32)(64);

label_802E00FC:
    // 802E00FC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E0100:
    // 802E0100: bl      0x8000D074
    {
            ctx->lr = 0x802E0104u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802E0104:
    ctx->downcount -= 6;
    // 802E0104: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0108:
    // 802E0108: add   r4, r24, r26
    {
        u32 a = ctx->gpr[24];
        u32 b = ctx->gpr[26];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E010C:
    // 802E010C: addi    r5, r1, 72
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(72);

label_802E0110:
    // 802E0110: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0114:
    // 802E0114: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E0118:
    // 802E0118: bl      0x8027035C
    {
            ctx->lr = 0x802E011Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E011C:
    ctx->downcount -= 4;
    // 802E011C: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_802E0120:
    // 802E0120: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802E0124:
    // 802E0124: cmpwi   r24, 4
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

label_802E0128:
    // 802E0128: bc    12, 0, 0x802E00EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E00ECu;
                return;
            }
            goto label_802E00EC;
        }
    }

label_802E012C:
    ctx->downcount -= 4;
    // 802E012C: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_802E0130:
    // 802E0130: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E0134:
    // 802E0134: cmpwi   r25, 4
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

label_802E0138:
    // 802E0138: bc    12, 0, 0x802E00C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E00C8u;
                return;
            }
            goto label_802E00C8;
        }
    }

label_802E013C:
    ctx->downcount -= 8;
    // 802E013C: lis     r29, -32665
    ctx->gpr[29] = ((u32)(s32)(-32665) << 16);

label_802E0140:
    // 802E0140: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0144:
    // 802E0144: addi    r29, r29, 9336
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(9336);

label_802E0148:
    // 802E0148: li      r4, 24
    ctx->gpr[4] = (u32)(s32)(24);

label_802E014C:
    // 802E014C: addi    r5, r29, 399
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(399);

label_802E0150:
    // 802E0150: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E0154:
    // 802E0154: addi    r6, r29, 415
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(415);

label_802E0158:
    // 802E0158: bl      0x8027035C
    {
            ctx->lr = 0x802E015Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E015C:
    ctx->downcount -= 6;
    // 802E015C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0160:
    // 802E0160: addi    r5, r29, 427
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(427);

label_802E0164:
    // 802E0164: addi    r6, r29, 415
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(415);

label_802E0168:
    // 802E0168: li      r4, 25
    ctx->gpr[4] = (u32)(s32)(25);

label_802E016C:
    // 802E016C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E0170:
    // 802E0170: bl      0x8027035C
    {
            ctx->lr = 0x802E0174u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E0174:
    ctx->downcount -= 6;
    // 802E0174: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E0178:
    // 802E0178: addi    r5, r29, 443
    ctx->gpr[5] = ctx->gpr[29] + (u32)(s32)(443);

label_802E017C:
    // 802E017C: addi    r6, r29, 452
    ctx->gpr[6] = ctx->gpr[29] + (u32)(s32)(452);

label_802E0180:
    // 802E0180: li      r4, 26
    ctx->gpr[4] = (u32)(s32)(26);

label_802E0184:
    // 802E0184: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E0188:
    // 802E0188: bl      0x8027035C
    {
            ctx->lr = 0x802E018Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_802E018C:
    ctx->pc = 0x802E018Cu;
    ctx->downcount -= 3;
    // 802E018C: lwz     r26, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[26] = mem_read32(ctx, ea);
    }

label_802E0190:
    // 802E0190: cmpwi   r26, 0
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

label_802E0194:
    // 802E0194: bc    12, 2, 0x802E01E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E01E8;
        }
    }

label_802E0198:
    ctx->downcount -= 3;
    // 802E0198: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E019C:
    // 802E019C: addi    r4, r29, 466
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(466);

label_802E01A0:
    // 802E01A0: bl      0x8026F970
    {
            ctx->lr = 0x802E01A4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E01A4:
    ctx->downcount -= 13;
    // 802E01A4: addi    r0, r26, -1
    ctx->gpr[0] = ctx->gpr[26] + (u32)(s32)(-1);

label_802E01A8:
    ctx->pc = 0x802E01A8u;
    // 802E01A8: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_802E01AC:
    // 802E01AC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802E01B0:
    // 802E01B0: addi    r4, r29, 479
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(479);

label_802E01B4:
    // 802E01B4: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802E01B8:
    // 802E01B8: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802E01BC:
    ctx->pc = 0x802E01BCu;
    // 802E01BC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E01C0:
    // 802E01C0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E01C4:
    ctx->pc = 0x802E01C4u;
    // 802E01C4: lwz     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E01C8:
    // 802E01C8: addi    r0, r5, -2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-2);

label_802E01CC:
    // 802E01CC: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802E01D0:
    // 802E01D0: rlwinm r27, r0, 27, 5, 31
    {
        ctx->gpr[27] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802E01D4:
    // 802E01D4: bl      0x8026F970
    {
            ctx->lr = 0x802E01D8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E01D8:
    ctx->pc = 0x802E01D8u;
    ctx->downcount -= 4;
    // 802E01D8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E01DC:
    // 802E01DC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802E01E0:
    // 802E01E0: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_802E01E4:
    ctx->pc = 0x802E01E4u;
    // 802E01E4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E01E8:
    ctx->pc = 0x802E01E8u;
    ctx->downcount -= 16;
    // 802E01E8: lmw     r24, 144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(144);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E01EC:
    ctx->pc = 0x802E01ECu;
    // 802E01EC: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E01F0:
    ctx->pc = 0x802E01F0u;
    // 802E01F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E01F4:
    // 802E01F4: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_802E01F8:
    ctx->pc = 0x802E01F8u;
    // 802E01F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E01FC:
    ctx->pc = 0x802E01FCu;
    ctx->downcount -= 19;
    // 802E01FC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0200:
    // 802E0200: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_802E0204:
    ctx->pc = 0x802E0204u;
    // 802E0204: stw     r5, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E0208:
    // 802E0208: addi    r5, r4, 20
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20);

label_802E020C:
    // 802E020C: addi    r6, r3, 336
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(336);

label_802E0210:
    ctx->pc = 0x802E0210u;
    // 802E0210: lbz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_802E0214:
    ctx->pc = 0x802E0214u;
    // 802E0214: stb     r7, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_802E0218:
    ctx->pc = 0x802E0218u;
    // 802E0218: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802E021C:
    ctx->pc = 0x802E021Cu;
    // 802E021C: stw     r7, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E0220:
    ctx->pc = 0x802E0220u;
    // 802E0220: lwz     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802E0224:
    ctx->pc = 0x802E0224u;
    // 802E0224: stw     r7, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E0228:
    ctx->pc = 0x802E0228u;
    // 802E0228: lbz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_802E022C:
    ctx->pc = 0x802E022Cu;
    // 802E022C: stb     r7, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_802E0230:
    ctx->pc = 0x802E0230u;
    // 802E0230: lhz     r7, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_802E0234:
    ctx->pc = 0x802E0234u;
    // 802E0234: sth     r7, 334(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(334);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_802E0238:
    ctx->pc = 0x802E0238u;
    // 802E0238: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E023C:
    ctx->pc = 0x802E023Cu;
    // 802E023C: stw     r4, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E0240:
    ctx->pc = 0x802E0240u;
    // 802E0240: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802E0244:
    loop_802E0244(ctx);
    if (ctx->pc == 0x802E0258u) goto label_802E0258;
    return;
label_802E0248:
    ctx->pc = 0x802E0248u;
    // 802E0248: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_802E024C:
    ctx->pc = 0x802E024Cu;
    // 802E024C: stw     r4, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E0250:
    ctx->pc = 0x802E0250u;
    // 802E0250: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_802E0254:
    // 802E0254: bc    16, 0, 0x802E0244
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0244u;
                return;
            }
            goto label_802E0244;
        }
    }

label_802E0258:
    ctx->pc = 0x802E0258u;
    ctx->downcount -= 5;
    // 802E0258: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E025C:
    ctx->pc = 0x802E025Cu;
    // 802E025C: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0260:
    ctx->pc = 0x802E0260u;
    // 802E0260: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0264:
    ctx->pc = 0x802E0264u;
    // 802E0264: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_802E0268:
    ctx->pc = 0x802E0268u;
    ctx->downcount -= 5;
    // 802E0268: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E026C:
    ctx->pc = 0x802E026Cu;
    // 802E026C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0270:
    ctx->pc = 0x802E0270u;
    // 802E0270: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0274:
    // 802E0274: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0278:
    // 802E0278: bl      0x8000785C
    {
            ctx->lr = 0x802E027Cu;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802E027C:
    ctx->pc = 0x802E027Cu;
    ctx->downcount -= 6;
    // 802E027C: lwz     r5, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0280:
    // 802E0280: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0284:
    // 802E0284: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E0288:
    // 802E0288: addi    r4, r5, -1
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1);

label_802E028C:
    // 802E028C: addi    r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3);

label_802E0290:
    // 802E0290: bl      0x80270194
    {
            ctx->lr = 0x802E0294u;
            ctx->pc = 0x80270194u;
            return;
    }

label_802E0294:
    ctx->downcount -= 2;
    // 802E0294: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E0298:
    // 802E0298: bl      0x80371554
    {
            ctx->lr = 0x802E029Cu;
            ctx->pc = 0x80371554u;
            return;
    }

label_802E029C:
    ctx->pc = 0x802E029Cu;
    ctx->downcount -= 7;
    // 802E029C: lwz     r4, 328(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E02A0:
    // 802E02A0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802E02A4:
    ctx->pc = 0x802E02A4u;
    // 802E02A4: stw     r4, 452(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(452);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E02A8:
    // 802E02A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802E02AC:
    // 802E02AC: addi    r30, r4, 24
    ctx->gpr[30] = ctx->gpr[4] + (u32)(s32)(24);

label_802E02B0:
    // 802E02B0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E02B4:
    // 802E02B4: bl      0x8026FEF0
    {
            ctx->lr = 0x802E02B8u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_802E02B8:
    ctx->downcount -= 3;
    // 802E02B8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E02BC:
    // 802E02BC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802E02C0:
    // 802E02C0: bl      0x8026F6AC
    {
            ctx->lr = 0x802E02C4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802E02C4:
    ctx->downcount -= 1;
    // 802E02C4: bl      0x8025EBF0
    {
            ctx->lr = 0x802E02C8u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_802E02C8:
    ctx->downcount -= 3;
    // 802E02C8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E02CC:
    // 802E02CC: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_802E02D0:
    // 802E02D0: bl      0x8026F6AC
    {
            ctx->lr = 0x802E02D4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_802E02D4:
    ctx->pc = 0x802E02D4u;
    ctx->downcount -= 2;
    // 802E02D4: lfs     f1, -12584(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E02D4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12584);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E02D8:
    // 802E02D8: bl      0x8025EBE8
    {
            ctx->lr = 0x802E02DCu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_802E02DC:
    ctx->downcount -= 4;
    // 802E02DC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E02E0:
    // 802E02E0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E02E4:
    // 802E02E4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E02E8:
    // 802E02E8: b       0x802E0314
    {
            goto label_802E0314;
    }

label_802E02EC:
    ctx->downcount -= 4;
    // 802E02EC: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E02F0:
    ctx->pc = 0x802E02F0u;
    // 802E02F0: lwz     r4, 340(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(340);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E02F4:
    // 802E02F4: cmpwi   r4, 0
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

label_802E02F8:
    // 802E02F8: bc    12, 2, 0x802E0308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0308;
        }
    }

label_802E02FC:
    ctx->downcount -= 3;
    // 802E02FC: add   r3, r28, r30
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0300:
    ctx->pc = 0x802E0300u;
    // 802E0300: lwz     r3, 300(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(300);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0304:
    // 802E0304: bl      0x8027CB94
    {
            ctx->lr = 0x802E0308u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_802E0308:
    ctx->downcount -= 3;
    // 802E0308: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802E030C:
    // 802E030C: addi    r31, r31, 28
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(28);

label_802E0310:
    // 802E0310: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E0314:
    ctx->pc = 0x802E0314u;
    ctx->downcount -= 3;
    // 802E0314: lwz     r0, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0318:
    // 802E0318: cmpw    r29, r0
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

label_802E031C:
    // 802E031C: bc    12, 0, 0x802E02EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E02ECu;
                return;
            }
            goto label_802E02EC;
        }
    }

label_802E0320:
    ctx->downcount -= 3;
    // 802E0320: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E0324:
    // 802E0324: addi    r4, r28, 316
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(316);

label_802E0328:
    // 802E0328: bl      0x802DFE20
    {
            ctx->lr = 0x802E032Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFE20u;
                return;
            }
            goto label_802DFE20;
    }

label_802E032C:
    ctx->downcount -= 3;
    // 802E032C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E0330:
    // 802E0330: addi    r4, r28, 316
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(316);

label_802E0334:
    // 802E0334: bl      0x802DFB14
    {
            ctx->lr = 0x802E0338u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFB14u;
                return;
            }
            goto label_802DFB14;
    }

label_802E0338:
    ctx->downcount -= 3;
    // 802E0338: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E033C:
    // 802E033C: addi    r4, r28, 316
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(316);

label_802E0340:
    // 802E0340: bl      0x802DF660
    {
            ctx->lr = 0x802E0344u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF660u;
                return;
            }
            goto label_802DF660;
    }

label_802E0344:
    ctx->downcount -= 3;
    // 802E0344: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E0348:
    // 802E0348: addi    r4, r28, 316
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(316);

label_802E034C:
    // 802E034C: bl      0x802DF7BC
    {
            ctx->lr = 0x802E0350u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DF7BCu;
                return;
            }
            goto label_802DF7BC;
    }

label_802E0350:
    ctx->downcount -= 2;
    // 802E0350: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0354:
    // 802E0354: bl      0x800078A8
    {
            ctx->lr = 0x802E0358u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_802E0358:
    ctx->pc = 0x802E0358u;
    ctx->downcount -= 5;
    // 802E0358: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E035C:
    ctx->pc = 0x802E035Cu;
    // 802E035C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0360:
    // 802E0360: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0364:
    ctx->pc = 0x802E0364u;
    // 802E0364: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0368:
    ctx->pc = 0x802E0368u;
    ctx->downcount -= 19;
    // 802E0368: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E036C:
    // 802E036C: li      r0, 14
    ctx->gpr[0] = (u32)(s32)(14);

label_802E0370:
    ctx->pc = 0x802E0370u;
    // 802E0370: stw     r5, 316(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E0374:
    // 802E0374: addi    r5, r4, 20
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(20);

label_802E0378:
    // 802E0378: addi    r6, r3, 336
    ctx->gpr[6] = ctx->gpr[3] + (u32)(s32)(336);

label_802E037C:
    ctx->pc = 0x802E037Cu;
    // 802E037C: lbz     r7, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_802E0380:
    ctx->pc = 0x802E0380u;
    // 802E0380: stb     r7, 320(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(320);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_802E0384:
    ctx->pc = 0x802E0384u;
    // 802E0384: lwz     r7, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802E0388:
    ctx->pc = 0x802E0388u;
    // 802E0388: stw     r7, 324(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E038C:
    ctx->pc = 0x802E038Cu;
    // 802E038C: lwz     r7, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_802E0390:
    ctx->pc = 0x802E0390u;
    // 802E0390: stw     r7, 328(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E0394:
    ctx->pc = 0x802E0394u;
    // 802E0394: lbz     r7, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_802E0398:
    ctx->pc = 0x802E0398u;
    // 802E0398: stb     r7, 332(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_802E039C:
    ctx->pc = 0x802E039Cu;
    // 802E039C: lhz     r7, 18(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(18);
        ctx->gpr[7] = mem_read16(ctx, ea);
    }

label_802E03A0:
    ctx->pc = 0x802E03A0u;
    // 802E03A0: sth     r7, 334(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(334);
        mem_write16(ctx, ea, (u16)ctx->gpr[7]);
    }

label_802E03A4:
    ctx->pc = 0x802E03A4u;
    // 802E03A4: lwz     r4, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E03A8:
    ctx->pc = 0x802E03A8u;
    // 802E03A8: stw     r4, 336(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E03AC:
    ctx->pc = 0x802E03ACu;
    // 802E03AC: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_802E03B0:
    loop_802E03B0(ctx);
    if (ctx->pc == 0x802E03C4u) goto label_802E03C4;
    return;
label_802E03B4:
    ctx->pc = 0x802E03B4u;
    // 802E03B4: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_802E03B8:
    ctx->pc = 0x802E03B8u;
    // 802E03B8: stw     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E03BC:
    ctx->pc = 0x802E03BCu;
    // 802E03BC: stwu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[6] = ea;
    }

label_802E03C0:
    // 802E03C0: bc    16, 0, 0x802E03B0
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E03B0u;
                return;
            }
            goto label_802E03B0;
        }
    }

label_802E03C4:
    ctx->pc = 0x802E03C4u;
    ctx->downcount -= 1;
    // 802E03C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E03C8:
    ctx->pc = 0x802E03C8u;
    ctx->downcount -= 18;
    // 802E03C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E03CC:
    ctx->pc = 0x802E03CCu;
    // 802E03CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E03D0:
    ctx->pc = 0x802E03D0u;
    // 802E03D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E03D4:
    ctx->pc = 0x802E03D4u;
    // 802E03D4: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E03D8:
    // 802E03D8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E03DC:
    // 802E03DC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E03E0:
    // 802E03E0: li      r4, 27
    ctx->gpr[4] = (u32)(s32)(27);

label_802E03E4:
    // 802E03E4: bl      0x8036A4F8
    {
            ctx->lr = 0x802E03E8u;
            ctx->pc = 0x8036A4F8u;
            return;
    }

label_802E03E8:
    ctx->downcount -= 21;
    // 802E03E8: lis     r8, -32660
    ctx->gpr[8] = ((u32)(s32)(-32660) << 16);

label_802E03EC:
    // 802E03EC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E03F0:
    // 802E03F0: addi    r8, r8, 7804
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(7804);

label_802E03F4:
    // 802E03F4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E03F8:
    // 802E03F8: addi    r7, r8, 8
    ctx->gpr[7] = ctx->gpr[8] + (u32)(s32)(8);

label_802E03FC:
    // 802E03FC: li      r3, 240
    ctx->gpr[3] = (u32)(s32)(240);

label_802E0400:
    // 802E0400: addi    r6, r8, 120
    ctx->gpr[6] = ctx->gpr[8] + (u32)(s32)(120);

label_802E0404:
    // 802E0404: addi    r5, r8, 136
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(136);

label_802E0408:
    // 802E0408: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_802E040C:
    ctx->pc = 0x802E040Cu;
    // 802E040C: stw     r8, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[8]);
    }

label_802E0410:
    // 802E0410: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0414:
    ctx->pc = 0x802E0414u;
    // 802E0414: stw     r7, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E0418:
    ctx->pc = 0x802E0418u;
    // 802E0418: stw     r6, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802E041C:
    ctx->pc = 0x802E041Cu;
    // 802E041C: stw     r5, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E0420:
    ctx->pc = 0x802E0420u;
    // 802E0420: stw     r4, 316(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(316);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E0424:
    ctx->pc = 0x802E0424u;
    // 802E0424: stb     r4, 320(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(320);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_802E0428:
    ctx->pc = 0x802E0428u;
    // 802E0428: stw     r31, 324(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(324);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E042C:
    ctx->pc = 0x802E042Cu;
    // 802E042C: stw     r31, 328(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(328);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E0430:
    ctx->pc = 0x802E0430u;
    // 802E0430: stb     r31, 332(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(332);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_802E0434:
    ctx->pc = 0x802E0434u;
    // 802E0434: sth     r3, 334(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(334);
        mem_write16(ctx, ea, (u16)ctx->gpr[3]);
    }

label_802E0438:
    ctx->pc = 0x802E0438u;
    // 802E0438: stw     r0, 336(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(336);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E043C:
    ctx->downcount -= 3;
    // 802E043C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0440:
    // 802E0440: addi    r3, r3, 340
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(340);

label_802E0444:
    // 802E0444: bl      0x802CD484
    {
            ctx->lr = 0x802E0448u;
            ctx->pc = 0x802CD484u;
            return;
    }

label_802E0448:
    ctx->downcount -= 4;
    // 802E0448: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E044C:
    // 802E044C: addi    r31, r31, 28
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(28);

label_802E0450:
    // 802E0450: cmpwi   r30, 4
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

label_802E0454:
    // 802E0454: bc    12, 0, 0x802E043C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E043Cu;
                return;
            }
            goto label_802E043C;
        }
    }

label_802E0458:
    ctx->downcount -= 6;
    // 802E0458: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E045C:
    // 802E045C: addi    r3, r28, 52
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(52);

label_802E0460:
    // 802E0460: addi    r4, r4, 9336
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9336);

label_802E0464:
    // 802E0464: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802E0468:
    // 802E0468: addi    r4, r4, 492
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(492);

label_802E046C:
    // 802E046C: bl      0x8000E7F4
    {
            ctx->lr = 0x802E0470u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802E0470:
    ctx->pc = 0x802E0470u;
    ctx->downcount -= 3;
    // 802E0470: stw     r29, 272(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802E0474:
    // 802E0474: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0478:
    // 802E0478: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E047C:
    ctx->downcount -= 4;
    // 802E047C: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E0480:
    // 802E0480: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802E0484:
    ctx->pc = 0x802E0484u;
    // 802E0484: stw     r30, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802E0488:
    // 802E0488: bl      0x8027CCC0
    {
            ctx->lr = 0x802E048Cu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_802E048C:
    ctx->downcount -= 6;
    // 802E048C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E0490:
    // 802E0490: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E0494:
    // 802E0494: cmpwi   r30, 4
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

label_802E0498:
    ctx->pc = 0x802E0498u;
    // 802E0498: stw     r3, 300(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E049C:
    // 802E049C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E04A0:
    // 802E04A0: bc    12, 0, 0x802E047C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E047Cu;
                return;
            }
            goto label_802E047C;
        }
    }

label_802E04A4:
    ctx->downcount -= 17;
    // 802E04A4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E04A8:
    ctx->pc = 0x802E04A8u;
    // 802E04A8: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E04AC:
    ctx->pc = 0x802E04ACu;
    // 802E04AC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E04B0:
    ctx->pc = 0x802E04B0u;
    // 802E04B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E04B4:
    // 802E04B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E04B8:
    ctx->pc = 0x802E04B8u;
    // 802E04B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E04BC:
    ctx->pc = 0x802E04BCu;
    ctx->downcount -= 18;
    // 802E04BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E04C0:
    ctx->pc = 0x802E04C0u;
    // 802E04C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E04C4:
    // 802E04C4: cmpwi   r3, 0
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

label_802E04C8:
    ctx->pc = 0x802E04C8u;
    // 802E04C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E04CC:
    ctx->pc = 0x802E04CCu;
    // 802E04CC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E04D0:
    // 802E04D0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E04D4:
    // 802E04D4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E04D8:
    // 802E04D8: bc    12, 2, 0x802E050C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E050C;
        }
    }

label_802E04DC:
    ctx->downcount -= 1;
    // 802E04DC: bc    12, 2, 0x802E04FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E04FC;
        }
    }

label_802E04E0:
    ctx->downcount -= 1;
    // 802E04E0: bc    12, 2, 0x802E04FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E04FC;
        }
    }

label_802E04E4:
    ctx->downcount -= 3;
    // 802E04E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E04E8:
    // 802E04E8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E04EC:
    // 802E04EC: bl      0x801F5C24
    {
            ctx->lr = 0x802E04F0u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802E04F0:
    ctx->downcount -= 3;
    // 802E04F0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E04F4:
    // 802E04F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E04F8:
    // 802E04F8: bl      0x801F9C70
    {
            ctx->lr = 0x802E04FCu;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802E04FC:
    ctx->downcount -= 2;
    // 802E04FC: cmpwi   r31, 0
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

label_802E0500:
    // 802E0500: bc    4, 1, 0x802E050C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E050C;
        }
    }

label_802E0504:
    ctx->downcount -= 2;
    // 802E0504: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0508:
    // 802E0508: bl      0x801C1C90
    {
            ctx->lr = 0x802E050Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E050C:
    ctx->downcount -= 17;
    // 802E050C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0510:
    ctx->pc = 0x802E0510u;
    // 802E0510: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0514:
    ctx->pc = 0x802E0514u;
    // 802E0514: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0518:
    ctx->pc = 0x802E0518u;
    // 802E0518: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E051C:
    // 802E051C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0520:
    ctx->pc = 0x802E0520u;
    // 802E0520: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0524:
    ctx->pc = 0x802E0524u;
    ctx->downcount -= 18;
    // 802E0524: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0528:
    ctx->pc = 0x802E0528u;
    // 802E0528: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E052C:
    // 802E052C: cmpwi   r3, 0
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

label_802E0530:
    ctx->pc = 0x802E0530u;
    // 802E0530: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0534:
    ctx->pc = 0x802E0534u;
    // 802E0534: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0538:
    // 802E0538: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E053C:
    // 802E053C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E0540:
    // 802E0540: bc    12, 2, 0x802E0560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0560;
        }
    }

label_802E0544:
    ctx->downcount -= 1;
    // 802E0544: bc    12, 2, 0x802E0550
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0550;
        }
    }

label_802E0548:
    ctx->downcount -= 2;
    // 802E0548: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E054C:
    // 802E054C: bl      0x801F9B68
    {
            ctx->lr = 0x802E0550u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_802E0550:
    ctx->downcount -= 2;
    // 802E0550: cmpwi   r31, 0
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

label_802E0554:
    // 802E0554: bc    4, 1, 0x802E0560
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0560;
        }
    }

label_802E0558:
    ctx->downcount -= 2;
    // 802E0558: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E055C:
    // 802E055C: bl      0x801C1C90
    {
            ctx->lr = 0x802E0560u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E0560:
    ctx->downcount -= 17;
    // 802E0560: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0564:
    ctx->pc = 0x802E0564u;
    // 802E0564: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0568:
    ctx->pc = 0x802E0568u;
    // 802E0568: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E056C:
    ctx->pc = 0x802E056Cu;
    // 802E056C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0570:
    // 802E0570: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0574:
    ctx->pc = 0x802E0574u;
    // 802E0574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0578:
    ctx->downcount -= 2;
    // 802E0578: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E057C:
    // 802E057C: b       0x802E0524
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0524u;
                return;
            }
            goto label_802E0524;
    }

label_802E0580:
    ctx->downcount -= 2;
    // 802E0580: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E0584:
    // 802E0584: b       0x802DFF98
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802DFF98u;
                return;
            }
            goto label_802DFF98;
    }

label_802E0588:
    ctx->downcount -= 2;
    // 802E0588: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E058C:
    // 802E058C: b       0x802E0524
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0524u;
                return;
            }
            goto label_802E0524;
    }

label_802E0590:
    ctx->pc = 0x802E0590u;
    ctx->downcount -= 25;
    // 802E0590: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0594:
    ctx->pc = 0x802E0594u;
    // 802E0594: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0598:
    ctx->pc = 0x802E0598u;
    // 802E0598: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E059C:
    ctx->pc = 0x802E059Cu;
    // 802E059C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E05A0:
    // 802E05A0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802E05A4:
    // 802E05A4: addi    r31, r31, 9848
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(9848);

label_802E05A8:
    // 802E05A8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E05AC:
    ctx->pc = 0x802E05ACu;
    // 802E05AC: lwz     r0, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E05B0:
    ctx->pc = 0x802E05B0u;
    // 802E05B0: lwz     r4, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E05B4:
    // 802E05B4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E05B8:
    // 802E05B8: rlwinm r0, r0, 1, 0, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0xFFFFFFFEu;
    }

label_802E05BC:
    // 802E05BC: add   r5, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E05C0:
    // 802E05C0: addi    r4, r31, 57
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(57);

label_802E05C4:
    // 802E05C4: addi    r30, r5, 50
    ctx->gpr[30] = ctx->gpr[5] + (u32)(s32)(50);

label_802E05C8:
    // 802E05C8: bl      0x8026F968
    {
            ctx->lr = 0x802E05CCu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E05CC:
    ctx->downcount -= 6;
    // 802E05CC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E05D0:
    // 802E05D0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E05D4:
    // 802E05D4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802E05D8:
    // 802E05D8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E05DC:
    // 802E05DC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E05E0:
    // 802E05E0: bl      0x8026F8C0
    {
            ctx->lr = 0x802E05E4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E05E4:
    ctx->downcount -= 3;
    // 802E05E4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802E05E8:
    // 802E05E8: addi    r4, r31, 67
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(67);

label_802E05EC:
    // 802E05EC: bl      0x8026F968
    {
            ctx->lr = 0x802E05F0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E05F0:
    ctx->downcount -= 6;
    // 802E05F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E05F4:
    // 802E05F4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E05F8:
    // 802E05F8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802E05FC:
    // 802E05FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E0600:
    // 802E0600: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E0604:
    // 802E0604: bl      0x8026F8C0
    {
            ctx->lr = 0x802E0608u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E0608:
    ctx->pc = 0x802E0608u;
    ctx->downcount -= 16;
    // 802E0608: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E060C:
    ctx->pc = 0x802E060Cu;
    // 802E060C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0610:
    ctx->pc = 0x802E0610u;
    // 802E0610: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0614:
    // 802E0614: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0618:
    ctx->pc = 0x802E0618u;
    // 802E0618: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E061C:
    ctx->pc = 0x802E061Cu;
    ctx->downcount -= 6;
    // 802E061C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0620:
    ctx->pc = 0x802E0620u;
    // 802E0620: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0624:
    // 802E0624: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802E0628:
    // 802E0628: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E062C:
    ctx->pc = 0x802E062Cu;
    // 802E062C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0630:
    // 802E0630: bl      0x8026F5F4
    {
            ctx->lr = 0x802E0634u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_802E0634:
    ctx->downcount -= 4;
    // 802E0634: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802E0638:
    // 802E0638: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_802E063C:
    // 802E063C: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_802E0640:
    // 802E0640: bl      0x802B735C
    {
            ctx->lr = 0x802E0644u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_802E0644:
    ctx->pc = 0x802E0644u;
    ctx->downcount -= 5;
    // 802E0644: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0648:
    ctx->pc = 0x802E0648u;
    // 802E0648: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E064C:
    // 802E064C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0650:
    ctx->pc = 0x802E0650u;
    // 802E0650: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0654:
    ctx->pc = 0x802E0654u;
    ctx->downcount -= 4;
    // 802E0654: lfs     f2, -12576(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E0654u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12576);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E0658:
    // 802E0658: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_802E065C:
    // 802E065C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E0660:
    // 802E0660: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_802E0664:
    ctx->downcount -= 1;
    // 802E0664: b       0x802E0590
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0590u;
                return;
            }
            goto label_802E0590;
    }

label_802E0668:
    ctx->pc = 0x802E0668u;
    ctx->downcount -= 2;
    // 802E0668: stw     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E066C:
    // 802E066C: b       0x802E0590
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0590u;
                return;
            }
            goto label_802E0590;
    }

label_802E0670:
    ctx->pc = 0x802E0670u;
    ctx->downcount -= 28;
    // 802E0670: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0674:
    ctx->pc = 0x802E0674u;
    // 802E0674: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0678:
    // 802E0678: lis     r7, -32665
    ctx->gpr[7] = ((u32)(s32)(-32665) << 16);

label_802E067C:
    // 802E067C: or   r9, r6, r6
    {
        ctx->gpr[9] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802E0680:
    ctx->pc = 0x802E0680u;
    // 802E0680: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0684:
    // 802E0684: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_802E0688:
    // 802E0688: addi    r7, r7, 9848
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9848);

label_802E068C:
    // 802E068C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802E0690:
    ctx->pc = 0x802E0690u;
    // 802E0690: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0694:
    // 802E0694: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E0698:
    // 802E0698: addi    r4, r13, -28176
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-28176);

label_802E069C:
    // 802E069C: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802E06A0:
    // 802E06A0: addi    r5, r7, 79
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(79);

label_802E06A4:
    // 802E06A4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E06A8:
    // 802E06A8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802E06AC:
    ctx->pc = 0x802E06ACu;
    // 802E06AC: lwzx    r6, r4, r0
    {
        u32 ea = ctx->gpr[4] + ctx->gpr[0];
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802E06B0:
    // 802E06B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E06B4:
    // 802E06B4: bl      0x8036B3A4
    {
            ctx->lr = 0x802E06B8u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_802E06B8:
    ctx->downcount -= 30;
    // 802E06B8: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802E06BC:
    // 802E06BC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E06C0:
    // 802E06C0: addi    r4, r4, 8096
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8096);

label_802E06C4:
    ctx->pc = 0x802E06C4u;
    // 802E06C4: stw     r4, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E06C8:
    // 802E06C8: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_802E06CC:
    // 802E06CC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E06D0:
    // 802E06D0: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_802E06D4:
    // 802E06D4: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_802E06D8:
    ctx->pc = 0x802E06D8u;
    // 802E06D8: stw     r6, 24(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802E06DC:
    ctx->pc = 0x802E06DCu;
    // 802E06DC: stw     r5, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E06E0:
    ctx->pc = 0x802E06E0u;
    // 802E06E0: stw     r4, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E06E4:
    ctx->pc = 0x802E06E4u;
    // 802E06E4: stw     r30, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802E06E8:
    ctx->pc = 0x802E06E8u;
    // 802E06E8: stw     r31, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E06EC:
    ctx->pc = 0x802E06ECu;
    // 802E06EC: stw     r0, 292(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E06F0:
    ctx->pc = 0x802E06F0u;
    // 802E06F0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E06F4:
    ctx->pc = 0x802E06F4u;
    // 802E06F4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E06F8:
    ctx->pc = 0x802E06F8u;
    // 802E06F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E06FC:
    // 802E06FC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0700:
    ctx->pc = 0x802E0700u;
    // 802E0700: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0704:
    ctx->pc = 0x802E0704u;
    ctx->downcount -= 18;
    // 802E0704: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0708:
    ctx->pc = 0x802E0708u;
    // 802E0708: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E070C:
    // 802E070C: cmpwi   r3, 0
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

label_802E0710:
    ctx->pc = 0x802E0710u;
    // 802E0710: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0714:
    ctx->pc = 0x802E0714u;
    // 802E0714: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0718:
    // 802E0718: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E071C:
    // 802E071C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E0720:
    // 802E0720: bc    12, 2, 0x802E0740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0740;
        }
    }

label_802E0724:
    ctx->downcount -= 1;
    // 802E0724: bc    12, 2, 0x802E0730
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0730;
        }
    }

label_802E0728:
    ctx->downcount -= 2;
    // 802E0728: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E072C:
    // 802E072C: bl      0x801F5A74
    {
            ctx->lr = 0x802E0730u;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_802E0730:
    ctx->downcount -= 2;
    // 802E0730: cmpwi   r31, 0
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

label_802E0734:
    // 802E0734: bc    4, 1, 0x802E0740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0740;
        }
    }

label_802E0738:
    ctx->downcount -= 2;
    // 802E0738: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E073C:
    // 802E073C: bl      0x801C1C90
    {
            ctx->lr = 0x802E0740u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E0740:
    ctx->downcount -= 17;
    // 802E0740: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0744:
    ctx->pc = 0x802E0744u;
    // 802E0744: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0748:
    ctx->pc = 0x802E0748u;
    // 802E0748: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E074C:
    ctx->pc = 0x802E074Cu;
    // 802E074C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0750:
    // 802E0750: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0754:
    ctx->pc = 0x802E0754u;
    // 802E0754: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0758:
    ctx->downcount -= 2;
    // 802E0758: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E075C:
    // 802E075C: b       0x802E0704
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0704u;
                return;
            }
            goto label_802E0704;
    }

label_802E0760:
    ctx->downcount -= 2;
    // 802E0760: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E0764:
    // 802E0764: b       0x802E061C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E061Cu;
                return;
            }
            goto label_802E061C;
    }

label_802E0768:
    ctx->downcount -= 2;
    // 802E0768: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E076C:
    // 802E076C: b       0x802E0654
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0654u;
                return;
            }
            goto label_802E0654;
    }

label_802E0770:
    ctx->downcount -= 2;
    // 802E0770: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E0774:
    // 802E0774: b       0x802E0704
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0704u;
                return;
            }
            goto label_802E0704;
    }

label_802E0778:
    ctx->pc = 0x802E0778u;
    ctx->downcount -= 21;
    // 802E0778: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E077C:
    ctx->pc = 0x802E077Cu;
    // 802E077C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0780:
    ctx->pc = 0x802E0780u;
    // 802E0780: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0784:
    ctx->pc = 0x802E0784u;
    // 802E0784: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0788:
    ctx->pc = 0x802E0788u;
    // 802E0788: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E078C:
    ctx->pc = 0x802E078Cu;
    // 802E078C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0790:
    ctx->pc = 0x802E0790u;
    // 802E0790: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0794:
    ctx->pc = 0x802E0794u;
    // 802E0794: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0798:
    ctx->pc = 0x802E0798u;
    // 802E0798: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E079C:
    ctx->pc = 0x802E079Cu;
    // 802E079C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E07A0u;
            ctx->pc = target;
            return;
        }
    }

label_802E07A0:
    ctx->pc = 0x802E07A0u;
    ctx->downcount -= 2;
    // 802E07A0: cmpwi   r3, 0
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

label_802E07A4:
    ctx->pc = 0x802E07A4u;
    // 802E07A4: bc    12, 2, 0x802E0878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0878;
        }
    }

label_802E07A8:
    ctx->pc = 0x802E07A8u;
    ctx->downcount -= 6;
    // 802E07A8: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E07AC:
    ctx->pc = 0x802E07ACu;
    // 802E07AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07B0:
    ctx->pc = 0x802E07B0u;
    // 802E07B0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07B4:
    ctx->pc = 0x802E07B4u;
    // 802E07B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E07B8:
    ctx->pc = 0x802E07B8u;
    // 802E07B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E07BCu;
            ctx->pc = target;
            return;
        }
    }

label_802E07BC:
    ctx->pc = 0x802E07BCu;
    ctx->downcount -= 2;
    // 802E07BC: cmpwi   r3, 0
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

label_802E07C0:
    ctx->pc = 0x802E07C0u;
    // 802E07C0: bc    12, 2, 0x802E0878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0878;
        }
    }

label_802E07C4:
    ctx->pc = 0x802E07C4u;
    ctx->downcount -= 6;
    // 802E07C4: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E07C8:
    ctx->pc = 0x802E07C8u;
    // 802E07C8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07CC:
    ctx->pc = 0x802E07CCu;
    // 802E07CC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07D0:
    ctx->pc = 0x802E07D0u;
    // 802E07D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E07D4:
    ctx->pc = 0x802E07D4u;
    // 802E07D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E07D8u;
            ctx->pc = target;
            return;
        }
    }

label_802E07D8:
    ctx->pc = 0x802E07D8u;
    ctx->downcount -= 2;
    // 802E07D8: cmpwi   r3, 0
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

label_802E07DC:
    ctx->pc = 0x802E07DCu;
    // 802E07DC: bc    12, 2, 0x802E0878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0878;
        }
    }

label_802E07E0:
    ctx->pc = 0x802E07E0u;
    ctx->downcount -= 6;
    // 802E07E0: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E07E4:
    ctx->pc = 0x802E07E4u;
    // 802E07E4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07E8:
    ctx->pc = 0x802E07E8u;
    // 802E07E8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E07EC:
    ctx->pc = 0x802E07ECu;
    // 802E07EC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E07F0:
    ctx->pc = 0x802E07F0u;
    // 802E07F0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E07F4u;
            ctx->pc = target;
            return;
        }
    }

label_802E07F4:
    ctx->pc = 0x802E07F4u;
    ctx->downcount -= 2;
    // 802E07F4: cmpwi   r3, 0
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

label_802E07F8:
    ctx->pc = 0x802E07F8u;
    // 802E07F8: bc    12, 2, 0x802E0878
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0878;
        }
    }

label_802E07FC:
    ctx->pc = 0x802E07FCu;
    ctx->downcount -= 2;
    // 802E07FC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0800:
    ctx->pc = 0x802E0800u;
    // 802E0800: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E0804:
    ctx->pc = 0x802E0804u;
    ctx->downcount -= 6;
    // 802E0804: lwz     r0, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0808:
    // 802E0808: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_802E080C:
    // 802E080C: add   r0, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0810:
    // 802E0810: add   r3, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0814:
    ctx->pc = 0x802E0814u;
    // 802E0814: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0818:
    // 802E0818: bl      0x8036B2DC
    {
            ctx->lr = 0x802E081Cu;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_802E081C:
    ctx->downcount -= 4;
    // 802E081C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E0820:
    // 802E0820: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E0824:
    // 802E0824: cmpwi   r30, 2
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

label_802E0828:
    // 802E0828: bc    12, 0, 0x802E0804
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0804u;
                return;
            }
            goto label_802E0804;
        }
    }

label_802E082C:
    ctx->pc = 0x802E082Cu;
    ctx->downcount -= 3;
    // 802E082C: lbz     r0, 216(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0830:
    ctx->pc = 0x802E0830u;
    // 802E0830: cmpwi   r0, 0
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

label_802E0834:
    ctx->pc = 0x802E0834u;
    // 802E0834: bc    12, 2, 0x802E0840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0840;
        }
    }

label_802E0838:
    ctx->pc = 0x802E0838u;
    ctx->downcount -= 2;
    // 802E0838: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E083C:
    ctx->pc = 0x802E083Cu;
    // 802E083C: bl      0x8036B2DC
    {
            ctx->lr = 0x802E0840u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_802E0840:
    ctx->pc = 0x802E0840u;
    ctx->downcount -= 2;
    // 802E0840: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0844:
    ctx->pc = 0x802E0844u;
    // 802E0844: bl      0x8026EEE8
    {
            ctx->lr = 0x802E0848u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_802E0848:
    ctx->pc = 0x802E0848u;
    ctx->downcount -= 3;
    // 802E0848: lbz     r0, 217(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(217);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E084C:
    ctx->pc = 0x802E084Cu;
    // 802E084C: cmpwi   r0, 0
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

label_802E0850:
    ctx->pc = 0x802E0850u;
    // 802E0850: bc    12, 2, 0x802E0864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0864;
        }
    }

label_802E0854:
    ctx->pc = 0x802E0854u;
    ctx->downcount -= 3;
    // 802E0854: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802E0858:
    ctx->pc = 0x802E0858u;
    // 802E0858: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E085C:
    ctx->pc = 0x802E085Cu;
    // 802E085C: bl      0x803457B8
    {
            ctx->lr = 0x802E0860u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0860:
    ctx->pc = 0x802E0860u;
    ctx->downcount -= 1;
    // 802E0860: b       0x802E0878
    {
            goto label_802E0878;
    }

label_802E0864:
    ctx->pc = 0x802E0864u;
    ctx->downcount -= 6;
    // 802E0864: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0868:
    ctx->pc = 0x802E0868u;
    // 802E0868: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E086C:
    ctx->pc = 0x802E086Cu;
    // 802E086C: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0870:
    ctx->pc = 0x802E0870u;
    // 802E0870: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0874:
    ctx->pc = 0x802E0874u;
    // 802E0874: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0878u;
            ctx->pc = target;
            return;
        }
    }

label_802E0878:
    ctx->pc = 0x802E0878u;
    ctx->downcount -= 6;
    // 802E0878: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E087C:
    ctx->pc = 0x802E087Cu;
    // 802E087C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E0880:
    ctx->pc = 0x802E0880u;
    // 802E0880: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E0884:
    ctx->pc = 0x802E0884u;
    // 802E0884: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E0888:
    ctx->pc = 0x802E0888u;
    // 802E0888: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E088C:
    ctx->pc = 0x802E088Cu;
    // 802E088C: bl      0x80370BD4
    {
            ctx->lr = 0x802E0890u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E0890:
    ctx->pc = 0x802E0890u;
    ctx->downcount -= 3;
    // 802E0890: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0894:
    ctx->pc = 0x802E0894u;
    // 802E0894: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0898:
    ctx->pc = 0x802E0898u;
    // 802E0898: bl      0x80263ABC
    {
            ctx->lr = 0x802E089Cu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E089C:
    ctx->pc = 0x802E089Cu;
    ctx->downcount -= 16;
    // 802E089C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E08A0:
    ctx->pc = 0x802E08A0u;
    // 802E08A0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E08A4:
    ctx->pc = 0x802E08A4u;
    // 802E08A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E08A8:
    ctx->pc = 0x802E08A8u;
    // 802E08A8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E08AC:
    ctx->pc = 0x802E08ACu;
    // 802E08AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E08B0:
    ctx->pc = 0x802E08B0u;
    ctx->downcount -= 11;
    // 802E08B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E08B4:
    ctx->pc = 0x802E08B4u;
    // 802E08B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E08B8:
    ctx->pc = 0x802E08B8u;
    // 802E08B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E08BC:
    ctx->pc = 0x802E08BCu;
    // 802E08BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E08C0:
    ctx->pc = 0x802E08C0u;
    // 802E08C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E08C4:
    ctx->pc = 0x802E08C4u;
    // 802E08C4: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E08C8:
    ctx->pc = 0x802E08C8u;
    // 802E08C8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08CC:
    ctx->pc = 0x802E08CCu;
    // 802E08CC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08D0:
    ctx->pc = 0x802E08D0u;
    // 802E08D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E08D4:
    ctx->pc = 0x802E08D4u;
    // 802E08D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E08D8u;
            ctx->pc = target;
            return;
        }
    }

label_802E08D8:
    ctx->pc = 0x802E08D8u;
    ctx->downcount -= 6;
    // 802E08D8: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E08DC:
    ctx->pc = 0x802E08DCu;
    // 802E08DC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08E0:
    ctx->pc = 0x802E08E0u;
    // 802E08E0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08E4:
    ctx->pc = 0x802E08E4u;
    // 802E08E4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E08E8:
    ctx->pc = 0x802E08E8u;
    // 802E08E8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E08ECu;
            ctx->pc = target;
            return;
        }
    }

label_802E08EC:
    ctx->pc = 0x802E08ECu;
    ctx->downcount -= 6;
    // 802E08EC: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E08F0:
    ctx->pc = 0x802E08F0u;
    // 802E08F0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08F4:
    ctx->pc = 0x802E08F4u;
    // 802E08F4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E08F8:
    ctx->pc = 0x802E08F8u;
    // 802E08F8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E08FC:
    ctx->pc = 0x802E08FCu;
    // 802E08FC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0900u;
            ctx->pc = target;
            return;
        }
    }

label_802E0900:
    ctx->pc = 0x802E0900u;
    ctx->downcount -= 6;
    // 802E0900: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0904:
    ctx->pc = 0x802E0904u;
    // 802E0904: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0908:
    ctx->pc = 0x802E0908u;
    // 802E0908: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E090C:
    ctx->pc = 0x802E090Cu;
    // 802E090C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0910:
    ctx->pc = 0x802E0910u;
    // 802E0910: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0914u;
            ctx->pc = target;
            return;
        }
    }

label_802E0914:
    ctx->pc = 0x802E0914u;
    ctx->downcount -= 6;
    // 802E0914: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0918:
    ctx->pc = 0x802E0918u;
    // 802E0918: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E091C:
    ctx->pc = 0x802E091Cu;
    // 802E091C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0920:
    ctx->pc = 0x802E0920u;
    // 802E0920: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0924:
    ctx->pc = 0x802E0924u;
    // 802E0924: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0928:
    ctx->pc = 0x802E0928u;
    ctx->downcount -= 19;
    // 802E0928: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E092C:
    ctx->pc = 0x802E092Cu;
    // 802E092C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0930:
    ctx->pc = 0x802E0930u;
    // 802E0930: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0934:
    ctx->pc = 0x802E0934u;
    // 802E0934: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0938:
    ctx->pc = 0x802E0938u;
    // 802E0938: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E093C:
    ctx->pc = 0x802E093Cu;
    // 802E093C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0940:
    ctx->pc = 0x802E0940u;
    // 802E0940: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0944:
    ctx->pc = 0x802E0944u;
    // 802E0944: cmpwi   r0, 0
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

label_802E0948:
    ctx->pc = 0x802E0948u;
    // 802E0948: bc    12, 2, 0x802E0964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0964;
        }
    }

label_802E094C:
    ctx->pc = 0x802E094Cu;
    ctx->downcount -= 3;
    // 802E094C: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0950:
    ctx->pc = 0x802E0950u;
    // 802E0950: cmpwi   r0, 0
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

label_802E0954:
    ctx->pc = 0x802E0954u;
    // 802E0954: bc    12, 2, 0x802E0964
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0964;
        }
    }

label_802E0958:
    ctx->pc = 0x802E0958u;
    ctx->downcount -= 3;
    // 802E0958: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802E095C:
    ctx->pc = 0x802E095Cu;
    // 802E095C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E0960:
    ctx->pc = 0x802E0960u;
    // 802E0960: bl      0x803457B8
    {
            ctx->lr = 0x802E0964u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0964:
    ctx->pc = 0x802E0964u;
    ctx->downcount -= 2;
    // 802E0964: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E0968:
    ctx->pc = 0x802E0968u;
    // 802E0968: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E096C:
    ctx->pc = 0x802E096Cu;
    ctx->downcount -= 8;
    // 802E096C: lwz     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0970:
    // 802E0970: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_802E0974:
    // 802E0974: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0978:
    // 802E0978: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E097C:
    ctx->pc = 0x802E097Cu;
    // 802E097C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0980:
    ctx->pc = 0x802E0980u;
    // 802E0980: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0984:
    // 802E0984: cmpwi   r0, 0
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

label_802E0988:
    // 802E0988: bc    12, 2, 0x802E09A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E09A4;
        }
    }

label_802E098C:
    ctx->pc = 0x802E098Cu;
    ctx->downcount -= 3;
    // 802E098C: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0990:
    // 802E0990: cmpwi   r0, 0
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

label_802E0994:
    // 802E0994: bc    12, 2, 0x802E09A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E09A4;
        }
    }

label_802E0998:
    ctx->downcount -= 3;
    // 802E0998: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E099C:
    // 802E099C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802E09A0:
    // 802E09A0: bl      0x803457B8
    {
            ctx->lr = 0x802E09A4u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E09A4:
    ctx->downcount -= 4;
    // 802E09A4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802E09A8:
    // 802E09A8: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E09AC:
    // 802E09AC: cmpwi   r29, 2
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

label_802E09B0:
    // 802E09B0: bc    12, 0, 0x802E096C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E096Cu;
                return;
            }
            goto label_802E096C;
        }
    }

label_802E09B4:
    ctx->pc = 0x802E09B4u;
    ctx->downcount -= 4;
    // 802E09B4: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E09B8:
    ctx->pc = 0x802E09B8u;
    // 802E09B8: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E09BC:
    ctx->pc = 0x802E09BCu;
    // 802E09BC: cmpwi   r0, 0
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

label_802E09C0:
    ctx->pc = 0x802E09C0u;
    // 802E09C0: bc    12, 2, 0x802E09DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E09DC;
        }
    }

label_802E09C4:
    ctx->pc = 0x802E09C4u;
    ctx->downcount -= 3;
    // 802E09C4: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E09C8:
    ctx->pc = 0x802E09C8u;
    // 802E09C8: cmpwi   r0, 0
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

label_802E09CC:
    ctx->pc = 0x802E09CCu;
    // 802E09CC: bc    12, 2, 0x802E09DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E09DC;
        }
    }

label_802E09D0:
    ctx->pc = 0x802E09D0u;
    ctx->downcount -= 3;
    // 802E09D0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E09D4:
    ctx->pc = 0x802E09D4u;
    // 802E09D4: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_802E09D8:
    ctx->pc = 0x802E09D8u;
    // 802E09D8: bl      0x803457B8
    {
            ctx->lr = 0x802E09DCu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E09DC:
    ctx->pc = 0x802E09DCu;
    ctx->downcount -= 6;
    // 802E09DC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E09E0:
    ctx->pc = 0x802E09E0u;
    // 802E09E0: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E09E4:
    ctx->pc = 0x802E09E4u;
    // 802E09E4: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E09E8:
    ctx->pc = 0x802E09E8u;
    // 802E09E8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E09EC:
    ctx->pc = 0x802E09ECu;
    // 802E09EC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E09F0:
    ctx->pc = 0x802E09F0u;
    // 802E09F0: bl      0x80370BD4
    {
            ctx->lr = 0x802E09F4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E09F4:
    ctx->pc = 0x802E09F4u;
    ctx->downcount -= 3;
    // 802E09F4: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E09F8:
    ctx->pc = 0x802E09F8u;
    // 802E09F8: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E09FC:
    ctx->pc = 0x802E09FCu;
    // 802E09FC: bl      0x80263ABC
    {
            ctx->lr = 0x802E0A00u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E0A00:
    ctx->pc = 0x802E0A00u;
    ctx->downcount -= 16;
    // 802E0A00: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0A04:
    ctx->pc = 0x802E0A04u;
    // 802E0A04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0A08:
    ctx->pc = 0x802E0A08u;
    // 802E0A08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0A0C:
    ctx->pc = 0x802E0A0Cu;
    // 802E0A0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0A10:
    ctx->pc = 0x802E0A10u;
    // 802E0A10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0A14:
    ctx->pc = 0x802E0A14u;
    ctx->downcount -= 1;
    // 802E0A14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0A18:
    ctx->pc = 0x802E0A18u;
    ctx->downcount -= 16;
    // 802E0A18: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0A1C:
    ctx->pc = 0x802E0A1Cu;
    // 802E0A1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0A20:
    ctx->pc = 0x802E0A20u;
    // 802E0A20: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0A24:
    ctx->pc = 0x802E0A24u;
    // 802E0A24: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0A28:
    ctx->pc = 0x802E0A28u;
    // 802E0A28: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0A2C:
    ctx->pc = 0x802E0A2Cu;
    // 802E0A2C: bl      0x802E0B30
    {
            ctx->lr = 0x802E0A30u;
            goto label_802E0B30;
    }

label_802E0A30:
    ctx->pc = 0x802E0A30u;
    ctx->downcount -= 6;
    // 802E0A30: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0A34:
    ctx->pc = 0x802E0A34u;
    // 802E0A34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802E0A38:
    ctx->pc = 0x802E0A38u;
    // 802E0A38: lwz     r27, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_802E0A3C:
    ctx->pc = 0x802E0A3Cu;
    // 802E0A3C: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0A40:
    ctx->pc = 0x802E0A40u;
    // 802E0A40: cmpwi   r0, 0
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

label_802E0A44:
    ctx->pc = 0x802E0A44u;
    // 802E0A44: bc    12, 2, 0x802E0A54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0A54;
        }
    }

label_802E0A48:
    ctx->pc = 0x802E0A48u;
    ctx->downcount -= 3;
    // 802E0A48: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_802E0A4C:
    ctx->pc = 0x802E0A4Cu;
    // 802E0A4C: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0A50:
    ctx->pc = 0x802E0A50u;
    // 802E0A50: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E0A54:
    ctx->pc = 0x802E0A54u;
    ctx->downcount -= 4;
    // 802E0A54: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802E0A58:
    ctx->pc = 0x802E0A58u;
    // 802E0A58: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0A5C:
    ctx->pc = 0x802E0A5Cu;
    // 802E0A5C: li      r28, 1
    ctx->gpr[28] = (u32)(s32)(1);

label_802E0A60:
    ctx->pc = 0x802E0A60u;
    // 802E0A60: li      r29, 2
    ctx->gpr[29] = (u32)(s32)(2);

label_802E0A64:
    ctx->pc = 0x802E0A64u;
    ctx->downcount -= 8;
    // 802E0A64: lwz     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0A68:
    // 802E0A68: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_802E0A6C:
    // 802E0A6C: add   r0, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0A70:
    // 802E0A70: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0A74:
    ctx->pc = 0x802E0A74u;
    // 802E0A74: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0A78:
    ctx->pc = 0x802E0A78u;
    // 802E0A78: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0A7C:
    // 802E0A7C: cmpwi   r0, 0
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

label_802E0A80:
    // 802E0A80: bc    12, 2, 0x802E0AB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0AB0;
        }
    }

label_802E0A84:
    ctx->downcount -= 3;
    // 802E0A84: cmpwi   r26, 0
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

label_802E0A88:
    ctx->pc = 0x802E0A88u;
    // 802E0A88: stw     r28, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_802E0A8C:
    // 802E0A8C: bc    4, 2, 0x802E0A98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0A98;
        }
    }

label_802E0A90:
    ctx->pc = 0x802E0A90u;
    ctx->downcount -= 2;
    // 802E0A90: stw     r29, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802E0A94:
    // 802E0A94: b       0x802E0A9C
    {
            goto label_802E0A9C;
    }

label_802E0A98:
    ctx->pc = 0x802E0A98u;
    ctx->downcount -= 1;
    // 802E0A98: stw     r28, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_802E0A9C:
    ctx->pc = 0x802E0A9Cu;
    ctx->downcount -= 4;
    // 802E0A9C: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0AA0:
    // 802E0AA0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802E0AA4:
    ctx->pc = 0x802E0AA4u;
    // 802E0AA4: lwz     r5, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0AA8:
    // 802E0AA8: bl      0x802D291C
    {
            ctx->lr = 0x802E0AACu;
            ctx->pc = 0x802D291Cu;
            return;
    }

label_802E0AAC:
    ctx->downcount -= 1;
    // 802E0AAC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E0AB0:
    ctx->downcount -= 4;
    // 802E0AB0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E0AB4:
    // 802E0AB4: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E0AB8:
    // 802E0AB8: cmpwi   r26, 2
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

label_802E0ABC:
    // 802E0ABC: bc    12, 0, 0x802E0A64
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0A64u;
                return;
            }
            goto label_802E0A64;
        }
    }

label_802E0AC0:
    ctx->pc = 0x802E0AC0u;
    ctx->downcount -= 4;
    // 802E0AC0: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0AC4:
    ctx->pc = 0x802E0AC4u;
    // 802E0AC4: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0AC8:
    ctx->pc = 0x802E0AC8u;
    // 802E0AC8: cmpwi   r0, 0
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

label_802E0ACC:
    ctx->pc = 0x802E0ACCu;
    // 802E0ACC: bc    12, 2, 0x802E0ADC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0ADC;
        }
    }

label_802E0AD0:
    ctx->pc = 0x802E0AD0u;
    ctx->downcount -= 3;
    // 802E0AD0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802E0AD4:
    ctx->pc = 0x802E0AD4u;
    // 802E0AD4: stb     r0, 217(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(217);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E0AD8:
    ctx->pc = 0x802E0AD8u;
    // 802E0AD8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E0ADC:
    ctx->pc = 0x802E0ADCu;
    ctx->downcount -= 2;
    // 802E0ADC: cmpwi   r5, 0
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

label_802E0AE0:
    ctx->pc = 0x802E0AE0u;
    // 802E0AE0: bc    12, 2, 0x802E0B14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0B14;
        }
    }

label_802E0AE4:
    ctx->pc = 0x802E0AE4u;
    ctx->downcount -= 6;
    // 802E0AE4: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0AE8:
    ctx->pc = 0x802E0AE8u;
    // 802E0AE8: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E0AEC:
    ctx->pc = 0x802E0AECu;
    // 802E0AEC: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E0AF0:
    ctx->pc = 0x802E0AF0u;
    // 802E0AF0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E0AF4:
    ctx->pc = 0x802E0AF4u;
    // 802E0AF4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E0AF8:
    ctx->pc = 0x802E0AF8u;
    // 802E0AF8: bl      0x80370BD4
    {
            ctx->lr = 0x802E0AFCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E0AFC:
    ctx->pc = 0x802E0AFCu;
    ctx->downcount -= 3;
    // 802E0AFC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0B00:
    ctx->pc = 0x802E0B00u;
    // 802E0B00: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0B04:
    ctx->pc = 0x802E0B04u;
    // 802E0B04: bl      0x80263ABC
    {
            ctx->lr = 0x802E0B08u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E0B08:
    ctx->pc = 0x802E0B08u;
    ctx->downcount -= 3;
    // 802E0B08: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E0B0C:
    ctx->pc = 0x802E0B0Cu;
    // 802E0B0C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802E0B10:
    ctx->pc = 0x802E0B10u;
    // 802E0B10: bl      0x803457B8
    {
            ctx->lr = 0x802E0B14u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0B14:
    ctx->pc = 0x802E0B14u;
    ctx->downcount -= 2;
    // 802E0B14: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0B18:
    ctx->pc = 0x802E0B18u;
    // 802E0B18: bl      0x8026EE88
    {
            ctx->lr = 0x802E0B1Cu;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_802E0B1C:
    ctx->pc = 0x802E0B1Cu;
    ctx->downcount -= 16;
    // 802E0B1C: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0B20:
    ctx->pc = 0x802E0B20u;
    // 802E0B20: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0B24:
    ctx->pc = 0x802E0B24u;
    // 802E0B24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0B28:
    ctx->pc = 0x802E0B28u;
    // 802E0B28: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0B2C:
    ctx->pc = 0x802E0B2Cu;
    // 802E0B2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0B30:
    ctx->pc = 0x802E0B30u;
    ctx->downcount -= 2;
    // 802E0B30: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0B34:
    ctx->pc = 0x802E0B34u;
    // 802E0B34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0B38:
    ctx->pc = 0x802E0B38u;
    ctx->downcount -= 2;
    // 802E0B38: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0B3C:
    ctx->pc = 0x802E0B3Cu;
    // 802E0B3C: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_802E0B40:
    ctx->pc = 0x802E0B40u;
    ctx->downcount -= 9;
    // 802E0B40: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0B44:
    ctx->pc = 0x802E0B44u;
    // 802E0B44: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0B48:
    ctx->pc = 0x802E0B48u;
    // 802E0B48: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0B4C:
    ctx->pc = 0x802E0B4Cu;
    // 802E0B4C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E0B50:
    ctx->pc = 0x802E0B50u;
    // 802E0B50: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0B54:
    ctx->pc = 0x802E0B54u;
    // 802E0B54: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0B58:
    ctx->pc = 0x802E0B58u;
    // 802E0B58: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0B5C:
    ctx->pc = 0x802E0B5Cu;
    // 802E0B5C: cmpwi   r0, 0
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

label_802E0B60:
    ctx->pc = 0x802E0B60u;
    // 802E0B60: bc    12, 2, 0x802E0BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0BA0;
        }
    }

label_802E0B64:
    ctx->pc = 0x802E0B64u;
    ctx->downcount -= 4;
    // 802E0B64: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0B68:
    ctx->pc = 0x802E0B68u;
    // 802E0B68: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0B6C:
    ctx->pc = 0x802E0B6Cu;
    // 802E0B6C: cmpwi   r0, 0
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

label_802E0B70:
    ctx->pc = 0x802E0B70u;
    // 802E0B70: bc    12, 2, 0x802E0BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0BA0;
        }
    }

label_802E0B74:
    ctx->pc = 0x802E0B74u;
    ctx->downcount -= 4;
    // 802E0B74: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0B78:
    ctx->pc = 0x802E0B78u;
    // 802E0B78: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0B7C:
    ctx->pc = 0x802E0B7Cu;
    // 802E0B7C: cmpwi   r0, 0
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

label_802E0B80:
    ctx->pc = 0x802E0B80u;
    // 802E0B80: bc    12, 2, 0x802E0BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0BA0;
        }
    }

label_802E0B84:
    ctx->pc = 0x802E0B84u;
    ctx->downcount -= 4;
    // 802E0B84: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0B88:
    ctx->pc = 0x802E0B88u;
    // 802E0B88: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0B8C:
    ctx->pc = 0x802E0B8Cu;
    // 802E0B8C: cmpwi   r0, 0
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

label_802E0B90:
    ctx->pc = 0x802E0B90u;
    // 802E0B90: bc    12, 2, 0x802E0BA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0BA0;
        }
    }

label_802E0B94:
    ctx->pc = 0x802E0B94u;
    ctx->downcount -= 3;
    // 802E0B94: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802E0B98:
    ctx->pc = 0x802E0B98u;
    // 802E0B98: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E0B9C:
    ctx->pc = 0x802E0B9Cu;
    // 802E0B9C: bl      0x803457B8
    {
            ctx->lr = 0x802E0BA0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0BA0:
    ctx->pc = 0x802E0BA0u;
    ctx->downcount -= 6;
    // 802E0BA0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0BA4:
    ctx->pc = 0x802E0BA4u;
    // 802E0BA4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E0BA8:
    ctx->pc = 0x802E0BA8u;
    // 802E0BA8: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E0BAC:
    ctx->pc = 0x802E0BACu;
    // 802E0BAC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E0BB0:
    ctx->pc = 0x802E0BB0u;
    // 802E0BB0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E0BB4:
    ctx->pc = 0x802E0BB4u;
    // 802E0BB4: bl      0x80370BD4
    {
            ctx->lr = 0x802E0BB8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E0BB8:
    ctx->pc = 0x802E0BB8u;
    ctx->downcount -= 3;
    // 802E0BB8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0BBC:
    ctx->pc = 0x802E0BBCu;
    // 802E0BBC: lwz     r4, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0BC0:
    ctx->pc = 0x802E0BC0u;
    // 802E0BC0: bl      0x80263ABC
    {
            ctx->lr = 0x802E0BC4u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E0BC4:
    ctx->pc = 0x802E0BC4u;
    ctx->downcount -= 6;
    // 802E0BC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0BC8:
    ctx->pc = 0x802E0BC8u;
    // 802E0BC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E0BCC:
    ctx->pc = 0x802E0BCCu;
    // 802E0BCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0BD0:
    ctx->pc = 0x802E0BD0u;
    // 802E0BD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0BD4:
    ctx->pc = 0x802E0BD4u;
    // 802E0BD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0BD8:
    ctx->pc = 0x802E0BD8u;
    ctx->downcount -= 19;
    // 802E0BD8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0BDC:
    ctx->pc = 0x802E0BDCu;
    // 802E0BDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0BE0:
    ctx->pc = 0x802E0BE0u;
    // 802E0BE0: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802E0BE4:
    ctx->pc = 0x802E0BE4u;
    // 802E0BE4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0BE8:
    ctx->pc = 0x802E0BE8u;
    // 802E0BE8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0BEC:
    ctx->pc = 0x802E0BECu;
    // 802E0BEC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0BF0:
    ctx->pc = 0x802E0BF0u;
    // 802E0BF0: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0BF4:
    ctx->pc = 0x802E0BF4u;
    // 802E0BF4: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0BF8:
    ctx->pc = 0x802E0BF8u;
    // 802E0BF8: bl      0x803554B8
    {
            ctx->lr = 0x802E0BFCu;
            ctx->pc = 0x803554B8u;
            return;
    }

label_802E0BFC:
    ctx->pc = 0x802E0BFCu;
    ctx->downcount -= 6;
    // 802E0BFC: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C00:
    ctx->pc = 0x802E0C00u;
    // 802E0C00: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0C04:
    ctx->pc = 0x802E0C04u;
    // 802E0C04: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0C08:
    ctx->pc = 0x802E0C08u;
    // 802E0C08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0C0C:
    ctx->pc = 0x802E0C0Cu;
    // 802E0C0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0C10u;
            ctx->pc = target;
            return;
        }
    }

label_802E0C10:
    ctx->pc = 0x802E0C10u;
    ctx->downcount -= 3;
    // 802E0C10: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C14:
    ctx->pc = 0x802E0C14u;
    // 802E0C14: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0C18:
    ctx->pc = 0x802E0C18u;
    // 802E0C18: bl      0x802E2064
    {
            ctx->lr = 0x802E0C1Cu;
            goto label_802E2064;
    }

label_802E0C1C:
    ctx->pc = 0x802E0C1Cu;
    ctx->downcount -= 3;
    // 802E0C1C: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C20:
    ctx->pc = 0x802E0C20u;
    // 802E0C20: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E0C24:
    ctx->pc = 0x802E0C24u;
    // 802E0C24: bl      0x802E3C9C
    {
            ctx->lr = 0x802E0C28u;
            ctx->pc = 0x802E3C9Cu;
            return;
    }

label_802E0C28:
    ctx->pc = 0x802E0C28u;
    ctx->downcount -= 2;
    // 802E0C28: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E0C2C:
    ctx->pc = 0x802E0C2Cu;
    // 802E0C2C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E0C30:
    ctx->downcount -= 1;
    // 802E0C30: bl      0x802C3780
    {
            ctx->lr = 0x802E0C34u;
            ctx->pc = 0x802C3780u;
            return;
    }

label_802E0C34:
    ctx->pc = 0x802E0C34u;
    ctx->downcount -= 7;
    // 802E0C34: lwz     r5, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0C38:
    // 802E0C38: add   r0, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0C3C:
    ctx->pc = 0x802E0C3Cu;
    // 802E0C3C: lwz     r4, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0C40:
    // 802E0C40: rlwinm r3, r5, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[5], 3u) & 0xFFFFFFF8u;
    }

label_802E0C44:
    // 802E0C44: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0C48:
    ctx->pc = 0x802E0C48u;
    // 802E0C48: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C4C:
    // 802E0C4C: bl      0x802E0668
    {
            ctx->lr = 0x802E0C50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0668u;
                return;
            }
            goto label_802E0668;
    }

label_802E0C50:
    ctx->pc = 0x802E0C50u;
    ctx->downcount -= 7;
    // 802E0C50: lwz     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C54:
    // 802E0C54: add   r0, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0C58:
    ctx->pc = 0x802E0C58u;
    // 802E0C58: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0C5C:
    // 802E0C5C: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_802E0C60:
    // 802E0C60: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0C64:
    ctx->pc = 0x802E0C64u;
    // 802E0C64: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C68:
    // 802E0C68: bl      0x8036B330
    {
            ctx->lr = 0x802E0C6Cu;
            ctx->pc = 0x8036B330u;
            return;
    }

label_802E0C6C:
    ctx->downcount -= 4;
    // 802E0C6C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E0C70:
    // 802E0C70: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E0C74:
    // 802E0C74: cmpwi   r30, 2
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

label_802E0C78:
    // 802E0C78: bc    12, 0, 0x802E0C30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0C30u;
                return;
            }
            goto label_802E0C30;
        }
    }

label_802E0C7C:
    ctx->pc = 0x802E0C7Cu;
    ctx->downcount -= 3;
    // 802E0C7C: lbz     r0, 216(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E0C80:
    ctx->pc = 0x802E0C80u;
    // 802E0C80: cmpwi   r0, 0
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

label_802E0C84:
    ctx->pc = 0x802E0C84u;
    // 802E0C84: bc    12, 2, 0x802E0CA0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0CA0;
        }
    }

label_802E0C88:
    ctx->pc = 0x802E0C88u;
    ctx->downcount -= 3;
    // 802E0C88: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C8C:
    ctx->pc = 0x802E0C8Cu;
    // 802E0C8C: lwz     r4, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0C90:
    ctx->pc = 0x802E0C90u;
    // 802E0C90: bl      0x803212C0
    {
            ctx->lr = 0x802E0C94u;
            ctx->pc = 0x803212C0u;
            return;
    }

label_802E0C94:
    ctx->pc = 0x802E0C94u;
    ctx->downcount -= 3;
    // 802E0C94: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0C98:
    ctx->pc = 0x802E0C98u;
    // 802E0C98: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0C9C:
    ctx->pc = 0x802E0C9Cu;
    // 802E0C9C: bl      0x8036B330
    {
            ctx->lr = 0x802E0CA0u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_802E0CA0:
    ctx->pc = 0x802E0CA0u;
    ctx->downcount -= 3;
    // 802E0CA0: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0CA4:
    ctx->pc = 0x802E0CA4u;
    // 802E0CA4: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0CA8:
    ctx->pc = 0x802E0CA8u;
    // 802E0CA8: bl      0x8026F12C
    {
            ctx->lr = 0x802E0CACu;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_802E0CAC:
    ctx->pc = 0x802E0CACu;
    ctx->downcount -= 4;
    // 802E0CAC: lwz     r0, 208(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0CB0:
    ctx->pc = 0x802E0CB0u;
    // 802E0CB0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E0CB4:
    ctx->pc = 0x802E0CB4u;
    // 802E0CB4: cmpwi   r0, 2
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

label_802E0CB8:
    ctx->pc = 0x802E0CB8u;
    // 802E0CB8: bc    4, 2, 0x802E0CC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0CC0;
        }
    }

label_802E0CBC:
    ctx->pc = 0x802E0CBCu;
    ctx->downcount -= 1;
    // 802E0CBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E0CC0:
    ctx->pc = 0x802E0CC0u;
    ctx->downcount -= 7;
    // 802E0CC0: lwz     r3, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0CC4:
    ctx->pc = 0x802E0CC4u;
    // 802E0CC4: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E0CC8:
    ctx->pc = 0x802E0CC8u;
    // 802E0CC8: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0CCC:
    ctx->pc = 0x802E0CCCu;
    // 802E0CCC: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0CD0:
    ctx->pc = 0x802E0CD0u;
    // 802E0CD0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0CD4:
    ctx->pc = 0x802E0CD4u;
    // 802E0CD4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0CD8u;
            ctx->pc = target;
            return;
        }
    }

label_802E0CD8:
    ctx->pc = 0x802E0CD8u;
    ctx->downcount -= 16;
    // 802E0CD8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0CDC:
    ctx->pc = 0x802E0CDCu;
    // 802E0CDC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0CE0:
    ctx->pc = 0x802E0CE0u;
    // 802E0CE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0CE4:
    ctx->pc = 0x802E0CE4u;
    // 802E0CE4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0CE8:
    ctx->pc = 0x802E0CE8u;
    // 802E0CE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0CEC:
    ctx->pc = 0x802E0CECu;
    ctx->downcount -= 16;
    // 802E0CEC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0CF0:
    ctx->pc = 0x802E0CF0u;
    // 802E0CF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0CF4:
    ctx->pc = 0x802E0CF4u;
    // 802E0CF4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0CF8:
    ctx->pc = 0x802E0CF8u;
    // 802E0CF8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0CFC:
    ctx->pc = 0x802E0CFCu;
    // 802E0CFC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0D00:
    ctx->pc = 0x802E0D00u;
    // 802E0D00: bl      0x802E0B30
    {
            ctx->lr = 0x802E0D04u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0D04:
    ctx->pc = 0x802E0D04u;
    ctx->downcount -= 3;
    // 802E0D04: lwz     r31, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E0D08:
    ctx->pc = 0x802E0D08u;
    // 802E0D08: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E0D0C:
    ctx->pc = 0x802E0D0Cu;
    // 802E0D0C: bl      0x802E0B30
    {
            ctx->lr = 0x802E0D10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0D10:
    ctx->pc = 0x802E0D10u;
    ctx->downcount -= 7;
    // 802E0D10: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0D14:
    ctx->pc = 0x802E0D14u;
    // 802E0D14: lwz     r30, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E0D18:
    ctx->pc = 0x802E0D18u;
    // 802E0D18: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E0D1C:
    ctx->pc = 0x802E0D1Cu;
    // 802E0D1C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0D20:
    ctx->pc = 0x802E0D20u;
    // 802E0D20: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0D24:
    ctx->pc = 0x802E0D24u;
    // 802E0D24: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0D28u;
            ctx->pc = target;
            return;
        }
    }

label_802E0D28:
    ctx->pc = 0x802E0D28u;
    ctx->downcount -= 2;
    // 802E0D28: cmpwi   r3, 0
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

label_802E0D2C:
    ctx->pc = 0x802E0D2Cu;
    // 802E0D2C: bc    12, 2, 0x802E0D70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0D70;
        }
    }

label_802E0D30:
    ctx->pc = 0x802E0D30u;
    ctx->downcount -= 2;
    // 802E0D30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E0D34:
    ctx->pc = 0x802E0D34u;
    // 802E0D34: bl      0x80271AE8
    {
            ctx->lr = 0x802E0D38u;
            ctx->pc = 0x80271AE8u;
            return;
    }

label_802E0D38:
    ctx->pc = 0x802E0D38u;
    ctx->downcount -= 2;
    // 802E0D38: cmpwi   r3, 1
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

label_802E0D3C:
    ctx->pc = 0x802E0D3Cu;
    // 802E0D3C: bc    4, 2, 0x802E0D4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0D4C;
        }
    }

label_802E0D40:
    ctx->pc = 0x802E0D40u;
    ctx->downcount -= 3;
    // 802E0D40: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802E0D44:
    ctx->pc = 0x802E0D44u;
    // 802E0D44: stw     r0, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0D48:
    ctx->pc = 0x802E0D48u;
    // 802E0D48: b       0x802E0D54
    {
            goto label_802E0D54;
    }

label_802E0D4C:
    ctx->pc = 0x802E0D4Cu;
    ctx->downcount -= 2;
    // 802E0D4C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_802E0D50:
    ctx->pc = 0x802E0D50u;
    // 802E0D50: stw     r0, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0D54:
    ctx->pc = 0x802E0D54u;
    ctx->downcount -= 4;
    // 802E0D54: lwz     r4, 192(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0D58:
    ctx->pc = 0x802E0D58u;
    // 802E0D58: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0D5C:
    ctx->pc = 0x802E0D5Cu;
    // 802E0D5C: lwz     r5, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0D60:
    ctx->pc = 0x802E0D60u;
    // 802E0D60: bl      0x802D2908
    {
            ctx->lr = 0x802E0D64u;
            ctx->pc = 0x802D2908u;
            return;
    }

label_802E0D64:
    ctx->pc = 0x802E0D64u;
    ctx->downcount -= 3;
    // 802E0D64: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802E0D68:
    ctx->pc = 0x802E0D68u;
    // 802E0D68: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E0D6C:
    ctx->pc = 0x802E0D6Cu;
    // 802E0D6C: bl      0x803457B8
    {
            ctx->lr = 0x802E0D70u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0D70:
    ctx->pc = 0x802E0D70u;
    ctx->downcount -= 16;
    // 802E0D70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0D74:
    ctx->pc = 0x802E0D74u;
    // 802E0D74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0D78:
    ctx->pc = 0x802E0D78u;
    // 802E0D78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0D7C:
    ctx->pc = 0x802E0D7Cu;
    // 802E0D7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0D80:
    ctx->pc = 0x802E0D80u;
    // 802E0D80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0D84:
    ctx->pc = 0x802E0D84u;
    ctx->downcount -= 17;
    // 802E0D84: stwu     r1, -176(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-176);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0D88:
    ctx->pc = 0x802E0D88u;
    // 802E0D88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0D8C:
    ctx->pc = 0x802E0D8Cu;
    // 802E0D8C: stw     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0D90:
    ctx->pc = 0x802E0D90u;
    // 802E0D90: stmw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0D94:
    ctx->pc = 0x802E0D94u;
    // 802E0D94: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0D98:
    ctx->pc = 0x802E0D98u;
    // 802E0D98: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0D9C:
    ctx->pc = 0x802E0D9Cu;
    // 802E0D9C: bl      0x80272244
    {
            ctx->lr = 0x802E0DA0u;
            ctx->pc = 0x80272244u;
            return;
    }

label_802E0DA0:
    ctx->pc = 0x802E0DA0u;
    ctx->downcount -= 5;
    // 802E0DA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0DA4:
    ctx->pc = 0x802E0DA4u;
    // 802E0DA4: li      r4, 11251
    ctx->gpr[4] = (u32)(s32)(11251);

label_802E0DA8:
    ctx->pc = 0x802E0DA8u;
    // 802E0DA8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802E0DAC:
    ctx->pc = 0x802E0DACu;
    // 802E0DAC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E0DB0:
    ctx->pc = 0x802E0DB0u;
    // 802E0DB0: bl      0x802721B8
    {
            ctx->lr = 0x802E0DB4u;
            ctx->pc = 0x802721B8u;
            return;
    }

label_802E0DB4:
    ctx->pc = 0x802E0DB4u;
    ctx->downcount -= 3;
    // 802E0DB4: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0DB8:
    ctx->pc = 0x802E0DB8u;
    // 802E0DB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0DBC:
    ctx->pc = 0x802E0DBCu;
    // 802E0DBC: bl      0x8027213C
    {
            ctx->lr = 0x802E0DC0u;
            ctx->pc = 0x8027213Cu;
            return;
    }

label_802E0DC0:
    ctx->pc = 0x802E0DC0u;
    ctx->downcount -= 2;
    // 802E0DC0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E0DC4:
    ctx->pc = 0x802E0DC4u;
    // 802E0DC4: bl      0x802C336C
    {
            ctx->lr = 0x802E0DC8u;
            ctx->pc = 0x802C336Cu;
            return;
    }

label_802E0DC8:
    ctx->pc = 0x802E0DC8u;
    ctx->downcount -= 2;
    // 802E0DC8: cmpwi   r3, 2
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

label_802E0DCC:
    ctx->pc = 0x802E0DCCu;
    // 802E0DCC: bc    4, 2, 0x802E0DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0DD4;
        }
    }

label_802E0DD0:
    ctx->pc = 0x802E0DD0u;
    ctx->downcount -= 1;
    // 802E0DD0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_802E0DD4:
    ctx->pc = 0x802E0DD4u;
    ctx->downcount -= 3;
    // 802E0DD4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E0DD8:
    ctx->pc = 0x802E0DD8u;
    // 802E0DD8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0DDC:
    ctx->pc = 0x802E0DDCu;
    // 802E0DDC: bl      0x8027212C
    {
            ctx->lr = 0x802E0DE0u;
            ctx->pc = 0x8027212Cu;
            return;
    }

label_802E0DE0:
    ctx->pc = 0x802E0DE0u;
    ctx->downcount -= 2;
    // 802E0DE0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0DE4:
    ctx->pc = 0x802E0DE4u;
    // 802E0DE4: bl      0x802E0B30
    {
            ctx->lr = 0x802E0DE8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0DE8:
    ctx->pc = 0x802E0DE8u;
    ctx->downcount -= 3;
    // 802E0DE8: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0DEC:
    ctx->pc = 0x802E0DECu;
    // 802E0DEC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0DF0:
    ctx->pc = 0x802E0DF0u;
    // 802E0DF0: bl      0x80271D78
    {
            ctx->lr = 0x802E0DF4u;
            ctx->pc = 0x80271D78u;
            return;
    }

label_802E0DF4:
    ctx->pc = 0x802E0DF4u;
    ctx->downcount -= 16;
    // 802E0DF4: lmw     r30, 168(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(168);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0DF8:
    ctx->pc = 0x802E0DF8u;
    // 802E0DF8: lwz     r0, 180(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(180);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0DFC:
    ctx->pc = 0x802E0DFCu;
    // 802E0DFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0E00:
    ctx->pc = 0x802E0E00u;
    // 802E0E00: addi    r1, r1, 176
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(176);

label_802E0E04:
    ctx->pc = 0x802E0E04u;
    // 802E0E04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0E08:
    ctx->pc = 0x802E0E08u;
    ctx->downcount -= 6;
    // 802E0E08: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0E0C:
    ctx->pc = 0x802E0E0Cu;
    // 802E0E0C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0E10:
    ctx->pc = 0x802E0E10u;
    // 802E0E10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0E14:
    ctx->pc = 0x802E0E14u;
    // 802E0E14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E0E18:
    ctx->pc = 0x802E0E18u;
    // 802E0E18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0E1C:
    ctx->pc = 0x802E0E1Cu;
    // 802E0E1C: bl      0x802E0B30
    {
            ctx->lr = 0x802E0E20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0E20:
    ctx->pc = 0x802E0E20u;
    ctx->downcount -= 6;
    // 802E0E20: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0E24:
    ctx->pc = 0x802E0E24u;
    // 802E0E24: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0E28:
    ctx->pc = 0x802E0E28u;
    // 802E0E28: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E0E2C:
    ctx->pc = 0x802E0E2Cu;
    // 802E0E2C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E0E30:
    ctx->pc = 0x802E0E30u;
    // 802E0E30: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E0E34u;
            ctx->pc = target;
            return;
        }
    }

label_802E0E34:
    ctx->pc = 0x802E0E34u;
    ctx->downcount -= 2;
    // 802E0E34: cmpwi   r3, 0
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

label_802E0E38:
    ctx->pc = 0x802E0E38u;
    // 802E0E38: bc    12, 2, 0x802E0E48
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E0E48;
        }
    }

label_802E0E3C:
    ctx->pc = 0x802E0E3Cu;
    ctx->downcount -= 3;
    // 802E0E3C: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E0E40:
    ctx->pc = 0x802E0E40u;
    // 802E0E40: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E0E44:
    ctx->pc = 0x802E0E44u;
    // 802E0E44: bl      0x803457B8
    {
            ctx->lr = 0x802E0E48u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E0E48:
    ctx->pc = 0x802E0E48u;
    ctx->downcount -= 6;
    // 802E0E48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0E4C:
    ctx->pc = 0x802E0E4Cu;
    // 802E0E4C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E0E50:
    ctx->pc = 0x802E0E50u;
    // 802E0E50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0E54:
    ctx->pc = 0x802E0E54u;
    // 802E0E54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0E58:
    ctx->pc = 0x802E0E58u;
    // 802E0E58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0E5C:
    ctx->pc = 0x802E0E5Cu;
    ctx->downcount -= 23;
    // 802E0E5C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0E60:
    ctx->pc = 0x802E0E60u;
    // 802E0E60: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0E64:
    ctx->pc = 0x802E0E64u;
    // 802E0E64: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E0E68:
    ctx->pc = 0x802E0E68u;
    // 802E0E68: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0E6C:
    ctx->pc = 0x802E0E6Cu;
    // 802E0E6C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E0E70:
    ctx->pc = 0x802E0E70u;
    // 802E0E70: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_802E0E74:
    ctx->pc = 0x802E0E74u;
    // 802E0E74: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0E78:
    ctx->pc = 0x802E0E78u;
    // 802E0E78: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0E7C:
    ctx->pc = 0x802E0E7Cu;
    // 802E0E7C: stb     r0, 217(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(217);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E0E80:
    ctx->pc = 0x802E0E80u;
    // 802E0E80: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0E84:
    ctx->pc = 0x802E0E84u;
    // 802E0E84: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E0E88:
    ctx->pc = 0x802E0E88u;
    // 802E0E88: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E0E8C:
    ctx->pc = 0x802E0E8Cu;
    // 802E0E8C: bl      0x80370BD4
    {
            ctx->lr = 0x802E0E90u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E0E90:
    ctx->pc = 0x802E0E90u;
    ctx->downcount -= 5;
    // 802E0E90: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0E94:
    ctx->pc = 0x802E0E94u;
    // 802E0E94: li      r31, 11252
    ctx->gpr[31] = (u32)(s32)(11252);

label_802E0E98:
    ctx->pc = 0x802E0E98u;
    // 802E0E98: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0E9C:
    ctx->pc = 0x802E0E9Cu;
    // 802E0E9C: cmpwi   r0, 5
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

label_802E0EA0:
    ctx->pc = 0x802E0EA0u;
    // 802E0EA0: bc    4, 2, 0x802E0EA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E0EA8;
        }
    }

label_802E0EA4:
    ctx->pc = 0x802E0EA4u;
    ctx->downcount -= 1;
    // 802E0EA4: li      r31, 11250
    ctx->gpr[31] = (u32)(s32)(11250);

label_802E0EA8:
    ctx->pc = 0x802E0EA8u;
    ctx->downcount -= 2;
    // 802E0EA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E0EAC:
    ctx->pc = 0x802E0EACu;
    // 802E0EAC: bl      0x802E0B30
    {
            ctx->lr = 0x802E0EB0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0EB0:
    ctx->pc = 0x802E0EB0u;
    ctx->downcount -= 6;
    // 802E0EB0: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0EB4:
    ctx->pc = 0x802E0EB4u;
    // 802E0EB4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E0EB8:
    ctx->pc = 0x802E0EB8u;
    // 802E0EB8: lwz     r5, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0EBC:
    ctx->pc = 0x802E0EBCu;
    // 802E0EBC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E0EC0:
    ctx->pc = 0x802E0EC0u;
    // 802E0EC0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E0EC4:
    ctx->pc = 0x802E0EC4u;
    // 802E0EC4: bl      0x80271CEC
    {
            ctx->lr = 0x802E0EC8u;
            ctx->pc = 0x80271CECu;
            return;
    }

label_802E0EC8:
    ctx->pc = 0x802E0EC8u;
    ctx->downcount -= 16;
    // 802E0EC8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E0ECC:
    ctx->pc = 0x802E0ECCu;
    // 802E0ECC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0ED0:
    ctx->pc = 0x802E0ED0u;
    // 802E0ED0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0ED4:
    ctx->pc = 0x802E0ED4u;
    // 802E0ED4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E0ED8:
    ctx->pc = 0x802E0ED8u;
    // 802E0ED8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0EDC:
    ctx->pc = 0x802E0EDCu;
    ctx->downcount -= 5;
    // 802E0EDC: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0EE0:
    ctx->pc = 0x802E0EE0u;
    // 802E0EE0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0EE4:
    ctx->pc = 0x802E0EE4u;
    // 802E0EE4: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0EE8:
    ctx->pc = 0x802E0EE8u;
    // 802E0EE8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_802E0EEC:
    ctx->pc = 0x802E0EECu;
    // 802E0EEC: bl      0x8000785C
    {
            ctx->lr = 0x802E0EF0u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802E0EF0:
    ctx->pc = 0x802E0EF0u;
    ctx->downcount -= 3;
    // 802E0EF0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0EF4:
    ctx->pc = 0x802E0EF4u;
    // 802E0EF4: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0EF8:
    ctx->pc = 0x802E0EF8u;
    // 802E0EF8: bl      0x8036E67C
    {
            ctx->lr = 0x802E0EFCu;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_802E0EFC:
    ctx->pc = 0x802E0EFCu;
    ctx->downcount -= 7;
    // 802E0EFC: lfs     f0, -12568(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E0EFCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12568);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E0F00:
    ctx->pc = 0x802E0F00u;
    // 802E0F00: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0F04:
    ctx->pc = 0x802E0F04u;
    // 802E0F04: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E0F08:
    ctx->pc = 0x802E0F08u;
    // 802E0F08: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E0F0C:
    ctx->pc = 0x802E0F0Cu;
    // 802E0F0C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E0F10:
    ctx->pc = 0x802E0F10u;
    // 802E0F10: stfs     f0, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E0F14:
    ctx->pc = 0x802E0F14u;
    // 802E0F14: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E0F18:
    ctx->pc = 0x802E0F18u;
    ctx->downcount -= 5;
    // 802E0F18: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0F1C:
    // 802E0F1C: or   r6, r29, r29
    {
        ctx->gpr[6] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E0F20:
    ctx->pc = 0x802E0F20u;
    // 802E0F20: lwz     r5, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E0F24:
    // 802E0F24: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_802E0F28:
    // 802E0F28: bl      0x80308BA0
    {
            ctx->lr = 0x802E0F2Cu;
            ctx->pc = 0x80308BA0u;
            return;
    }

label_802E0F2C:
    ctx->pc = 0x802E0F2Cu;
    ctx->downcount -= 13;
    // 802E0F2C: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E0F30:
    // 802E0F30: add   r0, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0F34:
    ctx->pc = 0x802E0F34u;
    // 802E0F34: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F34u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E0F38:
    // 802E0F38: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0F3C:
    ctx->pc = 0x802E0F3Cu;
    // 802E0F3C: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E0F40:
    ctx->pc = 0x802E0F40u;
    // 802E0F40: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802E0F44:
    ctx->pc = 0x802E0F44u;
    // 802E0F44: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E0F48:
    ctx->pc = 0x802E0F48u;
    // 802E0F48: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F48u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E0F4C:
    ctx->pc = 0x802E0F4Cu;
    // 802E0F4C: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0F50:
    // 802E0F50: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_802E0F54:
    // 802E0F54: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0F58:
    ctx->pc = 0x802E0F58u;
    // 802E0F58: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0F5C:
    // 802E0F5C: bl      0x8036B284
    {
            ctx->lr = 0x802E0F60u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_802E0F60:
    ctx->pc = 0x802E0F60u;
    ctx->downcount -= 7;
    // 802E0F60: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0F64:
    // 802E0F64: add   r0, r31, r28
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_802E0F68:
    // 802E0F68: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_802E0F6C:
    // 802E0F6C: rlwinm r3, r3, 3, 0, 28
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 3u) & 0xFFFFFFF8u;
    }

label_802E0F70:
    // 802E0F70: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E0F74:
    ctx->pc = 0x802E0F74u;
    // 802E0F74: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0F78:
    // 802E0F78: bl      0x8036B244
    {
            ctx->lr = 0x802E0F7Cu;
            ctx->pc = 0x8036B244u;
            return;
    }

label_802E0F7C:
    ctx->downcount -= 4;
    // 802E0F7C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802E0F80:
    // 802E0F80: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E0F84:
    // 802E0F84: cmpwi   r29, 2
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

label_802E0F88:
    // 802E0F88: bc    12, 0, 0x802E0F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0F18u;
                return;
            }
            goto label_802E0F18;
        }
    }

label_802E0F8C:
    ctx->pc = 0x802E0F8Cu;
    ctx->downcount -= 3;
    // 802E0F8C: lwz     r4, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E0F90:
    ctx->pc = 0x802E0F90u;
    // 802E0F90: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E0F94:
    ctx->pc = 0x802E0F94u;
    // 802E0F94: bl      0x80308B44
    {
            ctx->lr = 0x802E0F98u;
            ctx->pc = 0x80308B44u;
            return;
    }

label_802E0F98:
    ctx->pc = 0x802E0F98u;
    ctx->downcount -= 9;
    // 802E0F98: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0F98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E0F9C:
    ctx->pc = 0x802E0F9Cu;
    // 802E0F9C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_802E0FA0:
    ctx->pc = 0x802E0FA0u;
    // 802E0FA0: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0FA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E0FA4:
    ctx->pc = 0x802E0FA4u;
    // 802E0FA4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0FA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E0FA8:
    ctx->pc = 0x802E0FA8u;
    // 802E0FA8: stfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0FA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802E0FAC:
    ctx->pc = 0x802E0FACu;
    // 802E0FAC: stfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E0FB0:
    ctx->pc = 0x802E0FB0u;
    // 802E0FB0: stfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E0FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E0FB4:
    ctx->pc = 0x802E0FB4u;
    // 802E0FB4: lwz     r3, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0FB8:
    ctx->pc = 0x802E0FB8u;
    // 802E0FB8: bl      0x8036B284
    {
            ctx->lr = 0x802E0FBCu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_802E0FBC:
    ctx->pc = 0x802E0FBCu;
    ctx->downcount -= 3;
    // 802E0FBC: lwz     r3, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E0FC0:
    ctx->pc = 0x802E0FC0u;
    // 802E0FC0: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_802E0FC4:
    ctx->pc = 0x802E0FC4u;
    // 802E0FC4: bl      0x8036B244
    {
            ctx->lr = 0x802E0FC8u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_802E0FC8:
    ctx->pc = 0x802E0FC8u;
    ctx->downcount -= 2;
    // 802E0FC8: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_802E0FCC:
    ctx->pc = 0x802E0FCCu;
    // 802E0FCC: bl      0x800078A8
    {
            ctx->lr = 0x802E0FD0u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_802E0FD0:
    ctx->pc = 0x802E0FD0u;
    ctx->downcount -= 5;
    // 802E0FD0: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E0FD4:
    ctx->pc = 0x802E0FD4u;
    // 802E0FD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E0FD8:
    ctx->pc = 0x802E0FD8u;
    // 802E0FD8: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_802E0FDC:
    ctx->pc = 0x802E0FDCu;
    // 802E0FDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E0FE0:
    ctx->pc = 0x802E0FE0u;
    ctx->downcount -= 16;
    // 802E0FE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E0FE4:
    ctx->pc = 0x802E0FE4u;
    // 802E0FE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E0FE8:
    ctx->pc = 0x802E0FE8u;
    // 802E0FE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E0FEC:
    ctx->pc = 0x802E0FECu;
    // 802E0FEC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E0FF0:
    ctx->pc = 0x802E0FF0u;
    // 802E0FF0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E0FF4:
    ctx->pc = 0x802E0FF4u;
    // 802E0FF4: bl      0x802E0B30
    {
            ctx->lr = 0x802E0FF8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E0FF8:
    ctx->pc = 0x802E0FF8u;
    ctx->downcount -= 7;
    // 802E0FF8: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E0FFC:
    ctx->pc = 0x802E0FFCu;
    // 802E0FFC: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1000:
    ctx->pc = 0x802E1000u;
    // 802E1000: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1004:
    ctx->pc = 0x802E1004u;
    // 802E1004: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1008:
    ctx->pc = 0x802E1008u;
    // 802E1008: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E100C:
    ctx->pc = 0x802E100Cu;
    // 802E100C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1010u;
            ctx->pc = target;
            return;
        }
    }

label_802E1010:
    ctx->pc = 0x802E1010u;
    ctx->downcount -= 2;
    // 802E1010: cmpwi   r3, 0
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

label_802E1014:
    ctx->pc = 0x802E1014u;
    // 802E1014: bc    4, 2, 0x802E1058
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E1058;
        }
    }

label_802E1018:
    ctx->pc = 0x802E1018u;
    ctx->downcount -= 3;
    // 802E1018: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E101C:
    ctx->pc = 0x802E101Cu;
    // 802E101C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1020:
    ctx->pc = 0x802E1020u;
    // 802E1020: bl      0x802D2998
    {
            ctx->lr = 0x802E1024u;
            ctx->pc = 0x802D2998u;
            return;
    }

label_802E1024:
    ctx->pc = 0x802E1024u;
    ctx->downcount -= 2;
    // 802E1024: cmpwi   r3, 0
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

label_802E1028:
    ctx->pc = 0x802E1028u;
    // 802E1028: bc    12, 2, 0x802E104C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E104C;
        }
    }

label_802E102C:
    ctx->pc = 0x802E102Cu;
    ctx->downcount -= 3;
    // 802E102C: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1030:
    ctx->pc = 0x802E1030u;
    // 802E1030: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1034:
    ctx->pc = 0x802E1034u;
    // 802E1034: bl      0x802D2958
    {
            ctx->lr = 0x802E1038u;
            ctx->pc = 0x802D2958u;
            return;
    }

label_802E1038:
    ctx->pc = 0x802E1038u;
    ctx->downcount -= 1;
    // 802E1038: bl      0x802F3B84
    {
            ctx->lr = 0x802E103Cu;
            ctx->pc = 0x802F3B84u;
            return;
    }

label_802E103C:
    ctx->pc = 0x802E103Cu;
    ctx->downcount -= 3;
    // 802E103C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1040:
    ctx->pc = 0x802E1040u;
    // 802E1040: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1044:
    ctx->pc = 0x802E1044u;
    // 802E1044: bl      0x802E2008
    {
            ctx->lr = 0x802E1048u;
            goto label_802E2008;
    }

label_802E1048:
    ctx->pc = 0x802E1048u;
    ctx->downcount -= 1;
    // 802E1048: b       0x802E1058
    {
            goto label_802E1058;
    }

label_802E104C:
    ctx->pc = 0x802E104Cu;
    ctx->downcount -= 3;
    // 802E104C: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1050:
    ctx->pc = 0x802E1050u;
    // 802E1050: addi    r4, r13, -28168
    ctx->gpr[4] = ctx->gpr[13] + (u32)(s32)(-28168);

label_802E1054:
    ctx->pc = 0x802E1054u;
    // 802E1054: bl      0x802E2008
    {
            ctx->lr = 0x802E1058u;
            goto label_802E2008;
    }

label_802E1058:
    ctx->pc = 0x802E1058u;
    ctx->downcount -= 16;
    // 802E1058: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E105C:
    ctx->pc = 0x802E105Cu;
    // 802E105C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1060:
    ctx->pc = 0x802E1060u;
    // 802E1060: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1064:
    ctx->pc = 0x802E1064u;
    // 802E1064: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1068:
    ctx->pc = 0x802E1068u;
    // 802E1068: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E106C:
    ctx->pc = 0x802E106Cu;
    ctx->downcount -= 16;
    // 802E106C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1070:
    ctx->pc = 0x802E1070u;
    // 802E1070: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1074:
    ctx->pc = 0x802E1074u;
    // 802E1074: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1078:
    ctx->pc = 0x802E1078u;
    // 802E1078: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E107C:
    ctx->pc = 0x802E107Cu;
    // 802E107C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1080:
    ctx->pc = 0x802E1080u;
    // 802E1080: bl      0x802E0B30
    {
            ctx->lr = 0x802E1084u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E1084:
    ctx->pc = 0x802E1084u;
    ctx->downcount -= 7;
    // 802E1084: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1088:
    ctx->pc = 0x802E1088u;
    // 802E1088: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E108C:
    ctx->pc = 0x802E108Cu;
    // 802E108C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1090:
    ctx->pc = 0x802E1090u;
    // 802E1090: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1094:
    ctx->pc = 0x802E1094u;
    // 802E1094: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1098:
    ctx->pc = 0x802E1098u;
    // 802E1098: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E109Cu;
            ctx->pc = target;
            return;
        }
    }

label_802E109C:
    ctx->pc = 0x802E109Cu;
    ctx->downcount -= 2;
    // 802E109C: cmpwi   r3, 0
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

label_802E10A0:
    ctx->pc = 0x802E10A0u;
    // 802E10A0: bc    4, 2, 0x802E10D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E10D4;
        }
    }

label_802E10A4:
    ctx->pc = 0x802E10A4u;
    ctx->downcount -= 2;
    // 802E10A4: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E10A8:
    ctx->pc = 0x802E10A8u;
    // 802E10A8: bl      0x802E1F80
    {
            ctx->lr = 0x802E10ACu;
            goto label_802E1F80;
    }

label_802E10AC:
    ctx->pc = 0x802E10ACu;
    ctx->downcount -= 6;
    // 802E10AC: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E10B0:
    ctx->pc = 0x802E10B0u;
    // 802E10B0: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E10B4:
    ctx->pc = 0x802E10B4u;
    // 802E10B4: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E10B8:
    ctx->pc = 0x802E10B8u;
    // 802E10B8: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E10BC:
    ctx->pc = 0x802E10BCu;
    // 802E10BC: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E10C0:
    ctx->pc = 0x802E10C0u;
    // 802E10C0: bl      0x802E1F0C
    {
            ctx->lr = 0x802E10C4u;
            goto label_802E1F0C;
    }

label_802E10C4:
    ctx->pc = 0x802E10C4u;
    ctx->downcount -= 4;
    // 802E10C4: lwz     r4, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E10C8:
    ctx->pc = 0x802E10C8u;
    // 802E10C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E10CC:
    ctx->pc = 0x802E10CCu;
    // 802E10CC: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_802E10D0:
    ctx->pc = 0x802E10D0u;
    // 802E10D0: bl      0x802D2980
    {
            ctx->lr = 0x802E10D4u;
            ctx->pc = 0x802D2980u;
            return;
    }

label_802E10D4:
    ctx->pc = 0x802E10D4u;
    ctx->downcount -= 16;
    // 802E10D4: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E10D8:
    ctx->pc = 0x802E10D8u;
    // 802E10D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E10DC:
    ctx->pc = 0x802E10DCu;
    // 802E10DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E10E0:
    ctx->pc = 0x802E10E0u;
    // 802E10E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E10E4:
    ctx->pc = 0x802E10E4u;
    // 802E10E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E10E8:
    ctx->pc = 0x802E10E8u;
    ctx->downcount -= 21;
    // 802E10E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E10EC:
    ctx->pc = 0x802E10ECu;
    // 802E10EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E10F0:
    ctx->pc = 0x802E10F0u;
    // 802E10F0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E10F4:
    ctx->pc = 0x802E10F4u;
    // 802E10F4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E10F8:
    ctx->pc = 0x802E10F8u;
    // 802E10F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E10FC:
    ctx->pc = 0x802E10FCu;
    // 802E10FC: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1100:
    ctx->pc = 0x802E1100u;
    // 802E1100: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1104:
    ctx->pc = 0x802E1104u;
    // 802E1104: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1108:
    ctx->pc = 0x802E1108u;
    // 802E1108: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E110C:
    ctx->pc = 0x802E110Cu;
    // 802E110C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1110u;
            ctx->pc = target;
            return;
        }
    }

label_802E1110:
    ctx->pc = 0x802E1110u;
    ctx->downcount -= 2;
    // 802E1110: cmpwi   r3, 0
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

label_802E1114:
    ctx->pc = 0x802E1114u;
    // 802E1114: bc    12, 2, 0x802E1130
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1130;
        }
    }

label_802E1118:
    ctx->pc = 0x802E1118u;
    ctx->downcount -= 2;
    // 802E1118: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E111C:
    ctx->pc = 0x802E111Cu;
    // 802E111C: bl      0x802E0B30
    {
            ctx->lr = 0x802E1120u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E1120:
    ctx->pc = 0x802E1120u;
    ctx->downcount -= 3;
    // 802E1120: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1124:
    ctx->pc = 0x802E1124u;
    // 802E1124: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1128:
    ctx->pc = 0x802E1128u;
    // 802E1128: bl      0x802D337C
    {
            ctx->lr = 0x802E112Cu;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_802E112C:
    ctx->pc = 0x802E112Cu;
    ctx->downcount -= 1;
    // 802E112C: b       0x802E1154
    {
            goto label_802E1154;
    }

label_802E1130:
    ctx->pc = 0x802E1130u;
    ctx->downcount -= 2;
    // 802E1130: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1134:
    ctx->pc = 0x802E1134u;
    // 802E1134: bl      0x802E0B30
    {
            ctx->lr = 0x802E1138u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E1138:
    ctx->pc = 0x802E1138u;
    ctx->downcount -= 3;
    // 802E1138: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E113C:
    ctx->pc = 0x802E113Cu;
    // 802E113C: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1140:
    ctx->pc = 0x802E1140u;
    // 802E1140: bl      0x802E1FD4
    {
            ctx->lr = 0x802E1144u;
            goto label_802E1FD4;
    }

label_802E1144:
    ctx->pc = 0x802E1144u;
    ctx->downcount -= 4;
    // 802E1144: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1148:
    ctx->pc = 0x802E1148u;
    // 802E1148: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E114C:
    ctx->pc = 0x802E114Cu;
    // 802E114C: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_802E1150:
    ctx->pc = 0x802E1150u;
    // 802E1150: bl      0x802D337C
    {
            ctx->lr = 0x802E1154u;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_802E1154:
    ctx->pc = 0x802E1154u;
    ctx->downcount -= 16;
    // 802E1154: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1158:
    ctx->pc = 0x802E1158u;
    // 802E1158: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E115C:
    ctx->pc = 0x802E115Cu;
    // 802E115C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1160:
    ctx->pc = 0x802E1160u;
    // 802E1160: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1164:
    ctx->pc = 0x802E1164u;
    // 802E1164: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1168:
    ctx->pc = 0x802E1168u;
    ctx->downcount -= 19;
    // 802E1168: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E116C:
    ctx->pc = 0x802E116Cu;
    // 802E116C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1170:
    ctx->pc = 0x802E1170u;
    // 802E1170: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_802E1174:
    ctx->pc = 0x802E1174u;
    // 802E1174: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1178:
    ctx->pc = 0x802E1178u;
    // 802E1178: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E117C:
    ctx->pc = 0x802E117Cu;
    // 802E117C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1180:
    ctx->pc = 0x802E1180u;
    // 802E1180: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1184:
    ctx->pc = 0x802E1184u;
    // 802E1184: lwz     r4, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1188:
    ctx->pc = 0x802E1188u;
    // 802E1188: bl      0x80308ABC
    {
            ctx->lr = 0x802E118Cu;
            ctx->pc = 0x80308ABCu;
            return;
    }

label_802E118C:
    ctx->pc = 0x802E118Cu;
    ctx->downcount -= 5;
    // 802E118C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1190:
    ctx->pc = 0x802E1190u;
    // 802E1190: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1194:
    ctx->pc = 0x802E1194u;
    // 802E1194: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1198:
    ctx->pc = 0x802E1198u;
    // 802E1198: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E119C:
    ctx->pc = 0x802E119Cu;
    // 802E119C: bl      0x803214A4
    {
            ctx->lr = 0x802E11A0u;
            ctx->pc = 0x803214A4u;
            return;
    }

label_802E11A0:
    ctx->pc = 0x802E11A0u;
    ctx->downcount -= 6;
    // 802E11A0: lwz     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E11A4:
    ctx->pc = 0x802E11A4u;
    // 802E11A4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E11A8:
    ctx->pc = 0x802E11A8u;
    // 802E11A8: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_802E11AC:
    ctx->pc = 0x802E11ACu;
    // 802E11AC: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E11B0:
    ctx->pc = 0x802E11B0u;
    // 802E11B0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E11B4:
    ctx->pc = 0x802E11B4u;
    // 802E11B4: bl      0x8036B234
    {
            ctx->lr = 0x802E11B8u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_802E11B8:
    ctx->pc = 0x802E11B8u;
    ctx->downcount -= 4;
    // 802E11B8: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E11BC:
    ctx->pc = 0x802E11BCu;
    // 802E11BC: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E11C0:
    ctx->pc = 0x802E11C0u;
    // 802E11C0: lwz     r4, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E11C4:
    ctx->pc = 0x802E11C4u;
    // 802E11C4: bl      0x80308ABC
    {
            ctx->lr = 0x802E11C8u;
            ctx->pc = 0x80308ABCu;
            return;
    }

label_802E11C8:
    ctx->pc = 0x802E11C8u;
    ctx->downcount -= 5;
    // 802E11C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E11CC:
    ctx->pc = 0x802E11CCu;
    // 802E11CC: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E11D0:
    ctx->pc = 0x802E11D0u;
    // 802E11D0: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E11D4:
    ctx->pc = 0x802E11D4u;
    // 802E11D4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E11D8:
    ctx->pc = 0x802E11D8u;
    // 802E11D8: bl      0x803214A4
    {
            ctx->lr = 0x802E11DCu;
            ctx->pc = 0x803214A4u;
            return;
    }

label_802E11DC:
    ctx->pc = 0x802E11DCu;
    ctx->downcount -= 6;
    // 802E11DC: lwz     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E11E0:
    ctx->pc = 0x802E11E0u;
    // 802E11E0: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E11E4:
    ctx->pc = 0x802E11E4u;
    // 802E11E4: rlwinm r0, r0, 3, 0, 28
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 3u) & 0xFFFFFFF8u;
    }

label_802E11E8:
    ctx->pc = 0x802E11E8u;
    // 802E11E8: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E11EC:
    ctx->pc = 0x802E11ECu;
    // 802E11EC: lwz     r3, 164(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E11F0:
    ctx->pc = 0x802E11F0u;
    // 802E11F0: bl      0x8036B234
    {
            ctx->lr = 0x802E11F4u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_802E11F4:
    ctx->pc = 0x802E11F4u;
    ctx->downcount -= 2;
    // 802E11F4: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E11F8:
    ctx->pc = 0x802E11F8u;
    // 802E11F8: bl      0x80308AA8
    {
            ctx->lr = 0x802E11FCu;
            ctx->pc = 0x80308AA8u;
            return;
    }

label_802E11FC:
    ctx->pc = 0x802E11FCu;
    ctx->downcount -= 5;
    // 802E11FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1200:
    ctx->pc = 0x802E1200u;
    // 802E1200: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1204:
    ctx->pc = 0x802E1204u;
    // 802E1204: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1208:
    ctx->pc = 0x802E1208u;
    // 802E1208: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E120C:
    ctx->pc = 0x802E120Cu;
    // 802E120C: bl      0x803214A4
    {
            ctx->lr = 0x802E1210u;
            ctx->pc = 0x803214A4u;
            return;
    }

label_802E1210:
    ctx->pc = 0x802E1210u;
    ctx->downcount -= 3;
    // 802E1210: lwz     r3, 176(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1214:
    ctx->pc = 0x802E1214u;
    // 802E1214: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1218:
    ctx->pc = 0x802E1218u;
    // 802E1218: bl      0x8036B234
    {
            ctx->lr = 0x802E121Cu;
            ctx->pc = 0x8036B234u;
            return;
    }

label_802E121C:
    ctx->pc = 0x802E121Cu;
    ctx->downcount -= 19;
    // 802E121C: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1220:
    ctx->pc = 0x802E1220u;
    // 802E1220: lbz     r0, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E1224:
    ctx->pc = 0x802E1224u;
    // 802E1224: stb     r0, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E1228:
    ctx->pc = 0x802E1228u;
    // 802E1228: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E122C:
    ctx->pc = 0x802E122Cu;
    // 802E122C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1230:
    ctx->pc = 0x802E1230u;
    // 802E1230: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1234:
    ctx->pc = 0x802E1234u;
    // 802E1234: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1238:
    ctx->pc = 0x802E1238u;
    // 802E1238: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E123C:
    ctx->pc = 0x802E123Cu;
    ctx->downcount -= 21;
    // 802E123C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1240:
    ctx->pc = 0x802E1240u;
    // 802E1240: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1244:
    ctx->pc = 0x802E1244u;
    // 802E1244: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1248:
    ctx->pc = 0x802E1248u;
    // 802E1248: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E124C:
    ctx->pc = 0x802E124Cu;
    // 802E124C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1250:
    ctx->pc = 0x802E1250u;
    // 802E1250: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1254:
    ctx->pc = 0x802E1254u;
    // 802E1254: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1258:
    ctx->pc = 0x802E1258u;
    // 802E1258: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E125C:
    ctx->pc = 0x802E125Cu;
    // 802E125C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1260:
    ctx->pc = 0x802E1260u;
    // 802E1260: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1264u;
            ctx->pc = target;
            return;
        }
    }

label_802E1264:
    ctx->pc = 0x802E1264u;
    ctx->downcount -= 2;
    // 802E1264: cmpwi   r3, 0
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

label_802E1268:
    ctx->pc = 0x802E1268u;
    // 802E1268: bc    4, 2, 0x802E12CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E12CC;
        }
    }

label_802E126C:
    ctx->pc = 0x802E126Cu;
    ctx->downcount -= 3;
    // 802E126C: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1270:
    ctx->pc = 0x802E1270u;
    // 802E1270: cmpwi   r0, 0
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

label_802E1274:
    ctx->pc = 0x802E1274u;
    // 802E1274: bc    12, 2, 0x802E12CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E12CC;
        }
    }

label_802E1278:
    ctx->pc = 0x802E1278u;
    ctx->downcount -= 4;
    // 802E1278: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E127C:
    ctx->pc = 0x802E127Cu;
    // 802E127C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1280:
    ctx->pc = 0x802E1280u;
    // 802E1280: addi    r4, r4, 9944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9944);

label_802E1284:
    ctx->pc = 0x802E1284u;
    // 802E1284: bl      0x8000E8B0
    {
            ctx->lr = 0x802E1288u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_802E1288:
    ctx->pc = 0x802E1288u;
    ctx->downcount -= 2;
    // 802E1288: cmpwi   r3, 0
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

label_802E128C:
    ctx->pc = 0x802E128Cu;
    // 802E128C: bc    4, 2, 0x802E12A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E12A8;
        }
    }

label_802E1290:
    ctx->pc = 0x802E1290u;
    ctx->downcount -= 2;
    // 802E1290: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1294:
    ctx->pc = 0x802E1294u;
    // 802E1294: bl      0x802E10E8
    {
            ctx->lr = 0x802E1298u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E10E8u;
                return;
            }
            goto label_802E10E8;
    }

label_802E1298:
    ctx->pc = 0x802E1298u;
    ctx->downcount -= 2;
    // 802E1298: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E129C:
    ctx->pc = 0x802E129Cu;
    // 802E129C: bl      0x802E106C
    {
            ctx->lr = 0x802E12A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E106Cu;
                return;
            }
            goto label_802E106C;
    }

label_802E12A0:
    ctx->pc = 0x802E12A0u;
    ctx->downcount -= 2;
    // 802E12A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E12A4:
    ctx->pc = 0x802E12A4u;
    // 802E12A4: bl      0x802E0FE0
    {
            ctx->lr = 0x802E12A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0FE0u;
                return;
            }
            goto label_802E0FE0;
    }

label_802E12A8:
    ctx->pc = 0x802E12A8u;
    ctx->downcount -= 5;
    // 802E12A8: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E12AC:
    ctx->pc = 0x802E12ACu;
    // 802E12AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E12B0:
    ctx->pc = 0x802E12B0u;
    // 802E12B0: addi    r4, r4, 9944
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9944);

label_802E12B4:
    ctx->pc = 0x802E12B4u;
    // 802E12B4: addi    r4, r4, 11
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(11);

label_802E12B8:
    ctx->pc = 0x802E12B8u;
    // 802E12B8: bl      0x8000E8B0
    {
            ctx->lr = 0x802E12BCu;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_802E12BC:
    ctx->pc = 0x802E12BCu;
    ctx->downcount -= 2;
    // 802E12BC: cmpwi   r3, 0
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

label_802E12C0:
    ctx->pc = 0x802E12C0u;
    // 802E12C0: bc    4, 2, 0x802E12CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E12CC;
        }
    }

label_802E12C4:
    ctx->pc = 0x802E12C4u;
    ctx->downcount -= 2;
    // 802E12C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E12C8:
    ctx->pc = 0x802E12C8u;
    // 802E12C8: bl      0x802E0EDC
    {
            ctx->lr = 0x802E12CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0EDCu;
                return;
            }
            goto label_802E0EDC;
    }

label_802E12CC:
    ctx->pc = 0x802E12CCu;
    ctx->downcount -= 16;
    // 802E12CC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E12D0:
    ctx->pc = 0x802E12D0u;
    // 802E12D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E12D4:
    ctx->pc = 0x802E12D4u;
    // 802E12D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E12D8:
    ctx->pc = 0x802E12D8u;
    // 802E12D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E12DC:
    ctx->pc = 0x802E12DCu;
    // 802E12DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E12E0:
    ctx->pc = 0x802E12E0u;
    ctx->downcount -= 21;
    // 802E12E0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E12E4:
    ctx->pc = 0x802E12E4u;
    // 802E12E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E12E8:
    ctx->pc = 0x802E12E8u;
    // 802E12E8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E12EC:
    ctx->pc = 0x802E12ECu;
    // 802E12EC: stmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E12F0:
    ctx->pc = 0x802E12F0u;
    // 802E12F0: lis     r28, -32661
    ctx->gpr[28] = ((u32)(s32)(-32661) << 16);

label_802E12F4:
    ctx->pc = 0x802E12F4u;
    // 802E12F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E12F8:
    ctx->pc = 0x802E12F8u;
    // 802E12F8: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_802E12FC:
    ctx->pc = 0x802E12FCu;
    // 802E12FC: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E1300:
    ctx->pc = 0x802E1300u;
    // 802E1300: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E1304:
    ctx->pc = 0x802E1304u;
    // 802E1304: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E1308:
    ctx->pc = 0x802E1308u;
    // 802E1308: bl      0x80370BD4
    {
            ctx->lr = 0x802E130Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E130C:
    ctx->pc = 0x802E130Cu;
    ctx->downcount -= 7;
    // 802E130C: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1310:
    ctx->pc = 0x802E1310u;
    // 802E1310: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802E1314:
    ctx->pc = 0x802E1314u;
    // 802E1314: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1318:
    ctx->pc = 0x802E1318u;
    // 802E1318: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E131C:
    ctx->pc = 0x802E131Cu;
    // 802E131C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1320:
    ctx->pc = 0x802E1320u;
    // 802E1320: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1324u;
            ctx->pc = target;
            return;
        }
    }

label_802E1324:
    ctx->pc = 0x802E1324u;
    ctx->downcount -= 5;
    // 802E1324: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1328:
    ctx->pc = 0x802E1328u;
    // 802E1328: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E132C:
    ctx->pc = 0x802E132Cu;
    // 802E132C: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_802E1330:
    ctx->pc = 0x802E1330u;
    // 802E1330: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E1334:
    ctx->pc = 0x802E1334u;
    // 802E1334: bl      0x8027714C
    {
            ctx->lr = 0x802E1338u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E1338:
    ctx->pc = 0x802E1338u;
    ctx->downcount -= 5;
    // 802E1338: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E133C:
    ctx->pc = 0x802E133Cu;
    // 802E133C: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_802E1340:
    ctx->pc = 0x802E1340u;
    // 802E1340: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E1344:
    ctx->pc = 0x802E1344u;
    // 802E1344: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E1348:
    ctx->pc = 0x802E1348u;
    // 802E1348: bl      0x80370BD4
    {
            ctx->lr = 0x802E134Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E134C:
    ctx->pc = 0x802E134Cu;
    ctx->downcount -= 7;
    // 802E134C: lwz     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1350:
    ctx->pc = 0x802E1350u;
    // 802E1350: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802E1354:
    ctx->pc = 0x802E1354u;
    // 802E1354: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1358:
    ctx->pc = 0x802E1358u;
    // 802E1358: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E135C:
    ctx->pc = 0x802E135Cu;
    // 802E135C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1360:
    ctx->pc = 0x802E1360u;
    // 802E1360: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1364u;
            ctx->pc = target;
            return;
        }
    }

label_802E1364:
    ctx->pc = 0x802E1364u;
    ctx->downcount -= 5;
    // 802E1364: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1368:
    ctx->pc = 0x802E1368u;
    // 802E1368: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E136C:
    ctx->pc = 0x802E136Cu;
    // 802E136C: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E1370:
    ctx->pc = 0x802E1370u;
    // 802E1370: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E1374:
    ctx->pc = 0x802E1374u;
    // 802E1374: bl      0x8027714C
    {
            ctx->lr = 0x802E1378u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E1378:
    ctx->pc = 0x802E1378u;
    ctx->downcount -= 5;
    // 802E1378: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E137C:
    ctx->pc = 0x802E137Cu;
    // 802E137C: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_802E1380:
    ctx->pc = 0x802E1380u;
    // 802E1380: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E1384:
    ctx->pc = 0x802E1384u;
    // 802E1384: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E1388:
    ctx->pc = 0x802E1388u;
    // 802E1388: bl      0x80370BD4
    {
            ctx->lr = 0x802E138Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E138C:
    ctx->pc = 0x802E138Cu;
    ctx->downcount -= 7;
    // 802E138C: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1390:
    ctx->pc = 0x802E1390u;
    // 802E1390: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_802E1394:
    ctx->pc = 0x802E1394u;
    // 802E1394: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1398:
    ctx->pc = 0x802E1398u;
    // 802E1398: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E139C:
    ctx->pc = 0x802E139Cu;
    // 802E139C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E13A0:
    ctx->pc = 0x802E13A0u;
    // 802E13A0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E13A4u;
            ctx->pc = target;
            return;
        }
    }

label_802E13A4:
    ctx->pc = 0x802E13A4u;
    ctx->downcount -= 5;
    // 802E13A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E13A8:
    ctx->pc = 0x802E13A8u;
    // 802E13A8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E13AC:
    ctx->pc = 0x802E13ACu;
    // 802E13AC: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E13B0:
    ctx->pc = 0x802E13B0u;
    // 802E13B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E13B4:
    ctx->pc = 0x802E13B4u;
    // 802E13B4: bl      0x8027714C
    {
            ctx->lr = 0x802E13B8u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E13B8:
    ctx->pc = 0x802E13B8u;
    ctx->downcount -= 2;
    // 802E13B8: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_802E13BC:
    ctx->pc = 0x802E13BCu;
    // 802E13BC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E13C0:
    ctx->downcount -= 3;
    // 802E13C0: add   r26, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_802E13C4:
    // 802E13C4: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_802E13C8:
    // 802E13C8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E13CC:
    ctx->pc = 0x802E13CCu;
    ctx->downcount -= 5;
    // 802E13CC: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E13D0:
    // 802E13D0: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_802E13D4:
    // 802E13D4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E13D8:
    // 802E13D8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E13DC:
    // 802E13DC: bl      0x80370BD4
    {
            ctx->lr = 0x802E13E0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E13E0:
    ctx->downcount -= 8;
    // 802E13E0: add   r3, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E13E4:
    ctx->pc = 0x802E13E4u;
    // 802E13E4: lwz     r27, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_802E13E8:
    ctx->pc = 0x802E13E8u;
    // 802E13E8: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E13EC:
    ctx->pc = 0x802E13ECu;
    // 802E13EC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E13F0:
    ctx->pc = 0x802E13F0u;
    // 802E13F0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E13F4:
    ctx->pc = 0x802E13F4u;
    // 802E13F4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E13F8:
    ctx->pc = 0x802E13F8u;
    // 802E13F8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E13FCu;
            ctx->pc = target;
            return;
        }
    }

label_802E13FC:
    ctx->downcount -= 5;
    // 802E13FC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1400:
    // 802E1400: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802E1404:
    // 802E1404: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E1408:
    // 802E1408: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E140C:
    // 802E140C: bl      0x8027714C
    {
            ctx->lr = 0x802E1410u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E1410:
    ctx->downcount -= 4;
    // 802E1410: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_802E1414:
    // 802E1414: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802E1418:
    // 802E1418: cmpwi   r24, 2
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

label_802E141C:
    // 802E141C: bc    12, 0, 0x802E13CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E13CCu;
                return;
            }
            goto label_802E13CC;
        }
    }

label_802E1420:
    ctx->downcount -= 4;
    // 802E1420: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_802E1424:
    // 802E1424: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_802E1428:
    // 802E1428: cmpwi   r25, 2
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

label_802E142C:
    // 802E142C: bc    12, 0, 0x802E13C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E13C0u;
                return;
            }
            goto label_802E13C0;
        }
    }

label_802E1430:
    ctx->pc = 0x802E1430u;
    ctx->downcount -= 6;
    // 802E1430: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1434:
    ctx->pc = 0x802E1434u;
    // 802E1434: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E1438:
    ctx->pc = 0x802E1438u;
    // 802E1438: addi    r4, r4, 22792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22792);

label_802E143C:
    ctx->pc = 0x802E143Cu;
    // 802E143C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E1440:
    ctx->pc = 0x802E1440u;
    // 802E1440: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E1444:
    ctx->pc = 0x802E1444u;
    // 802E1444: bl      0x80370BD4
    {
            ctx->lr = 0x802E1448u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E1448:
    ctx->pc = 0x802E1448u;
    ctx->downcount -= 7;
    // 802E1448: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E144C:
    ctx->pc = 0x802E144Cu;
    // 802E144C: lwz     r27, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_802E1450:
    ctx->pc = 0x802E1450u;
    // 802E1450: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1454:
    ctx->pc = 0x802E1454u;
    // 802E1454: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1458:
    ctx->pc = 0x802E1458u;
    // 802E1458: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E145C:
    ctx->pc = 0x802E145Cu;
    // 802E145C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1460u;
            ctx->pc = target;
            return;
        }
    }

label_802E1460:
    ctx->pc = 0x802E1460u;
    ctx->downcount -= 5;
    // 802E1460: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1464:
    ctx->pc = 0x802E1464u;
    // 802E1464: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802E1468:
    ctx->pc = 0x802E1468u;
    // 802E1468: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E146C:
    ctx->pc = 0x802E146Cu;
    // 802E146C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E1470:
    ctx->pc = 0x802E1470u;
    // 802E1470: bl      0x8027714C
    {
            ctx->lr = 0x802E1474u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E1474:
    ctx->pc = 0x802E1474u;
    ctx->downcount -= 16;
    // 802E1474: lmw     r24, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 24; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1478:
    ctx->pc = 0x802E1478u;
    // 802E1478: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E147C:
    ctx->pc = 0x802E147Cu;
    // 802E147C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1480:
    ctx->pc = 0x802E1480u;
    // 802E1480: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802E1484:
    ctx->pc = 0x802E1484u;
    // 802E1484: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1488:
    ctx->pc = 0x802E1488u;
    ctx->downcount -= 18;
    // 802E1488: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E148C:
    ctx->pc = 0x802E148Cu;
    // 802E148C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1490:
    ctx->pc = 0x802E1490u;
    // 802E1490: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1494:
    ctx->pc = 0x802E1494u;
    // 802E1494: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1498:
    ctx->pc = 0x802E1498u;
    // 802E1498: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E149C:
    ctx->pc = 0x802E149Cu;
    // 802E149C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E14A0:
    ctx->pc = 0x802E14A0u;
    // 802E14A0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802E14A4:
    ctx->pc = 0x802E14A4u;
    // 802E14A4: bl      0x802E0B30
    {
            ctx->lr = 0x802E14A8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E14A8:
    ctx->pc = 0x802E14A8u;
    ctx->downcount -= 16;
    // 802E14A8: rlwinm r5, r30, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_802E14AC:
    ctx->pc = 0x802E14ACu;
    // 802E14AC: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E14B0:
    ctx->pc = 0x802E14B0u;
    // 802E14B0: addic   r3, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[3] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E14B4:
    ctx->pc = 0x802E14B4u;
    // 802E14B4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E14B8:
    ctx->pc = 0x802E14B8u;
    // 802E14B8: subfe   r6, r3, r5
    {
        u32 a = ~ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[6] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E14BC:
    ctx->pc = 0x802E14BCu;
    // 802E14BC: stw     r29, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_802E14C0:
    ctx->pc = 0x802E14C0u;
    // 802E14C0: addic   r4, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[4] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E14C4:
    ctx->pc = 0x802E14C4u;
    // 802E14C4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E14C8:
    ctx->pc = 0x802E14C8u;
    // 802E14C8: subfe   r5, r4, r5
    {
        u32 a = ~ctx->gpr[4];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[5] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E14CC:
    ctx->pc = 0x802E14CCu;
    // 802E14CC: stb     r30, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_802E14D0:
    ctx->pc = 0x802E14D0u;
    // 802E14D0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E14D4:
    ctx->pc = 0x802E14D4u;
    // 802E14D4: stw     r6, 196(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802E14D8:
    ctx->pc = 0x802E14D8u;
    // 802E14D8: stw     r5, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E14DC:
    ctx->pc = 0x802E14DCu;
    // 802E14DC: stb     r0, 217(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(217);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E14E0:
    ctx->pc = 0x802E14E0u;
    // 802E14E0: stw     r0, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E14E4:
    ctx->pc = 0x802E14E4u;
    // 802E14E4: bl      0x802D2944
    {
            ctx->lr = 0x802E14E8u;
            ctx->pc = 0x802D2944u;
            return;
    }

label_802E14E8:
    ctx->pc = 0x802E14E8u;
    ctx->downcount -= 4;
    // 802E14E8: stw     r3, 208(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E14EC:
    ctx->pc = 0x802E14ECu;
    // 802E14EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E14F0:
    ctx->pc = 0x802E14F0u;
    // 802E14F0: lwz     r4, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E14F4:
    ctx->pc = 0x802E14F4u;
    // 802E14F4: bl      0x802D2930
    {
            ctx->lr = 0x802E14F8u;
            ctx->pc = 0x802D2930u;
            return;
    }

label_802E14F8:
    ctx->pc = 0x802E14F8u;
    ctx->downcount -= 3;
    // 802E14F8: stw     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E14FC:
    ctx->pc = 0x802E14FCu;
    // 802E14FC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1500:
    ctx->pc = 0x802E1500u;
    // 802E1500: bl      0x802E0B30
    {
            ctx->lr = 0x802E1504u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0B30u;
                return;
            }
            goto label_802E0B30;
    }

label_802E1504:
    ctx->pc = 0x802E1504u;
    ctx->downcount -= 3;
    // 802E1504: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1508:
    ctx->pc = 0x802E1508u;
    // 802E1508: lwz     r4, 192(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(192);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E150C:
    ctx->pc = 0x802E150Cu;
    // 802E150C: bl      0x802D2A70
    {
            ctx->lr = 0x802E1510u;
            ctx->pc = 0x802D2A70u;
            return;
    }

label_802E1510:
    ctx->pc = 0x802E1510u;
    ctx->downcount -= 2;
    // 802E1510: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1514:
    ctx->pc = 0x802E1514u;
    // 802E1514: bl      0x802E1168
    {
            ctx->lr = 0x802E1518u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1168u;
                return;
            }
            goto label_802E1168;
    }

label_802E1518:
    ctx->pc = 0x802E1518u;
    ctx->downcount -= 3;
    // 802E1518: lbz     r0, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E151C:
    ctx->pc = 0x802E151Cu;
    // 802E151C: cmpwi   r0, 0
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

label_802E1520:
    ctx->pc = 0x802E1520u;
    // 802E1520: bc    12, 2, 0x802E1540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1540;
        }
    }

label_802E1524:
    ctx->pc = 0x802E1524u;
    ctx->downcount -= 3;
    // 802E1524: lwz     r0, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1528:
    ctx->pc = 0x802E1528u;
    // 802E1528: cmpwi   r0, 0
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

label_802E152C:
    ctx->pc = 0x802E152Cu;
    // 802E152C: bc    4, 2, 0x802E1540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E1540;
        }
    }

label_802E1530:
    ctx->pc = 0x802E1530u;
    ctx->downcount -= 3;
    // 802E1530: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1534:
    ctx->pc = 0x802E1534u;
    // 802E1534: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1538:
    ctx->pc = 0x802E1538u;
    // 802E1538: bl      0x803457B8
    {
            ctx->lr = 0x802E153Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E153C:
    ctx->pc = 0x802E153Cu;
    ctx->downcount -= 1;
    // 802E153C: b       0x802E154C
    {
            goto label_802E154C;
    }

label_802E1540:
    ctx->pc = 0x802E1540u;
    ctx->downcount -= 3;
    // 802E1540: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1544:
    ctx->pc = 0x802E1544u;
    // 802E1544: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E1548:
    ctx->pc = 0x802E1548u;
    // 802E1548: bl      0x803457B8
    {
            ctx->lr = 0x802E154Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E154C:
    ctx->pc = 0x802E154Cu;
    ctx->downcount -= 16;
    // 802E154C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1550:
    ctx->pc = 0x802E1550u;
    // 802E1550: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1554:
    ctx->pc = 0x802E1554u;
    // 802E1554: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1558:
    ctx->pc = 0x802E1558u;
    // 802E1558: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E155C:
    ctx->pc = 0x802E155Cu;
    // 802E155C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1560:
    ctx->pc = 0x802E1560u;
    ctx->downcount -= 21;
    // 802E1560: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1564:
    ctx->pc = 0x802E1564u;
    // 802E1564: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1568:
    ctx->pc = 0x802E1568u;
    // 802E1568: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E156C:
    ctx->pc = 0x802E156Cu;
    // 802E156C: stmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1570:
    ctx->pc = 0x802E1570u;
    // 802E1570: or   r25, r4, r4
    {
        ctx->gpr[25] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1574:
    ctx->pc = 0x802E1574u;
    // 802E1574: lis     r28, -32660
    ctx->gpr[28] = ((u32)(s32)(-32660) << 16);

label_802E1578:
    ctx->pc = 0x802E1578u;
    // 802E1578: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E157C:
    ctx->pc = 0x802E157Cu;
    // 802E157C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_802E1580:
    ctx->pc = 0x802E1580u;
    // 802E1580: or   r5, r25, r25
    {
        ctx->gpr[5] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1584:
    ctx->pc = 0x802E1584u;
    // 802E1584: addi    r28, r28, 8392
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(8392);

label_802E1588:
    ctx->pc = 0x802E1588u;
    // 802E1588: bl      0x802E1A64
    {
            ctx->lr = 0x802E158Cu;
            goto label_802E1A64;
    }

label_802E158C:
    ctx->pc = 0x802E158Cu;
    ctx->downcount -= 10;
    // 802E158C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802E1590:
    ctx->pc = 0x802E1590u;
    // 802E1590: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E1594:
    ctx->pc = 0x802E1594u;
    // 802E1594: addi    r4, r4, 8576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8576);

label_802E1598:
    ctx->pc = 0x802E1598u;
    // 802E1598: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E159C:
    ctx->pc = 0x802E159Cu;
    // 802E159C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802E15A0:
    ctx->pc = 0x802E15A0u;
    // 802E15A0: addi    r5, r28, 48
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(48);

label_802E15A4:
    ctx->pc = 0x802E15A4u;
    // 802E15A4: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E15A8:
    ctx->pc = 0x802E15A8u;
    // 802E15A8: addi    r4, r28, 36
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(36);

label_802E15AC:
    ctx->pc = 0x802E15ACu;
    // 802E15AC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E15B0:
    ctx->pc = 0x802E15B0u;
    // 802E15B0: bl      0x802E1984
    {
            ctx->lr = 0x802E15B4u;
            goto label_802E1984;
    }

label_802E15B4:
    ctx->pc = 0x802E15B4u;
    ctx->downcount -= 5;
    // 802E15B4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E15B8:
    ctx->pc = 0x802E15B8u;
    // 802E15B8: addi    r4, r28, 60
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(60);

label_802E15BC:
    ctx->pc = 0x802E15BCu;
    // 802E15BC: addi    r5, r28, 72
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(72);

label_802E15C0:
    ctx->pc = 0x802E15C0u;
    // 802E15C0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802E15C4:
    ctx->pc = 0x802E15C4u;
    // 802E15C4: bl      0x802E1984
    {
            ctx->lr = 0x802E15C8u;
            goto label_802E1984;
    }

label_802E15C8:
    ctx->pc = 0x802E15C8u;
    ctx->downcount -= 5;
    // 802E15C8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E15CC:
    ctx->pc = 0x802E15CCu;
    // 802E15CC: addi    r4, r28, 84
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(84);

label_802E15D0:
    ctx->pc = 0x802E15D0u;
    // 802E15D0: addi    r5, r28, 96
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(96);

label_802E15D4:
    ctx->pc = 0x802E15D4u;
    // 802E15D4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_802E15D8:
    ctx->pc = 0x802E15D8u;
    // 802E15D8: bl      0x802E1984
    {
            ctx->lr = 0x802E15DCu;
            goto label_802E1984;
    }

label_802E15DC:
    ctx->pc = 0x802E15DCu;
    ctx->downcount -= 5;
    // 802E15DC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E15E0:
    ctx->pc = 0x802E15E0u;
    // 802E15E0: addi    r4, r28, 108
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(108);

label_802E15E4:
    ctx->pc = 0x802E15E4u;
    // 802E15E4: addi    r5, r28, 120
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(120);

label_802E15E8:
    ctx->pc = 0x802E15E8u;
    // 802E15E8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_802E15EC:
    ctx->pc = 0x802E15ECu;
    // 802E15EC: bl      0x802E1984
    {
            ctx->lr = 0x802E15F0u;
            goto label_802E1984;
    }

label_802E15F0:
    ctx->pc = 0x802E15F0u;
    ctx->downcount -= 5;
    // 802E15F0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E15F4:
    ctx->pc = 0x802E15F4u;
    // 802E15F4: addi    r4, r28, 132
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(132);

label_802E15F8:
    ctx->pc = 0x802E15F8u;
    // 802E15F8: addi    r5, r28, 144
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(144);

label_802E15FC:
    ctx->pc = 0x802E15FCu;
    // 802E15FC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_802E1600:
    ctx->pc = 0x802E1600u;
    // 802E1600: bl      0x802E1984
    {
            ctx->lr = 0x802E1604u;
            goto label_802E1984;
    }

label_802E1604:
    ctx->pc = 0x802E1604u;
    ctx->downcount -= 5;
    // 802E1604: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E1608:
    ctx->pc = 0x802E1608u;
    // 802E1608: addi    r4, r28, 156
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(156);

label_802E160C:
    ctx->pc = 0x802E160Cu;
    // 802E160C: addi    r5, r28, 168
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(168);

label_802E1610:
    ctx->pc = 0x802E1610u;
    // 802E1610: li      r6, 5
    ctx->gpr[6] = (u32)(s32)(5);

label_802E1614:
    ctx->pc = 0x802E1614u;
    // 802E1614: bl      0x802E1984
    {
            ctx->lr = 0x802E1618u;
            goto label_802E1984;
    }

label_802E1618:
    ctx->pc = 0x802E1618u;
    ctx->downcount -= 4;
    // 802E1618: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E161C:
    ctx->pc = 0x802E161Cu;
    // 802E161C: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_802E1620:
    ctx->pc = 0x802E1620u;
    // 802E1620: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1624:
    ctx->pc = 0x802E1624u;
    // 802E1624: bl      0x801C1C5C
    {
            ctx->lr = 0x802E1628u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E1628:
    ctx->pc = 0x802E1628u;
    ctx->downcount -= 2;
    // 802E1628: cmpwi   r3, 0
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

label_802E162C:
    ctx->pc = 0x802E162Cu;
    // 802E162C: bc    12, 2, 0x802E1638
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1638;
        }
    }

label_802E1630:
    ctx->pc = 0x802E1630u;
    ctx->downcount -= 2;
    // 802E1630: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1634:
    ctx->pc = 0x802E1634u;
    // 802E1634: bl      0x803554FC
    {
            ctx->lr = 0x802E1638u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_802E1638:
    ctx->pc = 0x802E1638u;
    ctx->downcount -= 5;
    // 802E1638: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E163C:
    ctx->pc = 0x802E163Cu;
    // 802E163C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1640:
    ctx->pc = 0x802E1640u;
    // 802E1640: li      r3, 304
    ctx->gpr[3] = (u32)(s32)(304);

label_802E1644:
    ctx->pc = 0x802E1644u;
    // 802E1644: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1648:
    ctx->pc = 0x802E1648u;
    // 802E1648: bl      0x801C1C5C
    {
            ctx->lr = 0x802E164Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E164C:
    ctx->pc = 0x802E164Cu;
    ctx->downcount -= 2;
    // 802E164C: cmpwi   r3, 0
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

label_802E1650:
    ctx->pc = 0x802E1650u;
    // 802E1650: bc    12, 2, 0x802E165C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E165C;
        }
    }

label_802E1654:
    ctx->pc = 0x802E1654u;
    ctx->downcount -= 2;
    // 802E1654: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1658:
    ctx->pc = 0x802E1658u;
    // 802E1658: bl      0x80308C14
    {
            ctx->lr = 0x802E165Cu;
            ctx->pc = 0x80308C14u;
            return;
    }

label_802E165C:
    ctx->pc = 0x802E165Cu;
    ctx->downcount -= 3;
    // 802E165C: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1660:
    ctx->pc = 0x802E1660u;
    // 802E1660: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802E1664:
    ctx->pc = 0x802E1664u;
    // 802E1664: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E1668:
    ctx->downcount -= 3;
    // 802E1668: add   r28, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802E166C:
    // 802E166C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802E1670:
    // 802E1670: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E1674:
    ctx->downcount -= 4;
    // 802E1674: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1678:
    // 802E1678: li      r3, 296
    ctx->gpr[3] = (u32)(s32)(296);

label_802E167C:
    // 802E167C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1680:
    // 802E1680: bl      0x801C1C5C
    {
            ctx->lr = 0x802E1684u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E1684:
    ctx->downcount -= 2;
    // 802E1684: cmpwi   r3, 0
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

label_802E1688:
    // 802E1688: bc    12, 2, 0x802E169C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E169C;
        }
    }

label_802E168C:
    ctx->downcount -= 4;
    // 802E168C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_802E1690:
    // 802E1690: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_802E1694:
    // 802E1694: or   r6, r25, r25
    {
        ctx->gpr[6] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1698:
    // 802E1698: bl      0x802E0670
    {
            ctx->lr = 0x802E169Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E0670u;
                return;
            }
            goto label_802E0670;
    }

label_802E169C:
    ctx->downcount -= 6;
    // 802E169C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E16A0:
    // 802E16A0: add   r4, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E16A4:
    // 802E16A4: cmpwi   r26, 2
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

label_802E16A8:
    ctx->pc = 0x802E16A8u;
    // 802E16A8: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E16AC:
    // 802E16AC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E16B0:
    // 802E16B0: bc    12, 0, 0x802E1674
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1674u;
                return;
            }
            goto label_802E1674;
        }
    }

label_802E16B4:
    ctx->downcount -= 4;
    // 802E16B4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802E16B8:
    // 802E16B8: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_802E16BC:
    // 802E16BC: cmpwi   r27, 2
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

label_802E16C0:
    // 802E16C0: bc    12, 0, 0x802E1668
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1668u;
                return;
            }
            goto label_802E1668;
        }
    }

label_802E16C4:
    ctx->pc = 0x802E16C4u;
    ctx->downcount -= 4;
    // 802E16C4: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E16C8:
    ctx->pc = 0x802E16C8u;
    // 802E16C8: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_802E16CC:
    ctx->pc = 0x802E16CCu;
    // 802E16CC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E16D0:
    ctx->pc = 0x802E16D0u;
    // 802E16D0: bl      0x801C1C5C
    {
            ctx->lr = 0x802E16D4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E16D4:
    ctx->pc = 0x802E16D4u;
    ctx->downcount -= 2;
    // 802E16D4: cmpwi   r3, 0
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

label_802E16D8:
    ctx->pc = 0x802E16D8u;
    // 802E16D8: bc    12, 2, 0x802E16E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E16E4;
        }
    }

label_802E16DC:
    ctx->pc = 0x802E16DCu;
    ctx->downcount -= 2;
    // 802E16DC: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E16E0:
    ctx->pc = 0x802E16E0u;
    // 802E16E0: bl      0x80321328
    {
            ctx->lr = 0x802E16E4u;
            ctx->pc = 0x80321328u;
            return;
    }

label_802E16E4:
    ctx->pc = 0x802E16E4u;
    ctx->downcount -= 5;
    // 802E16E4: stw     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E16E8:
    ctx->pc = 0x802E16E8u;
    // 802E16E8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E16EC:
    ctx->pc = 0x802E16ECu;
    // 802E16EC: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_802E16F0:
    ctx->pc = 0x802E16F0u;
    // 802E16F0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E16F4:
    ctx->pc = 0x802E16F4u;
    // 802E16F4: bl      0x801C1C5C
    {
            ctx->lr = 0x802E16F8u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E16F8:
    ctx->pc = 0x802E16F8u;
    ctx->downcount -= 2;
    // 802E16F8: cmpwi   r3, 0
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

label_802E16FC:
    ctx->pc = 0x802E16FCu;
    // 802E16FC: bc    12, 2, 0x802E1708
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1708;
        }
    }

label_802E1700:
    ctx->pc = 0x802E1700u;
    ctx->downcount -= 2;
    // 802E1700: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1704:
    ctx->pc = 0x802E1704u;
    // 802E1704: bl      0x802E20CC
    {
            ctx->lr = 0x802E1708u;
            goto label_802E20CC;
    }

label_802E1708:
    ctx->pc = 0x802E1708u;
    ctx->downcount -= 5;
    // 802E1708: stw     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E170C:
    ctx->pc = 0x802E170Cu;
    // 802E170C: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1710:
    ctx->pc = 0x802E1710u;
    // 802E1710: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_802E1714:
    ctx->pc = 0x802E1714u;
    // 802E1714: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1718:
    ctx->pc = 0x802E1718u;
    // 802E1718: bl      0x801C1C5C
    {
            ctx->lr = 0x802E171Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E171C:
    ctx->pc = 0x802E171Cu;
    ctx->downcount -= 2;
    // 802E171C: cmpwi   r3, 0
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

label_802E1720:
    ctx->pc = 0x802E1720u;
    // 802E1720: bc    12, 2, 0x802E172C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E172C;
        }
    }

label_802E1724:
    ctx->pc = 0x802E1724u;
    ctx->downcount -= 2;
    // 802E1724: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E1728:
    ctx->pc = 0x802E1728u;
    // 802E1728: bl      0x802E3CD8
    {
            ctx->lr = 0x802E172Cu;
            ctx->pc = 0x802E3CD8u;
            return;
    }

label_802E172C:
    ctx->pc = 0x802E172Cu;
    ctx->downcount -= 4;
    // 802E172C: stw     r3, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1730:
    ctx->pc = 0x802E1730u;
    // 802E1730: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1734:
    ctx->pc = 0x802E1734u;
    // 802E1734: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1738:
    ctx->pc = 0x802E1738u;
    // 802E1738: bl      0x802A6408
    {
            ctx->lr = 0x802E173Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E173C:
    ctx->pc = 0x802E173Cu;
    ctx->downcount -= 3;
    // 802E173C: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1740:
    ctx->pc = 0x802E1740u;
    // 802E1740: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1744:
    ctx->pc = 0x802E1744u;
    // 802E1744: bl      0x802A6408
    {
            ctx->lr = 0x802E1748u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E1748:
    ctx->pc = 0x802E1748u;
    ctx->downcount -= 2;
    // 802E1748: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802E174C:
    ctx->pc = 0x802E174Cu;
    // 802E174C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E1750:
    ctx->downcount -= 3;
    // 802E1750: add   r28, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802E1754:
    // 802E1754: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802E1758:
    // 802E1758: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E175C:
    ctx->downcount -= 4;
    // 802E175C: add   r4, r30, r28
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E1760:
    // 802E1760: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1764:
    ctx->pc = 0x802E1764u;
    // 802E1764: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1768:
    // 802E1768: bl      0x802A6408
    {
            ctx->lr = 0x802E176Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E176C:
    ctx->downcount -= 4;
    // 802E176C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802E1770:
    // 802E1770: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E1774:
    // 802E1774: cmpwi   r27, 2
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

label_802E1778:
    // 802E1778: bc    12, 0, 0x802E175C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E175Cu;
                return;
            }
            goto label_802E175C;
        }
    }

label_802E177C:
    ctx->downcount -= 4;
    // 802E177C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E1780:
    // 802E1780: addi    r29, r29, 8
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(8);

label_802E1784:
    // 802E1784: cmpwi   r26, 2
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

label_802E1788:
    // 802E1788: bc    12, 0, 0x802E1750
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1750u;
                return;
            }
            goto label_802E1750;
        }
    }

label_802E178C:
    ctx->pc = 0x802E178Cu;
    ctx->downcount -= 3;
    // 802E178C: lwz     r4, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1790:
    ctx->pc = 0x802E1790u;
    // 802E1790: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1794:
    ctx->pc = 0x802E1794u;
    // 802E1794: bl      0x802A6408
    {
            ctx->lr = 0x802E1798u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E1798:
    ctx->pc = 0x802E1798u;
    ctx->downcount -= 3;
    // 802E1798: lwz     r4, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E179C:
    ctx->pc = 0x802E179Cu;
    // 802E179C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E17A0:
    ctx->pc = 0x802E17A0u;
    // 802E17A0: bl      0x802A6408
    {
            ctx->lr = 0x802E17A4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E17A4:
    ctx->pc = 0x802E17A4u;
    ctx->downcount -= 3;
    // 802E17A4: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E17A8:
    ctx->pc = 0x802E17A8u;
    // 802E17A8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E17AC:
    ctx->pc = 0x802E17ACu;
    // 802E17AC: bl      0x802A6408
    {
            ctx->lr = 0x802E17B0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_802E17B0:
    ctx->pc = 0x802E17B0u;
    ctx->downcount -= 4;
    // 802E17B0: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E17B4:
    ctx->pc = 0x802E17B4u;
    // 802E17B4: li      r3, 52
    ctx->gpr[3] = (u32)(s32)(52);

label_802E17B8:
    ctx->pc = 0x802E17B8u;
    // 802E17B8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E17BC:
    ctx->pc = 0x802E17BCu;
    // 802E17BC: bl      0x801C1C5C
    {
            ctx->lr = 0x802E17C0u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E17C0:
    ctx->pc = 0x802E17C0u;
    ctx->downcount -= 2;
    // 802E17C0: cmpwi   r3, 0
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

label_802E17C4:
    ctx->pc = 0x802E17C4u;
    // 802E17C4: bc    12, 2, 0x802E17D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E17D0;
        }
    }

label_802E17C8:
    ctx->pc = 0x802E17C8u;
    ctx->downcount -= 2;
    // 802E17C8: or   r4, r25, r25
    {
        ctx->gpr[4] = ctx->gpr[25] | ctx->gpr[25];
    }

label_802E17CC:
    ctx->pc = 0x802E17CCu;
    // 802E17CC: bl      0x803214B8
    {
            ctx->lr = 0x802E17D0u;
            ctx->pc = 0x803214B8u;
            return;
    }

label_802E17D0:
    ctx->pc = 0x802E17D0u;
    ctx->downcount -= 3;
    // 802E17D0: stw     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E17D4:
    ctx->pc = 0x802E17D4u;
    // 802E17D4: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_802E17D8:
    ctx->pc = 0x802E17D8u;
    // 802E17D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E17DC:
    ctx->downcount -= 3;
    // 802E17DC: add   r28, r30, r31
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_802E17E0:
    // 802E17E0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802E17E4:
    // 802E17E4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E17E8:
    ctx->downcount -= 4;
    // 802E17E8: add   r3, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E17EC:
    ctx->pc = 0x802E17ECu;
    // 802E17EC: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E17F0:
    // 802E17F0: cmpwi   r4, 0
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

label_802E17F4:
    // 802E17F4: bc    12, 2, 0x802E17FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E17FC;
        }
    }

label_802E17F8:
    ctx->downcount -= 1;
    // 802E17F8: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_802E17FC:
    ctx->pc = 0x802E17FCu;
    ctx->downcount -= 2;
    // 802E17FC: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1800:
    // 802E1800: bl      0x8026F1B0
    {
            ctx->lr = 0x802E1804u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_802E1804:
    ctx->downcount -= 4;
    // 802E1804: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802E1808:
    // 802E1808: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_802E180C:
    // 802E180C: cmpwi   r27, 2
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

label_802E1810:
    // 802E1810: bc    12, 0, 0x802E17E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E17E8u;
                return;
            }
            goto label_802E17E8;
        }
    }

label_802E1814:
    ctx->downcount -= 4;
    // 802E1814: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_802E1818:
    // 802E1818: addi    r30, r30, 8
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8);

label_802E181C:
    // 802E181C: cmpwi   r26, 2
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

label_802E1820:
    // 802E1820: bc    12, 0, 0x802E17DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E17DCu;
                return;
            }
            goto label_802E17DC;
        }
    }

label_802E1824:
    ctx->pc = 0x802E1824u;
    ctx->downcount -= 3;
    // 802E1824: lwz     r4, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1828:
    ctx->pc = 0x802E1828u;
    // 802E1828: cmpwi   r4, 0
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

label_802E182C:
    ctx->pc = 0x802E182Cu;
    // 802E182C: bc    12, 2, 0x802E1834
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1834;
        }
    }

label_802E1830:
    ctx->pc = 0x802E1830u;
    ctx->downcount -= 1;
    // 802E1830: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_802E1834:
    ctx->pc = 0x802E1834u;
    ctx->downcount -= 2;
    // 802E1834: lwz     r3, 188(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1838:
    ctx->pc = 0x802E1838u;
    // 802E1838: bl      0x8026F1B0
    {
            ctx->lr = 0x802E183Cu;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_802E183C:
    ctx->pc = 0x802E183Cu;
    ctx->downcount -= 26;
    // 802E183C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E1840:
    ctx->pc = 0x802E1840u;
    // 802E1840: stw     r0, 192(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1844:
    ctx->pc = 0x802E1844u;
    // 802E1844: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1848:
    ctx->pc = 0x802E1848u;
    // 802E1848: stw     r0, 196(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E184C:
    ctx->pc = 0x802E184Cu;
    // 802E184C: stw     r0, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1850:
    ctx->pc = 0x802E1850u;
    // 802E1850: stw     r0, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1854:
    ctx->pc = 0x802E1854u;
    // 802E1854: stw     r0, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1858:
    ctx->pc = 0x802E1858u;
    // 802E1858: stw     r0, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E185C:
    ctx->pc = 0x802E185Cu;
    // 802E185C: stb     r0, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E1860:
    ctx->pc = 0x802E1860u;
    // 802E1860: stb     r0, 217(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(217);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E1864:
    ctx->pc = 0x802E1864u;
    // 802E1864: lmw     r25, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 25; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1868:
    ctx->pc = 0x802E1868u;
    // 802E1868: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E186C:
    ctx->pc = 0x802E186Cu;
    // 802E186C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1870:
    ctx->pc = 0x802E1870u;
    // 802E1870: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802E1874:
    ctx->pc = 0x802E1874u;
    // 802E1874: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1878:
    ctx->pc = 0x802E1878u;
    ctx->downcount -= 18;
    // 802E1878: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E187C:
    ctx->pc = 0x802E187Cu;
    // 802E187C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1880:
    // 802E1880: cmpwi   r3, 0
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

label_802E1884:
    ctx->pc = 0x802E1884u;
    // 802E1884: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1888:
    ctx->pc = 0x802E1888u;
    // 802E1888: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E188C:
    // 802E188C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1890:
    // 802E1890: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1894:
    // 802E1894: bc    12, 2, 0x802E18C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E18C4;
        }
    }

label_802E1898:
    ctx->downcount -= 1;
    // 802E1898: bc    12, 2, 0x802E18B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E18B4;
        }
    }

label_802E189C:
    ctx->downcount -= 3;
    // 802E189C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E18A0:
    // 802E18A0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E18A4:
    // 802E18A4: bl      0x802E1944
    {
            ctx->lr = 0x802E18A8u;
            goto label_802E1944;
    }

label_802E18A8:
    ctx->downcount -= 3;
    // 802E18A8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E18AC:
    // 802E18AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E18B0:
    // 802E18B0: bl      0x801ED118
    {
            ctx->lr = 0x802E18B4u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802E18B4:
    ctx->downcount -= 2;
    // 802E18B4: cmpwi   r31, 0
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

label_802E18B8:
    // 802E18B8: bc    4, 1, 0x802E18C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E18C4;
        }
    }

label_802E18BC:
    ctx->downcount -= 2;
    // 802E18BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E18C0:
    // 802E18C0: bl      0x801C1C90
    {
            ctx->lr = 0x802E18C4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E18C4:
    ctx->downcount -= 17;
    // 802E18C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E18C8:
    ctx->pc = 0x802E18C8u;
    // 802E18C8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E18CC:
    ctx->pc = 0x802E18CCu;
    // 802E18CC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E18D0:
    ctx->pc = 0x802E18D0u;
    // 802E18D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E18D4:
    // 802E18D4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E18D8:
    ctx->pc = 0x802E18D8u;
    // 802E18D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E18DC:
    ctx->pc = 0x802E18DCu;
    ctx->downcount -= 18;
    // 802E18DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E18E0:
    ctx->pc = 0x802E18E0u;
    // 802E18E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E18E4:
    // 802E18E4: cmpwi   r3, 0
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

label_802E18E8:
    ctx->pc = 0x802E18E8u;
    // 802E18E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E18EC:
    ctx->pc = 0x802E18ECu;
    // 802E18EC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E18F0:
    // 802E18F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E18F4:
    // 802E18F4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E18F8:
    // 802E18F8: bc    12, 2, 0x802E192C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E192C;
        }
    }

label_802E18FC:
    ctx->downcount -= 1;
    // 802E18FC: bc    12, 2, 0x802E191C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E191C;
        }
    }

label_802E1900:
    ctx->downcount -= 1;
    // 802E1900: bc    12, 2, 0x802E191C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E191C;
        }
    }

label_802E1904:
    ctx->downcount -= 3;
    // 802E1904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1908:
    // 802E1908: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_802E190C:
    // 802E190C: bl      0x801ED098
    {
            ctx->lr = 0x802E1910u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_802E1910:
    ctx->downcount -= 3;
    // 802E1910: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1914:
    // 802E1914: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1918:
    // 802E1918: bl      0x801ED058
    {
            ctx->lr = 0x802E191Cu;
            ctx->pc = 0x801ED058u;
            return;
    }

label_802E191C:
    ctx->downcount -= 2;
    // 802E191C: cmpwi   r31, 0
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

label_802E1920:
    // 802E1920: bc    4, 1, 0x802E192C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E192C;
        }
    }

label_802E1924:
    ctx->downcount -= 2;
    // 802E1924: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1928:
    // 802E1928: bl      0x801C1C90
    {
            ctx->lr = 0x802E192Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E192C:
    ctx->downcount -= 17;
    // 802E192C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1930:
    ctx->pc = 0x802E1930u;
    // 802E1930: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1934:
    ctx->pc = 0x802E1934u;
    // 802E1934: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1938:
    ctx->pc = 0x802E1938u;
    // 802E1938: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E193C:
    // 802E193C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1940:
    ctx->pc = 0x802E1940u;
    // 802E1940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1944:
    ctx->pc = 0x802E1944u;
    ctx->downcount -= 7;
    // 802E1944: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1948:
    ctx->pc = 0x802E1948u;
    // 802E1948: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E194C:
    // 802E194C: cmpwi   r3, 0
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

label_802E1950:
    ctx->pc = 0x802E1950u;
    // 802E1950: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1954:
    ctx->pc = 0x802E1954u;
    // 802E1954: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1958:
    // 802E1958: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E195C:
    // 802E195C: bc    12, 2, 0x802E196C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E196C;
        }
    }

label_802E1960:
    ctx->downcount -= 2;
    // 802E1960: cmpwi   r4, 0
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

label_802E1964:
    // 802E1964: bc    4, 1, 0x802E196C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E196C;
        }
    }

label_802E1968:
    ctx->downcount -= 1;
    // 802E1968: bl      0x801C1C90
    {
            ctx->lr = 0x802E196Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E196C:
    ctx->downcount -= 7;
    // 802E196C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1970:
    ctx->pc = 0x802E1970u;
    // 802E1970: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1974:
    ctx->pc = 0x802E1974u;
    // 802E1974: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1978:
    ctx->pc = 0x802E1978u;
    // 802E1978: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E197C:
    // 802E197C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1980:
    ctx->pc = 0x802E1980u;
    // 802E1980: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1984:
    ctx->pc = 0x802E1984u;
    ctx->downcount -= 20;
    // 802E1984: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1988:
    ctx->pc = 0x802E1988u;
    // 802E1988: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E198C:
    ctx->pc = 0x802E198Cu;
    // 802E198C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1990:
    ctx->pc = 0x802E1990u;
    // 802E1990: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1994:
    // 802E1994: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802E1998:
    // 802E1998: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E199C:
    // 802E199C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E19A0:
    // 802E19A0: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802E19A4:
    // 802E19A4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E19A8:
    // 802E19A8: bl      0x803456D0
    {
            ctx->lr = 0x802E19ACu;
            ctx->pc = 0x803456D0u;
            return;
    }

label_802E19AC:
    ctx->downcount -= 34;
    // 802E19AC: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802E19B0:
    ctx->pc = 0x802E19B0u;
    // 802E19B0: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E19B4:
    ctx->pc = 0x802E19B4u;
    // 802E19B4: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E19B8:
    ctx->pc = 0x802E19B8u;
    // 802E19B8: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E19BC:
    // 802E19BC: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E19C0:
    ctx->pc = 0x802E19C0u;
    // 802E19C0: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E19C4:
    ctx->pc = 0x802E19C4u;
    // 802E19C4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E19C8:
    ctx->pc = 0x802E19C8u;
    // 802E19C8: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E19CC:
    ctx->pc = 0x802E19CCu;
    // 802E19CC: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E19D0:
    ctx->pc = 0x802E19D0u;
    // 802E19D0: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E19D4:
    ctx->pc = 0x802E19D4u;
    // 802E19D4: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E19D8:
    ctx->pc = 0x802E19D8u;
    // 802E19D8: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E19DC:
    ctx->pc = 0x802E19DCu;
    // 802E19DC: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E19E0:
    ctx->pc = 0x802E19E0u;
    // 802E19E0: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_802E19E4:
    ctx->pc = 0x802E19E4u;
    // 802E19E4: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E19E8:
    ctx->pc = 0x802E19E8u;
    // 802E19E8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E19EC:
    ctx->pc = 0x802E19ECu;
    // 802E19EC: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E19F0:
    ctx->pc = 0x802E19F0u;
    // 802E19F0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E19F4:
    ctx->pc = 0x802E19F4u;
    // 802E19F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E19F8:
    // 802E19F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E19FC:
    ctx->pc = 0x802E19FCu;
    // 802E19FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1A00:
    ctx->downcount -= 2;
    // 802E1A00: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E1A04:
    ctx->pc = 0x802E1A04u;
    // 802E1A04: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1A08:
    ctx->downcount -= 2;
    // 802E1A08: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E1A0C:
    ctx->pc = 0x802E1A0Cu;
    // 802E1A0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1A10:
    ctx->pc = 0x802E1A10u;
    ctx->downcount -= 10;
    // 802E1A10: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1A14:
    ctx->pc = 0x802E1A14u;
    // 802E1A14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1A18:
    ctx->pc = 0x802E1A18u;
    // 802E1A18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1A1C:
    ctx->pc = 0x802E1A1Cu;
    // 802E1A1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1A20:
    // 802E1A20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1A24:
    ctx->pc = 0x802E1A24u;
    // 802E1A24: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1A28:
    ctx->pc = 0x802E1A28u;
    // 802E1A28: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1A2C:
    ctx->pc = 0x802E1A2Cu;
    // 802E1A2C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1A30:
    ctx->pc = 0x802E1A30u;
    // 802E1A30: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1A34u;
            ctx->pc = target;
            return;
        }
    }

label_802E1A34:
    ctx->downcount -= 2;
    // 802E1A34: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E1A38:
    // 802E1A38: bl      0x802E1D6C
    {
            ctx->lr = 0x802E1A3Cu;
            goto label_802E1D6C;
    }

label_802E1A3C:
    ctx->pc = 0x802E1A3Cu;
    ctx->downcount -= 6;
    // 802E1A3C: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1A40:
    // 802E1A40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1A44:
    ctx->pc = 0x802E1A44u;
    // 802E1A44: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E1A48:
    ctx->pc = 0x802E1A48u;
    // 802E1A48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E1A4C:
    ctx->pc = 0x802E1A4Cu;
    // 802E1A4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E1A50u;
            ctx->pc = target;
            return;
        }
    }

label_802E1A50:
    ctx->pc = 0x802E1A50u;
    ctx->downcount -= 6;
    // 802E1A50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1A54:
    ctx->pc = 0x802E1A54u;
    // 802E1A54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1A58:
    ctx->pc = 0x802E1A58u;
    // 802E1A58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1A5C:
    // 802E1A5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1A60:
    ctx->pc = 0x802E1A60u;
    // 802E1A60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1A64:
    ctx->pc = 0x802E1A64u;
    ctx->downcount -= 21;
    // 802E1A64: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1A68:
    ctx->pc = 0x802E1A68u;
    // 802E1A68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1A6C:
    ctx->pc = 0x802E1A6Cu;
    // 802E1A6C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1A70:
    ctx->pc = 0x802E1A70u;
    // 802E1A70: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1A74:
    // 802E1A74: lis     r30, -32660
    ctx->gpr[30] = ((u32)(s32)(-32660) << 16);

label_802E1A78:
    // 802E1A78: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_802E1A7C:
    // 802E1A7C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1A80:
    // 802E1A80: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1A84:
    // 802E1A84: addi    r30, r30, 8392
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(8392);

label_802E1A88:
    // 802E1A88: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1A8C:
    // 802E1A8C: bl      0x802A6748
    {
            ctx->lr = 0x802E1A90u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_802E1A90:
    ctx->downcount -= 7;
    // 802E1A90: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802E1A94:
    // 802E1A94: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1A98:
    // 802E1A98: addi    r4, r4, 8888
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(8888);

label_802E1A9C:
    ctx->pc = 0x802E1A9Cu;
    // 802E1A9C: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1AA0:
    // 802E1AA0: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802E1AA4:
    ctx->pc = 0x802E1AA4u;
    // 802E1AA4: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1AA8:
    // 802E1AA8: bl      0x801ED17C
    {
            ctx->lr = 0x802E1AACu;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_802E1AAC:
    ctx->downcount -= 6;
    // 802E1AAC: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1AB0:
    // 802E1AB0: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1AB4:
    // 802E1AB4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1AB8:
    // 802E1AB8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1ABC:
    // 802E1ABC: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E1AC0:
    // 802E1AC0: bl      0x802E1BF0
    {
            ctx->lr = 0x802E1AC4u;
            goto label_802E1BF0;
    }

label_802E1AC4:
    ctx->downcount -= 3;
    // 802E1AC4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1AC8:
    // 802E1AC8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1ACC:
    // 802E1ACC: bl      0x802A5D48
    {
            ctx->lr = 0x802E1AD0u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802E1AD0:
    ctx->downcount -= 6;
    // 802E1AD0: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1AD4:
    // 802E1AD4: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1AD8:
    // 802E1AD8: addi    r4, r30, 340
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(340);

label_802E1ADC:
    // 802E1ADC: addi    r5, r30, 352
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(352);

label_802E1AE0:
    // 802E1AE0: addi    r6, r30, 364
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(364);

label_802E1AE4:
    // 802E1AE4: bl      0x802E1D10
    {
            ctx->lr = 0x802E1AE8u;
            goto label_802E1D10;
    }

label_802E1AE8:
    ctx->downcount -= 2;
    // 802E1AE8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1AEC:
    // 802E1AEC: bl      0x802A609C
    {
            ctx->lr = 0x802E1AF0u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_802E1AF0:
    ctx->downcount -= 10;
    // 802E1AF0: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802E1AF4:
    // 802E1AF4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E1AF8:
    // 802E1AF8: addi    r3, r3, 8768
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(8768);

label_802E1AFC:
    ctx->pc = 0x802E1AFCu;
    // 802E1AFC: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1B00:
    // 802E1B00: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_802E1B04:
    ctx->pc = 0x802E1B04u;
    // 802E1B04: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1B08:
    // 802E1B08: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1B0C:
    // 802E1B0C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E1B10:
    ctx->pc = 0x802E1B10u;
    // 802E1B10: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1B14:
    // 802E1B14: bl      0x802A5D48
    {
            ctx->lr = 0x802E1B18u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802E1B18:
    ctx->downcount -= 6;
    // 802E1B18: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_802E1B1C:
    // 802E1B1C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1B20:
    // 802E1B20: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1B24:
    // 802E1B24: addi    r5, r30, 304
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(304);

label_802E1B28:
    // 802E1B28: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_802E1B2C:
    // 802E1B2C: bl      0x802E1984
    {
            ctx->lr = 0x802E1B30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1984u;
                return;
            }
            goto label_802E1984;
    }

label_802E1B30:
    ctx->downcount -= 3;
    // 802E1B30: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1B34:
    // 802E1B34: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E1B38:
    // 802E1B38: bl      0x802A5D48
    {
            ctx->lr = 0x802E1B3Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802E1B3C:
    ctx->downcount -= 5;
    // 802E1B3C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1B40:
    // 802E1B40: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1B44:
    // 802E1B44: addi    r4, r30, 316
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(316);

label_802E1B48:
    // 802E1B48: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802E1B4C:
    // 802E1B4C: bl      0x802E1984
    {
            ctx->lr = 0x802E1B50u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1984u;
                return;
            }
            goto label_802E1984;
    }

label_802E1B50:
    ctx->downcount -= 3;
    // 802E1B50: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1B54:
    // 802E1B54: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802E1B58:
    // 802E1B58: bl      0x802A5D48
    {
            ctx->lr = 0x802E1B5Cu;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_802E1B5C:
    ctx->downcount -= 5;
    // 802E1B5C: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1B60:
    // 802E1B60: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E1B64:
    // 802E1B64: addi    r4, r30, 328
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(328);

label_802E1B68:
    // 802E1B68: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_802E1B6C:
    // 802E1B6C: bl      0x802E1984
    {
            ctx->lr = 0x802E1B70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1984u;
                return;
            }
            goto label_802E1984;
    }

label_802E1B70:
    ctx->downcount -= 17;
    // 802E1B70: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E1B74:
    ctx->pc = 0x802E1B74u;
    // 802E1B74: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1B78:
    ctx->pc = 0x802E1B78u;
    // 802E1B78: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1B7C:
    ctx->pc = 0x802E1B7Cu;
    // 802E1B7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1B80:
    // 802E1B80: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E1B84:
    ctx->pc = 0x802E1B84u;
    // 802E1B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1B88:
    ctx->pc = 0x802E1B88u;
    ctx->downcount -= 18;
    // 802E1B88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1B8C:
    ctx->pc = 0x802E1B8Cu;
    // 802E1B8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1B90:
    // 802E1B90: cmpwi   r3, 0
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

label_802E1B94:
    ctx->pc = 0x802E1B94u;
    // 802E1B94: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1B98:
    ctx->pc = 0x802E1B98u;
    // 802E1B98: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1B9C:
    // 802E1B9C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1BA0:
    // 802E1BA0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1BA4:
    // 802E1BA4: bc    12, 2, 0x802E1BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1BD8;
        }
    }

label_802E1BA8:
    ctx->downcount -= 1;
    // 802E1BA8: bc    12, 2, 0x802E1BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1BC8;
        }
    }

label_802E1BAC:
    ctx->downcount -= 1;
    // 802E1BAC: bc    12, 2, 0x802E1BC8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1BC8;
        }
    }

label_802E1BB0:
    ctx->downcount -= 3;
    // 802E1BB0: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E1BB4:
    // 802E1BB4: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E1BB8:
    // 802E1BB8: bl      0x802E1944
    {
            ctx->lr = 0x802E1BBCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1944u;
                return;
            }
            goto label_802E1944;
    }

label_802E1BBC:
    ctx->downcount -= 3;
    // 802E1BBC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1BC0:
    // 802E1BC0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1BC4:
    // 802E1BC4: bl      0x801ED118
    {
            ctx->lr = 0x802E1BC8u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_802E1BC8:
    ctx->downcount -= 2;
    // 802E1BC8: cmpwi   r31, 0
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

label_802E1BCC:
    // 802E1BCC: bc    4, 1, 0x802E1BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E1BD8;
        }
    }

label_802E1BD0:
    ctx->downcount -= 2;
    // 802E1BD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1BD4:
    // 802E1BD4: bl      0x801C1C90
    {
            ctx->lr = 0x802E1BD8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E1BD8:
    ctx->downcount -= 17;
    // 802E1BD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E1BDC:
    ctx->pc = 0x802E1BDCu;
    // 802E1BDC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1BE0:
    ctx->pc = 0x802E1BE0u;
    // 802E1BE0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1BE4:
    ctx->pc = 0x802E1BE4u;
    // 802E1BE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1BE8:
    // 802E1BE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1BEC:
    ctx->pc = 0x802E1BECu;
    // 802E1BEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1BF0:
    ctx->pc = 0x802E1BF0u;
    ctx->downcount -= 17;
    // 802E1BF0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1BF4:
    ctx->pc = 0x802E1BF4u;
    // 802E1BF4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1BF8:
    ctx->pc = 0x802E1BF8u;
    // 802E1BF8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1BFC:
    ctx->pc = 0x802E1BFCu;
    // 802E1BFC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1C00:
    // 802E1C00: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1C04:
    // 802E1C04: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E1C08:
    // 802E1C08: bl      0x803457F4
    {
            ctx->lr = 0x802E1C0Cu;
            ctx->pc = 0x803457F4u;
            return;
    }

label_802E1C0C:
    ctx->pc = 0x802E1C0Cu;
    ctx->downcount -= 11;
    // 802E1C0C: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1C10:
    // 802E1C10: lis     r3, -32660
    ctx->gpr[3] = ((u32)(s32)(-32660) << 16);

label_802E1C14:
    // 802E1C14: addi    r3, r3, 9008
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(9008);

label_802E1C18:
    ctx->pc = 0x802E1C18u;
    // 802E1C18: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1C1C:
    // 802E1C1C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1C20:
    ctx->pc = 0x802E1C20u;
    // 802E1C20: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1C24:
    ctx->pc = 0x802E1C24u;
    // 802E1C24: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802E1C28:
    // 802E1C28: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1C2C:
    // 802E1C2C: bl      0x801C1C80
    {
            ctx->lr = 0x802E1C30u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802E1C30:
    ctx->pc = 0x802E1C30u;
    ctx->downcount -= 8;
    // 802E1C30: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1C34:
    // 802E1C34: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1C38:
    ctx->pc = 0x802E1C38u;
    // 802E1C38: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1C3C:
    // 802E1C3C: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1C40:
    ctx->pc = 0x802E1C40u;
    // 802E1C40: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1C44:
    // 802E1C44: bl      0x801C1C80
    {
            ctx->lr = 0x802E1C48u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802E1C48:
    ctx->pc = 0x802E1C48u;
    ctx->downcount -= 8;
    // 802E1C48: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1C4C:
    // 802E1C4C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E1C50:
    ctx->pc = 0x802E1C50u;
    // 802E1C50: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1C54:
    // 802E1C54: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1C58:
    ctx->pc = 0x802E1C58u;
    // 802E1C58: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1C5C:
    // 802E1C5C: bl      0x801C1C80
    {
            ctx->lr = 0x802E1C60u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_802E1C60:
    ctx->downcount -= 6;
    // 802E1C60: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_802E1C64:
    ctx->pc = 0x802E1C64u;
    // 802E1C64: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1C68:
    // 802E1C68: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_802E1C6C:
    // 802E1C6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E1C70:
    // 802E1C70: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_802E1C74:
    // 802E1C74: b       0x802E1CE0
    {
            goto label_802E1CE0;
    }

label_802E1C78:
    loop_802E1C78(ctx);
    if (ctx->pc == 0x802E1CECu) goto label_802E1CEC;
    return;
label_802E1C7C:
    // 802E1C7C: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_802E1C80:
    ctx->pc = 0x802E1C80u;
    // 802E1C80: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1C84:
    // 802E1C84: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E1C88:
    ctx->pc = 0x802E1C88u;
    // 802E1C88: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1C8C:
    ctx->pc = 0x802E1C8Cu;
    // 802E1C8C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1C90:
    ctx->pc = 0x802E1C90u;
    // 802E1C90: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1C94:
    ctx->pc = 0x802E1C94u;
    // 802E1C94: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1C98:
    ctx->pc = 0x802E1C98u;
    // 802E1C98: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1C9C:
    ctx->pc = 0x802E1C9Cu;
    // 802E1C9C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1CA0:
    ctx->pc = 0x802E1CA0u;
    // 802E1CA0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1CA4:
    // 802E1CA4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E1CA8:
    ctx->pc = 0x802E1CA8u;
    // 802E1CA8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1CAC:
    ctx->pc = 0x802E1CACu;
    // 802E1CAC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1CB0:
    ctx->pc = 0x802E1CB0u;
    // 802E1CB0: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1CB4:
    ctx->pc = 0x802E1CB4u;
    // 802E1CB4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1CB8:
    ctx->pc = 0x802E1CB8u;
    // 802E1CB8: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1CBC:
    ctx->pc = 0x802E1CBCu;
    // 802E1CBC: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1CC0:
    ctx->pc = 0x802E1CC0u;
    // 802E1CC0: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1CC4:
    // 802E1CC4: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E1CC8:
    ctx->pc = 0x802E1CC8u;
    // 802E1CC8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1CCC:
    ctx->pc = 0x802E1CCCu;
    // 802E1CCC: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1CD0:
    // 802E1CD0: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_802E1CD4:
    ctx->pc = 0x802E1CD4u;
    // 802E1CD4: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1CD8:
    ctx->pc = 0x802E1CD8u;
    // 802E1CD8: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1CDC:
    ctx->pc = 0x802E1CDCu;
    // 802E1CDC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1CE0:
    ctx->pc = 0x802E1CE0u;
    ctx->downcount -= 3;
    // 802E1CE0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1CE4:
    // 802E1CE4: cmpw    r7, r0
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

label_802E1CE8:
    // 802E1CE8: bc    12, 0, 0x802E1C78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1C78u;
                return;
            }
            goto label_802E1C78;
        }
    }

label_802E1CEC:
    ctx->downcount -= 3;
    // 802E1CEC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1CF0:
    // 802E1CF0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E1CF4:
    // 802E1CF4: bl      0x803457CC
    {
            ctx->lr = 0x802E1CF8u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_802E1CF8:
    ctx->downcount -= 17;
    // 802E1CF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1CFC:
    ctx->pc = 0x802E1CFCu;
    // 802E1CFC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1D00:
    ctx->pc = 0x802E1D00u;
    // 802E1D00: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1D04:
    ctx->pc = 0x802E1D04u;
    // 802E1D04: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1D08:
    // 802E1D08: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1D0C:
    ctx->pc = 0x802E1D0Cu;
    // 802E1D0C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1D10:
    ctx->pc = 0x802E1D10u;
    ctx->downcount -= 19;
    // 802E1D10: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1D14:
    ctx->pc = 0x802E1D14u;
    // 802E1D14: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1D18:
    ctx->pc = 0x802E1D18u;
    // 802E1D18: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1D1C:
    ctx->pc = 0x802E1D1Cu;
    // 802E1D1C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E1D20:
    // 802E1D20: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_802E1D24:
    // 802E1D24: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_802E1D28:
    // 802E1D28: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1D2C:
    // 802E1D2C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1D30:
    // 802E1D30: bl      0x802E1984
    {
            ctx->lr = 0x802E1D34u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1984u;
                return;
            }
            goto label_802E1984;
    }

label_802E1D34:
    ctx->downcount -= 27;
    // 802E1D34: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_802E1D38:
    ctx->pc = 0x802E1D38u;
    // 802E1D38: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E1D3C:
    ctx->pc = 0x802E1D3Cu;
    // 802E1D3C: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1D40:
    ctx->pc = 0x802E1D40u;
    // 802E1D40: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1D44:
    // 802E1D44: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_802E1D48:
    ctx->pc = 0x802E1D48u;
    // 802E1D48: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1D4C:
    ctx->pc = 0x802E1D4Cu;
    // 802E1D4C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E1D50:
    ctx->pc = 0x802E1D50u;
    // 802E1D50: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E1D54:
    ctx->pc = 0x802E1D54u;
    // 802E1D54: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1D58:
    ctx->pc = 0x802E1D58u;
    // 802E1D58: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E1D5C:
    ctx->pc = 0x802E1D5Cu;
    // 802E1D5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1D60:
    ctx->pc = 0x802E1D60u;
    // 802E1D60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1D64:
    // 802E1D64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E1D68:
    ctx->pc = 0x802E1D68u;
    // 802E1D68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1D6C:
    ctx->pc = 0x802E1D6Cu;
    ctx->downcount -= 8;
    // 802E1D6C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1D70:
    ctx->pc = 0x802E1D70u;
    // 802E1D70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1D74:
    ctx->pc = 0x802E1D74u;
    // 802E1D74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1D78:
    ctx->pc = 0x802E1D78u;
    // 802E1D78: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1D7C:
    // 802E1D7C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1D80:
    ctx->pc = 0x802E1D80u;
    // 802E1D80: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E1D84:
    // 802E1D84: cmpwi   r0, 0
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

label_802E1D88:
    // 802E1D88: bc    12, 2, 0x802E1DAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1DAC;
        }
    }

label_802E1D8C:
    ctx->pc = 0x802E1D8Cu;
    ctx->downcount -= 3;
    // 802E1D8C: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E1D90:
    // 802E1D90: cmpwi   r0, 0
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

label_802E1D94:
    // 802E1D94: bc    12, 2, 0x802E1D9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1D9C;
        }
    }

label_802E1D98:
    ctx->downcount -= 1;
    // 802E1D98: bl      0x802E1E90
    {
            ctx->lr = 0x802E1D9Cu;
            goto label_802E1E90;
    }

label_802E1D9C:
    ctx->downcount -= 2;
    // 802E1D9C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1DA0:
    // 802E1DA0: bl      0x803456D4
    {
            ctx->lr = 0x802E1DA4u;
            ctx->pc = 0x803456D4u;
            return;
    }

label_802E1DA4:
    ctx->downcount -= 2;
    // 802E1DA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1DA8:
    // 802E1DA8: bl      0x802E1DD0
    {
            ctx->lr = 0x802E1DACu;
            goto label_802E1DD0;
    }

label_802E1DAC:
    ctx->downcount -= 2;
    // 802E1DAC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1DB0:
    // 802E1DB0: bl      0x802E1E30
    {
            ctx->lr = 0x802E1DB4u;
            goto label_802E1E30;
    }

label_802E1DB4:
    ctx->downcount -= 2;
    // 802E1DB4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E1DB8:
    // 802E1DB8: bl      0x803456F8
    {
            ctx->lr = 0x802E1DBCu;
            ctx->pc = 0x803456F8u;
            return;
    }

label_802E1DBC:
    ctx->pc = 0x802E1DBCu;
    ctx->downcount -= 6;
    // 802E1DBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1DC0:
    ctx->pc = 0x802E1DC0u;
    // 802E1DC0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1DC4:
    ctx->pc = 0x802E1DC4u;
    // 802E1DC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1DC8:
    // 802E1DC8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1DCC:
    ctx->pc = 0x802E1DCCu;
    // 802E1DCC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1DD0:
    ctx->pc = 0x802E1DD0u;
    ctx->downcount -= 12;
    // 802E1DD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1DD4:
    ctx->pc = 0x802E1DD4u;
    // 802E1DD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1DD8:
    ctx->pc = 0x802E1DD8u;
    // 802E1DD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1DDC:
    ctx->pc = 0x802E1DDCu;
    // 802E1DDC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1DE0:
    // 802E1DE0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1DE4:
    ctx->pc = 0x802E1DE4u;
    // 802E1DE4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1DE8:
    ctx->pc = 0x802E1DE8u;
    // 802E1DE8: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1DEC:
    // 802E1DEC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1DF0:
    // 802E1DF0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E1DF4:
    // 802E1DF4: bl      0x800076B4
    {
            ctx->lr = 0x802E1DF8u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802E1DF8:
    ctx->downcount -= 2;
    // 802E1DF8: cmpwi   r3, 0
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

label_802E1DFC:
    // 802E1DFC: bc    12, 2, 0x802E1E1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1E1C;
        }
    }

label_802E1E00:
    ctx->pc = 0x802E1E00u;
    ctx->downcount -= 8;
    // 802E1E00: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1E04:
    ctx->pc = 0x802E1E04u;
    // 802E1E04: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1E08:
    // 802E1E08: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1E0C:
    ctx->pc = 0x802E1E0Cu;
    // 802E1E0C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1E10:
    // 802E1E10: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802E1E14:
    // 802E1E14: bl      0x800076E4
    {
            ctx->lr = 0x802E1E18u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802E1E18:
    ctx->downcount -= 1;
    // 802E1E18: nop
    // nop

label_802E1E1C:
    ctx->pc = 0x802E1E1Cu;
    ctx->downcount -= 6;
    // 802E1E1C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1E20:
    ctx->pc = 0x802E1E20u;
    // 802E1E20: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1E24:
    ctx->pc = 0x802E1E24u;
    // 802E1E24: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1E28:
    // 802E1E28: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1E2C:
    ctx->pc = 0x802E1E2Cu;
    // 802E1E2C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1E30:
    ctx->pc = 0x802E1E30u;
    ctx->downcount -= 12;
    // 802E1E30: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1E34:
    ctx->pc = 0x802E1E34u;
    // 802E1E34: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1E38:
    ctx->pc = 0x802E1E38u;
    // 802E1E38: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1E3C:
    ctx->pc = 0x802E1E3Cu;
    // 802E1E3C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1E40:
    // 802E1E40: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1E44:
    ctx->pc = 0x802E1E44u;
    // 802E1E44: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1E48:
    ctx->pc = 0x802E1E48u;
    // 802E1E48: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1E4C:
    // 802E1E4C: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1E50:
    // 802E1E50: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E1E54:
    // 802E1E54: bl      0x800076B4
    {
            ctx->lr = 0x802E1E58u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802E1E58:
    ctx->downcount -= 2;
    // 802E1E58: cmpwi   r3, 0
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

label_802E1E5C:
    // 802E1E5C: bc    12, 2, 0x802E1E7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1E7C;
        }
    }

label_802E1E60:
    ctx->pc = 0x802E1E60u;
    ctx->downcount -= 8;
    // 802E1E60: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1E64:
    ctx->pc = 0x802E1E64u;
    // 802E1E64: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1E68:
    // 802E1E68: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1E6C:
    ctx->pc = 0x802E1E6Cu;
    // 802E1E6C: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1E70:
    // 802E1E70: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802E1E74:
    // 802E1E74: bl      0x800076E4
    {
            ctx->lr = 0x802E1E78u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802E1E78:
    ctx->downcount -= 1;
    // 802E1E78: nop
    // nop

label_802E1E7C:
    ctx->pc = 0x802E1E7Cu;
    ctx->downcount -= 6;
    // 802E1E7C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1E80:
    ctx->pc = 0x802E1E80u;
    // 802E1E80: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1E84:
    ctx->pc = 0x802E1E84u;
    // 802E1E84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1E88:
    // 802E1E88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1E8C:
    ctx->pc = 0x802E1E8Cu;
    // 802E1E8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1E90:
    ctx->pc = 0x802E1E90u;
    ctx->downcount -= 12;
    // 802E1E90: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1E94:
    ctx->pc = 0x802E1E94u;
    // 802E1E94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1E98:
    ctx->pc = 0x802E1E98u;
    // 802E1E98: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1E9C:
    ctx->pc = 0x802E1E9Cu;
    // 802E1E9C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1EA0:
    // 802E1EA0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1EA4:
    ctx->pc = 0x802E1EA4u;
    // 802E1EA4: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1EA8:
    ctx->pc = 0x802E1EA8u;
    // 802E1EA8: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1EAC:
    // 802E1EAC: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1EB0:
    // 802E1EB0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E1EB4:
    // 802E1EB4: bl      0x800076B4
    {
            ctx->lr = 0x802E1EB8u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_802E1EB8:
    ctx->downcount -= 2;
    // 802E1EB8: cmpwi   r3, 0
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

label_802E1EBC:
    // 802E1EBC: bc    12, 2, 0x802E1EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E1EDC;
        }
    }

label_802E1EC0:
    ctx->pc = 0x802E1EC0u;
    ctx->downcount -= 8;
    // 802E1EC0: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1EC4:
    ctx->pc = 0x802E1EC4u;
    // 802E1EC4: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1EC8:
    // 802E1EC8: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_802E1ECC:
    ctx->pc = 0x802E1ECCu;
    // 802E1ECC: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1ED0:
    // 802E1ED0: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_802E1ED4:
    // 802E1ED4: bl      0x800076E4
    {
            ctx->lr = 0x802E1ED8u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_802E1ED8:
    ctx->downcount -= 1;
    // 802E1ED8: nop
    // nop

label_802E1EDC:
    ctx->pc = 0x802E1EDCu;
    ctx->downcount -= 6;
    // 802E1EDC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1EE0:
    ctx->pc = 0x802E1EE0u;
    // 802E1EE0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1EE4:
    ctx->pc = 0x802E1EE4u;
    // 802E1EE4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1EE8:
    // 802E1EE8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1EEC:
    ctx->pc = 0x802E1EECu;
    // 802E1EEC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1EF0:
    ctx->downcount -= 2;
    // 802E1EF0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E1EF4:
    // 802E1EF4: b       0x802E18DC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E18DCu;
                return;
            }
            goto label_802E18DC;
    }

label_802E1EF8:
    ctx->downcount -= 2;
    // 802E1EF8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E1EFC:
    // 802E1EFC: b       0x802E1878
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1878u;
                return;
            }
            goto label_802E1878;
    }

label_802E1F00:
    ctx->downcount -= 2;
    // 802E1F00: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E1F04:
    // 802E1F04: b       0x802E1B88
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1B88u;
                return;
            }
            goto label_802E1B88;
    }

label_802E1F08:
    ctx->pc = 0x802E1F08u;
    ctx->downcount -= 1;
    // 802E1F08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1F0C:
    ctx->pc = 0x802E1F0Cu;
    ctx->downcount -= 14;
    // 802E1F0C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1F10:
    ctx->pc = 0x802E1F10u;
    // 802E1F10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1F14:
    ctx->pc = 0x802E1F14u;
    // 802E1F14: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1F18:
    ctx->pc = 0x802E1F18u;
    // 802E1F18: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1F18u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_802E1F1C:
    ctx->pc = 0x802E1F1Cu;
    // 802E1F1C: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802E1F1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x802E1F1Cu);
        if (ctx->exception) return;
    }

label_802E1F20:
    ctx->pc = 0x802E1F20u;
    // 802E1F20: lfs     f31, -12560(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E1F20u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12560);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_802E1F24:
    ctx->pc = 0x802E1F24u;
    // 802E1F24: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E1F28:
    // 802E1F28: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802E1F2C:
    // 802E1F2C: addi    r31, r31, 9984
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(9984);

label_802E1F30:
    ctx->pc = 0x802E1F30u;
    // 802E1F30: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802E1F34:
    // 802E1F34: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1F38:
    // 802E1F38: addi    r4, r31, 17
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17);

label_802E1F3C:
    // 802E1F3C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E1F40:
    // 802E1F40: bl      0x8026F970
    {
            ctx->lr = 0x802E1F44u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E1F44:
    ctx->pc = 0x802E1F44u;
    ctx->downcount -= 5;
    // 802E1F44: lfs     f0, 72(r3)
    if (!ppc_fp_available_inline(ctx, 0x802E1F44u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(72);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E1F48:
    // 802E1F48: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E1F4C:
    // 802E1F4C: addi    r4, r31, 17
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(17);

label_802E1F50:
    ctx->pc = 0x802E1F50u;
    // 802E1F50: fmuls   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x802E1F50u)) return;
    ppc_fmuls(ctx, 31, 31, 0);

label_802E1F54:
    // 802E1F54: bl      0x8026F970
    {
            ctx->lr = 0x802E1F58u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E1F58:
    ctx->pc = 0x802E1F58u;
    ctx->downcount -= 11;
    // 802E1F58: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x802E1F58u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E1F5C:
    ctx->pc = 0x802E1F5Cu;
    // 802E1F5C: fmuls   f1, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x802E1F5Cu)) return;
    ppc_fmuls(ctx, 1, 31, 0);

label_802E1F60:
    ctx->pc = 0x802E1F60u;
    // 802E1F60: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x802E1F60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x802E1F60u);
        if (ctx->exception) return;
    }

label_802E1F64:
    ctx->pc = 0x802E1F64u;
    // 802E1F64: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1F64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802E1F68:
    ctx->pc = 0x802E1F68u;
    // 802E1F68: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E1F6C:
    ctx->pc = 0x802E1F6Cu;
    // 802E1F6C: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E1F70:
    ctx->pc = 0x802E1F70u;
    // 802E1F70: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1F74:
    ctx->pc = 0x802E1F74u;
    // 802E1F74: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1F78:
    // 802E1F78: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E1F7C:
    ctx->pc = 0x802E1F7Cu;
    // 802E1F7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1F80:
    ctx->pc = 0x802E1F80u;
    ctx->downcount -= 5;
    // 802E1F80: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1F84:
    ctx->pc = 0x802E1F84u;
    // 802E1F84: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1F88:
    // 802E1F88: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E1F8C:
    ctx->pc = 0x802E1F8Cu;
    // 802E1F8C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1F90:
    // 802E1F90: bl      0x8026F6CC
    {
            ctx->lr = 0x802E1F94u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_802E1F94:
    ctx->downcount -= 6;
    // 802E1F94: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802E1F98:
    // 802E1F98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E1F9C:
    // 802E1F9C: addi    r5, r5, 9984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9984);

label_802E1FA0:
    // 802E1FA0: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_802E1FA4:
    // 802E1FA4: addi    r5, r5, 17
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(17);

label_802E1FA8:
    // 802E1FA8: bl      0x8025D62C
    {
            ctx->lr = 0x802E1FACu;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_802E1FAC:
    ctx->pc = 0x802E1FACu;
    ctx->downcount -= 11;
    // 802E1FAC: lfs     f1, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1FACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E1FB0:
    ctx->pc = 0x802E1FB0u;
    // 802E1FB0: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1FB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E1FB4:
    ctx->pc = 0x802E1FB4u;
    // 802E1FB4: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1FB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E1FB8:
    ctx->pc = 0x802E1FB8u;
    // 802E1FB8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1FBC:
    ctx->pc = 0x802E1FBCu;
    // 802E1FBC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E1FBCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E1FC0:
    ctx->pc = 0x802E1FC0u;
    // 802E1FC0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E1FC4:
    ctx->pc = 0x802E1FC4u;
    // 802E1FC4: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E1FC8:
    ctx->pc = 0x802E1FC8u;
    // 802E1FC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E1FCC:
    // 802E1FCC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E1FD0:
    ctx->pc = 0x802E1FD0u;
    // 802E1FD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E1FD4:
    ctx->pc = 0x802E1FD4u;
    ctx->downcount -= 8;
    // 802E1FD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E1FD8:
    ctx->pc = 0x802E1FD8u;
    // 802E1FD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E1FDC:
    // 802E1FDC: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E1FE0:
    // 802E1FE0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E1FE4:
    // 802E1FE4: addi    r4, r4, 9984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9984);

label_802E1FE8:
    ctx->pc = 0x802E1FE8u;
    // 802E1FE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E1FEC:
    // 802E1FEC: addi    r4, r4, 17
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(17);

label_802E1FF0:
    // 802E1FF0: bl      0x8026F970
    {
            ctx->lr = 0x802E1FF4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E1FF4:
    ctx->pc = 0x802E1FF4u;
    ctx->downcount -= 6;
    // 802E1FF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E1FF8:
    ctx->pc = 0x802E1FF8u;
    // 802E1FF8: lbz     r3, 185(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(185);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_802E1FFC:
    ctx->pc = 0x802E1FFCu;
    // 802E1FFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2000:
    // 802E2000: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2004:
    ctx->pc = 0x802E2004u;
    // 802E2004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2008:
    ctx->pc = 0x802E2008u;
    ctx->downcount -= 21;
    // 802E2008: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E200C:
    ctx->pc = 0x802E200Cu;
    // 802E200C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2010:
    // 802E2010: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802E2014:
    ctx->pc = 0x802E2014u;
    // 802E2014: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2018:
    // 802E2018: addi    r5, r5, 9984
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(9984);

label_802E201C:
    ctx->pc = 0x802E201Cu;
    // 802E201C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2020:
    // 802E2020: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2024:
    // 802E2024: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E2028:
    // 802E2028: addi    r4, r5, 27
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(27);

label_802E202C:
    // 802E202C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E2030:
    // 802E2030: bl      0x8026F968
    {
            ctx->lr = 0x802E2034u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E2034:
    ctx->downcount -= 7;
    // 802E2034: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2038:
    // 802E2038: or   r7, r31, r31
    {
        ctx->gpr[7] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E203C:
    // 802E203C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E2040:
    // 802E2040: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802E2044:
    // 802E2044: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802E2048:
    // 802E2048: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E204C:
    // 802E204C: bl      0x8026F8C0
    {
            ctx->lr = 0x802E2050u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E2050:
    ctx->pc = 0x802E2050u;
    ctx->downcount -= 16;
    // 802E2050: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2054:
    ctx->pc = 0x802E2054u;
    // 802E2054: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2058:
    ctx->pc = 0x802E2058u;
    // 802E2058: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E205C:
    // 802E205C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2060:
    ctx->pc = 0x802E2060u;
    // 802E2060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2064:
    ctx->pc = 0x802E2064u;
    ctx->downcount -= 8;
    // 802E2064: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2068:
    ctx->pc = 0x802E2068u;
    // 802E2068: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E206C:
    // 802E206C: cmpwi   r4, -1
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(-1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802E2070:
    ctx->pc = 0x802E2070u;
    // 802E2070: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2074:
    ctx->pc = 0x802E2074u;
    // 802E2074: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E2078:
    // 802E2078: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E207C:
    ctx->pc = 0x802E207Cu;
    // 802E207C: stw     r4, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E2080:
    // 802E2080: bc    4, 2, 0x802E208C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E208C;
        }
    }

label_802E2084:
    ctx->downcount -= 2;
    // 802E2084: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E2088:
    ctx->pc = 0x802E2088u;
    // 802E2088: stw     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E208C:
    ctx->downcount -= 2;
    // 802E208C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2090:
    // 802E2090: bl      0x80371554
    {
            ctx->lr = 0x802E2094u;
            ctx->pc = 0x80371554u;
            return;
    }

label_802E2094:
    ctx->downcount -= 4;
    // 802E2094: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E2098:
    // 802E2098: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E209C:
    // 802E209C: addi    r4, r4, 9984
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9984);

label_802E20A0:
    // 802E20A0: bl      0x8026F960
    {
            ctx->lr = 0x802E20A4u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802E20A4:
    ctx->pc = 0x802E20A4u;
    ctx->downcount -= 5;
    // 802E20A4: lwz     r5, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E20A8:
    // 802E20A8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E20AC:
    // 802E20AC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E20B0:
    // 802E20B0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E20B4:
    // 802E20B4: bl      0x8026F760
    {
            ctx->lr = 0x802E20B8u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_802E20B8:
    ctx->pc = 0x802E20B8u;
    ctx->downcount -= 6;
    // 802E20B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E20BC:
    ctx->pc = 0x802E20BCu;
    // 802E20BC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E20C0:
    ctx->pc = 0x802E20C0u;
    // 802E20C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E20C4:
    // 802E20C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E20C8:
    ctx->pc = 0x802E20C8u;
    // 802E20C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E20CC:
    ctx->pc = 0x802E20CCu;
    ctx->downcount -= 24;
    // 802E20CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E20D0:
    ctx->pc = 0x802E20D0u;
    // 802E20D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E20D4:
    // 802E20D4: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E20D8:
    // 802E20D8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E20DC:
    ctx->pc = 0x802E20DCu;
    // 802E20DC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E20E0:
    // 802E20E0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802E20E4:
    // 802E20E4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802E20E8:
    ctx->pc = 0x802E20E8u;
    // 802E20E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E20EC:
    // 802E20EC: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802E20F0:
    // 802E20F0: addi    r31, r31, 9984
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(9984);

label_802E20F4:
    // 802E20F4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E20F8:
    // 802E20F8: addi    r5, r31, 39
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(39);

label_802E20FC:
    // 802E20FC: addi    r6, r31, 54
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(54);

label_802E2100:
    // 802E2100: bl      0x80371668
    {
            ctx->lr = 0x802E2104u;
            ctx->pc = 0x80371668u;
            return;
    }

label_802E2104:
    ctx->downcount -= 13;
    // 802E2104: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_802E2108:
    // 802E2108: addi    r4, r31, 80
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(80);

label_802E210C:
    // 802E210C: addi    r7, r7, 9064
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9064);

label_802E2110:
    ctx->pc = 0x802E2110u;
    // 802E2110: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E2114:
    // 802E2114: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_802E2118:
    // 802E2118: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_802E211C:
    // 802E211C: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_802E2120:
    // 802E2120: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_802E2124:
    ctx->pc = 0x802E2124u;
    // 802E2124: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E2128:
    // 802E2128: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802E212C:
    ctx->pc = 0x802E212Cu;
    // 802E212C: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802E2130:
    ctx->pc = 0x802E2130u;
    // 802E2130: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2134:
    // 802E2134: bl      0x8000E7F4
    {
            ctx->lr = 0x802E2138u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802E2138:
    ctx->downcount -= 2;
    // 802E2138: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E213C:
    // 802E213C: bl      0x80270188
    {
            ctx->lr = 0x802E2140u;
            ctx->pc = 0x80270188u;
            return;
    }

label_802E2140:
    ctx->downcount -= 19;
    // 802E2140: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E2144:
    ctx->pc = 0x802E2144u;
    // 802E2144: stw     r0, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2148:
    // 802E2148: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E214C:
    ctx->pc = 0x802E214Cu;
    // 802E214C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2150:
    ctx->pc = 0x802E2150u;
    // 802E2150: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2154:
    ctx->pc = 0x802E2154u;
    // 802E2154: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2158:
    // 802E2158: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E215C:
    ctx->pc = 0x802E215Cu;
    // 802E215C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2160:
    ctx->pc = 0x802E2160u;
    ctx->downcount -= 1;
    // 802E2160: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2164:
    ctx->pc = 0x802E2164u;
    ctx->downcount -= 18;
    // 802E2164: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2168:
    ctx->pc = 0x802E2168u;
    // 802E2168: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E216C:
    // 802E216C: cmpwi   r3, 0
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

label_802E2170:
    ctx->pc = 0x802E2170u;
    // 802E2170: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2174:
    ctx->pc = 0x802E2174u;
    // 802E2174: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2178:
    // 802E2178: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E217C:
    // 802E217C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E2180:
    // 802E2180: bc    12, 2, 0x802E21B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E21B4;
        }
    }

label_802E2184:
    ctx->downcount -= 1;
    // 802E2184: bc    12, 2, 0x802E21A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E21A4;
        }
    }

label_802E2188:
    ctx->downcount -= 1;
    // 802E2188: bc    12, 2, 0x802E21A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E21A4;
        }
    }

label_802E218C:
    ctx->downcount -= 3;
    // 802E218C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2190:
    // 802E2190: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E2194:
    // 802E2194: bl      0x801F5C24
    {
            ctx->lr = 0x802E2198u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802E2198:
    ctx->downcount -= 3;
    // 802E2198: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E219C:
    // 802E219C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E21A0:
    // 802E21A0: bl      0x801F9C70
    {
            ctx->lr = 0x802E21A4u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802E21A4:
    ctx->downcount -= 2;
    // 802E21A4: cmpwi   r31, 0
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

label_802E21A8:
    // 802E21A8: bc    4, 1, 0x802E21B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E21B4;
        }
    }

label_802E21AC:
    ctx->downcount -= 2;
    // 802E21AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E21B0:
    // 802E21B0: bl      0x801C1C90
    {
            ctx->lr = 0x802E21B4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E21B4:
    ctx->downcount -= 17;
    // 802E21B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E21B8:
    ctx->pc = 0x802E21B8u;
    // 802E21B8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E21BC:
    ctx->pc = 0x802E21BCu;
    // 802E21BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E21C0:
    ctx->pc = 0x802E21C0u;
    // 802E21C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E21C4:
    // 802E21C4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E21C8:
    ctx->pc = 0x802E21C8u;
    // 802E21C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E21CC:
    ctx->downcount -= 2;
    // 802E21CC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E21D0:
    // 802E21D0: b       0x802E2164
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2164u;
                return;
            }
            goto label_802E2164;
    }

label_802E21D4:
    ctx->downcount -= 2;
    // 802E21D4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E21D8:
    // 802E21D8: b       0x802E1F08
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E1F08u;
                return;
            }
            goto label_802E1F08;
    }

label_802E21DC:
    ctx->downcount -= 2;
    // 802E21DC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E21E0:
    // 802E21E0: b       0x802E2164
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2164u;
                return;
            }
            goto label_802E2164;
    }

label_802E21E4:
    ctx->pc = 0x802E21E4u;
    ctx->downcount -= 17;
    // 802E21E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E21E8:
    ctx->pc = 0x802E21E8u;
    // 802E21E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E21EC:
    ctx->pc = 0x802E21ECu;
    // 802E21EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E21F0:
    ctx->pc = 0x802E21F0u;
    // 802E21F0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E21F4:
    ctx->pc = 0x802E21F4u;
    // 802E21F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E21F8:
    ctx->pc = 0x802E21F8u;
    // 802E21F8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E21FC:
    ctx->pc = 0x802E21FCu;
    // 802E21FC: bl      0x8026F960
    {
            ctx->lr = 0x802E2200u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802E2200:
    ctx->pc = 0x802E2200u;
    ctx->downcount -= 6;
    // 802E2200: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802E2204:
    ctx->pc = 0x802E2204u;
    // 802E2204: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2208:
    ctx->pc = 0x802E2208u;
    // 802E2208: addi    r31, r31, 10080
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(10080);

label_802E220C:
    ctx->pc = 0x802E220Cu;
    // 802E220C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802E2210:
    ctx->pc = 0x802E2210u;
    // 802E2210: addi    r4, r31, 28
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(28);

label_802E2214:
    ctx->pc = 0x802E2214u;
    // 802E2214: bl      0x8026F960
    {
            ctx->lr = 0x802E2218u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_802E2218:
    ctx->pc = 0x802E2218u;
    ctx->downcount -= 2;
    // 802E2218: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E221C:
    ctx->pc = 0x802E221Cu;
    // 802E221C: bl      0x80260AA4
    {
            ctx->lr = 0x802E2220u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_802E2220:
    ctx->pc = 0x802E2220u;
    ctx->downcount -= 3;
    // 802E2220: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_802E2224:
    ctx->pc = 0x802E2224u;
    // 802E2224: addi    r4, r31, 38
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(38);

label_802E2228:
    ctx->pc = 0x802E2228u;
    // 802E2228: bl      0x8026F970
    {
            ctx->lr = 0x802E222Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_802E222C:
    ctx->pc = 0x802E222Cu;
    ctx->downcount -= 19;
    // 802E222C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2230:
    ctx->pc = 0x802E2230u;
    // 802E2230: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802E2234:
    ctx->pc = 0x802E2234u;
    // 802E2234: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E2238:
    ctx->pc = 0x802E2238u;
    // 802E2238: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E223C:
    ctx->pc = 0x802E223Cu;
    // 802E223C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2240:
    ctx->pc = 0x802E2240u;
    // 802E2240: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2244:
    ctx->pc = 0x802E2244u;
    // 802E2244: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2248:
    ctx->pc = 0x802E2248u;
    // 802E2248: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E224C:
    ctx->pc = 0x802E224Cu;
    ctx->downcount -= 8;
    // 802E224C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2250:
    ctx->pc = 0x802E2250u;
    // 802E2250: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2254:
    ctx->pc = 0x802E2254u;
    // 802E2254: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2258:
    ctx->pc = 0x802E2258u;
    // 802E2258: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E225C:
    ctx->pc = 0x802E225Cu;
    // 802E225C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2260:
    ctx->pc = 0x802E2260u;
    // 802E2260: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E2264:
    ctx->pc = 0x802E2264u;
    // 802E2264: lwz     r4, -28160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2268:
    ctx->pc = 0x802E2268u;
    // 802E2268: bl      0x8026F968
    {
            ctx->lr = 0x802E226Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E226C:
    ctx->pc = 0x802E226Cu;
    ctx->downcount -= 10;
    // 802E226C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2270:
    ctx->pc = 0x802E2270u;
    // 802E2270: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2274:
    ctx->pc = 0x802E2274u;
    // 802E2274: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_802E2278:
    ctx->pc = 0x802E2278u;
    // 802E2278: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E227C:
    ctx->pc = 0x802E227Cu;
    // 802E227C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802E2280:
    ctx->pc = 0x802E2280u;
    // 802E2280: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_802E2284:
    ctx->pc = 0x802E2284u;
    // 802E2284: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E2288:
    ctx->pc = 0x802E2288u;
    // 802E2288: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E228C:
    ctx->pc = 0x802E228Cu;
    // 802E228C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E2290:
    ctx->pc = 0x802E2290u;
    // 802E2290: bl      0x8026F8C0
    {
            ctx->lr = 0x802E2294u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E2294:
    ctx->pc = 0x802E2294u;
    ctx->downcount -= 3;
    // 802E2294: lwz     r4, -28156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2298:
    ctx->pc = 0x802E2298u;
    // 802E2298: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_802E229C:
    ctx->pc = 0x802E229Cu;
    // 802E229C: bl      0x8026F968
    {
            ctx->lr = 0x802E22A0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E22A0:
    ctx->pc = 0x802E22A0u;
    ctx->downcount -= 9;
    // 802E22A0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E22A4:
    ctx->pc = 0x802E22A4u;
    // 802E22A4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802E22A8:
    ctx->pc = 0x802E22A8u;
    // 802E22A8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E22AC:
    ctx->pc = 0x802E22ACu;
    // 802E22AC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E22B0:
    ctx->pc = 0x802E22B0u;
    // 802E22B0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E22B4:
    ctx->pc = 0x802E22B4u;
    // 802E22B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E22B8:
    ctx->pc = 0x802E22B8u;
    // 802E22B8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E22BC:
    ctx->pc = 0x802E22BCu;
    // 802E22BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E22C0:
    ctx->pc = 0x802E22C0u;
    ctx->downcount -= 19;
    // 802E22C0: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E22C4:
    ctx->pc = 0x802E22C4u;
    // 802E22C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E22C8:
    ctx->pc = 0x802E22C8u;
    // 802E22C8: li      r5, 64
    ctx->gpr[5] = (u32)(s32)(64);

label_802E22CC:
    ctx->pc = 0x802E22CCu;
    // 802E22CC: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E22D0:
    ctx->pc = 0x802E22D0u;
    // 802E22D0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802E22D4:
    ctx->pc = 0x802E22D4u;
    // 802E22D4: stmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E22D8:
    ctx->pc = 0x802E22D8u;
    // 802E22D8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E22DC:
    ctx->pc = 0x802E22DCu;
    // 802E22DC: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_802E22E0:
    ctx->pc = 0x802E22E0u;
    // 802E22E0: bl      0x802C34F8
    {
            ctx->lr = 0x802E22E4u;
            ctx->pc = 0x802C34F8u;
            return;
    }

label_802E22E4:
    ctx->pc = 0x802E22E4u;
    ctx->downcount -= 2;
    // 802E22E4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E22E8:
    ctx->pc = 0x802E22E8u;
    // 802E22E8: bl      0x8034DAF0
    {
            ctx->lr = 0x802E22ECu;
            ctx->pc = 0x8034DAF0u;
            return;
    }

label_802E22EC:
    ctx->pc = 0x802E22ECu;
    ctx->downcount -= 8;
    // 802E22EC: xori    r5, r3, 0x0001
    ctx->gpr[5] = ctx->gpr[3] ^ 0x0001u;

label_802E22F0:
    ctx->pc = 0x802E22F0u;
    // 802E22F0: lwz     r4, -28160(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E22F4:
    ctx->pc = 0x802E22F4u;
    // 802E22F4: and   r0, r5, r3
    {
        ctx->gpr[0] = ctx->gpr[5] & ctx->gpr[3];
    }

label_802E22F8:
    ctx->pc = 0x802E22F8u;
    // 802E22F8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E22FC:
    ctx->pc = 0x802E22FCu;
    // 802E22FC: srawi r5, r5, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[5];
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

label_802E2300:
    ctx->pc = 0x802E2300u;
    // 802E2300: subf   r0, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_802E2304:
    ctx->pc = 0x802E2304u;
    // 802E2304: rlwinm r31, r0, 1, 31, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
    }

label_802E2308:
    ctx->pc = 0x802E2308u;
    // 802E2308: bl      0x8026F968
    {
            ctx->lr = 0x802E230Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E230C:
    ctx->pc = 0x802E230Cu;
    ctx->downcount -= 7;
    // 802E230C: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_802E2310:
    ctx->pc = 0x802E2310u;
    // 802E2310: cntlzw r0, r31
    {
        u32 v = ctx->gpr[31];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_802E2314:
    ctx->pc = 0x802E2314u;
    // 802E2314: cmpwi   r31, 0
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

label_802E2318:
    ctx->pc = 0x802E2318u;
    // 802E2318: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_802E231C:
    ctx->pc = 0x802E231Cu;
    // 802E231C: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_802E2320:
    ctx->pc = 0x802E2320u;
    // 802E2320: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E2324:
    ctx->pc = 0x802E2324u;
    // 802E2324: bc    4, 2, 0x802E2344
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2344;
        }
    }

label_802E2328:
    ctx->pc = 0x802E2328u;
    ctx->downcount -= 7;
    // 802E2328: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E232C:
    ctx->pc = 0x802E232Cu;
    // 802E232C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E2330:
    ctx->pc = 0x802E2330u;
    // 802E2330: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_802E2334:
    ctx->pc = 0x802E2334u;
    // 802E2334: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_802E2338:
    ctx->pc = 0x802E2338u;
    // 802E2338: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802E233C:
    ctx->pc = 0x802E233Cu;
    // 802E233C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E2340:
    ctx->pc = 0x802E2340u;
    // 802E2340: bl      0x8026F8C0
    {
            ctx->lr = 0x802E2344u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E2344:
    ctx->pc = 0x802E2344u;
    ctx->downcount -= 3;
    // 802E2344: lwz     r4, -28156(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-28156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2348:
    ctx->pc = 0x802E2348u;
    // 802E2348: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E234C:
    ctx->pc = 0x802E234Cu;
    // 802E234C: bl      0x8026F968
    {
            ctx->lr = 0x802E2350u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_802E2350:
    ctx->pc = 0x802E2350u;
    ctx->downcount -= 6;
    // 802E2350: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2354:
    ctx->pc = 0x802E2354u;
    // 802E2354: cmpwi   r31, 0
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

label_802E2358:
    ctx->pc = 0x802E2358u;
    // 802E2358: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_802E235C:
    ctx->pc = 0x802E235Cu;
    // 802E235C: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_802E2360:
    ctx->pc = 0x802E2360u;
    // 802E2360: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E2364:
    ctx->pc = 0x802E2364u;
    // 802E2364: bc    12, 2, 0x802E2384
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2384;
        }
    }

label_802E2368:
    ctx->pc = 0x802E2368u;
    ctx->downcount -= 7;
    // 802E2368: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E236C:
    ctx->pc = 0x802E236Cu;
    // 802E236C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E2370:
    ctx->pc = 0x802E2370u;
    // 802E2370: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_802E2374:
    ctx->pc = 0x802E2374u;
    // 802E2374: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_802E2378:
    ctx->pc = 0x802E2378u;
    // 802E2378: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802E237C:
    ctx->pc = 0x802E237Cu;
    // 802E237C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E2380:
    ctx->pc = 0x802E2380u;
    // 802E2380: bl      0x8026F8C0
    {
            ctx->lr = 0x802E2384u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_802E2384:
    ctx->pc = 0x802E2384u;
    ctx->downcount -= 16;
    // 802E2384: lmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2388:
    ctx->pc = 0x802E2388u;
    // 802E2388: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E238C:
    ctx->pc = 0x802E238Cu;
    // 802E238C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2390:
    ctx->pc = 0x802E2390u;
    // 802E2390: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_802E2394:
    ctx->pc = 0x802E2394u;
    // 802E2394: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2398:
    ctx->pc = 0x802E2398u;
    ctx->downcount -= 1;
    // 802E2398: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E239C:
    ctx->pc = 0x802E239Cu;
    ctx->downcount -= 6;
    // 802E239C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E23A0:
    ctx->pc = 0x802E23A0u;
    // 802E23A0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E23A4:
    ctx->pc = 0x802E23A4u;
    // 802E23A4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E23A8:
    ctx->pc = 0x802E23A8u;
    // 802E23A8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E23AC:
    // 802E23AC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E23B0:
    // 802E23B0: bl      0x80371554
    {
            ctx->lr = 0x802E23B4u;
            ctx->pc = 0x80371554u;
            return;
    }

label_802E23B4:
    ctx->downcount -= 2;
    // 802E23B4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E23B8:
    // 802E23B8: bl      0x802E224C
    {
            ctx->lr = 0x802E23BCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E224Cu;
                return;
            }
            goto label_802E224C;
    }

label_802E23BC:
    ctx->downcount -= 5;
    // 802E23BC: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E23C0:
    // 802E23C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E23C4:
    // 802E23C4: addi    r4, r4, 10080
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10080);

label_802E23C8:
    // 802E23C8: addi    r4, r4, 56
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(56);

label_802E23CC:
    // 802E23CC: bl      0x802E21E4
    {
            ctx->lr = 0x802E23D0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E21E4u;
                return;
            }
            goto label_802E21E4;
    }

label_802E23D0:
    ctx->pc = 0x802E23D0u;
    ctx->downcount -= 6;
    // 802E23D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E23D4:
    ctx->pc = 0x802E23D4u;
    // 802E23D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E23D8:
    ctx->pc = 0x802E23D8u;
    // 802E23D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E23DC:
    // 802E23DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E23E0:
    ctx->pc = 0x802E23E0u;
    // 802E23E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E23E4:
    ctx->pc = 0x802E23E4u;
    ctx->downcount -= 6;
    // 802E23E4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E23E8:
    ctx->pc = 0x802E23E8u;
    // 802E23E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E23EC:
    ctx->pc = 0x802E23ECu;
    // 802E23EC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E23F0:
    ctx->pc = 0x802E23F0u;
    // 802E23F0: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E23F4:
    // 802E23F4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E23F8:
    // 802E23F8: bl      0x80371554
    {
            ctx->lr = 0x802E23FCu;
            ctx->pc = 0x80371554u;
            return;
    }

label_802E23FC:
    ctx->downcount -= 2;
    // 802E23FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2400:
    // 802E2400: bl      0x802E22C0
    {
            ctx->lr = 0x802E2404u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E22C0u;
                return;
            }
            goto label_802E22C0;
    }

label_802E2404:
    ctx->downcount -= 1;
    // 802E2404: bl      0x802C3780
    {
            ctx->lr = 0x802E2408u;
            ctx->pc = 0x802C3780u;
            return;
    }

label_802E2408:
    ctx->downcount -= 8;
    // 802E2408: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_802E240C:
    ctx->pc = 0x802E240Cu;
    // 802E240C: lwz     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802E2410:
    // 802E2410: addi    r5, r5, 10080
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(10080);

label_802E2414:
    // 802E2414: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E2418:
    // 802E2418: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_802E241C:
    // 802E241C: addi    r5, r5, 48
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(48);

label_802E2420:
    // 802E2420: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_802E2424:
    // 802E2424: bl      0x8000D074
    {
            ctx->lr = 0x802E2428u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_802E2428:
    ctx->downcount -= 3;
    // 802E2428: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E242C:
    // 802E242C: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_802E2430:
    // 802E2430: bl      0x802E21E4
    {
            ctx->lr = 0x802E2434u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E21E4u;
                return;
            }
            goto label_802E21E4;
    }

label_802E2434:
    ctx->pc = 0x802E2434u;
    ctx->downcount -= 6;
    // 802E2434: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2438:
    ctx->pc = 0x802E2438u;
    // 802E2438: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E243C:
    ctx->pc = 0x802E243Cu;
    // 802E243C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2440:
    // 802E2440: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2444:
    ctx->pc = 0x802E2444u;
    // 802E2444: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2448:
    ctx->pc = 0x802E2448u;
    ctx->downcount -= 24;
    // 802E2448: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E244C:
    ctx->pc = 0x802E244Cu;
    // 802E244C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2450:
    // 802E2450: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E2454:
    // 802E2454: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2458:
    ctx->pc = 0x802E2458u;
    // 802E2458: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E245C:
    // 802E245C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802E2460:
    // 802E2460: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802E2464:
    ctx->pc = 0x802E2464u;
    // 802E2464: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2468:
    // 802E2468: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_802E246C:
    // 802E246C: addi    r31, r31, 10080
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(10080);

label_802E2470:
    // 802E2470: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2474:
    // 802E2474: addi    r5, r31, 65
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(65);

label_802E2478:
    // 802E2478: addi    r6, r31, 80
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(80);

label_802E247C:
    // 802E247C: bl      0x80371668
    {
            ctx->lr = 0x802E2480u;
            ctx->pc = 0x80371668u;
            return;
    }

label_802E2480:
    ctx->downcount -= 13;
    // 802E2480: lis     r7, -32660
    ctx->gpr[7] = ((u32)(s32)(-32660) << 16);

label_802E2484:
    // 802E2484: addi    r4, r31, 109
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(109);

label_802E2488:
    // 802E2488: addi    r7, r7, 9360
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(9360);

label_802E248C:
    ctx->pc = 0x802E248Cu;
    // 802E248C: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_802E2490:
    // 802E2490: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_802E2494:
    // 802E2494: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_802E2498:
    // 802E2498: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_802E249C:
    // 802E249C: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_802E24A0:
    ctx->pc = 0x802E24A0u;
    // 802E24A0: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E24A4:
    // 802E24A4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_802E24A8:
    ctx->pc = 0x802E24A8u;
    // 802E24A8: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_802E24AC:
    ctx->pc = 0x802E24ACu;
    // 802E24AC: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E24B0:
    // 802E24B0: bl      0x8000E7F4
    {
            ctx->lr = 0x802E24B4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_802E24B4:
    ctx->downcount -= 2;
    // 802E24B4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_802E24B8:
    // 802E24B8: bl      0x80270188
    {
            ctx->lr = 0x802E24BCu;
            ctx->pc = 0x80270188u;
            return;
    }

label_802E24BC:
    ctx->downcount -= 17;
    // 802E24BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E24C0:
    ctx->pc = 0x802E24C0u;
    // 802E24C0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E24C4:
    ctx->pc = 0x802E24C4u;
    // 802E24C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E24C8:
    ctx->pc = 0x802E24C8u;
    // 802E24C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E24CC:
    // 802E24CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E24D0:
    ctx->pc = 0x802E24D0u;
    // 802E24D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E24D4:
    ctx->pc = 0x802E24D4u;
    ctx->downcount -= 18;
    // 802E24D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E24D8:
    ctx->pc = 0x802E24D8u;
    // 802E24D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E24DC:
    // 802E24DC: cmpwi   r3, 0
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

label_802E24E0:
    ctx->pc = 0x802E24E0u;
    // 802E24E0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E24E4:
    ctx->pc = 0x802E24E4u;
    // 802E24E4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E24E8:
    // 802E24E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E24EC:
    // 802E24EC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E24F0:
    // 802E24F0: bc    12, 2, 0x802E2524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2524;
        }
    }

label_802E24F4:
    ctx->downcount -= 1;
    // 802E24F4: bc    12, 2, 0x802E2514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2514;
        }
    }

label_802E24F8:
    ctx->downcount -= 1;
    // 802E24F8: bc    12, 2, 0x802E2514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2514;
        }
    }

label_802E24FC:
    ctx->downcount -= 3;
    // 802E24FC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2500:
    // 802E2500: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_802E2504:
    // 802E2504: bl      0x801F5C24
    {
            ctx->lr = 0x802E2508u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_802E2508:
    ctx->downcount -= 3;
    // 802E2508: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E250C:
    // 802E250C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2510:
    // 802E2510: bl      0x801F9C70
    {
            ctx->lr = 0x802E2514u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_802E2514:
    ctx->downcount -= 2;
    // 802E2514: cmpwi   r31, 0
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

label_802E2518:
    // 802E2518: bc    4, 1, 0x802E2524
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2524;
        }
    }

label_802E251C:
    ctx->downcount -= 2;
    // 802E251C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2520:
    // 802E2520: bl      0x801C1C90
    {
            ctx->lr = 0x802E2524u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_802E2524:
    ctx->downcount -= 17;
    // 802E2524: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2528:
    ctx->pc = 0x802E2528u;
    // 802E2528: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E252C:
    ctx->pc = 0x802E252Cu;
    // 802E252C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2530:
    ctx->pc = 0x802E2530u;
    // 802E2530: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2534:
    // 802E2534: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2538:
    ctx->pc = 0x802E2538u;
    // 802E2538: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E253C:
    ctx->downcount -= 2;
    // 802E253C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_802E2540:
    // 802E2540: b       0x802E24D4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E24D4u;
                return;
            }
            goto label_802E24D4;
    }

label_802E2544:
    ctx->downcount -= 2;
    // 802E2544: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E2548:
    // 802E2548: b       0x802E2398
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2398u;
                return;
            }
            goto label_802E2398;
    }

label_802E254C:
    ctx->downcount -= 2;
    // 802E254C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_802E2550:
    // 802E2550: b       0x802E24D4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E24D4u;
                return;
            }
            goto label_802E24D4;
    }

label_802E2554:
    ctx->pc = 0x802E2554u;
    ctx->downcount -= 21;
    // 802E2554: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2558:
    ctx->pc = 0x802E2558u;
    // 802E2558: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E255C:
    ctx->pc = 0x802E255Cu;
    // 802E255C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2560:
    ctx->pc = 0x802E2560u;
    // 802E2560: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2564:
    ctx->pc = 0x802E2564u;
    // 802E2564: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2568:
    ctx->pc = 0x802E2568u;
    // 802E2568: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E256C:
    ctx->pc = 0x802E256Cu;
    // 802E256C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2570:
    ctx->pc = 0x802E2570u;
    // 802E2570: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2574:
    ctx->pc = 0x802E2574u;
    // 802E2574: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2578:
    ctx->pc = 0x802E2578u;
    // 802E2578: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E257Cu;
            ctx->pc = target;
            return;
        }
    }

label_802E257C:
    ctx->pc = 0x802E257Cu;
    ctx->downcount -= 2;
    // 802E257C: cmpwi   r3, 0
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

label_802E2580:
    ctx->pc = 0x802E2580u;
    // 802E2580: bc    12, 2, 0x802E2620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2620;
        }
    }

label_802E2584:
    ctx->pc = 0x802E2584u;
    ctx->downcount -= 6;
    // 802E2584: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2588:
    ctx->pc = 0x802E2588u;
    // 802E2588: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E258C:
    ctx->pc = 0x802E258Cu;
    // 802E258C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2590:
    ctx->pc = 0x802E2590u;
    // 802E2590: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2594:
    ctx->pc = 0x802E2594u;
    // 802E2594: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2598u;
            ctx->pc = target;
            return;
        }
    }

label_802E2598:
    ctx->pc = 0x802E2598u;
    ctx->downcount -= 2;
    // 802E2598: cmpwi   r3, 0
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

label_802E259C:
    ctx->pc = 0x802E259Cu;
    // 802E259C: bc    12, 2, 0x802E2620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2620;
        }
    }

label_802E25A0:
    ctx->pc = 0x802E25A0u;
    ctx->downcount -= 6;
    // 802E25A0: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E25A4:
    ctx->pc = 0x802E25A4u;
    // 802E25A4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E25A8:
    ctx->pc = 0x802E25A8u;
    // 802E25A8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E25AC:
    ctx->pc = 0x802E25ACu;
    // 802E25AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E25B0:
    ctx->pc = 0x802E25B0u;
    // 802E25B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E25B4u;
            ctx->pc = target;
            return;
        }
    }

label_802E25B4:
    ctx->pc = 0x802E25B4u;
    ctx->downcount -= 2;
    // 802E25B4: cmpwi   r3, 0
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

label_802E25B8:
    ctx->pc = 0x802E25B8u;
    // 802E25B8: bc    12, 2, 0x802E2620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2620;
        }
    }

label_802E25BC:
    ctx->pc = 0x802E25BCu;
    ctx->downcount -= 6;
    // 802E25BC: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E25C0:
    ctx->pc = 0x802E25C0u;
    // 802E25C0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E25C4:
    ctx->pc = 0x802E25C4u;
    // 802E25C4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E25C8:
    ctx->pc = 0x802E25C8u;
    // 802E25C8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E25CC:
    ctx->pc = 0x802E25CCu;
    // 802E25CC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E25D0u;
            ctx->pc = target;
            return;
        }
    }

label_802E25D0:
    ctx->pc = 0x802E25D0u;
    ctx->downcount -= 2;
    // 802E25D0: cmpwi   r3, 0
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

label_802E25D4:
    ctx->pc = 0x802E25D4u;
    // 802E25D4: bc    12, 2, 0x802E2620
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2620;
        }
    }

label_802E25D8:
    ctx->pc = 0x802E25D8u;
    ctx->downcount -= 2;
    // 802E25D8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E25DC:
    ctx->pc = 0x802E25DCu;
    // 802E25DC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E25E0:
    ctx->downcount -= 3;
    // 802E25E0: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E25E4:
    ctx->pc = 0x802E25E4u;
    // 802E25E4: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E25E8:
    // 802E25E8: bl      0x8036B2DC
    {
            ctx->lr = 0x802E25ECu;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_802E25EC:
    ctx->downcount -= 4;
    // 802E25EC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E25F0:
    // 802E25F0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E25F4:
    // 802E25F4: cmpwi   r30, 2
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

label_802E25F8:
    // 802E25F8: bc    12, 0, 0x802E25E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E25E0u;
                return;
            }
            goto label_802E25E0;
        }
    }

label_802E25FC:
    ctx->pc = 0x802E25FCu;
    ctx->downcount -= 2;
    // 802E25FC: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2600:
    ctx->pc = 0x802E2600u;
    // 802E2600: bl      0x8036E8D0
    {
            ctx->lr = 0x802E2604u;
            ctx->pc = 0x8036E8D0u;
            return;
    }

label_802E2604:
    ctx->pc = 0x802E2604u;
    ctx->downcount -= 2;
    // 802E2604: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2608:
    ctx->pc = 0x802E2608u;
    // 802E2608: bl      0x8026EEE8
    {
            ctx->lr = 0x802E260Cu;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_802E260C:
    ctx->pc = 0x802E260Cu;
    ctx->downcount -= 6;
    // 802E260C: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2610:
    ctx->pc = 0x802E2610u;
    // 802E2610: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E2614:
    ctx->pc = 0x802E2614u;
    // 802E2614: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2618:
    ctx->pc = 0x802E2618u;
    // 802E2618: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E261C:
    ctx->pc = 0x802E261Cu;
    // 802E261C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2620u;
            ctx->pc = target;
            return;
        }
    }

label_802E2620:
    ctx->pc = 0x802E2620u;
    ctx->downcount -= 6;
    // 802E2620: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2624:
    ctx->pc = 0x802E2624u;
    // 802E2624: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E2628:
    ctx->pc = 0x802E2628u;
    // 802E2628: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E262C:
    ctx->pc = 0x802E262Cu;
    // 802E262C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2630:
    ctx->pc = 0x802E2630u;
    // 802E2630: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2634:
    ctx->pc = 0x802E2634u;
    // 802E2634: bl      0x80370BD4
    {
            ctx->lr = 0x802E2638u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2638:
    ctx->pc = 0x802E2638u;
    ctx->downcount -= 3;
    // 802E2638: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E263C:
    ctx->pc = 0x802E263Cu;
    // 802E263C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E2640:
    ctx->pc = 0x802E2640u;
    // 802E2640: bl      0x80263ABC
    {
            ctx->lr = 0x802E2644u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E2644:
    ctx->pc = 0x802E2644u;
    ctx->downcount -= 16;
    // 802E2644: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2648:
    ctx->pc = 0x802E2648u;
    // 802E2648: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E264C:
    ctx->pc = 0x802E264Cu;
    // 802E264C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2650:
    ctx->pc = 0x802E2650u;
    // 802E2650: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2654:
    ctx->pc = 0x802E2654u;
    // 802E2654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2658:
    ctx->pc = 0x802E2658u;
    ctx->downcount -= 11;
    // 802E2658: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E265C:
    ctx->pc = 0x802E265Cu;
    // 802E265C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2660:
    ctx->pc = 0x802E2660u;
    // 802E2660: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2664:
    ctx->pc = 0x802E2664u;
    // 802E2664: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E2668:
    ctx->pc = 0x802E2668u;
    // 802E2668: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E266C:
    ctx->pc = 0x802E266Cu;
    // 802E266C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2670:
    ctx->pc = 0x802E2670u;
    // 802E2670: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2674:
    ctx->pc = 0x802E2674u;
    // 802E2674: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2678:
    ctx->pc = 0x802E2678u;
    // 802E2678: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E267C:
    ctx->pc = 0x802E267Cu;
    // 802E267C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2680u;
            ctx->pc = target;
            return;
        }
    }

label_802E2680:
    ctx->pc = 0x802E2680u;
    ctx->downcount -= 6;
    // 802E2680: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2684:
    ctx->pc = 0x802E2684u;
    // 802E2684: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2688:
    ctx->pc = 0x802E2688u;
    // 802E2688: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E268C:
    ctx->pc = 0x802E268Cu;
    // 802E268C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2690:
    ctx->pc = 0x802E2690u;
    // 802E2690: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2694u;
            ctx->pc = target;
            return;
        }
    }

label_802E2694:
    ctx->pc = 0x802E2694u;
    ctx->downcount -= 6;
    // 802E2694: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2698:
    ctx->pc = 0x802E2698u;
    // 802E2698: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E269C:
    ctx->pc = 0x802E269Cu;
    // 802E269C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E26A0:
    ctx->pc = 0x802E26A0u;
    // 802E26A0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E26A4:
    ctx->pc = 0x802E26A4u;
    // 802E26A4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E26A8u;
            ctx->pc = target;
            return;
        }
    }

label_802E26A8:
    ctx->pc = 0x802E26A8u;
    ctx->downcount -= 6;
    // 802E26A8: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E26AC:
    ctx->pc = 0x802E26ACu;
    // 802E26AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E26B0:
    ctx->pc = 0x802E26B0u;
    // 802E26B0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E26B4:
    ctx->pc = 0x802E26B4u;
    // 802E26B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E26B8:
    ctx->pc = 0x802E26B8u;
    // 802E26B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E26BCu;
            ctx->pc = target;
            return;
        }
    }

label_802E26BC:
    ctx->pc = 0x802E26BCu;
    ctx->downcount -= 6;
    // 802E26BC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E26C0:
    ctx->pc = 0x802E26C0u;
    // 802E26C0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E26C4:
    ctx->pc = 0x802E26C4u;
    // 802E26C4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E26C8:
    ctx->pc = 0x802E26C8u;
    // 802E26C8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E26CC:
    ctx->pc = 0x802E26CCu;
    // 802E26CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E26D0:
    ctx->pc = 0x802E26D0u;
    ctx->downcount -= 19;
    // 802E26D0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E26D4:
    ctx->pc = 0x802E26D4u;
    // 802E26D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E26D8:
    ctx->pc = 0x802E26D8u;
    // 802E26D8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E26DC:
    ctx->pc = 0x802E26DCu;
    // 802E26DC: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E26E0:
    ctx->pc = 0x802E26E0u;
    // 802E26E0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E26E4:
    ctx->pc = 0x802E26E4u;
    // 802E26E4: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E26E8:
    ctx->pc = 0x802E26E8u;
    // 802E26E8: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E26EC:
    ctx->pc = 0x802E26ECu;
    // 802E26EC: cmpwi   r0, 0
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

label_802E26F0:
    ctx->pc = 0x802E26F0u;
    // 802E26F0: bc    12, 2, 0x802E270C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E270C;
        }
    }

label_802E26F4:
    ctx->pc = 0x802E26F4u;
    ctx->downcount -= 3;
    // 802E26F4: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E26F8:
    ctx->pc = 0x802E26F8u;
    // 802E26F8: cmpwi   r0, 0
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

label_802E26FC:
    ctx->pc = 0x802E26FCu;
    // 802E26FC: bc    12, 2, 0x802E270C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E270C;
        }
    }

label_802E2700:
    ctx->pc = 0x802E2700u;
    ctx->downcount -= 3;
    // 802E2700: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802E2704:
    ctx->pc = 0x802E2704u;
    // 802E2704: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E2708:
    ctx->pc = 0x802E2708u;
    // 802E2708: bl      0x803457B8
    {
            ctx->lr = 0x802E270Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E270C:
    ctx->pc = 0x802E270Cu;
    ctx->downcount -= 2;
    // 802E270C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E2710:
    ctx->pc = 0x802E2710u;
    // 802E2710: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E2714:
    ctx->downcount -= 5;
    // 802E2714: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E2718:
    ctx->pc = 0x802E2718u;
    // 802E2718: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E271C:
    ctx->pc = 0x802E271Cu;
    // 802E271C: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2720:
    // 802E2720: cmpwi   r0, 0
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

label_802E2724:
    // 802E2724: bc    12, 2, 0x802E2740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2740;
        }
    }

label_802E2728:
    ctx->pc = 0x802E2728u;
    ctx->downcount -= 3;
    // 802E2728: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E272C:
    // 802E272C: cmpwi   r0, 0
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

label_802E2730:
    // 802E2730: bc    12, 2, 0x802E2740
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2740;
        }
    }

label_802E2734:
    ctx->downcount -= 3;
    // 802E2734: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_802E2738:
    // 802E2738: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802E273C:
    // 802E273C: bl      0x803457B8
    {
            ctx->lr = 0x802E2740u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E2740:
    ctx->downcount -= 4;
    // 802E2740: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E2744:
    // 802E2744: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E2748:
    // 802E2748: cmpwi   r30, 2
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

label_802E274C:
    // 802E274C: bc    12, 0, 0x802E2714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2714u;
                return;
            }
            goto label_802E2714;
        }
    }

label_802E2750:
    ctx->pc = 0x802E2750u;
    ctx->downcount -= 6;
    // 802E2750: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2754:
    ctx->pc = 0x802E2754u;
    // 802E2754: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E2758:
    ctx->pc = 0x802E2758u;
    // 802E2758: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E275C:
    ctx->pc = 0x802E275Cu;
    // 802E275C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2760:
    ctx->pc = 0x802E2760u;
    // 802E2760: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2764:
    ctx->pc = 0x802E2764u;
    // 802E2764: bl      0x80370BD4
    {
            ctx->lr = 0x802E2768u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2768:
    ctx->pc = 0x802E2768u;
    ctx->downcount -= 3;
    // 802E2768: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E276C:
    ctx->pc = 0x802E276Cu;
    // 802E276C: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E2770:
    ctx->pc = 0x802E2770u;
    // 802E2770: bl      0x80263ABC
    {
            ctx->lr = 0x802E2774u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E2774:
    ctx->pc = 0x802E2774u;
    ctx->downcount -= 16;
    // 802E2774: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2778:
    ctx->pc = 0x802E2778u;
    // 802E2778: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E277C:
    ctx->pc = 0x802E277Cu;
    // 802E277C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2780:
    ctx->pc = 0x802E2780u;
    // 802E2780: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2784:
    ctx->pc = 0x802E2784u;
    // 802E2784: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2788:
    ctx->pc = 0x802E2788u;
    ctx->downcount -= 1;
    // 802E2788: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E278C:
    ctx->pc = 0x802E278Cu;
    ctx->downcount -= 10;
    // 802E278C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2790:
    ctx->pc = 0x802E2790u;
    // 802E2790: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2794:
    ctx->pc = 0x802E2794u;
    // 802E2794: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_802E2798:
    ctx->pc = 0x802E2798u;
    // 802E2798: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E279C:
    ctx->pc = 0x802E279Cu;
    // 802E279C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E27A0:
    ctx->pc = 0x802E27A0u;
    // 802E27A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E27A4:
    ctx->pc = 0x802E27A4u;
    // 802E27A4: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E27A8:
    ctx->pc = 0x802E27A8u;
    // 802E27A8: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E27AC:
    ctx->pc = 0x802E27ACu;
    // 802E27AC: cmpwi   r0, 0
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

label_802E27B0:
    ctx->pc = 0x802E27B0u;
    // 802E27B0: bc    12, 2, 0x802E27C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E27C0;
        }
    }

label_802E27B4:
    ctx->pc = 0x802E27B4u;
    ctx->downcount -= 3;
    // 802E27B4: li      r0, 3
    ctx->gpr[0] = (u32)(s32)(3);

label_802E27B8:
    ctx->pc = 0x802E27B8u;
    // 802E27B8: stw     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E27BC:
    ctx->pc = 0x802E27BCu;
    // 802E27BC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802E27C0:
    ctx->pc = 0x802E27C0u;
    ctx->downcount -= 6;
    // 802E27C0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_802E27C4:
    ctx->pc = 0x802E27C4u;
    // 802E27C4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802E27C8:
    ctx->pc = 0x802E27C8u;
    // 802E27C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E27CC:
    ctx->pc = 0x802E27CCu;
    // 802E27CC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_802E27D0:
    ctx->pc = 0x802E27D0u;
    // 802E27D0: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_802E27D4:
    ctx->downcount -= 5;
    // 802E27D4: add   r6, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_802E27D8:
    ctx->pc = 0x802E27D8u;
    // 802E27D8: lwz     r6, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802E27DC:
    ctx->pc = 0x802E27DCu;
    // 802E27DC: lbz     r6, 209(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(209);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_802E27E0:
    // 802E27E0: cmpwi   r6, 0
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

label_802E27E4:
    // 802E27E4: bc    12, 2, 0x802E2800
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2800;
        }
    }

label_802E27E8:
    ctx->downcount -= 2;
    // 802E27E8: cmpwi   r8, 0
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

label_802E27EC:
    // 802E27EC: bc    4, 2, 0x802E27F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E27F8;
        }
    }

label_802E27F0:
    ctx->pc = 0x802E27F0u;
    ctx->downcount -= 2;
    // 802E27F0: stw     r5, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_802E27F4:
    // 802E27F4: b       0x802E27FC
    {
            goto label_802E27FC;
    }

label_802E27F8:
    ctx->pc = 0x802E27F8u;
    ctx->downcount -= 1;
    // 802E27F8: stw     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E27FC:
    ctx->downcount -= 1;
    // 802E27FC: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_802E2800:
    ctx->downcount -= 3;
    // 802E2800: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_802E2804:
    // 802E2804: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_802E2808:
    // 802E2808: bc    16, 0, 0x802E27D4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E27D4u;
                return;
            }
            goto label_802E27D4;
        }
    }

label_802E280C:
    ctx->pc = 0x802E280Cu;
    ctx->downcount -= 2;
    // 802E280C: cmpwi   r7, 0
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

label_802E2810:
    ctx->pc = 0x802E2810u;
    // 802E2810: bc    12, 2, 0x802E2844
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2844;
        }
    }

label_802E2814:
    ctx->pc = 0x802E2814u;
    ctx->downcount -= 6;
    // 802E2814: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2818:
    ctx->pc = 0x802E2818u;
    // 802E2818: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E281C:
    ctx->pc = 0x802E281Cu;
    // 802E281C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E2820:
    ctx->pc = 0x802E2820u;
    // 802E2820: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2824:
    ctx->pc = 0x802E2824u;
    // 802E2824: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2828:
    ctx->pc = 0x802E2828u;
    // 802E2828: bl      0x80370BD4
    {
            ctx->lr = 0x802E282Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E282C:
    ctx->pc = 0x802E282Cu;
    ctx->downcount -= 3;
    // 802E282C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2830:
    ctx->pc = 0x802E2830u;
    // 802E2830: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E2834:
    ctx->pc = 0x802E2834u;
    // 802E2834: bl      0x80263ABC
    {
            ctx->lr = 0x802E2838u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E2838:
    ctx->pc = 0x802E2838u;
    ctx->downcount -= 3;
    // 802E2838: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_802E283C:
    ctx->pc = 0x802E283Cu;
    // 802E283C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_802E2840:
    ctx->pc = 0x802E2840u;
    // 802E2840: bl      0x803457B8
    {
            ctx->lr = 0x802E2844u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E2844:
    ctx->pc = 0x802E2844u;
    ctx->downcount -= 2;
    // 802E2844: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2848:
    ctx->pc = 0x802E2848u;
    // 802E2848: bl      0x8026EE88
    {
            ctx->lr = 0x802E284Cu;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_802E284C:
    ctx->pc = 0x802E284Cu;
    ctx->downcount -= 6;
    // 802E284C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2850:
    ctx->pc = 0x802E2850u;
    // 802E2850: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E2854:
    ctx->pc = 0x802E2854u;
    // 802E2854: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2858:
    ctx->pc = 0x802E2858u;
    // 802E2858: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E285C:
    ctx->pc = 0x802E285Cu;
    // 802E285C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2860:
    ctx->pc = 0x802E2860u;
    ctx->downcount -= 2;
    // 802E2860: lwz     r3, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2864:
    ctx->pc = 0x802E2864u;
    // 802E2864: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_802E2868:
    ctx->pc = 0x802E2868u;
    ctx->downcount -= 7;
    // 802E2868: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E286C:
    ctx->pc = 0x802E286Cu;
    // 802E286C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2870:
    ctx->pc = 0x802E2870u;
    // 802E2870: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2874:
    ctx->pc = 0x802E2874u;
    // 802E2874: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2878:
    ctx->pc = 0x802E2878u;
    // 802E2878: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E287C:
    ctx->pc = 0x802E287Cu;
    // 802E287C: cmpwi   r0, 0
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

label_802E2880:
    ctx->pc = 0x802E2880u;
    // 802E2880: bc    12, 2, 0x802E28C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E28C0;
        }
    }

label_802E2884:
    ctx->pc = 0x802E2884u;
    ctx->downcount -= 4;
    // 802E2884: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2888:
    ctx->pc = 0x802E2888u;
    // 802E2888: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E288C:
    ctx->pc = 0x802E288Cu;
    // 802E288C: cmpwi   r0, 0
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

label_802E2890:
    ctx->pc = 0x802E2890u;
    // 802E2890: bc    12, 2, 0x802E28C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E28C0;
        }
    }

label_802E2894:
    ctx->pc = 0x802E2894u;
    ctx->downcount -= 4;
    // 802E2894: lwz     r4, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2898:
    ctx->pc = 0x802E2898u;
    // 802E2898: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E289C:
    ctx->pc = 0x802E289Cu;
    // 802E289C: cmpwi   r0, 0
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

label_802E28A0:
    ctx->pc = 0x802E28A0u;
    // 802E28A0: bc    12, 2, 0x802E28C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E28C0;
        }
    }

label_802E28A4:
    ctx->pc = 0x802E28A4u;
    ctx->downcount -= 4;
    // 802E28A4: lwz     r4, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E28A8:
    ctx->pc = 0x802E28A8u;
    // 802E28A8: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E28AC:
    ctx->pc = 0x802E28ACu;
    // 802E28AC: cmpwi   r0, 0
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

label_802E28B0:
    ctx->pc = 0x802E28B0u;
    // 802E28B0: bc    12, 2, 0x802E28C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E28C0;
        }
    }

label_802E28B4:
    ctx->pc = 0x802E28B4u;
    ctx->downcount -= 3;
    // 802E28B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E28B8:
    ctx->pc = 0x802E28B8u;
    // 802E28B8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_802E28BC:
    ctx->pc = 0x802E28BCu;
    // 802E28BC: bl      0x803457B8
    {
            ctx->lr = 0x802E28C0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E28C0:
    ctx->pc = 0x802E28C0u;
    ctx->downcount -= 6;
    // 802E28C0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E28C4:
    ctx->pc = 0x802E28C4u;
    // 802E28C4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E28C8:
    ctx->pc = 0x802E28C8u;
    // 802E28C8: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_802E28CC:
    ctx->pc = 0x802E28CCu;
    // 802E28CC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E28D0:
    ctx->pc = 0x802E28D0u;
    // 802E28D0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E28D4:
    ctx->pc = 0x802E28D4u;
    // 802E28D4: bl      0x80370BD4
    {
            ctx->lr = 0x802E28D8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E28D8:
    ctx->pc = 0x802E28D8u;
    ctx->downcount -= 3;
    // 802E28D8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E28DC:
    ctx->pc = 0x802E28DCu;
    // 802E28DC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E28E0:
    ctx->pc = 0x802E28E0u;
    // 802E28E0: bl      0x80263ABC
    {
            ctx->lr = 0x802E28E4u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_802E28E4:
    ctx->pc = 0x802E28E4u;
    ctx->downcount -= 5;
    // 802E28E4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E28E8:
    ctx->pc = 0x802E28E8u;
    // 802E28E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E28EC:
    ctx->pc = 0x802E28ECu;
    // 802E28EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E28F0:
    ctx->pc = 0x802E28F0u;
    // 802E28F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E28F4:
    ctx->pc = 0x802E28F4u;
    ctx->downcount -= 5;
    // 802E28F4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E28F8:
    ctx->pc = 0x802E28F8u;
    // 802E28F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E28FC:
    ctx->pc = 0x802E28FCu;
    // 802E28FC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2900:
    ctx->pc = 0x802E2900u;
    // 802E2900: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2904:
    ctx->pc = 0x802E2904u;
    // 802E2904: bl      0x80007860
    {
            ctx->lr = 0x802E2908u;
            ctx->pc = 0x80007860u;
            return;
    }

label_802E2908:
    ctx->pc = 0x802E2908u;
    ctx->downcount -= 5;
    // 802E2908: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E290C:
    ctx->pc = 0x802E290Cu;
    // 802E290C: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2910:
    ctx->pc = 0x802E2910u;
    // 802E2910: lwz     r5, 188(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(188);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E2914:
    ctx->pc = 0x802E2914u;
    // 802E2914: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E2918:
    ctx->pc = 0x802E2918u;
    // 802E2918: bl      0x803554B8
    {
            ctx->lr = 0x802E291Cu;
            ctx->pc = 0x803554B8u;
            return;
    }

label_802E291C:
    ctx->pc = 0x802E291Cu;
    ctx->downcount -= 6;
    // 802E291C: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2920:
    ctx->pc = 0x802E2920u;
    // 802E2920: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2924:
    ctx->pc = 0x802E2924u;
    // 802E2924: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2928:
    ctx->pc = 0x802E2928u;
    // 802E2928: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E292C:
    ctx->pc = 0x802E292Cu;
    // 802E292C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2930u;
            ctx->pc = target;
            return;
        }
    }

label_802E2930:
    ctx->pc = 0x802E2930u;
    ctx->downcount -= 3;
    // 802E2930: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2934:
    ctx->pc = 0x802E2934u;
    // 802E2934: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2938:
    ctx->pc = 0x802E2938u;
    // 802E2938: bl      0x802DD258
    {
            ctx->lr = 0x802E293Cu;
            ctx->pc = 0x802DD258u;
            return;
    }

label_802E293C:
    ctx->pc = 0x802E293Cu;
    ctx->downcount -= 3;
    // 802E293C: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2940:
    ctx->pc = 0x802E2940u;
    // 802E2940: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_802E2944:
    ctx->pc = 0x802E2944u;
    // 802E2944: bl      0x802E3C9C
    {
            ctx->lr = 0x802E2948u;
            ctx->pc = 0x802E3C9Cu;
            return;
    }

label_802E2948:
    ctx->pc = 0x802E2948u;
    ctx->downcount -= 2;
    // 802E2948: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E294C:
    ctx->pc = 0x802E294Cu;
    // 802E294C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E2950:
    ctx->downcount -= 4;
    // 802E2950: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E2954:
    // 802E2954: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E2958:
    ctx->pc = 0x802E2958u;
    // 802E2958: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E295C:
    // 802E295C: bl      0x8036B330
    {
            ctx->lr = 0x802E2960u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_802E2960:
    ctx->downcount -= 4;
    // 802E2960: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E2964:
    // 802E2964: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E2968:
    // 802E2968: cmpwi   r30, 2
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

label_802E296C:
    // 802E296C: bc    12, 0, 0x802E2950
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2950u;
                return;
            }
            goto label_802E2950;
        }
    }

label_802E2970:
    ctx->pc = 0x802E2970u;
    ctx->downcount -= 3;
    // 802E2970: lbz     r0, 201(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(201);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2974:
    ctx->pc = 0x802E2974u;
    // 802E2974: cmpwi   r0, 0
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

label_802E2978:
    ctx->pc = 0x802E2978u;
    // 802E2978: bc    12, 2, 0x802E2994
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2994;
        }
    }

label_802E297C:
    ctx->pc = 0x802E297Cu;
    ctx->downcount -= 2;
    // 802E297C: lwz     r3, 168(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2980:
    ctx->pc = 0x802E2980u;
    // 802E2980: bl      0x8036E924
    {
            ctx->lr = 0x802E2984u;
            ctx->pc = 0x8036E924u;
            return;
    }

label_802E2984:
    ctx->pc = 0x802E2984u;
    ctx->downcount -= 4;
    // 802E2984: lfs     f0, -12552(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E2984u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12552);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2988:
    ctx->pc = 0x802E2988u;
    // 802E2988: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_802E298C:
    ctx->pc = 0x802E298Cu;
    // 802E298C: stfs     f0, 196(r29)
    if (!ppc_fp_available_inline(ctx, 0x802E298Cu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2990:
    ctx->pc = 0x802E2990u;
    // 802E2990: stb     r0, 202(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(202);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_802E2994:
    ctx->pc = 0x802E2994u;
    ctx->downcount -= 3;
    // 802E2994: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2998:
    ctx->pc = 0x802E2998u;
    // 802E2998: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_802E299C:
    ctx->pc = 0x802E299Cu;
    // 802E299C: bl      0x8026F12C
    {
            ctx->lr = 0x802E29A0u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_802E29A0:
    ctx->pc = 0x802E29A0u;
    ctx->downcount -= 8;
    // 802E29A0: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E29A4:
    ctx->pc = 0x802E29A4u;
    // 802E29A4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E29A8:
    ctx->pc = 0x802E29A8u;
    // 802E29A8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_802E29AC:
    ctx->pc = 0x802E29ACu;
    // 802E29AC: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E29B0:
    ctx->pc = 0x802E29B0u;
    // 802E29B0: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E29B4:
    ctx->pc = 0x802E29B4u;
    // 802E29B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E29B8:
    ctx->pc = 0x802E29B8u;
    // 802E29B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E29BCu;
            ctx->pc = target;
            return;
        }
    }

label_802E29BC:
    ctx->pc = 0x802E29BCu;
    ctx->downcount -= 2;
    // 802E29BC: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802E29C0:
    ctx->pc = 0x802E29C0u;
    // 802E29C0: bl      0x800078AC
    {
            ctx->lr = 0x802E29C4u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_802E29C4:
    ctx->pc = 0x802E29C4u;
    ctx->downcount -= 5;
    // 802E29C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E29C8:
    ctx->pc = 0x802E29C8u;
    // 802E29C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E29CC:
    ctx->pc = 0x802E29CCu;
    // 802E29CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E29D0:
    ctx->pc = 0x802E29D0u;
    // 802E29D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E29D4:
    ctx->pc = 0x802E29D4u;
    ctx->downcount -= 8;
    // 802E29D4: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E29D8:
    ctx->pc = 0x802E29D8u;
    // 802E29D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E29DC:
    ctx->pc = 0x802E29DCu;
    // 802E29DC: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E29E0:
    ctx->pc = 0x802E29E0u;
    // 802E29E0: stw     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E29E4:
    ctx->pc = 0x802E29E4u;
    // 802E29E4: stw     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_802E29E8:
    ctx->pc = 0x802E29E8u;
    // 802E29E8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E29EC:
    ctx->pc = 0x802E29ECu;
    // 802E29EC: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E29F0:
    ctx->pc = 0x802E29F0u;
    // 802E29F0: bl      0x8036E67C
    {
            ctx->lr = 0x802E29F4u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_802E29F4:
    ctx->pc = 0x802E29F4u;
    ctx->downcount -= 8;
    // 802E29F4: lfs     f0, -12548(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E29F4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E29F8:
    ctx->pc = 0x802E29F8u;
    // 802E29F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E29FC:
    ctx->pc = 0x802E29FCu;
    // 802E29FC: stfs     f0, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E29FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2A00:
    ctx->pc = 0x802E2A00u;
    // 802E2A00: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2A04:
    ctx->pc = 0x802E2A04u;
    // 802E2A04: stfs     f0, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2A08:
    ctx->pc = 0x802E2A08u;
    // 802E2A08: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2A0C:
    ctx->pc = 0x802E2A0Cu;
    // 802E2A0C: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2A10:
    ctx->pc = 0x802E2A10u;
    // 802E2A10: bl      0x80309154
    {
            ctx->lr = 0x802E2A14u;
            ctx->pc = 0x80309154u;
            return;
    }

label_802E2A14:
    ctx->pc = 0x802E2A14u;
    ctx->downcount -= 9;
    // 802E2A14: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E2A18:
    ctx->pc = 0x802E2A18u;
    // 802E2A18: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_802E2A1C:
    ctx->pc = 0x802E2A1Cu;
    // 802E2A1C: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A1Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E2A20:
    ctx->pc = 0x802E2A20u;
    // 802E2A20: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A20u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2A24:
    ctx->pc = 0x802E2A24u;
    // 802E2A24: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A24u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802E2A28:
    ctx->pc = 0x802E2A28u;
    // 802E2A28: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A28u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E2A2C:
    ctx->pc = 0x802E2A2Cu;
    // 802E2A2C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A2Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2A30:
    ctx->pc = 0x802E2A30u;
    // 802E2A30: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2A34:
    ctx->pc = 0x802E2A34u;
    // 802E2A34: bl      0x8036B284
    {
            ctx->lr = 0x802E2A38u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_802E2A38:
    ctx->pc = 0x802E2A38u;
    ctx->downcount -= 3;
    // 802E2A38: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2A3C:
    ctx->pc = 0x802E2A3Cu;
    // 802E2A3C: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_802E2A40:
    ctx->pc = 0x802E2A40u;
    // 802E2A40: bl      0x8036B244
    {
            ctx->lr = 0x802E2A44u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_802E2A44:
    ctx->pc = 0x802E2A44u;
    ctx->downcount -= 3;
    // 802E2A44: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2A48:
    ctx->pc = 0x802E2A48u;
    // 802E2A48: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_802E2A4C:
    ctx->pc = 0x802E2A4Cu;
    // 802E2A4C: bl      0x803090F4
    {
            ctx->lr = 0x802E2A50u;
            ctx->pc = 0x803090F4u;
            return;
    }

label_802E2A50:
    ctx->pc = 0x802E2A50u;
    ctx->downcount -= 9;
    // 802E2A50: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A50u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E2A54:
    ctx->pc = 0x802E2A54u;
    // 802E2A54: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_802E2A58:
    ctx->pc = 0x802E2A58u;
    // 802E2A58: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E2A5C:
    ctx->pc = 0x802E2A5Cu;
    // 802E2A5C: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2A60:
    ctx->pc = 0x802E2A60u;
    // 802E2A60: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802E2A64:
    ctx->pc = 0x802E2A64u;
    // 802E2A64: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A64u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E2A68:
    ctx->pc = 0x802E2A68u;
    // 802E2A68: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2A68u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2A6C:
    ctx->pc = 0x802E2A6Cu;
    // 802E2A6C: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2A70:
    ctx->pc = 0x802E2A70u;
    // 802E2A70: bl      0x8036B284
    {
            ctx->lr = 0x802E2A74u;
            ctx->pc = 0x8036B284u;
            return;
    }

label_802E2A74:
    ctx->pc = 0x802E2A74u;
    ctx->downcount -= 3;
    // 802E2A74: lwz     r3, 164(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2A78:
    ctx->pc = 0x802E2A78u;
    // 802E2A78: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_802E2A7C:
    ctx->pc = 0x802E2A7Cu;
    // 802E2A7C: bl      0x8036B244
    {
            ctx->lr = 0x802E2A80u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_802E2A80:
    ctx->pc = 0x802E2A80u;
    ctx->downcount -= 3;
    // 802E2A80: lbz     r0, 202(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(202);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2A84:
    ctx->pc = 0x802E2A84u;
    // 802E2A84: cmpwi   r0, 0
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

label_802E2A88:
    ctx->pc = 0x802E2A88u;
    // 802E2A88: bc    12, 2, 0x802E2AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2AAC;
        }
    }

label_802E2A8C:
    ctx->pc = 0x802E2A8Cu;
    ctx->downcount -= 7;
    // 802E2A8C: lfs     f2, 196(r30)
    if (!ppc_fp_available_inline(ctx, 0x802E2A8Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E2A90:
    ctx->pc = 0x802E2A90u;
    // 802E2A90: lfs     f1, -12544(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E2A90u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12544);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E2A94:
    ctx->pc = 0x802E2A94u;
    // 802E2A94: lfs     f0, -12548(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E2A94u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12548);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2A98:
    ctx->pc = 0x802E2A98u;
    // 802E2A98: fsubs   f1, f2, f1
    if (!ppc_fp_available_inline(ctx, 0x802E2A98u)) return;
    ppc_fsubs(ctx, 1, 2, 1);

label_802E2A9C:
    ctx->pc = 0x802E2A9Cu;
    // 802E2A9C: stfs     f1, 196(r30)
    if (!ppc_fp_available_inline(ctx, 0x802E2A9Cu)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E2AA0:
    ctx->pc = 0x802E2AA0u;
    // 802E2AA0: fcmpo   cr0, f1, f0
    if (!ppc_fp_available_inline(ctx, 0x802E2AA0u)) return;
    ppc_fcmp(ctx, 0, ctx->fpr[1], ctx->fpr[0], true);

label_802E2AA4:
    ctx->pc = 0x802E2AA4u;
    // 802E2AA4: bc    4, 0, 0x802E2AAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2AAC;
        }
    }

label_802E2AA8:
    ctx->pc = 0x802E2AA8u;
    ctx->downcount -= 1;
    // 802E2AA8: stfs     f0, 196(r30)
    if (!ppc_fp_available_inline(ctx, 0x802E2AA8u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2AAC:
    ctx->pc = 0x802E2AACu;
    ctx->downcount -= 14;
    // 802E2AAC: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_802E2AB0:
    ctx->pc = 0x802E2AB0u;
    // 802E2AB0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_802E2AB4:
    ctx->pc = 0x802E2AB4u;
    // 802E2AB4: stw     r3, 60(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E2AB8:
    ctx->pc = 0x802E2AB8u;
    // 802E2AB8: lfd     f2, -12536(r2)
    if (!ppc_fp_available_inline(ctx, 0x802E2AB8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-12536);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802E2ABC:
    ctx->pc = 0x802E2ABCu;
    // 802E2ABC: stw     r0, 56(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2AC0:
    ctx->pc = 0x802E2AC0u;
    // 802E2AC0: lfs     f0, 196(r30)
    if (!ppc_fp_available_inline(ctx, 0x802E2AC0u)) return;
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2AC4:
    ctx->pc = 0x802E2AC4u;
    // 802E2AC4: lfd     f1, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2AC4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_802E2AC8:
    ctx->pc = 0x802E2AC8u;
    // 802E2AC8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x802E2AC8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_802E2ACC:
    ctx->pc = 0x802E2ACCu;
    // 802E2ACC: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x802E2ACCu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_802E2AD0:
    ctx->pc = 0x802E2AD0u;
    // 802E2AD0: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x802E2AD0u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_802E2AD4:
    ctx->pc = 0x802E2AD4u;
    // 802E2AD4: stfd     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2AD4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_802E2AD8:
    ctx->pc = 0x802E2AD8u;
    // 802E2AD8: lwz     r31, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E2ADC:
    ctx->pc = 0x802E2ADCu;
    // 802E2ADC: cmpwi   r31, 256
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(256);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_802E2AE0:
    ctx->pc = 0x802E2AE0u;
    // 802E2AE0: bc    12, 0, 0x802E2AE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2AE8;
        }
    }

label_802E2AE4:
    ctx->pc = 0x802E2AE4u;
    ctx->downcount -= 1;
    // 802E2AE4: li      r31, 255
    ctx->gpr[31] = (u32)(s32)(255);

label_802E2AE8:
    ctx->pc = 0x802E2AE8u;
    ctx->downcount -= 3;
    // 802E2AE8: lwz     r4, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E2AEC:
    ctx->pc = 0x802E2AECu;
    // 802E2AEC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_802E2AF0:
    ctx->pc = 0x802E2AF0u;
    // 802E2AF0: bl      0x80309094
    {
            ctx->lr = 0x802E2AF4u;
            ctx->pc = 0x80309094u;
            return;
    }

label_802E2AF4:
    ctx->pc = 0x802E2AF4u;
    ctx->downcount -= 9;
    // 802E2AF4: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2AF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_802E2AF8:
    ctx->pc = 0x802E2AF8u;
    // 802E2AF8: addi    r4, r1, 44
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(44);

label_802E2AFC:
    ctx->pc = 0x802E2AFCu;
    // 802E2AFC: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2AFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_802E2B00:
    ctx->pc = 0x802E2B00u;
    // 802E2B00: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2B00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_802E2B04:
    ctx->pc = 0x802E2B04u;
    // 802E2B04: stfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2B04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_802E2B08:
    ctx->pc = 0x802E2B08u;
    // 802E2B08: stfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2B08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_802E2B0C:
    ctx->pc = 0x802E2B0Cu;
    // 802E2B0C: stfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x802E2B0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_802E2B10:
    ctx->pc = 0x802E2B10u;
    // 802E2B10: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2B14:
    ctx->pc = 0x802E2B14u;
    // 802E2B14: bl      0x8036E884
    {
            ctx->lr = 0x802E2B18u;
            ctx->pc = 0x8036E884u;
            return;
    }

label_802E2B18:
    ctx->pc = 0x802E2B18u;
    ctx->downcount -= 3;
    // 802E2B18: lwz     r3, 168(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2B1C:
    ctx->pc = 0x802E2B1Cu;
    // 802E2B1C: rlwinm r4, r31, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_802E2B20:
    ctx->pc = 0x802E2B20u;
    // 802E2B20: bl      0x8036E848
    {
            ctx->lr = 0x802E2B24u;
            ctx->pc = 0x8036E848u;
            return;
    }

label_802E2B24:
    ctx->pc = 0x802E2B24u;
    ctx->downcount -= 7;
    // 802E2B24: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2B28:
    ctx->pc = 0x802E2B28u;
    // 802E2B28: lwz     r31, 76(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(76);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E2B2C:
    ctx->pc = 0x802E2B2Cu;
    // 802E2B2C: lwz     r30, 72(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E2B30:
    ctx->pc = 0x802E2B30u;
    // 802E2B30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2B34:
    ctx->pc = 0x802E2B34u;
    // 802E2B34: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_802E2B38:
    ctx->pc = 0x802E2B38u;
    // 802E2B38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2B3C:
    ctx->pc = 0x802E2B3Cu;
    ctx->downcount -= 16;
    // 802E2B3C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2B40:
    ctx->pc = 0x802E2B40u;
    // 802E2B40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2B44:
    ctx->pc = 0x802E2B44u;
    // 802E2B44: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2B48:
    ctx->pc = 0x802E2B48u;
    // 802E2B48: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2B4C:
    ctx->pc = 0x802E2B4Cu;
    // 802E2B4C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2B50:
    ctx->pc = 0x802E2B50u;
    // 802E2B50: bl      0x802E2BD8
    {
            ctx->lr = 0x802E2B54u;
            goto label_802E2BD8;
    }

label_802E2B54:
    ctx->pc = 0x802E2B54u;
    ctx->downcount -= 7;
    // 802E2B54: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E2B58:
    ctx->pc = 0x802E2B58u;
    // 802E2B58: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2B5C:
    ctx->pc = 0x802E2B5Cu;
    // 802E2B5C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2B60:
    ctx->pc = 0x802E2B60u;
    // 802E2B60: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2B64:
    ctx->pc = 0x802E2B64u;
    // 802E2B64: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2B68:
    ctx->pc = 0x802E2B68u;
    // 802E2B68: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2B6Cu;
            ctx->pc = target;
            return;
        }
    }

label_802E2B6C:
    ctx->pc = 0x802E2B6Cu;
    ctx->downcount -= 2;
    // 802E2B6C: cmpwi   r3, 0
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

label_802E2B70:
    ctx->pc = 0x802E2B70u;
    // 802E2B70: bc    4, 2, 0x802E2BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2BC4;
        }
    }

label_802E2B74:
    ctx->pc = 0x802E2B74u;
    ctx->downcount -= 2;
    // 802E2B74: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E2B78:
    ctx->pc = 0x802E2B78u;
    // 802E2B78: b       0x802E2BB8
    {
            goto label_802E2BB8;
    }

label_802E2B7C:
    ctx->pc = 0x802E2B7Cu;
    ctx->downcount -= 3;
    // 802E2B7C: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2B80:
    // 802E2B80: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2B84:
    // 802E2B84: bl      0x802DCFC8
    {
            ctx->lr = 0x802E2B88u;
            ctx->pc = 0x802DCFC8u;
            return;
    }

label_802E2B88:
    ctx->pc = 0x802E2B88u;
    ctx->downcount -= 7;
    // 802E2B88: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E2B8C:
    ctx->pc = 0x802E2B8Cu;
    // 802E2B8C: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E2B90:
    ctx->pc = 0x802E2B90u;
    // 802E2B90: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E2B94:
    // 802E2B94: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2B98:
    ctx->pc = 0x802E2B98u;
    // 802E2B98: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E2B9C:
    ctx->pc = 0x802E2B9Cu;
    // 802E2B9C: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2BA0:
    // 802E2BA0: bl      0x802DCEEC
    {
            ctx->lr = 0x802E2BA4u;
            ctx->pc = 0x802DCEECu;
            return;
    }

label_802E2BA4:
    ctx->downcount -= 4;
    // 802E2BA4: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2BA8:
    // 802E2BA8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2BAC:
    // 802E2BAC: addi    r5, r1, 16
    ctx->gpr[5] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2BB0:
    // 802E2BB0: bl      0x802D2980
    {
            ctx->lr = 0x802E2BB4u;
            ctx->pc = 0x802D2980u;
            return;
    }

label_802E2BB4:
    ctx->downcount -= 1;
    // 802E2BB4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E2BB8:
    ctx->pc = 0x802E2BB8u;
    ctx->downcount -= 3;
    // 802E2BB8: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2BBC:
    // 802E2BBC: cmpw    r30, r0
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

label_802E2BC0:
    // 802E2BC0: bc    12, 0, 0x802E2B7C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2B7Cu;
                return;
            }
            goto label_802E2B7C;
        }
    }

label_802E2BC4:
    ctx->pc = 0x802E2BC4u;
    ctx->downcount -= 16;
    // 802E2BC4: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2BC8:
    ctx->pc = 0x802E2BC8u;
    // 802E2BC8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2BCC:
    ctx->pc = 0x802E2BCCu;
    // 802E2BCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2BD0:
    ctx->pc = 0x802E2BD0u;
    // 802E2BD0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_802E2BD4:
    ctx->pc = 0x802E2BD4u;
    // 802E2BD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2BD8:
    ctx->pc = 0x802E2BD8u;
    ctx->downcount -= 2;
    // 802E2BD8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2BDC:
    ctx->pc = 0x802E2BDCu;
    // 802E2BDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2BE0:
    ctx->pc = 0x802E2BE0u;
    ctx->downcount -= 21;
    // 802E2BE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2BE4:
    ctx->pc = 0x802E2BE4u;
    // 802E2BE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2BE8:
    ctx->pc = 0x802E2BE8u;
    // 802E2BE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2BEC:
    ctx->pc = 0x802E2BECu;
    // 802E2BEC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2BF0:
    ctx->pc = 0x802E2BF0u;
    // 802E2BF0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2BF4:
    ctx->pc = 0x802E2BF4u;
    // 802E2BF4: lwz     r3, 172(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2BF8:
    ctx->pc = 0x802E2BF8u;
    // 802E2BF8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2BFC:
    ctx->pc = 0x802E2BFCu;
    // 802E2BFC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2C00:
    ctx->pc = 0x802E2C00u;
    // 802E2C00: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2C04:
    ctx->pc = 0x802E2C04u;
    // 802E2C04: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2C08u;
            ctx->pc = target;
            return;
        }
    }

label_802E2C08:
    ctx->pc = 0x802E2C08u;
    ctx->downcount -= 2;
    // 802E2C08: cmpwi   r3, 0
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

label_802E2C0C:
    ctx->pc = 0x802E2C0Cu;
    // 802E2C0C: bc    12, 2, 0x802E2C28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2C28;
        }
    }

label_802E2C10:
    ctx->pc = 0x802E2C10u;
    ctx->downcount -= 2;
    // 802E2C10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2C14:
    ctx->pc = 0x802E2C14u;
    // 802E2C14: bl      0x802E2BD8
    {
            ctx->lr = 0x802E2C18u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2BD8u;
                return;
            }
            goto label_802E2BD8;
    }

label_802E2C18:
    ctx->pc = 0x802E2C18u;
    ctx->downcount -= 3;
    // 802E2C18: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2C1C:
    ctx->pc = 0x802E2C1Cu;
    // 802E2C1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2C20:
    ctx->pc = 0x802E2C20u;
    // 802E2C20: bl      0x802D337C
    {
            ctx->lr = 0x802E2C24u;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_802E2C24:
    ctx->pc = 0x802E2C24u;
    ctx->downcount -= 1;
    // 802E2C24: b       0x802E2C4C
    {
            goto label_802E2C4C;
    }

label_802E2C28:
    ctx->pc = 0x802E2C28u;
    ctx->downcount -= 2;
    // 802E2C28: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2C2C:
    ctx->pc = 0x802E2C2Cu;
    // 802E2C2C: bl      0x802E2BD8
    {
            ctx->lr = 0x802E2C30u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2BD8u;
                return;
            }
            goto label_802E2BD8;
    }

label_802E2C30:
    ctx->pc = 0x802E2C30u;
    ctx->downcount -= 3;
    // 802E2C30: lwz     r31, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_802E2C34:
    ctx->pc = 0x802E2C34u;
    // 802E2C34: lwz     r3, 172(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2C38:
    ctx->pc = 0x802E2C38u;
    // 802E2C38: bl      0x802DD060
    {
            ctx->lr = 0x802E2C3Cu;
            ctx->pc = 0x802DD060u;
            return;
    }

label_802E2C3C:
    ctx->pc = 0x802E2C3Cu;
    ctx->downcount -= 4;
    // 802E2C3C: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2C40:
    ctx->pc = 0x802E2C40u;
    // 802E2C40: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2C44:
    ctx->pc = 0x802E2C44u;
    // 802E2C44: rlwinm r4, r0, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_802E2C48:
    ctx->pc = 0x802E2C48u;
    // 802E2C48: bl      0x802D337C
    {
            ctx->lr = 0x802E2C4Cu;
            ctx->pc = 0x802D337Cu;
            return;
    }

label_802E2C4C:
    ctx->pc = 0x802E2C4Cu;
    ctx->downcount -= 16;
    // 802E2C4C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2C50:
    ctx->pc = 0x802E2C50u;
    // 802E2C50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2C54:
    ctx->pc = 0x802E2C54u;
    // 802E2C54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2C58:
    ctx->pc = 0x802E2C58u;
    // 802E2C58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2C5C:
    ctx->pc = 0x802E2C5Cu;
    // 802E2C5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2C60:
    ctx->pc = 0x802E2C60u;
    ctx->downcount -= 16;
    // 802E2C60: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2C64:
    ctx->pc = 0x802E2C64u;
    // 802E2C64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2C68:
    ctx->pc = 0x802E2C68u;
    // 802E2C68: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2C6C:
    ctx->pc = 0x802E2C6Cu;
    // 802E2C6C: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2C70:
    ctx->pc = 0x802E2C70u;
    // 802E2C70: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2C74:
    ctx->pc = 0x802E2C74u;
    // 802E2C74: bl      0x802E2BD8
    {
            ctx->lr = 0x802E2C78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2BD8u;
                return;
            }
            goto label_802E2BD8;
    }

label_802E2C78:
    ctx->pc = 0x802E2C78u;
    ctx->downcount -= 3;
    // 802E2C78: lwz     r30, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E2C7C:
    ctx->pc = 0x802E2C7Cu;
    // 802E2C7C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_802E2C80:
    ctx->pc = 0x802E2C80u;
    // 802E2C80: b       0x802E2CD8
    {
            goto label_802E2CD8;
    }

label_802E2C84:
    ctx->downcount -= 3;
    // 802E2C84: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2C88:
    // 802E2C88: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E2C8C:
    // 802E2C8C: bl      0x802D2998
    {
            ctx->lr = 0x802E2C90u;
            ctx->pc = 0x802D2998u;
            return;
    }

label_802E2C90:
    ctx->downcount -= 2;
    // 802E2C90: cmpwi   r3, 0
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

label_802E2C94:
    // 802E2C94: bc    12, 2, 0x802E2CD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2CD4;
        }
    }

label_802E2C98:
    ctx->downcount -= 3;
    // 802E2C98: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2C9C:
    // 802E2C9C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E2CA0:
    // 802E2CA0: bl      0x802D2958
    {
            ctx->lr = 0x802E2CA4u;
            ctx->pc = 0x802D2958u;
            return;
    }

label_802E2CA4:
    ctx->downcount -= 4;
    // 802E2CA4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2CA8:
    ctx->pc = 0x802E2CA8u;
    // 802E2CA8: lwz     r3, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2CAC:
    // 802E2CAC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E2CB0:
    // 802E2CB0: bl      0x80235850
    {
            ctx->lr = 0x802E2CB4u;
            ctx->pc = 0x80235850u;
            return;
    }

label_802E2CB4:
    ctx->downcount -= 3;
    // 802E2CB4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2CB8:
    // 802E2CB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E2CBC:
    // 802E2CBC: bl      0x802F3B84
    {
            ctx->lr = 0x802E2CC0u;
            ctx->pc = 0x802F3B84u;
            return;
    }

label_802E2CC0:
    ctx->downcount -= 5;
    // 802E2CC0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2CC4:
    ctx->pc = 0x802E2CC4u;
    // 802E2CC4: lwz     r3, 172(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2CC8:
    ctx->pc = 0x802E2CC8u;
    // 802E2CC8: lbz     r6, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_802E2CCC:
    // 802E2CCC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E2CD0:
    // 802E2CD0: bl      0x802DD0C8
    {
            ctx->lr = 0x802E2CD4u;
            ctx->pc = 0x802DD0C8u;
            return;
    }

label_802E2CD4:
    ctx->downcount -= 1;
    // 802E2CD4: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_802E2CD8:
    ctx->pc = 0x802E2CD8u;
    ctx->downcount -= 3;
    // 802E2CD8: lwz     r0, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2CDC:
    // 802E2CDC: cmpw    r29, r0
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

label_802E2CE0:
    // 802E2CE0: bc    12, 0, 0x802E2C84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2C84u;
                return;
            }
            goto label_802E2C84;
        }
    }

label_802E2CE4:
    ctx->pc = 0x802E2CE4u;
    ctx->downcount -= 16;
    // 802E2CE4: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2CE8:
    ctx->pc = 0x802E2CE8u;
    // 802E2CE8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2CEC:
    ctx->pc = 0x802E2CECu;
    // 802E2CEC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2CF0:
    ctx->pc = 0x802E2CF0u;
    // 802E2CF0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2CF4:
    ctx->pc = 0x802E2CF4u;
    // 802E2CF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2CF8:
    ctx->pc = 0x802E2CF8u;
    ctx->downcount -= 21;
    // 802E2CF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2CFC:
    ctx->pc = 0x802E2CFCu;
    // 802E2CFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2D00:
    ctx->pc = 0x802E2D00u;
    // 802E2D00: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2D04:
    ctx->pc = 0x802E2D04u;
    // 802E2D04: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2D08:
    ctx->pc = 0x802E2D08u;
    // 802E2D08: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2D0C:
    ctx->pc = 0x802E2D0Cu;
    // 802E2D0C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E2D10:
    ctx->pc = 0x802E2D10u;
    // 802E2D10: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2D14:
    ctx->pc = 0x802E2D14u;
    // 802E2D14: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2D18:
    ctx->pc = 0x802E2D18u;
    // 802E2D18: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2D1C:
    ctx->pc = 0x802E2D1Cu;
    // 802E2D1C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2D20u;
            ctx->pc = target;
            return;
        }
    }

label_802E2D20:
    ctx->pc = 0x802E2D20u;
    ctx->downcount -= 2;
    // 802E2D20: cmpwi   r3, 0
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

label_802E2D24:
    ctx->pc = 0x802E2D24u;
    // 802E2D24: bc    4, 2, 0x802E2D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2D80;
        }
    }

label_802E2D28:
    ctx->pc = 0x802E2D28u;
    ctx->downcount -= 3;
    // 802E2D28: lwz     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2D2C:
    ctx->pc = 0x802E2D2Cu;
    // 802E2D2C: cmpwi   r0, 0
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

label_802E2D30:
    ctx->pc = 0x802E2D30u;
    // 802E2D30: bc    12, 2, 0x802E2D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2D80;
        }
    }

label_802E2D34:
    ctx->pc = 0x802E2D34u;
    ctx->downcount -= 4;
    // 802E2D34: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E2D38:
    ctx->pc = 0x802E2D38u;
    // 802E2D38: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2D3C:
    ctx->pc = 0x802E2D3Cu;
    // 802E2D3C: addi    r4, r4, 10208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10208);

label_802E2D40:
    ctx->pc = 0x802E2D40u;
    // 802E2D40: bl      0x8000E8B0
    {
            ctx->lr = 0x802E2D44u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_802E2D44:
    ctx->pc = 0x802E2D44u;
    ctx->downcount -= 2;
    // 802E2D44: cmpwi   r3, 0
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

label_802E2D48:
    ctx->pc = 0x802E2D48u;
    // 802E2D48: bc    4, 2, 0x802E2D5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2D5C;
        }
    }

label_802E2D4C:
    ctx->pc = 0x802E2D4Cu;
    ctx->downcount -= 2;
    // 802E2D4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2D50:
    ctx->pc = 0x802E2D50u;
    // 802E2D50: bl      0x802E2BE0
    {
            ctx->lr = 0x802E2D54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2BE0u;
                return;
            }
            goto label_802E2BE0;
    }

label_802E2D54:
    ctx->pc = 0x802E2D54u;
    ctx->downcount -= 2;
    // 802E2D54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2D58:
    ctx->pc = 0x802E2D58u;
    // 802E2D58: bl      0x802E2B3C
    {
            ctx->lr = 0x802E2D5Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2B3Cu;
                return;
            }
            goto label_802E2B3C;
    }

label_802E2D5C:
    ctx->pc = 0x802E2D5Cu;
    ctx->downcount -= 5;
    // 802E2D5C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_802E2D60:
    ctx->pc = 0x802E2D60u;
    // 802E2D60: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_802E2D64:
    ctx->pc = 0x802E2D64u;
    // 802E2D64: addi    r4, r4, 10208
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10208);

label_802E2D68:
    ctx->pc = 0x802E2D68u;
    // 802E2D68: addi    r4, r4, 15
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(15);

label_802E2D6C:
    ctx->pc = 0x802E2D6Cu;
    // 802E2D6C: bl      0x8000E8B0
    {
            ctx->lr = 0x802E2D70u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_802E2D70:
    ctx->pc = 0x802E2D70u;
    ctx->downcount -= 2;
    // 802E2D70: cmpwi   r3, 0
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

label_802E2D74:
    ctx->pc = 0x802E2D74u;
    // 802E2D74: bc    4, 2, 0x802E2D80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_802E2D80;
        }
    }

label_802E2D78:
    ctx->pc = 0x802E2D78u;
    ctx->downcount -= 2;
    // 802E2D78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2D7C:
    ctx->pc = 0x802E2D7Cu;
    // 802E2D7C: bl      0x802E29D4
    {
            ctx->lr = 0x802E2D80u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E29D4u;
                return;
            }
            goto label_802E29D4;
    }

label_802E2D80:
    ctx->pc = 0x802E2D80u;
    ctx->downcount -= 16;
    // 802E2D80: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2D84:
    ctx->pc = 0x802E2D84u;
    // 802E2D84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2D88:
    ctx->pc = 0x802E2D88u;
    // 802E2D88: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2D8C:
    ctx->pc = 0x802E2D8Cu;
    // 802E2D8C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E2D90:
    ctx->pc = 0x802E2D90u;
    // 802E2D90: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2D94:
    ctx->pc = 0x802E2D94u;
    ctx->downcount -= 21;
    // 802E2D94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2D98:
    ctx->pc = 0x802E2D98u;
    // 802E2D98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2D9C:
    ctx->pc = 0x802E2D9Cu;
    // 802E2D9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2DA0:
    ctx->pc = 0x802E2DA0u;
    // 802E2DA0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2DA4:
    ctx->pc = 0x802E2DA4u;
    // 802E2DA4: lis     r29, -32661
    ctx->gpr[29] = ((u32)(s32)(-32661) << 16);

label_802E2DA8:
    ctx->pc = 0x802E2DA8u;
    // 802E2DA8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2DAC:
    ctx->pc = 0x802E2DACu;
    // 802E2DAC: addi    r4, r29, 22792
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22792);

label_802E2DB0:
    ctx->pc = 0x802E2DB0u;
    // 802E2DB0: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_802E2DB4:
    ctx->pc = 0x802E2DB4u;
    // 802E2DB4: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2DB8:
    ctx->pc = 0x802E2DB8u;
    // 802E2DB8: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2DBC:
    ctx->pc = 0x802E2DBCu;
    // 802E2DBC: bl      0x80370BD4
    {
            ctx->lr = 0x802E2DC0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2DC0:
    ctx->pc = 0x802E2DC0u;
    ctx->downcount -= 7;
    // 802E2DC0: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2DC4:
    ctx->pc = 0x802E2DC4u;
    // 802E2DC4: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E2DC8:
    ctx->pc = 0x802E2DC8u;
    // 802E2DC8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2DCC:
    ctx->pc = 0x802E2DCCu;
    // 802E2DCC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2DD0:
    ctx->pc = 0x802E2DD0u;
    // 802E2DD0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2DD4:
    ctx->pc = 0x802E2DD4u;
    // 802E2DD4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2DD8u;
            ctx->pc = target;
            return;
        }
    }

label_802E2DD8:
    ctx->pc = 0x802E2DD8u;
    ctx->downcount -= 5;
    // 802E2DD8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2DDC:
    ctx->pc = 0x802E2DDCu;
    // 802E2DDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2DE0:
    ctx->pc = 0x802E2DE0u;
    // 802E2DE0: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_802E2DE4:
    ctx->pc = 0x802E2DE4u;
    // 802E2DE4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E2DE8:
    ctx->pc = 0x802E2DE8u;
    // 802E2DE8: bl      0x8027714C
    {
            ctx->lr = 0x802E2DECu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E2DEC:
    ctx->pc = 0x802E2DECu;
    ctx->downcount -= 5;
    // 802E2DEC: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2DF0:
    ctx->pc = 0x802E2DF0u;
    // 802E2DF0: addi    r4, r29, 22792
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22792);

label_802E2DF4:
    ctx->pc = 0x802E2DF4u;
    // 802E2DF4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2DF8:
    ctx->pc = 0x802E2DF8u;
    // 802E2DF8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2DFC:
    ctx->pc = 0x802E2DFCu;
    // 802E2DFC: bl      0x80370BD4
    {
            ctx->lr = 0x802E2E00u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2E00:
    ctx->pc = 0x802E2E00u;
    ctx->downcount -= 7;
    // 802E2E00: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2E04:
    ctx->pc = 0x802E2E04u;
    // 802E2E04: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E2E08:
    ctx->pc = 0x802E2E08u;
    // 802E2E08: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E0C:
    ctx->pc = 0x802E2E0Cu;
    // 802E2E0C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E10:
    ctx->pc = 0x802E2E10u;
    // 802E2E10: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2E14:
    ctx->pc = 0x802E2E14u;
    // 802E2E14: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2E18u;
            ctx->pc = target;
            return;
        }
    }

label_802E2E18:
    ctx->pc = 0x802E2E18u;
    ctx->downcount -= 5;
    // 802E2E18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2E1C:
    ctx->pc = 0x802E2E1Cu;
    // 802E2E1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2E20:
    ctx->pc = 0x802E2E20u;
    // 802E2E20: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E2E24:
    ctx->pc = 0x802E2E24u;
    // 802E2E24: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E2E28:
    ctx->pc = 0x802E2E28u;
    // 802E2E28: bl      0x8027714C
    {
            ctx->lr = 0x802E2E2Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E2E2C:
    ctx->pc = 0x802E2E2Cu;
    ctx->downcount -= 5;
    // 802E2E2C: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2E30:
    ctx->pc = 0x802E2E30u;
    // 802E2E30: addi    r4, r29, 22792
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22792);

label_802E2E34:
    ctx->pc = 0x802E2E34u;
    // 802E2E34: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2E38:
    ctx->pc = 0x802E2E38u;
    // 802E2E38: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2E3C:
    ctx->pc = 0x802E2E3Cu;
    // 802E2E3C: bl      0x80370BD4
    {
            ctx->lr = 0x802E2E40u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2E40:
    ctx->pc = 0x802E2E40u;
    ctx->downcount -= 7;
    // 802E2E40: lwz     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2E44:
    ctx->pc = 0x802E2E44u;
    // 802E2E44: lwz     r30, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_802E2E48:
    ctx->pc = 0x802E2E48u;
    // 802E2E48: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E4C:
    ctx->pc = 0x802E2E4Cu;
    // 802E2E4C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E50:
    ctx->pc = 0x802E2E50u;
    // 802E2E50: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2E54:
    ctx->pc = 0x802E2E54u;
    // 802E2E54: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2E58u;
            ctx->pc = target;
            return;
        }
    }

label_802E2E58:
    ctx->pc = 0x802E2E58u;
    ctx->downcount -= 5;
    // 802E2E58: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2E5C:
    ctx->pc = 0x802E2E5Cu;
    // 802E2E5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2E60:
    ctx->pc = 0x802E2E60u;
    // 802E2E60: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E2E64:
    ctx->pc = 0x802E2E64u;
    // 802E2E64: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E2E68:
    ctx->pc = 0x802E2E68u;
    // 802E2E68: bl      0x8027714C
    {
            ctx->lr = 0x802E2E6Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E2E6C:
    ctx->pc = 0x802E2E6Cu;
    ctx->downcount -= 2;
    // 802E2E6C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_802E2E70:
    ctx->pc = 0x802E2E70u;
    // 802E2E70: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E2E74:
    ctx->pc = 0x802E2E74u;
    ctx->downcount -= 5;
    // 802E2E74: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2E78:
    // 802E2E78: addi    r4, r29, 22792
    ctx->gpr[4] = ctx->gpr[29] + (u32)(s32)(22792);

label_802E2E7C:
    // 802E2E7C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2E80:
    // 802E2E80: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2E84:
    // 802E2E84: bl      0x80370BD4
    {
            ctx->lr = 0x802E2E88u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2E88:
    ctx->downcount -= 8;
    // 802E2E88: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_802E2E8C:
    ctx->pc = 0x802E2E8Cu;
    // 802E2E8C: lwz     r28, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_802E2E90:
    ctx->pc = 0x802E2E90u;
    // 802E2E90: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2E94:
    ctx->pc = 0x802E2E94u;
    // 802E2E94: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E98:
    ctx->pc = 0x802E2E98u;
    // 802E2E98: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2E9C:
    ctx->pc = 0x802E2E9Cu;
    // 802E2E9C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2EA0:
    ctx->pc = 0x802E2EA0u;
    // 802E2EA0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2EA4u;
            ctx->pc = target;
            return;
        }
    }

label_802E2EA4:
    ctx->downcount -= 5;
    // 802E2EA4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2EA8:
    // 802E2EA8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E2EAC:
    // 802E2EAC: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E2EB0:
    // 802E2EB0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E2EB4:
    // 802E2EB4: bl      0x8027714C
    {
            ctx->lr = 0x802E2EB8u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E2EB8:
    ctx->downcount -= 4;
    // 802E2EB8: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_802E2EBC:
    // 802E2EBC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_802E2EC0:
    // 802E2EC0: cmpwi   r27, 2
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

label_802E2EC4:
    // 802E2EC4: bc    12, 0, 0x802E2E74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2E74u;
                return;
            }
            goto label_802E2E74;
        }
    }

label_802E2EC8:
    ctx->pc = 0x802E2EC8u;
    ctx->downcount -= 6;
    // 802E2EC8: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2ECC:
    ctx->pc = 0x802E2ECCu;
    // 802E2ECC: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_802E2ED0:
    ctx->pc = 0x802E2ED0u;
    // 802E2ED0: addi    r4, r4, 22792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22792);

label_802E2ED4:
    ctx->pc = 0x802E2ED4u;
    // 802E2ED4: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_802E2ED8:
    ctx->pc = 0x802E2ED8u;
    // 802E2ED8: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_802E2EDC:
    ctx->pc = 0x802E2EDCu;
    // 802E2EDC: bl      0x80370BD4
    {
            ctx->lr = 0x802E2EE0u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_802E2EE0:
    ctx->pc = 0x802E2EE0u;
    ctx->downcount -= 7;
    // 802E2EE0: lwz     r3, 168(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(168);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2EE4:
    ctx->pc = 0x802E2EE4u;
    // 802E2EE4: lwz     r28, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[28] = mem_read32(ctx, ea);
    }

label_802E2EE8:
    ctx->pc = 0x802E2EE8u;
    // 802E2EE8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2EEC:
    ctx->pc = 0x802E2EECu;
    // 802E2EEC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_802E2EF0:
    ctx->pc = 0x802E2EF0u;
    // 802E2EF0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_802E2EF4:
    ctx->pc = 0x802E2EF4u;
    // 802E2EF4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x802E2EF8u;
            ctx->pc = target;
            return;
        }
    }

label_802E2EF8:
    ctx->pc = 0x802E2EF8u;
    ctx->downcount -= 5;
    // 802E2EF8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2EFC:
    ctx->pc = 0x802E2EFCu;
    // 802E2EFC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E2F00:
    ctx->pc = 0x802E2F00u;
    // 802E2F00: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_802E2F04:
    ctx->pc = 0x802E2F04u;
    // 802E2F04: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E2F08:
    ctx->pc = 0x802E2F08u;
    // 802E2F08: bl      0x8027714C
    {
            ctx->lr = 0x802E2F0Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_802E2F0C:
    ctx->pc = 0x802E2F0Cu;
    ctx->downcount -= 2;
    // 802E2F0C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F10:
    ctx->pc = 0x802E2F10u;
    // 802E2F10: bl      0x80309080
    {
            ctx->lr = 0x802E2F14u;
            ctx->pc = 0x80309080u;
            return;
    }

label_802E2F14:
    ctx->pc = 0x802E2F14u;
    ctx->downcount -= 8;
    // 802E2F14: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2F18:
    ctx->pc = 0x802E2F18u;
    // 802E2F18: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F1C:
    ctx->pc = 0x802E2F1Cu;
    // 802E2F1C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E2F20:
    ctx->pc = 0x802E2F20u;
    // 802E2F20: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_802E2F24:
    ctx->pc = 0x802E2F24u;
    // 802E2F24: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_802E2F28:
    ctx->pc = 0x802E2F28u;
    // 802E2F28: li      r8, -1
    ctx->gpr[8] = (u32)(s32)(-1);

label_802E2F2C:
    ctx->pc = 0x802E2F2Cu;
    // 802E2F2C: li      r9, 1
    ctx->gpr[9] = (u32)(s32)(1);

label_802E2F30:
    ctx->pc = 0x802E2F30u;
    // 802E2F30: bl      0x8026F158
    {
            ctx->lr = 0x802E2F34u;
            ctx->pc = 0x8026F158u;
            return;
    }

label_802E2F34:
    ctx->pc = 0x802E2F34u;
    ctx->downcount -= 2;
    // 802E2F34: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F38:
    ctx->pc = 0x802E2F38u;
    // 802E2F38: bl      0x80309070
    {
            ctx->lr = 0x802E2F3Cu;
            ctx->pc = 0x80309070u;
            return;
    }

label_802E2F3C:
    ctx->pc = 0x802E2F3Cu;
    ctx->downcount -= 8;
    // 802E2F3C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2F40:
    ctx->pc = 0x802E2F40u;
    // 802E2F40: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F44:
    ctx->pc = 0x802E2F44u;
    // 802E2F44: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_802E2F48:
    ctx->pc = 0x802E2F48u;
    // 802E2F48: li      r6, -1
    ctx->gpr[6] = (u32)(s32)(-1);

label_802E2F4C:
    ctx->pc = 0x802E2F4Cu;
    // 802E2F4C: li      r7, -1
    ctx->gpr[7] = (u32)(s32)(-1);

label_802E2F50:
    ctx->pc = 0x802E2F50u;
    // 802E2F50: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_802E2F54:
    ctx->pc = 0x802E2F54u;
    // 802E2F54: li      r9, -1
    ctx->gpr[9] = (u32)(s32)(-1);

label_802E2F58:
    ctx->pc = 0x802E2F58u;
    // 802E2F58: bl      0x8026F158
    {
            ctx->lr = 0x802E2F5Cu;
            ctx->pc = 0x8026F158u;
            return;
    }

label_802E2F5C:
    ctx->pc = 0x802E2F5Cu;
    ctx->downcount -= 2;
    // 802E2F5C: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F60:
    ctx->pc = 0x802E2F60u;
    // 802E2F60: bl      0x80309080
    {
            ctx->lr = 0x802E2F64u;
            ctx->pc = 0x80309080u;
            return;
    }

label_802E2F64:
    ctx->pc = 0x802E2F64u;
    ctx->downcount -= 3;
    // 802E2F64: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2F68:
    ctx->pc = 0x802E2F68u;
    // 802E2F68: lwz     r3, 160(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F6C:
    ctx->pc = 0x802E2F6Cu;
    // 802E2F6C: bl      0x8036B234
    {
            ctx->lr = 0x802E2F70u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_802E2F70:
    ctx->pc = 0x802E2F70u;
    ctx->downcount -= 2;
    // 802E2F70: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F74:
    ctx->pc = 0x802E2F74u;
    // 802E2F74: bl      0x80309070
    {
            ctx->lr = 0x802E2F78u;
            ctx->pc = 0x80309070u;
            return;
    }

label_802E2F78:
    ctx->pc = 0x802E2F78u;
    ctx->downcount -= 3;
    // 802E2F78: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2F7C:
    ctx->pc = 0x802E2F7Cu;
    // 802E2F7C: lwz     r3, 164(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(164);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2F80:
    ctx->pc = 0x802E2F80u;
    // 802E2F80: bl      0x8036B234
    {
            ctx->lr = 0x802E2F84u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_802E2F84:
    ctx->pc = 0x802E2F84u;
    ctx->downcount -= 16;
    // 802E2F84: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E2F88:
    ctx->pc = 0x802E2F88u;
    // 802E2F88: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2F8C:
    ctx->pc = 0x802E2F8Cu;
    // 802E2F8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E2F90:
    ctx->pc = 0x802E2F90u;
    // 802E2F90: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_802E2F94:
    ctx->pc = 0x802E2F94u;
    // 802E2F94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E2F98:
    ctx->pc = 0x802E2F98u;
    ctx->downcount -= 23;
    // 802E2F98: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E2F9C:
    ctx->pc = 0x802E2F9Cu;
    // 802E2F9C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E2FA0:
    ctx->pc = 0x802E2FA0u;
    // 802E2FA0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2FA4:
    ctx->pc = 0x802E2FA4u;
    // 802E2FA4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_802E2FA8:
    ctx->pc = 0x802E2FA8u;
    // 802E2FA8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E2FAC:
    ctx->pc = 0x802E2FACu;
    // 802E2FAC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E2FB0:
    ctx->pc = 0x802E2FB0u;
    // 802E2FB0: lwz     r6, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_802E2FB4:
    ctx->pc = 0x802E2FB4u;
    // 802E2FB4: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E2FB8:
    ctx->pc = 0x802E2FB8u;
    // 802E2FB8: stw     r0, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E2FBC:
    ctx->pc = 0x802E2FBCu;
    // 802E2FBC: stw     r4, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E2FC0:
    ctx->pc = 0x802E2FC0u;
    // 802E2FC0: stw     r31, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_802E2FC4:
    ctx->pc = 0x802E2FC4u;
    // 802E2FC4: stb     r5, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_802E2FC8:
    ctx->pc = 0x802E2FC8u;
    // 802E2FC8: bl      0x802C38B4
    {
            ctx->lr = 0x802E2FCCu;
            ctx->pc = 0x802C38B4u;
            return;
    }

label_802E2FCC:
    ctx->pc = 0x802E2FCCu;
    ctx->downcount -= 1;
    // 802E2FCC: bl      0x80276C0C
    {
            ctx->lr = 0x802E2FD0u;
            ctx->pc = 0x80276C0Cu;
            return;
    }

label_802E2FD0:
    ctx->pc = 0x802E2FD0u;
    ctx->downcount -= 3;
    // 802E2FD0: lbz     r0, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_802E2FD4:
    ctx->pc = 0x802E2FD4u;
    // 802E2FD4: cmpwi   r0, 0
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

label_802E2FD8:
    ctx->pc = 0x802E2FD8u;
    // 802E2FD8: bc    12, 2, 0x802E2FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2FE8;
        }
    }

label_802E2FDC:
    ctx->pc = 0x802E2FDCu;
    ctx->downcount -= 2;
    // 802E2FDC: cmpwi   r3, 0
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

label_802E2FE0:
    ctx->pc = 0x802E2FE0u;
    // 802E2FE0: bc    12, 2, 0x802E2FE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E2FE8;
        }
    }

label_802E2FE4:
    ctx->pc = 0x802E2FE4u;
    ctx->downcount -= 1;
    // 802E2FE4: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_802E2FE8:
    ctx->pc = 0x802E2FE8u;
    ctx->downcount -= 3;
    // 802E2FE8: stb     r31, 201(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(201);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_802E2FEC:
    ctx->pc = 0x802E2FECu;
    // 802E2FEC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E2FF0:
    ctx->pc = 0x802E2FF0u;
    // 802E2FF0: bl      0x802E2BD8
    {
            ctx->lr = 0x802E2FF4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2BD8u;
                return;
            }
            goto label_802E2BD8;
    }

label_802E2FF4:
    ctx->pc = 0x802E2FF4u;
    ctx->downcount -= 4;
    // 802E2FF4: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_802E2FF8:
    ctx->pc = 0x802E2FF8u;
    // 802E2FF8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_802E2FFC:
    ctx->pc = 0x802E2FFCu;
    // 802E2FFC: lwz     r4, 184(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_802E3000:
    ctx->pc = 0x802E3000u;
    // 802E3000: bl      0x802D29F8
    {
            ctx->lr = 0x802E3004u;
            ctx->pc = 0x802D29F8u;
            return;
    }

label_802E3004:
    ctx->pc = 0x802E3004u;
    ctx->downcount -= 2;
    // 802E3004: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E3008:
    ctx->pc = 0x802E3008u;
    // 802E3008: bl      0x802E2C60
    {
            ctx->lr = 0x802E300Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E2C60u;
                return;
            }
            goto label_802E2C60;
    }

label_802E300C:
    ctx->pc = 0x802E300Cu;
    ctx->downcount -= 3;
    // 802E300C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_802E3010:
    ctx->pc = 0x802E3010u;
    // 802E3010: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_802E3014:
    ctx->pc = 0x802E3014u;
    // 802E3014: bl      0x803457B8
    {
            ctx->lr = 0x802E3018u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_802E3018:
    ctx->pc = 0x802E3018u;
    ctx->downcount -= 16;
    // 802E3018: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_802E301C:
    ctx->pc = 0x802E301Cu;
    // 802E301C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_802E3020:
    ctx->pc = 0x802E3020u;
    // 802E3020: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_802E3024:
    ctx->pc = 0x802E3024u;
    // 802E3024: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_802E3028:
    ctx->pc = 0x802E3028u;
    // 802E3028: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_802DF1C0;
        }
    }

label_802E302C:
    ctx->pc = 0x802E302Cu;
    ctx->downcount -= 5;
    // 802E302C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_802E3030:
    ctx->pc = 0x802E3030u;
    // 802E3030: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_802E3034:
    ctx->pc = 0x802E3034u;
    // 802E3034: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E3038:
    ctx->pc = 0x802E3038u;
    // 802E3038: addi    r11, r1, 32
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(32);

label_802E303C:
    ctx->pc = 0x802E303Cu;
    // 802E303C: bl      0x8000785C
    {
            ctx->lr = 0x802E3040u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_802E3040:
    ctx->pc = 0x802E3040u;
    ctx->downcount -= 7;
    // 802E3040: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_802E3044:
    ctx->pc = 0x802E3044u;
    // 802E3044: lis     r31, -32660
    ctx->gpr[31] = ((u32)(s32)(-32660) << 16);

label_802E3048:
    ctx->pc = 0x802E3048u;
    // 802E3048: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_802E304C:
    ctx->pc = 0x802E304Cu;
    // 802E304C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_802E3050:
    ctx->pc = 0x802E3050u;
    // 802E3050: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3054:
    ctx->pc = 0x802E3054u;
    // 802E3054: addi    r31, r31, 9656
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(9656);

label_802E3058:
    ctx->pc = 0x802E3058u;
    // 802E3058: bl      0x802E34A4
    {
            ctx->lr = 0x802E305Cu;
            ctx->pc = 0x802E34A4u;
            return;
    }

label_802E305C:
    ctx->pc = 0x802E305Cu;
    ctx->downcount -= 10;
    // 802E305C: lis     r4, -32660
    ctx->gpr[4] = ((u32)(s32)(-32660) << 16);

label_802E3060:
    ctx->pc = 0x802E3060u;
    // 802E3060: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E3064:
    ctx->pc = 0x802E3064u;
    // 802E3064: addi    r4, r4, 9792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(9792);

label_802E3068:
    ctx->pc = 0x802E3068u;
    // 802E3068: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_802E306C:
    ctx->pc = 0x802E306Cu;
    // 802E306C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_802E3070:
    ctx->pc = 0x802E3070u;
    // 802E3070: addi    r5, r31, 48
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(48);

label_802E3074:
    ctx->pc = 0x802E3074u;
    // 802E3074: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_802E3078:
    ctx->pc = 0x802E3078u;
    // 802E3078: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_802E307C:
    ctx->pc = 0x802E307Cu;
    // 802E307C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_802E3080:
    ctx->pc = 0x802E3080u;
    // 802E3080: bl      0x802E33C4
    {
            ctx->lr = 0x802E3084u;
            ctx->pc = 0x802E33C4u;
            return;
    }

label_802E3084:
    ctx->pc = 0x802E3084u;
    ctx->downcount -= 5;
    // 802E3084: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E3088:
    ctx->pc = 0x802E3088u;
    // 802E3088: addi    r4, r31, 60
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(60);

label_802E308C:
    ctx->pc = 0x802E308Cu;
    // 802E308C: addi    r5, r31, 72
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(72);

label_802E3090:
    ctx->pc = 0x802E3090u;
    // 802E3090: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_802E3094:
    ctx->pc = 0x802E3094u;
    // 802E3094: bl      0x802E33C4
    {
            ctx->lr = 0x802E3098u;
            ctx->pc = 0x802E33C4u;
            return;
    }

label_802E3098:
    ctx->pc = 0x802E3098u;
    ctx->downcount -= 5;
    // 802E3098: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E309C:
    ctx->pc = 0x802E309Cu;
    // 802E309C: addi    r4, r31, 84
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(84);

label_802E30A0:
    ctx->pc = 0x802E30A0u;
    // 802E30A0: addi    r5, r31, 96
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(96);

label_802E30A4:
    ctx->pc = 0x802E30A4u;
    // 802E30A4: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_802E30A8:
    ctx->pc = 0x802E30A8u;
    // 802E30A8: bl      0x802E33C4
    {
            ctx->lr = 0x802E30ACu;
            ctx->pc = 0x802E33C4u;
            return;
    }

label_802E30AC:
    ctx->pc = 0x802E30ACu;
    ctx->downcount -= 5;
    // 802E30AC: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_802E30B0:
    ctx->pc = 0x802E30B0u;
    // 802E30B0: addi    r4, r31, 108
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(108);

label_802E30B4:
    ctx->pc = 0x802E30B4u;
    // 802E30B4: addi    r5, r31, 120
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(120);

label_802E30B8:
    ctx->pc = 0x802E30B8u;
    // 802E30B8: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_802E30BC:
    ctx->pc = 0x802E30BCu;
    // 802E30BC: bl      0x802E33C4
    {
            ctx->lr = 0x802E30C0u;
            ctx->pc = 0x802E33C4u;
            return;
    }

label_802E30C0:
    ctx->pc = 0x802E30C0u;
    ctx->downcount -= 4;
    // 802E30C0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E30C4:
    ctx->pc = 0x802E30C4u;
    // 802E30C4: li      r3, 264
    ctx->gpr[3] = (u32)(s32)(264);

label_802E30C8:
    ctx->pc = 0x802E30C8u;
    // 802E30C8: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E30CC:
    ctx->pc = 0x802E30CCu;
    // 802E30CC: bl      0x801C1C5C
    {
            ctx->lr = 0x802E30D0u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E30D0:
    ctx->pc = 0x802E30D0u;
    ctx->downcount -= 2;
    // 802E30D0: cmpwi   r3, 0
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

label_802E30D4:
    ctx->pc = 0x802E30D4u;
    // 802E30D4: bc    12, 2, 0x802E30E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E30E0;
        }
    }

label_802E30D8:
    ctx->pc = 0x802E30D8u;
    ctx->downcount -= 2;
    // 802E30D8: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E30DC:
    ctx->pc = 0x802E30DCu;
    // 802E30DC: bl      0x803554FC
    {
            ctx->lr = 0x802E30E0u;
            ctx->pc = 0x803554FCu;
            return;
    }

label_802E30E0:
    ctx->pc = 0x802E30E0u;
    ctx->downcount -= 5;
    // 802E30E0: stw     r3, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E30E4:
    ctx->pc = 0x802E30E4u;
    // 802E30E4: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E30E8:
    ctx->pc = 0x802E30E8u;
    // 802E30E8: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_802E30EC:
    ctx->pc = 0x802E30ECu;
    // 802E30EC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E30F0:
    ctx->pc = 0x802E30F0u;
    // 802E30F0: bl      0x801C1C5C
    {
            ctx->lr = 0x802E30F4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E30F4:
    ctx->pc = 0x802E30F4u;
    ctx->downcount -= 2;
    // 802E30F4: cmpwi   r3, 0
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

label_802E30F8:
    ctx->pc = 0x802E30F8u;
    // 802E30F8: bc    12, 2, 0x802E3104
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E3104;
        }
    }

label_802E30FC:
    ctx->pc = 0x802E30FCu;
    ctx->downcount -= 2;
    // 802E30FC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3100:
    ctx->pc = 0x802E3100u;
    // 802E3100: bl      0x803091B4
    {
            ctx->lr = 0x802E3104u;
            ctx->pc = 0x803091B4u;
            return;
    }

label_802E3104:
    ctx->pc = 0x802E3104u;
    ctx->downcount -= 3;
    // 802E3104: stw     r3, 156(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E3108:
    ctx->pc = 0x802E3108u;
    // 802E3108: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_802E310C:
    ctx->pc = 0x802E310Cu;
    // 802E310C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_802E3110:
    ctx->downcount -= 4;
    // 802E3110: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3114:
    // 802E3114: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_802E3118:
    // 802E3118: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E311C:
    // 802E311C: bl      0x801C1C5C
    {
            ctx->lr = 0x802E3120u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E3120:
    ctx->downcount -= 2;
    // 802E3120: cmpwi   r3, 0
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

label_802E3124:
    // 802E3124: bc    12, 2, 0x802E3134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E3134;
        }
    }

label_802E3128:
    ctx->downcount -= 3;
    // 802E3128: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_802E312C:
    // 802E312C: or   r5, r29, r29
    {
        ctx->gpr[5] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3130:
    // 802E3130: bl      0x802E3A74
    {
            ctx->lr = 0x802E3134u;
            ctx->pc = 0x802E3A74u;
            return;
    }

label_802E3134:
    ctx->downcount -= 6;
    // 802E3134: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_802E3138:
    // 802E3138: add   r4, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_802E313C:
    // 802E313C: cmpwi   r30, 2
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

label_802E3140:
    ctx->pc = 0x802E3140u;
    // 802E3140: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E3144:
    // 802E3144: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_802E3148:
    // 802E3148: bc    12, 0, 0x802E3110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x802E3110u;
                return;
            }
            goto label_802E3110;
        }
    }

label_802E314C:
    ctx->pc = 0x802E314Cu;
    ctx->downcount -= 4;
    // 802E314C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3150:
    ctx->pc = 0x802E3150u;
    // 802E3150: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_802E3154:
    ctx->pc = 0x802E3154u;
    // 802E3154: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E3158:
    ctx->pc = 0x802E3158u;
    // 802E3158: bl      0x801C1C5C
    {
            ctx->lr = 0x802E315Cu;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E315C:
    ctx->pc = 0x802E315Cu;
    ctx->downcount -= 2;
    // 802E315C: cmpwi   r3, 0
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

label_802E3160:
    ctx->pc = 0x802E3160u;
    // 802E3160: bc    12, 2, 0x802E316C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E316C;
        }
    }

label_802E3164:
    ctx->pc = 0x802E3164u;
    ctx->downcount -= 2;
    // 802E3164: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3168:
    ctx->pc = 0x802E3168u;
    // 802E3168: bl      0x8032154C
    {
            ctx->lr = 0x802E316Cu;
            ctx->pc = 0x8032154Cu;
            return;
    }

label_802E316C:
    ctx->pc = 0x802E316Cu;
    ctx->downcount -= 5;
    // 802E316C: stw     r3, 168(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E3170:
    ctx->pc = 0x802E3170u;
    // 802E3170: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3174:
    ctx->pc = 0x802E3174u;
    // 802E3174: li      r3, 308
    ctx->gpr[3] = (u32)(s32)(308);

label_802E3178:
    ctx->pc = 0x802E3178u;
    // 802E3178: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E317C:
    ctx->pc = 0x802E317Cu;
    // 802E317C: bl      0x801C1C5C
    {
            ctx->lr = 0x802E3180u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E3180:
    ctx->pc = 0x802E3180u;
    ctx->downcount -= 2;
    // 802E3180: cmpwi   r3, 0
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

label_802E3184:
    ctx->pc = 0x802E3184u;
    // 802E3184: bc    12, 2, 0x802E3190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E3190;
        }
    }

label_802E3188:
    ctx->pc = 0x802E3188u;
    ctx->downcount -= 2;
    // 802E3188: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E318C:
    ctx->pc = 0x802E318Cu;
    // 802E318C: bl      0x802DD35C
    {
            ctx->lr = 0x802E3190u;
            ctx->pc = 0x802DD35Cu;
            return;
    }

label_802E3190:
    ctx->pc = 0x802E3190u;
    ctx->downcount -= 5;
    // 802E3190: stw     r3, 172(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(172);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E3194:
    ctx->pc = 0x802E3194u;
    // 802E3194: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E3198:
    ctx->pc = 0x802E3198u;
    // 802E3198: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_802E319C:
    ctx->pc = 0x802E319Cu;
    // 802E319C: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_802E31A0:
    ctx->pc = 0x802E31A0u;
    // 802E31A0: bl      0x801C1C5C
    {
            ctx->lr = 0x802E31A4u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_802E31A4:
    ctx->pc = 0x802E31A4u;
    ctx->downcount -= 2;
    // 802E31A4: cmpwi   r3, 0
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

label_802E31A8:
    ctx->pc = 0x802E31A8u;
    // 802E31A8: bc    12, 2, 0x802E31B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_802E31B4;
        }
    }

label_802E31AC:
    ctx->pc = 0x802E31ACu;
    ctx->downcount -= 2;
    // 802E31AC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_802E31B0:
    ctx->pc = 0x802E31B0u;
    // 802E31B0: bl      0x802E3CD8
    {
            ctx->lr = 0x802E31B4u;
            ctx->pc = 0x802E3CD8u;
            return;
    }

label_802E31B4:
    ctx->pc = 0x802E31B4u;
    ctx->downcount -= 3;
    // 802E31B4: stw     r3, 176(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(176);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_802E31B8:
    ctx->pc = 0x802E31B8u;
    // 802E31B8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_802E31BC:
    ctx->pc = 0x802E31BCu;
    // 802E31BC: lwz     r4, 152(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x802E31C0u;
    return;
return_dispatch_802DF1C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x802DF1CCu: goto label_802DF1CC;
    case 0x802DF1D8u: goto label_802DF1D8;
    case 0x802DF1ECu: goto label_802DF1EC;
    case 0x802DF204u: goto label_802DF204;
    case 0x802DF248u: goto label_802DF248;
    case 0x802DF250u: goto label_802DF250;
    case 0x802DF260u: goto label_802DF260;
    case 0x802DF2F0u: goto label_802DF2F0;
    case 0x802DF320u: goto label_802DF320;
    case 0x802DF338u: goto label_802DF338;
    case 0x802DF394u: goto label_802DF394;
    case 0x802DF398u: goto label_802DF398;
    case 0x802DF3A8u: goto label_802DF3A8;
    case 0x802DF3ACu: goto label_802DF3AC;
    case 0x802DF3D8u: goto label_802DF3D8;
    case 0x802DF3ECu: goto label_802DF3EC;
    case 0x802DF400u: goto label_802DF400;
    case 0x802DF40Cu: goto label_802DF40C;
    case 0x802DF410u: goto label_802DF410;
    case 0x802DF41Cu: goto label_802DF41C;
    case 0x802DF424u: goto label_802DF424;
    case 0x802DF44Cu: goto label_802DF44C;
    case 0x802DF458u: goto label_802DF458;
    case 0x802DF45Cu: goto label_802DF45C;
    case 0x802DF470u: goto label_802DF470;
    case 0x802DF47Cu: goto label_802DF47C;
    case 0x802DF480u: goto label_802DF480;
    case 0x802DF4A4u: goto label_802DF4A4;
    case 0x802DF4B0u: goto label_802DF4B0;
    case 0x802DF4B4u: goto label_802DF4B4;
    case 0x802DF4C8u: goto label_802DF4C8;
    case 0x802DF4D4u: goto label_802DF4D4;
    case 0x802DF4D8u: goto label_802DF4D8;
    case 0x802DF4F4u: goto label_802DF4F4;
    case 0x802DF4FCu: goto label_802DF4FC;
    case 0x802DF52Cu: goto label_802DF52C;
    case 0x802DF568u: goto label_802DF568;
    case 0x802DF570u: goto label_802DF570;
    case 0x802DF60Cu: goto label_802DF60C;
    case 0x802DF618u: goto label_802DF618;
    case 0x802DF628u: goto label_802DF628;
    case 0x802DF6C0u: goto label_802DF6C0;
    case 0x802DF6D0u: goto label_802DF6D0;
    case 0x802DF6DCu: goto label_802DF6DC;
    case 0x802DF6F0u: goto label_802DF6F0;
    case 0x802DF750u: goto label_802DF750;
    case 0x802DF760u: goto label_802DF760;
    case 0x802DF76Cu: goto label_802DF76C;
    case 0x802DF780u: goto label_802DF780;
    case 0x802DF7D0u: goto label_802DF7D0;
    case 0x802DF83Cu: goto label_802DF83C;
    case 0x802DF850u: goto label_802DF850;
    case 0x802DF85Cu: goto label_802DF85C;
    case 0x802DF88Cu: goto label_802DF88C;
    case 0x802DF898u: goto label_802DF898;
    case 0x802DF8DCu: goto label_802DF8DC;
    case 0x802DF8F4u: goto label_802DF8F4;
    case 0x802DF900u: goto label_802DF900;
    case 0x802DF920u: goto label_802DF920;
    case 0x802DF934u: goto label_802DF934;
    case 0x802DF940u: goto label_802DF940;
    case 0x802DF968u: goto label_802DF968;
    case 0x802DF984u: goto label_802DF984;
    case 0x802DF9ACu: goto label_802DF9AC;
    case 0x802DF9C8u: goto label_802DF9C8;
    case 0x802DF9E4u: goto label_802DF9E4;
    case 0x802DFA08u: goto label_802DFA08;
    case 0x802DFA14u: goto label_802DFA14;
    case 0x802DFA18u: goto label_802DFA18;
    case 0x802DFA24u: goto label_802DFA24;
    case 0x802DFA2Cu: goto label_802DFA2C;
    case 0x802DFA4Cu: goto label_802DFA4C;
    case 0x802DFA5Cu: goto label_802DFA5C;
    case 0x802DFA68u: goto label_802DFA68;
    case 0x802DFA88u: goto label_802DFA88;
    case 0x802DFAA0u: goto label_802DFAA0;
    case 0x802DFAACu: goto label_802DFAAC;
    case 0x802DFACCu: goto label_802DFACC;
    case 0x802DFB04u: goto label_802DFB04;
    case 0x802DFB38u: goto label_802DFB38;
    case 0x802DFB8Cu: goto label_802DFB8C;
    case 0x802DFBC8u: goto label_802DFBC8;
    case 0x802DFBD8u: goto label_802DFBD8;
    case 0x802DFBE4u: goto label_802DFBE4;
    case 0x802DFC34u: goto label_802DFC34;
    case 0x802DFC40u: goto label_802DFC40;
    case 0x802DFC8Cu: goto label_802DFC8C;
    case 0x802DFC98u: goto label_802DFC98;
    case 0x802DFCFCu: goto label_802DFCFC;
    case 0x802DFD08u: goto label_802DFD08;
    case 0x802DFD38u: goto label_802DFD38;
    case 0x802DFD64u: goto label_802DFD64;
    case 0x802DFD90u: goto label_802DFD90;
    case 0x802DFD9Cu: goto label_802DFD9C;
    case 0x802DFDA0u: goto label_802DFDA0;
    case 0x802DFDC8u: goto label_802DFDC8;
    case 0x802DFDD0u: goto label_802DFDD0;
    case 0x802DFDDCu: goto label_802DFDDC;
    case 0x802DFDE4u: goto label_802DFDE4;
    case 0x802DFE10u: goto label_802DFE10;
    case 0x802DFF44u: goto label_802DFF44;
    case 0x802DFF74u: goto label_802DFF74;
    case 0x802DFF80u: goto label_802DFF80;
    case 0x802DFF84u: goto label_802DFF84;
    case 0x802DFFE4u: goto label_802DFFE4;
    case 0x802E000Cu: goto label_802E000C;
    case 0x802E001Cu: goto label_802E001C;
    case 0x802E0034u: goto label_802E0034;
    case 0x802E0074u: goto label_802E0074;
    case 0x802E0088u: goto label_802E0088;
    case 0x802E00A0u: goto label_802E00A0;
    case 0x802E00E0u: goto label_802E00E0;
    case 0x802E0104u: goto label_802E0104;
    case 0x802E011Cu: goto label_802E011C;
    case 0x802E015Cu: goto label_802E015C;
    case 0x802E0174u: goto label_802E0174;
    case 0x802E018Cu: goto label_802E018C;
    case 0x802E01A4u: goto label_802E01A4;
    case 0x802E01D8u: goto label_802E01D8;
    case 0x802E027Cu: goto label_802E027C;
    case 0x802E0294u: goto label_802E0294;
    case 0x802E029Cu: goto label_802E029C;
    case 0x802E02B8u: goto label_802E02B8;
    case 0x802E02C4u: goto label_802E02C4;
    case 0x802E02C8u: goto label_802E02C8;
    case 0x802E02D4u: goto label_802E02D4;
    case 0x802E02DCu: goto label_802E02DC;
    case 0x802E0308u: goto label_802E0308;
    case 0x802E032Cu: goto label_802E032C;
    case 0x802E0338u: goto label_802E0338;
    case 0x802E0344u: goto label_802E0344;
    case 0x802E0350u: goto label_802E0350;
    case 0x802E0358u: goto label_802E0358;
    case 0x802E03E8u: goto label_802E03E8;
    case 0x802E0448u: goto label_802E0448;
    case 0x802E0470u: goto label_802E0470;
    case 0x802E048Cu: goto label_802E048C;
    case 0x802E04F0u: goto label_802E04F0;
    case 0x802E04FCu: goto label_802E04FC;
    case 0x802E050Cu: goto label_802E050C;
    case 0x802E0550u: goto label_802E0550;
    case 0x802E0560u: goto label_802E0560;
    case 0x802E05CCu: goto label_802E05CC;
    case 0x802E05E4u: goto label_802E05E4;
    case 0x802E05F0u: goto label_802E05F0;
    case 0x802E0608u: goto label_802E0608;
    case 0x802E0634u: goto label_802E0634;
    case 0x802E0644u: goto label_802E0644;
    case 0x802E06B8u: goto label_802E06B8;
    case 0x802E0730u: goto label_802E0730;
    case 0x802E0740u: goto label_802E0740;
    case 0x802E07A0u: goto label_802E07A0;
    case 0x802E07BCu: goto label_802E07BC;
    case 0x802E07D8u: goto label_802E07D8;
    case 0x802E07F4u: goto label_802E07F4;
    case 0x802E081Cu: goto label_802E081C;
    case 0x802E0840u: goto label_802E0840;
    case 0x802E0848u: goto label_802E0848;
    case 0x802E0860u: goto label_802E0860;
    case 0x802E0878u: goto label_802E0878;
    case 0x802E0890u: goto label_802E0890;
    case 0x802E089Cu: goto label_802E089C;
    case 0x802E08D8u: goto label_802E08D8;
    case 0x802E08ECu: goto label_802E08EC;
    case 0x802E0900u: goto label_802E0900;
    case 0x802E0914u: goto label_802E0914;
    case 0x802E0964u: goto label_802E0964;
    case 0x802E09A4u: goto label_802E09A4;
    case 0x802E09DCu: goto label_802E09DC;
    case 0x802E09F4u: goto label_802E09F4;
    case 0x802E0A00u: goto label_802E0A00;
    case 0x802E0A30u: goto label_802E0A30;
    case 0x802E0AACu: goto label_802E0AAC;
    case 0x802E0AFCu: goto label_802E0AFC;
    case 0x802E0B08u: goto label_802E0B08;
    case 0x802E0B14u: goto label_802E0B14;
    case 0x802E0B1Cu: goto label_802E0B1C;
    case 0x802E0BA0u: goto label_802E0BA0;
    case 0x802E0BB8u: goto label_802E0BB8;
    case 0x802E0BC4u: goto label_802E0BC4;
    case 0x802E0BFCu: goto label_802E0BFC;
    case 0x802E0C10u: goto label_802E0C10;
    case 0x802E0C1Cu: goto label_802E0C1C;
    case 0x802E0C28u: goto label_802E0C28;
    case 0x802E0C34u: goto label_802E0C34;
    case 0x802E0C50u: goto label_802E0C50;
    case 0x802E0C6Cu: goto label_802E0C6C;
    case 0x802E0C94u: goto label_802E0C94;
    case 0x802E0CA0u: goto label_802E0CA0;
    case 0x802E0CACu: goto label_802E0CAC;
    case 0x802E0CD8u: goto label_802E0CD8;
    case 0x802E0D04u: goto label_802E0D04;
    case 0x802E0D10u: goto label_802E0D10;
    case 0x802E0D28u: goto label_802E0D28;
    case 0x802E0D38u: goto label_802E0D38;
    case 0x802E0D64u: goto label_802E0D64;
    case 0x802E0D70u: goto label_802E0D70;
    case 0x802E0DA0u: goto label_802E0DA0;
    case 0x802E0DB4u: goto label_802E0DB4;
    case 0x802E0DC0u: goto label_802E0DC0;
    case 0x802E0DC8u: goto label_802E0DC8;
    case 0x802E0DE0u: goto label_802E0DE0;
    case 0x802E0DE8u: goto label_802E0DE8;
    case 0x802E0DF4u: goto label_802E0DF4;
    case 0x802E0E20u: goto label_802E0E20;
    case 0x802E0E34u: goto label_802E0E34;
    case 0x802E0E48u: goto label_802E0E48;
    case 0x802E0E90u: goto label_802E0E90;
    case 0x802E0EB0u: goto label_802E0EB0;
    case 0x802E0EC8u: goto label_802E0EC8;
    case 0x802E0EF0u: goto label_802E0EF0;
    case 0x802E0EFCu: goto label_802E0EFC;
    case 0x802E0F2Cu: goto label_802E0F2C;
    case 0x802E0F60u: goto label_802E0F60;
    case 0x802E0F7Cu: goto label_802E0F7C;
    case 0x802E0F98u: goto label_802E0F98;
    case 0x802E0FBCu: goto label_802E0FBC;
    case 0x802E0FC8u: goto label_802E0FC8;
    case 0x802E0FD0u: goto label_802E0FD0;
    case 0x802E0FF8u: goto label_802E0FF8;
    case 0x802E1010u: goto label_802E1010;
    case 0x802E1024u: goto label_802E1024;
    case 0x802E1038u: goto label_802E1038;
    case 0x802E103Cu: goto label_802E103C;
    case 0x802E1048u: goto label_802E1048;
    case 0x802E1058u: goto label_802E1058;
    case 0x802E1084u: goto label_802E1084;
    case 0x802E109Cu: goto label_802E109C;
    case 0x802E10ACu: goto label_802E10AC;
    case 0x802E10C4u: goto label_802E10C4;
    case 0x802E10D4u: goto label_802E10D4;
    case 0x802E1110u: goto label_802E1110;
    case 0x802E1120u: goto label_802E1120;
    case 0x802E112Cu: goto label_802E112C;
    case 0x802E1138u: goto label_802E1138;
    case 0x802E1144u: goto label_802E1144;
    case 0x802E1154u: goto label_802E1154;
    case 0x802E118Cu: goto label_802E118C;
    case 0x802E11A0u: goto label_802E11A0;
    case 0x802E11B8u: goto label_802E11B8;
    case 0x802E11C8u: goto label_802E11C8;
    case 0x802E11DCu: goto label_802E11DC;
    case 0x802E11F4u: goto label_802E11F4;
    case 0x802E11FCu: goto label_802E11FC;
    case 0x802E1210u: goto label_802E1210;
    case 0x802E121Cu: goto label_802E121C;
    case 0x802E1264u: goto label_802E1264;
    case 0x802E1288u: goto label_802E1288;
    case 0x802E1298u: goto label_802E1298;
    case 0x802E12A0u: goto label_802E12A0;
    case 0x802E12A8u: goto label_802E12A8;
    case 0x802E12BCu: goto label_802E12BC;
    case 0x802E12CCu: goto label_802E12CC;
    case 0x802E130Cu: goto label_802E130C;
    case 0x802E1324u: goto label_802E1324;
    case 0x802E1338u: goto label_802E1338;
    case 0x802E134Cu: goto label_802E134C;
    case 0x802E1364u: goto label_802E1364;
    case 0x802E1378u: goto label_802E1378;
    case 0x802E138Cu: goto label_802E138C;
    case 0x802E13A4u: goto label_802E13A4;
    case 0x802E13B8u: goto label_802E13B8;
    case 0x802E13E0u: goto label_802E13E0;
    case 0x802E13FCu: goto label_802E13FC;
    case 0x802E1410u: goto label_802E1410;
    case 0x802E1448u: goto label_802E1448;
    case 0x802E1460u: goto label_802E1460;
    case 0x802E1474u: goto label_802E1474;
    case 0x802E14A8u: goto label_802E14A8;
    case 0x802E14E8u: goto label_802E14E8;
    case 0x802E14F8u: goto label_802E14F8;
    case 0x802E1504u: goto label_802E1504;
    case 0x802E1510u: goto label_802E1510;
    case 0x802E1518u: goto label_802E1518;
    case 0x802E153Cu: goto label_802E153C;
    case 0x802E154Cu: goto label_802E154C;
    case 0x802E158Cu: goto label_802E158C;
    case 0x802E15B4u: goto label_802E15B4;
    case 0x802E15C8u: goto label_802E15C8;
    case 0x802E15DCu: goto label_802E15DC;
    case 0x802E15F0u: goto label_802E15F0;
    case 0x802E1604u: goto label_802E1604;
    case 0x802E1618u: goto label_802E1618;
    case 0x802E1628u: goto label_802E1628;
    case 0x802E1638u: goto label_802E1638;
    case 0x802E164Cu: goto label_802E164C;
    case 0x802E165Cu: goto label_802E165C;
    case 0x802E1684u: goto label_802E1684;
    case 0x802E169Cu: goto label_802E169C;
    case 0x802E16D4u: goto label_802E16D4;
    case 0x802E16E4u: goto label_802E16E4;
    case 0x802E16F8u: goto label_802E16F8;
    case 0x802E1708u: goto label_802E1708;
    case 0x802E171Cu: goto label_802E171C;
    case 0x802E172Cu: goto label_802E172C;
    case 0x802E173Cu: goto label_802E173C;
    case 0x802E1748u: goto label_802E1748;
    case 0x802E176Cu: goto label_802E176C;
    case 0x802E1798u: goto label_802E1798;
    case 0x802E17A4u: goto label_802E17A4;
    case 0x802E17B0u: goto label_802E17B0;
    case 0x802E17C0u: goto label_802E17C0;
    case 0x802E17D0u: goto label_802E17D0;
    case 0x802E1804u: goto label_802E1804;
    case 0x802E183Cu: goto label_802E183C;
    case 0x802E18A8u: goto label_802E18A8;
    case 0x802E18B4u: goto label_802E18B4;
    case 0x802E18C4u: goto label_802E18C4;
    case 0x802E1910u: goto label_802E1910;
    case 0x802E191Cu: goto label_802E191C;
    case 0x802E192Cu: goto label_802E192C;
    case 0x802E196Cu: goto label_802E196C;
    case 0x802E19ACu: goto label_802E19AC;
    case 0x802E1A34u: goto label_802E1A34;
    case 0x802E1A3Cu: goto label_802E1A3C;
    case 0x802E1A50u: goto label_802E1A50;
    case 0x802E1A90u: goto label_802E1A90;
    case 0x802E1AACu: goto label_802E1AAC;
    case 0x802E1AC4u: goto label_802E1AC4;
    case 0x802E1AD0u: goto label_802E1AD0;
    case 0x802E1AE8u: goto label_802E1AE8;
    case 0x802E1AF0u: goto label_802E1AF0;
    case 0x802E1B18u: goto label_802E1B18;
    case 0x802E1B30u: goto label_802E1B30;
    case 0x802E1B3Cu: goto label_802E1B3C;
    case 0x802E1B50u: goto label_802E1B50;
    case 0x802E1B5Cu: goto label_802E1B5C;
    case 0x802E1B70u: goto label_802E1B70;
    case 0x802E1BBCu: goto label_802E1BBC;
    case 0x802E1BC8u: goto label_802E1BC8;
    case 0x802E1BD8u: goto label_802E1BD8;
    case 0x802E1C0Cu: goto label_802E1C0C;
    case 0x802E1C30u: goto label_802E1C30;
    case 0x802E1C48u: goto label_802E1C48;
    case 0x802E1C60u: goto label_802E1C60;
    case 0x802E1CF8u: goto label_802E1CF8;
    case 0x802E1D34u: goto label_802E1D34;
    case 0x802E1D9Cu: goto label_802E1D9C;
    case 0x802E1DA4u: goto label_802E1DA4;
    case 0x802E1DACu: goto label_802E1DAC;
    case 0x802E1DB4u: goto label_802E1DB4;
    case 0x802E1DBCu: goto label_802E1DBC;
    case 0x802E1DF8u: goto label_802E1DF8;
    case 0x802E1E18u: goto label_802E1E18;
    case 0x802E1E58u: goto label_802E1E58;
    case 0x802E1E78u: goto label_802E1E78;
    case 0x802E1EB8u: goto label_802E1EB8;
    case 0x802E1ED8u: goto label_802E1ED8;
    case 0x802E1F44u: goto label_802E1F44;
    case 0x802E1F58u: goto label_802E1F58;
    case 0x802E1F94u: goto label_802E1F94;
    case 0x802E1FACu: goto label_802E1FAC;
    case 0x802E1FF4u: goto label_802E1FF4;
    case 0x802E2034u: goto label_802E2034;
    case 0x802E2050u: goto label_802E2050;
    case 0x802E2094u: goto label_802E2094;
    case 0x802E20A4u: goto label_802E20A4;
    case 0x802E20B8u: goto label_802E20B8;
    case 0x802E2104u: goto label_802E2104;
    case 0x802E2138u: goto label_802E2138;
    case 0x802E2140u: goto label_802E2140;
    case 0x802E2198u: goto label_802E2198;
    case 0x802E21A4u: goto label_802E21A4;
    case 0x802E21B4u: goto label_802E21B4;
    case 0x802E2200u: goto label_802E2200;
    case 0x802E2218u: goto label_802E2218;
    case 0x802E2220u: goto label_802E2220;
    case 0x802E222Cu: goto label_802E222C;
    case 0x802E226Cu: goto label_802E226C;
    case 0x802E2294u: goto label_802E2294;
    case 0x802E22A0u: goto label_802E22A0;
    case 0x802E22E4u: goto label_802E22E4;
    case 0x802E22ECu: goto label_802E22EC;
    case 0x802E230Cu: goto label_802E230C;
    case 0x802E2344u: goto label_802E2344;
    case 0x802E2350u: goto label_802E2350;
    case 0x802E2384u: goto label_802E2384;
    case 0x802E23B4u: goto label_802E23B4;
    case 0x802E23BCu: goto label_802E23BC;
    case 0x802E23D0u: goto label_802E23D0;
    case 0x802E23FCu: goto label_802E23FC;
    case 0x802E2404u: goto label_802E2404;
    case 0x802E2408u: goto label_802E2408;
    case 0x802E2428u: goto label_802E2428;
    case 0x802E2434u: goto label_802E2434;
    case 0x802E2480u: goto label_802E2480;
    case 0x802E24B4u: goto label_802E24B4;
    case 0x802E24BCu: goto label_802E24BC;
    case 0x802E2508u: goto label_802E2508;
    case 0x802E2514u: goto label_802E2514;
    case 0x802E2524u: goto label_802E2524;
    case 0x802E257Cu: goto label_802E257C;
    case 0x802E2598u: goto label_802E2598;
    case 0x802E25B4u: goto label_802E25B4;
    case 0x802E25D0u: goto label_802E25D0;
    case 0x802E25ECu: goto label_802E25EC;
    case 0x802E2604u: goto label_802E2604;
    case 0x802E260Cu: goto label_802E260C;
    case 0x802E2620u: goto label_802E2620;
    case 0x802E2638u: goto label_802E2638;
    case 0x802E2644u: goto label_802E2644;
    case 0x802E2680u: goto label_802E2680;
    case 0x802E2694u: goto label_802E2694;
    case 0x802E26A8u: goto label_802E26A8;
    case 0x802E26BCu: goto label_802E26BC;
    case 0x802E270Cu: goto label_802E270C;
    case 0x802E2740u: goto label_802E2740;
    case 0x802E2768u: goto label_802E2768;
    case 0x802E2774u: goto label_802E2774;
    case 0x802E282Cu: goto label_802E282C;
    case 0x802E2838u: goto label_802E2838;
    case 0x802E2844u: goto label_802E2844;
    case 0x802E284Cu: goto label_802E284C;
    case 0x802E28C0u: goto label_802E28C0;
    case 0x802E28D8u: goto label_802E28D8;
    case 0x802E28E4u: goto label_802E28E4;
    case 0x802E2908u: goto label_802E2908;
    case 0x802E291Cu: goto label_802E291C;
    case 0x802E2930u: goto label_802E2930;
    case 0x802E293Cu: goto label_802E293C;
    case 0x802E2948u: goto label_802E2948;
    case 0x802E2960u: goto label_802E2960;
    case 0x802E2984u: goto label_802E2984;
    case 0x802E29A0u: goto label_802E29A0;
    case 0x802E29BCu: goto label_802E29BC;
    case 0x802E29C4u: goto label_802E29C4;
    case 0x802E29F4u: goto label_802E29F4;
    case 0x802E2A14u: goto label_802E2A14;
    case 0x802E2A38u: goto label_802E2A38;
    case 0x802E2A44u: goto label_802E2A44;
    case 0x802E2A50u: goto label_802E2A50;
    case 0x802E2A74u: goto label_802E2A74;
    case 0x802E2A80u: goto label_802E2A80;
    case 0x802E2AF4u: goto label_802E2AF4;
    case 0x802E2B18u: goto label_802E2B18;
    case 0x802E2B24u: goto label_802E2B24;
    case 0x802E2B54u: goto label_802E2B54;
    case 0x802E2B6Cu: goto label_802E2B6C;
    case 0x802E2B88u: goto label_802E2B88;
    case 0x802E2BA4u: goto label_802E2BA4;
    case 0x802E2BB4u: goto label_802E2BB4;
    case 0x802E2C08u: goto label_802E2C08;
    case 0x802E2C18u: goto label_802E2C18;
    case 0x802E2C24u: goto label_802E2C24;
    case 0x802E2C30u: goto label_802E2C30;
    case 0x802E2C3Cu: goto label_802E2C3C;
    case 0x802E2C4Cu: goto label_802E2C4C;
    case 0x802E2C78u: goto label_802E2C78;
    case 0x802E2C90u: goto label_802E2C90;
    case 0x802E2CA4u: goto label_802E2CA4;
    case 0x802E2CB4u: goto label_802E2CB4;
    case 0x802E2CC0u: goto label_802E2CC0;
    case 0x802E2CD4u: goto label_802E2CD4;
    case 0x802E2D20u: goto label_802E2D20;
    case 0x802E2D44u: goto label_802E2D44;
    case 0x802E2D54u: goto label_802E2D54;
    case 0x802E2D5Cu: goto label_802E2D5C;
    case 0x802E2D70u: goto label_802E2D70;
    case 0x802E2D80u: goto label_802E2D80;
    case 0x802E2DC0u: goto label_802E2DC0;
    case 0x802E2DD8u: goto label_802E2DD8;
    case 0x802E2DECu: goto label_802E2DEC;
    case 0x802E2E00u: goto label_802E2E00;
    case 0x802E2E18u: goto label_802E2E18;
    case 0x802E2E2Cu: goto label_802E2E2C;
    case 0x802E2E40u: goto label_802E2E40;
    case 0x802E2E58u: goto label_802E2E58;
    case 0x802E2E6Cu: goto label_802E2E6C;
    case 0x802E2E88u: goto label_802E2E88;
    case 0x802E2EA4u: goto label_802E2EA4;
    case 0x802E2EB8u: goto label_802E2EB8;
    case 0x802E2EE0u: goto label_802E2EE0;
    case 0x802E2EF8u: goto label_802E2EF8;
    case 0x802E2F0Cu: goto label_802E2F0C;
    case 0x802E2F14u: goto label_802E2F14;
    case 0x802E2F34u: goto label_802E2F34;
    case 0x802E2F3Cu: goto label_802E2F3C;
    case 0x802E2F5Cu: goto label_802E2F5C;
    case 0x802E2F64u: goto label_802E2F64;
    case 0x802E2F70u: goto label_802E2F70;
    case 0x802E2F78u: goto label_802E2F78;
    case 0x802E2F84u: goto label_802E2F84;
    case 0x802E2FCCu: goto label_802E2FCC;
    case 0x802E2FD0u: goto label_802E2FD0;
    case 0x802E2FF4u: goto label_802E2FF4;
    case 0x802E3004u: goto label_802E3004;
    case 0x802E300Cu: goto label_802E300C;
    case 0x802E3018u: goto label_802E3018;
    case 0x802E3040u: goto label_802E3040;
    case 0x802E305Cu: goto label_802E305C;
    case 0x802E3084u: goto label_802E3084;
    case 0x802E3098u: goto label_802E3098;
    case 0x802E30ACu: goto label_802E30AC;
    case 0x802E30C0u: goto label_802E30C0;
    case 0x802E30D0u: goto label_802E30D0;
    case 0x802E30E0u: goto label_802E30E0;
    case 0x802E30F4u: goto label_802E30F4;
    case 0x802E3104u: goto label_802E3104;
    case 0x802E3120u: goto label_802E3120;
    case 0x802E3134u: goto label_802E3134;
    case 0x802E315Cu: goto label_802E315C;
    case 0x802E316Cu: goto label_802E316C;
    case 0x802E3180u: goto label_802E3180;
    case 0x802E3190u: goto label_802E3190;
    case 0x802E31A4u: goto label_802E31A4;
    case 0x802E31B4u: goto label_802E31B4;
    default: return;
    }
}

