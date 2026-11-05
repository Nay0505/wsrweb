// DolRecomp output
#include "../RZTE01.h"

static void loop_803183F4(CPUState* ctx) {
label_803183F4:
    ctx->downcount -= 4;
    // 803183F4: add   r4, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

    // 803183F8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x803183FCu;
    // 803183FC: stw     r6, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

    // 80318400: bc    16, 0, 0x803183F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803183F4u;
                return;
            }
            goto label_803183F4;
        }
    }

    ctx->pc = 0x80318404u;
}

static void loop_80318414(CPUState* ctx) {
label_80318414:
    ctx->downcount -= 5;
    // 80318414: add   r5, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 80318418: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

    ctx->pc = 0x8031841Cu;
    // 8031841C: stw     r4, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80318420u;
    // 80318420: stw     r4, 300(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80318424: bc    16, 0, 0x80318414
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318414u;
                return;
            }
            goto label_80318414;
        }
    }

    ctx->pc = 0x80318428u;
}

static void loop_80319A20(CPUState* ctx) {
label_80319A20:
    ctx->downcount -= 26;
    ctx->pc = 0x80319A20u;
    // 80319A20: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    // 80319A24: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

    ctx->pc = 0x80319A28u;
    // 80319A28: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80319A2C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80319A30u;
    // 80319A30: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A34u;
    // 80319A34: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80319A38u;
    // 80319A38: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A3Cu;
    // 80319A3C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A40u;
    // 80319A40: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A44u;
    // 80319A44: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A48u;
    // 80319A48: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80319A4C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80319A50u;
    // 80319A50: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A54u;
    // 80319A54: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    ctx->pc = 0x80319A58u;
    // 80319A58: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A5Cu;
    // 80319A5C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A60u;
    // 80319A60: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A64u;
    // 80319A64: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A68u;
    // 80319A68: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80319A6C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    ctx->pc = 0x80319A70u;
    // 80319A70: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A74u;
    // 80319A74: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

    // 80319A78: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

    ctx->pc = 0x80319A7Cu;
    // 80319A7C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A80u;
    // 80319A80: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80319A84u;
    // 80319A84: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

    ctx->pc = 0x80319A88u;
    // 80319A88: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

    // 80319A8C: cmpw    r7, r0
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

    // 80319A90: bc    12, 0, 0x80319A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319A20u;
                return;
            }
            goto label_80319A20;
        }
    }

    ctx->pc = 0x80319A94u;
}

static void loop_8031A148(CPUState* ctx) {
label_8031A148:
    ctx->downcount -= 5;
    // 8031A148: add   r7, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    // 8031A14C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x8031A150u;
    // 8031A150: stw     r5, 288(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8031A154u;
    // 8031A154: stw     r5, 388(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8031A158: bc    16, 0, 0x8031A148
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A148u;
                return;
            }
            goto label_8031A148;
        }
    }

    ctx->pc = 0x8031A15Cu;
}

static void loop_8031A18C(CPUState* ctx) {
label_8031A18C:
    ctx->downcount -= 5;
    // 8031A18C: add   r7, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

    // 8031A190: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x8031A194u;
    // 8031A194: stw     r5, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x8031A198u;
    // 8031A198: stw     r5, 556(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 8031A19C: bc    16, 0, 0x8031A18C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A18Cu;
                return;
            }
            goto label_8031A18C;
        }
    }

    ctx->pc = 0x8031A1A0u;
}

void func_803171C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x803171C0u: goto label_803171C0;
    case 0x803171C4u: goto label_803171C4;
    case 0x803171C8u: goto label_803171C8;
    case 0x803171CCu: goto label_803171CC;
    case 0x803171D0u: goto label_803171D0;
    case 0x803171D4u: goto label_803171D4;
    case 0x803171D8u: goto label_803171D8;
    case 0x803171DCu: goto label_803171DC;
    case 0x803171E0u: goto label_803171E0;
    case 0x803171E4u: goto label_803171E4;
    case 0x803171E8u: goto label_803171E8;
    case 0x803171ECu: goto label_803171EC;
    case 0x803171F0u: goto label_803171F0;
    case 0x803171F4u: goto label_803171F4;
    case 0x803171F8u: goto label_803171F8;
    case 0x803171FCu: goto label_803171FC;
    case 0x80317200u: goto label_80317200;
    case 0x80317204u: goto label_80317204;
    case 0x80317208u: goto label_80317208;
    case 0x8031720Cu: goto label_8031720C;
    case 0x80317210u: goto label_80317210;
    case 0x80317214u: goto label_80317214;
    case 0x80317218u: goto label_80317218;
    case 0x8031721Cu: goto label_8031721C;
    case 0x80317220u: goto label_80317220;
    case 0x80317224u: goto label_80317224;
    case 0x80317228u: goto label_80317228;
    case 0x8031722Cu: goto label_8031722C;
    case 0x80317230u: goto label_80317230;
    case 0x80317234u: goto label_80317234;
    case 0x80317238u: goto label_80317238;
    case 0x8031723Cu: goto label_8031723C;
    case 0x80317240u: goto label_80317240;
    case 0x80317244u: goto label_80317244;
    case 0x80317248u: goto label_80317248;
    case 0x8031724Cu: goto label_8031724C;
    case 0x80317250u: goto label_80317250;
    case 0x80317254u: goto label_80317254;
    case 0x80317258u: goto label_80317258;
    case 0x8031725Cu: goto label_8031725C;
    case 0x80317260u: goto label_80317260;
    case 0x80317264u: goto label_80317264;
    case 0x80317268u: goto label_80317268;
    case 0x8031726Cu: goto label_8031726C;
    case 0x80317270u: goto label_80317270;
    case 0x80317274u: goto label_80317274;
    case 0x80317278u: goto label_80317278;
    case 0x8031727Cu: goto label_8031727C;
    case 0x80317280u: goto label_80317280;
    case 0x80317284u: goto label_80317284;
    case 0x80317288u: goto label_80317288;
    case 0x8031728Cu: goto label_8031728C;
    case 0x80317290u: goto label_80317290;
    case 0x80317294u: goto label_80317294;
    case 0x80317298u: goto label_80317298;
    case 0x8031729Cu: goto label_8031729C;
    case 0x803172A0u: goto label_803172A0;
    case 0x803172A4u: goto label_803172A4;
    case 0x803172A8u: goto label_803172A8;
    case 0x803172ACu: goto label_803172AC;
    case 0x803172B0u: goto label_803172B0;
    case 0x803172B4u: goto label_803172B4;
    case 0x803172B8u: goto label_803172B8;
    case 0x803172BCu: goto label_803172BC;
    case 0x803172C0u: goto label_803172C0;
    case 0x803172C4u: goto label_803172C4;
    case 0x803172C8u: goto label_803172C8;
    case 0x803172CCu: goto label_803172CC;
    case 0x803172D0u: goto label_803172D0;
    case 0x803172D4u: goto label_803172D4;
    case 0x803172D8u: goto label_803172D8;
    case 0x803172DCu: goto label_803172DC;
    case 0x803172E0u: goto label_803172E0;
    case 0x803172E4u: goto label_803172E4;
    case 0x803172E8u: goto label_803172E8;
    case 0x803172ECu: goto label_803172EC;
    case 0x803172F0u: goto label_803172F0;
    case 0x803172F4u: goto label_803172F4;
    case 0x803172F8u: goto label_803172F8;
    case 0x803172FCu: goto label_803172FC;
    case 0x80317300u: goto label_80317300;
    case 0x80317304u: goto label_80317304;
    case 0x80317308u: goto label_80317308;
    case 0x8031730Cu: goto label_8031730C;
    case 0x80317310u: goto label_80317310;
    case 0x80317314u: goto label_80317314;
    case 0x80317318u: goto label_80317318;
    case 0x8031731Cu: goto label_8031731C;
    case 0x80317320u: goto label_80317320;
    case 0x80317324u: goto label_80317324;
    case 0x80317328u: goto label_80317328;
    case 0x8031732Cu: goto label_8031732C;
    case 0x80317330u: goto label_80317330;
    case 0x80317334u: goto label_80317334;
    case 0x80317338u: goto label_80317338;
    case 0x8031733Cu: goto label_8031733C;
    case 0x80317340u: goto label_80317340;
    case 0x80317344u: goto label_80317344;
    case 0x80317348u: goto label_80317348;
    case 0x8031734Cu: goto label_8031734C;
    case 0x80317350u: goto label_80317350;
    case 0x80317354u: goto label_80317354;
    case 0x80317358u: goto label_80317358;
    case 0x8031735Cu: goto label_8031735C;
    case 0x80317360u: goto label_80317360;
    case 0x80317364u: goto label_80317364;
    case 0x80317368u: goto label_80317368;
    case 0x8031736Cu: goto label_8031736C;
    case 0x80317370u: goto label_80317370;
    case 0x80317374u: goto label_80317374;
    case 0x80317378u: goto label_80317378;
    case 0x8031737Cu: goto label_8031737C;
    case 0x80317380u: goto label_80317380;
    case 0x80317384u: goto label_80317384;
    case 0x80317388u: goto label_80317388;
    case 0x8031738Cu: goto label_8031738C;
    case 0x80317390u: goto label_80317390;
    case 0x80317394u: goto label_80317394;
    case 0x80317398u: goto label_80317398;
    case 0x8031739Cu: goto label_8031739C;
    case 0x803173A0u: goto label_803173A0;
    case 0x803173A4u: goto label_803173A4;
    case 0x803173A8u: goto label_803173A8;
    case 0x803173ACu: goto label_803173AC;
    case 0x803173B0u: goto label_803173B0;
    case 0x803173B4u: goto label_803173B4;
    case 0x803173B8u: goto label_803173B8;
    case 0x803173BCu: goto label_803173BC;
    case 0x803173C0u: goto label_803173C0;
    case 0x803173C4u: goto label_803173C4;
    case 0x803173C8u: goto label_803173C8;
    case 0x803173CCu: goto label_803173CC;
    case 0x803173D0u: goto label_803173D0;
    case 0x803173D4u: goto label_803173D4;
    case 0x803173D8u: goto label_803173D8;
    case 0x803173DCu: goto label_803173DC;
    case 0x803173E0u: goto label_803173E0;
    case 0x803173E4u: goto label_803173E4;
    case 0x803173E8u: goto label_803173E8;
    case 0x803173ECu: goto label_803173EC;
    case 0x803173F0u: goto label_803173F0;
    case 0x803173F4u: goto label_803173F4;
    case 0x803173F8u: goto label_803173F8;
    case 0x803173FCu: goto label_803173FC;
    case 0x80317400u: goto label_80317400;
    case 0x80317404u: goto label_80317404;
    case 0x80317408u: goto label_80317408;
    case 0x8031740Cu: goto label_8031740C;
    case 0x80317410u: goto label_80317410;
    case 0x80317414u: goto label_80317414;
    case 0x80317418u: goto label_80317418;
    case 0x8031741Cu: goto label_8031741C;
    case 0x80317420u: goto label_80317420;
    case 0x80317424u: goto label_80317424;
    case 0x80317428u: goto label_80317428;
    case 0x8031742Cu: goto label_8031742C;
    case 0x80317430u: goto label_80317430;
    case 0x80317434u: goto label_80317434;
    case 0x80317438u: goto label_80317438;
    case 0x8031743Cu: goto label_8031743C;
    case 0x80317440u: goto label_80317440;
    case 0x80317444u: goto label_80317444;
    case 0x80317448u: goto label_80317448;
    case 0x8031744Cu: goto label_8031744C;
    case 0x80317450u: goto label_80317450;
    case 0x80317454u: goto label_80317454;
    case 0x80317458u: goto label_80317458;
    case 0x8031745Cu: goto label_8031745C;
    case 0x80317460u: goto label_80317460;
    case 0x80317464u: goto label_80317464;
    case 0x80317468u: goto label_80317468;
    case 0x8031746Cu: goto label_8031746C;
    case 0x80317470u: goto label_80317470;
    case 0x80317474u: goto label_80317474;
    case 0x80317478u: goto label_80317478;
    case 0x8031747Cu: goto label_8031747C;
    case 0x80317480u: goto label_80317480;
    case 0x80317484u: goto label_80317484;
    case 0x80317488u: goto label_80317488;
    case 0x8031748Cu: goto label_8031748C;
    case 0x80317490u: goto label_80317490;
    case 0x80317494u: goto label_80317494;
    case 0x80317498u: goto label_80317498;
    case 0x8031749Cu: goto label_8031749C;
    case 0x803174A0u: goto label_803174A0;
    case 0x803174A4u: goto label_803174A4;
    case 0x803174A8u: goto label_803174A8;
    case 0x803174ACu: goto label_803174AC;
    case 0x803174B0u: goto label_803174B0;
    case 0x803174B4u: goto label_803174B4;
    case 0x803174B8u: goto label_803174B8;
    case 0x803174BCu: goto label_803174BC;
    case 0x803174C0u: goto label_803174C0;
    case 0x803174C4u: goto label_803174C4;
    case 0x803174C8u: goto label_803174C8;
    case 0x803174CCu: goto label_803174CC;
    case 0x803174D0u: goto label_803174D0;
    case 0x803174D4u: goto label_803174D4;
    case 0x803174D8u: goto label_803174D8;
    case 0x803174DCu: goto label_803174DC;
    case 0x803174E0u: goto label_803174E0;
    case 0x803174E4u: goto label_803174E4;
    case 0x803174E8u: goto label_803174E8;
    case 0x803174ECu: goto label_803174EC;
    case 0x803174F0u: goto label_803174F0;
    case 0x803174F4u: goto label_803174F4;
    case 0x803174F8u: goto label_803174F8;
    case 0x803174FCu: goto label_803174FC;
    case 0x80317500u: goto label_80317500;
    case 0x80317504u: goto label_80317504;
    case 0x80317508u: goto label_80317508;
    case 0x8031750Cu: goto label_8031750C;
    case 0x80317510u: goto label_80317510;
    case 0x80317514u: goto label_80317514;
    case 0x80317518u: goto label_80317518;
    case 0x8031751Cu: goto label_8031751C;
    case 0x80317520u: goto label_80317520;
    case 0x80317524u: goto label_80317524;
    case 0x80317528u: goto label_80317528;
    case 0x8031752Cu: goto label_8031752C;
    case 0x80317530u: goto label_80317530;
    case 0x80317534u: goto label_80317534;
    case 0x80317538u: goto label_80317538;
    case 0x8031753Cu: goto label_8031753C;
    case 0x80317540u: goto label_80317540;
    case 0x80317544u: goto label_80317544;
    case 0x80317548u: goto label_80317548;
    case 0x8031754Cu: goto label_8031754C;
    case 0x80317550u: goto label_80317550;
    case 0x80317554u: goto label_80317554;
    case 0x80317558u: goto label_80317558;
    case 0x8031755Cu: goto label_8031755C;
    case 0x80317560u: goto label_80317560;
    case 0x80317564u: goto label_80317564;
    case 0x80317568u: goto label_80317568;
    case 0x8031756Cu: goto label_8031756C;
    case 0x80317570u: goto label_80317570;
    case 0x80317574u: goto label_80317574;
    case 0x80317578u: goto label_80317578;
    case 0x8031757Cu: goto label_8031757C;
    case 0x80317580u: goto label_80317580;
    case 0x80317584u: goto label_80317584;
    case 0x80317588u: goto label_80317588;
    case 0x8031758Cu: goto label_8031758C;
    case 0x80317590u: goto label_80317590;
    case 0x80317594u: goto label_80317594;
    case 0x80317598u: goto label_80317598;
    case 0x8031759Cu: goto label_8031759C;
    case 0x803175A0u: goto label_803175A0;
    case 0x803175A4u: goto label_803175A4;
    case 0x803175A8u: goto label_803175A8;
    case 0x803175ACu: goto label_803175AC;
    case 0x803175B0u: goto label_803175B0;
    case 0x803175B4u: goto label_803175B4;
    case 0x803175B8u: goto label_803175B8;
    case 0x803175BCu: goto label_803175BC;
    case 0x803175C0u: goto label_803175C0;
    case 0x803175C4u: goto label_803175C4;
    case 0x803175C8u: goto label_803175C8;
    case 0x803175CCu: goto label_803175CC;
    case 0x803175D0u: goto label_803175D0;
    case 0x803175D4u: goto label_803175D4;
    case 0x803175D8u: goto label_803175D8;
    case 0x803175DCu: goto label_803175DC;
    case 0x803175E0u: goto label_803175E0;
    case 0x803175E4u: goto label_803175E4;
    case 0x803175E8u: goto label_803175E8;
    case 0x803175ECu: goto label_803175EC;
    case 0x803175F0u: goto label_803175F0;
    case 0x803175F4u: goto label_803175F4;
    case 0x803175F8u: goto label_803175F8;
    case 0x803175FCu: goto label_803175FC;
    case 0x80317600u: goto label_80317600;
    case 0x80317604u: goto label_80317604;
    case 0x80317608u: goto label_80317608;
    case 0x8031760Cu: goto label_8031760C;
    case 0x80317610u: goto label_80317610;
    case 0x80317614u: goto label_80317614;
    case 0x80317618u: goto label_80317618;
    case 0x8031761Cu: goto label_8031761C;
    case 0x80317620u: goto label_80317620;
    case 0x80317624u: goto label_80317624;
    case 0x80317628u: goto label_80317628;
    case 0x8031762Cu: goto label_8031762C;
    case 0x80317630u: goto label_80317630;
    case 0x80317634u: goto label_80317634;
    case 0x80317638u: goto label_80317638;
    case 0x8031763Cu: goto label_8031763C;
    case 0x80317640u: goto label_80317640;
    case 0x80317644u: goto label_80317644;
    case 0x80317648u: goto label_80317648;
    case 0x8031764Cu: goto label_8031764C;
    case 0x80317650u: goto label_80317650;
    case 0x80317654u: goto label_80317654;
    case 0x80317658u: goto label_80317658;
    case 0x8031765Cu: goto label_8031765C;
    case 0x80317660u: goto label_80317660;
    case 0x80317664u: goto label_80317664;
    case 0x80317668u: goto label_80317668;
    case 0x8031766Cu: goto label_8031766C;
    case 0x80317670u: goto label_80317670;
    case 0x80317674u: goto label_80317674;
    case 0x80317678u: goto label_80317678;
    case 0x8031767Cu: goto label_8031767C;
    case 0x80317680u: goto label_80317680;
    case 0x80317684u: goto label_80317684;
    case 0x80317688u: goto label_80317688;
    case 0x8031768Cu: goto label_8031768C;
    case 0x80317690u: goto label_80317690;
    case 0x80317694u: goto label_80317694;
    case 0x80317698u: goto label_80317698;
    case 0x8031769Cu: goto label_8031769C;
    case 0x803176A0u: goto label_803176A0;
    case 0x803176A4u: goto label_803176A4;
    case 0x803176A8u: goto label_803176A8;
    case 0x803176ACu: goto label_803176AC;
    case 0x803176B0u: goto label_803176B0;
    case 0x803176B4u: goto label_803176B4;
    case 0x803176B8u: goto label_803176B8;
    case 0x803176BCu: goto label_803176BC;
    case 0x803176C0u: goto label_803176C0;
    case 0x803176C4u: goto label_803176C4;
    case 0x803176C8u: goto label_803176C8;
    case 0x803176CCu: goto label_803176CC;
    case 0x803176D0u: goto label_803176D0;
    case 0x803176D4u: goto label_803176D4;
    case 0x803176D8u: goto label_803176D8;
    case 0x803176DCu: goto label_803176DC;
    case 0x803176E0u: goto label_803176E0;
    case 0x803176E4u: goto label_803176E4;
    case 0x803176E8u: goto label_803176E8;
    case 0x803176ECu: goto label_803176EC;
    case 0x803176F0u: goto label_803176F0;
    case 0x803176F4u: goto label_803176F4;
    case 0x803176F8u: goto label_803176F8;
    case 0x803176FCu: goto label_803176FC;
    case 0x80317700u: goto label_80317700;
    case 0x80317704u: goto label_80317704;
    case 0x80317708u: goto label_80317708;
    case 0x8031770Cu: goto label_8031770C;
    case 0x80317710u: goto label_80317710;
    case 0x80317714u: goto label_80317714;
    case 0x80317718u: goto label_80317718;
    case 0x8031771Cu: goto label_8031771C;
    case 0x80317720u: goto label_80317720;
    case 0x80317724u: goto label_80317724;
    case 0x80317728u: goto label_80317728;
    case 0x8031772Cu: goto label_8031772C;
    case 0x80317730u: goto label_80317730;
    case 0x80317734u: goto label_80317734;
    case 0x80317738u: goto label_80317738;
    case 0x8031773Cu: goto label_8031773C;
    case 0x80317740u: goto label_80317740;
    case 0x80317744u: goto label_80317744;
    case 0x80317748u: goto label_80317748;
    case 0x8031774Cu: goto label_8031774C;
    case 0x80317750u: goto label_80317750;
    case 0x80317754u: goto label_80317754;
    case 0x80317758u: goto label_80317758;
    case 0x8031775Cu: goto label_8031775C;
    case 0x80317760u: goto label_80317760;
    case 0x80317764u: goto label_80317764;
    case 0x80317768u: goto label_80317768;
    case 0x8031776Cu: goto label_8031776C;
    case 0x80317770u: goto label_80317770;
    case 0x80317774u: goto label_80317774;
    case 0x80317778u: goto label_80317778;
    case 0x8031777Cu: goto label_8031777C;
    case 0x80317780u: goto label_80317780;
    case 0x80317784u: goto label_80317784;
    case 0x80317788u: goto label_80317788;
    case 0x8031778Cu: goto label_8031778C;
    case 0x80317790u: goto label_80317790;
    case 0x80317794u: goto label_80317794;
    case 0x80317798u: goto label_80317798;
    case 0x8031779Cu: goto label_8031779C;
    case 0x803177A0u: goto label_803177A0;
    case 0x803177A4u: goto label_803177A4;
    case 0x803177A8u: goto label_803177A8;
    case 0x803177ACu: goto label_803177AC;
    case 0x803177B0u: goto label_803177B0;
    case 0x803177B4u: goto label_803177B4;
    case 0x803177B8u: goto label_803177B8;
    case 0x803177BCu: goto label_803177BC;
    case 0x803177C0u: goto label_803177C0;
    case 0x803177C4u: goto label_803177C4;
    case 0x803177C8u: goto label_803177C8;
    case 0x803177CCu: goto label_803177CC;
    case 0x803177D0u: goto label_803177D0;
    case 0x803177D4u: goto label_803177D4;
    case 0x803177D8u: goto label_803177D8;
    case 0x803177DCu: goto label_803177DC;
    case 0x803177E0u: goto label_803177E0;
    case 0x803177E4u: goto label_803177E4;
    case 0x803177E8u: goto label_803177E8;
    case 0x803177ECu: goto label_803177EC;
    case 0x803177F0u: goto label_803177F0;
    case 0x803177F4u: goto label_803177F4;
    case 0x803177F8u: goto label_803177F8;
    case 0x803177FCu: goto label_803177FC;
    case 0x80317800u: goto label_80317800;
    case 0x80317804u: goto label_80317804;
    case 0x80317808u: goto label_80317808;
    case 0x8031780Cu: goto label_8031780C;
    case 0x80317810u: goto label_80317810;
    case 0x80317814u: goto label_80317814;
    case 0x80317818u: goto label_80317818;
    case 0x8031781Cu: goto label_8031781C;
    case 0x80317820u: goto label_80317820;
    case 0x80317824u: goto label_80317824;
    case 0x80317828u: goto label_80317828;
    case 0x8031782Cu: goto label_8031782C;
    case 0x80317830u: goto label_80317830;
    case 0x80317834u: goto label_80317834;
    case 0x80317838u: goto label_80317838;
    case 0x8031783Cu: goto label_8031783C;
    case 0x80317840u: goto label_80317840;
    case 0x80317844u: goto label_80317844;
    case 0x80317848u: goto label_80317848;
    case 0x8031784Cu: goto label_8031784C;
    case 0x80317850u: goto label_80317850;
    case 0x80317854u: goto label_80317854;
    case 0x80317858u: goto label_80317858;
    case 0x8031785Cu: goto label_8031785C;
    case 0x80317860u: goto label_80317860;
    case 0x80317864u: goto label_80317864;
    case 0x80317868u: goto label_80317868;
    case 0x8031786Cu: goto label_8031786C;
    case 0x80317870u: goto label_80317870;
    case 0x80317874u: goto label_80317874;
    case 0x80317878u: goto label_80317878;
    case 0x8031787Cu: goto label_8031787C;
    case 0x80317880u: goto label_80317880;
    case 0x80317884u: goto label_80317884;
    case 0x80317888u: goto label_80317888;
    case 0x8031788Cu: goto label_8031788C;
    case 0x80317890u: goto label_80317890;
    case 0x80317894u: goto label_80317894;
    case 0x80317898u: goto label_80317898;
    case 0x8031789Cu: goto label_8031789C;
    case 0x803178A0u: goto label_803178A0;
    case 0x803178A4u: goto label_803178A4;
    case 0x803178A8u: goto label_803178A8;
    case 0x803178ACu: goto label_803178AC;
    case 0x803178B0u: goto label_803178B0;
    case 0x803178B4u: goto label_803178B4;
    case 0x803178B8u: goto label_803178B8;
    case 0x803178BCu: goto label_803178BC;
    case 0x803178C0u: goto label_803178C0;
    case 0x803178C4u: goto label_803178C4;
    case 0x803178C8u: goto label_803178C8;
    case 0x803178CCu: goto label_803178CC;
    case 0x803178D0u: goto label_803178D0;
    case 0x803178D4u: goto label_803178D4;
    case 0x803178D8u: goto label_803178D8;
    case 0x803178DCu: goto label_803178DC;
    case 0x803178E0u: goto label_803178E0;
    case 0x803178E4u: goto label_803178E4;
    case 0x803178E8u: goto label_803178E8;
    case 0x803178ECu: goto label_803178EC;
    case 0x803178F0u: goto label_803178F0;
    case 0x803178F4u: goto label_803178F4;
    case 0x803178F8u: goto label_803178F8;
    case 0x803178FCu: goto label_803178FC;
    case 0x80317900u: goto label_80317900;
    case 0x80317904u: goto label_80317904;
    case 0x80317908u: goto label_80317908;
    case 0x8031790Cu: goto label_8031790C;
    case 0x80317910u: goto label_80317910;
    case 0x80317914u: goto label_80317914;
    case 0x80317918u: goto label_80317918;
    case 0x8031791Cu: goto label_8031791C;
    case 0x80317920u: goto label_80317920;
    case 0x80317924u: goto label_80317924;
    case 0x80317928u: goto label_80317928;
    case 0x8031792Cu: goto label_8031792C;
    case 0x80317930u: goto label_80317930;
    case 0x80317934u: goto label_80317934;
    case 0x80317938u: goto label_80317938;
    case 0x8031793Cu: goto label_8031793C;
    case 0x80317940u: goto label_80317940;
    case 0x80317944u: goto label_80317944;
    case 0x80317948u: goto label_80317948;
    case 0x8031794Cu: goto label_8031794C;
    case 0x80317950u: goto label_80317950;
    case 0x80317954u: goto label_80317954;
    case 0x80317958u: goto label_80317958;
    case 0x8031795Cu: goto label_8031795C;
    case 0x80317960u: goto label_80317960;
    case 0x80317964u: goto label_80317964;
    case 0x80317968u: goto label_80317968;
    case 0x8031796Cu: goto label_8031796C;
    case 0x80317970u: goto label_80317970;
    case 0x80317974u: goto label_80317974;
    case 0x80317978u: goto label_80317978;
    case 0x8031797Cu: goto label_8031797C;
    case 0x80317980u: goto label_80317980;
    case 0x80317984u: goto label_80317984;
    case 0x80317988u: goto label_80317988;
    case 0x8031798Cu: goto label_8031798C;
    case 0x80317990u: goto label_80317990;
    case 0x80317994u: goto label_80317994;
    case 0x80317998u: goto label_80317998;
    case 0x8031799Cu: goto label_8031799C;
    case 0x803179A0u: goto label_803179A0;
    case 0x803179A4u: goto label_803179A4;
    case 0x803179A8u: goto label_803179A8;
    case 0x803179ACu: goto label_803179AC;
    case 0x803179B0u: goto label_803179B0;
    case 0x803179B4u: goto label_803179B4;
    case 0x803179B8u: goto label_803179B8;
    case 0x803179BCu: goto label_803179BC;
    case 0x803179C0u: goto label_803179C0;
    case 0x803179C4u: goto label_803179C4;
    case 0x803179C8u: goto label_803179C8;
    case 0x803179CCu: goto label_803179CC;
    case 0x803179D0u: goto label_803179D0;
    case 0x803179D4u: goto label_803179D4;
    case 0x803179D8u: goto label_803179D8;
    case 0x803179DCu: goto label_803179DC;
    case 0x803179E0u: goto label_803179E0;
    case 0x803179E4u: goto label_803179E4;
    case 0x803179E8u: goto label_803179E8;
    case 0x803179ECu: goto label_803179EC;
    case 0x803179F0u: goto label_803179F0;
    case 0x803179F4u: goto label_803179F4;
    case 0x803179F8u: goto label_803179F8;
    case 0x803179FCu: goto label_803179FC;
    case 0x80317A00u: goto label_80317A00;
    case 0x80317A04u: goto label_80317A04;
    case 0x80317A08u: goto label_80317A08;
    case 0x80317A0Cu: goto label_80317A0C;
    case 0x80317A10u: goto label_80317A10;
    case 0x80317A14u: goto label_80317A14;
    case 0x80317A18u: goto label_80317A18;
    case 0x80317A1Cu: goto label_80317A1C;
    case 0x80317A20u: goto label_80317A20;
    case 0x80317A24u: goto label_80317A24;
    case 0x80317A28u: goto label_80317A28;
    case 0x80317A2Cu: goto label_80317A2C;
    case 0x80317A30u: goto label_80317A30;
    case 0x80317A34u: goto label_80317A34;
    case 0x80317A38u: goto label_80317A38;
    case 0x80317A3Cu: goto label_80317A3C;
    case 0x80317A40u: goto label_80317A40;
    case 0x80317A44u: goto label_80317A44;
    case 0x80317A48u: goto label_80317A48;
    case 0x80317A4Cu: goto label_80317A4C;
    case 0x80317A50u: goto label_80317A50;
    case 0x80317A54u: goto label_80317A54;
    case 0x80317A58u: goto label_80317A58;
    case 0x80317A5Cu: goto label_80317A5C;
    case 0x80317A60u: goto label_80317A60;
    case 0x80317A64u: goto label_80317A64;
    case 0x80317A68u: goto label_80317A68;
    case 0x80317A6Cu: goto label_80317A6C;
    case 0x80317A70u: goto label_80317A70;
    case 0x80317A74u: goto label_80317A74;
    case 0x80317A78u: goto label_80317A78;
    case 0x80317A7Cu: goto label_80317A7C;
    case 0x80317A80u: goto label_80317A80;
    case 0x80317A84u: goto label_80317A84;
    case 0x80317A88u: goto label_80317A88;
    case 0x80317A8Cu: goto label_80317A8C;
    case 0x80317A90u: goto label_80317A90;
    case 0x80317A94u: goto label_80317A94;
    case 0x80317A98u: goto label_80317A98;
    case 0x80317A9Cu: goto label_80317A9C;
    case 0x80317AA0u: goto label_80317AA0;
    case 0x80317AA4u: goto label_80317AA4;
    case 0x80317AA8u: goto label_80317AA8;
    case 0x80317AACu: goto label_80317AAC;
    case 0x80317AB0u: goto label_80317AB0;
    case 0x80317AB4u: goto label_80317AB4;
    case 0x80317AB8u: goto label_80317AB8;
    case 0x80317ABCu: goto label_80317ABC;
    case 0x80317AC0u: goto label_80317AC0;
    case 0x80317AC4u: goto label_80317AC4;
    case 0x80317AC8u: goto label_80317AC8;
    case 0x80317ACCu: goto label_80317ACC;
    case 0x80317AD0u: goto label_80317AD0;
    case 0x80317AD4u: goto label_80317AD4;
    case 0x80317AD8u: goto label_80317AD8;
    case 0x80317ADCu: goto label_80317ADC;
    case 0x80317AE0u: goto label_80317AE0;
    case 0x80317AE4u: goto label_80317AE4;
    case 0x80317AE8u: goto label_80317AE8;
    case 0x80317AECu: goto label_80317AEC;
    case 0x80317AF0u: goto label_80317AF0;
    case 0x80317AF4u: goto label_80317AF4;
    case 0x80317AF8u: goto label_80317AF8;
    case 0x80317AFCu: goto label_80317AFC;
    case 0x80317B00u: goto label_80317B00;
    case 0x80317B04u: goto label_80317B04;
    case 0x80317B08u: goto label_80317B08;
    case 0x80317B0Cu: goto label_80317B0C;
    case 0x80317B10u: goto label_80317B10;
    case 0x80317B14u: goto label_80317B14;
    case 0x80317B18u: goto label_80317B18;
    case 0x80317B1Cu: goto label_80317B1C;
    case 0x80317B20u: goto label_80317B20;
    case 0x80317B24u: goto label_80317B24;
    case 0x80317B28u: goto label_80317B28;
    case 0x80317B2Cu: goto label_80317B2C;
    case 0x80317B30u: goto label_80317B30;
    case 0x80317B34u: goto label_80317B34;
    case 0x80317B38u: goto label_80317B38;
    case 0x80317B3Cu: goto label_80317B3C;
    case 0x80317B40u: goto label_80317B40;
    case 0x80317B44u: goto label_80317B44;
    case 0x80317B48u: goto label_80317B48;
    case 0x80317B4Cu: goto label_80317B4C;
    case 0x80317B50u: goto label_80317B50;
    case 0x80317B54u: goto label_80317B54;
    case 0x80317B58u: goto label_80317B58;
    case 0x80317B5Cu: goto label_80317B5C;
    case 0x80317B60u: goto label_80317B60;
    case 0x80317B64u: goto label_80317B64;
    case 0x80317B68u: goto label_80317B68;
    case 0x80317B6Cu: goto label_80317B6C;
    case 0x80317B70u: goto label_80317B70;
    case 0x80317B74u: goto label_80317B74;
    case 0x80317B78u: goto label_80317B78;
    case 0x80317B7Cu: goto label_80317B7C;
    case 0x80317B80u: goto label_80317B80;
    case 0x80317B84u: goto label_80317B84;
    case 0x80317B88u: goto label_80317B88;
    case 0x80317B8Cu: goto label_80317B8C;
    case 0x80317B90u: goto label_80317B90;
    case 0x80317B94u: goto label_80317B94;
    case 0x80317B98u: goto label_80317B98;
    case 0x80317B9Cu: goto label_80317B9C;
    case 0x80317BA0u: goto label_80317BA0;
    case 0x80317BA4u: goto label_80317BA4;
    case 0x80317BA8u: goto label_80317BA8;
    case 0x80317BACu: goto label_80317BAC;
    case 0x80317BB0u: goto label_80317BB0;
    case 0x80317BB4u: goto label_80317BB4;
    case 0x80317BB8u: goto label_80317BB8;
    case 0x80317BBCu: goto label_80317BBC;
    case 0x80317BC0u: goto label_80317BC0;
    case 0x80317BC4u: goto label_80317BC4;
    case 0x80317BC8u: goto label_80317BC8;
    case 0x80317BCCu: goto label_80317BCC;
    case 0x80317BD0u: goto label_80317BD0;
    case 0x80317BD4u: goto label_80317BD4;
    case 0x80317BD8u: goto label_80317BD8;
    case 0x80317BDCu: goto label_80317BDC;
    case 0x80317BE0u: goto label_80317BE0;
    case 0x80317BE4u: goto label_80317BE4;
    case 0x80317BE8u: goto label_80317BE8;
    case 0x80317BECu: goto label_80317BEC;
    case 0x80317BF0u: goto label_80317BF0;
    case 0x80317BF4u: goto label_80317BF4;
    case 0x80317BF8u: goto label_80317BF8;
    case 0x80317BFCu: goto label_80317BFC;
    case 0x80317C00u: goto label_80317C00;
    case 0x80317C04u: goto label_80317C04;
    case 0x80317C08u: goto label_80317C08;
    case 0x80317C0Cu: goto label_80317C0C;
    case 0x80317C10u: goto label_80317C10;
    case 0x80317C14u: goto label_80317C14;
    case 0x80317C18u: goto label_80317C18;
    case 0x80317C1Cu: goto label_80317C1C;
    case 0x80317C20u: goto label_80317C20;
    case 0x80317C24u: goto label_80317C24;
    case 0x80317C28u: goto label_80317C28;
    case 0x80317C2Cu: goto label_80317C2C;
    case 0x80317C30u: goto label_80317C30;
    case 0x80317C34u: goto label_80317C34;
    case 0x80317C38u: goto label_80317C38;
    case 0x80317C3Cu: goto label_80317C3C;
    case 0x80317C40u: goto label_80317C40;
    case 0x80317C44u: goto label_80317C44;
    case 0x80317C48u: goto label_80317C48;
    case 0x80317C4Cu: goto label_80317C4C;
    case 0x80317C50u: goto label_80317C50;
    case 0x80317C54u: goto label_80317C54;
    case 0x80317C58u: goto label_80317C58;
    case 0x80317C5Cu: goto label_80317C5C;
    case 0x80317C60u: goto label_80317C60;
    case 0x80317C64u: goto label_80317C64;
    case 0x80317C68u: goto label_80317C68;
    case 0x80317C6Cu: goto label_80317C6C;
    case 0x80317C70u: goto label_80317C70;
    case 0x80317C74u: goto label_80317C74;
    case 0x80317C78u: goto label_80317C78;
    case 0x80317C7Cu: goto label_80317C7C;
    case 0x80317C80u: goto label_80317C80;
    case 0x80317C84u: goto label_80317C84;
    case 0x80317C88u: goto label_80317C88;
    case 0x80317C8Cu: goto label_80317C8C;
    case 0x80317C90u: goto label_80317C90;
    case 0x80317C94u: goto label_80317C94;
    case 0x80317C98u: goto label_80317C98;
    case 0x80317C9Cu: goto label_80317C9C;
    case 0x80317CA0u: goto label_80317CA0;
    case 0x80317CA4u: goto label_80317CA4;
    case 0x80317CA8u: goto label_80317CA8;
    case 0x80317CACu: goto label_80317CAC;
    case 0x80317CB0u: goto label_80317CB0;
    case 0x80317CB4u: goto label_80317CB4;
    case 0x80317CB8u: goto label_80317CB8;
    case 0x80317CBCu: goto label_80317CBC;
    case 0x80317CC0u: goto label_80317CC0;
    case 0x80317CC4u: goto label_80317CC4;
    case 0x80317CC8u: goto label_80317CC8;
    case 0x80317CCCu: goto label_80317CCC;
    case 0x80317CD0u: goto label_80317CD0;
    case 0x80317CD4u: goto label_80317CD4;
    case 0x80317CD8u: goto label_80317CD8;
    case 0x80317CDCu: goto label_80317CDC;
    case 0x80317CE0u: goto label_80317CE0;
    case 0x80317CE4u: goto label_80317CE4;
    case 0x80317CE8u: goto label_80317CE8;
    case 0x80317CECu: goto label_80317CEC;
    case 0x80317CF0u: goto label_80317CF0;
    case 0x80317CF4u: goto label_80317CF4;
    case 0x80317CF8u: goto label_80317CF8;
    case 0x80317CFCu: goto label_80317CFC;
    case 0x80317D00u: goto label_80317D00;
    case 0x80317D04u: goto label_80317D04;
    case 0x80317D08u: goto label_80317D08;
    case 0x80317D0Cu: goto label_80317D0C;
    case 0x80317D10u: goto label_80317D10;
    case 0x80317D14u: goto label_80317D14;
    case 0x80317D18u: goto label_80317D18;
    case 0x80317D1Cu: goto label_80317D1C;
    case 0x80317D20u: goto label_80317D20;
    case 0x80317D24u: goto label_80317D24;
    case 0x80317D28u: goto label_80317D28;
    case 0x80317D2Cu: goto label_80317D2C;
    case 0x80317D30u: goto label_80317D30;
    case 0x80317D34u: goto label_80317D34;
    case 0x80317D38u: goto label_80317D38;
    case 0x80317D3Cu: goto label_80317D3C;
    case 0x80317D40u: goto label_80317D40;
    case 0x80317D44u: goto label_80317D44;
    case 0x80317D48u: goto label_80317D48;
    case 0x80317D4Cu: goto label_80317D4C;
    case 0x80317D50u: goto label_80317D50;
    case 0x80317D54u: goto label_80317D54;
    case 0x80317D58u: goto label_80317D58;
    case 0x80317D5Cu: goto label_80317D5C;
    case 0x80317D60u: goto label_80317D60;
    case 0x80317D64u: goto label_80317D64;
    case 0x80317D68u: goto label_80317D68;
    case 0x80317D6Cu: goto label_80317D6C;
    case 0x80317D70u: goto label_80317D70;
    case 0x80317D74u: goto label_80317D74;
    case 0x80317D78u: goto label_80317D78;
    case 0x80317D7Cu: goto label_80317D7C;
    case 0x80317D80u: goto label_80317D80;
    case 0x80317D84u: goto label_80317D84;
    case 0x80317D88u: goto label_80317D88;
    case 0x80317D8Cu: goto label_80317D8C;
    case 0x80317D90u: goto label_80317D90;
    case 0x80317D94u: goto label_80317D94;
    case 0x80317D98u: goto label_80317D98;
    case 0x80317D9Cu: goto label_80317D9C;
    case 0x80317DA0u: goto label_80317DA0;
    case 0x80317DA4u: goto label_80317DA4;
    case 0x80317DA8u: goto label_80317DA8;
    case 0x80317DACu: goto label_80317DAC;
    case 0x80317DB0u: goto label_80317DB0;
    case 0x80317DB4u: goto label_80317DB4;
    case 0x80317DB8u: goto label_80317DB8;
    case 0x80317DBCu: goto label_80317DBC;
    case 0x80317DC0u: goto label_80317DC0;
    case 0x80317DC4u: goto label_80317DC4;
    case 0x80317DC8u: goto label_80317DC8;
    case 0x80317DCCu: goto label_80317DCC;
    case 0x80317DD0u: goto label_80317DD0;
    case 0x80317DD4u: goto label_80317DD4;
    case 0x80317DD8u: goto label_80317DD8;
    case 0x80317DDCu: goto label_80317DDC;
    case 0x80317DE0u: goto label_80317DE0;
    case 0x80317DE4u: goto label_80317DE4;
    case 0x80317DE8u: goto label_80317DE8;
    case 0x80317DECu: goto label_80317DEC;
    case 0x80317DF0u: goto label_80317DF0;
    case 0x80317DF4u: goto label_80317DF4;
    case 0x80317DF8u: goto label_80317DF8;
    case 0x80317DFCu: goto label_80317DFC;
    case 0x80317E00u: goto label_80317E00;
    case 0x80317E04u: goto label_80317E04;
    case 0x80317E08u: goto label_80317E08;
    case 0x80317E0Cu: goto label_80317E0C;
    case 0x80317E10u: goto label_80317E10;
    case 0x80317E14u: goto label_80317E14;
    case 0x80317E18u: goto label_80317E18;
    case 0x80317E1Cu: goto label_80317E1C;
    case 0x80317E20u: goto label_80317E20;
    case 0x80317E24u: goto label_80317E24;
    case 0x80317E28u: goto label_80317E28;
    case 0x80317E2Cu: goto label_80317E2C;
    case 0x80317E30u: goto label_80317E30;
    case 0x80317E34u: goto label_80317E34;
    case 0x80317E38u: goto label_80317E38;
    case 0x80317E3Cu: goto label_80317E3C;
    case 0x80317E40u: goto label_80317E40;
    case 0x80317E44u: goto label_80317E44;
    case 0x80317E48u: goto label_80317E48;
    case 0x80317E4Cu: goto label_80317E4C;
    case 0x80317E50u: goto label_80317E50;
    case 0x80317E54u: goto label_80317E54;
    case 0x80317E58u: goto label_80317E58;
    case 0x80317E5Cu: goto label_80317E5C;
    case 0x80317E60u: goto label_80317E60;
    case 0x80317E64u: goto label_80317E64;
    case 0x80317E68u: goto label_80317E68;
    case 0x80317E6Cu: goto label_80317E6C;
    case 0x80317E70u: goto label_80317E70;
    case 0x80317E74u: goto label_80317E74;
    case 0x80317E78u: goto label_80317E78;
    case 0x80317E7Cu: goto label_80317E7C;
    case 0x80317E80u: goto label_80317E80;
    case 0x80317E84u: goto label_80317E84;
    case 0x80317E88u: goto label_80317E88;
    case 0x80317E8Cu: goto label_80317E8C;
    case 0x80317E90u: goto label_80317E90;
    case 0x80317E94u: goto label_80317E94;
    case 0x80317E98u: goto label_80317E98;
    case 0x80317E9Cu: goto label_80317E9C;
    case 0x80317EA0u: goto label_80317EA0;
    case 0x80317EA4u: goto label_80317EA4;
    case 0x80317EA8u: goto label_80317EA8;
    case 0x80317EACu: goto label_80317EAC;
    case 0x80317EB0u: goto label_80317EB0;
    case 0x80317EB4u: goto label_80317EB4;
    case 0x80317EB8u: goto label_80317EB8;
    case 0x80317EBCu: goto label_80317EBC;
    case 0x80317EC0u: goto label_80317EC0;
    case 0x80317EC4u: goto label_80317EC4;
    case 0x80317EC8u: goto label_80317EC8;
    case 0x80317ECCu: goto label_80317ECC;
    case 0x80317ED0u: goto label_80317ED0;
    case 0x80317ED4u: goto label_80317ED4;
    case 0x80317ED8u: goto label_80317ED8;
    case 0x80317EDCu: goto label_80317EDC;
    case 0x80317EE0u: goto label_80317EE0;
    case 0x80317EE4u: goto label_80317EE4;
    case 0x80317EE8u: goto label_80317EE8;
    case 0x80317EECu: goto label_80317EEC;
    case 0x80317EF0u: goto label_80317EF0;
    case 0x80317EF4u: goto label_80317EF4;
    case 0x80317EF8u: goto label_80317EF8;
    case 0x80317EFCu: goto label_80317EFC;
    case 0x80317F00u: goto label_80317F00;
    case 0x80317F04u: goto label_80317F04;
    case 0x80317F08u: goto label_80317F08;
    case 0x80317F0Cu: goto label_80317F0C;
    case 0x80317F10u: goto label_80317F10;
    case 0x80317F14u: goto label_80317F14;
    case 0x80317F18u: goto label_80317F18;
    case 0x80317F1Cu: goto label_80317F1C;
    case 0x80317F20u: goto label_80317F20;
    case 0x80317F24u: goto label_80317F24;
    case 0x80317F28u: goto label_80317F28;
    case 0x80317F2Cu: goto label_80317F2C;
    case 0x80317F30u: goto label_80317F30;
    case 0x80317F34u: goto label_80317F34;
    case 0x80317F38u: goto label_80317F38;
    case 0x80317F3Cu: goto label_80317F3C;
    case 0x80317F40u: goto label_80317F40;
    case 0x80317F44u: goto label_80317F44;
    case 0x80317F48u: goto label_80317F48;
    case 0x80317F4Cu: goto label_80317F4C;
    case 0x80317F50u: goto label_80317F50;
    case 0x80317F54u: goto label_80317F54;
    case 0x80317F58u: goto label_80317F58;
    case 0x80317F5Cu: goto label_80317F5C;
    case 0x80317F60u: goto label_80317F60;
    case 0x80317F64u: goto label_80317F64;
    case 0x80317F68u: goto label_80317F68;
    case 0x80317F6Cu: goto label_80317F6C;
    case 0x80317F70u: goto label_80317F70;
    case 0x80317F74u: goto label_80317F74;
    case 0x80317F78u: goto label_80317F78;
    case 0x80317F7Cu: goto label_80317F7C;
    case 0x80317F80u: goto label_80317F80;
    case 0x80317F84u: goto label_80317F84;
    case 0x80317F88u: goto label_80317F88;
    case 0x80317F8Cu: goto label_80317F8C;
    case 0x80317F90u: goto label_80317F90;
    case 0x80317F94u: goto label_80317F94;
    case 0x80317F98u: goto label_80317F98;
    case 0x80317F9Cu: goto label_80317F9C;
    case 0x80317FA0u: goto label_80317FA0;
    case 0x80317FA4u: goto label_80317FA4;
    case 0x80317FA8u: goto label_80317FA8;
    case 0x80317FACu: goto label_80317FAC;
    case 0x80317FB0u: goto label_80317FB0;
    case 0x80317FB4u: goto label_80317FB4;
    case 0x80317FB8u: goto label_80317FB8;
    case 0x80317FBCu: goto label_80317FBC;
    case 0x80317FC0u: goto label_80317FC0;
    case 0x80317FC4u: goto label_80317FC4;
    case 0x80317FC8u: goto label_80317FC8;
    case 0x80317FCCu: goto label_80317FCC;
    case 0x80317FD0u: goto label_80317FD0;
    case 0x80317FD4u: goto label_80317FD4;
    case 0x80317FD8u: goto label_80317FD8;
    case 0x80317FDCu: goto label_80317FDC;
    case 0x80317FE0u: goto label_80317FE0;
    case 0x80317FE4u: goto label_80317FE4;
    case 0x80317FE8u: goto label_80317FE8;
    case 0x80317FECu: goto label_80317FEC;
    case 0x80317FF0u: goto label_80317FF0;
    case 0x80317FF4u: goto label_80317FF4;
    case 0x80317FF8u: goto label_80317FF8;
    case 0x80317FFCu: goto label_80317FFC;
    case 0x80318000u: goto label_80318000;
    case 0x80318004u: goto label_80318004;
    case 0x80318008u: goto label_80318008;
    case 0x8031800Cu: goto label_8031800C;
    case 0x80318010u: goto label_80318010;
    case 0x80318014u: goto label_80318014;
    case 0x80318018u: goto label_80318018;
    case 0x8031801Cu: goto label_8031801C;
    case 0x80318020u: goto label_80318020;
    case 0x80318024u: goto label_80318024;
    case 0x80318028u: goto label_80318028;
    case 0x8031802Cu: goto label_8031802C;
    case 0x80318030u: goto label_80318030;
    case 0x80318034u: goto label_80318034;
    case 0x80318038u: goto label_80318038;
    case 0x8031803Cu: goto label_8031803C;
    case 0x80318040u: goto label_80318040;
    case 0x80318044u: goto label_80318044;
    case 0x80318048u: goto label_80318048;
    case 0x8031804Cu: goto label_8031804C;
    case 0x80318050u: goto label_80318050;
    case 0x80318054u: goto label_80318054;
    case 0x80318058u: goto label_80318058;
    case 0x8031805Cu: goto label_8031805C;
    case 0x80318060u: goto label_80318060;
    case 0x80318064u: goto label_80318064;
    case 0x80318068u: goto label_80318068;
    case 0x8031806Cu: goto label_8031806C;
    case 0x80318070u: goto label_80318070;
    case 0x80318074u: goto label_80318074;
    case 0x80318078u: goto label_80318078;
    case 0x8031807Cu: goto label_8031807C;
    case 0x80318080u: goto label_80318080;
    case 0x80318084u: goto label_80318084;
    case 0x80318088u: goto label_80318088;
    case 0x8031808Cu: goto label_8031808C;
    case 0x80318090u: goto label_80318090;
    case 0x80318094u: goto label_80318094;
    case 0x80318098u: goto label_80318098;
    case 0x8031809Cu: goto label_8031809C;
    case 0x803180A0u: goto label_803180A0;
    case 0x803180A4u: goto label_803180A4;
    case 0x803180A8u: goto label_803180A8;
    case 0x803180ACu: goto label_803180AC;
    case 0x803180B0u: goto label_803180B0;
    case 0x803180B4u: goto label_803180B4;
    case 0x803180B8u: goto label_803180B8;
    case 0x803180BCu: goto label_803180BC;
    case 0x803180C0u: goto label_803180C0;
    case 0x803180C4u: goto label_803180C4;
    case 0x803180C8u: goto label_803180C8;
    case 0x803180CCu: goto label_803180CC;
    case 0x803180D0u: goto label_803180D0;
    case 0x803180D4u: goto label_803180D4;
    case 0x803180D8u: goto label_803180D8;
    case 0x803180DCu: goto label_803180DC;
    case 0x803180E0u: goto label_803180E0;
    case 0x803180E4u: goto label_803180E4;
    case 0x803180E8u: goto label_803180E8;
    case 0x803180ECu: goto label_803180EC;
    case 0x803180F0u: goto label_803180F0;
    case 0x803180F4u: goto label_803180F4;
    case 0x803180F8u: goto label_803180F8;
    case 0x803180FCu: goto label_803180FC;
    case 0x80318100u: goto label_80318100;
    case 0x80318104u: goto label_80318104;
    case 0x80318108u: goto label_80318108;
    case 0x8031810Cu: goto label_8031810C;
    case 0x80318110u: goto label_80318110;
    case 0x80318114u: goto label_80318114;
    case 0x80318118u: goto label_80318118;
    case 0x8031811Cu: goto label_8031811C;
    case 0x80318120u: goto label_80318120;
    case 0x80318124u: goto label_80318124;
    case 0x80318128u: goto label_80318128;
    case 0x8031812Cu: goto label_8031812C;
    case 0x80318130u: goto label_80318130;
    case 0x80318134u: goto label_80318134;
    case 0x80318138u: goto label_80318138;
    case 0x8031813Cu: goto label_8031813C;
    case 0x80318140u: goto label_80318140;
    case 0x80318144u: goto label_80318144;
    case 0x80318148u: goto label_80318148;
    case 0x8031814Cu: goto label_8031814C;
    case 0x80318150u: goto label_80318150;
    case 0x80318154u: goto label_80318154;
    case 0x80318158u: goto label_80318158;
    case 0x8031815Cu: goto label_8031815C;
    case 0x80318160u: goto label_80318160;
    case 0x80318164u: goto label_80318164;
    case 0x80318168u: goto label_80318168;
    case 0x8031816Cu: goto label_8031816C;
    case 0x80318170u: goto label_80318170;
    case 0x80318174u: goto label_80318174;
    case 0x80318178u: goto label_80318178;
    case 0x8031817Cu: goto label_8031817C;
    case 0x80318180u: goto label_80318180;
    case 0x80318184u: goto label_80318184;
    case 0x80318188u: goto label_80318188;
    case 0x8031818Cu: goto label_8031818C;
    case 0x80318190u: goto label_80318190;
    case 0x80318194u: goto label_80318194;
    case 0x80318198u: goto label_80318198;
    case 0x8031819Cu: goto label_8031819C;
    case 0x803181A0u: goto label_803181A0;
    case 0x803181A4u: goto label_803181A4;
    case 0x803181A8u: goto label_803181A8;
    case 0x803181ACu: goto label_803181AC;
    case 0x803181B0u: goto label_803181B0;
    case 0x803181B4u: goto label_803181B4;
    case 0x803181B8u: goto label_803181B8;
    case 0x803181BCu: goto label_803181BC;
    case 0x803181C0u: goto label_803181C0;
    case 0x803181C4u: goto label_803181C4;
    case 0x803181C8u: goto label_803181C8;
    case 0x803181CCu: goto label_803181CC;
    case 0x803181D0u: goto label_803181D0;
    case 0x803181D4u: goto label_803181D4;
    case 0x803181D8u: goto label_803181D8;
    case 0x803181DCu: goto label_803181DC;
    case 0x803181E0u: goto label_803181E0;
    case 0x803181E4u: goto label_803181E4;
    case 0x803181E8u: goto label_803181E8;
    case 0x803181ECu: goto label_803181EC;
    case 0x803181F0u: goto label_803181F0;
    case 0x803181F4u: goto label_803181F4;
    case 0x803181F8u: goto label_803181F8;
    case 0x803181FCu: goto label_803181FC;
    case 0x80318200u: goto label_80318200;
    case 0x80318204u: goto label_80318204;
    case 0x80318208u: goto label_80318208;
    case 0x8031820Cu: goto label_8031820C;
    case 0x80318210u: goto label_80318210;
    case 0x80318214u: goto label_80318214;
    case 0x80318218u: goto label_80318218;
    case 0x8031821Cu: goto label_8031821C;
    case 0x80318220u: goto label_80318220;
    case 0x80318224u: goto label_80318224;
    case 0x80318228u: goto label_80318228;
    case 0x8031822Cu: goto label_8031822C;
    case 0x80318230u: goto label_80318230;
    case 0x80318234u: goto label_80318234;
    case 0x80318238u: goto label_80318238;
    case 0x8031823Cu: goto label_8031823C;
    case 0x80318240u: goto label_80318240;
    case 0x80318244u: goto label_80318244;
    case 0x80318248u: goto label_80318248;
    case 0x8031824Cu: goto label_8031824C;
    case 0x80318250u: goto label_80318250;
    case 0x80318254u: goto label_80318254;
    case 0x80318258u: goto label_80318258;
    case 0x8031825Cu: goto label_8031825C;
    case 0x80318260u: goto label_80318260;
    case 0x80318264u: goto label_80318264;
    case 0x80318268u: goto label_80318268;
    case 0x8031826Cu: goto label_8031826C;
    case 0x80318270u: goto label_80318270;
    case 0x80318274u: goto label_80318274;
    case 0x80318278u: goto label_80318278;
    case 0x8031827Cu: goto label_8031827C;
    case 0x80318280u: goto label_80318280;
    case 0x80318284u: goto label_80318284;
    case 0x80318288u: goto label_80318288;
    case 0x8031828Cu: goto label_8031828C;
    case 0x80318290u: goto label_80318290;
    case 0x80318294u: goto label_80318294;
    case 0x80318298u: goto label_80318298;
    case 0x8031829Cu: goto label_8031829C;
    case 0x803182A0u: goto label_803182A0;
    case 0x803182A4u: goto label_803182A4;
    case 0x803182A8u: goto label_803182A8;
    case 0x803182ACu: goto label_803182AC;
    case 0x803182B0u: goto label_803182B0;
    case 0x803182B4u: goto label_803182B4;
    case 0x803182B8u: goto label_803182B8;
    case 0x803182BCu: goto label_803182BC;
    case 0x803182C0u: goto label_803182C0;
    case 0x803182C4u: goto label_803182C4;
    case 0x803182C8u: goto label_803182C8;
    case 0x803182CCu: goto label_803182CC;
    case 0x803182D0u: goto label_803182D0;
    case 0x803182D4u: goto label_803182D4;
    case 0x803182D8u: goto label_803182D8;
    case 0x803182DCu: goto label_803182DC;
    case 0x803182E0u: goto label_803182E0;
    case 0x803182E4u: goto label_803182E4;
    case 0x803182E8u: goto label_803182E8;
    case 0x803182ECu: goto label_803182EC;
    case 0x803182F0u: goto label_803182F0;
    case 0x803182F4u: goto label_803182F4;
    case 0x803182F8u: goto label_803182F8;
    case 0x803182FCu: goto label_803182FC;
    case 0x80318300u: goto label_80318300;
    case 0x80318304u: goto label_80318304;
    case 0x80318308u: goto label_80318308;
    case 0x8031830Cu: goto label_8031830C;
    case 0x80318310u: goto label_80318310;
    case 0x80318314u: goto label_80318314;
    case 0x80318318u: goto label_80318318;
    case 0x8031831Cu: goto label_8031831C;
    case 0x80318320u: goto label_80318320;
    case 0x80318324u: goto label_80318324;
    case 0x80318328u: goto label_80318328;
    case 0x8031832Cu: goto label_8031832C;
    case 0x80318330u: goto label_80318330;
    case 0x80318334u: goto label_80318334;
    case 0x80318338u: goto label_80318338;
    case 0x8031833Cu: goto label_8031833C;
    case 0x80318340u: goto label_80318340;
    case 0x80318344u: goto label_80318344;
    case 0x80318348u: goto label_80318348;
    case 0x8031834Cu: goto label_8031834C;
    case 0x80318350u: goto label_80318350;
    case 0x80318354u: goto label_80318354;
    case 0x80318358u: goto label_80318358;
    case 0x8031835Cu: goto label_8031835C;
    case 0x80318360u: goto label_80318360;
    case 0x80318364u: goto label_80318364;
    case 0x80318368u: goto label_80318368;
    case 0x8031836Cu: goto label_8031836C;
    case 0x80318370u: goto label_80318370;
    case 0x80318374u: goto label_80318374;
    case 0x80318378u: goto label_80318378;
    case 0x8031837Cu: goto label_8031837C;
    case 0x80318380u: goto label_80318380;
    case 0x80318384u: goto label_80318384;
    case 0x80318388u: goto label_80318388;
    case 0x8031838Cu: goto label_8031838C;
    case 0x80318390u: goto label_80318390;
    case 0x80318394u: goto label_80318394;
    case 0x80318398u: goto label_80318398;
    case 0x8031839Cu: goto label_8031839C;
    case 0x803183A0u: goto label_803183A0;
    case 0x803183A4u: goto label_803183A4;
    case 0x803183A8u: goto label_803183A8;
    case 0x803183ACu: goto label_803183AC;
    case 0x803183B0u: goto label_803183B0;
    case 0x803183B4u: goto label_803183B4;
    case 0x803183B8u: goto label_803183B8;
    case 0x803183BCu: goto label_803183BC;
    case 0x803183C0u: goto label_803183C0;
    case 0x803183C4u: goto label_803183C4;
    case 0x803183C8u: goto label_803183C8;
    case 0x803183CCu: goto label_803183CC;
    case 0x803183D0u: goto label_803183D0;
    case 0x803183D4u: goto label_803183D4;
    case 0x803183D8u: goto label_803183D8;
    case 0x803183DCu: goto label_803183DC;
    case 0x803183E0u: goto label_803183E0;
    case 0x803183E4u: goto label_803183E4;
    case 0x803183E8u: goto label_803183E8;
    case 0x803183ECu: goto label_803183EC;
    case 0x803183F0u: goto label_803183F0;
    case 0x803183F4u: goto label_803183F4;
    case 0x803183F8u: goto label_803183F8;
    case 0x803183FCu: goto label_803183FC;
    case 0x80318400u: goto label_80318400;
    case 0x80318404u: goto label_80318404;
    case 0x80318408u: goto label_80318408;
    case 0x8031840Cu: goto label_8031840C;
    case 0x80318410u: goto label_80318410;
    case 0x80318414u: goto label_80318414;
    case 0x80318418u: goto label_80318418;
    case 0x8031841Cu: goto label_8031841C;
    case 0x80318420u: goto label_80318420;
    case 0x80318424u: goto label_80318424;
    case 0x80318428u: goto label_80318428;
    case 0x8031842Cu: goto label_8031842C;
    case 0x80318430u: goto label_80318430;
    case 0x80318434u: goto label_80318434;
    case 0x80318438u: goto label_80318438;
    case 0x8031843Cu: goto label_8031843C;
    case 0x80318440u: goto label_80318440;
    case 0x80318444u: goto label_80318444;
    case 0x80318448u: goto label_80318448;
    case 0x8031844Cu: goto label_8031844C;
    case 0x80318450u: goto label_80318450;
    case 0x80318454u: goto label_80318454;
    case 0x80318458u: goto label_80318458;
    case 0x8031845Cu: goto label_8031845C;
    case 0x80318460u: goto label_80318460;
    case 0x80318464u: goto label_80318464;
    case 0x80318468u: goto label_80318468;
    case 0x8031846Cu: goto label_8031846C;
    case 0x80318470u: goto label_80318470;
    case 0x80318474u: goto label_80318474;
    case 0x80318478u: goto label_80318478;
    case 0x8031847Cu: goto label_8031847C;
    case 0x80318480u: goto label_80318480;
    case 0x80318484u: goto label_80318484;
    case 0x80318488u: goto label_80318488;
    case 0x8031848Cu: goto label_8031848C;
    case 0x80318490u: goto label_80318490;
    case 0x80318494u: goto label_80318494;
    case 0x80318498u: goto label_80318498;
    case 0x8031849Cu: goto label_8031849C;
    case 0x803184A0u: goto label_803184A0;
    case 0x803184A4u: goto label_803184A4;
    case 0x803184A8u: goto label_803184A8;
    case 0x803184ACu: goto label_803184AC;
    case 0x803184B0u: goto label_803184B0;
    case 0x803184B4u: goto label_803184B4;
    case 0x803184B8u: goto label_803184B8;
    case 0x803184BCu: goto label_803184BC;
    case 0x803184C0u: goto label_803184C0;
    case 0x803184C4u: goto label_803184C4;
    case 0x803184C8u: goto label_803184C8;
    case 0x803184CCu: goto label_803184CC;
    case 0x803184D0u: goto label_803184D0;
    case 0x803184D4u: goto label_803184D4;
    case 0x803184D8u: goto label_803184D8;
    case 0x803184DCu: goto label_803184DC;
    case 0x803184E0u: goto label_803184E0;
    case 0x803184E4u: goto label_803184E4;
    case 0x803184E8u: goto label_803184E8;
    case 0x803184ECu: goto label_803184EC;
    case 0x803184F0u: goto label_803184F0;
    case 0x803184F4u: goto label_803184F4;
    case 0x803184F8u: goto label_803184F8;
    case 0x803184FCu: goto label_803184FC;
    case 0x80318500u: goto label_80318500;
    case 0x80318504u: goto label_80318504;
    case 0x80318508u: goto label_80318508;
    case 0x8031850Cu: goto label_8031850C;
    case 0x80318510u: goto label_80318510;
    case 0x80318514u: goto label_80318514;
    case 0x80318518u: goto label_80318518;
    case 0x8031851Cu: goto label_8031851C;
    case 0x80318520u: goto label_80318520;
    case 0x80318524u: goto label_80318524;
    case 0x80318528u: goto label_80318528;
    case 0x8031852Cu: goto label_8031852C;
    case 0x80318530u: goto label_80318530;
    case 0x80318534u: goto label_80318534;
    case 0x80318538u: goto label_80318538;
    case 0x8031853Cu: goto label_8031853C;
    case 0x80318540u: goto label_80318540;
    case 0x80318544u: goto label_80318544;
    case 0x80318548u: goto label_80318548;
    case 0x8031854Cu: goto label_8031854C;
    case 0x80318550u: goto label_80318550;
    case 0x80318554u: goto label_80318554;
    case 0x80318558u: goto label_80318558;
    case 0x8031855Cu: goto label_8031855C;
    case 0x80318560u: goto label_80318560;
    case 0x80318564u: goto label_80318564;
    case 0x80318568u: goto label_80318568;
    case 0x8031856Cu: goto label_8031856C;
    case 0x80318570u: goto label_80318570;
    case 0x80318574u: goto label_80318574;
    case 0x80318578u: goto label_80318578;
    case 0x8031857Cu: goto label_8031857C;
    case 0x80318580u: goto label_80318580;
    case 0x80318584u: goto label_80318584;
    case 0x80318588u: goto label_80318588;
    case 0x8031858Cu: goto label_8031858C;
    case 0x80318590u: goto label_80318590;
    case 0x80318594u: goto label_80318594;
    case 0x80318598u: goto label_80318598;
    case 0x8031859Cu: goto label_8031859C;
    case 0x803185A0u: goto label_803185A0;
    case 0x803185A4u: goto label_803185A4;
    case 0x803185A8u: goto label_803185A8;
    case 0x803185ACu: goto label_803185AC;
    case 0x803185B0u: goto label_803185B0;
    case 0x803185B4u: goto label_803185B4;
    case 0x803185B8u: goto label_803185B8;
    case 0x803185BCu: goto label_803185BC;
    case 0x803185C0u: goto label_803185C0;
    case 0x803185C4u: goto label_803185C4;
    case 0x803185C8u: goto label_803185C8;
    case 0x803185CCu: goto label_803185CC;
    case 0x803185D0u: goto label_803185D0;
    case 0x803185D4u: goto label_803185D4;
    case 0x803185D8u: goto label_803185D8;
    case 0x803185DCu: goto label_803185DC;
    case 0x803185E0u: goto label_803185E0;
    case 0x803185E4u: goto label_803185E4;
    case 0x803185E8u: goto label_803185E8;
    case 0x803185ECu: goto label_803185EC;
    case 0x803185F0u: goto label_803185F0;
    case 0x803185F4u: goto label_803185F4;
    case 0x803185F8u: goto label_803185F8;
    case 0x803185FCu: goto label_803185FC;
    case 0x80318600u: goto label_80318600;
    case 0x80318604u: goto label_80318604;
    case 0x80318608u: goto label_80318608;
    case 0x8031860Cu: goto label_8031860C;
    case 0x80318610u: goto label_80318610;
    case 0x80318614u: goto label_80318614;
    case 0x80318618u: goto label_80318618;
    case 0x8031861Cu: goto label_8031861C;
    case 0x80318620u: goto label_80318620;
    case 0x80318624u: goto label_80318624;
    case 0x80318628u: goto label_80318628;
    case 0x8031862Cu: goto label_8031862C;
    case 0x80318630u: goto label_80318630;
    case 0x80318634u: goto label_80318634;
    case 0x80318638u: goto label_80318638;
    case 0x8031863Cu: goto label_8031863C;
    case 0x80318640u: goto label_80318640;
    case 0x80318644u: goto label_80318644;
    case 0x80318648u: goto label_80318648;
    case 0x8031864Cu: goto label_8031864C;
    case 0x80318650u: goto label_80318650;
    case 0x80318654u: goto label_80318654;
    case 0x80318658u: goto label_80318658;
    case 0x8031865Cu: goto label_8031865C;
    case 0x80318660u: goto label_80318660;
    case 0x80318664u: goto label_80318664;
    case 0x80318668u: goto label_80318668;
    case 0x8031866Cu: goto label_8031866C;
    case 0x80318670u: goto label_80318670;
    case 0x80318674u: goto label_80318674;
    case 0x80318678u: goto label_80318678;
    case 0x8031867Cu: goto label_8031867C;
    case 0x80318680u: goto label_80318680;
    case 0x80318684u: goto label_80318684;
    case 0x80318688u: goto label_80318688;
    case 0x8031868Cu: goto label_8031868C;
    case 0x80318690u: goto label_80318690;
    case 0x80318694u: goto label_80318694;
    case 0x80318698u: goto label_80318698;
    case 0x8031869Cu: goto label_8031869C;
    case 0x803186A0u: goto label_803186A0;
    case 0x803186A4u: goto label_803186A4;
    case 0x803186A8u: goto label_803186A8;
    case 0x803186ACu: goto label_803186AC;
    case 0x803186B0u: goto label_803186B0;
    case 0x803186B4u: goto label_803186B4;
    case 0x803186B8u: goto label_803186B8;
    case 0x803186BCu: goto label_803186BC;
    case 0x803186C0u: goto label_803186C0;
    case 0x803186C4u: goto label_803186C4;
    case 0x803186C8u: goto label_803186C8;
    case 0x803186CCu: goto label_803186CC;
    case 0x803186D0u: goto label_803186D0;
    case 0x803186D4u: goto label_803186D4;
    case 0x803186D8u: goto label_803186D8;
    case 0x803186DCu: goto label_803186DC;
    case 0x803186E0u: goto label_803186E0;
    case 0x803186E4u: goto label_803186E4;
    case 0x803186E8u: goto label_803186E8;
    case 0x803186ECu: goto label_803186EC;
    case 0x803186F0u: goto label_803186F0;
    case 0x803186F4u: goto label_803186F4;
    case 0x803186F8u: goto label_803186F8;
    case 0x803186FCu: goto label_803186FC;
    case 0x80318700u: goto label_80318700;
    case 0x80318704u: goto label_80318704;
    case 0x80318708u: goto label_80318708;
    case 0x8031870Cu: goto label_8031870C;
    case 0x80318710u: goto label_80318710;
    case 0x80318714u: goto label_80318714;
    case 0x80318718u: goto label_80318718;
    case 0x8031871Cu: goto label_8031871C;
    case 0x80318720u: goto label_80318720;
    case 0x80318724u: goto label_80318724;
    case 0x80318728u: goto label_80318728;
    case 0x8031872Cu: goto label_8031872C;
    case 0x80318730u: goto label_80318730;
    case 0x80318734u: goto label_80318734;
    case 0x80318738u: goto label_80318738;
    case 0x8031873Cu: goto label_8031873C;
    case 0x80318740u: goto label_80318740;
    case 0x80318744u: goto label_80318744;
    case 0x80318748u: goto label_80318748;
    case 0x8031874Cu: goto label_8031874C;
    case 0x80318750u: goto label_80318750;
    case 0x80318754u: goto label_80318754;
    case 0x80318758u: goto label_80318758;
    case 0x8031875Cu: goto label_8031875C;
    case 0x80318760u: goto label_80318760;
    case 0x80318764u: goto label_80318764;
    case 0x80318768u: goto label_80318768;
    case 0x8031876Cu: goto label_8031876C;
    case 0x80318770u: goto label_80318770;
    case 0x80318774u: goto label_80318774;
    case 0x80318778u: goto label_80318778;
    case 0x8031877Cu: goto label_8031877C;
    case 0x80318780u: goto label_80318780;
    case 0x80318784u: goto label_80318784;
    case 0x80318788u: goto label_80318788;
    case 0x8031878Cu: goto label_8031878C;
    case 0x80318790u: goto label_80318790;
    case 0x80318794u: goto label_80318794;
    case 0x80318798u: goto label_80318798;
    case 0x8031879Cu: goto label_8031879C;
    case 0x803187A0u: goto label_803187A0;
    case 0x803187A4u: goto label_803187A4;
    case 0x803187A8u: goto label_803187A8;
    case 0x803187ACu: goto label_803187AC;
    case 0x803187B0u: goto label_803187B0;
    case 0x803187B4u: goto label_803187B4;
    case 0x803187B8u: goto label_803187B8;
    case 0x803187BCu: goto label_803187BC;
    case 0x803187C0u: goto label_803187C0;
    case 0x803187C4u: goto label_803187C4;
    case 0x803187C8u: goto label_803187C8;
    case 0x803187CCu: goto label_803187CC;
    case 0x803187D0u: goto label_803187D0;
    case 0x803187D4u: goto label_803187D4;
    case 0x803187D8u: goto label_803187D8;
    case 0x803187DCu: goto label_803187DC;
    case 0x803187E0u: goto label_803187E0;
    case 0x803187E4u: goto label_803187E4;
    case 0x803187E8u: goto label_803187E8;
    case 0x803187ECu: goto label_803187EC;
    case 0x803187F0u: goto label_803187F0;
    case 0x803187F4u: goto label_803187F4;
    case 0x803187F8u: goto label_803187F8;
    case 0x803187FCu: goto label_803187FC;
    case 0x80318800u: goto label_80318800;
    case 0x80318804u: goto label_80318804;
    case 0x80318808u: goto label_80318808;
    case 0x8031880Cu: goto label_8031880C;
    case 0x80318810u: goto label_80318810;
    case 0x80318814u: goto label_80318814;
    case 0x80318818u: goto label_80318818;
    case 0x8031881Cu: goto label_8031881C;
    case 0x80318820u: goto label_80318820;
    case 0x80318824u: goto label_80318824;
    case 0x80318828u: goto label_80318828;
    case 0x8031882Cu: goto label_8031882C;
    case 0x80318830u: goto label_80318830;
    case 0x80318834u: goto label_80318834;
    case 0x80318838u: goto label_80318838;
    case 0x8031883Cu: goto label_8031883C;
    case 0x80318840u: goto label_80318840;
    case 0x80318844u: goto label_80318844;
    case 0x80318848u: goto label_80318848;
    case 0x8031884Cu: goto label_8031884C;
    case 0x80318850u: goto label_80318850;
    case 0x80318854u: goto label_80318854;
    case 0x80318858u: goto label_80318858;
    case 0x8031885Cu: goto label_8031885C;
    case 0x80318860u: goto label_80318860;
    case 0x80318864u: goto label_80318864;
    case 0x80318868u: goto label_80318868;
    case 0x8031886Cu: goto label_8031886C;
    case 0x80318870u: goto label_80318870;
    case 0x80318874u: goto label_80318874;
    case 0x80318878u: goto label_80318878;
    case 0x8031887Cu: goto label_8031887C;
    case 0x80318880u: goto label_80318880;
    case 0x80318884u: goto label_80318884;
    case 0x80318888u: goto label_80318888;
    case 0x8031888Cu: goto label_8031888C;
    case 0x80318890u: goto label_80318890;
    case 0x80318894u: goto label_80318894;
    case 0x80318898u: goto label_80318898;
    case 0x8031889Cu: goto label_8031889C;
    case 0x803188A0u: goto label_803188A0;
    case 0x803188A4u: goto label_803188A4;
    case 0x803188A8u: goto label_803188A8;
    case 0x803188ACu: goto label_803188AC;
    case 0x803188B0u: goto label_803188B0;
    case 0x803188B4u: goto label_803188B4;
    case 0x803188B8u: goto label_803188B8;
    case 0x803188BCu: goto label_803188BC;
    case 0x803188C0u: goto label_803188C0;
    case 0x803188C4u: goto label_803188C4;
    case 0x803188C8u: goto label_803188C8;
    case 0x803188CCu: goto label_803188CC;
    case 0x803188D0u: goto label_803188D0;
    case 0x803188D4u: goto label_803188D4;
    case 0x803188D8u: goto label_803188D8;
    case 0x803188DCu: goto label_803188DC;
    case 0x803188E0u: goto label_803188E0;
    case 0x803188E4u: goto label_803188E4;
    case 0x803188E8u: goto label_803188E8;
    case 0x803188ECu: goto label_803188EC;
    case 0x803188F0u: goto label_803188F0;
    case 0x803188F4u: goto label_803188F4;
    case 0x803188F8u: goto label_803188F8;
    case 0x803188FCu: goto label_803188FC;
    case 0x80318900u: goto label_80318900;
    case 0x80318904u: goto label_80318904;
    case 0x80318908u: goto label_80318908;
    case 0x8031890Cu: goto label_8031890C;
    case 0x80318910u: goto label_80318910;
    case 0x80318914u: goto label_80318914;
    case 0x80318918u: goto label_80318918;
    case 0x8031891Cu: goto label_8031891C;
    case 0x80318920u: goto label_80318920;
    case 0x80318924u: goto label_80318924;
    case 0x80318928u: goto label_80318928;
    case 0x8031892Cu: goto label_8031892C;
    case 0x80318930u: goto label_80318930;
    case 0x80318934u: goto label_80318934;
    case 0x80318938u: goto label_80318938;
    case 0x8031893Cu: goto label_8031893C;
    case 0x80318940u: goto label_80318940;
    case 0x80318944u: goto label_80318944;
    case 0x80318948u: goto label_80318948;
    case 0x8031894Cu: goto label_8031894C;
    case 0x80318950u: goto label_80318950;
    case 0x80318954u: goto label_80318954;
    case 0x80318958u: goto label_80318958;
    case 0x8031895Cu: goto label_8031895C;
    case 0x80318960u: goto label_80318960;
    case 0x80318964u: goto label_80318964;
    case 0x80318968u: goto label_80318968;
    case 0x8031896Cu: goto label_8031896C;
    case 0x80318970u: goto label_80318970;
    case 0x80318974u: goto label_80318974;
    case 0x80318978u: goto label_80318978;
    case 0x8031897Cu: goto label_8031897C;
    case 0x80318980u: goto label_80318980;
    case 0x80318984u: goto label_80318984;
    case 0x80318988u: goto label_80318988;
    case 0x8031898Cu: goto label_8031898C;
    case 0x80318990u: goto label_80318990;
    case 0x80318994u: goto label_80318994;
    case 0x80318998u: goto label_80318998;
    case 0x8031899Cu: goto label_8031899C;
    case 0x803189A0u: goto label_803189A0;
    case 0x803189A4u: goto label_803189A4;
    case 0x803189A8u: goto label_803189A8;
    case 0x803189ACu: goto label_803189AC;
    case 0x803189B0u: goto label_803189B0;
    case 0x803189B4u: goto label_803189B4;
    case 0x803189B8u: goto label_803189B8;
    case 0x803189BCu: goto label_803189BC;
    case 0x803189C0u: goto label_803189C0;
    case 0x803189C4u: goto label_803189C4;
    case 0x803189C8u: goto label_803189C8;
    case 0x803189CCu: goto label_803189CC;
    case 0x803189D0u: goto label_803189D0;
    case 0x803189D4u: goto label_803189D4;
    case 0x803189D8u: goto label_803189D8;
    case 0x803189DCu: goto label_803189DC;
    case 0x803189E0u: goto label_803189E0;
    case 0x803189E4u: goto label_803189E4;
    case 0x803189E8u: goto label_803189E8;
    case 0x803189ECu: goto label_803189EC;
    case 0x803189F0u: goto label_803189F0;
    case 0x803189F4u: goto label_803189F4;
    case 0x803189F8u: goto label_803189F8;
    case 0x803189FCu: goto label_803189FC;
    case 0x80318A00u: goto label_80318A00;
    case 0x80318A04u: goto label_80318A04;
    case 0x80318A08u: goto label_80318A08;
    case 0x80318A0Cu: goto label_80318A0C;
    case 0x80318A10u: goto label_80318A10;
    case 0x80318A14u: goto label_80318A14;
    case 0x80318A18u: goto label_80318A18;
    case 0x80318A1Cu: goto label_80318A1C;
    case 0x80318A20u: goto label_80318A20;
    case 0x80318A24u: goto label_80318A24;
    case 0x80318A28u: goto label_80318A28;
    case 0x80318A2Cu: goto label_80318A2C;
    case 0x80318A30u: goto label_80318A30;
    case 0x80318A34u: goto label_80318A34;
    case 0x80318A38u: goto label_80318A38;
    case 0x80318A3Cu: goto label_80318A3C;
    case 0x80318A40u: goto label_80318A40;
    case 0x80318A44u: goto label_80318A44;
    case 0x80318A48u: goto label_80318A48;
    case 0x80318A4Cu: goto label_80318A4C;
    case 0x80318A50u: goto label_80318A50;
    case 0x80318A54u: goto label_80318A54;
    case 0x80318A58u: goto label_80318A58;
    case 0x80318A5Cu: goto label_80318A5C;
    case 0x80318A60u: goto label_80318A60;
    case 0x80318A64u: goto label_80318A64;
    case 0x80318A68u: goto label_80318A68;
    case 0x80318A6Cu: goto label_80318A6C;
    case 0x80318A70u: goto label_80318A70;
    case 0x80318A74u: goto label_80318A74;
    case 0x80318A78u: goto label_80318A78;
    case 0x80318A7Cu: goto label_80318A7C;
    case 0x80318A80u: goto label_80318A80;
    case 0x80318A84u: goto label_80318A84;
    case 0x80318A88u: goto label_80318A88;
    case 0x80318A8Cu: goto label_80318A8C;
    case 0x80318A90u: goto label_80318A90;
    case 0x80318A94u: goto label_80318A94;
    case 0x80318A98u: goto label_80318A98;
    case 0x80318A9Cu: goto label_80318A9C;
    case 0x80318AA0u: goto label_80318AA0;
    case 0x80318AA4u: goto label_80318AA4;
    case 0x80318AA8u: goto label_80318AA8;
    case 0x80318AACu: goto label_80318AAC;
    case 0x80318AB0u: goto label_80318AB0;
    case 0x80318AB4u: goto label_80318AB4;
    case 0x80318AB8u: goto label_80318AB8;
    case 0x80318ABCu: goto label_80318ABC;
    case 0x80318AC0u: goto label_80318AC0;
    case 0x80318AC4u: goto label_80318AC4;
    case 0x80318AC8u: goto label_80318AC8;
    case 0x80318ACCu: goto label_80318ACC;
    case 0x80318AD0u: goto label_80318AD0;
    case 0x80318AD4u: goto label_80318AD4;
    case 0x80318AD8u: goto label_80318AD8;
    case 0x80318ADCu: goto label_80318ADC;
    case 0x80318AE0u: goto label_80318AE0;
    case 0x80318AE4u: goto label_80318AE4;
    case 0x80318AE8u: goto label_80318AE8;
    case 0x80318AECu: goto label_80318AEC;
    case 0x80318AF0u: goto label_80318AF0;
    case 0x80318AF4u: goto label_80318AF4;
    case 0x80318AF8u: goto label_80318AF8;
    case 0x80318AFCu: goto label_80318AFC;
    case 0x80318B00u: goto label_80318B00;
    case 0x80318B04u: goto label_80318B04;
    case 0x80318B08u: goto label_80318B08;
    case 0x80318B0Cu: goto label_80318B0C;
    case 0x80318B10u: goto label_80318B10;
    case 0x80318B14u: goto label_80318B14;
    case 0x80318B18u: goto label_80318B18;
    case 0x80318B1Cu: goto label_80318B1C;
    case 0x80318B20u: goto label_80318B20;
    case 0x80318B24u: goto label_80318B24;
    case 0x80318B28u: goto label_80318B28;
    case 0x80318B2Cu: goto label_80318B2C;
    case 0x80318B30u: goto label_80318B30;
    case 0x80318B34u: goto label_80318B34;
    case 0x80318B38u: goto label_80318B38;
    case 0x80318B3Cu: goto label_80318B3C;
    case 0x80318B40u: goto label_80318B40;
    case 0x80318B44u: goto label_80318B44;
    case 0x80318B48u: goto label_80318B48;
    case 0x80318B4Cu: goto label_80318B4C;
    case 0x80318B50u: goto label_80318B50;
    case 0x80318B54u: goto label_80318B54;
    case 0x80318B58u: goto label_80318B58;
    case 0x80318B5Cu: goto label_80318B5C;
    case 0x80318B60u: goto label_80318B60;
    case 0x80318B64u: goto label_80318B64;
    case 0x80318B68u: goto label_80318B68;
    case 0x80318B6Cu: goto label_80318B6C;
    case 0x80318B70u: goto label_80318B70;
    case 0x80318B74u: goto label_80318B74;
    case 0x80318B78u: goto label_80318B78;
    case 0x80318B7Cu: goto label_80318B7C;
    case 0x80318B80u: goto label_80318B80;
    case 0x80318B84u: goto label_80318B84;
    case 0x80318B88u: goto label_80318B88;
    case 0x80318B8Cu: goto label_80318B8C;
    case 0x80318B90u: goto label_80318B90;
    case 0x80318B94u: goto label_80318B94;
    case 0x80318B98u: goto label_80318B98;
    case 0x80318B9Cu: goto label_80318B9C;
    case 0x80318BA0u: goto label_80318BA0;
    case 0x80318BA4u: goto label_80318BA4;
    case 0x80318BA8u: goto label_80318BA8;
    case 0x80318BACu: goto label_80318BAC;
    case 0x80318BB0u: goto label_80318BB0;
    case 0x80318BB4u: goto label_80318BB4;
    case 0x80318BB8u: goto label_80318BB8;
    case 0x80318BBCu: goto label_80318BBC;
    case 0x80318BC0u: goto label_80318BC0;
    case 0x80318BC4u: goto label_80318BC4;
    case 0x80318BC8u: goto label_80318BC8;
    case 0x80318BCCu: goto label_80318BCC;
    case 0x80318BD0u: goto label_80318BD0;
    case 0x80318BD4u: goto label_80318BD4;
    case 0x80318BD8u: goto label_80318BD8;
    case 0x80318BDCu: goto label_80318BDC;
    case 0x80318BE0u: goto label_80318BE0;
    case 0x80318BE4u: goto label_80318BE4;
    case 0x80318BE8u: goto label_80318BE8;
    case 0x80318BECu: goto label_80318BEC;
    case 0x80318BF0u: goto label_80318BF0;
    case 0x80318BF4u: goto label_80318BF4;
    case 0x80318BF8u: goto label_80318BF8;
    case 0x80318BFCu: goto label_80318BFC;
    case 0x80318C00u: goto label_80318C00;
    case 0x80318C04u: goto label_80318C04;
    case 0x80318C08u: goto label_80318C08;
    case 0x80318C0Cu: goto label_80318C0C;
    case 0x80318C10u: goto label_80318C10;
    case 0x80318C14u: goto label_80318C14;
    case 0x80318C18u: goto label_80318C18;
    case 0x80318C1Cu: goto label_80318C1C;
    case 0x80318C20u: goto label_80318C20;
    case 0x80318C24u: goto label_80318C24;
    case 0x80318C28u: goto label_80318C28;
    case 0x80318C2Cu: goto label_80318C2C;
    case 0x80318C30u: goto label_80318C30;
    case 0x80318C34u: goto label_80318C34;
    case 0x80318C38u: goto label_80318C38;
    case 0x80318C3Cu: goto label_80318C3C;
    case 0x80318C40u: goto label_80318C40;
    case 0x80318C44u: goto label_80318C44;
    case 0x80318C48u: goto label_80318C48;
    case 0x80318C4Cu: goto label_80318C4C;
    case 0x80318C50u: goto label_80318C50;
    case 0x80318C54u: goto label_80318C54;
    case 0x80318C58u: goto label_80318C58;
    case 0x80318C5Cu: goto label_80318C5C;
    case 0x80318C60u: goto label_80318C60;
    case 0x80318C64u: goto label_80318C64;
    case 0x80318C68u: goto label_80318C68;
    case 0x80318C6Cu: goto label_80318C6C;
    case 0x80318C70u: goto label_80318C70;
    case 0x80318C74u: goto label_80318C74;
    case 0x80318C78u: goto label_80318C78;
    case 0x80318C7Cu: goto label_80318C7C;
    case 0x80318C80u: goto label_80318C80;
    case 0x80318C84u: goto label_80318C84;
    case 0x80318C88u: goto label_80318C88;
    case 0x80318C8Cu: goto label_80318C8C;
    case 0x80318C90u: goto label_80318C90;
    case 0x80318C94u: goto label_80318C94;
    case 0x80318C98u: goto label_80318C98;
    case 0x80318C9Cu: goto label_80318C9C;
    case 0x80318CA0u: goto label_80318CA0;
    case 0x80318CA4u: goto label_80318CA4;
    case 0x80318CA8u: goto label_80318CA8;
    case 0x80318CACu: goto label_80318CAC;
    case 0x80318CB0u: goto label_80318CB0;
    case 0x80318CB4u: goto label_80318CB4;
    case 0x80318CB8u: goto label_80318CB8;
    case 0x80318CBCu: goto label_80318CBC;
    case 0x80318CC0u: goto label_80318CC0;
    case 0x80318CC4u: goto label_80318CC4;
    case 0x80318CC8u: goto label_80318CC8;
    case 0x80318CCCu: goto label_80318CCC;
    case 0x80318CD0u: goto label_80318CD0;
    case 0x80318CD4u: goto label_80318CD4;
    case 0x80318CD8u: goto label_80318CD8;
    case 0x80318CDCu: goto label_80318CDC;
    case 0x80318CE0u: goto label_80318CE0;
    case 0x80318CE4u: goto label_80318CE4;
    case 0x80318CE8u: goto label_80318CE8;
    case 0x80318CECu: goto label_80318CEC;
    case 0x80318CF0u: goto label_80318CF0;
    case 0x80318CF4u: goto label_80318CF4;
    case 0x80318CF8u: goto label_80318CF8;
    case 0x80318CFCu: goto label_80318CFC;
    case 0x80318D00u: goto label_80318D00;
    case 0x80318D04u: goto label_80318D04;
    case 0x80318D08u: goto label_80318D08;
    case 0x80318D0Cu: goto label_80318D0C;
    case 0x80318D10u: goto label_80318D10;
    case 0x80318D14u: goto label_80318D14;
    case 0x80318D18u: goto label_80318D18;
    case 0x80318D1Cu: goto label_80318D1C;
    case 0x80318D20u: goto label_80318D20;
    case 0x80318D24u: goto label_80318D24;
    case 0x80318D28u: goto label_80318D28;
    case 0x80318D2Cu: goto label_80318D2C;
    case 0x80318D30u: goto label_80318D30;
    case 0x80318D34u: goto label_80318D34;
    case 0x80318D38u: goto label_80318D38;
    case 0x80318D3Cu: goto label_80318D3C;
    case 0x80318D40u: goto label_80318D40;
    case 0x80318D44u: goto label_80318D44;
    case 0x80318D48u: goto label_80318D48;
    case 0x80318D4Cu: goto label_80318D4C;
    case 0x80318D50u: goto label_80318D50;
    case 0x80318D54u: goto label_80318D54;
    case 0x80318D58u: goto label_80318D58;
    case 0x80318D5Cu: goto label_80318D5C;
    case 0x80318D60u: goto label_80318D60;
    case 0x80318D64u: goto label_80318D64;
    case 0x80318D68u: goto label_80318D68;
    case 0x80318D6Cu: goto label_80318D6C;
    case 0x80318D70u: goto label_80318D70;
    case 0x80318D74u: goto label_80318D74;
    case 0x80318D78u: goto label_80318D78;
    case 0x80318D7Cu: goto label_80318D7C;
    case 0x80318D80u: goto label_80318D80;
    case 0x80318D84u: goto label_80318D84;
    case 0x80318D88u: goto label_80318D88;
    case 0x80318D8Cu: goto label_80318D8C;
    case 0x80318D90u: goto label_80318D90;
    case 0x80318D94u: goto label_80318D94;
    case 0x80318D98u: goto label_80318D98;
    case 0x80318D9Cu: goto label_80318D9C;
    case 0x80318DA0u: goto label_80318DA0;
    case 0x80318DA4u: goto label_80318DA4;
    case 0x80318DA8u: goto label_80318DA8;
    case 0x80318DACu: goto label_80318DAC;
    case 0x80318DB0u: goto label_80318DB0;
    case 0x80318DB4u: goto label_80318DB4;
    case 0x80318DB8u: goto label_80318DB8;
    case 0x80318DBCu: goto label_80318DBC;
    case 0x80318DC0u: goto label_80318DC0;
    case 0x80318DC4u: goto label_80318DC4;
    case 0x80318DC8u: goto label_80318DC8;
    case 0x80318DCCu: goto label_80318DCC;
    case 0x80318DD0u: goto label_80318DD0;
    case 0x80318DD4u: goto label_80318DD4;
    case 0x80318DD8u: goto label_80318DD8;
    case 0x80318DDCu: goto label_80318DDC;
    case 0x80318DE0u: goto label_80318DE0;
    case 0x80318DE4u: goto label_80318DE4;
    case 0x80318DE8u: goto label_80318DE8;
    case 0x80318DECu: goto label_80318DEC;
    case 0x80318DF0u: goto label_80318DF0;
    case 0x80318DF4u: goto label_80318DF4;
    case 0x80318DF8u: goto label_80318DF8;
    case 0x80318DFCu: goto label_80318DFC;
    case 0x80318E00u: goto label_80318E00;
    case 0x80318E04u: goto label_80318E04;
    case 0x80318E08u: goto label_80318E08;
    case 0x80318E0Cu: goto label_80318E0C;
    case 0x80318E10u: goto label_80318E10;
    case 0x80318E14u: goto label_80318E14;
    case 0x80318E18u: goto label_80318E18;
    case 0x80318E1Cu: goto label_80318E1C;
    case 0x80318E20u: goto label_80318E20;
    case 0x80318E24u: goto label_80318E24;
    case 0x80318E28u: goto label_80318E28;
    case 0x80318E2Cu: goto label_80318E2C;
    case 0x80318E30u: goto label_80318E30;
    case 0x80318E34u: goto label_80318E34;
    case 0x80318E38u: goto label_80318E38;
    case 0x80318E3Cu: goto label_80318E3C;
    case 0x80318E40u: goto label_80318E40;
    case 0x80318E44u: goto label_80318E44;
    case 0x80318E48u: goto label_80318E48;
    case 0x80318E4Cu: goto label_80318E4C;
    case 0x80318E50u: goto label_80318E50;
    case 0x80318E54u: goto label_80318E54;
    case 0x80318E58u: goto label_80318E58;
    case 0x80318E5Cu: goto label_80318E5C;
    case 0x80318E60u: goto label_80318E60;
    case 0x80318E64u: goto label_80318E64;
    case 0x80318E68u: goto label_80318E68;
    case 0x80318E6Cu: goto label_80318E6C;
    case 0x80318E70u: goto label_80318E70;
    case 0x80318E74u: goto label_80318E74;
    case 0x80318E78u: goto label_80318E78;
    case 0x80318E7Cu: goto label_80318E7C;
    case 0x80318E80u: goto label_80318E80;
    case 0x80318E84u: goto label_80318E84;
    case 0x80318E88u: goto label_80318E88;
    case 0x80318E8Cu: goto label_80318E8C;
    case 0x80318E90u: goto label_80318E90;
    case 0x80318E94u: goto label_80318E94;
    case 0x80318E98u: goto label_80318E98;
    case 0x80318E9Cu: goto label_80318E9C;
    case 0x80318EA0u: goto label_80318EA0;
    case 0x80318EA4u: goto label_80318EA4;
    case 0x80318EA8u: goto label_80318EA8;
    case 0x80318EACu: goto label_80318EAC;
    case 0x80318EB0u: goto label_80318EB0;
    case 0x80318EB4u: goto label_80318EB4;
    case 0x80318EB8u: goto label_80318EB8;
    case 0x80318EBCu: goto label_80318EBC;
    case 0x80318EC0u: goto label_80318EC0;
    case 0x80318EC4u: goto label_80318EC4;
    case 0x80318EC8u: goto label_80318EC8;
    case 0x80318ECCu: goto label_80318ECC;
    case 0x80318ED0u: goto label_80318ED0;
    case 0x80318ED4u: goto label_80318ED4;
    case 0x80318ED8u: goto label_80318ED8;
    case 0x80318EDCu: goto label_80318EDC;
    case 0x80318EE0u: goto label_80318EE0;
    case 0x80318EE4u: goto label_80318EE4;
    case 0x80318EE8u: goto label_80318EE8;
    case 0x80318EECu: goto label_80318EEC;
    case 0x80318EF0u: goto label_80318EF0;
    case 0x80318EF4u: goto label_80318EF4;
    case 0x80318EF8u: goto label_80318EF8;
    case 0x80318EFCu: goto label_80318EFC;
    case 0x80318F00u: goto label_80318F00;
    case 0x80318F04u: goto label_80318F04;
    case 0x80318F08u: goto label_80318F08;
    case 0x80318F0Cu: goto label_80318F0C;
    case 0x80318F10u: goto label_80318F10;
    case 0x80318F14u: goto label_80318F14;
    case 0x80318F18u: goto label_80318F18;
    case 0x80318F1Cu: goto label_80318F1C;
    case 0x80318F20u: goto label_80318F20;
    case 0x80318F24u: goto label_80318F24;
    case 0x80318F28u: goto label_80318F28;
    case 0x80318F2Cu: goto label_80318F2C;
    case 0x80318F30u: goto label_80318F30;
    case 0x80318F34u: goto label_80318F34;
    case 0x80318F38u: goto label_80318F38;
    case 0x80318F3Cu: goto label_80318F3C;
    case 0x80318F40u: goto label_80318F40;
    case 0x80318F44u: goto label_80318F44;
    case 0x80318F48u: goto label_80318F48;
    case 0x80318F4Cu: goto label_80318F4C;
    case 0x80318F50u: goto label_80318F50;
    case 0x80318F54u: goto label_80318F54;
    case 0x80318F58u: goto label_80318F58;
    case 0x80318F5Cu: goto label_80318F5C;
    case 0x80318F60u: goto label_80318F60;
    case 0x80318F64u: goto label_80318F64;
    case 0x80318F68u: goto label_80318F68;
    case 0x80318F6Cu: goto label_80318F6C;
    case 0x80318F70u: goto label_80318F70;
    case 0x80318F74u: goto label_80318F74;
    case 0x80318F78u: goto label_80318F78;
    case 0x80318F7Cu: goto label_80318F7C;
    case 0x80318F80u: goto label_80318F80;
    case 0x80318F84u: goto label_80318F84;
    case 0x80318F88u: goto label_80318F88;
    case 0x80318F8Cu: goto label_80318F8C;
    case 0x80318F90u: goto label_80318F90;
    case 0x80318F94u: goto label_80318F94;
    case 0x80318F98u: goto label_80318F98;
    case 0x80318F9Cu: goto label_80318F9C;
    case 0x80318FA0u: goto label_80318FA0;
    case 0x80318FA4u: goto label_80318FA4;
    case 0x80318FA8u: goto label_80318FA8;
    case 0x80318FACu: goto label_80318FAC;
    case 0x80318FB0u: goto label_80318FB0;
    case 0x80318FB4u: goto label_80318FB4;
    case 0x80318FB8u: goto label_80318FB8;
    case 0x80318FBCu: goto label_80318FBC;
    case 0x80318FC0u: goto label_80318FC0;
    case 0x80318FC4u: goto label_80318FC4;
    case 0x80318FC8u: goto label_80318FC8;
    case 0x80318FCCu: goto label_80318FCC;
    case 0x80318FD0u: goto label_80318FD0;
    case 0x80318FD4u: goto label_80318FD4;
    case 0x80318FD8u: goto label_80318FD8;
    case 0x80318FDCu: goto label_80318FDC;
    case 0x80318FE0u: goto label_80318FE0;
    case 0x80318FE4u: goto label_80318FE4;
    case 0x80318FE8u: goto label_80318FE8;
    case 0x80318FECu: goto label_80318FEC;
    case 0x80318FF0u: goto label_80318FF0;
    case 0x80318FF4u: goto label_80318FF4;
    case 0x80318FF8u: goto label_80318FF8;
    case 0x80318FFCu: goto label_80318FFC;
    case 0x80319000u: goto label_80319000;
    case 0x80319004u: goto label_80319004;
    case 0x80319008u: goto label_80319008;
    case 0x8031900Cu: goto label_8031900C;
    case 0x80319010u: goto label_80319010;
    case 0x80319014u: goto label_80319014;
    case 0x80319018u: goto label_80319018;
    case 0x8031901Cu: goto label_8031901C;
    case 0x80319020u: goto label_80319020;
    case 0x80319024u: goto label_80319024;
    case 0x80319028u: goto label_80319028;
    case 0x8031902Cu: goto label_8031902C;
    case 0x80319030u: goto label_80319030;
    case 0x80319034u: goto label_80319034;
    case 0x80319038u: goto label_80319038;
    case 0x8031903Cu: goto label_8031903C;
    case 0x80319040u: goto label_80319040;
    case 0x80319044u: goto label_80319044;
    case 0x80319048u: goto label_80319048;
    case 0x8031904Cu: goto label_8031904C;
    case 0x80319050u: goto label_80319050;
    case 0x80319054u: goto label_80319054;
    case 0x80319058u: goto label_80319058;
    case 0x8031905Cu: goto label_8031905C;
    case 0x80319060u: goto label_80319060;
    case 0x80319064u: goto label_80319064;
    case 0x80319068u: goto label_80319068;
    case 0x8031906Cu: goto label_8031906C;
    case 0x80319070u: goto label_80319070;
    case 0x80319074u: goto label_80319074;
    case 0x80319078u: goto label_80319078;
    case 0x8031907Cu: goto label_8031907C;
    case 0x80319080u: goto label_80319080;
    case 0x80319084u: goto label_80319084;
    case 0x80319088u: goto label_80319088;
    case 0x8031908Cu: goto label_8031908C;
    case 0x80319090u: goto label_80319090;
    case 0x80319094u: goto label_80319094;
    case 0x80319098u: goto label_80319098;
    case 0x8031909Cu: goto label_8031909C;
    case 0x803190A0u: goto label_803190A0;
    case 0x803190A4u: goto label_803190A4;
    case 0x803190A8u: goto label_803190A8;
    case 0x803190ACu: goto label_803190AC;
    case 0x803190B0u: goto label_803190B0;
    case 0x803190B4u: goto label_803190B4;
    case 0x803190B8u: goto label_803190B8;
    case 0x803190BCu: goto label_803190BC;
    case 0x803190C0u: goto label_803190C0;
    case 0x803190C4u: goto label_803190C4;
    case 0x803190C8u: goto label_803190C8;
    case 0x803190CCu: goto label_803190CC;
    case 0x803190D0u: goto label_803190D0;
    case 0x803190D4u: goto label_803190D4;
    case 0x803190D8u: goto label_803190D8;
    case 0x803190DCu: goto label_803190DC;
    case 0x803190E0u: goto label_803190E0;
    case 0x803190E4u: goto label_803190E4;
    case 0x803190E8u: goto label_803190E8;
    case 0x803190ECu: goto label_803190EC;
    case 0x803190F0u: goto label_803190F0;
    case 0x803190F4u: goto label_803190F4;
    case 0x803190F8u: goto label_803190F8;
    case 0x803190FCu: goto label_803190FC;
    case 0x80319100u: goto label_80319100;
    case 0x80319104u: goto label_80319104;
    case 0x80319108u: goto label_80319108;
    case 0x8031910Cu: goto label_8031910C;
    case 0x80319110u: goto label_80319110;
    case 0x80319114u: goto label_80319114;
    case 0x80319118u: goto label_80319118;
    case 0x8031911Cu: goto label_8031911C;
    case 0x80319120u: goto label_80319120;
    case 0x80319124u: goto label_80319124;
    case 0x80319128u: goto label_80319128;
    case 0x8031912Cu: goto label_8031912C;
    case 0x80319130u: goto label_80319130;
    case 0x80319134u: goto label_80319134;
    case 0x80319138u: goto label_80319138;
    case 0x8031913Cu: goto label_8031913C;
    case 0x80319140u: goto label_80319140;
    case 0x80319144u: goto label_80319144;
    case 0x80319148u: goto label_80319148;
    case 0x8031914Cu: goto label_8031914C;
    case 0x80319150u: goto label_80319150;
    case 0x80319154u: goto label_80319154;
    case 0x80319158u: goto label_80319158;
    case 0x8031915Cu: goto label_8031915C;
    case 0x80319160u: goto label_80319160;
    case 0x80319164u: goto label_80319164;
    case 0x80319168u: goto label_80319168;
    case 0x8031916Cu: goto label_8031916C;
    case 0x80319170u: goto label_80319170;
    case 0x80319174u: goto label_80319174;
    case 0x80319178u: goto label_80319178;
    case 0x8031917Cu: goto label_8031917C;
    case 0x80319180u: goto label_80319180;
    case 0x80319184u: goto label_80319184;
    case 0x80319188u: goto label_80319188;
    case 0x8031918Cu: goto label_8031918C;
    case 0x80319190u: goto label_80319190;
    case 0x80319194u: goto label_80319194;
    case 0x80319198u: goto label_80319198;
    case 0x8031919Cu: goto label_8031919C;
    case 0x803191A0u: goto label_803191A0;
    case 0x803191A4u: goto label_803191A4;
    case 0x803191A8u: goto label_803191A8;
    case 0x803191ACu: goto label_803191AC;
    case 0x803191B0u: goto label_803191B0;
    case 0x803191B4u: goto label_803191B4;
    case 0x803191B8u: goto label_803191B8;
    case 0x803191BCu: goto label_803191BC;
    case 0x803191C0u: goto label_803191C0;
    case 0x803191C4u: goto label_803191C4;
    case 0x803191C8u: goto label_803191C8;
    case 0x803191CCu: goto label_803191CC;
    case 0x803191D0u: goto label_803191D0;
    case 0x803191D4u: goto label_803191D4;
    case 0x803191D8u: goto label_803191D8;
    case 0x803191DCu: goto label_803191DC;
    case 0x803191E0u: goto label_803191E0;
    case 0x803191E4u: goto label_803191E4;
    case 0x803191E8u: goto label_803191E8;
    case 0x803191ECu: goto label_803191EC;
    case 0x803191F0u: goto label_803191F0;
    case 0x803191F4u: goto label_803191F4;
    case 0x803191F8u: goto label_803191F8;
    case 0x803191FCu: goto label_803191FC;
    case 0x80319200u: goto label_80319200;
    case 0x80319204u: goto label_80319204;
    case 0x80319208u: goto label_80319208;
    case 0x8031920Cu: goto label_8031920C;
    case 0x80319210u: goto label_80319210;
    case 0x80319214u: goto label_80319214;
    case 0x80319218u: goto label_80319218;
    case 0x8031921Cu: goto label_8031921C;
    case 0x80319220u: goto label_80319220;
    case 0x80319224u: goto label_80319224;
    case 0x80319228u: goto label_80319228;
    case 0x8031922Cu: goto label_8031922C;
    case 0x80319230u: goto label_80319230;
    case 0x80319234u: goto label_80319234;
    case 0x80319238u: goto label_80319238;
    case 0x8031923Cu: goto label_8031923C;
    case 0x80319240u: goto label_80319240;
    case 0x80319244u: goto label_80319244;
    case 0x80319248u: goto label_80319248;
    case 0x8031924Cu: goto label_8031924C;
    case 0x80319250u: goto label_80319250;
    case 0x80319254u: goto label_80319254;
    case 0x80319258u: goto label_80319258;
    case 0x8031925Cu: goto label_8031925C;
    case 0x80319260u: goto label_80319260;
    case 0x80319264u: goto label_80319264;
    case 0x80319268u: goto label_80319268;
    case 0x8031926Cu: goto label_8031926C;
    case 0x80319270u: goto label_80319270;
    case 0x80319274u: goto label_80319274;
    case 0x80319278u: goto label_80319278;
    case 0x8031927Cu: goto label_8031927C;
    case 0x80319280u: goto label_80319280;
    case 0x80319284u: goto label_80319284;
    case 0x80319288u: goto label_80319288;
    case 0x8031928Cu: goto label_8031928C;
    case 0x80319290u: goto label_80319290;
    case 0x80319294u: goto label_80319294;
    case 0x80319298u: goto label_80319298;
    case 0x8031929Cu: goto label_8031929C;
    case 0x803192A0u: goto label_803192A0;
    case 0x803192A4u: goto label_803192A4;
    case 0x803192A8u: goto label_803192A8;
    case 0x803192ACu: goto label_803192AC;
    case 0x803192B0u: goto label_803192B0;
    case 0x803192B4u: goto label_803192B4;
    case 0x803192B8u: goto label_803192B8;
    case 0x803192BCu: goto label_803192BC;
    case 0x803192C0u: goto label_803192C0;
    case 0x803192C4u: goto label_803192C4;
    case 0x803192C8u: goto label_803192C8;
    case 0x803192CCu: goto label_803192CC;
    case 0x803192D0u: goto label_803192D0;
    case 0x803192D4u: goto label_803192D4;
    case 0x803192D8u: goto label_803192D8;
    case 0x803192DCu: goto label_803192DC;
    case 0x803192E0u: goto label_803192E0;
    case 0x803192E4u: goto label_803192E4;
    case 0x803192E8u: goto label_803192E8;
    case 0x803192ECu: goto label_803192EC;
    case 0x803192F0u: goto label_803192F0;
    case 0x803192F4u: goto label_803192F4;
    case 0x803192F8u: goto label_803192F8;
    case 0x803192FCu: goto label_803192FC;
    case 0x80319300u: goto label_80319300;
    case 0x80319304u: goto label_80319304;
    case 0x80319308u: goto label_80319308;
    case 0x8031930Cu: goto label_8031930C;
    case 0x80319310u: goto label_80319310;
    case 0x80319314u: goto label_80319314;
    case 0x80319318u: goto label_80319318;
    case 0x8031931Cu: goto label_8031931C;
    case 0x80319320u: goto label_80319320;
    case 0x80319324u: goto label_80319324;
    case 0x80319328u: goto label_80319328;
    case 0x8031932Cu: goto label_8031932C;
    case 0x80319330u: goto label_80319330;
    case 0x80319334u: goto label_80319334;
    case 0x80319338u: goto label_80319338;
    case 0x8031933Cu: goto label_8031933C;
    case 0x80319340u: goto label_80319340;
    case 0x80319344u: goto label_80319344;
    case 0x80319348u: goto label_80319348;
    case 0x8031934Cu: goto label_8031934C;
    case 0x80319350u: goto label_80319350;
    case 0x80319354u: goto label_80319354;
    case 0x80319358u: goto label_80319358;
    case 0x8031935Cu: goto label_8031935C;
    case 0x80319360u: goto label_80319360;
    case 0x80319364u: goto label_80319364;
    case 0x80319368u: goto label_80319368;
    case 0x8031936Cu: goto label_8031936C;
    case 0x80319370u: goto label_80319370;
    case 0x80319374u: goto label_80319374;
    case 0x80319378u: goto label_80319378;
    case 0x8031937Cu: goto label_8031937C;
    case 0x80319380u: goto label_80319380;
    case 0x80319384u: goto label_80319384;
    case 0x80319388u: goto label_80319388;
    case 0x8031938Cu: goto label_8031938C;
    case 0x80319390u: goto label_80319390;
    case 0x80319394u: goto label_80319394;
    case 0x80319398u: goto label_80319398;
    case 0x8031939Cu: goto label_8031939C;
    case 0x803193A0u: goto label_803193A0;
    case 0x803193A4u: goto label_803193A4;
    case 0x803193A8u: goto label_803193A8;
    case 0x803193ACu: goto label_803193AC;
    case 0x803193B0u: goto label_803193B0;
    case 0x803193B4u: goto label_803193B4;
    case 0x803193B8u: goto label_803193B8;
    case 0x803193BCu: goto label_803193BC;
    case 0x803193C0u: goto label_803193C0;
    case 0x803193C4u: goto label_803193C4;
    case 0x803193C8u: goto label_803193C8;
    case 0x803193CCu: goto label_803193CC;
    case 0x803193D0u: goto label_803193D0;
    case 0x803193D4u: goto label_803193D4;
    case 0x803193D8u: goto label_803193D8;
    case 0x803193DCu: goto label_803193DC;
    case 0x803193E0u: goto label_803193E0;
    case 0x803193E4u: goto label_803193E4;
    case 0x803193E8u: goto label_803193E8;
    case 0x803193ECu: goto label_803193EC;
    case 0x803193F0u: goto label_803193F0;
    case 0x803193F4u: goto label_803193F4;
    case 0x803193F8u: goto label_803193F8;
    case 0x803193FCu: goto label_803193FC;
    case 0x80319400u: goto label_80319400;
    case 0x80319404u: goto label_80319404;
    case 0x80319408u: goto label_80319408;
    case 0x8031940Cu: goto label_8031940C;
    case 0x80319410u: goto label_80319410;
    case 0x80319414u: goto label_80319414;
    case 0x80319418u: goto label_80319418;
    case 0x8031941Cu: goto label_8031941C;
    case 0x80319420u: goto label_80319420;
    case 0x80319424u: goto label_80319424;
    case 0x80319428u: goto label_80319428;
    case 0x8031942Cu: goto label_8031942C;
    case 0x80319430u: goto label_80319430;
    case 0x80319434u: goto label_80319434;
    case 0x80319438u: goto label_80319438;
    case 0x8031943Cu: goto label_8031943C;
    case 0x80319440u: goto label_80319440;
    case 0x80319444u: goto label_80319444;
    case 0x80319448u: goto label_80319448;
    case 0x8031944Cu: goto label_8031944C;
    case 0x80319450u: goto label_80319450;
    case 0x80319454u: goto label_80319454;
    case 0x80319458u: goto label_80319458;
    case 0x8031945Cu: goto label_8031945C;
    case 0x80319460u: goto label_80319460;
    case 0x80319464u: goto label_80319464;
    case 0x80319468u: goto label_80319468;
    case 0x8031946Cu: goto label_8031946C;
    case 0x80319470u: goto label_80319470;
    case 0x80319474u: goto label_80319474;
    case 0x80319478u: goto label_80319478;
    case 0x8031947Cu: goto label_8031947C;
    case 0x80319480u: goto label_80319480;
    case 0x80319484u: goto label_80319484;
    case 0x80319488u: goto label_80319488;
    case 0x8031948Cu: goto label_8031948C;
    case 0x80319490u: goto label_80319490;
    case 0x80319494u: goto label_80319494;
    case 0x80319498u: goto label_80319498;
    case 0x8031949Cu: goto label_8031949C;
    case 0x803194A0u: goto label_803194A0;
    case 0x803194A4u: goto label_803194A4;
    case 0x803194A8u: goto label_803194A8;
    case 0x803194ACu: goto label_803194AC;
    case 0x803194B0u: goto label_803194B0;
    case 0x803194B4u: goto label_803194B4;
    case 0x803194B8u: goto label_803194B8;
    case 0x803194BCu: goto label_803194BC;
    case 0x803194C0u: goto label_803194C0;
    case 0x803194C4u: goto label_803194C4;
    case 0x803194C8u: goto label_803194C8;
    case 0x803194CCu: goto label_803194CC;
    case 0x803194D0u: goto label_803194D0;
    case 0x803194D4u: goto label_803194D4;
    case 0x803194D8u: goto label_803194D8;
    case 0x803194DCu: goto label_803194DC;
    case 0x803194E0u: goto label_803194E0;
    case 0x803194E4u: goto label_803194E4;
    case 0x803194E8u: goto label_803194E8;
    case 0x803194ECu: goto label_803194EC;
    case 0x803194F0u: goto label_803194F0;
    case 0x803194F4u: goto label_803194F4;
    case 0x803194F8u: goto label_803194F8;
    case 0x803194FCu: goto label_803194FC;
    case 0x80319500u: goto label_80319500;
    case 0x80319504u: goto label_80319504;
    case 0x80319508u: goto label_80319508;
    case 0x8031950Cu: goto label_8031950C;
    case 0x80319510u: goto label_80319510;
    case 0x80319514u: goto label_80319514;
    case 0x80319518u: goto label_80319518;
    case 0x8031951Cu: goto label_8031951C;
    case 0x80319520u: goto label_80319520;
    case 0x80319524u: goto label_80319524;
    case 0x80319528u: goto label_80319528;
    case 0x8031952Cu: goto label_8031952C;
    case 0x80319530u: goto label_80319530;
    case 0x80319534u: goto label_80319534;
    case 0x80319538u: goto label_80319538;
    case 0x8031953Cu: goto label_8031953C;
    case 0x80319540u: goto label_80319540;
    case 0x80319544u: goto label_80319544;
    case 0x80319548u: goto label_80319548;
    case 0x8031954Cu: goto label_8031954C;
    case 0x80319550u: goto label_80319550;
    case 0x80319554u: goto label_80319554;
    case 0x80319558u: goto label_80319558;
    case 0x8031955Cu: goto label_8031955C;
    case 0x80319560u: goto label_80319560;
    case 0x80319564u: goto label_80319564;
    case 0x80319568u: goto label_80319568;
    case 0x8031956Cu: goto label_8031956C;
    case 0x80319570u: goto label_80319570;
    case 0x80319574u: goto label_80319574;
    case 0x80319578u: goto label_80319578;
    case 0x8031957Cu: goto label_8031957C;
    case 0x80319580u: goto label_80319580;
    case 0x80319584u: goto label_80319584;
    case 0x80319588u: goto label_80319588;
    case 0x8031958Cu: goto label_8031958C;
    case 0x80319590u: goto label_80319590;
    case 0x80319594u: goto label_80319594;
    case 0x80319598u: goto label_80319598;
    case 0x8031959Cu: goto label_8031959C;
    case 0x803195A0u: goto label_803195A0;
    case 0x803195A4u: goto label_803195A4;
    case 0x803195A8u: goto label_803195A8;
    case 0x803195ACu: goto label_803195AC;
    case 0x803195B0u: goto label_803195B0;
    case 0x803195B4u: goto label_803195B4;
    case 0x803195B8u: goto label_803195B8;
    case 0x803195BCu: goto label_803195BC;
    case 0x803195C0u: goto label_803195C0;
    case 0x803195C4u: goto label_803195C4;
    case 0x803195C8u: goto label_803195C8;
    case 0x803195CCu: goto label_803195CC;
    case 0x803195D0u: goto label_803195D0;
    case 0x803195D4u: goto label_803195D4;
    case 0x803195D8u: goto label_803195D8;
    case 0x803195DCu: goto label_803195DC;
    case 0x803195E0u: goto label_803195E0;
    case 0x803195E4u: goto label_803195E4;
    case 0x803195E8u: goto label_803195E8;
    case 0x803195ECu: goto label_803195EC;
    case 0x803195F0u: goto label_803195F0;
    case 0x803195F4u: goto label_803195F4;
    case 0x803195F8u: goto label_803195F8;
    case 0x803195FCu: goto label_803195FC;
    case 0x80319600u: goto label_80319600;
    case 0x80319604u: goto label_80319604;
    case 0x80319608u: goto label_80319608;
    case 0x8031960Cu: goto label_8031960C;
    case 0x80319610u: goto label_80319610;
    case 0x80319614u: goto label_80319614;
    case 0x80319618u: goto label_80319618;
    case 0x8031961Cu: goto label_8031961C;
    case 0x80319620u: goto label_80319620;
    case 0x80319624u: goto label_80319624;
    case 0x80319628u: goto label_80319628;
    case 0x8031962Cu: goto label_8031962C;
    case 0x80319630u: goto label_80319630;
    case 0x80319634u: goto label_80319634;
    case 0x80319638u: goto label_80319638;
    case 0x8031963Cu: goto label_8031963C;
    case 0x80319640u: goto label_80319640;
    case 0x80319644u: goto label_80319644;
    case 0x80319648u: goto label_80319648;
    case 0x8031964Cu: goto label_8031964C;
    case 0x80319650u: goto label_80319650;
    case 0x80319654u: goto label_80319654;
    case 0x80319658u: goto label_80319658;
    case 0x8031965Cu: goto label_8031965C;
    case 0x80319660u: goto label_80319660;
    case 0x80319664u: goto label_80319664;
    case 0x80319668u: goto label_80319668;
    case 0x8031966Cu: goto label_8031966C;
    case 0x80319670u: goto label_80319670;
    case 0x80319674u: goto label_80319674;
    case 0x80319678u: goto label_80319678;
    case 0x8031967Cu: goto label_8031967C;
    case 0x80319680u: goto label_80319680;
    case 0x80319684u: goto label_80319684;
    case 0x80319688u: goto label_80319688;
    case 0x8031968Cu: goto label_8031968C;
    case 0x80319690u: goto label_80319690;
    case 0x80319694u: goto label_80319694;
    case 0x80319698u: goto label_80319698;
    case 0x8031969Cu: goto label_8031969C;
    case 0x803196A0u: goto label_803196A0;
    case 0x803196A4u: goto label_803196A4;
    case 0x803196A8u: goto label_803196A8;
    case 0x803196ACu: goto label_803196AC;
    case 0x803196B0u: goto label_803196B0;
    case 0x803196B4u: goto label_803196B4;
    case 0x803196B8u: goto label_803196B8;
    case 0x803196BCu: goto label_803196BC;
    case 0x803196C0u: goto label_803196C0;
    case 0x803196C4u: goto label_803196C4;
    case 0x803196C8u: goto label_803196C8;
    case 0x803196CCu: goto label_803196CC;
    case 0x803196D0u: goto label_803196D0;
    case 0x803196D4u: goto label_803196D4;
    case 0x803196D8u: goto label_803196D8;
    case 0x803196DCu: goto label_803196DC;
    case 0x803196E0u: goto label_803196E0;
    case 0x803196E4u: goto label_803196E4;
    case 0x803196E8u: goto label_803196E8;
    case 0x803196ECu: goto label_803196EC;
    case 0x803196F0u: goto label_803196F0;
    case 0x803196F4u: goto label_803196F4;
    case 0x803196F8u: goto label_803196F8;
    case 0x803196FCu: goto label_803196FC;
    case 0x80319700u: goto label_80319700;
    case 0x80319704u: goto label_80319704;
    case 0x80319708u: goto label_80319708;
    case 0x8031970Cu: goto label_8031970C;
    case 0x80319710u: goto label_80319710;
    case 0x80319714u: goto label_80319714;
    case 0x80319718u: goto label_80319718;
    case 0x8031971Cu: goto label_8031971C;
    case 0x80319720u: goto label_80319720;
    case 0x80319724u: goto label_80319724;
    case 0x80319728u: goto label_80319728;
    case 0x8031972Cu: goto label_8031972C;
    case 0x80319730u: goto label_80319730;
    case 0x80319734u: goto label_80319734;
    case 0x80319738u: goto label_80319738;
    case 0x8031973Cu: goto label_8031973C;
    case 0x80319740u: goto label_80319740;
    case 0x80319744u: goto label_80319744;
    case 0x80319748u: goto label_80319748;
    case 0x8031974Cu: goto label_8031974C;
    case 0x80319750u: goto label_80319750;
    case 0x80319754u: goto label_80319754;
    case 0x80319758u: goto label_80319758;
    case 0x8031975Cu: goto label_8031975C;
    case 0x80319760u: goto label_80319760;
    case 0x80319764u: goto label_80319764;
    case 0x80319768u: goto label_80319768;
    case 0x8031976Cu: goto label_8031976C;
    case 0x80319770u: goto label_80319770;
    case 0x80319774u: goto label_80319774;
    case 0x80319778u: goto label_80319778;
    case 0x8031977Cu: goto label_8031977C;
    case 0x80319780u: goto label_80319780;
    case 0x80319784u: goto label_80319784;
    case 0x80319788u: goto label_80319788;
    case 0x8031978Cu: goto label_8031978C;
    case 0x80319790u: goto label_80319790;
    case 0x80319794u: goto label_80319794;
    case 0x80319798u: goto label_80319798;
    case 0x8031979Cu: goto label_8031979C;
    case 0x803197A0u: goto label_803197A0;
    case 0x803197A4u: goto label_803197A4;
    case 0x803197A8u: goto label_803197A8;
    case 0x803197ACu: goto label_803197AC;
    case 0x803197B0u: goto label_803197B0;
    case 0x803197B4u: goto label_803197B4;
    case 0x803197B8u: goto label_803197B8;
    case 0x803197BCu: goto label_803197BC;
    case 0x803197C0u: goto label_803197C0;
    case 0x803197C4u: goto label_803197C4;
    case 0x803197C8u: goto label_803197C8;
    case 0x803197CCu: goto label_803197CC;
    case 0x803197D0u: goto label_803197D0;
    case 0x803197D4u: goto label_803197D4;
    case 0x803197D8u: goto label_803197D8;
    case 0x803197DCu: goto label_803197DC;
    case 0x803197E0u: goto label_803197E0;
    case 0x803197E4u: goto label_803197E4;
    case 0x803197E8u: goto label_803197E8;
    case 0x803197ECu: goto label_803197EC;
    case 0x803197F0u: goto label_803197F0;
    case 0x803197F4u: goto label_803197F4;
    case 0x803197F8u: goto label_803197F8;
    case 0x803197FCu: goto label_803197FC;
    case 0x80319800u: goto label_80319800;
    case 0x80319804u: goto label_80319804;
    case 0x80319808u: goto label_80319808;
    case 0x8031980Cu: goto label_8031980C;
    case 0x80319810u: goto label_80319810;
    case 0x80319814u: goto label_80319814;
    case 0x80319818u: goto label_80319818;
    case 0x8031981Cu: goto label_8031981C;
    case 0x80319820u: goto label_80319820;
    case 0x80319824u: goto label_80319824;
    case 0x80319828u: goto label_80319828;
    case 0x8031982Cu: goto label_8031982C;
    case 0x80319830u: goto label_80319830;
    case 0x80319834u: goto label_80319834;
    case 0x80319838u: goto label_80319838;
    case 0x8031983Cu: goto label_8031983C;
    case 0x80319840u: goto label_80319840;
    case 0x80319844u: goto label_80319844;
    case 0x80319848u: goto label_80319848;
    case 0x8031984Cu: goto label_8031984C;
    case 0x80319850u: goto label_80319850;
    case 0x80319854u: goto label_80319854;
    case 0x80319858u: goto label_80319858;
    case 0x8031985Cu: goto label_8031985C;
    case 0x80319860u: goto label_80319860;
    case 0x80319864u: goto label_80319864;
    case 0x80319868u: goto label_80319868;
    case 0x8031986Cu: goto label_8031986C;
    case 0x80319870u: goto label_80319870;
    case 0x80319874u: goto label_80319874;
    case 0x80319878u: goto label_80319878;
    case 0x8031987Cu: goto label_8031987C;
    case 0x80319880u: goto label_80319880;
    case 0x80319884u: goto label_80319884;
    case 0x80319888u: goto label_80319888;
    case 0x8031988Cu: goto label_8031988C;
    case 0x80319890u: goto label_80319890;
    case 0x80319894u: goto label_80319894;
    case 0x80319898u: goto label_80319898;
    case 0x8031989Cu: goto label_8031989C;
    case 0x803198A0u: goto label_803198A0;
    case 0x803198A4u: goto label_803198A4;
    case 0x803198A8u: goto label_803198A8;
    case 0x803198ACu: goto label_803198AC;
    case 0x803198B0u: goto label_803198B0;
    case 0x803198B4u: goto label_803198B4;
    case 0x803198B8u: goto label_803198B8;
    case 0x803198BCu: goto label_803198BC;
    case 0x803198C0u: goto label_803198C0;
    case 0x803198C4u: goto label_803198C4;
    case 0x803198C8u: goto label_803198C8;
    case 0x803198CCu: goto label_803198CC;
    case 0x803198D0u: goto label_803198D0;
    case 0x803198D4u: goto label_803198D4;
    case 0x803198D8u: goto label_803198D8;
    case 0x803198DCu: goto label_803198DC;
    case 0x803198E0u: goto label_803198E0;
    case 0x803198E4u: goto label_803198E4;
    case 0x803198E8u: goto label_803198E8;
    case 0x803198ECu: goto label_803198EC;
    case 0x803198F0u: goto label_803198F0;
    case 0x803198F4u: goto label_803198F4;
    case 0x803198F8u: goto label_803198F8;
    case 0x803198FCu: goto label_803198FC;
    case 0x80319900u: goto label_80319900;
    case 0x80319904u: goto label_80319904;
    case 0x80319908u: goto label_80319908;
    case 0x8031990Cu: goto label_8031990C;
    case 0x80319910u: goto label_80319910;
    case 0x80319914u: goto label_80319914;
    case 0x80319918u: goto label_80319918;
    case 0x8031991Cu: goto label_8031991C;
    case 0x80319920u: goto label_80319920;
    case 0x80319924u: goto label_80319924;
    case 0x80319928u: goto label_80319928;
    case 0x8031992Cu: goto label_8031992C;
    case 0x80319930u: goto label_80319930;
    case 0x80319934u: goto label_80319934;
    case 0x80319938u: goto label_80319938;
    case 0x8031993Cu: goto label_8031993C;
    case 0x80319940u: goto label_80319940;
    case 0x80319944u: goto label_80319944;
    case 0x80319948u: goto label_80319948;
    case 0x8031994Cu: goto label_8031994C;
    case 0x80319950u: goto label_80319950;
    case 0x80319954u: goto label_80319954;
    case 0x80319958u: goto label_80319958;
    case 0x8031995Cu: goto label_8031995C;
    case 0x80319960u: goto label_80319960;
    case 0x80319964u: goto label_80319964;
    case 0x80319968u: goto label_80319968;
    case 0x8031996Cu: goto label_8031996C;
    case 0x80319970u: goto label_80319970;
    case 0x80319974u: goto label_80319974;
    case 0x80319978u: goto label_80319978;
    case 0x8031997Cu: goto label_8031997C;
    case 0x80319980u: goto label_80319980;
    case 0x80319984u: goto label_80319984;
    case 0x80319988u: goto label_80319988;
    case 0x8031998Cu: goto label_8031998C;
    case 0x80319990u: goto label_80319990;
    case 0x80319994u: goto label_80319994;
    case 0x80319998u: goto label_80319998;
    case 0x8031999Cu: goto label_8031999C;
    case 0x803199A0u: goto label_803199A0;
    case 0x803199A4u: goto label_803199A4;
    case 0x803199A8u: goto label_803199A8;
    case 0x803199ACu: goto label_803199AC;
    case 0x803199B0u: goto label_803199B0;
    case 0x803199B4u: goto label_803199B4;
    case 0x803199B8u: goto label_803199B8;
    case 0x803199BCu: goto label_803199BC;
    case 0x803199C0u: goto label_803199C0;
    case 0x803199C4u: goto label_803199C4;
    case 0x803199C8u: goto label_803199C8;
    case 0x803199CCu: goto label_803199CC;
    case 0x803199D0u: goto label_803199D0;
    case 0x803199D4u: goto label_803199D4;
    case 0x803199D8u: goto label_803199D8;
    case 0x803199DCu: goto label_803199DC;
    case 0x803199E0u: goto label_803199E0;
    case 0x803199E4u: goto label_803199E4;
    case 0x803199E8u: goto label_803199E8;
    case 0x803199ECu: goto label_803199EC;
    case 0x803199F0u: goto label_803199F0;
    case 0x803199F4u: goto label_803199F4;
    case 0x803199F8u: goto label_803199F8;
    case 0x803199FCu: goto label_803199FC;
    case 0x80319A00u: goto label_80319A00;
    case 0x80319A04u: goto label_80319A04;
    case 0x80319A08u: goto label_80319A08;
    case 0x80319A0Cu: goto label_80319A0C;
    case 0x80319A10u: goto label_80319A10;
    case 0x80319A14u: goto label_80319A14;
    case 0x80319A18u: goto label_80319A18;
    case 0x80319A1Cu: goto label_80319A1C;
    case 0x80319A20u: goto label_80319A20;
    case 0x80319A24u: goto label_80319A24;
    case 0x80319A28u: goto label_80319A28;
    case 0x80319A2Cu: goto label_80319A2C;
    case 0x80319A30u: goto label_80319A30;
    case 0x80319A34u: goto label_80319A34;
    case 0x80319A38u: goto label_80319A38;
    case 0x80319A3Cu: goto label_80319A3C;
    case 0x80319A40u: goto label_80319A40;
    case 0x80319A44u: goto label_80319A44;
    case 0x80319A48u: goto label_80319A48;
    case 0x80319A4Cu: goto label_80319A4C;
    case 0x80319A50u: goto label_80319A50;
    case 0x80319A54u: goto label_80319A54;
    case 0x80319A58u: goto label_80319A58;
    case 0x80319A5Cu: goto label_80319A5C;
    case 0x80319A60u: goto label_80319A60;
    case 0x80319A64u: goto label_80319A64;
    case 0x80319A68u: goto label_80319A68;
    case 0x80319A6Cu: goto label_80319A6C;
    case 0x80319A70u: goto label_80319A70;
    case 0x80319A74u: goto label_80319A74;
    case 0x80319A78u: goto label_80319A78;
    case 0x80319A7Cu: goto label_80319A7C;
    case 0x80319A80u: goto label_80319A80;
    case 0x80319A84u: goto label_80319A84;
    case 0x80319A88u: goto label_80319A88;
    case 0x80319A8Cu: goto label_80319A8C;
    case 0x80319A90u: goto label_80319A90;
    case 0x80319A94u: goto label_80319A94;
    case 0x80319A98u: goto label_80319A98;
    case 0x80319A9Cu: goto label_80319A9C;
    case 0x80319AA0u: goto label_80319AA0;
    case 0x80319AA4u: goto label_80319AA4;
    case 0x80319AA8u: goto label_80319AA8;
    case 0x80319AACu: goto label_80319AAC;
    case 0x80319AB0u: goto label_80319AB0;
    case 0x80319AB4u: goto label_80319AB4;
    case 0x80319AB8u: goto label_80319AB8;
    case 0x80319ABCu: goto label_80319ABC;
    case 0x80319AC0u: goto label_80319AC0;
    case 0x80319AC4u: goto label_80319AC4;
    case 0x80319AC8u: goto label_80319AC8;
    case 0x80319ACCu: goto label_80319ACC;
    case 0x80319AD0u: goto label_80319AD0;
    case 0x80319AD4u: goto label_80319AD4;
    case 0x80319AD8u: goto label_80319AD8;
    case 0x80319ADCu: goto label_80319ADC;
    case 0x80319AE0u: goto label_80319AE0;
    case 0x80319AE4u: goto label_80319AE4;
    case 0x80319AE8u: goto label_80319AE8;
    case 0x80319AECu: goto label_80319AEC;
    case 0x80319AF0u: goto label_80319AF0;
    case 0x80319AF4u: goto label_80319AF4;
    case 0x80319AF8u: goto label_80319AF8;
    case 0x80319AFCu: goto label_80319AFC;
    case 0x80319B00u: goto label_80319B00;
    case 0x80319B04u: goto label_80319B04;
    case 0x80319B08u: goto label_80319B08;
    case 0x80319B0Cu: goto label_80319B0C;
    case 0x80319B10u: goto label_80319B10;
    case 0x80319B14u: goto label_80319B14;
    case 0x80319B18u: goto label_80319B18;
    case 0x80319B1Cu: goto label_80319B1C;
    case 0x80319B20u: goto label_80319B20;
    case 0x80319B24u: goto label_80319B24;
    case 0x80319B28u: goto label_80319B28;
    case 0x80319B2Cu: goto label_80319B2C;
    case 0x80319B30u: goto label_80319B30;
    case 0x80319B34u: goto label_80319B34;
    case 0x80319B38u: goto label_80319B38;
    case 0x80319B3Cu: goto label_80319B3C;
    case 0x80319B40u: goto label_80319B40;
    case 0x80319B44u: goto label_80319B44;
    case 0x80319B48u: goto label_80319B48;
    case 0x80319B4Cu: goto label_80319B4C;
    case 0x80319B50u: goto label_80319B50;
    case 0x80319B54u: goto label_80319B54;
    case 0x80319B58u: goto label_80319B58;
    case 0x80319B5Cu: goto label_80319B5C;
    case 0x80319B60u: goto label_80319B60;
    case 0x80319B64u: goto label_80319B64;
    case 0x80319B68u: goto label_80319B68;
    case 0x80319B6Cu: goto label_80319B6C;
    case 0x80319B70u: goto label_80319B70;
    case 0x80319B74u: goto label_80319B74;
    case 0x80319B78u: goto label_80319B78;
    case 0x80319B7Cu: goto label_80319B7C;
    case 0x80319B80u: goto label_80319B80;
    case 0x80319B84u: goto label_80319B84;
    case 0x80319B88u: goto label_80319B88;
    case 0x80319B8Cu: goto label_80319B8C;
    case 0x80319B90u: goto label_80319B90;
    case 0x80319B94u: goto label_80319B94;
    case 0x80319B98u: goto label_80319B98;
    case 0x80319B9Cu: goto label_80319B9C;
    case 0x80319BA0u: goto label_80319BA0;
    case 0x80319BA4u: goto label_80319BA4;
    case 0x80319BA8u: goto label_80319BA8;
    case 0x80319BACu: goto label_80319BAC;
    case 0x80319BB0u: goto label_80319BB0;
    case 0x80319BB4u: goto label_80319BB4;
    case 0x80319BB8u: goto label_80319BB8;
    case 0x80319BBCu: goto label_80319BBC;
    case 0x80319BC0u: goto label_80319BC0;
    case 0x80319BC4u: goto label_80319BC4;
    case 0x80319BC8u: goto label_80319BC8;
    case 0x80319BCCu: goto label_80319BCC;
    case 0x80319BD0u: goto label_80319BD0;
    case 0x80319BD4u: goto label_80319BD4;
    case 0x80319BD8u: goto label_80319BD8;
    case 0x80319BDCu: goto label_80319BDC;
    case 0x80319BE0u: goto label_80319BE0;
    case 0x80319BE4u: goto label_80319BE4;
    case 0x80319BE8u: goto label_80319BE8;
    case 0x80319BECu: goto label_80319BEC;
    case 0x80319BF0u: goto label_80319BF0;
    case 0x80319BF4u: goto label_80319BF4;
    case 0x80319BF8u: goto label_80319BF8;
    case 0x80319BFCu: goto label_80319BFC;
    case 0x80319C00u: goto label_80319C00;
    case 0x80319C04u: goto label_80319C04;
    case 0x80319C08u: goto label_80319C08;
    case 0x80319C0Cu: goto label_80319C0C;
    case 0x80319C10u: goto label_80319C10;
    case 0x80319C14u: goto label_80319C14;
    case 0x80319C18u: goto label_80319C18;
    case 0x80319C1Cu: goto label_80319C1C;
    case 0x80319C20u: goto label_80319C20;
    case 0x80319C24u: goto label_80319C24;
    case 0x80319C28u: goto label_80319C28;
    case 0x80319C2Cu: goto label_80319C2C;
    case 0x80319C30u: goto label_80319C30;
    case 0x80319C34u: goto label_80319C34;
    case 0x80319C38u: goto label_80319C38;
    case 0x80319C3Cu: goto label_80319C3C;
    case 0x80319C40u: goto label_80319C40;
    case 0x80319C44u: goto label_80319C44;
    case 0x80319C48u: goto label_80319C48;
    case 0x80319C4Cu: goto label_80319C4C;
    case 0x80319C50u: goto label_80319C50;
    case 0x80319C54u: goto label_80319C54;
    case 0x80319C58u: goto label_80319C58;
    case 0x80319C5Cu: goto label_80319C5C;
    case 0x80319C60u: goto label_80319C60;
    case 0x80319C64u: goto label_80319C64;
    case 0x80319C68u: goto label_80319C68;
    case 0x80319C6Cu: goto label_80319C6C;
    case 0x80319C70u: goto label_80319C70;
    case 0x80319C74u: goto label_80319C74;
    case 0x80319C78u: goto label_80319C78;
    case 0x80319C7Cu: goto label_80319C7C;
    case 0x80319C80u: goto label_80319C80;
    case 0x80319C84u: goto label_80319C84;
    case 0x80319C88u: goto label_80319C88;
    case 0x80319C8Cu: goto label_80319C8C;
    case 0x80319C90u: goto label_80319C90;
    case 0x80319C94u: goto label_80319C94;
    case 0x80319C98u: goto label_80319C98;
    case 0x80319C9Cu: goto label_80319C9C;
    case 0x80319CA0u: goto label_80319CA0;
    case 0x80319CA4u: goto label_80319CA4;
    case 0x80319CA8u: goto label_80319CA8;
    case 0x80319CACu: goto label_80319CAC;
    case 0x80319CB0u: goto label_80319CB0;
    case 0x80319CB4u: goto label_80319CB4;
    case 0x80319CB8u: goto label_80319CB8;
    case 0x80319CBCu: goto label_80319CBC;
    case 0x80319CC0u: goto label_80319CC0;
    case 0x80319CC4u: goto label_80319CC4;
    case 0x80319CC8u: goto label_80319CC8;
    case 0x80319CCCu: goto label_80319CCC;
    case 0x80319CD0u: goto label_80319CD0;
    case 0x80319CD4u: goto label_80319CD4;
    case 0x80319CD8u: goto label_80319CD8;
    case 0x80319CDCu: goto label_80319CDC;
    case 0x80319CE0u: goto label_80319CE0;
    case 0x80319CE4u: goto label_80319CE4;
    case 0x80319CE8u: goto label_80319CE8;
    case 0x80319CECu: goto label_80319CEC;
    case 0x80319CF0u: goto label_80319CF0;
    case 0x80319CF4u: goto label_80319CF4;
    case 0x80319CF8u: goto label_80319CF8;
    case 0x80319CFCu: goto label_80319CFC;
    case 0x80319D00u: goto label_80319D00;
    case 0x80319D04u: goto label_80319D04;
    case 0x80319D08u: goto label_80319D08;
    case 0x80319D0Cu: goto label_80319D0C;
    case 0x80319D10u: goto label_80319D10;
    case 0x80319D14u: goto label_80319D14;
    case 0x80319D18u: goto label_80319D18;
    case 0x80319D1Cu: goto label_80319D1C;
    case 0x80319D20u: goto label_80319D20;
    case 0x80319D24u: goto label_80319D24;
    case 0x80319D28u: goto label_80319D28;
    case 0x80319D2Cu: goto label_80319D2C;
    case 0x80319D30u: goto label_80319D30;
    case 0x80319D34u: goto label_80319D34;
    case 0x80319D38u: goto label_80319D38;
    case 0x80319D3Cu: goto label_80319D3C;
    case 0x80319D40u: goto label_80319D40;
    case 0x80319D44u: goto label_80319D44;
    case 0x80319D48u: goto label_80319D48;
    case 0x80319D4Cu: goto label_80319D4C;
    case 0x80319D50u: goto label_80319D50;
    case 0x80319D54u: goto label_80319D54;
    case 0x80319D58u: goto label_80319D58;
    case 0x80319D5Cu: goto label_80319D5C;
    case 0x80319D60u: goto label_80319D60;
    case 0x80319D64u: goto label_80319D64;
    case 0x80319D68u: goto label_80319D68;
    case 0x80319D6Cu: goto label_80319D6C;
    case 0x80319D70u: goto label_80319D70;
    case 0x80319D74u: goto label_80319D74;
    case 0x80319D78u: goto label_80319D78;
    case 0x80319D7Cu: goto label_80319D7C;
    case 0x80319D80u: goto label_80319D80;
    case 0x80319D84u: goto label_80319D84;
    case 0x80319D88u: goto label_80319D88;
    case 0x80319D8Cu: goto label_80319D8C;
    case 0x80319D90u: goto label_80319D90;
    case 0x80319D94u: goto label_80319D94;
    case 0x80319D98u: goto label_80319D98;
    case 0x80319D9Cu: goto label_80319D9C;
    case 0x80319DA0u: goto label_80319DA0;
    case 0x80319DA4u: goto label_80319DA4;
    case 0x80319DA8u: goto label_80319DA8;
    case 0x80319DACu: goto label_80319DAC;
    case 0x80319DB0u: goto label_80319DB0;
    case 0x80319DB4u: goto label_80319DB4;
    case 0x80319DB8u: goto label_80319DB8;
    case 0x80319DBCu: goto label_80319DBC;
    case 0x80319DC0u: goto label_80319DC0;
    case 0x80319DC4u: goto label_80319DC4;
    case 0x80319DC8u: goto label_80319DC8;
    case 0x80319DCCu: goto label_80319DCC;
    case 0x80319DD0u: goto label_80319DD0;
    case 0x80319DD4u: goto label_80319DD4;
    case 0x80319DD8u: goto label_80319DD8;
    case 0x80319DDCu: goto label_80319DDC;
    case 0x80319DE0u: goto label_80319DE0;
    case 0x80319DE4u: goto label_80319DE4;
    case 0x80319DE8u: goto label_80319DE8;
    case 0x80319DECu: goto label_80319DEC;
    case 0x80319DF0u: goto label_80319DF0;
    case 0x80319DF4u: goto label_80319DF4;
    case 0x80319DF8u: goto label_80319DF8;
    case 0x80319DFCu: goto label_80319DFC;
    case 0x80319E00u: goto label_80319E00;
    case 0x80319E04u: goto label_80319E04;
    case 0x80319E08u: goto label_80319E08;
    case 0x80319E0Cu: goto label_80319E0C;
    case 0x80319E10u: goto label_80319E10;
    case 0x80319E14u: goto label_80319E14;
    case 0x80319E18u: goto label_80319E18;
    case 0x80319E1Cu: goto label_80319E1C;
    case 0x80319E20u: goto label_80319E20;
    case 0x80319E24u: goto label_80319E24;
    case 0x80319E28u: goto label_80319E28;
    case 0x80319E2Cu: goto label_80319E2C;
    case 0x80319E30u: goto label_80319E30;
    case 0x80319E34u: goto label_80319E34;
    case 0x80319E38u: goto label_80319E38;
    case 0x80319E3Cu: goto label_80319E3C;
    case 0x80319E40u: goto label_80319E40;
    case 0x80319E44u: goto label_80319E44;
    case 0x80319E48u: goto label_80319E48;
    case 0x80319E4Cu: goto label_80319E4C;
    case 0x80319E50u: goto label_80319E50;
    case 0x80319E54u: goto label_80319E54;
    case 0x80319E58u: goto label_80319E58;
    case 0x80319E5Cu: goto label_80319E5C;
    case 0x80319E60u: goto label_80319E60;
    case 0x80319E64u: goto label_80319E64;
    case 0x80319E68u: goto label_80319E68;
    case 0x80319E6Cu: goto label_80319E6C;
    case 0x80319E70u: goto label_80319E70;
    case 0x80319E74u: goto label_80319E74;
    case 0x80319E78u: goto label_80319E78;
    case 0x80319E7Cu: goto label_80319E7C;
    case 0x80319E80u: goto label_80319E80;
    case 0x80319E84u: goto label_80319E84;
    case 0x80319E88u: goto label_80319E88;
    case 0x80319E8Cu: goto label_80319E8C;
    case 0x80319E90u: goto label_80319E90;
    case 0x80319E94u: goto label_80319E94;
    case 0x80319E98u: goto label_80319E98;
    case 0x80319E9Cu: goto label_80319E9C;
    case 0x80319EA0u: goto label_80319EA0;
    case 0x80319EA4u: goto label_80319EA4;
    case 0x80319EA8u: goto label_80319EA8;
    case 0x80319EACu: goto label_80319EAC;
    case 0x80319EB0u: goto label_80319EB0;
    case 0x80319EB4u: goto label_80319EB4;
    case 0x80319EB8u: goto label_80319EB8;
    case 0x80319EBCu: goto label_80319EBC;
    case 0x80319EC0u: goto label_80319EC0;
    case 0x80319EC4u: goto label_80319EC4;
    case 0x80319EC8u: goto label_80319EC8;
    case 0x80319ECCu: goto label_80319ECC;
    case 0x80319ED0u: goto label_80319ED0;
    case 0x80319ED4u: goto label_80319ED4;
    case 0x80319ED8u: goto label_80319ED8;
    case 0x80319EDCu: goto label_80319EDC;
    case 0x80319EE0u: goto label_80319EE0;
    case 0x80319EE4u: goto label_80319EE4;
    case 0x80319EE8u: goto label_80319EE8;
    case 0x80319EECu: goto label_80319EEC;
    case 0x80319EF0u: goto label_80319EF0;
    case 0x80319EF4u: goto label_80319EF4;
    case 0x80319EF8u: goto label_80319EF8;
    case 0x80319EFCu: goto label_80319EFC;
    case 0x80319F00u: goto label_80319F00;
    case 0x80319F04u: goto label_80319F04;
    case 0x80319F08u: goto label_80319F08;
    case 0x80319F0Cu: goto label_80319F0C;
    case 0x80319F10u: goto label_80319F10;
    case 0x80319F14u: goto label_80319F14;
    case 0x80319F18u: goto label_80319F18;
    case 0x80319F1Cu: goto label_80319F1C;
    case 0x80319F20u: goto label_80319F20;
    case 0x80319F24u: goto label_80319F24;
    case 0x80319F28u: goto label_80319F28;
    case 0x80319F2Cu: goto label_80319F2C;
    case 0x80319F30u: goto label_80319F30;
    case 0x80319F34u: goto label_80319F34;
    case 0x80319F38u: goto label_80319F38;
    case 0x80319F3Cu: goto label_80319F3C;
    case 0x80319F40u: goto label_80319F40;
    case 0x80319F44u: goto label_80319F44;
    case 0x80319F48u: goto label_80319F48;
    case 0x80319F4Cu: goto label_80319F4C;
    case 0x80319F50u: goto label_80319F50;
    case 0x80319F54u: goto label_80319F54;
    case 0x80319F58u: goto label_80319F58;
    case 0x80319F5Cu: goto label_80319F5C;
    case 0x80319F60u: goto label_80319F60;
    case 0x80319F64u: goto label_80319F64;
    case 0x80319F68u: goto label_80319F68;
    case 0x80319F6Cu: goto label_80319F6C;
    case 0x80319F70u: goto label_80319F70;
    case 0x80319F74u: goto label_80319F74;
    case 0x80319F78u: goto label_80319F78;
    case 0x80319F7Cu: goto label_80319F7C;
    case 0x80319F80u: goto label_80319F80;
    case 0x80319F84u: goto label_80319F84;
    case 0x80319F88u: goto label_80319F88;
    case 0x80319F8Cu: goto label_80319F8C;
    case 0x80319F90u: goto label_80319F90;
    case 0x80319F94u: goto label_80319F94;
    case 0x80319F98u: goto label_80319F98;
    case 0x80319F9Cu: goto label_80319F9C;
    case 0x80319FA0u: goto label_80319FA0;
    case 0x80319FA4u: goto label_80319FA4;
    case 0x80319FA8u: goto label_80319FA8;
    case 0x80319FACu: goto label_80319FAC;
    case 0x80319FB0u: goto label_80319FB0;
    case 0x80319FB4u: goto label_80319FB4;
    case 0x80319FB8u: goto label_80319FB8;
    case 0x80319FBCu: goto label_80319FBC;
    case 0x80319FC0u: goto label_80319FC0;
    case 0x80319FC4u: goto label_80319FC4;
    case 0x80319FC8u: goto label_80319FC8;
    case 0x80319FCCu: goto label_80319FCC;
    case 0x80319FD0u: goto label_80319FD0;
    case 0x80319FD4u: goto label_80319FD4;
    case 0x80319FD8u: goto label_80319FD8;
    case 0x80319FDCu: goto label_80319FDC;
    case 0x80319FE0u: goto label_80319FE0;
    case 0x80319FE4u: goto label_80319FE4;
    case 0x80319FE8u: goto label_80319FE8;
    case 0x80319FECu: goto label_80319FEC;
    case 0x80319FF0u: goto label_80319FF0;
    case 0x80319FF4u: goto label_80319FF4;
    case 0x80319FF8u: goto label_80319FF8;
    case 0x80319FFCu: goto label_80319FFC;
    case 0x8031A000u: goto label_8031A000;
    case 0x8031A004u: goto label_8031A004;
    case 0x8031A008u: goto label_8031A008;
    case 0x8031A00Cu: goto label_8031A00C;
    case 0x8031A010u: goto label_8031A010;
    case 0x8031A014u: goto label_8031A014;
    case 0x8031A018u: goto label_8031A018;
    case 0x8031A01Cu: goto label_8031A01C;
    case 0x8031A020u: goto label_8031A020;
    case 0x8031A024u: goto label_8031A024;
    case 0x8031A028u: goto label_8031A028;
    case 0x8031A02Cu: goto label_8031A02C;
    case 0x8031A030u: goto label_8031A030;
    case 0x8031A034u: goto label_8031A034;
    case 0x8031A038u: goto label_8031A038;
    case 0x8031A03Cu: goto label_8031A03C;
    case 0x8031A040u: goto label_8031A040;
    case 0x8031A044u: goto label_8031A044;
    case 0x8031A048u: goto label_8031A048;
    case 0x8031A04Cu: goto label_8031A04C;
    case 0x8031A050u: goto label_8031A050;
    case 0x8031A054u: goto label_8031A054;
    case 0x8031A058u: goto label_8031A058;
    case 0x8031A05Cu: goto label_8031A05C;
    case 0x8031A060u: goto label_8031A060;
    case 0x8031A064u: goto label_8031A064;
    case 0x8031A068u: goto label_8031A068;
    case 0x8031A06Cu: goto label_8031A06C;
    case 0x8031A070u: goto label_8031A070;
    case 0x8031A074u: goto label_8031A074;
    case 0x8031A078u: goto label_8031A078;
    case 0x8031A07Cu: goto label_8031A07C;
    case 0x8031A080u: goto label_8031A080;
    case 0x8031A084u: goto label_8031A084;
    case 0x8031A088u: goto label_8031A088;
    case 0x8031A08Cu: goto label_8031A08C;
    case 0x8031A090u: goto label_8031A090;
    case 0x8031A094u: goto label_8031A094;
    case 0x8031A098u: goto label_8031A098;
    case 0x8031A09Cu: goto label_8031A09C;
    case 0x8031A0A0u: goto label_8031A0A0;
    case 0x8031A0A4u: goto label_8031A0A4;
    case 0x8031A0A8u: goto label_8031A0A8;
    case 0x8031A0ACu: goto label_8031A0AC;
    case 0x8031A0B0u: goto label_8031A0B0;
    case 0x8031A0B4u: goto label_8031A0B4;
    case 0x8031A0B8u: goto label_8031A0B8;
    case 0x8031A0BCu: goto label_8031A0BC;
    case 0x8031A0C0u: goto label_8031A0C0;
    case 0x8031A0C4u: goto label_8031A0C4;
    case 0x8031A0C8u: goto label_8031A0C8;
    case 0x8031A0CCu: goto label_8031A0CC;
    case 0x8031A0D0u: goto label_8031A0D0;
    case 0x8031A0D4u: goto label_8031A0D4;
    case 0x8031A0D8u: goto label_8031A0D8;
    case 0x8031A0DCu: goto label_8031A0DC;
    case 0x8031A0E0u: goto label_8031A0E0;
    case 0x8031A0E4u: goto label_8031A0E4;
    case 0x8031A0E8u: goto label_8031A0E8;
    case 0x8031A0ECu: goto label_8031A0EC;
    case 0x8031A0F0u: goto label_8031A0F0;
    case 0x8031A0F4u: goto label_8031A0F4;
    case 0x8031A0F8u: goto label_8031A0F8;
    case 0x8031A0FCu: goto label_8031A0FC;
    case 0x8031A100u: goto label_8031A100;
    case 0x8031A104u: goto label_8031A104;
    case 0x8031A108u: goto label_8031A108;
    case 0x8031A10Cu: goto label_8031A10C;
    case 0x8031A110u: goto label_8031A110;
    case 0x8031A114u: goto label_8031A114;
    case 0x8031A118u: goto label_8031A118;
    case 0x8031A11Cu: goto label_8031A11C;
    case 0x8031A120u: goto label_8031A120;
    case 0x8031A124u: goto label_8031A124;
    case 0x8031A128u: goto label_8031A128;
    case 0x8031A12Cu: goto label_8031A12C;
    case 0x8031A130u: goto label_8031A130;
    case 0x8031A134u: goto label_8031A134;
    case 0x8031A138u: goto label_8031A138;
    case 0x8031A13Cu: goto label_8031A13C;
    case 0x8031A140u: goto label_8031A140;
    case 0x8031A144u: goto label_8031A144;
    case 0x8031A148u: goto label_8031A148;
    case 0x8031A14Cu: goto label_8031A14C;
    case 0x8031A150u: goto label_8031A150;
    case 0x8031A154u: goto label_8031A154;
    case 0x8031A158u: goto label_8031A158;
    case 0x8031A15Cu: goto label_8031A15C;
    case 0x8031A160u: goto label_8031A160;
    case 0x8031A164u: goto label_8031A164;
    case 0x8031A168u: goto label_8031A168;
    case 0x8031A16Cu: goto label_8031A16C;
    case 0x8031A170u: goto label_8031A170;
    case 0x8031A174u: goto label_8031A174;
    case 0x8031A178u: goto label_8031A178;
    case 0x8031A17Cu: goto label_8031A17C;
    case 0x8031A180u: goto label_8031A180;
    case 0x8031A184u: goto label_8031A184;
    case 0x8031A188u: goto label_8031A188;
    case 0x8031A18Cu: goto label_8031A18C;
    case 0x8031A190u: goto label_8031A190;
    case 0x8031A194u: goto label_8031A194;
    case 0x8031A198u: goto label_8031A198;
    case 0x8031A19Cu: goto label_8031A19C;
    case 0x8031A1A0u: goto label_8031A1A0;
    case 0x8031A1A4u: goto label_8031A1A4;
    case 0x8031A1A8u: goto label_8031A1A8;
    case 0x8031A1ACu: goto label_8031A1AC;
    case 0x8031A1B0u: goto label_8031A1B0;
    case 0x8031A1B4u: goto label_8031A1B4;
    case 0x8031A1B8u: goto label_8031A1B8;
    case 0x8031A1BCu: goto label_8031A1BC;
    case 0x8031A1C0u: goto label_8031A1C0;
    case 0x8031A1C4u: goto label_8031A1C4;
    case 0x8031A1C8u: goto label_8031A1C8;
    case 0x8031A1CCu: goto label_8031A1CC;
    case 0x8031A1D0u: goto label_8031A1D0;
    case 0x8031A1D4u: goto label_8031A1D4;
    case 0x8031A1D8u: goto label_8031A1D8;
    case 0x8031A1DCu: goto label_8031A1DC;
    case 0x8031A1E0u: goto label_8031A1E0;
    case 0x8031A1E4u: goto label_8031A1E4;
    case 0x8031A1E8u: goto label_8031A1E8;
    case 0x8031A1ECu: goto label_8031A1EC;
    case 0x8031A1F0u: goto label_8031A1F0;
    case 0x8031A1F4u: goto label_8031A1F4;
    case 0x8031A1F8u: goto label_8031A1F8;
    case 0x8031A1FCu: goto label_8031A1FC;
    case 0x8031A200u: goto label_8031A200;
    case 0x8031A204u: goto label_8031A204;
    case 0x8031A208u: goto label_8031A208;
    case 0x8031A20Cu: goto label_8031A20C;
    case 0x8031A210u: goto label_8031A210;
    case 0x8031A214u: goto label_8031A214;
    case 0x8031A218u: goto label_8031A218;
    case 0x8031A21Cu: goto label_8031A21C;
    case 0x8031A220u: goto label_8031A220;
    case 0x8031A224u: goto label_8031A224;
    case 0x8031A228u: goto label_8031A228;
    case 0x8031A22Cu: goto label_8031A22C;
    case 0x8031A230u: goto label_8031A230;
    case 0x8031A234u: goto label_8031A234;
    case 0x8031A238u: goto label_8031A238;
    case 0x8031A23Cu: goto label_8031A23C;
    case 0x8031A240u: goto label_8031A240;
    case 0x8031A244u: goto label_8031A244;
    case 0x8031A248u: goto label_8031A248;
    case 0x8031A24Cu: goto label_8031A24C;
    case 0x8031A250u: goto label_8031A250;
    case 0x8031A254u: goto label_8031A254;
    case 0x8031A258u: goto label_8031A258;
    case 0x8031A25Cu: goto label_8031A25C;
    case 0x8031A260u: goto label_8031A260;
    case 0x8031A264u: goto label_8031A264;
    case 0x8031A268u: goto label_8031A268;
    case 0x8031A26Cu: goto label_8031A26C;
    case 0x8031A270u: goto label_8031A270;
    case 0x8031A274u: goto label_8031A274;
    case 0x8031A278u: goto label_8031A278;
    case 0x8031A27Cu: goto label_8031A27C;
    case 0x8031A280u: goto label_8031A280;
    case 0x8031A284u: goto label_8031A284;
    case 0x8031A288u: goto label_8031A288;
    case 0x8031A28Cu: goto label_8031A28C;
    case 0x8031A290u: goto label_8031A290;
    case 0x8031A294u: goto label_8031A294;
    case 0x8031A298u: goto label_8031A298;
    case 0x8031A29Cu: goto label_8031A29C;
    case 0x8031A2A0u: goto label_8031A2A0;
    case 0x8031A2A4u: goto label_8031A2A4;
    case 0x8031A2A8u: goto label_8031A2A8;
    case 0x8031A2ACu: goto label_8031A2AC;
    case 0x8031A2B0u: goto label_8031A2B0;
    case 0x8031A2B4u: goto label_8031A2B4;
    case 0x8031A2B8u: goto label_8031A2B8;
    case 0x8031A2BCu: goto label_8031A2BC;
    case 0x8031A2C0u: goto label_8031A2C0;
    case 0x8031A2C4u: goto label_8031A2C4;
    case 0x8031A2C8u: goto label_8031A2C8;
    case 0x8031A2CCu: goto label_8031A2CC;
    case 0x8031A2D0u: goto label_8031A2D0;
    case 0x8031A2D4u: goto label_8031A2D4;
    case 0x8031A2D8u: goto label_8031A2D8;
    case 0x8031A2DCu: goto label_8031A2DC;
    case 0x8031A2E0u: goto label_8031A2E0;
    case 0x8031A2E4u: goto label_8031A2E4;
    case 0x8031A2E8u: goto label_8031A2E8;
    case 0x8031A2ECu: goto label_8031A2EC;
    case 0x8031A2F0u: goto label_8031A2F0;
    case 0x8031A2F4u: goto label_8031A2F4;
    case 0x8031A2F8u: goto label_8031A2F8;
    case 0x8031A2FCu: goto label_8031A2FC;
    case 0x8031A300u: goto label_8031A300;
    case 0x8031A304u: goto label_8031A304;
    case 0x8031A308u: goto label_8031A308;
    case 0x8031A30Cu: goto label_8031A30C;
    case 0x8031A310u: goto label_8031A310;
    case 0x8031A314u: goto label_8031A314;
    case 0x8031A318u: goto label_8031A318;
    case 0x8031A31Cu: goto label_8031A31C;
    case 0x8031A320u: goto label_8031A320;
    case 0x8031A324u: goto label_8031A324;
    case 0x8031A328u: goto label_8031A328;
    case 0x8031A32Cu: goto label_8031A32C;
    case 0x8031A330u: goto label_8031A330;
    case 0x8031A334u: goto label_8031A334;
    case 0x8031A338u: goto label_8031A338;
    case 0x8031A33Cu: goto label_8031A33C;
    case 0x8031A340u: goto label_8031A340;
    case 0x8031A344u: goto label_8031A344;
    case 0x8031A348u: goto label_8031A348;
    case 0x8031A34Cu: goto label_8031A34C;
    case 0x8031A350u: goto label_8031A350;
    case 0x8031A354u: goto label_8031A354;
    case 0x8031A358u: goto label_8031A358;
    case 0x8031A35Cu: goto label_8031A35C;
    case 0x8031A360u: goto label_8031A360;
    case 0x8031A364u: goto label_8031A364;
    case 0x8031A368u: goto label_8031A368;
    case 0x8031A36Cu: goto label_8031A36C;
    case 0x8031A370u: goto label_8031A370;
    case 0x8031A374u: goto label_8031A374;
    case 0x8031A378u: goto label_8031A378;
    case 0x8031A37Cu: goto label_8031A37C;
    case 0x8031A380u: goto label_8031A380;
    case 0x8031A384u: goto label_8031A384;
    case 0x8031A388u: goto label_8031A388;
    case 0x8031A38Cu: goto label_8031A38C;
    case 0x8031A390u: goto label_8031A390;
    case 0x8031A394u: goto label_8031A394;
    case 0x8031A398u: goto label_8031A398;
    case 0x8031A39Cu: goto label_8031A39C;
    case 0x8031A3A0u: goto label_8031A3A0;
    case 0x8031A3A4u: goto label_8031A3A4;
    case 0x8031A3A8u: goto label_8031A3A8;
    case 0x8031A3ACu: goto label_8031A3AC;
    case 0x8031A3B0u: goto label_8031A3B0;
    case 0x8031A3B4u: goto label_8031A3B4;
    case 0x8031A3B8u: goto label_8031A3B8;
    case 0x8031A3BCu: goto label_8031A3BC;
    case 0x8031A3C0u: goto label_8031A3C0;
    case 0x8031A3C4u: goto label_8031A3C4;
    case 0x8031A3C8u: goto label_8031A3C8;
    case 0x8031A3CCu: goto label_8031A3CC;
    case 0x8031A3D0u: goto label_8031A3D0;
    case 0x8031A3D4u: goto label_8031A3D4;
    case 0x8031A3D8u: goto label_8031A3D8;
    case 0x8031A3DCu: goto label_8031A3DC;
    case 0x8031A3E0u: goto label_8031A3E0;
    case 0x8031A3E4u: goto label_8031A3E4;
    case 0x8031A3E8u: goto label_8031A3E8;
    case 0x8031A3ECu: goto label_8031A3EC;
    case 0x8031A3F0u: goto label_8031A3F0;
    case 0x8031A3F4u: goto label_8031A3F4;
    case 0x8031A3F8u: goto label_8031A3F8;
    case 0x8031A3FCu: goto label_8031A3FC;
    case 0x8031A400u: goto label_8031A400;
    case 0x8031A404u: goto label_8031A404;
    case 0x8031A408u: goto label_8031A408;
    case 0x8031A40Cu: goto label_8031A40C;
    case 0x8031A410u: goto label_8031A410;
    case 0x8031A414u: goto label_8031A414;
    case 0x8031A418u: goto label_8031A418;
    case 0x8031A41Cu: goto label_8031A41C;
    case 0x8031A420u: goto label_8031A420;
    case 0x8031A424u: goto label_8031A424;
    case 0x8031A428u: goto label_8031A428;
    case 0x8031A42Cu: goto label_8031A42C;
    case 0x8031A430u: goto label_8031A430;
    case 0x8031A434u: goto label_8031A434;
    case 0x8031A438u: goto label_8031A438;
    case 0x8031A43Cu: goto label_8031A43C;
    case 0x8031A440u: goto label_8031A440;
    case 0x8031A444u: goto label_8031A444;
    case 0x8031A448u: goto label_8031A448;
    case 0x8031A44Cu: goto label_8031A44C;
    case 0x8031A450u: goto label_8031A450;
    case 0x8031A454u: goto label_8031A454;
    case 0x8031A458u: goto label_8031A458;
    case 0x8031A45Cu: goto label_8031A45C;
    case 0x8031A460u: goto label_8031A460;
    case 0x8031A464u: goto label_8031A464;
    case 0x8031A468u: goto label_8031A468;
    case 0x8031A46Cu: goto label_8031A46C;
    case 0x8031A470u: goto label_8031A470;
    case 0x8031A474u: goto label_8031A474;
    case 0x8031A478u: goto label_8031A478;
    case 0x8031A47Cu: goto label_8031A47C;
    case 0x8031A480u: goto label_8031A480;
    case 0x8031A484u: goto label_8031A484;
    case 0x8031A488u: goto label_8031A488;
    case 0x8031A48Cu: goto label_8031A48C;
    case 0x8031A490u: goto label_8031A490;
    case 0x8031A494u: goto label_8031A494;
    case 0x8031A498u: goto label_8031A498;
    case 0x8031A49Cu: goto label_8031A49C;
    case 0x8031A4A0u: goto label_8031A4A0;
    case 0x8031A4A4u: goto label_8031A4A4;
    case 0x8031A4A8u: goto label_8031A4A8;
    case 0x8031A4ACu: goto label_8031A4AC;
    case 0x8031A4B0u: goto label_8031A4B0;
    case 0x8031A4B4u: goto label_8031A4B4;
    case 0x8031A4B8u: goto label_8031A4B8;
    case 0x8031A4BCu: goto label_8031A4BC;
    case 0x8031A4C0u: goto label_8031A4C0;
    case 0x8031A4C4u: goto label_8031A4C4;
    case 0x8031A4C8u: goto label_8031A4C8;
    case 0x8031A4CCu: goto label_8031A4CC;
    case 0x8031A4D0u: goto label_8031A4D0;
    case 0x8031A4D4u: goto label_8031A4D4;
    case 0x8031A4D8u: goto label_8031A4D8;
    case 0x8031A4DCu: goto label_8031A4DC;
    case 0x8031A4E0u: goto label_8031A4E0;
    case 0x8031A4E4u: goto label_8031A4E4;
    case 0x8031A4E8u: goto label_8031A4E8;
    case 0x8031A4ECu: goto label_8031A4EC;
    case 0x8031A4F0u: goto label_8031A4F0;
    case 0x8031A4F4u: goto label_8031A4F4;
    case 0x8031A4F8u: goto label_8031A4F8;
    case 0x8031A4FCu: goto label_8031A4FC;
    case 0x8031A500u: goto label_8031A500;
    case 0x8031A504u: goto label_8031A504;
    case 0x8031A508u: goto label_8031A508;
    case 0x8031A50Cu: goto label_8031A50C;
    case 0x8031A510u: goto label_8031A510;
    case 0x8031A514u: goto label_8031A514;
    case 0x8031A518u: goto label_8031A518;
    case 0x8031A51Cu: goto label_8031A51C;
    case 0x8031A520u: goto label_8031A520;
    case 0x8031A524u: goto label_8031A524;
    case 0x8031A528u: goto label_8031A528;
    case 0x8031A52Cu: goto label_8031A52C;
    case 0x8031A530u: goto label_8031A530;
    case 0x8031A534u: goto label_8031A534;
    case 0x8031A538u: goto label_8031A538;
    case 0x8031A53Cu: goto label_8031A53C;
    case 0x8031A540u: goto label_8031A540;
    case 0x8031A544u: goto label_8031A544;
    case 0x8031A548u: goto label_8031A548;
    case 0x8031A54Cu: goto label_8031A54C;
    case 0x8031A550u: goto label_8031A550;
    case 0x8031A554u: goto label_8031A554;
    case 0x8031A558u: goto label_8031A558;
    case 0x8031A55Cu: goto label_8031A55C;
    case 0x8031A560u: goto label_8031A560;
    case 0x8031A564u: goto label_8031A564;
    case 0x8031A568u: goto label_8031A568;
    case 0x8031A56Cu: goto label_8031A56C;
    case 0x8031A570u: goto label_8031A570;
    case 0x8031A574u: goto label_8031A574;
    case 0x8031A578u: goto label_8031A578;
    case 0x8031A57Cu: goto label_8031A57C;
    case 0x8031A580u: goto label_8031A580;
    case 0x8031A584u: goto label_8031A584;
    case 0x8031A588u: goto label_8031A588;
    case 0x8031A58Cu: goto label_8031A58C;
    case 0x8031A590u: goto label_8031A590;
    case 0x8031A594u: goto label_8031A594;
    case 0x8031A598u: goto label_8031A598;
    case 0x8031A59Cu: goto label_8031A59C;
    case 0x8031A5A0u: goto label_8031A5A0;
    case 0x8031A5A4u: goto label_8031A5A4;
    case 0x8031A5A8u: goto label_8031A5A8;
    case 0x8031A5ACu: goto label_8031A5AC;
    case 0x8031A5B0u: goto label_8031A5B0;
    case 0x8031A5B4u: goto label_8031A5B4;
    case 0x8031A5B8u: goto label_8031A5B8;
    case 0x8031A5BCu: goto label_8031A5BC;
    case 0x8031A5C0u: goto label_8031A5C0;
    case 0x8031A5C4u: goto label_8031A5C4;
    case 0x8031A5C8u: goto label_8031A5C8;
    case 0x8031A5CCu: goto label_8031A5CC;
    case 0x8031A5D0u: goto label_8031A5D0;
    case 0x8031A5D4u: goto label_8031A5D4;
    case 0x8031A5D8u: goto label_8031A5D8;
    case 0x8031A5DCu: goto label_8031A5DC;
    case 0x8031A5E0u: goto label_8031A5E0;
    case 0x8031A5E4u: goto label_8031A5E4;
    case 0x8031A5E8u: goto label_8031A5E8;
    case 0x8031A5ECu: goto label_8031A5EC;
    case 0x8031A5F0u: goto label_8031A5F0;
    case 0x8031A5F4u: goto label_8031A5F4;
    case 0x8031A5F8u: goto label_8031A5F8;
    case 0x8031A5FCu: goto label_8031A5FC;
    case 0x8031A600u: goto label_8031A600;
    case 0x8031A604u: goto label_8031A604;
    case 0x8031A608u: goto label_8031A608;
    case 0x8031A60Cu: goto label_8031A60C;
    case 0x8031A610u: goto label_8031A610;
    case 0x8031A614u: goto label_8031A614;
    case 0x8031A618u: goto label_8031A618;
    case 0x8031A61Cu: goto label_8031A61C;
    case 0x8031A620u: goto label_8031A620;
    case 0x8031A624u: goto label_8031A624;
    case 0x8031A628u: goto label_8031A628;
    case 0x8031A62Cu: goto label_8031A62C;
    case 0x8031A630u: goto label_8031A630;
    case 0x8031A634u: goto label_8031A634;
    case 0x8031A638u: goto label_8031A638;
    case 0x8031A63Cu: goto label_8031A63C;
    case 0x8031A640u: goto label_8031A640;
    case 0x8031A644u: goto label_8031A644;
    case 0x8031A648u: goto label_8031A648;
    case 0x8031A64Cu: goto label_8031A64C;
    case 0x8031A650u: goto label_8031A650;
    case 0x8031A654u: goto label_8031A654;
    case 0x8031A658u: goto label_8031A658;
    case 0x8031A65Cu: goto label_8031A65C;
    case 0x8031A660u: goto label_8031A660;
    case 0x8031A664u: goto label_8031A664;
    case 0x8031A668u: goto label_8031A668;
    case 0x8031A66Cu: goto label_8031A66C;
    case 0x8031A670u: goto label_8031A670;
    case 0x8031A674u: goto label_8031A674;
    case 0x8031A678u: goto label_8031A678;
    case 0x8031A67Cu: goto label_8031A67C;
    case 0x8031A680u: goto label_8031A680;
    case 0x8031A684u: goto label_8031A684;
    case 0x8031A688u: goto label_8031A688;
    case 0x8031A68Cu: goto label_8031A68C;
    case 0x8031A690u: goto label_8031A690;
    case 0x8031A694u: goto label_8031A694;
    case 0x8031A698u: goto label_8031A698;
    case 0x8031A69Cu: goto label_8031A69C;
    case 0x8031A6A0u: goto label_8031A6A0;
    case 0x8031A6A4u: goto label_8031A6A4;
    case 0x8031A6A8u: goto label_8031A6A8;
    case 0x8031A6ACu: goto label_8031A6AC;
    case 0x8031A6B0u: goto label_8031A6B0;
    case 0x8031A6B4u: goto label_8031A6B4;
    case 0x8031A6B8u: goto label_8031A6B8;
    case 0x8031A6BCu: goto label_8031A6BC;
    case 0x8031A6C0u: goto label_8031A6C0;
    case 0x8031A6C4u: goto label_8031A6C4;
    case 0x8031A6C8u: goto label_8031A6C8;
    case 0x8031A6CCu: goto label_8031A6CC;
    case 0x8031A6D0u: goto label_8031A6D0;
    case 0x8031A6D4u: goto label_8031A6D4;
    case 0x8031A6D8u: goto label_8031A6D8;
    case 0x8031A6DCu: goto label_8031A6DC;
    case 0x8031A6E0u: goto label_8031A6E0;
    case 0x8031A6E4u: goto label_8031A6E4;
    case 0x8031A6E8u: goto label_8031A6E8;
    case 0x8031A6ECu: goto label_8031A6EC;
    case 0x8031A6F0u: goto label_8031A6F0;
    case 0x8031A6F4u: goto label_8031A6F4;
    case 0x8031A6F8u: goto label_8031A6F8;
    case 0x8031A6FCu: goto label_8031A6FC;
    case 0x8031A700u: goto label_8031A700;
    case 0x8031A704u: goto label_8031A704;
    case 0x8031A708u: goto label_8031A708;
    case 0x8031A70Cu: goto label_8031A70C;
    case 0x8031A710u: goto label_8031A710;
    case 0x8031A714u: goto label_8031A714;
    case 0x8031A718u: goto label_8031A718;
    case 0x8031A71Cu: goto label_8031A71C;
    case 0x8031A720u: goto label_8031A720;
    case 0x8031A724u: goto label_8031A724;
    case 0x8031A728u: goto label_8031A728;
    case 0x8031A72Cu: goto label_8031A72C;
    case 0x8031A730u: goto label_8031A730;
    case 0x8031A734u: goto label_8031A734;
    case 0x8031A738u: goto label_8031A738;
    case 0x8031A73Cu: goto label_8031A73C;
    case 0x8031A740u: goto label_8031A740;
    case 0x8031A744u: goto label_8031A744;
    case 0x8031A748u: goto label_8031A748;
    case 0x8031A74Cu: goto label_8031A74C;
    case 0x8031A750u: goto label_8031A750;
    case 0x8031A754u: goto label_8031A754;
    case 0x8031A758u: goto label_8031A758;
    case 0x8031A75Cu: goto label_8031A75C;
    case 0x8031A760u: goto label_8031A760;
    case 0x8031A764u: goto label_8031A764;
    case 0x8031A768u: goto label_8031A768;
    case 0x8031A76Cu: goto label_8031A76C;
    case 0x8031A770u: goto label_8031A770;
    case 0x8031A774u: goto label_8031A774;
    case 0x8031A778u: goto label_8031A778;
    case 0x8031A77Cu: goto label_8031A77C;
    case 0x8031A780u: goto label_8031A780;
    case 0x8031A784u: goto label_8031A784;
    case 0x8031A788u: goto label_8031A788;
    case 0x8031A78Cu: goto label_8031A78C;
    case 0x8031A790u: goto label_8031A790;
    case 0x8031A794u: goto label_8031A794;
    case 0x8031A798u: goto label_8031A798;
    case 0x8031A79Cu: goto label_8031A79C;
    case 0x8031A7A0u: goto label_8031A7A0;
    case 0x8031A7A4u: goto label_8031A7A4;
    case 0x8031A7A8u: goto label_8031A7A8;
    case 0x8031A7ACu: goto label_8031A7AC;
    case 0x8031A7B0u: goto label_8031A7B0;
    case 0x8031A7B4u: goto label_8031A7B4;
    case 0x8031A7B8u: goto label_8031A7B8;
    case 0x8031A7BCu: goto label_8031A7BC;
    case 0x8031A7C0u: goto label_8031A7C0;
    case 0x8031A7C4u: goto label_8031A7C4;
    case 0x8031A7C8u: goto label_8031A7C8;
    case 0x8031A7CCu: goto label_8031A7CC;
    case 0x8031A7D0u: goto label_8031A7D0;
    case 0x8031A7D4u: goto label_8031A7D4;
    case 0x8031A7D8u: goto label_8031A7D8;
    case 0x8031A7DCu: goto label_8031A7DC;
    case 0x8031A7E0u: goto label_8031A7E0;
    case 0x8031A7E4u: goto label_8031A7E4;
    case 0x8031A7E8u: goto label_8031A7E8;
    case 0x8031A7ECu: goto label_8031A7EC;
    case 0x8031A7F0u: goto label_8031A7F0;
    case 0x8031A7F4u: goto label_8031A7F4;
    case 0x8031A7F8u: goto label_8031A7F8;
    case 0x8031A7FCu: goto label_8031A7FC;
    case 0x8031A800u: goto label_8031A800;
    case 0x8031A804u: goto label_8031A804;
    case 0x8031A808u: goto label_8031A808;
    case 0x8031A80Cu: goto label_8031A80C;
    case 0x8031A810u: goto label_8031A810;
    case 0x8031A814u: goto label_8031A814;
    case 0x8031A818u: goto label_8031A818;
    case 0x8031A81Cu: goto label_8031A81C;
    case 0x8031A820u: goto label_8031A820;
    case 0x8031A824u: goto label_8031A824;
    case 0x8031A828u: goto label_8031A828;
    case 0x8031A82Cu: goto label_8031A82C;
    case 0x8031A830u: goto label_8031A830;
    case 0x8031A834u: goto label_8031A834;
    case 0x8031A838u: goto label_8031A838;
    case 0x8031A83Cu: goto label_8031A83C;
    case 0x8031A840u: goto label_8031A840;
    case 0x8031A844u: goto label_8031A844;
    case 0x8031A848u: goto label_8031A848;
    case 0x8031A84Cu: goto label_8031A84C;
    case 0x8031A850u: goto label_8031A850;
    case 0x8031A854u: goto label_8031A854;
    case 0x8031A858u: goto label_8031A858;
    case 0x8031A85Cu: goto label_8031A85C;
    case 0x8031A860u: goto label_8031A860;
    case 0x8031A864u: goto label_8031A864;
    case 0x8031A868u: goto label_8031A868;
    case 0x8031A86Cu: goto label_8031A86C;
    case 0x8031A870u: goto label_8031A870;
    case 0x8031A874u: goto label_8031A874;
    case 0x8031A878u: goto label_8031A878;
    case 0x8031A87Cu: goto label_8031A87C;
    case 0x8031A880u: goto label_8031A880;
    case 0x8031A884u: goto label_8031A884;
    case 0x8031A888u: goto label_8031A888;
    case 0x8031A88Cu: goto label_8031A88C;
    case 0x8031A890u: goto label_8031A890;
    case 0x8031A894u: goto label_8031A894;
    case 0x8031A898u: goto label_8031A898;
    case 0x8031A89Cu: goto label_8031A89C;
    case 0x8031A8A0u: goto label_8031A8A0;
    case 0x8031A8A4u: goto label_8031A8A4;
    case 0x8031A8A8u: goto label_8031A8A8;
    case 0x8031A8ACu: goto label_8031A8AC;
    case 0x8031A8B0u: goto label_8031A8B0;
    case 0x8031A8B4u: goto label_8031A8B4;
    case 0x8031A8B8u: goto label_8031A8B8;
    case 0x8031A8BCu: goto label_8031A8BC;
    case 0x8031A8C0u: goto label_8031A8C0;
    case 0x8031A8C4u: goto label_8031A8C4;
    case 0x8031A8C8u: goto label_8031A8C8;
    case 0x8031A8CCu: goto label_8031A8CC;
    case 0x8031A8D0u: goto label_8031A8D0;
    case 0x8031A8D4u: goto label_8031A8D4;
    case 0x8031A8D8u: goto label_8031A8D8;
    case 0x8031A8DCu: goto label_8031A8DC;
    case 0x8031A8E0u: goto label_8031A8E0;
    case 0x8031A8E4u: goto label_8031A8E4;
    case 0x8031A8E8u: goto label_8031A8E8;
    case 0x8031A8ECu: goto label_8031A8EC;
    case 0x8031A8F0u: goto label_8031A8F0;
    case 0x8031A8F4u: goto label_8031A8F4;
    case 0x8031A8F8u: goto label_8031A8F8;
    case 0x8031A8FCu: goto label_8031A8FC;
    case 0x8031A900u: goto label_8031A900;
    case 0x8031A904u: goto label_8031A904;
    case 0x8031A908u: goto label_8031A908;
    case 0x8031A90Cu: goto label_8031A90C;
    case 0x8031A910u: goto label_8031A910;
    case 0x8031A914u: goto label_8031A914;
    case 0x8031A918u: goto label_8031A918;
    case 0x8031A91Cu: goto label_8031A91C;
    case 0x8031A920u: goto label_8031A920;
    case 0x8031A924u: goto label_8031A924;
    case 0x8031A928u: goto label_8031A928;
    case 0x8031A92Cu: goto label_8031A92C;
    case 0x8031A930u: goto label_8031A930;
    case 0x8031A934u: goto label_8031A934;
    case 0x8031A938u: goto label_8031A938;
    case 0x8031A93Cu: goto label_8031A93C;
    case 0x8031A940u: goto label_8031A940;
    case 0x8031A944u: goto label_8031A944;
    case 0x8031A948u: goto label_8031A948;
    case 0x8031A94Cu: goto label_8031A94C;
    case 0x8031A950u: goto label_8031A950;
    case 0x8031A954u: goto label_8031A954;
    case 0x8031A958u: goto label_8031A958;
    case 0x8031A95Cu: goto label_8031A95C;
    case 0x8031A960u: goto label_8031A960;
    case 0x8031A964u: goto label_8031A964;
    case 0x8031A968u: goto label_8031A968;
    case 0x8031A96Cu: goto label_8031A96C;
    case 0x8031A970u: goto label_8031A970;
    case 0x8031A974u: goto label_8031A974;
    case 0x8031A978u: goto label_8031A978;
    case 0x8031A97Cu: goto label_8031A97C;
    case 0x8031A980u: goto label_8031A980;
    case 0x8031A984u: goto label_8031A984;
    case 0x8031A988u: goto label_8031A988;
    case 0x8031A98Cu: goto label_8031A98C;
    case 0x8031A990u: goto label_8031A990;
    case 0x8031A994u: goto label_8031A994;
    case 0x8031A998u: goto label_8031A998;
    case 0x8031A99Cu: goto label_8031A99C;
    case 0x8031A9A0u: goto label_8031A9A0;
    case 0x8031A9A4u: goto label_8031A9A4;
    case 0x8031A9A8u: goto label_8031A9A8;
    case 0x8031A9ACu: goto label_8031A9AC;
    case 0x8031A9B0u: goto label_8031A9B0;
    case 0x8031A9B4u: goto label_8031A9B4;
    case 0x8031A9B8u: goto label_8031A9B8;
    case 0x8031A9BCu: goto label_8031A9BC;
    case 0x8031A9C0u: goto label_8031A9C0;
    case 0x8031A9C4u: goto label_8031A9C4;
    case 0x8031A9C8u: goto label_8031A9C8;
    case 0x8031A9CCu: goto label_8031A9CC;
    case 0x8031A9D0u: goto label_8031A9D0;
    case 0x8031A9D4u: goto label_8031A9D4;
    case 0x8031A9D8u: goto label_8031A9D8;
    case 0x8031A9DCu: goto label_8031A9DC;
    case 0x8031A9E0u: goto label_8031A9E0;
    case 0x8031A9E4u: goto label_8031A9E4;
    case 0x8031A9E8u: goto label_8031A9E8;
    case 0x8031A9ECu: goto label_8031A9EC;
    case 0x8031A9F0u: goto label_8031A9F0;
    case 0x8031A9F4u: goto label_8031A9F4;
    case 0x8031A9F8u: goto label_8031A9F8;
    case 0x8031A9FCu: goto label_8031A9FC;
    case 0x8031AA00u: goto label_8031AA00;
    case 0x8031AA04u: goto label_8031AA04;
    case 0x8031AA08u: goto label_8031AA08;
    case 0x8031AA0Cu: goto label_8031AA0C;
    case 0x8031AA10u: goto label_8031AA10;
    case 0x8031AA14u: goto label_8031AA14;
    case 0x8031AA18u: goto label_8031AA18;
    case 0x8031AA1Cu: goto label_8031AA1C;
    case 0x8031AA20u: goto label_8031AA20;
    case 0x8031AA24u: goto label_8031AA24;
    case 0x8031AA28u: goto label_8031AA28;
    case 0x8031AA2Cu: goto label_8031AA2C;
    case 0x8031AA30u: goto label_8031AA30;
    case 0x8031AA34u: goto label_8031AA34;
    case 0x8031AA38u: goto label_8031AA38;
    case 0x8031AA3Cu: goto label_8031AA3C;
    case 0x8031AA40u: goto label_8031AA40;
    case 0x8031AA44u: goto label_8031AA44;
    case 0x8031AA48u: goto label_8031AA48;
    case 0x8031AA4Cu: goto label_8031AA4C;
    case 0x8031AA50u: goto label_8031AA50;
    case 0x8031AA54u: goto label_8031AA54;
    case 0x8031AA58u: goto label_8031AA58;
    case 0x8031AA5Cu: goto label_8031AA5C;
    case 0x8031AA60u: goto label_8031AA60;
    case 0x8031AA64u: goto label_8031AA64;
    case 0x8031AA68u: goto label_8031AA68;
    case 0x8031AA6Cu: goto label_8031AA6C;
    case 0x8031AA70u: goto label_8031AA70;
    case 0x8031AA74u: goto label_8031AA74;
    case 0x8031AA78u: goto label_8031AA78;
    case 0x8031AA7Cu: goto label_8031AA7C;
    case 0x8031AA80u: goto label_8031AA80;
    case 0x8031AA84u: goto label_8031AA84;
    case 0x8031AA88u: goto label_8031AA88;
    case 0x8031AA8Cu: goto label_8031AA8C;
    case 0x8031AA90u: goto label_8031AA90;
    case 0x8031AA94u: goto label_8031AA94;
    case 0x8031AA98u: goto label_8031AA98;
    case 0x8031AA9Cu: goto label_8031AA9C;
    case 0x8031AAA0u: goto label_8031AAA0;
    case 0x8031AAA4u: goto label_8031AAA4;
    case 0x8031AAA8u: goto label_8031AAA8;
    case 0x8031AAACu: goto label_8031AAAC;
    case 0x8031AAB0u: goto label_8031AAB0;
    case 0x8031AAB4u: goto label_8031AAB4;
    case 0x8031AAB8u: goto label_8031AAB8;
    case 0x8031AABCu: goto label_8031AABC;
    case 0x8031AAC0u: goto label_8031AAC0;
    case 0x8031AAC4u: goto label_8031AAC4;
    case 0x8031AAC8u: goto label_8031AAC8;
    case 0x8031AACCu: goto label_8031AACC;
    case 0x8031AAD0u: goto label_8031AAD0;
    case 0x8031AAD4u: goto label_8031AAD4;
    case 0x8031AAD8u: goto label_8031AAD8;
    case 0x8031AADCu: goto label_8031AADC;
    case 0x8031AAE0u: goto label_8031AAE0;
    case 0x8031AAE4u: goto label_8031AAE4;
    case 0x8031AAE8u: goto label_8031AAE8;
    case 0x8031AAECu: goto label_8031AAEC;
    case 0x8031AAF0u: goto label_8031AAF0;
    case 0x8031AAF4u: goto label_8031AAF4;
    case 0x8031AAF8u: goto label_8031AAF8;
    case 0x8031AAFCu: goto label_8031AAFC;
    case 0x8031AB00u: goto label_8031AB00;
    case 0x8031AB04u: goto label_8031AB04;
    case 0x8031AB08u: goto label_8031AB08;
    case 0x8031AB0Cu: goto label_8031AB0C;
    case 0x8031AB10u: goto label_8031AB10;
    case 0x8031AB14u: goto label_8031AB14;
    case 0x8031AB18u: goto label_8031AB18;
    case 0x8031AB1Cu: goto label_8031AB1C;
    case 0x8031AB20u: goto label_8031AB20;
    case 0x8031AB24u: goto label_8031AB24;
    case 0x8031AB28u: goto label_8031AB28;
    case 0x8031AB2Cu: goto label_8031AB2C;
    case 0x8031AB30u: goto label_8031AB30;
    case 0x8031AB34u: goto label_8031AB34;
    case 0x8031AB38u: goto label_8031AB38;
    case 0x8031AB3Cu: goto label_8031AB3C;
    case 0x8031AB40u: goto label_8031AB40;
    case 0x8031AB44u: goto label_8031AB44;
    case 0x8031AB48u: goto label_8031AB48;
    case 0x8031AB4Cu: goto label_8031AB4C;
    case 0x8031AB50u: goto label_8031AB50;
    case 0x8031AB54u: goto label_8031AB54;
    case 0x8031AB58u: goto label_8031AB58;
    case 0x8031AB5Cu: goto label_8031AB5C;
    case 0x8031AB60u: goto label_8031AB60;
    case 0x8031AB64u: goto label_8031AB64;
    case 0x8031AB68u: goto label_8031AB68;
    case 0x8031AB6Cu: goto label_8031AB6C;
    case 0x8031AB70u: goto label_8031AB70;
    case 0x8031AB74u: goto label_8031AB74;
    case 0x8031AB78u: goto label_8031AB78;
    case 0x8031AB7Cu: goto label_8031AB7C;
    case 0x8031AB80u: goto label_8031AB80;
    case 0x8031AB84u: goto label_8031AB84;
    case 0x8031AB88u: goto label_8031AB88;
    case 0x8031AB8Cu: goto label_8031AB8C;
    case 0x8031AB90u: goto label_8031AB90;
    case 0x8031AB94u: goto label_8031AB94;
    case 0x8031AB98u: goto label_8031AB98;
    case 0x8031AB9Cu: goto label_8031AB9C;
    case 0x8031ABA0u: goto label_8031ABA0;
    case 0x8031ABA4u: goto label_8031ABA4;
    case 0x8031ABA8u: goto label_8031ABA8;
    case 0x8031ABACu: goto label_8031ABAC;
    case 0x8031ABB0u: goto label_8031ABB0;
    case 0x8031ABB4u: goto label_8031ABB4;
    case 0x8031ABB8u: goto label_8031ABB8;
    case 0x8031ABBCu: goto label_8031ABBC;
    case 0x8031ABC0u: goto label_8031ABC0;
    case 0x8031ABC4u: goto label_8031ABC4;
    case 0x8031ABC8u: goto label_8031ABC8;
    case 0x8031ABCCu: goto label_8031ABCC;
    case 0x8031ABD0u: goto label_8031ABD0;
    case 0x8031ABD4u: goto label_8031ABD4;
    case 0x8031ABD8u: goto label_8031ABD8;
    case 0x8031ABDCu: goto label_8031ABDC;
    case 0x8031ABE0u: goto label_8031ABE0;
    case 0x8031ABE4u: goto label_8031ABE4;
    case 0x8031ABE8u: goto label_8031ABE8;
    case 0x8031ABECu: goto label_8031ABEC;
    case 0x8031ABF0u: goto label_8031ABF0;
    case 0x8031ABF4u: goto label_8031ABF4;
    case 0x8031ABF8u: goto label_8031ABF8;
    case 0x8031ABFCu: goto label_8031ABFC;
    case 0x8031AC00u: goto label_8031AC00;
    case 0x8031AC04u: goto label_8031AC04;
    case 0x8031AC08u: goto label_8031AC08;
    case 0x8031AC0Cu: goto label_8031AC0C;
    case 0x8031AC10u: goto label_8031AC10;
    case 0x8031AC14u: goto label_8031AC14;
    case 0x8031AC18u: goto label_8031AC18;
    case 0x8031AC1Cu: goto label_8031AC1C;
    case 0x8031AC20u: goto label_8031AC20;
    case 0x8031AC24u: goto label_8031AC24;
    case 0x8031AC28u: goto label_8031AC28;
    case 0x8031AC2Cu: goto label_8031AC2C;
    case 0x8031AC30u: goto label_8031AC30;
    case 0x8031AC34u: goto label_8031AC34;
    case 0x8031AC38u: goto label_8031AC38;
    case 0x8031AC3Cu: goto label_8031AC3C;
    case 0x8031AC40u: goto label_8031AC40;
    case 0x8031AC44u: goto label_8031AC44;
    case 0x8031AC48u: goto label_8031AC48;
    case 0x8031AC4Cu: goto label_8031AC4C;
    case 0x8031AC50u: goto label_8031AC50;
    case 0x8031AC54u: goto label_8031AC54;
    case 0x8031AC58u: goto label_8031AC58;
    case 0x8031AC5Cu: goto label_8031AC5C;
    case 0x8031AC60u: goto label_8031AC60;
    case 0x8031AC64u: goto label_8031AC64;
    case 0x8031AC68u: goto label_8031AC68;
    case 0x8031AC6Cu: goto label_8031AC6C;
    case 0x8031AC70u: goto label_8031AC70;
    case 0x8031AC74u: goto label_8031AC74;
    case 0x8031AC78u: goto label_8031AC78;
    case 0x8031AC7Cu: goto label_8031AC7C;
    case 0x8031AC80u: goto label_8031AC80;
    case 0x8031AC84u: goto label_8031AC84;
    case 0x8031AC88u: goto label_8031AC88;
    case 0x8031AC8Cu: goto label_8031AC8C;
    case 0x8031AC90u: goto label_8031AC90;
    case 0x8031AC94u: goto label_8031AC94;
    case 0x8031AC98u: goto label_8031AC98;
    case 0x8031AC9Cu: goto label_8031AC9C;
    case 0x8031ACA0u: goto label_8031ACA0;
    case 0x8031ACA4u: goto label_8031ACA4;
    case 0x8031ACA8u: goto label_8031ACA8;
    case 0x8031ACACu: goto label_8031ACAC;
    case 0x8031ACB0u: goto label_8031ACB0;
    case 0x8031ACB4u: goto label_8031ACB4;
    case 0x8031ACB8u: goto label_8031ACB8;
    case 0x8031ACBCu: goto label_8031ACBC;
    case 0x8031ACC0u: goto label_8031ACC0;
    case 0x8031ACC4u: goto label_8031ACC4;
    case 0x8031ACC8u: goto label_8031ACC8;
    case 0x8031ACCCu: goto label_8031ACCC;
    case 0x8031ACD0u: goto label_8031ACD0;
    case 0x8031ACD4u: goto label_8031ACD4;
    case 0x8031ACD8u: goto label_8031ACD8;
    case 0x8031ACDCu: goto label_8031ACDC;
    case 0x8031ACE0u: goto label_8031ACE0;
    case 0x8031ACE4u: goto label_8031ACE4;
    case 0x8031ACE8u: goto label_8031ACE8;
    case 0x8031ACECu: goto label_8031ACEC;
    case 0x8031ACF0u: goto label_8031ACF0;
    case 0x8031ACF4u: goto label_8031ACF4;
    case 0x8031ACF8u: goto label_8031ACF8;
    case 0x8031ACFCu: goto label_8031ACFC;
    case 0x8031AD00u: goto label_8031AD00;
    case 0x8031AD04u: goto label_8031AD04;
    case 0x8031AD08u: goto label_8031AD08;
    case 0x8031AD0Cu: goto label_8031AD0C;
    case 0x8031AD10u: goto label_8031AD10;
    case 0x8031AD14u: goto label_8031AD14;
    case 0x8031AD18u: goto label_8031AD18;
    case 0x8031AD1Cu: goto label_8031AD1C;
    case 0x8031AD20u: goto label_8031AD20;
    case 0x8031AD24u: goto label_8031AD24;
    case 0x8031AD28u: goto label_8031AD28;
    case 0x8031AD2Cu: goto label_8031AD2C;
    case 0x8031AD30u: goto label_8031AD30;
    case 0x8031AD34u: goto label_8031AD34;
    case 0x8031AD38u: goto label_8031AD38;
    case 0x8031AD3Cu: goto label_8031AD3C;
    case 0x8031AD40u: goto label_8031AD40;
    case 0x8031AD44u: goto label_8031AD44;
    case 0x8031AD48u: goto label_8031AD48;
    case 0x8031AD4Cu: goto label_8031AD4C;
    case 0x8031AD50u: goto label_8031AD50;
    case 0x8031AD54u: goto label_8031AD54;
    case 0x8031AD58u: goto label_8031AD58;
    case 0x8031AD5Cu: goto label_8031AD5C;
    case 0x8031AD60u: goto label_8031AD60;
    case 0x8031AD64u: goto label_8031AD64;
    case 0x8031AD68u: goto label_8031AD68;
    case 0x8031AD6Cu: goto label_8031AD6C;
    case 0x8031AD70u: goto label_8031AD70;
    case 0x8031AD74u: goto label_8031AD74;
    case 0x8031AD78u: goto label_8031AD78;
    case 0x8031AD7Cu: goto label_8031AD7C;
    case 0x8031AD80u: goto label_8031AD80;
    case 0x8031AD84u: goto label_8031AD84;
    case 0x8031AD88u: goto label_8031AD88;
    case 0x8031AD8Cu: goto label_8031AD8C;
    case 0x8031AD90u: goto label_8031AD90;
    case 0x8031AD94u: goto label_8031AD94;
    case 0x8031AD98u: goto label_8031AD98;
    case 0x8031AD9Cu: goto label_8031AD9C;
    case 0x8031ADA0u: goto label_8031ADA0;
    case 0x8031ADA4u: goto label_8031ADA4;
    case 0x8031ADA8u: goto label_8031ADA8;
    case 0x8031ADACu: goto label_8031ADAC;
    case 0x8031ADB0u: goto label_8031ADB0;
    case 0x8031ADB4u: goto label_8031ADB4;
    case 0x8031ADB8u: goto label_8031ADB8;
    case 0x8031ADBCu: goto label_8031ADBC;
    case 0x8031ADC0u: goto label_8031ADC0;
    case 0x8031ADC4u: goto label_8031ADC4;
    case 0x8031ADC8u: goto label_8031ADC8;
    case 0x8031ADCCu: goto label_8031ADCC;
    case 0x8031ADD0u: goto label_8031ADD0;
    case 0x8031ADD4u: goto label_8031ADD4;
    case 0x8031ADD8u: goto label_8031ADD8;
    case 0x8031ADDCu: goto label_8031ADDC;
    case 0x8031ADE0u: goto label_8031ADE0;
    case 0x8031ADE4u: goto label_8031ADE4;
    case 0x8031ADE8u: goto label_8031ADE8;
    case 0x8031ADECu: goto label_8031ADEC;
    case 0x8031ADF0u: goto label_8031ADF0;
    case 0x8031ADF4u: goto label_8031ADF4;
    case 0x8031ADF8u: goto label_8031ADF8;
    case 0x8031ADFCu: goto label_8031ADFC;
    case 0x8031AE00u: goto label_8031AE00;
    case 0x8031AE04u: goto label_8031AE04;
    case 0x8031AE08u: goto label_8031AE08;
    case 0x8031AE0Cu: goto label_8031AE0C;
    case 0x8031AE10u: goto label_8031AE10;
    case 0x8031AE14u: goto label_8031AE14;
    case 0x8031AE18u: goto label_8031AE18;
    case 0x8031AE1Cu: goto label_8031AE1C;
    case 0x8031AE20u: goto label_8031AE20;
    case 0x8031AE24u: goto label_8031AE24;
    case 0x8031AE28u: goto label_8031AE28;
    case 0x8031AE2Cu: goto label_8031AE2C;
    case 0x8031AE30u: goto label_8031AE30;
    case 0x8031AE34u: goto label_8031AE34;
    case 0x8031AE38u: goto label_8031AE38;
    case 0x8031AE3Cu: goto label_8031AE3C;
    case 0x8031AE40u: goto label_8031AE40;
    case 0x8031AE44u: goto label_8031AE44;
    case 0x8031AE48u: goto label_8031AE48;
    case 0x8031AE4Cu: goto label_8031AE4C;
    case 0x8031AE50u: goto label_8031AE50;
    case 0x8031AE54u: goto label_8031AE54;
    case 0x8031AE58u: goto label_8031AE58;
    case 0x8031AE5Cu: goto label_8031AE5C;
    case 0x8031AE60u: goto label_8031AE60;
    case 0x8031AE64u: goto label_8031AE64;
    case 0x8031AE68u: goto label_8031AE68;
    case 0x8031AE6Cu: goto label_8031AE6C;
    case 0x8031AE70u: goto label_8031AE70;
    case 0x8031AE74u: goto label_8031AE74;
    case 0x8031AE78u: goto label_8031AE78;
    case 0x8031AE7Cu: goto label_8031AE7C;
    case 0x8031AE80u: goto label_8031AE80;
    case 0x8031AE84u: goto label_8031AE84;
    case 0x8031AE88u: goto label_8031AE88;
    case 0x8031AE8Cu: goto label_8031AE8C;
    case 0x8031AE90u: goto label_8031AE90;
    case 0x8031AE94u: goto label_8031AE94;
    case 0x8031AE98u: goto label_8031AE98;
    case 0x8031AE9Cu: goto label_8031AE9C;
    case 0x8031AEA0u: goto label_8031AEA0;
    case 0x8031AEA4u: goto label_8031AEA4;
    case 0x8031AEA8u: goto label_8031AEA8;
    case 0x8031AEACu: goto label_8031AEAC;
    case 0x8031AEB0u: goto label_8031AEB0;
    case 0x8031AEB4u: goto label_8031AEB4;
    case 0x8031AEB8u: goto label_8031AEB8;
    case 0x8031AEBCu: goto label_8031AEBC;
    case 0x8031AEC0u: goto label_8031AEC0;
    case 0x8031AEC4u: goto label_8031AEC4;
    case 0x8031AEC8u: goto label_8031AEC8;
    case 0x8031AECCu: goto label_8031AECC;
    case 0x8031AED0u: goto label_8031AED0;
    case 0x8031AED4u: goto label_8031AED4;
    case 0x8031AED8u: goto label_8031AED8;
    case 0x8031AEDCu: goto label_8031AEDC;
    case 0x8031AEE0u: goto label_8031AEE0;
    case 0x8031AEE4u: goto label_8031AEE4;
    case 0x8031AEE8u: goto label_8031AEE8;
    case 0x8031AEECu: goto label_8031AEEC;
    case 0x8031AEF0u: goto label_8031AEF0;
    case 0x8031AEF4u: goto label_8031AEF4;
    case 0x8031AEF8u: goto label_8031AEF8;
    case 0x8031AEFCu: goto label_8031AEFC;
    case 0x8031AF00u: goto label_8031AF00;
    case 0x8031AF04u: goto label_8031AF04;
    case 0x8031AF08u: goto label_8031AF08;
    case 0x8031AF0Cu: goto label_8031AF0C;
    case 0x8031AF10u: goto label_8031AF10;
    case 0x8031AF14u: goto label_8031AF14;
    case 0x8031AF18u: goto label_8031AF18;
    case 0x8031AF1Cu: goto label_8031AF1C;
    case 0x8031AF20u: goto label_8031AF20;
    case 0x8031AF24u: goto label_8031AF24;
    case 0x8031AF28u: goto label_8031AF28;
    case 0x8031AF2Cu: goto label_8031AF2C;
    case 0x8031AF30u: goto label_8031AF30;
    case 0x8031AF34u: goto label_8031AF34;
    case 0x8031AF38u: goto label_8031AF38;
    case 0x8031AF3Cu: goto label_8031AF3C;
    case 0x8031AF40u: goto label_8031AF40;
    case 0x8031AF44u: goto label_8031AF44;
    case 0x8031AF48u: goto label_8031AF48;
    case 0x8031AF4Cu: goto label_8031AF4C;
    case 0x8031AF50u: goto label_8031AF50;
    case 0x8031AF54u: goto label_8031AF54;
    case 0x8031AF58u: goto label_8031AF58;
    case 0x8031AF5Cu: goto label_8031AF5C;
    case 0x8031AF60u: goto label_8031AF60;
    case 0x8031AF64u: goto label_8031AF64;
    case 0x8031AF68u: goto label_8031AF68;
    case 0x8031AF6Cu: goto label_8031AF6C;
    case 0x8031AF70u: goto label_8031AF70;
    case 0x8031AF74u: goto label_8031AF74;
    case 0x8031AF78u: goto label_8031AF78;
    case 0x8031AF7Cu: goto label_8031AF7C;
    case 0x8031AF80u: goto label_8031AF80;
    case 0x8031AF84u: goto label_8031AF84;
    case 0x8031AF88u: goto label_8031AF88;
    case 0x8031AF8Cu: goto label_8031AF8C;
    case 0x8031AF90u: goto label_8031AF90;
    case 0x8031AF94u: goto label_8031AF94;
    case 0x8031AF98u: goto label_8031AF98;
    case 0x8031AF9Cu: goto label_8031AF9C;
    case 0x8031AFA0u: goto label_8031AFA0;
    case 0x8031AFA4u: goto label_8031AFA4;
    case 0x8031AFA8u: goto label_8031AFA8;
    case 0x8031AFACu: goto label_8031AFAC;
    case 0x8031AFB0u: goto label_8031AFB0;
    case 0x8031AFB4u: goto label_8031AFB4;
    case 0x8031AFB8u: goto label_8031AFB8;
    case 0x8031AFBCu: goto label_8031AFBC;
    case 0x8031AFC0u: goto label_8031AFC0;
    case 0x8031AFC4u: goto label_8031AFC4;
    case 0x8031AFC8u: goto label_8031AFC8;
    case 0x8031AFCCu: goto label_8031AFCC;
    case 0x8031AFD0u: goto label_8031AFD0;
    case 0x8031AFD4u: goto label_8031AFD4;
    case 0x8031AFD8u: goto label_8031AFD8;
    case 0x8031AFDCu: goto label_8031AFDC;
    case 0x8031AFE0u: goto label_8031AFE0;
    case 0x8031AFE4u: goto label_8031AFE4;
    case 0x8031AFE8u: goto label_8031AFE8;
    case 0x8031AFECu: goto label_8031AFEC;
    case 0x8031AFF0u: goto label_8031AFF0;
    case 0x8031AFF4u: goto label_8031AFF4;
    case 0x8031AFF8u: goto label_8031AFF8;
    case 0x8031AFFCu: goto label_8031AFFC;
    case 0x8031B000u: goto label_8031B000;
    case 0x8031B004u: goto label_8031B004;
    case 0x8031B008u: goto label_8031B008;
    case 0x8031B00Cu: goto label_8031B00C;
    case 0x8031B010u: goto label_8031B010;
    case 0x8031B014u: goto label_8031B014;
    case 0x8031B018u: goto label_8031B018;
    case 0x8031B01Cu: goto label_8031B01C;
    case 0x8031B020u: goto label_8031B020;
    case 0x8031B024u: goto label_8031B024;
    case 0x8031B028u: goto label_8031B028;
    case 0x8031B02Cu: goto label_8031B02C;
    case 0x8031B030u: goto label_8031B030;
    case 0x8031B034u: goto label_8031B034;
    case 0x8031B038u: goto label_8031B038;
    case 0x8031B03Cu: goto label_8031B03C;
    case 0x8031B040u: goto label_8031B040;
    case 0x8031B044u: goto label_8031B044;
    case 0x8031B048u: goto label_8031B048;
    case 0x8031B04Cu: goto label_8031B04C;
    case 0x8031B050u: goto label_8031B050;
    case 0x8031B054u: goto label_8031B054;
    case 0x8031B058u: goto label_8031B058;
    case 0x8031B05Cu: goto label_8031B05C;
    case 0x8031B060u: goto label_8031B060;
    case 0x8031B064u: goto label_8031B064;
    case 0x8031B068u: goto label_8031B068;
    case 0x8031B06Cu: goto label_8031B06C;
    case 0x8031B070u: goto label_8031B070;
    case 0x8031B074u: goto label_8031B074;
    case 0x8031B078u: goto label_8031B078;
    case 0x8031B07Cu: goto label_8031B07C;
    case 0x8031B080u: goto label_8031B080;
    case 0x8031B084u: goto label_8031B084;
    case 0x8031B088u: goto label_8031B088;
    case 0x8031B08Cu: goto label_8031B08C;
    case 0x8031B090u: goto label_8031B090;
    case 0x8031B094u: goto label_8031B094;
    case 0x8031B098u: goto label_8031B098;
    case 0x8031B09Cu: goto label_8031B09C;
    case 0x8031B0A0u: goto label_8031B0A0;
    case 0x8031B0A4u: goto label_8031B0A4;
    case 0x8031B0A8u: goto label_8031B0A8;
    case 0x8031B0ACu: goto label_8031B0AC;
    case 0x8031B0B0u: goto label_8031B0B0;
    case 0x8031B0B4u: goto label_8031B0B4;
    case 0x8031B0B8u: goto label_8031B0B8;
    case 0x8031B0BCu: goto label_8031B0BC;
    case 0x8031B0C0u: goto label_8031B0C0;
    case 0x8031B0C4u: goto label_8031B0C4;
    case 0x8031B0C8u: goto label_8031B0C8;
    case 0x8031B0CCu: goto label_8031B0CC;
    case 0x8031B0D0u: goto label_8031B0D0;
    case 0x8031B0D4u: goto label_8031B0D4;
    case 0x8031B0D8u: goto label_8031B0D8;
    case 0x8031B0DCu: goto label_8031B0DC;
    case 0x8031B0E0u: goto label_8031B0E0;
    case 0x8031B0E4u: goto label_8031B0E4;
    case 0x8031B0E8u: goto label_8031B0E8;
    case 0x8031B0ECu: goto label_8031B0EC;
    case 0x8031B0F0u: goto label_8031B0F0;
    case 0x8031B0F4u: goto label_8031B0F4;
    case 0x8031B0F8u: goto label_8031B0F8;
    case 0x8031B0FCu: goto label_8031B0FC;
    case 0x8031B100u: goto label_8031B100;
    case 0x8031B104u: goto label_8031B104;
    case 0x8031B108u: goto label_8031B108;
    case 0x8031B10Cu: goto label_8031B10C;
    case 0x8031B110u: goto label_8031B110;
    case 0x8031B114u: goto label_8031B114;
    case 0x8031B118u: goto label_8031B118;
    case 0x8031B11Cu: goto label_8031B11C;
    case 0x8031B120u: goto label_8031B120;
    case 0x8031B124u: goto label_8031B124;
    case 0x8031B128u: goto label_8031B128;
    case 0x8031B12Cu: goto label_8031B12C;
    case 0x8031B130u: goto label_8031B130;
    case 0x8031B134u: goto label_8031B134;
    case 0x8031B138u: goto label_8031B138;
    case 0x8031B13Cu: goto label_8031B13C;
    case 0x8031B140u: goto label_8031B140;
    case 0x8031B144u: goto label_8031B144;
    case 0x8031B148u: goto label_8031B148;
    case 0x8031B14Cu: goto label_8031B14C;
    case 0x8031B150u: goto label_8031B150;
    case 0x8031B154u: goto label_8031B154;
    case 0x8031B158u: goto label_8031B158;
    case 0x8031B15Cu: goto label_8031B15C;
    case 0x8031B160u: goto label_8031B160;
    case 0x8031B164u: goto label_8031B164;
    case 0x8031B168u: goto label_8031B168;
    case 0x8031B16Cu: goto label_8031B16C;
    case 0x8031B170u: goto label_8031B170;
    case 0x8031B174u: goto label_8031B174;
    case 0x8031B178u: goto label_8031B178;
    case 0x8031B17Cu: goto label_8031B17C;
    case 0x8031B180u: goto label_8031B180;
    case 0x8031B184u: goto label_8031B184;
    case 0x8031B188u: goto label_8031B188;
    case 0x8031B18Cu: goto label_8031B18C;
    case 0x8031B190u: goto label_8031B190;
    case 0x8031B194u: goto label_8031B194;
    case 0x8031B198u: goto label_8031B198;
    case 0x8031B19Cu: goto label_8031B19C;
    case 0x8031B1A0u: goto label_8031B1A0;
    case 0x8031B1A4u: goto label_8031B1A4;
    case 0x8031B1A8u: goto label_8031B1A8;
    case 0x8031B1ACu: goto label_8031B1AC;
    case 0x8031B1B0u: goto label_8031B1B0;
    case 0x8031B1B4u: goto label_8031B1B4;
    case 0x8031B1B8u: goto label_8031B1B8;
    case 0x8031B1BCu: goto label_8031B1BC;
    default: return;
    }
label_803171C0:
    ctx->pc = 0x803171C0u;
    ctx->downcount -= 6;
    // 803171C0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803171C4:
    ctx->pc = 0x803171C4u;
    // 803171C4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803171C8:
    ctx->pc = 0x803171C8u;
    // 803171C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803171CC:
    ctx->pc = 0x803171CCu;
    // 803171CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803171D0:
    ctx->pc = 0x803171D0u;
    // 803171D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803171D4:
    ctx->pc = 0x803171D4u;
    ctx->downcount -= 2;
    // 803171D4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803171D8:
    ctx->pc = 0x803171D8u;
    // 803171D8: b       0x80316BC0
    {
            ctx->pc = 0x80316BC0u;
            return;
    }

label_803171DC:
    ctx->pc = 0x803171DCu;
    ctx->downcount -= 2;
    // 803171DC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803171E0:
    ctx->pc = 0x803171E0u;
    // 803171E0: b       0x80316B5C
    {
            ctx->pc = 0x80316B5Cu;
            return;
    }

label_803171E4:
    ctx->pc = 0x803171E4u;
    ctx->downcount -= 2;
    // 803171E4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803171E8:
    ctx->pc = 0x803171E8u;
    // 803171E8: b       0x80316E6C
    {
            ctx->pc = 0x80316E6Cu;
            return;
    }

label_803171EC:
    ctx->pc = 0x803171ECu;
    ctx->downcount -= 5;
    // 803171EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803171F0:
    ctx->pc = 0x803171F0u;
    // 803171F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803171F4:
    ctx->pc = 0x803171F4u;
    // 803171F4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803171F8:
    ctx->pc = 0x803171F8u;
    // 803171F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803171FC:
    ctx->pc = 0x803171FCu;
    // 803171FC: bl      0x8026F6CC
    {
            ctx->lr = 0x80317200u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80317200:
    ctx->pc = 0x80317200u;
    ctx->downcount -= 2;
    // 80317200: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80317204:
    ctx->pc = 0x80317204u;
    // 80317204: bl      0x8025CE30
    {
            ctx->lr = 0x80317208u;
            ctx->pc = 0x8025CE30u;
            return;
    }

label_80317208:
    ctx->pc = 0x80317208u;
    ctx->downcount -= 5;
    // 80317208: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031720C:
    ctx->pc = 0x8031720Cu;
    // 8031720C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317210:
    ctx->pc = 0x80317210u;
    // 80317210: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317214:
    ctx->pc = 0x80317214u;
    // 80317214: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317218:
    ctx->pc = 0x80317218u;
    ctx->downcount -= 24;
    // 80317218: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031721C:
    ctx->pc = 0x8031721Cu;
    // 8031721C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317220:
    ctx->pc = 0x80317220u;
    // 80317220: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80317224:
    ctx->pc = 0x80317224u;
    // 80317224: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317228:
    ctx->pc = 0x80317228u;
    // 80317228: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031722C:
    ctx->pc = 0x8031722Cu;
    // 8031722C: addi    r5, r5, 21312
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21312);

label_80317230:
    ctx->pc = 0x80317230u;
    // 80317230: addi    r6, r5, 15
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(15);

label_80317234:
    ctx->pc = 0x80317234u;
    // 80317234: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317238:
    ctx->pc = 0x80317238u;
    // 80317238: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031723C:
    ctx->pc = 0x8031723Cu;
    // 8031723C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317240:
    ctx->pc = 0x80317240u;
    // 80317240: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317244:
    ctx->pc = 0x80317244u;
    // 80317244: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317248:
    ctx->pc = 0x80317248u;
    // 80317248: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8031724C:
    ctx->pc = 0x8031724Cu;
    // 8031724C: bl      0x8036E994
    {
            ctx->lr = 0x80317250u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_80317250:
    ctx->pc = 0x80317250u;
    ctx->downcount -= 27;
    // 80317250: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_80317254:
    ctx->pc = 0x80317254u;
    // 80317254: stw     r31, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317258:
    ctx->pc = 0x80317258u;
    // 80317258: addi    r6, r6, -25112
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-25112);

label_8031725C:
    ctx->pc = 0x8031725Cu;
    // 8031725C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317260:
    ctx->pc = 0x80317260u;
    // 80317260: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80317264:
    ctx->pc = 0x80317264u;
    // 80317264: stw     r6, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80317268:
    ctx->pc = 0x80317268u;
    // 80317268: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8031726C:
    ctx->pc = 0x8031726Cu;
    // 8031726C: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80317270:
    ctx->pc = 0x80317270u;
    // 80317270: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80317274:
    ctx->pc = 0x80317274u;
    // 80317274: stw     r4, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317278:
    ctx->pc = 0x80317278u;
    // 80317278: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031727C:
    ctx->pc = 0x8031727Cu;
    // 8031727C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317280:
    ctx->pc = 0x80317280u;
    // 80317280: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317284:
    ctx->pc = 0x80317284u;
    // 80317284: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317288:
    ctx->pc = 0x80317288u;
    // 80317288: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031728C:
    ctx->pc = 0x8031728Cu;
    // 8031728C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317290:
    ctx->pc = 0x80317290u;
    ctx->downcount -= 18;
    // 80317290: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317294:
    ctx->pc = 0x80317294u;
    // 80317294: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317298:
    // 80317298: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031729C:
    ctx->pc = 0x8031729Cu;
    // 8031729C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803172A0:
    ctx->pc = 0x803172A0u;
    // 803172A0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803172A4:
    // 803172A4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803172A8:
    // 803172A8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803172AC:
    // 803172AC: bc    12, 2, 0x803172CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803172CC;
        }
    }

label_803172B0:
    ctx->downcount -= 1;
    // 803172B0: bc    12, 2, 0x803172BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803172BC;
        }
    }

label_803172B4:
    ctx->downcount -= 2;
    // 803172B4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803172B8:
    // 803172B8: bl      0x801F9B68
    {
            ctx->lr = 0x803172BCu;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_803172BC:
    ctx->downcount -= 2;
    // 803172BC: cmpwi   r31, 0
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

label_803172C0:
    // 803172C0: bc    4, 1, 0x803172CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803172CC;
        }
    }

label_803172C4:
    ctx->downcount -= 2;
    // 803172C4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803172C8:
    // 803172C8: bl      0x801C1C90
    {
            ctx->lr = 0x803172CCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803172CC:
    ctx->downcount -= 17;
    // 803172CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803172D0:
    ctx->pc = 0x803172D0u;
    // 803172D0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803172D4:
    ctx->pc = 0x803172D4u;
    // 803172D4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803172D8:
    ctx->pc = 0x803172D8u;
    // 803172D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803172DC:
    // 803172DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803172E0:
    ctx->pc = 0x803172E0u;
    // 803172E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803172E4:
    ctx->downcount -= 2;
    // 803172E4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803172E8:
    // 803172E8: b       0x80317290
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317290u;
                return;
            }
            goto label_80317290;
    }

label_803172EC:
    ctx->downcount -= 2;
    // 803172EC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803172F0:
    // 803172F0: b       0x80317290
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317290u;
                return;
            }
            goto label_80317290;
    }

label_803172F4:
    ctx->pc = 0x803172F4u;
    ctx->downcount -= 8;
    // 803172F4: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_803172F8:
    ctx->pc = 0x803172F8u;
    // 803172F8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_803172FC:
    ctx->pc = 0x803172FCu;
    // 803172FC: addi    r4, r4, 21352
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21352);

label_80317300:
    ctx->pc = 0x80317300u;
    // 80317300: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317304:
    ctx->pc = 0x80317304u;
    // 80317304: addi    r5, r4, 15
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15);

label_80317308:
    ctx->pc = 0x80317308u;
    // 80317308: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031730C:
    ctx->pc = 0x8031730Cu;
    // 8031730C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317310:
    ctx->pc = 0x80317310u;
    // 80317310: b       0x802703A8
    {
            ctx->pc = 0x802703A8u;
            return;
    }

label_80317314:
    ctx->pc = 0x80317314u;
    ctx->downcount -= 14;
    // 80317314: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317318:
    ctx->pc = 0x80317318u;
    // 80317318: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031731C:
    ctx->pc = 0x8031731Cu;
    // 8031731C: lis     r8, -32665
    ctx->gpr[8] = ((u32)(s32)(-32665) << 16);

label_80317320:
    ctx->pc = 0x80317320u;
    // 80317320: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317324:
    ctx->pc = 0x80317324u;
    // 80317324: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317328:
    ctx->pc = 0x80317328u;
    // 80317328: addi    r8, r8, 21352
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(21352);

label_8031732C:
    ctx->pc = 0x8031732Cu;
    // 8031732C: or   r7, r5, r5
    {
        ctx->gpr[7] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80317330:
    ctx->pc = 0x80317330u;
    // 80317330: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80317334:
    ctx->pc = 0x80317334u;
    // 80317334: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317338:
    ctx->pc = 0x80317338u;
    // 80317338: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031733C:
    ctx->pc = 0x8031733Cu;
    // 8031733C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80317340:
    ctx->pc = 0x80317340u;
    // 80317340: addi    r5, r8, 37
    ctx->gpr[5] = ctx->gpr[8] + (u32)(s32)(37);

label_80317344:
    ctx->pc = 0x80317344u;
    // 80317344: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80317348:
    ctx->pc = 0x80317348u;
    // 80317348: bl      0x8000D074
    {
            ctx->lr = 0x8031734Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8031734C:
    ctx->pc = 0x8031734Cu;
    ctx->downcount -= 3;
    // 8031734C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80317350:
    ctx->pc = 0x80317350u;
    // 80317350: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80317354:
    ctx->pc = 0x80317354u;
    // 80317354: bl      0x8026F960
    {
            ctx->lr = 0x80317358u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80317358:
    ctx->pc = 0x80317358u;
    ctx->downcount -= 6;
    // 80317358: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031735C:
    ctx->pc = 0x8031735Cu;
    // 8031735C: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317360:
    ctx->pc = 0x80317360u;
    // 80317360: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317364:
    ctx->pc = 0x80317364u;
    // 80317364: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80317368:
    ctx->pc = 0x80317368u;
    // 80317368: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031736C:
    ctx->pc = 0x8031736Cu;
    ctx->downcount -= 8;
    // 8031736C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317370:
    ctx->pc = 0x80317370u;
    // 80317370: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317374:
    ctx->pc = 0x80317374u;
    // 80317374: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317378:
    ctx->pc = 0x80317378u;
    // 80317378: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031737C:
    ctx->pc = 0x8031737Cu;
    // 8031737C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317380:
    ctx->pc = 0x80317380u;
    // 80317380: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317384:
    ctx->pc = 0x80317384u;
    // 80317384: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317388:
    ctx->pc = 0x80317388u;
    // 80317388: bl      0x803715C0
    {
            ctx->lr = 0x8031738Cu;
            ctx->pc = 0x803715C0u;
            return;
    }

label_8031738C:
    ctx->pc = 0x8031738Cu;
    ctx->downcount -= 15;
    // 8031738C: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_80317390:
    ctx->pc = 0x80317390u;
    // 80317390: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80317394:
    ctx->pc = 0x80317394u;
    // 80317394: addi    r5, r5, -24808
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-24808);

label_80317398:
    ctx->pc = 0x80317398u;
    // 80317398: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031739C:
    ctx->pc = 0x8031739Cu;
    // 8031739C: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_803173A0:
    ctx->pc = 0x803173A0u;
    // 803173A0: addi    r3, r3, 21352
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21352);

label_803173A4:
    ctx->pc = 0x803173A4u;
    // 803173A4: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_803173A8:
    ctx->pc = 0x803173A8u;
    // 803173A8: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_803173AC:
    ctx->pc = 0x803173ACu;
    // 803173AC: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803173B0:
    ctx->pc = 0x803173B0u;
    // 803173B0: addi    r4, r3, 47
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(47);

label_803173B4:
    ctx->pc = 0x803173B4u;
    // 803173B4: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_803173B8:
    ctx->pc = 0x803173B8u;
    // 803173B8: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_803173BC:
    ctx->pc = 0x803173BCu;
    // 803173BC: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_803173C0:
    ctx->pc = 0x803173C0u;
    // 803173C0: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803173C4:
    ctx->pc = 0x803173C4u;
    // 803173C4: bl      0x8000E7F4
    {
            ctx->lr = 0x803173C8u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_803173C8:
    ctx->pc = 0x803173C8u;
    ctx->downcount -= 7;
    // 803173C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803173CC:
    ctx->pc = 0x803173CCu;
    // 803173CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803173D0:
    ctx->pc = 0x803173D0u;
    // 803173D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803173D4:
    ctx->pc = 0x803173D4u;
    // 803173D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803173D8:
    ctx->pc = 0x803173D8u;
    // 803173D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803173DC:
    ctx->pc = 0x803173DCu;
    // 803173DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803173E0:
    ctx->pc = 0x803173E0u;
    ctx->downcount -= 18;
    // 803173E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803173E4:
    ctx->pc = 0x803173E4u;
    // 803173E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803173E8:
    // 803173E8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803173EC:
    ctx->pc = 0x803173ECu;
    // 803173EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803173F0:
    ctx->pc = 0x803173F0u;
    // 803173F0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803173F4:
    // 803173F4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803173F8:
    // 803173F8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803173FC:
    // 803173FC: bc    12, 2, 0x80317430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317430;
        }
    }

label_80317400:
    ctx->downcount -= 1;
    // 80317400: bc    12, 2, 0x80317420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317420;
        }
    }

label_80317404:
    ctx->downcount -= 1;
    // 80317404: bc    12, 2, 0x80317420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317420;
        }
    }

label_80317408:
    ctx->downcount -= 3;
    // 80317408: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031740C:
    // 8031740C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317410:
    // 80317410: bl      0x801F5C24
    {
            ctx->lr = 0x80317414u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80317414:
    ctx->downcount -= 3;
    // 80317414: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317418:
    // 80317418: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031741C:
    // 8031741C: bl      0x801F9C70
    {
            ctx->lr = 0x80317420u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80317420:
    ctx->downcount -= 2;
    // 80317420: cmpwi   r31, 0
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

label_80317424:
    // 80317424: bc    4, 1, 0x80317430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317430;
        }
    }

label_80317428:
    ctx->downcount -= 2;
    // 80317428: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031742C:
    // 8031742C: bl      0x801C1C90
    {
            ctx->lr = 0x80317430u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80317430:
    ctx->downcount -= 17;
    // 80317430: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317434:
    ctx->pc = 0x80317434u;
    // 80317434: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317438:
    ctx->pc = 0x80317438u;
    // 80317438: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031743C:
    ctx->pc = 0x8031743Cu;
    // 8031743C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317440:
    // 80317440: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317444:
    ctx->pc = 0x80317444u;
    // 80317444: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317448:
    ctx->downcount -= 2;
    // 80317448: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031744C:
    // 8031744C: b       0x803173E0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803173E0u;
                return;
            }
            goto label_803173E0;
    }

label_80317450:
    ctx->downcount -= 2;
    // 80317450: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317454:
    // 80317454: b       0x803173E0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803173E0u;
                return;
            }
            goto label_803173E0;
    }

label_80317458:
    ctx->pc = 0x80317458u;
    ctx->downcount -= 13;
    // 80317458: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031745C:
    ctx->pc = 0x8031745Cu;
    // 8031745C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317460:
    ctx->pc = 0x80317460u;
    // 80317460: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80317464:
    ctx->pc = 0x80317464u;
    // 80317464: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317468:
    ctx->pc = 0x80317468u;
    // 80317468: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031746C:
    ctx->pc = 0x8031746Cu;
    // 8031746C: addi    r5, r5, 21416
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21416);

label_80317470:
    ctx->pc = 0x80317470u;
    // 80317470: addi    r6, r5, 18
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(18);

label_80317474:
    ctx->pc = 0x80317474u;
    // 80317474: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317478:
    ctx->pc = 0x80317478u;
    // 80317478: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031747C:
    ctx->pc = 0x8031747Cu;
    // 8031747C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317480:
    ctx->pc = 0x80317480u;
    // 80317480: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317484:
    ctx->pc = 0x80317484u;
    // 80317484: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317488:
    ctx->pc = 0x80317488u;
    // 80317488: bl      0x8036E994
    {
            ctx->lr = 0x8031748Cu;
            ctx->pc = 0x8036E994u;
            return;
    }

label_8031748C:
    ctx->pc = 0x8031748Cu;
    ctx->downcount -= 16;
    // 8031748C: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_80317490:
    ctx->pc = 0x80317490u;
    // 80317490: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80317494:
    ctx->pc = 0x80317494u;
    // 80317494: addi    r6, r6, -24520
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-24520);

label_80317498:
    ctx->pc = 0x80317498u;
    // 80317498: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031749C:
    ctx->pc = 0x8031749Cu;
    // 8031749C: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_803174A0:
    ctx->pc = 0x803174A0u;
    // 803174A0: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_803174A4:
    ctx->pc = 0x803174A4u;
    // 803174A4: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_803174A8:
    ctx->pc = 0x803174A8u;
    // 803174A8: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803174AC:
    ctx->pc = 0x803174ACu;
    // 803174AC: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803174B0:
    ctx->pc = 0x803174B0u;
    // 803174B0: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803174B4:
    ctx->pc = 0x803174B4u;
    // 803174B4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803174B8:
    ctx->pc = 0x803174B8u;
    // 803174B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803174BC:
    ctx->pc = 0x803174BCu;
    // 803174BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803174C0:
    ctx->pc = 0x803174C0u;
    // 803174C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803174C4:
    ctx->pc = 0x803174C4u;
    // 803174C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803174C8:
    ctx->pc = 0x803174C8u;
    ctx->downcount -= 18;
    // 803174C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803174CC:
    ctx->pc = 0x803174CCu;
    // 803174CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803174D0:
    // 803174D0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803174D4:
    ctx->pc = 0x803174D4u;
    // 803174D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803174D8:
    ctx->pc = 0x803174D8u;
    // 803174D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803174DC:
    // 803174DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803174E0:
    // 803174E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803174E4:
    // 803174E4: bc    12, 2, 0x80317504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317504;
        }
    }

label_803174E8:
    ctx->downcount -= 1;
    // 803174E8: bc    12, 2, 0x803174F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803174F4;
        }
    }

label_803174EC:
    ctx->downcount -= 2;
    // 803174EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803174F0:
    // 803174F0: bl      0x801F9B68
    {
            ctx->lr = 0x803174F4u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_803174F4:
    ctx->downcount -= 2;
    // 803174F4: cmpwi   r31, 0
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

label_803174F8:
    // 803174F8: bc    4, 1, 0x80317504
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317504;
        }
    }

label_803174FC:
    ctx->downcount -= 2;
    // 803174FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317500:
    // 80317500: bl      0x801C1C90
    {
            ctx->lr = 0x80317504u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80317504:
    ctx->downcount -= 17;
    // 80317504: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317508:
    ctx->pc = 0x80317508u;
    // 80317508: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031750C:
    ctx->pc = 0x8031750Cu;
    // 8031750C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317510:
    ctx->pc = 0x80317510u;
    // 80317510: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317514:
    // 80317514: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317518:
    ctx->pc = 0x80317518u;
    // 80317518: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031751C:
    ctx->downcount -= 2;
    // 8031751C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80317520:
    // 80317520: b       0x803174C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803174C8u;
                return;
            }
            goto label_803174C8;
    }

label_80317524:
    ctx->downcount -= 2;
    // 80317524: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317528:
    // 80317528: b       0x803174C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803174C8u;
                return;
            }
            goto label_803174C8;
    }

label_8031752C:
    ctx->pc = 0x8031752Cu;
    ctx->downcount -= 9;
    // 8031752C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317530:
    ctx->pc = 0x80317530u;
    // 80317530: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317534:
    ctx->pc = 0x80317534u;
    // 80317534: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80317538:
    ctx->pc = 0x80317538u;
    // 80317538: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031753C:
    ctx->pc = 0x8031753Cu;
    // 8031753C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317540:
    ctx->pc = 0x80317540u;
    // 80317540: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317544:
    ctx->pc = 0x80317544u;
    // 80317544: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317548:
    ctx->pc = 0x80317548u;
    // 80317548: addi    r4, r5, 21464
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(21464);

label_8031754C:
    ctx->pc = 0x8031754Cu;
    // 8031754C: bl      0x8026F960
    {
            ctx->lr = 0x80317550u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80317550:
    ctx->pc = 0x80317550u;
    ctx->downcount -= 5;
    // 80317550: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80317554:
    ctx->pc = 0x80317554u;
    // 80317554: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80317558:
    ctx->pc = 0x80317558u;
    // 80317558: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031755C:
    ctx->pc = 0x8031755Cu;
    // 8031755C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80317560u;
            ctx->pc = target;
            return;
        }
    }

label_80317560:
    ctx->pc = 0x80317560u;
    ctx->downcount -= 18;
    // 80317560: lwz     r4, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80317564:
    ctx->pc = 0x80317564u;
    // 80317564: lwz     r0, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317568:
    ctx->pc = 0x80317568u;
    // 80317568: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031756C:
    ctx->pc = 0x8031756Cu;
    // 8031756C: sth     r31, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80317570:
    ctx->pc = 0x80317570u;
    // 80317570: lha     r0, 14(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(14);
        ctx->gpr[0] = (u32)(s32)(s16)mem_read16(ctx, ea);
    }

label_80317574:
    ctx->pc = 0x80317574u;
    // 80317574: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317578:
    ctx->pc = 0x80317578u;
    // 80317578: sth     r31, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8031757C:
    ctx->pc = 0x8031757Cu;
    // 8031757C: sth     r31, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80317580:
    ctx->pc = 0x80317580u;
    // 80317580: sth     r0, 30(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(30);
        mem_write16(ctx, ea, (u16)ctx->gpr[0]);
    }

label_80317584:
    ctx->pc = 0x80317584u;
    // 80317584: sth     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80317588:
    ctx->pc = 0x80317588u;
    // 80317588: sth     r31, 10(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(10);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_8031758C:
    ctx->pc = 0x8031758Cu;
    // 8031758C: sth     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write16(ctx, ea, (u16)ctx->gpr[31]);
    }

label_80317590:
    ctx->pc = 0x80317590u;
    // 80317590: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317594:
    ctx->pc = 0x80317594u;
    // 80317594: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317598:
    ctx->pc = 0x80317598u;
    // 80317598: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031759C:
    ctx->pc = 0x8031759Cu;
    // 8031759C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803175A0:
    ctx->pc = 0x803175A0u;
    // 803175A0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803175A4:
    ctx->pc = 0x803175A4u;
    ctx->downcount -= 18;
    // 803175A4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803175A8:
    ctx->pc = 0x803175A8u;
    // 803175A8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803175AC:
    ctx->pc = 0x803175ACu;
    // 803175AC: cmpwi   r5, 0
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

label_803175B0:
    ctx->pc = 0x803175B0u;
    // 803175B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803175B4:
    ctx->pc = 0x803175B4u;
    // 803175B4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803175B8:
    ctx->pc = 0x803175B8u;
    // 803175B8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803175BC:
    ctx->pc = 0x803175BCu;
    // 803175BC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803175C0:
    ctx->pc = 0x803175C0u;
    // 803175C0: bc    12, 2, 0x80317614
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317614;
        }
    }

label_803175C4:
    ctx->pc = 0x803175C4u;
    ctx->downcount -= 3;
    // 803175C4: lbz     r0, 282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(282);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803175C8:
    ctx->pc = 0x803175C8u;
    // 803175C8: and.   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[4];
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[0];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_803175CC:
    ctx->pc = 0x803175CCu;
    // 803175CC: bc    4, 2, 0x80317604
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317604;
        }
    }

label_803175D0:
    ctx->pc = 0x803175D0u;
    ctx->downcount -= 3;
    // 803175D0: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_803175D4:
    ctx->pc = 0x803175D4u;
    // 803175D4: cmplwi  r0, 0x0001
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

label_803175D8:
    ctx->pc = 0x803175D8u;
    // 803175D8: bc    4, 1, 0x803175F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803175F0;
        }
    }

label_803175DC:
    ctx->pc = 0x803175DCu;
    ctx->downcount -= 2;
    // 803175DC: cmpwi   r4, 4
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

label_803175E0:
    ctx->pc = 0x803175E0u;
    // 803175E0: bc    12, 2, 0x803175F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803175F0;
        }
    }

label_803175E4:
    ctx->pc = 0x803175E4u;
    ctx->downcount -= 2;
    // 803175E4: cmpwi   r4, 8
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

label_803175E8:
    ctx->pc = 0x803175E8u;
    // 803175E8: bc    12, 2, 0x803175FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803175FC;
        }
    }

label_803175EC:
    ctx->pc = 0x803175ECu;
    ctx->downcount -= 1;
    // 803175EC: b       0x80317604
    {
            goto label_80317604;
    }

label_803175F0:
    ctx->pc = 0x803175F0u;
    ctx->downcount -= 2;
    // 803175F0: li      r3, 159
    ctx->gpr[3] = (u32)(s32)(159);

label_803175F4:
    ctx->pc = 0x803175F4u;
    // 803175F4: bl      0x802B73BC
    {
            ctx->lr = 0x803175F8u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_803175F8:
    ctx->pc = 0x803175F8u;
    ctx->downcount -= 1;
    // 803175F8: b       0x80317604
    {
            goto label_80317604;
    }

label_803175FC:
    ctx->pc = 0x803175FCu;
    ctx->downcount -= 2;
    // 803175FC: li      r3, 160
    ctx->gpr[3] = (u32)(s32)(160);

label_80317600:
    ctx->pc = 0x80317600u;
    // 80317600: bl      0x802B73BC
    {
            ctx->lr = 0x80317604u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80317604:
    ctx->pc = 0x80317604u;
    ctx->downcount -= 4;
    // 80317604: lbz     r0, 282(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(282);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317608:
    ctx->pc = 0x80317608u;
    // 80317608: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_8031760C:
    ctx->pc = 0x8031760Cu;
    // 8031760C: stb     r0, 282(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317610:
    ctx->pc = 0x80317610u;
    // 80317610: b       0x80317620
    {
            goto label_80317620;
    }

label_80317614:
    ctx->pc = 0x80317614u;
    ctx->downcount -= 3;
    // 80317614: lbz     r0, 282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(282);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317618:
    ctx->pc = 0x80317618u;
    // 80317618: andc   r0, r0, r4
    {
        ctx->gpr[0] = ctx->gpr[0] & ~ctx->gpr[4];
    }

label_8031761C:
    ctx->pc = 0x8031761Cu;
    // 8031761C: stb     r0, 282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317620:
    ctx->pc = 0x80317620u;
    ctx->downcount -= 16;
    // 80317620: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317624:
    ctx->pc = 0x80317624u;
    // 80317624: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317628:
    ctx->pc = 0x80317628u;
    // 80317628: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031762C:
    ctx->pc = 0x8031762Cu;
    // 8031762C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317630:
    ctx->pc = 0x80317630u;
    // 80317630: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317634:
    ctx->pc = 0x80317634u;
    ctx->downcount -= 3;
    // 80317634: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80317638:
    ctx->pc = 0x80317638u;
    // 80317638: stb     r0, 282(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031763C:
    ctx->pc = 0x8031763Cu;
    // 8031763C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317640:
    ctx->pc = 0x80317640u;
    ctx->downcount -= 21;
    // 80317640: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317644:
    ctx->pc = 0x80317644u;
    // 80317644: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317648:
    ctx->pc = 0x80317648u;
    // 80317648: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031764C:
    ctx->pc = 0x8031764Cu;
    // 8031764C: addic   r0, r4, -1
    {
        u64 a = ctx->gpr[4];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80317650:
    ctx->pc = 0x80317650u;
    // 80317650: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317654:
    ctx->pc = 0x80317654u;
    // 80317654: subfe.   r26, r0, r4
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[26] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[26];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80317658:
    ctx->pc = 0x80317658u;
    // 80317658: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031765C:
    ctx->pc = 0x8031765Cu;
    // 8031765C: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317660:
    ctx->pc = 0x80317660u;
    // 80317660: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80317664:
    ctx->pc = 0x80317664u;
    // 80317664: li      r4, 128
    ctx->gpr[4] = (u32)(s32)(128);

label_80317668:
    ctx->pc = 0x80317668u;
    // 80317668: bc    12, 2, 0x80317670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317670;
        }
    }

label_8031766C:
    ctx->pc = 0x8031766Cu;
    ctx->downcount -= 1;
    // 8031766C: li      r4, 255
    ctx->gpr[4] = (u32)(s32)(255);

label_80317670:
    ctx->pc = 0x80317670u;
    ctx->downcount -= 1;
    // 80317670: bl      0x8031752C
    {
            ctx->lr = 0x80317674u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031752Cu;
                return;
            }
            goto label_8031752C;
    }

label_80317674:
    ctx->pc = 0x80317674u;
    ctx->downcount -= 4;
    // 80317674: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80317678:
    ctx->pc = 0x80317678u;
    // 80317678: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8031767C:
    ctx->pc = 0x8031767Cu;
    // 8031767C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80317680:
    ctx->pc = 0x80317680u;
    // 80317680: bl      0x803175A4
    {
            ctx->lr = 0x80317684u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803175A4u;
                return;
            }
            goto label_803175A4;
    }

label_80317684:
    ctx->pc = 0x80317684u;
    ctx->downcount -= 10;
    // 80317684: lis     r26, -32665
    ctx->gpr[26] = ((u32)(s32)(-32665) << 16);

label_80317688:
    ctx->pc = 0x80317688u;
    // 80317688: srawi r4, r29, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[29];
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

label_8031768C:
    ctx->pc = 0x8031768Cu;
    // 8031768C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80317690:
    ctx->pc = 0x80317690u;
    // 80317690: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80317694:
    ctx->pc = 0x80317694u;
    // 80317694: subfc   r0, r0, r29
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80317698:
    ctx->pc = 0x80317698u;
    // 80317698: addi    r26, r26, 21464
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(21464);

label_8031769C:
    ctx->pc = 0x8031769Cu;
    // 8031769C: adde   r27, r4, r3
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[27] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803176A0:
    ctx->pc = 0x803176A0u;
    // 803176A0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803176A4:
    ctx->pc = 0x803176A4u;
    // 803176A4: addi    r4, r26, 15
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(15);

label_803176A8:
    ctx->pc = 0x803176A8u;
    // 803176A8: bl      0x8026F970
    {
            ctx->lr = 0x803176ACu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803176AC:
    ctx->pc = 0x803176ACu;
    ctx->downcount -= 7;
    // 803176AC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803176B0:
    ctx->pc = 0x803176B0u;
    // 803176B0: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_803176B4:
    ctx->pc = 0x803176B4u;
    // 803176B4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_803176B8:
    ctx->pc = 0x803176B8u;
    // 803176B8: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_803176BC:
    ctx->pc = 0x803176BCu;
    // 803176BC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803176C0:
    ctx->pc = 0x803176C0u;
    // 803176C0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803176C4:
    ctx->pc = 0x803176C4u;
    // 803176C4: bl      0x8026F970
    {
            ctx->lr = 0x803176C8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803176C8:
    ctx->pc = 0x803176C8u;
    ctx->downcount -= 8;
    // 803176C8: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_803176CC:
    ctx->pc = 0x803176CCu;
    // 803176CC: cntlzw r0, r27
    {
        u32 v = ctx->gpr[27];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803176D0:
    ctx->pc = 0x803176D0u;
    // 803176D0: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803176D4:
    ctx->pc = 0x803176D4u;
    // 803176D4: addi    r4, r26, 28
    ctx->gpr[4] = ctx->gpr[26] + (u32)(s32)(28);

label_803176D8:
    ctx->pc = 0x803176D8u;
    // 803176D8: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_803176DC:
    ctx->pc = 0x803176DCu;
    // 803176DC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803176E0:
    ctx->pc = 0x803176E0u;
    // 803176E0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803176E4:
    ctx->pc = 0x803176E4u;
    // 803176E4: bl      0x8026F970
    {
            ctx->lr = 0x803176E8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803176E8:
    ctx->pc = 0x803176E8u;
    ctx->downcount -= 8;
    // 803176E8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803176EC:
    ctx->pc = 0x803176ECu;
    // 803176EC: or   r5, r27, r27
    {
        ctx->gpr[5] = ctx->gpr[27] | ctx->gpr[27];
    }

label_803176F0:
    ctx->pc = 0x803176F0u;
    // 803176F0: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803176F4:
    ctx->pc = 0x803176F4u;
    // 803176F4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_803176F8:
    ctx->pc = 0x803176F8u;
    // 803176F8: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_803176FC:
    ctx->pc = 0x803176FCu;
    // 803176FC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317700:
    ctx->pc = 0x80317700u;
    // 80317700: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80317704:
    ctx->pc = 0x80317704u;
    // 80317704: bl      0x803175A4
    {
            ctx->lr = 0x80317708u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803175A4u;
                return;
            }
            goto label_803175A4;
    }

label_80317708:
    ctx->pc = 0x80317708u;
    ctx->downcount -= 4;
    // 80317708: addi    r3, r29, -2
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(-2);

label_8031770C:
    ctx->pc = 0x8031770Cu;
    // 8031770C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80317710:
    ctx->pc = 0x80317710u;
    // 80317710: cmplwi  r3, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[3]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317714:
    ctx->pc = 0x80317714u;
    // 80317714: bc    12, 1, 0x8031772C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031772C;
        }
    }

label_80317718:
    ctx->pc = 0x80317718u;
    ctx->downcount -= 4;
    // 80317718: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8031771C:
    ctx->pc = 0x8031771Cu;
    // 8031771C: slw   r0, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[0] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80317720:
    ctx->pc = 0x80317720u;
    // 80317720: andi.   r0, r0, 0x001B
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

label_80317724:
    ctx->pc = 0x80317724u;
    // 80317724: bc    12, 2, 0x8031772C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031772C;
        }
    }

label_80317728:
    ctx->pc = 0x80317728u;
    ctx->downcount -= 1;
    // 80317728: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8031772C:
    ctx->pc = 0x8031772Cu;
    ctx->downcount -= 5;
    // 8031772C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80317730:
    ctx->pc = 0x80317730u;
    // 80317730: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_80317734:
    ctx->pc = 0x80317734u;
    // 80317734: addi    r4, r4, 21464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21464);

label_80317738:
    ctx->pc = 0x80317738u;
    // 80317738: addi    r4, r4, 44
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(44);

label_8031773C:
    ctx->pc = 0x8031773Cu;
    // 8031773C: bl      0x8026F970
    {
            ctx->lr = 0x80317740u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317740:
    ctx->pc = 0x80317740u;
    ctx->downcount -= 6;
    // 80317740: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317744:
    ctx->pc = 0x80317744u;
    // 80317744: cmpwi   r31, 0
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

label_80317748:
    ctx->pc = 0x80317748u;
    // 80317748: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8031774C:
    ctx->pc = 0x8031774Cu;
    // 8031774C: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_80317750:
    ctx->pc = 0x80317750u;
    // 80317750: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317754:
    ctx->pc = 0x80317754u;
    // 80317754: bc    12, 2, 0x803177D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803177D0;
        }
    }

label_80317758:
    ctx->pc = 0x80317758u;
    ctx->downcount -= 3;
    // 80317758: cmpwi   r29, 2
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

label_8031775C:
    ctx->pc = 0x8031775Cu;
    // 8031775C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80317760:
    ctx->pc = 0x80317760u;
    // 80317760: bc    12, 2, 0x8031776C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031776C;
        }
    }

label_80317764:
    ctx->pc = 0x80317764u;
    ctx->downcount -= 2;
    // 80317764: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317768:
    ctx->pc = 0x80317768u;
    // 80317768: bc    4, 2, 0x80317770
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317770;
        }
    }

label_8031776C:
    ctx->pc = 0x8031776Cu;
    ctx->downcount -= 1;
    // 8031776C: li      r26, 1
    ctx->gpr[26] = (u32)(s32)(1);

label_80317770:
    ctx->pc = 0x80317770u;
    ctx->downcount -= 5;
    // 80317770: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80317774:
    ctx->pc = 0x80317774u;
    // 80317774: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_80317778:
    ctx->pc = 0x80317778u;
    // 80317778: addi    r4, r4, 21464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21464);

label_8031777C:
    ctx->pc = 0x8031777Cu;
    // 8031777C: addi    r4, r4, 58
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(58);

label_80317780:
    ctx->pc = 0x80317780u;
    // 80317780: bl      0x8026F970
    {
            ctx->lr = 0x80317784u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317784:
    ctx->pc = 0x80317784u;
    ctx->downcount -= 7;
    // 80317784: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317788:
    ctx->pc = 0x80317788u;
    // 80317788: cmpwi   r29, 3
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

label_8031778C:
    ctx->pc = 0x8031778Cu;
    // 8031778C: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80317790:
    ctx->pc = 0x80317790u;
    // 80317790: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80317794:
    ctx->pc = 0x80317794u;
    // 80317794: or   r0, r0, r26
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[26];
    }

label_80317798:
    ctx->pc = 0x80317798u;
    // 80317798: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031779C:
    ctx->pc = 0x8031779Cu;
    // 8031779C: bc    12, 2, 0x803177A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803177A8;
        }
    }

label_803177A0:
    ctx->pc = 0x803177A0u;
    ctx->downcount -= 2;
    // 803177A0: cmpwi   r29, 6
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803177A4:
    ctx->pc = 0x803177A4u;
    // 803177A4: bc    4, 2, 0x803177AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803177AC;
        }
    }

label_803177A8:
    ctx->pc = 0x803177A8u;
    ctx->downcount -= 1;
    // 803177A8: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_803177AC:
    ctx->pc = 0x803177ACu;
    ctx->downcount -= 5;
    // 803177AC: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_803177B0:
    ctx->pc = 0x803177B0u;
    // 803177B0: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803177B4:
    ctx->pc = 0x803177B4u;
    // 803177B4: addi    r4, r4, 21464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21464);

label_803177B8:
    ctx->pc = 0x803177B8u;
    // 803177B8: addi    r4, r4, 72
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(72);

label_803177BC:
    ctx->pc = 0x803177BCu;
    // 803177BC: bl      0x8026F970
    {
            ctx->lr = 0x803177C0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803177C0:
    ctx->pc = 0x803177C0u;
    ctx->downcount -= 4;
    // 803177C0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803177C4:
    ctx->pc = 0x803177C4u;
    // 803177C4: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_803177C8:
    ctx->pc = 0x803177C8u;
    // 803177C8: or   r0, r0, r27
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[27];
    }

label_803177CC:
    ctx->pc = 0x803177CCu;
    // 803177CC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803177D0:
    ctx->pc = 0x803177D0u;
    ctx->downcount -= 4;
    // 803177D0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803177D4:
    ctx->pc = 0x803177D4u;
    // 803177D4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803177D8:
    ctx->pc = 0x803177D8u;
    // 803177D8: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803177DC:
    ctx->pc = 0x803177DCu;
    // 803177DC: bl      0x803175A4
    {
            ctx->lr = 0x803177E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803175A4u;
                return;
            }
            goto label_803175A4;
    }

label_803177E0:
    ctx->pc = 0x803177E0u;
    ctx->downcount -= 5;
    // 803177E0: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_803177E4:
    ctx->pc = 0x803177E4u;
    // 803177E4: addi    r3, r28, 148
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(148);

label_803177E8:
    ctx->pc = 0x803177E8u;
    // 803177E8: addi    r4, r4, 21464
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21464);

label_803177EC:
    ctx->pc = 0x803177ECu;
    // 803177EC: addi    r4, r4, 84
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(84);

label_803177F0:
    ctx->pc = 0x803177F0u;
    // 803177F0: bl      0x8026F970
    {
            ctx->lr = 0x803177F4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803177F4:
    ctx->pc = 0x803177F4u;
    ctx->downcount -= 8;
    // 803177F4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803177F8:
    ctx->pc = 0x803177F8u;
    // 803177F8: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803177FC:
    ctx->pc = 0x803177FCu;
    // 803177FC: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_80317800:
    ctx->pc = 0x80317800u;
    // 80317800: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80317804:
    ctx->pc = 0x80317804u;
    // 80317804: or   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[30];
    }

label_80317808:
    ctx->pc = 0x80317808u;
    // 80317808: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031780C:
    ctx->pc = 0x8031780Cu;
    // 8031780C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80317810:
    ctx->pc = 0x80317810u;
    // 80317810: bl      0x803175A4
    {
            ctx->lr = 0x80317814u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803175A4u;
                return;
            }
            goto label_803175A4;
    }

label_80317814:
    ctx->pc = 0x80317814u;
    ctx->downcount -= 16;
    // 80317814: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317818:
    ctx->pc = 0x80317818u;
    // 80317818: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031781C:
    ctx->pc = 0x8031781Cu;
    // 8031781C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317820:
    ctx->pc = 0x80317820u;
    // 80317820: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80317824:
    ctx->pc = 0x80317824u;
    // 80317824: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317828:
    ctx->pc = 0x80317828u;
    ctx->downcount -= 21;
    // 80317828: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031782C:
    ctx->pc = 0x8031782Cu;
    // 8031782C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317830:
    ctx->pc = 0x80317830u;
    // 80317830: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317834:
    ctx->pc = 0x80317834u;
    // 80317834: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317838:
    ctx->pc = 0x80317838u;
    // 80317838: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031783C:
    ctx->pc = 0x8031783Cu;
    // 8031783C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317840:
    ctx->pc = 0x80317840u;
    // 80317840: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317844:
    ctx->pc = 0x80317844u;
    // 80317844: addi    r31, r31, 21464
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(21464);

label_80317848:
    ctx->pc = 0x80317848u;
    // 80317848: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031784C:
    ctx->pc = 0x8031784Cu;
    // 8031784C: addi    r4, r31, 92
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(92);

label_80317850:
    ctx->pc = 0x80317850u;
    // 80317850: bl      0x8026F970
    {
            ctx->lr = 0x80317854u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317854:
    ctx->pc = 0x80317854u;
    ctx->downcount -= 8;
    // 80317854: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80317858:
    ctx->pc = 0x80317858u;
    // 80317858: cntlzw r0, r30
    {
        u32 v = ctx->gpr[30];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_8031785C:
    ctx->pc = 0x8031785Cu;
    // 8031785C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80317860:
    ctx->pc = 0x80317860u;
    // 80317860: addi    r4, r31, 107
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(107);

label_80317864:
    ctx->pc = 0x80317864u;
    // 80317864: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80317868:
    ctx->pc = 0x80317868u;
    // 80317868: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031786C:
    ctx->pc = 0x8031786Cu;
    // 8031786C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80317870:
    ctx->pc = 0x80317870u;
    // 80317870: bl      0x8026F970
    {
            ctx->lr = 0x80317874u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317874:
    ctx->pc = 0x80317874u;
    ctx->downcount -= 9;
    // 80317874: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_80317878:
    ctx->pc = 0x80317878u;
    // 80317878: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8031787C:
    ctx->pc = 0x8031787Cu;
    // 8031787C: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80317880:
    ctx->pc = 0x80317880u;
    // 80317880: addi    r4, r31, 122
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(122);

label_80317884:
    ctx->pc = 0x80317884u;
    // 80317884: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80317888:
    ctx->pc = 0x80317888u;
    // 80317888: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_8031788C:
    ctx->pc = 0x8031788Cu;
    // 8031788C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317890:
    ctx->pc = 0x80317890u;
    // 80317890: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80317894:
    ctx->pc = 0x80317894u;
    // 80317894: bl      0x8026F970
    {
            ctx->lr = 0x80317898u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317898:
    ctx->pc = 0x80317898u;
    ctx->downcount -= 9;
    // 80317898: addi    r0, r30, -2
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-2);

label_8031789C:
    ctx->pc = 0x8031789Cu;
    // 8031789C: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_803178A0:
    ctx->pc = 0x803178A0u;
    // 803178A0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803178A4:
    ctx->pc = 0x803178A4u;
    // 803178A4: addi    r4, r31, 137
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(137);

label_803178A8:
    ctx->pc = 0x803178A8u;
    // 803178A8: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803178AC:
    ctx->pc = 0x803178ACu;
    // 803178AC: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_803178B0:
    ctx->pc = 0x803178B0u;
    // 803178B0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803178B4:
    ctx->pc = 0x803178B4u;
    // 803178B4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_803178B8:
    ctx->pc = 0x803178B8u;
    // 803178B8: bl      0x8026F970
    {
            ctx->lr = 0x803178BCu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803178BC:
    ctx->pc = 0x803178BCu;
    ctx->downcount -= 22;
    // 803178BC: addi    r0, r30, -3
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-3);

label_803178C0:
    ctx->pc = 0x803178C0u;
    // 803178C0: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_803178C4:
    ctx->pc = 0x803178C4u;
    // 803178C4: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_803178C8:
    ctx->pc = 0x803178C8u;
    // 803178C8: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_803178CC:
    ctx->pc = 0x803178CCu;
    // 803178CC: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_803178D0:
    ctx->pc = 0x803178D0u;
    // 803178D0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803178D4:
    ctx->pc = 0x803178D4u;
    // 803178D4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803178D8:
    ctx->pc = 0x803178D8u;
    // 803178D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803178DC:
    ctx->pc = 0x803178DCu;
    // 803178DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803178E0:
    ctx->pc = 0x803178E0u;
    // 803178E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803178E4:
    ctx->pc = 0x803178E4u;
    // 803178E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803178E8:
    ctx->pc = 0x803178E8u;
    ctx->downcount -= 14;
    // 803178E8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803178EC:
    ctx->pc = 0x803178ECu;
    // 803178EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803178F0:
    ctx->pc = 0x803178F0u;
    // 803178F0: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_803178F4:
    ctx->pc = 0x803178F4u;
    // 803178F4: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803178F8:
    ctx->pc = 0x803178F8u;
    // 803178F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803178FC:
    ctx->pc = 0x803178FCu;
    // 803178FC: addi    r6, r6, 21464
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(21464);

label_80317900:
    ctx->pc = 0x80317900u;
    // 80317900: addi    r5, r6, 152
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(152);

label_80317904:
    ctx->pc = 0x80317904u;
    // 80317904: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317908:
    ctx->pc = 0x80317908u;
    // 80317908: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031790C:
    ctx->pc = 0x8031790Cu;
    // 8031790C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317910:
    ctx->pc = 0x80317910u;
    // 80317910: addi    r6, r6, 170
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(170);

label_80317914:
    ctx->pc = 0x80317914u;
    // 80317914: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317918:
    ctx->pc = 0x80317918u;
    // 80317918: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031791C:
    ctx->pc = 0x8031791Cu;
    // 8031791C: bl      0x8036E994
    {
            ctx->lr = 0x80317920u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_80317920:
    ctx->pc = 0x80317920u;
    ctx->downcount -= 18;
    // 80317920: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_80317924:
    ctx->pc = 0x80317924u;
    // 80317924: li      r0, 255
    ctx->gpr[0] = (u32)(s32)(255);

label_80317928:
    ctx->pc = 0x80317928u;
    // 80317928: addi    r4, r4, -24216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-24216);

label_8031792C:
    ctx->pc = 0x8031792Cu;
    // 8031792C: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317930:
    ctx->pc = 0x80317930u;
    // 80317930: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_80317934:
    ctx->pc = 0x80317934u;
    // 80317934: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80317938:
    ctx->pc = 0x80317938u;
    // 80317938: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_8031793C:
    ctx->pc = 0x8031793Cu;
    // 8031793C: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_80317940:
    ctx->pc = 0x80317940u;
    // 80317940: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80317944:
    ctx->pc = 0x80317944u;
    // 80317944: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80317948:
    ctx->pc = 0x80317948u;
    // 80317948: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031794C:
    ctx->pc = 0x8031794Cu;
    // 8031794C: stb     r0, 282(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(282);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317950:
    ctx->pc = 0x80317950u;
    // 80317950: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317954:
    ctx->pc = 0x80317954u;
    // 80317954: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317958:
    ctx->pc = 0x80317958u;
    // 80317958: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031795C:
    ctx->pc = 0x8031795Cu;
    // 8031795C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317960:
    ctx->pc = 0x80317960u;
    // 80317960: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317964:
    ctx->pc = 0x80317964u;
    ctx->downcount -= 18;
    // 80317964: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317968:
    ctx->pc = 0x80317968u;
    // 80317968: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031796C:
    // 8031796C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317970:
    ctx->pc = 0x80317970u;
    // 80317970: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317974:
    ctx->pc = 0x80317974u;
    // 80317974: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317978:
    // 80317978: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031797C:
    // 8031797C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317980:
    // 80317980: bc    12, 2, 0x803179A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803179A0;
        }
    }

label_80317984:
    ctx->downcount -= 1;
    // 80317984: bc    12, 2, 0x80317990
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317990;
        }
    }

label_80317988:
    ctx->downcount -= 2;
    // 80317988: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031798C:
    // 8031798C: bl      0x801F9B68
    {
            ctx->lr = 0x80317990u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_80317990:
    ctx->downcount -= 2;
    // 80317990: cmpwi   r31, 0
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

label_80317994:
    // 80317994: bc    4, 1, 0x803179A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803179A0;
        }
    }

label_80317998:
    ctx->downcount -= 2;
    // 80317998: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031799C:
    // 8031799C: bl      0x801C1C90
    {
            ctx->lr = 0x803179A0u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803179A0:
    ctx->downcount -= 17;
    // 803179A0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803179A4:
    ctx->pc = 0x803179A4u;
    // 803179A4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803179A8:
    ctx->pc = 0x803179A8u;
    // 803179A8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803179AC:
    ctx->pc = 0x803179ACu;
    // 803179AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803179B0:
    // 803179B0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803179B4:
    ctx->pc = 0x803179B4u;
    // 803179B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803179B8:
    ctx->downcount -= 2;
    // 803179B8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803179BC:
    // 803179BC: b       0x80317964
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317964u;
                return;
            }
            goto label_80317964;
    }

label_803179C0:
    ctx->downcount -= 2;
    // 803179C0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803179C4:
    // 803179C4: b       0x80317964
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317964u;
                return;
            }
            goto label_80317964;
    }

label_803179C8:
    ctx->pc = 0x803179C8u;
    ctx->downcount -= 6;
    // 803179C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803179CC:
    ctx->pc = 0x803179CCu;
    // 803179CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803179D0:
    // 803179D0: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_803179D4:
    // 803179D4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_803179D8:
    ctx->pc = 0x803179D8u;
    // 803179D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803179DC:
    // 803179DC: bl      0x8026F5F4
    {
            ctx->lr = 0x803179E0u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_803179E0:
    ctx->downcount -= 4;
    // 803179E0: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_803179E4:
    // 803179E4: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_803179E8:
    // 803179E8: li      r3, 96
    ctx->gpr[3] = (u32)(s32)(96);

label_803179EC:
    // 803179EC: bl      0x802B735C
    {
            ctx->lr = 0x803179F0u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_803179F0:
    ctx->pc = 0x803179F0u;
    ctx->downcount -= 5;
    // 803179F0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803179F4:
    ctx->pc = 0x803179F4u;
    // 803179F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803179F8:
    // 803179F8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803179FC:
    ctx->pc = 0x803179FCu;
    // 803179FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317A00:
    ctx->pc = 0x80317A00u;
    ctx->downcount -= 9;
    // 80317A00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317A04:
    ctx->pc = 0x80317A04u;
    // 80317A04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317A08:
    ctx->pc = 0x80317A08u;
    // 80317A08: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317A0C:
    ctx->pc = 0x80317A0Cu;
    // 80317A0C: stfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80317A0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80317A10:
    ctx->pc = 0x80317A10u;
    // 80317A10: psq_st   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80317A10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80317A10u);
        if (ctx->exception) return;
    }

label_80317A14:
    ctx->pc = 0x80317A14u;
    // 80317A14: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x80317A14u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_80317A18:
    // 80317A18: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80317A1C:
    // 80317A1C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317A20:
    // 80317A20: bl      0x8026F5F4
    {
            ctx->lr = 0x80317A24u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80317A24:
    ctx->pc = 0x80317A24u;
    ctx->downcount -= 5;
    // 80317A24: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80317A24u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80317A28:
    ctx->pc = 0x80317A28u;
    // 80317A28: lfs     f2, -11792(r2)
    if (!ppc_fp_available_inline(ctx, 0x80317A28u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11792);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80317A2C:
    // 80317A2C: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80317A30:
    // 80317A30: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317A34:
    // 80317A34: bl      0x802B72E0
    {
            ctx->lr = 0x80317A38u;
            ctx->pc = 0x802B72E0u;
            return;
    }

label_80317A38:
    ctx->pc = 0x80317A38u;
    ctx->downcount -= 7;
    // 80317A38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317A3C:
    ctx->pc = 0x80317A3Cu;
    // 80317A3C: psq_l   f31, 24(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80317A3Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80317A3Cu);
        if (ctx->exception) return;
    }

label_80317A40:
    ctx->pc = 0x80317A40u;
    // 80317A40: lfd     f31, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80317A40u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80317A44:
    ctx->pc = 0x80317A44u;
    // 80317A44: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317A48:
    // 80317A48: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80317A4C:
    ctx->pc = 0x80317A4Cu;
    // 80317A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317A50:
    ctx->pc = 0x80317A50u;
    ctx->downcount -= 13;
    // 80317A50: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317A54:
    ctx->pc = 0x80317A54u;
    // 80317A54: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317A58:
    // 80317A58: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_80317A5C:
    // 80317A5C: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317A60:
    ctx->pc = 0x80317A60u;
    // 80317A60: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317A64:
    // 80317A64: addi    r5, r5, 21664
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(21664);

label_80317A68:
    // 80317A68: addi    r6, r5, 18
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(18);

label_80317A6C:
    // 80317A6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317A70:
    ctx->pc = 0x80317A70u;
    // 80317A70: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317A74:
    // 80317A74: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317A78:
    // 80317A78: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317A7C:
    // 80317A7C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317A80:
    // 80317A80: bl      0x8036B3A4
    {
            ctx->lr = 0x80317A84u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_80317A84:
    ctx->downcount -= 16;
    // 80317A84: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_80317A88:
    // 80317A88: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80317A8C:
    // 80317A8C: addi    r6, r6, -23912
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-23912);

label_80317A90:
    ctx->pc = 0x80317A90u;
    // 80317A90: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80317A94:
    // 80317A94: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_80317A98:
    // 80317A98: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_80317A9C:
    // 80317A9C: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_80317AA0:
    ctx->pc = 0x80317AA0u;
    // 80317AA0: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80317AA4:
    ctx->pc = 0x80317AA4u;
    // 80317AA4: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317AA8:
    ctx->pc = 0x80317AA8u;
    // 80317AA8: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317AAC:
    ctx->pc = 0x80317AACu;
    // 80317AAC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317AB0:
    ctx->pc = 0x80317AB0u;
    // 80317AB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317AB4:
    ctx->pc = 0x80317AB4u;
    // 80317AB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317AB8:
    // 80317AB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317ABC:
    ctx->pc = 0x80317ABCu;
    // 80317ABC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317AC0:
    ctx->pc = 0x80317AC0u;
    ctx->downcount -= 18;
    // 80317AC0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317AC4:
    ctx->pc = 0x80317AC4u;
    // 80317AC4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317AC8:
    // 80317AC8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317ACC:
    ctx->pc = 0x80317ACCu;
    // 80317ACC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317AD0:
    ctx->pc = 0x80317AD0u;
    // 80317AD0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317AD4:
    // 80317AD4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317AD8:
    // 80317AD8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317ADC:
    // 80317ADC: bc    12, 2, 0x80317AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317AFC;
        }
    }

label_80317AE0:
    ctx->downcount -= 1;
    // 80317AE0: bc    12, 2, 0x80317AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317AEC;
        }
    }

label_80317AE4:
    ctx->downcount -= 2;
    // 80317AE4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317AE8:
    // 80317AE8: bl      0x801F5A74
    {
            ctx->lr = 0x80317AECu;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_80317AEC:
    ctx->downcount -= 2;
    // 80317AEC: cmpwi   r31, 0
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

label_80317AF0:
    // 80317AF0: bc    4, 1, 0x80317AFC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317AFC;
        }
    }

label_80317AF4:
    ctx->downcount -= 2;
    // 80317AF4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317AF8:
    // 80317AF8: bl      0x801C1C90
    {
            ctx->lr = 0x80317AFCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80317AFC:
    ctx->downcount -= 17;
    // 80317AFC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317B00:
    ctx->pc = 0x80317B00u;
    // 80317B00: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317B04:
    ctx->pc = 0x80317B04u;
    // 80317B04: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317B08:
    ctx->pc = 0x80317B08u;
    // 80317B08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317B0C:
    // 80317B0C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317B10:
    ctx->pc = 0x80317B10u;
    // 80317B10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317B14:
    ctx->downcount -= 2;
    // 80317B14: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80317B18:
    // 80317B18: b       0x80317AC0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317AC0u;
                return;
            }
            goto label_80317AC0;
    }

label_80317B1C:
    ctx->downcount -= 2;
    // 80317B1C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317B20:
    // 80317B20: b       0x803179C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803179C8u;
                return;
            }
            goto label_803179C8;
    }

label_80317B24:
    ctx->downcount -= 2;
    // 80317B24: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317B28:
    // 80317B28: b       0x80317A00
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317A00u;
                return;
            }
            goto label_80317A00;
    }

label_80317B2C:
    ctx->downcount -= 2;
    // 80317B2C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317B30:
    // 80317B30: b       0x80317AC0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317AC0u;
                return;
            }
            goto label_80317AC0;
    }

label_80317B34:
    ctx->pc = 0x80317B34u;
    ctx->downcount -= 24;
    // 80317B34: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317B38:
    ctx->pc = 0x80317B38u;
    // 80317B38: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317B3C:
    // 80317B3C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80317B40:
    ctx->pc = 0x80317B40u;
    // 80317B40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317B44:
    // 80317B44: addi    r4, r4, 21720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21720);

label_80317B48:
    ctx->pc = 0x80317B48u;
    // 80317B48: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317B4C:
    // 80317B4C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317B50:
    // 80317B50: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317B54:
    ctx->pc = 0x80317B54u;
    // 80317B54: lwz     r5, -13440(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13440);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80317B58:
    ctx->pc = 0x80317B58u;
    // 80317B58: lwz     r5, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80317B5C:
    // 80317B5C: addi    r0, r5, -3
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-3);

label_80317B60:
    // 80317B60: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80317B64:
    // 80317B64: rlwinm r31, r0, 27, 5, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80317B68:
    // 80317B68: bl      0x8026F970
    {
            ctx->lr = 0x80317B6Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317B6C:
    ctx->downcount -= 2;
    // 80317B6C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317B70:
    // 80317B70: bc    12, 2, 0x80317B88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317B88;
        }
    }

label_80317B74:
    ctx->pc = 0x80317B74u;
    ctx->downcount -= 5;
    // 80317B74: lbz     r4, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80317B78:
    // 80317B78: cntlzw r0, r31
    {
        u32 v = ctx->gpr[31];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80317B7C:
    // 80317B7C: rlwinm r0, r0, 27, 5, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80317B80:
    // 80317B80: rlwimi r0, r4, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[4], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80317B84:
    ctx->pc = 0x80317B84u;
    // 80317B84: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317B88:
    ctx->downcount -= 5;
    // 80317B88: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80317B8C:
    // 80317B8C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317B90:
    // 80317B90: addi    r4, r4, 21720
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(21720);

label_80317B94:
    // 80317B94: addi    r4, r4, 10
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(10);

label_80317B98:
    // 80317B98: bl      0x8026F970
    {
            ctx->lr = 0x80317B9Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80317B9C:
    ctx->downcount -= 2;
    // 80317B9C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317BA0:
    // 80317BA0: bc    12, 2, 0x80317BB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317BB4;
        }
    }

label_80317BA4:
    ctx->pc = 0x80317BA4u;
    ctx->downcount -= 4;
    // 80317BA4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317BA8:
    // 80317BA8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80317BAC:
    // 80317BAC: or   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[31];
    }

label_80317BB0:
    ctx->pc = 0x80317BB0u;
    // 80317BB0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80317BB4:
    ctx->pc = 0x80317BB4u;
    ctx->downcount -= 16;
    // 80317BB4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317BB8:
    ctx->pc = 0x80317BB8u;
    // 80317BB8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317BBC:
    ctx->pc = 0x80317BBCu;
    // 80317BBC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317BC0:
    // 80317BC0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317BC4:
    ctx->pc = 0x80317BC4u;
    // 80317BC4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317BC8:
    ctx->downcount -= 2;
    // 80317BC8: li      r3, 123
    ctx->gpr[3] = (u32)(s32)(123);

label_80317BCC:
    // 80317BCC: b       0x802B73BC
    {
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80317BD0:
    ctx->downcount -= 1;
    // 80317BD0: b       0x80317B34
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317B34u;
                return;
            }
            goto label_80317B34;
    }

label_80317BD4:
    ctx->pc = 0x80317BD4u;
    ctx->downcount -= 24;
    // 80317BD4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317BD8:
    ctx->pc = 0x80317BD8u;
    // 80317BD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317BDC:
    // 80317BDC: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317BE0:
    // 80317BE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317BE4:
    ctx->pc = 0x80317BE4u;
    // 80317BE4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317BE8:
    // 80317BE8: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317BEC:
    // 80317BEC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317BF0:
    ctx->pc = 0x80317BF0u;
    // 80317BF0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317BF4:
    // 80317BF4: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80317BF8:
    // 80317BF8: addi    r31, r31, 21720
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(21720);

label_80317BFC:
    // 80317BFC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317C00:
    // 80317C00: addi    r5, r31, 24
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(24);

label_80317C04:
    // 80317C04: addi    r6, r31, 42
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(42);

label_80317C08:
    // 80317C08: bl      0x80371668
    {
            ctx->lr = 0x80317C0Cu;
            ctx->pc = 0x80371668u;
            return;
    }

label_80317C0C:
    ctx->downcount -= 13;
    // 80317C0C: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_80317C10:
    // 80317C10: addi    r4, r31, 63
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(63);

label_80317C14:
    // 80317C14: addi    r7, r7, -23616
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-23616);

label_80317C18:
    ctx->pc = 0x80317C18u;
    // 80317C18: stw     r7, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80317C1C:
    // 80317C1C: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_80317C20:
    // 80317C20: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_80317C24:
    // 80317C24: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_80317C28:
    // 80317C28: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_80317C2C:
    ctx->pc = 0x80317C2Cu;
    // 80317C2C: stw     r5, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80317C30:
    // 80317C30: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80317C34:
    ctx->pc = 0x80317C34u;
    // 80317C34: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80317C38:
    ctx->pc = 0x80317C38u;
    // 80317C38: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317C3C:
    // 80317C3C: bl      0x8000E7F4
    {
            ctx->lr = 0x80317C40u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80317C40:
    ctx->downcount -= 17;
    // 80317C40: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317C44:
    ctx->pc = 0x80317C44u;
    // 80317C44: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317C48:
    ctx->pc = 0x80317C48u;
    // 80317C48: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317C4C:
    ctx->pc = 0x80317C4Cu;
    // 80317C4C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317C50:
    // 80317C50: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317C54:
    ctx->pc = 0x80317C54u;
    // 80317C54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317C58:
    ctx->pc = 0x80317C58u;
    ctx->downcount -= 18;
    // 80317C58: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317C5C:
    ctx->pc = 0x80317C5Cu;
    // 80317C5C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317C60:
    // 80317C60: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317C64:
    ctx->pc = 0x80317C64u;
    // 80317C64: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317C68:
    ctx->pc = 0x80317C68u;
    // 80317C68: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317C6C:
    // 80317C6C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317C70:
    // 80317C70: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317C74:
    // 80317C74: bc    12, 2, 0x80317CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317CA8;
        }
    }

label_80317C78:
    ctx->downcount -= 1;
    // 80317C78: bc    12, 2, 0x80317C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317C98;
        }
    }

label_80317C7C:
    ctx->downcount -= 1;
    // 80317C7C: bc    12, 2, 0x80317C98
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317C98;
        }
    }

label_80317C80:
    ctx->downcount -= 3;
    // 80317C80: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317C84:
    // 80317C84: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317C88:
    // 80317C88: bl      0x801F5C24
    {
            ctx->lr = 0x80317C8Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80317C8C:
    ctx->downcount -= 3;
    // 80317C8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317C90:
    // 80317C90: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317C94:
    // 80317C94: bl      0x801F9C70
    {
            ctx->lr = 0x80317C98u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80317C98:
    ctx->downcount -= 2;
    // 80317C98: cmpwi   r31, 0
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

label_80317C9C:
    // 80317C9C: bc    4, 1, 0x80317CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317CA8;
        }
    }

label_80317CA0:
    ctx->downcount -= 2;
    // 80317CA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317CA4:
    // 80317CA4: bl      0x801C1C90
    {
            ctx->lr = 0x80317CA8u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80317CA8:
    ctx->downcount -= 17;
    // 80317CA8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80317CAC:
    ctx->pc = 0x80317CACu;
    // 80317CAC: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317CB0:
    ctx->pc = 0x80317CB0u;
    // 80317CB0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317CB4:
    ctx->pc = 0x80317CB4u;
    // 80317CB4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317CB8:
    // 80317CB8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317CBC:
    ctx->pc = 0x80317CBCu;
    // 80317CBC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317CC0:
    ctx->downcount -= 2;
    // 80317CC0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80317CC4:
    // 80317CC4: b       0x80317C58
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317C58u;
                return;
            }
            goto label_80317C58;
    }

label_80317CC8:
    ctx->downcount -= 2;
    // 80317CC8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317CCC:
    // 80317CCC: b       0x80317BC8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317BC8u;
                return;
            }
            goto label_80317BC8;
    }

label_80317CD0:
    ctx->downcount -= 2;
    // 80317CD0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80317CD4:
    // 80317CD4: b       0x80317C58
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317C58u;
                return;
            }
            goto label_80317C58;
    }

label_80317CD8:
    ctx->pc = 0x80317CD8u;
    ctx->downcount -= 11;
    // 80317CD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317CDC:
    ctx->pc = 0x80317CDCu;
    // 80317CDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317CE0:
    ctx->pc = 0x80317CE0u;
    // 80317CE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317CE4:
    ctx->pc = 0x80317CE4u;
    // 80317CE4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80317CE8:
    ctx->pc = 0x80317CE8u;
    // 80317CE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317CEC:
    ctx->pc = 0x80317CECu;
    // 80317CEC: li      r7, 2048
    ctx->gpr[7] = (u32)(s32)(2048);

label_80317CF0:
    ctx->pc = 0x80317CF0u;
    // 80317CF0: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317CF4:
    ctx->pc = 0x80317CF4u;
    // 80317CF4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317CF8:
    ctx->pc = 0x80317CF8u;
    // 80317CF8: lwz     r5, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80317CFC:
    ctx->pc = 0x80317CFCu;
    // 80317CFC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317D00:
    ctx->pc = 0x80317D00u;
    // 80317D00: bl      0x8026FCD4
    {
            ctx->lr = 0x80317D04u;
            ctx->pc = 0x8026FCD4u;
            return;
    }

label_80317D04:
    ctx->pc = 0x80317D04u;
    ctx->downcount -= 3;
    // 80317D04: lbz     r0, 209(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80317D08:
    ctx->pc = 0x80317D08u;
    // 80317D08: cmpwi   r0, 0
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

label_80317D0C:
    ctx->pc = 0x80317D0Cu;
    // 80317D0C: bc    12, 2, 0x80317D30
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80317D30;
        }
    }

label_80317D10:
    ctx->pc = 0x80317D10u;
    ctx->downcount -= 6;
    // 80317D10: lwz     r12, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80317D14:
    ctx->pc = 0x80317D14u;
    // 80317D14: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80317D18:
    ctx->pc = 0x80317D18u;
    // 80317D18: lwz     r12, 116(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(116);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80317D1C:
    ctx->pc = 0x80317D1Cu;
    // 80317D1C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80317D20:
    ctx->pc = 0x80317D20u;
    // 80317D20: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80317D24u;
            ctx->pc = target;
            return;
        }
    }

label_80317D24:
    ctx->pc = 0x80317D24u;
    ctx->downcount -= 3;
    // 80317D24: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80317D28:
    ctx->pc = 0x80317D28u;
    // 80317D28: addi    r4, r4, 2
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(2);

label_80317D2C:
    ctx->pc = 0x80317D2Cu;
    // 80317D2C: bl      0x803457B8
    {
            ctx->lr = 0x80317D30u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80317D30:
    ctx->pc = 0x80317D30u;
    ctx->downcount -= 6;
    // 80317D30: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317D34:
    ctx->pc = 0x80317D34u;
    // 80317D34: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317D38:
    ctx->pc = 0x80317D38u;
    // 80317D38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317D3C:
    ctx->pc = 0x80317D3Cu;
    // 80317D3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317D40:
    ctx->pc = 0x80317D40u;
    // 80317D40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317D44:
    ctx->pc = 0x80317D44u;
    ctx->downcount -= 6;
    // 80317D44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317D48:
    ctx->pc = 0x80317D48u;
    // 80317D48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317D4C:
    // 80317D4C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80317D50:
    // 80317D50: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317D54:
    ctx->pc = 0x80317D54u;
    // 80317D54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317D58:
    // 80317D58: bl      0x8026F5F4
    {
            ctx->lr = 0x80317D5Cu;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80317D5C:
    ctx->downcount -= 4;
    // 80317D5C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80317D60:
    // 80317D60: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80317D64:
    // 80317D64: li      r3, 166
    ctx->gpr[3] = (u32)(s32)(166);

label_80317D68:
    // 80317D68: bl      0x802B735C
    {
            ctx->lr = 0x80317D6Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80317D6C:
    ctx->pc = 0x80317D6Cu;
    ctx->downcount -= 5;
    // 80317D6C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317D70:
    ctx->pc = 0x80317D70u;
    // 80317D70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317D74:
    // 80317D74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317D78:
    ctx->pc = 0x80317D78u;
    // 80317D78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317D7C:
    ctx->pc = 0x80317D7Cu;
    ctx->downcount -= 6;
    // 80317D7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317D80:
    ctx->pc = 0x80317D80u;
    // 80317D80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317D84:
    // 80317D84: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80317D88:
    // 80317D88: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317D8C:
    ctx->pc = 0x80317D8Cu;
    // 80317D8C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317D90:
    // 80317D90: bl      0x8026F5F4
    {
            ctx->lr = 0x80317D94u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_80317D94:
    ctx->downcount -= 4;
    // 80317D94: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80317D98:
    // 80317D98: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_80317D9C:
    // 80317D9C: li      r3, 166
    ctx->gpr[3] = (u32)(s32)(166);

label_80317DA0:
    // 80317DA0: bl      0x802B735C
    {
            ctx->lr = 0x80317DA4u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_80317DA4:
    ctx->pc = 0x80317DA4u;
    ctx->downcount -= 5;
    // 80317DA4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317DA8:
    ctx->pc = 0x80317DA8u;
    // 80317DA8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317DAC:
    // 80317DAC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317DB0:
    ctx->pc = 0x80317DB0u;
    // 80317DB0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317DB4:
    ctx->pc = 0x80317DB4u;
    ctx->downcount -= 4;
    // 80317DB4: lfs     f2, -11784(r2)
    if (!ppc_fp_available_inline(ctx, 0x80317DB4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11784);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80317DB8:
    // 80317DB8: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_80317DBC:
    // 80317DBC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317DC0:
    // 80317DC0: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_80317DC4:
    ctx->pc = 0x80317DC4u;
    ctx->downcount -= 23;
    // 80317DC4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317DC8:
    ctx->pc = 0x80317DC8u;
    // 80317DC8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317DCC:
    // 80317DCC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80317DD0:
    // 80317DD0: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80317DD4:
    ctx->pc = 0x80317DD4u;
    // 80317DD4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317DD8:
    // 80317DD8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317DDC:
    ctx->pc = 0x80317DDCu;
    // 80317DDC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317DE0:
    // 80317DE0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_80317DE4:
    // 80317DE4: addi    r4, r31, 21800
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(21800);

label_80317DE8:
    // 80317DE8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317DEC:
    // 80317DEC: addi    r5, r4, 15
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15);

label_80317DF0:
    // 80317DF0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317DF4:
    // 80317DF4: bl      0x802703A8
    {
            ctx->lr = 0x80317DF8u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80317DF8:
    ctx->downcount -= 7;
    // 80317DF8: addi    r31, r31, 21800
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(21800);

label_80317DFC:
    // 80317DFC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E00:
    // 80317E00: addi    r5, r31, 40
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(40);

label_80317E04:
    // 80317E04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317E08:
    // 80317E08: addi    r6, r31, 43
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(43);

label_80317E0C:
    // 80317E0C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E10:
    // 80317E10: bl      0x8027035C
    {
            ctx->lr = 0x80317E14u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E14:
    ctx->downcount -= 6;
    // 80317E14: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E18:
    // 80317E18: addi    r5, r31, 54
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(54);

label_80317E1C:
    // 80317E1C: addi    r6, r31, 43
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(43);

label_80317E20:
    // 80317E20: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80317E24:
    // 80317E24: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E28:
    // 80317E28: bl      0x8027035C
    {
            ctx->lr = 0x80317E2Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E2C:
    ctx->downcount -= 6;
    // 80317E2C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E30:
    // 80317E30: addi    r5, r31, 58
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(58);

label_80317E34:
    // 80317E34: addi    r6, r31, 43
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(43);

label_80317E38:
    // 80317E38: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80317E3C:
    // 80317E3C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E40:
    // 80317E40: bl      0x8027035C
    {
            ctx->lr = 0x80317E44u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E44:
    ctx->downcount -= 6;
    // 80317E44: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E48:
    // 80317E48: addi    r5, r31, 63
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(63);

label_80317E4C:
    // 80317E4C: addi    r6, r31, 43
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(43);

label_80317E50:
    // 80317E50: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80317E54:
    // 80317E54: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E58:
    // 80317E58: bl      0x8027035C
    {
            ctx->lr = 0x80317E5Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E5C:
    ctx->downcount -= 6;
    // 80317E5C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E60:
    // 80317E60: addi    r5, r31, 69
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(69);

label_80317E64:
    // 80317E64: addi    r6, r31, 75
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(75);

label_80317E68:
    // 80317E68: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80317E6C:
    // 80317E6C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E70:
    // 80317E70: bl      0x8027035C
    {
            ctx->lr = 0x80317E74u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E74:
    ctx->downcount -= 6;
    // 80317E74: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E78:
    // 80317E78: addi    r5, r31, 84
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(84);

label_80317E7C:
    // 80317E7C: addi    r6, r31, 75
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(75);

label_80317E80:
    // 80317E80: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80317E84:
    // 80317E84: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80317E88:
    // 80317E88: bl      0x8027035C
    {
            ctx->lr = 0x80317E8Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80317E8C:
    ctx->downcount -= 9;
    // 80317E8C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317E90:
    // 80317E90: addi    r5, r31, 91
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(91);

label_80317E94:
    // 80317E94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317E98:
    // 80317E98: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_80317E9C:
    // 80317E9C: li      r7, 5
    ctx->gpr[7] = (u32)(s32)(5);

label_80317EA0:
    // 80317EA0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80317EA4:
    // 80317EA4: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80317EA8:
    // 80317EA8: li      r10, 1
    ctx->gpr[10] = (u32)(s32)(1);

label_80317EAC:
    // 80317EAC: bl      0x802701C0
    {
            ctx->lr = 0x80317EB0u;
            ctx->pc = 0x802701C0u;
            return;
    }

label_80317EB0:
    ctx->downcount -= 4;
    // 80317EB0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80317EB4:
    // 80317EB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317EB8:
    // 80317EB8: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80317EBC:
    // 80317EBC: bl      0x80270194
    {
            ctx->lr = 0x80317EC0u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80317EC0:
    ctx->pc = 0x80317EC0u;
    ctx->downcount -= 16;
    // 80317EC0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80317EC4:
    ctx->pc = 0x80317EC4u;
    // 80317EC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317EC8:
    ctx->pc = 0x80317EC8u;
    // 80317EC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317ECC:
    // 80317ECC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317ED0:
    ctx->pc = 0x80317ED0u;
    // 80317ED0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317ED4:
    ctx->pc = 0x80317ED4u;
    ctx->downcount -= 6;
    // 80317ED4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317ED8:
    ctx->pc = 0x80317ED8u;
    // 80317ED8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317EDC:
    ctx->pc = 0x80317EDCu;
    // 80317EDC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317EE0:
    ctx->pc = 0x80317EE0u;
    // 80317EE0: lwz     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80317EE4:
    // 80317EE4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317EE8:
    // 80317EE8: bl      0x8027044C
    {
            ctx->lr = 0x80317EECu;
            ctx->pc = 0x8027044Cu;
            return;
    }

label_80317EEC:
    ctx->downcount -= 7;
    // 80317EEC: cntlzw r0, r3
    {
        u32 v = ctx->gpr[3];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80317EF0:
    // 80317EF0: rlwinm r3, r0, 27, 5, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80317EF4:
    ctx->pc = 0x80317EF4u;
    // 80317EF4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317EF8:
    ctx->pc = 0x80317EF8u;
    // 80317EF8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317EFC:
    // 80317EFC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317F00:
    ctx->pc = 0x80317F00u;
    // 80317F00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317F04:
    ctx->pc = 0x80317F04u;
    ctx->downcount -= 8;
    // 80317F04: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317F08:
    ctx->pc = 0x80317F08u;
    // 80317F08: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317F0C:
    // 80317F0C: cmpwi   r5, 1
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

label_80317F10:
    ctx->pc = 0x80317F10u;
    // 80317F10: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317F14:
    ctx->pc = 0x80317F14u;
    // 80317F14: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317F18:
    // 80317F18: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317F1C:
    ctx->pc = 0x80317F1Cu;
    // 80317F1C: stw     r4, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317F20:
    // 80317F20: bc    4, 2, 0x80317F38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80317F38;
        }
    }

label_80317F24:
    ctx->downcount -= 4;
    // 80317F24: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80317F28:
    // 80317F28: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_80317F2C:
    // 80317F2C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317F30:
    // 80317F30: bl      0x80270194
    {
            ctx->lr = 0x80317F34u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80317F34:
    ctx->downcount -= 1;
    // 80317F34: b       0x80317F48
    {
            goto label_80317F48;
    }

label_80317F38:
    ctx->downcount -= 4;
    // 80317F38: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80317F3C:
    // 80317F3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80317F40:
    // 80317F40: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80317F44:
    // 80317F44: bl      0x80270194
    {
            ctx->lr = 0x80317F48u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80317F48:
    ctx->downcount -= 2;
    // 80317F48: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80317F4C:
    // 80317F4C: bl      0x801F5C64
    {
            ctx->lr = 0x80317F50u;
            ctx->pc = 0x801F5C64u;
            return;
    }

label_80317F50:
    ctx->pc = 0x80317F50u;
    ctx->downcount -= 6;
    // 80317F50: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317F54:
    ctx->pc = 0x80317F54u;
    // 80317F54: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317F58:
    ctx->pc = 0x80317F58u;
    // 80317F58: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317F5C:
    // 80317F5C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317F60:
    ctx->pc = 0x80317F60u;
    // 80317F60: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317F64:
    ctx->pc = 0x80317F64u;
    ctx->downcount -= 9;
    // 80317F64: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317F68:
    ctx->pc = 0x80317F68u;
    // 80317F68: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317F6C:
    // 80317F6C: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80317F70:
    // 80317F70: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80317F74:
    ctx->pc = 0x80317F74u;
    // 80317F74: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317F78:
    // 80317F78: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80317F7C:
    ctx->pc = 0x80317F7Cu;
    // 80317F7C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80317F80:
    // 80317F80: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80317F84:
    // 80317F84: bl      0x80371C8C
    {
            ctx->lr = 0x80317F88u;
            ctx->pc = 0x80371C8Cu;
            return;
    }

label_80317F88:
    ctx->downcount -= 15;
    // 80317F88: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_80317F8C:
    // 80317F8C: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_80317F90:
    // 80317F90: addi    r5, r5, -23320
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-23320);

label_80317F94:
    ctx->pc = 0x80317F94u;
    // 80317F94: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80317F98:
    // 80317F98: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_80317F9C:
    // 80317F9C: addi    r3, r3, 21800
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21800);

label_80317FA0:
    // 80317FA0: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_80317FA4:
    // 80317FA4: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_80317FA8:
    ctx->pc = 0x80317FA8u;
    // 80317FA8: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80317FAC:
    // 80317FAC: addi    r4, r3, 100
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(100);

label_80317FB0:
    // 80317FB0: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_80317FB4:
    // 80317FB4: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80317FB8:
    ctx->pc = 0x80317FB8u;
    // 80317FB8: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80317FBC:
    ctx->pc = 0x80317FBCu;
    // 80317FBC: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317FC0:
    // 80317FC0: bl      0x8000E7F4
    {
            ctx->lr = 0x80317FC4u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80317FC4:
    ctx->downcount -= 9;
    // 80317FC4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80317FC8:
    ctx->pc = 0x80317FC8u;
    // 80317FC8: stw     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317FCC:
    // 80317FCC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80317FD0:
    ctx->pc = 0x80317FD0u;
    // 80317FD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80317FD4:
    ctx->pc = 0x80317FD4u;
    // 80317FD4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80317FD8:
    ctx->pc = 0x80317FD8u;
    // 80317FD8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80317FDC:
    // 80317FDC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80317FE0:
    ctx->pc = 0x80317FE0u;
    // 80317FE0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317FE4:
    ctx->pc = 0x80317FE4u;
    ctx->downcount -= 1;
    // 80317FE4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80317FE8:
    ctx->pc = 0x80317FE8u;
    ctx->downcount -= 18;
    // 80317FE8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80317FEC:
    ctx->pc = 0x80317FECu;
    // 80317FEC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80317FF0:
    // 80317FF0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80317FF4:
    ctx->pc = 0x80317FF4u;
    // 80317FF4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80317FF8:
    ctx->pc = 0x80317FF8u;
    // 80317FF8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80317FFC:
    // 80317FFC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318000:
    // 80318000: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318004:
    // 80318004: bc    12, 2, 0x80318038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318038;
        }
    }

label_80318008:
    ctx->downcount -= 1;
    // 80318008: bc    12, 2, 0x80318028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318028;
        }
    }

label_8031800C:
    ctx->downcount -= 1;
    // 8031800C: bc    12, 2, 0x80318028
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318028;
        }
    }

label_80318010:
    ctx->downcount -= 3;
    // 80318010: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318014:
    // 80318014: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80318018:
    // 80318018: bl      0x801F5C24
    {
            ctx->lr = 0x8031801Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8031801C:
    ctx->downcount -= 3;
    // 8031801C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318020:
    // 80318020: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318024:
    // 80318024: bl      0x801F5BBC
    {
            ctx->lr = 0x80318028u;
            ctx->pc = 0x801F5BBCu;
            return;
    }

label_80318028:
    ctx->downcount -= 2;
    // 80318028: cmpwi   r31, 0
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

label_8031802C:
    // 8031802C: bc    4, 1, 0x80318038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80318038;
        }
    }

label_80318030:
    ctx->downcount -= 2;
    // 80318030: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318034:
    // 80318034: bl      0x801C1C90
    {
            ctx->lr = 0x80318038u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80318038:
    ctx->downcount -= 17;
    // 80318038: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031803C:
    ctx->pc = 0x8031803Cu;
    // 8031803C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318040:
    ctx->pc = 0x80318040u;
    // 80318040: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318044:
    ctx->pc = 0x80318044u;
    // 80318044: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318048:
    // 80318048: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031804C:
    ctx->pc = 0x8031804Cu;
    // 8031804C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318050:
    ctx->downcount -= 2;
    // 80318050: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80318054:
    // 80318054: b       0x80317FE8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317FE8u;
                return;
            }
            goto label_80317FE8;
    }

label_80318058:
    ctx->downcount -= 2;
    // 80318058: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031805C:
    // 8031805C: b       0x80317D44
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317D44u;
                return;
            }
            goto label_80317D44;
    }

label_80318060:
    ctx->downcount -= 2;
    // 80318060: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80318064:
    // 80318064: b       0x80317D7C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317D7Cu;
                return;
            }
            goto label_80317D7C;
    }

label_80318068:
    ctx->downcount -= 2;
    // 80318068: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031806C:
    // 8031806C: b       0x80317DB4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317DB4u;
                return;
            }
            goto label_80317DB4;
    }

label_80318070:
    ctx->downcount -= 2;
    // 80318070: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80318074:
    // 80318074: b       0x80317FE8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80317FE8u;
                return;
            }
            goto label_80317FE8;
    }

label_80318078:
    ctx->pc = 0x80318078u;
    ctx->downcount -= 7;
    // 80318078: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031807C:
    ctx->pc = 0x8031807Cu;
    // 8031807C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318080:
    ctx->pc = 0x80318080u;
    // 80318080: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80318084:
    ctx->pc = 0x80318084u;
    // 80318084: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318088:
    ctx->pc = 0x80318088u;
    // 80318088: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031808C:
    ctx->pc = 0x8031808Cu;
    // 8031808C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318090:
    ctx->pc = 0x80318090u;
    // 80318090: bl      0x8026F6CC
    {
            ctx->lr = 0x80318094u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80318094:
    ctx->pc = 0x80318094u;
    ctx->downcount -= 1;
    // 80318094: bl      0x8025CE24
    {
            ctx->lr = 0x80318098u;
            ctx->pc = 0x8025CE24u;
            return;
    }

label_80318098:
    ctx->pc = 0x80318098u;
    ctx->downcount -= 12;
    // 80318098: lfs     f0, 0(r31)
    if (!ppc_fp_available_inline(ctx, 0x80318098u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8031809C:
    ctx->pc = 0x8031809Cu;
    // 8031809C: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x8031809Cu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803180A0:
    ctx->pc = 0x803180A0u;
    // 803180A0: lfs     f0, 4(r31)
    if (!ppc_fp_available_inline(ctx, 0x803180A0u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803180A4:
    ctx->pc = 0x803180A4u;
    // 803180A4: stfs     f0, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x803180A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803180A8:
    ctx->pc = 0x803180A8u;
    // 803180A8: lfs     f0, 8(r31)
    if (!ppc_fp_available_inline(ctx, 0x803180A8u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803180AC:
    ctx->pc = 0x803180ACu;
    // 803180AC: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x803180ACu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_803180B0:
    ctx->pc = 0x803180B0u;
    // 803180B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803180B4:
    ctx->pc = 0x803180B4u;
    // 803180B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803180B8:
    ctx->pc = 0x803180B8u;
    // 803180B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803180BC:
    ctx->pc = 0x803180BCu;
    // 803180BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803180C0:
    ctx->pc = 0x803180C0u;
    // 803180C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803180C4:
    ctx->pc = 0x803180C4u;
    ctx->downcount -= 26;
    // 803180C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803180C8:
    ctx->pc = 0x803180C8u;
    // 803180C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803180CC:
    ctx->pc = 0x803180CCu;
    // 803180CC: lwz     r5, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803180D0:
    ctx->pc = 0x803180D0u;
    // 803180D0: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_803180D4:
    ctx->pc = 0x803180D4u;
    // 803180D4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803180D8:
    ctx->pc = 0x803180D8u;
    // 803180D8: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_803180DC:
    ctx->pc = 0x803180DCu;
    // 803180DC: cntlzw r6, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[6] = n;
    }

label_803180E0:
    ctx->pc = 0x803180E0u;
    // 803180E0: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_803180E4:
    ctx->pc = 0x803180E4u;
    // 803180E4: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803180E8:
    ctx->pc = 0x803180E8u;
    // 803180E8: rlwinm r6, r6, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[6], 27u) & 0x07FFFFFFu;
    }

label_803180EC:
    ctx->pc = 0x803180ECu;
    // 803180EC: cntlzw r5, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[5] = n;
    }

label_803180F0:
    ctx->pc = 0x803180F0u;
    // 803180F0: lwz     r31, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803180F4:
    ctx->pc = 0x803180F4u;
    // 803180F4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_803180F8:
    ctx->pc = 0x803180F8u;
    // 803180F8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803180FC:
    ctx->pc = 0x803180FCu;
    // 803180FC: lwz     r8, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80318100:
    ctx->pc = 0x80318100u;
    // 80318100: lbz     r7, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_80318104:
    ctx->pc = 0x80318104u;
    // 80318104: rlwimi r6, r7, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80318108:
    ctx->pc = 0x80318108u;
    // 80318108: stb     r6, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_8031810C:
    ctx->pc = 0x8031810Cu;
    // 8031810C: rlwinm r6, r5, 27, 5, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
    }

label_80318110:
    ctx->pc = 0x80318110u;
    // 80318110: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80318114:
    ctx->pc = 0x80318114u;
    // 80318114: lwz     r8, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[8] = mem_read32(ctx, ea);
    }

label_80318118:
    ctx->pc = 0x80318118u;
    // 80318118: lbz     r7, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        ctx->gpr[7] = mem_read8(ctx, ea);
    }

label_8031811C:
    ctx->pc = 0x8031811Cu;
    // 8031811C: rlwimi r6, r7, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[7], 0u);
        ctx->gpr[6] = (ctx->gpr[6] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80318120:
    ctx->pc = 0x80318120u;
    // 80318120: stb     r6, 187(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80318124:
    ctx->pc = 0x80318124u;
    // 80318124: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80318128:
    ctx->downcount -= 7;
    // 80318128: xor   r0, r31, r9
    {
        ctx->gpr[0] = ctx->gpr[31] ^ ctx->gpr[9];
    }

label_8031812C:
    // 8031812C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80318130:
    // 80318130: srawi r6, r0, 1
    {
        u32 sh = 1u;
        u32 value = ctx->gpr[0];
        bool ca = false;
        if (sh == 0) {
            ctx->gpr[6] = value;
        } else if (sh > 31) {
            ctx->gpr[6] = (value & 0x80000000u) ? 0xFFFFFFFFu : 0u;
            ca = (value & 0x80000000u) != 0;
        } else {
            ctx->gpr[6] = (u32)((s32)value >> sh);
            ca = (value & 0x80000000u) && ((value << (32u - sh)) != 0);
        }
        ctx->xer = (ctx->xer & ~0x20000000u) | (ca ? 0x20000000u : 0u);
    }

label_80318134:
    // 80318134: and   r0, r0, r31
    {
        ctx->gpr[0] = ctx->gpr[0] & ctx->gpr[31];
    }

label_80318138:
    // 80318138: subf   r0, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_8031813C:
    // 8031813C: rlwinm. r10, r0, 1, 31, 31
    {
        ctx->gpr[10] = dolrecomp_rotl32(ctx->gpr[0], 1u) & 0x00000001u;
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[10];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_80318140:
    // 80318140: bc    12, 2, 0x80318158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318158;
        }
    }

label_80318144:
    ctx->downcount -= 4;
    // 80318144: add   r6, r4, r9
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80318148:
    ctx->pc = 0x80318148u;
    // 80318148: lbz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031814C:
    // 8031814C: cmpwi   r0, 0
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

label_80318150:
    // 80318150: bc    12, 2, 0x80318158
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318158;
        }
    }

label_80318154:
    ctx->downcount -= 1;
    // 80318154: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80318158:
    ctx->downcount -= 14;
    // 80318158: add   r8, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[8] = res;
    }

label_8031815C:
    // 8031815C: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80318160:
    ctx->pc = 0x80318160u;
    // 80318160: lwz     r6, 280(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(280);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80318164:
    // 80318164: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80318168:
    ctx->pc = 0x80318168u;
    // 80318168: lbz     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031816C:
    // 8031816C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80318170:
    // 80318170: or   r0, r0, r7
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[7];
    }

label_80318174:
    ctx->pc = 0x80318174u;
    // 80318174: stb     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80318178:
    ctx->pc = 0x80318178u;
    // 80318178: lwz     r6, 300(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(300);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8031817C:
    ctx->pc = 0x8031817Cu;
    // 8031817C: lbz     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80318180:
    // 80318180: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80318184:
    // 80318184: or   r0, r0, r10
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[10];
    }

label_80318188:
    ctx->pc = 0x80318188u;
    // 80318188: stb     r0, 187(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031818C:
    // 8031818C: bc    16, 0, 0x80318128
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318128u;
                return;
            }
            goto label_80318128;
        }
    }

label_80318190:
    ctx->pc = 0x80318190u;
    ctx->downcount -= 4;
    // 80318190: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80318194:
    ctx->pc = 0x80318194u;
    // 80318194: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80318198:
    ctx->pc = 0x80318198u;
    // 80318198: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031819C:
    ctx->pc = 0x8031819Cu;
    // 8031819C: bl      0x8026FEF0
    {
            ctx->lr = 0x803181A0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_803181A0:
    ctx->pc = 0x803181A0u;
    ctx->downcount -= 3;
    // 803181A0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803181A4:
    ctx->pc = 0x803181A4u;
    // 803181A4: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803181A8:
    ctx->pc = 0x803181A8u;
    // 803181A8: bl      0x8026F6AC
    {
            ctx->lr = 0x803181ACu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803181AC:
    ctx->pc = 0x803181ACu;
    ctx->downcount -= 10;
    // 803181AC: xoris   r4, r31, 0x8000
    ctx->gpr[4] = ctx->gpr[31] ^ (0x8000u << 16);

label_803181B0:
    ctx->pc = 0x803181B0u;
    // 803181B0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_803181B4:
    ctx->pc = 0x803181B4u;
    // 803181B4: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803181B8:
    ctx->pc = 0x803181B8u;
    // 803181B8: lfd     f2, -11768(r2)
    if (!ppc_fp_available_inline(ctx, 0x803181B8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11768);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_803181BC:
    ctx->pc = 0x803181BCu;
    // 803181BC: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803181C0:
    ctx->pc = 0x803181C0u;
    // 803181C0: lfs     f0, -11776(r2)
    if (!ppc_fp_available_inline(ctx, 0x803181C0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11776);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_803181C4:
    ctx->pc = 0x803181C4u;
    // 803181C4: lfd     f1, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x803181C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_803181C8:
    ctx->pc = 0x803181C8u;
    // 803181C8: fsubs   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x803181C8u)) return;
    ppc_fsubs(ctx, 1, 1, 2);

label_803181CC:
    ctx->pc = 0x803181CCu;
    // 803181CC: fsubs   f1, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x803181CCu)) return;
    ppc_fsubs(ctx, 1, 0, 1);

label_803181D0:
    ctx->pc = 0x803181D0u;
    // 803181D0: bl      0x8025EB54
    {
            ctx->lr = 0x803181D4u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_803181D4:
    ctx->pc = 0x803181D4u;
    ctx->downcount -= 3;
    // 803181D4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_803181D8:
    ctx->pc = 0x803181D8u;
    // 803181D8: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803181DC:
    ctx->pc = 0x803181DCu;
    // 803181DC: bl      0x8026F6AC
    {
            ctx->lr = 0x803181E0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_803181E0:
    ctx->pc = 0x803181E0u;
    ctx->downcount -= 2;
    // 803181E0: lfs     f1, -11772(r2)
    if (!ppc_fp_available_inline(ctx, 0x803181E0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11772);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_803181E4:
    ctx->pc = 0x803181E4u;
    // 803181E4: bl      0x8025EBE8
    {
            ctx->lr = 0x803181E8u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_803181E8:
    ctx->pc = 0x803181E8u;
    ctx->downcount -= 7;
    // 803181E8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803181EC:
    ctx->pc = 0x803181ECu;
    // 803181EC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803181F0:
    ctx->pc = 0x803181F0u;
    // 803181F0: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_803181F4:
    ctx->pc = 0x803181F4u;
    // 803181F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803181F8:
    ctx->pc = 0x803181F8u;
    // 803181F8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803181FC:
    ctx->pc = 0x803181FCu;
    // 803181FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318200:
    ctx->pc = 0x80318200u;
    ctx->downcount -= 1;
    // 80318200: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318204:
    ctx->pc = 0x80318204u;
    ctx->downcount -= 23;
    // 80318204: stwu     r1, -64(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-64);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318208:
    ctx->pc = 0x80318208u;
    // 80318208: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031820C:
    // 8031820C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80318210:
    // 80318210: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80318214:
    ctx->pc = 0x80318214u;
    // 80318214: stw     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318218:
    // 80318218: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031821C:
    ctx->pc = 0x8031821Cu;
    // 8031821C: stmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318220:
    // 80318220: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_80318224:
    // 80318224: addi    r4, r30, 21912
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(21912);

label_80318228:
    // 80318228: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031822C:
    // 8031822C: addi    r5, r4, 15
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15);

label_80318230:
    // 80318230: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80318234:
    // 80318234: bl      0x802703A8
    {
            ctx->lr = 0x80318238u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80318238:
    ctx->downcount -= 7;
    // 80318238: addi    r30, r30, 21912
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(21912);

label_8031823C:
    // 8031823C: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318240:
    // 80318240: addi    r5, r30, 40
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(40);

label_80318244:
    // 80318244: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318248:
    // 80318248: addi    r6, r30, 43
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(43);

label_8031824C:
    // 8031824C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80318250:
    // 80318250: bl      0x8027035C
    {
            ctx->lr = 0x80318254u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80318254:
    ctx->downcount -= 6;
    // 80318254: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318258:
    // 80318258: addi    r5, r30, 54
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(54);

label_8031825C:
    // 8031825C: addi    r6, r30, 43
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(43);

label_80318260:
    // 80318260: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80318264:
    // 80318264: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80318268:
    // 80318268: bl      0x8027035C
    {
            ctx->lr = 0x8031826Cu;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8031826C:
    ctx->downcount -= 6;
    // 8031826C: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318270:
    // 80318270: addi    r5, r30, 58
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(58);

label_80318274:
    // 80318274: addi    r6, r30, 67
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(67);

label_80318278:
    // 80318278: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8031827C:
    // 8031827C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80318280:
    // 80318280: bl      0x8027035C
    {
            ctx->lr = 0x80318284u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80318284:
    ctx->downcount -= 4;
    // 80318284: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318288:
    // 80318288: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031828C:
    // 8031828C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80318290:
    // 80318290: bl      0x80270194
    {
            ctx->lr = 0x80318294u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80318294:
    ctx->downcount -= 3;
    // 80318294: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318298:
    // 80318298: addi    r4, r30, 81
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(81);

label_8031829C:
    // 8031829C: bl      0x8026F970
    {
            ctx->lr = 0x803182A0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803182A0:
    ctx->pc = 0x803182A0u;
    ctx->downcount -= 4;
    // 803182A0: stw     r3, 272(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803182A4:
    // 803182A4: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_803182A8:
    // 803182A8: addi    r4, r30, 97
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(97);

label_803182AC:
    // 803182AC: bl      0x8026F970
    {
            ctx->lr = 0x803182B0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803182B0:
    ctx->pc = 0x803182B0u;
    ctx->downcount -= 3;
    // 803182B0: stw     r3, 276(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803182B4:
    // 803182B4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_803182B8:
    // 803182B8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_803182BC:
    ctx->downcount -= 6;
    // 803182BC: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803182C0:
    // 803182C0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803182C4:
    // 803182C4: addi    r5, r30, 113
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(113);

label_803182C8:
    // 803182C8: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_803182CC:
    // 803182CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803182D0:
    // 803182D0: bl      0x8000D074
    {
            ctx->lr = 0x803182D4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_803182D4:
    ctx->downcount -= 4;
    // 803182D4: add   r29, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_803182D8:
    // 803182D8: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_803182DC:
    // 803182DC: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_803182E0:
    // 803182E0: bl      0x8026F970
    {
            ctx->lr = 0x803182E4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_803182E4:
    ctx->pc = 0x803182E4u;
    ctx->downcount -= 7;
    // 803182E4: stw     r3, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803182E8:
    // 803182E8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803182EC:
    // 803182EC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_803182F0:
    // 803182F0: addi    r5, r30, 132
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(132);

label_803182F4:
    // 803182F4: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_803182F8:
    // 803182F8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_803182FC:
    // 803182FC: bl      0x8000D074
    {
            ctx->lr = 0x80318300u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80318300:
    ctx->downcount -= 3;
    // 80318300: addi    r3, r27, 148
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(148);

label_80318304:
    // 80318304: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80318308:
    // 80318308: bl      0x8026F970
    {
            ctx->lr = 0x8031830Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031830C:
    ctx->downcount -= 5;
    // 8031830C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80318310:
    ctx->pc = 0x80318310u;
    // 80318310: stw     r3, 300(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80318314:
    // 80318314: cmpwi   r28, 5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318318:
    // 80318318: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8031831C:
    // 8031831C: bc    12, 0, 0x803182BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803182BCu;
                return;
            }
            goto label_803182BC;
        }
    }

label_80318320:
    ctx->pc = 0x80318320u;
    ctx->downcount -= 16;
    // 80318320: lmw     r27, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318324:
    ctx->pc = 0x80318324u;
    // 80318324: lwz     r0, 68(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318328:
    ctx->pc = 0x80318328u;
    // 80318328: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031832C:
    // 8031832C: addi    r1, r1, 64
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(64);

label_80318330:
    ctx->pc = 0x80318330u;
    // 80318330: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318334:
    ctx->pc = 0x80318334u;
    ctx->downcount -= 3;
    // 80318334: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80318338:
    // 80318338: cmpwi   r0, 0
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

label_8031833C:
    ctx->pc = 0x8031833Cu;
    // 8031833C: bclr  12, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318340:
    ctx->downcount -= 1;
    // 80318340: b       0x801ED220
    {
            ctx->pc = 0x801ED220u;
            return;
    }

label_80318344:
    ctx->pc = 0x80318344u;
    ctx->downcount -= 1;
    // 80318344: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318348:
    ctx->pc = 0x80318348u;
    ctx->downcount -= 21;
    // 80318348: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031834C:
    ctx->pc = 0x8031834Cu;
    // 8031834C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318350:
    ctx->pc = 0x80318350u;
    // 80318350: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318354:
    ctx->pc = 0x80318354u;
    // 80318354: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318358:
    // 80318358: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031835C:
    // 8031835C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318360:
    ctx->pc = 0x80318360u;
    // 80318360: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318364:
    ctx->pc = 0x80318364u;
    // 80318364: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318368:
    ctx->pc = 0x80318368u;
    // 80318368: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031836C:
    ctx->pc = 0x8031836Cu;
    // 8031836C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318370u;
            ctx->pc = target;
            return;
        }
    }

label_80318370:
    ctx->downcount -= 2;
    // 80318370: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318374:
    // 80318374: bc    12, 2, 0x8031838C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031838C;
        }
    }

label_80318378:
    ctx->downcount -= 2;
    // 80318378: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031837C:
    // 8031837C: bl      0x80371554
    {
            ctx->lr = 0x80318380u;
            ctx->pc = 0x80371554u;
            return;
    }

label_80318380:
    ctx->downcount -= 3;
    // 80318380: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318384:
    // 80318384: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318388:
    // 80318388: bl      0x803180C4
    {
            ctx->lr = 0x8031838Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803180C4u;
                return;
            }
            goto label_803180C4;
    }

label_8031838C:
    ctx->pc = 0x8031838Cu;
    ctx->downcount -= 16;
    // 8031838C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318390:
    ctx->pc = 0x80318390u;
    // 80318390: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318394:
    ctx->pc = 0x80318394u;
    // 80318394: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318398:
    // 80318398: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031839C:
    ctx->pc = 0x8031839Cu;
    // 8031839C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803183A0:
    ctx->pc = 0x803183A0u;
    ctx->downcount -= 8;
    // 803183A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803183A4:
    ctx->pc = 0x803183A4u;
    // 803183A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803183A8:
    // 803183A8: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_803183AC:
    // 803183AC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_803183B0:
    ctx->pc = 0x803183B0u;
    // 803183B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803183B4:
    ctx->pc = 0x803183B4u;
    // 803183B4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803183B8:
    // 803183B8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803183BC:
    // 803183BC: bl      0x803715C0
    {
            ctx->lr = 0x803183C0u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_803183C0:
    ctx->downcount -= 14;
    // 803183C0: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_803183C4:
    // 803183C4: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_803183C8:
    // 803183C8: addi    r4, r4, -23032
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-23032);

label_803183CC:
    ctx->pc = 0x803183CCu;
    // 803183CC: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803183D0:
    // 803183D0: addi    r3, r4, 8
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(8);

label_803183D4:
    // 803183D4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803183D8:
    // 803183D8: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_803183DC:
    // 803183DC: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_803183E0:
    ctx->pc = 0x803183E0u;
    // 803183E0: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803183E4:
    // 803183E4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_803183E8:
    ctx->pc = 0x803183E8u;
    // 803183E8: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803183EC:
    ctx->pc = 0x803183ECu;
    // 803183EC: stw     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803183F0:
    ctx->pc = 0x803183F0u;
    // 803183F0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_803183F4:
    loop_803183F4(ctx);
    if (ctx->pc == 0x80318404u) goto label_80318404;
    return;
label_803183F8:
    // 803183F8: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_803183FC:
    ctx->pc = 0x803183FCu;
    // 803183FC: stw     r6, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80318400:
    // 80318400: bc    16, 0, 0x803183F4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803183F4u;
                return;
            }
            goto label_803183F4;
        }
    }

label_80318404:
    ctx->downcount -= 5;
    // 80318404: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_80318408:
    // 80318408: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8031840C:
    // 8031840C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318410:
    ctx->pc = 0x80318410u;
    // 80318410: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80318414:
    loop_80318414(ctx);
    if (ctx->pc == 0x80318428u) goto label_80318428;
    return;
label_80318418:
    // 80318418: addi    r3, r3, 4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(4);

label_8031841C:
    ctx->pc = 0x8031841Cu;
    // 8031841C: stw     r4, 280(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80318420:
    ctx->pc = 0x80318420u;
    // 80318420: stw     r4, 300(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(300);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80318424:
    // 80318424: bc    16, 0, 0x80318414
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318414u;
                return;
            }
            goto label_80318414;
        }
    }

label_80318428:
    ctx->downcount -= 7;
    // 80318428: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031842C:
    ctx->pc = 0x8031842Cu;
    // 8031842C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80318430:
    ctx->pc = 0x80318430u;
    // 80318430: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318434:
    ctx->pc = 0x80318434u;
    // 80318434: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318438:
    // 80318438: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031843C:
    ctx->pc = 0x8031843Cu;
    // 8031843C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318440:
    ctx->pc = 0x80318440u;
    ctx->downcount -= 1;
    // 80318440: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318444:
    ctx->pc = 0x80318444u;
    ctx->downcount -= 1;
    // 80318444: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318448:
    ctx->pc = 0x80318448u;
    ctx->downcount -= 18;
    // 80318448: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031844C:
    ctx->pc = 0x8031844Cu;
    // 8031844C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318450:
    // 80318450: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318454:
    ctx->pc = 0x80318454u;
    // 80318454: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318458:
    ctx->pc = 0x80318458u;
    // 80318458: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031845C:
    // 8031845C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318460:
    // 80318460: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318464:
    // 80318464: bc    12, 2, 0x80318498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318498;
        }
    }

label_80318468:
    ctx->downcount -= 1;
    // 80318468: bc    12, 2, 0x80318488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318488;
        }
    }

label_8031846C:
    ctx->downcount -= 1;
    // 8031846C: bc    12, 2, 0x80318488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318488;
        }
    }

label_80318470:
    ctx->downcount -= 3;
    // 80318470: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318474:
    // 80318474: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80318478:
    // 80318478: bl      0x801F5C24
    {
            ctx->lr = 0x8031847Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8031847C:
    ctx->downcount -= 3;
    // 8031847C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318480:
    // 80318480: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80318484:
    // 80318484: bl      0x801F9C70
    {
            ctx->lr = 0x80318488u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80318488:
    ctx->downcount -= 2;
    // 80318488: cmpwi   r31, 0
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

label_8031848C:
    // 8031848C: bc    4, 1, 0x80318498
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80318498;
        }
    }

label_80318490:
    ctx->downcount -= 2;
    // 80318490: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318494:
    // 80318494: bl      0x801C1C90
    {
            ctx->lr = 0x80318498u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80318498:
    ctx->downcount -= 17;
    // 80318498: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031849C:
    ctx->pc = 0x8031849Cu;
    // 8031849C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803184A0:
    ctx->pc = 0x803184A0u;
    // 803184A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803184A4:
    ctx->pc = 0x803184A4u;
    // 803184A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803184A8:
    // 803184A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803184AC:
    ctx->pc = 0x803184ACu;
    // 803184AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803184B0:
    ctx->downcount -= 2;
    // 803184B0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_803184B4:
    // 803184B4: b       0x80318448
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318448u;
                return;
            }
            goto label_80318448;
    }

label_803184B8:
    ctx->downcount -= 2;
    // 803184B8: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803184BC:
    // 803184BC: b       0x80318200
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318200u;
                return;
            }
            goto label_80318200;
    }

label_803184C0:
    ctx->downcount -= 2;
    // 803184C0: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_803184C4:
    // 803184C4: b       0x80318448
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318448u;
                return;
            }
            goto label_80318448;
    }

label_803184C8:
    ctx->pc = 0x803184C8u;
    ctx->downcount -= 21;
    // 803184C8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803184CC:
    ctx->pc = 0x803184CCu;
    // 803184CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803184D0:
    ctx->pc = 0x803184D0u;
    // 803184D0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803184D4:
    ctx->pc = 0x803184D4u;
    // 803184D4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803184D8:
    ctx->pc = 0x803184D8u;
    // 803184D8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803184DC:
    ctx->pc = 0x803184DCu;
    // 803184DC: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803184E0:
    ctx->pc = 0x803184E0u;
    // 803184E0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803184E4:
    ctx->pc = 0x803184E4u;
    // 803184E4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803184E8:
    ctx->pc = 0x803184E8u;
    // 803184E8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803184EC:
    ctx->pc = 0x803184ECu;
    // 803184EC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803184F0u;
            ctx->pc = target;
            return;
        }
    }

label_803184F0:
    ctx->pc = 0x803184F0u;
    ctx->downcount -= 2;
    // 803184F0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803184F4:
    ctx->pc = 0x803184F4u;
    // 803184F4: bc    12, 2, 0x80318594
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318594;
        }
    }

label_803184F8:
    ctx->pc = 0x803184F8u;
    ctx->downcount -= 2;
    // 803184F8: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803184FC:
    ctx->pc = 0x803184FCu;
    // 803184FC: bl      0x8036E8D0
    {
            ctx->lr = 0x80318500u;
            ctx->pc = 0x8036E8D0u;
            return;
    }

label_80318500:
    ctx->pc = 0x80318500u;
    ctx->downcount -= 2;
    // 80318500: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318504:
    ctx->pc = 0x80318504u;
    // 80318504: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318508:
    ctx->downcount -= 3;
    // 80318508: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8031850C:
    ctx->pc = 0x8031850Cu;
    // 8031850C: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318510:
    // 80318510: bl      0x8036B2DC
    {
            ctx->lr = 0x80318514u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_80318514:
    ctx->downcount -= 4;
    // 80318514: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318518:
    // 80318518: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8031851C:
    // 8031851C: cmpwi   r30, 5
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

label_80318520:
    // 80318520: bc    12, 0, 0x80318508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318508u;
                return;
            }
            goto label_80318508;
        }
    }

label_80318524:
    ctx->pc = 0x80318524u;
    ctx->downcount -= 2;
    // 80318524: lwz     r3, 180(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318528:
    ctx->pc = 0x80318528u;
    // 80318528: bl      0x8036B2DC
    {
            ctx->lr = 0x8031852Cu;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_8031852C:
    ctx->pc = 0x8031852Cu;
    ctx->downcount -= 2;
    // 8031852C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318530:
    ctx->pc = 0x80318530u;
    // 80318530: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318534:
    ctx->downcount -= 3;
    // 80318534: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80318538:
    ctx->pc = 0x80318538u;
    // 80318538: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031853C:
    // 8031853C: bl      0x8036B2DC
    {
            ctx->lr = 0x80318540u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_80318540:
    ctx->downcount -= 4;
    // 80318540: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318544:
    // 80318544: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318548:
    // 80318548: cmpwi   r30, 4
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

label_8031854C:
    // 8031854C: bc    12, 0, 0x80318534
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318534u;
                return;
            }
            goto label_80318534;
        }
    }

label_80318550:
    ctx->pc = 0x80318550u;
    ctx->downcount -= 2;
    // 80318550: lwz     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318554:
    ctx->pc = 0x80318554u;
    // 80318554: bl      0x8026EEE8
    {
            ctx->lr = 0x80318558u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_80318558:
    ctx->pc = 0x80318558u;
    ctx->downcount -= 6;
    // 80318558: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031855C:
    ctx->pc = 0x8031855Cu;
    // 8031855C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80318560:
    ctx->pc = 0x80318560u;
    // 80318560: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80318564:
    ctx->pc = 0x80318564u;
    // 80318564: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318568:
    ctx->pc = 0x80318568u;
    // 80318568: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8031856C:
    ctx->pc = 0x8031856Cu;
    // 8031856C: bl      0x80370BD4
    {
            ctx->lr = 0x80318570u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318570:
    ctx->pc = 0x80318570u;
    ctx->downcount -= 4;
    // 80318570: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318574:
    ctx->pc = 0x80318574u;
    // 80318574: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80318578:
    ctx->pc = 0x80318578u;
    // 80318578: lwz     r4, 1240(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031857C:
    ctx->pc = 0x8031857Cu;
    // 8031857C: bl      0x80263D38
    {
            ctx->lr = 0x80318580u;
            ctx->pc = 0x80263D38u;
            return;
    }

label_80318580:
    ctx->pc = 0x80318580u;
    ctx->downcount -= 6;
    // 80318580: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318584:
    ctx->pc = 0x80318584u;
    // 80318584: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80318588:
    ctx->pc = 0x80318588u;
    // 80318588: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031858C:
    ctx->pc = 0x8031858Cu;
    // 8031858C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80318590:
    ctx->pc = 0x80318590u;
    // 80318590: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318594u;
            ctx->pc = target;
            return;
        }
    }

label_80318594:
    ctx->pc = 0x80318594u;
    ctx->downcount -= 6;
    // 80318594: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318598:
    ctx->pc = 0x80318598u;
    // 80318598: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8031859C:
    ctx->pc = 0x8031859Cu;
    // 8031859C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803185A0:
    ctx->pc = 0x803185A0u;
    // 803185A0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803185A4:
    ctx->pc = 0x803185A4u;
    // 803185A4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803185A8:
    ctx->pc = 0x803185A8u;
    // 803185A8: bl      0x80370BD4
    {
            ctx->lr = 0x803185ACu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803185AC:
    ctx->pc = 0x803185ACu;
    ctx->downcount -= 3;
    // 803185AC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803185B0:
    ctx->pc = 0x803185B0u;
    // 803185B0: lwz     r4, 1240(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803185B4:
    ctx->pc = 0x803185B4u;
    // 803185B4: bl      0x80263ABC
    {
            ctx->lr = 0x803185B8u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803185B8:
    ctx->pc = 0x803185B8u;
    ctx->downcount -= 16;
    // 803185B8: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803185BC:
    ctx->pc = 0x803185BCu;
    // 803185BC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803185C0:
    ctx->pc = 0x803185C0u;
    // 803185C0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803185C4:
    ctx->pc = 0x803185C4u;
    // 803185C4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803185C8:
    ctx->pc = 0x803185C8u;
    // 803185C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803185CC:
    ctx->pc = 0x803185CCu;
    ctx->downcount -= 9;
    // 803185CC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803185D0:
    ctx->pc = 0x803185D0u;
    // 803185D0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803185D4:
    ctx->pc = 0x803185D4u;
    // 803185D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803185D8:
    ctx->pc = 0x803185D8u;
    // 803185D8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803185DC:
    ctx->pc = 0x803185DCu;
    // 803185DC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803185E0:
    ctx->pc = 0x803185E0u;
    // 803185E0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803185E4:
    ctx->pc = 0x803185E4u;
    // 803185E4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803185E8:
    ctx->pc = 0x803185E8u;
    // 803185E8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803185ECu;
            ctx->pc = target;
            return;
        }
    }

label_803185EC:
    ctx->pc = 0x803185ECu;
    ctx->downcount -= 2;
    // 803185EC: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_803185F0:
    ctx->pc = 0x803185F0u;
    // 803185F0: bl      0x802B73BC
    {
            ctx->lr = 0x803185F4u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_803185F4:
    ctx->pc = 0x803185F4u;
    ctx->downcount -= 5;
    // 803185F4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803185F8:
    ctx->pc = 0x803185F8u;
    // 803185F8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803185FC:
    ctx->pc = 0x803185FCu;
    // 803185FC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80318600:
    ctx->pc = 0x80318600u;
    // 80318600: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318604:
    ctx->pc = 0x80318604u;
    ctx->downcount -= 16;
    // 80318604: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318608:
    ctx->pc = 0x80318608u;
    // 80318608: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031860C:
    ctx->pc = 0x8031860Cu;
    // 8031860C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318610:
    ctx->pc = 0x80318610u;
    // 80318610: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318614:
    ctx->pc = 0x80318614u;
    // 80318614: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318618:
    ctx->pc = 0x80318618u;
    // 80318618: bl      0x803186C8
    {
            ctx->lr = 0x8031861Cu;
            goto label_803186C8;
    }

label_8031861C:
    ctx->pc = 0x8031861Cu;
    ctx->downcount -= 6;
    // 8031861C: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318620:
    ctx->pc = 0x80318620u;
    // 80318620: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318624:
    ctx->pc = 0x80318624u;
    // 80318624: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318628:
    ctx->pc = 0x80318628u;
    // 80318628: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031862C:
    ctx->pc = 0x8031862Cu;
    // 8031862C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318630u;
            ctx->pc = target;
            return;
        }
    }

label_80318630:
    ctx->pc = 0x80318630u;
    ctx->downcount -= 2;
    // 80318630: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318634:
    ctx->pc = 0x80318634u;
    // 80318634: bc    12, 2, 0x803186B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803186B4;
        }
    }

label_80318638:
    ctx->pc = 0x80318638u;
    ctx->downcount -= 3;
    // 80318638: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8031863C:
    ctx->pc = 0x8031863Cu;
    // 8031863C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318640:
    ctx->pc = 0x80318640u;
    // 80318640: b       0x803186A4
    {
            goto label_803186A4;
    }

label_80318644:
    ctx->downcount -= 6;
    // 80318644: rlwinm r0, r29, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0x000003FCu;
    }

label_80318648:
    // 80318648: add   r30, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[30] = res;
    }

label_8031864C:
    ctx->pc = 0x8031864Cu;
    // 8031864C: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318650:
    ctx->pc = 0x80318650u;
    // 80318650: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80318654:
    // 80318654: cmpwi   r0, 0
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

label_80318658:
    // 80318658: bc    12, 2, 0x803186A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803186A0;
        }
    }

label_8031865C:
    ctx->pc = 0x8031865Cu;
    ctx->downcount -= 9;
    // 8031865C: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318660:
    // 80318660: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80318664:
    ctx->pc = 0x80318664u;
    // 80318664: lwz     r4, 1256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1256);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318668:
    ctx->pc = 0x80318668u;
    // 80318668: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031866C:
    // 8031866C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_80318670:
    ctx->pc = 0x80318670u;
    // 80318670: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318674:
    ctx->pc = 0x80318674u;
    // 80318674: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80318678:
    ctx->pc = 0x80318678u;
    // 80318678: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031867Cu;
            ctx->pc = target;
            return;
        }
    }

label_8031867C:
    ctx->pc = 0x8031867Cu;
    ctx->downcount -= 6;
    // 8031867C: lwz     r3, 160(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318680:
    ctx->pc = 0x80318680u;
    // 80318680: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318684:
    ctx->pc = 0x80318684u;
    // 80318684: lwz     r12, 252(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(252);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318688:
    ctx->pc = 0x80318688u;
    // 80318688: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031868C:
    ctx->pc = 0x8031868Cu;
    // 8031868C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318690u;
            ctx->pc = target;
            return;
        }
    }

label_80318690:
    ctx->pc = 0x80318690u;
    ctx->downcount -= 4;
    // 80318690: stw     r31, 1256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1256);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80318694:
    // 80318694: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80318698:
    // 80318698: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031869C:
    // 8031869C: bl      0x803457B8
    {
            ctx->lr = 0x803186A0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803186A0:
    ctx->downcount -= 1;
    // 803186A0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_803186A4:
    ctx->pc = 0x803186A4u;
    ctx->downcount -= 4;
    // 803186A4: lwz     r0, 1244(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803186A8:
    // 803186A8: rlwinm r3, r29, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_803186AC:
    // 803186AC: cmpw    r3, r0
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

label_803186B0:
    // 803186B0: bc    12, 0, 0x80318644
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318644u;
                return;
            }
            goto label_80318644;
        }
    }

label_803186B4:
    ctx->pc = 0x803186B4u;
    ctx->downcount -= 16;
    // 803186B4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803186B8:
    ctx->pc = 0x803186B8u;
    // 803186B8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803186BC:
    ctx->pc = 0x803186BCu;
    // 803186BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803186C0:
    ctx->pc = 0x803186C0u;
    // 803186C0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803186C4:
    ctx->pc = 0x803186C4u;
    // 803186C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803186C8:
    ctx->pc = 0x803186C8u;
    ctx->downcount -= 2;
    // 803186C8: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803186CC:
    ctx->pc = 0x803186CCu;
    // 803186CC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803186D0:
    ctx->pc = 0x803186D0u;
    ctx->downcount -= 21;
    // 803186D0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803186D4:
    ctx->pc = 0x803186D4u;
    // 803186D4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803186D8:
    ctx->pc = 0x803186D8u;
    // 803186D8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803186DC:
    ctx->pc = 0x803186DCu;
    // 803186DC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803186E0:
    ctx->pc = 0x803186E0u;
    // 803186E0: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_803186E4:
    ctx->pc = 0x803186E4u;
    // 803186E4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803186E8:
    ctx->pc = 0x803186E8u;
    // 803186E8: addi    r4, r31, 22184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22184);

label_803186EC:
    ctx->pc = 0x803186ECu;
    // 803186EC: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803186F0:
    ctx->pc = 0x803186F0u;
    // 803186F0: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803186F4:
    ctx->pc = 0x803186F4u;
    // 803186F4: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803186F8:
    ctx->pc = 0x803186F8u;
    // 803186F8: bl      0x80370BD4
    {
            ctx->lr = 0x803186FCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803186FC:
    ctx->pc = 0x803186FCu;
    ctx->downcount -= 6;
    // 803186FC: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318700:
    ctx->pc = 0x80318700u;
    // 80318700: addi    r4, r31, 22184
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22184);

label_80318704:
    ctx->pc = 0x80318704u;
    // 80318704: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318708:
    ctx->pc = 0x80318708u;
    // 80318708: lwz     r31, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031870C:
    ctx->pc = 0x8031870Cu;
    // 8031870C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318710:
    ctx->pc = 0x80318710u;
    // 80318710: bl      0x80370BD4
    {
            ctx->lr = 0x80318714u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318714:
    ctx->pc = 0x80318714u;
    ctx->downcount -= 6;
    // 80318714: lwz     r4, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318718:
    ctx->pc = 0x80318718u;
    // 80318718: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031871C:
    ctx->pc = 0x8031871Cu;
    // 8031871C: lwz     r0, 1256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1256);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318720:
    ctx->pc = 0x80318720u;
    // 80318720: lwz     r4, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318724:
    ctx->pc = 0x80318724u;
    // 80318724: rlwinm r5, r0, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FFu;
    }

label_80318728:
    ctx->pc = 0x80318728u;
    // 80318728: bl      0x80297F24
    {
            ctx->lr = 0x8031872Cu;
            ctx->pc = 0x80297F24u;
            return;
    }

label_8031872C:
    ctx->pc = 0x8031872Cu;
    ctx->downcount -= 8;
    // 8031872C: lwz     r3, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318730:
    ctx->pc = 0x80318730u;
    // 80318730: addi    r5, r30, 208
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(208);

label_80318734:
    ctx->pc = 0x80318734u;
    // 80318734: li      r4, 40
    ctx->gpr[4] = (u32)(s32)(40);

label_80318738:
    ctx->pc = 0x80318738u;
    // 80318738: li      r6, 512
    ctx->gpr[6] = (u32)(s32)(512);

label_8031873C:
    ctx->pc = 0x8031873Cu;
    // 8031873C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80318740:
    ctx->pc = 0x80318740u;
    // 80318740: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80318744:
    ctx->pc = 0x80318744u;
    // 80318744: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80318748:
    ctx->pc = 0x80318748u;
    // 80318748: bl      0x8034D964
    {
            ctx->lr = 0x8031874Cu;
            ctx->pc = 0x8034D964u;
            return;
    }

label_8031874C:
    ctx->pc = 0x8031874Cu;
    ctx->downcount -= 2;
    // 8031874C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318750:
    ctx->pc = 0x80318750u;
    // 80318750: bl      0x803186C8
    {
            ctx->lr = 0x80318754u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803186C8u;
                return;
            }
            goto label_803186C8;
    }

label_80318754:
    ctx->pc = 0x80318754u;
    ctx->downcount -= 7;
    // 80318754: lwz     r3, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318758:
    ctx->pc = 0x80318758u;
    // 80318758: addi    r7, r30, 208
    ctx->gpr[7] = ctx->gpr[30] + (u32)(s32)(208);

label_8031875C:
    ctx->pc = 0x8031875Cu;
    // 8031875C: lwz     r5, 1240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1240);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318760:
    ctx->pc = 0x80318760u;
    // 80318760: li      r4, 24000
    ctx->gpr[4] = (u32)(s32)(24000);

label_80318764:
    ctx->pc = 0x80318764u;
    // 80318764: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80318768:
    ctx->pc = 0x80318768u;
    // 80318768: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8031876C:
    ctx->pc = 0x8031876Cu;
    // 8031876C: bl      0x80271CEC
    {
            ctx->lr = 0x80318770u;
            ctx->pc = 0x80271CECu;
            return;
    }

label_80318770:
    ctx->pc = 0x80318770u;
    ctx->downcount -= 16;
    // 80318770: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318774:
    ctx->pc = 0x80318774u;
    // 80318774: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318778:
    ctx->pc = 0x80318778u;
    // 80318778: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031877C:
    ctx->pc = 0x8031877Cu;
    // 8031877C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80318780:
    ctx->pc = 0x80318780u;
    // 80318780: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318784:
    ctx->pc = 0x80318784u;
    ctx->downcount -= 19;
    // 80318784: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318788:
    ctx->pc = 0x80318788u;
    // 80318788: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031878C:
    ctx->pc = 0x8031878Cu;
    // 8031878C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318790:
    ctx->pc = 0x80318790u;
    // 80318790: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318794:
    ctx->pc = 0x80318794u;
    // 80318794: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318798:
    ctx->pc = 0x80318798u;
    // 80318798: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031879C:
    ctx->pc = 0x8031879Cu;
    // 8031879C: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803187A0:
    ctx->pc = 0x803187A0u;
    // 803187A0: cmpwi   r0, 0
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

label_803187A4:
    ctx->pc = 0x803187A4u;
    // 803187A4: bc    12, 2, 0x803187C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803187C0;
        }
    }

label_803187A8:
    ctx->pc = 0x803187A8u;
    ctx->downcount -= 3;
    // 803187A8: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803187AC:
    ctx->pc = 0x803187ACu;
    // 803187AC: cmpwi   r0, 0
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

label_803187B0:
    ctx->pc = 0x803187B0u;
    // 803187B0: bc    12, 2, 0x803187C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803187C0;
        }
    }

label_803187B4:
    ctx->pc = 0x803187B4u;
    ctx->downcount -= 3;
    // 803187B4: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803187B8:
    ctx->pc = 0x803187B8u;
    // 803187B8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803187BC:
    ctx->pc = 0x803187BCu;
    // 803187BC: bl      0x803457B8
    {
            ctx->lr = 0x803187C0u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803187C0:
    ctx->pc = 0x803187C0u;
    ctx->downcount -= 2;
    // 803187C0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_803187C4:
    ctx->pc = 0x803187C4u;
    // 803187C4: b       0x8031880C
    {
            goto label_8031880C;
    }

label_803187C8:
    ctx->downcount -= 6;
    // 803187C8: rlwinm r0, r31, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0x000003FCu;
    }

label_803187CC:
    // 803187CC: add   r3, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803187D0:
    ctx->pc = 0x803187D0u;
    // 803187D0: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803187D4:
    ctx->pc = 0x803187D4u;
    // 803187D4: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803187D8:
    // 803187D8: cmpwi   r0, 0
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

label_803187DC:
    // 803187DC: bc    12, 2, 0x80318808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318808;
        }
    }

label_803187E0:
    ctx->pc = 0x803187E0u;
    ctx->downcount -= 3;
    // 803187E0: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803187E4:
    // 803187E4: cmpwi   r0, 0
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

label_803187E8:
    // 803187E8: bc    12, 2, 0x80318808
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318808;
        }
    }

label_803187EC:
    ctx->pc = 0x803187ECu;
    ctx->downcount -= 2;
    // 803187EC: lwz     r3, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803187F0:
    // 803187F0: bl      0x8026EEE8
    {
            ctx->lr = 0x803187F4u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_803187F4:
    ctx->downcount -= 5;
    // 803187F4: rlwinm r0, r31, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_803187F8:
    ctx->pc = 0x803187F8u;
    // 803187F8: stw     r0, 1256(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1256);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803187FC:
    // 803187FC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_80318800:
    // 80318800: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80318804:
    // 80318804: bl      0x803457B8
    {
            ctx->lr = 0x80318808u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80318808:
    ctx->downcount -= 1;
    // 80318808: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_8031880C:
    ctx->pc = 0x8031880Cu;
    ctx->downcount -= 4;
    // 8031880C: lwz     r0, 1244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318810:
    // 80318810: rlwinm r3, r31, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[31], 0u) & 0x000000FFu;
    }

label_80318814:
    // 80318814: cmpw    r3, r0
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

label_80318818:
    // 80318818: bc    12, 0, 0x803187C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803187C8u;
                return;
            }
            goto label_803187C8;
        }
    }

label_8031881C:
    ctx->pc = 0x8031881Cu;
    ctx->downcount -= 6;
    // 8031881C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318820:
    ctx->pc = 0x80318820u;
    // 80318820: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80318824:
    ctx->pc = 0x80318824u;
    // 80318824: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80318828:
    ctx->pc = 0x80318828u;
    // 80318828: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8031882C:
    ctx->pc = 0x8031882Cu;
    // 8031882C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318830:
    ctx->pc = 0x80318830u;
    // 80318830: bl      0x80370BD4
    {
            ctx->lr = 0x80318834u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318834:
    ctx->pc = 0x80318834u;
    ctx->downcount -= 3;
    // 80318834: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318838:
    ctx->pc = 0x80318838u;
    // 80318838: lwz     r4, 1240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031883C:
    ctx->pc = 0x8031883Cu;
    // 8031883C: bl      0x80263ABC
    {
            ctx->lr = 0x80318840u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_80318840:
    ctx->pc = 0x80318840u;
    ctx->downcount -= 16;
    // 80318840: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318844:
    ctx->pc = 0x80318844u;
    // 80318844: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318848:
    ctx->pc = 0x80318848u;
    // 80318848: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031884C:
    ctx->pc = 0x8031884Cu;
    // 8031884C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80318850:
    ctx->pc = 0x80318850u;
    // 80318850: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318854:
    ctx->pc = 0x80318854u;
    ctx->downcount -= 1;
    // 80318854: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318858:
    ctx->pc = 0x80318858u;
    ctx->downcount -= 10;
    // 80318858: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031885C:
    ctx->pc = 0x8031885Cu;
    // 8031885C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318860:
    ctx->pc = 0x80318860u;
    // 80318860: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80318864:
    ctx->pc = 0x80318864u;
    // 80318864: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318868:
    ctx->pc = 0x80318868u;
    // 80318868: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031886C:
    ctx->pc = 0x8031886Cu;
    // 8031886C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318870:
    ctx->pc = 0x80318870u;
    // 80318870: lwz     r4, 180(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318874:
    ctx->pc = 0x80318874u;
    // 80318874: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80318878:
    ctx->pc = 0x80318878u;
    // 80318878: cmpwi   r0, 0
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

label_8031887C:
    ctx->pc = 0x8031887Cu;
    // 8031887C: bc    12, 2, 0x80318884
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318884;
        }
    }

label_80318880:
    ctx->pc = 0x80318880u;
    ctx->downcount -= 1;
    // 80318880: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80318884:
    ctx->pc = 0x80318884u;
    ctx->downcount -= 3;
    // 80318884: lwz     r5, 1244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(1244);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318888:
    ctx->pc = 0x80318888u;
    // 80318888: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8031888C:
    ctx->pc = 0x8031888Cu;
    // 8031888C: b       0x803188B0
    {
            goto label_803188B0;
    }

label_80318890:
    ctx->downcount -= 6;
    // 80318890: rlwinm r0, r7, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 2u) & 0x000003FCu;
    }

label_80318894:
    // 80318894: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80318898:
    ctx->pc = 0x80318898u;
    // 80318898: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031889C:
    ctx->pc = 0x8031889Cu;
    // 8031889C: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803188A0:
    // 803188A0: cmpwi   r0, 0
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

label_803188A4:
    // 803188A4: bc    12, 2, 0x803188AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803188AC;
        }
    }

label_803188A8:
    ctx->downcount -= 1;
    // 803188A8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_803188AC:
    ctx->downcount -= 1;
    // 803188AC: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_803188B0:
    ctx->downcount -= 3;
    // 803188B0: rlwinm r0, r7, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[7], 0u) & 0x000000FFu;
    }

label_803188B4:
    // 803188B4: cmpw    r0, r5
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803188B8:
    // 803188B8: bc    12, 0, 0x80318890
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318890u;
                return;
            }
            goto label_80318890;
        }
    }

label_803188BC:
    ctx->pc = 0x803188BCu;
    ctx->downcount -= 2;
    // 803188BC: cmpwi   r6, 0
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

label_803188C0:
    ctx->pc = 0x803188C0u;
    // 803188C0: bc    12, 2, 0x803188F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803188F8;
        }
    }

label_803188C4:
    ctx->pc = 0x803188C4u;
    ctx->downcount -= 6;
    // 803188C4: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803188C8:
    ctx->pc = 0x803188C8u;
    // 803188C8: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_803188CC:
    ctx->pc = 0x803188CCu;
    // 803188CC: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_803188D0:
    ctx->pc = 0x803188D0u;
    // 803188D0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803188D4:
    ctx->pc = 0x803188D4u;
    // 803188D4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803188D8:
    ctx->pc = 0x803188D8u;
    // 803188D8: bl      0x80370BD4
    {
            ctx->lr = 0x803188DCu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803188DC:
    ctx->pc = 0x803188DCu;
    ctx->downcount -= 3;
    // 803188DC: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803188E0:
    ctx->pc = 0x803188E0u;
    // 803188E0: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803188E4:
    ctx->pc = 0x803188E4u;
    // 803188E4: bl      0x80263ABC
    {
            ctx->lr = 0x803188E8u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_803188E8:
    ctx->pc = 0x803188E8u;
    ctx->downcount -= 3;
    // 803188E8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803188EC:
    ctx->pc = 0x803188ECu;
    // 803188EC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803188F0:
    ctx->pc = 0x803188F0u;
    // 803188F0: bl      0x803457B8
    {
            ctx->lr = 0x803188F4u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_803188F4:
    ctx->pc = 0x803188F4u;
    ctx->downcount -= 1;
    // 803188F4: b       0x8031892C
    {
            goto label_8031892C;
    }

label_803188F8:
    ctx->pc = 0x803188F8u;
    ctx->downcount -= 2;
    // 803188F8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803188FC:
    ctx->pc = 0x803188FCu;
    // 803188FC: bl      0x80318B6C
    {
            ctx->lr = 0x80318900u;
            goto label_80318B6C;
    }

label_80318900:
    ctx->pc = 0x80318900u;
    ctx->downcount -= 3;
    // 80318900: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318904:
    ctx->pc = 0x80318904u;
    // 80318904: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318908:
    ctx->pc = 0x80318908u;
    // 80318908: bc    12, 0, 0x80318924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318924;
        }
    }

label_8031890C:
    ctx->pc = 0x8031890Cu;
    ctx->downcount -= 3;
    // 8031890C: lwz     r0, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318910:
    ctx->pc = 0x80318910u;
    // 80318910: cmpw    r0, r3
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

label_80318914:
    ctx->pc = 0x80318914u;
    // 80318914: bc    12, 2, 0x80318924
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318924;
        }
    }

label_80318918:
    ctx->pc = 0x80318918u;
    ctx->downcount -= 3;
    // 80318918: stw     r3, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031891C:
    ctx->pc = 0x8031891Cu;
    // 8031891C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318920:
    ctx->pc = 0x80318920u;
    // 80318920: bl      0x80318BD4
    {
            ctx->lr = 0x80318924u;
            goto label_80318BD4;
    }

label_80318924:
    ctx->pc = 0x80318924u;
    ctx->downcount -= 2;
    // 80318924: lwz     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318928:
    ctx->pc = 0x80318928u;
    // 80318928: bl      0x8026EE88
    {
            ctx->lr = 0x8031892Cu;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_8031892C:
    ctx->pc = 0x8031892Cu;
    ctx->downcount -= 6;
    // 8031892C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318930:
    ctx->pc = 0x80318930u;
    // 80318930: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80318934:
    ctx->pc = 0x80318934u;
    // 80318934: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318938:
    ctx->pc = 0x80318938u;
    // 80318938: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031893C:
    ctx->pc = 0x8031893Cu;
    // 8031893C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318940:
    ctx->pc = 0x80318940u;
    ctx->downcount -= 2;
    // 80318940: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318944:
    ctx->pc = 0x80318944u;
    // 80318944: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_80318948:
    ctx->pc = 0x80318948u;
    ctx->downcount -= 9;
    // 80318948: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031894C:
    ctx->pc = 0x8031894Cu;
    // 8031894C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318950:
    ctx->pc = 0x80318950u;
    // 80318950: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318954:
    ctx->pc = 0x80318954u;
    // 80318954: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80318958:
    ctx->pc = 0x80318958u;
    // 80318958: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031895C:
    ctx->pc = 0x8031895Cu;
    // 8031895C: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318960:
    ctx->pc = 0x80318960u;
    // 80318960: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80318964:
    ctx->pc = 0x80318964u;
    // 80318964: cmpwi   r0, 0
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

label_80318968:
    ctx->pc = 0x80318968u;
    // 80318968: bc    12, 2, 0x80318978
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318978;
        }
    }

label_8031896C:
    ctx->pc = 0x8031896Cu;
    ctx->downcount -= 3;
    // 8031896C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80318970:
    ctx->pc = 0x80318970u;
    // 80318970: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80318974:
    ctx->pc = 0x80318974u;
    // 80318974: bl      0x803457B8
    {
            ctx->lr = 0x80318978u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80318978:
    ctx->pc = 0x80318978u;
    ctx->downcount -= 6;
    // 80318978: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031897C:
    ctx->pc = 0x8031897Cu;
    // 8031897C: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80318980:
    ctx->pc = 0x80318980u;
    // 80318980: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80318984:
    ctx->pc = 0x80318984u;
    // 80318984: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318988:
    ctx->pc = 0x80318988u;
    // 80318988: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8031898C:
    ctx->pc = 0x8031898Cu;
    // 8031898C: bl      0x80370BD4
    {
            ctx->lr = 0x80318990u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318990:
    ctx->pc = 0x80318990u;
    ctx->downcount -= 3;
    // 80318990: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318994:
    ctx->pc = 0x80318994u;
    // 80318994: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318998:
    ctx->pc = 0x80318998u;
    // 80318998: bl      0x80263ABC
    {
            ctx->lr = 0x8031899Cu;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8031899C:
    ctx->pc = 0x8031899Cu;
    ctx->downcount -= 6;
    // 8031899C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803189A0:
    ctx->pc = 0x803189A0u;
    // 803189A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_803189A4:
    ctx->pc = 0x803189A4u;
    // 803189A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803189A8:
    ctx->pc = 0x803189A8u;
    // 803189A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803189AC:
    ctx->pc = 0x803189ACu;
    // 803189AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803189B0:
    ctx->pc = 0x803189B0u;
    ctx->downcount -= 21;
    // 803189B0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803189B4:
    ctx->pc = 0x803189B4u;
    // 803189B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803189B8:
    ctx->pc = 0x803189B8u;
    // 803189B8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803189BC:
    ctx->pc = 0x803189BCu;
    // 803189BC: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803189C0:
    ctx->pc = 0x803189C0u;
    // 803189C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803189C4:
    ctx->pc = 0x803189C4u;
    // 803189C4: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803189C8:
    ctx->pc = 0x803189C8u;
    // 803189C8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803189CC:
    ctx->pc = 0x803189CCu;
    // 803189CC: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803189D0:
    ctx->pc = 0x803189D0u;
    // 803189D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803189D4:
    ctx->pc = 0x803189D4u;
    // 803189D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803189D8u;
            ctx->pc = target;
            return;
        }
    }

label_803189D8:
    ctx->pc = 0x803189D8u;
    ctx->downcount -= 4;
    // 803189D8: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803189DC:
    ctx->pc = 0x803189DCu;
    // 803189DC: lwz     r4, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803189E0:
    ctx->pc = 0x803189E0u;
    // 803189E0: lwz     r5, 1236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1236);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803189E4:
    ctx->pc = 0x803189E4u;
    // 803189E4: bl      0x8031A7C0
    {
            ctx->lr = 0x803189E8u;
            goto label_8031A7C0;
    }

label_803189E8:
    ctx->pc = 0x803189E8u;
    ctx->downcount -= 2;
    // 803189E8: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803189EC:
    ctx->pc = 0x803189ECu;
    // 803189EC: bl      0x8036E924
    {
            ctx->lr = 0x803189F0u;
            ctx->pc = 0x8036E924u;
            return;
    }

label_803189F0:
    ctx->pc = 0x803189F0u;
    ctx->downcount -= 2;
    // 803189F0: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_803189F4:
    ctx->pc = 0x803189F4u;
    // 803189F4: b       0x80318A38
    {
            goto label_80318A38;
    }

label_803189F8:
    ctx->downcount -= 5;
    // 803189F8: rlwinm r0, r27, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[27], 2u) & 0x000003FCu;
    }

label_803189FC:
    ctx->pc = 0x803189FCu;
    // 803189FC: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318A00:
    // 80318A00: add   r28, r31, r0
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_80318A04:
    ctx->pc = 0x80318A04u;
    // 80318A04: lwz     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A08:
    // 80318A08: bl      0x8036B330
    {
            ctx->lr = 0x80318A0Cu;
            ctx->pc = 0x8036B330u;
            return;
    }

label_80318A0C:
    ctx->pc = 0x80318A0Cu;
    ctx->downcount -= 4;
    // 80318A0C: lwz     r0, 1244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318A10:
    // 80318A10: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80318A14:
    // 80318A14: cmpwi   r0, 5
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

label_80318A18:
    // 80318A18: bc    4, 2, 0x80318A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80318A20;
        }
    }

label_80318A1C:
    ctx->downcount -= 1;
    // 80318A1C: rlwinm r7, r27, 0, 31, 31
    {
        ctx->gpr[7] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x00000001u;
    }

label_80318A20:
    ctx->pc = 0x80318A20u;
    ctx->downcount -= 5;
    // 80318A20: lwz     r3, 160(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A24:
    // 80318A24: rlwinm r6, r27, 0, 24, 31
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x000000FFu;
    }

label_80318A28:
    ctx->pc = 0x80318A28u;
    // 80318A28: lwz     r4, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318A2C:
    ctx->pc = 0x80318A2Cu;
    // 80318A2C: lwz     r5, 1236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1236);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318A30:
    // 80318A30: bl      0x80322084
    {
            ctx->lr = 0x80318A34u;
            ctx->pc = 0x80322084u;
            return;
    }

label_80318A34:
    ctx->downcount -= 1;
    // 80318A34: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80318A38:
    ctx->pc = 0x80318A38u;
    ctx->downcount -= 4;
    // 80318A38: lwz     r0, 1244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318A3C:
    // 80318A3C: rlwinm r3, r27, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[27], 0u) & 0x000000FFu;
    }

label_80318A40:
    // 80318A40: cmpw    r3, r0
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

label_80318A44:
    // 80318A44: bc    12, 0, 0x803189F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803189F8u;
                return;
            }
            goto label_803189F8;
        }
    }

label_80318A48:
    ctx->pc = 0x80318A48u;
    ctx->downcount -= 3;
    // 80318A48: lwz     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A4C:
    ctx->pc = 0x80318A4Cu;
    // 80318A4C: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318A50:
    ctx->pc = 0x80318A50u;
    // 80318A50: bl      0x8036B330
    {
            ctx->lr = 0x80318A54u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_80318A54:
    ctx->pc = 0x80318A54u;
    ctx->downcount -= 5;
    // 80318A54: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80318A58:
    ctx->pc = 0x80318A58u;
    // 80318A58: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318A5C:
    ctx->pc = 0x80318A5Cu;
    // 80318A5C: or   r29, r26, r26
    {
        ctx->gpr[29] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80318A60:
    ctx->pc = 0x80318A60u;
    // 80318A60: li      r28, 2
    ctx->gpr[28] = (u32)(s32)(2);

label_80318A64:
    ctx->pc = 0x80318A64u;
    // 80318A64: b       0x80318AE8
    {
            goto label_80318AE8;
    }

label_80318A68:
    ctx->downcount -= 4;
    // 80318A68: add   r27, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80318A6C:
    // 80318A6C: or   r4, r26, r26
    {
        ctx->gpr[4] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80318A70:
    ctx->pc = 0x80318A70u;
    // 80318A70: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A74:
    // 80318A74: bl      0x8031A460
    {
            ctx->lr = 0x80318A78u;
            goto label_8031A460;
    }

label_80318A78:
    ctx->pc = 0x80318A78u;
    ctx->downcount -= 3;
    // 80318A78: lwz     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A7C:
    // 80318A7C: rlwinm r4, r26, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x000000FFu;
    }

label_80318A80:
    // 80318A80: bl      0x802F1F7C
    {
            ctx->lr = 0x80318A84u;
            ctx->pc = 0x802F1F7Cu;
            return;
    }

label_80318A84:
    ctx->downcount -= 2;
    // 80318A84: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318A88:
    // 80318A88: bc    12, 2, 0x80318AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318AA4;
        }
    }

label_80318A8C:
    ctx->pc = 0x80318A8Cu;
    ctx->downcount -= 3;
    // 80318A8C: lwz     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318A90:
    // 80318A90: rlwinm r4, r26, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[26], 0u) & 0x000000FFu;
    }

label_80318A94:
    // 80318A94: bl      0x802F1F7C
    {
            ctx->lr = 0x80318A98u;
            ctx->pc = 0x802F1F7Cu;
            return;
    }

label_80318A98:
    ctx->downcount -= 3;
    // 80318A98: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318A9C:
    ctx->pc = 0x80318A9Cu;
    // 80318A9C: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318AA0:
    // 80318AA0: bl      0x8031A420
    {
            ctx->lr = 0x80318AA4u;
            goto label_8031A420;
    }

label_80318AA4:
    ctx->pc = 0x80318AA4u;
    ctx->downcount -= 6;
    // 80318AA4: lwz     r0, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318AA8:
    ctx->pc = 0x80318AA8u;
    // 80318AA8: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318AAC:
    // 80318AAC: subf   r0, r26, r0
    {
        u32 a = ~ctx->gpr[26];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80318AB0:
    // 80318AB0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80318AB4:
    // 80318AB4: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80318AB8:
    // 80318AB8: bl      0x8031A384
    {
            ctx->lr = 0x80318ABCu;
            goto label_8031A384;
    }

label_80318ABC:
    ctx->pc = 0x80318ABCu;
    ctx->downcount -= 3;
    // 80318ABC: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318AC0:
    ctx->pc = 0x80318AC0u;
    // 80318AC0: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318AC4:
    // 80318AC4: bl      0x8036B330
    {
            ctx->lr = 0x80318AC8u;
            ctx->pc = 0x8036B330u;
            return;
    }

label_80318AC8:
    ctx->pc = 0x80318AC8u;
    ctx->downcount -= 6;
    // 80318AC8: lwz     r0, 1248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318ACC:
    ctx->pc = 0x80318ACCu;
    // 80318ACC: lwz     r3, 184(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318AD0:
    // 80318AD0: srawi r4, r0, 31
    {
        u32 sh = 31u;
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

label_80318AD4:
    // 80318AD4: subfc   r0, r28, r0
    {
        u32 a = ~ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318AD8:
    // 80318AD8: adde   r4, r4, r29
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[29];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318ADC:
    // 80318ADC: bl      0x8036B22C
    {
            ctx->lr = 0x80318AE0u;
            ctx->pc = 0x8036B22Cu;
            return;
    }

label_80318AE0:
    ctx->downcount -= 2;
    // 80318AE0: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80318AE4:
    // 80318AE4: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80318AE8:
    ctx->pc = 0x80318AE8u;
    ctx->downcount -= 3;
    // 80318AE8: lwz     r0, 1248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318AEC:
    // 80318AEC: cmpw    r26, r0
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

label_80318AF0:
    // 80318AF0: bc    12, 0, 0x80318A68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318A68u;
                return;
            }
            goto label_80318A68;
        }
    }

label_80318AF4:
    ctx->pc = 0x80318AF4u;
    ctx->downcount -= 3;
    // 80318AF4: lwz     r4, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318AF8:
    ctx->pc = 0x80318AF8u;
    // 80318AF8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318AFC:
    ctx->pc = 0x80318AFCu;
    // 80318AFC: bl      0x80318BD4
    {
            ctx->lr = 0x80318B00u;
            goto label_80318BD4;
    }

label_80318B00:
    ctx->pc = 0x80318B00u;
    ctx->downcount -= 6;
    // 80318B00: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318B04:
    ctx->pc = 0x80318B04u;
    // 80318B04: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80318B08:
    ctx->pc = 0x80318B08u;
    // 80318B08: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_80318B0C:
    ctx->pc = 0x80318B0Cu;
    // 80318B0C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318B10:
    ctx->pc = 0x80318B10u;
    // 80318B10: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318B14:
    ctx->pc = 0x80318B14u;
    // 80318B14: bl      0x80370BD4
    {
            ctx->lr = 0x80318B18u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318B18:
    ctx->pc = 0x80318B18u;
    ctx->downcount -= 4;
    // 80318B18: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318B1C:
    ctx->pc = 0x80318B1Cu;
    // 80318B1C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80318B20:
    ctx->pc = 0x80318B20u;
    // 80318B20: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318B24:
    ctx->pc = 0x80318B24u;
    // 80318B24: bl      0x80263D38
    {
            ctx->lr = 0x80318B28u;
            ctx->pc = 0x80263D38u;
            return;
    }

label_80318B28:
    ctx->pc = 0x80318B28u;
    ctx->downcount -= 3;
    // 80318B28: lwz     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318B2C:
    ctx->pc = 0x80318B2Cu;
    // 80318B2C: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318B30:
    ctx->pc = 0x80318B30u;
    // 80318B30: bl      0x8026F12C
    {
            ctx->lr = 0x80318B34u;
            ctx->pc = 0x8026F12Cu;
            return;
    }

label_80318B34:
    ctx->pc = 0x80318B34u;
    ctx->downcount -= 8;
    // 80318B34: lwz     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318B38:
    ctx->pc = 0x80318B38u;
    // 80318B38: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80318B3C:
    ctx->pc = 0x80318B3Cu;
    // 80318B3C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80318B40:
    ctx->pc = 0x80318B40u;
    // 80318B40: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318B44:
    ctx->pc = 0x80318B44u;
    // 80318B44: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318B48:
    ctx->pc = 0x80318B48u;
    // 80318B48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80318B4C:
    ctx->pc = 0x80318B4Cu;
    // 80318B4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318B50u;
            ctx->pc = target;
            return;
        }
    }

label_80318B50:
    ctx->pc = 0x80318B50u;
    ctx->downcount -= 2;
    // 80318B50: li      r3, 128
    ctx->gpr[3] = (u32)(s32)(128);

label_80318B54:
    ctx->pc = 0x80318B54u;
    // 80318B54: bl      0x802B73BC
    {
            ctx->lr = 0x80318B58u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_80318B58:
    ctx->pc = 0x80318B58u;
    ctx->downcount -= 16;
    // 80318B58: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318B5C:
    ctx->pc = 0x80318B5Cu;
    // 80318B5C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318B60:
    ctx->pc = 0x80318B60u;
    // 80318B60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318B64:
    ctx->pc = 0x80318B64u;
    // 80318B64: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80318B68:
    ctx->pc = 0x80318B68u;
    // 80318B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318B6C:
    ctx->pc = 0x80318B6Cu;
    ctx->downcount -= 18;
    // 80318B6C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318B70:
    ctx->pc = 0x80318B70u;
    // 80318B70: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318B74:
    ctx->pc = 0x80318B74u;
    // 80318B74: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318B78:
    ctx->pc = 0x80318B78u;
    // 80318B78: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318B7C:
    ctx->pc = 0x80318B7Cu;
    // 80318B7C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318B80:
    ctx->pc = 0x80318B80u;
    // 80318B80: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318B84:
    ctx->pc = 0x80318B84u;
    // 80318B84: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318B88:
    ctx->pc = 0x80318B88u;
    // 80318B88: b       0x80318BB0
    {
            goto label_80318BB0;
    }

label_80318B8C:
    ctx->downcount -= 3;
    // 80318B8C: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80318B90:
    ctx->pc = 0x80318B90u;
    // 80318B90: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318B94:
    // 80318B94: bl      0x8036B2D0
    {
            ctx->lr = 0x80318B98u;
            ctx->pc = 0x8036B2D0u;
            return;
    }

label_80318B98:
    ctx->downcount -= 2;
    // 80318B98: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318B9C:
    // 80318B9C: bc    12, 2, 0x80318BA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318BA8;
        }
    }

label_80318BA0:
    ctx->downcount -= 2;
    // 80318BA0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318BA4:
    // 80318BA4: b       0x80318BC0
    {
            goto label_80318BC0;
    }

label_80318BA8:
    ctx->downcount -= 2;
    // 80318BA8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318BAC:
    // 80318BAC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318BB0:
    ctx->pc = 0x80318BB0u;
    ctx->downcount -= 3;
    // 80318BB0: lwz     r0, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318BB4:
    // 80318BB4: cmpw    r30, r0
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

label_80318BB8:
    // 80318BB8: bc    12, 0, 0x80318B8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318B8Cu;
                return;
            }
            goto label_80318B8C;
        }
    }

label_80318BBC:
    ctx->pc = 0x80318BBCu;
    ctx->downcount -= 1;
    // 80318BBC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80318BC0:
    ctx->pc = 0x80318BC0u;
    ctx->downcount -= 16;
    // 80318BC0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318BC4:
    ctx->pc = 0x80318BC4u;
    // 80318BC4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318BC8:
    ctx->pc = 0x80318BC8u;
    // 80318BC8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318BCC:
    ctx->pc = 0x80318BCCu;
    // 80318BCC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80318BD0:
    ctx->pc = 0x80318BD0u;
    // 80318BD0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318BD4:
    ctx->pc = 0x80318BD4u;
    ctx->downcount -= 18;
    // 80318BD4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318BD8:
    ctx->pc = 0x80318BD8u;
    // 80318BD8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318BDC:
    ctx->pc = 0x80318BDCu;
    // 80318BDC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318BE0:
    ctx->pc = 0x80318BE0u;
    // 80318BE0: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318BE4:
    ctx->pc = 0x80318BE4u;
    // 80318BE4: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318BE8:
    ctx->pc = 0x80318BE8u;
    // 80318BE8: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318BEC:
    ctx->pc = 0x80318BECu;
    // 80318BEC: lwz     r3, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318BF0:
    ctx->pc = 0x80318BF0u;
    // 80318BF0: bl      0x8031A70C
    {
            ctx->lr = 0x80318BF4u;
            goto label_8031A70C;
    }

label_80318BF4:
    ctx->pc = 0x80318BF4u;
    ctx->downcount -= 3;
    // 80318BF4: lwz     r3, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318BF8:
    ctx->pc = 0x80318BF8u;
    // 80318BF8: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_80318BFC:
    ctx->pc = 0x80318BFCu;
    // 80318BFC: bl      0x802F1FBC
    {
            ctx->lr = 0x80318C00u;
            ctx->pc = 0x802F1FBCu;
            return;
    }

label_80318C00:
    ctx->pc = 0x80318C00u;
    ctx->downcount -= 3;
    // 80318C00: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318C04:
    ctx->pc = 0x80318C04u;
    // 80318C04: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318C08:
    ctx->pc = 0x80318C08u;
    // 80318C08: bc    12, 2, 0x80318CA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318CA4;
        }
    }

label_80318C0C:
    ctx->pc = 0x80318C0Cu;
    ctx->downcount -= 2;
    // 80318C0C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318C10:
    ctx->pc = 0x80318C10u;
    // 80318C10: b       0x80318C58
    {
            goto label_80318C58;
    }

label_80318C14:
    ctx->downcount -= 3;
    // 80318C14: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318C18:
    // 80318C18: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318C1C:
    // 80318C1C: bl      0x8027AE84
    {
            ctx->lr = 0x80318C20u;
            ctx->pc = 0x8027AE84u;
            return;
    }

label_80318C20:
    ctx->downcount -= 4;
    // 80318C20: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318C24:
    // 80318C24: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318C28:
    // 80318C28: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80318C2C:
    // 80318C2C: bc    12, 2, 0x80318C3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80318C3C;
        }
    }

label_80318C30:
    ctx->downcount -= 3;
    // 80318C30: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318C34:
    // 80318C34: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318C38:
    // 80318C38: bl      0x8027AD50
    {
            ctx->lr = 0x80318C3Cu;
            ctx->pc = 0x8027AD50u;
            return;
    }

label_80318C3C:
    ctx->downcount -= 6;
    // 80318C3C: rlwinm r0, r30, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[30], 2u) & 0x000003FCu;
    }

label_80318C40:
    // 80318C40: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318C44:
    // 80318C44: add   r6, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80318C48:
    // 80318C48: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80318C4C:
    ctx->pc = 0x80318C4Cu;
    // 80318C4C: lwz     r3, 160(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318C50:
    // 80318C50: bl      0x80321FBC
    {
            ctx->lr = 0x80318C54u;
            ctx->pc = 0x80321FBCu;
            return;
    }

label_80318C54:
    ctx->downcount -= 1;
    // 80318C54: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318C58:
    ctx->pc = 0x80318C58u;
    ctx->downcount -= 4;
    // 80318C58: lwz     r0, 1244(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1244);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318C5C:
    // 80318C5C: rlwinm r3, r30, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318C60:
    // 80318C60: cmpw    r3, r0
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

label_80318C64:
    // 80318C64: bc    12, 0, 0x80318C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318C14u;
                return;
            }
            goto label_80318C14;
        }
    }

label_80318C68:
    ctx->pc = 0x80318C68u;
    ctx->downcount -= 3;
    // 80318C68: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80318C6C:
    ctx->pc = 0x80318C6Cu;
    // 80318C6C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318C70:
    ctx->pc = 0x80318C70u;
    // 80318C70: b       0x80318C98
    {
            goto label_80318C98;
    }

label_80318C74:
    ctx->pc = 0x80318C74u;
    ctx->downcount -= 7;
    // 80318C74: lwz     r0, 1252(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1252);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318C78:
    // 80318C78: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80318C7C:
    ctx->pc = 0x80318C7Cu;
    // 80318C7C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318C80:
    // 80318C80: subf   r0, r29, r0
    {
        u32 a = ~ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b + 1u;
        ctx->gpr[0] = res;
    }

label_80318C84:
    // 80318C84: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80318C88:
    // 80318C88: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80318C8C:
    // 80318C8C: bl      0x8031A308
    {
            ctx->lr = 0x80318C90u;
            goto label_8031A308;
    }

label_80318C90:
    ctx->downcount -= 2;
    // 80318C90: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80318C94:
    // 80318C94: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318C98:
    ctx->pc = 0x80318C98u;
    ctx->downcount -= 3;
    // 80318C98: lwz     r0, 1248(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(1248);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318C9C:
    // 80318C9C: cmpw    r29, r0
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

label_80318CA0:
    // 80318CA0: bc    12, 0, 0x80318C74
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318C74u;
                return;
            }
            goto label_80318C74;
        }
    }

label_80318CA4:
    ctx->pc = 0x80318CA4u;
    ctx->downcount -= 16;
    // 80318CA4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318CA8:
    ctx->pc = 0x80318CA8u;
    // 80318CA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318CAC:
    ctx->pc = 0x80318CACu;
    // 80318CAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318CB0:
    ctx->pc = 0x80318CB0u;
    // 80318CB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80318CB4:
    ctx->pc = 0x80318CB4u;
    // 80318CB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318CB8:
    ctx->pc = 0x80318CB8u;
    ctx->downcount -= 5;
    // 80318CB8: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318CBC:
    ctx->pc = 0x80318CBCu;
    // 80318CBC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318CC0:
    ctx->pc = 0x80318CC0u;
    // 80318CC0: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318CC4:
    ctx->pc = 0x80318CC4u;
    // 80318CC4: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80318CC8:
    ctx->pc = 0x80318CC8u;
    // 80318CC8: bl      0x80007858
    {
            ctx->lr = 0x80318CCCu;
            ctx->pc = 0x80007858u;
            return;
    }

label_80318CCC:
    ctx->pc = 0x80318CCCu;
    ctx->downcount -= 3;
    // 80318CCC: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318CD0:
    ctx->pc = 0x80318CD0u;
    // 80318CD0: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318CD4:
    ctx->pc = 0x80318CD4u;
    // 80318CD4: bl      0x8036E67C
    {
            ctx->lr = 0x80318CD8u;
            ctx->pc = 0x8036E67Cu;
            return;
    }

label_80318CD8:
    ctx->pc = 0x80318CD8u;
    ctx->downcount -= 8;
    // 80318CD8: lfs     f0, -11760(r2)
    if (!ppc_fp_available_inline(ctx, 0x80318CD8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11760);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80318CDC:
    ctx->pc = 0x80318CDCu;
    // 80318CDC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318CE0:
    ctx->pc = 0x80318CE0u;
    // 80318CE0: stfs     f0, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318CE0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318CE4:
    ctx->pc = 0x80318CE4u;
    // 80318CE4: addi    r3, r1, 44
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(44);

label_80318CE8:
    ctx->pc = 0x80318CE8u;
    // 80318CE8: stfs     f0, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318CE8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318CEC:
    ctx->pc = 0x80318CECu;
    // 80318CEC: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318CECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318CF0:
    ctx->pc = 0x80318CF0u;
    // 80318CF0: lwz     r4, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318CF4:
    ctx->pc = 0x80318CF4u;
    // 80318CF4: bl      0x8031A064
    {
            ctx->lr = 0x80318CF8u;
            goto label_8031A064;
    }

label_80318CF8:
    ctx->pc = 0x80318CF8u;
    ctx->downcount -= 9;
    // 80318CF8: lfs     f2, 44(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318CF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80318CFC:
    ctx->pc = 0x80318CFCu;
    // 80318CFC: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80318D00:
    ctx->pc = 0x80318D00u;
    // 80318D00: lfs     f1, 48(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(48);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80318D04:
    ctx->pc = 0x80318D04u;
    // 80318D04: lfs     f0, 52(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D04u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80318D08:
    ctx->pc = 0x80318D08u;
    // 80318D08: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80318D0C:
    ctx->pc = 0x80318D0Cu;
    // 80318D0C: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D0Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80318D10:
    ctx->pc = 0x80318D10u;
    // 80318D10: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D10u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318D14:
    ctx->pc = 0x80318D14u;
    // 80318D14: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318D18:
    ctx->pc = 0x80318D18u;
    // 80318D18: bl      0x8036E884
    {
            ctx->lr = 0x80318D1Cu;
            ctx->pc = 0x8036E884u;
            return;
    }

label_80318D1C:
    ctx->pc = 0x80318D1Cu;
    ctx->downcount -= 3;
    // 80318D1C: lwz     r3, 156(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318D20:
    ctx->pc = 0x80318D20u;
    // 80318D20: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318D24:
    ctx->pc = 0x80318D24u;
    // 80318D24: bl      0x8036E848
    {
            ctx->lr = 0x80318D28u;
            ctx->pc = 0x8036E848u;
            return;
    }

label_80318D28:
    ctx->pc = 0x80318D28u;
    ctx->downcount -= 3;
    // 80318D28: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80318D2C:
    ctx->pc = 0x80318D2Cu;
    // 80318D2C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318D30:
    ctx->pc = 0x80318D30u;
    // 80318D30: b       0x80318D80
    {
            goto label_80318D80;
    }

label_80318D34:
    ctx->pc = 0x80318D34u;
    ctx->downcount -= 4;
    // 80318D34: lwz     r4, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318D38:
    // 80318D38: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80318D3C:
    // 80318D3C: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80318D40:
    // 80318D40: bl      0x80319FEC
    {
            ctx->lr = 0x80318D44u;
            goto label_80319FEC;
    }

label_80318D44:
    ctx->pc = 0x80318D44u;
    ctx->downcount -= 10;
    // 80318D44: lfs     f2, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D44u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80318D48:
    // 80318D48: add   r29, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80318D4C:
    ctx->pc = 0x80318D4Cu;
    // 80318D4C: lfs     f1, 36(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D4Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80318D50:
    // 80318D50: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80318D54:
    ctx->pc = 0x80318D54u;
    // 80318D54: lfs     f0, 40(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D54u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80318D58:
    ctx->pc = 0x80318D58u;
    // 80318D58: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D58u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80318D5C:
    ctx->pc = 0x80318D5Cu;
    // 80318D5C: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D5Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80318D60:
    ctx->pc = 0x80318D60u;
    // 80318D60: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D60u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318D64:
    ctx->pc = 0x80318D64u;
    // 80318D64: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318D68:
    // 80318D68: bl      0x8036B284
    {
            ctx->lr = 0x80318D6Cu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_80318D6C:
    ctx->pc = 0x80318D6Cu;
    ctx->downcount -= 3;
    // 80318D6C: lwz     r3, 160(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318D70:
    // 80318D70: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318D74:
    // 80318D74: bl      0x8036B244
    {
            ctx->lr = 0x80318D78u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_80318D78:
    ctx->downcount -= 2;
    // 80318D78: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80318D7C:
    // 80318D7C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318D80:
    ctx->pc = 0x80318D80u;
    ctx->downcount -= 3;
    // 80318D80: lwz     r5, 1244(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1244);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318D84:
    // 80318D84: cmpw    r28, r5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318D88:
    // 80318D88: bc    12, 0, 0x80318D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318D34u;
                return;
            }
            goto label_80318D34;
        }
    }

label_80318D8C:
    ctx->pc = 0x80318D8Cu;
    ctx->downcount -= 3;
    // 80318D8C: lwz     r4, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318D90:
    ctx->pc = 0x80318D90u;
    // 80318D90: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80318D94:
    ctx->pc = 0x80318D94u;
    // 80318D94: bl      0x80319F90
    {
            ctx->lr = 0x80318D98u;
            goto label_80319F90;
    }

label_80318D98:
    ctx->pc = 0x80318D98u;
    ctx->downcount -= 9;
    // 80318D98: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318D98u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80318D9C:
    ctx->pc = 0x80318D9Cu;
    // 80318D9C: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80318DA0:
    ctx->pc = 0x80318DA0u;
    // 80318DA0: lfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DA0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80318DA4:
    ctx->pc = 0x80318DA4u;
    // 80318DA4: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DA4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80318DA8:
    ctx->pc = 0x80318DA8u;
    // 80318DA8: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DA8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80318DAC:
    ctx->pc = 0x80318DACu;
    // 80318DAC: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DACu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80318DB0:
    ctx->pc = 0x80318DB0u;
    // 80318DB0: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318DB4:
    ctx->pc = 0x80318DB4u;
    // 80318DB4: lwz     r3, 180(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318DB8:
    ctx->pc = 0x80318DB8u;
    // 80318DB8: bl      0x8036B284
    {
            ctx->lr = 0x80318DBCu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_80318DBC:
    ctx->pc = 0x80318DBCu;
    ctx->downcount -= 3;
    // 80318DBC: lwz     r3, 180(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318DC0:
    ctx->pc = 0x80318DC0u;
    // 80318DC0: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318DC4:
    ctx->pc = 0x80318DC4u;
    // 80318DC4: bl      0x8036B244
    {
            ctx->lr = 0x80318DC8u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_80318DC8:
    ctx->pc = 0x80318DC8u;
    ctx->downcount -= 3;
    // 80318DC8: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80318DCC:
    ctx->pc = 0x80318DCCu;
    // 80318DCC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318DD0:
    ctx->pc = 0x80318DD0u;
    // 80318DD0: b       0x80318E20
    {
            goto label_80318E20;
    }

label_80318DD4:
    ctx->pc = 0x80318DD4u;
    ctx->downcount -= 4;
    // 80318DD4: lwz     r4, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318DD8:
    // 80318DD8: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80318DDC:
    // 80318DDC: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80318DE0:
    // 80318DE0: bl      0x80319F18
    {
            ctx->lr = 0x80318DE4u;
            goto label_80319F18;
    }

label_80318DE4:
    ctx->pc = 0x80318DE4u;
    ctx->downcount -= 10;
    // 80318DE4: lfs     f2, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_80318DE8:
    // 80318DE8: add   r29, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[29] = res;
    }

label_80318DEC:
    ctx->pc = 0x80318DECu;
    // 80318DEC: lfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80318DF0:
    // 80318DF0: addi    r4, r1, 56
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(56);

label_80318DF4:
    ctx->pc = 0x80318DF4u;
    // 80318DF4: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80318DF8:
    ctx->pc = 0x80318DF8u;
    // 80318DF8: stfs     f2, 56(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DF8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(56);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80318DFC:
    ctx->pc = 0x80318DFCu;
    // 80318DFC: stfs     f1, 60(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318DFCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(60);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80318E00:
    ctx->pc = 0x80318E00u;
    // 80318E00: stfs     f0, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80318E00u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80318E04:
    ctx->pc = 0x80318E04u;
    // 80318E04: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318E08:
    // 80318E08: bl      0x8036B284
    {
            ctx->lr = 0x80318E0Cu;
            ctx->pc = 0x8036B284u;
            return;
    }

label_80318E0C:
    ctx->pc = 0x80318E0Cu;
    ctx->downcount -= 3;
    // 80318E0C: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318E10:
    // 80318E10: rlwinm r4, r30, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[30], 0u) & 0x000000FFu;
    }

label_80318E14:
    // 80318E14: bl      0x8036B244
    {
            ctx->lr = 0x80318E18u;
            ctx->pc = 0x8036B244u;
            return;
    }

label_80318E18:
    ctx->downcount -= 2;
    // 80318E18: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80318E1C:
    // 80318E1C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318E20:
    ctx->pc = 0x80318E20u;
    ctx->downcount -= 3;
    // 80318E20: lwz     r5, 1248(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(1248);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318E24:
    // 80318E24: cmpw    r28, r5
    {
        s32 val_a = (s32)(ctx->gpr[28]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318E28:
    // 80318E28: bc    12, 0, 0x80318DD4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318DD4u;
                return;
            }
            goto label_80318DD4;
        }
    }

label_80318E2C:
    ctx->pc = 0x80318E2Cu;
    ctx->downcount -= 2;
    // 80318E2C: addi    r11, r1, 96
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(96);

label_80318E30:
    ctx->pc = 0x80318E30u;
    // 80318E30: bl      0x800078A4
    {
            ctx->lr = 0x80318E34u;
            ctx->pc = 0x800078A4u;
            return;
    }

label_80318E34:
    ctx->pc = 0x80318E34u;
    ctx->downcount -= 5;
    // 80318E34: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318E38:
    ctx->pc = 0x80318E38u;
    // 80318E38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318E3C:
    ctx->pc = 0x80318E3Cu;
    // 80318E3C: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80318E40:
    ctx->pc = 0x80318E40u;
    // 80318E40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318E44:
    ctx->pc = 0x80318E44u;
    ctx->downcount -= 17;
    // 80318E44: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318E48:
    ctx->pc = 0x80318E48u;
    // 80318E48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318E4C:
    ctx->pc = 0x80318E4Cu;
    // 80318E4C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318E50:
    ctx->pc = 0x80318E50u;
    // 80318E50: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318E54:
    ctx->pc = 0x80318E54u;
    // 80318E54: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318E58:
    ctx->pc = 0x80318E58u;
    // 80318E58: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318E5C:
    ctx->pc = 0x80318E5Cu;
    // 80318E5C: b       0x80318E80
    {
            goto label_80318E80;
    }

label_80318E60:
    ctx->pc = 0x80318E60u;
    ctx->downcount -= 3;
    // 80318E60: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318E64:
    // 80318E64: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318E68:
    // 80318E68: bl      0x80319EFC
    {
            ctx->lr = 0x80318E6Cu;
            goto label_80319EFC;
    }

label_80318E6C:
    ctx->downcount -= 4;
    // 80318E6C: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318E70:
    ctx->pc = 0x80318E70u;
    // 80318E70: lwz     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318E74:
    // 80318E74: addi    r4, r31, 4
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(4);

label_80318E78:
    // 80318E78: bl      0x80322354
    {
            ctx->lr = 0x80318E7Cu;
            ctx->pc = 0x80322354u;
            return;
    }

label_80318E7C:
    ctx->downcount -= 1;
    // 80318E7C: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80318E80:
    ctx->pc = 0x80318E80u;
    ctx->downcount -= 3;
    // 80318E80: lwz     r4, 1244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318E84:
    // 80318E84: cmpw    r31, r4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318E88:
    // 80318E88: bc    12, 0, 0x80318E60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318E60u;
                return;
            }
            goto label_80318E60;
        }
    }

label_80318E8C:
    ctx->pc = 0x80318E8Cu;
    ctx->downcount -= 2;
    // 80318E8C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318E90:
    ctx->pc = 0x80318E90u;
    // 80318E90: b       0x80318EB4
    {
            goto label_80318EB4;
    }

label_80318E94:
    ctx->pc = 0x80318E94u;
    ctx->downcount -= 3;
    // 80318E94: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318E98:
    // 80318E98: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318E9C:
    // 80318E9C: bl      0x80319EE0
    {
            ctx->lr = 0x80318EA0u;
            goto label_80319EE0;
    }

label_80318EA0:
    ctx->downcount -= 4;
    // 80318EA0: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318EA4:
    ctx->pc = 0x80318EA4u;
    // 80318EA4: lwz     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318EA8:
    // 80318EA8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318EAC:
    // 80318EAC: bl      0x80322354
    {
            ctx->lr = 0x80318EB0u;
            ctx->pc = 0x80322354u;
            return;
    }

label_80318EB0:
    ctx->downcount -= 1;
    // 80318EB0: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_80318EB4:
    ctx->pc = 0x80318EB4u;
    ctx->downcount -= 3;
    // 80318EB4: lwz     r4, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318EB8:
    // 80318EB8: cmpw    r31, r4
    {
        s32 val_a = (s32)(ctx->gpr[31]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318EBC:
    // 80318EBC: bc    12, 0, 0x80318E94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318E94u;
                return;
            }
            goto label_80318E94;
        }
    }

label_80318EC0:
    ctx->pc = 0x80318EC0u;
    ctx->downcount -= 3;
    // 80318EC0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318EC4:
    ctx->pc = 0x80318EC4u;
    // 80318EC4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318EC8:
    ctx->pc = 0x80318EC8u;
    // 80318EC8: b       0x80318EF0
    {
            goto label_80318EF0;
    }

label_80318ECC:
    ctx->pc = 0x80318ECCu;
    ctx->downcount -= 3;
    // 80318ECC: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318ED0:
    // 80318ED0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318ED4:
    // 80318ED4: bl      0x80319EFC
    {
            ctx->lr = 0x80318ED8u;
            goto label_80319EFC;
    }

label_80318ED8:
    ctx->downcount -= 4;
    // 80318ED8: add   r5, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80318EDC:
    // 80318EDC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318EE0:
    ctx->pc = 0x80318EE0u;
    // 80318EE0: lwz     r3, 160(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318EE4:
    // 80318EE4: bl      0x8036B234
    {
            ctx->lr = 0x80318EE8u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_80318EE8:
    ctx->downcount -= 2;
    // 80318EE8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318EEC:
    // 80318EEC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318EF0:
    ctx->pc = 0x80318EF0u;
    ctx->downcount -= 3;
    // 80318EF0: lwz     r4, 1244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318EF4:
    // 80318EF4: cmpw    r30, r4
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[4]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318EF8:
    // 80318EF8: bc    12, 0, 0x80318ECC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318ECCu;
                return;
            }
            goto label_80318ECC;
        }
    }

label_80318EFC:
    ctx->pc = 0x80318EFCu;
    ctx->downcount -= 3;
    // 80318EFC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80318F00:
    ctx->pc = 0x80318F00u;
    // 80318F00: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80318F04:
    ctx->pc = 0x80318F04u;
    // 80318F04: b       0x80318F30
    {
            goto label_80318F30;
    }

label_80318F08:
    ctx->pc = 0x80318F08u;
    ctx->downcount -= 4;
    // 80318F08: lwz     r3, 152(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318F0C:
    // 80318F0C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80318F10:
    // 80318F10: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80318F14:
    // 80318F14: bl      0x80319EE0
    {
            ctx->lr = 0x80318F18u;
            goto label_80319EE0;
    }

label_80318F18:
    ctx->downcount -= 4;
    // 80318F18: add   r5, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80318F1C:
    // 80318F1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318F20:
    ctx->pc = 0x80318F20u;
    // 80318F20: lwz     r3, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318F24:
    // 80318F24: bl      0x8036B234
    {
            ctx->lr = 0x80318F28u;
            ctx->pc = 0x8036B234u;
            return;
    }

label_80318F28:
    ctx->downcount -= 2;
    // 80318F28: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80318F2C:
    // 80318F2C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80318F30:
    ctx->pc = 0x80318F30u;
    ctx->downcount -= 3;
    // 80318F30: lwz     r5, 1248(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1248);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318F34:
    // 80318F34: cmpw    r30, r5
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[5]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80318F38:
    // 80318F38: bc    12, 0, 0x80318F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318F08u;
                return;
            }
            goto label_80318F08;
        }
    }

label_80318F3C:
    ctx->pc = 0x80318F3Cu;
    ctx->downcount -= 9;
    // 80318F3C: li      r3, 2
    ctx->gpr[3] = (u32)(s32)(2);

label_80318F40:
    ctx->pc = 0x80318F40u;
    // 80318F40: addi    r0, r5, -2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-2);

label_80318F44:
    ctx->pc = 0x80318F44u;
    // 80318F44: xoris   r4, r3, 0x8000
    ctx->gpr[4] = ctx->gpr[3] ^ (0x8000u << 16);

label_80318F48:
    ctx->pc = 0x80318F48u;
    // 80318F48: lwz     r3, 200(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318F4C:
    ctx->pc = 0x80318F4Cu;
    // 80318F4C: addc   r0, r0, r4
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[4];
        u64 wide = (u64)a + (u64)b;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318F50:
    ctx->pc = 0x80318F50u;
    // 80318F50: lwz     r4, 1244(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(1244);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80318F54:
    ctx->pc = 0x80318F54u;
    // 80318F54: subfe   r0, r0, r0
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[0];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[0] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318F58:
    ctx->pc = 0x80318F58u;
    // 80318F58: and   r5, r5, r0
    {
        ctx->gpr[5] = ctx->gpr[5] & ctx->gpr[0];
    }

label_80318F5C:
    ctx->pc = 0x80318F5Cu;
    // 80318F5C: bl      0x80322348
    {
            ctx->lr = 0x80318F60u;
            ctx->pc = 0x80322348u;
            return;
    }

label_80318F60:
    ctx->pc = 0x80318F60u;
    ctx->downcount -= 16;
    // 80318F60: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80318F64:
    ctx->pc = 0x80318F64u;
    // 80318F64: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80318F68:
    ctx->pc = 0x80318F68u;
    // 80318F68: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80318F6C:
    ctx->pc = 0x80318F6Cu;
    // 80318F6C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80318F70:
    ctx->pc = 0x80318F70u;
    // 80318F70: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80318F74:
    ctx->pc = 0x80318F74u;
    ctx->downcount -= 22;
    // 80318F74: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80318F78:
    ctx->pc = 0x80318F78u;
    // 80318F78: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80318F7C:
    ctx->pc = 0x80318F7Cu;
    // 80318F7C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80318F80:
    ctx->pc = 0x80318F80u;
    // 80318F80: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80318F84:
    ctx->pc = 0x80318F84u;
    // 80318F84: lis     r28, -32661
    ctx->gpr[28] = ((u32)(s32)(-32661) << 16);

label_80318F88:
    ctx->pc = 0x80318F88u;
    // 80318F88: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80318F8C:
    ctx->pc = 0x80318F8Cu;
    // 80318F8C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318F90:
    ctx->pc = 0x80318F90u;
    // 80318F90: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_80318F94:
    ctx->pc = 0x80318F94u;
    // 80318F94: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80318F98:
    ctx->pc = 0x80318F98u;
    // 80318F98: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318F9C:
    ctx->pc = 0x80318F9Cu;
    // 80318F9C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318FA0:
    ctx->pc = 0x80318FA0u;
    // 80318FA0: bl      0x80370BD4
    {
            ctx->lr = 0x80318FA4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318FA4:
    ctx->pc = 0x80318FA4u;
    ctx->downcount -= 7;
    // 80318FA4: lwz     r3, 156(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318FA8:
    ctx->pc = 0x80318FA8u;
    // 80318FA8: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80318FAC:
    ctx->pc = 0x80318FACu;
    // 80318FAC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318FB0:
    ctx->pc = 0x80318FB0u;
    // 80318FB0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318FB4:
    ctx->pc = 0x80318FB4u;
    // 80318FB4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80318FB8:
    ctx->pc = 0x80318FB8u;
    // 80318FB8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80318FBCu;
            ctx->pc = target;
            return;
        }
    }

label_80318FBC:
    ctx->pc = 0x80318FBCu;
    ctx->downcount -= 5;
    // 80318FBC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80318FC0:
    ctx->pc = 0x80318FC0u;
    // 80318FC0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80318FC4:
    ctx->pc = 0x80318FC4u;
    // 80318FC4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80318FC8:
    ctx->pc = 0x80318FC8u;
    // 80318FC8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80318FCC:
    ctx->pc = 0x80318FCCu;
    // 80318FCC: bl      0x8027714C
    {
            ctx->lr = 0x80318FD0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_80318FD0:
    ctx->pc = 0x80318FD0u;
    ctx->downcount -= 2;
    // 80318FD0: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80318FD4:
    ctx->pc = 0x80318FD4u;
    // 80318FD4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80318FD8:
    ctx->pc = 0x80318FD8u;
    ctx->downcount -= 5;
    // 80318FD8: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318FDC:
    // 80318FDC: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_80318FE0:
    // 80318FE0: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80318FE4:
    // 80318FE4: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80318FE8:
    // 80318FE8: bl      0x80370BD4
    {
            ctx->lr = 0x80318FECu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80318FEC:
    ctx->downcount -= 8;
    // 80318FEC: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80318FF0:
    ctx->pc = 0x80318FF0u;
    // 80318FF0: lwz     r27, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80318FF4:
    ctx->pc = 0x80318FF4u;
    // 80318FF4: lwz     r3, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80318FF8:
    ctx->pc = 0x80318FF8u;
    // 80318FF8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80318FFC:
    ctx->pc = 0x80318FFCu;
    // 80318FFC: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80319000:
    ctx->pc = 0x80319000u;
    // 80319000: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80319004:
    ctx->pc = 0x80319004u;
    // 80319004: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80319008u;
            ctx->pc = target;
            return;
        }
    }

label_80319008:
    ctx->downcount -= 5;
    // 80319008: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031900C:
    // 8031900C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80319010:
    // 80319010: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319014:
    // 80319014: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80319018:
    // 80319018: bl      0x8027714C
    {
            ctx->lr = 0x8031901Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8031901C:
    ctx->downcount -= 4;
    // 8031901C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80319020:
    // 80319020: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80319024:
    // 80319024: cmpwi   r26, 5
    {
        s32 val_a = (s32)(ctx->gpr[26]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319028:
    // 80319028: bc    12, 0, 0x80318FD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318FD8u;
                return;
            }
            goto label_80318FD8;
        }
    }

label_8031902C:
    ctx->pc = 0x8031902Cu;
    ctx->downcount -= 3;
    // 8031902C: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80319030:
    ctx->pc = 0x80319030u;
    // 80319030: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319034:
    ctx->pc = 0x80319034u;
    // 80319034: lis     r28, -32661
    ctx->gpr[28] = ((u32)(s32)(-32661) << 16);

label_80319038:
    ctx->pc = 0x80319038u;
    ctx->downcount -= 5;
    // 80319038: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031903C:
    // 8031903C: addi    r4, r28, 22792
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22792);

label_80319040:
    // 80319040: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80319044:
    // 80319044: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80319048:
    // 80319048: bl      0x80370BD4
    {
            ctx->lr = 0x8031904Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8031904C:
    ctx->downcount -= 8;
    // 8031904C: add   r3, r30, r29
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319050:
    ctx->pc = 0x80319050u;
    // 80319050: lwz     r27, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_80319054:
    ctx->pc = 0x80319054u;
    // 80319054: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319058:
    ctx->pc = 0x80319058u;
    // 80319058: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031905C:
    ctx->pc = 0x8031905Cu;
    // 8031905C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80319060:
    ctx->pc = 0x80319060u;
    // 80319060: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80319064:
    ctx->pc = 0x80319064u;
    // 80319064: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80319068u;
            ctx->pc = target;
            return;
        }
    }

label_80319068:
    ctx->downcount -= 5;
    // 80319068: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031906C:
    // 8031906C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80319070:
    // 80319070: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319074:
    // 80319074: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80319078:
    // 80319078: bl      0x8027714C
    {
            ctx->lr = 0x8031907Cu;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8031907C:
    ctx->downcount -= 4;
    // 8031907C: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80319080:
    // 80319080: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80319084:
    // 80319084: cmpwi   r26, 4
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

label_80319088:
    // 80319088: bc    12, 0, 0x80319038
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319038u;
                return;
            }
            goto label_80319038;
        }
    }

label_8031908C:
    ctx->pc = 0x8031908Cu;
    ctx->downcount -= 6;
    // 8031908C: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319090:
    ctx->pc = 0x80319090u;
    // 80319090: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80319094:
    ctx->pc = 0x80319094u;
    // 80319094: addi    r4, r4, 22792
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22792);

label_80319098:
    ctx->pc = 0x80319098u;
    // 80319098: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8031909C:
    ctx->pc = 0x8031909Cu;
    // 8031909C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803190A0:
    ctx->pc = 0x803190A0u;
    // 803190A0: bl      0x80370BD4
    {
            ctx->lr = 0x803190A4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803190A4:
    ctx->pc = 0x803190A4u;
    ctx->downcount -= 7;
    // 803190A4: lwz     r3, 180(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(180);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803190A8:
    ctx->pc = 0x803190A8u;
    // 803190A8: lwz     r27, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_803190AC:
    ctx->pc = 0x803190ACu;
    // 803190AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803190B0:
    ctx->pc = 0x803190B0u;
    // 803190B0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803190B4:
    ctx->pc = 0x803190B4u;
    // 803190B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803190B8:
    ctx->pc = 0x803190B8u;
    // 803190B8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803190BCu;
            ctx->pc = target;
            return;
        }
    }

label_803190BC:
    ctx->pc = 0x803190BCu;
    ctx->downcount -= 5;
    // 803190BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803190C0:
    ctx->pc = 0x803190C0u;
    // 803190C0: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_803190C4:
    ctx->pc = 0x803190C4u;
    // 803190C4: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803190C8:
    ctx->pc = 0x803190C8u;
    // 803190C8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803190CC:
    ctx->pc = 0x803190CCu;
    // 803190CC: bl      0x8027714C
    {
            ctx->lr = 0x803190D0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_803190D0:
    ctx->pc = 0x803190D0u;
    ctx->downcount -= 16;
    // 803190D0: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803190D4:
    ctx->pc = 0x803190D4u;
    // 803190D4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803190D8:
    ctx->pc = 0x803190D8u;
    // 803190D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803190DC:
    ctx->pc = 0x803190DCu;
    // 803190DC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803190E0:
    ctx->pc = 0x803190E0u;
    // 803190E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803190E4:
    ctx->pc = 0x803190E4u;
    ctx->downcount -= 21;
    // 803190E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803190E8:
    ctx->pc = 0x803190E8u;
    // 803190E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803190EC:
    ctx->pc = 0x803190ECu;
    // 803190EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803190F0:
    ctx->pc = 0x803190F0u;
    // 803190F0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803190F4:
    ctx->pc = 0x803190F4u;
    // 803190F4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803190F8:
    ctx->pc = 0x803190F8u;
    // 803190F8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803190FC:
    ctx->pc = 0x803190FCu;
    // 803190FC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80319100:
    ctx->pc = 0x80319100u;
    // 80319100: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80319104:
    ctx->pc = 0x80319104u;
    // 80319104: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80319108:
    ctx->pc = 0x80319108u;
    // 80319108: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031910Cu;
            ctx->pc = target;
            return;
        }
    }

label_8031910C:
    ctx->pc = 0x8031910Cu;
    ctx->downcount -= 2;
    // 8031910C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319110:
    ctx->pc = 0x80319110u;
    // 80319110: bc    4, 2, 0x80319134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319134;
        }
    }

label_80319114:
    ctx->pc = 0x80319114u;
    ctx->downcount -= 4;
    // 80319114: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80319118:
    ctx->pc = 0x80319118u;
    // 80319118: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031911C:
    ctx->pc = 0x8031911Cu;
    // 8031911C: addi    r4, r4, 22064
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22064);

label_80319120:
    ctx->pc = 0x80319120u;
    // 80319120: bl      0x8000E8B0
    {
            ctx->lr = 0x80319124u;
            ctx->pc = 0x8000E8B0u;
            return;
    }

label_80319124:
    ctx->pc = 0x80319124u;
    ctx->downcount -= 2;
    // 80319124: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319128:
    ctx->pc = 0x80319128u;
    // 80319128: bc    4, 2, 0x80319134
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319134;
        }
    }

label_8031912C:
    ctx->pc = 0x8031912Cu;
    ctx->downcount -= 2;
    // 8031912C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319130:
    ctx->pc = 0x80319130u;
    // 80319130: bl      0x80318CB8
    {
            ctx->lr = 0x80319134u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318CB8u;
                return;
            }
            goto label_80318CB8;
    }

label_80319134:
    ctx->pc = 0x80319134u;
    ctx->downcount -= 16;
    // 80319134: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319138:
    ctx->pc = 0x80319138u;
    // 80319138: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031913C:
    ctx->pc = 0x8031913Cu;
    // 8031913C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319140:
    ctx->pc = 0x80319140u;
    // 80319140: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319144:
    ctx->pc = 0x80319144u;
    // 80319144: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319148:
    ctx->pc = 0x80319148u;
    ctx->downcount -= 102;
    // 80319148: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031914C:
    ctx->pc = 0x8031914Cu;
    // 8031914C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319150:
    ctx->pc = 0x80319150u;
    // 80319150: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319154:
    ctx->pc = 0x80319154u;
    // 80319154: lwz     r0, 0(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(0);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319158:
    ctx->pc = 0x80319158u;
    // 80319158: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031915C:
    ctx->pc = 0x8031915Cu;
    // 8031915C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319160:
    ctx->pc = 0x80319160u;
    // 80319160: lis     r30, -32661
    ctx->gpr[30] = ((u32)(s32)(-32661) << 16);

label_80319164:
    ctx->pc = 0x80319164u;
    // 80319164: lwz     r5, 204(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(204);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80319168:
    ctx->pc = 0x80319168u;
    // 80319168: stw     r0, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031916C:
    ctx->pc = 0x8031916Cu;
    // 8031916C: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319170:
    ctx->pc = 0x80319170u;
    // 80319170: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319174:
    ctx->pc = 0x80319174u;
    // 80319174: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319178:
    ctx->pc = 0x80319178u;
    // 80319178: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031917C:
    ctx->pc = 0x8031917Cu;
    // 8031917C: lwz     r0, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319180:
    ctx->pc = 0x80319180u;
    // 80319180: stw     r0, 12(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319184:
    ctx->pc = 0x80319184u;
    // 80319184: lwz     r0, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319188:
    ctx->pc = 0x80319188u;
    // 80319188: stw     r0, 16(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031918C:
    ctx->pc = 0x8031918Cu;
    // 8031918C: lwz     r0, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319190:
    ctx->pc = 0x80319190u;
    // 80319190: stw     r0, 20(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319194:
    ctx->pc = 0x80319194u;
    // 80319194: lwz     r0, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319198:
    ctx->pc = 0x80319198u;
    // 80319198: stw     r0, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031919C:
    ctx->pc = 0x8031919Cu;
    // 8031919C: lwz     r0, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191A0:
    ctx->pc = 0x803191A0u;
    // 803191A0: stw     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191A4:
    ctx->pc = 0x803191A4u;
    // 803191A4: lwz     r0, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191A8:
    ctx->pc = 0x803191A8u;
    // 803191A8: stw     r0, 32(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191AC:
    ctx->pc = 0x803191ACu;
    // 803191AC: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191B0:
    ctx->pc = 0x803191B0u;
    // 803191B0: stw     r0, 36(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191B4:
    ctx->pc = 0x803191B4u;
    // 803191B4: lwz     r0, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191B8:
    ctx->pc = 0x803191B8u;
    // 803191B8: stw     r0, 40(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191BC:
    ctx->pc = 0x803191BCu;
    // 803191BC: lwz     r0, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191C0:
    ctx->pc = 0x803191C0u;
    // 803191C0: stw     r0, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191C4:
    ctx->pc = 0x803191C4u;
    // 803191C4: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191C8:
    ctx->pc = 0x803191C8u;
    // 803191C8: stw     r0, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191CC:
    ctx->pc = 0x803191CCu;
    // 803191CC: lwz     r0, 52(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191D0:
    ctx->pc = 0x803191D0u;
    // 803191D0: stw     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191D4:
    ctx->pc = 0x803191D4u;
    // 803191D4: lwz     r0, 56(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(56);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191D8:
    ctx->pc = 0x803191D8u;
    // 803191D8: stw     r0, 56(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191DC:
    ctx->pc = 0x803191DCu;
    // 803191DC: lwz     r0, 60(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(60);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191E0:
    ctx->pc = 0x803191E0u;
    // 803191E0: stw     r0, 60(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(60);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191E4:
    ctx->pc = 0x803191E4u;
    // 803191E4: lwz     r0, 64(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(64);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191E8:
    ctx->pc = 0x803191E8u;
    // 803191E8: stw     r0, 64(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(64);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191EC:
    ctx->pc = 0x803191ECu;
    // 803191EC: lbz     r0, 68(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(68);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_803191F0:
    ctx->pc = 0x803191F0u;
    // 803191F0: stb     r0, 68(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(68);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_803191F4:
    ctx->pc = 0x803191F4u;
    // 803191F4: lwz     r0, 72(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(72);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803191F8:
    ctx->pc = 0x803191F8u;
    // 803191F8: stw     r0, 72(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(72);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803191FC:
    ctx->pc = 0x803191FCu;
    // 803191FC: lwz     r0, 76(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319200:
    ctx->pc = 0x80319200u;
    // 80319200: stw     r0, 76(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(76);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319204:
    ctx->pc = 0x80319204u;
    // 80319204: lwz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319208:
    ctx->pc = 0x80319208u;
    // 80319208: stw     r0, 80(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(80);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031920C:
    ctx->pc = 0x8031920Cu;
    // 8031920C: lwz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319210:
    ctx->pc = 0x80319210u;
    // 80319210: stw     r0, 84(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319214:
    ctx->pc = 0x80319214u;
    // 80319214: lwz     r0, 88(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(88);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319218:
    ctx->pc = 0x80319218u;
    // 80319218: stw     r0, 88(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(88);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031921C:
    ctx->pc = 0x8031921Cu;
    // 8031921C: lwz     r0, 92(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(92);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319220:
    ctx->pc = 0x80319220u;
    // 80319220: stw     r0, 92(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(92);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319224:
    ctx->pc = 0x80319224u;
    // 80319224: lwz     r0, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319228:
    ctx->pc = 0x80319228u;
    // 80319228: stw     r0, 96(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(96);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031922C:
    ctx->pc = 0x8031922Cu;
    // 8031922C: lwz     r0, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319230:
    ctx->pc = 0x80319230u;
    // 80319230: stw     r0, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319234:
    ctx->pc = 0x80319234u;
    // 80319234: lwz     r0, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319238:
    ctx->pc = 0x80319238u;
    // 80319238: stw     r0, 104(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031923C:
    ctx->pc = 0x8031923Cu;
    // 8031923C: lwz     r0, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319240:
    ctx->pc = 0x80319240u;
    // 80319240: stw     r0, 108(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319244:
    ctx->pc = 0x80319244u;
    // 80319244: lwz     r0, 112(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(112);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319248:
    ctx->pc = 0x80319248u;
    // 80319248: stw     r0, 112(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031924C:
    ctx->pc = 0x8031924Cu;
    // 8031924C: lwz     r0, 116(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(116);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319250:
    ctx->pc = 0x80319250u;
    // 80319250: stw     r0, 116(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(116);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319254:
    ctx->pc = 0x80319254u;
    // 80319254: lwz     r0, 120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319258:
    ctx->pc = 0x80319258u;
    // 80319258: stw     r0, 120(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(120);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031925C:
    ctx->pc = 0x8031925Cu;
    // 8031925C: lbz     r0, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80319260:
    ctx->pc = 0x80319260u;
    // 80319260: stb     r0, 124(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(124);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80319264:
    ctx->pc = 0x80319264u;
    // 80319264: lbz     r0, 125(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(125);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80319268:
    ctx->pc = 0x80319268u;
    // 80319268: stb     r0, 125(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(125);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031926C:
    ctx->pc = 0x8031926Cu;
    // 8031926C: lwz     r0, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319270:
    ctx->pc = 0x80319270u;
    // 80319270: stw     r0, 128(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(128);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319274:
    ctx->pc = 0x80319274u;
    // 80319274: lbz     r0, 132(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(132);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80319278:
    ctx->pc = 0x80319278u;
    // 80319278: stb     r0, 132(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(132);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031927C:
    ctx->pc = 0x8031927Cu;
    // 8031927C: lwz     r0, 134(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(134);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319280:
    ctx->pc = 0x80319280u;
    // 80319280: stw     r0, 134(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(134);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319284:
    ctx->pc = 0x80319284u;
    // 80319284: lwz     r0, 138(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(138);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319288:
    ctx->pc = 0x80319288u;
    // 80319288: stw     r0, 138(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(138);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031928C:
    ctx->pc = 0x8031928Cu;
    // 8031928C: lwz     r0, 144(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(144);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319290:
    ctx->pc = 0x80319290u;
    // 80319290: stw     r0, 144(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(144);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319294:
    ctx->pc = 0x80319294u;
    // 80319294: lwz     r0, 148(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319298:
    ctx->pc = 0x80319298u;
    // 80319298: stw     r0, 148(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031929C:
    ctx->pc = 0x8031929Cu;
    // 8031929C: lwz     r0, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803192A0:
    ctx->pc = 0x803192A0u;
    // 803192A0: addi    r4, r30, 22184
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22184);

label_803192A4:
    ctx->pc = 0x803192A4u;
    // 803192A4: stw     r0, 152(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803192A8:
    ctx->pc = 0x803192A8u;
    // 803192A8: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803192AC:
    ctx->pc = 0x803192ACu;
    // 803192AC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803192B0:
    ctx->pc = 0x803192B0u;
    // 803192B0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803192B4:
    ctx->pc = 0x803192B4u;
    // 803192B4: bl      0x80370BD4
    {
            ctx->lr = 0x803192B8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803192B8:
    ctx->pc = 0x803192B8u;
    ctx->downcount -= 8;
    // 803192B8: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803192BC:
    ctx->pc = 0x803192BCu;
    // 803192BC: addi    r4, r30, 22184
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(22184);

label_803192C0:
    ctx->pc = 0x803192C0u;
    // 803192C0: lwz     r0, 20(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803192C4:
    ctx->pc = 0x803192C4u;
    // 803192C4: stw     r0, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803192C8:
    ctx->pc = 0x803192C8u;
    // 803192C8: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803192CC:
    ctx->pc = 0x803192CCu;
    // 803192CC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_803192D0:
    ctx->pc = 0x803192D0u;
    // 803192D0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_803192D4:
    ctx->pc = 0x803192D4u;
    // 803192D4: bl      0x80370BD4
    {
            ctx->lr = 0x803192D8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_803192D8:
    ctx->pc = 0x803192D8u;
    ctx->downcount -= 8;
    // 803192D8: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803192DC:
    ctx->pc = 0x803192DCu;
    // 803192DC: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803192E0:
    ctx->pc = 0x803192E0u;
    // 803192E0: lwz     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803192E4:
    ctx->pc = 0x803192E4u;
    // 803192E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803192E8:
    ctx->pc = 0x803192E8u;
    // 803192E8: lwz     r5, 24(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(24);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_803192EC:
    ctx->pc = 0x803192ECu;
    // 803192EC: stw     r5, 1236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1236);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803192F0:
    ctx->pc = 0x803192F0u;
    // 803192F0: stw     r0, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803192F4:
    ctx->pc = 0x803192F4u;
    // 803192F4: bl      0x802F1FDC
    {
            ctx->lr = 0x803192F8u;
            ctx->pc = 0x802F1FDCu;
            return;
    }

label_803192F8:
    ctx->pc = 0x803192F8u;
    ctx->downcount -= 3;
    // 803192F8: lhz     r0, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_803192FC:
    ctx->pc = 0x803192FCu;
    // 803192FC: cmplwi  r0, 0x0004
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0004u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319300:
    ctx->pc = 0x80319300u;
    // 80319300: bc    4, 0, 0x80319308
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319308;
        }
    }

label_80319304:
    ctx->pc = 0x80319304u;
    ctx->downcount -= 1;
    // 80319304: stw     r0, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319308:
    ctx->pc = 0x80319308u;
    ctx->downcount -= 4;
    // 80319308: lwz     r3, -13384(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13384);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031930C:
    ctx->pc = 0x8031930Cu;
    // 8031930C: lwz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319310:
    ctx->pc = 0x80319310u;
    // 80319310: stw     r0, 1248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319314:
    ctx->pc = 0x80319314u;
    // 80319314: bl      0x802C3388
    {
            ctx->lr = 0x80319318u;
            ctx->pc = 0x802C3388u;
            return;
    }

label_80319318:
    ctx->pc = 0x80319318u;
    ctx->downcount -= 7;
    // 80319318: lwz     r4, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031931C:
    ctx->pc = 0x8031931Cu;
    // 8031931C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80319320:
    ctx->pc = 0x80319320u;
    // 80319320: stw     r3, 1244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319324:
    ctx->pc = 0x80319324u;
    // 80319324: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319328:
    ctx->pc = 0x80319328u;
    // 80319328: stw     r4, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031932C:
    ctx->pc = 0x8031932Cu;
    // 8031932C: stw     r0, 1260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1260);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319330:
    ctx->pc = 0x80319330u;
    // 80319330: bl      0x80318E44
    {
            ctx->lr = 0x80319334u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80318E44u;
                return;
            }
            goto label_80318E44;
    }

label_80319334:
    ctx->pc = 0x80319334u;
    ctx->downcount -= 3;
    // 80319334: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80319338:
    ctx->pc = 0x80319338u;
    // 80319338: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031933C:
    ctx->pc = 0x8031933Cu;
    // 8031933C: bl      0x803457B8
    {
            ctx->lr = 0x80319340u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_80319340:
    ctx->pc = 0x80319340u;
    ctx->downcount -= 16;
    // 80319340: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319344:
    ctx->pc = 0x80319344u;
    // 80319344: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319348:
    ctx->pc = 0x80319348u;
    // 80319348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031934C:
    ctx->pc = 0x8031934Cu;
    // 8031934C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319350:
    ctx->pc = 0x80319350u;
    // 80319350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319354:
    ctx->pc = 0x80319354u;
    ctx->downcount -= 20;
    // 80319354: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319358:
    ctx->pc = 0x80319358u;
    // 80319358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031935C:
    ctx->pc = 0x8031935Cu;
    // 8031935C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80319360:
    ctx->pc = 0x80319360u;
    // 80319360: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80319364:
    ctx->pc = 0x80319364u;
    // 80319364: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319368:
    ctx->pc = 0x80319368u;
    // 80319368: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031936C:
    ctx->pc = 0x8031936Cu;
    // 8031936C: lis     r30, -32659
    ctx->gpr[30] = ((u32)(s32)(-32659) << 16);

label_80319370:
    ctx->pc = 0x80319370u;
    // 80319370: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319374:
    ctx->pc = 0x80319374u;
    // 80319374: addi    r30, r30, -22736
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-22736);

label_80319378:
    ctx->pc = 0x80319378u;
    // 80319378: bl      0x8031980C
    {
            ctx->lr = 0x8031937Cu;
            goto label_8031980C;
    }

label_8031937C:
    ctx->pc = 0x8031937Cu;
    ctx->downcount -= 10;
    // 8031937C: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_80319380:
    ctx->pc = 0x80319380u;
    // 80319380: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_80319384:
    ctx->pc = 0x80319384u;
    // 80319384: addi    r4, r4, -22576
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22576);

label_80319388:
    ctx->pc = 0x80319388u;
    // 80319388: stw     r4, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031938C:
    ctx->pc = 0x8031938Cu;
    // 8031938C: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_80319390:
    ctx->pc = 0x80319390u;
    // 80319390: addi    r5, r30, 48
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(48);

label_80319394:
    ctx->pc = 0x80319394u;
    // 80319394: stw     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319398:
    ctx->pc = 0x80319398u;
    // 80319398: addi    r4, r30, 36
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(36);

label_8031939C:
    ctx->pc = 0x8031939Cu;
    // 8031939C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_803193A0:
    ctx->pc = 0x803193A0u;
    // 803193A0: bl      0x8031972C
    {
            ctx->lr = 0x803193A4u;
            goto label_8031972C;
    }

label_803193A4:
    ctx->pc = 0x803193A4u;
    ctx->downcount -= 5;
    // 803193A4: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803193A8:
    ctx->pc = 0x803193A8u;
    // 803193A8: addi    r4, r30, 60
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(60);

label_803193AC:
    ctx->pc = 0x803193ACu;
    // 803193AC: addi    r5, r30, 72
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(72);

label_803193B0:
    ctx->pc = 0x803193B0u;
    // 803193B0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_803193B4:
    ctx->pc = 0x803193B4u;
    // 803193B4: bl      0x8031972C
    {
            ctx->lr = 0x803193B8u;
            goto label_8031972C;
    }

label_803193B8:
    ctx->pc = 0x803193B8u;
    ctx->downcount -= 5;
    // 803193B8: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803193BC:
    ctx->pc = 0x803193BCu;
    // 803193BC: addi    r4, r30, 84
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(84);

label_803193C0:
    ctx->pc = 0x803193C0u;
    // 803193C0: addi    r5, r30, 96
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(96);

label_803193C4:
    ctx->pc = 0x803193C4u;
    // 803193C4: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_803193C8:
    ctx->pc = 0x803193C8u;
    // 803193C8: bl      0x8031972C
    {
            ctx->lr = 0x803193CCu;
            goto label_8031972C;
    }

label_803193CC:
    ctx->pc = 0x803193CCu;
    ctx->downcount -= 5;
    // 803193CC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803193D0:
    ctx->pc = 0x803193D0u;
    // 803193D0: addi    r4, r30, 108
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(108);

label_803193D4:
    ctx->pc = 0x803193D4u;
    // 803193D4: addi    r5, r30, 120
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(120);

label_803193D8:
    ctx->pc = 0x803193D8u;
    // 803193D8: li      r6, 2
    ctx->gpr[6] = (u32)(s32)(2);

label_803193DC:
    ctx->pc = 0x803193DCu;
    // 803193DC: bl      0x8031972C
    {
            ctx->lr = 0x803193E0u;
            goto label_8031972C;
    }

label_803193E0:
    ctx->pc = 0x803193E0u;
    ctx->downcount -= 5;
    // 803193E0: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803193E4:
    ctx->pc = 0x803193E4u;
    // 803193E4: addi    r4, r30, 132
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(132);

label_803193E8:
    ctx->pc = 0x803193E8u;
    // 803193E8: addi    r5, r30, 144
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(144);

label_803193EC:
    ctx->pc = 0x803193ECu;
    // 803193EC: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_803193F0:
    ctx->pc = 0x803193F0u;
    // 803193F0: bl      0x8031972C
    {
            ctx->lr = 0x803193F4u;
            goto label_8031972C;
    }

label_803193F4:
    ctx->pc = 0x803193F4u;
    ctx->downcount -= 2;
    // 803193F4: li      r3, 620
    ctx->gpr[3] = (u32)(s32)(620);

label_803193F8:
    ctx->pc = 0x803193F8u;
    // 803193F8: bl      0x801C1C48
    {
            ctx->lr = 0x803193FCu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_803193FC:
    ctx->pc = 0x803193FCu;
    ctx->downcount -= 2;
    // 803193FC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319400:
    ctx->pc = 0x80319400u;
    // 80319400: bc    12, 2, 0x8031940C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031940C;
        }
    }

label_80319404:
    ctx->pc = 0x80319404u;
    ctx->downcount -= 2;
    // 80319404: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319408:
    ctx->pc = 0x80319408u;
    // 80319408: bl      0x8031A0C0
    {
            ctx->lr = 0x8031940Cu;
            goto label_8031A0C0;
    }

label_8031940C:
    ctx->pc = 0x8031940Cu;
    ctx->downcount -= 3;
    // 8031940C: stw     r3, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319410:
    ctx->pc = 0x80319410u;
    // 80319410: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_80319414:
    ctx->pc = 0x80319414u;
    // 80319414: bl      0x801C1C48
    {
            ctx->lr = 0x80319418u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80319418:
    ctx->pc = 0x80319418u;
    ctx->downcount -= 2;
    // 80319418: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031941C:
    ctx->pc = 0x8031941Cu;
    // 8031941C: bc    12, 2, 0x80319428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319428;
        }
    }

label_80319420:
    ctx->pc = 0x80319420u;
    ctx->downcount -= 2;
    // 80319420: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319424:
    ctx->pc = 0x80319424u;
    // 80319424: bl      0x8031A7FC
    {
            ctx->lr = 0x80319428u;
            goto label_8031A7FC;
    }

label_80319428:
    ctx->pc = 0x80319428u;
    ctx->downcount -= 3;
    // 80319428: stw     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031942C:
    ctx->pc = 0x8031942Cu;
    // 8031942C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319430:
    ctx->pc = 0x80319430u;
    // 80319430: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80319434:
    ctx->downcount -= 2;
    // 80319434: li      r3, 316
    ctx->gpr[3] = (u32)(s32)(316);

label_80319438:
    // 80319438: bl      0x801C1C48
    {
            ctx->lr = 0x8031943Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8031943C:
    ctx->downcount -= 2;
    // 8031943C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319440:
    // 80319440: bc    12, 2, 0x8031944C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031944C;
        }
    }

label_80319444:
    ctx->downcount -= 2;
    // 80319444: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319448:
    // 80319448: bl      0x8032211C
    {
            ctx->lr = 0x8031944Cu;
            ctx->pc = 0x8032211Cu;
            return;
    }

label_8031944C:
    ctx->downcount -= 6;
    // 8031944C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80319450:
    // 80319450: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80319454:
    // 80319454: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319458:
    ctx->pc = 0x80319458u;
    // 80319458: stw     r3, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031945C:
    // 8031945C: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80319460:
    // 80319460: bc    12, 0, 0x80319434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319434u;
                return;
            }
            goto label_80319434;
        }
    }

label_80319464:
    ctx->pc = 0x80319464u;
    ctx->downcount -= 2;
    // 80319464: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_80319468:
    ctx->pc = 0x80319468u;
    // 80319468: bl      0x801C1C48
    {
            ctx->lr = 0x8031946Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8031946C:
    ctx->pc = 0x8031946Cu;
    ctx->downcount -= 2;
    // 8031946C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319470:
    ctx->pc = 0x80319470u;
    // 80319470: bc    12, 2, 0x8031947C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031947C;
        }
    }

label_80319474:
    ctx->pc = 0x80319474u;
    ctx->downcount -= 2;
    // 80319474: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319478:
    ctx->pc = 0x80319478u;
    // 80319478: bl      0x8031A964
    {
            ctx->lr = 0x8031947Cu;
            goto label_8031A964;
    }

label_8031947C:
    ctx->pc = 0x8031947Cu;
    ctx->downcount -= 3;
    // 8031947C: stw     r3, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319480:
    ctx->pc = 0x80319480u;
    // 80319480: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319484:
    ctx->pc = 0x80319484u;
    // 80319484: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80319488:
    ctx->downcount -= 2;
    // 80319488: li      r3, 296
    ctx->gpr[3] = (u32)(s32)(296);

label_8031948C:
    // 8031948C: bl      0x801C1C48
    {
            ctx->lr = 0x80319490u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80319490:
    ctx->downcount -= 2;
    // 80319490: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319494:
    // 80319494: bc    12, 2, 0x803194A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803194A0;
        }
    }

label_80319498:
    ctx->downcount -= 2;
    // 80319498: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031949C:
    // 8031949C: bl      0x8031A4D4
    {
            ctx->lr = 0x803194A0u;
            goto label_8031A4D4;
    }

label_803194A0:
    ctx->downcount -= 6;
    // 803194A0: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_803194A4:
    // 803194A4: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803194A8:
    // 803194A8: cmpwi   r29, 4
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

label_803194AC:
    ctx->pc = 0x803194ACu;
    // 803194AC: stw     r3, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803194B0:
    // 803194B0: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_803194B4:
    // 803194B4: bc    12, 0, 0x80319488
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319488u;
                return;
            }
            goto label_80319488;
        }
    }

label_803194B8:
    ctx->pc = 0x803194B8u;
    ctx->downcount -= 3;
    // 803194B8: lwz     r4, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803194BC:
    ctx->pc = 0x803194BCu;
    // 803194BC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803194C0:
    ctx->pc = 0x803194C0u;
    // 803194C0: bl      0x802A6408
    {
            ctx->lr = 0x803194C4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803194C4:
    ctx->pc = 0x803194C4u;
    ctx->downcount -= 3;
    // 803194C4: lwz     r4, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803194C8:
    ctx->pc = 0x803194C8u;
    // 803194C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803194CC:
    ctx->pc = 0x803194CCu;
    // 803194CC: bl      0x802A6408
    {
            ctx->lr = 0x803194D0u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803194D0:
    ctx->pc = 0x803194D0u;
    ctx->downcount -= 2;
    // 803194D0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_803194D4:
    ctx->pc = 0x803194D4u;
    // 803194D4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_803194D8:
    ctx->downcount -= 4;
    // 803194D8: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_803194DC:
    // 803194DC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803194E0:
    ctx->pc = 0x803194E0u;
    // 803194E0: lwz     r4, 160(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803194E4:
    // 803194E4: bl      0x802A6408
    {
            ctx->lr = 0x803194E8u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_803194E8:
    ctx->downcount -= 4;
    // 803194E8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_803194EC:
    // 803194EC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_803194F0:
    // 803194F0: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803194F4:
    // 803194F4: bc    12, 0, 0x803194D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803194D8u;
                return;
            }
            goto label_803194D8;
        }
    }

label_803194F8:
    ctx->pc = 0x803194F8u;
    ctx->downcount -= 3;
    // 803194F8: lwz     r4, 180(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(180);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803194FC:
    ctx->pc = 0x803194FCu;
    // 803194FC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319500:
    ctx->pc = 0x80319500u;
    // 80319500: bl      0x802A6408
    {
            ctx->lr = 0x80319504u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80319504:
    ctx->pc = 0x80319504u;
    ctx->downcount -= 2;
    // 80319504: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319508:
    ctx->pc = 0x80319508u;
    // 80319508: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8031950C:
    ctx->downcount -= 4;
    // 8031950C: add   r4, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80319510:
    // 80319510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319514:
    ctx->pc = 0x80319514u;
    // 80319514: lwz     r4, 184(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319518:
    // 80319518: bl      0x802A6408
    {
            ctx->lr = 0x8031951Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_8031951C:
    ctx->downcount -= 4;
    // 8031951C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80319520:
    // 80319520: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80319524:
    // 80319524: cmpwi   r29, 4
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

label_80319528:
    // 80319528: bc    12, 0, 0x8031950C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031950Cu;
                return;
            }
            goto label_8031950C;
        }
    }

label_8031952C:
    ctx->pc = 0x8031952Cu;
    ctx->downcount -= 2;
    // 8031952C: li      r3, 156
    ctx->gpr[3] = (u32)(s32)(156);

label_80319530:
    ctx->pc = 0x80319530u;
    // 80319530: bl      0x801C1C48
    {
            ctx->lr = 0x80319534u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80319534:
    ctx->pc = 0x80319534u;
    ctx->downcount -= 2;
    // 80319534: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319538:
    ctx->pc = 0x80319538u;
    // 80319538: bc    12, 2, 0x80319540
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319540;
        }
    }

label_8031953C:
    ctx->pc = 0x8031953Cu;
    ctx->downcount -= 1;
    // 8031953C: bl      0x802F1FEC
    {
            ctx->lr = 0x80319540u;
            ctx->pc = 0x802F1FECu;
            return;
    }

label_80319540:
    ctx->pc = 0x80319540u;
    ctx->downcount -= 3;
    // 80319540: stw     r3, 204(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319544:
    ctx->pc = 0x80319544u;
    // 80319544: li      r3, 56
    ctx->gpr[3] = (u32)(s32)(56);

label_80319548:
    ctx->pc = 0x80319548u;
    // 80319548: bl      0x801C1C48
    {
            ctx->lr = 0x8031954Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8031954C:
    ctx->pc = 0x8031954Cu;
    ctx->downcount -= 2;
    // 8031954C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319550:
    ctx->pc = 0x80319550u;
    // 80319550: bc    12, 2, 0x8031955C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031955C;
        }
    }

label_80319554:
    ctx->pc = 0x80319554u;
    ctx->downcount -= 2;
    // 80319554: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319558:
    ctx->pc = 0x80319558u;
    // 80319558: bl      0x80322368
    {
            ctx->lr = 0x8031955Cu;
            ctx->pc = 0x80322368u;
            return;
    }

label_8031955C:
    ctx->pc = 0x8031955Cu;
    ctx->downcount -= 3;
    // 8031955C: stw     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319560:
    ctx->pc = 0x80319560u;
    // 80319560: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319564:
    ctx->pc = 0x80319564u;
    // 80319564: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80319568:
    ctx->downcount -= 4;
    // 80319568: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8031956C:
    ctx->pc = 0x8031956Cu;
    // 8031956C: lwz     r4, 160(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(160);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319570:
    // 80319570: cmpwi   r4, 0
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

label_80319574:
    // 80319574: bc    12, 2, 0x8031957C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031957C;
        }
    }

label_80319578:
    ctx->downcount -= 1;
    // 80319578: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_8031957C:
    ctx->pc = 0x8031957Cu;
    ctx->downcount -= 2;
    // 8031957C: lwz     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319580:
    // 80319580: bl      0x8026F1B0
    {
            ctx->lr = 0x80319584u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_80319584:
    ctx->downcount -= 4;
    // 80319584: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80319588:
    // 80319588: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_8031958C:
    // 8031958C: cmpwi   r29, 5
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319590:
    // 80319590: bc    12, 0, 0x80319568
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319568u;
                return;
            }
            goto label_80319568;
        }
    }

label_80319594:
    ctx->pc = 0x80319594u;
    ctx->downcount -= 2;
    // 80319594: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319598:
    ctx->pc = 0x80319598u;
    // 80319598: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8031959C:
    ctx->downcount -= 4;
    // 8031959C: add   r3, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_803195A0:
    ctx->pc = 0x803195A0u;
    // 803195A0: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803195A4:
    // 803195A4: cmpwi   r4, 0
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

label_803195A8:
    // 803195A8: bc    12, 2, 0x803195B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803195B0;
        }
    }

label_803195AC:
    ctx->downcount -= 1;
    // 803195AC: addi    r4, r4, 156
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(156);

label_803195B0:
    ctx->pc = 0x803195B0u;
    ctx->downcount -= 2;
    // 803195B0: lwz     r3, 200(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_803195B4:
    // 803195B4: bl      0x8026F1B0
    {
            ctx->lr = 0x803195B8u;
            ctx->pc = 0x8026F1B0u;
            return;
    }

label_803195B8:
    ctx->downcount -= 4;
    // 803195B8: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_803195BC:
    // 803195BC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_803195C0:
    // 803195C0: cmpwi   r29, 4
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

label_803195C4:
    // 803195C4: bc    12, 0, 0x8031959C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031959Cu;
                return;
            }
            goto label_8031959C;
        }
    }

label_803195C8:
    ctx->pc = 0x803195C8u;
    ctx->downcount -= 3;
    // 803195C8: addi    r3, r31, 208
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(208);

label_803195CC:
    ctx->pc = 0x803195CCu;
    // 803195CC: li      r4, 512
    ctx->gpr[4] = (u32)(s32)(512);

label_803195D0:
    ctx->pc = 0x803195D0u;
    // 803195D0: bl      0x8034D73C
    {
            ctx->lr = 0x803195D4u;
            ctx->pc = 0x8034D73Cu;
            return;
    }

label_803195D4:
    ctx->pc = 0x803195D4u;
    ctx->downcount -= 30;
    // 803195D4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_803195D8:
    ctx->pc = 0x803195D8u;
    // 803195D8: li      r6, 14
    ctx->gpr[6] = (u32)(s32)(14);

label_803195DC:
    ctx->pc = 0x803195DCu;
    // 803195DC: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_803195E0:
    ctx->pc = 0x803195E0u;
    // 803195E0: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_803195E4:
    ctx->pc = 0x803195E4u;
    // 803195E4: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_803195E8:
    ctx->pc = 0x803195E8u;
    // 803195E8: stw     r7, 1240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1240);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_803195EC:
    ctx->pc = 0x803195ECu;
    // 803195EC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803195F0:
    ctx->pc = 0x803195F0u;
    // 803195F0: stw     r6, 1232(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1232);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_803195F4:
    ctx->pc = 0x803195F4u;
    // 803195F4: stw     r5, 1236(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1236);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_803195F8:
    ctx->pc = 0x803195F8u;
    // 803195F8: stw     r4, 1248(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1248);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803195FC:
    ctx->pc = 0x803195FCu;
    // 803195FC: stw     r0, 1244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1244);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319600:
    ctx->pc = 0x80319600u;
    // 80319600: stw     r7, 1252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1252);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80319604:
    ctx->pc = 0x80319604u;
    // 80319604: stw     r7, 1256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1256);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80319608:
    ctx->pc = 0x80319608u;
    // 80319608: stw     r7, 1260(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(1260);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8031960C:
    ctx->pc = 0x8031960Cu;
    // 8031960C: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319610:
    ctx->pc = 0x80319610u;
    // 80319610: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319614:
    ctx->pc = 0x80319614u;
    // 80319614: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319618:
    ctx->pc = 0x80319618u;
    // 80319618: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031961C:
    ctx->pc = 0x8031961Cu;
    // 8031961C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319620:
    ctx->pc = 0x80319620u;
    ctx->downcount -= 18;
    // 80319620: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319624:
    ctx->pc = 0x80319624u;
    // 80319624: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319628:
    // 80319628: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031962C:
    ctx->pc = 0x8031962Cu;
    // 8031962C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319630:
    ctx->pc = 0x80319630u;
    // 80319630: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319634:
    // 80319634: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319638:
    // 80319638: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031963C:
    // 8031963C: bc    12, 2, 0x8031966C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031966C;
        }
    }

label_80319640:
    ctx->downcount -= 1;
    // 80319640: bc    12, 2, 0x8031965C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031965C;
        }
    }

label_80319644:
    ctx->downcount -= 3;
    // 80319644: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_80319648:
    // 80319648: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8031964C:
    // 8031964C: bl      0x803196EC
    {
            ctx->lr = 0x80319650u;
            goto label_803196EC;
    }

label_80319650:
    ctx->downcount -= 3;
    // 80319650: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319654:
    // 80319654: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319658:
    // 80319658: bl      0x801ED118
    {
            ctx->lr = 0x8031965Cu;
            ctx->pc = 0x801ED118u;
            return;
    }

label_8031965C:
    ctx->downcount -= 2;
    // 8031965C: cmpwi   r31, 0
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

label_80319660:
    // 80319660: bc    4, 1, 0x8031966C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031966C;
        }
    }

label_80319664:
    ctx->downcount -= 2;
    // 80319664: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319668:
    // 80319668: bl      0x801C1C90
    {
            ctx->lr = 0x8031966Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031966C:
    ctx->downcount -= 17;
    // 8031966C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319670:
    ctx->pc = 0x80319670u;
    // 80319670: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319674:
    ctx->pc = 0x80319674u;
    // 80319674: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319678:
    ctx->pc = 0x80319678u;
    // 80319678: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031967C:
    // 8031967C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319680:
    ctx->pc = 0x80319680u;
    // 80319680: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319684:
    ctx->pc = 0x80319684u;
    ctx->downcount -= 18;
    // 80319684: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319688:
    ctx->pc = 0x80319688u;
    // 80319688: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031968C:
    // 8031968C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319690:
    ctx->pc = 0x80319690u;
    // 80319690: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319694:
    ctx->pc = 0x80319694u;
    // 80319694: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319698:
    // 80319698: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031969C:
    // 8031969C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803196A0:
    // 803196A0: bc    12, 2, 0x803196D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803196D4;
        }
    }

label_803196A4:
    ctx->downcount -= 1;
    // 803196A4: bc    12, 2, 0x803196C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803196C4;
        }
    }

label_803196A8:
    ctx->downcount -= 1;
    // 803196A8: bc    12, 2, 0x803196C4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_803196C4;
        }
    }

label_803196AC:
    ctx->downcount -= 3;
    // 803196AC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803196B0:
    // 803196B0: addi    r3, r3, 24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(24);

label_803196B4:
    // 803196B4: bl      0x801ED098
    {
            ctx->lr = 0x803196B8u;
            ctx->pc = 0x801ED098u;
            return;
    }

label_803196B8:
    ctx->downcount -= 3;
    // 803196B8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803196BC:
    // 803196BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_803196C0:
    // 803196C0: bl      0x801ED058
    {
            ctx->lr = 0x803196C4u;
            ctx->pc = 0x801ED058u;
            return;
    }

label_803196C4:
    ctx->downcount -= 2;
    // 803196C4: cmpwi   r31, 0
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

label_803196C8:
    // 803196C8: bc    4, 1, 0x803196D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_803196D4;
        }
    }

label_803196CC:
    ctx->downcount -= 2;
    // 803196CC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803196D0:
    // 803196D0: bl      0x801C1C90
    {
            ctx->lr = 0x803196D4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_803196D4:
    ctx->downcount -= 17;
    // 803196D4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_803196D8:
    ctx->pc = 0x803196D8u;
    // 803196D8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_803196DC:
    ctx->pc = 0x803196DCu;
    // 803196DC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803196E0:
    ctx->pc = 0x803196E0u;
    // 803196E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803196E4:
    // 803196E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_803196E8:
    ctx->pc = 0x803196E8u;
    // 803196E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803196EC:
    ctx->pc = 0x803196ECu;
    ctx->downcount -= 7;
    // 803196EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803196F0:
    ctx->pc = 0x803196F0u;
    // 803196F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803196F4:
    // 803196F4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_803196F8:
    ctx->pc = 0x803196F8u;
    // 803196F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803196FC:
    ctx->pc = 0x803196FCu;
    // 803196FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80319700:
    // 80319700: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319704:
    // 80319704: bc    12, 2, 0x80319714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319714;
        }
    }

label_80319708:
    ctx->downcount -= 2;
    // 80319708: cmpwi   r4, 0
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

label_8031970C:
    // 8031970C: bc    4, 1, 0x80319714
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319714;
        }
    }

label_80319710:
    ctx->downcount -= 1;
    // 80319710: bl      0x801C1C90
    {
            ctx->lr = 0x80319714u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80319714:
    ctx->downcount -= 7;
    // 80319714: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319718:
    ctx->pc = 0x80319718u;
    // 80319718: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031971C:
    ctx->pc = 0x8031971Cu;
    // 8031971C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319720:
    ctx->pc = 0x80319720u;
    // 80319720: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319724:
    // 80319724: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319728:
    ctx->pc = 0x80319728u;
    // 80319728: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031972C:
    ctx->pc = 0x8031972Cu;
    ctx->downcount -= 20;
    // 8031972C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319730:
    ctx->pc = 0x80319730u;
    // 80319730: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319734:
    ctx->pc = 0x80319734u;
    // 80319734: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319738:
    ctx->pc = 0x80319738u;
    // 80319738: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031973C:
    // 8031973C: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80319740:
    // 80319740: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80319744:
    // 80319744: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319748:
    // 80319748: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031974C:
    // 8031974C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319750:
    // 80319750: bl      0x803456D0
    {
            ctx->lr = 0x80319754u;
            ctx->pc = 0x803456D0u;
            return;
    }

label_80319754:
    ctx->downcount -= 34;
    // 80319754: mulli   r6, r31, 12
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80319758:
    ctx->pc = 0x80319758u;
    // 80319758: lwz     r0, 36(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031975C:
    ctx->pc = 0x8031975Cu;
    // 8031975C: lwz     r4, 0(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319760:
    ctx->pc = 0x80319760u;
    // 80319760: lwz     r3, 4(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319764:
    // 80319764: add   r5, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319768:
    ctx->pc = 0x80319768u;
    // 80319768: lwz     r0, 8(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031976C:
    ctx->pc = 0x8031976Cu;
    // 8031976C: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319770:
    ctx->pc = 0x80319770u;
    // 80319770: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319774:
    ctx->pc = 0x80319774u;
    // 80319774: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319778:
    ctx->pc = 0x80319778u;
    // 80319778: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031977C:
    ctx->pc = 0x8031977Cu;
    // 8031977C: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319780:
    ctx->pc = 0x80319780u;
    // 80319780: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319784:
    ctx->pc = 0x80319784u;
    // 80319784: lwz     r5, 40(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(40);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80319788:
    ctx->pc = 0x80319788u;
    // 80319788: stwux    r4, r5, r6
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[6];
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
        ctx->gpr[5] = ea;
    }

label_8031978C:
    ctx->pc = 0x8031978Cu;
    // 8031978C: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319790:
    ctx->pc = 0x80319790u;
    // 80319790: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319794:
    ctx->pc = 0x80319794u;
    // 80319794: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319798:
    ctx->pc = 0x80319798u;
    // 80319798: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031979C:
    ctx->pc = 0x8031979Cu;
    // 8031979C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_803197A0:
    // 803197A0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_803197A4:
    ctx->pc = 0x803197A4u;
    // 803197A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803197A8:
    ctx->downcount -= 2;
    // 803197A8: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803197AC:
    ctx->pc = 0x803197ACu;
    // 803197AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803197B0:
    ctx->downcount -= 2;
    // 803197B0: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_803197B4:
    ctx->pc = 0x803197B4u;
    // 803197B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_803197B8:
    ctx->pc = 0x803197B8u;
    ctx->downcount -= 10;
    // 803197B8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_803197BC:
    ctx->pc = 0x803197BCu;
    // 803197BC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803197C0:
    ctx->pc = 0x803197C0u;
    // 803197C0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803197C4:
    ctx->pc = 0x803197C4u;
    // 803197C4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_803197C8:
    // 803197C8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803197CC:
    ctx->pc = 0x803197CCu;
    // 803197CC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803197D0:
    ctx->pc = 0x803197D0u;
    // 803197D0: lwz     r12, 100(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(100);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803197D4:
    ctx->pc = 0x803197D4u;
    // 803197D4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803197D8:
    ctx->pc = 0x803197D8u;
    // 803197D8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803197DCu;
            ctx->pc = target;
            return;
        }
    }

label_803197DC:
    ctx->downcount -= 2;
    // 803197DC: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_803197E0:
    // 803197E0: bl      0x80319B14
    {
            ctx->lr = 0x803197E4u;
            goto label_80319B14;
    }

label_803197E4:
    ctx->pc = 0x803197E4u;
    ctx->downcount -= 6;
    // 803197E4: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803197E8:
    // 803197E8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_803197EC:
    ctx->pc = 0x803197ECu;
    // 803197EC: lwz     r12, 104(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(104);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_803197F0:
    ctx->pc = 0x803197F0u;
    // 803197F0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_803197F4:
    ctx->pc = 0x803197F4u;
    // 803197F4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x803197F8u;
            ctx->pc = target;
            return;
        }
    }

label_803197F8:
    ctx->pc = 0x803197F8u;
    ctx->downcount -= 6;
    // 803197F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803197FC:
    ctx->pc = 0x803197FCu;
    // 803197FC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80319800:
    ctx->pc = 0x80319800u;
    // 80319800: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319804:
    // 80319804: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319808:
    ctx->pc = 0x80319808u;
    // 80319808: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031980C:
    ctx->pc = 0x8031980Cu;
    ctx->downcount -= 21;
    // 8031980C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319810:
    ctx->pc = 0x80319810u;
    // 80319810: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319814:
    ctx->pc = 0x80319814u;
    // 80319814: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319818:
    ctx->pc = 0x80319818u;
    // 80319818: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031981C:
    // 8031981C: lis     r30, -32659
    ctx->gpr[30] = ((u32)(s32)(-32659) << 16);

label_80319820:
    // 80319820: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80319824:
    // 80319824: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80319828:
    // 80319828: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031982C:
    // 8031982C: addi    r30, r30, -22736
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-22736);

label_80319830:
    // 80319830: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319834:
    // 80319834: bl      0x802A6748
    {
            ctx->lr = 0x80319838u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_80319838:
    ctx->downcount -= 7;
    // 80319838: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8031983C:
    // 8031983C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80319840:
    // 80319840: addi    r4, r4, -22264
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-22264);

label_80319844:
    ctx->pc = 0x80319844u;
    // 80319844: stw     r4, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319848:
    // 80319848: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8031984C:
    ctx->pc = 0x8031984Cu;
    // 8031984C: stw     r0, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319850:
    // 80319850: bl      0x801ED17C
    {
            ctx->lr = 0x80319854u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_80319854:
    ctx->downcount -= 6;
    // 80319854: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319858:
    // 80319858: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8031985C:
    // 8031985C: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319860:
    // 80319860: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80319864:
    // 80319864: add   r5, r29, r0
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319868:
    // 80319868: bl      0x80319998
    {
            ctx->lr = 0x8031986Cu;
            goto label_80319998;
    }

label_8031986C:
    ctx->downcount -= 3;
    // 8031986C: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80319870:
    // 80319870: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319874:
    // 80319874: bl      0x802A5D48
    {
            ctx->lr = 0x80319878u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80319878:
    ctx->downcount -= 6;
    // 80319878: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031987C:
    // 8031987C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_80319880:
    // 80319880: addi    r4, r30, 316
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(316);

label_80319884:
    // 80319884: addi    r5, r30, 328
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(328);

label_80319888:
    // 80319888: addi    r6, r30, 340
    ctx->gpr[6] = ctx->gpr[30] + (u32)(s32)(340);

label_8031988C:
    // 8031988C: bl      0x80319AB8
    {
            ctx->lr = 0x80319890u;
            goto label_80319AB8;
    }

label_80319890:
    ctx->downcount -= 2;
    // 80319890: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80319894:
    // 80319894: bl      0x802A609C
    {
            ctx->lr = 0x80319898u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_80319898:
    ctx->downcount -= 10;
    // 80319898: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8031989C:
    // 8031989C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_803198A0:
    // 803198A0: addi    r3, r3, -22384
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22384);

label_803198A4:
    ctx->pc = 0x803198A4u;
    // 803198A4: stw     r3, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803198A8:
    // 803198A8: addi    r4, r3, 8
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(8);

label_803198AC:
    ctx->pc = 0x803198ACu;
    // 803198AC: stw     r4, 24(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_803198B0:
    // 803198B0: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803198B4:
    // 803198B4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_803198B8:
    ctx->pc = 0x803198B8u;
    // 803198B8: stw     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803198BC:
    // 803198BC: bl      0x802A5D48
    {
            ctx->lr = 0x803198C0u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803198C0:
    ctx->downcount -= 6;
    // 803198C0: lis     r31, -32667
    ctx->gpr[31] = ((u32)(s32)(-32667) << 16);

label_803198C4:
    // 803198C4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803198C8:
    // 803198C8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803198CC:
    // 803198CC: addi    r5, r30, 280
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(280);

label_803198D0:
    // 803198D0: addi    r4, r31, 22144
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22144);

label_803198D4:
    // 803198D4: bl      0x8031972C
    {
            ctx->lr = 0x803198D8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031972Cu;
                return;
            }
            goto label_8031972C;
    }

label_803198D8:
    ctx->downcount -= 3;
    // 803198D8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803198DC:
    // 803198DC: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_803198E0:
    // 803198E0: bl      0x802A5D48
    {
            ctx->lr = 0x803198E4u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_803198E4:
    ctx->downcount -= 5;
    // 803198E4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803198E8:
    // 803198E8: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_803198EC:
    // 803198EC: addi    r4, r30, 292
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(292);

label_803198F0:
    // 803198F0: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_803198F4:
    // 803198F4: bl      0x8031972C
    {
            ctx->lr = 0x803198F8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031972Cu;
                return;
            }
            goto label_8031972C;
    }

label_803198F8:
    ctx->downcount -= 3;
    // 803198F8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_803198FC:
    // 803198FC: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80319900:
    // 80319900: bl      0x802A5D48
    {
            ctx->lr = 0x80319904u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_80319904:
    ctx->downcount -= 5;
    // 80319904: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319908:
    // 80319908: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8031990C:
    // 8031990C: addi    r4, r30, 304
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(304);

label_80319910:
    // 80319910: addi    r5, r31, 22144
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22144);

label_80319914:
    // 80319914: bl      0x8031972C
    {
            ctx->lr = 0x80319918u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031972Cu;
                return;
            }
            goto label_8031972C;
    }

label_80319918:
    ctx->downcount -= 17;
    // 80319918: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8031991C:
    ctx->pc = 0x8031991Cu;
    // 8031991C: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319920:
    ctx->pc = 0x80319920u;
    // 80319920: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319924:
    ctx->pc = 0x80319924u;
    // 80319924: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319928:
    // 80319928: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031992C:
    ctx->pc = 0x8031992Cu;
    // 8031992C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319930:
    ctx->pc = 0x80319930u;
    ctx->downcount -= 18;
    // 80319930: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319934:
    ctx->pc = 0x80319934u;
    // 80319934: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319938:
    // 80319938: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031993C:
    ctx->pc = 0x8031993Cu;
    // 8031993C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319940:
    ctx->pc = 0x80319940u;
    // 80319940: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319944:
    // 80319944: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319948:
    // 80319948: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031994C:
    // 8031994C: bc    12, 2, 0x80319980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319980;
        }
    }

label_80319950:
    ctx->downcount -= 1;
    // 80319950: bc    12, 2, 0x80319970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319970;
        }
    }

label_80319954:
    ctx->downcount -= 1;
    // 80319954: bc    12, 2, 0x80319970
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319970;
        }
    }

label_80319958:
    ctx->downcount -= 3;
    // 80319958: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8031995C:
    // 8031995C: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80319960:
    // 80319960: bl      0x803196EC
    {
            ctx->lr = 0x80319964u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x803196ECu;
                return;
            }
            goto label_803196EC;
    }

label_80319964:
    ctx->downcount -= 3;
    // 80319964: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319968:
    // 80319968: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031996C:
    // 8031996C: bl      0x801ED118
    {
            ctx->lr = 0x80319970u;
            ctx->pc = 0x801ED118u;
            return;
    }

label_80319970:
    ctx->downcount -= 2;
    // 80319970: cmpwi   r31, 0
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

label_80319974:
    // 80319974: bc    4, 1, 0x80319980
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319980;
        }
    }

label_80319978:
    ctx->downcount -= 2;
    // 80319978: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031997C:
    // 8031997C: bl      0x801C1C90
    {
            ctx->lr = 0x80319980u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80319980:
    ctx->downcount -= 17;
    // 80319980: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80319984:
    ctx->pc = 0x80319984u;
    // 80319984: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319988:
    ctx->pc = 0x80319988u;
    // 80319988: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031998C:
    ctx->pc = 0x8031998Cu;
    // 8031998C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319990:
    // 80319990: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319994:
    ctx->pc = 0x80319994u;
    // 80319994: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319998:
    ctx->pc = 0x80319998u;
    ctx->downcount -= 17;
    // 80319998: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031999C:
    ctx->pc = 0x8031999Cu;
    // 8031999C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_803199A0:
    ctx->pc = 0x803199A0u;
    // 803199A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_803199A4:
    ctx->pc = 0x803199A4u;
    // 803199A4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_803199A8:
    // 803199A8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_803199AC:
    // 803199AC: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_803199B0:
    // 803199B0: bl      0x803457F4
    {
            ctx->lr = 0x803199B4u;
            ctx->pc = 0x803457F4u;
            return;
    }

label_803199B4:
    ctx->pc = 0x803199B4u;
    ctx->downcount -= 11;
    // 803199B4: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803199B8:
    // 803199B8: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_803199BC:
    // 803199BC: addi    r3, r3, -22144
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-22144);

label_803199C0:
    ctx->pc = 0x803199C0u;
    // 803199C0: stw     r3, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803199C4:
    // 803199C4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803199C8:
    ctx->pc = 0x803199C8u;
    // 803199C8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803199CC:
    ctx->pc = 0x803199CCu;
    // 803199CC: stw     r30, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_803199D0:
    // 803199D0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803199D4:
    // 803199D4: bl      0x801C1C80
    {
            ctx->lr = 0x803199D8u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803199D8:
    ctx->pc = 0x803199D8u;
    ctx->downcount -= 8;
    // 803199D8: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803199DC:
    // 803199DC: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803199E0:
    ctx->pc = 0x803199E0u;
    // 803199E0: stw     r3, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803199E4:
    // 803199E4: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_803199E8:
    ctx->pc = 0x803199E8u;
    // 803199E8: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_803199EC:
    // 803199EC: bl      0x801C1C80
    {
            ctx->lr = 0x803199F0u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_803199F0:
    ctx->pc = 0x803199F0u;
    ctx->downcount -= 8;
    // 803199F0: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_803199F4:
    // 803199F4: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_803199F8:
    ctx->pc = 0x803199F8u;
    // 803199F8: stw     r3, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_803199FC:
    // 803199FC: mulli   r3, r0, 12
    ctx->gpr[3] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319A00:
    ctx->pc = 0x80319A00u;
    // 80319A00: lwz     r4, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A04:
    // 80319A04: bl      0x801C1C80
    {
            ctx->lr = 0x80319A08u;
            ctx->pc = 0x801C1C80u;
            return;
    }

label_80319A08:
    ctx->downcount -= 6;
    // 80319A08: lis     r6, -32667
    ctx->gpr[6] = ((u32)(s32)(-32667) << 16);

label_80319A0C:
    ctx->pc = 0x80319A0Cu;
    // 80319A0C: stw     r3, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319A10:
    // 80319A10: addi    r6, r6, 22144
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22144);

label_80319A14:
    // 80319A14: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80319A18:
    // 80319A18: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80319A1C:
    // 80319A1C: b       0x80319A88
    {
            goto label_80319A88;
    }

label_80319A20:
    loop_80319A20(ctx);
    if (ctx->pc == 0x80319A94u) goto label_80319A94;
    return;
label_80319A24:
    // 80319A24: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80319A28:
    ctx->pc = 0x80319A28u;
    // 80319A28: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A2C:
    // 80319A2C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319A30:
    ctx->pc = 0x80319A30u;
    // 80319A30: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A34:
    ctx->pc = 0x80319A34u;
    // 80319A34: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319A38:
    ctx->pc = 0x80319A38u;
    // 80319A38: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A3C:
    ctx->pc = 0x80319A3Cu;
    // 80319A3C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A40:
    ctx->pc = 0x80319A40u;
    // 80319A40: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A44:
    ctx->pc = 0x80319A44u;
    // 80319A44: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A48:
    ctx->pc = 0x80319A48u;
    // 80319A48: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A4C:
    // 80319A4C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319A50:
    ctx->pc = 0x80319A50u;
    // 80319A50: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A54:
    ctx->pc = 0x80319A54u;
    // 80319A54: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319A58:
    ctx->pc = 0x80319A58u;
    // 80319A58: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A5C:
    ctx->pc = 0x80319A5Cu;
    // 80319A5C: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A60:
    ctx->pc = 0x80319A60u;
    // 80319A60: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A64:
    ctx->pc = 0x80319A64u;
    // 80319A64: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A68:
    ctx->pc = 0x80319A68u;
    // 80319A68: lwz     r0, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A6C:
    // 80319A6C: add   r5, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319A70:
    ctx->pc = 0x80319A70u;
    // 80319A70: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319A74:
    ctx->pc = 0x80319A74u;
    // 80319A74: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319A78:
    // 80319A78: addi    r3, r3, 12
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(12);

label_80319A7C:
    ctx->pc = 0x80319A7Cu;
    // 80319A7C: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A80:
    ctx->pc = 0x80319A80u;
    // 80319A80: lwz     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A84:
    ctx->pc = 0x80319A84u;
    // 80319A84: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319A88:
    ctx->pc = 0x80319A88u;
    ctx->downcount -= 3;
    // 80319A88: lwz     r0, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319A8C:
    // 80319A8C: cmpw    r7, r0
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

label_80319A90:
    // 80319A90: bc    12, 0, 0x80319A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319A20u;
                return;
            }
            goto label_80319A20;
        }
    }

label_80319A94:
    ctx->downcount -= 3;
    // 80319A94: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319A98:
    // 80319A98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80319A9C:
    // 80319A9C: bl      0x803457CC
    {
            ctx->lr = 0x80319AA0u;
            ctx->pc = 0x803457CCu;
            return;
    }

label_80319AA0:
    ctx->downcount -= 17;
    // 80319AA0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319AA4:
    ctx->pc = 0x80319AA4u;
    // 80319AA4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319AA8:
    ctx->pc = 0x80319AA8u;
    // 80319AA8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319AAC:
    ctx->pc = 0x80319AACu;
    // 80319AAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319AB0:
    // 80319AB0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319AB4:
    ctx->pc = 0x80319AB4u;
    // 80319AB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319AB8:
    ctx->pc = 0x80319AB8u;
    ctx->downcount -= 19;
    // 80319AB8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319ABC:
    ctx->pc = 0x80319ABCu;
    // 80319ABC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319AC0:
    ctx->pc = 0x80319AC0u;
    // 80319AC0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319AC4:
    ctx->pc = 0x80319AC4u;
    // 80319AC4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319AC8:
    // 80319AC8: or   r31, r7, r7
    {
        ctx->gpr[31] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80319ACC:
    // 80319ACC: or   r30, r6, r6
    {
        ctx->gpr[30] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80319AD0:
    // 80319AD0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319AD4:
    // 80319AD4: or   r6, r31, r31
    {
        ctx->gpr[6] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319AD8:
    // 80319AD8: bl      0x8031972C
    {
            ctx->lr = 0x80319ADCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031972Cu;
                return;
            }
            goto label_8031972C;
    }

label_80319ADC:
    ctx->downcount -= 27;
    // 80319ADC: mulli   r0, r31, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[31] * (s64)(s32)12);

label_80319AE0:
    ctx->pc = 0x80319AE0u;
    // 80319AE0: lwz     r5, 44(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(44);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80319AE4:
    ctx->pc = 0x80319AE4u;
    // 80319AE4: lwz     r4, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319AE8:
    ctx->pc = 0x80319AE8u;
    // 80319AE8: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319AEC:
    // 80319AEC: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319AF0:
    ctx->pc = 0x80319AF0u;
    // 80319AF0: lwz     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319AF4:
    ctx->pc = 0x80319AF4u;
    // 80319AF4: stw     r4, 0(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80319AF8:
    ctx->pc = 0x80319AF8u;
    // 80319AF8: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319AFC:
    ctx->pc = 0x80319AFCu;
    // 80319AFC: stw     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319B00:
    ctx->pc = 0x80319B00u;
    // 80319B00: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319B04:
    ctx->pc = 0x80319B04u;
    // 80319B04: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319B08:
    ctx->pc = 0x80319B08u;
    // 80319B08: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319B0C:
    // 80319B0C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80319B10:
    ctx->pc = 0x80319B10u;
    // 80319B10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319B14:
    ctx->pc = 0x80319B14u;
    ctx->downcount -= 8;
    // 80319B14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319B18:
    ctx->pc = 0x80319B18u;
    // 80319B18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319B1C:
    ctx->pc = 0x80319B1Cu;
    // 80319B1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319B20:
    ctx->pc = 0x80319B20u;
    // 80319B20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80319B24:
    // 80319B24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319B28:
    ctx->pc = 0x80319B28u;
    // 80319B28: lbz     r0, 21(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(21);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80319B2C:
    // 80319B2C: cmpwi   r0, 0
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

label_80319B30:
    // 80319B30: bc    12, 2, 0x80319B54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319B54;
        }
    }

label_80319B34:
    ctx->pc = 0x80319B34u;
    ctx->downcount -= 3;
    // 80319B34: lbz     r0, 22(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(22);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80319B38:
    // 80319B38: cmpwi   r0, 0
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

label_80319B3C:
    // 80319B3C: bc    12, 2, 0x80319B44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319B44;
        }
    }

label_80319B40:
    ctx->downcount -= 1;
    // 80319B40: bl      0x80319C38
    {
            ctx->lr = 0x80319B44u;
            goto label_80319C38;
    }

label_80319B44:
    ctx->downcount -= 2;
    // 80319B44: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319B48:
    // 80319B48: bl      0x803456D4
    {
            ctx->lr = 0x80319B4Cu;
            ctx->pc = 0x803456D4u;
            return;
    }

label_80319B4C:
    ctx->downcount -= 2;
    // 80319B4C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319B50:
    // 80319B50: bl      0x80319B78
    {
            ctx->lr = 0x80319B54u;
            goto label_80319B78;
    }

label_80319B54:
    ctx->downcount -= 2;
    // 80319B54: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319B58:
    // 80319B58: bl      0x80319BD8
    {
            ctx->lr = 0x80319B5Cu;
            goto label_80319BD8;
    }

label_80319B5C:
    ctx->downcount -= 2;
    // 80319B5C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80319B60:
    // 80319B60: bl      0x803456F8
    {
            ctx->lr = 0x80319B64u;
            ctx->pc = 0x803456F8u;
            return;
    }

label_80319B64:
    ctx->pc = 0x80319B64u;
    ctx->downcount -= 6;
    // 80319B64: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319B68:
    ctx->pc = 0x80319B68u;
    // 80319B68: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80319B6C:
    ctx->pc = 0x80319B6Cu;
    // 80319B6C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319B70:
    // 80319B70: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319B74:
    ctx->pc = 0x80319B74u;
    // 80319B74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319B78:
    ctx->pc = 0x80319B78u;
    ctx->downcount -= 12;
    // 80319B78: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319B7C:
    ctx->pc = 0x80319B7Cu;
    // 80319B7C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319B80:
    ctx->pc = 0x80319B80u;
    // 80319B80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319B84:
    ctx->pc = 0x80319B84u;
    // 80319B84: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80319B88:
    // 80319B88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319B8C:
    ctx->pc = 0x80319B8Cu;
    // 80319B8C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319B90:
    ctx->pc = 0x80319B90u;
    // 80319B90: lwz     r3, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319B94:
    // 80319B94: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319B98:
    // 80319B98: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319B9C:
    // 80319B9C: bl      0x800076B4
    {
            ctx->lr = 0x80319BA0u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80319BA0:
    ctx->downcount -= 2;
    // 80319BA0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319BA4:
    // 80319BA4: bc    12, 2, 0x80319BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319BC4;
        }
    }

label_80319BA8:
    ctx->pc = 0x80319BA8u;
    ctx->downcount -= 8;
    // 80319BA8: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319BAC:
    ctx->pc = 0x80319BACu;
    // 80319BAC: lwz     r4, 36(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(36);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319BB0:
    // 80319BB0: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319BB4:
    ctx->pc = 0x80319BB4u;
    // 80319BB4: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319BB8:
    // 80319BB8: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80319BBC:
    // 80319BBC: bl      0x800076E4
    {
            ctx->lr = 0x80319BC0u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80319BC0:
    ctx->downcount -= 1;
    // 80319BC0: nop
    // nop

label_80319BC4:
    ctx->pc = 0x80319BC4u;
    ctx->downcount -= 6;
    // 80319BC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319BC8:
    ctx->pc = 0x80319BC8u;
    // 80319BC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80319BCC:
    ctx->pc = 0x80319BCCu;
    // 80319BCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319BD0:
    // 80319BD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319BD4:
    ctx->pc = 0x80319BD4u;
    // 80319BD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319BD8:
    ctx->pc = 0x80319BD8u;
    ctx->downcount -= 12;
    // 80319BD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319BDC:
    ctx->pc = 0x80319BDCu;
    // 80319BDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319BE0:
    ctx->pc = 0x80319BE0u;
    // 80319BE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319BE4:
    ctx->pc = 0x80319BE4u;
    // 80319BE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80319BE8:
    // 80319BE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319BEC:
    ctx->pc = 0x80319BECu;
    // 80319BEC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319BF0:
    ctx->pc = 0x80319BF0u;
    // 80319BF0: lwz     r3, 40(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(40);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319BF4:
    // 80319BF4: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319BF8:
    // 80319BF8: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319BFC:
    // 80319BFC: bl      0x800076B4
    {
            ctx->lr = 0x80319C00u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80319C00:
    ctx->downcount -= 2;
    // 80319C00: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319C04:
    // 80319C04: bc    12, 2, 0x80319C24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319C24;
        }
    }

label_80319C08:
    ctx->pc = 0x80319C08u;
    ctx->downcount -= 8;
    // 80319C08: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319C0C:
    ctx->pc = 0x80319C0Cu;
    // 80319C0C: lwz     r4, 40(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(40);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319C10:
    // 80319C10: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319C14:
    ctx->pc = 0x80319C14u;
    // 80319C14: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319C18:
    // 80319C18: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80319C1C:
    // 80319C1C: bl      0x800076E4
    {
            ctx->lr = 0x80319C20u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80319C20:
    ctx->downcount -= 1;
    // 80319C20: nop
    // nop

label_80319C24:
    ctx->pc = 0x80319C24u;
    ctx->downcount -= 6;
    // 80319C24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319C28:
    ctx->pc = 0x80319C28u;
    // 80319C28: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80319C2C:
    ctx->pc = 0x80319C2Cu;
    // 80319C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319C30:
    // 80319C30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319C34:
    ctx->pc = 0x80319C34u;
    // 80319C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319C38:
    ctx->pc = 0x80319C38u;
    ctx->downcount -= 12;
    // 80319C38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319C3C:
    ctx->pc = 0x80319C3Cu;
    // 80319C3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319C40:
    ctx->pc = 0x80319C40u;
    // 80319C40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319C44:
    ctx->pc = 0x80319C44u;
    // 80319C44: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80319C48:
    // 80319C48: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319C4C:
    ctx->pc = 0x80319C4Cu;
    // 80319C4C: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319C50:
    ctx->pc = 0x80319C50u;
    // 80319C50: lwz     r3, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319C54:
    // 80319C54: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319C58:
    // 80319C58: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319C5C:
    // 80319C5C: bl      0x800076B4
    {
            ctx->lr = 0x80319C60u;
            ctx->pc = 0x800076B4u;
            return;
    }

label_80319C60:
    ctx->downcount -= 2;
    // 80319C60: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319C64:
    // 80319C64: bc    12, 2, 0x80319C84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319C84;
        }
    }

label_80319C68:
    ctx->pc = 0x80319C68u;
    ctx->downcount -= 8;
    // 80319C68: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319C6C:
    ctx->pc = 0x80319C6Cu;
    // 80319C6C: lwz     r4, 44(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80319C70:
    // 80319C70: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80319C74:
    ctx->pc = 0x80319C74u;
    // 80319C74: lwz     r3, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319C78:
    // 80319C78: add   r12, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[12] = res;
    }

label_80319C7C:
    // 80319C7C: bl      0x800076E4
    {
            ctx->lr = 0x80319C80u;
            ctx->pc = 0x800076E4u;
            return;
    }

label_80319C80:
    ctx->downcount -= 1;
    // 80319C80: nop
    // nop

label_80319C84:
    ctx->pc = 0x80319C84u;
    ctx->downcount -= 6;
    // 80319C84: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319C88:
    ctx->pc = 0x80319C88u;
    // 80319C88: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80319C8C:
    ctx->pc = 0x80319C8Cu;
    // 80319C8C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319C90:
    // 80319C90: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80319C94:
    ctx->pc = 0x80319C94u;
    // 80319C94: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319C98:
    ctx->downcount -= 2;
    // 80319C98: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80319C9C:
    // 80319C9C: b       0x80319684
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319684u;
                return;
            }
            goto label_80319684;
    }

label_80319CA0:
    ctx->downcount -= 2;
    // 80319CA0: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80319CA4:
    // 80319CA4: b       0x80319620
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319620u;
                return;
            }
            goto label_80319620;
    }

label_80319CA8:
    ctx->downcount -= 2;
    // 80319CA8: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80319CAC:
    // 80319CAC: b       0x80319930
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319930u;
                return;
            }
            goto label_80319930;
    }

label_80319CB0:
    ctx->pc = 0x80319CB0u;
    ctx->downcount -= 16;
    // 80319CB0: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319CB4:
    ctx->pc = 0x80319CB4u;
    // 80319CB4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319CB8:
    ctx->pc = 0x80319CB8u;
    // 80319CB8: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319CBC:
    ctx->pc = 0x80319CBCu;
    // 80319CBC: stmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319CC0:
    ctx->pc = 0x80319CC0u;
    // 80319CC0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319CC4:
    ctx->pc = 0x80319CC4u;
    // 80319CC4: bl      0x8036E618
    {
            ctx->lr = 0x80319CC8u;
            ctx->pc = 0x8036E618u;
            return;
    }

label_80319CC8:
    ctx->pc = 0x80319CC8u;
    ctx->downcount -= 4;
    // 80319CC8: lis     r28, -32665
    ctx->gpr[28] = ((u32)(s32)(-32665) << 16);

label_80319CCC:
    ctx->pc = 0x80319CCCu;
    // 80319CCC: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319CD0:
    ctx->pc = 0x80319CD0u;
    // 80319CD0: addi    r4, r28, 22088
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(22088);

label_80319CD4:
    ctx->pc = 0x80319CD4u;
    // 80319CD4: bl      0x8026F970
    {
            ctx->lr = 0x80319CD8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319CD8:
    ctx->pc = 0x80319CD8u;
    ctx->downcount -= 4;
    // 80319CD8: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319CDC:
    ctx->pc = 0x80319CDCu;
    // 80319CDC: addi    r28, r28, 22088
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(22088);

label_80319CE0:
    ctx->pc = 0x80319CE0u;
    // 80319CE0: li      r25, 0
    ctx->gpr[25] = (u32)(s32)(0);

label_80319CE4:
    ctx->pc = 0x80319CE4u;
    // 80319CE4: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319CE8:
    ctx->downcount -= 4;
    // 80319CE8: add   r26, r31, r29
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80319CEC:
    // 80319CEC: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80319CF0:
    // 80319CF0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80319CF4:
    // 80319CF4: b       0x80319E00
    {
            goto label_80319E00;
    }

label_80319CF8:
    ctx->downcount -= 2;
    // 80319CF8: cmpwi   r25, 2
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

label_80319CFC:
    // 80319CFC: bc    12, 0, 0x80319D60
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319D60;
        }
    }

label_80319D00:
    ctx->downcount -= 7;
    // 80319D00: or   r7, r24, r24
    {
        ctx->gpr[7] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80319D04:
    // 80319D04: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319D08:
    // 80319D08: addi    r5, r28, 17
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(17);

label_80319D0C:
    // 80319D0C: addi    r6, r25, 1
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(1);

label_80319D10:
    // 80319D10: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80319D14:
    // 80319D14: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80319D18:
    // 80319D18: bl      0x8000D074
    {
            ctx->lr = 0x80319D1Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80319D1C:
    ctx->downcount -= 4;
    // 80319D1C: add   r27, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80319D20:
    // 80319D20: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319D24:
    // 80319D24: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80319D28:
    // 80319D28: bl      0x8026F970
    {
            ctx->lr = 0x80319D2Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319D2C:
    ctx->pc = 0x80319D2Cu;
    ctx->downcount -= 8;
    // 80319D2C: stw     r3, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319D30:
    // 80319D30: or   r7, r24, r24
    {
        ctx->gpr[7] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80319D34:
    // 80319D34: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319D38:
    // 80319D38: addi    r5, r28, 31
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(31);

label_80319D3C:
    // 80319D3C: addi    r6, r25, 1
    ctx->gpr[6] = ctx->gpr[25] + (u32)(s32)(1);

label_80319D40:
    // 80319D40: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80319D44:
    // 80319D44: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80319D48:
    // 80319D48: bl      0x8000D074
    {
            ctx->lr = 0x80319D4Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80319D4C:
    ctx->downcount -= 3;
    // 80319D4C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319D50:
    // 80319D50: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80319D54:
    // 80319D54: bl      0x8026F970
    {
            ctx->lr = 0x80319D58u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319D58:
    ctx->pc = 0x80319D58u;
    ctx->downcount -= 2;
    // 80319D58: stw     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319D5C:
    // 80319D5C: b       0x80319DF8
    {
            goto label_80319DF8;
    }

label_80319D60:
    ctx->downcount -= 2;
    // 80319D60: cmpwi   r25, 1
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(1);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319D64:
    // 80319D64: bc    4, 2, 0x80319DCC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319DCC;
        }
    }

label_80319D68:
    ctx->downcount -= 2;
    // 80319D68: cmpwi   r24, 0
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

label_80319D6C:
    // 80319D6C: bc    4, 2, 0x80319D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319D88;
        }
    }

label_80319D70:
    ctx->downcount -= 4;
    // 80319D70: add   r27, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80319D74:
    // 80319D74: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319D78:
    // 80319D78: addi    r4, r28, 47
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(47);

label_80319D7C:
    // 80319D7C: bl      0x8026F970
    {
            ctx->lr = 0x80319D80u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319D80:
    ctx->pc = 0x80319D80u;
    ctx->downcount -= 2;
    // 80319D80: stw     r3, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319D84:
    // 80319D84: b       0x80319D9C
    {
            goto label_80319D9C;
    }

label_80319D88:
    ctx->downcount -= 4;
    // 80319D88: add   r27, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80319D8C:
    // 80319D8C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319D90:
    // 80319D90: addi    r4, r28, 58
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(58);

label_80319D94:
    // 80319D94: bl      0x8026F970
    {
            ctx->lr = 0x80319D98u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319D98:
    ctx->pc = 0x80319D98u;
    ctx->downcount -= 1;
    // 80319D98: stw     r3, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319D9C:
    ctx->downcount -= 2;
    // 80319D9C: cmpwi   r24, 0
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

label_80319DA0:
    // 80319DA0: bc    4, 2, 0x80319DB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319DB8;
        }
    }

label_80319DA4:
    ctx->downcount -= 3;
    // 80319DA4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319DA8:
    // 80319DA8: addi    r4, r28, 69
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(69);

label_80319DAC:
    // 80319DAC: bl      0x8026F970
    {
            ctx->lr = 0x80319DB0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319DB0:
    ctx->pc = 0x80319DB0u;
    ctx->downcount -= 2;
    // 80319DB0: stw     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319DB4:
    // 80319DB4: b       0x80319DF8
    {
            goto label_80319DF8;
    }

label_80319DB8:
    ctx->downcount -= 3;
    // 80319DB8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319DBC:
    // 80319DBC: addi    r4, r28, 82
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(82);

label_80319DC0:
    // 80319DC0: bl      0x8026F970
    {
            ctx->lr = 0x80319DC4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319DC4:
    ctx->pc = 0x80319DC4u;
    ctx->downcount -= 2;
    // 80319DC4: stw     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319DC8:
    // 80319DC8: b       0x80319DF8
    {
            goto label_80319DF8;
    }

label_80319DCC:
    ctx->downcount -= 2;
    // 80319DCC: cmpwi   r25, 0
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319DD0:
    // 80319DD0: bc    4, 2, 0x80319DF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80319DF8;
        }
    }

label_80319DD4:
    ctx->downcount -= 4;
    // 80319DD4: add   r27, r26, r30
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80319DD8:
    // 80319DD8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319DDC:
    // 80319DDC: addi    r4, r28, 95
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(95);

label_80319DE0:
    // 80319DE0: bl      0x8026F970
    {
            ctx->lr = 0x80319DE4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319DE4:
    ctx->pc = 0x80319DE4u;
    ctx->downcount -= 4;
    // 80319DE4: stw     r3, 288(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319DE8:
    // 80319DE8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319DEC:
    // 80319DEC: addi    r4, r28, 106
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(106);

label_80319DF0:
    // 80319DF0: bl      0x8026F970
    {
            ctx->lr = 0x80319DF4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319DF4:
    ctx->pc = 0x80319DF4u;
    ctx->downcount -= 1;
    // 80319DF4: stw     r3, 388(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319DF8:
    ctx->downcount -= 2;
    // 80319DF8: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80319DFC:
    // 80319DFC: addi    r30, r30, 4
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(4);

label_80319E00:
    ctx->downcount -= 2;
    // 80319E00: cmpw    r24, r25
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[25]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319E04:
    // 80319E04: bc    4, 1, 0x80319CF8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319CF8u;
                return;
            }
            goto label_80319CF8;
        }
    }

label_80319E08:
    ctx->downcount -= 4;
    // 80319E08: addi    r25, r25, 1
    ctx->gpr[25] = ctx->gpr[25] + (u32)(s32)(1);

label_80319E0C:
    // 80319E0C: addi    r29, r29, 20
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(20);

label_80319E10:
    // 80319E10: cmpwi   r25, 5
    {
        s32 val_a = (s32)(ctx->gpr[25]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319E14:
    // 80319E14: bc    12, 0, 0x80319CE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319CE8u;
                return;
            }
            goto label_80319CE8;
        }
    }

label_80319E18:
    ctx->pc = 0x80319E18u;
    ctx->downcount -= 5;
    // 80319E18: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_80319E1C:
    ctx->pc = 0x80319E1Cu;
    // 80319E1C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319E20:
    ctx->pc = 0x80319E20u;
    // 80319E20: addi    r28, r4, 22088
    ctx->gpr[28] = ctx->gpr[4] + (u32)(s32)(22088);

label_80319E24:
    ctx->pc = 0x80319E24u;
    // 80319E24: addi    r4, r28, 119
    ctx->gpr[4] = ctx->gpr[28] + (u32)(s32)(119);

label_80319E28:
    ctx->pc = 0x80319E28u;
    // 80319E28: bl      0x8026F970
    {
            ctx->lr = 0x80319E2Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319E2C:
    ctx->pc = 0x80319E2Cu;
    ctx->downcount -= 3;
    // 80319E2C: stw     r3, 488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319E30:
    ctx->pc = 0x80319E30u;
    // 80319E30: li      r24, 0
    ctx->gpr[24] = (u32)(s32)(0);

label_80319E34:
    ctx->pc = 0x80319E34u;
    // 80319E34: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80319E38:
    ctx->downcount -= 5;
    // 80319E38: addi    r0, r24, 1
    ctx->gpr[0] = ctx->gpr[24] + (u32)(s32)(1);

label_80319E3C:
    // 80319E3C: add   r26, r31, r30
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[30];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_80319E40:
    // 80319E40: subfic  r27, r0, 4
    {
        u64 res = (u64)(u32)(s32)(4) + (u64)(~ctx->gpr[0]) + 1u;
        ctx->gpr[27] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80319E44:
    // 80319E44: li      r23, 0
    ctx->gpr[23] = (u32)(s32)(0);

label_80319E48:
    // 80319E48: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80319E4C:
    ctx->downcount -= 2;
    // 80319E4C: cmpw    r24, r23
    {
        s32 val_a = (s32)(ctx->gpr[24]);
        s32 val_b = (s32)(ctx->gpr[23]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319E50:
    // 80319E50: bc    12, 0, 0x80319EAC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80319EAC;
        }
    }

label_80319E54:
    ctx->downcount -= 7;
    // 80319E54: add   r22, r27, r23
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[23];
        u32 res = a + b;
        ctx->gpr[22] = res;
    }

label_80319E58:
    // 80319E58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319E5C:
    // 80319E5C: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80319E60:
    // 80319E60: addi    r5, r28, 133
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(133);

label_80319E64:
    // 80319E64: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80319E68:
    // 80319E68: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80319E6C:
    // 80319E6C: bl      0x8000D074
    {
            ctx->lr = 0x80319E70u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80319E70:
    ctx->downcount -= 4;
    // 80319E70: add   r25, r26, r29
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[29];
        u32 res = a + b;
        ctx->gpr[25] = res;
    }

label_80319E74:
    // 80319E74: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319E78:
    // 80319E78: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80319E7C:
    // 80319E7C: bl      0x8026F970
    {
            ctx->lr = 0x80319E80u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319E80:
    ctx->pc = 0x80319E80u;
    ctx->downcount -= 7;
    // 80319E80: stw     r3, 492(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319E84:
    // 80319E84: or   r6, r22, r22
    {
        ctx->gpr[6] = ctx->gpr[22] | ctx->gpr[22];
    }

label_80319E88:
    // 80319E88: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319E8C:
    // 80319E8C: addi    r5, r28, 149
    ctx->gpr[5] = ctx->gpr[28] + (u32)(s32)(149);

label_80319E90:
    // 80319E90: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_80319E94:
    // 80319E94: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80319E98:
    // 80319E98: bl      0x8000D074
    {
            ctx->lr = 0x80319E9Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80319E9C:
    ctx->downcount -= 3;
    // 80319E9C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80319EA0:
    // 80319EA0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80319EA4:
    // 80319EA4: bl      0x8026F970
    {
            ctx->lr = 0x80319EA8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80319EA8:
    ctx->pc = 0x80319EA8u;
    ctx->downcount -= 1;
    // 80319EA8: stw     r3, 556(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319EAC:
    ctx->downcount -= 4;
    // 80319EAC: addi    r23, r23, 1
    ctx->gpr[23] = ctx->gpr[23] + (u32)(s32)(1);

label_80319EB0:
    // 80319EB0: addi    r29, r29, 4
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(4);

label_80319EB4:
    // 80319EB4: cmpwi   r23, 4
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80319EB8:
    // 80319EB8: bc    12, 0, 0x80319E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319E4Cu;
                return;
            }
            goto label_80319E4C;
        }
    }

label_80319EBC:
    ctx->downcount -= 4;
    // 80319EBC: addi    r24, r24, 1
    ctx->gpr[24] = ctx->gpr[24] + (u32)(s32)(1);

label_80319EC0:
    // 80319EC0: addi    r30, r30, 16
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(16);

label_80319EC4:
    // 80319EC4: cmpwi   r24, 4
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

label_80319EC8:
    // 80319EC8: bc    12, 0, 0x80319E38
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80319E38u;
                return;
            }
            goto label_80319E38;
        }
    }

label_80319ECC:
    ctx->pc = 0x80319ECCu;
    ctx->downcount -= 16;
    // 80319ECC: lmw     r22, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        for (u32 r = 22; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319ED0:
    ctx->pc = 0x80319ED0u;
    // 80319ED0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319ED4:
    ctx->pc = 0x80319ED4u;
    // 80319ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319ED8:
    ctx->pc = 0x80319ED8u;
    // 80319ED8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_80319EDC:
    ctx->pc = 0x80319EDCu;
    // 80319EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319EE0:
    ctx->pc = 0x80319EE0u;
    ctx->downcount -= 7;
    // 80319EE0: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80319EE4:
    ctx->pc = 0x80319EE4u;
    // 80319EE4: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80319EE8:
    ctx->pc = 0x80319EE8u;
    // 80319EE8: rlwinm r4, r4, 4, 0, 27
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 4u) & 0xFFFFFFF0u;
    }

label_80319EEC:
    ctx->pc = 0x80319EECu;
    // 80319EEC: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319EF0:
    ctx->pc = 0x80319EF0u;
    // 80319EF0: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319EF4:
    ctx->pc = 0x80319EF4u;
    // 80319EF4: lwz     r3, 556(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(556);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319EF8:
    ctx->pc = 0x80319EF8u;
    // 80319EF8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319EFC:
    ctx->pc = 0x80319EFCu;
    ctx->downcount -= 9;
    // 80319EFC: addi    r4, r4, -1
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-1);

label_80319F00:
    ctx->pc = 0x80319F00u;
    // 80319F00: rlwinm r0, r5, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[5], 2u) & 0xFFFFFFFCu;
    }

label_80319F04:
    ctx->pc = 0x80319F04u;
    // 80319F04: mulli   r4, r4, 20
    ctx->gpr[4] = (u32)((s64)(s32)ctx->gpr[4] * (s64)(s32)20);

label_80319F08:
    ctx->pc = 0x80319F08u;
    // 80319F08: add   r3, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319F0C:
    ctx->pc = 0x80319F0Cu;
    // 80319F0C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80319F10:
    ctx->pc = 0x80319F10u;
    // 80319F10: lwz     r3, 388(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(388);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319F14:
    ctx->pc = 0x80319F14u;
    // 80319F14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319F18:
    ctx->pc = 0x80319F18u;
    ctx->downcount -= 20;
    // 80319F18: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319F1C:
    ctx->pc = 0x80319F1Cu;
    // 80319F1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319F20:
    ctx->pc = 0x80319F20u;
    // 80319F20: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319F24:
    ctx->pc = 0x80319F24u;
    // 80319F24: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319F28:
    ctx->pc = 0x80319F28u;
    // 80319F28: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319F2C:
    ctx->pc = 0x80319F2Cu;
    // 80319F2C: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80319F30:
    ctx->pc = 0x80319F30u;
    // 80319F30: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80319F34:
    ctx->pc = 0x80319F34u;
    // 80319F34: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_80319F38:
    ctx->pc = 0x80319F38u;
    // 80319F38: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_80319F3C:
    ctx->pc = 0x80319F3Cu;
    // 80319F3C: bl      0x8026F6CC
    {
            ctx->lr = 0x80319F40u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80319F40:
    ctx->pc = 0x80319F40u;
    ctx->downcount -= 9;
    // 80319F40: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_80319F44:
    ctx->pc = 0x80319F44u;
    // 80319F44: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319F48:
    ctx->pc = 0x80319F48u;
    // 80319F48: rlwinm r3, r0, 4, 0, 27
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[0], 4u) & 0xFFFFFFF0u;
    }

label_80319F4C:
    ctx->pc = 0x80319F4Cu;
    // 80319F4C: add   r5, r29, r3
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319F50:
    ctx->pc = 0x80319F50u;
    // 80319F50: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_80319F54:
    ctx->pc = 0x80319F54u;
    // 80319F54: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80319F58:
    ctx->pc = 0x80319F58u;
    // 80319F58: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319F5C:
    ctx->pc = 0x80319F5Cu;
    // 80319F5C: lwz     r5, 492(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(492);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80319F60:
    ctx->pc = 0x80319F60u;
    // 80319F60: bl      0x8025D624
    {
            ctx->lr = 0x80319F64u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80319F64:
    ctx->pc = 0x80319F64u;
    ctx->downcount -= 22;
    // 80319F64: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319F68:
    ctx->pc = 0x80319F68u;
    // 80319F68: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319F6C:
    ctx->pc = 0x80319F6Cu;
    // 80319F6C: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319F70:
    ctx->pc = 0x80319F70u;
    // 80319F70: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319F74:
    ctx->pc = 0x80319F74u;
    // 80319F74: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319F78:
    ctx->pc = 0x80319F78u;
    // 80319F78: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319F7C:
    ctx->pc = 0x80319F7Cu;
    // 80319F7C: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319F80:
    ctx->pc = 0x80319F80u;
    // 80319F80: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319F84:
    ctx->pc = 0x80319F84u;
    // 80319F84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319F88:
    ctx->pc = 0x80319F88u;
    // 80319F88: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80319F8C:
    ctx->pc = 0x80319F8Cu;
    // 80319F8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319F90:
    ctx->pc = 0x80319F90u;
    ctx->downcount -= 18;
    // 80319F90: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319F94:
    ctx->pc = 0x80319F94u;
    // 80319F94: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319F98:
    ctx->pc = 0x80319F98u;
    // 80319F98: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319F9C:
    ctx->pc = 0x80319F9Cu;
    // 80319F9C: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319FA0:
    ctx->pc = 0x80319FA0u;
    // 80319FA0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319FA4:
    ctx->pc = 0x80319FA4u;
    // 80319FA4: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80319FA8:
    ctx->pc = 0x80319FA8u;
    // 80319FA8: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_80319FAC:
    ctx->pc = 0x80319FACu;
    // 80319FAC: bl      0x8026F6CC
    {
            ctx->lr = 0x80319FB0u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80319FB0:
    ctx->pc = 0x80319FB0u;
    ctx->downcount -= 4;
    // 80319FB0: lwz     r5, 488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(488);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80319FB4:
    ctx->pc = 0x80319FB4u;
    // 80319FB4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80319FB8:
    ctx->pc = 0x80319FB8u;
    // 80319FB8: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80319FBC:
    ctx->pc = 0x80319FBCu;
    // 80319FBC: bl      0x8025D624
    {
            ctx->lr = 0x80319FC0u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_80319FC0:
    ctx->pc = 0x80319FC0u;
    ctx->downcount -= 22;
    // 80319FC0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80319FC4:
    ctx->pc = 0x80319FC4u;
    // 80319FC4: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319FC8:
    ctx->pc = 0x80319FC8u;
    // 80319FC8: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319FCC:
    ctx->pc = 0x80319FCCu;
    // 80319FCC: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80319FD0:
    ctx->pc = 0x80319FD0u;
    // 80319FD0: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319FD4:
    ctx->pc = 0x80319FD4u;
    // 80319FD4: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319FD8:
    ctx->pc = 0x80319FD8u;
    // 80319FD8: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80319FDC:
    ctx->pc = 0x80319FDCu;
    // 80319FDC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80319FE0:
    ctx->pc = 0x80319FE0u;
    // 80319FE0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80319FE4:
    ctx->pc = 0x80319FE4u;
    // 80319FE4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80319FE8:
    ctx->pc = 0x80319FE8u;
    // 80319FE8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_80319FEC:
    ctx->pc = 0x80319FECu;
    ctx->downcount -= 20;
    // 80319FEC: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80319FF0:
    ctx->pc = 0x80319FF0u;
    // 80319FF0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80319FF4:
    ctx->pc = 0x80319FF4u;
    // 80319FF4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80319FF8:
    ctx->pc = 0x80319FF8u;
    // 80319FF8: stmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80319FFC:
    ctx->pc = 0x80319FFCu;
    // 80319FFC: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A000:
    ctx->pc = 0x8031A000u;
    // 8031A000: or   r29, r4, r4
    {
        ctx->gpr[29] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A004:
    ctx->pc = 0x8031A004u;
    // 8031A004: or   r30, r5, r5
    {
        ctx->gpr[30] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031A008:
    ctx->pc = 0x8031A008u;
    // 8031A008: or   r31, r6, r6
    {
        ctx->gpr[31] = ctx->gpr[6] | ctx->gpr[6];
    }

label_8031A00C:
    ctx->pc = 0x8031A00Cu;
    // 8031A00C: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8031A010:
    ctx->pc = 0x8031A010u;
    // 8031A010: bl      0x8026F6CC
    {
            ctx->lr = 0x8031A014u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8031A014:
    ctx->pc = 0x8031A014u;
    ctx->downcount -= 11;
    // 8031A014: addi    r0, r30, -1
    ctx->gpr[0] = ctx->gpr[30] + (u32)(s32)(-1);

label_8031A018:
    ctx->pc = 0x8031A018u;
    // 8031A018: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A01C:
    ctx->pc = 0x8031A01Cu;
    // 8031A01C: mulli   r5, r0, 20
    ctx->gpr[5] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)20);

label_8031A020:
    ctx->pc = 0x8031A020u;
    // 8031A020: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A024:
    ctx->pc = 0x8031A024u;
    // 8031A024: rlwinm r0, r31, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[31], 2u) & 0xFFFFFFFCu;
    }

label_8031A028:
    ctx->pc = 0x8031A028u;
    // 8031A028: add   r5, r29, r5
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8031A02C:
    ctx->pc = 0x8031A02Cu;
    // 8031A02C: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8031A030:
    ctx->pc = 0x8031A030u;
    // 8031A030: lwz     r5, 288(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8031A034:
    ctx->pc = 0x8031A034u;
    // 8031A034: bl      0x8025D624
    {
            ctx->lr = 0x8031A038u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_8031A038:
    ctx->pc = 0x8031A038u;
    ctx->downcount -= 22;
    // 8031A038: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A03C:
    ctx->pc = 0x8031A03Cu;
    // 8031A03C: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A040:
    ctx->pc = 0x8031A040u;
    // 8031A040: stw     r0, 4(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A044:
    ctx->pc = 0x8031A044u;
    // 8031A044: stw     r3, 0(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031A048:
    ctx->pc = 0x8031A048u;
    // 8031A048: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A04C:
    ctx->pc = 0x8031A04Cu;
    // 8031A04C: stw     r0, 8(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A050:
    ctx->pc = 0x8031A050u;
    // 8031A050: lmw     r28, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A054:
    ctx->pc = 0x8031A054u;
    // 8031A054: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A058:
    ctx->pc = 0x8031A058u;
    // 8031A058: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A05C:
    ctx->pc = 0x8031A05Cu;
    // 8031A05C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8031A060:
    ctx->pc = 0x8031A060u;
    // 8031A060: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A064:
    ctx->pc = 0x8031A064u;
    ctx->downcount -= 18;
    // 8031A064: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A068:
    ctx->pc = 0x8031A068u;
    // 8031A068: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A06C:
    ctx->pc = 0x8031A06Cu;
    // 8031A06C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A070:
    ctx->pc = 0x8031A070u;
    // 8031A070: stmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A074:
    ctx->pc = 0x8031A074u;
    // 8031A074: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A078:
    ctx->pc = 0x8031A078u;
    // 8031A078: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A07C:
    ctx->pc = 0x8031A07Cu;
    // 8031A07C: addi    r3, r4, 148
    ctx->gpr[3] = ctx->gpr[4] + (u32)(s32)(148);

label_8031A080:
    ctx->pc = 0x8031A080u;
    // 8031A080: bl      0x8026F6CC
    {
            ctx->lr = 0x8031A084u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8031A084:
    ctx->pc = 0x8031A084u;
    ctx->downcount -= 4;
    // 8031A084: lwz     r5, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8031A088:
    ctx->pc = 0x8031A088u;
    // 8031A088: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A08C:
    ctx->pc = 0x8031A08Cu;
    // 8031A08C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A090:
    ctx->pc = 0x8031A090u;
    // 8031A090: bl      0x8025D624
    {
            ctx->lr = 0x8031A094u;
            ctx->pc = 0x8025D624u;
            return;
    }

label_8031A094:
    ctx->pc = 0x8031A094u;
    ctx->downcount -= 22;
    // 8031A094: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A098:
    ctx->pc = 0x8031A098u;
    // 8031A098: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A09C:
    ctx->pc = 0x8031A09Cu;
    // 8031A09C: stw     r0, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A0A0:
    ctx->pc = 0x8031A0A0u;
    // 8031A0A0: stw     r3, 0(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031A0A4:
    ctx->pc = 0x8031A0A4u;
    // 8031A0A4: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A0A8:
    ctx->pc = 0x8031A0A8u;
    // 8031A0A8: stw     r0, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A0AC:
    ctx->pc = 0x8031A0ACu;
    // 8031A0AC: lmw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A0B0:
    ctx->pc = 0x8031A0B0u;
    // 8031A0B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A0B4:
    ctx->pc = 0x8031A0B4u;
    // 8031A0B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A0B8:
    ctx->pc = 0x8031A0B8u;
    // 8031A0B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031A0BC:
    ctx->pc = 0x8031A0BCu;
    // 8031A0BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A0C0:
    ctx->pc = 0x8031A0C0u;
    ctx->downcount -= 23;
    // 8031A0C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A0C4:
    ctx->pc = 0x8031A0C4u;
    // 8031A0C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A0C8:
    ctx->pc = 0x8031A0C8u;
    // 8031A0C8: or   r8, r4, r4
    {
        ctx->gpr[8] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A0CC:
    ctx->pc = 0x8031A0CCu;
    // 8031A0CC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031A0D0:
    ctx->pc = 0x8031A0D0u;
    // 8031A0D0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A0D4:
    ctx->pc = 0x8031A0D4u;
    // 8031A0D4: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8031A0D8:
    ctx->pc = 0x8031A0D8u;
    // 8031A0D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A0DC:
    ctx->pc = 0x8031A0DCu;
    // 8031A0DC: lis     r30, -32665
    ctx->gpr[30] = ((u32)(s32)(-32665) << 16);

label_8031A0E0:
    ctx->pc = 0x8031A0E0u;
    // 8031A0E0: addi    r30, r30, 22088
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(22088);

label_8031A0E4:
    ctx->pc = 0x8031A0E4u;
    // 8031A0E4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A0E8:
    ctx->pc = 0x8031A0E8u;
    // 8031A0E8: addi    r4, r30, 165
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(165);

label_8031A0EC:
    ctx->pc = 0x8031A0ECu;
    // 8031A0EC: addi    r5, r30, 180
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(180);

label_8031A0F0:
    ctx->pc = 0x8031A0F0u;
    // 8031A0F0: bl      0x8036E758
    {
            ctx->lr = 0x8031A0F4u;
            ctx->pc = 0x8036E758u;
            return;
    }

label_8031A0F4:
    ctx->pc = 0x8031A0F4u;
    ctx->downcount -= 13;
    // 8031A0F4: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_8031A0F8:
    ctx->pc = 0x8031A0F8u;
    // 8031A0F8: addi    r4, r30, 212
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(212);

label_8031A0FC:
    ctx->pc = 0x8031A0FCu;
    // 8031A0FC: addi    r7, r7, -22088
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-22088);

label_8031A100:
    ctx->pc = 0x8031A100u;
    // 8031A100: stw     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8031A104:
    ctx->pc = 0x8031A104u;
    // 8031A104: addi    r5, r7, 8
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(8);

label_8031A108:
    ctx->pc = 0x8031A108u;
    // 8031A108: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_8031A10C:
    ctx->pc = 0x8031A10Cu;
    // 8031A10C: addi    r6, r7, 120
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(120);

label_8031A110:
    ctx->pc = 0x8031A110u;
    // 8031A110: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8031A114:
    ctx->pc = 0x8031A114u;
    // 8031A114: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A118:
    ctx->pc = 0x8031A118u;
    // 8031A118: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8031A11C:
    ctx->pc = 0x8031A11Cu;
    // 8031A11C: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031A120:
    ctx->pc = 0x8031A120u;
    // 8031A120: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A124:
    ctx->pc = 0x8031A124u;
    // 8031A124: bl      0x8000E7F4
    {
            ctx->lr = 0x8031A128u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8031A128:
    ctx->pc = 0x8031A128u;
    ctx->downcount -= 5;
    // 8031A128: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031A12C:
    ctx->pc = 0x8031A12Cu;
    // 8031A12C: stw     r5, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A130:
    ctx->pc = 0x8031A130u;
    // 8031A130: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031A134:
    ctx->pc = 0x8031A134u;
    // 8031A134: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8031A138:
    ctx->pc = 0x8031A138u;
    // 8031A138: li      r0, 5
    ctx->gpr[0] = (u32)(s32)(5);

label_8031A13C:
    ctx->downcount -= 4;
    // 8031A13C: add   r6, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8031A140:
    // 8031A140: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A144:
    ctx->pc = 0x8031A144u;
    // 8031A144: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8031A148:
    loop_8031A148(ctx);
    if (ctx->pc == 0x8031A15Cu) goto label_8031A15C;
    return;
label_8031A14C:
    // 8031A14C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8031A150:
    ctx->pc = 0x8031A150u;
    // 8031A150: stw     r5, 288(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A154:
    ctx->pc = 0x8031A154u;
    // 8031A154: stw     r5, 388(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(388);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A158:
    // 8031A158: bc    16, 0, 0x8031A148
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A148u;
                return;
            }
            goto label_8031A148;
        }
    }

label_8031A15C:
    ctx->downcount -= 4;
    // 8031A15C: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8031A160:
    // 8031A160: addi    r3, r3, 20
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(20);

label_8031A164:
    // 8031A164: cmpwi   r8, 5
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(5);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A168:
    // 8031A168: bc    12, 0, 0x8031A13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A13Cu;
                return;
            }
            goto label_8031A13C;
        }
    }

label_8031A16C:
    ctx->pc = 0x8031A16Cu;
    ctx->downcount -= 5;
    // 8031A16C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031A170:
    ctx->pc = 0x8031A170u;
    // 8031A170: stw     r5, 488(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(488);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A174:
    ctx->pc = 0x8031A174u;
    // 8031A174: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031A178:
    ctx->pc = 0x8031A178u;
    // 8031A178: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_8031A17C:
    ctx->pc = 0x8031A17Cu;
    // 8031A17C: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_8031A180:
    ctx->downcount -= 4;
    // 8031A180: add   r6, r31, r3
    {
        u32 a = ctx->gpr[31];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_8031A184:
    // 8031A184: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A188:
    ctx->pc = 0x8031A188u;
    // 8031A188: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8031A18C:
    loop_8031A18C(ctx);
    if (ctx->pc == 0x8031A1A0u) goto label_8031A1A0;
    return;
label_8031A190:
    // 8031A190: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8031A194:
    ctx->pc = 0x8031A194u;
    // 8031A194: stw     r5, 492(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(492);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A198:
    ctx->pc = 0x8031A198u;
    // 8031A198: stw     r5, 556(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(556);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A19C:
    // 8031A19C: bc    16, 0, 0x8031A18C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A18Cu;
                return;
            }
            goto label_8031A18C;
        }
    }

label_8031A1A0:
    ctx->downcount -= 4;
    // 8031A1A0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_8031A1A4:
    // 8031A1A4: addi    r3, r3, 16
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(16);

label_8031A1A8:
    // 8031A1A8: cmpwi   r8, 4
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(4);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A1AC:
    // 8031A1AC: bc    12, 0, 0x8031A180
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A180u;
                return;
            }
            goto label_8031A180;
        }
    }

label_8031A1B0:
    ctx->pc = 0x8031A1B0u;
    ctx->downcount -= 17;
    // 8031A1B0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A1B4:
    ctx->pc = 0x8031A1B4u;
    // 8031A1B4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A1B8:
    ctx->pc = 0x8031A1B8u;
    // 8031A1B8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A1BC:
    ctx->pc = 0x8031A1BCu;
    // 8031A1BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A1C0:
    ctx->pc = 0x8031A1C0u;
    // 8031A1C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A1C4:
    ctx->pc = 0x8031A1C4u;
    // 8031A1C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A1C8:
    ctx->pc = 0x8031A1C8u;
    ctx->downcount -= 18;
    // 8031A1C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A1CC:
    ctx->pc = 0x8031A1CCu;
    // 8031A1CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A1D0:
    // 8031A1D0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A1D4:
    ctx->pc = 0x8031A1D4u;
    // 8031A1D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A1D8:
    ctx->pc = 0x8031A1D8u;
    // 8031A1D8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A1DC:
    // 8031A1DC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A1E0:
    // 8031A1E0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A1E4:
    // 8031A1E4: bc    12, 2, 0x8031A204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A204;
        }
    }

label_8031A1E8:
    ctx->downcount -= 1;
    // 8031A1E8: bc    12, 2, 0x8031A1F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A1F4;
        }
    }

label_8031A1EC:
    ctx->downcount -= 2;
    // 8031A1EC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A1F0:
    // 8031A1F0: bl      0x801F9B68
    {
            ctx->lr = 0x8031A1F4u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8031A1F4:
    ctx->downcount -= 2;
    // 8031A1F4: cmpwi   r31, 0
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

label_8031A1F8:
    // 8031A1F8: bc    4, 1, 0x8031A204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031A204;
        }
    }

label_8031A1FC:
    ctx->downcount -= 2;
    // 8031A1FC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A200:
    // 8031A200: bl      0x801C1C90
    {
            ctx->lr = 0x8031A204u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031A204:
    ctx->downcount -= 17;
    // 8031A204: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A208:
    ctx->pc = 0x8031A208u;
    // 8031A208: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A20C:
    ctx->pc = 0x8031A20Cu;
    // 8031A20C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A210:
    ctx->pc = 0x8031A210u;
    // 8031A210: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A214:
    // 8031A214: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A218:
    ctx->pc = 0x8031A218u;
    // 8031A218: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A21C:
    ctx->downcount -= 2;
    // 8031A21C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031A220:
    // 8031A220: b       0x8031A1C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A1C8u;
                return;
            }
            goto label_8031A1C8;
    }

label_8031A224:
    ctx->downcount -= 2;
    // 8031A224: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031A228:
    // 8031A228: b       0x8031A1C8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A1C8u;
                return;
            }
            goto label_8031A1C8;
    }

label_8031A22C:
    ctx->pc = 0x8031A22Cu;
    ctx->downcount -= 8;
    // 8031A22C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A230:
    ctx->pc = 0x8031A230u;
    // 8031A230: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A234:
    // 8031A234: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031A238:
    ctx->pc = 0x8031A238u;
    // 8031A238: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A23C:
    ctx->pc = 0x8031A23Cu;
    // 8031A23C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A240:
    // 8031A240: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A244:
    // 8031A244: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A248:
    // 8031A248: bl      0x8026F5F4
    {
            ctx->lr = 0x8031A24Cu;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8031A24C:
    ctx->pc = 0x8031A24Cu;
    ctx->downcount -= 4;
    // 8031A24C: lbz     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031A250:
    // 8031A250: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A254:
    // 8031A254: cmpwi   r0, 0
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

label_8031A258:
    // 8031A258: bc    4, 2, 0x8031A26C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031A26C;
        }
    }

label_8031A25C:
    ctx->downcount -= 4;
    // 8031A25C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8031A260:
    // 8031A260: li      r3, 144
    ctx->gpr[3] = (u32)(s32)(144);

label_8031A264:
    // 8031A264: slw   r4, r0, r4
    {
        u32 sh = ctx->gpr[4] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8031A268:
    // 8031A268: bl      0x802B735C
    {
            ctx->lr = 0x8031A26Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8031A26C:
    ctx->pc = 0x8031A26Cu;
    ctx->downcount -= 6;
    // 8031A26C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A270:
    ctx->pc = 0x8031A270u;
    // 8031A270: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A274:
    ctx->pc = 0x8031A274u;
    // 8031A274: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A278:
    // 8031A278: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A27C:
    ctx->pc = 0x8031A27Cu;
    // 8031A27C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A280:
    ctx->pc = 0x8031A280u;
    ctx->downcount -= 4;
    // 8031A280: lfs     f2, -11752(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A280u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8031A284:
    // 8031A284: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_8031A288:
    // 8031A288: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A28C:
    // 8031A28C: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_8031A290:
    ctx->pc = 0x8031A290u;
    ctx->downcount -= 22;
    // 8031A290: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A294:
    ctx->pc = 0x8031A294u;
    // 8031A294: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A298:
    // 8031A298: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A29C:
    // 8031A29C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8031A2A0:
    ctx->pc = 0x8031A2A0u;
    // 8031A2A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A2A4:
    ctx->pc = 0x8031A2A4u;
    // 8031A2A4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A2A8:
    // 8031A2A8: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031A2AC:
    // 8031A2AC: addi    r5, r31, 22328
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22328);

label_8031A2B0:
    // 8031A2B0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A2B4:
    // 8031A2B4: addi    r6, r5, 7
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(7);

label_8031A2B8:
    // 8031A2B8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A2BC:
    // 8031A2BC: bl      0x8027035C
    {
            ctx->lr = 0x8031A2C0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8031A2C0:
    ctx->downcount -= 4;
    // 8031A2C0: addi    r31, r31, 22328
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22328);

label_8031A2C4:
    // 8031A2C4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A2C8:
    // 8031A2C8: addi    r4, r31, 16
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(16);

label_8031A2CC:
    // 8031A2CC: bl      0x8026F970
    {
            ctx->lr = 0x8031A2D0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031A2D0:
    ctx->downcount -= 3;
    // 8031A2D0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A2D4:
    ctx->pc = 0x8031A2D4u;
    // 8031A2D4: lwz     r3, 284(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A2D8:
    // 8031A2D8: bl      0x8027CC74
    {
            ctx->lr = 0x8031A2DCu;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_8031A2DC:
    ctx->downcount -= 3;
    // 8031A2DC: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A2E0:
    // 8031A2E0: addi    r4, r31, 25
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(25);

label_8031A2E4:
    // 8031A2E4: bl      0x8026F970
    {
            ctx->lr = 0x8031A2E8u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031A2E8:
    ctx->downcount -= 3;
    // 8031A2E8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A2EC:
    ctx->pc = 0x8031A2ECu;
    // 8031A2EC: lwz     r3, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A2F0:
    // 8031A2F0: bl      0x8027CC74
    {
            ctx->lr = 0x8031A2F4u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_8031A2F4:
    ctx->pc = 0x8031A2F4u;
    ctx->downcount -= 16;
    // 8031A2F4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A2F8:
    ctx->pc = 0x8031A2F8u;
    // 8031A2F8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A2FC:
    ctx->pc = 0x8031A2FCu;
    // 8031A2FC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A300:
    // 8031A300: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A304:
    ctx->pc = 0x8031A304u;
    // 8031A304: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A308:
    ctx->pc = 0x8031A308u;
    ctx->downcount -= 11;
    // 8031A308: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A30C:
    ctx->pc = 0x8031A30Cu;
    // 8031A30C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A310:
    // 8031A310: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031A314:
    ctx->pc = 0x8031A314u;
    // 8031A314: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A318:
    ctx->pc = 0x8031A318u;
    // 8031A318: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A31C:
    // 8031A31C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A320:
    // 8031A320: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A324:
    ctx->pc = 0x8031A324u;
    // 8031A324: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8031A328:
    // 8031A328: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A32C:
    // 8031A32C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A330:
    // 8031A330: bl      0x8026FEF0
    {
            ctx->lr = 0x8031A334u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8031A334:
    ctx->downcount -= 2;
    // 8031A334: cmpwi   r31, 0
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

label_8031A338:
    // 8031A338: bc    12, 2, 0x8031A354
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A354;
        }
    }

label_8031A33C:
    ctx->downcount -= 3;
    // 8031A33C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A340:
    // 8031A340: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A344:
    // 8031A344: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A348u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A348:
    ctx->pc = 0x8031A348u;
    ctx->downcount -= 2;
    // 8031A348: lfs     f1, -11748(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A348u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11748);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8031A34C:
    // 8031A34C: bl      0x8025EBE8
    {
            ctx->lr = 0x8031A350u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8031A350:
    ctx->downcount -= 1;
    // 8031A350: b       0x8031A368
    {
            goto label_8031A368;
    }

label_8031A354:
    ctx->downcount -= 3;
    // 8031A354: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A358:
    // 8031A358: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A35C:
    // 8031A35C: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A360u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A360:
    ctx->pc = 0x8031A360u;
    ctx->downcount -= 2;
    // 8031A360: lfs     f1, -11752(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A360u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8031A364:
    // 8031A364: bl      0x8025EBE8
    {
            ctx->lr = 0x8031A368u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8031A368:
    ctx->pc = 0x8031A368u;
    ctx->downcount -= 8;
    // 8031A368: stb     r31, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_8031A36C:
    ctx->pc = 0x8031A36Cu;
    // 8031A36C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A370:
    ctx->pc = 0x8031A370u;
    // 8031A370: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8031A374:
    ctx->pc = 0x8031A374u;
    // 8031A374: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A378:
    ctx->pc = 0x8031A378u;
    // 8031A378: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A37C:
    // 8031A37C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A380:
    ctx->pc = 0x8031A380u;
    // 8031A380: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A384:
    ctx->pc = 0x8031A384u;
    ctx->downcount -= 11;
    // 8031A384: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A388:
    ctx->pc = 0x8031A388u;
    // 8031A388: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A38C:
    // 8031A38C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031A390:
    ctx->pc = 0x8031A390u;
    // 8031A390: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A394:
    ctx->pc = 0x8031A394u;
    // 8031A394: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A398:
    // 8031A398: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A39C:
    // 8031A39C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A3A0:
    ctx->pc = 0x8031A3A0u;
    // 8031A3A0: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8031A3A4:
    // 8031A3A4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A3A8:
    // 8031A3A8: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A3AC:
    // 8031A3AC: bl      0x8026FEF0
    {
            ctx->lr = 0x8031A3B0u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8031A3B0:
    ctx->downcount -= 2;
    // 8031A3B0: cmpwi   r31, 0
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

label_8031A3B4:
    // 8031A3B4: bc    12, 2, 0x8031A3E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A3E0;
        }
    }

label_8031A3B8:
    ctx->downcount -= 3;
    // 8031A3B8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A3BC:
    // 8031A3BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A3C0:
    // 8031A3C0: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A3C4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A3C4:
    ctx->downcount -= 1;
    // 8031A3C4: bl      0x8025EC94
    {
            ctx->lr = 0x8031A3C8u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_8031A3C8:
    ctx->downcount -= 3;
    // 8031A3C8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A3CC:
    // 8031A3CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A3D0:
    // 8031A3D0: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A3D4u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A3D4:
    ctx->pc = 0x8031A3D4u;
    ctx->downcount -= 2;
    // 8031A3D4: lfs     f1, -11748(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A3D4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11748);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8031A3D8:
    // 8031A3D8: bl      0x8025EBE8
    {
            ctx->lr = 0x8031A3DCu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8031A3DC:
    ctx->downcount -= 1;
    // 8031A3DC: b       0x8031A404
    {
            goto label_8031A404;
    }

label_8031A3E0:
    ctx->downcount -= 3;
    // 8031A3E0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A3E4:
    // 8031A3E4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A3E8:
    // 8031A3E8: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A3ECu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A3EC:
    ctx->downcount -= 1;
    // 8031A3EC: bl      0x8025EBF0
    {
            ctx->lr = 0x8031A3F0u;
            ctx->pc = 0x8025EBF0u;
            return;
    }

label_8031A3F0:
    ctx->downcount -= 3;
    // 8031A3F0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A3F4:
    // 8031A3F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A3F8:
    // 8031A3F8: bl      0x8026F6AC
    {
            ctx->lr = 0x8031A3FCu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031A3FC:
    ctx->pc = 0x8031A3FCu;
    ctx->downcount -= 2;
    // 8031A3FC: lfs     f1, -11752(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A3FCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11752);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8031A400:
    // 8031A400: bl      0x8025EBE8
    {
            ctx->lr = 0x8031A404u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8031A404:
    ctx->pc = 0x8031A404u;
    ctx->downcount -= 8;
    // 8031A404: stb     r31, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_8031A408:
    ctx->pc = 0x8031A408u;
    // 8031A408: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A40C:
    ctx->pc = 0x8031A40Cu;
    // 8031A40C: lwz     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8031A410:
    ctx->pc = 0x8031A410u;
    // 8031A410: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A414:
    ctx->pc = 0x8031A414u;
    // 8031A414: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A418:
    // 8031A418: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A41C:
    ctx->pc = 0x8031A41Cu;
    // 8031A41C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A420:
    ctx->pc = 0x8031A420u;
    ctx->downcount -= 18;
    // 8031A420: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A424:
    ctx->pc = 0x8031A424u;
    // 8031A424: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A428:
    ctx->pc = 0x8031A428u;
    // 8031A428: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A42C:
    ctx->pc = 0x8031A42Cu;
    // 8031A42C: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A430:
    // 8031A430: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A434:
    // 8031A434: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A438:
    ctx->pc = 0x8031A438u;
    // 8031A438: lwz     r3, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A43C:
    // 8031A43C: bl      0x8027CB94
    {
            ctx->lr = 0x8031A440u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_8031A440:
    ctx->pc = 0x8031A440u;
    ctx->downcount -= 3;
    // 8031A440: lwz     r3, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A444:
    // 8031A444: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A448:
    // 8031A448: bl      0x8027CB94
    {
            ctx->lr = 0x8031A44Cu;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_8031A44C:
    ctx->pc = 0x8031A44Cu;
    ctx->downcount -= 16;
    // 8031A44C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A450:
    ctx->pc = 0x8031A450u;
    // 8031A450: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A454:
    ctx->pc = 0x8031A454u;
    // 8031A454: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A458:
    // 8031A458: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A45C:
    ctx->pc = 0x8031A45Cu;
    // 8031A45C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A460:
    ctx->pc = 0x8031A460u;
    ctx->downcount -= 21;
    // 8031A460: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A464:
    ctx->pc = 0x8031A464u;
    // 8031A464: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A468:
    ctx->pc = 0x8031A468u;
    // 8031A468: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A46C:
    ctx->pc = 0x8031A46Cu;
    // 8031A46C: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A470:
    // 8031A470: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031A474:
    // 8031A474: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A478:
    // 8031A478: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A47C:
    // 8031A47C: addi    r31, r31, 22328
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22328);

label_8031A480:
    // 8031A480: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A484:
    // 8031A484: addi    r4, r31, 38
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(38);

label_8031A488:
    // 8031A488: bl      0x8026F960
    {
            ctx->lr = 0x8031A48Cu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A48C:
    ctx->downcount -= 5;
    // 8031A48C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A490:
    // 8031A490: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A494:
    // 8031A494: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A498:
    // 8031A498: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031A49C:
    // 8031A49C: bl      0x8026F760
    {
            ctx->lr = 0x8031A4A0u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8031A4A0:
    ctx->downcount -= 3;
    // 8031A4A0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A4A4:
    // 8031A4A4: addi    r4, r31, 25
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(25);

label_8031A4A8:
    // 8031A4A8: bl      0x8026F960
    {
            ctx->lr = 0x8031A4ACu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A4AC:
    ctx->downcount -= 5;
    // 8031A4AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A4B0:
    // 8031A4B0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A4B4:
    // 8031A4B4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A4B8:
    // 8031A4B8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031A4BC:
    // 8031A4BC: bl      0x8026F760
    {
            ctx->lr = 0x8031A4C0u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8031A4C0:
    ctx->pc = 0x8031A4C0u;
    ctx->downcount -= 16;
    // 8031A4C0: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A4C4:
    ctx->pc = 0x8031A4C4u;
    // 8031A4C4: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A4C8:
    ctx->pc = 0x8031A4C8u;
    // 8031A4C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A4CC:
    // 8031A4CC: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031A4D0:
    ctx->pc = 0x8031A4D0u;
    // 8031A4D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A4D4:
    ctx->pc = 0x8031A4D4u;
    ctx->downcount -= 14;
    // 8031A4D4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A4D8:
    ctx->pc = 0x8031A4D8u;
    // 8031A4D8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A4DC:
    // 8031A4DC: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8031A4E0:
    // 8031A4E0: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A4E4:
    ctx->pc = 0x8031A4E4u;
    // 8031A4E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A4E8:
    // 8031A4E8: addi    r6, r6, 22328
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22328);

label_8031A4EC:
    // 8031A4EC: addi    r5, r6, 50
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(50);

label_8031A4F0:
    // 8031A4F0: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031A4F4:
    ctx->pc = 0x8031A4F4u;
    // 8031A4F4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A4F8:
    // 8031A4F8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A4FC:
    // 8031A4FC: addi    r6, r6, 65
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(65);

label_8031A500:
    // 8031A500: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8031A504:
    // 8031A504: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8031A508:
    // 8031A508: bl      0x8036B3A4
    {
            ctx->lr = 0x8031A50Cu;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_8031A50C:
    ctx->downcount -= 11;
    // 8031A50C: lis     r6, -32659
    ctx->gpr[6] = ((u32)(s32)(-32659) << 16);

label_8031A510:
    // 8031A510: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A514:
    // 8031A514: addi    r6, r6, -21792
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(-21792);

label_8031A518:
    ctx->pc = 0x8031A518u;
    // 8031A518: stw     r6, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031A51C:
    // 8031A51C: addi    r5, r6, 8
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(8);

label_8031A520:
    // 8031A520: addi    r4, r6, 120
    ctx->gpr[4] = ctx->gpr[6] + (u32)(s32)(120);

label_8031A524:
    // 8031A524: addi    r0, r6, 136
    ctx->gpr[0] = ctx->gpr[6] + (u32)(s32)(136);

label_8031A528:
    ctx->pc = 0x8031A528u;
    // 8031A528: stw     r5, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A52C:
    ctx->pc = 0x8031A52Cu;
    // 8031A52C: stw     r4, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031A530:
    ctx->pc = 0x8031A530u;
    // 8031A530: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A534:
    // 8031A534: bl      0x8036B0F8
    {
            ctx->lr = 0x8031A538u;
            ctx->pc = 0x8036B0F8u;
            return;
    }

label_8031A538:
    ctx->pc = 0x8031A538u;
    ctx->downcount -= 2;
    // 8031A538: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A53C:
    // 8031A53C: bl      0x8027CCC0
    {
            ctx->lr = 0x8031A540u;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_8031A540:
    ctx->pc = 0x8031A540u;
    ctx->downcount -= 3;
    // 8031A540: stw     r3, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031A544:
    ctx->pc = 0x8031A544u;
    // 8031A544: lwz     r3, 84(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A548:
    // 8031A548: bl      0x8027CCC0
    {
            ctx->lr = 0x8031A54Cu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_8031A54C:
    ctx->pc = 0x8031A54Cu;
    ctx->downcount -= 10;
    // 8031A54C: stw     r3, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031A550:
    // 8031A550: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8031A554:
    // 8031A554: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A558:
    ctx->pc = 0x8031A558u;
    // 8031A558: stb     r0, 292(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(292);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031A55C:
    ctx->pc = 0x8031A55Cu;
    // 8031A55C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A560:
    ctx->pc = 0x8031A560u;
    // 8031A560: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A564:
    ctx->pc = 0x8031A564u;
    // 8031A564: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A568:
    // 8031A568: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A56C:
    ctx->pc = 0x8031A56Cu;
    // 8031A56C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A570:
    ctx->pc = 0x8031A570u;
    ctx->downcount -= 18;
    // 8031A570: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A574:
    ctx->pc = 0x8031A574u;
    // 8031A574: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A578:
    // 8031A578: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A57C:
    ctx->pc = 0x8031A57Cu;
    // 8031A57C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A580:
    ctx->pc = 0x8031A580u;
    // 8031A580: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A584:
    // 8031A584: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A588:
    // 8031A588: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A58C:
    // 8031A58C: bc    12, 2, 0x8031A5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A5AC;
        }
    }

label_8031A590:
    ctx->downcount -= 1;
    // 8031A590: bc    12, 2, 0x8031A59C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A59C;
        }
    }

label_8031A594:
    ctx->downcount -= 2;
    // 8031A594: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A598:
    // 8031A598: bl      0x801F5A74
    {
            ctx->lr = 0x8031A59Cu;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_8031A59C:
    ctx->downcount -= 2;
    // 8031A59C: cmpwi   r31, 0
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

label_8031A5A0:
    // 8031A5A0: bc    4, 1, 0x8031A5AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031A5AC;
        }
    }

label_8031A5A4:
    ctx->downcount -= 2;
    // 8031A5A4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A5A8:
    // 8031A5A8: bl      0x801C1C90
    {
            ctx->lr = 0x8031A5ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031A5AC:
    ctx->downcount -= 17;
    // 8031A5AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A5B0:
    ctx->pc = 0x8031A5B0u;
    // 8031A5B0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A5B4:
    ctx->pc = 0x8031A5B4u;
    // 8031A5B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A5B8:
    ctx->pc = 0x8031A5B8u;
    // 8031A5B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A5BC:
    // 8031A5BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A5C0:
    ctx->pc = 0x8031A5C0u;
    // 8031A5C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A5C4:
    ctx->downcount -= 2;
    // 8031A5C4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031A5C8:
    // 8031A5C8: b       0x8031A570
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A570u;
                return;
            }
            goto label_8031A570;
    }

label_8031A5CC:
    ctx->downcount -= 2;
    // 8031A5CC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031A5D0:
    // 8031A5D0: b       0x8031A22C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A22Cu;
                return;
            }
            goto label_8031A22C;
    }

label_8031A5D4:
    ctx->downcount -= 2;
    // 8031A5D4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031A5D8:
    // 8031A5D8: b       0x8031A280
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A280u;
                return;
            }
            goto label_8031A280;
    }

label_8031A5DC:
    ctx->downcount -= 2;
    // 8031A5DC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031A5E0:
    // 8031A5E0: b       0x8031A570
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A570u;
                return;
            }
            goto label_8031A570;
    }

label_8031A5E4:
    ctx->pc = 0x8031A5E4u;
    ctx->downcount -= 18;
    // 8031A5E4: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A5E8:
    ctx->pc = 0x8031A5E8u;
    // 8031A5E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A5EC:
    ctx->pc = 0x8031A5ECu;
    // 8031A5EC: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A5F0:
    ctx->pc = 0x8031A5F0u;
    // 8031A5F0: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A5F4:
    ctx->pc = 0x8031A5F4u;
    // 8031A5F4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A5F8:
    ctx->pc = 0x8031A5F8u;
    // 8031A5F8: lwz     r3, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A5FC:
    ctx->pc = 0x8031A5FCu;
    // 8031A5FC: lwz     r4, 288(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031A600:
    ctx->pc = 0x8031A600u;
    // 8031A600: bl      0x802C37E4
    {
            ctx->lr = 0x8031A604u;
            ctx->pc = 0x802C37E4u;
            return;
    }

label_8031A604:
    ctx->pc = 0x8031A604u;
    ctx->downcount -= 7;
    // 8031A604: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031A608:
    ctx->pc = 0x8031A608u;
    // 8031A608: lwz     r6, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8031A60C:
    ctx->pc = 0x8031A60Cu;
    // 8031A60C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A610:
    ctx->pc = 0x8031A610u;
    // 8031A610: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8031A614:
    ctx->pc = 0x8031A614u;
    // 8031A614: addi    r5, r31, 22424
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22424);

label_8031A618:
    ctx->pc = 0x8031A618u;
    // 8031A618: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8031A61C:
    ctx->pc = 0x8031A61Cu;
    // 8031A61C: bl      0x8000D074
    {
            ctx->lr = 0x8031A620u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8031A620:
    ctx->pc = 0x8031A620u;
    ctx->downcount -= 3;
    // 8031A620: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A624:
    ctx->pc = 0x8031A624u;
    // 8031A624: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A628:
    ctx->pc = 0x8031A628u;
    // 8031A628: bl      0x8026F960
    {
            ctx->lr = 0x8031A62Cu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A62C:
    ctx->pc = 0x8031A62Cu;
    ctx->downcount -= 5;
    // 8031A62C: addi    r31, r31, 22424
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22424);

label_8031A630:
    ctx->pc = 0x8031A630u;
    // 8031A630: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A634:
    ctx->pc = 0x8031A634u;
    // 8031A634: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A638:
    ctx->pc = 0x8031A638u;
    // 8031A638: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_8031A63C:
    ctx->pc = 0x8031A63Cu;
    // 8031A63C: bl      0x8026F960
    {
            ctx->lr = 0x8031A640u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A640:
    ctx->pc = 0x8031A640u;
    ctx->downcount -= 2;
    // 8031A640: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A644:
    ctx->pc = 0x8031A644u;
    // 8031A644: bl      0x80260AA4
    {
            ctx->lr = 0x8031A648u;
            ctx->pc = 0x80260AA4u;
            return;
    }

label_8031A648:
    ctx->pc = 0x8031A648u;
    ctx->downcount -= 3;
    // 8031A648: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A64C:
    ctx->pc = 0x8031A64Cu;
    // 8031A64C: addi    r4, r31, 20
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(20);

label_8031A650:
    ctx->pc = 0x8031A650u;
    // 8031A650: bl      0x8026F970
    {
            ctx->lr = 0x8031A654u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031A654:
    ctx->pc = 0x8031A654u;
    ctx->downcount -= 19;
    // 8031A654: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031A658:
    ctx->pc = 0x8031A658u;
    // 8031A658: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8031A65C:
    ctx->pc = 0x8031A65Cu;
    // 8031A65C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031A660:
    ctx->pc = 0x8031A660u;
    // 8031A660: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A664:
    ctx->pc = 0x8031A664u;
    // 8031A664: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A668:
    ctx->pc = 0x8031A668u;
    // 8031A668: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A66C:
    ctx->pc = 0x8031A66Cu;
    // 8031A66C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8031A670:
    ctx->pc = 0x8031A670u;
    // 8031A670: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A674:
    ctx->pc = 0x8031A674u;
    ctx->downcount -= 21;
    // 8031A674: stwu     r1, -144(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-144);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A678:
    ctx->pc = 0x8031A678u;
    // 8031A678: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A67C:
    ctx->pc = 0x8031A67Cu;
    // 8031A67C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8031A680:
    ctx->pc = 0x8031A680u;
    // 8031A680: li      r7, 64
    ctx->gpr[7] = (u32)(s32)(64);

label_8031A684:
    ctx->pc = 0x8031A684u;
    // 8031A684: stw     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A688:
    ctx->pc = 0x8031A688u;
    // 8031A688: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A68C:
    ctx->pc = 0x8031A68Cu;
    // 8031A68C: stmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A690:
    ctx->pc = 0x8031A690u;
    // 8031A690: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A694:
    ctx->pc = 0x8031A694u;
    // 8031A694: lwz     r3, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031A698:
    ctx->pc = 0x8031A698u;
    // 8031A698: lwz     r4, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031A69C:
    ctx->pc = 0x8031A69Cu;
    // 8031A69C: bl      0x802C3574
    {
            ctx->lr = 0x8031A6A0u;
            ctx->pc = 0x802C3574u;
            return;
    }

label_8031A6A0:
    ctx->pc = 0x8031A6A0u;
    ctx->downcount -= 5;
    // 8031A6A0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031A6A4:
    ctx->pc = 0x8031A6A4u;
    // 8031A6A4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A6A8:
    ctx->pc = 0x8031A6A8u;
    // 8031A6A8: addi    r31, r31, 22424
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22424);

label_8031A6AC:
    ctx->pc = 0x8031A6ACu;
    // 8031A6AC: addi    r4, r31, 30
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(30);

label_8031A6B0:
    ctx->pc = 0x8031A6B0u;
    // 8031A6B0: bl      0x8026F968
    {
            ctx->lr = 0x8031A6B4u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8031A6B4:
    ctx->pc = 0x8031A6B4u;
    ctx->downcount -= 7;
    // 8031A6B4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A6B8:
    ctx->pc = 0x8031A6B8u;
    // 8031A6B8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A6BC:
    ctx->pc = 0x8031A6BCu;
    // 8031A6BC: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A6C0:
    ctx->pc = 0x8031A6C0u;
    // 8031A6C0: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_8031A6C4:
    ctx->pc = 0x8031A6C4u;
    // 8031A6C4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031A6C8:
    ctx->pc = 0x8031A6C8u;
    // 8031A6C8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8031A6CC:
    ctx->pc = 0x8031A6CCu;
    // 8031A6CC: bl      0x8026F8C0
    {
            ctx->lr = 0x8031A6D0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8031A6D0:
    ctx->pc = 0x8031A6D0u;
    ctx->downcount -= 3;
    // 8031A6D0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A6D4:
    ctx->pc = 0x8031A6D4u;
    // 8031A6D4: addi    r4, r31, 42
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(42);

label_8031A6D8:
    ctx->pc = 0x8031A6D8u;
    // 8031A6D8: bl      0x8026F968
    {
            ctx->lr = 0x8031A6DCu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8031A6DC:
    ctx->pc = 0x8031A6DCu;
    ctx->downcount -= 7;
    // 8031A6DC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A6E0:
    ctx->pc = 0x8031A6E0u;
    // 8031A6E0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031A6E4:
    ctx->pc = 0x8031A6E4u;
    // 8031A6E4: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_8031A6E8:
    ctx->pc = 0x8031A6E8u;
    // 8031A6E8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_8031A6EC:
    ctx->pc = 0x8031A6ECu;
    // 8031A6EC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031A6F0:
    ctx->pc = 0x8031A6F0u;
    // 8031A6F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8031A6F4:
    ctx->pc = 0x8031A6F4u;
    // 8031A6F4: bl      0x8026F8C0
    {
            ctx->lr = 0x8031A6F8u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8031A6F8:
    ctx->pc = 0x8031A6F8u;
    ctx->downcount -= 16;
    // 8031A6F8: lmw     r30, 136(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(136);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A6FC:
    ctx->pc = 0x8031A6FCu;
    // 8031A6FC: lwz     r0, 148(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A700:
    ctx->pc = 0x8031A700u;
    // 8031A700: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A704:
    ctx->pc = 0x8031A704u;
    // 8031A704: addi    r1, r1, 144
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(144);

label_8031A708:
    ctx->pc = 0x8031A708u;
    // 8031A708: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A70C:
    ctx->pc = 0x8031A70Cu;
    ctx->downcount -= 21;
    // 8031A70C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A710:
    ctx->pc = 0x8031A710u;
    // 8031A710: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A714:
    ctx->pc = 0x8031A714u;
    // 8031A714: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A718:
    ctx->pc = 0x8031A718u;
    // 8031A718: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A71C:
    ctx->pc = 0x8031A71Cu;
    // 8031A71C: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031A720:
    ctx->pc = 0x8031A720u;
    // 8031A720: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A724:
    ctx->pc = 0x8031A724u;
    // 8031A724: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A728:
    ctx->pc = 0x8031A728u;
    // 8031A728: addi    r31, r31, 22424
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22424);

label_8031A72C:
    ctx->pc = 0x8031A72Cu;
    // 8031A72C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A730:
    ctx->pc = 0x8031A730u;
    // 8031A730: addi    r4, r31, 56
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(56);

label_8031A734:
    ctx->pc = 0x8031A734u;
    // 8031A734: bl      0x8026F958
    {
            ctx->lr = 0x8031A738u;
            ctx->pc = 0x8026F958u;
            return;
    }

label_8031A738:
    ctx->pc = 0x8031A738u;
    ctx->downcount -= 5;
    // 8031A738: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A73C:
    ctx->pc = 0x8031A73Cu;
    // 8031A73C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A740:
    ctx->pc = 0x8031A740u;
    // 8031A740: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A744:
    ctx->pc = 0x8031A744u;
    // 8031A744: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031A748:
    ctx->pc = 0x8031A748u;
    // 8031A748: bl      0x8026F720
    {
            ctx->lr = 0x8031A74Cu;
            ctx->pc = 0x8026F720u;
            return;
    }

label_8031A74C:
    ctx->pc = 0x8031A74Cu;
    ctx->downcount -= 3;
    // 8031A74C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A750:
    ctx->pc = 0x8031A750u;
    // 8031A750: addi    r4, r31, 70
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(70);

label_8031A754:
    ctx->pc = 0x8031A754u;
    // 8031A754: bl      0x8026F960
    {
            ctx->lr = 0x8031A758u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A758:
    ctx->pc = 0x8031A758u;
    ctx->downcount -= 5;
    // 8031A758: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A75C:
    ctx->pc = 0x8031A75Cu;
    // 8031A75C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A760:
    ctx->pc = 0x8031A760u;
    // 8031A760: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A764:
    ctx->pc = 0x8031A764u;
    // 8031A764: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031A768:
    ctx->pc = 0x8031A768u;
    // 8031A768: bl      0x8026F760
    {
            ctx->lr = 0x8031A76Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8031A76C:
    ctx->pc = 0x8031A76Cu;
    ctx->downcount -= 3;
    // 8031A76C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A770:
    ctx->pc = 0x8031A770u;
    // 8031A770: addi    r4, r31, 82
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(82);

label_8031A774:
    ctx->pc = 0x8031A774u;
    // 8031A774: bl      0x8026F960
    {
            ctx->lr = 0x8031A778u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A778:
    ctx->pc = 0x8031A778u;
    ctx->downcount -= 5;
    // 8031A778: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A77C:
    ctx->pc = 0x8031A77Cu;
    // 8031A77C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A780:
    ctx->pc = 0x8031A780u;
    // 8031A780: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A784:
    ctx->pc = 0x8031A784u;
    // 8031A784: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031A788:
    ctx->pc = 0x8031A788u;
    // 8031A788: bl      0x8026F760
    {
            ctx->lr = 0x8031A78Cu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8031A78C:
    ctx->pc = 0x8031A78Cu;
    ctx->downcount -= 3;
    // 8031A78C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A790:
    ctx->pc = 0x8031A790u;
    // 8031A790: addi    r4, r31, 8
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(8);

label_8031A794:
    ctx->pc = 0x8031A794u;
    // 8031A794: bl      0x8026F960
    {
            ctx->lr = 0x8031A798u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031A798:
    ctx->pc = 0x8031A798u;
    ctx->downcount -= 5;
    // 8031A798: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A79C:
    ctx->pc = 0x8031A79Cu;
    // 8031A79C: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A7A0:
    ctx->pc = 0x8031A7A0u;
    // 8031A7A0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8031A7A4:
    ctx->pc = 0x8031A7A4u;
    // 8031A7A4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031A7A8:
    ctx->pc = 0x8031A7A8u;
    // 8031A7A8: bl      0x8026F760
    {
            ctx->lr = 0x8031A7ACu;
            ctx->pc = 0x8026F760u;
            return;
    }

label_8031A7AC:
    ctx->pc = 0x8031A7ACu;
    ctx->downcount -= 16;
    // 8031A7AC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A7B0:
    ctx->pc = 0x8031A7B0u;
    // 8031A7B0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A7B4:
    ctx->pc = 0x8031A7B4u;
    // 8031A7B4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A7B8:
    ctx->pc = 0x8031A7B8u;
    // 8031A7B8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031A7BC:
    ctx->pc = 0x8031A7BCu;
    // 8031A7BC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A7C0:
    ctx->pc = 0x8031A7C0u;
    ctx->downcount -= 8;
    // 8031A7C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A7C4:
    ctx->pc = 0x8031A7C4u;
    // 8031A7C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A7C8:
    ctx->pc = 0x8031A7C8u;
    // 8031A7C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A7CC:
    ctx->pc = 0x8031A7CCu;
    // 8031A7CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A7D0:
    ctx->pc = 0x8031A7D0u;
    // 8031A7D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A7D4:
    ctx->pc = 0x8031A7D4u;
    // 8031A7D4: stw     r4, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031A7D8:
    ctx->pc = 0x8031A7D8u;
    // 8031A7D8: stw     r5, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A7DC:
    ctx->pc = 0x8031A7DCu;
    // 8031A7DC: bl      0x8031A674
    {
            ctx->lr = 0x8031A7E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A674u;
                return;
            }
            goto label_8031A674;
    }

label_8031A7E0:
    ctx->pc = 0x8031A7E0u;
    ctx->downcount -= 2;
    // 8031A7E0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A7E4:
    ctx->pc = 0x8031A7E4u;
    // 8031A7E4: bl      0x8031A5E4
    {
            ctx->lr = 0x8031A7E8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A5E4u;
                return;
            }
            goto label_8031A5E4;
    }

label_8031A7E8:
    ctx->pc = 0x8031A7E8u;
    ctx->downcount -= 6;
    // 8031A7E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A7EC:
    ctx->pc = 0x8031A7ECu;
    // 8031A7EC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A7F0:
    ctx->pc = 0x8031A7F0u;
    // 8031A7F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A7F4:
    ctx->pc = 0x8031A7F4u;
    // 8031A7F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A7F8:
    ctx->pc = 0x8031A7F8u;
    // 8031A7F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A7FC:
    ctx->pc = 0x8031A7FCu;
    ctx->downcount -= 14;
    // 8031A7FC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A800:
    ctx->pc = 0x8031A800u;
    // 8031A800: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A804:
    ctx->pc = 0x8031A804u;
    // 8031A804: lis     r6, -32665
    ctx->gpr[6] = ((u32)(s32)(-32665) << 16);

label_8031A808:
    ctx->pc = 0x8031A808u;
    // 8031A808: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A80C:
    ctx->pc = 0x8031A80Cu;
    // 8031A80C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A810:
    ctx->pc = 0x8031A810u;
    // 8031A810: addi    r6, r6, 22424
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(22424);

label_8031A814:
    ctx->pc = 0x8031A814u;
    // 8031A814: addi    r5, r6, 94
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(94);

label_8031A818:
    ctx->pc = 0x8031A818u;
    // 8031A818: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A81C:
    ctx->pc = 0x8031A81Cu;
    // 8031A81C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A820:
    ctx->pc = 0x8031A820u;
    // 8031A820: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A824:
    ctx->pc = 0x8031A824u;
    // 8031A824: addi    r6, r6, 109
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(109);

label_8031A828:
    ctx->pc = 0x8031A828u;
    // 8031A828: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8031A82C:
    ctx->pc = 0x8031A82Cu;
    // 8031A82C: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8031A830:
    ctx->pc = 0x8031A830u;
    // 8031A830: bl      0x8036E994
    {
            ctx->lr = 0x8031A834u;
            ctx->pc = 0x8036E994u;
            return;
    }

label_8031A834:
    ctx->pc = 0x8031A834u;
    ctx->downcount -= 20;
    // 8031A834: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_8031A838:
    ctx->pc = 0x8031A838u;
    // 8031A838: li      r4, 14
    ctx->gpr[4] = (u32)(s32)(14);

label_8031A83C:
    ctx->pc = 0x8031A83Cu;
    // 8031A83C: addi    r5, r5, -21496
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-21496);

label_8031A840:
    ctx->pc = 0x8031A840u;
    // 8031A840: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_8031A844:
    ctx->pc = 0x8031A844u;
    // 8031A844: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_8031A848:
    ctx->pc = 0x8031A848u;
    // 8031A848: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031A84C:
    ctx->pc = 0x8031A84Cu;
    // 8031A84C: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_8031A850:
    ctx->pc = 0x8031A850u;
    // 8031A850: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A854:
    ctx->pc = 0x8031A854u;
    // 8031A854: addi    r5, r5, 136
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(136);

label_8031A858:
    ctx->pc = 0x8031A858u;
    // 8031A858: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A85C:
    ctx->pc = 0x8031A85Cu;
    // 8031A85C: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031A860:
    ctx->pc = 0x8031A860u;
    // 8031A860: stw     r5, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A864:
    ctx->pc = 0x8031A864u;
    // 8031A864: stw     r4, 284(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031A868:
    ctx->pc = 0x8031A868u;
    // 8031A868: stw     r0, 288(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A86C:
    ctx->pc = 0x8031A86Cu;
    // 8031A86C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A870:
    ctx->pc = 0x8031A870u;
    // 8031A870: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A874:
    ctx->pc = 0x8031A874u;
    // 8031A874: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A878:
    ctx->pc = 0x8031A878u;
    // 8031A878: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A87C:
    ctx->pc = 0x8031A87Cu;
    // 8031A87C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A880:
    ctx->pc = 0x8031A880u;
    ctx->downcount -= 18;
    // 8031A880: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A884:
    ctx->pc = 0x8031A884u;
    // 8031A884: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A888:
    // 8031A888: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A88C:
    ctx->pc = 0x8031A88Cu;
    // 8031A88C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A890:
    ctx->pc = 0x8031A890u;
    // 8031A890: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A894:
    // 8031A894: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A898:
    // 8031A898: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A89C:
    // 8031A89C: bc    12, 2, 0x8031A8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A8BC;
        }
    }

label_8031A8A0:
    ctx->downcount -= 1;
    // 8031A8A0: bc    12, 2, 0x8031A8AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031A8AC;
        }
    }

label_8031A8A4:
    ctx->downcount -= 2;
    // 8031A8A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A8A8:
    // 8031A8A8: bl      0x801F9B68
    {
            ctx->lr = 0x8031A8ACu;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_8031A8AC:
    ctx->downcount -= 2;
    // 8031A8AC: cmpwi   r31, 0
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

label_8031A8B0:
    // 8031A8B0: bc    4, 1, 0x8031A8BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031A8BC;
        }
    }

label_8031A8B4:
    ctx->downcount -= 2;
    // 8031A8B4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A8B8:
    // 8031A8B8: bl      0x801C1C90
    {
            ctx->lr = 0x8031A8BCu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031A8BC:
    ctx->downcount -= 17;
    // 8031A8BC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031A8C0:
    ctx->pc = 0x8031A8C0u;
    // 8031A8C0: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031A8C4:
    ctx->pc = 0x8031A8C4u;
    // 8031A8C4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A8C8:
    ctx->pc = 0x8031A8C8u;
    // 8031A8C8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A8CC:
    // 8031A8CC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A8D0:
    ctx->pc = 0x8031A8D0u;
    // 8031A8D0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A8D4:
    ctx->downcount -= 2;
    // 8031A8D4: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031A8D8:
    // 8031A8D8: b       0x8031A880
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A880u;
                return;
            }
            goto label_8031A880;
    }

label_8031A8DC:
    ctx->downcount -= 2;
    // 8031A8DC: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031A8E0:
    // 8031A8E0: b       0x8031A880
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A880u;
                return;
            }
            goto label_8031A880;
    }

label_8031A8E4:
    ctx->pc = 0x8031A8E4u;
    ctx->downcount -= 6;
    // 8031A8E4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A8E8:
    ctx->pc = 0x8031A8E8u;
    // 8031A8E8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A8EC:
    // 8031A8EC: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031A8F0:
    // 8031A8F0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A8F4:
    ctx->pc = 0x8031A8F4u;
    // 8031A8F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A8F8:
    // 8031A8F8: bl      0x8026F5F4
    {
            ctx->lr = 0x8031A8FCu;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8031A8FC:
    ctx->downcount -= 4;
    // 8031A8FC: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8031A900:
    // 8031A900: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8031A904:
    // 8031A904: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_8031A908:
    // 8031A908: bl      0x802B735C
    {
            ctx->lr = 0x8031A90Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8031A90C:
    ctx->pc = 0x8031A90Cu;
    ctx->downcount -= 5;
    // 8031A90C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A910:
    ctx->pc = 0x8031A910u;
    // 8031A910: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A914:
    // 8031A914: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A918:
    ctx->pc = 0x8031A918u;
    // 8031A918: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A91C:
    ctx->pc = 0x8031A91Cu;
    ctx->downcount -= 6;
    // 8031A91C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A920:
    ctx->pc = 0x8031A920u;
    // 8031A920: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A924:
    // 8031A924: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031A928:
    // 8031A928: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031A92C:
    ctx->pc = 0x8031A92Cu;
    // 8031A92C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A930:
    // 8031A930: bl      0x8026F5F4
    {
            ctx->lr = 0x8031A934u;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8031A934:
    ctx->downcount -= 4;
    // 8031A934: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8031A938:
    // 8031A938: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8031A93C:
    // 8031A93C: li      r3, 97
    ctx->gpr[3] = (u32)(s32)(97);

label_8031A940:
    // 8031A940: bl      0x802B735C
    {
            ctx->lr = 0x8031A944u;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8031A944:
    ctx->pc = 0x8031A944u;
    ctx->downcount -= 5;
    // 8031A944: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A948:
    ctx->pc = 0x8031A948u;
    // 8031A948: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A94C:
    // 8031A94C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A950:
    ctx->pc = 0x8031A950u;
    // 8031A950: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A954:
    ctx->pc = 0x8031A954u;
    ctx->downcount -= 4;
    // 8031A954: lfs     f2, -11744(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031A954u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11744);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8031A958:
    // 8031A958: li      r3, 95
    ctx->gpr[3] = (u32)(s32)(95);

label_8031A95C:
    // 8031A95C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A960:
    // 8031A960: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_8031A964:
    ctx->pc = 0x8031A964u;
    ctx->downcount -= 13;
    // 8031A964: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A968:
    ctx->pc = 0x8031A968u;
    // 8031A968: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A96C:
    // 8031A96C: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8031A970:
    // 8031A970: or   r9, r4, r4
    {
        ctx->gpr[9] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A974:
    ctx->pc = 0x8031A974u;
    // 8031A974: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A978:
    // 8031A978: addi    r5, r5, 22568
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22568);

label_8031A97C:
    // 8031A97C: addi    r6, r5, 15
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(15);

label_8031A980:
    // 8031A980: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031A984:
    ctx->pc = 0x8031A984u;
    // 8031A984: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031A988:
    // 8031A988: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A98C:
    // 8031A98C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8031A990:
    // 8031A990: li      r8, 1
    ctx->gpr[8] = (u32)(s32)(1);

label_8031A994:
    // 8031A994: bl      0x8036B3A4
    {
            ctx->lr = 0x8031A998u;
            ctx->pc = 0x8036B3A4u;
            return;
    }

label_8031A998:
    ctx->downcount -= 12;
    // 8031A998: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_8031A99C:
    // 8031A99C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A9A0:
    // 8031A9A0: addi    r7, r7, -21192
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(-21192);

label_8031A9A4:
    ctx->pc = 0x8031A9A4u;
    // 8031A9A4: stw     r7, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_8031A9A8:
    // 8031A9A8: addi    r6, r7, 8
    ctx->gpr[6] = ctx->gpr[7] + (u32)(s32)(8);

label_8031A9AC:
    // 8031A9AC: li      r4, 1024
    ctx->gpr[4] = (u32)(s32)(1024);

label_8031A9B0:
    // 8031A9B0: addi    r5, r7, 120
    ctx->gpr[5] = ctx->gpr[7] + (u32)(s32)(120);

label_8031A9B4:
    // 8031A9B4: addi    r0, r7, 136
    ctx->gpr[0] = ctx->gpr[7] + (u32)(s32)(136);

label_8031A9B8:
    ctx->pc = 0x8031A9B8u;
    // 8031A9B8: stw     r6, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031A9BC:
    ctx->pc = 0x8031A9BCu;
    // 8031A9BC: stw     r5, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031A9C0:
    ctx->pc = 0x8031A9C0u;
    // 8031A9C0: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A9C4:
    // 8031A9C4: bl      0x8036B0F0
    {
            ctx->lr = 0x8031A9C8u;
            ctx->pc = 0x8036B0F0u;
            return;
    }

label_8031A9C8:
    ctx->downcount -= 7;
    // 8031A9C8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031A9CC:
    ctx->pc = 0x8031A9CCu;
    // 8031A9CC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031A9D0:
    ctx->pc = 0x8031A9D0u;
    // 8031A9D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031A9D4:
    ctx->pc = 0x8031A9D4u;
    // 8031A9D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031A9D8:
    // 8031A9D8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031A9DC:
    ctx->pc = 0x8031A9DCu;
    // 8031A9DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031A9E0:
    ctx->pc = 0x8031A9E0u;
    ctx->downcount -= 18;
    // 8031A9E0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031A9E4:
    ctx->pc = 0x8031A9E4u;
    // 8031A9E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031A9E8:
    // 8031A9E8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031A9EC:
    ctx->pc = 0x8031A9ECu;
    // 8031A9EC: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031A9F0:
    ctx->pc = 0x8031A9F0u;
    // 8031A9F0: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031A9F4:
    // 8031A9F4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031A9F8:
    // 8031A9F8: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031A9FC:
    // 8031A9FC: bc    12, 2, 0x8031AA1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AA1C;
        }
    }

label_8031AA00:
    ctx->downcount -= 1;
    // 8031AA00: bc    12, 2, 0x8031AA0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AA0C;
        }
    }

label_8031AA04:
    ctx->downcount -= 2;
    // 8031AA04: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AA08:
    // 8031AA08: bl      0x801F5A74
    {
            ctx->lr = 0x8031AA0Cu;
            ctx->pc = 0x801F5A74u;
            return;
    }

label_8031AA0C:
    ctx->downcount -= 2;
    // 8031AA0C: cmpwi   r31, 0
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

label_8031AA10:
    // 8031AA10: bc    4, 1, 0x8031AA1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031AA1C;
        }
    }

label_8031AA14:
    ctx->downcount -= 2;
    // 8031AA14: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AA18:
    // 8031AA18: bl      0x801C1C90
    {
            ctx->lr = 0x8031AA1Cu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031AA1C:
    ctx->downcount -= 17;
    // 8031AA1C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AA20:
    ctx->pc = 0x8031AA20u;
    // 8031AA20: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AA24:
    ctx->pc = 0x8031AA24u;
    // 8031AA24: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AA28:
    ctx->pc = 0x8031AA28u;
    // 8031AA28: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AA2C:
    // 8031AA2C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AA30:
    ctx->pc = 0x8031AA30u;
    // 8031AA30: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AA34:
    ctx->downcount -= 2;
    // 8031AA34: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031AA38:
    // 8031AA38: b       0x8031A9E0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A9E0u;
                return;
            }
            goto label_8031A9E0;
    }

label_8031AA3C:
    ctx->downcount -= 2;
    // 8031AA3C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AA40:
    // 8031AA40: b       0x8031A8E4
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A8E4u;
                return;
            }
            goto label_8031A8E4;
    }

label_8031AA44:
    ctx->downcount -= 2;
    // 8031AA44: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AA48:
    // 8031AA48: b       0x8031A91C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A91Cu;
                return;
            }
            goto label_8031A91C;
    }

label_8031AA4C:
    ctx->downcount -= 2;
    // 8031AA4C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AA50:
    // 8031AA50: b       0x8031A954
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A954u;
                return;
            }
            goto label_8031A954;
    }

label_8031AA54:
    ctx->downcount -= 2;
    // 8031AA54: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AA58:
    // 8031AA58: b       0x8031A9E0
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031A9E0u;
                return;
            }
            goto label_8031A9E0;
    }

label_8031AA5C:
    ctx->pc = 0x8031AA5Cu;
    ctx->downcount -= 8;
    // 8031AA5C: lis     r4, -32665
    ctx->gpr[4] = ((u32)(s32)(-32665) << 16);

label_8031AA60:
    ctx->pc = 0x8031AA60u;
    // 8031AA60: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031AA64:
    ctx->pc = 0x8031AA64u;
    // 8031AA64: addi    r4, r4, 22616
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22616);

label_8031AA68:
    ctx->pc = 0x8031AA68u;
    // 8031AA68: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8031AA6C:
    ctx->pc = 0x8031AA6Cu;
    // 8031AA6C: addi    r5, r4, 15
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(15);

label_8031AA70:
    ctx->pc = 0x8031AA70u;
    // 8031AA70: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8031AA74:
    ctx->pc = 0x8031AA74u;
    // 8031AA74: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AA78:
    ctx->pc = 0x8031AA78u;
    // 8031AA78: b       0x802703A8
    {
            ctx->pc = 0x802703A8u;
            return;
    }

label_8031AA7C:
    ctx->pc = 0x8031AA7Cu;
    ctx->downcount -= 13;
    // 8031AA7C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AA80:
    ctx->pc = 0x8031AA80u;
    // 8031AA80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AA84:
    ctx->pc = 0x8031AA84u;
    // 8031AA84: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8031AA88:
    ctx->pc = 0x8031AA88u;
    // 8031AA88: or   r6, r4, r4
    {
        ctx->gpr[6] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031AA8C:
    ctx->pc = 0x8031AA8Cu;
    // 8031AA8C: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AA90:
    ctx->pc = 0x8031AA90u;
    // 8031AA90: addi    r5, r5, 22616
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22616);

label_8031AA94:
    ctx->pc = 0x8031AA94u;
    // 8031AA94: li      r4, 32
    ctx->gpr[4] = (u32)(s32)(32);

label_8031AA98:
    ctx->pc = 0x8031AA98u;
    // 8031AA98: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031AA9C:
    ctx->pc = 0x8031AA9Cu;
    // 8031AA9C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AAA0:
    ctx->pc = 0x8031AAA0u;
    // 8031AAA0: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_8031AAA4:
    ctx->pc = 0x8031AAA4u;
    // 8031AAA4: addi    r5, r5, 40
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(40);

label_8031AAA8:
    ctx->pc = 0x8031AAA8u;
    // 8031AAA8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8031AAAC:
    ctx->pc = 0x8031AAACu;
    // 8031AAAC: bl      0x8000D074
    {
            ctx->lr = 0x8031AAB0u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8031AAB0:
    ctx->pc = 0x8031AAB0u;
    ctx->downcount -= 3;
    // 8031AAB0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8031AAB4:
    ctx->pc = 0x8031AAB4u;
    // 8031AAB4: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_8031AAB8:
    ctx->pc = 0x8031AAB8u;
    // 8031AAB8: bl      0x8026F960
    {
            ctx->lr = 0x8031AABCu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8031AABC:
    ctx->pc = 0x8031AABCu;
    ctx->downcount -= 6;
    // 8031AABC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AAC0:
    ctx->pc = 0x8031AAC0u;
    // 8031AAC0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031AAC4:
    ctx->pc = 0x8031AAC4u;
    // 8031AAC4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AAC8:
    ctx->pc = 0x8031AAC8u;
    // 8031AAC8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8031AACC:
    ctx->pc = 0x8031AACCu;
    // 8031AACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AAD0:
    ctx->pc = 0x8031AAD0u;
    ctx->downcount -= 8;
    // 8031AAD0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AAD4:
    ctx->pc = 0x8031AAD4u;
    // 8031AAD4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AAD8:
    ctx->pc = 0x8031AAD8u;
    // 8031AAD8: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031AADC:
    ctx->pc = 0x8031AADCu;
    // 8031AADC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AAE0:
    ctx->pc = 0x8031AAE0u;
    // 8031AAE0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AAE4:
    ctx->pc = 0x8031AAE4u;
    // 8031AAE4: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031AAE8:
    ctx->pc = 0x8031AAE8u;
    // 8031AAE8: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AAEC:
    ctx->pc = 0x8031AAECu;
    // 8031AAEC: bl      0x803715C0
    {
            ctx->lr = 0x8031AAF0u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_8031AAF0:
    ctx->pc = 0x8031AAF0u;
    ctx->downcount -= 15;
    // 8031AAF0: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_8031AAF4:
    ctx->pc = 0x8031AAF4u;
    // 8031AAF4: lis     r3, -32665
    ctx->gpr[3] = ((u32)(s32)(-32665) << 16);

label_8031AAF8:
    ctx->pc = 0x8031AAF8u;
    // 8031AAF8: addi    r5, r5, -20896
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-20896);

label_8031AAFC:
    ctx->pc = 0x8031AAFCu;
    // 8031AAFC: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031AB00:
    ctx->pc = 0x8031AB00u;
    // 8031AB00: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_8031AB04:
    ctx->pc = 0x8031AB04u;
    // 8031AB04: addi    r3, r3, 22616
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(22616);

label_8031AB08:
    ctx->pc = 0x8031AB08u;
    // 8031AB08: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_8031AB0C:
    ctx->pc = 0x8031AB0Cu;
    // 8031AB0C: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_8031AB10:
    ctx->pc = 0x8031AB10u;
    // 8031AB10: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031AB14:
    ctx->pc = 0x8031AB14u;
    // 8031AB14: addi    r4, r3, 48
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(48);

label_8031AB18:
    ctx->pc = 0x8031AB18u;
    // 8031AB18: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_8031AB1C:
    ctx->pc = 0x8031AB1Cu;
    // 8031AB1C: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_8031AB20:
    ctx->pc = 0x8031AB20u;
    // 8031AB20: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031AB24:
    ctx->pc = 0x8031AB24u;
    // 8031AB24: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AB28:
    ctx->pc = 0x8031AB28u;
    // 8031AB28: bl      0x8000E7F4
    {
            ctx->lr = 0x8031AB2Cu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_8031AB2C:
    ctx->pc = 0x8031AB2Cu;
    ctx->downcount -= 7;
    // 8031AB2C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8031AB30:
    ctx->pc = 0x8031AB30u;
    // 8031AB30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031AB34:
    ctx->pc = 0x8031AB34u;
    // 8031AB34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AB38:
    ctx->pc = 0x8031AB38u;
    // 8031AB38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AB3C:
    ctx->pc = 0x8031AB3Cu;
    // 8031AB3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AB40:
    ctx->pc = 0x8031AB40u;
    // 8031AB40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AB44:
    ctx->pc = 0x8031AB44u;
    ctx->downcount -= 18;
    // 8031AB44: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AB48:
    ctx->pc = 0x8031AB48u;
    // 8031AB48: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AB4C:
    // 8031AB4C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031AB50:
    ctx->pc = 0x8031AB50u;
    // 8031AB50: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AB54:
    ctx->pc = 0x8031AB54u;
    // 8031AB54: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031AB58:
    // 8031AB58: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AB5C:
    // 8031AB5C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031AB60:
    // 8031AB60: bc    12, 2, 0x8031AB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AB94;
        }
    }

label_8031AB64:
    ctx->downcount -= 1;
    // 8031AB64: bc    12, 2, 0x8031AB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AB84;
        }
    }

label_8031AB68:
    ctx->downcount -= 1;
    // 8031AB68: bc    12, 2, 0x8031AB84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AB84;
        }
    }

label_8031AB6C:
    ctx->downcount -= 3;
    // 8031AB6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AB70:
    // 8031AB70: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AB74:
    // 8031AB74: bl      0x801F5C24
    {
            ctx->lr = 0x8031AB78u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8031AB78:
    ctx->downcount -= 3;
    // 8031AB78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AB7C:
    // 8031AB7C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AB80:
    // 8031AB80: bl      0x801F9C70
    {
            ctx->lr = 0x8031AB84u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_8031AB84:
    ctx->downcount -= 2;
    // 8031AB84: cmpwi   r31, 0
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

label_8031AB88:
    // 8031AB88: bc    4, 1, 0x8031AB94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031AB94;
        }
    }

label_8031AB8C:
    ctx->downcount -= 2;
    // 8031AB8C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AB90:
    // 8031AB90: bl      0x801C1C90
    {
            ctx->lr = 0x8031AB94u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031AB94:
    ctx->downcount -= 17;
    // 8031AB94: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AB98:
    ctx->pc = 0x8031AB98u;
    // 8031AB98: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AB9C:
    ctx->pc = 0x8031AB9Cu;
    // 8031AB9C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031ABA0:
    ctx->pc = 0x8031ABA0u;
    // 8031ABA0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031ABA4:
    // 8031ABA4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031ABA8:
    ctx->pc = 0x8031ABA8u;
    // 8031ABA8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031ABAC:
    ctx->downcount -= 2;
    // 8031ABAC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031ABB0:
    // 8031ABB0: b       0x8031AB44
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AB44u;
                return;
            }
            goto label_8031AB44;
    }

label_8031ABB4:
    ctx->downcount -= 2;
    // 8031ABB4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031ABB8:
    // 8031ABB8: b       0x8031AB44
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AB44u;
                return;
            }
            goto label_8031AB44;
    }

label_8031ABBC:
    ctx->pc = 0x8031ABBCu;
    ctx->downcount -= 26;
    // 8031ABBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031ABC0:
    // 8031ABC0: lis     r0, 17200
    ctx->gpr[0] = ((u32)(s32)(17200) << 16);

label_8031ABC4:
    ctx->pc = 0x8031ABC4u;
    // 8031ABC4: lfd     f2, -11728(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031ABC4u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11728);
        ctx->fpr[2] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8031ABC8:
    ctx->pc = 0x8031ABC8u;
    // 8031ABC8: lwz     r4, 292(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(292);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031ABCC:
    ctx->pc = 0x8031ABCCu;
    // 8031ABCC: lwz     r5, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8031ABD0:
    // 8031ABD0: xoris   r3, r4, 0x8000
    ctx->gpr[3] = ctx->gpr[4] ^ (0x8000u << 16);

label_8031ABD4:
    ctx->pc = 0x8031ABD4u;
    // 8031ABD4: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031ABD8:
    ctx->pc = 0x8031ABD8u;
    // 8031ABD8: lwz     r4, 44(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031ABDC:
    ctx->pc = 0x8031ABDCu;
    // 8031ABDC: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031ABE0:
    ctx->pc = 0x8031ABE0u;
    // 8031ABE0: lwz     r3, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031ABE4:
    ctx->pc = 0x8031ABE4u;
    // 8031ABE4: lfd     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8031ABE4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->fpr[1] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8031ABE8:
    ctx->pc = 0x8031ABE8u;
    // 8031ABE8: stw     r4, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031ABEC:
    ctx->pc = 0x8031ABECu;
    // 8031ABEC: lwz     r0, 52(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031ABF0:
    ctx->pc = 0x8031ABF0u;
    // 8031ABF0: fsubs   f2, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8031ABF0u)) return;
    ppc_fsubs(ctx, 2, 1, 2);

label_8031ABF4:
    ctx->pc = 0x8031ABF4u;
    // 8031ABF4: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8031ABF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8031ABF8:
    ctx->pc = 0x8031ABF8u;
    // 8031ABF8: lfs     f1, -11736(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031ABF8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11736);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8031ABFC:
    ctx->pc = 0x8031ABFCu;
    // 8031ABFC: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031AC00:
    ctx->pc = 0x8031AC00u;
    // 8031AC00: fmuls   f1, f1, f2
    if (!ppc_fp_available_inline(ctx, 0x8031AC00u)) return;
    ppc_fmuls(ctx, 1, 1, 2);

label_8031AC04:
    ctx->pc = 0x8031AC04u;
    // 8031AC04: stfs     f0, 44(r5)
    if (!ppc_fp_available_inline(ctx, 0x8031AC04u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8031AC08:
    ctx->pc = 0x8031AC08u;
    // 8031AC08: lfs     f0, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8031AC08u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8031AC0C:
    ctx->pc = 0x8031AC0Cu;
    // 8031AC0C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AC10:
    ctx->pc = 0x8031AC10u;
    // 8031AC10: stfs     f0, 48(r5)
    if (!ppc_fp_available_inline(ctx, 0x8031AC10u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8031AC14:
    ctx->pc = 0x8031AC14u;
    // 8031AC14: stfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x8031AC14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8031AC18:
    ctx->pc = 0x8031AC18u;
    // 8031AC18: stfs     f1, 52(r5)
    if (!ppc_fp_available_inline(ctx, 0x8031AC18u)) return;
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_8031AC1C:
    // 8031AC1C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031AC20:
    ctx->pc = 0x8031AC20u;
    // 8031AC20: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AC24:
    ctx->pc = 0x8031AC24u;
    ctx->downcount -= 6;
    // 8031AC24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AC28:
    ctx->pc = 0x8031AC28u;
    // 8031AC28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AC2C:
    // 8031AC2C: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8031AC30:
    // 8031AC30: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AC34:
    ctx->pc = 0x8031AC34u;
    // 8031AC34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AC38:
    // 8031AC38: bl      0x8026F5F4
    {
            ctx->lr = 0x8031AC3Cu;
            ctx->pc = 0x8026F5F4u;
            return;
    }

label_8031AC3C:
    ctx->downcount -= 4;
    // 8031AC3C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8031AC40:
    // 8031AC40: slw   r4, r0, r3
    {
        u32 sh = ctx->gpr[3] & 0x3Fu;
        ctx->gpr[4] = sh > 31 ? 0u : (ctx->gpr[0] << sh);
    }

label_8031AC44:
    // 8031AC44: li      r3, 98
    ctx->gpr[3] = (u32)(s32)(98);

label_8031AC48:
    // 8031AC48: bl      0x802B735C
    {
            ctx->lr = 0x8031AC4Cu;
            ctx->pc = 0x802B735Cu;
            return;
    }

label_8031AC4C:
    ctx->pc = 0x8031AC4Cu;
    ctx->downcount -= 5;
    // 8031AC4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AC50:
    ctx->pc = 0x8031AC50u;
    // 8031AC50: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AC54:
    // 8031AC54: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AC58:
    ctx->pc = 0x8031AC58u;
    // 8031AC58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AC5C:
    ctx->pc = 0x8031AC5Cu;
    ctx->downcount -= 4;
    // 8031AC5C: lfs     f2, -11720(r2)
    if (!ppc_fp_available_inline(ctx, 0x8031AC5Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(-11720);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8031AC60:
    // 8031AC60: li      r3, 118
    ctx->gpr[3] = (u32)(s32)(118);

label_8031AC64:
    // 8031AC64: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AC68:
    // 8031AC68: b       0x802B72E0
    {
            ctx->pc = 0x802B72E0u;
            return;
    }

label_8031AC6C:
    ctx->downcount -= 1;
    // 8031AC6C: b       0x8031ABBC
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031ABBCu;
                return;
            }
            goto label_8031ABBC;
    }

label_8031AC70:
    ctx->pc = 0x8031AC70u;
    ctx->downcount -= 9;
    // 8031AC70: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AC74:
    ctx->pc = 0x8031AC74u;
    // 8031AC74: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AC78:
    // 8031AC78: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AC7C:
    // 8031AC7C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031AC80:
    ctx->pc = 0x8031AC80u;
    // 8031AC80: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AC84:
    ctx->pc = 0x8031AC84u;
    // 8031AC84: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031AC88:
    // 8031AC88: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AC8C:
    // 8031AC8C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AC90:
    // 8031AC90: bl      0x8026FEF0
    {
            ctx->lr = 0x8031AC94u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8031AC94:
    ctx->downcount -= 3;
    // 8031AC94: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8031AC98:
    // 8031AC98: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AC9C:
    // 8031AC9C: bl      0x8026F6AC
    {
            ctx->lr = 0x8031ACA0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031ACA0:
    ctx->downcount -= 1;
    // 8031ACA0: bl      0x8025EC94
    {
            ctx->lr = 0x8031ACA4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_8031ACA4:
    ctx->downcount -= 4;
    // 8031ACA4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8031ACA8:
    // 8031ACA8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031ACAC:
    // 8031ACAC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8031ACB0:
    // 8031ACB0: bl      0x8026FEF0
    {
            ctx->lr = 0x8031ACB4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8031ACB4:
    ctx->downcount -= 3;
    // 8031ACB4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8031ACB8:
    // 8031ACB8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031ACBC:
    // 8031ACBC: bl      0x8026F6AC
    {
            ctx->lr = 0x8031ACC0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8031ACC0:
    ctx->downcount -= 1;
    // 8031ACC0: bl      0x8025EC94
    {
            ctx->lr = 0x8031ACC4u;
            ctx->pc = 0x8025EC94u;
            return;
    }

label_8031ACC4:
    ctx->pc = 0x8031ACC4u;
    ctx->downcount -= 6;
    // 8031ACC4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031ACC8:
    ctx->pc = 0x8031ACC8u;
    // 8031ACC8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031ACCC:
    ctx->pc = 0x8031ACCCu;
    // 8031ACCC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031ACD0:
    // 8031ACD0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031ACD4:
    ctx->pc = 0x8031ACD4u;
    // 8031ACD4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031ACD8:
    ctx->pc = 0x8031ACD8u;
    ctx->downcount -= 22;
    // 8031ACD8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031ACDC:
    ctx->pc = 0x8031ACDCu;
    // 8031ACDC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031ACE0:
    // 8031ACE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031ACE4:
    // 8031ACE4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8031ACE8:
    ctx->pc = 0x8031ACE8u;
    // 8031ACE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031ACEC:
    ctx->pc = 0x8031ACECu;
    // 8031ACEC: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031ACF0:
    // 8031ACF0: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031ACF4:
    // 8031ACF4: addi    r5, r31, 22688
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(22688);

label_8031ACF8:
    // 8031ACF8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031ACFC:
    // 8031ACFC: addi    r6, r5, 10
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(10);

label_8031AD00:
    // 8031AD00: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AD04:
    // 8031AD04: bl      0x8027035C
    {
            ctx->lr = 0x8031AD08u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8031AD08:
    ctx->downcount -= 7;
    // 8031AD08: addi    r6, r31, 22688
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(22688);

label_8031AD0C:
    // 8031AD0C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031AD10:
    // 8031AD10: addi    r5, r6, 19
    ctx->gpr[5] = ctx->gpr[6] + (u32)(s32)(19);

label_8031AD14:
    // 8031AD14: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031AD18:
    // 8031AD18: addi    r6, r6, 25
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(25);

label_8031AD1C:
    // 8031AD1C: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8031AD20:
    // 8031AD20: bl      0x8027035C
    {
            ctx->lr = 0x8031AD24u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_8031AD24:
    ctx->pc = 0x8031AD24u;
    ctx->downcount -= 16;
    // 8031AD24: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AD28:
    ctx->pc = 0x8031AD28u;
    // 8031AD28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AD2C:
    ctx->pc = 0x8031AD2Cu;
    // 8031AD2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AD30:
    // 8031AD30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AD34:
    ctx->pc = 0x8031AD34u;
    // 8031AD34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AD38:
    ctx->pc = 0x8031AD38u;
    ctx->downcount -= 17;
    // 8031AD38: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AD3C:
    ctx->pc = 0x8031AD3Cu;
    // 8031AD3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AD40:
    ctx->pc = 0x8031AD40u;
    // 8031AD40: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AD44:
    ctx->pc = 0x8031AD44u;
    // 8031AD44: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031AD48:
    // 8031AD48: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AD4C:
    // 8031AD4C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8031AD50:
    // 8031AD50: bl      0x8026F6CC
    {
            ctx->lr = 0x8031AD54u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8031AD54:
    ctx->downcount -= 2;
    // 8031AD54: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031AD58:
    // 8031AD58: bl      0x8025CE30
    {
            ctx->lr = 0x8031AD5Cu;
            ctx->pc = 0x8025CE30u;
            return;
    }

label_8031AD5C:
    ctx->downcount -= 5;
    // 8031AD5C: lis     r31, -32665
    ctx->gpr[31] = ((u32)(s32)(-32665) << 16);

label_8031AD60:
    // 8031AD60: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031AD64:
    // 8031AD64: addi    r31, r31, 22688
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(22688);

label_8031AD68:
    // 8031AD68: addi    r4, r31, 36
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(36);

label_8031AD6C:
    // 8031AD6C: bl      0x8026F970
    {
            ctx->lr = 0x8031AD70u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031AD70:
    ctx->pc = 0x8031AD70u;
    ctx->downcount -= 4;
    // 8031AD70: stw     r3, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8031AD74:
    // 8031AD74: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_8031AD78:
    // 8031AD78: addi    r4, r31, 48
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(48);

label_8031AD7C:
    // 8031AD7C: bl      0x8026F970
    {
            ctx->lr = 0x8031AD80u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8031AD80:
    ctx->pc = 0x8031AD80u;
    ctx->downcount -= 19;
    // 8031AD80: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031AD84:
    // 8031AD84: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8031AD88:
    ctx->pc = 0x8031AD88u;
    // 8031AD88: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8031AD8C:
    ctx->pc = 0x8031AD8Cu;
    // 8031AD8C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AD90:
    ctx->pc = 0x8031AD90u;
    // 8031AD90: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AD94:
    ctx->pc = 0x8031AD94u;
    // 8031AD94: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AD98:
    // 8031AD98: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AD9C:
    ctx->pc = 0x8031AD9Cu;
    // 8031AD9C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031ADA0:
    ctx->pc = 0x8031ADA0u;
    ctx->downcount -= 22;
    // 8031ADA0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031ADA4:
    ctx->pc = 0x8031ADA4u;
    // 8031ADA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031ADA8:
    // 8031ADA8: lis     r5, -32665
    ctx->gpr[5] = ((u32)(s32)(-32665) << 16);

label_8031ADAC:
    // 8031ADAC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031ADB0:
    ctx->pc = 0x8031ADB0u;
    // 8031ADB0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031ADB4:
    // 8031ADB4: addi    r5, r5, 22688
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22688);

label_8031ADB8:
    ctx->pc = 0x8031ADB8u;
    // 8031ADB8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031ADBC:
    // 8031ADBC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031ADC0:
    // 8031ADC0: addi    r4, r5, 57
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(57);

label_8031ADC4:
    // 8031ADC4: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031ADC8:
    // 8031ADC8: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8031ADCC:
    // 8031ADCC: bl      0x80301648
    {
            ctx->lr = 0x8031ADD0u;
            ctx->pc = 0x80301648u;
            return;
    }

label_8031ADD0:
    ctx->downcount -= 29;
    // 8031ADD0: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8031ADD4:
    // 8031ADD4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8031ADD8:
    // 8031ADD8: addi    r4, r4, -20608
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-20608);

label_8031ADDC:
    ctx->pc = 0x8031ADDCu;
    // 8031ADDC: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031ADE0:
    // 8031ADE0: addi    r6, r4, 8
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(8);

label_8031ADE4:
    // 8031ADE4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031ADE8:
    // 8031ADE8: addi    r5, r4, 120
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(120);

label_8031ADEC:
    // 8031ADEC: addi    r4, r4, 136
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(136);

label_8031ADF0:
    ctx->pc = 0x8031ADF0u;
    // 8031ADF0: stw     r6, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8031ADF4:
    ctx->pc = 0x8031ADF4u;
    // 8031ADF4: stw     r5, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8031ADF8:
    ctx->pc = 0x8031ADF8u;
    // 8031ADF8: stw     r4, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8031ADFC:
    ctx->pc = 0x8031ADFCu;
    // 8031ADFC: stw     r31, 292(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031AE00:
    ctx->pc = 0x8031AE00u;
    // 8031AE00: stw     r0, 288(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(288);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AE04:
    ctx->pc = 0x8031AE04u;
    // 8031AE04: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AE08:
    ctx->pc = 0x8031AE08u;
    // 8031AE08: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AE0C:
    ctx->pc = 0x8031AE0Cu;
    // 8031AE0C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AE10:
    // 8031AE10: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AE14:
    ctx->pc = 0x8031AE14u;
    // 8031AE14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AE18:
    ctx->pc = 0x8031AE18u;
    ctx->downcount -= 18;
    // 8031AE18: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AE1C:
    ctx->pc = 0x8031AE1Cu;
    // 8031AE1C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AE20:
    // 8031AE20: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031AE24:
    ctx->pc = 0x8031AE24u;
    // 8031AE24: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AE28:
    ctx->pc = 0x8031AE28u;
    // 8031AE28: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031AE2C:
    // 8031AE2C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AE30:
    // 8031AE30: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8031AE34:
    // 8031AE34: bc    12, 2, 0x8031AE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AE54;
        }
    }

label_8031AE38:
    ctx->downcount -= 1;
    // 8031AE38: bc    12, 2, 0x8031AE44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AE44;
        }
    }

label_8031AE3C:
    ctx->downcount -= 2;
    // 8031AE3C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031AE40:
    // 8031AE40: bl      0x802C6030
    {
            ctx->lr = 0x8031AE44u;
            ctx->pc = 0x802C6030u;
            return;
    }

label_8031AE44:
    ctx->downcount -= 2;
    // 8031AE44: cmpwi   r31, 0
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

label_8031AE48:
    // 8031AE48: bc    4, 1, 0x8031AE54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031AE54;
        }
    }

label_8031AE4C:
    ctx->downcount -= 2;
    // 8031AE4C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AE50:
    // 8031AE50: bl      0x801C1C90
    {
            ctx->lr = 0x8031AE54u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_8031AE54:
    ctx->downcount -= 17;
    // 8031AE54: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8031AE58:
    ctx->pc = 0x8031AE58u;
    // 8031AE58: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AE5C:
    ctx->pc = 0x8031AE5Cu;
    // 8031AE5C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AE60:
    ctx->pc = 0x8031AE60u;
    // 8031AE60: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AE64:
    // 8031AE64: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AE68:
    ctx->pc = 0x8031AE68u;
    // 8031AE68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AE6C:
    ctx->downcount -= 2;
    // 8031AE6C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_8031AE70:
    // 8031AE70: b       0x8031AE18
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AE18u;
                return;
            }
            goto label_8031AE18;
    }

label_8031AE74:
    ctx->downcount -= 2;
    // 8031AE74: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AE78:
    // 8031AE78: b       0x8031AC24
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AC24u;
                return;
            }
            goto label_8031AC24;
    }

label_8031AE7C:
    ctx->downcount -= 2;
    // 8031AE7C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AE80:
    // 8031AE80: b       0x8031AC5C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AC5Cu;
                return;
            }
            goto label_8031AC5C;
    }

label_8031AE84:
    ctx->downcount -= 2;
    // 8031AE84: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AE88:
    // 8031AE88: b       0x8031AC6C
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AC6Cu;
                return;
            }
            goto label_8031AC6C;
    }

label_8031AE8C:
    ctx->downcount -= 2;
    // 8031AE8C: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8031AE90:
    // 8031AE90: b       0x8031AE18
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AE18u;
                return;
            }
            goto label_8031AE18;
    }

label_8031AE94:
    ctx->pc = 0x8031AE94u;
    ctx->downcount -= 21;
    // 8031AE94: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AE98:
    ctx->pc = 0x8031AE98u;
    // 8031AE98: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AE9C:
    ctx->pc = 0x8031AE9Cu;
    // 8031AE9C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AEA0:
    ctx->pc = 0x8031AEA0u;
    // 8031AEA0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031AEA4:
    ctx->pc = 0x8031AEA4u;
    // 8031AEA4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AEA8:
    ctx->pc = 0x8031AEA8u;
    // 8031AEA8: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AEAC:
    ctx->pc = 0x8031AEACu;
    // 8031AEAC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AEB0:
    ctx->pc = 0x8031AEB0u;
    // 8031AEB0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AEB4:
    ctx->pc = 0x8031AEB4u;
    // 8031AEB4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AEB8:
    ctx->pc = 0x8031AEB8u;
    // 8031AEB8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AEBCu;
            ctx->pc = target;
            return;
        }
    }

label_8031AEBC:
    ctx->pc = 0x8031AEBCu;
    ctx->downcount -= 2;
    // 8031AEBC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031AEC0:
    ctx->pc = 0x8031AEC0u;
    // 8031AEC0: bc    12, 2, 0x8031AF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AF44;
        }
    }

label_8031AEC4:
    ctx->pc = 0x8031AEC4u;
    ctx->downcount -= 6;
    // 8031AEC4: lwz     r3, 156(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AEC8:
    ctx->pc = 0x8031AEC8u;
    // 8031AEC8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AECC:
    ctx->pc = 0x8031AECCu;
    // 8031AECC: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AED0:
    ctx->pc = 0x8031AED0u;
    // 8031AED0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AED4:
    ctx->pc = 0x8031AED4u;
    // 8031AED4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AED8u;
            ctx->pc = target;
            return;
        }
    }

label_8031AED8:
    ctx->pc = 0x8031AED8u;
    ctx->downcount -= 2;
    // 8031AED8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031AEDC:
    ctx->pc = 0x8031AEDCu;
    // 8031AEDC: bc    12, 2, 0x8031AF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AF44;
        }
    }

label_8031AEE0:
    ctx->pc = 0x8031AEE0u;
    ctx->downcount -= 6;
    // 8031AEE0: lwz     r3, 172(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AEE4:
    ctx->pc = 0x8031AEE4u;
    // 8031AEE4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AEE8:
    ctx->pc = 0x8031AEE8u;
    // 8031AEE8: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AEEC:
    ctx->pc = 0x8031AEECu;
    // 8031AEEC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AEF0:
    ctx->pc = 0x8031AEF0u;
    // 8031AEF0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AEF4u;
            ctx->pc = target;
            return;
        }
    }

label_8031AEF4:
    ctx->pc = 0x8031AEF4u;
    ctx->downcount -= 2;
    // 8031AEF4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8031AEF8:
    ctx->pc = 0x8031AEF8u;
    // 8031AEF8: bc    12, 2, 0x8031AF44
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031AF44;
        }
    }

label_8031AEFC:
    ctx->pc = 0x8031AEFCu;
    ctx->downcount -= 3;
    // 8031AEFC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8031AF00:
    ctx->pc = 0x8031AF00u;
    // 8031AF00: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8031AF04:
    ctx->pc = 0x8031AF04u;
    // 8031AF04: b       0x8031AF1C
    {
            goto label_8031AF1C;
    }

label_8031AF08:
    ctx->downcount -= 3;
    // 8031AF08: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8031AF0C:
    ctx->pc = 0x8031AF0Cu;
    // 8031AF0C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AF10:
    // 8031AF10: bl      0x8036B2DC
    {
            ctx->lr = 0x8031AF14u;
            ctx->pc = 0x8036B2DCu;
            return;
    }

label_8031AF14:
    ctx->downcount -= 2;
    // 8031AF14: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_8031AF18:
    // 8031AF18: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8031AF1C:
    ctx->pc = 0x8031AF1Cu;
    ctx->downcount -= 3;
    // 8031AF1C: lwz     r0, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AF20:
    // 8031AF20: cmpw    r30, r0
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

label_8031AF24:
    // 8031AF24: bc    12, 0, 0x8031AF08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031AF08u;
                return;
            }
            goto label_8031AF08;
        }
    }

label_8031AF28:
    ctx->pc = 0x8031AF28u;
    ctx->downcount -= 2;
    // 8031AF28: lwz     r3, 176(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AF2C:
    ctx->pc = 0x8031AF2Cu;
    // 8031AF2C: bl      0x8026EEE8
    {
            ctx->lr = 0x8031AF30u;
            ctx->pc = 0x8026EEE8u;
            return;
    }

label_8031AF30:
    ctx->pc = 0x8031AF30u;
    ctx->downcount -= 6;
    // 8031AF30: lwz     r12, 48(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AF34:
    ctx->pc = 0x8031AF34u;
    // 8031AF34: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8031AF38:
    ctx->pc = 0x8031AF38u;
    // 8031AF38: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AF3C:
    ctx->pc = 0x8031AF3Cu;
    // 8031AF3C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AF40:
    ctx->pc = 0x8031AF40u;
    // 8031AF40: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AF44u;
            ctx->pc = target;
            return;
        }
    }

label_8031AF44:
    ctx->pc = 0x8031AF44u;
    ctx->downcount -= 6;
    // 8031AF44: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AF48:
    ctx->pc = 0x8031AF48u;
    // 8031AF48: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8031AF4C:
    ctx->pc = 0x8031AF4Cu;
    // 8031AF4C: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8031AF50:
    ctx->pc = 0x8031AF50u;
    // 8031AF50: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8031AF54:
    ctx->pc = 0x8031AF54u;
    // 8031AF54: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8031AF58:
    ctx->pc = 0x8031AF58u;
    // 8031AF58: bl      0x80370BD4
    {
            ctx->lr = 0x8031AF5Cu;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8031AF5C:
    ctx->pc = 0x8031AF5Cu;
    ctx->downcount -= 3;
    // 8031AF5C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AF60:
    ctx->pc = 0x8031AF60u;
    // 8031AF60: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8031AF64:
    ctx->pc = 0x8031AF64u;
    // 8031AF64: bl      0x80263ABC
    {
            ctx->lr = 0x8031AF68u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8031AF68:
    ctx->pc = 0x8031AF68u;
    ctx->downcount -= 16;
    // 8031AF68: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031AF6C:
    ctx->pc = 0x8031AF6Cu;
    // 8031AF6C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AF70:
    ctx->pc = 0x8031AF70u;
    // 8031AF70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AF74:
    ctx->pc = 0x8031AF74u;
    // 8031AF74: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031AF78:
    ctx->pc = 0x8031AF78u;
    // 8031AF78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AF7C:
    ctx->pc = 0x8031AF7Cu;
    ctx->downcount -= 11;
    // 8031AF7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AF80:
    ctx->pc = 0x8031AF80u;
    // 8031AF80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AF84:
    ctx->pc = 0x8031AF84u;
    // 8031AF84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AF88:
    ctx->pc = 0x8031AF88u;
    // 8031AF88: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031AF8C:
    ctx->pc = 0x8031AF8Cu;
    // 8031AF8C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AF90:
    ctx->pc = 0x8031AF90u;
    // 8031AF90: lwz     r3, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AF94:
    ctx->pc = 0x8031AF94u;
    // 8031AF94: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AF98:
    ctx->pc = 0x8031AF98u;
    // 8031AF98: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AF9C:
    ctx->pc = 0x8031AF9Cu;
    // 8031AF9C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AFA0:
    ctx->pc = 0x8031AFA0u;
    // 8031AFA0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AFA4u;
            ctx->pc = target;
            return;
        }
    }

label_8031AFA4:
    ctx->pc = 0x8031AFA4u;
    ctx->downcount -= 6;
    // 8031AFA4: lwz     r3, 156(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(156);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AFA8:
    ctx->pc = 0x8031AFA8u;
    // 8031AFA8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AFAC:
    ctx->pc = 0x8031AFACu;
    // 8031AFAC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AFB0:
    ctx->pc = 0x8031AFB0u;
    // 8031AFB0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AFB4:
    ctx->pc = 0x8031AFB4u;
    // 8031AFB4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AFB8u;
            ctx->pc = target;
            return;
        }
    }

label_8031AFB8:
    ctx->pc = 0x8031AFB8u;
    ctx->downcount -= 6;
    // 8031AFB8: lwz     r3, 172(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(172);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031AFBC:
    ctx->pc = 0x8031AFBCu;
    // 8031AFBC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AFC0:
    ctx->pc = 0x8031AFC0u;
    // 8031AFC0: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031AFC4:
    ctx->pc = 0x8031AFC4u;
    // 8031AFC4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031AFC8:
    ctx->pc = 0x8031AFC8u;
    // 8031AFC8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031AFCCu;
            ctx->pc = target;
            return;
        }
    }

label_8031AFCC:
    ctx->pc = 0x8031AFCCu;
    ctx->downcount -= 6;
    // 8031AFCC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031AFD0:
    ctx->pc = 0x8031AFD0u;
    // 8031AFD0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031AFD4:
    ctx->pc = 0x8031AFD4u;
    // 8031AFD4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031AFD8:
    ctx->pc = 0x8031AFD8u;
    // 8031AFD8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031AFDC:
    ctx->pc = 0x8031AFDCu;
    // 8031AFDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031AFE0:
    ctx->pc = 0x8031AFE0u;
    ctx->downcount -= 19;
    // 8031AFE0: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031AFE4:
    ctx->pc = 0x8031AFE4u;
    // 8031AFE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031AFE8:
    ctx->pc = 0x8031AFE8u;
    // 8031AFE8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031AFEC:
    ctx->pc = 0x8031AFECu;
    // 8031AFEC: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8031AFF0:
    ctx->pc = 0x8031AFF0u;
    // 8031AFF0: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031AFF4:
    ctx->pc = 0x8031AFF4u;
    // 8031AFF4: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031AFF8:
    ctx->pc = 0x8031AFF8u;
    // 8031AFF8: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031AFFC:
    ctx->pc = 0x8031AFFCu;
    // 8031AFFC: cmpwi   r0, 0
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

label_8031B000:
    ctx->pc = 0x8031B000u;
    // 8031B000: bc    12, 2, 0x8031B01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B01C;
        }
    }

label_8031B004:
    ctx->pc = 0x8031B004u;
    ctx->downcount -= 3;
    // 8031B004: lbz     r0, 211(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B008:
    ctx->pc = 0x8031B008u;
    // 8031B008: cmpwi   r0, 0
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

label_8031B00C:
    ctx->pc = 0x8031B00Cu;
    // 8031B00C: bc    12, 2, 0x8031B01C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B01C;
        }
    }

label_8031B010:
    ctx->pc = 0x8031B010u;
    ctx->downcount -= 3;
    // 8031B010: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8031B014:
    ctx->pc = 0x8031B014u;
    // 8031B014: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_8031B018:
    ctx->pc = 0x8031B018u;
    // 8031B018: bl      0x803457B8
    {
            ctx->lr = 0x8031B01Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8031B01C:
    ctx->pc = 0x8031B01Cu;
    ctx->downcount -= 4;
    // 8031B01C: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8031B020:
    ctx->pc = 0x8031B020u;
    // 8031B020: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8031B024:
    ctx->pc = 0x8031B024u;
    // 8031B024: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_8031B028:
    ctx->pc = 0x8031B028u;
    // 8031B028: b       0x8031B094
    {
            goto label_8031B094;
    }

label_8031B02C:
    ctx->downcount -= 5;
    // 8031B02C: add   r3, r28, r31
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8031B030:
    ctx->pc = 0x8031B030u;
    // 8031B030: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B034:
    ctx->pc = 0x8031B034u;
    // 8031B034: lbz     r0, 209(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B038:
    // 8031B038: cmpwi   r0, 0
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

label_8031B03C:
    // 8031B03C: bc    12, 2, 0x8031B08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B08C;
        }
    }

label_8031B040:
    ctx->pc = 0x8031B040u;
    ctx->downcount -= 3;
    // 8031B040: lbz     r0, 211(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(211);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B044:
    // 8031B044: cmpwi   r0, 0
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

label_8031B048:
    // 8031B048: bc    12, 2, 0x8031B08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B08C;
        }
    }

label_8031B04C:
    ctx->pc = 0x8031B04Cu;
    ctx->downcount -= 3;
    // 8031B04C: lwz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031B050:
    // 8031B050: cmpwi   r0, 2
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

label_8031B054:
    // 8031B054: bc    12, 2, 0x8031B070
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B070;
        }
    }

label_8031B058:
    ctx->pc = 0x8031B058u;
    ctx->downcount -= 5;
    // 8031B058: stw     r30, 220(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_8031B05C:
    // 8031B05C: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8031B060:
    // 8031B060: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8031B064:
    ctx->pc = 0x8031B064u;
    // 8031B064: stw     r29, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8031B068:
    // 8031B068: bl      0x803457B8
    {
            ctx->lr = 0x8031B06Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8031B06C:
    ctx->downcount -= 1;
    // 8031B06C: b       0x8031B08C
    {
            goto label_8031B08C;
    }

label_8031B070:
    ctx->pc = 0x8031B070u;
    ctx->downcount -= 5;
    // 8031B070: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031B074:
    ctx->pc = 0x8031B074u;
    // 8031B074: lwz     r12, 252(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(252);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8031B078:
    ctx->pc = 0x8031B078u;
    // 8031B078: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8031B07C:
    ctx->pc = 0x8031B07Cu;
    // 8031B07C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8031B080u;
            ctx->pc = target;
            return;
        }
    }

label_8031B080:
    ctx->downcount -= 3;
    // 8031B080: addi    r3, r28, 100
    ctx->gpr[3] = ctx->gpr[28] + (u32)(s32)(100);

label_8031B084:
    // 8031B084: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8031B088:
    // 8031B088: bl      0x803457B8
    {
            ctx->lr = 0x8031B08Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8031B08C:
    ctx->downcount -= 2;
    // 8031B08C: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8031B090:
    // 8031B090: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_8031B094:
    ctx->pc = 0x8031B094u;
    ctx->downcount -= 3;
    // 8031B094: lwz     r0, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031B098:
    // 8031B098: cmpw    r29, r0
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

label_8031B09C:
    // 8031B09C: bc    12, 0, 0x8031B02C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031B02Cu;
                return;
            }
            goto label_8031B02C;
        }
    }

label_8031B0A0:
    ctx->pc = 0x8031B0A0u;
    ctx->downcount -= 6;
    // 8031B0A0: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B0A4:
    ctx->pc = 0x8031B0A4u;
    // 8031B0A4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8031B0A8:
    ctx->pc = 0x8031B0A8u;
    // 8031B0A8: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8031B0AC:
    ctx->pc = 0x8031B0ACu;
    // 8031B0AC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8031B0B0:
    ctx->pc = 0x8031B0B0u;
    // 8031B0B0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8031B0B4:
    ctx->pc = 0x8031B0B4u;
    // 8031B0B4: bl      0x80370BD4
    {
            ctx->lr = 0x8031B0B8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8031B0B8:
    ctx->pc = 0x8031B0B8u;
    ctx->downcount -= 3;
    // 8031B0B8: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B0BC:
    ctx->pc = 0x8031B0BCu;
    // 8031B0BC: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8031B0C0:
    ctx->pc = 0x8031B0C0u;
    // 8031B0C0: bl      0x80263ABC
    {
            ctx->lr = 0x8031B0C4u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8031B0C4:
    ctx->pc = 0x8031B0C4u;
    ctx->downcount -= 16;
    // 8031B0C4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8031B0C8:
    ctx->pc = 0x8031B0C8u;
    // 8031B0C8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031B0CC:
    ctx->pc = 0x8031B0CCu;
    // 8031B0CC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031B0D0:
    ctx->pc = 0x8031B0D0u;
    // 8031B0D0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8031B0D4:
    ctx->pc = 0x8031B0D4u;
    // 8031B0D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031B0D8:
    ctx->pc = 0x8031B0D8u;
    ctx->downcount -= 1;
    // 8031B0D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031B0DC:
    ctx->pc = 0x8031B0DCu;
    ctx->downcount -= 10;
    // 8031B0DC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031B0E0:
    ctx->pc = 0x8031B0E0u;
    // 8031B0E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031B0E4:
    ctx->pc = 0x8031B0E4u;
    // 8031B0E4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8031B0E8:
    ctx->pc = 0x8031B0E8u;
    // 8031B0E8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031B0EC:
    ctx->pc = 0x8031B0ECu;
    // 8031B0EC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8031B0F0:
    ctx->pc = 0x8031B0F0u;
    // 8031B0F0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8031B0F4:
    ctx->pc = 0x8031B0F4u;
    // 8031B0F4: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031B0F8:
    ctx->pc = 0x8031B0F8u;
    // 8031B0F8: lbz     r0, 209(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B0FC:
    ctx->pc = 0x8031B0FCu;
    // 8031B0FC: cmpwi   r0, 0
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

label_8031B100:
    ctx->pc = 0x8031B100u;
    // 8031B100: bc    12, 2, 0x8031B110
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B110;
        }
    }

label_8031B104:
    ctx->pc = 0x8031B104u;
    ctx->downcount -= 3;
    // 8031B104: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_8031B108:
    ctx->pc = 0x8031B108u;
    // 8031B108: stw     r0, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031B10C:
    ctx->pc = 0x8031B10Cu;
    // 8031B10C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031B110:
    ctx->pc = 0x8031B110u;
    ctx->downcount -= 6;
    // 8031B110: lwz     r0, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031B114:
    ctx->pc = 0x8031B114u;
    // 8031B114: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8031B118:
    ctx->pc = 0x8031B118u;
    // 8031B118: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_8031B11C:
    ctx->pc = 0x8031B11Cu;
    // 8031B11C: cmpwi   r0, 0
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

label_8031B120:
    ctx->pc = 0x8031B120u;
    // 8031B120: bc    4, 1, 0x8031B144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8031B144;
        }
    }

label_8031B124:
    ctx->downcount -= 5;
    // 8031B124: add   r5, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_8031B128:
    ctx->pc = 0x8031B128u;
    // 8031B128: lwz     r5, 184(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8031B12C:
    ctx->pc = 0x8031B12Cu;
    // 8031B12C: lbz     r0, 209(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(209);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B130:
    // 8031B130: cmpwi   r0, 0
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

label_8031B134:
    // 8031B134: bc    12, 2, 0x8031B13C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B13C;
        }
    }

label_8031B138:
    ctx->downcount -= 1;
    // 8031B138: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8031B13C:
    ctx->downcount -= 2;
    // 8031B13C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_8031B140:
    // 8031B140: bc    16, 0, 0x8031B124
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8031B124u;
                return;
            }
            goto label_8031B124;
        }
    }

label_8031B144:
    ctx->pc = 0x8031B144u;
    ctx->downcount -= 2;
    // 8031B144: cmpwi   r6, 0
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

label_8031B148:
    ctx->pc = 0x8031B148u;
    // 8031B148: bc    12, 2, 0x8031B17C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8031B17C;
        }
    }

label_8031B14C:
    ctx->pc = 0x8031B14Cu;
    ctx->downcount -= 6;
    // 8031B14C: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B150:
    ctx->pc = 0x8031B150u;
    // 8031B150: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8031B154:
    ctx->pc = 0x8031B154u;
    // 8031B154: addi    r4, r4, 22780
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22780);

label_8031B158:
    ctx->pc = 0x8031B158u;
    // 8031B158: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8031B15C:
    ctx->pc = 0x8031B15Cu;
    // 8031B15C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8031B160:
    ctx->pc = 0x8031B160u;
    // 8031B160: bl      0x80370BD4
    {
            ctx->lr = 0x8031B164u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8031B164:
    ctx->pc = 0x8031B164u;
    ctx->downcount -= 3;
    // 8031B164: lwz     r3, -13008(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13008);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B168:
    ctx->pc = 0x8031B168u;
    // 8031B168: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8031B16C:
    ctx->pc = 0x8031B16Cu;
    // 8031B16C: bl      0x80263ABC
    {
            ctx->lr = 0x8031B170u;
            ctx->pc = 0x80263ABCu;
            return;
    }

label_8031B170:
    ctx->pc = 0x8031B170u;
    ctx->downcount -= 3;
    // 8031B170: addi    r3, r31, 100
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(100);

label_8031B174:
    ctx->pc = 0x8031B174u;
    // 8031B174: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8031B178:
    ctx->pc = 0x8031B178u;
    // 8031B178: bl      0x803457B8
    {
            ctx->lr = 0x8031B17Cu;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8031B17C:
    ctx->pc = 0x8031B17Cu;
    ctx->downcount -= 2;
    // 8031B17C: lwz     r3, 176(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B180:
    ctx->pc = 0x8031B180u;
    // 8031B180: bl      0x8026EE88
    {
            ctx->lr = 0x8031B184u;
            ctx->pc = 0x8026EE88u;
            return;
    }

label_8031B184:
    ctx->pc = 0x8031B184u;
    ctx->downcount -= 6;
    // 8031B184: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8031B188:
    ctx->pc = 0x8031B188u;
    // 8031B188: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8031B18C:
    ctx->pc = 0x8031B18Cu;
    // 8031B18C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8031B190:
    ctx->pc = 0x8031B190u;
    // 8031B190: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8031B194:
    ctx->pc = 0x8031B194u;
    // 8031B194: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_803171C0;
        }
    }

label_8031B198:
    ctx->pc = 0x8031B198u;
    ctx->downcount -= 2;
    // 8031B198: lwz     r3, 176(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(176);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8031B19C:
    ctx->pc = 0x8031B19Cu;
    // 8031B19C: b       0x8026EF54
    {
            ctx->pc = 0x8026EF54u;
            return;
    }

label_8031B1A0:
    ctx->pc = 0x8031B1A0u;
    ctx->downcount -= 7;
    // 8031B1A0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8031B1A4:
    ctx->pc = 0x8031B1A4u;
    // 8031B1A4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8031B1A8:
    ctx->pc = 0x8031B1A8u;
    // 8031B1A8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8031B1AC:
    ctx->pc = 0x8031B1ACu;
    // 8031B1AC: lwz     r4, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8031B1B0:
    ctx->pc = 0x8031B1B0u;
    // 8031B1B0: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8031B1B4:
    ctx->pc = 0x8031B1B4u;
    // 8031B1B4: cmpwi   r0, 0
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

label_8031B1B8:
    ctx->pc = 0x8031B1B8u;
    // 8031B1B8: bc    12, 2, 0x8031B1E8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8031B1E8u;
            return;
        }
    }

label_8031B1BC:
    ctx->pc = 0x8031B1BCu;
    ctx->downcount -= 1;
    // 8031B1BC: lwz     r4, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x8031B1C0u;
    return;
return_dispatch_803171C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x80317200u: goto label_80317200;
    case 0x80317208u: goto label_80317208;
    case 0x80317250u: goto label_80317250;
    case 0x803172BCu: goto label_803172BC;
    case 0x803172CCu: goto label_803172CC;
    case 0x8031734Cu: goto label_8031734C;
    case 0x80317358u: goto label_80317358;
    case 0x8031738Cu: goto label_8031738C;
    case 0x803173C8u: goto label_803173C8;
    case 0x80317414u: goto label_80317414;
    case 0x80317420u: goto label_80317420;
    case 0x80317430u: goto label_80317430;
    case 0x8031748Cu: goto label_8031748C;
    case 0x803174F4u: goto label_803174F4;
    case 0x80317504u: goto label_80317504;
    case 0x80317550u: goto label_80317550;
    case 0x80317560u: goto label_80317560;
    case 0x803175F8u: goto label_803175F8;
    case 0x80317604u: goto label_80317604;
    case 0x80317674u: goto label_80317674;
    case 0x80317684u: goto label_80317684;
    case 0x803176ACu: goto label_803176AC;
    case 0x803176C8u: goto label_803176C8;
    case 0x803176E8u: goto label_803176E8;
    case 0x80317708u: goto label_80317708;
    case 0x80317740u: goto label_80317740;
    case 0x80317784u: goto label_80317784;
    case 0x803177C0u: goto label_803177C0;
    case 0x803177E0u: goto label_803177E0;
    case 0x803177F4u: goto label_803177F4;
    case 0x80317814u: goto label_80317814;
    case 0x80317854u: goto label_80317854;
    case 0x80317874u: goto label_80317874;
    case 0x80317898u: goto label_80317898;
    case 0x803178BCu: goto label_803178BC;
    case 0x80317920u: goto label_80317920;
    case 0x80317990u: goto label_80317990;
    case 0x803179A0u: goto label_803179A0;
    case 0x803179E0u: goto label_803179E0;
    case 0x803179F0u: goto label_803179F0;
    case 0x80317A24u: goto label_80317A24;
    case 0x80317A38u: goto label_80317A38;
    case 0x80317A84u: goto label_80317A84;
    case 0x80317AECu: goto label_80317AEC;
    case 0x80317AFCu: goto label_80317AFC;
    case 0x80317B6Cu: goto label_80317B6C;
    case 0x80317B9Cu: goto label_80317B9C;
    case 0x80317C0Cu: goto label_80317C0C;
    case 0x80317C40u: goto label_80317C40;
    case 0x80317C8Cu: goto label_80317C8C;
    case 0x80317C98u: goto label_80317C98;
    case 0x80317CA8u: goto label_80317CA8;
    case 0x80317D04u: goto label_80317D04;
    case 0x80317D24u: goto label_80317D24;
    case 0x80317D30u: goto label_80317D30;
    case 0x80317D5Cu: goto label_80317D5C;
    case 0x80317D6Cu: goto label_80317D6C;
    case 0x80317D94u: goto label_80317D94;
    case 0x80317DA4u: goto label_80317DA4;
    case 0x80317DF8u: goto label_80317DF8;
    case 0x80317E14u: goto label_80317E14;
    case 0x80317E2Cu: goto label_80317E2C;
    case 0x80317E44u: goto label_80317E44;
    case 0x80317E5Cu: goto label_80317E5C;
    case 0x80317E74u: goto label_80317E74;
    case 0x80317E8Cu: goto label_80317E8C;
    case 0x80317EB0u: goto label_80317EB0;
    case 0x80317EC0u: goto label_80317EC0;
    case 0x80317EECu: goto label_80317EEC;
    case 0x80317F34u: goto label_80317F34;
    case 0x80317F48u: goto label_80317F48;
    case 0x80317F50u: goto label_80317F50;
    case 0x80317F88u: goto label_80317F88;
    case 0x80317FC4u: goto label_80317FC4;
    case 0x8031801Cu: goto label_8031801C;
    case 0x80318028u: goto label_80318028;
    case 0x80318038u: goto label_80318038;
    case 0x80318094u: goto label_80318094;
    case 0x80318098u: goto label_80318098;
    case 0x803181A0u: goto label_803181A0;
    case 0x803181ACu: goto label_803181AC;
    case 0x803181D4u: goto label_803181D4;
    case 0x803181E0u: goto label_803181E0;
    case 0x803181E8u: goto label_803181E8;
    case 0x80318238u: goto label_80318238;
    case 0x80318254u: goto label_80318254;
    case 0x8031826Cu: goto label_8031826C;
    case 0x80318284u: goto label_80318284;
    case 0x80318294u: goto label_80318294;
    case 0x803182A0u: goto label_803182A0;
    case 0x803182B0u: goto label_803182B0;
    case 0x803182D4u: goto label_803182D4;
    case 0x803182E4u: goto label_803182E4;
    case 0x80318300u: goto label_80318300;
    case 0x8031830Cu: goto label_8031830C;
    case 0x80318370u: goto label_80318370;
    case 0x80318380u: goto label_80318380;
    case 0x8031838Cu: goto label_8031838C;
    case 0x803183C0u: goto label_803183C0;
    case 0x8031847Cu: goto label_8031847C;
    case 0x80318488u: goto label_80318488;
    case 0x80318498u: goto label_80318498;
    case 0x803184F0u: goto label_803184F0;
    case 0x80318500u: goto label_80318500;
    case 0x80318514u: goto label_80318514;
    case 0x8031852Cu: goto label_8031852C;
    case 0x80318540u: goto label_80318540;
    case 0x80318558u: goto label_80318558;
    case 0x80318570u: goto label_80318570;
    case 0x80318580u: goto label_80318580;
    case 0x80318594u: goto label_80318594;
    case 0x803185ACu: goto label_803185AC;
    case 0x803185B8u: goto label_803185B8;
    case 0x803185ECu: goto label_803185EC;
    case 0x803185F4u: goto label_803185F4;
    case 0x8031861Cu: goto label_8031861C;
    case 0x80318630u: goto label_80318630;
    case 0x8031867Cu: goto label_8031867C;
    case 0x80318690u: goto label_80318690;
    case 0x803186A0u: goto label_803186A0;
    case 0x803186FCu: goto label_803186FC;
    case 0x80318714u: goto label_80318714;
    case 0x8031872Cu: goto label_8031872C;
    case 0x8031874Cu: goto label_8031874C;
    case 0x80318754u: goto label_80318754;
    case 0x80318770u: goto label_80318770;
    case 0x803187C0u: goto label_803187C0;
    case 0x803187F4u: goto label_803187F4;
    case 0x80318808u: goto label_80318808;
    case 0x80318834u: goto label_80318834;
    case 0x80318840u: goto label_80318840;
    case 0x803188DCu: goto label_803188DC;
    case 0x803188E8u: goto label_803188E8;
    case 0x803188F4u: goto label_803188F4;
    case 0x80318900u: goto label_80318900;
    case 0x80318924u: goto label_80318924;
    case 0x8031892Cu: goto label_8031892C;
    case 0x80318978u: goto label_80318978;
    case 0x80318990u: goto label_80318990;
    case 0x8031899Cu: goto label_8031899C;
    case 0x803189D8u: goto label_803189D8;
    case 0x803189E8u: goto label_803189E8;
    case 0x803189F0u: goto label_803189F0;
    case 0x80318A0Cu: goto label_80318A0C;
    case 0x80318A34u: goto label_80318A34;
    case 0x80318A54u: goto label_80318A54;
    case 0x80318A78u: goto label_80318A78;
    case 0x80318A84u: goto label_80318A84;
    case 0x80318A98u: goto label_80318A98;
    case 0x80318AA4u: goto label_80318AA4;
    case 0x80318ABCu: goto label_80318ABC;
    case 0x80318AC8u: goto label_80318AC8;
    case 0x80318AE0u: goto label_80318AE0;
    case 0x80318B00u: goto label_80318B00;
    case 0x80318B18u: goto label_80318B18;
    case 0x80318B28u: goto label_80318B28;
    case 0x80318B34u: goto label_80318B34;
    case 0x80318B50u: goto label_80318B50;
    case 0x80318B58u: goto label_80318B58;
    case 0x80318B98u: goto label_80318B98;
    case 0x80318BF4u: goto label_80318BF4;
    case 0x80318C00u: goto label_80318C00;
    case 0x80318C20u: goto label_80318C20;
    case 0x80318C3Cu: goto label_80318C3C;
    case 0x80318C54u: goto label_80318C54;
    case 0x80318C90u: goto label_80318C90;
    case 0x80318CCCu: goto label_80318CCC;
    case 0x80318CD8u: goto label_80318CD8;
    case 0x80318CF8u: goto label_80318CF8;
    case 0x80318D1Cu: goto label_80318D1C;
    case 0x80318D28u: goto label_80318D28;
    case 0x80318D44u: goto label_80318D44;
    case 0x80318D6Cu: goto label_80318D6C;
    case 0x80318D78u: goto label_80318D78;
    case 0x80318D98u: goto label_80318D98;
    case 0x80318DBCu: goto label_80318DBC;
    case 0x80318DC8u: goto label_80318DC8;
    case 0x80318DE4u: goto label_80318DE4;
    case 0x80318E0Cu: goto label_80318E0C;
    case 0x80318E18u: goto label_80318E18;
    case 0x80318E34u: goto label_80318E34;
    case 0x80318E6Cu: goto label_80318E6C;
    case 0x80318E7Cu: goto label_80318E7C;
    case 0x80318EA0u: goto label_80318EA0;
    case 0x80318EB0u: goto label_80318EB0;
    case 0x80318ED8u: goto label_80318ED8;
    case 0x80318EE8u: goto label_80318EE8;
    case 0x80318F18u: goto label_80318F18;
    case 0x80318F28u: goto label_80318F28;
    case 0x80318F60u: goto label_80318F60;
    case 0x80318FA4u: goto label_80318FA4;
    case 0x80318FBCu: goto label_80318FBC;
    case 0x80318FD0u: goto label_80318FD0;
    case 0x80318FECu: goto label_80318FEC;
    case 0x80319008u: goto label_80319008;
    case 0x8031901Cu: goto label_8031901C;
    case 0x8031904Cu: goto label_8031904C;
    case 0x80319068u: goto label_80319068;
    case 0x8031907Cu: goto label_8031907C;
    case 0x803190A4u: goto label_803190A4;
    case 0x803190BCu: goto label_803190BC;
    case 0x803190D0u: goto label_803190D0;
    case 0x8031910Cu: goto label_8031910C;
    case 0x80319124u: goto label_80319124;
    case 0x80319134u: goto label_80319134;
    case 0x803192B8u: goto label_803192B8;
    case 0x803192D8u: goto label_803192D8;
    case 0x803192F8u: goto label_803192F8;
    case 0x80319318u: goto label_80319318;
    case 0x80319334u: goto label_80319334;
    case 0x80319340u: goto label_80319340;
    case 0x8031937Cu: goto label_8031937C;
    case 0x803193A4u: goto label_803193A4;
    case 0x803193B8u: goto label_803193B8;
    case 0x803193CCu: goto label_803193CC;
    case 0x803193E0u: goto label_803193E0;
    case 0x803193F4u: goto label_803193F4;
    case 0x803193FCu: goto label_803193FC;
    case 0x8031940Cu: goto label_8031940C;
    case 0x80319418u: goto label_80319418;
    case 0x80319428u: goto label_80319428;
    case 0x8031943Cu: goto label_8031943C;
    case 0x8031944Cu: goto label_8031944C;
    case 0x8031946Cu: goto label_8031946C;
    case 0x8031947Cu: goto label_8031947C;
    case 0x80319490u: goto label_80319490;
    case 0x803194A0u: goto label_803194A0;
    case 0x803194C4u: goto label_803194C4;
    case 0x803194D0u: goto label_803194D0;
    case 0x803194E8u: goto label_803194E8;
    case 0x80319504u: goto label_80319504;
    case 0x8031951Cu: goto label_8031951C;
    case 0x80319534u: goto label_80319534;
    case 0x80319540u: goto label_80319540;
    case 0x8031954Cu: goto label_8031954C;
    case 0x8031955Cu: goto label_8031955C;
    case 0x80319584u: goto label_80319584;
    case 0x803195B8u: goto label_803195B8;
    case 0x803195D4u: goto label_803195D4;
    case 0x80319650u: goto label_80319650;
    case 0x8031965Cu: goto label_8031965C;
    case 0x8031966Cu: goto label_8031966C;
    case 0x803196B8u: goto label_803196B8;
    case 0x803196C4u: goto label_803196C4;
    case 0x803196D4u: goto label_803196D4;
    case 0x80319714u: goto label_80319714;
    case 0x80319754u: goto label_80319754;
    case 0x803197DCu: goto label_803197DC;
    case 0x803197E4u: goto label_803197E4;
    case 0x803197F8u: goto label_803197F8;
    case 0x80319838u: goto label_80319838;
    case 0x80319854u: goto label_80319854;
    case 0x8031986Cu: goto label_8031986C;
    case 0x80319878u: goto label_80319878;
    case 0x80319890u: goto label_80319890;
    case 0x80319898u: goto label_80319898;
    case 0x803198C0u: goto label_803198C0;
    case 0x803198D8u: goto label_803198D8;
    case 0x803198E4u: goto label_803198E4;
    case 0x803198F8u: goto label_803198F8;
    case 0x80319904u: goto label_80319904;
    case 0x80319918u: goto label_80319918;
    case 0x80319964u: goto label_80319964;
    case 0x80319970u: goto label_80319970;
    case 0x80319980u: goto label_80319980;
    case 0x803199B4u: goto label_803199B4;
    case 0x803199D8u: goto label_803199D8;
    case 0x803199F0u: goto label_803199F0;
    case 0x80319A08u: goto label_80319A08;
    case 0x80319AA0u: goto label_80319AA0;
    case 0x80319ADCu: goto label_80319ADC;
    case 0x80319B44u: goto label_80319B44;
    case 0x80319B4Cu: goto label_80319B4C;
    case 0x80319B54u: goto label_80319B54;
    case 0x80319B5Cu: goto label_80319B5C;
    case 0x80319B64u: goto label_80319B64;
    case 0x80319BA0u: goto label_80319BA0;
    case 0x80319BC0u: goto label_80319BC0;
    case 0x80319C00u: goto label_80319C00;
    case 0x80319C20u: goto label_80319C20;
    case 0x80319C60u: goto label_80319C60;
    case 0x80319C80u: goto label_80319C80;
    case 0x80319CC8u: goto label_80319CC8;
    case 0x80319CD8u: goto label_80319CD8;
    case 0x80319D1Cu: goto label_80319D1C;
    case 0x80319D2Cu: goto label_80319D2C;
    case 0x80319D4Cu: goto label_80319D4C;
    case 0x80319D58u: goto label_80319D58;
    case 0x80319D80u: goto label_80319D80;
    case 0x80319D98u: goto label_80319D98;
    case 0x80319DB0u: goto label_80319DB0;
    case 0x80319DC4u: goto label_80319DC4;
    case 0x80319DE4u: goto label_80319DE4;
    case 0x80319DF4u: goto label_80319DF4;
    case 0x80319E2Cu: goto label_80319E2C;
    case 0x80319E70u: goto label_80319E70;
    case 0x80319E80u: goto label_80319E80;
    case 0x80319E9Cu: goto label_80319E9C;
    case 0x80319EA8u: goto label_80319EA8;
    case 0x80319F40u: goto label_80319F40;
    case 0x80319F64u: goto label_80319F64;
    case 0x80319FB0u: goto label_80319FB0;
    case 0x80319FC0u: goto label_80319FC0;
    case 0x8031A014u: goto label_8031A014;
    case 0x8031A038u: goto label_8031A038;
    case 0x8031A084u: goto label_8031A084;
    case 0x8031A094u: goto label_8031A094;
    case 0x8031A0F4u: goto label_8031A0F4;
    case 0x8031A128u: goto label_8031A128;
    case 0x8031A1F4u: goto label_8031A1F4;
    case 0x8031A204u: goto label_8031A204;
    case 0x8031A24Cu: goto label_8031A24C;
    case 0x8031A26Cu: goto label_8031A26C;
    case 0x8031A2C0u: goto label_8031A2C0;
    case 0x8031A2D0u: goto label_8031A2D0;
    case 0x8031A2DCu: goto label_8031A2DC;
    case 0x8031A2E8u: goto label_8031A2E8;
    case 0x8031A2F4u: goto label_8031A2F4;
    case 0x8031A334u: goto label_8031A334;
    case 0x8031A348u: goto label_8031A348;
    case 0x8031A350u: goto label_8031A350;
    case 0x8031A360u: goto label_8031A360;
    case 0x8031A368u: goto label_8031A368;
    case 0x8031A3B0u: goto label_8031A3B0;
    case 0x8031A3C4u: goto label_8031A3C4;
    case 0x8031A3C8u: goto label_8031A3C8;
    case 0x8031A3D4u: goto label_8031A3D4;
    case 0x8031A3DCu: goto label_8031A3DC;
    case 0x8031A3ECu: goto label_8031A3EC;
    case 0x8031A3F0u: goto label_8031A3F0;
    case 0x8031A3FCu: goto label_8031A3FC;
    case 0x8031A404u: goto label_8031A404;
    case 0x8031A440u: goto label_8031A440;
    case 0x8031A44Cu: goto label_8031A44C;
    case 0x8031A48Cu: goto label_8031A48C;
    case 0x8031A4A0u: goto label_8031A4A0;
    case 0x8031A4ACu: goto label_8031A4AC;
    case 0x8031A4C0u: goto label_8031A4C0;
    case 0x8031A50Cu: goto label_8031A50C;
    case 0x8031A538u: goto label_8031A538;
    case 0x8031A540u: goto label_8031A540;
    case 0x8031A54Cu: goto label_8031A54C;
    case 0x8031A59Cu: goto label_8031A59C;
    case 0x8031A5ACu: goto label_8031A5AC;
    case 0x8031A604u: goto label_8031A604;
    case 0x8031A620u: goto label_8031A620;
    case 0x8031A62Cu: goto label_8031A62C;
    case 0x8031A640u: goto label_8031A640;
    case 0x8031A648u: goto label_8031A648;
    case 0x8031A654u: goto label_8031A654;
    case 0x8031A6A0u: goto label_8031A6A0;
    case 0x8031A6B4u: goto label_8031A6B4;
    case 0x8031A6D0u: goto label_8031A6D0;
    case 0x8031A6DCu: goto label_8031A6DC;
    case 0x8031A6F8u: goto label_8031A6F8;
    case 0x8031A738u: goto label_8031A738;
    case 0x8031A74Cu: goto label_8031A74C;
    case 0x8031A758u: goto label_8031A758;
    case 0x8031A76Cu: goto label_8031A76C;
    case 0x8031A778u: goto label_8031A778;
    case 0x8031A78Cu: goto label_8031A78C;
    case 0x8031A798u: goto label_8031A798;
    case 0x8031A7ACu: goto label_8031A7AC;
    case 0x8031A7E0u: goto label_8031A7E0;
    case 0x8031A7E8u: goto label_8031A7E8;
    case 0x8031A834u: goto label_8031A834;
    case 0x8031A8ACu: goto label_8031A8AC;
    case 0x8031A8BCu: goto label_8031A8BC;
    case 0x8031A8FCu: goto label_8031A8FC;
    case 0x8031A90Cu: goto label_8031A90C;
    case 0x8031A934u: goto label_8031A934;
    case 0x8031A944u: goto label_8031A944;
    case 0x8031A998u: goto label_8031A998;
    case 0x8031A9C8u: goto label_8031A9C8;
    case 0x8031AA0Cu: goto label_8031AA0C;
    case 0x8031AA1Cu: goto label_8031AA1C;
    case 0x8031AAB0u: goto label_8031AAB0;
    case 0x8031AABCu: goto label_8031AABC;
    case 0x8031AAF0u: goto label_8031AAF0;
    case 0x8031AB2Cu: goto label_8031AB2C;
    case 0x8031AB78u: goto label_8031AB78;
    case 0x8031AB84u: goto label_8031AB84;
    case 0x8031AB94u: goto label_8031AB94;
    case 0x8031AC3Cu: goto label_8031AC3C;
    case 0x8031AC4Cu: goto label_8031AC4C;
    case 0x8031AC94u: goto label_8031AC94;
    case 0x8031ACA0u: goto label_8031ACA0;
    case 0x8031ACA4u: goto label_8031ACA4;
    case 0x8031ACB4u: goto label_8031ACB4;
    case 0x8031ACC0u: goto label_8031ACC0;
    case 0x8031ACC4u: goto label_8031ACC4;
    case 0x8031AD08u: goto label_8031AD08;
    case 0x8031AD24u: goto label_8031AD24;
    case 0x8031AD54u: goto label_8031AD54;
    case 0x8031AD5Cu: goto label_8031AD5C;
    case 0x8031AD70u: goto label_8031AD70;
    case 0x8031AD80u: goto label_8031AD80;
    case 0x8031ADD0u: goto label_8031ADD0;
    case 0x8031AE44u: goto label_8031AE44;
    case 0x8031AE54u: goto label_8031AE54;
    case 0x8031AEBCu: goto label_8031AEBC;
    case 0x8031AED8u: goto label_8031AED8;
    case 0x8031AEF4u: goto label_8031AEF4;
    case 0x8031AF14u: goto label_8031AF14;
    case 0x8031AF30u: goto label_8031AF30;
    case 0x8031AF44u: goto label_8031AF44;
    case 0x8031AF5Cu: goto label_8031AF5C;
    case 0x8031AF68u: goto label_8031AF68;
    case 0x8031AFA4u: goto label_8031AFA4;
    case 0x8031AFB8u: goto label_8031AFB8;
    case 0x8031AFCCu: goto label_8031AFCC;
    case 0x8031B01Cu: goto label_8031B01C;
    case 0x8031B06Cu: goto label_8031B06C;
    case 0x8031B080u: goto label_8031B080;
    case 0x8031B08Cu: goto label_8031B08C;
    case 0x8031B0B8u: goto label_8031B0B8;
    case 0x8031B0C4u: goto label_8031B0C4;
    case 0x8031B164u: goto label_8031B164;
    case 0x8031B170u: goto label_8031B170;
    case 0x8031B17Cu: goto label_8031B17C;
    case 0x8031B184u: goto label_8031B184;
    default: return;
    }
}

