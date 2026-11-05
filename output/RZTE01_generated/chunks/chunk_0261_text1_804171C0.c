// DolRecomp output
#include "../RZTE01.h"

static void loop_80418CB4(CPUState* ctx) {
label_80418CB4:
    ctx->downcount -= 5;
    ctx->pc = 0x80418CB4u;
    // 80418CB4: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80418CB8u;
    // 80418CB8: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

    ctx->pc = 0x80418CBCu;
    // 80418CBC: stw     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80418CC0u;
    // 80418CC0: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

    // 80418CC4: bc    16, 0, 0x80418CB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418CB4u;
                return;
            }
            goto label_80418CB4;
        }
    }

    ctx->pc = 0x80418CC8u;
}

static void loop_80418CE8(CPUState* ctx) {
label_80418CE8:
    ctx->downcount -= 5;
    ctx->pc = 0x80418CE8u;
    // 80418CE8: lwz     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80418CECu;
    // 80418CEC: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

    ctx->pc = 0x80418CF0u;
    // 80418CF0: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80418CF4u;
    // 80418CF4: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

    // 80418CF8: bc    16, 0, 0x80418CE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418CE8u;
                return;
            }
            goto label_80418CE8;
        }
    }

    ctx->pc = 0x80418CFCu;
}

static void loop_80418D1C(CPUState* ctx) {
label_80418D1C:
    ctx->downcount -= 5;
    ctx->pc = 0x80418D1Cu;
    // 80418D1C: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

    ctx->pc = 0x80418D20u;
    // 80418D20: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

    ctx->pc = 0x80418D24u;
    // 80418D24: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

    ctx->pc = 0x80418D28u;
    // 80418D28: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

    // 80418D2C: bc    16, 0, 0x80418D1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418D1Cu;
                return;
            }
            goto label_80418D1C;
        }
    }

    ctx->pc = 0x80418D30u;
}

static void loop_80419B98(CPUState* ctx) {
label_80419B98:
    ctx->downcount -= 5;
    // 80419B98: add   r6, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

    // 80419B9C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

    ctx->pc = 0x80419BA0u;
    // 80419BA0: stw     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    ctx->pc = 0x80419BA4u;
    // 80419BA4: stw     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

    // 80419BA8: bc    16, 0, 0x80419B98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B98u;
                return;
            }
            goto label_80419B98;
        }
    }

    ctx->pc = 0x80419BACu;
}

static void loop_80419BD4(CPUState* ctx) {
label_80419BD4:
    ctx->downcount -= 4;
    // 80419BD4: add   r5, r7, r9
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[9];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

    // 80419BD8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

    ctx->pc = 0x80419BDCu;
    // 80419BDC: stb     r6, 90(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(90);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

    // 80419BE0: bc    16, 0, 0x80419BD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419BD4u;
                return;
            }
            goto label_80419BD4;
        }
    }

    ctx->pc = 0x80419BE4u;
}

void func_804171C0(CPUState* ctx) {
    switch (ctx->pc) {
    case 0x804171C0u: goto label_804171C0;
    case 0x804171C4u: goto label_804171C4;
    case 0x804171C8u: goto label_804171C8;
    case 0x804171CCu: goto label_804171CC;
    case 0x804171D0u: goto label_804171D0;
    case 0x804171D4u: goto label_804171D4;
    case 0x804171D8u: goto label_804171D8;
    case 0x804171DCu: goto label_804171DC;
    case 0x804171E0u: goto label_804171E0;
    case 0x804171E4u: goto label_804171E4;
    case 0x804171E8u: goto label_804171E8;
    case 0x804171ECu: goto label_804171EC;
    case 0x804171F0u: goto label_804171F0;
    case 0x804171F4u: goto label_804171F4;
    case 0x804171F8u: goto label_804171F8;
    case 0x804171FCu: goto label_804171FC;
    case 0x80417200u: goto label_80417200;
    case 0x80417204u: goto label_80417204;
    case 0x80417208u: goto label_80417208;
    case 0x8041720Cu: goto label_8041720C;
    case 0x80417210u: goto label_80417210;
    case 0x80417214u: goto label_80417214;
    case 0x80417218u: goto label_80417218;
    case 0x8041721Cu: goto label_8041721C;
    case 0x80417220u: goto label_80417220;
    case 0x80417224u: goto label_80417224;
    case 0x80417228u: goto label_80417228;
    case 0x8041722Cu: goto label_8041722C;
    case 0x80417230u: goto label_80417230;
    case 0x80417234u: goto label_80417234;
    case 0x80417238u: goto label_80417238;
    case 0x8041723Cu: goto label_8041723C;
    case 0x80417240u: goto label_80417240;
    case 0x80417244u: goto label_80417244;
    case 0x80417248u: goto label_80417248;
    case 0x8041724Cu: goto label_8041724C;
    case 0x80417250u: goto label_80417250;
    case 0x80417254u: goto label_80417254;
    case 0x80417258u: goto label_80417258;
    case 0x8041725Cu: goto label_8041725C;
    case 0x80417260u: goto label_80417260;
    case 0x80417264u: goto label_80417264;
    case 0x80417268u: goto label_80417268;
    case 0x8041726Cu: goto label_8041726C;
    case 0x80417270u: goto label_80417270;
    case 0x80417274u: goto label_80417274;
    case 0x80417278u: goto label_80417278;
    case 0x8041727Cu: goto label_8041727C;
    case 0x80417280u: goto label_80417280;
    case 0x80417284u: goto label_80417284;
    case 0x80417288u: goto label_80417288;
    case 0x8041728Cu: goto label_8041728C;
    case 0x80417290u: goto label_80417290;
    case 0x80417294u: goto label_80417294;
    case 0x80417298u: goto label_80417298;
    case 0x8041729Cu: goto label_8041729C;
    case 0x804172A0u: goto label_804172A0;
    case 0x804172A4u: goto label_804172A4;
    case 0x804172A8u: goto label_804172A8;
    case 0x804172ACu: goto label_804172AC;
    case 0x804172B0u: goto label_804172B0;
    case 0x804172B4u: goto label_804172B4;
    case 0x804172B8u: goto label_804172B8;
    case 0x804172BCu: goto label_804172BC;
    case 0x804172C0u: goto label_804172C0;
    case 0x804172C4u: goto label_804172C4;
    case 0x804172C8u: goto label_804172C8;
    case 0x804172CCu: goto label_804172CC;
    case 0x804172D0u: goto label_804172D0;
    case 0x804172D4u: goto label_804172D4;
    case 0x804172D8u: goto label_804172D8;
    case 0x804172DCu: goto label_804172DC;
    case 0x804172E0u: goto label_804172E0;
    case 0x804172E4u: goto label_804172E4;
    case 0x804172E8u: goto label_804172E8;
    case 0x804172ECu: goto label_804172EC;
    case 0x804172F0u: goto label_804172F0;
    case 0x804172F4u: goto label_804172F4;
    case 0x804172F8u: goto label_804172F8;
    case 0x804172FCu: goto label_804172FC;
    case 0x80417300u: goto label_80417300;
    case 0x80417304u: goto label_80417304;
    case 0x80417308u: goto label_80417308;
    case 0x8041730Cu: goto label_8041730C;
    case 0x80417310u: goto label_80417310;
    case 0x80417314u: goto label_80417314;
    case 0x80417318u: goto label_80417318;
    case 0x8041731Cu: goto label_8041731C;
    case 0x80417320u: goto label_80417320;
    case 0x80417324u: goto label_80417324;
    case 0x80417328u: goto label_80417328;
    case 0x8041732Cu: goto label_8041732C;
    case 0x80417330u: goto label_80417330;
    case 0x80417334u: goto label_80417334;
    case 0x80417338u: goto label_80417338;
    case 0x8041733Cu: goto label_8041733C;
    case 0x80417340u: goto label_80417340;
    case 0x80417344u: goto label_80417344;
    case 0x80417348u: goto label_80417348;
    case 0x8041734Cu: goto label_8041734C;
    case 0x80417350u: goto label_80417350;
    case 0x80417354u: goto label_80417354;
    case 0x80417358u: goto label_80417358;
    case 0x8041735Cu: goto label_8041735C;
    case 0x80417360u: goto label_80417360;
    case 0x80417364u: goto label_80417364;
    case 0x80417368u: goto label_80417368;
    case 0x8041736Cu: goto label_8041736C;
    case 0x80417370u: goto label_80417370;
    case 0x80417374u: goto label_80417374;
    case 0x80417378u: goto label_80417378;
    case 0x8041737Cu: goto label_8041737C;
    case 0x80417380u: goto label_80417380;
    case 0x80417384u: goto label_80417384;
    case 0x80417388u: goto label_80417388;
    case 0x8041738Cu: goto label_8041738C;
    case 0x80417390u: goto label_80417390;
    case 0x80417394u: goto label_80417394;
    case 0x80417398u: goto label_80417398;
    case 0x8041739Cu: goto label_8041739C;
    case 0x804173A0u: goto label_804173A0;
    case 0x804173A4u: goto label_804173A4;
    case 0x804173A8u: goto label_804173A8;
    case 0x804173ACu: goto label_804173AC;
    case 0x804173B0u: goto label_804173B0;
    case 0x804173B4u: goto label_804173B4;
    case 0x804173B8u: goto label_804173B8;
    case 0x804173BCu: goto label_804173BC;
    case 0x804173C0u: goto label_804173C0;
    case 0x804173C4u: goto label_804173C4;
    case 0x804173C8u: goto label_804173C8;
    case 0x804173CCu: goto label_804173CC;
    case 0x804173D0u: goto label_804173D0;
    case 0x804173D4u: goto label_804173D4;
    case 0x804173D8u: goto label_804173D8;
    case 0x804173DCu: goto label_804173DC;
    case 0x804173E0u: goto label_804173E0;
    case 0x804173E4u: goto label_804173E4;
    case 0x804173E8u: goto label_804173E8;
    case 0x804173ECu: goto label_804173EC;
    case 0x804173F0u: goto label_804173F0;
    case 0x804173F4u: goto label_804173F4;
    case 0x804173F8u: goto label_804173F8;
    case 0x804173FCu: goto label_804173FC;
    case 0x80417400u: goto label_80417400;
    case 0x80417404u: goto label_80417404;
    case 0x80417408u: goto label_80417408;
    case 0x8041740Cu: goto label_8041740C;
    case 0x80417410u: goto label_80417410;
    case 0x80417414u: goto label_80417414;
    case 0x80417418u: goto label_80417418;
    case 0x8041741Cu: goto label_8041741C;
    case 0x80417420u: goto label_80417420;
    case 0x80417424u: goto label_80417424;
    case 0x80417428u: goto label_80417428;
    case 0x8041742Cu: goto label_8041742C;
    case 0x80417430u: goto label_80417430;
    case 0x80417434u: goto label_80417434;
    case 0x80417438u: goto label_80417438;
    case 0x8041743Cu: goto label_8041743C;
    case 0x80417440u: goto label_80417440;
    case 0x80417444u: goto label_80417444;
    case 0x80417448u: goto label_80417448;
    case 0x8041744Cu: goto label_8041744C;
    case 0x80417450u: goto label_80417450;
    case 0x80417454u: goto label_80417454;
    case 0x80417458u: goto label_80417458;
    case 0x8041745Cu: goto label_8041745C;
    case 0x80417460u: goto label_80417460;
    case 0x80417464u: goto label_80417464;
    case 0x80417468u: goto label_80417468;
    case 0x8041746Cu: goto label_8041746C;
    case 0x80417470u: goto label_80417470;
    case 0x80417474u: goto label_80417474;
    case 0x80417478u: goto label_80417478;
    case 0x8041747Cu: goto label_8041747C;
    case 0x80417480u: goto label_80417480;
    case 0x80417484u: goto label_80417484;
    case 0x80417488u: goto label_80417488;
    case 0x8041748Cu: goto label_8041748C;
    case 0x80417490u: goto label_80417490;
    case 0x80417494u: goto label_80417494;
    case 0x80417498u: goto label_80417498;
    case 0x8041749Cu: goto label_8041749C;
    case 0x804174A0u: goto label_804174A0;
    case 0x804174A4u: goto label_804174A4;
    case 0x804174A8u: goto label_804174A8;
    case 0x804174ACu: goto label_804174AC;
    case 0x804174B0u: goto label_804174B0;
    case 0x804174B4u: goto label_804174B4;
    case 0x804174B8u: goto label_804174B8;
    case 0x804174BCu: goto label_804174BC;
    case 0x804174C0u: goto label_804174C0;
    case 0x804174C4u: goto label_804174C4;
    case 0x804174C8u: goto label_804174C8;
    case 0x804174CCu: goto label_804174CC;
    case 0x804174D0u: goto label_804174D0;
    case 0x804174D4u: goto label_804174D4;
    case 0x804174D8u: goto label_804174D8;
    case 0x804174DCu: goto label_804174DC;
    case 0x804174E0u: goto label_804174E0;
    case 0x804174E4u: goto label_804174E4;
    case 0x804174E8u: goto label_804174E8;
    case 0x804174ECu: goto label_804174EC;
    case 0x804174F0u: goto label_804174F0;
    case 0x804174F4u: goto label_804174F4;
    case 0x804174F8u: goto label_804174F8;
    case 0x804174FCu: goto label_804174FC;
    case 0x80417500u: goto label_80417500;
    case 0x80417504u: goto label_80417504;
    case 0x80417508u: goto label_80417508;
    case 0x8041750Cu: goto label_8041750C;
    case 0x80417510u: goto label_80417510;
    case 0x80417514u: goto label_80417514;
    case 0x80417518u: goto label_80417518;
    case 0x8041751Cu: goto label_8041751C;
    case 0x80417520u: goto label_80417520;
    case 0x80417524u: goto label_80417524;
    case 0x80417528u: goto label_80417528;
    case 0x8041752Cu: goto label_8041752C;
    case 0x80417530u: goto label_80417530;
    case 0x80417534u: goto label_80417534;
    case 0x80417538u: goto label_80417538;
    case 0x8041753Cu: goto label_8041753C;
    case 0x80417540u: goto label_80417540;
    case 0x80417544u: goto label_80417544;
    case 0x80417548u: goto label_80417548;
    case 0x8041754Cu: goto label_8041754C;
    case 0x80417550u: goto label_80417550;
    case 0x80417554u: goto label_80417554;
    case 0x80417558u: goto label_80417558;
    case 0x8041755Cu: goto label_8041755C;
    case 0x80417560u: goto label_80417560;
    case 0x80417564u: goto label_80417564;
    case 0x80417568u: goto label_80417568;
    case 0x8041756Cu: goto label_8041756C;
    case 0x80417570u: goto label_80417570;
    case 0x80417574u: goto label_80417574;
    case 0x80417578u: goto label_80417578;
    case 0x8041757Cu: goto label_8041757C;
    case 0x80417580u: goto label_80417580;
    case 0x80417584u: goto label_80417584;
    case 0x80417588u: goto label_80417588;
    case 0x8041758Cu: goto label_8041758C;
    case 0x80417590u: goto label_80417590;
    case 0x80417594u: goto label_80417594;
    case 0x80417598u: goto label_80417598;
    case 0x8041759Cu: goto label_8041759C;
    case 0x804175A0u: goto label_804175A0;
    case 0x804175A4u: goto label_804175A4;
    case 0x804175A8u: goto label_804175A8;
    case 0x804175ACu: goto label_804175AC;
    case 0x804175B0u: goto label_804175B0;
    case 0x804175B4u: goto label_804175B4;
    case 0x804175B8u: goto label_804175B8;
    case 0x804175BCu: goto label_804175BC;
    case 0x804175C0u: goto label_804175C0;
    case 0x804175C4u: goto label_804175C4;
    case 0x804175C8u: goto label_804175C8;
    case 0x804175CCu: goto label_804175CC;
    case 0x804175D0u: goto label_804175D0;
    case 0x804175D4u: goto label_804175D4;
    case 0x804175D8u: goto label_804175D8;
    case 0x804175DCu: goto label_804175DC;
    case 0x804175E0u: goto label_804175E0;
    case 0x804175E4u: goto label_804175E4;
    case 0x804175E8u: goto label_804175E8;
    case 0x804175ECu: goto label_804175EC;
    case 0x804175F0u: goto label_804175F0;
    case 0x804175F4u: goto label_804175F4;
    case 0x804175F8u: goto label_804175F8;
    case 0x804175FCu: goto label_804175FC;
    case 0x80417600u: goto label_80417600;
    case 0x80417604u: goto label_80417604;
    case 0x80417608u: goto label_80417608;
    case 0x8041760Cu: goto label_8041760C;
    case 0x80417610u: goto label_80417610;
    case 0x80417614u: goto label_80417614;
    case 0x80417618u: goto label_80417618;
    case 0x8041761Cu: goto label_8041761C;
    case 0x80417620u: goto label_80417620;
    case 0x80417624u: goto label_80417624;
    case 0x80417628u: goto label_80417628;
    case 0x8041762Cu: goto label_8041762C;
    case 0x80417630u: goto label_80417630;
    case 0x80417634u: goto label_80417634;
    case 0x80417638u: goto label_80417638;
    case 0x8041763Cu: goto label_8041763C;
    case 0x80417640u: goto label_80417640;
    case 0x80417644u: goto label_80417644;
    case 0x80417648u: goto label_80417648;
    case 0x8041764Cu: goto label_8041764C;
    case 0x80417650u: goto label_80417650;
    case 0x80417654u: goto label_80417654;
    case 0x80417658u: goto label_80417658;
    case 0x8041765Cu: goto label_8041765C;
    case 0x80417660u: goto label_80417660;
    case 0x80417664u: goto label_80417664;
    case 0x80417668u: goto label_80417668;
    case 0x8041766Cu: goto label_8041766C;
    case 0x80417670u: goto label_80417670;
    case 0x80417674u: goto label_80417674;
    case 0x80417678u: goto label_80417678;
    case 0x8041767Cu: goto label_8041767C;
    case 0x80417680u: goto label_80417680;
    case 0x80417684u: goto label_80417684;
    case 0x80417688u: goto label_80417688;
    case 0x8041768Cu: goto label_8041768C;
    case 0x80417690u: goto label_80417690;
    case 0x80417694u: goto label_80417694;
    case 0x80417698u: goto label_80417698;
    case 0x8041769Cu: goto label_8041769C;
    case 0x804176A0u: goto label_804176A0;
    case 0x804176A4u: goto label_804176A4;
    case 0x804176A8u: goto label_804176A8;
    case 0x804176ACu: goto label_804176AC;
    case 0x804176B0u: goto label_804176B0;
    case 0x804176B4u: goto label_804176B4;
    case 0x804176B8u: goto label_804176B8;
    case 0x804176BCu: goto label_804176BC;
    case 0x804176C0u: goto label_804176C0;
    case 0x804176C4u: goto label_804176C4;
    case 0x804176C8u: goto label_804176C8;
    case 0x804176CCu: goto label_804176CC;
    case 0x804176D0u: goto label_804176D0;
    case 0x804176D4u: goto label_804176D4;
    case 0x804176D8u: goto label_804176D8;
    case 0x804176DCu: goto label_804176DC;
    case 0x804176E0u: goto label_804176E0;
    case 0x804176E4u: goto label_804176E4;
    case 0x804176E8u: goto label_804176E8;
    case 0x804176ECu: goto label_804176EC;
    case 0x804176F0u: goto label_804176F0;
    case 0x804176F4u: goto label_804176F4;
    case 0x804176F8u: goto label_804176F8;
    case 0x804176FCu: goto label_804176FC;
    case 0x80417700u: goto label_80417700;
    case 0x80417704u: goto label_80417704;
    case 0x80417708u: goto label_80417708;
    case 0x8041770Cu: goto label_8041770C;
    case 0x80417710u: goto label_80417710;
    case 0x80417714u: goto label_80417714;
    case 0x80417718u: goto label_80417718;
    case 0x8041771Cu: goto label_8041771C;
    case 0x80417720u: goto label_80417720;
    case 0x80417724u: goto label_80417724;
    case 0x80417728u: goto label_80417728;
    case 0x8041772Cu: goto label_8041772C;
    case 0x80417730u: goto label_80417730;
    case 0x80417734u: goto label_80417734;
    case 0x80417738u: goto label_80417738;
    case 0x8041773Cu: goto label_8041773C;
    case 0x80417740u: goto label_80417740;
    case 0x80417744u: goto label_80417744;
    case 0x80417748u: goto label_80417748;
    case 0x8041774Cu: goto label_8041774C;
    case 0x80417750u: goto label_80417750;
    case 0x80417754u: goto label_80417754;
    case 0x80417758u: goto label_80417758;
    case 0x8041775Cu: goto label_8041775C;
    case 0x80417760u: goto label_80417760;
    case 0x80417764u: goto label_80417764;
    case 0x80417768u: goto label_80417768;
    case 0x8041776Cu: goto label_8041776C;
    case 0x80417770u: goto label_80417770;
    case 0x80417774u: goto label_80417774;
    case 0x80417778u: goto label_80417778;
    case 0x8041777Cu: goto label_8041777C;
    case 0x80417780u: goto label_80417780;
    case 0x80417784u: goto label_80417784;
    case 0x80417788u: goto label_80417788;
    case 0x8041778Cu: goto label_8041778C;
    case 0x80417790u: goto label_80417790;
    case 0x80417794u: goto label_80417794;
    case 0x80417798u: goto label_80417798;
    case 0x8041779Cu: goto label_8041779C;
    case 0x804177A0u: goto label_804177A0;
    case 0x804177A4u: goto label_804177A4;
    case 0x804177A8u: goto label_804177A8;
    case 0x804177ACu: goto label_804177AC;
    case 0x804177B0u: goto label_804177B0;
    case 0x804177B4u: goto label_804177B4;
    case 0x804177B8u: goto label_804177B8;
    case 0x804177BCu: goto label_804177BC;
    case 0x804177C0u: goto label_804177C0;
    case 0x804177C4u: goto label_804177C4;
    case 0x804177C8u: goto label_804177C8;
    case 0x804177CCu: goto label_804177CC;
    case 0x804177D0u: goto label_804177D0;
    case 0x804177D4u: goto label_804177D4;
    case 0x804177D8u: goto label_804177D8;
    case 0x804177DCu: goto label_804177DC;
    case 0x804177E0u: goto label_804177E0;
    case 0x804177E4u: goto label_804177E4;
    case 0x804177E8u: goto label_804177E8;
    case 0x804177ECu: goto label_804177EC;
    case 0x804177F0u: goto label_804177F0;
    case 0x804177F4u: goto label_804177F4;
    case 0x804177F8u: goto label_804177F8;
    case 0x804177FCu: goto label_804177FC;
    case 0x80417800u: goto label_80417800;
    case 0x80417804u: goto label_80417804;
    case 0x80417808u: goto label_80417808;
    case 0x8041780Cu: goto label_8041780C;
    case 0x80417810u: goto label_80417810;
    case 0x80417814u: goto label_80417814;
    case 0x80417818u: goto label_80417818;
    case 0x8041781Cu: goto label_8041781C;
    case 0x80417820u: goto label_80417820;
    case 0x80417824u: goto label_80417824;
    case 0x80417828u: goto label_80417828;
    case 0x8041782Cu: goto label_8041782C;
    case 0x80417830u: goto label_80417830;
    case 0x80417834u: goto label_80417834;
    case 0x80417838u: goto label_80417838;
    case 0x8041783Cu: goto label_8041783C;
    case 0x80417840u: goto label_80417840;
    case 0x80417844u: goto label_80417844;
    case 0x80417848u: goto label_80417848;
    case 0x8041784Cu: goto label_8041784C;
    case 0x80417850u: goto label_80417850;
    case 0x80417854u: goto label_80417854;
    case 0x80417858u: goto label_80417858;
    case 0x8041785Cu: goto label_8041785C;
    case 0x80417860u: goto label_80417860;
    case 0x80417864u: goto label_80417864;
    case 0x80417868u: goto label_80417868;
    case 0x8041786Cu: goto label_8041786C;
    case 0x80417870u: goto label_80417870;
    case 0x80417874u: goto label_80417874;
    case 0x80417878u: goto label_80417878;
    case 0x8041787Cu: goto label_8041787C;
    case 0x80417880u: goto label_80417880;
    case 0x80417884u: goto label_80417884;
    case 0x80417888u: goto label_80417888;
    case 0x8041788Cu: goto label_8041788C;
    case 0x80417890u: goto label_80417890;
    case 0x80417894u: goto label_80417894;
    case 0x80417898u: goto label_80417898;
    case 0x8041789Cu: goto label_8041789C;
    case 0x804178A0u: goto label_804178A0;
    case 0x804178A4u: goto label_804178A4;
    case 0x804178A8u: goto label_804178A8;
    case 0x804178ACu: goto label_804178AC;
    case 0x804178B0u: goto label_804178B0;
    case 0x804178B4u: goto label_804178B4;
    case 0x804178B8u: goto label_804178B8;
    case 0x804178BCu: goto label_804178BC;
    case 0x804178C0u: goto label_804178C0;
    case 0x804178C4u: goto label_804178C4;
    case 0x804178C8u: goto label_804178C8;
    case 0x804178CCu: goto label_804178CC;
    case 0x804178D0u: goto label_804178D0;
    case 0x804178D4u: goto label_804178D4;
    case 0x804178D8u: goto label_804178D8;
    case 0x804178DCu: goto label_804178DC;
    case 0x804178E0u: goto label_804178E0;
    case 0x804178E4u: goto label_804178E4;
    case 0x804178E8u: goto label_804178E8;
    case 0x804178ECu: goto label_804178EC;
    case 0x804178F0u: goto label_804178F0;
    case 0x804178F4u: goto label_804178F4;
    case 0x804178F8u: goto label_804178F8;
    case 0x804178FCu: goto label_804178FC;
    case 0x80417900u: goto label_80417900;
    case 0x80417904u: goto label_80417904;
    case 0x80417908u: goto label_80417908;
    case 0x8041790Cu: goto label_8041790C;
    case 0x80417910u: goto label_80417910;
    case 0x80417914u: goto label_80417914;
    case 0x80417918u: goto label_80417918;
    case 0x8041791Cu: goto label_8041791C;
    case 0x80417920u: goto label_80417920;
    case 0x80417924u: goto label_80417924;
    case 0x80417928u: goto label_80417928;
    case 0x8041792Cu: goto label_8041792C;
    case 0x80417930u: goto label_80417930;
    case 0x80417934u: goto label_80417934;
    case 0x80417938u: goto label_80417938;
    case 0x8041793Cu: goto label_8041793C;
    case 0x80417940u: goto label_80417940;
    case 0x80417944u: goto label_80417944;
    case 0x80417948u: goto label_80417948;
    case 0x8041794Cu: goto label_8041794C;
    case 0x80417950u: goto label_80417950;
    case 0x80417954u: goto label_80417954;
    case 0x80417958u: goto label_80417958;
    case 0x8041795Cu: goto label_8041795C;
    case 0x80417960u: goto label_80417960;
    case 0x80417964u: goto label_80417964;
    case 0x80417968u: goto label_80417968;
    case 0x8041796Cu: goto label_8041796C;
    case 0x80417970u: goto label_80417970;
    case 0x80417974u: goto label_80417974;
    case 0x80417978u: goto label_80417978;
    case 0x8041797Cu: goto label_8041797C;
    case 0x80417980u: goto label_80417980;
    case 0x80417984u: goto label_80417984;
    case 0x80417988u: goto label_80417988;
    case 0x8041798Cu: goto label_8041798C;
    case 0x80417990u: goto label_80417990;
    case 0x80417994u: goto label_80417994;
    case 0x80417998u: goto label_80417998;
    case 0x8041799Cu: goto label_8041799C;
    case 0x804179A0u: goto label_804179A0;
    case 0x804179A4u: goto label_804179A4;
    case 0x804179A8u: goto label_804179A8;
    case 0x804179ACu: goto label_804179AC;
    case 0x804179B0u: goto label_804179B0;
    case 0x804179B4u: goto label_804179B4;
    case 0x804179B8u: goto label_804179B8;
    case 0x804179BCu: goto label_804179BC;
    case 0x804179C0u: goto label_804179C0;
    case 0x804179C4u: goto label_804179C4;
    case 0x804179C8u: goto label_804179C8;
    case 0x804179CCu: goto label_804179CC;
    case 0x804179D0u: goto label_804179D0;
    case 0x804179D4u: goto label_804179D4;
    case 0x804179D8u: goto label_804179D8;
    case 0x804179DCu: goto label_804179DC;
    case 0x804179E0u: goto label_804179E0;
    case 0x804179E4u: goto label_804179E4;
    case 0x804179E8u: goto label_804179E8;
    case 0x804179ECu: goto label_804179EC;
    case 0x804179F0u: goto label_804179F0;
    case 0x804179F4u: goto label_804179F4;
    case 0x804179F8u: goto label_804179F8;
    case 0x804179FCu: goto label_804179FC;
    case 0x80417A00u: goto label_80417A00;
    case 0x80417A04u: goto label_80417A04;
    case 0x80417A08u: goto label_80417A08;
    case 0x80417A0Cu: goto label_80417A0C;
    case 0x80417A10u: goto label_80417A10;
    case 0x80417A14u: goto label_80417A14;
    case 0x80417A18u: goto label_80417A18;
    case 0x80417A1Cu: goto label_80417A1C;
    case 0x80417A20u: goto label_80417A20;
    case 0x80417A24u: goto label_80417A24;
    case 0x80417A28u: goto label_80417A28;
    case 0x80417A2Cu: goto label_80417A2C;
    case 0x80417A30u: goto label_80417A30;
    case 0x80417A34u: goto label_80417A34;
    case 0x80417A38u: goto label_80417A38;
    case 0x80417A3Cu: goto label_80417A3C;
    case 0x80417A40u: goto label_80417A40;
    case 0x80417A44u: goto label_80417A44;
    case 0x80417A48u: goto label_80417A48;
    case 0x80417A4Cu: goto label_80417A4C;
    case 0x80417A50u: goto label_80417A50;
    case 0x80417A54u: goto label_80417A54;
    case 0x80417A58u: goto label_80417A58;
    case 0x80417A5Cu: goto label_80417A5C;
    case 0x80417A60u: goto label_80417A60;
    case 0x80417A64u: goto label_80417A64;
    case 0x80417A68u: goto label_80417A68;
    case 0x80417A6Cu: goto label_80417A6C;
    case 0x80417A70u: goto label_80417A70;
    case 0x80417A74u: goto label_80417A74;
    case 0x80417A78u: goto label_80417A78;
    case 0x80417A7Cu: goto label_80417A7C;
    case 0x80417A80u: goto label_80417A80;
    case 0x80417A84u: goto label_80417A84;
    case 0x80417A88u: goto label_80417A88;
    case 0x80417A8Cu: goto label_80417A8C;
    case 0x80417A90u: goto label_80417A90;
    case 0x80417A94u: goto label_80417A94;
    case 0x80417A98u: goto label_80417A98;
    case 0x80417A9Cu: goto label_80417A9C;
    case 0x80417AA0u: goto label_80417AA0;
    case 0x80417AA4u: goto label_80417AA4;
    case 0x80417AA8u: goto label_80417AA8;
    case 0x80417AACu: goto label_80417AAC;
    case 0x80417AB0u: goto label_80417AB0;
    case 0x80417AB4u: goto label_80417AB4;
    case 0x80417AB8u: goto label_80417AB8;
    case 0x80417ABCu: goto label_80417ABC;
    case 0x80417AC0u: goto label_80417AC0;
    case 0x80417AC4u: goto label_80417AC4;
    case 0x80417AC8u: goto label_80417AC8;
    case 0x80417ACCu: goto label_80417ACC;
    case 0x80417AD0u: goto label_80417AD0;
    case 0x80417AD4u: goto label_80417AD4;
    case 0x80417AD8u: goto label_80417AD8;
    case 0x80417ADCu: goto label_80417ADC;
    case 0x80417AE0u: goto label_80417AE0;
    case 0x80417AE4u: goto label_80417AE4;
    case 0x80417AE8u: goto label_80417AE8;
    case 0x80417AECu: goto label_80417AEC;
    case 0x80417AF0u: goto label_80417AF0;
    case 0x80417AF4u: goto label_80417AF4;
    case 0x80417AF8u: goto label_80417AF8;
    case 0x80417AFCu: goto label_80417AFC;
    case 0x80417B00u: goto label_80417B00;
    case 0x80417B04u: goto label_80417B04;
    case 0x80417B08u: goto label_80417B08;
    case 0x80417B0Cu: goto label_80417B0C;
    case 0x80417B10u: goto label_80417B10;
    case 0x80417B14u: goto label_80417B14;
    case 0x80417B18u: goto label_80417B18;
    case 0x80417B1Cu: goto label_80417B1C;
    case 0x80417B20u: goto label_80417B20;
    case 0x80417B24u: goto label_80417B24;
    case 0x80417B28u: goto label_80417B28;
    case 0x80417B2Cu: goto label_80417B2C;
    case 0x80417B30u: goto label_80417B30;
    case 0x80417B34u: goto label_80417B34;
    case 0x80417B38u: goto label_80417B38;
    case 0x80417B3Cu: goto label_80417B3C;
    case 0x80417B40u: goto label_80417B40;
    case 0x80417B44u: goto label_80417B44;
    case 0x80417B48u: goto label_80417B48;
    case 0x80417B4Cu: goto label_80417B4C;
    case 0x80417B50u: goto label_80417B50;
    case 0x80417B54u: goto label_80417B54;
    case 0x80417B58u: goto label_80417B58;
    case 0x80417B5Cu: goto label_80417B5C;
    case 0x80417B60u: goto label_80417B60;
    case 0x80417B64u: goto label_80417B64;
    case 0x80417B68u: goto label_80417B68;
    case 0x80417B6Cu: goto label_80417B6C;
    case 0x80417B70u: goto label_80417B70;
    case 0x80417B74u: goto label_80417B74;
    case 0x80417B78u: goto label_80417B78;
    case 0x80417B7Cu: goto label_80417B7C;
    case 0x80417B80u: goto label_80417B80;
    case 0x80417B84u: goto label_80417B84;
    case 0x80417B88u: goto label_80417B88;
    case 0x80417B8Cu: goto label_80417B8C;
    case 0x80417B90u: goto label_80417B90;
    case 0x80417B94u: goto label_80417B94;
    case 0x80417B98u: goto label_80417B98;
    case 0x80417B9Cu: goto label_80417B9C;
    case 0x80417BA0u: goto label_80417BA0;
    case 0x80417BA4u: goto label_80417BA4;
    case 0x80417BA8u: goto label_80417BA8;
    case 0x80417BACu: goto label_80417BAC;
    case 0x80417BB0u: goto label_80417BB0;
    case 0x80417BB4u: goto label_80417BB4;
    case 0x80417BB8u: goto label_80417BB8;
    case 0x80417BBCu: goto label_80417BBC;
    case 0x80417BC0u: goto label_80417BC0;
    case 0x80417BC4u: goto label_80417BC4;
    case 0x80417BC8u: goto label_80417BC8;
    case 0x80417BCCu: goto label_80417BCC;
    case 0x80417BD0u: goto label_80417BD0;
    case 0x80417BD4u: goto label_80417BD4;
    case 0x80417BD8u: goto label_80417BD8;
    case 0x80417BDCu: goto label_80417BDC;
    case 0x80417BE0u: goto label_80417BE0;
    case 0x80417BE4u: goto label_80417BE4;
    case 0x80417BE8u: goto label_80417BE8;
    case 0x80417BECu: goto label_80417BEC;
    case 0x80417BF0u: goto label_80417BF0;
    case 0x80417BF4u: goto label_80417BF4;
    case 0x80417BF8u: goto label_80417BF8;
    case 0x80417BFCu: goto label_80417BFC;
    case 0x80417C00u: goto label_80417C00;
    case 0x80417C04u: goto label_80417C04;
    case 0x80417C08u: goto label_80417C08;
    case 0x80417C0Cu: goto label_80417C0C;
    case 0x80417C10u: goto label_80417C10;
    case 0x80417C14u: goto label_80417C14;
    case 0x80417C18u: goto label_80417C18;
    case 0x80417C1Cu: goto label_80417C1C;
    case 0x80417C20u: goto label_80417C20;
    case 0x80417C24u: goto label_80417C24;
    case 0x80417C28u: goto label_80417C28;
    case 0x80417C2Cu: goto label_80417C2C;
    case 0x80417C30u: goto label_80417C30;
    case 0x80417C34u: goto label_80417C34;
    case 0x80417C38u: goto label_80417C38;
    case 0x80417C3Cu: goto label_80417C3C;
    case 0x80417C40u: goto label_80417C40;
    case 0x80417C44u: goto label_80417C44;
    case 0x80417C48u: goto label_80417C48;
    case 0x80417C4Cu: goto label_80417C4C;
    case 0x80417C50u: goto label_80417C50;
    case 0x80417C54u: goto label_80417C54;
    case 0x80417C58u: goto label_80417C58;
    case 0x80417C5Cu: goto label_80417C5C;
    case 0x80417C60u: goto label_80417C60;
    case 0x80417C64u: goto label_80417C64;
    case 0x80417C68u: goto label_80417C68;
    case 0x80417C6Cu: goto label_80417C6C;
    case 0x80417C70u: goto label_80417C70;
    case 0x80417C74u: goto label_80417C74;
    case 0x80417C78u: goto label_80417C78;
    case 0x80417C7Cu: goto label_80417C7C;
    case 0x80417C80u: goto label_80417C80;
    case 0x80417C84u: goto label_80417C84;
    case 0x80417C88u: goto label_80417C88;
    case 0x80417C8Cu: goto label_80417C8C;
    case 0x80417C90u: goto label_80417C90;
    case 0x80417C94u: goto label_80417C94;
    case 0x80417C98u: goto label_80417C98;
    case 0x80417C9Cu: goto label_80417C9C;
    case 0x80417CA0u: goto label_80417CA0;
    case 0x80417CA4u: goto label_80417CA4;
    case 0x80417CA8u: goto label_80417CA8;
    case 0x80417CACu: goto label_80417CAC;
    case 0x80417CB0u: goto label_80417CB0;
    case 0x80417CB4u: goto label_80417CB4;
    case 0x80417CB8u: goto label_80417CB8;
    case 0x80417CBCu: goto label_80417CBC;
    case 0x80417CC0u: goto label_80417CC0;
    case 0x80417CC4u: goto label_80417CC4;
    case 0x80417CC8u: goto label_80417CC8;
    case 0x80417CCCu: goto label_80417CCC;
    case 0x80417CD0u: goto label_80417CD0;
    case 0x80417CD4u: goto label_80417CD4;
    case 0x80417CD8u: goto label_80417CD8;
    case 0x80417CDCu: goto label_80417CDC;
    case 0x80417CE0u: goto label_80417CE0;
    case 0x80417CE4u: goto label_80417CE4;
    case 0x80417CE8u: goto label_80417CE8;
    case 0x80417CECu: goto label_80417CEC;
    case 0x80417CF0u: goto label_80417CF0;
    case 0x80417CF4u: goto label_80417CF4;
    case 0x80417CF8u: goto label_80417CF8;
    case 0x80417CFCu: goto label_80417CFC;
    case 0x80417D00u: goto label_80417D00;
    case 0x80417D04u: goto label_80417D04;
    case 0x80417D08u: goto label_80417D08;
    case 0x80417D0Cu: goto label_80417D0C;
    case 0x80417D10u: goto label_80417D10;
    case 0x80417D14u: goto label_80417D14;
    case 0x80417D18u: goto label_80417D18;
    case 0x80417D1Cu: goto label_80417D1C;
    case 0x80417D20u: goto label_80417D20;
    case 0x80417D24u: goto label_80417D24;
    case 0x80417D28u: goto label_80417D28;
    case 0x80417D2Cu: goto label_80417D2C;
    case 0x80417D30u: goto label_80417D30;
    case 0x80417D34u: goto label_80417D34;
    case 0x80417D38u: goto label_80417D38;
    case 0x80417D3Cu: goto label_80417D3C;
    case 0x80417D40u: goto label_80417D40;
    case 0x80417D44u: goto label_80417D44;
    case 0x80417D48u: goto label_80417D48;
    case 0x80417D4Cu: goto label_80417D4C;
    case 0x80417D50u: goto label_80417D50;
    case 0x80417D54u: goto label_80417D54;
    case 0x80417D58u: goto label_80417D58;
    case 0x80417D5Cu: goto label_80417D5C;
    case 0x80417D60u: goto label_80417D60;
    case 0x80417D64u: goto label_80417D64;
    case 0x80417D68u: goto label_80417D68;
    case 0x80417D6Cu: goto label_80417D6C;
    case 0x80417D70u: goto label_80417D70;
    case 0x80417D74u: goto label_80417D74;
    case 0x80417D78u: goto label_80417D78;
    case 0x80417D7Cu: goto label_80417D7C;
    case 0x80417D80u: goto label_80417D80;
    case 0x80417D84u: goto label_80417D84;
    case 0x80417D88u: goto label_80417D88;
    case 0x80417D8Cu: goto label_80417D8C;
    case 0x80417D90u: goto label_80417D90;
    case 0x80417D94u: goto label_80417D94;
    case 0x80417D98u: goto label_80417D98;
    case 0x80417D9Cu: goto label_80417D9C;
    case 0x80417DA0u: goto label_80417DA0;
    case 0x80417DA4u: goto label_80417DA4;
    case 0x80417DA8u: goto label_80417DA8;
    case 0x80417DACu: goto label_80417DAC;
    case 0x80417DB0u: goto label_80417DB0;
    case 0x80417DB4u: goto label_80417DB4;
    case 0x80417DB8u: goto label_80417DB8;
    case 0x80417DBCu: goto label_80417DBC;
    case 0x80417DC0u: goto label_80417DC0;
    case 0x80417DC4u: goto label_80417DC4;
    case 0x80417DC8u: goto label_80417DC8;
    case 0x80417DCCu: goto label_80417DCC;
    case 0x80417DD0u: goto label_80417DD0;
    case 0x80417DD4u: goto label_80417DD4;
    case 0x80417DD8u: goto label_80417DD8;
    case 0x80417DDCu: goto label_80417DDC;
    case 0x80417DE0u: goto label_80417DE0;
    case 0x80417DE4u: goto label_80417DE4;
    case 0x80417DE8u: goto label_80417DE8;
    case 0x80417DECu: goto label_80417DEC;
    case 0x80417DF0u: goto label_80417DF0;
    case 0x80417DF4u: goto label_80417DF4;
    case 0x80417DF8u: goto label_80417DF8;
    case 0x80417DFCu: goto label_80417DFC;
    case 0x80417E00u: goto label_80417E00;
    case 0x80417E04u: goto label_80417E04;
    case 0x80417E08u: goto label_80417E08;
    case 0x80417E0Cu: goto label_80417E0C;
    case 0x80417E10u: goto label_80417E10;
    case 0x80417E14u: goto label_80417E14;
    case 0x80417E18u: goto label_80417E18;
    case 0x80417E1Cu: goto label_80417E1C;
    case 0x80417E20u: goto label_80417E20;
    case 0x80417E24u: goto label_80417E24;
    case 0x80417E28u: goto label_80417E28;
    case 0x80417E2Cu: goto label_80417E2C;
    case 0x80417E30u: goto label_80417E30;
    case 0x80417E34u: goto label_80417E34;
    case 0x80417E38u: goto label_80417E38;
    case 0x80417E3Cu: goto label_80417E3C;
    case 0x80417E40u: goto label_80417E40;
    case 0x80417E44u: goto label_80417E44;
    case 0x80417E48u: goto label_80417E48;
    case 0x80417E4Cu: goto label_80417E4C;
    case 0x80417E50u: goto label_80417E50;
    case 0x80417E54u: goto label_80417E54;
    case 0x80417E58u: goto label_80417E58;
    case 0x80417E5Cu: goto label_80417E5C;
    case 0x80417E60u: goto label_80417E60;
    case 0x80417E64u: goto label_80417E64;
    case 0x80417E68u: goto label_80417E68;
    case 0x80417E6Cu: goto label_80417E6C;
    case 0x80417E70u: goto label_80417E70;
    case 0x80417E74u: goto label_80417E74;
    case 0x80417E78u: goto label_80417E78;
    case 0x80417E7Cu: goto label_80417E7C;
    case 0x80417E80u: goto label_80417E80;
    case 0x80417E84u: goto label_80417E84;
    case 0x80417E88u: goto label_80417E88;
    case 0x80417E8Cu: goto label_80417E8C;
    case 0x80417E90u: goto label_80417E90;
    case 0x80417E94u: goto label_80417E94;
    case 0x80417E98u: goto label_80417E98;
    case 0x80417E9Cu: goto label_80417E9C;
    case 0x80417EA0u: goto label_80417EA0;
    case 0x80417EA4u: goto label_80417EA4;
    case 0x80417EA8u: goto label_80417EA8;
    case 0x80417EACu: goto label_80417EAC;
    case 0x80417EB0u: goto label_80417EB0;
    case 0x80417EB4u: goto label_80417EB4;
    case 0x80417EB8u: goto label_80417EB8;
    case 0x80417EBCu: goto label_80417EBC;
    case 0x80417EC0u: goto label_80417EC0;
    case 0x80417EC4u: goto label_80417EC4;
    case 0x80417EC8u: goto label_80417EC8;
    case 0x80417ECCu: goto label_80417ECC;
    case 0x80417ED0u: goto label_80417ED0;
    case 0x80417ED4u: goto label_80417ED4;
    case 0x80417ED8u: goto label_80417ED8;
    case 0x80417EDCu: goto label_80417EDC;
    case 0x80417EE0u: goto label_80417EE0;
    case 0x80417EE4u: goto label_80417EE4;
    case 0x80417EE8u: goto label_80417EE8;
    case 0x80417EECu: goto label_80417EEC;
    case 0x80417EF0u: goto label_80417EF0;
    case 0x80417EF4u: goto label_80417EF4;
    case 0x80417EF8u: goto label_80417EF8;
    case 0x80417EFCu: goto label_80417EFC;
    case 0x80417F00u: goto label_80417F00;
    case 0x80417F04u: goto label_80417F04;
    case 0x80417F08u: goto label_80417F08;
    case 0x80417F0Cu: goto label_80417F0C;
    case 0x80417F10u: goto label_80417F10;
    case 0x80417F14u: goto label_80417F14;
    case 0x80417F18u: goto label_80417F18;
    case 0x80417F1Cu: goto label_80417F1C;
    case 0x80417F20u: goto label_80417F20;
    case 0x80417F24u: goto label_80417F24;
    case 0x80417F28u: goto label_80417F28;
    case 0x80417F2Cu: goto label_80417F2C;
    case 0x80417F30u: goto label_80417F30;
    case 0x80417F34u: goto label_80417F34;
    case 0x80417F38u: goto label_80417F38;
    case 0x80417F3Cu: goto label_80417F3C;
    case 0x80417F40u: goto label_80417F40;
    case 0x80417F44u: goto label_80417F44;
    case 0x80417F48u: goto label_80417F48;
    case 0x80417F4Cu: goto label_80417F4C;
    case 0x80417F50u: goto label_80417F50;
    case 0x80417F54u: goto label_80417F54;
    case 0x80417F58u: goto label_80417F58;
    case 0x80417F5Cu: goto label_80417F5C;
    case 0x80417F60u: goto label_80417F60;
    case 0x80417F64u: goto label_80417F64;
    case 0x80417F68u: goto label_80417F68;
    case 0x80417F6Cu: goto label_80417F6C;
    case 0x80417F70u: goto label_80417F70;
    case 0x80417F74u: goto label_80417F74;
    case 0x80417F78u: goto label_80417F78;
    case 0x80417F7Cu: goto label_80417F7C;
    case 0x80417F80u: goto label_80417F80;
    case 0x80417F84u: goto label_80417F84;
    case 0x80417F88u: goto label_80417F88;
    case 0x80417F8Cu: goto label_80417F8C;
    case 0x80417F90u: goto label_80417F90;
    case 0x80417F94u: goto label_80417F94;
    case 0x80417F98u: goto label_80417F98;
    case 0x80417F9Cu: goto label_80417F9C;
    case 0x80417FA0u: goto label_80417FA0;
    case 0x80417FA4u: goto label_80417FA4;
    case 0x80417FA8u: goto label_80417FA8;
    case 0x80417FACu: goto label_80417FAC;
    case 0x80417FB0u: goto label_80417FB0;
    case 0x80417FB4u: goto label_80417FB4;
    case 0x80417FB8u: goto label_80417FB8;
    case 0x80417FBCu: goto label_80417FBC;
    case 0x80417FC0u: goto label_80417FC0;
    case 0x80417FC4u: goto label_80417FC4;
    case 0x80417FC8u: goto label_80417FC8;
    case 0x80417FCCu: goto label_80417FCC;
    case 0x80417FD0u: goto label_80417FD0;
    case 0x80417FD4u: goto label_80417FD4;
    case 0x80417FD8u: goto label_80417FD8;
    case 0x80417FDCu: goto label_80417FDC;
    case 0x80417FE0u: goto label_80417FE0;
    case 0x80417FE4u: goto label_80417FE4;
    case 0x80417FE8u: goto label_80417FE8;
    case 0x80417FECu: goto label_80417FEC;
    case 0x80417FF0u: goto label_80417FF0;
    case 0x80417FF4u: goto label_80417FF4;
    case 0x80417FF8u: goto label_80417FF8;
    case 0x80417FFCu: goto label_80417FFC;
    case 0x80418000u: goto label_80418000;
    case 0x80418004u: goto label_80418004;
    case 0x80418008u: goto label_80418008;
    case 0x8041800Cu: goto label_8041800C;
    case 0x80418010u: goto label_80418010;
    case 0x80418014u: goto label_80418014;
    case 0x80418018u: goto label_80418018;
    case 0x8041801Cu: goto label_8041801C;
    case 0x80418020u: goto label_80418020;
    case 0x80418024u: goto label_80418024;
    case 0x80418028u: goto label_80418028;
    case 0x8041802Cu: goto label_8041802C;
    case 0x80418030u: goto label_80418030;
    case 0x80418034u: goto label_80418034;
    case 0x80418038u: goto label_80418038;
    case 0x8041803Cu: goto label_8041803C;
    case 0x80418040u: goto label_80418040;
    case 0x80418044u: goto label_80418044;
    case 0x80418048u: goto label_80418048;
    case 0x8041804Cu: goto label_8041804C;
    case 0x80418050u: goto label_80418050;
    case 0x80418054u: goto label_80418054;
    case 0x80418058u: goto label_80418058;
    case 0x8041805Cu: goto label_8041805C;
    case 0x80418060u: goto label_80418060;
    case 0x80418064u: goto label_80418064;
    case 0x80418068u: goto label_80418068;
    case 0x8041806Cu: goto label_8041806C;
    case 0x80418070u: goto label_80418070;
    case 0x80418074u: goto label_80418074;
    case 0x80418078u: goto label_80418078;
    case 0x8041807Cu: goto label_8041807C;
    case 0x80418080u: goto label_80418080;
    case 0x80418084u: goto label_80418084;
    case 0x80418088u: goto label_80418088;
    case 0x8041808Cu: goto label_8041808C;
    case 0x80418090u: goto label_80418090;
    case 0x80418094u: goto label_80418094;
    case 0x80418098u: goto label_80418098;
    case 0x8041809Cu: goto label_8041809C;
    case 0x804180A0u: goto label_804180A0;
    case 0x804180A4u: goto label_804180A4;
    case 0x804180A8u: goto label_804180A8;
    case 0x804180ACu: goto label_804180AC;
    case 0x804180B0u: goto label_804180B0;
    case 0x804180B4u: goto label_804180B4;
    case 0x804180B8u: goto label_804180B8;
    case 0x804180BCu: goto label_804180BC;
    case 0x804180C0u: goto label_804180C0;
    case 0x804180C4u: goto label_804180C4;
    case 0x804180C8u: goto label_804180C8;
    case 0x804180CCu: goto label_804180CC;
    case 0x804180D0u: goto label_804180D0;
    case 0x804180D4u: goto label_804180D4;
    case 0x804180D8u: goto label_804180D8;
    case 0x804180DCu: goto label_804180DC;
    case 0x804180E0u: goto label_804180E0;
    case 0x804180E4u: goto label_804180E4;
    case 0x804180E8u: goto label_804180E8;
    case 0x804180ECu: goto label_804180EC;
    case 0x804180F0u: goto label_804180F0;
    case 0x804180F4u: goto label_804180F4;
    case 0x804180F8u: goto label_804180F8;
    case 0x804180FCu: goto label_804180FC;
    case 0x80418100u: goto label_80418100;
    case 0x80418104u: goto label_80418104;
    case 0x80418108u: goto label_80418108;
    case 0x8041810Cu: goto label_8041810C;
    case 0x80418110u: goto label_80418110;
    case 0x80418114u: goto label_80418114;
    case 0x80418118u: goto label_80418118;
    case 0x8041811Cu: goto label_8041811C;
    case 0x80418120u: goto label_80418120;
    case 0x80418124u: goto label_80418124;
    case 0x80418128u: goto label_80418128;
    case 0x8041812Cu: goto label_8041812C;
    case 0x80418130u: goto label_80418130;
    case 0x80418134u: goto label_80418134;
    case 0x80418138u: goto label_80418138;
    case 0x8041813Cu: goto label_8041813C;
    case 0x80418140u: goto label_80418140;
    case 0x80418144u: goto label_80418144;
    case 0x80418148u: goto label_80418148;
    case 0x8041814Cu: goto label_8041814C;
    case 0x80418150u: goto label_80418150;
    case 0x80418154u: goto label_80418154;
    case 0x80418158u: goto label_80418158;
    case 0x8041815Cu: goto label_8041815C;
    case 0x80418160u: goto label_80418160;
    case 0x80418164u: goto label_80418164;
    case 0x80418168u: goto label_80418168;
    case 0x8041816Cu: goto label_8041816C;
    case 0x80418170u: goto label_80418170;
    case 0x80418174u: goto label_80418174;
    case 0x80418178u: goto label_80418178;
    case 0x8041817Cu: goto label_8041817C;
    case 0x80418180u: goto label_80418180;
    case 0x80418184u: goto label_80418184;
    case 0x80418188u: goto label_80418188;
    case 0x8041818Cu: goto label_8041818C;
    case 0x80418190u: goto label_80418190;
    case 0x80418194u: goto label_80418194;
    case 0x80418198u: goto label_80418198;
    case 0x8041819Cu: goto label_8041819C;
    case 0x804181A0u: goto label_804181A0;
    case 0x804181A4u: goto label_804181A4;
    case 0x804181A8u: goto label_804181A8;
    case 0x804181ACu: goto label_804181AC;
    case 0x804181B0u: goto label_804181B0;
    case 0x804181B4u: goto label_804181B4;
    case 0x804181B8u: goto label_804181B8;
    case 0x804181BCu: goto label_804181BC;
    case 0x804181C0u: goto label_804181C0;
    case 0x804181C4u: goto label_804181C4;
    case 0x804181C8u: goto label_804181C8;
    case 0x804181CCu: goto label_804181CC;
    case 0x804181D0u: goto label_804181D0;
    case 0x804181D4u: goto label_804181D4;
    case 0x804181D8u: goto label_804181D8;
    case 0x804181DCu: goto label_804181DC;
    case 0x804181E0u: goto label_804181E0;
    case 0x804181E4u: goto label_804181E4;
    case 0x804181E8u: goto label_804181E8;
    case 0x804181ECu: goto label_804181EC;
    case 0x804181F0u: goto label_804181F0;
    case 0x804181F4u: goto label_804181F4;
    case 0x804181F8u: goto label_804181F8;
    case 0x804181FCu: goto label_804181FC;
    case 0x80418200u: goto label_80418200;
    case 0x80418204u: goto label_80418204;
    case 0x80418208u: goto label_80418208;
    case 0x8041820Cu: goto label_8041820C;
    case 0x80418210u: goto label_80418210;
    case 0x80418214u: goto label_80418214;
    case 0x80418218u: goto label_80418218;
    case 0x8041821Cu: goto label_8041821C;
    case 0x80418220u: goto label_80418220;
    case 0x80418224u: goto label_80418224;
    case 0x80418228u: goto label_80418228;
    case 0x8041822Cu: goto label_8041822C;
    case 0x80418230u: goto label_80418230;
    case 0x80418234u: goto label_80418234;
    case 0x80418238u: goto label_80418238;
    case 0x8041823Cu: goto label_8041823C;
    case 0x80418240u: goto label_80418240;
    case 0x80418244u: goto label_80418244;
    case 0x80418248u: goto label_80418248;
    case 0x8041824Cu: goto label_8041824C;
    case 0x80418250u: goto label_80418250;
    case 0x80418254u: goto label_80418254;
    case 0x80418258u: goto label_80418258;
    case 0x8041825Cu: goto label_8041825C;
    case 0x80418260u: goto label_80418260;
    case 0x80418264u: goto label_80418264;
    case 0x80418268u: goto label_80418268;
    case 0x8041826Cu: goto label_8041826C;
    case 0x80418270u: goto label_80418270;
    case 0x80418274u: goto label_80418274;
    case 0x80418278u: goto label_80418278;
    case 0x8041827Cu: goto label_8041827C;
    case 0x80418280u: goto label_80418280;
    case 0x80418284u: goto label_80418284;
    case 0x80418288u: goto label_80418288;
    case 0x8041828Cu: goto label_8041828C;
    case 0x80418290u: goto label_80418290;
    case 0x80418294u: goto label_80418294;
    case 0x80418298u: goto label_80418298;
    case 0x8041829Cu: goto label_8041829C;
    case 0x804182A0u: goto label_804182A0;
    case 0x804182A4u: goto label_804182A4;
    case 0x804182A8u: goto label_804182A8;
    case 0x804182ACu: goto label_804182AC;
    case 0x804182B0u: goto label_804182B0;
    case 0x804182B4u: goto label_804182B4;
    case 0x804182B8u: goto label_804182B8;
    case 0x804182BCu: goto label_804182BC;
    case 0x804182C0u: goto label_804182C0;
    case 0x804182C4u: goto label_804182C4;
    case 0x804182C8u: goto label_804182C8;
    case 0x804182CCu: goto label_804182CC;
    case 0x804182D0u: goto label_804182D0;
    case 0x804182D4u: goto label_804182D4;
    case 0x804182D8u: goto label_804182D8;
    case 0x804182DCu: goto label_804182DC;
    case 0x804182E0u: goto label_804182E0;
    case 0x804182E4u: goto label_804182E4;
    case 0x804182E8u: goto label_804182E8;
    case 0x804182ECu: goto label_804182EC;
    case 0x804182F0u: goto label_804182F0;
    case 0x804182F4u: goto label_804182F4;
    case 0x804182F8u: goto label_804182F8;
    case 0x804182FCu: goto label_804182FC;
    case 0x80418300u: goto label_80418300;
    case 0x80418304u: goto label_80418304;
    case 0x80418308u: goto label_80418308;
    case 0x8041830Cu: goto label_8041830C;
    case 0x80418310u: goto label_80418310;
    case 0x80418314u: goto label_80418314;
    case 0x80418318u: goto label_80418318;
    case 0x8041831Cu: goto label_8041831C;
    case 0x80418320u: goto label_80418320;
    case 0x80418324u: goto label_80418324;
    case 0x80418328u: goto label_80418328;
    case 0x8041832Cu: goto label_8041832C;
    case 0x80418330u: goto label_80418330;
    case 0x80418334u: goto label_80418334;
    case 0x80418338u: goto label_80418338;
    case 0x8041833Cu: goto label_8041833C;
    case 0x80418340u: goto label_80418340;
    case 0x80418344u: goto label_80418344;
    case 0x80418348u: goto label_80418348;
    case 0x8041834Cu: goto label_8041834C;
    case 0x80418350u: goto label_80418350;
    case 0x80418354u: goto label_80418354;
    case 0x80418358u: goto label_80418358;
    case 0x8041835Cu: goto label_8041835C;
    case 0x80418360u: goto label_80418360;
    case 0x80418364u: goto label_80418364;
    case 0x80418368u: goto label_80418368;
    case 0x8041836Cu: goto label_8041836C;
    case 0x80418370u: goto label_80418370;
    case 0x80418374u: goto label_80418374;
    case 0x80418378u: goto label_80418378;
    case 0x8041837Cu: goto label_8041837C;
    case 0x80418380u: goto label_80418380;
    case 0x80418384u: goto label_80418384;
    case 0x80418388u: goto label_80418388;
    case 0x8041838Cu: goto label_8041838C;
    case 0x80418390u: goto label_80418390;
    case 0x80418394u: goto label_80418394;
    case 0x80418398u: goto label_80418398;
    case 0x8041839Cu: goto label_8041839C;
    case 0x804183A0u: goto label_804183A0;
    case 0x804183A4u: goto label_804183A4;
    case 0x804183A8u: goto label_804183A8;
    case 0x804183ACu: goto label_804183AC;
    case 0x804183B0u: goto label_804183B0;
    case 0x804183B4u: goto label_804183B4;
    case 0x804183B8u: goto label_804183B8;
    case 0x804183BCu: goto label_804183BC;
    case 0x804183C0u: goto label_804183C0;
    case 0x804183C4u: goto label_804183C4;
    case 0x804183C8u: goto label_804183C8;
    case 0x804183CCu: goto label_804183CC;
    case 0x804183D0u: goto label_804183D0;
    case 0x804183D4u: goto label_804183D4;
    case 0x804183D8u: goto label_804183D8;
    case 0x804183DCu: goto label_804183DC;
    case 0x804183E0u: goto label_804183E0;
    case 0x804183E4u: goto label_804183E4;
    case 0x804183E8u: goto label_804183E8;
    case 0x804183ECu: goto label_804183EC;
    case 0x804183F0u: goto label_804183F0;
    case 0x804183F4u: goto label_804183F4;
    case 0x804183F8u: goto label_804183F8;
    case 0x804183FCu: goto label_804183FC;
    case 0x80418400u: goto label_80418400;
    case 0x80418404u: goto label_80418404;
    case 0x80418408u: goto label_80418408;
    case 0x8041840Cu: goto label_8041840C;
    case 0x80418410u: goto label_80418410;
    case 0x80418414u: goto label_80418414;
    case 0x80418418u: goto label_80418418;
    case 0x8041841Cu: goto label_8041841C;
    case 0x80418420u: goto label_80418420;
    case 0x80418424u: goto label_80418424;
    case 0x80418428u: goto label_80418428;
    case 0x8041842Cu: goto label_8041842C;
    case 0x80418430u: goto label_80418430;
    case 0x80418434u: goto label_80418434;
    case 0x80418438u: goto label_80418438;
    case 0x8041843Cu: goto label_8041843C;
    case 0x80418440u: goto label_80418440;
    case 0x80418444u: goto label_80418444;
    case 0x80418448u: goto label_80418448;
    case 0x8041844Cu: goto label_8041844C;
    case 0x80418450u: goto label_80418450;
    case 0x80418454u: goto label_80418454;
    case 0x80418458u: goto label_80418458;
    case 0x8041845Cu: goto label_8041845C;
    case 0x80418460u: goto label_80418460;
    case 0x80418464u: goto label_80418464;
    case 0x80418468u: goto label_80418468;
    case 0x8041846Cu: goto label_8041846C;
    case 0x80418470u: goto label_80418470;
    case 0x80418474u: goto label_80418474;
    case 0x80418478u: goto label_80418478;
    case 0x8041847Cu: goto label_8041847C;
    case 0x80418480u: goto label_80418480;
    case 0x80418484u: goto label_80418484;
    case 0x80418488u: goto label_80418488;
    case 0x8041848Cu: goto label_8041848C;
    case 0x80418490u: goto label_80418490;
    case 0x80418494u: goto label_80418494;
    case 0x80418498u: goto label_80418498;
    case 0x8041849Cu: goto label_8041849C;
    case 0x804184A0u: goto label_804184A0;
    case 0x804184A4u: goto label_804184A4;
    case 0x804184A8u: goto label_804184A8;
    case 0x804184ACu: goto label_804184AC;
    case 0x804184B0u: goto label_804184B0;
    case 0x804184B4u: goto label_804184B4;
    case 0x804184B8u: goto label_804184B8;
    case 0x804184BCu: goto label_804184BC;
    case 0x804184C0u: goto label_804184C0;
    case 0x804184C4u: goto label_804184C4;
    case 0x804184C8u: goto label_804184C8;
    case 0x804184CCu: goto label_804184CC;
    case 0x804184D0u: goto label_804184D0;
    case 0x804184D4u: goto label_804184D4;
    case 0x804184D8u: goto label_804184D8;
    case 0x804184DCu: goto label_804184DC;
    case 0x804184E0u: goto label_804184E0;
    case 0x804184E4u: goto label_804184E4;
    case 0x804184E8u: goto label_804184E8;
    case 0x804184ECu: goto label_804184EC;
    case 0x804184F0u: goto label_804184F0;
    case 0x804184F4u: goto label_804184F4;
    case 0x804184F8u: goto label_804184F8;
    case 0x804184FCu: goto label_804184FC;
    case 0x80418500u: goto label_80418500;
    case 0x80418504u: goto label_80418504;
    case 0x80418508u: goto label_80418508;
    case 0x8041850Cu: goto label_8041850C;
    case 0x80418510u: goto label_80418510;
    case 0x80418514u: goto label_80418514;
    case 0x80418518u: goto label_80418518;
    case 0x8041851Cu: goto label_8041851C;
    case 0x80418520u: goto label_80418520;
    case 0x80418524u: goto label_80418524;
    case 0x80418528u: goto label_80418528;
    case 0x8041852Cu: goto label_8041852C;
    case 0x80418530u: goto label_80418530;
    case 0x80418534u: goto label_80418534;
    case 0x80418538u: goto label_80418538;
    case 0x8041853Cu: goto label_8041853C;
    case 0x80418540u: goto label_80418540;
    case 0x80418544u: goto label_80418544;
    case 0x80418548u: goto label_80418548;
    case 0x8041854Cu: goto label_8041854C;
    case 0x80418550u: goto label_80418550;
    case 0x80418554u: goto label_80418554;
    case 0x80418558u: goto label_80418558;
    case 0x8041855Cu: goto label_8041855C;
    case 0x80418560u: goto label_80418560;
    case 0x80418564u: goto label_80418564;
    case 0x80418568u: goto label_80418568;
    case 0x8041856Cu: goto label_8041856C;
    case 0x80418570u: goto label_80418570;
    case 0x80418574u: goto label_80418574;
    case 0x80418578u: goto label_80418578;
    case 0x8041857Cu: goto label_8041857C;
    case 0x80418580u: goto label_80418580;
    case 0x80418584u: goto label_80418584;
    case 0x80418588u: goto label_80418588;
    case 0x8041858Cu: goto label_8041858C;
    case 0x80418590u: goto label_80418590;
    case 0x80418594u: goto label_80418594;
    case 0x80418598u: goto label_80418598;
    case 0x8041859Cu: goto label_8041859C;
    case 0x804185A0u: goto label_804185A0;
    case 0x804185A4u: goto label_804185A4;
    case 0x804185A8u: goto label_804185A8;
    case 0x804185ACu: goto label_804185AC;
    case 0x804185B0u: goto label_804185B0;
    case 0x804185B4u: goto label_804185B4;
    case 0x804185B8u: goto label_804185B8;
    case 0x804185BCu: goto label_804185BC;
    case 0x804185C0u: goto label_804185C0;
    case 0x804185C4u: goto label_804185C4;
    case 0x804185C8u: goto label_804185C8;
    case 0x804185CCu: goto label_804185CC;
    case 0x804185D0u: goto label_804185D0;
    case 0x804185D4u: goto label_804185D4;
    case 0x804185D8u: goto label_804185D8;
    case 0x804185DCu: goto label_804185DC;
    case 0x804185E0u: goto label_804185E0;
    case 0x804185E4u: goto label_804185E4;
    case 0x804185E8u: goto label_804185E8;
    case 0x804185ECu: goto label_804185EC;
    case 0x804185F0u: goto label_804185F0;
    case 0x804185F4u: goto label_804185F4;
    case 0x804185F8u: goto label_804185F8;
    case 0x804185FCu: goto label_804185FC;
    case 0x80418600u: goto label_80418600;
    case 0x80418604u: goto label_80418604;
    case 0x80418608u: goto label_80418608;
    case 0x8041860Cu: goto label_8041860C;
    case 0x80418610u: goto label_80418610;
    case 0x80418614u: goto label_80418614;
    case 0x80418618u: goto label_80418618;
    case 0x8041861Cu: goto label_8041861C;
    case 0x80418620u: goto label_80418620;
    case 0x80418624u: goto label_80418624;
    case 0x80418628u: goto label_80418628;
    case 0x8041862Cu: goto label_8041862C;
    case 0x80418630u: goto label_80418630;
    case 0x80418634u: goto label_80418634;
    case 0x80418638u: goto label_80418638;
    case 0x8041863Cu: goto label_8041863C;
    case 0x80418640u: goto label_80418640;
    case 0x80418644u: goto label_80418644;
    case 0x80418648u: goto label_80418648;
    case 0x8041864Cu: goto label_8041864C;
    case 0x80418650u: goto label_80418650;
    case 0x80418654u: goto label_80418654;
    case 0x80418658u: goto label_80418658;
    case 0x8041865Cu: goto label_8041865C;
    case 0x80418660u: goto label_80418660;
    case 0x80418664u: goto label_80418664;
    case 0x80418668u: goto label_80418668;
    case 0x8041866Cu: goto label_8041866C;
    case 0x80418670u: goto label_80418670;
    case 0x80418674u: goto label_80418674;
    case 0x80418678u: goto label_80418678;
    case 0x8041867Cu: goto label_8041867C;
    case 0x80418680u: goto label_80418680;
    case 0x80418684u: goto label_80418684;
    case 0x80418688u: goto label_80418688;
    case 0x8041868Cu: goto label_8041868C;
    case 0x80418690u: goto label_80418690;
    case 0x80418694u: goto label_80418694;
    case 0x80418698u: goto label_80418698;
    case 0x8041869Cu: goto label_8041869C;
    case 0x804186A0u: goto label_804186A0;
    case 0x804186A4u: goto label_804186A4;
    case 0x804186A8u: goto label_804186A8;
    case 0x804186ACu: goto label_804186AC;
    case 0x804186B0u: goto label_804186B0;
    case 0x804186B4u: goto label_804186B4;
    case 0x804186B8u: goto label_804186B8;
    case 0x804186BCu: goto label_804186BC;
    case 0x804186C0u: goto label_804186C0;
    case 0x804186C4u: goto label_804186C4;
    case 0x804186C8u: goto label_804186C8;
    case 0x804186CCu: goto label_804186CC;
    case 0x804186D0u: goto label_804186D0;
    case 0x804186D4u: goto label_804186D4;
    case 0x804186D8u: goto label_804186D8;
    case 0x804186DCu: goto label_804186DC;
    case 0x804186E0u: goto label_804186E0;
    case 0x804186E4u: goto label_804186E4;
    case 0x804186E8u: goto label_804186E8;
    case 0x804186ECu: goto label_804186EC;
    case 0x804186F0u: goto label_804186F0;
    case 0x804186F4u: goto label_804186F4;
    case 0x804186F8u: goto label_804186F8;
    case 0x804186FCu: goto label_804186FC;
    case 0x80418700u: goto label_80418700;
    case 0x80418704u: goto label_80418704;
    case 0x80418708u: goto label_80418708;
    case 0x8041870Cu: goto label_8041870C;
    case 0x80418710u: goto label_80418710;
    case 0x80418714u: goto label_80418714;
    case 0x80418718u: goto label_80418718;
    case 0x8041871Cu: goto label_8041871C;
    case 0x80418720u: goto label_80418720;
    case 0x80418724u: goto label_80418724;
    case 0x80418728u: goto label_80418728;
    case 0x8041872Cu: goto label_8041872C;
    case 0x80418730u: goto label_80418730;
    case 0x80418734u: goto label_80418734;
    case 0x80418738u: goto label_80418738;
    case 0x8041873Cu: goto label_8041873C;
    case 0x80418740u: goto label_80418740;
    case 0x80418744u: goto label_80418744;
    case 0x80418748u: goto label_80418748;
    case 0x8041874Cu: goto label_8041874C;
    case 0x80418750u: goto label_80418750;
    case 0x80418754u: goto label_80418754;
    case 0x80418758u: goto label_80418758;
    case 0x8041875Cu: goto label_8041875C;
    case 0x80418760u: goto label_80418760;
    case 0x80418764u: goto label_80418764;
    case 0x80418768u: goto label_80418768;
    case 0x8041876Cu: goto label_8041876C;
    case 0x80418770u: goto label_80418770;
    case 0x80418774u: goto label_80418774;
    case 0x80418778u: goto label_80418778;
    case 0x8041877Cu: goto label_8041877C;
    case 0x80418780u: goto label_80418780;
    case 0x80418784u: goto label_80418784;
    case 0x80418788u: goto label_80418788;
    case 0x8041878Cu: goto label_8041878C;
    case 0x80418790u: goto label_80418790;
    case 0x80418794u: goto label_80418794;
    case 0x80418798u: goto label_80418798;
    case 0x8041879Cu: goto label_8041879C;
    case 0x804187A0u: goto label_804187A0;
    case 0x804187A4u: goto label_804187A4;
    case 0x804187A8u: goto label_804187A8;
    case 0x804187ACu: goto label_804187AC;
    case 0x804187B0u: goto label_804187B0;
    case 0x804187B4u: goto label_804187B4;
    case 0x804187B8u: goto label_804187B8;
    case 0x804187BCu: goto label_804187BC;
    case 0x804187C0u: goto label_804187C0;
    case 0x804187C4u: goto label_804187C4;
    case 0x804187C8u: goto label_804187C8;
    case 0x804187CCu: goto label_804187CC;
    case 0x804187D0u: goto label_804187D0;
    case 0x804187D4u: goto label_804187D4;
    case 0x804187D8u: goto label_804187D8;
    case 0x804187DCu: goto label_804187DC;
    case 0x804187E0u: goto label_804187E0;
    case 0x804187E4u: goto label_804187E4;
    case 0x804187E8u: goto label_804187E8;
    case 0x804187ECu: goto label_804187EC;
    case 0x804187F0u: goto label_804187F0;
    case 0x804187F4u: goto label_804187F4;
    case 0x804187F8u: goto label_804187F8;
    case 0x804187FCu: goto label_804187FC;
    case 0x80418800u: goto label_80418800;
    case 0x80418804u: goto label_80418804;
    case 0x80418808u: goto label_80418808;
    case 0x8041880Cu: goto label_8041880C;
    case 0x80418810u: goto label_80418810;
    case 0x80418814u: goto label_80418814;
    case 0x80418818u: goto label_80418818;
    case 0x8041881Cu: goto label_8041881C;
    case 0x80418820u: goto label_80418820;
    case 0x80418824u: goto label_80418824;
    case 0x80418828u: goto label_80418828;
    case 0x8041882Cu: goto label_8041882C;
    case 0x80418830u: goto label_80418830;
    case 0x80418834u: goto label_80418834;
    case 0x80418838u: goto label_80418838;
    case 0x8041883Cu: goto label_8041883C;
    case 0x80418840u: goto label_80418840;
    case 0x80418844u: goto label_80418844;
    case 0x80418848u: goto label_80418848;
    case 0x8041884Cu: goto label_8041884C;
    case 0x80418850u: goto label_80418850;
    case 0x80418854u: goto label_80418854;
    case 0x80418858u: goto label_80418858;
    case 0x8041885Cu: goto label_8041885C;
    case 0x80418860u: goto label_80418860;
    case 0x80418864u: goto label_80418864;
    case 0x80418868u: goto label_80418868;
    case 0x8041886Cu: goto label_8041886C;
    case 0x80418870u: goto label_80418870;
    case 0x80418874u: goto label_80418874;
    case 0x80418878u: goto label_80418878;
    case 0x8041887Cu: goto label_8041887C;
    case 0x80418880u: goto label_80418880;
    case 0x80418884u: goto label_80418884;
    case 0x80418888u: goto label_80418888;
    case 0x8041888Cu: goto label_8041888C;
    case 0x80418890u: goto label_80418890;
    case 0x80418894u: goto label_80418894;
    case 0x80418898u: goto label_80418898;
    case 0x8041889Cu: goto label_8041889C;
    case 0x804188A0u: goto label_804188A0;
    case 0x804188A4u: goto label_804188A4;
    case 0x804188A8u: goto label_804188A8;
    case 0x804188ACu: goto label_804188AC;
    case 0x804188B0u: goto label_804188B0;
    case 0x804188B4u: goto label_804188B4;
    case 0x804188B8u: goto label_804188B8;
    case 0x804188BCu: goto label_804188BC;
    case 0x804188C0u: goto label_804188C0;
    case 0x804188C4u: goto label_804188C4;
    case 0x804188C8u: goto label_804188C8;
    case 0x804188CCu: goto label_804188CC;
    case 0x804188D0u: goto label_804188D0;
    case 0x804188D4u: goto label_804188D4;
    case 0x804188D8u: goto label_804188D8;
    case 0x804188DCu: goto label_804188DC;
    case 0x804188E0u: goto label_804188E0;
    case 0x804188E4u: goto label_804188E4;
    case 0x804188E8u: goto label_804188E8;
    case 0x804188ECu: goto label_804188EC;
    case 0x804188F0u: goto label_804188F0;
    case 0x804188F4u: goto label_804188F4;
    case 0x804188F8u: goto label_804188F8;
    case 0x804188FCu: goto label_804188FC;
    case 0x80418900u: goto label_80418900;
    case 0x80418904u: goto label_80418904;
    case 0x80418908u: goto label_80418908;
    case 0x8041890Cu: goto label_8041890C;
    case 0x80418910u: goto label_80418910;
    case 0x80418914u: goto label_80418914;
    case 0x80418918u: goto label_80418918;
    case 0x8041891Cu: goto label_8041891C;
    case 0x80418920u: goto label_80418920;
    case 0x80418924u: goto label_80418924;
    case 0x80418928u: goto label_80418928;
    case 0x8041892Cu: goto label_8041892C;
    case 0x80418930u: goto label_80418930;
    case 0x80418934u: goto label_80418934;
    case 0x80418938u: goto label_80418938;
    case 0x8041893Cu: goto label_8041893C;
    case 0x80418940u: goto label_80418940;
    case 0x80418944u: goto label_80418944;
    case 0x80418948u: goto label_80418948;
    case 0x8041894Cu: goto label_8041894C;
    case 0x80418950u: goto label_80418950;
    case 0x80418954u: goto label_80418954;
    case 0x80418958u: goto label_80418958;
    case 0x8041895Cu: goto label_8041895C;
    case 0x80418960u: goto label_80418960;
    case 0x80418964u: goto label_80418964;
    case 0x80418968u: goto label_80418968;
    case 0x8041896Cu: goto label_8041896C;
    case 0x80418970u: goto label_80418970;
    case 0x80418974u: goto label_80418974;
    case 0x80418978u: goto label_80418978;
    case 0x8041897Cu: goto label_8041897C;
    case 0x80418980u: goto label_80418980;
    case 0x80418984u: goto label_80418984;
    case 0x80418988u: goto label_80418988;
    case 0x8041898Cu: goto label_8041898C;
    case 0x80418990u: goto label_80418990;
    case 0x80418994u: goto label_80418994;
    case 0x80418998u: goto label_80418998;
    case 0x8041899Cu: goto label_8041899C;
    case 0x804189A0u: goto label_804189A0;
    case 0x804189A4u: goto label_804189A4;
    case 0x804189A8u: goto label_804189A8;
    case 0x804189ACu: goto label_804189AC;
    case 0x804189B0u: goto label_804189B0;
    case 0x804189B4u: goto label_804189B4;
    case 0x804189B8u: goto label_804189B8;
    case 0x804189BCu: goto label_804189BC;
    case 0x804189C0u: goto label_804189C0;
    case 0x804189C4u: goto label_804189C4;
    case 0x804189C8u: goto label_804189C8;
    case 0x804189CCu: goto label_804189CC;
    case 0x804189D0u: goto label_804189D0;
    case 0x804189D4u: goto label_804189D4;
    case 0x804189D8u: goto label_804189D8;
    case 0x804189DCu: goto label_804189DC;
    case 0x804189E0u: goto label_804189E0;
    case 0x804189E4u: goto label_804189E4;
    case 0x804189E8u: goto label_804189E8;
    case 0x804189ECu: goto label_804189EC;
    case 0x804189F0u: goto label_804189F0;
    case 0x804189F4u: goto label_804189F4;
    case 0x804189F8u: goto label_804189F8;
    case 0x804189FCu: goto label_804189FC;
    case 0x80418A00u: goto label_80418A00;
    case 0x80418A04u: goto label_80418A04;
    case 0x80418A08u: goto label_80418A08;
    case 0x80418A0Cu: goto label_80418A0C;
    case 0x80418A10u: goto label_80418A10;
    case 0x80418A14u: goto label_80418A14;
    case 0x80418A18u: goto label_80418A18;
    case 0x80418A1Cu: goto label_80418A1C;
    case 0x80418A20u: goto label_80418A20;
    case 0x80418A24u: goto label_80418A24;
    case 0x80418A28u: goto label_80418A28;
    case 0x80418A2Cu: goto label_80418A2C;
    case 0x80418A30u: goto label_80418A30;
    case 0x80418A34u: goto label_80418A34;
    case 0x80418A38u: goto label_80418A38;
    case 0x80418A3Cu: goto label_80418A3C;
    case 0x80418A40u: goto label_80418A40;
    case 0x80418A44u: goto label_80418A44;
    case 0x80418A48u: goto label_80418A48;
    case 0x80418A4Cu: goto label_80418A4C;
    case 0x80418A50u: goto label_80418A50;
    case 0x80418A54u: goto label_80418A54;
    case 0x80418A58u: goto label_80418A58;
    case 0x80418A5Cu: goto label_80418A5C;
    case 0x80418A60u: goto label_80418A60;
    case 0x80418A64u: goto label_80418A64;
    case 0x80418A68u: goto label_80418A68;
    case 0x80418A6Cu: goto label_80418A6C;
    case 0x80418A70u: goto label_80418A70;
    case 0x80418A74u: goto label_80418A74;
    case 0x80418A78u: goto label_80418A78;
    case 0x80418A7Cu: goto label_80418A7C;
    case 0x80418A80u: goto label_80418A80;
    case 0x80418A84u: goto label_80418A84;
    case 0x80418A88u: goto label_80418A88;
    case 0x80418A8Cu: goto label_80418A8C;
    case 0x80418A90u: goto label_80418A90;
    case 0x80418A94u: goto label_80418A94;
    case 0x80418A98u: goto label_80418A98;
    case 0x80418A9Cu: goto label_80418A9C;
    case 0x80418AA0u: goto label_80418AA0;
    case 0x80418AA4u: goto label_80418AA4;
    case 0x80418AA8u: goto label_80418AA8;
    case 0x80418AACu: goto label_80418AAC;
    case 0x80418AB0u: goto label_80418AB0;
    case 0x80418AB4u: goto label_80418AB4;
    case 0x80418AB8u: goto label_80418AB8;
    case 0x80418ABCu: goto label_80418ABC;
    case 0x80418AC0u: goto label_80418AC0;
    case 0x80418AC4u: goto label_80418AC4;
    case 0x80418AC8u: goto label_80418AC8;
    case 0x80418ACCu: goto label_80418ACC;
    case 0x80418AD0u: goto label_80418AD0;
    case 0x80418AD4u: goto label_80418AD4;
    case 0x80418AD8u: goto label_80418AD8;
    case 0x80418ADCu: goto label_80418ADC;
    case 0x80418AE0u: goto label_80418AE0;
    case 0x80418AE4u: goto label_80418AE4;
    case 0x80418AE8u: goto label_80418AE8;
    case 0x80418AECu: goto label_80418AEC;
    case 0x80418AF0u: goto label_80418AF0;
    case 0x80418AF4u: goto label_80418AF4;
    case 0x80418AF8u: goto label_80418AF8;
    case 0x80418AFCu: goto label_80418AFC;
    case 0x80418B00u: goto label_80418B00;
    case 0x80418B04u: goto label_80418B04;
    case 0x80418B08u: goto label_80418B08;
    case 0x80418B0Cu: goto label_80418B0C;
    case 0x80418B10u: goto label_80418B10;
    case 0x80418B14u: goto label_80418B14;
    case 0x80418B18u: goto label_80418B18;
    case 0x80418B1Cu: goto label_80418B1C;
    case 0x80418B20u: goto label_80418B20;
    case 0x80418B24u: goto label_80418B24;
    case 0x80418B28u: goto label_80418B28;
    case 0x80418B2Cu: goto label_80418B2C;
    case 0x80418B30u: goto label_80418B30;
    case 0x80418B34u: goto label_80418B34;
    case 0x80418B38u: goto label_80418B38;
    case 0x80418B3Cu: goto label_80418B3C;
    case 0x80418B40u: goto label_80418B40;
    case 0x80418B44u: goto label_80418B44;
    case 0x80418B48u: goto label_80418B48;
    case 0x80418B4Cu: goto label_80418B4C;
    case 0x80418B50u: goto label_80418B50;
    case 0x80418B54u: goto label_80418B54;
    case 0x80418B58u: goto label_80418B58;
    case 0x80418B5Cu: goto label_80418B5C;
    case 0x80418B60u: goto label_80418B60;
    case 0x80418B64u: goto label_80418B64;
    case 0x80418B68u: goto label_80418B68;
    case 0x80418B6Cu: goto label_80418B6C;
    case 0x80418B70u: goto label_80418B70;
    case 0x80418B74u: goto label_80418B74;
    case 0x80418B78u: goto label_80418B78;
    case 0x80418B7Cu: goto label_80418B7C;
    case 0x80418B80u: goto label_80418B80;
    case 0x80418B84u: goto label_80418B84;
    case 0x80418B88u: goto label_80418B88;
    case 0x80418B8Cu: goto label_80418B8C;
    case 0x80418B90u: goto label_80418B90;
    case 0x80418B94u: goto label_80418B94;
    case 0x80418B98u: goto label_80418B98;
    case 0x80418B9Cu: goto label_80418B9C;
    case 0x80418BA0u: goto label_80418BA0;
    case 0x80418BA4u: goto label_80418BA4;
    case 0x80418BA8u: goto label_80418BA8;
    case 0x80418BACu: goto label_80418BAC;
    case 0x80418BB0u: goto label_80418BB0;
    case 0x80418BB4u: goto label_80418BB4;
    case 0x80418BB8u: goto label_80418BB8;
    case 0x80418BBCu: goto label_80418BBC;
    case 0x80418BC0u: goto label_80418BC0;
    case 0x80418BC4u: goto label_80418BC4;
    case 0x80418BC8u: goto label_80418BC8;
    case 0x80418BCCu: goto label_80418BCC;
    case 0x80418BD0u: goto label_80418BD0;
    case 0x80418BD4u: goto label_80418BD4;
    case 0x80418BD8u: goto label_80418BD8;
    case 0x80418BDCu: goto label_80418BDC;
    case 0x80418BE0u: goto label_80418BE0;
    case 0x80418BE4u: goto label_80418BE4;
    case 0x80418BE8u: goto label_80418BE8;
    case 0x80418BECu: goto label_80418BEC;
    case 0x80418BF0u: goto label_80418BF0;
    case 0x80418BF4u: goto label_80418BF4;
    case 0x80418BF8u: goto label_80418BF8;
    case 0x80418BFCu: goto label_80418BFC;
    case 0x80418C00u: goto label_80418C00;
    case 0x80418C04u: goto label_80418C04;
    case 0x80418C08u: goto label_80418C08;
    case 0x80418C0Cu: goto label_80418C0C;
    case 0x80418C10u: goto label_80418C10;
    case 0x80418C14u: goto label_80418C14;
    case 0x80418C18u: goto label_80418C18;
    case 0x80418C1Cu: goto label_80418C1C;
    case 0x80418C20u: goto label_80418C20;
    case 0x80418C24u: goto label_80418C24;
    case 0x80418C28u: goto label_80418C28;
    case 0x80418C2Cu: goto label_80418C2C;
    case 0x80418C30u: goto label_80418C30;
    case 0x80418C34u: goto label_80418C34;
    case 0x80418C38u: goto label_80418C38;
    case 0x80418C3Cu: goto label_80418C3C;
    case 0x80418C40u: goto label_80418C40;
    case 0x80418C44u: goto label_80418C44;
    case 0x80418C48u: goto label_80418C48;
    case 0x80418C4Cu: goto label_80418C4C;
    case 0x80418C50u: goto label_80418C50;
    case 0x80418C54u: goto label_80418C54;
    case 0x80418C58u: goto label_80418C58;
    case 0x80418C5Cu: goto label_80418C5C;
    case 0x80418C60u: goto label_80418C60;
    case 0x80418C64u: goto label_80418C64;
    case 0x80418C68u: goto label_80418C68;
    case 0x80418C6Cu: goto label_80418C6C;
    case 0x80418C70u: goto label_80418C70;
    case 0x80418C74u: goto label_80418C74;
    case 0x80418C78u: goto label_80418C78;
    case 0x80418C7Cu: goto label_80418C7C;
    case 0x80418C80u: goto label_80418C80;
    case 0x80418C84u: goto label_80418C84;
    case 0x80418C88u: goto label_80418C88;
    case 0x80418C8Cu: goto label_80418C8C;
    case 0x80418C90u: goto label_80418C90;
    case 0x80418C94u: goto label_80418C94;
    case 0x80418C98u: goto label_80418C98;
    case 0x80418C9Cu: goto label_80418C9C;
    case 0x80418CA0u: goto label_80418CA0;
    case 0x80418CA4u: goto label_80418CA4;
    case 0x80418CA8u: goto label_80418CA8;
    case 0x80418CACu: goto label_80418CAC;
    case 0x80418CB0u: goto label_80418CB0;
    case 0x80418CB4u: goto label_80418CB4;
    case 0x80418CB8u: goto label_80418CB8;
    case 0x80418CBCu: goto label_80418CBC;
    case 0x80418CC0u: goto label_80418CC0;
    case 0x80418CC4u: goto label_80418CC4;
    case 0x80418CC8u: goto label_80418CC8;
    case 0x80418CCCu: goto label_80418CCC;
    case 0x80418CD0u: goto label_80418CD0;
    case 0x80418CD4u: goto label_80418CD4;
    case 0x80418CD8u: goto label_80418CD8;
    case 0x80418CDCu: goto label_80418CDC;
    case 0x80418CE0u: goto label_80418CE0;
    case 0x80418CE4u: goto label_80418CE4;
    case 0x80418CE8u: goto label_80418CE8;
    case 0x80418CECu: goto label_80418CEC;
    case 0x80418CF0u: goto label_80418CF0;
    case 0x80418CF4u: goto label_80418CF4;
    case 0x80418CF8u: goto label_80418CF8;
    case 0x80418CFCu: goto label_80418CFC;
    case 0x80418D00u: goto label_80418D00;
    case 0x80418D04u: goto label_80418D04;
    case 0x80418D08u: goto label_80418D08;
    case 0x80418D0Cu: goto label_80418D0C;
    case 0x80418D10u: goto label_80418D10;
    case 0x80418D14u: goto label_80418D14;
    case 0x80418D18u: goto label_80418D18;
    case 0x80418D1Cu: goto label_80418D1C;
    case 0x80418D20u: goto label_80418D20;
    case 0x80418D24u: goto label_80418D24;
    case 0x80418D28u: goto label_80418D28;
    case 0x80418D2Cu: goto label_80418D2C;
    case 0x80418D30u: goto label_80418D30;
    case 0x80418D34u: goto label_80418D34;
    case 0x80418D38u: goto label_80418D38;
    case 0x80418D3Cu: goto label_80418D3C;
    case 0x80418D40u: goto label_80418D40;
    case 0x80418D44u: goto label_80418D44;
    case 0x80418D48u: goto label_80418D48;
    case 0x80418D4Cu: goto label_80418D4C;
    case 0x80418D50u: goto label_80418D50;
    case 0x80418D54u: goto label_80418D54;
    case 0x80418D58u: goto label_80418D58;
    case 0x80418D5Cu: goto label_80418D5C;
    case 0x80418D60u: goto label_80418D60;
    case 0x80418D64u: goto label_80418D64;
    case 0x80418D68u: goto label_80418D68;
    case 0x80418D6Cu: goto label_80418D6C;
    case 0x80418D70u: goto label_80418D70;
    case 0x80418D74u: goto label_80418D74;
    case 0x80418D78u: goto label_80418D78;
    case 0x80418D7Cu: goto label_80418D7C;
    case 0x80418D80u: goto label_80418D80;
    case 0x80418D84u: goto label_80418D84;
    case 0x80418D88u: goto label_80418D88;
    case 0x80418D8Cu: goto label_80418D8C;
    case 0x80418D90u: goto label_80418D90;
    case 0x80418D94u: goto label_80418D94;
    case 0x80418D98u: goto label_80418D98;
    case 0x80418D9Cu: goto label_80418D9C;
    case 0x80418DA0u: goto label_80418DA0;
    case 0x80418DA4u: goto label_80418DA4;
    case 0x80418DA8u: goto label_80418DA8;
    case 0x80418DACu: goto label_80418DAC;
    case 0x80418DB0u: goto label_80418DB0;
    case 0x80418DB4u: goto label_80418DB4;
    case 0x80418DB8u: goto label_80418DB8;
    case 0x80418DBCu: goto label_80418DBC;
    case 0x80418DC0u: goto label_80418DC0;
    case 0x80418DC4u: goto label_80418DC4;
    case 0x80418DC8u: goto label_80418DC8;
    case 0x80418DCCu: goto label_80418DCC;
    case 0x80418DD0u: goto label_80418DD0;
    case 0x80418DD4u: goto label_80418DD4;
    case 0x80418DD8u: goto label_80418DD8;
    case 0x80418DDCu: goto label_80418DDC;
    case 0x80418DE0u: goto label_80418DE0;
    case 0x80418DE4u: goto label_80418DE4;
    case 0x80418DE8u: goto label_80418DE8;
    case 0x80418DECu: goto label_80418DEC;
    case 0x80418DF0u: goto label_80418DF0;
    case 0x80418DF4u: goto label_80418DF4;
    case 0x80418DF8u: goto label_80418DF8;
    case 0x80418DFCu: goto label_80418DFC;
    case 0x80418E00u: goto label_80418E00;
    case 0x80418E04u: goto label_80418E04;
    case 0x80418E08u: goto label_80418E08;
    case 0x80418E0Cu: goto label_80418E0C;
    case 0x80418E10u: goto label_80418E10;
    case 0x80418E14u: goto label_80418E14;
    case 0x80418E18u: goto label_80418E18;
    case 0x80418E1Cu: goto label_80418E1C;
    case 0x80418E20u: goto label_80418E20;
    case 0x80418E24u: goto label_80418E24;
    case 0x80418E28u: goto label_80418E28;
    case 0x80418E2Cu: goto label_80418E2C;
    case 0x80418E30u: goto label_80418E30;
    case 0x80418E34u: goto label_80418E34;
    case 0x80418E38u: goto label_80418E38;
    case 0x80418E3Cu: goto label_80418E3C;
    case 0x80418E40u: goto label_80418E40;
    case 0x80418E44u: goto label_80418E44;
    case 0x80418E48u: goto label_80418E48;
    case 0x80418E4Cu: goto label_80418E4C;
    case 0x80418E50u: goto label_80418E50;
    case 0x80418E54u: goto label_80418E54;
    case 0x80418E58u: goto label_80418E58;
    case 0x80418E5Cu: goto label_80418E5C;
    case 0x80418E60u: goto label_80418E60;
    case 0x80418E64u: goto label_80418E64;
    case 0x80418E68u: goto label_80418E68;
    case 0x80418E6Cu: goto label_80418E6C;
    case 0x80418E70u: goto label_80418E70;
    case 0x80418E74u: goto label_80418E74;
    case 0x80418E78u: goto label_80418E78;
    case 0x80418E7Cu: goto label_80418E7C;
    case 0x80418E80u: goto label_80418E80;
    case 0x80418E84u: goto label_80418E84;
    case 0x80418E88u: goto label_80418E88;
    case 0x80418E8Cu: goto label_80418E8C;
    case 0x80418E90u: goto label_80418E90;
    case 0x80418E94u: goto label_80418E94;
    case 0x80418E98u: goto label_80418E98;
    case 0x80418E9Cu: goto label_80418E9C;
    case 0x80418EA0u: goto label_80418EA0;
    case 0x80418EA4u: goto label_80418EA4;
    case 0x80418EA8u: goto label_80418EA8;
    case 0x80418EACu: goto label_80418EAC;
    case 0x80418EB0u: goto label_80418EB0;
    case 0x80418EB4u: goto label_80418EB4;
    case 0x80418EB8u: goto label_80418EB8;
    case 0x80418EBCu: goto label_80418EBC;
    case 0x80418EC0u: goto label_80418EC0;
    case 0x80418EC4u: goto label_80418EC4;
    case 0x80418EC8u: goto label_80418EC8;
    case 0x80418ECCu: goto label_80418ECC;
    case 0x80418ED0u: goto label_80418ED0;
    case 0x80418ED4u: goto label_80418ED4;
    case 0x80418ED8u: goto label_80418ED8;
    case 0x80418EDCu: goto label_80418EDC;
    case 0x80418EE0u: goto label_80418EE0;
    case 0x80418EE4u: goto label_80418EE4;
    case 0x80418EE8u: goto label_80418EE8;
    case 0x80418EECu: goto label_80418EEC;
    case 0x80418EF0u: goto label_80418EF0;
    case 0x80418EF4u: goto label_80418EF4;
    case 0x80418EF8u: goto label_80418EF8;
    case 0x80418EFCu: goto label_80418EFC;
    case 0x80418F00u: goto label_80418F00;
    case 0x80418F04u: goto label_80418F04;
    case 0x80418F08u: goto label_80418F08;
    case 0x80418F0Cu: goto label_80418F0C;
    case 0x80418F10u: goto label_80418F10;
    case 0x80418F14u: goto label_80418F14;
    case 0x80418F18u: goto label_80418F18;
    case 0x80418F1Cu: goto label_80418F1C;
    case 0x80418F20u: goto label_80418F20;
    case 0x80418F24u: goto label_80418F24;
    case 0x80418F28u: goto label_80418F28;
    case 0x80418F2Cu: goto label_80418F2C;
    case 0x80418F30u: goto label_80418F30;
    case 0x80418F34u: goto label_80418F34;
    case 0x80418F38u: goto label_80418F38;
    case 0x80418F3Cu: goto label_80418F3C;
    case 0x80418F40u: goto label_80418F40;
    case 0x80418F44u: goto label_80418F44;
    case 0x80418F48u: goto label_80418F48;
    case 0x80418F4Cu: goto label_80418F4C;
    case 0x80418F50u: goto label_80418F50;
    case 0x80418F54u: goto label_80418F54;
    case 0x80418F58u: goto label_80418F58;
    case 0x80418F5Cu: goto label_80418F5C;
    case 0x80418F60u: goto label_80418F60;
    case 0x80418F64u: goto label_80418F64;
    case 0x80418F68u: goto label_80418F68;
    case 0x80418F6Cu: goto label_80418F6C;
    case 0x80418F70u: goto label_80418F70;
    case 0x80418F74u: goto label_80418F74;
    case 0x80418F78u: goto label_80418F78;
    case 0x80418F7Cu: goto label_80418F7C;
    case 0x80418F80u: goto label_80418F80;
    case 0x80418F84u: goto label_80418F84;
    case 0x80418F88u: goto label_80418F88;
    case 0x80418F8Cu: goto label_80418F8C;
    case 0x80418F90u: goto label_80418F90;
    case 0x80418F94u: goto label_80418F94;
    case 0x80418F98u: goto label_80418F98;
    case 0x80418F9Cu: goto label_80418F9C;
    case 0x80418FA0u: goto label_80418FA0;
    case 0x80418FA4u: goto label_80418FA4;
    case 0x80418FA8u: goto label_80418FA8;
    case 0x80418FACu: goto label_80418FAC;
    case 0x80418FB0u: goto label_80418FB0;
    case 0x80418FB4u: goto label_80418FB4;
    case 0x80418FB8u: goto label_80418FB8;
    case 0x80418FBCu: goto label_80418FBC;
    case 0x80418FC0u: goto label_80418FC0;
    case 0x80418FC4u: goto label_80418FC4;
    case 0x80418FC8u: goto label_80418FC8;
    case 0x80418FCCu: goto label_80418FCC;
    case 0x80418FD0u: goto label_80418FD0;
    case 0x80418FD4u: goto label_80418FD4;
    case 0x80418FD8u: goto label_80418FD8;
    case 0x80418FDCu: goto label_80418FDC;
    case 0x80418FE0u: goto label_80418FE0;
    case 0x80418FE4u: goto label_80418FE4;
    case 0x80418FE8u: goto label_80418FE8;
    case 0x80418FECu: goto label_80418FEC;
    case 0x80418FF0u: goto label_80418FF0;
    case 0x80418FF4u: goto label_80418FF4;
    case 0x80418FF8u: goto label_80418FF8;
    case 0x80418FFCu: goto label_80418FFC;
    case 0x80419000u: goto label_80419000;
    case 0x80419004u: goto label_80419004;
    case 0x80419008u: goto label_80419008;
    case 0x8041900Cu: goto label_8041900C;
    case 0x80419010u: goto label_80419010;
    case 0x80419014u: goto label_80419014;
    case 0x80419018u: goto label_80419018;
    case 0x8041901Cu: goto label_8041901C;
    case 0x80419020u: goto label_80419020;
    case 0x80419024u: goto label_80419024;
    case 0x80419028u: goto label_80419028;
    case 0x8041902Cu: goto label_8041902C;
    case 0x80419030u: goto label_80419030;
    case 0x80419034u: goto label_80419034;
    case 0x80419038u: goto label_80419038;
    case 0x8041903Cu: goto label_8041903C;
    case 0x80419040u: goto label_80419040;
    case 0x80419044u: goto label_80419044;
    case 0x80419048u: goto label_80419048;
    case 0x8041904Cu: goto label_8041904C;
    case 0x80419050u: goto label_80419050;
    case 0x80419054u: goto label_80419054;
    case 0x80419058u: goto label_80419058;
    case 0x8041905Cu: goto label_8041905C;
    case 0x80419060u: goto label_80419060;
    case 0x80419064u: goto label_80419064;
    case 0x80419068u: goto label_80419068;
    case 0x8041906Cu: goto label_8041906C;
    case 0x80419070u: goto label_80419070;
    case 0x80419074u: goto label_80419074;
    case 0x80419078u: goto label_80419078;
    case 0x8041907Cu: goto label_8041907C;
    case 0x80419080u: goto label_80419080;
    case 0x80419084u: goto label_80419084;
    case 0x80419088u: goto label_80419088;
    case 0x8041908Cu: goto label_8041908C;
    case 0x80419090u: goto label_80419090;
    case 0x80419094u: goto label_80419094;
    case 0x80419098u: goto label_80419098;
    case 0x8041909Cu: goto label_8041909C;
    case 0x804190A0u: goto label_804190A0;
    case 0x804190A4u: goto label_804190A4;
    case 0x804190A8u: goto label_804190A8;
    case 0x804190ACu: goto label_804190AC;
    case 0x804190B0u: goto label_804190B0;
    case 0x804190B4u: goto label_804190B4;
    case 0x804190B8u: goto label_804190B8;
    case 0x804190BCu: goto label_804190BC;
    case 0x804190C0u: goto label_804190C0;
    case 0x804190C4u: goto label_804190C4;
    case 0x804190C8u: goto label_804190C8;
    case 0x804190CCu: goto label_804190CC;
    case 0x804190D0u: goto label_804190D0;
    case 0x804190D4u: goto label_804190D4;
    case 0x804190D8u: goto label_804190D8;
    case 0x804190DCu: goto label_804190DC;
    case 0x804190E0u: goto label_804190E0;
    case 0x804190E4u: goto label_804190E4;
    case 0x804190E8u: goto label_804190E8;
    case 0x804190ECu: goto label_804190EC;
    case 0x804190F0u: goto label_804190F0;
    case 0x804190F4u: goto label_804190F4;
    case 0x804190F8u: goto label_804190F8;
    case 0x804190FCu: goto label_804190FC;
    case 0x80419100u: goto label_80419100;
    case 0x80419104u: goto label_80419104;
    case 0x80419108u: goto label_80419108;
    case 0x8041910Cu: goto label_8041910C;
    case 0x80419110u: goto label_80419110;
    case 0x80419114u: goto label_80419114;
    case 0x80419118u: goto label_80419118;
    case 0x8041911Cu: goto label_8041911C;
    case 0x80419120u: goto label_80419120;
    case 0x80419124u: goto label_80419124;
    case 0x80419128u: goto label_80419128;
    case 0x8041912Cu: goto label_8041912C;
    case 0x80419130u: goto label_80419130;
    case 0x80419134u: goto label_80419134;
    case 0x80419138u: goto label_80419138;
    case 0x8041913Cu: goto label_8041913C;
    case 0x80419140u: goto label_80419140;
    case 0x80419144u: goto label_80419144;
    case 0x80419148u: goto label_80419148;
    case 0x8041914Cu: goto label_8041914C;
    case 0x80419150u: goto label_80419150;
    case 0x80419154u: goto label_80419154;
    case 0x80419158u: goto label_80419158;
    case 0x8041915Cu: goto label_8041915C;
    case 0x80419160u: goto label_80419160;
    case 0x80419164u: goto label_80419164;
    case 0x80419168u: goto label_80419168;
    case 0x8041916Cu: goto label_8041916C;
    case 0x80419170u: goto label_80419170;
    case 0x80419174u: goto label_80419174;
    case 0x80419178u: goto label_80419178;
    case 0x8041917Cu: goto label_8041917C;
    case 0x80419180u: goto label_80419180;
    case 0x80419184u: goto label_80419184;
    case 0x80419188u: goto label_80419188;
    case 0x8041918Cu: goto label_8041918C;
    case 0x80419190u: goto label_80419190;
    case 0x80419194u: goto label_80419194;
    case 0x80419198u: goto label_80419198;
    case 0x8041919Cu: goto label_8041919C;
    case 0x804191A0u: goto label_804191A0;
    case 0x804191A4u: goto label_804191A4;
    case 0x804191A8u: goto label_804191A8;
    case 0x804191ACu: goto label_804191AC;
    case 0x804191B0u: goto label_804191B0;
    case 0x804191B4u: goto label_804191B4;
    case 0x804191B8u: goto label_804191B8;
    case 0x804191BCu: goto label_804191BC;
    case 0x804191C0u: goto label_804191C0;
    case 0x804191C4u: goto label_804191C4;
    case 0x804191C8u: goto label_804191C8;
    case 0x804191CCu: goto label_804191CC;
    case 0x804191D0u: goto label_804191D0;
    case 0x804191D4u: goto label_804191D4;
    case 0x804191D8u: goto label_804191D8;
    case 0x804191DCu: goto label_804191DC;
    case 0x804191E0u: goto label_804191E0;
    case 0x804191E4u: goto label_804191E4;
    case 0x804191E8u: goto label_804191E8;
    case 0x804191ECu: goto label_804191EC;
    case 0x804191F0u: goto label_804191F0;
    case 0x804191F4u: goto label_804191F4;
    case 0x804191F8u: goto label_804191F8;
    case 0x804191FCu: goto label_804191FC;
    case 0x80419200u: goto label_80419200;
    case 0x80419204u: goto label_80419204;
    case 0x80419208u: goto label_80419208;
    case 0x8041920Cu: goto label_8041920C;
    case 0x80419210u: goto label_80419210;
    case 0x80419214u: goto label_80419214;
    case 0x80419218u: goto label_80419218;
    case 0x8041921Cu: goto label_8041921C;
    case 0x80419220u: goto label_80419220;
    case 0x80419224u: goto label_80419224;
    case 0x80419228u: goto label_80419228;
    case 0x8041922Cu: goto label_8041922C;
    case 0x80419230u: goto label_80419230;
    case 0x80419234u: goto label_80419234;
    case 0x80419238u: goto label_80419238;
    case 0x8041923Cu: goto label_8041923C;
    case 0x80419240u: goto label_80419240;
    case 0x80419244u: goto label_80419244;
    case 0x80419248u: goto label_80419248;
    case 0x8041924Cu: goto label_8041924C;
    case 0x80419250u: goto label_80419250;
    case 0x80419254u: goto label_80419254;
    case 0x80419258u: goto label_80419258;
    case 0x8041925Cu: goto label_8041925C;
    case 0x80419260u: goto label_80419260;
    case 0x80419264u: goto label_80419264;
    case 0x80419268u: goto label_80419268;
    case 0x8041926Cu: goto label_8041926C;
    case 0x80419270u: goto label_80419270;
    case 0x80419274u: goto label_80419274;
    case 0x80419278u: goto label_80419278;
    case 0x8041927Cu: goto label_8041927C;
    case 0x80419280u: goto label_80419280;
    case 0x80419284u: goto label_80419284;
    case 0x80419288u: goto label_80419288;
    case 0x8041928Cu: goto label_8041928C;
    case 0x80419290u: goto label_80419290;
    case 0x80419294u: goto label_80419294;
    case 0x80419298u: goto label_80419298;
    case 0x8041929Cu: goto label_8041929C;
    case 0x804192A0u: goto label_804192A0;
    case 0x804192A4u: goto label_804192A4;
    case 0x804192A8u: goto label_804192A8;
    case 0x804192ACu: goto label_804192AC;
    case 0x804192B0u: goto label_804192B0;
    case 0x804192B4u: goto label_804192B4;
    case 0x804192B8u: goto label_804192B8;
    case 0x804192BCu: goto label_804192BC;
    case 0x804192C0u: goto label_804192C0;
    case 0x804192C4u: goto label_804192C4;
    case 0x804192C8u: goto label_804192C8;
    case 0x804192CCu: goto label_804192CC;
    case 0x804192D0u: goto label_804192D0;
    case 0x804192D4u: goto label_804192D4;
    case 0x804192D8u: goto label_804192D8;
    case 0x804192DCu: goto label_804192DC;
    case 0x804192E0u: goto label_804192E0;
    case 0x804192E4u: goto label_804192E4;
    case 0x804192E8u: goto label_804192E8;
    case 0x804192ECu: goto label_804192EC;
    case 0x804192F0u: goto label_804192F0;
    case 0x804192F4u: goto label_804192F4;
    case 0x804192F8u: goto label_804192F8;
    case 0x804192FCu: goto label_804192FC;
    case 0x80419300u: goto label_80419300;
    case 0x80419304u: goto label_80419304;
    case 0x80419308u: goto label_80419308;
    case 0x8041930Cu: goto label_8041930C;
    case 0x80419310u: goto label_80419310;
    case 0x80419314u: goto label_80419314;
    case 0x80419318u: goto label_80419318;
    case 0x8041931Cu: goto label_8041931C;
    case 0x80419320u: goto label_80419320;
    case 0x80419324u: goto label_80419324;
    case 0x80419328u: goto label_80419328;
    case 0x8041932Cu: goto label_8041932C;
    case 0x80419330u: goto label_80419330;
    case 0x80419334u: goto label_80419334;
    case 0x80419338u: goto label_80419338;
    case 0x8041933Cu: goto label_8041933C;
    case 0x80419340u: goto label_80419340;
    case 0x80419344u: goto label_80419344;
    case 0x80419348u: goto label_80419348;
    case 0x8041934Cu: goto label_8041934C;
    case 0x80419350u: goto label_80419350;
    case 0x80419354u: goto label_80419354;
    case 0x80419358u: goto label_80419358;
    case 0x8041935Cu: goto label_8041935C;
    case 0x80419360u: goto label_80419360;
    case 0x80419364u: goto label_80419364;
    case 0x80419368u: goto label_80419368;
    case 0x8041936Cu: goto label_8041936C;
    case 0x80419370u: goto label_80419370;
    case 0x80419374u: goto label_80419374;
    case 0x80419378u: goto label_80419378;
    case 0x8041937Cu: goto label_8041937C;
    case 0x80419380u: goto label_80419380;
    case 0x80419384u: goto label_80419384;
    case 0x80419388u: goto label_80419388;
    case 0x8041938Cu: goto label_8041938C;
    case 0x80419390u: goto label_80419390;
    case 0x80419394u: goto label_80419394;
    case 0x80419398u: goto label_80419398;
    case 0x8041939Cu: goto label_8041939C;
    case 0x804193A0u: goto label_804193A0;
    case 0x804193A4u: goto label_804193A4;
    case 0x804193A8u: goto label_804193A8;
    case 0x804193ACu: goto label_804193AC;
    case 0x804193B0u: goto label_804193B0;
    case 0x804193B4u: goto label_804193B4;
    case 0x804193B8u: goto label_804193B8;
    case 0x804193BCu: goto label_804193BC;
    case 0x804193C0u: goto label_804193C0;
    case 0x804193C4u: goto label_804193C4;
    case 0x804193C8u: goto label_804193C8;
    case 0x804193CCu: goto label_804193CC;
    case 0x804193D0u: goto label_804193D0;
    case 0x804193D4u: goto label_804193D4;
    case 0x804193D8u: goto label_804193D8;
    case 0x804193DCu: goto label_804193DC;
    case 0x804193E0u: goto label_804193E0;
    case 0x804193E4u: goto label_804193E4;
    case 0x804193E8u: goto label_804193E8;
    case 0x804193ECu: goto label_804193EC;
    case 0x804193F0u: goto label_804193F0;
    case 0x804193F4u: goto label_804193F4;
    case 0x804193F8u: goto label_804193F8;
    case 0x804193FCu: goto label_804193FC;
    case 0x80419400u: goto label_80419400;
    case 0x80419404u: goto label_80419404;
    case 0x80419408u: goto label_80419408;
    case 0x8041940Cu: goto label_8041940C;
    case 0x80419410u: goto label_80419410;
    case 0x80419414u: goto label_80419414;
    case 0x80419418u: goto label_80419418;
    case 0x8041941Cu: goto label_8041941C;
    case 0x80419420u: goto label_80419420;
    case 0x80419424u: goto label_80419424;
    case 0x80419428u: goto label_80419428;
    case 0x8041942Cu: goto label_8041942C;
    case 0x80419430u: goto label_80419430;
    case 0x80419434u: goto label_80419434;
    case 0x80419438u: goto label_80419438;
    case 0x8041943Cu: goto label_8041943C;
    case 0x80419440u: goto label_80419440;
    case 0x80419444u: goto label_80419444;
    case 0x80419448u: goto label_80419448;
    case 0x8041944Cu: goto label_8041944C;
    case 0x80419450u: goto label_80419450;
    case 0x80419454u: goto label_80419454;
    case 0x80419458u: goto label_80419458;
    case 0x8041945Cu: goto label_8041945C;
    case 0x80419460u: goto label_80419460;
    case 0x80419464u: goto label_80419464;
    case 0x80419468u: goto label_80419468;
    case 0x8041946Cu: goto label_8041946C;
    case 0x80419470u: goto label_80419470;
    case 0x80419474u: goto label_80419474;
    case 0x80419478u: goto label_80419478;
    case 0x8041947Cu: goto label_8041947C;
    case 0x80419480u: goto label_80419480;
    case 0x80419484u: goto label_80419484;
    case 0x80419488u: goto label_80419488;
    case 0x8041948Cu: goto label_8041948C;
    case 0x80419490u: goto label_80419490;
    case 0x80419494u: goto label_80419494;
    case 0x80419498u: goto label_80419498;
    case 0x8041949Cu: goto label_8041949C;
    case 0x804194A0u: goto label_804194A0;
    case 0x804194A4u: goto label_804194A4;
    case 0x804194A8u: goto label_804194A8;
    case 0x804194ACu: goto label_804194AC;
    case 0x804194B0u: goto label_804194B0;
    case 0x804194B4u: goto label_804194B4;
    case 0x804194B8u: goto label_804194B8;
    case 0x804194BCu: goto label_804194BC;
    case 0x804194C0u: goto label_804194C0;
    case 0x804194C4u: goto label_804194C4;
    case 0x804194C8u: goto label_804194C8;
    case 0x804194CCu: goto label_804194CC;
    case 0x804194D0u: goto label_804194D0;
    case 0x804194D4u: goto label_804194D4;
    case 0x804194D8u: goto label_804194D8;
    case 0x804194DCu: goto label_804194DC;
    case 0x804194E0u: goto label_804194E0;
    case 0x804194E4u: goto label_804194E4;
    case 0x804194E8u: goto label_804194E8;
    case 0x804194ECu: goto label_804194EC;
    case 0x804194F0u: goto label_804194F0;
    case 0x804194F4u: goto label_804194F4;
    case 0x804194F8u: goto label_804194F8;
    case 0x804194FCu: goto label_804194FC;
    case 0x80419500u: goto label_80419500;
    case 0x80419504u: goto label_80419504;
    case 0x80419508u: goto label_80419508;
    case 0x8041950Cu: goto label_8041950C;
    case 0x80419510u: goto label_80419510;
    case 0x80419514u: goto label_80419514;
    case 0x80419518u: goto label_80419518;
    case 0x8041951Cu: goto label_8041951C;
    case 0x80419520u: goto label_80419520;
    case 0x80419524u: goto label_80419524;
    case 0x80419528u: goto label_80419528;
    case 0x8041952Cu: goto label_8041952C;
    case 0x80419530u: goto label_80419530;
    case 0x80419534u: goto label_80419534;
    case 0x80419538u: goto label_80419538;
    case 0x8041953Cu: goto label_8041953C;
    case 0x80419540u: goto label_80419540;
    case 0x80419544u: goto label_80419544;
    case 0x80419548u: goto label_80419548;
    case 0x8041954Cu: goto label_8041954C;
    case 0x80419550u: goto label_80419550;
    case 0x80419554u: goto label_80419554;
    case 0x80419558u: goto label_80419558;
    case 0x8041955Cu: goto label_8041955C;
    case 0x80419560u: goto label_80419560;
    case 0x80419564u: goto label_80419564;
    case 0x80419568u: goto label_80419568;
    case 0x8041956Cu: goto label_8041956C;
    case 0x80419570u: goto label_80419570;
    case 0x80419574u: goto label_80419574;
    case 0x80419578u: goto label_80419578;
    case 0x8041957Cu: goto label_8041957C;
    case 0x80419580u: goto label_80419580;
    case 0x80419584u: goto label_80419584;
    case 0x80419588u: goto label_80419588;
    case 0x8041958Cu: goto label_8041958C;
    case 0x80419590u: goto label_80419590;
    case 0x80419594u: goto label_80419594;
    case 0x80419598u: goto label_80419598;
    case 0x8041959Cu: goto label_8041959C;
    case 0x804195A0u: goto label_804195A0;
    case 0x804195A4u: goto label_804195A4;
    case 0x804195A8u: goto label_804195A8;
    case 0x804195ACu: goto label_804195AC;
    case 0x804195B0u: goto label_804195B0;
    case 0x804195B4u: goto label_804195B4;
    case 0x804195B8u: goto label_804195B8;
    case 0x804195BCu: goto label_804195BC;
    case 0x804195C0u: goto label_804195C0;
    case 0x804195C4u: goto label_804195C4;
    case 0x804195C8u: goto label_804195C8;
    case 0x804195CCu: goto label_804195CC;
    case 0x804195D0u: goto label_804195D0;
    case 0x804195D4u: goto label_804195D4;
    case 0x804195D8u: goto label_804195D8;
    case 0x804195DCu: goto label_804195DC;
    case 0x804195E0u: goto label_804195E0;
    case 0x804195E4u: goto label_804195E4;
    case 0x804195E8u: goto label_804195E8;
    case 0x804195ECu: goto label_804195EC;
    case 0x804195F0u: goto label_804195F0;
    case 0x804195F4u: goto label_804195F4;
    case 0x804195F8u: goto label_804195F8;
    case 0x804195FCu: goto label_804195FC;
    case 0x80419600u: goto label_80419600;
    case 0x80419604u: goto label_80419604;
    case 0x80419608u: goto label_80419608;
    case 0x8041960Cu: goto label_8041960C;
    case 0x80419610u: goto label_80419610;
    case 0x80419614u: goto label_80419614;
    case 0x80419618u: goto label_80419618;
    case 0x8041961Cu: goto label_8041961C;
    case 0x80419620u: goto label_80419620;
    case 0x80419624u: goto label_80419624;
    case 0x80419628u: goto label_80419628;
    case 0x8041962Cu: goto label_8041962C;
    case 0x80419630u: goto label_80419630;
    case 0x80419634u: goto label_80419634;
    case 0x80419638u: goto label_80419638;
    case 0x8041963Cu: goto label_8041963C;
    case 0x80419640u: goto label_80419640;
    case 0x80419644u: goto label_80419644;
    case 0x80419648u: goto label_80419648;
    case 0x8041964Cu: goto label_8041964C;
    case 0x80419650u: goto label_80419650;
    case 0x80419654u: goto label_80419654;
    case 0x80419658u: goto label_80419658;
    case 0x8041965Cu: goto label_8041965C;
    case 0x80419660u: goto label_80419660;
    case 0x80419664u: goto label_80419664;
    case 0x80419668u: goto label_80419668;
    case 0x8041966Cu: goto label_8041966C;
    case 0x80419670u: goto label_80419670;
    case 0x80419674u: goto label_80419674;
    case 0x80419678u: goto label_80419678;
    case 0x8041967Cu: goto label_8041967C;
    case 0x80419680u: goto label_80419680;
    case 0x80419684u: goto label_80419684;
    case 0x80419688u: goto label_80419688;
    case 0x8041968Cu: goto label_8041968C;
    case 0x80419690u: goto label_80419690;
    case 0x80419694u: goto label_80419694;
    case 0x80419698u: goto label_80419698;
    case 0x8041969Cu: goto label_8041969C;
    case 0x804196A0u: goto label_804196A0;
    case 0x804196A4u: goto label_804196A4;
    case 0x804196A8u: goto label_804196A8;
    case 0x804196ACu: goto label_804196AC;
    case 0x804196B0u: goto label_804196B0;
    case 0x804196B4u: goto label_804196B4;
    case 0x804196B8u: goto label_804196B8;
    case 0x804196BCu: goto label_804196BC;
    case 0x804196C0u: goto label_804196C0;
    case 0x804196C4u: goto label_804196C4;
    case 0x804196C8u: goto label_804196C8;
    case 0x804196CCu: goto label_804196CC;
    case 0x804196D0u: goto label_804196D0;
    case 0x804196D4u: goto label_804196D4;
    case 0x804196D8u: goto label_804196D8;
    case 0x804196DCu: goto label_804196DC;
    case 0x804196E0u: goto label_804196E0;
    case 0x804196E4u: goto label_804196E4;
    case 0x804196E8u: goto label_804196E8;
    case 0x804196ECu: goto label_804196EC;
    case 0x804196F0u: goto label_804196F0;
    case 0x804196F4u: goto label_804196F4;
    case 0x804196F8u: goto label_804196F8;
    case 0x804196FCu: goto label_804196FC;
    case 0x80419700u: goto label_80419700;
    case 0x80419704u: goto label_80419704;
    case 0x80419708u: goto label_80419708;
    case 0x8041970Cu: goto label_8041970C;
    case 0x80419710u: goto label_80419710;
    case 0x80419714u: goto label_80419714;
    case 0x80419718u: goto label_80419718;
    case 0x8041971Cu: goto label_8041971C;
    case 0x80419720u: goto label_80419720;
    case 0x80419724u: goto label_80419724;
    case 0x80419728u: goto label_80419728;
    case 0x8041972Cu: goto label_8041972C;
    case 0x80419730u: goto label_80419730;
    case 0x80419734u: goto label_80419734;
    case 0x80419738u: goto label_80419738;
    case 0x8041973Cu: goto label_8041973C;
    case 0x80419740u: goto label_80419740;
    case 0x80419744u: goto label_80419744;
    case 0x80419748u: goto label_80419748;
    case 0x8041974Cu: goto label_8041974C;
    case 0x80419750u: goto label_80419750;
    case 0x80419754u: goto label_80419754;
    case 0x80419758u: goto label_80419758;
    case 0x8041975Cu: goto label_8041975C;
    case 0x80419760u: goto label_80419760;
    case 0x80419764u: goto label_80419764;
    case 0x80419768u: goto label_80419768;
    case 0x8041976Cu: goto label_8041976C;
    case 0x80419770u: goto label_80419770;
    case 0x80419774u: goto label_80419774;
    case 0x80419778u: goto label_80419778;
    case 0x8041977Cu: goto label_8041977C;
    case 0x80419780u: goto label_80419780;
    case 0x80419784u: goto label_80419784;
    case 0x80419788u: goto label_80419788;
    case 0x8041978Cu: goto label_8041978C;
    case 0x80419790u: goto label_80419790;
    case 0x80419794u: goto label_80419794;
    case 0x80419798u: goto label_80419798;
    case 0x8041979Cu: goto label_8041979C;
    case 0x804197A0u: goto label_804197A0;
    case 0x804197A4u: goto label_804197A4;
    case 0x804197A8u: goto label_804197A8;
    case 0x804197ACu: goto label_804197AC;
    case 0x804197B0u: goto label_804197B0;
    case 0x804197B4u: goto label_804197B4;
    case 0x804197B8u: goto label_804197B8;
    case 0x804197BCu: goto label_804197BC;
    case 0x804197C0u: goto label_804197C0;
    case 0x804197C4u: goto label_804197C4;
    case 0x804197C8u: goto label_804197C8;
    case 0x804197CCu: goto label_804197CC;
    case 0x804197D0u: goto label_804197D0;
    case 0x804197D4u: goto label_804197D4;
    case 0x804197D8u: goto label_804197D8;
    case 0x804197DCu: goto label_804197DC;
    case 0x804197E0u: goto label_804197E0;
    case 0x804197E4u: goto label_804197E4;
    case 0x804197E8u: goto label_804197E8;
    case 0x804197ECu: goto label_804197EC;
    case 0x804197F0u: goto label_804197F0;
    case 0x804197F4u: goto label_804197F4;
    case 0x804197F8u: goto label_804197F8;
    case 0x804197FCu: goto label_804197FC;
    case 0x80419800u: goto label_80419800;
    case 0x80419804u: goto label_80419804;
    case 0x80419808u: goto label_80419808;
    case 0x8041980Cu: goto label_8041980C;
    case 0x80419810u: goto label_80419810;
    case 0x80419814u: goto label_80419814;
    case 0x80419818u: goto label_80419818;
    case 0x8041981Cu: goto label_8041981C;
    case 0x80419820u: goto label_80419820;
    case 0x80419824u: goto label_80419824;
    case 0x80419828u: goto label_80419828;
    case 0x8041982Cu: goto label_8041982C;
    case 0x80419830u: goto label_80419830;
    case 0x80419834u: goto label_80419834;
    case 0x80419838u: goto label_80419838;
    case 0x8041983Cu: goto label_8041983C;
    case 0x80419840u: goto label_80419840;
    case 0x80419844u: goto label_80419844;
    case 0x80419848u: goto label_80419848;
    case 0x8041984Cu: goto label_8041984C;
    case 0x80419850u: goto label_80419850;
    case 0x80419854u: goto label_80419854;
    case 0x80419858u: goto label_80419858;
    case 0x8041985Cu: goto label_8041985C;
    case 0x80419860u: goto label_80419860;
    case 0x80419864u: goto label_80419864;
    case 0x80419868u: goto label_80419868;
    case 0x8041986Cu: goto label_8041986C;
    case 0x80419870u: goto label_80419870;
    case 0x80419874u: goto label_80419874;
    case 0x80419878u: goto label_80419878;
    case 0x8041987Cu: goto label_8041987C;
    case 0x80419880u: goto label_80419880;
    case 0x80419884u: goto label_80419884;
    case 0x80419888u: goto label_80419888;
    case 0x8041988Cu: goto label_8041988C;
    case 0x80419890u: goto label_80419890;
    case 0x80419894u: goto label_80419894;
    case 0x80419898u: goto label_80419898;
    case 0x8041989Cu: goto label_8041989C;
    case 0x804198A0u: goto label_804198A0;
    case 0x804198A4u: goto label_804198A4;
    case 0x804198A8u: goto label_804198A8;
    case 0x804198ACu: goto label_804198AC;
    case 0x804198B0u: goto label_804198B0;
    case 0x804198B4u: goto label_804198B4;
    case 0x804198B8u: goto label_804198B8;
    case 0x804198BCu: goto label_804198BC;
    case 0x804198C0u: goto label_804198C0;
    case 0x804198C4u: goto label_804198C4;
    case 0x804198C8u: goto label_804198C8;
    case 0x804198CCu: goto label_804198CC;
    case 0x804198D0u: goto label_804198D0;
    case 0x804198D4u: goto label_804198D4;
    case 0x804198D8u: goto label_804198D8;
    case 0x804198DCu: goto label_804198DC;
    case 0x804198E0u: goto label_804198E0;
    case 0x804198E4u: goto label_804198E4;
    case 0x804198E8u: goto label_804198E8;
    case 0x804198ECu: goto label_804198EC;
    case 0x804198F0u: goto label_804198F0;
    case 0x804198F4u: goto label_804198F4;
    case 0x804198F8u: goto label_804198F8;
    case 0x804198FCu: goto label_804198FC;
    case 0x80419900u: goto label_80419900;
    case 0x80419904u: goto label_80419904;
    case 0x80419908u: goto label_80419908;
    case 0x8041990Cu: goto label_8041990C;
    case 0x80419910u: goto label_80419910;
    case 0x80419914u: goto label_80419914;
    case 0x80419918u: goto label_80419918;
    case 0x8041991Cu: goto label_8041991C;
    case 0x80419920u: goto label_80419920;
    case 0x80419924u: goto label_80419924;
    case 0x80419928u: goto label_80419928;
    case 0x8041992Cu: goto label_8041992C;
    case 0x80419930u: goto label_80419930;
    case 0x80419934u: goto label_80419934;
    case 0x80419938u: goto label_80419938;
    case 0x8041993Cu: goto label_8041993C;
    case 0x80419940u: goto label_80419940;
    case 0x80419944u: goto label_80419944;
    case 0x80419948u: goto label_80419948;
    case 0x8041994Cu: goto label_8041994C;
    case 0x80419950u: goto label_80419950;
    case 0x80419954u: goto label_80419954;
    case 0x80419958u: goto label_80419958;
    case 0x8041995Cu: goto label_8041995C;
    case 0x80419960u: goto label_80419960;
    case 0x80419964u: goto label_80419964;
    case 0x80419968u: goto label_80419968;
    case 0x8041996Cu: goto label_8041996C;
    case 0x80419970u: goto label_80419970;
    case 0x80419974u: goto label_80419974;
    case 0x80419978u: goto label_80419978;
    case 0x8041997Cu: goto label_8041997C;
    case 0x80419980u: goto label_80419980;
    case 0x80419984u: goto label_80419984;
    case 0x80419988u: goto label_80419988;
    case 0x8041998Cu: goto label_8041998C;
    case 0x80419990u: goto label_80419990;
    case 0x80419994u: goto label_80419994;
    case 0x80419998u: goto label_80419998;
    case 0x8041999Cu: goto label_8041999C;
    case 0x804199A0u: goto label_804199A0;
    case 0x804199A4u: goto label_804199A4;
    case 0x804199A8u: goto label_804199A8;
    case 0x804199ACu: goto label_804199AC;
    case 0x804199B0u: goto label_804199B0;
    case 0x804199B4u: goto label_804199B4;
    case 0x804199B8u: goto label_804199B8;
    case 0x804199BCu: goto label_804199BC;
    case 0x804199C0u: goto label_804199C0;
    case 0x804199C4u: goto label_804199C4;
    case 0x804199C8u: goto label_804199C8;
    case 0x804199CCu: goto label_804199CC;
    case 0x804199D0u: goto label_804199D0;
    case 0x804199D4u: goto label_804199D4;
    case 0x804199D8u: goto label_804199D8;
    case 0x804199DCu: goto label_804199DC;
    case 0x804199E0u: goto label_804199E0;
    case 0x804199E4u: goto label_804199E4;
    case 0x804199E8u: goto label_804199E8;
    case 0x804199ECu: goto label_804199EC;
    case 0x804199F0u: goto label_804199F0;
    case 0x804199F4u: goto label_804199F4;
    case 0x804199F8u: goto label_804199F8;
    case 0x804199FCu: goto label_804199FC;
    case 0x80419A00u: goto label_80419A00;
    case 0x80419A04u: goto label_80419A04;
    case 0x80419A08u: goto label_80419A08;
    case 0x80419A0Cu: goto label_80419A0C;
    case 0x80419A10u: goto label_80419A10;
    case 0x80419A14u: goto label_80419A14;
    case 0x80419A18u: goto label_80419A18;
    case 0x80419A1Cu: goto label_80419A1C;
    case 0x80419A20u: goto label_80419A20;
    case 0x80419A24u: goto label_80419A24;
    case 0x80419A28u: goto label_80419A28;
    case 0x80419A2Cu: goto label_80419A2C;
    case 0x80419A30u: goto label_80419A30;
    case 0x80419A34u: goto label_80419A34;
    case 0x80419A38u: goto label_80419A38;
    case 0x80419A3Cu: goto label_80419A3C;
    case 0x80419A40u: goto label_80419A40;
    case 0x80419A44u: goto label_80419A44;
    case 0x80419A48u: goto label_80419A48;
    case 0x80419A4Cu: goto label_80419A4C;
    case 0x80419A50u: goto label_80419A50;
    case 0x80419A54u: goto label_80419A54;
    case 0x80419A58u: goto label_80419A58;
    case 0x80419A5Cu: goto label_80419A5C;
    case 0x80419A60u: goto label_80419A60;
    case 0x80419A64u: goto label_80419A64;
    case 0x80419A68u: goto label_80419A68;
    case 0x80419A6Cu: goto label_80419A6C;
    case 0x80419A70u: goto label_80419A70;
    case 0x80419A74u: goto label_80419A74;
    case 0x80419A78u: goto label_80419A78;
    case 0x80419A7Cu: goto label_80419A7C;
    case 0x80419A80u: goto label_80419A80;
    case 0x80419A84u: goto label_80419A84;
    case 0x80419A88u: goto label_80419A88;
    case 0x80419A8Cu: goto label_80419A8C;
    case 0x80419A90u: goto label_80419A90;
    case 0x80419A94u: goto label_80419A94;
    case 0x80419A98u: goto label_80419A98;
    case 0x80419A9Cu: goto label_80419A9C;
    case 0x80419AA0u: goto label_80419AA0;
    case 0x80419AA4u: goto label_80419AA4;
    case 0x80419AA8u: goto label_80419AA8;
    case 0x80419AACu: goto label_80419AAC;
    case 0x80419AB0u: goto label_80419AB0;
    case 0x80419AB4u: goto label_80419AB4;
    case 0x80419AB8u: goto label_80419AB8;
    case 0x80419ABCu: goto label_80419ABC;
    case 0x80419AC0u: goto label_80419AC0;
    case 0x80419AC4u: goto label_80419AC4;
    case 0x80419AC8u: goto label_80419AC8;
    case 0x80419ACCu: goto label_80419ACC;
    case 0x80419AD0u: goto label_80419AD0;
    case 0x80419AD4u: goto label_80419AD4;
    case 0x80419AD8u: goto label_80419AD8;
    case 0x80419ADCu: goto label_80419ADC;
    case 0x80419AE0u: goto label_80419AE0;
    case 0x80419AE4u: goto label_80419AE4;
    case 0x80419AE8u: goto label_80419AE8;
    case 0x80419AECu: goto label_80419AEC;
    case 0x80419AF0u: goto label_80419AF0;
    case 0x80419AF4u: goto label_80419AF4;
    case 0x80419AF8u: goto label_80419AF8;
    case 0x80419AFCu: goto label_80419AFC;
    case 0x80419B00u: goto label_80419B00;
    case 0x80419B04u: goto label_80419B04;
    case 0x80419B08u: goto label_80419B08;
    case 0x80419B0Cu: goto label_80419B0C;
    case 0x80419B10u: goto label_80419B10;
    case 0x80419B14u: goto label_80419B14;
    case 0x80419B18u: goto label_80419B18;
    case 0x80419B1Cu: goto label_80419B1C;
    case 0x80419B20u: goto label_80419B20;
    case 0x80419B24u: goto label_80419B24;
    case 0x80419B28u: goto label_80419B28;
    case 0x80419B2Cu: goto label_80419B2C;
    case 0x80419B30u: goto label_80419B30;
    case 0x80419B34u: goto label_80419B34;
    case 0x80419B38u: goto label_80419B38;
    case 0x80419B3Cu: goto label_80419B3C;
    case 0x80419B40u: goto label_80419B40;
    case 0x80419B44u: goto label_80419B44;
    case 0x80419B48u: goto label_80419B48;
    case 0x80419B4Cu: goto label_80419B4C;
    case 0x80419B50u: goto label_80419B50;
    case 0x80419B54u: goto label_80419B54;
    case 0x80419B58u: goto label_80419B58;
    case 0x80419B5Cu: goto label_80419B5C;
    case 0x80419B60u: goto label_80419B60;
    case 0x80419B64u: goto label_80419B64;
    case 0x80419B68u: goto label_80419B68;
    case 0x80419B6Cu: goto label_80419B6C;
    case 0x80419B70u: goto label_80419B70;
    case 0x80419B74u: goto label_80419B74;
    case 0x80419B78u: goto label_80419B78;
    case 0x80419B7Cu: goto label_80419B7C;
    case 0x80419B80u: goto label_80419B80;
    case 0x80419B84u: goto label_80419B84;
    case 0x80419B88u: goto label_80419B88;
    case 0x80419B8Cu: goto label_80419B8C;
    case 0x80419B90u: goto label_80419B90;
    case 0x80419B94u: goto label_80419B94;
    case 0x80419B98u: goto label_80419B98;
    case 0x80419B9Cu: goto label_80419B9C;
    case 0x80419BA0u: goto label_80419BA0;
    case 0x80419BA4u: goto label_80419BA4;
    case 0x80419BA8u: goto label_80419BA8;
    case 0x80419BACu: goto label_80419BAC;
    case 0x80419BB0u: goto label_80419BB0;
    case 0x80419BB4u: goto label_80419BB4;
    case 0x80419BB8u: goto label_80419BB8;
    case 0x80419BBCu: goto label_80419BBC;
    case 0x80419BC0u: goto label_80419BC0;
    case 0x80419BC4u: goto label_80419BC4;
    case 0x80419BC8u: goto label_80419BC8;
    case 0x80419BCCu: goto label_80419BCC;
    case 0x80419BD0u: goto label_80419BD0;
    case 0x80419BD4u: goto label_80419BD4;
    case 0x80419BD8u: goto label_80419BD8;
    case 0x80419BDCu: goto label_80419BDC;
    case 0x80419BE0u: goto label_80419BE0;
    case 0x80419BE4u: goto label_80419BE4;
    case 0x80419BE8u: goto label_80419BE8;
    case 0x80419BECu: goto label_80419BEC;
    case 0x80419BF0u: goto label_80419BF0;
    case 0x80419BF4u: goto label_80419BF4;
    case 0x80419BF8u: goto label_80419BF8;
    case 0x80419BFCu: goto label_80419BFC;
    case 0x80419C00u: goto label_80419C00;
    case 0x80419C04u: goto label_80419C04;
    case 0x80419C08u: goto label_80419C08;
    case 0x80419C0Cu: goto label_80419C0C;
    case 0x80419C10u: goto label_80419C10;
    case 0x80419C14u: goto label_80419C14;
    case 0x80419C18u: goto label_80419C18;
    case 0x80419C1Cu: goto label_80419C1C;
    case 0x80419C20u: goto label_80419C20;
    case 0x80419C24u: goto label_80419C24;
    case 0x80419C28u: goto label_80419C28;
    case 0x80419C2Cu: goto label_80419C2C;
    case 0x80419C30u: goto label_80419C30;
    case 0x80419C34u: goto label_80419C34;
    case 0x80419C38u: goto label_80419C38;
    case 0x80419C3Cu: goto label_80419C3C;
    case 0x80419C40u: goto label_80419C40;
    case 0x80419C44u: goto label_80419C44;
    case 0x80419C48u: goto label_80419C48;
    case 0x80419C4Cu: goto label_80419C4C;
    case 0x80419C50u: goto label_80419C50;
    case 0x80419C54u: goto label_80419C54;
    case 0x80419C58u: goto label_80419C58;
    case 0x80419C5Cu: goto label_80419C5C;
    case 0x80419C60u: goto label_80419C60;
    case 0x80419C64u: goto label_80419C64;
    case 0x80419C68u: goto label_80419C68;
    case 0x80419C6Cu: goto label_80419C6C;
    case 0x80419C70u: goto label_80419C70;
    case 0x80419C74u: goto label_80419C74;
    case 0x80419C78u: goto label_80419C78;
    case 0x80419C7Cu: goto label_80419C7C;
    case 0x80419C80u: goto label_80419C80;
    case 0x80419C84u: goto label_80419C84;
    case 0x80419C88u: goto label_80419C88;
    case 0x80419C8Cu: goto label_80419C8C;
    case 0x80419C90u: goto label_80419C90;
    case 0x80419C94u: goto label_80419C94;
    case 0x80419C98u: goto label_80419C98;
    case 0x80419C9Cu: goto label_80419C9C;
    case 0x80419CA0u: goto label_80419CA0;
    case 0x80419CA4u: goto label_80419CA4;
    case 0x80419CA8u: goto label_80419CA8;
    case 0x80419CACu: goto label_80419CAC;
    case 0x80419CB0u: goto label_80419CB0;
    case 0x80419CB4u: goto label_80419CB4;
    case 0x80419CB8u: goto label_80419CB8;
    case 0x80419CBCu: goto label_80419CBC;
    case 0x80419CC0u: goto label_80419CC0;
    case 0x80419CC4u: goto label_80419CC4;
    case 0x80419CC8u: goto label_80419CC8;
    case 0x80419CCCu: goto label_80419CCC;
    case 0x80419CD0u: goto label_80419CD0;
    case 0x80419CD4u: goto label_80419CD4;
    case 0x80419CD8u: goto label_80419CD8;
    case 0x80419CDCu: goto label_80419CDC;
    case 0x80419CE0u: goto label_80419CE0;
    case 0x80419CE4u: goto label_80419CE4;
    case 0x80419CE8u: goto label_80419CE8;
    case 0x80419CECu: goto label_80419CEC;
    case 0x80419CF0u: goto label_80419CF0;
    case 0x80419CF4u: goto label_80419CF4;
    case 0x80419CF8u: goto label_80419CF8;
    case 0x80419CFCu: goto label_80419CFC;
    case 0x80419D00u: goto label_80419D00;
    case 0x80419D04u: goto label_80419D04;
    case 0x80419D08u: goto label_80419D08;
    case 0x80419D0Cu: goto label_80419D0C;
    case 0x80419D10u: goto label_80419D10;
    case 0x80419D14u: goto label_80419D14;
    case 0x80419D18u: goto label_80419D18;
    case 0x80419D1Cu: goto label_80419D1C;
    case 0x80419D20u: goto label_80419D20;
    case 0x80419D24u: goto label_80419D24;
    case 0x80419D28u: goto label_80419D28;
    case 0x80419D2Cu: goto label_80419D2C;
    case 0x80419D30u: goto label_80419D30;
    case 0x80419D34u: goto label_80419D34;
    case 0x80419D38u: goto label_80419D38;
    case 0x80419D3Cu: goto label_80419D3C;
    case 0x80419D40u: goto label_80419D40;
    case 0x80419D44u: goto label_80419D44;
    case 0x80419D48u: goto label_80419D48;
    case 0x80419D4Cu: goto label_80419D4C;
    case 0x80419D50u: goto label_80419D50;
    case 0x80419D54u: goto label_80419D54;
    case 0x80419D58u: goto label_80419D58;
    case 0x80419D5Cu: goto label_80419D5C;
    case 0x80419D60u: goto label_80419D60;
    case 0x80419D64u: goto label_80419D64;
    case 0x80419D68u: goto label_80419D68;
    case 0x80419D6Cu: goto label_80419D6C;
    case 0x80419D70u: goto label_80419D70;
    case 0x80419D74u: goto label_80419D74;
    case 0x80419D78u: goto label_80419D78;
    case 0x80419D7Cu: goto label_80419D7C;
    case 0x80419D80u: goto label_80419D80;
    case 0x80419D84u: goto label_80419D84;
    case 0x80419D88u: goto label_80419D88;
    case 0x80419D8Cu: goto label_80419D8C;
    case 0x80419D90u: goto label_80419D90;
    case 0x80419D94u: goto label_80419D94;
    case 0x80419D98u: goto label_80419D98;
    case 0x80419D9Cu: goto label_80419D9C;
    case 0x80419DA0u: goto label_80419DA0;
    case 0x80419DA4u: goto label_80419DA4;
    case 0x80419DA8u: goto label_80419DA8;
    case 0x80419DACu: goto label_80419DAC;
    case 0x80419DB0u: goto label_80419DB0;
    case 0x80419DB4u: goto label_80419DB4;
    case 0x80419DB8u: goto label_80419DB8;
    case 0x80419DBCu: goto label_80419DBC;
    case 0x80419DC0u: goto label_80419DC0;
    case 0x80419DC4u: goto label_80419DC4;
    case 0x80419DC8u: goto label_80419DC8;
    case 0x80419DCCu: goto label_80419DCC;
    case 0x80419DD0u: goto label_80419DD0;
    case 0x80419DD4u: goto label_80419DD4;
    case 0x80419DD8u: goto label_80419DD8;
    case 0x80419DDCu: goto label_80419DDC;
    case 0x80419DE0u: goto label_80419DE0;
    case 0x80419DE4u: goto label_80419DE4;
    case 0x80419DE8u: goto label_80419DE8;
    case 0x80419DECu: goto label_80419DEC;
    case 0x80419DF0u: goto label_80419DF0;
    case 0x80419DF4u: goto label_80419DF4;
    case 0x80419DF8u: goto label_80419DF8;
    case 0x80419DFCu: goto label_80419DFC;
    case 0x80419E00u: goto label_80419E00;
    case 0x80419E04u: goto label_80419E04;
    case 0x80419E08u: goto label_80419E08;
    case 0x80419E0Cu: goto label_80419E0C;
    case 0x80419E10u: goto label_80419E10;
    case 0x80419E14u: goto label_80419E14;
    case 0x80419E18u: goto label_80419E18;
    case 0x80419E1Cu: goto label_80419E1C;
    case 0x80419E20u: goto label_80419E20;
    case 0x80419E24u: goto label_80419E24;
    case 0x80419E28u: goto label_80419E28;
    case 0x80419E2Cu: goto label_80419E2C;
    case 0x80419E30u: goto label_80419E30;
    case 0x80419E34u: goto label_80419E34;
    case 0x80419E38u: goto label_80419E38;
    case 0x80419E3Cu: goto label_80419E3C;
    case 0x80419E40u: goto label_80419E40;
    case 0x80419E44u: goto label_80419E44;
    case 0x80419E48u: goto label_80419E48;
    case 0x80419E4Cu: goto label_80419E4C;
    case 0x80419E50u: goto label_80419E50;
    case 0x80419E54u: goto label_80419E54;
    case 0x80419E58u: goto label_80419E58;
    case 0x80419E5Cu: goto label_80419E5C;
    case 0x80419E60u: goto label_80419E60;
    case 0x80419E64u: goto label_80419E64;
    case 0x80419E68u: goto label_80419E68;
    case 0x80419E6Cu: goto label_80419E6C;
    case 0x80419E70u: goto label_80419E70;
    case 0x80419E74u: goto label_80419E74;
    case 0x80419E78u: goto label_80419E78;
    case 0x80419E7Cu: goto label_80419E7C;
    case 0x80419E80u: goto label_80419E80;
    case 0x80419E84u: goto label_80419E84;
    case 0x80419E88u: goto label_80419E88;
    case 0x80419E8Cu: goto label_80419E8C;
    case 0x80419E90u: goto label_80419E90;
    case 0x80419E94u: goto label_80419E94;
    case 0x80419E98u: goto label_80419E98;
    case 0x80419E9Cu: goto label_80419E9C;
    case 0x80419EA0u: goto label_80419EA0;
    case 0x80419EA4u: goto label_80419EA4;
    case 0x80419EA8u: goto label_80419EA8;
    case 0x80419EACu: goto label_80419EAC;
    case 0x80419EB0u: goto label_80419EB0;
    case 0x80419EB4u: goto label_80419EB4;
    case 0x80419EB8u: goto label_80419EB8;
    case 0x80419EBCu: goto label_80419EBC;
    case 0x80419EC0u: goto label_80419EC0;
    case 0x80419EC4u: goto label_80419EC4;
    case 0x80419EC8u: goto label_80419EC8;
    case 0x80419ECCu: goto label_80419ECC;
    case 0x80419ED0u: goto label_80419ED0;
    case 0x80419ED4u: goto label_80419ED4;
    case 0x80419ED8u: goto label_80419ED8;
    case 0x80419EDCu: goto label_80419EDC;
    case 0x80419EE0u: goto label_80419EE0;
    case 0x80419EE4u: goto label_80419EE4;
    case 0x80419EE8u: goto label_80419EE8;
    case 0x80419EECu: goto label_80419EEC;
    case 0x80419EF0u: goto label_80419EF0;
    case 0x80419EF4u: goto label_80419EF4;
    case 0x80419EF8u: goto label_80419EF8;
    case 0x80419EFCu: goto label_80419EFC;
    case 0x80419F00u: goto label_80419F00;
    case 0x80419F04u: goto label_80419F04;
    case 0x80419F08u: goto label_80419F08;
    case 0x80419F0Cu: goto label_80419F0C;
    case 0x80419F10u: goto label_80419F10;
    case 0x80419F14u: goto label_80419F14;
    case 0x80419F18u: goto label_80419F18;
    case 0x80419F1Cu: goto label_80419F1C;
    case 0x80419F20u: goto label_80419F20;
    case 0x80419F24u: goto label_80419F24;
    case 0x80419F28u: goto label_80419F28;
    case 0x80419F2Cu: goto label_80419F2C;
    case 0x80419F30u: goto label_80419F30;
    case 0x80419F34u: goto label_80419F34;
    case 0x80419F38u: goto label_80419F38;
    case 0x80419F3Cu: goto label_80419F3C;
    case 0x80419F40u: goto label_80419F40;
    case 0x80419F44u: goto label_80419F44;
    case 0x80419F48u: goto label_80419F48;
    case 0x80419F4Cu: goto label_80419F4C;
    case 0x80419F50u: goto label_80419F50;
    case 0x80419F54u: goto label_80419F54;
    case 0x80419F58u: goto label_80419F58;
    case 0x80419F5Cu: goto label_80419F5C;
    case 0x80419F60u: goto label_80419F60;
    case 0x80419F64u: goto label_80419F64;
    case 0x80419F68u: goto label_80419F68;
    case 0x80419F6Cu: goto label_80419F6C;
    case 0x80419F70u: goto label_80419F70;
    case 0x80419F74u: goto label_80419F74;
    case 0x80419F78u: goto label_80419F78;
    case 0x80419F7Cu: goto label_80419F7C;
    case 0x80419F80u: goto label_80419F80;
    case 0x80419F84u: goto label_80419F84;
    case 0x80419F88u: goto label_80419F88;
    case 0x80419F8Cu: goto label_80419F8C;
    case 0x80419F90u: goto label_80419F90;
    case 0x80419F94u: goto label_80419F94;
    case 0x80419F98u: goto label_80419F98;
    case 0x80419F9Cu: goto label_80419F9C;
    case 0x80419FA0u: goto label_80419FA0;
    case 0x80419FA4u: goto label_80419FA4;
    case 0x80419FA8u: goto label_80419FA8;
    case 0x80419FACu: goto label_80419FAC;
    case 0x80419FB0u: goto label_80419FB0;
    case 0x80419FB4u: goto label_80419FB4;
    case 0x80419FB8u: goto label_80419FB8;
    case 0x80419FBCu: goto label_80419FBC;
    case 0x80419FC0u: goto label_80419FC0;
    case 0x80419FC4u: goto label_80419FC4;
    case 0x80419FC8u: goto label_80419FC8;
    case 0x80419FCCu: goto label_80419FCC;
    case 0x80419FD0u: goto label_80419FD0;
    case 0x80419FD4u: goto label_80419FD4;
    case 0x80419FD8u: goto label_80419FD8;
    case 0x80419FDCu: goto label_80419FDC;
    case 0x80419FE0u: goto label_80419FE0;
    case 0x80419FE4u: goto label_80419FE4;
    case 0x80419FE8u: goto label_80419FE8;
    case 0x80419FECu: goto label_80419FEC;
    case 0x80419FF0u: goto label_80419FF0;
    case 0x80419FF4u: goto label_80419FF4;
    case 0x80419FF8u: goto label_80419FF8;
    case 0x80419FFCu: goto label_80419FFC;
    case 0x8041A000u: goto label_8041A000;
    case 0x8041A004u: goto label_8041A004;
    case 0x8041A008u: goto label_8041A008;
    case 0x8041A00Cu: goto label_8041A00C;
    case 0x8041A010u: goto label_8041A010;
    case 0x8041A014u: goto label_8041A014;
    case 0x8041A018u: goto label_8041A018;
    case 0x8041A01Cu: goto label_8041A01C;
    case 0x8041A020u: goto label_8041A020;
    case 0x8041A024u: goto label_8041A024;
    case 0x8041A028u: goto label_8041A028;
    case 0x8041A02Cu: goto label_8041A02C;
    case 0x8041A030u: goto label_8041A030;
    case 0x8041A034u: goto label_8041A034;
    case 0x8041A038u: goto label_8041A038;
    case 0x8041A03Cu: goto label_8041A03C;
    case 0x8041A040u: goto label_8041A040;
    case 0x8041A044u: goto label_8041A044;
    case 0x8041A048u: goto label_8041A048;
    case 0x8041A04Cu: goto label_8041A04C;
    case 0x8041A050u: goto label_8041A050;
    case 0x8041A054u: goto label_8041A054;
    case 0x8041A058u: goto label_8041A058;
    case 0x8041A05Cu: goto label_8041A05C;
    case 0x8041A060u: goto label_8041A060;
    case 0x8041A064u: goto label_8041A064;
    case 0x8041A068u: goto label_8041A068;
    case 0x8041A06Cu: goto label_8041A06C;
    case 0x8041A070u: goto label_8041A070;
    case 0x8041A074u: goto label_8041A074;
    case 0x8041A078u: goto label_8041A078;
    case 0x8041A07Cu: goto label_8041A07C;
    case 0x8041A080u: goto label_8041A080;
    case 0x8041A084u: goto label_8041A084;
    case 0x8041A088u: goto label_8041A088;
    case 0x8041A08Cu: goto label_8041A08C;
    case 0x8041A090u: goto label_8041A090;
    case 0x8041A094u: goto label_8041A094;
    case 0x8041A098u: goto label_8041A098;
    case 0x8041A09Cu: goto label_8041A09C;
    case 0x8041A0A0u: goto label_8041A0A0;
    case 0x8041A0A4u: goto label_8041A0A4;
    case 0x8041A0A8u: goto label_8041A0A8;
    case 0x8041A0ACu: goto label_8041A0AC;
    case 0x8041A0B0u: goto label_8041A0B0;
    case 0x8041A0B4u: goto label_8041A0B4;
    case 0x8041A0B8u: goto label_8041A0B8;
    case 0x8041A0BCu: goto label_8041A0BC;
    case 0x8041A0C0u: goto label_8041A0C0;
    case 0x8041A0C4u: goto label_8041A0C4;
    case 0x8041A0C8u: goto label_8041A0C8;
    case 0x8041A0CCu: goto label_8041A0CC;
    case 0x8041A0D0u: goto label_8041A0D0;
    case 0x8041A0D4u: goto label_8041A0D4;
    case 0x8041A0D8u: goto label_8041A0D8;
    case 0x8041A0DCu: goto label_8041A0DC;
    case 0x8041A0E0u: goto label_8041A0E0;
    case 0x8041A0E4u: goto label_8041A0E4;
    case 0x8041A0E8u: goto label_8041A0E8;
    case 0x8041A0ECu: goto label_8041A0EC;
    case 0x8041A0F0u: goto label_8041A0F0;
    case 0x8041A0F4u: goto label_8041A0F4;
    case 0x8041A0F8u: goto label_8041A0F8;
    case 0x8041A0FCu: goto label_8041A0FC;
    case 0x8041A100u: goto label_8041A100;
    case 0x8041A104u: goto label_8041A104;
    case 0x8041A108u: goto label_8041A108;
    case 0x8041A10Cu: goto label_8041A10C;
    case 0x8041A110u: goto label_8041A110;
    case 0x8041A114u: goto label_8041A114;
    case 0x8041A118u: goto label_8041A118;
    case 0x8041A11Cu: goto label_8041A11C;
    case 0x8041A120u: goto label_8041A120;
    case 0x8041A124u: goto label_8041A124;
    case 0x8041A128u: goto label_8041A128;
    case 0x8041A12Cu: goto label_8041A12C;
    case 0x8041A130u: goto label_8041A130;
    case 0x8041A134u: goto label_8041A134;
    case 0x8041A138u: goto label_8041A138;
    case 0x8041A13Cu: goto label_8041A13C;
    case 0x8041A140u: goto label_8041A140;
    case 0x8041A144u: goto label_8041A144;
    case 0x8041A148u: goto label_8041A148;
    case 0x8041A14Cu: goto label_8041A14C;
    case 0x8041A150u: goto label_8041A150;
    case 0x8041A154u: goto label_8041A154;
    case 0x8041A158u: goto label_8041A158;
    case 0x8041A15Cu: goto label_8041A15C;
    case 0x8041A160u: goto label_8041A160;
    case 0x8041A164u: goto label_8041A164;
    case 0x8041A168u: goto label_8041A168;
    case 0x8041A16Cu: goto label_8041A16C;
    case 0x8041A170u: goto label_8041A170;
    case 0x8041A174u: goto label_8041A174;
    case 0x8041A178u: goto label_8041A178;
    case 0x8041A17Cu: goto label_8041A17C;
    case 0x8041A180u: goto label_8041A180;
    case 0x8041A184u: goto label_8041A184;
    case 0x8041A188u: goto label_8041A188;
    case 0x8041A18Cu: goto label_8041A18C;
    case 0x8041A190u: goto label_8041A190;
    case 0x8041A194u: goto label_8041A194;
    case 0x8041A198u: goto label_8041A198;
    case 0x8041A19Cu: goto label_8041A19C;
    case 0x8041A1A0u: goto label_8041A1A0;
    case 0x8041A1A4u: goto label_8041A1A4;
    case 0x8041A1A8u: goto label_8041A1A8;
    case 0x8041A1ACu: goto label_8041A1AC;
    case 0x8041A1B0u: goto label_8041A1B0;
    case 0x8041A1B4u: goto label_8041A1B4;
    case 0x8041A1B8u: goto label_8041A1B8;
    case 0x8041A1BCu: goto label_8041A1BC;
    case 0x8041A1C0u: goto label_8041A1C0;
    case 0x8041A1C4u: goto label_8041A1C4;
    case 0x8041A1C8u: goto label_8041A1C8;
    case 0x8041A1CCu: goto label_8041A1CC;
    case 0x8041A1D0u: goto label_8041A1D0;
    case 0x8041A1D4u: goto label_8041A1D4;
    case 0x8041A1D8u: goto label_8041A1D8;
    case 0x8041A1DCu: goto label_8041A1DC;
    case 0x8041A1E0u: goto label_8041A1E0;
    case 0x8041A1E4u: goto label_8041A1E4;
    case 0x8041A1E8u: goto label_8041A1E8;
    case 0x8041A1ECu: goto label_8041A1EC;
    case 0x8041A1F0u: goto label_8041A1F0;
    case 0x8041A1F4u: goto label_8041A1F4;
    case 0x8041A1F8u: goto label_8041A1F8;
    case 0x8041A1FCu: goto label_8041A1FC;
    case 0x8041A200u: goto label_8041A200;
    case 0x8041A204u: goto label_8041A204;
    case 0x8041A208u: goto label_8041A208;
    case 0x8041A20Cu: goto label_8041A20C;
    case 0x8041A210u: goto label_8041A210;
    case 0x8041A214u: goto label_8041A214;
    case 0x8041A218u: goto label_8041A218;
    case 0x8041A21Cu: goto label_8041A21C;
    case 0x8041A220u: goto label_8041A220;
    case 0x8041A224u: goto label_8041A224;
    case 0x8041A228u: goto label_8041A228;
    case 0x8041A22Cu: goto label_8041A22C;
    case 0x8041A230u: goto label_8041A230;
    case 0x8041A234u: goto label_8041A234;
    case 0x8041A238u: goto label_8041A238;
    case 0x8041A23Cu: goto label_8041A23C;
    case 0x8041A240u: goto label_8041A240;
    case 0x8041A244u: goto label_8041A244;
    case 0x8041A248u: goto label_8041A248;
    case 0x8041A24Cu: goto label_8041A24C;
    case 0x8041A250u: goto label_8041A250;
    case 0x8041A254u: goto label_8041A254;
    case 0x8041A258u: goto label_8041A258;
    case 0x8041A25Cu: goto label_8041A25C;
    case 0x8041A260u: goto label_8041A260;
    case 0x8041A264u: goto label_8041A264;
    case 0x8041A268u: goto label_8041A268;
    case 0x8041A26Cu: goto label_8041A26C;
    case 0x8041A270u: goto label_8041A270;
    case 0x8041A274u: goto label_8041A274;
    case 0x8041A278u: goto label_8041A278;
    case 0x8041A27Cu: goto label_8041A27C;
    case 0x8041A280u: goto label_8041A280;
    case 0x8041A284u: goto label_8041A284;
    case 0x8041A288u: goto label_8041A288;
    case 0x8041A28Cu: goto label_8041A28C;
    case 0x8041A290u: goto label_8041A290;
    case 0x8041A294u: goto label_8041A294;
    case 0x8041A298u: goto label_8041A298;
    case 0x8041A29Cu: goto label_8041A29C;
    case 0x8041A2A0u: goto label_8041A2A0;
    case 0x8041A2A4u: goto label_8041A2A4;
    case 0x8041A2A8u: goto label_8041A2A8;
    case 0x8041A2ACu: goto label_8041A2AC;
    case 0x8041A2B0u: goto label_8041A2B0;
    case 0x8041A2B4u: goto label_8041A2B4;
    case 0x8041A2B8u: goto label_8041A2B8;
    case 0x8041A2BCu: goto label_8041A2BC;
    case 0x8041A2C0u: goto label_8041A2C0;
    case 0x8041A2C4u: goto label_8041A2C4;
    case 0x8041A2C8u: goto label_8041A2C8;
    case 0x8041A2CCu: goto label_8041A2CC;
    case 0x8041A2D0u: goto label_8041A2D0;
    case 0x8041A2D4u: goto label_8041A2D4;
    case 0x8041A2D8u: goto label_8041A2D8;
    case 0x8041A2DCu: goto label_8041A2DC;
    case 0x8041A2E0u: goto label_8041A2E0;
    case 0x8041A2E4u: goto label_8041A2E4;
    case 0x8041A2E8u: goto label_8041A2E8;
    case 0x8041A2ECu: goto label_8041A2EC;
    case 0x8041A2F0u: goto label_8041A2F0;
    case 0x8041A2F4u: goto label_8041A2F4;
    case 0x8041A2F8u: goto label_8041A2F8;
    case 0x8041A2FCu: goto label_8041A2FC;
    case 0x8041A300u: goto label_8041A300;
    case 0x8041A304u: goto label_8041A304;
    case 0x8041A308u: goto label_8041A308;
    case 0x8041A30Cu: goto label_8041A30C;
    case 0x8041A310u: goto label_8041A310;
    case 0x8041A314u: goto label_8041A314;
    case 0x8041A318u: goto label_8041A318;
    case 0x8041A31Cu: goto label_8041A31C;
    case 0x8041A320u: goto label_8041A320;
    case 0x8041A324u: goto label_8041A324;
    case 0x8041A328u: goto label_8041A328;
    case 0x8041A32Cu: goto label_8041A32C;
    case 0x8041A330u: goto label_8041A330;
    case 0x8041A334u: goto label_8041A334;
    case 0x8041A338u: goto label_8041A338;
    case 0x8041A33Cu: goto label_8041A33C;
    case 0x8041A340u: goto label_8041A340;
    case 0x8041A344u: goto label_8041A344;
    case 0x8041A348u: goto label_8041A348;
    case 0x8041A34Cu: goto label_8041A34C;
    case 0x8041A350u: goto label_8041A350;
    case 0x8041A354u: goto label_8041A354;
    case 0x8041A358u: goto label_8041A358;
    case 0x8041A35Cu: goto label_8041A35C;
    case 0x8041A360u: goto label_8041A360;
    case 0x8041A364u: goto label_8041A364;
    case 0x8041A368u: goto label_8041A368;
    case 0x8041A36Cu: goto label_8041A36C;
    case 0x8041A370u: goto label_8041A370;
    case 0x8041A374u: goto label_8041A374;
    case 0x8041A378u: goto label_8041A378;
    case 0x8041A37Cu: goto label_8041A37C;
    case 0x8041A380u: goto label_8041A380;
    case 0x8041A384u: goto label_8041A384;
    case 0x8041A388u: goto label_8041A388;
    case 0x8041A38Cu: goto label_8041A38C;
    case 0x8041A390u: goto label_8041A390;
    case 0x8041A394u: goto label_8041A394;
    case 0x8041A398u: goto label_8041A398;
    case 0x8041A39Cu: goto label_8041A39C;
    case 0x8041A3A0u: goto label_8041A3A0;
    case 0x8041A3A4u: goto label_8041A3A4;
    case 0x8041A3A8u: goto label_8041A3A8;
    case 0x8041A3ACu: goto label_8041A3AC;
    case 0x8041A3B0u: goto label_8041A3B0;
    case 0x8041A3B4u: goto label_8041A3B4;
    case 0x8041A3B8u: goto label_8041A3B8;
    case 0x8041A3BCu: goto label_8041A3BC;
    case 0x8041A3C0u: goto label_8041A3C0;
    case 0x8041A3C4u: goto label_8041A3C4;
    case 0x8041A3C8u: goto label_8041A3C8;
    case 0x8041A3CCu: goto label_8041A3CC;
    case 0x8041A3D0u: goto label_8041A3D0;
    case 0x8041A3D4u: goto label_8041A3D4;
    case 0x8041A3D8u: goto label_8041A3D8;
    case 0x8041A3DCu: goto label_8041A3DC;
    case 0x8041A3E0u: goto label_8041A3E0;
    case 0x8041A3E4u: goto label_8041A3E4;
    case 0x8041A3E8u: goto label_8041A3E8;
    case 0x8041A3ECu: goto label_8041A3EC;
    case 0x8041A3F0u: goto label_8041A3F0;
    case 0x8041A3F4u: goto label_8041A3F4;
    case 0x8041A3F8u: goto label_8041A3F8;
    case 0x8041A3FCu: goto label_8041A3FC;
    case 0x8041A400u: goto label_8041A400;
    case 0x8041A404u: goto label_8041A404;
    case 0x8041A408u: goto label_8041A408;
    case 0x8041A40Cu: goto label_8041A40C;
    case 0x8041A410u: goto label_8041A410;
    case 0x8041A414u: goto label_8041A414;
    case 0x8041A418u: goto label_8041A418;
    case 0x8041A41Cu: goto label_8041A41C;
    case 0x8041A420u: goto label_8041A420;
    case 0x8041A424u: goto label_8041A424;
    case 0x8041A428u: goto label_8041A428;
    case 0x8041A42Cu: goto label_8041A42C;
    case 0x8041A430u: goto label_8041A430;
    case 0x8041A434u: goto label_8041A434;
    case 0x8041A438u: goto label_8041A438;
    case 0x8041A43Cu: goto label_8041A43C;
    case 0x8041A440u: goto label_8041A440;
    case 0x8041A444u: goto label_8041A444;
    case 0x8041A448u: goto label_8041A448;
    case 0x8041A44Cu: goto label_8041A44C;
    case 0x8041A450u: goto label_8041A450;
    case 0x8041A454u: goto label_8041A454;
    case 0x8041A458u: goto label_8041A458;
    case 0x8041A45Cu: goto label_8041A45C;
    case 0x8041A460u: goto label_8041A460;
    case 0x8041A464u: goto label_8041A464;
    case 0x8041A468u: goto label_8041A468;
    case 0x8041A46Cu: goto label_8041A46C;
    case 0x8041A470u: goto label_8041A470;
    case 0x8041A474u: goto label_8041A474;
    case 0x8041A478u: goto label_8041A478;
    case 0x8041A47Cu: goto label_8041A47C;
    case 0x8041A480u: goto label_8041A480;
    case 0x8041A484u: goto label_8041A484;
    case 0x8041A488u: goto label_8041A488;
    case 0x8041A48Cu: goto label_8041A48C;
    case 0x8041A490u: goto label_8041A490;
    case 0x8041A494u: goto label_8041A494;
    case 0x8041A498u: goto label_8041A498;
    case 0x8041A49Cu: goto label_8041A49C;
    case 0x8041A4A0u: goto label_8041A4A0;
    case 0x8041A4A4u: goto label_8041A4A4;
    case 0x8041A4A8u: goto label_8041A4A8;
    case 0x8041A4ACu: goto label_8041A4AC;
    case 0x8041A4B0u: goto label_8041A4B0;
    case 0x8041A4B4u: goto label_8041A4B4;
    case 0x8041A4B8u: goto label_8041A4B8;
    case 0x8041A4BCu: goto label_8041A4BC;
    case 0x8041A4C0u: goto label_8041A4C0;
    case 0x8041A4C4u: goto label_8041A4C4;
    case 0x8041A4C8u: goto label_8041A4C8;
    case 0x8041A4CCu: goto label_8041A4CC;
    case 0x8041A4D0u: goto label_8041A4D0;
    case 0x8041A4D4u: goto label_8041A4D4;
    case 0x8041A4D8u: goto label_8041A4D8;
    case 0x8041A4DCu: goto label_8041A4DC;
    case 0x8041A4E0u: goto label_8041A4E0;
    case 0x8041A4E4u: goto label_8041A4E4;
    case 0x8041A4E8u: goto label_8041A4E8;
    case 0x8041A4ECu: goto label_8041A4EC;
    case 0x8041A4F0u: goto label_8041A4F0;
    case 0x8041A4F4u: goto label_8041A4F4;
    case 0x8041A4F8u: goto label_8041A4F8;
    case 0x8041A4FCu: goto label_8041A4FC;
    case 0x8041A500u: goto label_8041A500;
    case 0x8041A504u: goto label_8041A504;
    case 0x8041A508u: goto label_8041A508;
    case 0x8041A50Cu: goto label_8041A50C;
    case 0x8041A510u: goto label_8041A510;
    case 0x8041A514u: goto label_8041A514;
    case 0x8041A518u: goto label_8041A518;
    case 0x8041A51Cu: goto label_8041A51C;
    case 0x8041A520u: goto label_8041A520;
    case 0x8041A524u: goto label_8041A524;
    case 0x8041A528u: goto label_8041A528;
    case 0x8041A52Cu: goto label_8041A52C;
    case 0x8041A530u: goto label_8041A530;
    case 0x8041A534u: goto label_8041A534;
    case 0x8041A538u: goto label_8041A538;
    case 0x8041A53Cu: goto label_8041A53C;
    case 0x8041A540u: goto label_8041A540;
    case 0x8041A544u: goto label_8041A544;
    case 0x8041A548u: goto label_8041A548;
    case 0x8041A54Cu: goto label_8041A54C;
    case 0x8041A550u: goto label_8041A550;
    case 0x8041A554u: goto label_8041A554;
    case 0x8041A558u: goto label_8041A558;
    case 0x8041A55Cu: goto label_8041A55C;
    case 0x8041A560u: goto label_8041A560;
    case 0x8041A564u: goto label_8041A564;
    case 0x8041A568u: goto label_8041A568;
    case 0x8041A56Cu: goto label_8041A56C;
    case 0x8041A570u: goto label_8041A570;
    case 0x8041A574u: goto label_8041A574;
    case 0x8041A578u: goto label_8041A578;
    case 0x8041A57Cu: goto label_8041A57C;
    case 0x8041A580u: goto label_8041A580;
    case 0x8041A584u: goto label_8041A584;
    case 0x8041A588u: goto label_8041A588;
    case 0x8041A58Cu: goto label_8041A58C;
    case 0x8041A590u: goto label_8041A590;
    case 0x8041A594u: goto label_8041A594;
    case 0x8041A598u: goto label_8041A598;
    case 0x8041A59Cu: goto label_8041A59C;
    case 0x8041A5A0u: goto label_8041A5A0;
    case 0x8041A5A4u: goto label_8041A5A4;
    case 0x8041A5A8u: goto label_8041A5A8;
    case 0x8041A5ACu: goto label_8041A5AC;
    case 0x8041A5B0u: goto label_8041A5B0;
    case 0x8041A5B4u: goto label_8041A5B4;
    case 0x8041A5B8u: goto label_8041A5B8;
    case 0x8041A5BCu: goto label_8041A5BC;
    case 0x8041A5C0u: goto label_8041A5C0;
    case 0x8041A5C4u: goto label_8041A5C4;
    case 0x8041A5C8u: goto label_8041A5C8;
    case 0x8041A5CCu: goto label_8041A5CC;
    case 0x8041A5D0u: goto label_8041A5D0;
    case 0x8041A5D4u: goto label_8041A5D4;
    case 0x8041A5D8u: goto label_8041A5D8;
    case 0x8041A5DCu: goto label_8041A5DC;
    case 0x8041A5E0u: goto label_8041A5E0;
    case 0x8041A5E4u: goto label_8041A5E4;
    case 0x8041A5E8u: goto label_8041A5E8;
    case 0x8041A5ECu: goto label_8041A5EC;
    case 0x8041A5F0u: goto label_8041A5F0;
    case 0x8041A5F4u: goto label_8041A5F4;
    case 0x8041A5F8u: goto label_8041A5F8;
    case 0x8041A5FCu: goto label_8041A5FC;
    case 0x8041A600u: goto label_8041A600;
    case 0x8041A604u: goto label_8041A604;
    case 0x8041A608u: goto label_8041A608;
    case 0x8041A60Cu: goto label_8041A60C;
    case 0x8041A610u: goto label_8041A610;
    case 0x8041A614u: goto label_8041A614;
    case 0x8041A618u: goto label_8041A618;
    case 0x8041A61Cu: goto label_8041A61C;
    case 0x8041A620u: goto label_8041A620;
    case 0x8041A624u: goto label_8041A624;
    case 0x8041A628u: goto label_8041A628;
    case 0x8041A62Cu: goto label_8041A62C;
    case 0x8041A630u: goto label_8041A630;
    case 0x8041A634u: goto label_8041A634;
    case 0x8041A638u: goto label_8041A638;
    case 0x8041A63Cu: goto label_8041A63C;
    case 0x8041A640u: goto label_8041A640;
    case 0x8041A644u: goto label_8041A644;
    case 0x8041A648u: goto label_8041A648;
    case 0x8041A64Cu: goto label_8041A64C;
    case 0x8041A650u: goto label_8041A650;
    case 0x8041A654u: goto label_8041A654;
    case 0x8041A658u: goto label_8041A658;
    case 0x8041A65Cu: goto label_8041A65C;
    case 0x8041A660u: goto label_8041A660;
    case 0x8041A664u: goto label_8041A664;
    case 0x8041A668u: goto label_8041A668;
    case 0x8041A66Cu: goto label_8041A66C;
    case 0x8041A670u: goto label_8041A670;
    case 0x8041A674u: goto label_8041A674;
    case 0x8041A678u: goto label_8041A678;
    case 0x8041A67Cu: goto label_8041A67C;
    case 0x8041A680u: goto label_8041A680;
    case 0x8041A684u: goto label_8041A684;
    case 0x8041A688u: goto label_8041A688;
    case 0x8041A68Cu: goto label_8041A68C;
    case 0x8041A690u: goto label_8041A690;
    case 0x8041A694u: goto label_8041A694;
    case 0x8041A698u: goto label_8041A698;
    case 0x8041A69Cu: goto label_8041A69C;
    case 0x8041A6A0u: goto label_8041A6A0;
    case 0x8041A6A4u: goto label_8041A6A4;
    case 0x8041A6A8u: goto label_8041A6A8;
    case 0x8041A6ACu: goto label_8041A6AC;
    case 0x8041A6B0u: goto label_8041A6B0;
    case 0x8041A6B4u: goto label_8041A6B4;
    case 0x8041A6B8u: goto label_8041A6B8;
    case 0x8041A6BCu: goto label_8041A6BC;
    case 0x8041A6C0u: goto label_8041A6C0;
    case 0x8041A6C4u: goto label_8041A6C4;
    case 0x8041A6C8u: goto label_8041A6C8;
    case 0x8041A6CCu: goto label_8041A6CC;
    case 0x8041A6D0u: goto label_8041A6D0;
    case 0x8041A6D4u: goto label_8041A6D4;
    case 0x8041A6D8u: goto label_8041A6D8;
    case 0x8041A6DCu: goto label_8041A6DC;
    case 0x8041A6E0u: goto label_8041A6E0;
    case 0x8041A6E4u: goto label_8041A6E4;
    case 0x8041A6E8u: goto label_8041A6E8;
    case 0x8041A6ECu: goto label_8041A6EC;
    case 0x8041A6F0u: goto label_8041A6F0;
    case 0x8041A6F4u: goto label_8041A6F4;
    case 0x8041A6F8u: goto label_8041A6F8;
    case 0x8041A6FCu: goto label_8041A6FC;
    case 0x8041A700u: goto label_8041A700;
    case 0x8041A704u: goto label_8041A704;
    case 0x8041A708u: goto label_8041A708;
    case 0x8041A70Cu: goto label_8041A70C;
    case 0x8041A710u: goto label_8041A710;
    case 0x8041A714u: goto label_8041A714;
    case 0x8041A718u: goto label_8041A718;
    case 0x8041A71Cu: goto label_8041A71C;
    case 0x8041A720u: goto label_8041A720;
    case 0x8041A724u: goto label_8041A724;
    case 0x8041A728u: goto label_8041A728;
    case 0x8041A72Cu: goto label_8041A72C;
    case 0x8041A730u: goto label_8041A730;
    case 0x8041A734u: goto label_8041A734;
    case 0x8041A738u: goto label_8041A738;
    case 0x8041A73Cu: goto label_8041A73C;
    case 0x8041A740u: goto label_8041A740;
    case 0x8041A744u: goto label_8041A744;
    case 0x8041A748u: goto label_8041A748;
    case 0x8041A74Cu: goto label_8041A74C;
    case 0x8041A750u: goto label_8041A750;
    case 0x8041A754u: goto label_8041A754;
    case 0x8041A758u: goto label_8041A758;
    case 0x8041A75Cu: goto label_8041A75C;
    case 0x8041A760u: goto label_8041A760;
    case 0x8041A764u: goto label_8041A764;
    case 0x8041A768u: goto label_8041A768;
    case 0x8041A76Cu: goto label_8041A76C;
    case 0x8041A770u: goto label_8041A770;
    case 0x8041A774u: goto label_8041A774;
    case 0x8041A778u: goto label_8041A778;
    case 0x8041A77Cu: goto label_8041A77C;
    case 0x8041A780u: goto label_8041A780;
    case 0x8041A784u: goto label_8041A784;
    case 0x8041A788u: goto label_8041A788;
    case 0x8041A78Cu: goto label_8041A78C;
    case 0x8041A790u: goto label_8041A790;
    case 0x8041A794u: goto label_8041A794;
    case 0x8041A798u: goto label_8041A798;
    case 0x8041A79Cu: goto label_8041A79C;
    case 0x8041A7A0u: goto label_8041A7A0;
    case 0x8041A7A4u: goto label_8041A7A4;
    case 0x8041A7A8u: goto label_8041A7A8;
    case 0x8041A7ACu: goto label_8041A7AC;
    case 0x8041A7B0u: goto label_8041A7B0;
    case 0x8041A7B4u: goto label_8041A7B4;
    case 0x8041A7B8u: goto label_8041A7B8;
    case 0x8041A7BCu: goto label_8041A7BC;
    case 0x8041A7C0u: goto label_8041A7C0;
    case 0x8041A7C4u: goto label_8041A7C4;
    case 0x8041A7C8u: goto label_8041A7C8;
    case 0x8041A7CCu: goto label_8041A7CC;
    case 0x8041A7D0u: goto label_8041A7D0;
    case 0x8041A7D4u: goto label_8041A7D4;
    case 0x8041A7D8u: goto label_8041A7D8;
    case 0x8041A7DCu: goto label_8041A7DC;
    case 0x8041A7E0u: goto label_8041A7E0;
    case 0x8041A7E4u: goto label_8041A7E4;
    case 0x8041A7E8u: goto label_8041A7E8;
    case 0x8041A7ECu: goto label_8041A7EC;
    case 0x8041A7F0u: goto label_8041A7F0;
    case 0x8041A7F4u: goto label_8041A7F4;
    case 0x8041A7F8u: goto label_8041A7F8;
    case 0x8041A7FCu: goto label_8041A7FC;
    case 0x8041A800u: goto label_8041A800;
    case 0x8041A804u: goto label_8041A804;
    case 0x8041A808u: goto label_8041A808;
    case 0x8041A80Cu: goto label_8041A80C;
    case 0x8041A810u: goto label_8041A810;
    case 0x8041A814u: goto label_8041A814;
    case 0x8041A818u: goto label_8041A818;
    case 0x8041A81Cu: goto label_8041A81C;
    case 0x8041A820u: goto label_8041A820;
    case 0x8041A824u: goto label_8041A824;
    case 0x8041A828u: goto label_8041A828;
    case 0x8041A82Cu: goto label_8041A82C;
    case 0x8041A830u: goto label_8041A830;
    case 0x8041A834u: goto label_8041A834;
    case 0x8041A838u: goto label_8041A838;
    case 0x8041A83Cu: goto label_8041A83C;
    case 0x8041A840u: goto label_8041A840;
    case 0x8041A844u: goto label_8041A844;
    case 0x8041A848u: goto label_8041A848;
    case 0x8041A84Cu: goto label_8041A84C;
    case 0x8041A850u: goto label_8041A850;
    case 0x8041A854u: goto label_8041A854;
    case 0x8041A858u: goto label_8041A858;
    case 0x8041A85Cu: goto label_8041A85C;
    case 0x8041A860u: goto label_8041A860;
    case 0x8041A864u: goto label_8041A864;
    case 0x8041A868u: goto label_8041A868;
    case 0x8041A86Cu: goto label_8041A86C;
    case 0x8041A870u: goto label_8041A870;
    case 0x8041A874u: goto label_8041A874;
    case 0x8041A878u: goto label_8041A878;
    case 0x8041A87Cu: goto label_8041A87C;
    case 0x8041A880u: goto label_8041A880;
    case 0x8041A884u: goto label_8041A884;
    case 0x8041A888u: goto label_8041A888;
    case 0x8041A88Cu: goto label_8041A88C;
    case 0x8041A890u: goto label_8041A890;
    case 0x8041A894u: goto label_8041A894;
    case 0x8041A898u: goto label_8041A898;
    case 0x8041A89Cu: goto label_8041A89C;
    case 0x8041A8A0u: goto label_8041A8A0;
    case 0x8041A8A4u: goto label_8041A8A4;
    case 0x8041A8A8u: goto label_8041A8A8;
    case 0x8041A8ACu: goto label_8041A8AC;
    case 0x8041A8B0u: goto label_8041A8B0;
    case 0x8041A8B4u: goto label_8041A8B4;
    case 0x8041A8B8u: goto label_8041A8B8;
    case 0x8041A8BCu: goto label_8041A8BC;
    case 0x8041A8C0u: goto label_8041A8C0;
    case 0x8041A8C4u: goto label_8041A8C4;
    case 0x8041A8C8u: goto label_8041A8C8;
    case 0x8041A8CCu: goto label_8041A8CC;
    case 0x8041A8D0u: goto label_8041A8D0;
    case 0x8041A8D4u: goto label_8041A8D4;
    case 0x8041A8D8u: goto label_8041A8D8;
    case 0x8041A8DCu: goto label_8041A8DC;
    case 0x8041A8E0u: goto label_8041A8E0;
    case 0x8041A8E4u: goto label_8041A8E4;
    case 0x8041A8E8u: goto label_8041A8E8;
    case 0x8041A8ECu: goto label_8041A8EC;
    case 0x8041A8F0u: goto label_8041A8F0;
    case 0x8041A8F4u: goto label_8041A8F4;
    case 0x8041A8F8u: goto label_8041A8F8;
    case 0x8041A8FCu: goto label_8041A8FC;
    case 0x8041A900u: goto label_8041A900;
    case 0x8041A904u: goto label_8041A904;
    case 0x8041A908u: goto label_8041A908;
    case 0x8041A90Cu: goto label_8041A90C;
    case 0x8041A910u: goto label_8041A910;
    case 0x8041A914u: goto label_8041A914;
    case 0x8041A918u: goto label_8041A918;
    case 0x8041A91Cu: goto label_8041A91C;
    case 0x8041A920u: goto label_8041A920;
    case 0x8041A924u: goto label_8041A924;
    case 0x8041A928u: goto label_8041A928;
    case 0x8041A92Cu: goto label_8041A92C;
    case 0x8041A930u: goto label_8041A930;
    case 0x8041A934u: goto label_8041A934;
    case 0x8041A938u: goto label_8041A938;
    case 0x8041A93Cu: goto label_8041A93C;
    case 0x8041A940u: goto label_8041A940;
    case 0x8041A944u: goto label_8041A944;
    case 0x8041A948u: goto label_8041A948;
    case 0x8041A94Cu: goto label_8041A94C;
    case 0x8041A950u: goto label_8041A950;
    case 0x8041A954u: goto label_8041A954;
    case 0x8041A958u: goto label_8041A958;
    case 0x8041A95Cu: goto label_8041A95C;
    case 0x8041A960u: goto label_8041A960;
    case 0x8041A964u: goto label_8041A964;
    case 0x8041A968u: goto label_8041A968;
    case 0x8041A96Cu: goto label_8041A96C;
    case 0x8041A970u: goto label_8041A970;
    case 0x8041A974u: goto label_8041A974;
    case 0x8041A978u: goto label_8041A978;
    case 0x8041A97Cu: goto label_8041A97C;
    case 0x8041A980u: goto label_8041A980;
    case 0x8041A984u: goto label_8041A984;
    case 0x8041A988u: goto label_8041A988;
    case 0x8041A98Cu: goto label_8041A98C;
    case 0x8041A990u: goto label_8041A990;
    case 0x8041A994u: goto label_8041A994;
    case 0x8041A998u: goto label_8041A998;
    case 0x8041A99Cu: goto label_8041A99C;
    case 0x8041A9A0u: goto label_8041A9A0;
    case 0x8041A9A4u: goto label_8041A9A4;
    case 0x8041A9A8u: goto label_8041A9A8;
    case 0x8041A9ACu: goto label_8041A9AC;
    case 0x8041A9B0u: goto label_8041A9B0;
    case 0x8041A9B4u: goto label_8041A9B4;
    case 0x8041A9B8u: goto label_8041A9B8;
    case 0x8041A9BCu: goto label_8041A9BC;
    case 0x8041A9C0u: goto label_8041A9C0;
    case 0x8041A9C4u: goto label_8041A9C4;
    case 0x8041A9C8u: goto label_8041A9C8;
    case 0x8041A9CCu: goto label_8041A9CC;
    case 0x8041A9D0u: goto label_8041A9D0;
    case 0x8041A9D4u: goto label_8041A9D4;
    case 0x8041A9D8u: goto label_8041A9D8;
    case 0x8041A9DCu: goto label_8041A9DC;
    case 0x8041A9E0u: goto label_8041A9E0;
    case 0x8041A9E4u: goto label_8041A9E4;
    case 0x8041A9E8u: goto label_8041A9E8;
    case 0x8041A9ECu: goto label_8041A9EC;
    case 0x8041A9F0u: goto label_8041A9F0;
    case 0x8041A9F4u: goto label_8041A9F4;
    case 0x8041A9F8u: goto label_8041A9F8;
    case 0x8041A9FCu: goto label_8041A9FC;
    case 0x8041AA00u: goto label_8041AA00;
    case 0x8041AA04u: goto label_8041AA04;
    case 0x8041AA08u: goto label_8041AA08;
    case 0x8041AA0Cu: goto label_8041AA0C;
    case 0x8041AA10u: goto label_8041AA10;
    case 0x8041AA14u: goto label_8041AA14;
    case 0x8041AA18u: goto label_8041AA18;
    case 0x8041AA1Cu: goto label_8041AA1C;
    case 0x8041AA20u: goto label_8041AA20;
    case 0x8041AA24u: goto label_8041AA24;
    case 0x8041AA28u: goto label_8041AA28;
    case 0x8041AA2Cu: goto label_8041AA2C;
    case 0x8041AA30u: goto label_8041AA30;
    case 0x8041AA34u: goto label_8041AA34;
    case 0x8041AA38u: goto label_8041AA38;
    case 0x8041AA3Cu: goto label_8041AA3C;
    case 0x8041AA40u: goto label_8041AA40;
    case 0x8041AA44u: goto label_8041AA44;
    case 0x8041AA48u: goto label_8041AA48;
    case 0x8041AA4Cu: goto label_8041AA4C;
    case 0x8041AA50u: goto label_8041AA50;
    case 0x8041AA54u: goto label_8041AA54;
    case 0x8041AA58u: goto label_8041AA58;
    case 0x8041AA5Cu: goto label_8041AA5C;
    case 0x8041AA60u: goto label_8041AA60;
    case 0x8041AA64u: goto label_8041AA64;
    case 0x8041AA68u: goto label_8041AA68;
    case 0x8041AA6Cu: goto label_8041AA6C;
    case 0x8041AA70u: goto label_8041AA70;
    case 0x8041AA74u: goto label_8041AA74;
    case 0x8041AA78u: goto label_8041AA78;
    case 0x8041AA7Cu: goto label_8041AA7C;
    case 0x8041AA80u: goto label_8041AA80;
    case 0x8041AA84u: goto label_8041AA84;
    case 0x8041AA88u: goto label_8041AA88;
    case 0x8041AA8Cu: goto label_8041AA8C;
    case 0x8041AA90u: goto label_8041AA90;
    case 0x8041AA94u: goto label_8041AA94;
    case 0x8041AA98u: goto label_8041AA98;
    case 0x8041AA9Cu: goto label_8041AA9C;
    case 0x8041AAA0u: goto label_8041AAA0;
    case 0x8041AAA4u: goto label_8041AAA4;
    case 0x8041AAA8u: goto label_8041AAA8;
    case 0x8041AAACu: goto label_8041AAAC;
    case 0x8041AAB0u: goto label_8041AAB0;
    case 0x8041AAB4u: goto label_8041AAB4;
    case 0x8041AAB8u: goto label_8041AAB8;
    case 0x8041AABCu: goto label_8041AABC;
    case 0x8041AAC0u: goto label_8041AAC0;
    case 0x8041AAC4u: goto label_8041AAC4;
    case 0x8041AAC8u: goto label_8041AAC8;
    case 0x8041AACCu: goto label_8041AACC;
    case 0x8041AAD0u: goto label_8041AAD0;
    case 0x8041AAD4u: goto label_8041AAD4;
    case 0x8041AAD8u: goto label_8041AAD8;
    case 0x8041AADCu: goto label_8041AADC;
    case 0x8041AAE0u: goto label_8041AAE0;
    case 0x8041AAE4u: goto label_8041AAE4;
    case 0x8041AAE8u: goto label_8041AAE8;
    case 0x8041AAECu: goto label_8041AAEC;
    case 0x8041AAF0u: goto label_8041AAF0;
    case 0x8041AAF4u: goto label_8041AAF4;
    case 0x8041AAF8u: goto label_8041AAF8;
    case 0x8041AAFCu: goto label_8041AAFC;
    case 0x8041AB00u: goto label_8041AB00;
    case 0x8041AB04u: goto label_8041AB04;
    case 0x8041AB08u: goto label_8041AB08;
    case 0x8041AB0Cu: goto label_8041AB0C;
    case 0x8041AB10u: goto label_8041AB10;
    case 0x8041AB14u: goto label_8041AB14;
    case 0x8041AB18u: goto label_8041AB18;
    case 0x8041AB1Cu: goto label_8041AB1C;
    case 0x8041AB20u: goto label_8041AB20;
    case 0x8041AB24u: goto label_8041AB24;
    case 0x8041AB28u: goto label_8041AB28;
    case 0x8041AB2Cu: goto label_8041AB2C;
    case 0x8041AB30u: goto label_8041AB30;
    case 0x8041AB34u: goto label_8041AB34;
    case 0x8041AB38u: goto label_8041AB38;
    case 0x8041AB3Cu: goto label_8041AB3C;
    case 0x8041AB40u: goto label_8041AB40;
    case 0x8041AB44u: goto label_8041AB44;
    case 0x8041AB48u: goto label_8041AB48;
    case 0x8041AB4Cu: goto label_8041AB4C;
    case 0x8041AB50u: goto label_8041AB50;
    case 0x8041AB54u: goto label_8041AB54;
    case 0x8041AB58u: goto label_8041AB58;
    case 0x8041AB5Cu: goto label_8041AB5C;
    case 0x8041AB60u: goto label_8041AB60;
    case 0x8041AB64u: goto label_8041AB64;
    case 0x8041AB68u: goto label_8041AB68;
    case 0x8041AB6Cu: goto label_8041AB6C;
    case 0x8041AB70u: goto label_8041AB70;
    case 0x8041AB74u: goto label_8041AB74;
    case 0x8041AB78u: goto label_8041AB78;
    case 0x8041AB7Cu: goto label_8041AB7C;
    case 0x8041AB80u: goto label_8041AB80;
    case 0x8041AB84u: goto label_8041AB84;
    case 0x8041AB88u: goto label_8041AB88;
    case 0x8041AB8Cu: goto label_8041AB8C;
    case 0x8041AB90u: goto label_8041AB90;
    case 0x8041AB94u: goto label_8041AB94;
    case 0x8041AB98u: goto label_8041AB98;
    case 0x8041AB9Cu: goto label_8041AB9C;
    case 0x8041ABA0u: goto label_8041ABA0;
    case 0x8041ABA4u: goto label_8041ABA4;
    case 0x8041ABA8u: goto label_8041ABA8;
    case 0x8041ABACu: goto label_8041ABAC;
    case 0x8041ABB0u: goto label_8041ABB0;
    case 0x8041ABB4u: goto label_8041ABB4;
    case 0x8041ABB8u: goto label_8041ABB8;
    case 0x8041ABBCu: goto label_8041ABBC;
    case 0x8041ABC0u: goto label_8041ABC0;
    case 0x8041ABC4u: goto label_8041ABC4;
    case 0x8041ABC8u: goto label_8041ABC8;
    case 0x8041ABCCu: goto label_8041ABCC;
    case 0x8041ABD0u: goto label_8041ABD0;
    case 0x8041ABD4u: goto label_8041ABD4;
    case 0x8041ABD8u: goto label_8041ABD8;
    case 0x8041ABDCu: goto label_8041ABDC;
    case 0x8041ABE0u: goto label_8041ABE0;
    case 0x8041ABE4u: goto label_8041ABE4;
    case 0x8041ABE8u: goto label_8041ABE8;
    case 0x8041ABECu: goto label_8041ABEC;
    case 0x8041ABF0u: goto label_8041ABF0;
    case 0x8041ABF4u: goto label_8041ABF4;
    case 0x8041ABF8u: goto label_8041ABF8;
    case 0x8041ABFCu: goto label_8041ABFC;
    case 0x8041AC00u: goto label_8041AC00;
    case 0x8041AC04u: goto label_8041AC04;
    case 0x8041AC08u: goto label_8041AC08;
    case 0x8041AC0Cu: goto label_8041AC0C;
    case 0x8041AC10u: goto label_8041AC10;
    case 0x8041AC14u: goto label_8041AC14;
    case 0x8041AC18u: goto label_8041AC18;
    case 0x8041AC1Cu: goto label_8041AC1C;
    case 0x8041AC20u: goto label_8041AC20;
    case 0x8041AC24u: goto label_8041AC24;
    case 0x8041AC28u: goto label_8041AC28;
    case 0x8041AC2Cu: goto label_8041AC2C;
    case 0x8041AC30u: goto label_8041AC30;
    case 0x8041AC34u: goto label_8041AC34;
    case 0x8041AC38u: goto label_8041AC38;
    case 0x8041AC3Cu: goto label_8041AC3C;
    case 0x8041AC40u: goto label_8041AC40;
    case 0x8041AC44u: goto label_8041AC44;
    case 0x8041AC48u: goto label_8041AC48;
    case 0x8041AC4Cu: goto label_8041AC4C;
    case 0x8041AC50u: goto label_8041AC50;
    case 0x8041AC54u: goto label_8041AC54;
    case 0x8041AC58u: goto label_8041AC58;
    case 0x8041AC5Cu: goto label_8041AC5C;
    case 0x8041AC60u: goto label_8041AC60;
    case 0x8041AC64u: goto label_8041AC64;
    case 0x8041AC68u: goto label_8041AC68;
    case 0x8041AC6Cu: goto label_8041AC6C;
    case 0x8041AC70u: goto label_8041AC70;
    case 0x8041AC74u: goto label_8041AC74;
    case 0x8041AC78u: goto label_8041AC78;
    case 0x8041AC7Cu: goto label_8041AC7C;
    case 0x8041AC80u: goto label_8041AC80;
    case 0x8041AC84u: goto label_8041AC84;
    case 0x8041AC88u: goto label_8041AC88;
    case 0x8041AC8Cu: goto label_8041AC8C;
    case 0x8041AC90u: goto label_8041AC90;
    case 0x8041AC94u: goto label_8041AC94;
    case 0x8041AC98u: goto label_8041AC98;
    case 0x8041AC9Cu: goto label_8041AC9C;
    case 0x8041ACA0u: goto label_8041ACA0;
    case 0x8041ACA4u: goto label_8041ACA4;
    case 0x8041ACA8u: goto label_8041ACA8;
    case 0x8041ACACu: goto label_8041ACAC;
    case 0x8041ACB0u: goto label_8041ACB0;
    case 0x8041ACB4u: goto label_8041ACB4;
    case 0x8041ACB8u: goto label_8041ACB8;
    case 0x8041ACBCu: goto label_8041ACBC;
    case 0x8041ACC0u: goto label_8041ACC0;
    case 0x8041ACC4u: goto label_8041ACC4;
    case 0x8041ACC8u: goto label_8041ACC8;
    case 0x8041ACCCu: goto label_8041ACCC;
    case 0x8041ACD0u: goto label_8041ACD0;
    case 0x8041ACD4u: goto label_8041ACD4;
    case 0x8041ACD8u: goto label_8041ACD8;
    case 0x8041ACDCu: goto label_8041ACDC;
    case 0x8041ACE0u: goto label_8041ACE0;
    case 0x8041ACE4u: goto label_8041ACE4;
    case 0x8041ACE8u: goto label_8041ACE8;
    case 0x8041ACECu: goto label_8041ACEC;
    case 0x8041ACF0u: goto label_8041ACF0;
    case 0x8041ACF4u: goto label_8041ACF4;
    case 0x8041ACF8u: goto label_8041ACF8;
    case 0x8041ACFCu: goto label_8041ACFC;
    case 0x8041AD00u: goto label_8041AD00;
    case 0x8041AD04u: goto label_8041AD04;
    case 0x8041AD08u: goto label_8041AD08;
    case 0x8041AD0Cu: goto label_8041AD0C;
    case 0x8041AD10u: goto label_8041AD10;
    case 0x8041AD14u: goto label_8041AD14;
    case 0x8041AD18u: goto label_8041AD18;
    case 0x8041AD1Cu: goto label_8041AD1C;
    case 0x8041AD20u: goto label_8041AD20;
    case 0x8041AD24u: goto label_8041AD24;
    case 0x8041AD28u: goto label_8041AD28;
    case 0x8041AD2Cu: goto label_8041AD2C;
    case 0x8041AD30u: goto label_8041AD30;
    case 0x8041AD34u: goto label_8041AD34;
    case 0x8041AD38u: goto label_8041AD38;
    case 0x8041AD3Cu: goto label_8041AD3C;
    case 0x8041AD40u: goto label_8041AD40;
    case 0x8041AD44u: goto label_8041AD44;
    case 0x8041AD48u: goto label_8041AD48;
    case 0x8041AD4Cu: goto label_8041AD4C;
    case 0x8041AD50u: goto label_8041AD50;
    case 0x8041AD54u: goto label_8041AD54;
    case 0x8041AD58u: goto label_8041AD58;
    case 0x8041AD5Cu: goto label_8041AD5C;
    case 0x8041AD60u: goto label_8041AD60;
    case 0x8041AD64u: goto label_8041AD64;
    case 0x8041AD68u: goto label_8041AD68;
    case 0x8041AD6Cu: goto label_8041AD6C;
    case 0x8041AD70u: goto label_8041AD70;
    case 0x8041AD74u: goto label_8041AD74;
    case 0x8041AD78u: goto label_8041AD78;
    case 0x8041AD7Cu: goto label_8041AD7C;
    case 0x8041AD80u: goto label_8041AD80;
    case 0x8041AD84u: goto label_8041AD84;
    case 0x8041AD88u: goto label_8041AD88;
    case 0x8041AD8Cu: goto label_8041AD8C;
    case 0x8041AD90u: goto label_8041AD90;
    case 0x8041AD94u: goto label_8041AD94;
    case 0x8041AD98u: goto label_8041AD98;
    case 0x8041AD9Cu: goto label_8041AD9C;
    case 0x8041ADA0u: goto label_8041ADA0;
    case 0x8041ADA4u: goto label_8041ADA4;
    case 0x8041ADA8u: goto label_8041ADA8;
    case 0x8041ADACu: goto label_8041ADAC;
    case 0x8041ADB0u: goto label_8041ADB0;
    case 0x8041ADB4u: goto label_8041ADB4;
    case 0x8041ADB8u: goto label_8041ADB8;
    case 0x8041ADBCu: goto label_8041ADBC;
    case 0x8041ADC0u: goto label_8041ADC0;
    case 0x8041ADC4u: goto label_8041ADC4;
    case 0x8041ADC8u: goto label_8041ADC8;
    case 0x8041ADCCu: goto label_8041ADCC;
    case 0x8041ADD0u: goto label_8041ADD0;
    case 0x8041ADD4u: goto label_8041ADD4;
    case 0x8041ADD8u: goto label_8041ADD8;
    case 0x8041ADDCu: goto label_8041ADDC;
    case 0x8041ADE0u: goto label_8041ADE0;
    case 0x8041ADE4u: goto label_8041ADE4;
    case 0x8041ADE8u: goto label_8041ADE8;
    case 0x8041ADECu: goto label_8041ADEC;
    case 0x8041ADF0u: goto label_8041ADF0;
    case 0x8041ADF4u: goto label_8041ADF4;
    case 0x8041ADF8u: goto label_8041ADF8;
    case 0x8041ADFCu: goto label_8041ADFC;
    case 0x8041AE00u: goto label_8041AE00;
    case 0x8041AE04u: goto label_8041AE04;
    case 0x8041AE08u: goto label_8041AE08;
    case 0x8041AE0Cu: goto label_8041AE0C;
    case 0x8041AE10u: goto label_8041AE10;
    case 0x8041AE14u: goto label_8041AE14;
    case 0x8041AE18u: goto label_8041AE18;
    case 0x8041AE1Cu: goto label_8041AE1C;
    case 0x8041AE20u: goto label_8041AE20;
    case 0x8041AE24u: goto label_8041AE24;
    case 0x8041AE28u: goto label_8041AE28;
    case 0x8041AE2Cu: goto label_8041AE2C;
    case 0x8041AE30u: goto label_8041AE30;
    case 0x8041AE34u: goto label_8041AE34;
    case 0x8041AE38u: goto label_8041AE38;
    case 0x8041AE3Cu: goto label_8041AE3C;
    case 0x8041AE40u: goto label_8041AE40;
    case 0x8041AE44u: goto label_8041AE44;
    case 0x8041AE48u: goto label_8041AE48;
    case 0x8041AE4Cu: goto label_8041AE4C;
    case 0x8041AE50u: goto label_8041AE50;
    case 0x8041AE54u: goto label_8041AE54;
    case 0x8041AE58u: goto label_8041AE58;
    case 0x8041AE5Cu: goto label_8041AE5C;
    case 0x8041AE60u: goto label_8041AE60;
    case 0x8041AE64u: goto label_8041AE64;
    case 0x8041AE68u: goto label_8041AE68;
    case 0x8041AE6Cu: goto label_8041AE6C;
    case 0x8041AE70u: goto label_8041AE70;
    case 0x8041AE74u: goto label_8041AE74;
    case 0x8041AE78u: goto label_8041AE78;
    case 0x8041AE7Cu: goto label_8041AE7C;
    case 0x8041AE80u: goto label_8041AE80;
    case 0x8041AE84u: goto label_8041AE84;
    case 0x8041AE88u: goto label_8041AE88;
    case 0x8041AE8Cu: goto label_8041AE8C;
    case 0x8041AE90u: goto label_8041AE90;
    case 0x8041AE94u: goto label_8041AE94;
    case 0x8041AE98u: goto label_8041AE98;
    case 0x8041AE9Cu: goto label_8041AE9C;
    case 0x8041AEA0u: goto label_8041AEA0;
    case 0x8041AEA4u: goto label_8041AEA4;
    case 0x8041AEA8u: goto label_8041AEA8;
    case 0x8041AEACu: goto label_8041AEAC;
    case 0x8041AEB0u: goto label_8041AEB0;
    case 0x8041AEB4u: goto label_8041AEB4;
    case 0x8041AEB8u: goto label_8041AEB8;
    case 0x8041AEBCu: goto label_8041AEBC;
    case 0x8041AEC0u: goto label_8041AEC0;
    case 0x8041AEC4u: goto label_8041AEC4;
    case 0x8041AEC8u: goto label_8041AEC8;
    case 0x8041AECCu: goto label_8041AECC;
    case 0x8041AED0u: goto label_8041AED0;
    case 0x8041AED4u: goto label_8041AED4;
    case 0x8041AED8u: goto label_8041AED8;
    case 0x8041AEDCu: goto label_8041AEDC;
    case 0x8041AEE0u: goto label_8041AEE0;
    case 0x8041AEE4u: goto label_8041AEE4;
    case 0x8041AEE8u: goto label_8041AEE8;
    case 0x8041AEECu: goto label_8041AEEC;
    case 0x8041AEF0u: goto label_8041AEF0;
    case 0x8041AEF4u: goto label_8041AEF4;
    case 0x8041AEF8u: goto label_8041AEF8;
    case 0x8041AEFCu: goto label_8041AEFC;
    case 0x8041AF00u: goto label_8041AF00;
    case 0x8041AF04u: goto label_8041AF04;
    case 0x8041AF08u: goto label_8041AF08;
    case 0x8041AF0Cu: goto label_8041AF0C;
    case 0x8041AF10u: goto label_8041AF10;
    case 0x8041AF14u: goto label_8041AF14;
    case 0x8041AF18u: goto label_8041AF18;
    case 0x8041AF1Cu: goto label_8041AF1C;
    case 0x8041AF20u: goto label_8041AF20;
    case 0x8041AF24u: goto label_8041AF24;
    case 0x8041AF28u: goto label_8041AF28;
    case 0x8041AF2Cu: goto label_8041AF2C;
    case 0x8041AF30u: goto label_8041AF30;
    case 0x8041AF34u: goto label_8041AF34;
    case 0x8041AF38u: goto label_8041AF38;
    case 0x8041AF3Cu: goto label_8041AF3C;
    case 0x8041AF40u: goto label_8041AF40;
    case 0x8041AF44u: goto label_8041AF44;
    case 0x8041AF48u: goto label_8041AF48;
    case 0x8041AF4Cu: goto label_8041AF4C;
    case 0x8041AF50u: goto label_8041AF50;
    case 0x8041AF54u: goto label_8041AF54;
    case 0x8041AF58u: goto label_8041AF58;
    case 0x8041AF5Cu: goto label_8041AF5C;
    case 0x8041AF60u: goto label_8041AF60;
    case 0x8041AF64u: goto label_8041AF64;
    case 0x8041AF68u: goto label_8041AF68;
    case 0x8041AF6Cu: goto label_8041AF6C;
    case 0x8041AF70u: goto label_8041AF70;
    case 0x8041AF74u: goto label_8041AF74;
    case 0x8041AF78u: goto label_8041AF78;
    case 0x8041AF7Cu: goto label_8041AF7C;
    case 0x8041AF80u: goto label_8041AF80;
    case 0x8041AF84u: goto label_8041AF84;
    case 0x8041AF88u: goto label_8041AF88;
    case 0x8041AF8Cu: goto label_8041AF8C;
    case 0x8041AF90u: goto label_8041AF90;
    case 0x8041AF94u: goto label_8041AF94;
    case 0x8041AF98u: goto label_8041AF98;
    case 0x8041AF9Cu: goto label_8041AF9C;
    case 0x8041AFA0u: goto label_8041AFA0;
    case 0x8041AFA4u: goto label_8041AFA4;
    case 0x8041AFA8u: goto label_8041AFA8;
    case 0x8041AFACu: goto label_8041AFAC;
    case 0x8041AFB0u: goto label_8041AFB0;
    case 0x8041AFB4u: goto label_8041AFB4;
    case 0x8041AFB8u: goto label_8041AFB8;
    case 0x8041AFBCu: goto label_8041AFBC;
    case 0x8041AFC0u: goto label_8041AFC0;
    case 0x8041AFC4u: goto label_8041AFC4;
    case 0x8041AFC8u: goto label_8041AFC8;
    case 0x8041AFCCu: goto label_8041AFCC;
    case 0x8041AFD0u: goto label_8041AFD0;
    case 0x8041AFD4u: goto label_8041AFD4;
    case 0x8041AFD8u: goto label_8041AFD8;
    case 0x8041AFDCu: goto label_8041AFDC;
    case 0x8041AFE0u: goto label_8041AFE0;
    case 0x8041AFE4u: goto label_8041AFE4;
    case 0x8041AFE8u: goto label_8041AFE8;
    case 0x8041AFECu: goto label_8041AFEC;
    case 0x8041AFF0u: goto label_8041AFF0;
    case 0x8041AFF4u: goto label_8041AFF4;
    case 0x8041AFF8u: goto label_8041AFF8;
    case 0x8041AFFCu: goto label_8041AFFC;
    case 0x8041B000u: goto label_8041B000;
    case 0x8041B004u: goto label_8041B004;
    case 0x8041B008u: goto label_8041B008;
    case 0x8041B00Cu: goto label_8041B00C;
    case 0x8041B010u: goto label_8041B010;
    case 0x8041B014u: goto label_8041B014;
    case 0x8041B018u: goto label_8041B018;
    case 0x8041B01Cu: goto label_8041B01C;
    case 0x8041B020u: goto label_8041B020;
    case 0x8041B024u: goto label_8041B024;
    case 0x8041B028u: goto label_8041B028;
    case 0x8041B02Cu: goto label_8041B02C;
    case 0x8041B030u: goto label_8041B030;
    case 0x8041B034u: goto label_8041B034;
    case 0x8041B038u: goto label_8041B038;
    case 0x8041B03Cu: goto label_8041B03C;
    case 0x8041B040u: goto label_8041B040;
    case 0x8041B044u: goto label_8041B044;
    case 0x8041B048u: goto label_8041B048;
    case 0x8041B04Cu: goto label_8041B04C;
    case 0x8041B050u: goto label_8041B050;
    case 0x8041B054u: goto label_8041B054;
    case 0x8041B058u: goto label_8041B058;
    case 0x8041B05Cu: goto label_8041B05C;
    case 0x8041B060u: goto label_8041B060;
    case 0x8041B064u: goto label_8041B064;
    case 0x8041B068u: goto label_8041B068;
    case 0x8041B06Cu: goto label_8041B06C;
    case 0x8041B070u: goto label_8041B070;
    case 0x8041B074u: goto label_8041B074;
    case 0x8041B078u: goto label_8041B078;
    case 0x8041B07Cu: goto label_8041B07C;
    case 0x8041B080u: goto label_8041B080;
    case 0x8041B084u: goto label_8041B084;
    case 0x8041B088u: goto label_8041B088;
    case 0x8041B08Cu: goto label_8041B08C;
    case 0x8041B090u: goto label_8041B090;
    case 0x8041B094u: goto label_8041B094;
    case 0x8041B098u: goto label_8041B098;
    case 0x8041B09Cu: goto label_8041B09C;
    case 0x8041B0A0u: goto label_8041B0A0;
    case 0x8041B0A4u: goto label_8041B0A4;
    case 0x8041B0A8u: goto label_8041B0A8;
    case 0x8041B0ACu: goto label_8041B0AC;
    case 0x8041B0B0u: goto label_8041B0B0;
    case 0x8041B0B4u: goto label_8041B0B4;
    case 0x8041B0B8u: goto label_8041B0B8;
    case 0x8041B0BCu: goto label_8041B0BC;
    case 0x8041B0C0u: goto label_8041B0C0;
    case 0x8041B0C4u: goto label_8041B0C4;
    case 0x8041B0C8u: goto label_8041B0C8;
    case 0x8041B0CCu: goto label_8041B0CC;
    case 0x8041B0D0u: goto label_8041B0D0;
    case 0x8041B0D4u: goto label_8041B0D4;
    case 0x8041B0D8u: goto label_8041B0D8;
    case 0x8041B0DCu: goto label_8041B0DC;
    case 0x8041B0E0u: goto label_8041B0E0;
    case 0x8041B0E4u: goto label_8041B0E4;
    case 0x8041B0E8u: goto label_8041B0E8;
    case 0x8041B0ECu: goto label_8041B0EC;
    case 0x8041B0F0u: goto label_8041B0F0;
    case 0x8041B0F4u: goto label_8041B0F4;
    case 0x8041B0F8u: goto label_8041B0F8;
    case 0x8041B0FCu: goto label_8041B0FC;
    case 0x8041B100u: goto label_8041B100;
    case 0x8041B104u: goto label_8041B104;
    case 0x8041B108u: goto label_8041B108;
    case 0x8041B10Cu: goto label_8041B10C;
    case 0x8041B110u: goto label_8041B110;
    case 0x8041B114u: goto label_8041B114;
    case 0x8041B118u: goto label_8041B118;
    case 0x8041B11Cu: goto label_8041B11C;
    case 0x8041B120u: goto label_8041B120;
    case 0x8041B124u: goto label_8041B124;
    case 0x8041B128u: goto label_8041B128;
    case 0x8041B12Cu: goto label_8041B12C;
    case 0x8041B130u: goto label_8041B130;
    case 0x8041B134u: goto label_8041B134;
    case 0x8041B138u: goto label_8041B138;
    case 0x8041B13Cu: goto label_8041B13C;
    case 0x8041B140u: goto label_8041B140;
    case 0x8041B144u: goto label_8041B144;
    case 0x8041B148u: goto label_8041B148;
    case 0x8041B14Cu: goto label_8041B14C;
    case 0x8041B150u: goto label_8041B150;
    case 0x8041B154u: goto label_8041B154;
    case 0x8041B158u: goto label_8041B158;
    case 0x8041B15Cu: goto label_8041B15C;
    case 0x8041B160u: goto label_8041B160;
    case 0x8041B164u: goto label_8041B164;
    case 0x8041B168u: goto label_8041B168;
    case 0x8041B16Cu: goto label_8041B16C;
    case 0x8041B170u: goto label_8041B170;
    case 0x8041B174u: goto label_8041B174;
    case 0x8041B178u: goto label_8041B178;
    case 0x8041B17Cu: goto label_8041B17C;
    case 0x8041B180u: goto label_8041B180;
    case 0x8041B184u: goto label_8041B184;
    case 0x8041B188u: goto label_8041B188;
    case 0x8041B18Cu: goto label_8041B18C;
    case 0x8041B190u: goto label_8041B190;
    case 0x8041B194u: goto label_8041B194;
    case 0x8041B198u: goto label_8041B198;
    case 0x8041B19Cu: goto label_8041B19C;
    case 0x8041B1A0u: goto label_8041B1A0;
    case 0x8041B1A4u: goto label_8041B1A4;
    case 0x8041B1A8u: goto label_8041B1A8;
    case 0x8041B1ACu: goto label_8041B1AC;
    case 0x8041B1B0u: goto label_8041B1B0;
    case 0x8041B1B4u: goto label_8041B1B4;
    case 0x8041B1B8u: goto label_8041B1B8;
    case 0x8041B1BCu: goto label_8041B1BC;
    default: return;
    }
label_804171C0:
    ctx->pc = 0x804171C0u;
    ctx->downcount -= 2;
    // 804171C0: stw     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804171C4:
    ctx->pc = 0x804171C4u;
    // 804171C4: bl      0x801C1C48
    {
            ctx->lr = 0x804171C8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_804171C8:
    ctx->pc = 0x804171C8u;
    ctx->downcount -= 2;
    // 804171C8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804171CC:
    ctx->pc = 0x804171CCu;
    // 804171CC: bc    12, 2, 0x804171D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804171D4;
        }
    }

label_804171D0:
    ctx->pc = 0x804171D0u;
    ctx->downcount -= 1;
    // 804171D0: bl      0x803EF1C8
    {
            ctx->lr = 0x804171D4u;
            ctx->pc = 0x803EF1C8u;
            return;
    }

label_804171D4:
    ctx->pc = 0x804171D4u;
    ctx->downcount -= 3;
    // 804171D4: stw     r3, 16(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804171D8:
    ctx->pc = 0x804171D8u;
    // 804171D8: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_804171DC:
    ctx->pc = 0x804171DCu;
    // 804171DC: bl      0x801C1C48
    {
            ctx->lr = 0x804171E0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_804171E0:
    ctx->pc = 0x804171E0u;
    ctx->downcount -= 2;
    // 804171E0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804171E4:
    ctx->pc = 0x804171E4u;
    // 804171E4: bc    12, 2, 0x804171EC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804171EC;
        }
    }

label_804171E8:
    ctx->pc = 0x804171E8u;
    ctx->downcount -= 1;
    // 804171E8: bl      0x803EF1C8
    {
            ctx->lr = 0x804171ECu;
            ctx->pc = 0x803EF1C8u;
            return;
    }

label_804171EC:
    ctx->pc = 0x804171ECu;
    ctx->downcount -= 3;
    // 804171EC: stw     r3, 20(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804171F0:
    ctx->pc = 0x804171F0u;
    // 804171F0: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_804171F4:
    ctx->pc = 0x804171F4u;
    // 804171F4: bl      0x801C1C48
    {
            ctx->lr = 0x804171F8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_804171F8:
    ctx->pc = 0x804171F8u;
    ctx->downcount -= 2;
    // 804171F8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804171FC:
    ctx->pc = 0x804171FCu;
    // 804171FC: bc    12, 2, 0x80417204
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417204;
        }
    }

label_80417200:
    ctx->pc = 0x80417200u;
    ctx->downcount -= 1;
    // 80417200: bl      0x803EF1C8
    {
            ctx->lr = 0x80417204u;
            ctx->pc = 0x803EF1C8u;
            return;
    }

label_80417204:
    ctx->pc = 0x80417204u;
    ctx->downcount -= 3;
    // 80417204: stw     r3, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417208:
    ctx->pc = 0x80417208u;
    // 80417208: li      r3, 80
    ctx->gpr[3] = (u32)(s32)(80);

label_8041720C:
    ctx->pc = 0x8041720Cu;
    // 8041720C: bl      0x801C1C48
    {
            ctx->lr = 0x80417210u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80417210:
    ctx->pc = 0x80417210u;
    ctx->downcount -= 3;
    // 80417210: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417214:
    ctx->pc = 0x80417214u;
    // 80417214: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417218:
    ctx->pc = 0x80417218u;
    // 80417218: bc    12, 2, 0x80417224
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417224;
        }
    }

label_8041721C:
    ctx->pc = 0x8041721Cu;
    ctx->downcount -= 1;
    // 8041721C: bl      0x803EF1C8
    {
            ctx->lr = 0x80417220u;
            ctx->pc = 0x803EF1C8u;
            return;
    }

label_80417220:
    ctx->pc = 0x80417220u;
    ctx->downcount -= 1;
    // 80417220: or   r0, r3, r3
    {
        ctx->gpr[0] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417224:
    ctx->pc = 0x80417224u;
    ctx->downcount -= 8;
    // 80417224: lfs     f0, 40(r2)
    if (!ppc_fp_available_inline(ctx, 0x80417224u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(40);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80417228:
    ctx->pc = 0x80417228u;
    // 80417228: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_8041722C:
    ctx->pc = 0x8041722Cu;
    // 8041722C: stw     r0, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417230:
    ctx->pc = 0x80417230u;
    // 80417230: stfs     f0, 92(r31)
    if (!ppc_fp_available_inline(ctx, 0x80417230u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80417234:
    ctx->pc = 0x80417234u;
    // 80417234: stfs     f0, 96(r31)
    if (!ppc_fp_available_inline(ctx, 0x80417234u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(96);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80417238:
    ctx->pc = 0x80417238u;
    // 80417238: stfs     f0, 100(r31)
    if (!ppc_fp_available_inline(ctx, 0x80417238u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(100);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8041723C:
    ctx->pc = 0x8041723Cu;
    // 8041723C: stfs     f0, 104(r31)
    if (!ppc_fp_available_inline(ctx, 0x8041723Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(104);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80417240:
    ctx->pc = 0x80417240u;
    // 80417240: bl      0x801C1C48
    {
            ctx->lr = 0x80417244u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80417244:
    ctx->pc = 0x80417244u;
    ctx->downcount -= 2;
    // 80417244: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417248:
    ctx->pc = 0x80417248u;
    // 80417248: bc    12, 2, 0x80417250
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417250;
        }
    }

label_8041724C:
    ctx->pc = 0x8041724Cu;
    ctx->downcount -= 1;
    // 8041724C: bl      0x8035D694
    {
            ctx->lr = 0x80417250u;
            ctx->pc = 0x8035D694u;
            return;
    }

label_80417250:
    ctx->pc = 0x80417250u;
    ctx->downcount -= 3;
    // 80417250: stw     r3, 108(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(108);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417254:
    ctx->pc = 0x80417254u;
    // 80417254: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80417258:
    ctx->pc = 0x80417258u;
    // 80417258: bl      0x801C1C48
    {
            ctx->lr = 0x8041725Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041725C:
    ctx->pc = 0x8041725Cu;
    ctx->downcount -= 2;
    // 8041725C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417260:
    ctx->pc = 0x80417260u;
    // 80417260: bc    12, 2, 0x80417268
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417268;
        }
    }

label_80417264:
    ctx->pc = 0x80417264u;
    ctx->downcount -= 1;
    // 80417264: bl      0x8035D694
    {
            ctx->lr = 0x80417268u;
            ctx->pc = 0x8035D694u;
            return;
    }

label_80417268:
    ctx->pc = 0x80417268u;
    ctx->downcount -= 8;
    // 80417268: stw     r3, 112(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041726C:
    ctx->pc = 0x8041726Cu;
    // 8041726C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80417270:
    ctx->pc = 0x80417270u;
    // 80417270: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417274:
    ctx->pc = 0x80417274u;
    // 80417274: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417278:
    ctx->pc = 0x80417278u;
    // 80417278: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041727C:
    ctx->pc = 0x8041727Cu;
    // 8041727C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417280:
    ctx->pc = 0x80417280u;
    // 80417280: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417284:
    ctx->pc = 0x80417284u;
    ctx->downcount -= 7;
    // 80417284: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417288:
    ctx->pc = 0x80417288u;
    // 80417288: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041728C:
    // 8041728C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417290:
    ctx->pc = 0x80417290u;
    // 80417290: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417294:
    ctx->pc = 0x80417294u;
    // 80417294: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417298:
    // 80417298: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041729C:
    // 8041729C: bc    12, 2, 0x804172AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804172AC;
        }
    }

label_804172A0:
    ctx->downcount -= 2;
    // 804172A0: cmpwi   r4, 0
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

label_804172A4:
    // 804172A4: bc    4, 1, 0x804172AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804172AC;
        }
    }

label_804172A8:
    ctx->downcount -= 1;
    // 804172A8: bl      0x801C1C90
    {
            ctx->lr = 0x804172ACu;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_804172AC:
    ctx->downcount -= 7;
    // 804172AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804172B0:
    ctx->pc = 0x804172B0u;
    // 804172B0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804172B4:
    ctx->pc = 0x804172B4u;
    // 804172B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804172B8:
    ctx->pc = 0x804172B8u;
    // 804172B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804172BC:
    // 804172BC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804172C0:
    ctx->pc = 0x804172C0u;
    // 804172C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804172C4:
    ctx->downcount -= 2;
    // 804172C4: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_804172C8:
    // 804172C8: b       0x80416420
    {
            ctx->pc = 0x80416420u;
            return;
    }

label_804172CC:
    ctx->downcount -= 2;
    // 804172CC: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_804172D0:
    // 804172D0: b       0x804164A0
    {
            ctx->pc = 0x804164A0u;
            return;
    }

label_804172D4:
    ctx->downcount -= 2;
    // 804172D4: addi    r3, r3, -4
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-4);

label_804172D8:
    // 804172D8: b       0x80417284
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417284u;
                return;
            }
            goto label_80417284;
    }

label_804172DC:
    ctx->pc = 0x804172DCu;
    ctx->downcount -= 5;
    // 804172DC: lwz     r4, -11280(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804172E0:
    ctx->pc = 0x804172E0u;
    // 804172E0: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_804172E4:
    ctx->pc = 0x804172E4u;
    // 804172E4: lbz     r0, 26(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(26);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804172E8:
    ctx->pc = 0x804172E8u;
    // 804172E8: cmpwi   r0, 0
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

label_804172EC:
    ctx->pc = 0x804172ECu;
    // 804172EC: bc    4, 2, 0x80417300
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80417300;
        }
    }

label_804172F0:
    ctx->pc = 0x804172F0u;
    ctx->downcount -= 4;
    // 804172F0: lwz     r4, -11400(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11400);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804172F4:
    ctx->pc = 0x804172F4u;
    // 804172F4: lwz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804172F8:
    ctx->pc = 0x804172F8u;
    // 804172F8: cmpwi   r0, 17
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804172FC:
    ctx->pc = 0x804172FCu;
    // 804172FC: bclr  4, 2
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417300:
    ctx->pc = 0x80417300u;
    ctx->downcount -= 2;
    // 80417300: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80417304:
    ctx->pc = 0x80417304u;
    // 80417304: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417308:
    ctx->pc = 0x80417308u;
    ctx->downcount -= 2;
    // 80417308: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041730C:
    ctx->pc = 0x8041730Cu;
    // 8041730C: b       0x8041A238
    {
            goto label_8041A238;
    }

label_80417310:
    ctx->pc = 0x80417310u;
    ctx->downcount -= 2;
    // 80417310: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417314:
    ctx->pc = 0x80417314u;
    // 80417314: b       0x8041A1F8
    {
            goto label_8041A1F8;
    }

label_80417318:
    ctx->pc = 0x80417318u;
    ctx->downcount -= 2;
    // 80417318: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041731C:
    ctx->pc = 0x8041731Cu;
    // 8041731C: b       0x8041A354
    {
            goto label_8041A354;
    }

label_80417320:
    ctx->pc = 0x80417320u;
    ctx->downcount -= 1;
    // 80417320: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417324:
    ctx->pc = 0x80417324u;
    ctx->downcount -= 1;
    // 80417324: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417328:
    ctx->pc = 0x80417328u;
    ctx->downcount -= 5;
    // 80417328: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041732C:
    ctx->pc = 0x8041732Cu;
    // 8041732C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417330:
    ctx->pc = 0x80417330u;
    // 80417330: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417334:
    ctx->pc = 0x80417334u;
    // 80417334: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417338:
    ctx->pc = 0x80417338u;
    // 80417338: bl      0x80402C28
    {
            ctx->lr = 0x8041733Cu;
            ctx->pc = 0x80402C28u;
            return;
    }

label_8041733C:
    ctx->pc = 0x8041733Cu;
    ctx->downcount -= 2;
    // 8041733C: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417340:
    ctx->pc = 0x80417340u;
    // 80417340: bl      0x80410D7C
    {
            ctx->lr = 0x80417344u;
            ctx->pc = 0x80410D7Cu;
            return;
    }

label_80417344:
    ctx->pc = 0x80417344u;
    ctx->downcount -= 2;
    // 80417344: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417348:
    ctx->pc = 0x80417348u;
    // 80417348: bl      0x803FB108
    {
            ctx->lr = 0x8041734Cu;
            ctx->pc = 0x803FB108u;
            return;
    }

label_8041734C:
    ctx->pc = 0x8041734Cu;
    ctx->downcount -= 2;
    // 8041734C: lwz     r3, -11416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417350:
    ctx->pc = 0x80417350u;
    // 80417350: bl      0x80404C10
    {
            ctx->lr = 0x80417354u;
            ctx->pc = 0x80404C10u;
            return;
    }

label_80417354:
    ctx->pc = 0x80417354u;
    ctx->downcount -= 5;
    // 80417354: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417358:
    ctx->pc = 0x80417358u;
    // 80417358: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041735C:
    ctx->pc = 0x8041735Cu;
    // 8041735C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417360:
    ctx->pc = 0x80417360u;
    // 80417360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417364:
    ctx->pc = 0x80417364u;
    ctx->downcount -= 7;
    // 80417364: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417368:
    ctx->pc = 0x80417368u;
    // 80417368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041736C:
    ctx->pc = 0x8041736Cu;
    // 8041736C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417370:
    ctx->pc = 0x80417370u;
    // 80417370: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417374:
    ctx->pc = 0x80417374u;
    // 80417374: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417378:
    ctx->pc = 0x80417378u;
    // 80417378: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041737C:
    ctx->pc = 0x8041737Cu;
    // 8041737C: bl      0x80410B78
    {
            ctx->lr = 0x80417380u;
            ctx->pc = 0x80410B78u;
            return;
    }

label_80417380:
    ctx->pc = 0x80417380u;
    ctx->downcount -= 2;
    // 80417380: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417384:
    ctx->pc = 0x80417384u;
    // 80417384: bl      0x8040EB3C
    {
            ctx->lr = 0x80417388u;
            ctx->pc = 0x8040EB3Cu;
            return;
    }

label_80417388:
    ctx->pc = 0x80417388u;
    ctx->downcount -= 10;
    // 80417388: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041738C:
    ctx->pc = 0x8041738Cu;
    // 8041738C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80417390:
    ctx->pc = 0x80417390u;
    // 80417390: lwz     r4, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417394:
    ctx->pc = 0x80417394u;
    // 80417394: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417398:
    ctx->pc = 0x80417398u;
    // 80417398: lwz     r4, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041739C:
    ctx->pc = 0x8041739Cu;
    // 8041739C: lwz     r12, 20(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(20);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804173A0:
    ctx->pc = 0x804173A0u;
    // 804173A0: lwz     r4, 124(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(124);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804173A4:
    ctx->pc = 0x804173A4u;
    // 804173A4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_804173A8:
    ctx->pc = 0x804173A8u;
    // 804173A8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x804173ACu;
            ctx->pc = target;
            return;
        }
    }

label_804173AC:
    ctx->pc = 0x804173ACu;
    ctx->downcount -= 6;
    // 804173AC: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804173B0:
    ctx->pc = 0x804173B0u;
    // 804173B0: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804173B4:
    ctx->pc = 0x804173B4u;
    // 804173B4: lwz     r12, 32(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(32);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804173B8:
    ctx->pc = 0x804173B8u;
    // 804173B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_804173BC:
    ctx->pc = 0x804173BCu;
    // 804173BC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x804173C0u;
            ctx->pc = target;
            return;
        }
    }

label_804173C0:
    ctx->pc = 0x804173C0u;
    ctx->downcount -= 2;
    // 804173C0: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804173C4:
    ctx->pc = 0x804173C4u;
    // 804173C4: bl      0x804034D4
    {
            ctx->lr = 0x804173C8u;
            ctx->pc = 0x804034D4u;
            return;
    }

label_804173C8:
    ctx->pc = 0x804173C8u;
    ctx->downcount -= 2;
    // 804173C8: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804173CC:
    ctx->pc = 0x804173CCu;
    // 804173CC: bl      0x8040347C
    {
            ctx->lr = 0x804173D0u;
            ctx->pc = 0x8040347Cu;
            return;
    }

label_804173D0:
    ctx->pc = 0x804173D0u;
    ctx->downcount -= 2;
    // 804173D0: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804173D4:
    ctx->pc = 0x804173D4u;
    // 804173D4: bl      0x803FB370
    {
            ctx->lr = 0x804173D8u;
            ctx->pc = 0x803FB370u;
            return;
    }

label_804173D8:
    ctx->pc = 0x804173D8u;
    ctx->downcount -= 6;
    // 804173D8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804173DC:
    ctx->pc = 0x804173DCu;
    // 804173DC: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804173E0:
    ctx->pc = 0x804173E0u;
    // 804173E0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804173E4:
    ctx->pc = 0x804173E4u;
    // 804173E4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804173E8:
    ctx->pc = 0x804173E8u;
    // 804173E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804173EC:
    ctx->pc = 0x804173ECu;
    ctx->downcount -= 5;
    // 804173EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804173F0:
    ctx->pc = 0x804173F0u;
    // 804173F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804173F4:
    ctx->pc = 0x804173F4u;
    // 804173F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804173F8:
    ctx->pc = 0x804173F8u;
    // 804173F8: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804173FC:
    ctx->pc = 0x804173FCu;
    // 804173FC: bl      0x8040E73C
    {
            ctx->lr = 0x80417400u;
            ctx->pc = 0x8040E73Cu;
            return;
    }

label_80417400:
    ctx->pc = 0x80417400u;
    ctx->downcount -= 2;
    // 80417400: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417404:
    ctx->pc = 0x80417404u;
    // 80417404: bc    4, 2, 0x80417410
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80417410;
        }
    }

label_80417408:
    ctx->pc = 0x80417408u;
    ctx->downcount -= 2;
    // 80417408: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041740C:
    ctx->pc = 0x8041740Cu;
    // 8041740C: bl      0x803FABB0
    {
            ctx->lr = 0x80417410u;
            ctx->pc = 0x803FABB0u;
            return;
    }

label_80417410:
    ctx->pc = 0x80417410u;
    ctx->downcount -= 2;
    // 80417410: lwz     r3, -11456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417414:
    ctx->pc = 0x80417414u;
    // 80417414: bl      0x803F9934
    {
            ctx->lr = 0x80417418u;
            ctx->pc = 0x803F9934u;
            return;
    }

label_80417418:
    ctx->pc = 0x80417418u;
    ctx->downcount -= 5;
    // 80417418: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041741C:
    ctx->pc = 0x8041741Cu;
    // 8041741C: lwz     r3, 4804(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4804);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417420:
    ctx->pc = 0x80417420u;
    // 80417420: lbz     r0, 81(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(81);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80417424:
    ctx->pc = 0x80417424u;
    // 80417424: cmpwi   r0, 0
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

label_80417428:
    ctx->pc = 0x80417428u;
    // 80417428: bc    4, 2, 0x80417434
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80417434;
        }
    }

label_8041742C:
    ctx->pc = 0x8041742Cu;
    ctx->downcount -= 2;
    // 8041742C: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417430:
    ctx->pc = 0x80417430u;
    // 80417430: bl      0x8040EE98
    {
            ctx->lr = 0x80417434u;
            ctx->pc = 0x8040EE98u;
            return;
    }

label_80417434:
    ctx->pc = 0x80417434u;
    ctx->downcount -= 5;
    // 80417434: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417438:
    ctx->pc = 0x80417438u;
    // 80417438: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041743C:
    ctx->pc = 0x8041743Cu;
    // 8041743C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417440:
    ctx->pc = 0x80417440u;
    // 80417440: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417444:
    ctx->pc = 0x80417444u;
    ctx->downcount -= 7;
    // 80417444: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417448:
    ctx->pc = 0x80417448u;
    // 80417448: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041744C:
    ctx->pc = 0x8041744Cu;
    // 8041744C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417450:
    ctx->pc = 0x80417450u;
    // 80417450: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417454:
    ctx->pc = 0x80417454u;
    // 80417454: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417458:
    ctx->pc = 0x80417458u;
    // 80417458: lwz     r3, -11416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041745C:
    ctx->pc = 0x8041745Cu;
    // 8041745C: bl      0x80405498
    {
            ctx->lr = 0x80417460u;
            ctx->pc = 0x80405498u;
            return;
    }

label_80417460:
    ctx->pc = 0x80417460u;
    ctx->downcount -= 2;
    // 80417460: lwz     r3, -11408(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11408);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417464:
    ctx->pc = 0x80417464u;
    // 80417464: bl      0x80405908
    {
            ctx->lr = 0x80417468u;
            ctx->pc = 0x80405908u;
            return;
    }

label_80417468:
    ctx->pc = 0x80417468u;
    ctx->downcount -= 2;
    // 80417468: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041746C:
    ctx->pc = 0x8041746Cu;
    // 8041746C: bl      0x80403F44
    {
            ctx->lr = 0x80417470u;
            ctx->pc = 0x80403F44u;
            return;
    }

label_80417470:
    ctx->pc = 0x80417470u;
    ctx->downcount -= 2;
    // 80417470: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417474:
    ctx->pc = 0x80417474u;
    // 80417474: bl      0x80411204
    {
            ctx->lr = 0x80417478u;
            ctx->pc = 0x80411204u;
            return;
    }

label_80417478:
    ctx->pc = 0x80417478u;
    ctx->downcount -= 2;
    // 80417478: lwz     r3, -11392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041747C:
    ctx->pc = 0x8041747Cu;
    // 8041747C: bl      0x80409530
    {
            ctx->lr = 0x80417480u;
            ctx->pc = 0x80409530u;
            return;
    }

label_80417480:
    ctx->pc = 0x80417480u;
    ctx->downcount -= 2;
    // 80417480: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417484:
    ctx->pc = 0x80417484u;
    // 80417484: bl      0x803FBDD8
    {
            ctx->lr = 0x80417488u;
            ctx->pc = 0x803FBDD8u;
            return;
    }

label_80417488:
    ctx->pc = 0x80417488u;
    ctx->downcount -= 2;
    // 80417488: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041748C:
    ctx->pc = 0x8041748Cu;
    // 8041748C: bl      0x8040EA00
    {
            ctx->lr = 0x80417490u;
            ctx->pc = 0x8040EA00u;
            return;
    }

label_80417490:
    ctx->pc = 0x80417490u;
    ctx->downcount -= 2;
    // 80417490: lwz     r3, -11456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417494:
    ctx->pc = 0x80417494u;
    // 80417494: bl      0x803F99B4
    {
            ctx->lr = 0x80417498u;
            ctx->pc = 0x803F99B4u;
            return;
    }

label_80417498:
    ctx->pc = 0x80417498u;
    ctx->downcount -= 2;
    // 80417498: lwz     r3, -11400(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041749C:
    ctx->pc = 0x8041749Cu;
    // 8041749C: bl      0x80405BF0
    {
            ctx->lr = 0x804174A0u;
            ctx->pc = 0x80405BF0u;
            return;
    }

label_804174A0:
    ctx->pc = 0x804174A0u;
    ctx->downcount -= 6;
    // 804174A0: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804174A4:
    ctx->pc = 0x804174A4u;
    // 804174A4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804174A8:
    ctx->pc = 0x804174A8u;
    // 804174A8: lwz     r12, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804174AC:
    ctx->pc = 0x804174ACu;
    // 804174AC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_804174B0:
    ctx->pc = 0x804174B0u;
    // 804174B0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x804174B4u;
            ctx->pc = target;
            return;
        }
    }

label_804174B4:
    ctx->pc = 0x804174B4u;
    ctx->downcount -= 6;
    // 804174B4: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804174B8:
    ctx->pc = 0x804174B8u;
    // 804174B8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804174BC:
    ctx->pc = 0x804174BCu;
    // 804174BC: lwz     r12, 36(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(36);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804174C0:
    ctx->pc = 0x804174C0u;
    // 804174C0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_804174C4:
    ctx->pc = 0x804174C4u;
    // 804174C4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x804174C8u;
            ctx->pc = target;
            return;
        }
    }

label_804174C8:
    ctx->pc = 0x804174C8u;
    ctx->downcount -= 2;
    // 804174C8: lwz     r3, -11416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804174CC:
    ctx->pc = 0x804174CCu;
    // 804174CC: bl      0x80405494
    {
            ctx->lr = 0x804174D0u;
            ctx->pc = 0x80405494u;
            return;
    }

label_804174D0:
    ctx->pc = 0x804174D0u;
    ctx->downcount -= 6;
    // 804174D0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804174D4:
    ctx->pc = 0x804174D4u;
    // 804174D4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804174D8:
    ctx->pc = 0x804174D8u;
    // 804174D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804174DC:
    ctx->pc = 0x804174DCu;
    // 804174DC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804174E0:
    ctx->pc = 0x804174E0u;
    // 804174E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804174E4:
    ctx->pc = 0x804174E4u;
    ctx->downcount -= 2;
    // 804174E4: lwz     r3, -11416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804174E8:
    ctx->pc = 0x804174E8u;
    // 804174E8: b       0x804049FC
    {
            ctx->pc = 0x804049FCu;
            return;
    }

label_804174EC:
    ctx->pc = 0x804174ECu;
    ctx->downcount -= 6;
    // 804174EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804174F0:
    ctx->pc = 0x804174F0u;
    // 804174F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804174F4:
    ctx->pc = 0x804174F4u;
    // 804174F4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804174F8:
    ctx->pc = 0x804174F8u;
    // 804174F8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804174FC:
    ctx->pc = 0x804174FCu;
    // 804174FC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417500:
    ctx->pc = 0x80417500u;
    // 80417500: bl      0x8040594C
    {
            ctx->lr = 0x80417504u;
            ctx->pc = 0x8040594Cu;
            return;
    }

label_80417504:
    ctx->pc = 0x80417504u;
    ctx->downcount -= 1;
    // 80417504: bl      0x80406D88
    {
            ctx->lr = 0x80417508u;
            ctx->pc = 0x80406D88u;
            return;
    }

label_80417508:
    ctx->pc = 0x80417508u;
    ctx->downcount -= 1;
    // 80417508: bl      0x803F9FD4
    {
            ctx->lr = 0x8041750Cu;
            ctx->pc = 0x803F9FD4u;
            return;
    }

label_8041750C:
    ctx->pc = 0x8041750Cu;
    ctx->downcount -= 1;
    // 8041750C: bl      0x803EE044
    {
            ctx->lr = 0x80417510u;
            ctx->pc = 0x803EE044u;
            return;
    }

label_80417510:
    ctx->pc = 0x80417510u;
    ctx->downcount -= 1;
    // 80417510: bl      0x803EF5A4
    {
            ctx->lr = 0x80417514u;
            ctx->pc = 0x803EF5A4u;
            return;
    }

label_80417514:
    ctx->pc = 0x80417514u;
    ctx->downcount -= 1;
    // 80417514: bl      0x80400FFC
    {
            ctx->lr = 0x80417518u;
            ctx->pc = 0x80400FFCu;
            return;
    }

label_80417518:
    ctx->pc = 0x80417518u;
    ctx->downcount -= 1;
    // 80417518: bl      0x80404264
    {
            ctx->lr = 0x8041751Cu;
            ctx->pc = 0x80404264u;
            return;
    }

label_8041751C:
    ctx->pc = 0x8041751Cu;
    ctx->downcount -= 1;
    // 8041751C: bl      0x80411564
    {
            ctx->lr = 0x80417520u;
            ctx->pc = 0x80411564u;
            return;
    }

label_80417520:
    ctx->pc = 0x80417520u;
    ctx->downcount -= 1;
    // 80417520: bl      0x804099B8
    {
            ctx->lr = 0x80417524u;
            ctx->pc = 0x804099B8u;
            return;
    }

label_80417524:
    ctx->pc = 0x80417524u;
    ctx->downcount -= 1;
    // 80417524: bl      0x803FC1D0
    {
            ctx->lr = 0x80417528u;
            ctx->pc = 0x803FC1D0u;
            return;
    }

label_80417528:
    ctx->pc = 0x80417528u;
    ctx->downcount -= 1;
    // 80417528: bl      0x8040F190
    {
            ctx->lr = 0x8041752Cu;
            ctx->pc = 0x8040F190u;
            return;
    }

label_8041752C:
    ctx->pc = 0x8041752Cu;
    ctx->downcount -= 1;
    // 8041752C: bl      0x804055A4
    {
            ctx->lr = 0x80417530u;
            ctx->pc = 0x804055A4u;
            return;
    }

label_80417530:
    ctx->pc = 0x80417530u;
    ctx->downcount -= 6;
    // 80417530: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417534:
    ctx->pc = 0x80417534u;
    // 80417534: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417538:
    ctx->pc = 0x80417538u;
    // 80417538: lwz     r12, 68(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(68);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041753C:
    ctx->pc = 0x8041753Cu;
    // 8041753C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417540:
    ctx->pc = 0x80417540u;
    // 80417540: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417544u;
            ctx->pc = target;
            return;
        }
    }

label_80417544:
    ctx->pc = 0x80417544u;
    ctx->downcount -= 6;
    // 80417544: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417548:
    ctx->pc = 0x80417548u;
    // 80417548: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041754C:
    ctx->pc = 0x8041754Cu;
    // 8041754C: lwz     r12, 28(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(28);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417550:
    ctx->pc = 0x80417550u;
    // 80417550: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417554:
    ctx->pc = 0x80417554u;
    // 80417554: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417558u;
            ctx->pc = target;
            return;
        }
    }

label_80417558:
    ctx->pc = 0x80417558u;
    ctx->downcount -= 1;
    // 80417558: bl      0x80240E18
    {
            ctx->lr = 0x8041755Cu;
            ctx->pc = 0x80240E18u;
            return;
    }

label_8041755C:
    ctx->pc = 0x8041755Cu;
    ctx->downcount -= 6;
    // 8041755C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417560:
    ctx->pc = 0x80417560u;
    // 80417560: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417564:
    ctx->pc = 0x80417564u;
    // 80417564: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417568:
    ctx->pc = 0x80417568u;
    // 80417568: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041756C:
    ctx->pc = 0x8041756Cu;
    // 8041756C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417570:
    ctx->pc = 0x80417570u;
    ctx->downcount -= 20;
    // 80417570: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417574:
    ctx->pc = 0x80417574u;
    // 80417574: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417578:
    ctx->pc = 0x80417578u;
    // 80417578: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041757C:
    ctx->pc = 0x8041757Cu;
    // 8041757C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417580:
    ctx->pc = 0x80417580u;
    // 80417580: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80417584:
    ctx->pc = 0x80417584u;
    // 80417584: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417588:
    ctx->pc = 0x80417588u;
    // 80417588: lwz     r4, -11504(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11504);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041758C:
    ctx->pc = 0x8041758Cu;
    // 8041758C: stw     r0, 1540(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1540);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417590:
    ctx->pc = 0x80417590u;
    // 80417590: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417594:
    ctx->pc = 0x80417594u;
    // 80417594: bl      0x804035B0
    {
            ctx->lr = 0x80417598u;
            ctx->pc = 0x804035B0u;
            return;
    }

label_80417598:
    ctx->pc = 0x80417598u;
    ctx->downcount -= 2;
    // 80417598: lwz     r3, -11400(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041759C:
    ctx->pc = 0x8041759Cu;
    // 8041759C: bl      0x80406B7C
    {
            ctx->lr = 0x804175A0u;
            ctx->pc = 0x80406B7Cu;
            return;
    }

label_804175A0:
    ctx->pc = 0x804175A0u;
    ctx->downcount -= 3;
    // 804175A0: lbz     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804175A4:
    ctx->pc = 0x804175A4u;
    // 804175A4: cmpwi   r0, 0
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

label_804175A8:
    ctx->pc = 0x804175A8u;
    // 804175A8: bc    4, 2, 0x804175E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804175E4;
        }
    }

label_804175AC:
    ctx->pc = 0x804175ACu;
    ctx->downcount -= 2;
    // 804175AC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804175B0:
    ctx->pc = 0x804175B0u;
    // 804175B0: bl      0x804173EC
    {
            ctx->lr = 0x804175B4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804173ECu;
                return;
            }
            goto label_804173EC;
    }

label_804175B4:
    ctx->pc = 0x804175B4u;
    ctx->downcount -= 1;
    // 804175B4: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_804175B8:
    ctx->downcount -= 5;
    // 804175B8: addi    r0, r31, -3
    ctx->gpr[0] = ctx->gpr[31] + (u32)(s32)(-3);

label_804175BC:
    ctx->pc = 0x804175BCu;
    // 804175BC: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804175C0:
    // 804175C0: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_804175C4:
    // 804175C4: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_804175C8:
    // 804175C8: bl      0x80410CBC
    {
            ctx->lr = 0x804175CCu;
            ctx->pc = 0x80410CBCu;
            return;
    }

label_804175CC:
    ctx->downcount -= 3;
    // 804175CC: addi    r31, r31, 1
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(1);

label_804175D0:
    // 804175D0: cmpwi   r31, 4
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

label_804175D4:
    // 804175D4: bc    12, 0, 0x804175B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804175B8u;
                return;
            }
            goto label_804175B8;
        }
    }

label_804175D8:
    ctx->pc = 0x804175D8u;
    ctx->downcount -= 2;
    // 804175D8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804175DC:
    ctx->pc = 0x804175DCu;
    // 804175DC: bl      0x80417364
    {
            ctx->lr = 0x804175E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417364u;
                return;
            }
            goto label_80417364;
    }

label_804175E0:
    ctx->pc = 0x804175E0u;
    ctx->downcount -= 1;
    // 804175E0: b       0x804175EC
    {
            goto label_804175EC;
    }

label_804175E4:
    ctx->pc = 0x804175E4u;
    ctx->downcount -= 2;
    // 804175E4: lwz     r3, -11456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804175E8:
    ctx->pc = 0x804175E8u;
    // 804175E8: bl      0x803F9934
    {
            ctx->lr = 0x804175ECu;
            ctx->pc = 0x803F9934u;
            return;
    }

label_804175EC:
    ctx->pc = 0x804175ECu;
    ctx->downcount -= 2;
    // 804175EC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804175F0:
    ctx->pc = 0x804175F0u;
    // 804175F0: bl      0x80417328
    {
            ctx->lr = 0x804175F4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417328u;
                return;
            }
            goto label_80417328;
    }

label_804175F4:
    ctx->pc = 0x804175F4u;
    ctx->downcount -= 6;
    // 804175F4: lwz     r3, 8(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804175F8:
    ctx->pc = 0x804175F8u;
    // 804175F8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804175FC:
    ctx->pc = 0x804175FCu;
    // 804175FC: lwz     r12, 52(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(52);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417600:
    ctx->pc = 0x80417600u;
    // 80417600: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417604:
    ctx->pc = 0x80417604u;
    // 80417604: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417608u;
            ctx->pc = target;
            return;
        }
    }

label_80417608:
    ctx->pc = 0x80417608u;
    ctx->downcount -= 2;
    // 80417608: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041760C:
    ctx->pc = 0x8041760Cu;
    // 8041760C: bl      0x80403440
    {
            ctx->lr = 0x80417610u;
            ctx->pc = 0x80403440u;
            return;
    }

label_80417610:
    ctx->pc = 0x80417610u;
    ctx->downcount -= 16;
    // 80417610: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80417614:
    ctx->pc = 0x80417614u;
    // 80417614: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417618:
    ctx->pc = 0x80417618u;
    // 80417618: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041761C:
    ctx->pc = 0x8041761Cu;
    // 8041761C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417620:
    ctx->pc = 0x80417620u;
    // 80417620: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417624:
    ctx->pc = 0x80417624u;
    ctx->downcount -= 8;
    // 80417624: lwz     r4, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417628:
    ctx->pc = 0x80417628u;
    // 80417628: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041762C:
    ctx->pc = 0x8041762Cu;
    // 8041762C: lwz     r4, 1636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417630:
    ctx->pc = 0x80417630u;
    // 80417630: lbz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80417634:
    ctx->pc = 0x80417634u;
    // 80417634: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80417638:
    ctx->pc = 0x80417638u;
    // 80417638: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8041763C:
    ctx->pc = 0x8041763Cu;
    // 8041763C: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417640:
    ctx->pc = 0x80417640u;
    // 80417640: b       0x80279D7C
    {
            ctx->pc = 0x80279D7Cu;
            return;
    }

label_80417644:
    ctx->pc = 0x80417644u;
    ctx->downcount -= 17;
    // 80417644: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417648:
    ctx->pc = 0x80417648u;
    // 80417648: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041764C:
    ctx->pc = 0x8041764Cu;
    // 8041764C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417650:
    ctx->pc = 0x80417650u;
    // 80417650: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80417654:
    ctx->pc = 0x80417654u;
    // 80417654: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417658:
    ctx->pc = 0x80417658u;
    // 80417658: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041765C:
    ctx->pc = 0x8041765Cu;
    // 8041765C: bl      0x803FA8D4
    {
            ctx->lr = 0x80417660u;
            ctx->pc = 0x803FA8D4u;
            return;
    }

label_80417660:
    ctx->pc = 0x80417660u;
    ctx->downcount -= 4;
    // 80417660: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417664:
    ctx->pc = 0x80417664u;
    // 80417664: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80417668:
    ctx->pc = 0x80417668u;
    // 80417668: cmpwi   r3, 4
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

label_8041766C:
    ctx->pc = 0x8041766Cu;
    // 8041766C: bc    12, 2, 0x8041767C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041767C;
        }
    }

label_80417670:
    ctx->pc = 0x80417670u;
    ctx->downcount -= 2;
    // 80417670: cmpwi   r3, 7
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(7);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417674:
    ctx->pc = 0x80417674u;
    // 80417674: bc    12, 2, 0x8041767C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041767C;
        }
    }

label_80417678:
    ctx->pc = 0x80417678u;
    ctx->downcount -= 1;
    // 80417678: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8041767C:
    ctx->pc = 0x8041767Cu;
    ctx->downcount -= 2;
    // 8041767C: cmpwi   r0, 0
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

label_80417680:
    ctx->pc = 0x80417680u;
    // 80417680: bc    4, 2, 0x804176AC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804176AC;
        }
    }

label_80417684:
    ctx->pc = 0x80417684u;
    ctx->downcount -= 1;
    // 80417684: bl      0x803FA8D4
    {
            ctx->lr = 0x80417688u;
            ctx->pc = 0x803FA8D4u;
            return;
    }

label_80417688:
    ctx->pc = 0x80417688u;
    ctx->downcount -= 4;
    // 80417688: lwz     r3, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041768C:
    ctx->pc = 0x8041768Cu;
    // 8041768C: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_80417690:
    ctx->pc = 0x80417690u;
    // 80417690: cmpwi   r3, 3
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

label_80417694:
    ctx->pc = 0x80417694u;
    // 80417694: bc    12, 2, 0x804176A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804176A4;
        }
    }

label_80417698:
    ctx->pc = 0x80417698u;
    ctx->downcount -= 2;
    // 80417698: cmpwi   r3, 6
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(6);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041769C:
    ctx->pc = 0x8041769Cu;
    // 8041769C: bc    12, 2, 0x804176A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804176A4;
        }
    }

label_804176A0:
    ctx->pc = 0x804176A0u;
    ctx->downcount -= 1;
    // 804176A0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_804176A4:
    ctx->pc = 0x804176A4u;
    ctx->downcount -= 2;
    // 804176A4: cmpwi   r0, 0
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

label_804176A8:
    ctx->pc = 0x804176A8u;
    // 804176A8: bc    12, 2, 0x804176B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804176B4;
        }
    }

label_804176AC:
    ctx->pc = 0x804176ACu;
    ctx->downcount -= 2;
    // 804176AC: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176B0:
    ctx->pc = 0x804176B0u;
    // 804176B0: bl      0x80403CA0
    {
            ctx->lr = 0x804176B4u;
            ctx->pc = 0x80403CA0u;
            return;
    }

label_804176B4:
    ctx->pc = 0x804176B4u;
    ctx->downcount -= 3;
    // 804176B4: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176B8:
    ctx->pc = 0x804176B8u;
    // 804176B8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804176BC:
    ctx->pc = 0x804176BCu;
    // 804176BC: bl      0x803FB548
    {
            ctx->lr = 0x804176C0u;
            ctx->pc = 0x803FB548u;
            return;
    }

label_804176C0:
    ctx->pc = 0x804176C0u;
    ctx->downcount -= 2;
    // 804176C0: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176C4:
    ctx->pc = 0x804176C4u;
    // 804176C4: bl      0x804110E4
    {
            ctx->lr = 0x804176C8u;
            ctx->pc = 0x804110E4u;
            return;
    }

label_804176C8:
    ctx->pc = 0x804176C8u;
    ctx->downcount -= 3;
    // 804176C8: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176CC:
    ctx->pc = 0x804176CCu;
    // 804176CC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804176D0:
    ctx->pc = 0x804176D0u;
    // 804176D0: bl      0x8040EA0C
    {
            ctx->lr = 0x804176D4u;
            ctx->pc = 0x8040EA0Cu;
            return;
    }

label_804176D4:
    ctx->pc = 0x804176D4u;
    ctx->downcount -= 3;
    // 804176D4: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176D8:
    ctx->pc = 0x804176D8u;
    // 804176D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804176DC:
    ctx->pc = 0x804176DCu;
    // 804176DC: bl      0x80403B90
    {
            ctx->lr = 0x804176E0u;
            ctx->pc = 0x80403B90u;
            return;
    }

label_804176E0:
    ctx->pc = 0x804176E0u;
    ctx->downcount -= 3;
    // 804176E0: lwz     r3, -11392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176E4:
    ctx->pc = 0x804176E4u;
    // 804176E4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804176E8:
    ctx->pc = 0x804176E8u;
    // 804176E8: bl      0x804090AC
    {
            ctx->lr = 0x804176ECu;
            ctx->pc = 0x804090ACu;
            return;
    }

label_804176EC:
    ctx->pc = 0x804176ECu;
    ctx->downcount -= 2;
    // 804176EC: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804176F0:
    ctx->pc = 0x804176F0u;
    // 804176F0: bl      0x8027A40C
    {
            ctx->lr = 0x804176F4u;
            ctx->pc = 0x8027A40Cu;
            return;
    }

label_804176F4:
    ctx->pc = 0x804176F4u;
    ctx->downcount -= 2;
    // 804176F4: cmpwi   r3, 1
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

label_804176F8:
    ctx->pc = 0x804176F8u;
    // 804176F8: bc    4, 2, 0x8041771C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041771C;
        }
    }

label_804176FC:
    ctx->pc = 0x804176FCu;
    ctx->downcount -= 8;
    // 804176FC: lwz     r4, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417700:
    ctx->pc = 0x80417700u;
    // 80417700: lwz     r3, 4(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417704:
    ctx->pc = 0x80417704u;
    // 80417704: lwz     r4, 1636(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(1636);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417708:
    ctx->pc = 0x80417708u;
    // 80417708: lbz     r0, 80(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041770C:
    ctx->pc = 0x8041770Cu;
    // 8041770C: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80417710:
    ctx->pc = 0x80417710u;
    // 80417710: add   r4, r4, r0
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80417714:
    ctx->pc = 0x80417714u;
    // 80417714: lwz     r4, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417718:
    ctx->pc = 0x80417718u;
    // 80417718: bl      0x80279D7C
    {
            ctx->lr = 0x8041771Cu;
            ctx->pc = 0x80279D7Cu;
            return;
    }

label_8041771C:
    ctx->pc = 0x8041771Cu;
    ctx->downcount -= 16;
    // 8041771C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80417720:
    ctx->pc = 0x80417720u;
    // 80417720: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417724:
    ctx->pc = 0x80417724u;
    // 80417724: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417728:
    ctx->pc = 0x80417728u;
    // 80417728: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041772C:
    ctx->pc = 0x8041772Cu;
    // 8041772C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417730:
    ctx->pc = 0x80417730u;
    ctx->downcount -= 2;
    // 80417730: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417734:
    ctx->pc = 0x80417734u;
    // 80417734: b       0x80403C4C
    {
            ctx->pc = 0x80403C4Cu;
            return;
    }

label_80417738:
    ctx->pc = 0x80417738u;
    ctx->downcount -= 13;
    // 80417738: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041773C:
    ctx->pc = 0x8041773Cu;
    // 8041773C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417740:
    ctx->pc = 0x80417740u;
    // 80417740: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417744:
    ctx->pc = 0x80417744u;
    // 80417744: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417748:
    ctx->pc = 0x80417748u;
    // 80417748: stb     r0, 24(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(24);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041774C:
    ctx->pc = 0x8041774Cu;
    // 8041774C: stb     r0, 25(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(25);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80417750:
    ctx->pc = 0x80417750u;
    // 80417750: stb     r0, 26(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(26);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80417754:
    ctx->pc = 0x80417754u;
    // 80417754: lwz     r3, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417758:
    ctx->pc = 0x80417758u;
    // 80417758: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041775C:
    ctx->pc = 0x8041775Cu;
    // 8041775C: lwz     r12, 44(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(44);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417760:
    ctx->pc = 0x80417760u;
    // 80417760: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417764:
    ctx->pc = 0x80417764u;
    // 80417764: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417768u;
            ctx->pc = target;
            return;
        }
    }

label_80417768:
    ctx->pc = 0x80417768u;
    ctx->downcount -= 2;
    // 80417768: lwz     r3, -11400(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11400);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041776C:
    ctx->pc = 0x8041776Cu;
    // 8041776C: bl      0x80406B80
    {
            ctx->lr = 0x80417770u;
            ctx->pc = 0x80406B80u;
            return;
    }

label_80417770:
    ctx->pc = 0x80417770u;
    ctx->downcount -= 2;
    // 80417770: lwz     r3, -11456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417774:
    ctx->pc = 0x80417774u;
    // 80417774: bl      0x803F99B8
    {
            ctx->lr = 0x80417778u;
            ctx->pc = 0x803F99B8u;
            return;
    }

label_80417778:
    ctx->pc = 0x80417778u;
    ctx->downcount -= 2;
    // 80417778: lwz     r3, -11424(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11424);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041777C:
    ctx->pc = 0x8041777Cu;
    // 8041777C: bl      0x80403EAC
    {
            ctx->lr = 0x80417780u;
            ctx->pc = 0x80403EACu;
            return;
    }

label_80417780:
    ctx->pc = 0x80417780u;
    ctx->downcount -= 2;
    // 80417780: lwz     r3, -11328(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11328);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417784:
    ctx->pc = 0x80417784u;
    // 80417784: bl      0x804111A0
    {
            ctx->lr = 0x80417788u;
            ctx->pc = 0x804111A0u;
            return;
    }

label_80417788:
    ctx->pc = 0x80417788u;
    ctx->downcount -= 2;
    // 80417788: lwz     r3, -11392(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11392);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041778C:
    ctx->pc = 0x8041778Cu;
    // 8041778C: bl      0x80409524
    {
            ctx->lr = 0x80417790u;
            ctx->pc = 0x80409524u;
            return;
    }

label_80417790:
    ctx->pc = 0x80417790u;
    ctx->downcount -= 2;
    // 80417790: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417794:
    ctx->pc = 0x80417794u;
    // 80417794: bl      0x803FBD50
    {
            ctx->lr = 0x80417798u;
            ctx->pc = 0x803FBD50u;
            return;
    }

label_80417798:
    ctx->pc = 0x80417798u;
    ctx->downcount -= 2;
    // 80417798: lwz     r3, -11368(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11368);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041779C:
    ctx->pc = 0x8041779Cu;
    // 8041779C: bl      0x8040EA4C
    {
            ctx->lr = 0x804177A0u;
            ctx->pc = 0x8040EA4Cu;
            return;
    }

label_804177A0:
    ctx->pc = 0x804177A0u;
    ctx->downcount -= 5;
    // 804177A0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804177A4:
    ctx->pc = 0x804177A4u;
    // 804177A4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804177A8:
    ctx->pc = 0x804177A8u;
    // 804177A8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804177AC:
    ctx->pc = 0x804177ACu;
    // 804177AC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804177B0:
    ctx->pc = 0x804177B0u;
    ctx->downcount -= 11;
    // 804177B0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804177B4:
    ctx->pc = 0x804177B4u;
    // 804177B4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804177B8:
    ctx->pc = 0x804177B8u;
    // 804177B8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804177BC:
    ctx->pc = 0x804177BCu;
    // 804177BC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804177C0:
    ctx->pc = 0x804177C0u;
    // 804177C0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804177C4:
    ctx->pc = 0x804177C4u;
    // 804177C4: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804177C8:
    ctx->pc = 0x804177C8u;
    // 804177C8: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804177CC:
    ctx->pc = 0x804177CCu;
    // 804177CC: lwz     r12, 16(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(16);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_804177D0:
    ctx->pc = 0x804177D0u;
    // 804177D0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_804177D4:
    ctx->pc = 0x804177D4u;
    // 804177D4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x804177D8u;
            ctx->pc = target;
            return;
        }
    }

label_804177D8:
    ctx->pc = 0x804177D8u;
    ctx->downcount -= 2;
    // 804177D8: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804177DC:
    ctx->pc = 0x804177DCu;
    // 804177DC: bl      0x80417444
    {
            ctx->lr = 0x804177E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417444u;
                return;
            }
            goto label_80417444;
    }

label_804177E0:
    ctx->pc = 0x804177E0u;
    ctx->downcount -= 6;
    // 804177E0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804177E4:
    ctx->pc = 0x804177E4u;
    // 804177E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804177E8:
    ctx->pc = 0x804177E8u;
    // 804177E8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804177EC:
    ctx->pc = 0x804177ECu;
    // 804177EC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804177F0:
    ctx->pc = 0x804177F0u;
    // 804177F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804177F4:
    ctx->pc = 0x804177F4u;
    ctx->downcount -= 5;
    // 804177F4: stwu     r1, -288(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-288);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804177F8:
    ctx->pc = 0x804177F8u;
    // 804177F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804177FC:
    ctx->pc = 0x804177FCu;
    // 804177FC: stw     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417800:
    ctx->pc = 0x80417800u;
    // 80417800: stw     r31, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417804:
    ctx->pc = 0x80417804u;
    // 80417804: bl      0x801FFD40
    {
            ctx->lr = 0x80417808u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417808:
    ctx->pc = 0x80417808u;
    ctx->downcount -= 1;
    // 80417808: bl      0x801FFD38
    {
            ctx->lr = 0x8041780Cu;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_8041780C:
    ctx->pc = 0x8041780Cu;
    ctx->downcount -= 1;
    // 8041780C: bl      0x801C1BB4
    {
            ctx->lr = 0x80417810u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417810:
    ctx->pc = 0x80417810u;
    ctx->downcount -= 3;
    // 80417810: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417814:
    ctx->pc = 0x80417814u;
    // 80417814: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80417818:
    ctx->pc = 0x80417818u;
    // 80417818: b       0x80417840
    {
            goto label_80417840;
    }

label_8041781C:
    ctx->downcount -= 1;
    // 8041781C: bl      0x80406DCC
    {
            ctx->lr = 0x80417820u;
            ctx->pc = 0x80406DCCu;
            return;
    }

label_80417820:
    ctx->downcount -= 1;
    // 80417820: bl      0x803EF5E8
    {
            ctx->lr = 0x80417824u;
            ctx->pc = 0x803EF5E8u;
            return;
    }

label_80417824:
    ctx->downcount -= 2;
    // 80417824: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80417828:
    // 80417828: bl      0x804178E4
    {
            ctx->lr = 0x8041782Cu;
            goto label_804178E4;
    }

label_8041782C:
    ctx->downcount -= 2;
    // 8041782C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417830:
    // 80417830: bc    12, 2, 0x80417840
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417840;
        }
    }

label_80417834:
    ctx->pc = 0x80417834u;
    ctx->downcount -= 2;
    // 80417834: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417838:
    // 80417838: bl      0x801C1BB4
    {
            ctx->lr = 0x8041783Cu;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_8041783C:
    ctx->pc = 0x8041783Cu;
    ctx->downcount -= 1;
    // 8041783C: stw     r31, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417840:
    ctx->pc = 0x80417840u;
    ctx->downcount -= 3;
    // 80417840: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417844:
    // 80417844: cmpwi   r0, 0
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

label_80417848:
    // 80417848: bc    4, 2, 0x8041781C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041781Cu;
                return;
            }
            goto label_8041781C;
        }
    }

label_8041784C:
    ctx->pc = 0x8041784Cu;
    ctx->downcount -= 2;
    // 8041784C: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80417850:
    ctx->pc = 0x80417850u;
    // 80417850: bl      0x804178E4
    {
            ctx->lr = 0x80417854u;
            goto label_804178E4;
    }

label_80417854:
    ctx->pc = 0x80417854u;
    ctx->downcount -= 2;
    // 80417854: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417858:
    ctx->pc = 0x80417858u;
    // 80417858: bc    12, 2, 0x8041786C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041786C;
        }
    }

label_8041785C:
    ctx->pc = 0x8041785Cu;
    ctx->downcount -= 2;
    // 8041785C: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417860:
    ctx->pc = 0x80417860u;
    // 80417860: bl      0x801C1BB4
    {
            ctx->lr = 0x80417864u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417864:
    ctx->pc = 0x80417864u;
    ctx->downcount -= 2;
    // 80417864: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417868:
    ctx->pc = 0x80417868u;
    // 80417868: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041786C:
    ctx->pc = 0x8041786Cu;
    ctx->downcount -= 1;
    // 8041786C: bl      0x80406B60
    {
            ctx->lr = 0x80417870u;
            ctx->pc = 0x80406B60u;
            return;
    }

label_80417870:
    ctx->pc = 0x80417870u;
    ctx->downcount -= 7;
    // 80417870: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_80417874:
    ctx->pc = 0x80417874u;
    // 80417874: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417878:
    ctx->pc = 0x80417878u;
    // 80417878: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8041787C:
    ctx->pc = 0x8041787Cu;
    // 8041787C: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_80417880:
    ctx->pc = 0x80417880u;
    // 80417880: addi    r5, r5, -15544
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15544);

label_80417884:
    ctx->pc = 0x80417884u;
    // 80417884: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80417888:
    ctx->pc = 0x80417888u;
    // 80417888: bl      0x8000D074
    {
            ctx->lr = 0x8041788Cu;
            ctx->pc = 0x8000D074u;
            return;
    }

label_8041788C:
    ctx->pc = 0x8041788Cu;
    ctx->downcount -= 2;
    // 8041788C: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80417890:
    ctx->pc = 0x80417890u;
    // 80417890: bl      0x803EF528
    {
            ctx->lr = 0x80417894u;
            ctx->pc = 0x803EF528u;
            return;
    }

label_80417894:
    ctx->pc = 0x80417894u;
    ctx->downcount -= 3;
    // 80417894: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_80417898:
    ctx->pc = 0x80417898u;
    // 80417898: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041789C:
    ctx->pc = 0x8041789Cu;
    // 8041789C: bl      0x80231780
    {
            ctx->lr = 0x804178A0u;
            ctx->pc = 0x80231780u;
            return;
    }

label_804178A0:
    ctx->pc = 0x804178A0u;
    ctx->downcount -= 3;
    // 804178A0: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_804178A4:
    ctx->pc = 0x804178A4u;
    // 804178A4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804178A8:
    ctx->pc = 0x804178A8u;
    // 804178A8: bl      0x80231768
    {
            ctx->lr = 0x804178ACu;
            ctx->pc = 0x80231768u;
            return;
    }

label_804178AC:
    ctx->pc = 0x804178ACu;
    ctx->downcount -= 3;
    // 804178AC: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_804178B0:
    ctx->pc = 0x804178B0u;
    // 804178B0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804178B4:
    ctx->pc = 0x804178B4u;
    // 804178B4: bl      0x80231750
    {
            ctx->lr = 0x804178B8u;
            ctx->pc = 0x80231750u;
            return;
    }

label_804178B8:
    ctx->pc = 0x804178B8u;
    ctx->downcount -= 3;
    // 804178B8: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_804178BC:
    ctx->pc = 0x804178BCu;
    // 804178BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804178C0:
    ctx->pc = 0x804178C0u;
    // 804178C0: bl      0x80231738
    {
            ctx->lr = 0x804178C4u;
            ctx->pc = 0x80231738u;
            return;
    }

label_804178C4:
    ctx->pc = 0x804178C4u;
    ctx->downcount -= 3;
    // 804178C4: li      r3, -1
    ctx->gpr[3] = (u32)(s32)(-1);

label_804178C8:
    ctx->pc = 0x804178C8u;
    // 804178C8: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804178CC:
    ctx->pc = 0x804178CCu;
    // 804178CC: bl      0x80231720
    {
            ctx->lr = 0x804178D0u;
            ctx->pc = 0x80231720u;
            return;
    }

label_804178D0:
    ctx->pc = 0x804178D0u;
    ctx->downcount -= 6;
    // 804178D0: lwz     r0, 292(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(292);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804178D4:
    ctx->pc = 0x804178D4u;
    // 804178D4: lwz     r31, 284(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(284);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804178D8:
    ctx->pc = 0x804178D8u;
    // 804178D8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804178DC:
    ctx->pc = 0x804178DCu;
    // 804178DC: addi    r1, r1, 288
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(288);

label_804178E0:
    ctx->pc = 0x804178E0u;
    // 804178E0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804178E4:
    ctx->pc = 0x804178E4u;
    ctx->downcount -= 4;
    // 804178E4: lwz     r3, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804178E8:
    ctx->pc = 0x804178E8u;
    // 804178E8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_804178EC:
    ctx->pc = 0x804178ECu;
    // 804178EC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_804178F0:
    ctx->pc = 0x804178F0u;
    // 804178F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804178F4:
    ctx->pc = 0x804178F4u;
    ctx->downcount -= 7;
    // 804178F4: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804178F8:
    ctx->pc = 0x804178F8u;
    // 804178F8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804178FC:
    ctx->pc = 0x804178FCu;
    // 804178FC: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417900:
    ctx->pc = 0x80417900u;
    // 80417900: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80417904:
    ctx->pc = 0x80417904u;
    // 80417904: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80417904u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80417908:
    ctx->pc = 0x80417908u;
    // 80417908: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80417908u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80417908u);
        if (ctx->exception) return;
    }

label_8041790C:
    ctx->pc = 0x8041790Cu;
    // 8041790C: bl      0x80007860
    {
            ctx->lr = 0x80417910u;
            ctx->pc = 0x80007860u;
            return;
    }

label_80417910:
    ctx->pc = 0x80417910u;
    ctx->downcount -= 3;
    // 80417910: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417914:
    ctx->pc = 0x80417914u;
    // 80417914: li      r3, 12
    ctx->gpr[3] = (u32)(s32)(12);

label_80417918:
    ctx->pc = 0x80417918u;
    // 80417918: bl      0x801C1C48
    {
            ctx->lr = 0x8041791Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041791C:
    ctx->pc = 0x8041791Cu;
    ctx->downcount -= 2;
    // 8041791C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417920:
    ctx->pc = 0x80417920u;
    // 80417920: bc    12, 2, 0x80417928
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417928;
        }
    }

label_80417924:
    ctx->pc = 0x80417924u;
    ctx->downcount -= 1;
    // 80417924: bl      0x802B355C
    {
            ctx->lr = 0x80417928u;
            ctx->pc = 0x802B355Cu;
            return;
    }

label_80417928:
    ctx->pc = 0x80417928u;
    ctx->downcount -= 7;
    // 80417928: stw     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041792C:
    ctx->pc = 0x8041792Cu;
    // 8041792C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80417930:
    ctx->pc = 0x80417930u;
    // 80417930: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417934:
    ctx->pc = 0x80417934u;
    // 80417934: lwz     r12, 12(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(12);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417938:
    ctx->pc = 0x80417938u;
    // 80417938: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041793C:
    ctx->pc = 0x8041793Cu;
    // 8041793C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417940u;
            ctx->pc = target;
            return;
        }
    }

label_80417940:
    ctx->pc = 0x80417940u;
    ctx->downcount -= 6;
    // 80417940: lwz     r3, 28(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417944:
    ctx->pc = 0x80417944u;
    // 80417944: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417948:
    ctx->pc = 0x80417948u;
    // 80417948: lwz     r12, 24(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(24);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041794C:
    ctx->pc = 0x8041794Cu;
    // 8041794C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417950:
    ctx->pc = 0x80417950u;
    // 80417950: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417954u;
            ctx->pc = target;
            return;
        }
    }

label_80417954:
    ctx->pc = 0x80417954u;
    ctx->downcount -= 1;
    // 80417954: bl      0x801FFD40
    {
            ctx->lr = 0x80417958u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417958:
    ctx->pc = 0x80417958u;
    ctx->downcount -= 1;
    // 80417958: bl      0x801FFD38
    {
            ctx->lr = 0x8041795Cu;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_8041795C:
    ctx->pc = 0x8041795Cu;
    ctx->downcount -= 1;
    // 8041795C: bl      0x801C1BB4
    {
            ctx->lr = 0x80417960u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417960:
    ctx->pc = 0x80417960u;
    ctx->downcount -= 3;
    // 80417960: stw     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417964:
    ctx->pc = 0x80417964u;
    // 80417964: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80417968:
    ctx->pc = 0x80417968u;
    // 80417968: b       0x8041798C
    {
            goto label_8041798C;
    }

label_8041796C:
    ctx->downcount -= 1;
    // 8041796C: bl      0x80405990
    {
            ctx->lr = 0x80417970u;
            ctx->pc = 0x80405990u;
            return;
    }

label_80417970:
    ctx->downcount -= 2;
    // 80417970: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_80417974:
    // 80417974: bl      0x804178E4
    {
            ctx->lr = 0x80417978u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417978:
    ctx->downcount -= 2;
    // 80417978: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041797C:
    // 8041797C: bc    12, 2, 0x8041798C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041798C;
        }
    }

label_80417980:
    ctx->pc = 0x80417980u;
    ctx->downcount -= 2;
    // 80417980: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417984:
    // 80417984: bl      0x801C1BB4
    {
            ctx->lr = 0x80417988u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417988:
    ctx->pc = 0x80417988u;
    ctx->downcount -= 1;
    // 80417988: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_8041798C:
    ctx->pc = 0x8041798Cu;
    ctx->downcount -= 3;
    // 8041798C: lwz     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417990:
    // 80417990: cmpwi   r0, 0
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

label_80417994:
    // 80417994: bc    4, 2, 0x8041796C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041796Cu;
                return;
            }
            goto label_8041796C;
        }
    }

label_80417998:
    ctx->pc = 0x80417998u;
    ctx->downcount -= 2;
    // 80417998: addi    r3, r1, 28
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(28);

label_8041799C:
    ctx->pc = 0x8041799Cu;
    // 8041799C: bl      0x804178E4
    {
            ctx->lr = 0x804179A0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_804179A0:
    ctx->pc = 0x804179A0u;
    ctx->downcount -= 2;
    // 804179A0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804179A4:
    ctx->pc = 0x804179A4u;
    // 804179A4: bc    12, 2, 0x804179B8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804179B8;
        }
    }

label_804179A8:
    ctx->pc = 0x804179A8u;
    ctx->downcount -= 2;
    // 804179A8: lwz     r3, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804179AC:
    ctx->pc = 0x804179ACu;
    // 804179AC: bl      0x801C1BB4
    {
            ctx->lr = 0x804179B0u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_804179B0:
    ctx->pc = 0x804179B0u;
    ctx->downcount -= 2;
    // 804179B0: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_804179B4:
    ctx->pc = 0x804179B4u;
    // 804179B4: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804179B8:
    ctx->pc = 0x804179B8u;
    ctx->downcount -= 1;
    // 804179B8: bl      0x801FFD40
    {
            ctx->lr = 0x804179BCu;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_804179BC:
    ctx->pc = 0x804179BCu;
    ctx->downcount -= 1;
    // 804179BC: bl      0x801FFD38
    {
            ctx->lr = 0x804179C0u;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_804179C0:
    ctx->pc = 0x804179C0u;
    ctx->downcount -= 1;
    // 804179C0: bl      0x801C1BB4
    {
            ctx->lr = 0x804179C4u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_804179C4:
    ctx->pc = 0x804179C4u;
    ctx->downcount -= 3;
    // 804179C4: stw     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804179C8:
    ctx->pc = 0x804179C8u;
    // 804179C8: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_804179CC:
    ctx->pc = 0x804179CCu;
    // 804179CC: b       0x804179F4
    {
            goto label_804179F4;
    }

label_804179D0:
    ctx->downcount -= 1;
    // 804179D0: bl      0x803FA018
    {
            ctx->lr = 0x804179D4u;
            ctx->pc = 0x803FA018u;
            return;
    }

label_804179D4:
    ctx->downcount -= 1;
    // 804179D4: bl      0x803EE088
    {
            ctx->lr = 0x804179D8u;
            ctx->pc = 0x803EE088u;
            return;
    }

label_804179D8:
    ctx->downcount -= 2;
    // 804179D8: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_804179DC:
    // 804179DC: bl      0x804178E4
    {
            ctx->lr = 0x804179E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_804179E0:
    ctx->downcount -= 2;
    // 804179E0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804179E4:
    // 804179E4: bc    12, 2, 0x804179F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804179F4;
        }
    }

label_804179E8:
    ctx->pc = 0x804179E8u;
    ctx->downcount -= 2;
    // 804179E8: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804179EC:
    // 804179EC: bl      0x801C1BB4
    {
            ctx->lr = 0x804179F0u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_804179F0:
    ctx->pc = 0x804179F0u;
    ctx->downcount -= 1;
    // 804179F0: stw     r29, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_804179F4:
    ctx->pc = 0x804179F4u;
    ctx->downcount -= 3;
    // 804179F4: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804179F8:
    // 804179F8: cmpwi   r0, 0
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

label_804179FC:
    // 804179FC: bc    4, 2, 0x804179D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804179D0u;
                return;
            }
            goto label_804179D0;
        }
    }

label_80417A00:
    ctx->pc = 0x80417A00u;
    ctx->downcount -= 2;
    // 80417A00: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80417A04:
    ctx->pc = 0x80417A04u;
    // 80417A04: bl      0x804178E4
    {
            ctx->lr = 0x80417A08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417A08:
    ctx->pc = 0x80417A08u;
    ctx->downcount -= 2;
    // 80417A08: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417A0C:
    ctx->pc = 0x80417A0Cu;
    // 80417A0C: bc    12, 2, 0x80417A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417A20;
        }
    }

label_80417A10:
    ctx->pc = 0x80417A10u;
    ctx->downcount -= 2;
    // 80417A10: lwz     r3, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417A14:
    ctx->pc = 0x80417A14u;
    // 80417A14: bl      0x801C1BB4
    {
            ctx->lr = 0x80417A18u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417A18:
    ctx->pc = 0x80417A18u;
    ctx->downcount -= 2;
    // 80417A18: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417A1C:
    ctx->pc = 0x80417A1Cu;
    // 80417A1C: stw     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417A20:
    ctx->pc = 0x80417A20u;
    ctx->downcount -= 1;
    // 80417A20: bl      0x801FFD40
    {
            ctx->lr = 0x80417A24u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417A24:
    ctx->pc = 0x80417A24u;
    ctx->downcount -= 1;
    // 80417A24: bl      0x801FFD38
    {
            ctx->lr = 0x80417A28u;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_80417A28:
    ctx->pc = 0x80417A28u;
    ctx->downcount -= 1;
    // 80417A28: bl      0x801C1BB4
    {
            ctx->lr = 0x80417A2Cu;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417A2C:
    ctx->pc = 0x80417A2Cu;
    ctx->downcount -= 5;
    // 80417A2C: stw     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417A30:
    ctx->pc = 0x80417A30u;
    // 80417A30: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80417A34:
    ctx->pc = 0x80417A34u;
    // 80417A34: lfs     f31, 152(r2)
    if (!ppc_fp_available_inline(ctx, 0x80417A34u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(152);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80417A38:
    ctx->pc = 0x80417A38u;
    // 80417A38: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_80417A3C:
    ctx->pc = 0x80417A3Cu;
    // 80417A3C: b       0x80417AC0
    {
            goto label_80417AC0;
    }

label_80417A40:
    ctx->downcount -= 2;
    // 80417A40: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_80417A44:
    // 80417A44: bl      0x801C1C48
    {
            ctx->lr = 0x80417A48u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80417A48:
    ctx->downcount -= 2;
    // 80417A48: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417A4C:
    // 80417A4C: bc    12, 2, 0x80417A88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417A88;
        }
    }

label_80417A50:
    ctx->pc = 0x80417A50u;
    ctx->downcount -= 14;
    // 80417A50: stfs     f31, 88(r3)
    if (!ppc_fp_available_inline(ctx, 0x80417A50u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(88);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80417A54:
    ctx->pc = 0x80417A54u;
    // 80417A54: stfs     f31, 92(r3)
    if (!ppc_fp_available_inline(ctx, 0x80417A54u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(92);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80417A58:
    ctx->pc = 0x80417A58u;
    // 80417A58: stb     r30, 108(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(108);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A5C:
    ctx->pc = 0x80417A5Cu;
    // 80417A5C: stw     r29, 112(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(112);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80417A60:
    ctx->pc = 0x80417A60u;
    // 80417A60: stb     r30, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A64:
    ctx->pc = 0x80417A64u;
    // 80417A64: stb     r30, 245(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(245);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A68:
    ctx->pc = 0x80417A68u;
    // 80417A68: stb     r30, 252(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(252);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A6C:
    ctx->pc = 0x80417A6Cu;
    // 80417A6C: stw     r29, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80417A70:
    ctx->pc = 0x80417A70u;
    // 80417A70: stb     r29, 260(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(260);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_80417A74:
    ctx->pc = 0x80417A74u;
    // 80417A74: stb     r30, 261(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(261);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A78:
    ctx->pc = 0x80417A78u;
    // 80417A78: stb     r30, 268(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(268);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A7C:
    ctx->pc = 0x80417A7Cu;
    // 80417A7C: stb     r30, 269(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(269);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A80:
    ctx->pc = 0x80417A80u;
    // 80417A80: stb     r30, 270(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(270);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A84:
    ctx->pc = 0x80417A84u;
    // 80417A84: stb     r30, 288(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        mem_write8(ctx, ea, (u8)ctx->gpr[30]);
    }

label_80417A88:
    ctx->pc = 0x80417A88u;
    ctx->downcount -= 2;
    // 80417A88: stw     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417A8C:
    // 80417A8C: bl      0x80401040
    {
            ctx->lr = 0x80417A90u;
            ctx->pc = 0x80401040u;
            return;
    }

label_80417A90:
    ctx->downcount -= 1;
    // 80417A90: bl      0x804042A8
    {
            ctx->lr = 0x80417A94u;
            ctx->pc = 0x804042A8u;
            return;
    }

label_80417A94:
    ctx->downcount -= 1;
    // 80417A94: bl      0x804115A8
    {
            ctx->lr = 0x80417A98u;
            ctx->pc = 0x804115A8u;
            return;
    }

label_80417A98:
    ctx->downcount -= 1;
    // 80417A98: bl      0x804099FC
    {
            ctx->lr = 0x80417A9Cu;
            ctx->pc = 0x804099FCu;
            return;
    }

label_80417A9C:
    ctx->downcount -= 1;
    // 80417A9C: bl      0x803FC214
    {
            ctx->lr = 0x80417AA0u;
            ctx->pc = 0x803FC214u;
            return;
    }

label_80417AA0:
    ctx->downcount -= 1;
    // 80417AA0: bl      0x8040F1D4
    {
            ctx->lr = 0x80417AA4u;
            ctx->pc = 0x8040F1D4u;
            return;
    }

label_80417AA4:
    ctx->downcount -= 2;
    // 80417AA4: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80417AA8:
    // 80417AA8: bl      0x804178E4
    {
            ctx->lr = 0x80417AACu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417AAC:
    ctx->downcount -= 2;
    // 80417AAC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417AB0:
    // 80417AB0: bc    12, 2, 0x80417AC0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417AC0;
        }
    }

label_80417AB4:
    ctx->pc = 0x80417AB4u;
    ctx->downcount -= 2;
    // 80417AB4: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417AB8:
    // 80417AB8: bl      0x801C1BB4
    {
            ctx->lr = 0x80417ABCu;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417ABC:
    ctx->pc = 0x80417ABCu;
    ctx->downcount -= 1;
    // 80417ABC: stw     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80417AC0:
    ctx->pc = 0x80417AC0u;
    ctx->downcount -= 3;
    // 80417AC0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417AC4:
    // 80417AC4: cmpwi   r0, 0
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

label_80417AC8:
    // 80417AC8: bc    4, 2, 0x80417A40
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417A40u;
                return;
            }
            goto label_80417A40;
        }
    }

label_80417ACC:
    ctx->pc = 0x80417ACCu;
    ctx->downcount -= 2;
    // 80417ACC: addi    r3, r1, 20
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(20);

label_80417AD0:
    ctx->pc = 0x80417AD0u;
    // 80417AD0: bl      0x804178E4
    {
            ctx->lr = 0x80417AD4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417AD4:
    ctx->pc = 0x80417AD4u;
    ctx->downcount -= 2;
    // 80417AD4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417AD8:
    ctx->pc = 0x80417AD8u;
    // 80417AD8: bc    12, 2, 0x80417AEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417AEC;
        }
    }

label_80417ADC:
    ctx->pc = 0x80417ADCu;
    ctx->downcount -= 2;
    // 80417ADC: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417AE0:
    ctx->pc = 0x80417AE0u;
    // 80417AE0: bl      0x801C1BB4
    {
            ctx->lr = 0x80417AE4u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417AE4:
    ctx->pc = 0x80417AE4u;
    ctx->downcount -= 2;
    // 80417AE4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417AE8:
    ctx->pc = 0x80417AE8u;
    // 80417AE8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417AEC:
    ctx->pc = 0x80417AECu;
    ctx->downcount -= 1;
    // 80417AEC: bl      0x801FFD40
    {
            ctx->lr = 0x80417AF0u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417AF0:
    ctx->pc = 0x80417AF0u;
    ctx->downcount -= 1;
    // 80417AF0: bl      0x801FFD38
    {
            ctx->lr = 0x80417AF4u;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_80417AF4:
    ctx->pc = 0x80417AF4u;
    ctx->downcount -= 1;
    // 80417AF4: bl      0x801C1BB4
    {
            ctx->lr = 0x80417AF8u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417AF8:
    ctx->pc = 0x80417AF8u;
    ctx->downcount -= 3;
    // 80417AF8: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417AFC:
    ctx->pc = 0x80417AFCu;
    // 80417AFC: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80417B00:
    ctx->pc = 0x80417B00u;
    // 80417B00: b       0x80417B24
    {
            goto label_80417B24;
    }

label_80417B04:
    ctx->downcount -= 1;
    // 80417B04: bl      0x804055E8
    {
            ctx->lr = 0x80417B08u;
            ctx->pc = 0x804055E8u;
            return;
    }

label_80417B08:
    ctx->downcount -= 2;
    // 80417B08: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80417B0C:
    // 80417B0C: bl      0x804178E4
    {
            ctx->lr = 0x80417B10u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417B10:
    ctx->downcount -= 2;
    // 80417B10: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417B14:
    // 80417B14: bc    12, 2, 0x80417B24
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417B24;
        }
    }

label_80417B18:
    ctx->pc = 0x80417B18u;
    ctx->downcount -= 2;
    // 80417B18: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417B1C:
    // 80417B1C: bl      0x801C1BB4
    {
            ctx->lr = 0x80417B20u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417B20:
    ctx->pc = 0x80417B20u;
    ctx->downcount -= 1;
    // 80417B20: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80417B24:
    ctx->pc = 0x80417B24u;
    ctx->downcount -= 3;
    // 80417B24: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417B28:
    // 80417B28: cmpwi   r0, 0
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

label_80417B2C:
    // 80417B2C: bc    4, 2, 0x80417B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417B04u;
                return;
            }
            goto label_80417B04;
        }
    }

label_80417B30:
    ctx->pc = 0x80417B30u;
    ctx->downcount -= 2;
    // 80417B30: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_80417B34:
    ctx->pc = 0x80417B34u;
    // 80417B34: bl      0x804178E4
    {
            ctx->lr = 0x80417B38u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417B38:
    ctx->pc = 0x80417B38u;
    ctx->downcount -= 2;
    // 80417B38: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417B3C:
    ctx->pc = 0x80417B3Cu;
    // 80417B3C: bc    12, 2, 0x80417B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417B50;
        }
    }

label_80417B40:
    ctx->pc = 0x80417B40u;
    ctx->downcount -= 2;
    // 80417B40: lwz     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417B44:
    ctx->pc = 0x80417B44u;
    // 80417B44: bl      0x801C1BB4
    {
            ctx->lr = 0x80417B48u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417B48:
    ctx->pc = 0x80417B48u;
    ctx->downcount -= 2;
    // 80417B48: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417B4C:
    ctx->pc = 0x80417B4Cu;
    // 80417B4C: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417B50:
    ctx->pc = 0x80417B50u;
    ctx->downcount -= 1;
    // 80417B50: bl      0x801FFD40
    {
            ctx->lr = 0x80417B54u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417B54:
    ctx->pc = 0x80417B54u;
    ctx->downcount -= 1;
    // 80417B54: bl      0x80200154
    {
            ctx->lr = 0x80417B58u;
            ctx->pc = 0x80200154u;
            return;
    }

label_80417B58:
    ctx->pc = 0x80417B58u;
    ctx->downcount -= 1;
    // 80417B58: bl      0x801C1BB4
    {
            ctx->lr = 0x80417B5Cu;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417B5C:
    ctx->pc = 0x80417B5Cu;
    ctx->downcount -= 3;
    // 80417B5C: stw     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417B60:
    ctx->pc = 0x80417B60u;
    // 80417B60: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80417B64:
    ctx->pc = 0x80417B64u;
    // 80417B64: b       0x80417B84
    {
            goto label_80417B84;
    }

label_80417B68:
    ctx->downcount -= 2;
    // 80417B68: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80417B6C:
    // 80417B6C: bl      0x804178E4
    {
            ctx->lr = 0x80417B70u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417B70:
    ctx->downcount -= 2;
    // 80417B70: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417B74:
    // 80417B74: bc    12, 2, 0x80417B84
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417B84;
        }
    }

label_80417B78:
    ctx->pc = 0x80417B78u;
    ctx->downcount -= 2;
    // 80417B78: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417B7C:
    // 80417B7C: bl      0x801C1BB4
    {
            ctx->lr = 0x80417B80u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417B80:
    ctx->pc = 0x80417B80u;
    ctx->downcount -= 1;
    // 80417B80: stw     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80417B84:
    ctx->pc = 0x80417B84u;
    ctx->downcount -= 3;
    // 80417B84: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417B88:
    // 80417B88: cmpwi   r0, 0
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

label_80417B8C:
    // 80417B8C: bc    4, 2, 0x80417B68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417B68u;
                return;
            }
            goto label_80417B68;
        }
    }

label_80417B90:
    ctx->pc = 0x80417B90u;
    ctx->downcount -= 2;
    // 80417B90: addi    r3, r1, 12
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(12);

label_80417B94:
    ctx->pc = 0x80417B94u;
    // 80417B94: bl      0x804178E4
    {
            ctx->lr = 0x80417B98u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417B98:
    ctx->pc = 0x80417B98u;
    ctx->downcount -= 2;
    // 80417B98: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417B9C:
    ctx->pc = 0x80417B9Cu;
    // 80417B9C: bc    12, 2, 0x80417BB0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417BB0;
        }
    }

label_80417BA0:
    ctx->pc = 0x80417BA0u;
    ctx->downcount -= 2;
    // 80417BA0: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417BA4:
    ctx->pc = 0x80417BA4u;
    // 80417BA4: bl      0x801C1BB4
    {
            ctx->lr = 0x80417BA8u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417BA8:
    ctx->pc = 0x80417BA8u;
    ctx->downcount -= 2;
    // 80417BA8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417BAC:
    ctx->pc = 0x80417BACu;
    // 80417BAC: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417BB0:
    ctx->pc = 0x80417BB0u;
    ctx->downcount -= 4;
    // 80417BB0: lwz     r3, -12908(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12908);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417BB4:
    ctx->pc = 0x80417BB4u;
    // 80417BB4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80417BB8:
    ctx->pc = 0x80417BB8u;
    // 80417BB8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80417BBC:
    ctx->pc = 0x80417BBCu;
    // 80417BBC: bl      0x8026CE6C
    {
            ctx->lr = 0x80417BC0u;
            ctx->pc = 0x8026CE6Cu;
            return;
    }

label_80417BC0:
    ctx->pc = 0x80417BC0u;
    ctx->downcount -= 1;
    // 80417BC0: bl      0x801FFD40
    {
            ctx->lr = 0x80417BC4u;
            ctx->pc = 0x801FFD40u;
            return;
    }

label_80417BC4:
    ctx->pc = 0x80417BC4u;
    ctx->downcount -= 1;
    // 80417BC4: bl      0x801FFD38
    {
            ctx->lr = 0x80417BC8u;
            ctx->pc = 0x801FFD38u;
            return;
    }

label_80417BC8:
    ctx->pc = 0x80417BC8u;
    ctx->downcount -= 1;
    // 80417BC8: bl      0x801C1BB4
    {
            ctx->lr = 0x80417BCCu;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417BCC:
    ctx->pc = 0x80417BCCu;
    ctx->downcount -= 3;
    // 80417BCC: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417BD0:
    ctx->pc = 0x80417BD0u;
    // 80417BD0: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80417BD4:
    ctx->pc = 0x80417BD4u;
    // 80417BD4: b       0x80417C54
    {
            goto label_80417C54;
    }

label_80417BD8:
    ctx->pc = 0x80417BD8u;
    ctx->downcount -= 2;
    // 80417BD8: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417BDC:
    // 80417BDC: bl      0x80269C90
    {
            ctx->lr = 0x80417BE0u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_80417BE0:
    ctx->pc = 0x80417BE0u;
    ctx->downcount -= 3;
    // 80417BE0: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417BE4:
    ctx->pc = 0x80417BE4u;
    // 80417BE4: stw     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417BE8:
    // 80417BE8: bl      0x804066C0
    {
            ctx->lr = 0x80417BECu;
            ctx->pc = 0x804066C0u;
            return;
    }

label_80417BEC:
    ctx->downcount -= 2;
    // 80417BEC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417BF0:
    // 80417BF0: bl      0x80406698
    {
            ctx->lr = 0x80417BF4u;
            ctx->pc = 0x80406698u;
            return;
    }

label_80417BF4:
    ctx->pc = 0x80417BF4u;
    ctx->downcount -= 5;
    // 80417BF4: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417BF8:
    ctx->pc = 0x80417BF8u;
    // 80417BF8: stw     r3, 100(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417BFC:
    // 80417BFC: li      r3, 260
    ctx->gpr[3] = (u32)(s32)(260);

label_80417C00:
    ctx->pc = 0x80417C00u;
    // 80417C00: stw     r29, 104(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(104);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80417C04:
    // 80417C04: bl      0x801C1C48
    {
            ctx->lr = 0x80417C08u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80417C08:
    ctx->downcount -= 2;
    // 80417C08: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417C0C:
    // 80417C0C: bc    12, 2, 0x80417C14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417C14;
        }
    }

label_80417C10:
    ctx->downcount -= 1;
    // 80417C10: bl      0x8041AF84
    {
            ctx->lr = 0x80417C14u;
            goto label_8041AF84;
    }

label_80417C14:
    ctx->pc = 0x80417C14u;
    ctx->downcount -= 3;
    // 80417C14: stw     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417C18:
    ctx->pc = 0x80417C18u;
    // 80417C18: lwz     r4, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417C1C:
    // 80417C1C: bl      0x8041AB04
    {
            ctx->lr = 0x80417C20u;
            goto label_8041AB04;
    }

label_80417C20:
    ctx->pc = 0x80417C20u;
    ctx->downcount -= 3;
    // 80417C20: lwz     r3, -11456(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11456);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417C24:
    ctx->pc = 0x80417C24u;
    // 80417C24: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417C28:
    // 80417C28: bl      0x803F99A8
    {
            ctx->lr = 0x80417C2Cu;
            ctx->pc = 0x803F99A8u;
            return;
    }

label_80417C2C:
    ctx->pc = 0x80417C2Cu;
    ctx->downcount -= 3;
    // 80417C2C: lwz     r3, -11416(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11416);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417C30:
    ctx->pc = 0x80417C30u;
    // 80417C30: lwz     r4, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417C34:
    // 80417C34: bl      0x804046C0
    {
            ctx->lr = 0x80417C38u;
            ctx->pc = 0x804046C0u;
            return;
    }

label_80417C38:
    ctx->downcount -= 2;
    // 80417C38: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80417C3C:
    // 80417C3C: bl      0x804178E4
    {
            ctx->lr = 0x80417C40u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417C40:
    ctx->downcount -= 2;
    // 80417C40: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417C44:
    // 80417C44: bc    12, 2, 0x80417C54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417C54;
        }
    }

label_80417C48:
    ctx->pc = 0x80417C48u;
    ctx->downcount -= 2;
    // 80417C48: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417C4C:
    // 80417C4C: bl      0x801C1BB4
    {
            ctx->lr = 0x80417C50u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417C50:
    ctx->pc = 0x80417C50u;
    ctx->downcount -= 1;
    // 80417C50: stw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80417C54:
    ctx->pc = 0x80417C54u;
    ctx->downcount -= 3;
    // 80417C54: lwz     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417C58:
    // 80417C58: cmpwi   r0, 0
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

label_80417C5C:
    // 80417C5C: bc    4, 2, 0x80417BD8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417BD8u;
                return;
            }
            goto label_80417BD8;
        }
    }

label_80417C60:
    ctx->pc = 0x80417C60u;
    ctx->downcount -= 2;
    // 80417C60: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80417C64:
    ctx->pc = 0x80417C64u;
    // 80417C64: bl      0x804178E4
    {
            ctx->lr = 0x80417C68u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804178E4u;
                return;
            }
            goto label_804178E4;
    }

label_80417C68:
    ctx->pc = 0x80417C68u;
    ctx->downcount -= 2;
    // 80417C68: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417C6C:
    ctx->pc = 0x80417C6Cu;
    // 80417C6C: bc    12, 2, 0x80417C80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417C80;
        }
    }

label_80417C70:
    ctx->pc = 0x80417C70u;
    ctx->downcount -= 2;
    // 80417C70: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417C74:
    ctx->pc = 0x80417C74u;
    // 80417C74: bl      0x801C1BB4
    {
            ctx->lr = 0x80417C78u;
            ctx->pc = 0x801C1BB4u;
            return;
    }

label_80417C78:
    ctx->pc = 0x80417C78u;
    ctx->downcount -= 2;
    // 80417C78: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417C7C:
    ctx->pc = 0x80417C7Cu;
    // 80417C7C: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417C80:
    ctx->pc = 0x80417C80u;
    ctx->downcount -= 2;
    // 80417C80: addi    r3, r1, 32
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(32);

label_80417C84:
    ctx->pc = 0x80417C84u;
    // 80417C84: bl      0x8029877C
    {
            ctx->lr = 0x80417C88u;
            ctx->pc = 0x8029877Cu;
            return;
    }

label_80417C88:
    ctx->pc = 0x80417C88u;
    ctx->downcount -= 6;
    // 80417C88: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80417C8C:
    ctx->pc = 0x80417C8Cu;
    // 80417C8C: addi    r4, r1, 32
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(32);

label_80417C90:
    ctx->pc = 0x80417C90u;
    // 80417C90: lwz     r3, -12968(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12968);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417C94:
    ctx->pc = 0x80417C94u;
    // 80417C94: lwz     r0, 28(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(28);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417C98:
    ctx->pc = 0x80417C98u;
    // 80417C98: stb     r0, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80417C9C:
    ctx->pc = 0x80417C9Cu;
    // 80417C9C: bl      0x80298510
    {
            ctx->lr = 0x80417CA0u;
            ctx->pc = 0x80298510u;
            return;
    }

label_80417CA0:
    ctx->pc = 0x80417CA0u;
    ctx->downcount -= 2;
    // 80417CA0: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_80417CA4:
    ctx->pc = 0x80417CA4u;
    // 80417CA4: b       0x80417CD0
    {
            goto label_80417CD0;
    }

label_80417CA8:
    ctx->pc = 0x80417CA8u;
    ctx->downcount -= 3;
    // 80417CA8: lwz     r3, -11448(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11448);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417CAC:
    // 80417CAC: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80417CB0:
    // 80417CB0: bl      0x803FAB8C
    {
            ctx->lr = 0x80417CB4u;
            ctx->pc = 0x803FAB8Cu;
            return;
    }

label_80417CB4:
    ctx->downcount -= 6;
    // 80417CB4: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417CB8:
    ctx->pc = 0x80417CB8u;
    // 80417CB8: lwz     r3, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417CBC:
    ctx->pc = 0x80417CBCu;
    // 80417CBC: lwz     r5, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80417CC0:
    // 80417CC0: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80417CC4:
    ctx->pc = 0x80417CC4u;
    // 80417CC4: lwz     r6, 12(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(12);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80417CC8:
    // 80417CC8: bl      0x8041A394
    {
            ctx->lr = 0x80417CCCu;
            goto label_8041A394;
    }

label_80417CCC:
    ctx->downcount -= 1;
    // 80417CCC: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_80417CD0:
    ctx->pc = 0x80417CD0u;
    ctx->downcount -= 2;
    // 80417CD0: lwz     r3, -12944(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12944);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417CD4:
    // 80417CD4: bl      0x80269C90
    {
            ctx->lr = 0x80417CD8u;
            ctx->pc = 0x80269C90u;
            return;
    }

label_80417CD8:
    ctx->downcount -= 2;
    // 80417CD8: cmpw    r29, r3
    {
        s32 val_a = (s32)(ctx->gpr[29]);
        s32 val_b = (s32)(ctx->gpr[3]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417CDC:
    // 80417CDC: bc    12, 0, 0x80417CA8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417CA8u;
                return;
            }
            goto label_80417CA8;
        }
    }

label_80417CE0:
    ctx->pc = 0x80417CE0u;
    ctx->downcount -= 3;
    // 80417CE0: lwz     r3, -13104(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-13104);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417CE4:
    ctx->pc = 0x80417CE4u;
    // 80417CE4: li      r4, 256
    ctx->gpr[4] = (u32)(s32)(256);

label_80417CE8:
    ctx->pc = 0x80417CE8u;
    // 80417CE8: bl      0x802539D4
    {
            ctx->lr = 0x80417CECu;
            ctx->pc = 0x802539D4u;
            return;
    }

label_80417CEC:
    ctx->pc = 0x80417CECu;
    ctx->downcount -= 4;
    // 80417CEC: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80417CF0:
    ctx->pc = 0x80417CF0u;
    // 80417CF0: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80417CF0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80417CF0u);
        if (ctx->exception) return;
    }

label_80417CF4:
    ctx->pc = 0x80417CF4u;
    // 80417CF4: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80417CF4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80417CF8:
    ctx->pc = 0x80417CF8u;
    // 80417CF8: bl      0x800078AC
    {
            ctx->lr = 0x80417CFCu;
            ctx->pc = 0x800078ACu;
            return;
    }

label_80417CFC:
    ctx->pc = 0x80417CFCu;
    ctx->downcount -= 5;
    // 80417CFC: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417D00:
    ctx->pc = 0x80417D00u;
    // 80417D00: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417D04:
    ctx->pc = 0x80417D04u;
    // 80417D04: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80417D08:
    ctx->pc = 0x80417D08u;
    // 80417D08: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417D0C:
    ctx->pc = 0x80417D0Cu;
    ctx->downcount -= 7;
    // 80417D0C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417D10:
    ctx->pc = 0x80417D10u;
    // 80417D10: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417D14:
    ctx->pc = 0x80417D14u;
    // 80417D14: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417D18:
    ctx->pc = 0x80417D18u;
    // 80417D18: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417D1C:
    ctx->pc = 0x80417D1Cu;
    // 80417D1C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417D20:
    ctx->pc = 0x80417D20u;
    // 80417D20: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417D24:
    ctx->pc = 0x80417D24u;
    // 80417D24: bc    12, 2, 0x80417D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417D34;
        }
    }

label_80417D28:
    ctx->pc = 0x80417D28u;
    ctx->downcount -= 2;
    // 80417D28: cmpwi   r4, 0
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

label_80417D2C:
    ctx->pc = 0x80417D2Cu;
    // 80417D2C: bc    4, 1, 0x80417D34
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80417D34;
        }
    }

label_80417D30:
    ctx->pc = 0x80417D30u;
    ctx->downcount -= 1;
    // 80417D30: bl      0x801C1C90
    {
            ctx->lr = 0x80417D34u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80417D34:
    ctx->pc = 0x80417D34u;
    ctx->downcount -= 7;
    // 80417D34: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80417D38:
    ctx->pc = 0x80417D38u;
    // 80417D38: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417D3C:
    ctx->pc = 0x80417D3Cu;
    // 80417D3C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417D40:
    ctx->pc = 0x80417D40u;
    // 80417D40: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417D44:
    ctx->pc = 0x80417D44u;
    // 80417D44: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417D48:
    ctx->pc = 0x80417D48u;
    // 80417D48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417D4C:
    ctx->pc = 0x80417D4Cu;
    ctx->downcount -= 6;
    // 80417D4C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417D50:
    ctx->pc = 0x80417D50u;
    // 80417D50: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417D54:
    ctx->pc = 0x80417D54u;
    // 80417D54: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417D58:
    ctx->pc = 0x80417D58u;
    // 80417D58: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417D5C:
    ctx->pc = 0x80417D5Cu;
    // 80417D5C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417D60:
    ctx->pc = 0x80417D60u;
    // 80417D60: bl      0x801FF49C
    {
            ctx->lr = 0x80417D64u;
            ctx->pc = 0x801FF49Cu;
            return;
    }

label_80417D64:
    ctx->pc = 0x80417D64u;
    ctx->downcount -= 10;
    // 80417D64: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_80417D68:
    ctx->pc = 0x80417D68u;
    // 80417D68: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80417D6C:
    ctx->pc = 0x80417D6Cu;
    // 80417D6C: addi    r4, r4, 22448
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22448);

label_80417D70:
    ctx->pc = 0x80417D70u;
    // 80417D70: stw     r4, 0(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80417D74:
    ctx->pc = 0x80417D74u;
    // 80417D74: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417D78:
    ctx->pc = 0x80417D78u;
    // 80417D78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417D7C:
    ctx->pc = 0x80417D7Cu;
    // 80417D7C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417D80:
    ctx->pc = 0x80417D80u;
    // 80417D80: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417D84:
    ctx->pc = 0x80417D84u;
    // 80417D84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417D88:
    ctx->pc = 0x80417D88u;
    ctx->downcount -= 6;
    // 80417D88: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417D8C:
    ctx->pc = 0x80417D8Cu;
    // 80417D8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417D90:
    ctx->pc = 0x80417D90u;
    // 80417D90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417D94:
    ctx->pc = 0x80417D94u;
    // 80417D94: lwz     r3, -11280(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11280);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417D98:
    ctx->pc = 0x80417D98u;
    // 80417D98: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417D9C:
    ctx->pc = 0x80417D9Cu;
    // 80417D9C: bc    12, 2, 0x80417DB4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417DB4;
        }
    }

label_80417DA0:
    ctx->pc = 0x80417DA0u;
    ctx->downcount -= 6;
    // 80417DA0: lwz     r12, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417DA4:
    ctx->pc = 0x80417DA4u;
    // 80417DA4: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80417DA8:
    ctx->pc = 0x80417DA8u;
    // 80417DA8: lwz     r12, 8(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(8);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417DAC:
    ctx->pc = 0x80417DACu;
    // 80417DAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417DB0:
    ctx->pc = 0x80417DB0u;
    // 80417DB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417DB4u;
            ctx->pc = target;
            return;
        }
    }

label_80417DB4:
    ctx->pc = 0x80417DB4u;
    ctx->downcount -= 7;
    // 80417DB4: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80417DB8:
    ctx->pc = 0x80417DB8u;
    // 80417DB8: stw     r0, -11280(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417DBC:
    ctx->pc = 0x80417DBCu;
    // 80417DBC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417DC0:
    ctx->pc = 0x80417DC0u;
    // 80417DC0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417DC4:
    ctx->pc = 0x80417DC4u;
    // 80417DC4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417DC8:
    ctx->pc = 0x80417DC8u;
    // 80417DC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417DCC:
    ctx->pc = 0x80417DCCu;
    ctx->downcount -= 5;
    // 80417DCC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417DD0:
    ctx->pc = 0x80417DD0u;
    // 80417DD0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417DD4:
    ctx->pc = 0x80417DD4u;
    // 80417DD4: li      r3, 32
    ctx->gpr[3] = (u32)(s32)(32);

label_80417DD8:
    ctx->pc = 0x80417DD8u;
    // 80417DD8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417DDC:
    ctx->pc = 0x80417DDCu;
    // 80417DDC: bl      0x801C1C48
    {
            ctx->lr = 0x80417DE0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80417DE0:
    ctx->pc = 0x80417DE0u;
    ctx->downcount -= 2;
    // 80417DE0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417DE4:
    ctx->pc = 0x80417DE4u;
    // 80417DE4: bc    12, 2, 0x80417DEC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80417DEC;
        }
    }

label_80417DE8:
    ctx->pc = 0x80417DE8u;
    ctx->downcount -= 1;
    // 80417DE8: bl      0x80417D4C
    {
            ctx->lr = 0x80417DECu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417D4Cu;
                return;
            }
            goto label_80417D4C;
    }

label_80417DEC:
    ctx->pc = 0x80417DECu;
    ctx->downcount -= 6;
    // 80417DEC: stw     r3, -11280(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-11280);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417DF0:
    ctx->pc = 0x80417DF0u;
    // 80417DF0: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417DF4:
    ctx->pc = 0x80417DF4u;
    // 80417DF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417DF8:
    ctx->pc = 0x80417DF8u;
    // 80417DF8: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417DFC:
    ctx->pc = 0x80417DFCu;
    // 80417DFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417E00:
    ctx->pc = 0x80417E00u;
    ctx->downcount -= 6;
    // 80417E00: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417E04:
    ctx->pc = 0x80417E04u;
    // 80417E04: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417E08:
    ctx->pc = 0x80417E08u;
    // 80417E08: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417E0C:
    ctx->pc = 0x80417E0Cu;
    // 80417E0C: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417E10:
    ctx->pc = 0x80417E10u;
    // 80417E10: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80417E14:
    ctx->pc = 0x80417E14u;
    ctx->downcount -= 10;
    // 80417E14: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417E18:
    ctx->pc = 0x80417E18u;
    // 80417E18: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417E1C:
    ctx->pc = 0x80417E1Cu;
    // 80417E1C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417E20:
    ctx->pc = 0x80417E20u;
    // 80417E20: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417E24:
    // 80417E24: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417E28:
    ctx->pc = 0x80417E28u;
    // 80417E28: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417E2C:
    ctx->pc = 0x80417E2Cu;
    // 80417E2C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80417E30:
    ctx->pc = 0x80417E30u;
    // 80417E30: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80417E34:
    ctx->pc = 0x80417E34u;
    // 80417E34: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80417E38u;
            ctx->pc = target;
            return;
        }
    }

label_80417E38:
    ctx->downcount -= 2;
    // 80417E38: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80417E3C:
    // 80417E3C: bc    4, 2, 0x80417E4C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80417E4C;
        }
    }

label_80417E40:
    ctx->pc = 0x80417E40u;
    ctx->downcount -= 3;
    // 80417E40: lwz     r3, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417E44:
    // 80417E44: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80417E48:
    // 80417E48: bl      0x80297170
    {
            ctx->lr = 0x80417E4Cu;
            ctx->pc = 0x80297170u;
            return;
    }

label_80417E4C:
    ctx->pc = 0x80417E4Cu;
    ctx->downcount -= 6;
    // 80417E4C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417E50:
    ctx->pc = 0x80417E50u;
    // 80417E50: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417E54:
    ctx->pc = 0x80417E54u;
    // 80417E54: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417E58:
    // 80417E58: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80417E5C:
    ctx->pc = 0x80417E5Cu;
    // 80417E5C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417E60:
    ctx->pc = 0x80417E60u;
    ctx->downcount -= 11;
    // 80417E60: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417E64:
    ctx->pc = 0x80417E64u;
    // 80417E64: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417E68:
    ctx->pc = 0x80417E68u;
    // 80417E68: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417E6C:
    ctx->pc = 0x80417E6Cu;
    // 80417E6C: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80417E70:
    ctx->pc = 0x80417E70u;
    // 80417E70: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80417E74:
    // 80417E74: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417E78:
    ctx->pc = 0x80417E78u;
    // 80417E78: lwz     r4, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417E7C:
    ctx->pc = 0x80417E7Cu;
    // 80417E7C: lwz     r3, 276(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417E80:
    ctx->pc = 0x80417E80u;
    // 80417E80: lwz     r31, 152(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(152);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417E84:
    // 80417E84: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80417E88:
    // 80417E88: bl      0x80296DC8
    {
            ctx->lr = 0x80417E8Cu;
            ctx->pc = 0x80296DC8u;
            return;
    }

label_80417E8C:
    ctx->downcount -= 4;
    // 80417E8C: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80417E90:
    // 80417E90: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417E94:
    // 80417E94: addi    r4, r4, -15520
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15520);

label_80417E98:
    // 80417E98: bl      0x8026F970
    {
            ctx->lr = 0x80417E9Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80417E9C:
    ctx->downcount -= 3;
    // 80417E9C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417EA0:
    ctx->pc = 0x80417EA0u;
    // 80417EA0: lwz     r3, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417EA4:
    // 80417EA4: bl      0x80296EA0
    {
            ctx->lr = 0x80417EA8u;
            ctx->pc = 0x80296EA0u;
            return;
    }

label_80417EA8:
    ctx->pc = 0x80417EA8u;
    ctx->downcount -= 15;
    // 80417EA8: lwz     r4, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80417EAC:
    ctx->pc = 0x80417EACu;
    // 80417EAC: lwz     r3, 12(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417EB0:
    ctx->pc = 0x80417EB0u;
    // 80417EB0: lfs     f1, 80(r4)
    if (!ppc_fp_available_inline(ctx, 0x80417EB0u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80417EB4:
    ctx->pc = 0x80417EB4u;
    // 80417EB4: lfs     f0, 8(r3)
    if (!ppc_fp_available_inline(ctx, 0x80417EB4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80417EB8:
    ctx->pc = 0x80417EB8u;
    // 80417EB8: stfs     f0, 76(r4)
    if (!ppc_fp_available_inline(ctx, 0x80417EB8u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(76);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80417EBC:
    ctx->pc = 0x80417EBCu;
    // 80417EBC: stfs     f1, 80(r4)
    if (!ppc_fp_available_inline(ctx, 0x80417EBCu)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(80);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80417EC0:
    ctx->pc = 0x80417EC0u;
    // 80417EC0: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80417EC4:
    ctx->pc = 0x80417EC4u;
    // 80417EC4: lwz     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80417EC8:
    ctx->pc = 0x80417EC8u;
    // 80417EC8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417ECC:
    ctx->pc = 0x80417ECCu;
    // 80417ECC: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80417ECCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80417ED0:
    ctx->pc = 0x80417ED0u;
    // 80417ED0: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80417ED0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80417ED4:
    ctx->pc = 0x80417ED4u;
    // 80417ED4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80417ED8:
    // 80417ED8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80417EDC:
    ctx->pc = 0x80417EDCu;
    // 80417EDC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80417EE0:
    ctx->pc = 0x80417EE0u;
    ctx->downcount -= 24;
    // 80417EE0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80417EE4:
    ctx->pc = 0x80417EE4u;
    // 80417EE4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80417EE8:
    // 80417EE8: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80417EEC:
    // 80417EEC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417EF0:
    ctx->pc = 0x80417EF0u;
    // 80417EF0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80417EF4:
    // 80417EF4: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80417EF8:
    ctx->pc = 0x80417EF8u;
    // 80417EF8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80417EFC:
    // 80417EFC: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_80417F00:
    // 80417F00: addi    r31, r31, -15520
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-15520);

label_80417F04:
    // 80417F04: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80417F08:
    // 80417F08: addi    r4, r31, 11
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(11);

label_80417F0C:
    // 80417F0C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80417F10:
    // 80417F10: addi    r5, r31, 24
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(24);

label_80417F14:
    // 80417F14: bl      0x802703A8
    {
            ctx->lr = 0x80417F18u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80417F18:
    ctx->downcount -= 6;
    // 80417F18: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F1C:
    // 80417F1C: addi    r5, r31, 44
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(44);

label_80417F20:
    // 80417F20: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F24:
    // 80417F24: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80417F28:
    // 80417F28: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417F2C:
    // 80417F2C: bl      0x8027035C
    {
            ctx->lr = 0x80417F30u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417F30:
    ctx->downcount -= 6;
    // 80417F30: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F34:
    // 80417F34: addi    r5, r31, 61
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(61);

label_80417F38:
    // 80417F38: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F3C:
    // 80417F3C: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80417F40:
    // 80417F40: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417F44:
    // 80417F44: bl      0x8027035C
    {
            ctx->lr = 0x80417F48u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417F48:
    ctx->downcount -= 6;
    // 80417F48: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F4C:
    // 80417F4C: addi    r5, r31, 67
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(67);

label_80417F50:
    // 80417F50: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F54:
    // 80417F54: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_80417F58:
    // 80417F58: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417F5C:
    // 80417F5C: bl      0x8027035C
    {
            ctx->lr = 0x80417F60u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417F60:
    ctx->downcount -= 6;
    // 80417F60: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F64:
    // 80417F64: addi    r5, r31, 73
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(73);

label_80417F68:
    // 80417F68: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F6C:
    // 80417F6C: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80417F70:
    // 80417F70: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417F74:
    // 80417F74: bl      0x8027035C
    {
            ctx->lr = 0x80417F78u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417F78:
    ctx->downcount -= 6;
    // 80417F78: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F7C:
    // 80417F7C: addi    r5, r31, 76
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(76);

label_80417F80:
    // 80417F80: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F84:
    // 80417F84: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_80417F88:
    // 80417F88: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417F8C:
    // 80417F8C: bl      0x8027035C
    {
            ctx->lr = 0x80417F90u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417F90:
    ctx->downcount -= 6;
    // 80417F90: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417F94:
    // 80417F94: addi    r5, r31, 83
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(83);

label_80417F98:
    // 80417F98: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417F9C:
    // 80417F9C: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_80417FA0:
    // 80417FA0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417FA4:
    // 80417FA4: bl      0x8027035C
    {
            ctx->lr = 0x80417FA8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417FA8:
    ctx->downcount -= 6;
    // 80417FA8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417FAC:
    // 80417FAC: addi    r5, r31, 90
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(90);

label_80417FB0:
    // 80417FB0: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417FB4:
    // 80417FB4: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_80417FB8:
    // 80417FB8: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417FBC:
    // 80417FBC: bl      0x8027035C
    {
            ctx->lr = 0x80417FC0u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417FC0:
    ctx->downcount -= 6;
    // 80417FC0: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417FC4:
    // 80417FC4: addi    r5, r31, 97
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(97);

label_80417FC8:
    // 80417FC8: addi    r6, r31, 50
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(50);

label_80417FCC:
    // 80417FCC: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_80417FD0:
    // 80417FD0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80417FD4:
    // 80417FD4: bl      0x8027035C
    {
            ctx->lr = 0x80417FD8u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80417FD8:
    ctx->downcount -= 4;
    // 80417FD8: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80417FDC:
    // 80417FDC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80417FE0:
    // 80417FE0: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_80417FE4:
    // 80417FE4: bl      0x80270194
    {
            ctx->lr = 0x80417FE8u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80417FE8:
    ctx->pc = 0x80417FE8u;
    ctx->downcount -= 2;
    // 80417FE8: lwz     r3, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80417FEC:
    // 80417FEC: bl      0x80296EB0
    {
            ctx->lr = 0x80417FF0u;
            ctx->pc = 0x80296EB0u;
            return;
    }

label_80417FF0:
    ctx->pc = 0x80417FF0u;
    ctx->downcount -= 17;
    // 80417FF0: stw     r3, 276(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(276);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80417FF4:
    ctx->pc = 0x80417FF4u;
    // 80417FF4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80417FF8:
    ctx->pc = 0x80417FF8u;
    // 80417FF8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80417FFC:
    ctx->pc = 0x80417FFCu;
    // 80417FFC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418000:
    // 80418000: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80418004:
    ctx->pc = 0x80418004u;
    // 80418004: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418008:
    ctx->pc = 0x80418008u;
    ctx->downcount -= 18;
    // 80418008: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041800C:
    ctx->pc = 0x8041800Cu;
    // 8041800C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418010:
    ctx->pc = 0x80418010u;
    // 80418010: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418014:
    ctx->pc = 0x80418014u;
    // 80418014: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418018:
    // 80418018: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041801C:
    // 8041801C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80418020:
    ctx->pc = 0x80418020u;
    // 80418020: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418024:
    // 80418024: bl      0x80418C48
    {
            ctx->lr = 0x80418028u;
            goto label_80418C48;
    }

label_80418028:
    ctx->pc = 0x80418028u;
    ctx->downcount -= 3;
    // 80418028: lbz     r0, 8(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041802C:
    // 8041802C: cmpwi   r0, 0
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

label_80418030:
    // 80418030: bc    12, 2, 0x80418068
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418068;
        }
    }

label_80418034:
    ctx->pc = 0x80418034u;
    ctx->downcount -= 3;
    // 80418034: lwz     r0, 280(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418038:
    // 80418038: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041803C:
    // 8041803C: bc    4, 2, 0x80418054
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418054;
        }
    }

label_80418040:
    ctx->downcount -= 4;
    // 80418040: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80418044:
    // 80418044: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_80418048:
    // 80418048: li      r5, 7
    ctx->gpr[5] = (u32)(s32)(7);

label_8041804C:
    // 8041804C: bl      0x80270194
    {
            ctx->lr = 0x80418050u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80418050:
    ctx->downcount -= 1;
    // 80418050: b       0x8041807C
    {
            goto label_8041807C;
    }

label_80418054:
    ctx->downcount -= 4;
    // 80418054: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80418058:
    // 80418058: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041805C:
    // 8041805C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80418060:
    // 80418060: bl      0x80270194
    {
            ctx->lr = 0x80418064u;
            ctx->pc = 0x80270194u;
            return;
    }

label_80418064:
    ctx->downcount -= 1;
    // 80418064: b       0x8041807C
    {
            goto label_8041807C;
    }

label_80418068:
    ctx->pc = 0x80418068u;
    ctx->downcount -= 5;
    // 80418068: lwz     r5, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041806C:
    // 8041806C: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80418070:
    // 80418070: addi    r4, r5, -1
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(-1);

label_80418074:
    // 80418074: addi    r5, r5, 3
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(3);

label_80418078:
    // 80418078: bl      0x80270194
    {
            ctx->lr = 0x8041807Cu;
            ctx->pc = 0x80270194u;
            return;
    }

label_8041807C:
    ctx->pc = 0x8041807Cu;
    ctx->downcount -= 16;
    // 8041807C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418080:
    ctx->pc = 0x80418080u;
    // 80418080: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418084:
    ctx->pc = 0x80418084u;
    // 80418084: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418088:
    // 80418088: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041808C:
    ctx->pc = 0x8041808Cu;
    // 8041808C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418090:
    ctx->pc = 0x80418090u;
    ctx->downcount -= 7;
    // 80418090: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418094:
    ctx->pc = 0x80418094u;
    // 80418094: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418098:
    ctx->pc = 0x80418098u;
    // 80418098: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041809C:
    ctx->pc = 0x8041809Cu;
    // 8041809C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804180A0:
    // 804180A0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804180A4:
    ctx->pc = 0x804180A4u;
    // 804180A4: lwz     r3, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804180A8:
    // 804180A8: bl      0x80418D3C
    {
            ctx->lr = 0x804180ACu;
            goto label_80418D3C;
    }

label_804180AC:
    ctx->downcount -= 2;
    // 804180AC: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804180B0:
    // 804180B0: bl      0x80371554
    {
            ctx->lr = 0x804180B4u;
            ctx->pc = 0x80371554u;
            return;
    }

label_804180B4:
    ctx->pc = 0x804180B4u;
    ctx->downcount -= 6;
    // 804180B4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804180B8:
    ctx->pc = 0x804180B8u;
    // 804180B8: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_804180BC:
    ctx->pc = 0x804180BCu;
    // 804180BC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804180C0:
    // 804180C0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804180C4:
    ctx->pc = 0x804180C4u;
    // 804180C4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804180C8:
    ctx->pc = 0x804180C8u;
    ctx->downcount -= 7;
    // 804180C8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804180CC:
    ctx->pc = 0x804180CCu;
    // 804180CC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804180D0:
    // 804180D0: li      r4, 8
    ctx->gpr[4] = (u32)(s32)(8);

label_804180D4:
    ctx->pc = 0x804180D4u;
    // 804180D4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804180D8:
    ctx->pc = 0x804180D8u;
    // 804180D8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804180DC:
    // 804180DC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804180E0:
    // 804180E0: bl      0x8036A4F8
    {
            ctx->lr = 0x804180E4u;
            ctx->pc = 0x8036A4F8u;
            return;
    }

label_804180E4:
    ctx->downcount -= 15;
    // 804180E4: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_804180E8:
    // 804180E8: lis     r3, -32664
    ctx->gpr[3] = ((u32)(s32)(-32664) << 16);

label_804180EC:
    // 804180EC: addi    r5, r5, 22464
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22464);

label_804180F0:
    ctx->pc = 0x804180F0u;
    // 804180F0: stw     r5, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_804180F4:
    // 804180F4: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_804180F8:
    // 804180F8: addi    r3, r3, -15520
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15520);

label_804180FC:
    // 804180FC: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_80418100:
    // 80418100: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_80418104:
    ctx->pc = 0x80418104u;
    // 80418104: stw     r4, 24(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80418108:
    // 80418108: addi    r4, r3, 101
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(101);

label_8041810C:
    // 8041810C: addi    r3, r31, 52
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(52);

label_80418110:
    // 80418110: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80418114:
    ctx->pc = 0x80418114u;
    // 80418114: stw     r6, 148(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80418118:
    ctx->pc = 0x80418118u;
    // 80418118: stw     r0, 152(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041811C:
    // 8041811C: bl      0x8000E7F4
    {
            ctx->lr = 0x80418120u;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80418120:
    ctx->downcount -= 8;
    // 80418120: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_80418124:
    ctx->pc = 0x80418124u;
    // 80418124: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418128:
    // 80418128: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8041812C:
    ctx->pc = 0x8041812Cu;
    // 8041812C: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418130:
    // 80418130: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_80418134:
    // 80418134: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80418138:
    // 80418138: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041813C:
    // 8041813C: bl      0x80370BD4
    {
            ctx->lr = 0x80418140u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80418140:
    ctx->pc = 0x80418140u;
    ctx->downcount -= 3;
    // 80418140: lwz     r3, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418144:
    ctx->pc = 0x80418144u;
    // 80418144: lwz     r3, 28(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418148:
    // 80418148: bl      0x80405B1C
    {
            ctx->lr = 0x8041814Cu;
            ctx->pc = 0x80405B1Cu;
            return;
    }

label_8041814C:
    ctx->downcount -= 2;
    // 8041814C: cmpwi   r3, 17
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(17);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418150:
    // 80418150: bc    4, 2, 0x8041815C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041815C;
        }
    }

label_80418154:
    ctx->downcount -= 2;
    // 80418154: li      r0, 18
    ctx->gpr[0] = (u32)(s32)(18);

label_80418158:
    ctx->pc = 0x80418158u;
    // 80418158: stw     r0, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041815C:
    ctx->downcount -= 2;
    // 8041815C: li      r3, 236
    ctx->gpr[3] = (u32)(s32)(236);

label_80418160:
    // 80418160: bl      0x801C1C48
    {
            ctx->lr = 0x80418164u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80418164:
    ctx->downcount -= 3;
    // 80418164: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418168:
    // 80418168: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041816C:
    // 8041816C: bc    12, 2, 0x8041817C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041817C;
        }
    }

label_80418170:
    ctx->pc = 0x80418170u;
    ctx->downcount -= 2;
    // 80418170: lwz     r4, 280(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(280);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418174:
    // 80418174: bl      0x80418D7C
    {
            ctx->lr = 0x80418178u;
            goto label_80418D7C;
    }

label_80418178:
    ctx->downcount -= 1;
    // 80418178: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041817C:
    ctx->pc = 0x8041817Cu;
    ctx->downcount -= 3;
    // 8041817C: stw     r4, 272(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80418180:
    // 80418180: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80418184:
    // 80418184: bl      0x802A6408
    {
            ctx->lr = 0x80418188u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80418188:
    ctx->downcount -= 9;
    // 80418188: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8041818C:
    ctx->pc = 0x8041818Cu;
    // 8041818C: stb     r0, 271(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(271);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80418190:
    // 80418190: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80418194:
    ctx->pc = 0x80418194u;
    // 80418194: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80418198:
    ctx->pc = 0x80418198u;
    // 80418198: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041819C:
    ctx->pc = 0x8041819Cu;
    // 8041819C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804181A0:
    // 804181A0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804181A4:
    ctx->pc = 0x804181A4u;
    // 804181A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804181A8:
    ctx->pc = 0x804181A8u;
    ctx->downcount -= 18;
    // 804181A8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804181AC:
    ctx->pc = 0x804181ACu;
    // 804181AC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804181B0:
    // 804181B0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804181B4:
    ctx->pc = 0x804181B4u;
    // 804181B4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804181B8:
    ctx->pc = 0x804181B8u;
    // 804181B8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_804181BC:
    // 804181BC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804181C0:
    // 804181C0: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_804181C4:
    // 804181C4: bc    12, 2, 0x804181E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804181E4;
        }
    }

label_804181C8:
    ctx->downcount -= 1;
    // 804181C8: bc    12, 2, 0x804181D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804181D4;
        }
    }

label_804181CC:
    ctx->downcount -= 2;
    // 804181CC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804181D0:
    // 804181D0: bl      0x801F9B68
    {
            ctx->lr = 0x804181D4u;
            ctx->pc = 0x801F9B68u;
            return;
    }

label_804181D4:
    ctx->downcount -= 2;
    // 804181D4: cmpwi   r31, 0
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

label_804181D8:
    // 804181D8: bc    4, 1, 0x804181E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804181E4;
        }
    }

label_804181DC:
    ctx->downcount -= 2;
    // 804181DC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804181E0:
    // 804181E0: bl      0x801C1C90
    {
            ctx->lr = 0x804181E4u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_804181E4:
    ctx->downcount -= 17;
    // 804181E4: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804181E8:
    ctx->pc = 0x804181E8u;
    // 804181E8: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_804181EC:
    ctx->pc = 0x804181ECu;
    // 804181EC: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804181F0:
    ctx->pc = 0x804181F0u;
    // 804181F0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804181F4:
    // 804181F4: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804181F8:
    ctx->pc = 0x804181F8u;
    // 804181F8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804181FC:
    ctx->downcount -= 2;
    // 804181FC: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80418200:
    // 80418200: b       0x804181A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804181A8u;
                return;
            }
            goto label_804181A8;
    }

label_80418204:
    ctx->downcount -= 2;
    // 80418204: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80418208:
    // 80418208: b       0x804181A8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804181A8u;
                return;
            }
            goto label_804181A8;
    }

label_8041820C:
    ctx->pc = 0x8041820Cu;
    ctx->downcount -= 18;
    // 8041820C: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418210:
    ctx->pc = 0x80418210u;
    // 80418210: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418214:
    ctx->pc = 0x80418214u;
    // 80418214: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418218:
    ctx->pc = 0x80418218u;
    // 80418218: stmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041821C:
    // 8041821C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418220:
    ctx->pc = 0x80418220u;
    // 80418220: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418224:
    // 80418224: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418228:
    // 80418228: bc    4, 2, 0x80418254
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418254;
        }
    }

label_8041822C:
    ctx->downcount -= 9;
    // 8041822C: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_80418230:
    ctx->pc = 0x80418230u;
    // 80418230: lwz     r4, -26544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-26544);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418234:
    // 80418234: addi    r5, r5, -15400
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15400);

label_80418238:
    // 80418238: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8041823C:
    // 8041823C: addi    r5, r5, 13
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(13);

label_80418240:
    // 80418240: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80418244:
    // 80418244: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80418248:
    // 80418248: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_8041824C:
    // 8041824C: bl      0x802703A8
    {
            ctx->lr = 0x80418250u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80418250:
    ctx->downcount -= 1;
    // 80418250: b       0x80418278
    {
            goto label_80418278;
    }

label_80418254:
    ctx->downcount -= 9;
    // 80418254: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_80418258:
    ctx->pc = 0x80418258u;
    // 80418258: lwz     r4, -26544(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-26544);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041825C:
    // 8041825C: addi    r5, r5, -15400
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15400);

label_80418260:
    // 80418260: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80418264:
    // 80418264: addi    r5, r5, 35
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(35);

label_80418268:
    // 80418268: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8041826C:
    // 8041826C: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80418270:
    // 80418270: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80418274:
    // 80418274: bl      0x802703A8
    {
            ctx->lr = 0x80418278u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80418278:
    ctx->downcount -= 2;
    // 80418278: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8041827C:
    // 8041827C: bl      0x8026F6CC
    {
            ctx->lr = 0x80418280u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80418280:
    ctx->pc = 0x80418280u;
    ctx->downcount -= 6;
    // 80418280: lwz     r5, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80418284:
    // 80418284: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80418288:
    // 80418288: addi    r31, r4, -15400
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-15400);

label_8041828C:
    // 8041828C: addi    r4, r31, 62
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(62);

label_80418290:
    // 80418290: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_80418294:
    // 80418294: bl      0x8025E03C
    {
            ctx->lr = 0x80418298u;
            ctx->pc = 0x8025E03Cu;
            return;
    }

label_80418298:
    ctx->downcount -= 2;
    // 80418298: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_8041829C:
    // 8041829C: b       0x804182D8
    {
            goto label_804182D8;
    }

label_804182A0:
    ctx->downcount -= 6;
    // 804182A0: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804182A4:
    // 804182A4: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_804182A8:
    // 804182A8: addi    r5, r31, 71
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(71);

label_804182AC:
    // 804182AC: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_804182B0:
    // 804182B0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_804182B4:
    // 804182B4: bl      0x8000D074
    {
            ctx->lr = 0x804182B8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_804182B8:
    ctx->downcount -= 7;
    // 804182B8: addic   r0, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_804182BC:
    // 804182BC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804182C0:
    // 804182C0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_804182C4:
    // 804182C4: addi    r5, r31, 82
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(82);

label_804182C8:
    // 804182C8: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_804182CC:
    // 804182CC: subfe   r7, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_804182D0:
    // 804182D0: bl      0x8027035C
    {
            ctx->lr = 0x804182D4u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_804182D4:
    ctx->downcount -= 1;
    // 804182D4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_804182D8:
    ctx->pc = 0x804182D8u;
    ctx->downcount -= 3;
    // 804182D8: lwz     r0, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804182DC:
    // 804182DC: cmpw    r30, r0
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

label_804182E0:
    // 804182E0: bc    12, 0, 0x804182A0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804182A0u;
                return;
            }
            goto label_804182A0;
        }
    }

label_804182E4:
    ctx->pc = 0x804182E4u;
    ctx->downcount -= 16;
    // 804182E4: lmw     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_804182E8:
    ctx->pc = 0x804182E8u;
    // 804182E8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804182EC:
    ctx->pc = 0x804182ECu;
    // 804182EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804182F0:
    // 804182F0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_804182F4:
    ctx->pc = 0x804182F4u;
    // 804182F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804182F8:
    ctx->pc = 0x804182F8u;
    ctx->downcount -= 5;
    // 804182F8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804182FC:
    ctx->pc = 0x804182FCu;
    // 804182FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418300:
    // 80418300: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80418304:
    ctx->pc = 0x80418304u;
    // 80418304: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418308:
    // 80418308: bl      0x8026F6CC
    {
            ctx->lr = 0x8041830Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8041830C:
    ctx->downcount -= 6;
    // 8041830C: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_80418310:
    // 80418310: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418314:
    // 80418314: addi    r5, r5, -15400
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15400);

label_80418318:
    // 80418318: addi    r3, r1, 16
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(16);

label_8041831C:
    // 8041831C: addi    r5, r5, 91
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(91);

label_80418320:
    // 80418320: bl      0x8025D62C
    {
            ctx->lr = 0x80418324u;
            ctx->pc = 0x8025D62Cu;
            return;
    }

label_80418324:
    ctx->pc = 0x80418324u;
    ctx->downcount -= 17;
    // 80418324: lwz     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418328:
    ctx->pc = 0x80418328u;
    // 80418328: stw     r0, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041832C:
    ctx->pc = 0x8041832Cu;
    // 8041832C: lwz     r3, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418330:
    ctx->pc = 0x80418330u;
    // 80418330: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418334:
    ctx->pc = 0x80418334u;
    // 80418334: lwz     r0, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418338:
    ctx->pc = 0x80418338u;
    // 80418338: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418338u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8041833C:
    ctx->pc = 0x8041833Cu;
    // 8041833C: lfs     f1, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041833Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80418340:
    ctx->pc = 0x80418340u;
    // 80418340: stfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418340u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80418344:
    ctx->pc = 0x80418344u;
    // 80418344: stfs     f1, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418344u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80418348:
    ctx->pc = 0x80418348u;
    // 80418348: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041834C:
    ctx->pc = 0x8041834Cu;
    // 8041834C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418350:
    ctx->pc = 0x80418350u;
    // 80418350: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418354:
    ctx->pc = 0x80418354u;
    // 80418354: lwz     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418358:
    ctx->pc = 0x80418358u;
    // 80418358: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041835C:
    // 8041835C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80418360:
    ctx->pc = 0x80418360u;
    // 80418360: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418364:
    ctx->pc = 0x80418364u;
    ctx->downcount -= 7;
    // 80418364: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418368:
    ctx->pc = 0x80418368u;
    // 80418368: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041836C:
    ctx->pc = 0x8041836Cu;
    // 8041836C: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418370:
    // 80418370: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80418374:
    ctx->pc = 0x80418374u;
    // 80418374: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418374u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80418378:
    ctx->pc = 0x80418378u;
    // 80418378: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80418378u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80418378u);
        if (ctx->exception) return;
    }

label_8041837C:
    // 8041837C: bl      0x80007848
    {
            ctx->lr = 0x80418380u;
            ctx->pc = 0x80007848u;
            return;
    }

label_80418380:
    ctx->pc = 0x80418380u;
    ctx->downcount -= 6;
    // 80418380: lwz     r0, 272(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418384:
    // 80418384: or   r25, r3, r3
    {
        ctx->gpr[25] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418388:
    // 80418388: or   r26, r4, r4
    {
        ctx->gpr[26] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041838C:
    // 8041838C: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_80418390:
    // 80418390: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418394:
    // 80418394: bc    4, 2, 0x804183C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804183C8;
        }
    }

label_80418398:
    ctx->downcount -= 3;
    // 80418398: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_8041839C:
    // 8041839C: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_804183A0:
    // 804183A0: bl      0x80419A50
    {
            ctx->lr = 0x804183A4u;
            goto label_80419A50;
    }

label_804183A4:
    ctx->downcount -= 2;
    // 804183A4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804183A8:
    // 804183A8: bc    12, 2, 0x804183B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804183B4;
        }
    }

label_804183AC:
    ctx->downcount -= 2;
    // 804183AC: li      r29, 19
    ctx->gpr[29] = (u32)(s32)(19);

label_804183B0:
    // 804183B0: b       0x804183C8
    {
            goto label_804183C8;
    }

label_804183B4:
    ctx->downcount -= 2;
    // 804183B4: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_804183B8:
    // 804183B8: bl      0x80419A5C
    {
            ctx->lr = 0x804183BCu;
            goto label_80419A5C;
    }

label_804183BC:
    ctx->downcount -= 2;
    // 804183BC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804183C0:
    // 804183C0: bc    12, 2, 0x804183C8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804183C8;
        }
    }

label_804183C4:
    ctx->downcount -= 1;
    // 804183C4: li      r29, 10
    ctx->gpr[29] = (u32)(s32)(10);

label_804183C8:
    ctx->downcount -= 5;
    // 804183C8: lis     r3, -32664
    ctx->gpr[3] = ((u32)(s32)(-32664) << 16);

label_804183CC:
    // 804183CC: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_804183D0:
    // 804183D0: li      r31, 21
    ctx->gpr[31] = (u32)(s32)(21);

label_804183D4:
    // 804183D4: addi    r30, r3, -15400
    ctx->gpr[30] = ctx->gpr[3] + (u32)(s32)(-15400);

label_804183D8:
    // 804183D8: b       0x80418568
    {
            goto label_80418568;
    }

label_804183DC:
    ctx->downcount -= 6;
    // 804183DC: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_804183E0:
    // 804183E0: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_804183E4:
    // 804183E4: addi    r5, r30, 106
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(106);

label_804183E8:
    // 804183E8: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_804183EC:
    // 804183EC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_804183F0:
    // 804183F0: bl      0x8000D074
    {
            ctx->lr = 0x804183F4u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_804183F4:
    ctx->downcount -= 3;
    // 804183F4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_804183F8:
    // 804183F8: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_804183FC:
    // 804183FC: bl      0x8026F968
    {
            ctx->lr = 0x80418400u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80418400:
    ctx->downcount -= 11;
    // 80418400: add   r27, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80418404:
    // 80418404: srawi r6, r31, 31
    {
        u32 sh = 31u;
        u32 value = ctx->gpr[31];
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

label_80418408:
    // 80418408: rlwinm r5, r27, 1, 31, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[27], 1u) & 0x00000001u;
    }

label_8041840C:
    ctx->pc = 0x8041840Cu;
    // 8041840C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80418410:
    // 80418410: subfc   r4, r27, r31
    {
        u32 a = ~ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u64 wide = (u64)b + (u64)a + 1u;
        u32 res = (u32)wide;
        ctx->gpr[4] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80418414:
    // 80418414: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418418:
    // 80418418: adde.   r23, r6, r5
    {
        u32 carry = (ctx->xer >> 29) & 1u;
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[5];
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[23] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
        u32 cr_bits = 0;
        s32 cr_value = (s32)ctx->gpr[23];
        if (cr_value < 0)  cr_bits |= 0x8u;
        if (cr_value > 0)  cr_bits |= 0x4u;
        if (cr_value == 0) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & 0x0FFFFFFFu) | (cr_bits << 28);
    }

label_8041841C:
    // 8041841C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80418420:
    // 80418420: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_80418424:
    ctx->pc = 0x80418424u;
    // 80418424: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80418428:
    // 80418428: bc    12, 2, 0x80418490
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418490;
        }
    }

label_8041842C:
    ctx->downcount -= 5;
    // 8041842C: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418430:
    // 80418430: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80418434:
    // 80418434: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80418438:
    // 80418438: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041843C:
    // 8041843C: bl      0x8034E040
    {
            ctx->lr = 0x80418440u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_80418440:
    ctx->pc = 0x80418440u;
    ctx->downcount -= 3;
    // 80418440: lwz     r0, 272(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418444:
    // 80418444: cmpwi   r0, 18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418448:
    // 80418448: bc    4, 2, 0x80418474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418474;
        }
    }

label_8041844C:
    ctx->downcount -= 2;
    // 8041844C: cmpwi   r27, 10
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

label_80418450:
    // 80418450: bc    12, 0, 0x80418474
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418474;
        }
    }

label_80418454:
    ctx->downcount -= 7;
    // 80418454: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80418458:
    // 80418458: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_8041845C:
    // 8041845C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_80418460:
    // 80418460: li      r5, 53
    ctx->gpr[5] = (u32)(s32)(53);

label_80418464:
    // 80418464: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80418468:
    // 80418468: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041846C:
    // 8041846C: bl      0x8026F8C0
    {
            ctx->lr = 0x80418470u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80418470:
    ctx->downcount -= 1;
    // 80418470: b       0x80418490
    {
            goto label_80418490;
    }

label_80418474:
    ctx->downcount -= 7;
    // 80418474: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80418478:
    // 80418478: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_8041847C:
    // 8041847C: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_80418480:
    // 80418480: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_80418484:
    // 80418484: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80418488:
    // 80418488: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041848C:
    // 8041848C: bl      0x8026F8C0
    {
            ctx->lr = 0x80418490u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80418490:
    ctx->downcount -= 6;
    // 80418490: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418494:
    // 80418494: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80418498:
    // 80418498: addi    r5, r30, 119
    ctx->gpr[5] = ctx->gpr[30] + (u32)(s32)(119);

label_8041849C:
    // 8041849C: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_804184A0:
    // 804184A0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_804184A4:
    // 804184A4: bl      0x8000D074
    {
            ctx->lr = 0x804184A8u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_804184A8:
    ctx->downcount -= 3;
    // 804184A8: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_804184AC:
    // 804184AC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_804184B0:
    // 804184B0: bl      0x8026F968
    {
            ctx->lr = 0x804184B4u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804184B4:
    ctx->pc = 0x804184B4u;
    ctx->downcount -= 7;
    // 804184B4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804184B8:
    // 804184B8: cmpwi   r23, 0
    {
        s32 val_a = (s32)(ctx->gpr[23]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804184BC:
    // 804184BC: or   r24, r3, r3
    {
        ctx->gpr[24] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804184C0:
    // 804184C0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804184C4:
    // 804184C4: or   r0, r0, r23
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[23];
    }

label_804184C8:
    ctx->pc = 0x804184C8u;
    // 804184C8: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804184CC:
    // 804184CC: bc    12, 2, 0x80418564
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418564;
        }
    }

label_804184D0:
    ctx->downcount -= 3;
    // 804184D0: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_804184D4:
    // 804184D4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_804184D8:
    // 804184D8: bl      0x80419A44
    {
            ctx->lr = 0x804184DCu;
            goto label_80419A44;
    }

label_804184DC:
    ctx->downcount -= 5;
    // 804184DC: rlwinm r3, r3, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_804184E0:
    // 804184E0: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_804184E4:
    // 804184E4: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_804184E8:
    // 804184E8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_804184EC:
    // 804184EC: bl      0x8034E040
    {
            ctx->lr = 0x804184F0u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_804184F0:
    ctx->downcount -= 7;
    // 804184F0: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_804184F4:
    // 804184F4: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_804184F8:
    // 804184F8: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_804184FC:
    // 804184FC: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80418500:
    // 80418500: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80418504:
    // 80418504: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80418508:
    // 80418508: bl      0x8026F8C0
    {
            ctx->lr = 0x8041850Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8041850C:
    ctx->downcount -= 3;
    // 8041850C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80418510:
    // 80418510: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418514:
    // 80418514: bl      0x80419A50
    {
            ctx->lr = 0x80418518u;
            goto label_80419A50;
    }

label_80418518:
    ctx->downcount -= 2;
    // 80418518: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041851C:
    // 8041851C: bc    12, 2, 0x80418528
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418528;
        }
    }

label_80418520:
    ctx->pc = 0x80418520u;
    ctx->downcount -= 2;
    // 80418520: lfs     f31, 160(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418520u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(160);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80418524:
    // 80418524: b       0x8041852C
    {
            goto label_8041852C;
    }

label_80418528:
    ctx->pc = 0x80418528u;
    ctx->downcount -= 1;
    // 80418528: lfs     f31, 164(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418528u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_8041852C:
    ctx->downcount -= 4;
    // 8041852C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418530:
    // 80418530: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80418534:
    // 80418534: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80418538:
    // 80418538: bl      0x8026FEF0
    {
            ctx->lr = 0x8041853Cu;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_8041853C:
    ctx->downcount -= 3;
    // 8041853C: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418540:
    // 80418540: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80418544:
    // 80418544: bl      0x8026F6AC
    {
            ctx->lr = 0x80418548u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80418548:
    ctx->pc = 0x80418548u;
    ctx->downcount -= 2;
    // 80418548: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80418548u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_8041854C:
    // 8041854C: bl      0x8025EB54
    {
            ctx->lr = 0x80418550u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_80418550:
    ctx->downcount -= 3;
    // 80418550: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418554:
    // 80418554: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_80418558:
    // 80418558: bl      0x8026F6AC
    {
            ctx->lr = 0x8041855Cu;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_8041855C:
    ctx->pc = 0x8041855Cu;
    ctx->downcount -= 2;
    // 8041855C: lfs     f1, 164(r2)
    if (!ppc_fp_available_inline(ctx, 0x8041855Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(164);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80418560:
    // 80418560: bl      0x8025EBE8
    {
            ctx->lr = 0x80418564u;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_80418564:
    ctx->downcount -= 1;
    // 80418564: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80418568:
    ctx->pc = 0x80418568u;
    ctx->downcount -= 3;
    // 80418568: lwz     r0, 272(r25)
    {
        u32 ea = ctx->gpr[25] + (u32)(s32)(272);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041856C:
    // 8041856C: cmpw    r28, r0
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

label_80418570:
    // 80418570: bc    12, 0, 0x804183DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804183DCu;
                return;
            }
            goto label_804183DC;
        }
    }

label_80418574:
    ctx->downcount -= 5;
    // 80418574: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80418578:
    // 80418578: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_8041857C:
    // 8041857C: addi    r4, r4, -15400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15400);

label_80418580:
    // 80418580: addi    r4, r4, 131
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(131);

label_80418584:
    // 80418584: bl      0x8026F968
    {
            ctx->lr = 0x80418588u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80418588:
    ctx->downcount -= 3;
    // 80418588: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041858C:
    // 8041858C: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80418590:
    // 80418590: bl      0x804199F4
    {
            ctx->lr = 0x80418594u;
            goto label_804199F4;
    }

label_80418594:
    ctx->downcount -= 4;
    // 80418594: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80418598:
    // 80418598: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_8041859C:
    // 8041859C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_804185A0:
    // 804185A0: bl      0x8034E040
    {
            ctx->lr = 0x804185A4u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_804185A4:
    ctx->downcount -= 7;
    // 804185A4: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_804185A8:
    // 804185A8: addi    r3, r25, 148
    ctx->gpr[3] = ctx->gpr[25] + (u32)(s32)(148);

label_804185AC:
    // 804185AC: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_804185B0:
    // 804185B0: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_804185B4:
    // 804185B4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_804185B8:
    // 804185B8: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_804185BC:
    // 804185BC: bl      0x8026F8C0
    {
            ctx->lr = 0x804185C0u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_804185C0:
    ctx->downcount -= 4;
    // 804185C0: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_804185C4:
    ctx->pc = 0x804185C4u;
    // 804185C4: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x804185C4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x804185C4u);
        if (ctx->exception) return;
    }

label_804185C8:
    ctx->pc = 0x804185C8u;
    // 804185C8: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x804185C8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_804185CC:
    // 804185CC: bl      0x80007894
    {
            ctx->lr = 0x804185D0u;
            ctx->pc = 0x80007894u;
            return;
    }

label_804185D0:
    ctx->pc = 0x804185D0u;
    ctx->downcount -= 5;
    // 804185D0: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804185D4:
    ctx->pc = 0x804185D4u;
    // 804185D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804185D8:
    // 804185D8: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_804185DC:
    ctx->pc = 0x804185DCu;
    // 804185DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804185E0:
    ctx->pc = 0x804185E0u;
    ctx->downcount -= 11;
    // 804185E0: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804185E4:
    ctx->pc = 0x804185E4u;
    // 804185E4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804185E8:
    ctx->pc = 0x804185E8u;
    // 804185E8: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804185EC:
    ctx->pc = 0x804185ECu;
    // 804185EC: stfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x804185ECu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_804185F0:
    ctx->pc = 0x804185F0u;
    // 804185F0: psq_st   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x804185F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x804185F0u);
        if (ctx->exception) return;
    }

label_804185F4:
    // 804185F4: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_804185F8:
    ctx->pc = 0x804185F8u;
    // 804185F8: fmr    f31, f1
    if (!ppc_fp_available_inline(ctx, 0x804185F8u)) return;
    ctx->fpr[31] = ctx->fpr[1];

label_804185FC:
    // 804185FC: addi    r4, r4, -15400
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15400);

label_80418600:
    // 80418600: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80418604:
    // 80418604: addi    r4, r4, 145
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(145);

label_80418608:
    // 80418608: bl      0x8026F970
    {
            ctx->lr = 0x8041860Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8041860C:
    ctx->pc = 0x8041860Cu;
    ctx->downcount -= 20;
    // 8041860C: lwz     r0, 44(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418610:
    ctx->pc = 0x80418610u;
    // 80418610: frsp    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80418610u)) return;
    ppc_frsp(ctx, 1, 31);

label_80418614:
    ctx->pc = 0x80418614u;
    // 80418614: stw     r0, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418618:
    ctx->pc = 0x80418618u;
    // 80418618: lwz     r4, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041861C:
    ctx->pc = 0x8041861Cu;
    // 8041861C: lwz     r0, 52(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418620:
    ctx->pc = 0x80418620u;
    // 80418620: lfs     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418620u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80418624:
    ctx->pc = 0x80418624u;
    // 80418624: stfs     f0, 44(r3)
    if (!ppc_fp_available_inline(ctx, 0x80418624u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80418628:
    ctx->pc = 0x80418628u;
    // 80418628: stw     r0, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041862C:
    ctx->pc = 0x8041862Cu;
    // 8041862C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80418630:
    ctx->pc = 0x80418630u;
    // 80418630: lfs     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418630u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80418634:
    ctx->pc = 0x80418634u;
    // 80418634: stfs     f1, 48(r3)
    if (!ppc_fp_available_inline(ctx, 0x80418634u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80418638:
    ctx->pc = 0x80418638u;
    // 80418638: stfs     f0, 52(r3)
    if (!ppc_fp_available_inline(ctx, 0x80418638u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_8041863C:
    ctx->pc = 0x8041863Cu;
    // 8041863C: stfs     f31, 12(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041863Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[31]));
    }

label_80418640:
    ctx->pc = 0x80418640u;
    // 80418640: psq_l   f31, 40(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80418640u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80418640u);
        if (ctx->exception) return;
    }

label_80418644:
    ctx->pc = 0x80418644u;
    // 80418644: lfd     f31, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418644u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80418648:
    ctx->pc = 0x80418648u;
    // 80418648: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041864C:
    ctx->pc = 0x8041864Cu;
    // 8041864C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418650:
    // 80418650: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80418654:
    ctx->pc = 0x80418654u;
    // 80418654: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418658:
    ctx->downcount -= 2;
    // 80418658: cmpwi   r4, 0
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

label_8041865C:
    // 8041865C: bc    12, 2, 0x80418670
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418670;
        }
    }

label_80418660:
    ctx->pc = 0x80418660u;
    ctx->downcount -= 5;
    // 80418660: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418664:
    ctx->pc = 0x80418664u;
    // 80418664: lwz     r12, 284(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(284);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418668:
    ctx->pc = 0x80418668u;
    // 80418668: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041866C:
    ctx->pc = 0x8041866Cu;
    // 8041866C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80418670:
    ctx->pc = 0x80418670u;
    ctx->downcount -= 5;
    // 80418670: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418674:
    ctx->pc = 0x80418674u;
    // 80418674: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418678:
    ctx->pc = 0x80418678u;
    // 80418678: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041867C:
    ctx->pc = 0x8041867Cu;
    // 8041867C: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_80418680:
    ctx->pc = 0x80418680u;
    ctx->downcount -= 18;
    // 80418680: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418684:
    ctx->pc = 0x80418684u;
    // 80418684: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418688:
    // 80418688: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041868C:
    ctx->pc = 0x8041868Cu;
    // 8041868C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418690:
    ctx->pc = 0x80418690u;
    // 80418690: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418694:
    // 80418694: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418698:
    // 80418698: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041869C:
    // 8041869C: bl      0x803715C0
    {
            ctx->lr = 0x804186A0u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_804186A0:
    ctx->downcount -= 15;
    // 804186A0: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_804186A4:
    // 804186A4: lis     r3, -32664
    ctx->gpr[3] = ((u32)(s32)(-32664) << 16);

label_804186A8:
    // 804186A8: addi    r5, r5, 22752
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(22752);

label_804186AC:
    ctx->pc = 0x804186ACu;
    // 804186AC: stw     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_804186B0:
    // 804186B0: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_804186B4:
    // 804186B4: addi    r3, r3, -15400
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15400);

label_804186B8:
    // 804186B8: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_804186BC:
    // 804186BC: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_804186C0:
    ctx->pc = 0x804186C0u;
    // 804186C0: stw     r4, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_804186C4:
    // 804186C4: addi    r4, r3, 161
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(161);

label_804186C8:
    // 804186C8: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_804186CC:
    // 804186CC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_804186D0:
    ctx->pc = 0x804186D0u;
    // 804186D0: stw     r6, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_804186D4:
    ctx->pc = 0x804186D4u;
    // 804186D4: stw     r0, 152(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804186D8:
    // 804186D8: bl      0x8000E7F4
    {
            ctx->lr = 0x804186DCu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_804186DC:
    ctx->pc = 0x804186DCu;
    ctx->downcount -= 18;
    // 804186DC: stw     r31, 272(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804186E0:
    // 804186E0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804186E4:
    ctx->pc = 0x804186E4u;
    // 804186E4: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_804186E8:
    ctx->pc = 0x804186E8u;
    // 804186E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804186EC:
    ctx->pc = 0x804186ECu;
    // 804186EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804186F0:
    // 804186F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_804186F4:
    ctx->pc = 0x804186F4u;
    // 804186F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804186F8:
    ctx->pc = 0x804186F8u;
    ctx->downcount -= 18;
    // 804186F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804186FC:
    ctx->pc = 0x804186FCu;
    // 804186FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418700:
    // 80418700: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418704:
    ctx->pc = 0x80418704u;
    // 80418704: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418708:
    ctx->pc = 0x80418708u;
    // 80418708: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041870C:
    // 8041870C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418710:
    // 80418710: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80418714:
    // 80418714: bc    12, 2, 0x80418748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418748;
        }
    }

label_80418718:
    ctx->downcount -= 1;
    // 80418718: bc    12, 2, 0x80418738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418738;
        }
    }

label_8041871C:
    ctx->downcount -= 1;
    // 8041871C: bc    12, 2, 0x80418738
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418738;
        }
    }

label_80418720:
    ctx->downcount -= 3;
    // 80418720: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418724:
    // 80418724: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80418728:
    // 80418728: bl      0x801F5C24
    {
            ctx->lr = 0x8041872Cu;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_8041872C:
    ctx->downcount -= 3;
    // 8041872C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418730:
    // 80418730: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418734:
    // 80418734: bl      0x801F9C70
    {
            ctx->lr = 0x80418738u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80418738:
    ctx->downcount -= 2;
    // 80418738: cmpwi   r31, 0
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

label_8041873C:
    // 8041873C: bc    4, 1, 0x80418748
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418748;
        }
    }

label_80418740:
    ctx->downcount -= 2;
    // 80418740: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418744:
    // 80418744: bl      0x801C1C90
    {
            ctx->lr = 0x80418748u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80418748:
    ctx->downcount -= 17;
    // 80418748: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041874C:
    ctx->pc = 0x8041874Cu;
    // 8041874C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418750:
    ctx->pc = 0x80418750u;
    // 80418750: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418754:
    ctx->pc = 0x80418754u;
    // 80418754: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418758:
    // 80418758: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041875C:
    ctx->pc = 0x8041875Cu;
    // 8041875C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418760:
    ctx->downcount -= 2;
    // 80418760: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80418764:
    // 80418764: b       0x804186F8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804186F8u;
                return;
            }
            goto label_804186F8;
    }

label_80418768:
    ctx->downcount -= 2;
    // 80418768: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_8041876C:
    // 8041876C: b       0x804186F8
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804186F8u;
                return;
            }
            goto label_804186F8;
    }

label_80418770:
    ctx->pc = 0x80418770u;
    ctx->downcount -= 7;
    // 80418770: stwu     r1, -80(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-80);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418774:
    ctx->pc = 0x80418774u;
    // 80418774: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418778:
    ctx->pc = 0x80418778u;
    // 80418778: stw     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041877C:
    // 8041877C: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_80418780:
    ctx->pc = 0x80418780u;
    // 80418780: stfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418780u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80418784:
    ctx->pc = 0x80418784u;
    // 80418784: psq_st   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80418784u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80418784u);
        if (ctx->exception) return;
    }

label_80418788:
    // 80418788: bl      0x80007854
    {
            ctx->lr = 0x8041878Cu;
            ctx->pc = 0x80007854u;
            return;
    }

label_8041878C:
    ctx->downcount -= 4;
    // 8041878C: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418790:
    ctx->pc = 0x80418790u;
    // 80418790: lfs     f31, 168(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418790u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(168);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80418794:
    ctx->pc = 0x80418794u;
    // 80418794: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418798:
    // 80418798: bl      0x804182F8
    {
            ctx->lr = 0x8041879Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804182F8u;
                return;
            }
            goto label_804182F8;
    }

label_8041879C:
    ctx->pc = 0x8041879Cu;
    ctx->downcount -= 7;
    // 8041879C: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_804187A0:
    ctx->pc = 0x804187A0u;
    // 804187A0: stw     r4, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_804187A4:
    ctx->pc = 0x804187A4u;
    // 804187A4: lwz     r4, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804187A8:
    ctx->pc = 0x804187A8u;
    // 804187A8: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804187AC:
    ctx->pc = 0x804187ACu;
    // 804187AC: stw     r3, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804187B0:
    ctx->pc = 0x804187B0u;
    // 804187B0: lwz     r3, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804187B4:
    // 804187B4: bl      0x80418364
    {
            ctx->lr = 0x804187B8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418364u;
                return;
            }
            goto label_80418364;
    }

label_804187B8:
    ctx->pc = 0x804187B8u;
    ctx->downcount -= 3;
    // 804187B8: lwz     r3, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804187BC:
    // 804187BC: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_804187C0:
    // 804187C0: bl      0x80418658
    {
            ctx->lr = 0x804187C4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418658u;
                return;
            }
            goto label_80418658;
    }

label_804187C4:
    ctx->pc = 0x804187C4u;
    ctx->downcount -= 4;
    // 804187C4: lwz     r3, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804187C8:
    ctx->pc = 0x804187C8u;
    // 804187C8: lbz     r0, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804187CC:
    // 804187CC: cmpwi   r0, 0
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

label_804187D0:
    // 804187D0: bc    12, 2, 0x80418850
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418850;
        }
    }

label_804187D4:
    ctx->pc = 0x804187D4u;
    ctx->downcount -= 4;
    // 804187D4: lwz     r30, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_804187D8:
    // 804187D8: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_804187DC:
    ctx->pc = 0x804187DCu;
    // 804187DC: lwz     r29, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_804187E0:
    // 804187E0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_804187E4:
    ctx->pc = 0x804187E4u;
    ctx->downcount -= 9;
    // 804187E4: stw     r29, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_804187E8:
    // 804187E8: add   r28, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_804187EC:
    // 804187EC: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_804187F0:
    ctx->pc = 0x804187F0u;
    // 804187F0: lfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x804187F0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_804187F4:
    ctx->pc = 0x804187F4u;
    // 804187F4: stw     r30, 24(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_804187F8:
    ctx->pc = 0x804187F8u;
    // 804187F8: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x804187F8u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_804187FC:
    ctx->pc = 0x804187FCu;
    // 804187FC: stfs     f0, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x804187FCu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80418800:
    ctx->pc = 0x80418800u;
    // 80418800: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418804:
    // 80418804: bl      0x804197E8
    {
            ctx->lr = 0x80418808u;
            goto label_804197E8;
    }

label_80418808:
    ctx->pc = 0x80418808u;
    ctx->downcount -= 3;
    // 80418808: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041880C:
    // 8041880C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418810:
    // 80418810: bl      0x80419744
    {
            ctx->lr = 0x80418814u;
            goto label_80419744;
    }

label_80418814:
    ctx->pc = 0x80418814u;
    ctx->downcount -= 4;
    // 80418814: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418818:
    // 80418818: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8041881C:
    ctx->pc = 0x8041881Cu;
    // 8041881C: lwz     r5, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80418820:
    // 80418820: bl      0x804196C4
    {
            ctx->lr = 0x80418824u;
            goto label_804196C4;
    }

label_80418824:
    ctx->pc = 0x80418824u;
    ctx->downcount -= 3;
    // 80418824: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418828:
    // 80418828: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041882C:
    // 8041882C: bl      0x80419864
    {
            ctx->lr = 0x80418830u;
            goto label_80419864;
    }

label_80418830:
    ctx->pc = 0x80418830u;
    ctx->downcount -= 7;
    // 80418830: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418834:
    // 80418834: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80418838:
    // 80418838: cmpwi   r27, 2
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

label_8041883C:
    // 8041883C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418840:
    ctx->pc = 0x80418840u;
    // 80418840: lfs     f0, 288(r3)
    if (!ppc_fp_available_inline(ctx, 0x80418840u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80418844:
    ctx->pc = 0x80418844u;
    // 80418844: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x80418844u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_80418848:
    // 80418848: bc    12, 0, 0x804187E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804187E4u;
                return;
            }
            goto label_804187E4;
        }
    }

label_8041884C:
    ctx->downcount -= 1;
    // 8041884C: b       0x804188D4
    {
            goto label_804188D4;
    }

label_80418850:
    ctx->pc = 0x80418850u;
    ctx->downcount -= 5;
    // 80418850: lwz     r29, 32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80418854:
    // 80418854: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80418858:
    ctx->pc = 0x80418858u;
    // 80418858: lwz     r30, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_8041885C:
    // 8041885C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418860:
    // 80418860: b       0x804188C4
    {
            goto label_804188C4;
    }

label_80418864:
    ctx->pc = 0x80418864u;
    ctx->downcount -= 9;
    // 80418864: stw     r30, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80418868:
    // 80418868: add   r28, r26, r31
    {
        u32 a = ctx->gpr[26];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[28] = res;
    }

label_8041886C:
    // 8041886C: addi    r4, r1, 16
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(16);

label_80418870:
    ctx->pc = 0x80418870u;
    // 80418870: lfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418870u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80418874:
    ctx->pc = 0x80418874u;
    // 80418874: stw     r29, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80418878:
    ctx->pc = 0x80418878u;
    // 80418878: fsubs   f0, f0, f31
    if (!ppc_fp_available_inline(ctx, 0x80418878u)) return;
    ppc_fsubs(ctx, 0, 0, 31);

label_8041887C:
    ctx->pc = 0x8041887Cu;
    // 8041887C: stfs     f0, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041887Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80418880:
    ctx->pc = 0x80418880u;
    // 80418880: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418884:
    // 80418884: bl      0x804197E8
    {
            ctx->lr = 0x80418888u;
            goto label_804197E8;
    }

label_80418888:
    ctx->pc = 0x80418888u;
    ctx->downcount -= 3;
    // 80418888: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041888C:
    // 8041888C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418890:
    // 80418890: bl      0x80419744
    {
            ctx->lr = 0x80418894u;
            goto label_80419744;
    }

label_80418894:
    ctx->pc = 0x80418894u;
    ctx->downcount -= 4;
    // 80418894: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418898:
    // 80418898: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8041889C:
    ctx->pc = 0x8041889Cu;
    // 8041889C: lwz     r5, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_804188A0:
    // 804188A0: bl      0x804196C4
    {
            ctx->lr = 0x804188A4u;
            goto label_804196C4;
    }

label_804188A4:
    ctx->pc = 0x804188A4u;
    ctx->downcount -= 3;
    // 804188A4: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804188A8:
    // 804188A8: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_804188AC:
    // 804188AC: bl      0x80419864
    {
            ctx->lr = 0x804188B0u;
            goto label_80419864;
    }

label_804188B0:
    ctx->pc = 0x804188B0u;
    ctx->downcount -= 5;
    // 804188B0: lwz     r3, 200(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804188B4:
    // 804188B4: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_804188B8:
    // 804188B8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_804188BC:
    ctx->pc = 0x804188BCu;
    // 804188BC: lfs     f0, 288(r3)
    if (!ppc_fp_available_inline(ctx, 0x804188BCu)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(288);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_804188C0:
    ctx->pc = 0x804188C0u;
    // 804188C0: fadds   f31, f31, f0
    if (!ppc_fp_available_inline(ctx, 0x804188C0u)) return;
    ppc_fadds(ctx, 31, 31, 0);

label_804188C4:
    ctx->pc = 0x804188C4u;
    ctx->downcount -= 4;
    // 804188C4: lwz     r3, 228(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804188C8:
    ctx->pc = 0x804188C8u;
    // 804188C8: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804188CC:
    // 804188CC: cmpw    r27, r0
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

label_804188D0:
    // 804188D0: bc    12, 0, 0x80418864
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418864u;
                return;
            }
            goto label_80418864;
        }
    }

label_804188D4:
    ctx->pc = 0x804188D4u;
    ctx->downcount -= 3;
    // 804188D4: fneg    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x804188D4u)) return;
    ctx->fpr[1] = dolrecomp_f64_from_bits(dolrecomp_f64_to_bits(ctx->fpr[31]) ^ 0x8000000000000000ull);

label_804188D8:
    ctx->pc = 0x804188D8u;
    // 804188D8: lwz     r3, 196(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804188DC:
    // 804188DC: bl      0x804185E0
    {
            ctx->lr = 0x804188E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804185E0u;
                return;
            }
            goto label_804185E0;
    }

label_804188E0:
    ctx->downcount -= 4;
    // 804188E0: addi    r11, r1, 64
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(64);

label_804188E4:
    ctx->pc = 0x804188E4u;
    // 804188E4: psq_l   f31, 72(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x804188E4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(72);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x804188E4u);
        if (ctx->exception) return;
    }

label_804188E8:
    ctx->pc = 0x804188E8u;
    // 804188E8: lfd     f31, 64(r1)
    if (!ppc_fp_available_inline(ctx, 0x804188E8u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(64);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_804188EC:
    // 804188EC: bl      0x800078A0
    {
            ctx->lr = 0x804188F0u;
            ctx->pc = 0x800078A0u;
            return;
    }

label_804188F0:
    ctx->pc = 0x804188F0u;
    ctx->downcount -= 5;
    // 804188F0: lwz     r0, 84(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804188F4:
    ctx->pc = 0x804188F4u;
    // 804188F4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804188F8:
    // 804188F8: addi    r1, r1, 80
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(80);

label_804188FC:
    ctx->pc = 0x804188FCu;
    // 804188FC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418900:
    ctx->pc = 0x80418900u;
    ctx->downcount -= 5;
    // 80418900: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418904:
    ctx->pc = 0x80418904u;
    // 80418904: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418908:
    ctx->pc = 0x80418908u;
    // 80418908: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041890C:
    // 8041890C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80418910:
    // 80418910: bl      0x8000785C
    {
            ctx->lr = 0x80418914u;
            ctx->pc = 0x8000785Cu;
            return;
    }

label_80418914:
    ctx->pc = 0x80418914u;
    ctx->downcount -= 18;
    // 80418914: lwz     r0, -14312(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-14312);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418918:
    // 80418918: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041891C:
    // 8041891C: lis     r3, 17200
    ctx->gpr[3] = ((u32)(s32)(17200) << 16);

label_80418920:
    // 80418920: lis     r6, -32661
    ctx->gpr[6] = ((u32)(s32)(-32661) << 16);

label_80418924:
    // 80418924: mulli   r0, r0, 12
    ctx->gpr[0] = (u32)((s64)(s32)ctx->gpr[0] * (s64)(s32)12);

label_80418928:
    ctx->pc = 0x80418928u;
    // 80418928: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041892C:
    // 8041892C: addi    r6, r6, 19160
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(19160);

label_80418930:
    ctx->pc = 0x80418930u;
    // 80418930: lwz     r4, 84(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(84);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418934:
    ctx->pc = 0x80418934u;
    // 80418934: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418938:
    // 80418938: li      r3, 136
    ctx->gpr[3] = (u32)(s32)(136);

label_8041893C:
    // 8041893C: add   r5, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80418940:
    ctx->pc = 0x80418940u;
    // 80418940: lhzx    r30, r6, r0
    {
        u32 ea = ctx->gpr[6] + ctx->gpr[0];
        ctx->gpr[30] = mem_read16(ctx, ea);
    }

label_80418944:
    ctx->pc = 0x80418944u;
    // 80418944: lhz     r0, 2(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(2);
        ctx->gpr[0] = mem_read16(ctx, ea);
    }

label_80418948:
    // 80418948: li      r5, 4
    ctx->gpr[5] = (u32)(s32)(4);

label_8041894C:
    // 8041894C: rlwinm r29, r0, 31, 16, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 31u) & 0x0000FFFFu;
    }

label_80418950:
    // 80418950: bl      0x801C1C5C
    {
            ctx->lr = 0x80418954u;
            ctx->pc = 0x801C1C5Cu;
            return;
    }

label_80418954:
    ctx->downcount -= 3;
    // 80418954: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418958:
    // 80418958: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041895C:
    // 8041895C: bc    12, 2, 0x804189B0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804189B0;
        }
    }

label_80418960:
    ctx->pc = 0x80418960u;
    ctx->downcount -= 17;
    // 80418960: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80418964:
    // 80418964: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_80418968:
    ctx->pc = 0x80418968u;
    // 80418968: lfd     f5, 176(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418968u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(176);
        ctx->fpr[5] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_8041896C:
    // 8041896C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418970:
    ctx->pc = 0x80418970u;
    // 80418970: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418970u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80418974:
    // 80418974: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80418978:
    ctx->pc = 0x80418978u;
    // 80418978: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041897C:
    ctx->pc = 0x8041897Cu;
    // 8041897C: fsubs   f2, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x8041897Cu)) return;
    ppc_fsubs(ctx, 2, 0, 5);

label_80418980:
    ctx->pc = 0x80418980u;
    // 80418980: lfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418980u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80418984:
    ctx->pc = 0x80418984u;
    // 80418984: stw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[29]);
    }

label_80418988:
    ctx->pc = 0x80418988u;
    // 80418988: fsubs   f1, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80418988u)) return;
    ppc_fsubs(ctx, 1, 0, 5);

label_8041898C:
    ctx->pc = 0x8041898Cu;
    // 8041898C: stw     r30, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80418990:
    ctx->pc = 0x80418990u;
    // 80418990: lfd     f0, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418990u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        ctx->fpr[0] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80418994:
    ctx->pc = 0x80418994u;
    // 80418994: lfd     f3, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418994u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->fpr[3] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80418998:
    ctx->pc = 0x80418998u;
    // 80418998: fsubs   f4, f0, f5
    if (!ppc_fp_available_inline(ctx, 0x80418998u)) return;
    ppc_fsubs(ctx, 4, 0, 5);

label_8041899C:
    ctx->pc = 0x8041899Cu;
    // 8041899C: fsubs   f3, f3, f5
    if (!ppc_fp_available_inline(ctx, 0x8041899Cu)) return;
    ppc_fsubs(ctx, 3, 3, 5);

label_804189A0:
    // 804189A0: bl      0x801B849C
    {
            ctx->lr = 0x804189A4u;
            ctx->pc = 0x801B849Cu;
            return;
    }

label_804189A4:
    ctx->downcount -= 3;
    // 804189A4: lis     r3, -32661
    ctx->gpr[3] = ((u32)(s32)(-32661) << 16);

label_804189A8:
    // 804189A8: addi    r3, r3, 21336
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(21336);

label_804189AC:
    ctx->pc = 0x804189ACu;
    // 804189AC: stw     r3, 56(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(56);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_804189B0:
    ctx->pc = 0x804189B0u;
    ctx->downcount -= 4;
    // 804189B0: stw     r31, 224(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804189B4:
    ctx->pc = 0x804189B4u;
    // 804189B4: lwz     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804189B8:
    // 804189B8: cmpwi   r0, 0
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

label_804189BC:
    // 804189BC: bc    12, 2, 0x804189D0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804189D0;
        }
    }

label_804189C0:
    ctx->downcount -= 2;
    // 804189C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_804189C4:
    // 804189C4: bl      0x801D0A34
    {
            ctx->lr = 0x804189C8u;
            ctx->pc = 0x801D0A34u;
            return;
    }

label_804189C8:
    ctx->downcount -= 2;
    // 804189C8: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_804189CC:
    ctx->pc = 0x804189CCu;
    // 804189CC: stw     r0, 4(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804189D0:
    ctx->downcount -= 2;
    // 804189D0: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_804189D4:
    // 804189D4: bl      0x800078A8
    {
            ctx->lr = 0x804189D8u;
            ctx->pc = 0x800078A8u;
            return;
    }

label_804189D8:
    ctx->pc = 0x804189D8u;
    ctx->downcount -= 5;
    // 804189D8: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804189DC:
    ctx->pc = 0x804189DCu;
    // 804189DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804189E0:
    // 804189E0: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_804189E4:
    ctx->pc = 0x804189E4u;
    // 804189E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804189E8:
    ctx->pc = 0x804189E8u;
    ctx->downcount -= 17;
    // 804189E8: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804189EC:
    ctx->pc = 0x804189ECu;
    // 804189EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804189F0:
    ctx->pc = 0x804189F0u;
    // 804189F0: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804189F4:
    ctx->pc = 0x804189F4u;
    // 804189F4: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_804189F8:
    // 804189F8: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804189FC:
    // 804189FC: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_80418A00:
    // 80418A00: bl      0x801C1C48
    {
            ctx->lr = 0x80418A04u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80418A04:
    ctx->downcount -= 2;
    // 80418A04: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418A08:
    // 80418A08: bc    12, 2, 0x80418A14
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418A14;
        }
    }

label_80418A0C:
    ctx->pc = 0x80418A0Cu;
    ctx->downcount -= 2;
    // 80418A0C: lwz     r4, 232(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418A10:
    // 80418A10: bl      0x80418680
    {
            ctx->lr = 0x80418A14u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418680u;
                return;
            }
            goto label_80418680;
    }

label_80418A14:
    ctx->pc = 0x80418A14u;
    ctx->downcount -= 3;
    // 80418A14: stw     r3, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418A18:
    // 80418A18: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418A1C:
    // 80418A1C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418A20:
    ctx->downcount -= 2;
    // 80418A20: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_80418A24:
    // 80418A24: bl      0x801C1C48
    {
            ctx->lr = 0x80418A28u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80418A28:
    ctx->downcount -= 2;
    // 80418A28: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418A2C:
    // 80418A2C: bc    12, 2, 0x80418A3C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418A3C;
        }
    }

label_80418A30:
    ctx->pc = 0x80418A30u;
    ctx->downcount -= 3;
    // 80418A30: lwz     r4, 232(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418A34:
    // 80418A34: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80418A38:
    // 80418A38: bl      0x8041988C
    {
            ctx->lr = 0x80418A3Cu;
            goto label_8041988C;
    }

label_80418A3C:
    ctx->downcount -= 6;
    // 80418A3C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418A40:
    // 80418A40: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80418A44:
    // 80418A44: cmpwi   r30, 4
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

label_80418A48:
    ctx->pc = 0x80418A48u;
    // 80418A48: stw     r3, 200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418A4C:
    // 80418A4C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418A50:
    // 80418A50: bc    12, 0, 0x80418A20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418A20u;
                return;
            }
            goto label_80418A20;
        }
    }

label_80418A54:
    ctx->downcount -= 2;
    // 80418A54: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418A58:
    // 80418A58: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418A5C:
    ctx->downcount -= 2;
    // 80418A5C: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_80418A60:
    // 80418A60: bl      0x801C1C48
    {
            ctx->lr = 0x80418A64u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80418A64:
    ctx->downcount -= 2;
    // 80418A64: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418A68:
    // 80418A68: bc    12, 2, 0x80418A78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418A78;
        }
    }

label_80418A6C:
    ctx->pc = 0x80418A6Cu;
    ctx->downcount -= 3;
    // 80418A6C: lwz     r4, 232(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(232);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418A70:
    // 80418A70: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_80418A74:
    // 80418A74: bl      0x8041988C
    {
            ctx->lr = 0x80418A78u;
            goto label_8041988C;
    }

label_80418A78:
    ctx->downcount -= 6;
    // 80418A78: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418A7C:
    // 80418A7C: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80418A80:
    // 80418A80: cmpwi   r30, 2
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

label_80418A84:
    ctx->pc = 0x80418A84u;
    // 80418A84: stw     r3, 216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418A88:
    // 80418A88: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418A8C:
    // 80418A8C: bc    12, 0, 0x80418A5C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418A5Cu;
                return;
            }
            goto label_80418A5C;
        }
    }

label_80418A90:
    ctx->pc = 0x80418A90u;
    ctx->downcount -= 3;
    // 80418A90: lwz     r4, 196(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418A94:
    // 80418A94: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80418A98:
    // 80418A98: bl      0x802A6408
    {
            ctx->lr = 0x80418A9Cu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80418A9C:
    ctx->downcount -= 2;
    // 80418A9C: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418AA0:
    // 80418AA0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418AA4:
    ctx->downcount -= 4;
    // 80418AA4: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80418AA8:
    // 80418AA8: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80418AAC:
    ctx->pc = 0x80418AACu;
    // 80418AAC: lwz     r4, 200(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(200);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418AB0:
    // 80418AB0: bl      0x802A6408
    {
            ctx->lr = 0x80418AB4u;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80418AB4:
    ctx->downcount -= 4;
    // 80418AB4: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418AB8:
    // 80418AB8: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418ABC:
    // 80418ABC: cmpwi   r30, 4
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

label_80418AC0:
    // 80418AC0: bc    12, 0, 0x80418AA4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418AA4u;
                return;
            }
            goto label_80418AA4;
        }
    }

label_80418AC4:
    ctx->downcount -= 2;
    // 80418AC4: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418AC8:
    // 80418AC8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418ACC:
    ctx->downcount -= 4;
    // 80418ACC: add   r4, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80418AD0:
    // 80418AD0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80418AD4:
    ctx->pc = 0x80418AD4u;
    // 80418AD4: lwz     r4, 216(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(216);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418AD8:
    // 80418AD8: bl      0x802A6408
    {
            ctx->lr = 0x80418ADCu;
            ctx->pc = 0x802A6408u;
            return;
    }

label_80418ADC:
    ctx->downcount -= 4;
    // 80418ADC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418AE0:
    // 80418AE0: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418AE4:
    // 80418AE4: cmpwi   r30, 2
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

label_80418AE8:
    // 80418AE8: bc    12, 0, 0x80418ACC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418ACCu;
                return;
            }
            goto label_80418ACC;
        }
    }

label_80418AEC:
    ctx->pc = 0x80418AECu;
    ctx->downcount -= 16;
    // 80418AEC: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418AF0:
    ctx->pc = 0x80418AF0u;
    // 80418AF0: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418AF4:
    ctx->pc = 0x80418AF4u;
    // 80418AF4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418AF8:
    // 80418AF8: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80418AFC:
    ctx->pc = 0x80418AFCu;
    // 80418AFC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418B00:
    ctx->pc = 0x80418B00u;
    ctx->downcount -= 18;
    // 80418B00: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418B04:
    ctx->pc = 0x80418B04u;
    // 80418B04: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418B08:
    // 80418B08: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418B0C:
    ctx->pc = 0x80418B0Cu;
    // 80418B0C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418B10:
    ctx->pc = 0x80418B10u;
    // 80418B10: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418B14:
    // 80418B14: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418B18:
    ctx->pc = 0x80418B18u;
    // 80418B18: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418B1C:
    // 80418B1C: bl      0x80418658
    {
            ctx->lr = 0x80418B20u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418658u;
                return;
            }
            goto label_80418658;
    }

label_80418B20:
    ctx->downcount -= 2;
    // 80418B20: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418B24:
    // 80418B24: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418B28:
    ctx->downcount -= 4;
    // 80418B28: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80418B2C:
    // 80418B2C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418B30:
    ctx->pc = 0x80418B30u;
    // 80418B30: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418B34:
    // 80418B34: bl      0x80419864
    {
            ctx->lr = 0x80418B38u;
            goto label_80419864;
    }

label_80418B38:
    ctx->downcount -= 4;
    // 80418B38: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418B3C:
    // 80418B3C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418B40:
    // 80418B40: cmpwi   r30, 4
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

label_80418B44:
    // 80418B44: bc    12, 0, 0x80418B28
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418B28u;
                return;
            }
            goto label_80418B28;
        }
    }

label_80418B48:
    ctx->downcount -= 2;
    // 80418B48: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418B4C:
    // 80418B4C: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418B50:
    ctx->downcount -= 4;
    // 80418B50: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80418B54:
    // 80418B54: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418B58:
    ctx->pc = 0x80418B58u;
    // 80418B58: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418B5C:
    // 80418B5C: bl      0x80419864
    {
            ctx->lr = 0x80418B60u;
            goto label_80419864;
    }

label_80418B60:
    ctx->downcount -= 4;
    // 80418B60: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418B64:
    // 80418B64: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418B68:
    // 80418B68: cmpwi   r30, 2
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

label_80418B6C:
    // 80418B6C: bc    12, 0, 0x80418B50
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418B50u;
                return;
            }
            goto label_80418B50;
        }
    }

label_80418B70:
    ctx->pc = 0x80418B70u;
    ctx->downcount -= 16;
    // 80418B70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418B74:
    ctx->pc = 0x80418B74u;
    // 80418B74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418B78:
    ctx->pc = 0x80418B78u;
    // 80418B78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418B7C:
    // 80418B7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80418B80:
    ctx->pc = 0x80418B80u;
    // 80418B80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418B84:
    ctx->pc = 0x80418B84u;
    ctx->downcount -= 1;
    // 80418B84: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418B88:
    ctx->pc = 0x80418B88u;
    ctx->downcount -= 21;
    // 80418B88: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418B8C:
    ctx->pc = 0x80418B8Cu;
    // 80418B8C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418B90:
    ctx->pc = 0x80418B90u;
    // 80418B90: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418B94:
    ctx->pc = 0x80418B94u;
    // 80418B94: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418B98:
    // 80418B98: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418B9C:
    ctx->pc = 0x80418B9Cu;
    // 80418B9C: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418BA0:
    ctx->pc = 0x80418BA0u;
    // 80418BA0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418BA4:
    ctx->pc = 0x80418BA4u;
    // 80418BA4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418BA8:
    ctx->pc = 0x80418BA8u;
    // 80418BA8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80418BAC:
    ctx->pc = 0x80418BACu;
    // 80418BAC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80418BB0u;
            ctx->pc = target;
            return;
        }
    }

label_80418BB0:
    ctx->downcount -= 3;
    // 80418BB0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418BB4:
    // 80418BB4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80418BB8:
    // 80418BB8: bl      0x80296FC8
    {
            ctx->lr = 0x80418BBCu;
            ctx->pc = 0x80296FC8u;
            return;
    }

label_80418BBC:
    ctx->downcount -= 2;
    // 80418BBC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418BC0:
    // 80418BC0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418BC4:
    ctx->downcount -= 7;
    // 80418BC4: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80418BC8:
    ctx->pc = 0x80418BC8u;
    // 80418BC8: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418BCC:
    ctx->pc = 0x80418BCCu;
    // 80418BCC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418BD0:
    ctx->pc = 0x80418BD0u;
    // 80418BD0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418BD4:
    ctx->pc = 0x80418BD4u;
    // 80418BD4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80418BD8:
    ctx->pc = 0x80418BD8u;
    // 80418BD8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80418BDCu;
            ctx->pc = target;
            return;
        }
    }

label_80418BDC:
    ctx->downcount -= 3;
    // 80418BDC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418BE0:
    // 80418BE0: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80418BE4:
    // 80418BE4: bl      0x80296FC8
    {
            ctx->lr = 0x80418BE8u;
            ctx->pc = 0x80296FC8u;
            return;
    }

label_80418BE8:
    ctx->downcount -= 4;
    // 80418BE8: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418BEC:
    // 80418BEC: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418BF0:
    // 80418BF0: cmpwi   r30, 4
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

label_80418BF4:
    // 80418BF4: bc    12, 0, 0x80418BC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418BC4u;
                return;
            }
            goto label_80418BC4;
        }
    }

label_80418BF8:
    ctx->downcount -= 2;
    // 80418BF8: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80418BFC:
    // 80418BFC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_80418C00:
    ctx->downcount -= 7;
    // 80418C00: add   r3, r29, r31
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80418C04:
    ctx->pc = 0x80418C04u;
    // 80418C04: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C08:
    ctx->pc = 0x80418C08u;
    // 80418C08: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418C0C:
    ctx->pc = 0x80418C0Cu;
    // 80418C0C: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418C10:
    ctx->pc = 0x80418C10u;
    // 80418C10: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80418C14:
    ctx->pc = 0x80418C14u;
    // 80418C14: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80418C18u;
            ctx->pc = target;
            return;
        }
    }

label_80418C18:
    ctx->downcount -= 3;
    // 80418C18: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418C1C:
    // 80418C1C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80418C20:
    // 80418C20: bl      0x80296FC8
    {
            ctx->lr = 0x80418C24u;
            ctx->pc = 0x80296FC8u;
            return;
    }

label_80418C24:
    ctx->downcount -= 4;
    // 80418C24: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80418C28:
    // 80418C28: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80418C2C:
    // 80418C2C: cmpwi   r30, 2
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

label_80418C30:
    // 80418C30: bc    12, 0, 0x80418C00
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418C00u;
                return;
            }
            goto label_80418C00;
        }
    }

label_80418C34:
    ctx->pc = 0x80418C34u;
    ctx->downcount -= 16;
    // 80418C34: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418C38:
    ctx->pc = 0x80418C38u;
    // 80418C38: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418C3C:
    ctx->pc = 0x80418C3Cu;
    // 80418C3C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418C40:
    // 80418C40: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80418C44:
    ctx->pc = 0x80418C44u;
    // 80418C44: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418C48:
    ctx->pc = 0x80418C48u;
    ctx->downcount -= 28;
    // 80418C48: lwz     r9, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[9] = mem_read32(ctx, ea);
    }

label_80418C4C:
    // 80418C4C: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80418C50:
    ctx->pc = 0x80418C50u;
    // 80418C50: lwz     r3, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C54:
    // 80418C54: addi    r5, r4, 44
    ctx->gpr[5] = ctx->gpr[4] + (u32)(s32)(44);

label_80418C58:
    ctx->pc = 0x80418C58u;
    // 80418C58: stw     r3, 4(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418C5C:
    // 80418C5C: addi    r8, r9, 44
    ctx->gpr[8] = ctx->gpr[9] + (u32)(s32)(44);

label_80418C60:
    ctx->pc = 0x80418C60u;
    // 80418C60: lbz     r3, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80418C64:
    ctx->pc = 0x80418C64u;
    // 80418C64: stb     r3, 8(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80418C68:
    ctx->pc = 0x80418C68u;
    // 80418C68: lwz     r3, 12(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C6C:
    ctx->pc = 0x80418C6Cu;
    // 80418C6C: stw     r3, 12(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418C70:
    ctx->pc = 0x80418C70u;
    // 80418C70: lwz     r3, 20(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(20);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C74:
    ctx->pc = 0x80418C74u;
    // 80418C74: lwz     r6, 16(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(16);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80418C78:
    ctx->pc = 0x80418C78u;
    // 80418C78: stw     r6, 16(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80418C7C:
    ctx->pc = 0x80418C7Cu;
    // 80418C7C: stw     r3, 20(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418C80:
    ctx->pc = 0x80418C80u;
    // 80418C80: lwz     r3, 28(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(28);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C84:
    ctx->pc = 0x80418C84u;
    // 80418C84: lwz     r6, 24(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(24);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80418C88:
    ctx->pc = 0x80418C88u;
    // 80418C88: stw     r6, 24(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80418C8C:
    ctx->pc = 0x80418C8Cu;
    // 80418C8C: stw     r3, 28(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418C90:
    ctx->pc = 0x80418C90u;
    // 80418C90: lwz     r3, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418C94:
    ctx->pc = 0x80418C94u;
    // 80418C94: lwz     r6, 32(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(32);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80418C98:
    ctx->pc = 0x80418C98u;
    // 80418C98: stw     r6, 32(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80418C9C:
    ctx->pc = 0x80418C9Cu;
    // 80418C9C: stw     r3, 36(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418CA0:
    ctx->pc = 0x80418CA0u;
    // 80418CA0: lwz     r3, 44(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(44);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418CA4:
    ctx->pc = 0x80418CA4u;
    // 80418CA4: lwz     r6, 40(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(40);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80418CA8:
    ctx->pc = 0x80418CA8u;
    // 80418CA8: stw     r6, 40(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80418CAC:
    ctx->pc = 0x80418CACu;
    // 80418CAC: stw     r3, 44(r9)
    {
        u32 ea = ctx->gpr[9] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418CB0:
    ctx->pc = 0x80418CB0u;
    // 80418CB0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80418CB4:
    loop_80418CB4(ctx);
    if (ctx->pc == 0x80418CC8u) goto label_80418CC8;
    return;
label_80418CB8:
    ctx->pc = 0x80418CB8u;
    // 80418CB8: lwzu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[5] = ea;
    }

label_80418CBC:
    ctx->pc = 0x80418CBCu;
    // 80418CBC: stw     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418CC0:
    ctx->pc = 0x80418CC0u;
    // 80418CC0: stwu     r0, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[8] = ea;
    }

label_80418CC4:
    // 80418CC4: bc    16, 0, 0x80418CB4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418CB4u;
                return;
            }
            goto label_80418CB4;
        }
    }

label_80418CC8:
    ctx->pc = 0x80418CC8u;
    ctx->downcount -= 9;
    // 80418CC8: lwz     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418CCC:
    // 80418CCC: li      r0, 2
    ctx->gpr[0] = (u32)(s32)(2);

label_80418CD0:
    ctx->pc = 0x80418CD0u;
    // 80418CD0: stw     r3, 4(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418CD4:
    // 80418CD4: addi    r7, r9, 65
    ctx->gpr[7] = ctx->gpr[9] + (u32)(s32)(65);

label_80418CD8:
    // 80418CD8: addi    r6, r4, 65
    ctx->gpr[6] = ctx->gpr[4] + (u32)(s32)(65);

label_80418CDC:
    ctx->pc = 0x80418CDCu;
    // 80418CDC: lbz     r3, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80418CE0:
    ctx->pc = 0x80418CE0u;
    // 80418CE0: stb     r3, 8(r8)
    {
        u32 ea = ctx->gpr[8] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80418CE4:
    ctx->pc = 0x80418CE4u;
    // 80418CE4: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80418CE8:
    loop_80418CE8(ctx);
    if (ctx->pc == 0x80418CFCu) goto label_80418CFC;
    return;
label_80418CEC:
    ctx->pc = 0x80418CECu;
    // 80418CEC: lwzu     r0, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[6] = ea;
    }

label_80418CF0:
    ctx->pc = 0x80418CF0u;
    // 80418CF0: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418CF4:
    ctx->pc = 0x80418CF4u;
    // 80418CF4: stwu     r0, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[7] = ea;
    }

label_80418CF8:
    // 80418CF8: bc    16, 0, 0x80418CE8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418CE8u;
                return;
            }
            goto label_80418CE8;
        }
    }

label_80418CFC:
    ctx->pc = 0x80418CFCu;
    ctx->downcount -= 9;
    // 80418CFC: lwz     r3, 4(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(4);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80418D00:
    // 80418D00: li      r0, 10
    ctx->gpr[0] = (u32)(s32)(10);

label_80418D04:
    ctx->pc = 0x80418D04u;
    // 80418D04: stw     r3, 4(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418D08:
    // 80418D08: addi    r5, r9, 86
    ctx->gpr[5] = ctx->gpr[9] + (u32)(s32)(86);

label_80418D0C:
    // 80418D0C: addi    r4, r4, 86
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(86);

label_80418D10:
    ctx->pc = 0x80418D10u;
    // 80418D10: lbz     r3, 8(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80418D14:
    ctx->pc = 0x80418D14u;
    // 80418D14: stb     r3, 8(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[3]);
    }

label_80418D18:
    ctx->pc = 0x80418D18u;
    // 80418D18: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80418D1C:
    loop_80418D1C(ctx);
    if (ctx->pc == 0x80418D30u) goto label_80418D30;
    return;
label_80418D20:
    ctx->pc = 0x80418D20u;
    // 80418D20: lwzu     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
        ctx->gpr[4] = ea;
    }

label_80418D24:
    ctx->pc = 0x80418D24u;
    // 80418D24: stw     r3, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418D28:
    ctx->pc = 0x80418D28u;
    // 80418D28: stwu     r0, 8(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
        ctx->gpr[5] = ea;
    }

label_80418D2C:
    // 80418D2C: bc    16, 0, 0x80418D1C
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418D1Cu;
                return;
            }
            goto label_80418D1C;
        }
    }

label_80418D30:
    ctx->pc = 0x80418D30u;
    ctx->downcount -= 3;
    // 80418D30: lwz     r0, 4(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418D34:
    ctx->pc = 0x80418D34u;
    // 80418D34: stw     r0, 4(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418D38:
    ctx->pc = 0x80418D38u;
    // 80418D38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418D3C:
    ctx->pc = 0x80418D3Cu;
    ctx->downcount -= 6;
    // 80418D3C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418D40:
    ctx->pc = 0x80418D40u;
    // 80418D40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418D44:
    ctx->pc = 0x80418D44u;
    // 80418D44: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418D48:
    ctx->pc = 0x80418D48u;
    // 80418D48: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80418D4C:
    // 80418D4C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418D50:
    // 80418D50: bl      0x80418770
    {
            ctx->lr = 0x80418D54u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418770u;
                return;
            }
            goto label_80418770;
    }

label_80418D54:
    ctx->pc = 0x80418D54u;
    ctx->downcount -= 6;
    // 80418D54: lwz     r12, 48(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418D58:
    // 80418D58: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80418D5C:
    ctx->pc = 0x80418D5Cu;
    // 80418D5C: lwz     r12, 148(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(148);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80418D60:
    ctx->pc = 0x80418D60u;
    // 80418D60: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80418D64:
    ctx->pc = 0x80418D64u;
    // 80418D64: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80418D68u;
            ctx->pc = target;
            return;
        }
    }

label_80418D68:
    ctx->pc = 0x80418D68u;
    ctx->downcount -= 6;
    // 80418D68: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418D6C:
    ctx->pc = 0x80418D6Cu;
    // 80418D6C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80418D70:
    ctx->pc = 0x80418D70u;
    // 80418D70: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418D74:
    // 80418D74: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80418D78:
    ctx->pc = 0x80418D78u;
    // 80418D78: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418D7C:
    ctx->pc = 0x80418D7Cu;
    ctx->downcount -= 18;
    // 80418D7C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418D80:
    ctx->pc = 0x80418D80u;
    // 80418D80: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418D84:
    ctx->pc = 0x80418D84u;
    // 80418D84: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418D88:
    ctx->pc = 0x80418D88u;
    // 80418D88: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418D8C:
    // 80418D8C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80418D90:
    // 80418D90: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418D94:
    // 80418D94: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418D98:
    // 80418D98: bl      0x8037D088
    {
            ctx->lr = 0x80418D9Cu;
            ctx->pc = 0x8037D088u;
            return;
    }

label_80418D9C:
    ctx->downcount -= 12;
    // 80418D9C: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_80418DA0:
    // 80418DA0: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80418DA4:
    // 80418DA4: addi    r5, r5, 23040
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23040);

label_80418DA8:
    ctx->pc = 0x80418DA8u;
    // 80418DA8: stw     r5, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80418DAC:
    // 80418DAC: addi    r3, r5, 8
    ctx->gpr[3] = ctx->gpr[5] + (u32)(s32)(8);

label_80418DB0:
    // 80418DB0: addi    r4, r4, -15216
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15216);

label_80418DB4:
    // 80418DB4: addi    r0, r5, 120
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(120);

label_80418DB8:
    ctx->pc = 0x80418DB8u;
    // 80418DB8: stw     r3, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418DBC:
    // 80418DBC: addi    r3, r30, 52
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(52);

label_80418DC0:
    // 80418DC0: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_80418DC4:
    ctx->pc = 0x80418DC4u;
    // 80418DC4: stw     r0, 148(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418DC8:
    // 80418DC8: bl      0x8000E7F4
    {
            ctx->lr = 0x80418DCCu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_80418DCC:
    ctx->pc = 0x80418DCCu;
    ctx->downcount -= 3;
    // 80418DCC: stw     r31, 232(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80418DD0:
    // 80418DD0: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418DD4:
    // 80418DD4: bl      0x804189E8
    {
            ctx->lr = 0x80418DD8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804189E8u;
                return;
            }
            goto label_804189E8;
    }

label_80418DD8:
    ctx->downcount -= 2;
    // 80418DD8: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418DDC:
    // 80418DDC: bl      0x80418900
    {
            ctx->lr = 0x80418DE0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418900u;
                return;
            }
            goto label_80418900;
    }

label_80418DE0:
    ctx->pc = 0x80418DE0u;
    ctx->downcount -= 6;
    // 80418DE0: lwz     r4, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80418DE4:
    // 80418DE4: addi    r3, r30, 148
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(148);

label_80418DE8:
    ctx->pc = 0x80418DE8u;
    // 80418DE8: lwz     r7, 84(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(84);
        ctx->gpr[7] = mem_read32(ctx, ea);
    }

label_80418DEC:
    // 80418DEC: li      r5, 6
    ctx->gpr[5] = (u32)(s32)(6);

label_80418DF0:
    // 80418DF0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80418DF4:
    // 80418DF4: bl      0x8029720C
    {
            ctx->lr = 0x80418DF8u;
            ctx->pc = 0x8029720Cu;
            return;
    }

label_80418DF8:
    ctx->downcount -= 2;
    // 80418DF8: li      r3, 176
    ctx->gpr[3] = (u32)(s32)(176);

label_80418DFC:
    // 80418DFC: bl      0x801C1C48
    {
            ctx->lr = 0x80418E00u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_80418E00:
    ctx->downcount -= 2;
    // 80418E00: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418E04:
    // 80418E04: bc    12, 2, 0x80418E0C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418E0C;
        }
    }

label_80418E08:
    ctx->downcount -= 1;
    // 80418E08: bl      0x80419B6C
    {
            ctx->lr = 0x80418E0Cu;
            goto label_80419B6C;
    }

label_80418E0C:
    ctx->pc = 0x80418E0Cu;
    ctx->downcount -= 18;
    // 80418E0C: stw     r3, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_80418E10:
    // 80418E10: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418E14:
    ctx->pc = 0x80418E14u;
    // 80418E14: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418E18:
    ctx->pc = 0x80418E18u;
    // 80418E18: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418E1C:
    ctx->pc = 0x80418E1Cu;
    // 80418E1C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418E20:
    // 80418E20: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80418E24:
    ctx->pc = 0x80418E24u;
    // 80418E24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418E28:
    ctx->pc = 0x80418E28u;
    ctx->downcount -= 18;
    // 80418E28: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418E2C:
    ctx->pc = 0x80418E2Cu;
    // 80418E2C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418E30:
    // 80418E30: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418E34:
    ctx->pc = 0x80418E34u;
    // 80418E34: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418E38:
    ctx->pc = 0x80418E38u;
    // 80418E38: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80418E3C:
    // 80418E3C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418E40:
    // 80418E40: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80418E44:
    // 80418E44: bc    12, 2, 0x80418E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418E78;
        }
    }

label_80418E48:
    ctx->downcount -= 1;
    // 80418E48: bc    12, 2, 0x80418E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418E68;
        }
    }

label_80418E4C:
    ctx->downcount -= 1;
    // 80418E4C: bc    12, 2, 0x80418E68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418E68;
        }
    }

label_80418E50:
    ctx->downcount -= 3;
    // 80418E50: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418E54:
    // 80418E54: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80418E58:
    // 80418E58: bl      0x8037D1C0
    {
            ctx->lr = 0x80418E5Cu;
            ctx->pc = 0x8037D1C0u;
            return;
    }

label_80418E5C:
    ctx->downcount -= 3;
    // 80418E5C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418E60:
    // 80418E60: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80418E64:
    // 80418E64: bl      0x8037D158
    {
            ctx->lr = 0x80418E68u;
            ctx->pc = 0x8037D158u;
            return;
    }

label_80418E68:
    ctx->downcount -= 2;
    // 80418E68: cmpwi   r31, 0
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

label_80418E6C:
    // 80418E6C: bc    4, 1, 0x80418E78
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418E78;
        }
    }

label_80418E70:
    ctx->downcount -= 2;
    // 80418E70: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418E74:
    // 80418E74: bl      0x801C1C90
    {
            ctx->lr = 0x80418E78u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80418E78:
    ctx->downcount -= 17;
    // 80418E78: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418E7C:
    ctx->pc = 0x80418E7Cu;
    // 80418E7C: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80418E80:
    ctx->pc = 0x80418E80u;
    // 80418E80: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418E84:
    ctx->pc = 0x80418E84u;
    // 80418E84: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80418E88:
    // 80418E88: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80418E8C:
    ctx->pc = 0x80418E8Cu;
    // 80418E8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80418E90:
    ctx->downcount -= 2;
    // 80418E90: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_80418E94:
    // 80418E94: b       0x80418E28
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418E28u;
                return;
            }
            goto label_80418E28;
    }

label_80418E98:
    ctx->downcount -= 2;
    // 80418E98: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_80418E9C:
    // 80418E9C: b       0x80418B00
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418B00u;
                return;
            }
            goto label_80418B00;
    }

label_80418EA0:
    ctx->pc = 0x80418EA0u;
    ctx->downcount -= 7;
    // 80418EA0: stwu     r1, -96(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-96);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80418EA4:
    ctx->pc = 0x80418EA4u;
    // 80418EA4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80418EA8:
    ctx->pc = 0x80418EA8u;
    // 80418EA8: stw     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80418EAC:
    // 80418EAC: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80418EB0:
    ctx->pc = 0x80418EB0u;
    // 80418EB0: stfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80418EB0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[31]));
    }

label_80418EB4:
    ctx->pc = 0x80418EB4u;
    // 80418EB4: psq_st   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80418EB4u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_store_inline(ctx, 31u, ea, false, 0u, false, 0x80418EB4u);
        if (ctx->exception) return;
    }

label_80418EB8:
    // 80418EB8: bl      0x80007848
    {
            ctx->lr = 0x80418EBCu;
            ctx->pc = 0x80007848u;
            return;
    }

label_80418EBC:
    ctx->pc = 0x80418EBCu;
    ctx->downcount -= 7;
    // 80418EBC: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80418EC0:
    // 80418EC0: or   r23, r3, r3
    {
        ctx->gpr[23] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418EC4:
    // 80418EC4: or   r24, r4, r4
    {
        ctx->gpr[24] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80418EC8:
    // 80418EC8: or   r25, r5, r5
    {
        ctx->gpr[25] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80418ECC:
    // 80418ECC: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418ED0:
    // 80418ED0: li      r29, 1
    ctx->gpr[29] = (u32)(s32)(1);

label_80418ED4:
    // 80418ED4: bc    4, 2, 0x80418F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418F08;
        }
    }

label_80418ED8:
    ctx->downcount -= 3;
    // 80418ED8: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80418EDC:
    // 80418EDC: li      r4, 19
    ctx->gpr[4] = (u32)(s32)(19);

label_80418EE0:
    // 80418EE0: bl      0x80419A50
    {
            ctx->lr = 0x80418EE4u;
            goto label_80419A50;
    }

label_80418EE4:
    ctx->downcount -= 2;
    // 80418EE4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418EE8:
    // 80418EE8: bc    12, 2, 0x80418EF4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418EF4;
        }
    }

label_80418EEC:
    ctx->downcount -= 2;
    // 80418EEC: li      r29, 19
    ctx->gpr[29] = (u32)(s32)(19);

label_80418EF0:
    // 80418EF0: b       0x80418F08
    {
            goto label_80418F08;
    }

label_80418EF4:
    ctx->downcount -= 2;
    // 80418EF4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80418EF8:
    // 80418EF8: bl      0x80419A5C
    {
            ctx->lr = 0x80418EFCu;
            goto label_80419A5C;
    }

label_80418EFC:
    ctx->downcount -= 2;
    // 80418EFC: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418F00:
    // 80418F00: bc    12, 2, 0x80418F08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80418F08;
        }
    }

label_80418F04:
    ctx->downcount -= 1;
    // 80418F04: li      r29, 10
    ctx->gpr[29] = (u32)(s32)(10);

label_80418F08:
    ctx->downcount -= 4;
    // 80418F08: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_80418F0C:
    // 80418F0C: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80418F10:
    // 80418F10: addi    r31, r31, -15200
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-15200);

label_80418F14:
    // 80418F14: b       0x80419010
    {
            goto label_80419010;
    }

label_80418F18:
    ctx->downcount -= 3;
    // 80418F18: add   r27, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80418F1C:
    // 80418F1C: cmpwi   r27, 21
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418F20:
    // 80418F20: bc    12, 1, 0x8041900C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041900C;
        }
    }

label_80418F24:
    ctx->downcount -= 3;
    // 80418F24: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80418F28:
    // 80418F28: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418F2C:
    // 80418F2C: bl      0x80419A50
    {
            ctx->lr = 0x80418F30u;
            goto label_80419A50;
    }

label_80418F30:
    ctx->downcount -= 2;
    // 80418F30: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80418F34:
    // 80418F34: bc    12, 2, 0x8041900C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041900C;
        }
    }

label_80418F38:
    ctx->downcount -= 6;
    // 80418F38: or   r6, r28, r28
    {
        ctx->gpr[6] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418F3C:
    // 80418F3C: addi    r3, r1, 24
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(24);

label_80418F40:
    // 80418F40: addi    r5, r31, 13
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(13);

label_80418F44:
    // 80418F44: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_80418F48:
    // 80418F48: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80418F4C:
    // 80418F4C: bl      0x8000D074
    {
            ctx->lr = 0x80418F50u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80418F50:
    ctx->downcount -= 3;
    // 80418F50: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80418F54:
    // 80418F54: addi    r4, r1, 24
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(24);

label_80418F58:
    // 80418F58: bl      0x8026F968
    {
            ctx->lr = 0x80418F5Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80418F5C:
    ctx->downcount -= 5;
    // 80418F5C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80418F60:
    // 80418F60: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80418F64:
    // 80418F64: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418F68:
    // 80418F68: or   r5, r24, r24
    {
        ctx->gpr[5] = ctx->gpr[24] | ctx->gpr[24];
    }

label_80418F6C:
    // 80418F6C: bl      0x80419A2C
    {
            ctx->lr = 0x80418F70u;
            goto label_80419A2C;
    }

label_80418F70:
    ctx->downcount -= 6;
    // 80418F70: rlwinm r26, r3, 0, 24, 31
    {
        ctx->gpr[26] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80418F74:
    // 80418F74: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80418F78:
    // 80418F78: or   r3, r26, r26
    {
        ctx->gpr[3] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80418F7C:
    // 80418F7C: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80418F80:
    // 80418F80: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80418F84:
    // 80418F84: bl      0x8034E040
    {
            ctx->lr = 0x80418F88u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_80418F88:
    ctx->downcount -= 7;
    // 80418F88: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80418F8C:
    // 80418F8C: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80418F90:
    // 80418F90: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_80418F94:
    // 80418F94: li      r5, 51
    ctx->gpr[5] = (u32)(s32)(51);

label_80418F98:
    // 80418F98: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80418F9C:
    // 80418F9C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80418FA0:
    // 80418FA0: bl      0x8026F8C0
    {
            ctx->lr = 0x80418FA4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80418FA4:
    ctx->downcount -= 3;
    // 80418FA4: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80418FA8:
    // 80418FA8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80418FAC:
    // 80418FAC: bl      0x80419A44
    {
            ctx->lr = 0x80418FB0u;
            goto label_80419A44;
    }

label_80418FB0:
    ctx->downcount -= 3;
    // 80418FB0: rlwinm r0, r3, 0, 24, 31
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[3], 0u) & 0x000000FFu;
    }

label_80418FB4:
    // 80418FB4: cmpw    r26, r0
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

label_80418FB8:
    // 80418FB8: bc    4, 1, 0x80418FC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418FC4;
        }
    }

label_80418FBC:
    ctx->pc = 0x80418FBCu;
    ctx->downcount -= 2;
    // 80418FBC: lfs     f31, 188(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418FBCu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(188);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80418FC0:
    // 80418FC0: b       0x80418FD4
    {
            goto label_80418FD4;
    }

label_80418FC4:
    ctx->downcount -= 1;
    // 80418FC4: bc    4, 2, 0x80418FD0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80418FD0;
        }
    }

label_80418FC8:
    ctx->pc = 0x80418FC8u;
    ctx->downcount -= 2;
    // 80418FC8: lfs     f31, 192(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418FC8u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(192);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80418FCC:
    // 80418FCC: b       0x80418FD4
    {
            goto label_80418FD4;
    }

label_80418FD0:
    ctx->pc = 0x80418FD0u;
    ctx->downcount -= 1;
    // 80418FD0: lfs     f31, 184(r2)
    if (!ppc_fp_available_inline(ctx, 0x80418FD0u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[31] = value;
        ctx->ps1[31] = value;
    }

label_80418FD4:
    ctx->downcount -= 4;
    // 80418FD4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418FD8:
    // 80418FD8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80418FDC:
    // 80418FDC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80418FE0:
    // 80418FE0: bl      0x8026FEF0
    {
            ctx->lr = 0x80418FE4u;
            ctx->pc = 0x8026FEF0u;
            return;
    }

label_80418FE4:
    ctx->downcount -= 3;
    // 80418FE4: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418FE8:
    // 80418FE8: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80418FEC:
    // 80418FEC: bl      0x8026F6AC
    {
            ctx->lr = 0x80418FF0u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80418FF0:
    ctx->pc = 0x80418FF0u;
    ctx->downcount -= 2;
    // 80418FF0: fmr    f1, f31
    if (!ppc_fp_available_inline(ctx, 0x80418FF0u)) return;
    ctx->fpr[1] = ctx->fpr[31];

label_80418FF4:
    // 80418FF4: bl      0x8025EB54
    {
            ctx->lr = 0x80418FF8u;
            ctx->pc = 0x8025EB54u;
            return;
    }

label_80418FF8:
    ctx->downcount -= 3;
    // 80418FF8: or   r4, r28, r28
    {
        ctx->gpr[4] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80418FFC:
    // 80418FFC: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80419000:
    // 80419000: bl      0x8026F6AC
    {
            ctx->lr = 0x80419004u;
            ctx->pc = 0x8026F6ACu;
            return;
    }

label_80419004:
    ctx->pc = 0x80419004u;
    ctx->downcount -= 2;
    // 80419004: lfs     f1, 184(r2)
    if (!ppc_fp_available_inline(ctx, 0x80419004u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80419008:
    // 80419008: bl      0x8025EBE8
    {
            ctx->lr = 0x8041900Cu;
            ctx->pc = 0x8025EBE8u;
            return;
    }

label_8041900C:
    ctx->downcount -= 1;
    // 8041900C: addi    r28, r28, 1
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(1);

label_80419010:
    ctx->pc = 0x80419010u;
    ctx->downcount -= 3;
    // 80419010: lwz     r0, 280(r23)
    {
        u32 ea = ctx->gpr[23] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419014:
    // 80419014: cmpw    r28, r0
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

label_80419018:
    // 80419018: bc    12, 0, 0x80418F18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418F18u;
                return;
            }
            goto label_80418F18;
        }
    }

label_8041901C:
    ctx->downcount -= 5;
    // 8041901C: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80419020:
    // 80419020: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80419024:
    // 80419024: addi    r4, r4, -15200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15200);

label_80419028:
    // 80419028: addi    r4, r4, 27
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(27);

label_8041902C:
    // 8041902C: bl      0x8026F968
    {
            ctx->lr = 0x80419030u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419030:
    ctx->downcount -= 4;
    // 80419030: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419034:
    // 80419034: or   r3, r25, r25
    {
        ctx->gpr[3] = ctx->gpr[25] | ctx->gpr[25];
    }

label_80419038:
    // 80419038: or   r4, r24, r24
    {
        ctx->gpr[4] = ctx->gpr[24] | ctx->gpr[24];
    }

label_8041903C:
    // 8041903C: bl      0x804199AC
    {
            ctx->lr = 0x80419040u;
            goto label_804199AC;
    }

label_80419040:
    ctx->downcount -= 4;
    // 80419040: addi    r4, r1, 8
    ctx->gpr[4] = ctx->gpr[1] + (u32)(s32)(8);

label_80419044:
    // 80419044: li      r5, 5
    ctx->gpr[5] = (u32)(s32)(5);

label_80419048:
    // 80419048: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041904C:
    // 8041904C: bl      0x8034E040
    {
            ctx->lr = 0x80419050u;
            ctx->pc = 0x8034E040u;
            return;
    }

label_80419050:
    ctx->downcount -= 7;
    // 80419050: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419054:
    // 80419054: addi    r3, r23, 148
    ctx->gpr[3] = ctx->gpr[23] + (u32)(s32)(148);

label_80419058:
    // 80419058: addi    r7, r1, 8
    ctx->gpr[7] = ctx->gpr[1] + (u32)(s32)(8);

label_8041905C:
    // 8041905C: li      r5, 52
    ctx->gpr[5] = (u32)(s32)(52);

label_80419060:
    // 80419060: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419064:
    // 80419064: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419068:
    // 80419068: bl      0x8026F8C0
    {
            ctx->lr = 0x8041906Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8041906C:
    ctx->downcount -= 4;
    // 8041906C: addi    r11, r1, 80
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(80);

label_80419070:
    ctx->pc = 0x80419070u;
    // 80419070: psq_l   f31, 88(r1), 0, 0
    if (!ppc_fp_available_inline(ctx, 0x80419070u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(88);
        ppc_psq_load_inline(ctx, 31u, ea, false, 0u, false, 0x80419070u);
        if (ctx->exception) return;
    }

label_80419074:
    ctx->pc = 0x80419074u;
    // 80419074: lfd     f31, 80(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419074u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(80);
        ctx->fpr[31] = dolrecomp_f64_from_bits(mem_read64(ctx, ea));
    }

label_80419078:
    // 80419078: bl      0x80007894
    {
            ctx->lr = 0x8041907Cu;
            ctx->pc = 0x80007894u;
            return;
    }

label_8041907C:
    ctx->pc = 0x8041907Cu;
    ctx->downcount -= 5;
    // 8041907C: lwz     r0, 100(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(100);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419080:
    ctx->pc = 0x80419080u;
    // 80419080: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419084:
    // 80419084: addi    r1, r1, 96
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(96);

label_80419088:
    ctx->pc = 0x80419088u;
    // 80419088: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041908C:
    ctx->pc = 0x8041908Cu;
    ctx->downcount -= 19;
    // 8041908C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419090:
    ctx->pc = 0x80419090u;
    // 80419090: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419094:
    ctx->pc = 0x80419094u;
    // 80419094: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419098:
    ctx->pc = 0x80419098u;
    // 80419098: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041909C:
    // 8041909C: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_804190A0:
    // 804190A0: or   r26, r3, r3
    {
        ctx->gpr[26] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804190A4:
    // 804190A4: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_804190A8:
    // 804190A8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_804190AC:
    // 804190AC: bl      0x80419A90
    {
            ctx->lr = 0x804190B0u;
            goto label_80419A90;
    }

label_804190B0:
    ctx->downcount -= 8;
    // 804190B0: addi    r0, r3, -1
    ctx->gpr[0] = ctx->gpr[3] + (u32)(s32)(-1);

label_804190B4:
    // 804190B4: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_804190B8:
    // 804190B8: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_804190BC:
    // 804190BC: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_804190C0:
    // 804190C0: addi    r31, r31, -15200
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-15200);

label_804190C4:
    // 804190C4: rlwinm r29, r0, 27, 5, 31
    {
        ctx->gpr[29] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_804190C8:
    // 804190C8: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_804190CC:
    // 804190CC: bl      0x8026F970
    {
            ctx->lr = 0x804190D0u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_804190D0:
    ctx->pc = 0x804190D0u;
    ctx->downcount -= 7;
    // 804190D0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804190D4:
    // 804190D4: addi    r4, r31, 58
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(58);

label_804190D8:
    // 804190D8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804190DC:
    // 804190DC: or   r0, r0, r29
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[29];
    }

label_804190E0:
    ctx->pc = 0x804190E0u;
    // 804190E0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804190E4:
    // 804190E4: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_804190E8:
    // 804190E8: bl      0x8026F970
    {
            ctx->lr = 0x804190ECu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_804190EC:
    ctx->downcount -= 9;
    // 804190EC: cntlzw r0, r29
    {
        u32 v = ctx->gpr[29];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_804190F0:
    ctx->pc = 0x804190F0u;
    // 804190F0: lbz     r5, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_804190F4:
    // 804190F4: rlwinm r30, r0, 27, 5, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_804190F8:
    // 804190F8: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_804190FC:
    // 804190FC: or   r0, r30, r30
    {
        ctx->gpr[0] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419100:
    // 80419100: rlwimi r0, r5, 0, 24, 30
    {
        u32 rot = dolrecomp_rotl32(ctx->gpr[5], 0u);
        ctx->gpr[0] = (ctx->gpr[0] & ~0x000000FEu) | (rot & 0x000000FEu);
    }

label_80419104:
    ctx->pc = 0x80419104u;
    // 80419104: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419108:
    // 80419108: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_8041910C:
    // 8041910C: bl      0x8026F970
    {
            ctx->lr = 0x80419110u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80419110:
    ctx->pc = 0x80419110u;
    ctx->downcount -= 6;
    // 80419110: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419114:
    // 80419114: cmpwi   r29, 0
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

label_80419118:
    // 80419118: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8041911C:
    // 8041911C: or   r0, r0, r30
    {
        ctx->gpr[0] = ctx->gpr[0] | ctx->gpr[30];
    }

label_80419120:
    ctx->pc = 0x80419120u;
    // 80419120: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419124:
    // 80419124: bc    12, 2, 0x80419160
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419160;
        }
    }

label_80419128:
    ctx->downcount -= 4;
    // 80419128: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8041912C:
    // 8041912C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419130:
    // 80419130: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80419134:
    // 80419134: bl      0x80419ACC
    {
            ctx->lr = 0x80419138u;
            goto label_80419ACC;
    }

label_80419138:
    ctx->downcount -= 3;
    // 80419138: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041913C:
    ctx->pc = 0x8041913Cu;
    // 8041913C: lwz     r3, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419140:
    // 80419140: bl      0x8027CB94
    {
            ctx->lr = 0x80419144u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_80419144:
    ctx->downcount -= 3;
    // 80419144: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_80419148:
    // 80419148: addi    r4, r31, 86
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(86);

label_8041914C:
    // 8041914C: bl      0x8026F960
    {
            ctx->lr = 0x80419150u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80419150:
    ctx->downcount -= 3;
    // 80419150: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419154:
    ctx->pc = 0x80419154u;
    // 80419154: lwz     r3, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419158:
    // 80419158: bl      0x8027CC74
    {
            ctx->lr = 0x8041915Cu;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_8041915C:
    ctx->downcount -= 1;
    // 8041915C: b       0x804191C8
    {
            goto label_804191C8;
    }

label_80419160:
    ctx->downcount -= 4;
    // 80419160: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419164:
    // 80419164: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419168:
    // 80419168: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041916C:
    // 8041916C: bl      0x80419ACC
    {
            ctx->lr = 0x80419170u;
            goto label_80419ACC;
    }

label_80419170:
    ctx->downcount -= 3;
    // 80419170: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419174:
    ctx->pc = 0x80419174u;
    // 80419174: lwz     r3, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419178:
    // 80419178: bl      0x8027CB94
    {
            ctx->lr = 0x8041917Cu;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_8041917C:
    ctx->downcount -= 3;
    // 8041917C: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_80419180:
    // 80419180: addi    r4, r31, 100
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(100);

label_80419184:
    // 80419184: bl      0x8026F960
    {
            ctx->lr = 0x80419188u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80419188:
    ctx->downcount -= 3;
    // 80419188: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041918C:
    ctx->pc = 0x8041918Cu;
    // 8041918C: lwz     r3, 272(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419190:
    // 80419190: bl      0x8027CC74
    {
            ctx->lr = 0x80419194u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80419194:
    ctx->downcount -= 4;
    // 80419194: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419198:
    // 80419198: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8041919C:
    // 8041919C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_804191A0:
    // 804191A0: bl      0x80419ACC
    {
            ctx->lr = 0x804191A4u;
            goto label_80419ACC;
    }

label_804191A4:
    ctx->downcount -= 3;
    // 804191A4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804191A8:
    ctx->pc = 0x804191A8u;
    // 804191A8: lwz     r3, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804191AC:
    // 804191AC: bl      0x8027CB94
    {
            ctx->lr = 0x804191B0u;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_804191B0:
    ctx->downcount -= 3;
    // 804191B0: addi    r3, r26, 148
    ctx->gpr[3] = ctx->gpr[26] + (u32)(s32)(148);

label_804191B4:
    // 804191B4: addi    r4, r31, 114
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(114);

label_804191B8:
    // 804191B8: bl      0x8026F960
    {
            ctx->lr = 0x804191BCu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_804191BC:
    ctx->downcount -= 3;
    // 804191BC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804191C0:
    ctx->pc = 0x804191C0u;
    // 804191C0: lwz     r3, 276(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_804191C4:
    // 804191C4: bl      0x8027CC74
    {
            ctx->lr = 0x804191C8u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_804191C8:
    ctx->pc = 0x804191C8u;
    ctx->downcount -= 16;
    // 804191C8: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_804191CC:
    ctx->pc = 0x804191CCu;
    // 804191CC: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804191D0:
    ctx->pc = 0x804191D0u;
    // 804191D0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804191D4:
    // 804191D4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_804191D8:
    ctx->pc = 0x804191D8u;
    // 804191D8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804191DC:
    ctx->pc = 0x804191DCu;
    ctx->downcount -= 17;
    // 804191DC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804191E0:
    ctx->pc = 0x804191E0u;
    // 804191E0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804191E4:
    ctx->pc = 0x804191E4u;
    // 804191E4: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804191E8:
    ctx->pc = 0x804191E8u;
    // 804191E8: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_804191EC:
    // 804191EC: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804191F0:
    // 804191F0: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_804191F4:
    // 804191F4: bl      0x80419B18
    {
            ctx->lr = 0x804191F8u;
            goto label_80419B18;
    }

label_804191F8:
    ctx->downcount -= 6;
    // 804191F8: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_804191FC:
    // 804191FC: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419200:
    // 80419200: addi    r31, r31, -15200
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-15200);

label_80419204:
    // 80419204: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419208:
    // 80419208: addi    r4, r31, 44
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(44);

label_8041920C:
    // 8041920C: bl      0x8026F970
    {
            ctx->lr = 0x80419210u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80419210:
    ctx->pc = 0x80419210u;
    ctx->downcount -= 7;
    // 80419210: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419214:
    // 80419214: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419218:
    // 80419218: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8041921C:
    // 8041921C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80419220:
    ctx->pc = 0x80419220u;
    // 80419220: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419224:
    ctx->pc = 0x80419224u;
    // 80419224: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419228:
    // 80419228: bl      0x8027CB94
    {
            ctx->lr = 0x8041922Cu;
            ctx->pc = 0x8027CB94u;
            return;
    }

label_8041922C:
    ctx->downcount -= 3;
    // 8041922C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419230:
    // 80419230: addi    r4, r31, 86
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(86);

label_80419234:
    // 80419234: bl      0x8026F960
    {
            ctx->lr = 0x80419238u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80419238:
    ctx->downcount -= 3;
    // 80419238: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041923C:
    ctx->pc = 0x8041923Cu;
    // 8041923C: lwz     r3, 272(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(272);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419240:
    // 80419240: bl      0x8027CC74
    {
            ctx->lr = 0x80419244u;
            ctx->pc = 0x8027CC74u;
            return;
    }

label_80419244:
    ctx->pc = 0x80419244u;
    ctx->downcount -= 3;
    // 80419244: lwz     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419248:
    // 80419248: cmpwi   r0, 18
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(18);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041924C:
    // 8041924C: bc    4, 2, 0x80419280
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419280;
        }
    }

label_80419250:
    ctx->downcount -= 3;
    // 80419250: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419254:
    // 80419254: addi    r4, r31, 58
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(58);

label_80419258:
    // 80419258: bl      0x8026F970
    {
            ctx->lr = 0x8041925Cu;
            ctx->pc = 0x8026F970u;
            return;
    }

label_8041925C:
    ctx->pc = 0x8041925Cu;
    ctx->downcount -= 6;
    // 8041925C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419260:
    // 80419260: addi    r4, r31, 72
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(72);

label_80419264:
    // 80419264: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419268:
    ctx->pc = 0x80419268u;
    // 80419268: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041926C:
    // 8041926C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419270:
    // 80419270: bl      0x8026F970
    {
            ctx->lr = 0x80419274u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_80419274:
    ctx->pc = 0x80419274u;
    ctx->downcount -= 3;
    // 80419274: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419278:
    // 80419278: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_8041927C:
    ctx->pc = 0x8041927Cu;
    // 8041927C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419280:
    ctx->pc = 0x80419280u;
    ctx->downcount -= 16;
    // 80419280: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419284:
    ctx->pc = 0x80419284u;
    // 80419284: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419288:
    ctx->pc = 0x80419288u;
    // 80419288: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041928C:
    // 8041928C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80419290:
    ctx->pc = 0x80419290u;
    // 80419290: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419294:
    ctx->pc = 0x80419294u;
    ctx->downcount -= 20;
    // 80419294: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419298:
    ctx->pc = 0x80419298u;
    // 80419298: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041929C:
    ctx->pc = 0x8041929Cu;
    // 8041929C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804192A0:
    ctx->pc = 0x804192A0u;
    // 804192A0: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_804192A4:
    // 804192A4: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804192A8:
    // 804192A8: or   r27, r4, r4
    {
        ctx->gpr[27] = ctx->gpr[4] | ctx->gpr[4];
    }

label_804192AC:
    // 804192AC: or   r28, r5, r5
    {
        ctx->gpr[28] = ctx->gpr[5] | ctx->gpr[5];
    }

label_804192B0:
    ctx->pc = 0x804192B0u;
    // 804192B0: lbz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804192B4:
    // 804192B4: cmpwi   r0, 0
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

label_804192B8:
    // 804192B8: bc    12, 2, 0x80419508
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419508;
        }
    }

label_804192BC:
    ctx->downcount -= 2;
    // 804192BC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_804192C0:
    // 804192C0: bl      0x80419A90
    {
            ctx->lr = 0x804192C4u;
            goto label_80419A90;
    }

label_804192C4:
    ctx->downcount -= 2;
    // 804192C4: cmpwi   r3, 1
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

label_804192C8:
    // 804192C8: bc    4, 2, 0x804193BC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804193BC;
        }
    }

label_804192CC:
    ctx->downcount -= 4;
    // 804192CC: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_804192D0:
    // 804192D0: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_804192D4:
    // 804192D4: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_804192D8:
    // 804192D8: bl      0x80419ACC
    {
            ctx->lr = 0x804192DCu;
            goto label_80419ACC;
    }

label_804192DC:
    ctx->downcount -= 6;
    // 804192DC: lis     r30, -32664
    ctx->gpr[30] = ((u32)(s32)(-32664) << 16);

label_804192E0:
    // 804192E0: addi    r29, r3, 112
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(112);

label_804192E4:
    // 804192E4: addi    r30, r30, -15200
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-15200);

label_804192E8:
    // 804192E8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804192EC:
    // 804192EC: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_804192F0:
    // 804192F0: bl      0x8026F968
    {
            ctx->lr = 0x804192F4u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804192F4:
    ctx->pc = 0x804192F4u;
    ctx->downcount -= 11;
    // 804192F4: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804192F8:
    // 804192F8: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804192FC:
    // 804192FC: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419300:
    // 80419300: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80419304:
    // 80419304: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419308:
    // 80419308: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8041930C:
    // 8041930C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80419310:
    ctx->pc = 0x80419310u;
    // 80419310: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419314:
    // 80419314: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419318:
    // 80419318: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041931C:
    // 8041931C: bl      0x8026F8C0
    {
            ctx->lr = 0x80419320u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80419320:
    ctx->downcount -= 3;
    // 80419320: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419324:
    // 80419324: addi    r4, r30, 140
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(140);

label_80419328:
    // 80419328: bl      0x8026F968
    {
            ctx->lr = 0x8041932Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8041932C:
    ctx->pc = 0x8041932Cu;
    ctx->downcount -= 11;
    // 8041932C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419330:
    // 80419330: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419334:
    // 80419334: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419338:
    // 80419338: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_8041933C:
    // 8041933C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419340:
    // 80419340: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419344:
    // 80419344: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80419348:
    ctx->pc = 0x80419348u;
    // 80419348: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041934C:
    // 8041934C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419350:
    // 80419350: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419354:
    // 80419354: bl      0x8026F8C0
    {
            ctx->lr = 0x80419358u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80419358:
    ctx->downcount -= 3;
    // 80419358: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8041935C:
    // 8041935C: addi    r4, r30, 152
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(152);

label_80419360:
    // 80419360: bl      0x8026F968
    {
            ctx->lr = 0x80419364u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419364:
    ctx->pc = 0x80419364u;
    ctx->downcount -= 6;
    // 80419364: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419368:
    // 80419368: addi    r4, r30, 164
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(164);

label_8041936C:
    // 8041936C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419370:
    ctx->pc = 0x80419370u;
    // 80419370: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419374:
    // 80419374: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419378:
    // 80419378: bl      0x8026F968
    {
            ctx->lr = 0x8041937Cu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_8041937C:
    ctx->pc = 0x8041937Cu;
    ctx->downcount -= 6;
    // 8041937C: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419380:
    // 80419380: addi    r4, r30, 176
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(176);

label_80419384:
    // 80419384: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419388:
    ctx->pc = 0x80419388u;
    // 80419388: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041938C:
    // 8041938C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419390:
    // 80419390: bl      0x8026F968
    {
            ctx->lr = 0x80419394u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419394:
    ctx->pc = 0x80419394u;
    ctx->downcount -= 6;
    // 80419394: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419398:
    // 80419398: addi    r4, r30, 188
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(188);

label_8041939C:
    // 8041939C: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804193A0:
    ctx->pc = 0x804193A0u;
    // 804193A0: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804193A4:
    // 804193A4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804193A8:
    // 804193A8: bl      0x8026F968
    {
            ctx->lr = 0x804193ACu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804193AC:
    ctx->pc = 0x804193ACu;
    ctx->downcount -= 4;
    // 804193AC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804193B0:
    // 804193B0: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804193B4:
    ctx->pc = 0x804193B4u;
    // 804193B4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804193B8:
    // 804193B8: b       0x8041956C
    {
            goto label_8041956C;
    }

label_804193BC:
    ctx->downcount -= 2;
    // 804193BC: cmpwi   r3, 2
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

label_804193C0:
    // 804193C0: bc    4, 2, 0x8041956C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041956C;
        }
    }

label_804193C4:
    ctx->downcount -= 4;
    // 804193C4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_804193C8:
    // 804193C8: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_804193CC:
    // 804193CC: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_804193D0:
    // 804193D0: bl      0x80419ACC
    {
            ctx->lr = 0x804193D4u;
            goto label_80419ACC;
    }

label_804193D4:
    ctx->downcount -= 6;
    // 804193D4: lis     r30, -32664
    ctx->gpr[30] = ((u32)(s32)(-32664) << 16);

label_804193D8:
    // 804193D8: addi    r29, r3, 112
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(112);

label_804193DC:
    // 804193DC: addi    r30, r30, -15200
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-15200);

label_804193E0:
    // 804193E0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804193E4:
    // 804193E4: addi    r4, r30, 152
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(152);

label_804193E8:
    // 804193E8: bl      0x8026F968
    {
            ctx->lr = 0x804193ECu;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804193EC:
    ctx->pc = 0x804193ECu;
    ctx->downcount -= 11;
    // 804193EC: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804193F0:
    // 804193F0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804193F4:
    // 804193F4: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_804193F8:
    // 804193F8: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_804193FC:
    // 804193FC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419400:
    // 80419400: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419404:
    // 80419404: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80419408:
    ctx->pc = 0x80419408u;
    // 80419408: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041940C:
    // 8041940C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419410:
    // 80419410: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419414:
    // 80419414: bl      0x8026F8C0
    {
            ctx->lr = 0x80419418u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80419418:
    ctx->downcount -= 3;
    // 80419418: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8041941C:
    // 8041941C: addi    r4, r30, 164
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(164);

label_80419420:
    // 80419420: bl      0x8026F968
    {
            ctx->lr = 0x80419424u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419424:
    ctx->pc = 0x80419424u;
    ctx->downcount -= 11;
    // 80419424: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419428:
    // 80419428: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041942C:
    // 8041942C: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419430:
    // 80419430: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80419434:
    // 80419434: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419438:
    // 80419438: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8041943C:
    // 8041943C: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_80419440:
    ctx->pc = 0x80419440u;
    // 80419440: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419444:
    // 80419444: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419448:
    // 80419448: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041944C:
    // 8041944C: bl      0x8026F8C0
    {
            ctx->lr = 0x80419450u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80419450:
    ctx->downcount -= 4;
    // 80419450: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419454:
    // 80419454: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419458:
    // 80419458: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8041945C:
    // 8041945C: bl      0x80419ACC
    {
            ctx->lr = 0x80419460u;
            goto label_80419ACC;
    }

label_80419460:
    ctx->downcount -= 4;
    // 80419460: addi    r29, r3, 112
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(112);

label_80419464:
    // 80419464: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419468:
    // 80419468: addi    r4, r30, 176
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(176);

label_8041946C:
    // 8041946C: bl      0x8026F968
    {
            ctx->lr = 0x80419470u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419470:
    ctx->pc = 0x80419470u;
    ctx->downcount -= 11;
    // 80419470: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419474:
    // 80419474: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419478:
    // 80419478: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041947C:
    // 8041947C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80419480:
    // 80419480: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419484:
    // 80419484: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419488:
    // 80419488: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_8041948C:
    ctx->pc = 0x8041948Cu;
    // 8041948C: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419490:
    // 80419490: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419494:
    // 80419494: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419498:
    // 80419498: bl      0x8026F8C0
    {
            ctx->lr = 0x8041949Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8041949C:
    ctx->downcount -= 3;
    // 8041949C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804194A0:
    // 804194A0: addi    r4, r30, 188
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(188);

label_804194A4:
    // 804194A4: bl      0x8026F968
    {
            ctx->lr = 0x804194A8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804194A8:
    ctx->pc = 0x804194A8u;
    ctx->downcount -= 11;
    // 804194A8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804194AC:
    // 804194AC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804194B0:
    // 804194B0: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_804194B4:
    // 804194B4: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_804194B8:
    // 804194B8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804194BC:
    // 804194BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_804194C0:
    // 804194C0: ori     r0, r0, 0x0001
    ctx->gpr[0] = ctx->gpr[0] | 0x0001u;

label_804194C4:
    ctx->pc = 0x804194C4u;
    // 804194C4: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804194C8:
    // 804194C8: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804194CC:
    // 804194CC: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_804194D0:
    // 804194D0: bl      0x8026F8C0
    {
            ctx->lr = 0x804194D4u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_804194D4:
    ctx->downcount -= 3;
    // 804194D4: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804194D8:
    // 804194D8: addi    r4, r30, 128
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(128);

label_804194DC:
    // 804194DC: bl      0x8026F968
    {
            ctx->lr = 0x804194E0u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804194E0:
    ctx->pc = 0x804194E0u;
    ctx->downcount -= 6;
    // 804194E0: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804194E4:
    // 804194E4: addi    r4, r30, 140
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(140);

label_804194E8:
    // 804194E8: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_804194EC:
    ctx->pc = 0x804194ECu;
    // 804194EC: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_804194F0:
    // 804194F0: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_804194F4:
    // 804194F4: bl      0x8026F968
    {
            ctx->lr = 0x804194F8u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_804194F8:
    ctx->pc = 0x804194F8u;
    ctx->downcount -= 4;
    // 804194F8: lbz     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804194FC:
    // 804194FC: rlwinm r0, r0, 0, 24, 30
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 0u) & 0x000000FEu;
    }

label_80419500:
    ctx->pc = 0x80419500u;
    // 80419500: stb     r0, 187(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(187);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_80419504:
    // 80419504: b       0x8041956C
    {
            goto label_8041956C;
    }

label_80419508:
    ctx->downcount -= 2;
    // 80419508: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_8041950C:
    // 8041950C: bl      0x80419B18
    {
            ctx->lr = 0x80419510u;
            goto label_80419B18;
    }

label_80419510:
    ctx->downcount -= 6;
    // 80419510: lis     r30, -32664
    ctx->gpr[30] = ((u32)(s32)(-32664) << 16);

label_80419514:
    // 80419514: addi    r29, r3, 112
    ctx->gpr[29] = ctx->gpr[3] + (u32)(s32)(112);

label_80419518:
    // 80419518: addi    r30, r30, -15200
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(-15200);

label_8041951C:
    // 8041951C: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419520:
    // 80419520: addi    r4, r30, 200
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(200);

label_80419524:
    // 80419524: bl      0x8026F968
    {
            ctx->lr = 0x80419528u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419528:
    ctx->downcount -= 7;
    // 80419528: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041952C:
    // 8041952C: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419530:
    // 80419530: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419534:
    // 80419534: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80419538:
    // 80419538: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8041953C:
    // 8041953C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419540:
    // 80419540: bl      0x8026F8C0
    {
            ctx->lr = 0x80419544u;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_80419544:
    ctx->downcount -= 3;
    // 80419544: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_80419548:
    // 80419548: addi    r4, r30, 211
    ctx->gpr[4] = ctx->gpr[30] + (u32)(s32)(211);

label_8041954C:
    // 8041954C: bl      0x8026F968
    {
            ctx->lr = 0x80419550u;
            ctx->pc = 0x8026F968u;
            return;
    }

label_80419550:
    ctx->downcount -= 7;
    // 80419550: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419554:
    // 80419554: or   r7, r29, r29
    {
        ctx->gpr[7] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419558:
    // 80419558: addi    r3, r31, 148
    ctx->gpr[3] = ctx->gpr[31] + (u32)(s32)(148);

label_8041955C:
    // 8041955C: li      r5, 50
    ctx->gpr[5] = (u32)(s32)(50);

label_80419560:
    // 80419560: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419564:
    // 80419564: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419568:
    // 80419568: bl      0x8026F8C0
    {
            ctx->lr = 0x8041956Cu;
            ctx->pc = 0x8026F8C0u;
            return;
    }

label_8041956C:
    ctx->pc = 0x8041956Cu;
    ctx->downcount -= 16;
    // 8041956C: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419570:
    ctx->pc = 0x80419570u;
    // 80419570: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419574:
    ctx->pc = 0x80419574u;
    // 80419574: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419578:
    // 80419578: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041957C:
    ctx->pc = 0x8041957Cu;
    // 8041957C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419580:
    ctx->pc = 0x80419580u;
    ctx->downcount -= 5;
    // 80419580: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419584:
    ctx->pc = 0x80419584u;
    // 80419584: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419588:
    ctx->pc = 0x80419588u;
    // 80419588: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041958C:
    // 8041958C: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_80419590:
    // 80419590: bl      0x80007860
    {
            ctx->lr = 0x80419594u;
            ctx->pc = 0x80007860u;
            return;
    }

label_80419594:
    ctx->pc = 0x80419594u;
    ctx->downcount -= 4;
    // 80419594: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419598:
    // 80419598: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041959C:
    // 8041959C: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804195A0:
    // 804195A0: bc    4, 2, 0x80419600
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419600;
        }
    }

label_804195A4:
    ctx->pc = 0x804195A4u;
    ctx->downcount -= 3;
    // 804195A4: lbz     r0, 284(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804195A8:
    // 804195A8: cmpwi   r0, 0
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

label_804195AC:
    // 804195AC: bc    12, 2, 0x804195D8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804195D8;
        }
    }

label_804195B0:
    ctx->downcount -= 9;
    // 804195B0: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_804195B4:
    ctx->pc = 0x804195B4u;
    // 804195B4: lwz     r4, -26536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-26536);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804195B8:
    // 804195B8: addi    r5, r5, -15200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15200);

label_804195BC:
    // 804195BC: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_804195C0:
    // 804195C0: addi    r5, r5, 222
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(222);

label_804195C4:
    // 804195C4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_804195C8:
    // 804195C8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_804195CC:
    // 804195CC: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_804195D0:
    // 804195D0: bl      0x802703A8
    {
            ctx->lr = 0x804195D4u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_804195D4:
    ctx->downcount -= 1;
    // 804195D4: b       0x80419624
    {
            goto label_80419624;
    }

label_804195D8:
    ctx->downcount -= 9;
    // 804195D8: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_804195DC:
    ctx->pc = 0x804195DCu;
    // 804195DC: lwz     r4, -26536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-26536);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_804195E0:
    // 804195E0: addi    r5, r5, -15200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15200);

label_804195E4:
    // 804195E4: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_804195E8:
    // 804195E8: addi    r5, r5, 244
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(244);

label_804195EC:
    // 804195EC: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_804195F0:
    // 804195F0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_804195F4:
    // 804195F4: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_804195F8:
    // 804195F8: bl      0x802703A8
    {
            ctx->lr = 0x804195FCu;
            ctx->pc = 0x802703A8u;
            return;
    }

label_804195FC:
    ctx->downcount -= 1;
    // 804195FC: b       0x80419624
    {
            goto label_80419624;
    }

label_80419600:
    ctx->downcount -= 9;
    // 80419600: lis     r5, -32664
    ctx->gpr[5] = ((u32)(s32)(-32664) << 16);

label_80419604:
    ctx->pc = 0x80419604u;
    // 80419604: lwz     r4, -26536(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-26536);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80419608:
    // 80419608: addi    r5, r5, -15200
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-15200);

label_8041960C:
    // 8041960C: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419610:
    // 80419610: addi    r5, r5, 266
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(266);

label_80419614:
    // 80419614: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80419618:
    // 80419618: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8041961C:
    // 8041961C: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80419620:
    // 80419620: bl      0x802703A8
    {
            ctx->lr = 0x80419624u;
            ctx->pc = 0x802703A8u;
            return;
    }

label_80419624:
    ctx->downcount -= 2;
    // 80419624: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419628:
    // 80419628: bl      0x8026F6CC
    {
            ctx->lr = 0x8041962Cu;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_8041962C:
    ctx->pc = 0x8041962Cu;
    ctx->downcount -= 6;
    // 8041962C: lwz     r5, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80419630:
    // 80419630: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80419634:
    // 80419634: addi    r31, r4, -15200
    ctx->gpr[31] = ctx->gpr[4] + (u32)(s32)(-15200);

label_80419638:
    // 80419638: addi    r4, r31, 293
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(293);

label_8041963C:
    // 8041963C: addi    r5, r5, -1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(-1);

label_80419640:
    // 80419640: bl      0x8025E03C
    {
            ctx->lr = 0x80419644u;
            ctx->pc = 0x8025E03Cu;
            return;
    }

label_80419644:
    ctx->downcount -= 2;
    // 80419644: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80419648:
    // 80419648: b       0x80419684
    {
            goto label_80419684;
    }

label_8041964C:
    ctx->downcount -= 6;
    // 8041964C: or   r6, r30, r30
    {
        ctx->gpr[6] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419650:
    // 80419650: addi    r3, r1, 8
    ctx->gpr[3] = ctx->gpr[1] + (u32)(s32)(8);

label_80419654:
    // 80419654: addi    r5, r31, 304
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(304);

label_80419658:
    // 80419658: li      r4, 16
    ctx->gpr[4] = (u32)(s32)(16);

label_8041965C:
    // 8041965C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_80419660:
    // 80419660: bl      0x8000D074
    {
            ctx->lr = 0x80419664u;
            ctx->pc = 0x8000D074u;
            return;
    }

label_80419664:
    ctx->downcount -= 7;
    // 80419664: addic   r0, r30, -1
    {
        u64 a = ctx->gpr[30];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80419668:
    // 80419668: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041966C:
    // 8041966C: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419670:
    // 80419670: addi    r5, r31, 317
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(317);

label_80419674:
    // 80419674: addi    r6, r1, 8
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(8);

label_80419678:
    // 80419678: subfe   r7, r0, r30
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[30];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[7] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041967C:
    // 8041967C: bl      0x8027035C
    {
            ctx->lr = 0x80419680u;
            ctx->pc = 0x8027035Cu;
            return;
    }

label_80419680:
    ctx->downcount -= 1;
    // 80419680: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80419684:
    ctx->pc = 0x80419684u;
    ctx->downcount -= 3;
    // 80419684: lwz     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419688:
    // 80419688: cmpw    r30, r0
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

label_8041968C:
    // 8041968C: bc    12, 0, 0x8041964C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041964Cu;
                return;
            }
            goto label_8041964C;
        }
    }

label_80419690:
    ctx->downcount -= 5;
    // 80419690: lis     r4, -32664
    ctx->gpr[4] = ((u32)(s32)(-32664) << 16);

label_80419694:
    // 80419694: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419698:
    // 80419698: addi    r4, r4, -15200
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-15200);

label_8041969C:
    // 8041969C: addi    r4, r4, 328
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(328);

label_804196A0:
    // 804196A0: bl      0x8026F970
    {
            ctx->lr = 0x804196A4u;
            ctx->pc = 0x8026F970u;
            return;
    }

label_804196A4:
    ctx->pc = 0x804196A4u;
    ctx->downcount -= 4;
    // 804196A4: lfs     f0, 80(r3)
    if (!ppc_fp_available_inline(ctx, 0x804196A4u)) return;
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(80);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_804196A8:
    // 804196A8: addi    r11, r1, 48
    ctx->gpr[11] = ctx->gpr[1] + (u32)(s32)(48);

label_804196AC:
    ctx->pc = 0x804196ACu;
    // 804196AC: stfs     f0, 288(r29)
    if (!ppc_fp_available_inline(ctx, 0x804196ACu)) return;
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(288);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_804196B0:
    // 804196B0: bl      0x800078AC
    {
            ctx->lr = 0x804196B4u;
            ctx->pc = 0x800078ACu;
            return;
    }

label_804196B4:
    ctx->pc = 0x804196B4u;
    ctx->downcount -= 5;
    // 804196B4: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804196B8:
    ctx->pc = 0x804196B8u;
    // 804196B8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804196BC:
    // 804196BC: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_804196C0:
    ctx->pc = 0x804196C0u;
    // 804196C0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804196C4:
    ctx->pc = 0x804196C4u;
    ctx->downcount -= 20;
    // 804196C4: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804196C8:
    ctx->pc = 0x804196C8u;
    // 804196C8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804196CC:
    ctx->pc = 0x804196CCu;
    // 804196CC: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804196D0:
    ctx->pc = 0x804196D0u;
    // 804196D0: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_804196D4:
    // 804196D4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804196D8:
    // 804196D8: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_804196DC:
    // 804196DC: or   r31, r5, r5
    {
        ctx->gpr[31] = ctx->gpr[5] | ctx->gpr[5];
    }

label_804196E0:
    ctx->pc = 0x804196E0u;
    // 804196E0: lwz     r0, 280(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804196E4:
    // 804196E4: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_804196E8:
    // 804196E8: bc    4, 2, 0x804196F0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804196F0;
        }
    }

label_804196EC:
    ctx->downcount -= 1;
    // 804196EC: bl      0x80419294
    {
            ctx->lr = 0x804196F0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419294u;
                return;
            }
            goto label_80419294;
    }

label_804196F0:
    ctx->pc = 0x804196F0u;
    ctx->downcount -= 3;
    // 804196F0: lbz     r0, 284(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(284);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804196F4:
    // 804196F4: cmpwi   r0, 0
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

label_804196F8:
    // 804196F8: bc    12, 2, 0x80419710
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419710;
        }
    }

label_804196FC:
    ctx->downcount -= 4;
    // 804196FC: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419700:
    // 80419700: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419704:
    // 80419704: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419708:
    // 80419708: bl      0x8041908C
    {
            ctx->lr = 0x8041970Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041908Cu;
                return;
            }
            goto label_8041908C;
    }

label_8041970C:
    ctx->downcount -= 1;
    // 8041970C: b       0x80419720
    {
            goto label_80419720;
    }

label_80419710:
    ctx->downcount -= 4;
    // 80419710: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419714:
    // 80419714: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419718:
    // 80419718: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041971C:
    // 8041971C: bl      0x804191DC
    {
            ctx->lr = 0x80419720u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804191DCu;
                return;
            }
            goto label_804191DC;
    }

label_80419720:
    ctx->downcount -= 4;
    // 80419720: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419724:
    // 80419724: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419728:
    // 80419728: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041972C:
    // 8041972C: bl      0x80418EA0
    {
            ctx->lr = 0x80419730u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418EA0u;
                return;
            }
            goto label_80418EA0;
    }

label_80419730:
    ctx->pc = 0x80419730u;
    ctx->downcount -= 16;
    // 80419730: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419734:
    ctx->pc = 0x80419734u;
    // 80419734: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419738:
    ctx->pc = 0x80419738u;
    // 80419738: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041973C:
    // 8041973C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80419740:
    ctx->pc = 0x80419740u;
    // 80419740: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419744:
    ctx->pc = 0x80419744u;
    ctx->downcount -= 21;
    // 80419744: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419748:
    ctx->pc = 0x80419748u;
    // 80419748: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041974C:
    ctx->pc = 0x8041974Cu;
    // 8041974C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419750:
    ctx->pc = 0x80419750u;
    // 80419750: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80419754:
    // 80419754: lis     r31, -32664
    ctx->gpr[31] = ((u32)(s32)(-32664) << 16);

label_80419758:
    // 80419758: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041975C:
    // 8041975C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80419760:
    // 80419760: addi    r31, r31, -15200
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(-15200);

label_80419764:
    // 80419764: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80419768:
    // 80419768: addi    r4, r31, 328
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(328);

label_8041976C:
    // 8041976C: bl      0x8026F960
    {
            ctx->lr = 0x80419770u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_80419770:
    ctx->downcount -= 5;
    // 80419770: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419774:
    // 80419774: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419778:
    // 80419778: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_8041977C:
    // 8041977C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80419780:
    // 80419780: bl      0x8026F760
    {
            ctx->lr = 0x80419784u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_80419784:
    ctx->pc = 0x80419784u;
    ctx->downcount -= 3;
    // 80419784: lwz     r0, 280(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419788:
    // 80419788: cmpwi   r0, 9
    {
        s32 val_a = (s32)(ctx->gpr[0]);
        s32 val_b = (s32)(9);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041978C:
    // 8041978C: bc    4, 2, 0x804197B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_804197B4;
        }
    }

label_80419790:
    ctx->downcount -= 3;
    // 80419790: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_80419794:
    // 80419794: addi    r4, r31, 344
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(344);

label_80419798:
    // 80419798: bl      0x8026F960
    {
            ctx->lr = 0x8041979Cu;
            ctx->pc = 0x8026F960u;
            return;
    }

label_8041979C:
    ctx->downcount -= 5;
    // 8041979C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804197A0:
    // 804197A0: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804197A4:
    // 804197A4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_804197A8:
    // 804197A8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_804197AC:
    // 804197AC: bl      0x8026F760
    {
            ctx->lr = 0x804197B0u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_804197B0:
    ctx->downcount -= 1;
    // 804197B0: b       0x804197D4
    {
            goto label_804197D4;
    }

label_804197B4:
    ctx->downcount -= 3;
    // 804197B4: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_804197B8:
    // 804197B8: addi    r4, r31, 360
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(360);

label_804197BC:
    // 804197BC: bl      0x8026F960
    {
            ctx->lr = 0x804197C0u;
            ctx->pc = 0x8026F960u;
            return;
    }

label_804197C0:
    ctx->downcount -= 5;
    // 804197C0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804197C4:
    // 804197C4: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_804197C8:
    // 804197C8: addi    r3, r29, 148
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(148);

label_804197CC:
    // 804197CC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_804197D0:
    // 804197D0: bl      0x8026F760
    {
            ctx->lr = 0x804197D4u;
            ctx->pc = 0x8026F760u;
            return;
    }

label_804197D4:
    ctx->pc = 0x804197D4u;
    ctx->downcount -= 16;
    // 804197D4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_804197D8:
    ctx->pc = 0x804197D8u;
    // 804197D8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_804197DC:
    ctx->pc = 0x804197DCu;
    // 804197DC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_804197E0:
    // 804197E0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_804197E4:
    ctx->pc = 0x804197E4u;
    // 804197E4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804197E8:
    ctx->pc = 0x804197E8u;
    ctx->downcount -= 8;
    // 804197E8: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_804197EC:
    ctx->pc = 0x804197ECu;
    // 804197EC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_804197F0:
    // 804197F0: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_804197F4:
    ctx->pc = 0x804197F4u;
    // 804197F4: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804197F8:
    ctx->pc = 0x804197F8u;
    // 804197F8: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_804197FC:
    ctx->pc = 0x804197FCu;
    // 804197FC: stw     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        mem_write32(ctx, ea, (u32)ctx->gpr[30]);
    }

label_80419800:
    // 80419800: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80419804:
    // 80419804: bl      0x8026F6CC
    {
            ctx->lr = 0x80419808u;
            ctx->pc = 0x8026F6CCu;
            return;
    }

label_80419808:
    ctx->downcount -= 1;
    // 80419808: bl      0x8025CE24
    {
            ctx->lr = 0x8041980Cu;
            ctx->pc = 0x8025CE24u;
            return;
    }

label_8041980C:
    ctx->downcount -= 3;
    // 8041980C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419810:
    // 80419810: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419814:
    // 80419814: bl      0x8026087C
    {
            ctx->lr = 0x80419818u;
            ctx->pc = 0x8026087Cu;
            return;
    }

label_80419818:
    ctx->pc = 0x80419818u;
    ctx->downcount -= 20;
    // 80419818: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041981C:
    ctx->pc = 0x8041981Cu;
    // 8041981C: lfs     f0, 184(r2)
    if (!ppc_fp_available_inline(ctx, 0x8041981Cu)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(184);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_80419820:
    ctx->pc = 0x80419820u;
    // 80419820: lfs     f1, 16(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419820u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_80419824:
    ctx->pc = 0x80419824u;
    // 80419824: stw     r4, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80419828:
    ctx->pc = 0x80419828u;
    // 80419828: lfs     f2, 20(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419828u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[2] = value;
        ctx->ps1[2] = value;
    }

label_8041982C:
    ctx->pc = 0x8041982Cu;
    // 8041982C: stfs     f1, 44(r31)
    if (!ppc_fp_available_inline(ctx, 0x8041982Cu)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(44);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80419830:
    ctx->pc = 0x80419830u;
    // 80419830: stfs     f2, 48(r31)
    if (!ppc_fp_available_inline(ctx, 0x80419830u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(48);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80419834:
    ctx->pc = 0x80419834u;
    // 80419834: stfs     f0, 52(r31)
    if (!ppc_fp_available_inline(ctx, 0x80419834u)) return;
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(52);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80419838:
    ctx->pc = 0x80419838u;
    // 80419838: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041983C:
    ctx->pc = 0x8041983Cu;
    // 8041983C: lwz     r30, 40(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(40);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80419840:
    ctx->pc = 0x80419840u;
    // 80419840: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419844:
    ctx->pc = 0x80419844u;
    // 80419844: stw     r4, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_80419848:
    ctx->pc = 0x80419848u;
    // 80419848: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041984C:
    ctx->pc = 0x8041984Cu;
    // 8041984C: stfs     f1, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041984Cu)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[1]));
    }

label_80419850:
    ctx->pc = 0x80419850u;
    // 80419850: stfs     f2, 28(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419850u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[2]));
    }

label_80419854:
    ctx->pc = 0x80419854u;
    // 80419854: stfs     f0, 32(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419854u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(32);
        mem_write32(ctx, ea, dolrecomp_f32_to_bits(ctx->fpr[0]));
    }

label_80419858:
    ctx->pc = 0x80419858u;
    // 80419858: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041985C:
    // 8041985C: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_80419860:
    ctx->pc = 0x80419860u;
    // 80419860: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419864:
    ctx->downcount -= 2;
    // 80419864: cmpwi   r4, 0
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

label_80419868:
    // 80419868: bc    12, 2, 0x8041987C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041987C;
        }
    }

label_8041986C:
    ctx->pc = 0x8041986Cu;
    ctx->downcount -= 5;
    // 8041986C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419870:
    ctx->pc = 0x80419870u;
    // 80419870: lwz     r12, 284(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(284);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419874:
    ctx->pc = 0x80419874u;
    // 80419874: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419878:
    ctx->pc = 0x80419878u;
    // 80419878: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041987C:
    ctx->pc = 0x8041987Cu;
    ctx->downcount -= 5;
    // 8041987C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419880:
    ctx->pc = 0x80419880u;
    // 80419880: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419884:
    ctx->pc = 0x80419884u;
    // 80419884: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419888:
    ctx->pc = 0x80419888u;
    // 80419888: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041988C:
    ctx->pc = 0x8041988Cu;
    ctx->downcount -= 19;
    // 8041988C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419890:
    ctx->pc = 0x80419890u;
    // 80419890: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419894:
    ctx->pc = 0x80419894u;
    // 80419894: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419898:
    ctx->pc = 0x80419898u;
    // 80419898: stmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041989C:
    // 8041989C: or   r29, r5, r5
    {
        ctx->gpr[29] = ctx->gpr[5] | ctx->gpr[5];
    }

label_804198A0:
    // 804198A0: or   r27, r3, r3
    {
        ctx->gpr[27] = ctx->gpr[3] | ctx->gpr[3];
    }

label_804198A4:
    // 804198A4: or   r28, r4, r4
    {
        ctx->gpr[28] = ctx->gpr[4] | ctx->gpr[4];
    }

label_804198A8:
    // 804198A8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_804198AC:
    // 804198AC: bl      0x803715C0
    {
            ctx->lr = 0x804198B0u;
            ctx->pc = 0x803715C0u;
            return;
    }

label_804198B0:
    ctx->downcount -= 15;
    // 804198B0: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_804198B4:
    // 804198B4: lis     r3, -32664
    ctx->gpr[3] = ((u32)(s32)(-32664) << 16);

label_804198B8:
    // 804198B8: addi    r5, r5, 23216
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23216);

label_804198BC:
    ctx->pc = 0x804198BCu;
    // 804198BC: stw     r5, 48(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_804198C0:
    // 804198C0: addi    r4, r5, 8
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(8);

label_804198C4:
    // 804198C4: addi    r3, r3, -15200
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-15200);

label_804198C8:
    // 804198C8: addi    r6, r5, 120
    ctx->gpr[6] = ctx->gpr[5] + (u32)(s32)(120);

label_804198CC:
    // 804198CC: addi    r0, r5, 136
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(136);

label_804198D0:
    ctx->pc = 0x804198D0u;
    // 804198D0: stw     r4, 24(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_804198D4:
    // 804198D4: addi    r4, r3, 377
    ctx->gpr[4] = ctx->gpr[3] + (u32)(s32)(377);

label_804198D8:
    // 804198D8: addi    r3, r27, 52
    ctx->gpr[3] = ctx->gpr[27] + (u32)(s32)(52);

label_804198DC:
    // 804198DC: li      r5, 32
    ctx->gpr[5] = (u32)(s32)(32);

label_804198E0:
    ctx->pc = 0x804198E0u;
    // 804198E0: stw     r6, 148(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_804198E4:
    ctx->pc = 0x804198E4u;
    // 804198E4: stw     r0, 152(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_804198E8:
    // 804198E8: bl      0x8000E7F4
    {
            ctx->lr = 0x804198ECu;
            ctx->pc = 0x8000E7F4u;
            return;
    }

label_804198EC:
    ctx->downcount -= 2;
    // 804198EC: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_804198F0:
    // 804198F0: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_804198F4:
    ctx->downcount -= 2;
    // 804198F4: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_804198F8:
    // 804198F8: bl      0x8027CCC0
    {
            ctx->lr = 0x804198FCu;
            ctx->pc = 0x8027CCC0u;
            return;
    }

label_804198FC:
    ctx->downcount -= 6;
    // 804198FC: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80419900:
    // 80419900: add   r4, r27, r31
    {
        u32 a = ctx->gpr[27];
        u32 b = ctx->gpr[31];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80419904:
    // 80419904: cmpwi   r30, 2
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

label_80419908:
    ctx->pc = 0x80419908u;
    // 80419908: stw     r3, 272(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041990C:
    // 8041990C: addi    r31, r31, 4
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(4);

label_80419910:
    // 80419910: bc    12, 0, 0x804198F4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804198F4u;
                return;
            }
            goto label_804198F4;
        }
    }

label_80419914:
    ctx->pc = 0x80419914u;
    ctx->downcount -= 19;
    // 80419914: stw     r28, 280(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(280);
        mem_write32(ctx, ea, (u32)ctx->gpr[28]);
    }

label_80419918:
    // 80419918: or   r3, r27, r27
    {
        ctx->gpr[3] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8041991C:
    ctx->pc = 0x8041991Cu;
    // 8041991C: stb     r29, 284(r27)
    {
        u32 ea = ctx->gpr[27] + (u32)(s32)(284);
        mem_write8(ctx, ea, (u8)ctx->gpr[29]);
    }

label_80419920:
    ctx->pc = 0x80419920u;
    // 80419920: lmw     r27, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        for (u32 r = 27; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419924:
    ctx->pc = 0x80419924u;
    // 80419924: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419928:
    ctx->pc = 0x80419928u;
    // 80419928: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041992C:
    // 8041992C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80419930:
    ctx->pc = 0x80419930u;
    // 80419930: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419934:
    ctx->pc = 0x80419934u;
    ctx->downcount -= 18;
    // 80419934: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419938:
    ctx->pc = 0x80419938u;
    // 80419938: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041993C:
    // 8041993C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419940:
    ctx->pc = 0x80419940u;
    // 80419940: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419944:
    ctx->pc = 0x80419944u;
    // 80419944: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80419948:
    // 80419948: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041994C:
    // 8041994C: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_80419950:
    // 80419950: bc    12, 2, 0x80419984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419984;
        }
    }

label_80419954:
    ctx->downcount -= 1;
    // 80419954: bc    12, 2, 0x80419974
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419974;
        }
    }

label_80419958:
    ctx->downcount -= 1;
    // 80419958: bc    12, 2, 0x80419974
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419974;
        }
    }

label_8041995C:
    ctx->downcount -= 3;
    // 8041995C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80419960:
    // 80419960: addi    r3, r3, 148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(148);

label_80419964:
    // 80419964: bl      0x801F5C24
    {
            ctx->lr = 0x80419968u;
            ctx->pc = 0x801F5C24u;
            return;
    }

label_80419968:
    ctx->downcount -= 3;
    // 80419968: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041996C:
    // 8041996C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80419970:
    // 80419970: bl      0x801F9C70
    {
            ctx->lr = 0x80419974u;
            ctx->pc = 0x801F9C70u;
            return;
    }

label_80419974:
    ctx->downcount -= 2;
    // 80419974: cmpwi   r31, 0
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

label_80419978:
    // 80419978: bc    4, 1, 0x80419984
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419984;
        }
    }

label_8041997C:
    ctx->downcount -= 2;
    // 8041997C: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419980:
    // 80419980: bl      0x801C1C90
    {
            ctx->lr = 0x80419984u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80419984:
    ctx->downcount -= 17;
    // 80419984: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419988:
    ctx->pc = 0x80419988u;
    // 80419988: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041998C:
    ctx->pc = 0x8041998Cu;
    // 8041998C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419990:
    ctx->pc = 0x80419990u;
    // 80419990: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419994:
    // 80419994: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80419998:
    ctx->pc = 0x80419998u;
    // 80419998: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041999C:
    ctx->downcount -= 2;
    // 8041999C: addi    r3, r3, -24
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-24);

label_804199A0:
    // 804199A0: b       0x80419934
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419934u;
                return;
            }
            goto label_80419934;
    }

label_804199A4:
    ctx->downcount -= 2;
    // 804199A4: addi    r3, r3, -148
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(-148);

label_804199A8:
    // 804199A8: b       0x80419934
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419934u;
                return;
            }
            goto label_80419934;
    }

label_804199AC:
    ctx->downcount -= 7;
    // 804199AC: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_804199B0:
    // 804199B0: add   r6, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_804199B4:
    // 804199B4: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_804199B8:
    // 804199B8: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_804199BC:
    // 804199BC: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_804199C0:
    ctx->pc = 0x804199C0u;
    // 804199C0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_804199C4:
    ctx->downcount -= 4;
    // 804199C4: add   r5, r3, r8
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_804199C8:
    ctx->pc = 0x804199C8u;
    // 804199C8: lbz     r0, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804199CC:
    // 804199CC: cmpwi   r0, 0
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

label_804199D0:
    // 804199D0: bc    12, 2, 0x804199E0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_804199E0;
        }
    }

label_804199D4:
    ctx->downcount -= 3;
    // 804199D4: add   r5, r6, r4
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_804199D8:
    ctx->pc = 0x804199D8u;
    // 804199D8: lbz     r0, 90(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(90);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_804199DC:
    // 804199DC: add   r7, r7, r0
    {
        u32 a = ctx->gpr[7];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_804199E0:
    ctx->downcount -= 3;
    // 804199E0: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_804199E4:
    // 804199E4: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_804199E8:
    // 804199E8: bc    16, 0, 0x804199C4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804199C4u;
                return;
            }
            goto label_804199C4;
        }
    }

label_804199EC:
    ctx->downcount -= 2;
    // 804199EC: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_804199F0:
    ctx->pc = 0x804199F0u;
    // 804199F0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_804199F4:
    ctx->downcount -= 5;
    // 804199F4: li      r0, 21
    ctx->gpr[0] = (u32)(s32)(21);

label_804199F8:
    // 804199F8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_804199FC:
    // 804199FC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80419A00:
    ctx->pc = 0x80419A00u;
    // 80419A00: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419A04:
    ctx->downcount -= 4;
    // 80419A04: add   r4, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80419A08:
    ctx->pc = 0x80419A08u;
    // 80419A08: lbz     r0, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419A0C:
    // 80419A0C: cmpwi   r0, 0
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

label_80419A10:
    // 80419A10: bc    12, 2, 0x80419A1C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419A1C;
        }
    }

label_80419A14:
    ctx->pc = 0x80419A14u;
    ctx->downcount -= 2;
    // 80419A14: lbz     r0, 69(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(69);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419A18:
    // 80419A18: add   r5, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80419A1C:
    ctx->downcount -= 2;
    // 80419A1C: addi    r6, r6, 1
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(1);

label_80419A20:
    // 80419A20: bc    16, 0, 0x80419A04
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419A04u;
                return;
            }
            goto label_80419A04;
        }
    }

label_80419A24:
    ctx->downcount -= 2;
    // 80419A24: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80419A28:
    ctx->pc = 0x80419A28u;
    // 80419A28: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A2C:
    ctx->downcount -= 6;
    // 80419A2C: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80419A30:
    // 80419A30: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80419A34:
    // 80419A34: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80419A38:
    // 80419A38: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419A3C:
    ctx->pc = 0x80419A3Cu;
    // 80419A3C: lbz     r3, 90(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(90);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80419A40:
    ctx->pc = 0x80419A40u;
    // 80419A40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A44:
    ctx->downcount -= 3;
    // 80419A44: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419A48:
    ctx->pc = 0x80419A48u;
    // 80419A48: lbz     r3, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80419A4C:
    ctx->pc = 0x80419A4Cu;
    // 80419A4C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A50:
    ctx->downcount -= 3;
    // 80419A50: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419A54:
    ctx->pc = 0x80419A54u;
    // 80419A54: lbz     r3, 47(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(47);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_80419A58:
    ctx->pc = 0x80419A58u;
    // 80419A58: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A5C:
    ctx->downcount -= 4;
    // 80419A5C: li      r0, 9
    ctx->gpr[0] = (u32)(s32)(9);

label_80419A60:
    // 80419A60: li      r5, 10
    ctx->gpr[5] = (u32)(s32)(10);

label_80419A64:
    ctx->pc = 0x80419A64u;
    // 80419A64: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419A68:
    ctx->downcount -= 4;
    // 80419A68: add   r4, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80419A6C:
    ctx->pc = 0x80419A6Cu;
    // 80419A6C: lbz     r0, 47(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(47);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419A70:
    // 80419A70: cmpwi   r0, 0
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

label_80419A74:
    // 80419A74: bc    12, 2, 0x80419A80
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419A80;
        }
    }

label_80419A78:
    ctx->downcount -= 2;
    // 80419A78: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_80419A7C:
    ctx->pc = 0x80419A7Cu;
    // 80419A7C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A80:
    ctx->downcount -= 2;
    // 80419A80: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_80419A84:
    // 80419A84: bc    16, 0, 0x80419A68
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419A68u;
                return;
            }
            goto label_80419A68;
        }
    }

label_80419A88:
    ctx->downcount -= 2;
    // 80419A88: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80419A8C:
    ctx->pc = 0x80419A8Cu;
    // 80419A8C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419A90:
    ctx->pc = 0x80419A90u;
    ctx->downcount -= 7;
    // 80419A90: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419A94:
    // 80419A94: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_80419A98:
    // 80419A98: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80419A9C:
    ctx->pc = 0x80419A9Cu;
    // 80419A9C: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419AA0:
    // 80419AA0: cmpwi   r0, 0
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

label_80419AA4:
    // 80419AA4: bc    4, 1, 0x80419AC4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419AC4;
        }
    }

label_80419AA8:
    ctx->downcount -= 4;
    // 80419AA8: add   r6, r3, r5
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80419AAC:
    ctx->pc = 0x80419AACu;
    // 80419AAC: lwz     r0, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419AB0:
    // 80419AB0: cmpw    r4, r0
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

label_80419AB4:
    // 80419AB4: bc    4, 2, 0x80419ABC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419ABC;
        }
    }

label_80419AB8:
    ctx->downcount -= 1;
    // 80419AB8: addi    r7, r7, 1
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(1);

label_80419ABC:
    ctx->downcount -= 2;
    // 80419ABC: addi    r5, r5, 4
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(4);

label_80419AC0:
    // 80419AC0: bc    16, 0, 0x80419AA8
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419AA8u;
                return;
            }
            goto label_80419AA8;
        }
    }

label_80419AC4:
    ctx->downcount -= 2;
    // 80419AC4: or   r3, r7, r7
    {
        ctx->gpr[3] = ctx->gpr[7] | ctx->gpr[7];
    }

label_80419AC8:
    ctx->pc = 0x80419AC8u;
    // 80419AC8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419ACC:
    ctx->pc = 0x80419ACCu;
    ctx->downcount -= 7;
    // 80419ACC: lwz     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419AD0:
    // 80419AD0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80419AD4:
    // 80419AD4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80419AD8:
    ctx->pc = 0x80419AD8u;
    // 80419AD8: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419ADC:
    // 80419ADC: cmpwi   r0, 0
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

label_80419AE0:
    // 80419AE0: bc    4, 1, 0x80419B10
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419B10;
        }
    }

label_80419AE4:
    ctx->downcount -= 4;
    // 80419AE4: add   r7, r3, r6
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80419AE8:
    ctx->pc = 0x80419AE8u;
    // 80419AE8: lwz     r0, 32(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419AEC:
    // 80419AEC: cmpw    r4, r0
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

label_80419AF0:
    // 80419AF0: bc    4, 2, 0x80419B08
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419B08;
        }
    }

label_80419AF4:
    ctx->downcount -= 2;
    // 80419AF4: cmpw    r5, r8
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

label_80419AF8:
    // 80419AF8: bc    4, 2, 0x80419B04
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419B04;
        }
    }

label_80419AFC:
    ctx->pc = 0x80419AFCu;
    ctx->downcount -= 2;
    // 80419AFC: lwz     r3, 16(r7)
    {
        u32 ea = ctx->gpr[7] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419B00:
    ctx->pc = 0x80419B00u;
    // 80419B00: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B04:
    ctx->downcount -= 1;
    // 80419B04: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80419B08:
    ctx->downcount -= 2;
    // 80419B08: addi    r6, r6, 4
    ctx->gpr[6] = ctx->gpr[6] + (u32)(s32)(4);

label_80419B0C:
    // 80419B0C: bc    16, 0, 0x80419AE4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419AE4u;
                return;
            }
            goto label_80419AE4;
        }
    }

label_80419B10:
    ctx->downcount -= 2;
    // 80419B10: li      r3, 0
    ctx->gpr[3] = (u32)(s32)(0);

label_80419B14:
    ctx->pc = 0x80419B14u;
    // 80419B14: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B18:
    ctx->downcount -= 4;
    // 80419B18: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80419B1C:
    // 80419B1C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419B20:
    ctx->pc = 0x80419B20u;
    // 80419B20: lwz     r3, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419B24:
    ctx->pc = 0x80419B24u;
    // 80419B24: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B28:
    ctx->downcount -= 9;
    // 80419B28: addi    r0, r4, -1
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(-1);

label_80419B2C:
    // 80419B2C: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_80419B30:
    // 80419B30: add   r4, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_80419B34:
    // 80419B34: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_80419B38:
    ctx->pc = 0x80419B38u;
    // 80419B38: stb     r7, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[7]);
    }

label_80419B3C:
    // 80419B3C: add   r0, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80419B40:
    // 80419B40: add   r3, r0, r5
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419B44:
    ctx->pc = 0x80419B44u;
    // 80419B44: stb     r6, 90(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(90);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80419B48:
    ctx->pc = 0x80419B48u;
    // 80419B48: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B4C:
    ctx->downcount -= 3;
    // 80419B4C: add   r3, r4, r3
    {
        u32 a = ctx->gpr[4];
        u32 b = ctx->gpr[3];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419B50:
    ctx->pc = 0x80419B50u;
    // 80419B50: stb     r5, 68(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(68);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80419B54:
    ctx->pc = 0x80419B54u;
    // 80419B54: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B58:
    ctx->downcount -= 5;
    // 80419B58: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_80419B5C:
    // 80419B5C: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_80419B60:
    ctx->pc = 0x80419B60u;
    // 80419B60: stw     r5, 16(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80419B64:
    ctx->pc = 0x80419B64u;
    // 80419B64: stw     r6, 32(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80419B68:
    ctx->pc = 0x80419B68u;
    // 80419B68: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419B6C:
    ctx->downcount -= 12;
    // 80419B6C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_80419B70:
    // 80419B70: lis     r7, -32659
    ctx->gpr[7] = ((u32)(s32)(-32659) << 16);

label_80419B74:
    // 80419B74: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_80419B78:
    // 80419B78: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80419B7C:
    // 80419B7C: addi    r7, r7, 23504
    ctx->gpr[7] = ctx->gpr[7] + (u32)(s32)(23504);

label_80419B80:
    // 80419B80: or   r4, r5, r5
    {
        ctx->gpr[4] = ctx->gpr[5] | ctx->gpr[5];
    }

label_80419B84:
    ctx->pc = 0x80419B84u;
    // 80419B84: stw     r7, 0(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(0);
        mem_write32(ctx, ea, (u32)ctx->gpr[7]);
    }

label_80419B88:
    ctx->pc = 0x80419B88u;
    // 80419B88: stw     r6, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80419B8C:
    ctx->pc = 0x80419B8Cu;
    // 80419B8C: stb     r5, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_80419B90:
    ctx->pc = 0x80419B90u;
    // 80419B90: stw     r6, 12(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_80419B94:
    ctx->pc = 0x80419B94u;
    // 80419B94: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419B98:
    loop_80419B98(ctx);
    if (ctx->pc == 0x80419BACu) goto label_80419BAC;
    return;
label_80419B9C:
    // 80419B9C: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_80419BA0:
    ctx->pc = 0x80419BA0u;
    // 80419BA0: stw     r5, 16(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80419BA4:
    ctx->pc = 0x80419BA4u;
    // 80419BA4: stw     r5, 32(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(32);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_80419BA8:
    // 80419BA8: bc    16, 0, 0x80419B98
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B98u;
                return;
            }
            goto label_80419B98;
        }
    }

label_80419BAC:
    ctx->downcount -= 4;
    // 80419BAC: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_80419BB0:
    // 80419BB0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80419BB4:
    // 80419BB4: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_80419BB8:
    // 80419BB8: li      r0, 4
    ctx->gpr[0] = (u32)(s32)(4);

label_80419BBC:
    ctx->downcount -= 7;
    // 80419BBC: add   r5, r3, r8
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[8];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80419BC0:
    // 80419BC0: add   r7, r3, r4
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[4];
        u32 res = a + b;
        ctx->gpr[7] = res;
    }

label_80419BC4:
    ctx->pc = 0x80419BC4u;
    // 80419BC4: stb     r6, 48(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(48);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80419BC8:
    // 80419BC8: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_80419BCC:
    ctx->pc = 0x80419BCCu;
    // 80419BCC: stb     r6, 69(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(69);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80419BD0:
    ctx->pc = 0x80419BD0u;
    // 80419BD0: mtctr    r0
    ctx->ctr = ctx->gpr[0];

label_80419BD4:
    loop_80419BD4(ctx);
    if (ctx->pc == 0x80419BE4u) goto label_80419BE4;
    return;
label_80419BD8:
    // 80419BD8: addi    r9, r9, 1
    ctx->gpr[9] = ctx->gpr[9] + (u32)(s32)(1);

label_80419BDC:
    ctx->pc = 0x80419BDCu;
    // 80419BDC: stb     r6, 90(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(90);
        mem_write8(ctx, ea, (u8)ctx->gpr[6]);
    }

label_80419BE0:
    // 80419BE0: bc    16, 0, 0x80419BD4
    {
        ctx->ctr--;
        bool ctr_ok = (((ctx->ctr != 0) ? 1u : 0u) ^ 0u) != 0;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419BD4u;
                return;
            }
            goto label_80419BD4;
        }
    }

label_80419BE4:
    ctx->downcount -= 4;
    // 80419BE4: addi    r8, r8, 1
    ctx->gpr[8] = ctx->gpr[8] + (u32)(s32)(1);

label_80419BE8:
    // 80419BE8: addi    r4, r4, 4
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(4);

label_80419BEC:
    // 80419BEC: cmpwi   r8, 21
    {
        s32 val_a = (s32)(ctx->gpr[8]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419BF0:
    // 80419BF0: bc    12, 0, 0x80419BBC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419BBCu;
                return;
            }
            goto label_80419BBC;
        }
    }

label_80419BF4:
    ctx->pc = 0x80419BF4u;
    ctx->downcount -= 1;
    // 80419BF4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419BF8:
    ctx->pc = 0x80419BF8u;
    ctx->downcount -= 7;
    // 80419BF8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419BFC:
    ctx->pc = 0x80419BFCu;
    // 80419BFC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419C00:
    // 80419C00: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419C04:
    ctx->pc = 0x80419C04u;
    // 80419C04: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419C08:
    ctx->pc = 0x80419C08u;
    // 80419C08: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_80419C0C:
    // 80419C0C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419C10:
    // 80419C10: bc    12, 2, 0x80419C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419C20;
        }
    }

label_80419C14:
    ctx->downcount -= 2;
    // 80419C14: cmpwi   r4, 0
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

label_80419C18:
    // 80419C18: bc    4, 1, 0x80419C20
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419C20;
        }
    }

label_80419C1C:
    ctx->downcount -= 1;
    // 80419C1C: bl      0x801C1C90
    {
            ctx->lr = 0x80419C20u;
            ctx->pc = 0x801C1C90u;
            return;
    }

label_80419C20:
    ctx->downcount -= 7;
    // 80419C20: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419C24:
    ctx->pc = 0x80419C24u;
    // 80419C24: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_80419C28:
    ctx->pc = 0x80419C28u;
    // 80419C28: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419C2C:
    ctx->pc = 0x80419C2Cu;
    // 80419C2C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419C30:
    // 80419C30: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_80419C34:
    ctx->pc = 0x80419C34u;
    // 80419C34: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419C38:
    ctx->pc = 0x80419C38u;
    ctx->downcount -= 21;
    // 80419C38: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419C3C:
    ctx->pc = 0x80419C3Cu;
    // 80419C3C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419C40:
    ctx->pc = 0x80419C40u;
    // 80419C40: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419C44:
    ctx->pc = 0x80419C44u;
    // 80419C44: stmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80419C48:
    // 80419C48: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419C4C:
    ctx->pc = 0x80419C4Cu;
    // 80419C4C: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419C50:
    ctx->pc = 0x80419C50u;
    // 80419C50: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C54:
    ctx->pc = 0x80419C54u;
    // 80419C54: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C58:
    ctx->pc = 0x80419C58u;
    // 80419C58: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419C5C:
    ctx->pc = 0x80419C5Cu;
    // 80419C5C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419C60u;
            ctx->pc = target;
            return;
        }
    }

label_80419C60:
    ctx->downcount -= 2;
    // 80419C60: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419C64:
    // 80419C64: bc    12, 2, 0x80419CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419CB8;
        }
    }

label_80419C68:
    ctx->pc = 0x80419C68u;
    ctx->downcount -= 6;
    // 80419C68: lwz     r3, 220(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419C6C:
    ctx->pc = 0x80419C6Cu;
    // 80419C6C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C70:
    ctx->pc = 0x80419C70u;
    // 80419C70: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C74:
    ctx->pc = 0x80419C74u;
    // 80419C74: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419C78:
    ctx->pc = 0x80419C78u;
    // 80419C78: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419C7Cu;
            ctx->pc = target;
            return;
        }
    }

label_80419C7C:
    ctx->downcount -= 2;
    // 80419C7C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419C80:
    // 80419C80: bc    12, 2, 0x80419CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419CB8;
        }
    }

label_80419C84:
    ctx->pc = 0x80419C84u;
    ctx->downcount -= 6;
    // 80419C84: lwz     r3, 216(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419C88:
    ctx->pc = 0x80419C88u;
    // 80419C88: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C8C:
    ctx->pc = 0x80419C8Cu;
    // 80419C8C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419C90:
    ctx->pc = 0x80419C90u;
    // 80419C90: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419C94:
    ctx->pc = 0x80419C94u;
    // 80419C94: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419C98u;
            ctx->pc = target;
            return;
        }
    }

label_80419C98:
    ctx->downcount -= 2;
    // 80419C98: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419C9C:
    // 80419C9C: bc    12, 2, 0x80419CB8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419CB8;
        }
    }

label_80419CA0:
    ctx->pc = 0x80419CA0u;
    ctx->downcount -= 6;
    // 80419CA0: lwz     r12, 48(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419CA4:
    // 80419CA4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419CA8:
    ctx->pc = 0x80419CA8u;
    // 80419CA8: lwz     r12, 76(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(76);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419CAC:
    ctx->pc = 0x80419CACu;
    // 80419CAC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419CB0:
    ctx->pc = 0x80419CB0u;
    // 80419CB0: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419CB4u;
            ctx->pc = target;
            return;
        }
    }

label_80419CB4:
    ctx->downcount -= 1;
    // 80419CB4: b       0x80419DA4
    {
            goto label_80419DA4;
    }

label_80419CB8:
    ctx->downcount -= 2;
    // 80419CB8: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419CBC:
    // 80419CBC: bl      0x8041A0E0
    {
            ctx->lr = 0x80419CC0u;
            goto label_8041A0E0;
    }

label_80419CC0:
    ctx->pc = 0x80419CC0u;
    ctx->downcount -= 5;
    // 80419CC0: lwz     r4, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80419CC4:
    ctx->pc = 0x80419CC4u;
    // 80419CC4: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419CC8:
    ctx->pc = 0x80419CC8u;
    // 80419CC8: lbz     r31, 261(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(261);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_80419CCC:
    ctx->pc = 0x80419CCCu;
    // 80419CCC: lbz     r4, 244(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(244);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_80419CD0:
    // 80419CD0: bl      0x8041C2EC
    {
            ctx->lr = 0x80419CD4u;
            ctx->pc = 0x8041C2ECu;
            return;
    }

label_80419CD4:
    ctx->pc = 0x80419CD4u;
    ctx->downcount -= 3;
    // 80419CD4: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419CD8:
    // 80419CD8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419CDC:
    // 80419CDC: bl      0x8041C27C
    {
            ctx->lr = 0x80419CE0u;
            ctx->pc = 0x8041C27Cu;
            return;
    }

label_80419CE0:
    ctx->pc = 0x80419CE0u;
    ctx->downcount -= 5;
    // 80419CE0: lwz     r4, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80419CE4:
    // 80419CE4: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419CE8:
    ctx->pc = 0x80419CE8u;
    // 80419CE8: lbz     r30, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[30] = mem_read8(ctx, ea);
    }

label_80419CEC:
    // 80419CEC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419CF0:
    // 80419CF0: bl      0x8041A154
    {
            ctx->lr = 0x80419CF4u;
            goto label_8041A154;
    }

label_80419CF4:
    ctx->downcount -= 4;
    // 80419CF4: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419CF8:
    ctx->pc = 0x80419CF8u;
    // 80419CF8: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419CFC:
    // 80419CFC: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419D00:
    // 80419D00: bl      0x8041C62C
    {
            ctx->lr = 0x80419D04u;
            ctx->pc = 0x8041C62Cu;
            return;
    }

label_80419D04:
    ctx->pc = 0x80419D04u;
    ctx->downcount -= 2;
    // 80419D04: lwz     r3, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D08:
    // 80419D08: bl      0x8041E1D8
    {
            ctx->lr = 0x80419D0Cu;
            ctx->pc = 0x8041E1D8u;
            return;
    }

label_80419D0C:
    ctx->pc = 0x80419D0Cu;
    ctx->downcount -= 5;
    // 80419D0C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x80419D0Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_80419D10:
    ctx->pc = 0x80419D10u;
    // 80419D10: lwz     r3, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D14:
    ctx->pc = 0x80419D14u;
    // 80419D14: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x80419D14u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_80419D18:
    ctx->pc = 0x80419D18u;
    // 80419D18: lwz     r29, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_80419D1C:
    // 80419D1C: bl      0x8041E0E8
    {
            ctx->lr = 0x80419D20u;
            ctx->pc = 0x8041E0E8u;
            return;
    }

label_80419D20:
    ctx->pc = 0x80419D20u;
    ctx->downcount -= 6;
    // 80419D20: lwz     r6, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80419D24:
    // 80419D24: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419D28:
    ctx->pc = 0x80419D28u;
    // 80419D28: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D2C:
    // 80419D2C: or   r4, r29, r29
    {
        ctx->gpr[4] = ctx->gpr[29] | ctx->gpr[29];
    }

label_80419D30:
    ctx->pc = 0x80419D30u;
    // 80419D30: lbz     r6, 252(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80419D34:
    // 80419D34: bl      0x8041C55C
    {
            ctx->lr = 0x80419D38u;
            ctx->pc = 0x8041C55Cu;
            return;
    }

label_80419D38:
    ctx->downcount -= 2;
    // 80419D38: or   r3, r28, r28
    {
        ctx->gpr[3] = ctx->gpr[28] | ctx->gpr[28];
    }

label_80419D3C:
    // 80419D3C: bl      0x8041A018
    {
            ctx->lr = 0x80419D40u;
            goto label_8041A018;
    }

label_80419D40:
    ctx->pc = 0x80419D40u;
    ctx->downcount -= 4;
    // 80419D40: lwz     r3, 220(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D44:
    // 80419D44: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419D48:
    // 80419D48: or   r5, r30, r30
    {
        ctx->gpr[5] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419D4C:
    // 80419D4C: bl      0x80424B0C
    {
            ctx->lr = 0x80419D50u;
            ctx->pc = 0x80424B0Cu;
            return;
    }

label_80419D50:
    ctx->pc = 0x80419D50u;
    ctx->downcount -= 5;
    // 80419D50: lwz     r5, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80419D54:
    // 80419D54: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419D58:
    ctx->pc = 0x80419D58u;
    // 80419D58: lwz     r3, 220(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D5C:
    ctx->pc = 0x80419D5Cu;
    // 80419D5C: lbz     r5, 270(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(270);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80419D60:
    // 80419D60: bl      0x80424A7C
    {
            ctx->lr = 0x80419D64u;
            ctx->pc = 0x80424A7Cu;
            return;
    }

label_80419D64:
    ctx->pc = 0x80419D64u;
    ctx->downcount -= 5;
    // 80419D64: lbz     r0, 256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419D68:
    // 80419D68: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80419D6C:
    ctx->pc = 0x80419D6Cu;
    // 80419D6C: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D70:
    // 80419D70: cmpwi   r0, 0
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

label_80419D74:
    // 80419D74: bc    4, 2, 0x80419D88
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_80419D88;
        }
    }

label_80419D78:
    ctx->pc = 0x80419D78u;
    ctx->downcount -= 4;
    // 80419D78: lwz     r5, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80419D7C:
    ctx->pc = 0x80419D7Cu;
    // 80419D7C: lbz     r0, 269(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(269);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419D80:
    // 80419D80: cmpwi   r0, 0
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

label_80419D84:
    // 80419D84: bc    12, 2, 0x80419D8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419D8C;
        }
    }

label_80419D88:
    ctx->downcount -= 1;
    // 80419D88: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_80419D8C:
    ctx->downcount -= 1;
    // 80419D8C: bl      0x8041C39C
    {
            ctx->lr = 0x80419D90u;
            ctx->pc = 0x8041C39Cu;
            return;
    }

label_80419D90:
    ctx->pc = 0x80419D90u;
    ctx->downcount -= 5;
    // 80419D90: lbz     r0, 256(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419D94:
    ctx->pc = 0x80419D94u;
    // 80419D94: lwz     r3, 212(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419D98:
    // 80419D98: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80419D9C:
    // 80419D9C: rlwinm r4, r0, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80419DA0:
    // 80419DA0: bl      0x8041C274
    {
            ctx->lr = 0x80419DA4u;
            ctx->pc = 0x8041C274u;
            return;
    }

label_80419DA4:
    ctx->pc = 0x80419DA4u;
    ctx->downcount -= 16;
    // 80419DA4: lmw     r28, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        for (u32 r = 28; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419DA8:
    ctx->pc = 0x80419DA8u;
    // 80419DA8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419DAC:
    ctx->pc = 0x80419DACu;
    // 80419DAC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419DB0:
    // 80419DB0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80419DB4:
    ctx->pc = 0x80419DB4u;
    // 80419DB4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419DB8:
    ctx->pc = 0x80419DB8u;
    ctx->downcount -= 1;
    // 80419DB8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419DBC:
    ctx->pc = 0x80419DBCu;
    ctx->downcount -= 21;
    // 80419DBC: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419DC0:
    ctx->pc = 0x80419DC0u;
    // 80419DC0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419DC4:
    // 80419DC4: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_80419DC8:
    ctx->pc = 0x80419DC8u;
    // 80419DC8: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419DCC:
    // 80419DCC: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_80419DD0:
    ctx->pc = 0x80419DD0u;
    // 80419DD0: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80419DD4:
    // 80419DD4: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419DD8:
    ctx->pc = 0x80419DD8u;
    // 80419DD8: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80419DDC:
    // 80419DDC: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_80419DE0:
    // 80419DE0: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_80419DE4:
    // 80419DE4: bl      0x80370BD4
    {
            ctx->lr = 0x80419DE8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_80419DE8:
    ctx->pc = 0x80419DE8u;
    ctx->downcount -= 12;
    // 80419DE8: lwz     r30, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80419DEC:
    // 80419DEC: li      r27, 0
    ctx->gpr[27] = (u32)(s32)(0);

label_80419DF0:
    ctx->pc = 0x80419DF0u;
    // 80419DF0: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419DF4:
    // 80419DF4: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80419DF8:
    ctx->pc = 0x80419DF8u;
    // 80419DF8: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419DFC:
    ctx->pc = 0x80419DFCu;
    // 80419DFC: stw     r0, 4(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(4);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419E00:
    ctx->pc = 0x80419E00u;
    // 80419E00: lwz     r0, 32(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(32);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419E04:
    ctx->pc = 0x80419E04u;
    // 80419E04: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419E08:
    // 80419E08: cntlzw r0, r0
    {
        u32 v = ctx->gpr[0];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[0] = n;
    }

label_80419E0C:
    // 80419E0C: rlwinm r31, r0, 27, 5, 31
    {
        ctx->gpr[31] = dolrecomp_rotl32(ctx->gpr[0], 27u) & 0x07FFFFFFu;
    }

label_80419E10:
    ctx->pc = 0x80419E10u;
    // 80419E10: stb     r31, 8(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(8);
        mem_write8(ctx, ea, (u8)ctx->gpr[31]);
    }

label_80419E14:
    // 80419E14: b       0x80419E44
    {
            goto label_80419E44;
    }

label_80419E18:
    ctx->downcount -= 3;
    // 80419E18: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419E1C:
    // 80419E1C: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419E20:
    // 80419E20: bl      0x8026A31C
    {
            ctx->lr = 0x80419E24u;
            ctx->pc = 0x8026A31Cu;
            return;
    }

label_80419E24:
    ctx->downcount -= 6;
    // 80419E24: add   r5, r29, r28
    {
        u32 a = ctx->gpr[29];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80419E28:
    // 80419E28: or   r6, r3, r3
    {
        ctx->gpr[6] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419E2C:
    ctx->pc = 0x80419E2Cu;
    // 80419E2C: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419E30:
    // 80419E30: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419E34:
    ctx->pc = 0x80419E34u;
    // 80419E34: lwz     r5, 168(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(168);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_80419E38:
    // 80419E38: bl      0x80419B58
    {
            ctx->lr = 0x80419E3Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B58u;
                return;
            }
            goto label_80419B58;
    }

label_80419E3C:
    ctx->downcount -= 2;
    // 80419E3C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80419E40:
    // 80419E40: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_80419E44:
    ctx->pc = 0x80419E44u;
    ctx->downcount -= 3;
    // 80419E44: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419E48:
    // 80419E48: cmpw    r27, r0
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

label_80419E4C:
    // 80419E4C: bc    12, 0, 0x80419E18
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419E18u;
                return;
            }
            goto label_80419E18;
        }
    }

label_80419E50:
    ctx->downcount -= 1;
    // 80419E50: li      r27, 1
    ctx->gpr[27] = (u32)(s32)(1);

label_80419E54:
    ctx->pc = 0x80419E54u;
    ctx->downcount -= 6;
    // 80419E54: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419E58:
    // 80419E58: or   r4, r27, r27
    {
        ctx->gpr[4] = ctx->gpr[27] | ctx->gpr[27];
    }

label_80419E5C:
    ctx->pc = 0x80419E5Cu;
    // 80419E5C: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419E60:
    // 80419E60: add   r5, r0, r27
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[27];
        u32 res = a + b;
        ctx->gpr[5] = res;
    }

label_80419E64:
    ctx->pc = 0x80419E64u;
    // 80419E64: lbz     r5, 132(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(132);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_80419E68:
    // 80419E68: bl      0x80419B4C
    {
            ctx->lr = 0x80419E6Cu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B4Cu;
                return;
            }
            goto label_80419B4C;
    }

label_80419E6C:
    ctx->downcount -= 3;
    // 80419E6C: addi    r27, r27, 1
    ctx->gpr[27] = ctx->gpr[27] + (u32)(s32)(1);

label_80419E70:
    // 80419E70: cmpwi   r27, 21
    {
        s32 val_a = (s32)(ctx->gpr[27]);
        s32 val_b = (s32)(21);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419E74:
    // 80419E74: bc    4, 1, 0x80419E54
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419E54u;
                return;
            }
            goto label_80419E54;
        }
    }

label_80419E78:
    ctx->pc = 0x80419E78u;
    ctx->downcount -= 5;
    // 80419E78: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419E7C:
    ctx->pc = 0x80419E7Cu;
    // 80419E7C: lwz     r30, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[30] = mem_read32(ctx, ea);
    }

label_80419E80:
    ctx->pc = 0x80419E80u;
    // 80419E80: lwz     r0, 156(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(156);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419E84:
    // 80419E84: add   r27, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[27] = res;
    }

label_80419E88:
    // 80419E88: b       0x80419F20
    {
            goto label_80419F20;
    }

label_80419E8C:
    ctx->downcount -= 2;
    // 80419E8C: cmpwi   r31, 0
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

label_80419E90:
    // 80419E90: bc    12, 2, 0x80419EDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419EDC;
        }
    }

label_80419E94:
    ctx->downcount -= 2;
    // 80419E94: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80419E98:
    // 80419E98: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80419E9C:
    ctx->pc = 0x80419E9Cu;
    ctx->downcount -= 13;
    // 80419E9C: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419EA0:
    // 80419EA0: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419EA4:
    ctx->pc = 0x80419EA4u;
    // 80419EA4: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419EA8:
    // 80419EA8: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80419EAC:
    // 80419EAC: add   r6, r0, r28
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[28];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80419EB0:
    // 80419EB0: add   r0, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80419EB4:
    ctx->pc = 0x80419EB4u;
    // 80419EB4: lwz     r6, 56(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(56);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_80419EB8:
    // 80419EB8: mulli   r6, r6, 21
    ctx->gpr[6] = (u32)((s64)(s32)ctx->gpr[6] * (s64)(s32)21);

label_80419EBC:
    // 80419EBC: add   r6, r6, r0
    {
        u32 a = ctx->gpr[6];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80419EC0:
    ctx->pc = 0x80419EC0u;
    // 80419EC0: lbz     r6, 159(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(159);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80419EC4:
    // 80419EC4: bl      0x80419B28
    {
            ctx->lr = 0x80419EC8u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B28u;
                return;
            }
            goto label_80419B28;
    }

label_80419EC8:
    ctx->downcount -= 4;
    // 80419EC8: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80419ECC:
    // 80419ECC: addi    r28, r28, 4
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(4);

label_80419ED0:
    // 80419ED0: cmpwi   r26, 2
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

label_80419ED4:
    // 80419ED4: bc    12, 0, 0x80419E9C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419E9Cu;
                return;
            }
            goto label_80419E9C;
        }
    }

label_80419ED8:
    ctx->downcount -= 1;
    // 80419ED8: b       0x80419F1C
    {
            goto label_80419F1C;
    }

label_80419EDC:
    ctx->downcount -= 3;
    // 80419EDC: li      r26, 0
    ctx->gpr[26] = (u32)(s32)(0);

label_80419EE0:
    // 80419EE0: li      r28, 0
    ctx->gpr[28] = (u32)(s32)(0);

label_80419EE4:
    // 80419EE4: b       0x80419F10
    {
            goto label_80419F10;
    }

label_80419EE8:
    ctx->pc = 0x80419EE8u;
    ctx->downcount -= 8;
    // 80419EE8: lwz     r0, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419EEC:
    // 80419EEC: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_80419EF0:
    ctx->pc = 0x80419EF0u;
    // 80419EF0: lwz     r3, 252(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(252);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419EF4:
    // 80419EF4: or   r5, r26, r26
    {
        ctx->gpr[5] = ctx->gpr[26] | ctx->gpr[26];
    }

label_80419EF8:
    // 80419EF8: add   r0, r30, r0
    {
        u32 a = ctx->gpr[30];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[0] = res;
    }

label_80419EFC:
    // 80419EFC: add   r6, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[6] = res;
    }

label_80419F00:
    ctx->pc = 0x80419F00u;
    // 80419F00: lbz     r6, 159(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(159);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_80419F04:
    // 80419F04: bl      0x80419B28
    {
            ctx->lr = 0x80419F08u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419B28u;
                return;
            }
            goto label_80419B28;
    }

label_80419F08:
    ctx->downcount -= 2;
    // 80419F08: addi    r26, r26, 1
    ctx->gpr[26] = ctx->gpr[26] + (u32)(s32)(1);

label_80419F0C:
    // 80419F0C: addi    r28, r28, 21
    ctx->gpr[28] = ctx->gpr[28] + (u32)(s32)(21);

label_80419F10:
    ctx->pc = 0x80419F10u;
    ctx->downcount -= 3;
    // 80419F10: lwz     r0, 148(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419F14:
    // 80419F14: cmpw    r26, r0
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

label_80419F18:
    // 80419F18: bc    12, 0, 0x80419EE8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419EE8u;
                return;
            }
            goto label_80419EE8;
        }
    }

label_80419F1C:
    ctx->downcount -= 1;
    // 80419F1C: addi    r30, r30, 1
    ctx->gpr[30] = ctx->gpr[30] + (u32)(s32)(1);

label_80419F20:
    ctx->downcount -= 2;
    // 80419F20: cmpw    r30, r27
    {
        s32 val_a = (s32)(ctx->gpr[30]);
        s32 val_b = (s32)(ctx->gpr[27]);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419F24:
    // 80419F24: bc    12, 0, 0x80419E8C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419E8Cu;
                return;
            }
            goto label_80419E8C;
        }
    }

label_80419F28:
    ctx->pc = 0x80419F28u;
    ctx->downcount -= 16;
    // 80419F28: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_80419F2C:
    ctx->pc = 0x80419F2Cu;
    // 80419F2C: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_80419F30:
    ctx->pc = 0x80419F30u;
    // 80419F30: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_80419F34:
    // 80419F34: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_80419F38:
    ctx->pc = 0x80419F38u;
    // 80419F38: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_80419F3C:
    ctx->pc = 0x80419F3Cu;
    ctx->downcount -= 20;
    // 80419F3C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_80419F40:
    ctx->pc = 0x80419F40u;
    // 80419F40: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_80419F44:
    ctx->pc = 0x80419F44u;
    // 80419F44: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_80419F48:
    ctx->pc = 0x80419F48u;
    // 80419F48: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_80419F4C:
    // 80419F4C: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_80419F50:
    // 80419F50: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_80419F54:
    ctx->pc = 0x80419F54u;
    // 80419F54: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_80419F58:
    ctx->pc = 0x80419F58u;
    // 80419F58: lbz     r0, 84(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419F5C:
    // 80419F5C: cmpwi   r0, 0
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

label_80419F60:
    // 80419F60: bc    12, 2, 0x80419F68
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419F68;
        }
    }

label_80419F64:
    ctx->downcount -= 1;
    // 80419F64: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_80419F68:
    ctx->downcount -= 4;
    // 80419F68: li      r30, 0
    ctx->gpr[30] = (u32)(s32)(0);

label_80419F6C:
    // 80419F6C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_80419F70:
    // 80419F70: addi    r3, r3, 100
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(100);

label_80419F74:
    // 80419F74: bl      0x80345718
    {
            ctx->lr = 0x80419F78u;
            ctx->pc = 0x80345718u;
            return;
    }

label_80419F78:
    ctx->downcount -= 2;
    // 80419F78: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419F7C:
    // 80419F7C: bc    12, 2, 0x80419F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419F94;
        }
    }

label_80419F80:
    ctx->pc = 0x80419F80u;
    ctx->downcount -= 4;
    // 80419F80: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419F84:
    ctx->pc = 0x80419F84u;
    // 80419F84: lbz     r0, 245(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(245);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419F88:
    // 80419F88: cmpwi   r0, 0
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

label_80419F8C:
    // 80419F8C: bc    12, 2, 0x80419F94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419F94;
        }
    }

label_80419F90:
    ctx->downcount -= 1;
    // 80419F90: li      r30, 1
    ctx->gpr[30] = (u32)(s32)(1);

label_80419F94:
    ctx->pc = 0x80419F94u;
    ctx->downcount -= 6;
    // 80419F94: lwz     r3, 224(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419F98:
    ctx->pc = 0x80419F98u;
    // 80419F98: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419F9C:
    ctx->pc = 0x80419F9Cu;
    // 80419F9C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419FA0:
    ctx->pc = 0x80419FA0u;
    // 80419FA0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419FA4:
    ctx->pc = 0x80419FA4u;
    // 80419FA4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419FA8u;
            ctx->pc = target;
            return;
        }
    }

label_80419FA8:
    ctx->downcount -= 2;
    // 80419FA8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_80419FAC:
    // 80419FAC: bc    12, 2, 0x80419FDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419FDC;
        }
    }

label_80419FB0:
    ctx->downcount -= 2;
    // 80419FB0: cmpwi   r30, 0
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

label_80419FB4:
    // 80419FB4: bc    12, 2, 0x80419FDC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_80419FDC;
        }
    }

label_80419FB8:
    ctx->pc = 0x80419FB8u;
    ctx->downcount -= 3;
    // 80419FB8: lwz     r3, 224(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419FBC:
    // 80419FBC: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_80419FC0:
    // 80419FC0: bl      0x80424764
    {
            ctx->lr = 0x80419FC4u;
            ctx->pc = 0x80424764u;
            return;
    }

label_80419FC4:
    ctx->pc = 0x80419FC4u;
    ctx->downcount -= 6;
    // 80419FC4: lwz     r3, 224(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419FC8:
    ctx->pc = 0x80419FC8u;
    // 80419FC8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419FCC:
    ctx->pc = 0x80419FCCu;
    // 80419FCC: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419FD0:
    ctx->pc = 0x80419FD0u;
    // 80419FD0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_80419FD4:
    ctx->pc = 0x80419FD4u;
    // 80419FD4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x80419FD8u;
            ctx->pc = target;
            return;
        }
    }

label_80419FD8:
    ctx->downcount -= 1;
    // 80419FD8: b       0x8041A004
    {
            goto label_8041A004;
    }

label_80419FDC:
    ctx->pc = 0x80419FDCu;
    ctx->downcount -= 4;
    // 80419FDC: lwz     r3, 224(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_80419FE0:
    ctx->pc = 0x80419FE0u;
    // 80419FE0: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_80419FE4:
    // 80419FE4: cmpwi   r0, 0
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

label_80419FE8:
    // 80419FE8: bc    12, 2, 0x8041A004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A004;
        }
    }

label_80419FEC:
    ctx->downcount -= 2;
    // 80419FEC: cmpwi   r30, 0
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

label_80419FF0:
    // 80419FF0: bc    4, 2, 0x8041A004
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A004;
        }
    }

label_80419FF4:
    ctx->pc = 0x80419FF4u;
    ctx->downcount -= 5;
    // 80419FF4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419FF8:
    ctx->pc = 0x80419FF8u;
    // 80419FF8: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_80419FFC:
    ctx->pc = 0x80419FFCu;
    // 80419FFC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A000:
    ctx->pc = 0x8041A000u;
    // 8041A000: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041A004u;
            ctx->pc = target;
            return;
        }
    }

label_8041A004:
    ctx->pc = 0x8041A004u;
    ctx->downcount -= 16;
    // 8041A004: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041A008:
    ctx->pc = 0x8041A008u;
    // 8041A008: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A00C:
    ctx->pc = 0x8041A00Cu;
    // 8041A00C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A010:
    // 8041A010: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041A014:
    ctx->pc = 0x8041A014u;
    // 8041A014: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A018:
    ctx->pc = 0x8041A018u;
    ctx->downcount -= 7;
    // 8041A018: stwu     r1, -48(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-48);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A01C:
    ctx->pc = 0x8041A01Cu;
    // 8041A01C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A020:
    ctx->pc = 0x8041A020u;
    // 8041A020: stw     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A024:
    ctx->pc = 0x8041A024u;
    // 8041A024: stw     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A028:
    // 8041A028: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A02C:
    ctx->pc = 0x8041A02Cu;
    // 8041A02C: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A030:
    // 8041A030: bl      0x8041E1D8
    {
            ctx->lr = 0x8041A034u;
            ctx->pc = 0x8041E1D8u;
            return;
    }

label_8041A034:
    ctx->pc = 0x8041A034u;
    ctx->downcount -= 13;
    // 8041A034: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A038:
    ctx->pc = 0x8041A038u;
    // 8041A038: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8041A038u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8041A03C:
    // 8041A03C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041A040:
    ctx->pc = 0x8041A040u;
    // 8041A040: lwz     r6, 284(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(284);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A044:
    ctx->pc = 0x8041A044u;
    // 8041A044: stfd     f0, 24(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041A044u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(24);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8041A048:
    ctx->pc = 0x8041A048u;
    // 8041A048: lwz     r3, 276(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(276);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A04C:
    // 8041A04C: cmpwi   r6, 0
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

label_8041A050:
    ctx->pc = 0x8041A050u;
    // 8041A050: lwz     r0, 280(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(280);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A054:
    ctx->pc = 0x8041A054u;
    // 8041A054: lfs     f1, 272(r4)
    if (!ppc_fp_available_inline(ctx, 0x8041A054u)) return;
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(272);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[1] = value;
        ctx->ps1[1] = value;
    }

label_8041A058:
    ctx->pc = 0x8041A058u;
    // 8041A058: stw     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041A05C:
    ctx->pc = 0x8041A05Cu;
    // 8041A05C: lwz     r4, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A060:
    ctx->pc = 0x8041A060u;
    // 8041A060: stw     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A064:
    // 8041A064: bc    12, 2, 0x8041A084
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A084;
        }
    }

label_8041A068:
    ctx->downcount -= 2;
    // 8041A068: cmpwi   r6, 1
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

label_8041A06C:
    // 8041A06C: bc    12, 2, 0x8041A08C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A08C;
        }
    }

label_8041A070:
    ctx->downcount -= 2;
    // 8041A070: cmpwi   r6, 2
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(2);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A074:
    // 8041A074: bc    12, 2, 0x8041A094
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A094;
        }
    }

label_8041A078:
    ctx->downcount -= 2;
    // 8041A078: cmpwi   r6, 3
    {
        s32 val_a = (s32)(ctx->gpr[6]);
        s32 val_b = (s32)(3);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A07C:
    // 8041A07C: bc    12, 2, 0x8041A09C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A09C;
        }
    }

label_8041A080:
    ctx->downcount -= 1;
    // 8041A080: b       0x8041A0A0
    {
            goto label_8041A0A0;
    }

label_8041A084:
    ctx->downcount -= 2;
    // 8041A084: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041A088:
    // 8041A088: b       0x8041A0A0
    {
            goto label_8041A0A0;
    }

label_8041A08C:
    ctx->downcount -= 2;
    // 8041A08C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8041A090:
    // 8041A090: b       0x8041A0A0
    {
            goto label_8041A0A0;
    }

label_8041A094:
    ctx->downcount -= 2;
    // 8041A094: li      r5, 2
    ctx->gpr[5] = (u32)(s32)(2);

label_8041A098:
    // 8041A098: b       0x8041A0A0
    {
            goto label_8041A0A0;
    }

label_8041A09C:
    ctx->downcount -= 1;
    // 8041A09C: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041A0A0:
    ctx->pc = 0x8041A0A0u;
    ctx->downcount -= 7;
    // 8041A0A0: lwz     r3, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A0A4:
    // 8041A0A4: addi    r6, r1, 16
    ctx->gpr[6] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A0A8:
    ctx->pc = 0x8041A0A8u;
    // 8041A0A8: lwz     r0, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A0AC:
    ctx->pc = 0x8041A0ACu;
    // 8041A0AC: stw     r3, 16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(16);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041A0B0:
    ctx->pc = 0x8041A0B0u;
    // 8041A0B0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A0B4:
    ctx->pc = 0x8041A0B4u;
    // 8041A0B4: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A0B8:
    // 8041A0B8: bl      0x8041C3EC
    {
            ctx->lr = 0x8041A0BCu;
            ctx->pc = 0x8041C3ECu;
            return;
    }

label_8041A0BC:
    ctx->pc = 0x8041A0BCu;
    ctx->downcount -= 4;
    // 8041A0BC: lwz     r4, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A0C0:
    ctx->pc = 0x8041A0C0u;
    // 8041A0C0: lwz     r3, 212(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A0C4:
    ctx->pc = 0x8041A0C4u;
    // 8041A0C4: lbz     r4, 288(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(288);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8041A0C8:
    // 8041A0C8: bl      0x8041C26C
    {
            ctx->lr = 0x8041A0CCu;
            ctx->pc = 0x8041C26Cu;
            return;
    }

label_8041A0CC:
    ctx->pc = 0x8041A0CCu;
    ctx->downcount -= 6;
    // 8041A0CC: lwz     r0, 52(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(52);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A0D0:
    ctx->pc = 0x8041A0D0u;
    // 8041A0D0: lwz     r31, 44(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(44);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A0D4:
    ctx->pc = 0x8041A0D4u;
    // 8041A0D4: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A0D8:
    // 8041A0D8: addi    r1, r1, 48
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(48);

label_8041A0DC:
    ctx->pc = 0x8041A0DCu;
    // 8041A0DC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A0E0:
    ctx->pc = 0x8041A0E0u;
    ctx->downcount -= 5;
    // 8041A0E0: lwz     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A0E4:
    // 8041A0E4: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_8041A0E8:
    ctx->pc = 0x8041A0E8u;
    // 8041A0E8: lwz     r0, 80(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(80);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A0EC:
    // 8041A0EC: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A0F0:
    // 8041A0F0: bc    12, 1, 0x8041A148
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A148;
        }
    }

label_8041A0F4:
    ctx->downcount -= 7;
    // 8041A0F4: lis     r5, -32659
    ctx->gpr[5] = ((u32)(s32)(-32659) << 16);

label_8041A0F8:
    // 8041A0F8: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8041A0FC:
    // 8041A0FC: addi    r5, r5, 23580
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(23580);

label_8041A100:
    ctx->pc = 0x8041A100u;
    // 8041A100: lwzx    r5, r5, r0
    {
        u32 ea = ctx->gpr[5] + ctx->gpr[0];
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A104:
    ctx->pc = 0x8041A104u;
    // 8041A104: mtctr    r5
    ctx->ctr = ctx->gpr[5];

label_8041A108:
    ctx->pc = 0x8041A108u;
    // 8041A108: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A10C:
    ctx->downcount -= 2;
    // 8041A10C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A110:
    // 8041A110: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A114:
    ctx->downcount -= 2;
    // 8041A114: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041A118:
    // 8041A118: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A11C:
    ctx->downcount -= 2;
    // 8041A11C: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8041A120:
    // 8041A120: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A124:
    ctx->downcount -= 2;
    // 8041A124: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8041A128:
    // 8041A128: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A12C:
    ctx->downcount -= 2;
    // 8041A12C: li      r4, 4
    ctx->gpr[4] = (u32)(s32)(4);

label_8041A130:
    // 8041A130: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A134:
    ctx->downcount -= 2;
    // 8041A134: li      r4, 5
    ctx->gpr[4] = (u32)(s32)(5);

label_8041A138:
    // 8041A138: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A13C:
    ctx->downcount -= 2;
    // 8041A13C: li      r4, 6
    ctx->gpr[4] = (u32)(s32)(6);

label_8041A140:
    // 8041A140: b       0x8041A148
    {
            goto label_8041A148;
    }

label_8041A144:
    ctx->downcount -= 1;
    // 8041A144: li      r4, 7
    ctx->gpr[4] = (u32)(s32)(7);

label_8041A148:
    ctx->pc = 0x8041A148u;
    ctx->downcount -= 3;
    // 8041A148: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A14C:
    ctx->pc = 0x8041A14Cu;
    // 8041A14C: lbz     r5, 108(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(108);
        ctx->gpr[5] = mem_read8(ctx, ea);
    }

label_8041A150:
    // 8041A150: b       0x8041B8F0
    {
            ctx->pc = 0x8041B8F0u;
            return;
    }

label_8041A154:
    ctx->pc = 0x8041A154u;
    ctx->downcount -= 7;
    // 8041A154: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A158:
    ctx->pc = 0x8041A158u;
    // 8041A158: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A15C:
    ctx->pc = 0x8041A15Cu;
    // 8041A15C: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A160:
    ctx->pc = 0x8041A160u;
    // 8041A160: stw     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A164:
    // 8041A164: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041A168:
    ctx->pc = 0x8041A168u;
    // 8041A168: lwz     r3, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A16C:
    // 8041A16C: bl      0x8041E160
    {
            ctx->lr = 0x8041A170u;
            ctx->pc = 0x8041E160u;
            return;
    }

label_8041A170:
    ctx->downcount -= 2;
    // 8041A170: cmpwi   r31, 0
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

label_8041A174:
    // 8041A174: bc    12, 2, 0x8041A19C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A19C;
        }
    }

label_8041A178:
    ctx->pc = 0x8041A178u;
    ctx->downcount -= 7;
    // 8041A178: lfs     f0, 200(r2)
    if (!ppc_fp_available_inline(ctx, 0x8041A178u)) return;
    {
        u32 ea = ctx->gpr[2] + (u32)(s32)(200);
        f64 value = dolrecomp_f32_from_bits(mem_read32(ctx, ea));
        ctx->fpr[0] = value;
        ctx->ps1[0] = value;
    }

label_8041A17C:
    ctx->pc = 0x8041A17Cu;
    // 8041A17C: fmuls   f0, f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8041A17Cu)) return;
    ppc_fmuls(ctx, 0, 0, 1);

label_8041A180:
    ctx->pc = 0x8041A180u;
    // 8041A180: fctiwz    f0, f0
    if (!ppc_fp_available_inline(ctx, 0x8041A180u)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[0], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8041A184:
    ctx->pc = 0x8041A184u;
    // 8041A184: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041A184u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8041A188:
    ctx->pc = 0x8041A188u;
    // 8041A188: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A18C:
    // 8041A18C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A190:
    // 8041A190: bc    4, 2, 0x8041A1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A1A8;
        }
    }

label_8041A194:
    ctx->downcount -= 2;
    // 8041A194: li      r3, 1
    ctx->gpr[3] = (u32)(s32)(1);

label_8041A198:
    // 8041A198: b       0x8041A1A8
    {
            goto label_8041A1A8;
    }

label_8041A19C:
    ctx->pc = 0x8041A19Cu;
    ctx->downcount -= 3;
    // 8041A19C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8041A19Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8041A1A0:
    ctx->pc = 0x8041A1A0u;
    // 8041A1A0: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041A1A0u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8041A1A4:
    ctx->pc = 0x8041A1A4u;
    // 8041A1A4: lwz     r3, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A1A8:
    ctx->pc = 0x8041A1A8u;
    ctx->downcount -= 6;
    // 8041A1A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A1AC:
    ctx->pc = 0x8041A1ACu;
    // 8041A1AC: lwz     r31, 28(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(28);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A1B0:
    ctx->pc = 0x8041A1B0u;
    // 8041A1B0: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A1B4:
    // 8041A1B4: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041A1B8:
    ctx->pc = 0x8041A1B8u;
    // 8041A1B8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A1BC:
    ctx->pc = 0x8041A1BCu;
    ctx->downcount -= 6;
    // 8041A1BC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A1C0:
    ctx->pc = 0x8041A1C0u;
    // 8041A1C0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A1C4:
    ctx->pc = 0x8041A1C4u;
    // 8041A1C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A1C8:
    ctx->pc = 0x8041A1C8u;
    // 8041A1C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A1CC:
    // 8041A1CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A1D0:
    // 8041A1D0: bl      0x80419DBC
    {
            ctx->lr = 0x8041A1D4u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419DBCu;
                return;
            }
            goto label_80419DBC;
    }

label_8041A1D4:
    ctx->pc = 0x8041A1D4u;
    ctx->downcount -= 3;
    // 8041A1D4: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A1D8:
    ctx->pc = 0x8041A1D8u;
    // 8041A1D8: lwz     r4, 252(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(252);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A1DC:
    // 8041A1DC: bl      0x80418008
    {
            ctx->lr = 0x8041A1E0u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80418008u;
                return;
            }
            goto label_80418008;
    }

label_8041A1E0:
    ctx->pc = 0x8041A1E0u;
    ctx->downcount -= 7;
    // 8041A1E0: lwz     r3, 208(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A1E4:
    ctx->pc = 0x8041A1E4u;
    // 8041A1E4: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A1E8:
    ctx->pc = 0x8041A1E8u;
    // 8041A1E8: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A1EC:
    ctx->pc = 0x8041A1ECu;
    // 8041A1EC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A1F0:
    // 8041A1F0: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A1F4:
    ctx->pc = 0x8041A1F4u;
    // 8041A1F4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A1F8:
    ctx->pc = 0x8041A1F8u;
    ctx->downcount -= 10;
    // 8041A1F8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A1FC:
    ctx->pc = 0x8041A1FCu;
    // 8041A1FC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A200:
    // 8041A200: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A204:
    ctx->pc = 0x8041A204u;
    // 8041A204: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A208:
    ctx->pc = 0x8041A208u;
    // 8041A208: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A20C:
    // 8041A20C: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A210:
    ctx->pc = 0x8041A210u;
    // 8041A210: lwz     r5, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A214:
    ctx->pc = 0x8041A214u;
    // 8041A214: lwz     r3, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A218:
    ctx->pc = 0x8041A218u;
    // 8041A218: lwz     r5, 112(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A21C:
    // 8041A21C: bl      0x8041DB98
    {
            ctx->lr = 0x8041A220u;
            ctx->pc = 0x8041DB98u;
            return;
    }

label_8041A220:
    ctx->pc = 0x8041A220u;
    ctx->downcount -= 7;
    // 8041A220: lwz     r3, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A224:
    ctx->pc = 0x8041A224u;
    // 8041A224: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A228:
    ctx->pc = 0x8041A228u;
    // 8041A228: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A22C:
    ctx->pc = 0x8041A22Cu;
    // 8041A22C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A230:
    // 8041A230: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A234:
    ctx->pc = 0x8041A234u;
    // 8041A234: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A238:
    ctx->pc = 0x8041A238u;
    ctx->downcount -= 21;
    // 8041A238: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A23C:
    ctx->pc = 0x8041A23Cu;
    // 8041A23C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A240:
    // 8041A240: lis     r4, -32661
    ctx->gpr[4] = ((u32)(s32)(-32661) << 16);

label_8041A244:
    ctx->pc = 0x8041A244u;
    // 8041A244: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A248:
    // 8041A248: addi    r4, r4, 22184
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(22184);

label_8041A24C:
    ctx->pc = 0x8041A24Cu;
    // 8041A24C: stmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041A250:
    // 8041A250: or   r28, r3, r3
    {
        ctx->gpr[28] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A254:
    ctx->pc = 0x8041A254u;
    // 8041A254: lwz     r5, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A258:
    // 8041A258: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041A25C:
    // 8041A25C: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041A260:
    // 8041A260: bl      0x80370BD4
    {
            ctx->lr = 0x8041A264u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041A264:
    ctx->pc = 0x8041A264u;
    ctx->downcount -= 16;
    // 8041A264: lwz     r31, -12936(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12936);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A268:
    // 8041A268: li      r3, 10
    ctx->gpr[3] = (u32)(s32)(10);

label_8041A26C:
    ctx->pc = 0x8041A26Cu;
    // 8041A26C: lwz     r6, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A270:
    // 8041A270: li      r0, 1
    ctx->gpr[0] = (u32)(s32)(1);

label_8041A274:
    ctx->pc = 0x8041A274u;
    // 8041A274: lwz     r5, 32(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(32);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A278:
    // 8041A278: li      r29, 0
    ctx->gpr[29] = (u32)(s32)(0);

label_8041A27C:
    ctx->pc = 0x8041A27Cu;
    // 8041A27C: lwz     r4, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A280:
    // 8041A280: cntlzw r5, r5
    {
        u32 v = ctx->gpr[5];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[5] = n;
    }

label_8041A284:
    ctx->pc = 0x8041A284u;
    // 8041A284: stw     r4, 320(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(320);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8041A288:
    // 8041A288: rlwinm r30, r5, 27, 5, 31
    {
        ctx->gpr[30] = dolrecomp_rotl32(ctx->gpr[5], 27u) & 0x07FFFFFFu;
    }

label_8041A28C:
    // 8041A28C: cntlzw r4, r30
    {
        u32 v = ctx->gpr[30];
        u32 n = 0;
        while (n < 32 && ((v & (0x80000000u >> n)) == 0)) n++;
        ctx->gpr[4] = n;
    }

label_8041A290:
    // 8041A290: rlwinm r4, r4, 27, 5, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[4], 27u) & 0x07FFFFFFu;
    }

label_8041A294:
    ctx->pc = 0x8041A294u;
    // 8041A294: stb     r4, 380(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(380);
        mem_write8(ctx, ea, (u8)ctx->gpr[4]);
    }

label_8041A298:
    ctx->pc = 0x8041A298u;
    // 8041A298: stw     r3, 384(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(384);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041A29C:
    ctx->pc = 0x8041A29Cu;
    // 8041A29C: stb     r0, 381(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(381);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041A2A0:
    // 8041A2A0: b       0x8041A32C
    {
            goto label_8041A32C;
    }

label_8041A2A4:
    ctx->pc = 0x8041A2A4u;
    ctx->downcount -= 7;
    // 8041A2A4: lwz     r3, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A2A8:
    // 8041A2A8: rlwinm r0, r29, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0x000003FCu;
    }

label_8041A2AC:
    // 8041A2AC: cmpwi   r30, 0
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

label_8041A2B0:
    // 8041A2B0: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8041A2B4:
    // 8041A2B4: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8041A2B8:
    ctx->pc = 0x8041A2B8u;
    // 8041A2B8: lwz     r27, 36(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(36);
        ctx->gpr[27] = mem_read32(ctx, ea);
    }

label_8041A2BC:
    // 8041A2BC: bc    12, 2, 0x8041A2F8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A2F8;
        }
    }

label_8041A2C0:
    ctx->downcount -= 3;
    // 8041A2C0: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A2C4:
    // 8041A2C4: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_8041A2C8:
    // 8041A2C8: bl      0x8026A31C
    {
            ctx->lr = 0x8041A2CCu;
            ctx->pc = 0x8026A31Cu;
            return;
    }

label_8041A2CC:
    ctx->pc = 0x8041A2CCu;
    ctx->downcount -= 11;
    // 8041A2CC: lwz     r5, 184(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A2D0:
    // 8041A2D0: rlwinm r6, r3, 2, 0, 29
    {
        ctx->gpr[6] = dolrecomp_rotl32(ctx->gpr[3], 2u) & 0xFFFFFFFCu;
    }

label_8041A2D4:
    // 8041A2D4: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A2D8:
    ctx->pc = 0x8041A2D8u;
    // 8041A2D8: lwz     r0, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A2DC:
    // 8041A2DC: add   r3, r5, r6
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8041A2E0:
    ctx->pc = 0x8041A2E0u;
    // 8041A2E0: lwz     r4, 56(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(56);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A2E4:
    // 8041A2E4: add   r3, r0, r6
    {
        u32 a = ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8041A2E8:
    // 8041A2E8: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8041A2EC:
    // 8041A2EC: add   r4, r5, r0
    {
        u32 a = ctx->gpr[5];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[4] = res;
    }

label_8041A2F0:
    ctx->pc = 0x8041A2F0u;
    // 8041A2F0: lwz     r0, 36(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A2F4:
    ctx->pc = 0x8041A2F4u;
    // 8041A2F4: stw     r0, 348(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(348);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A2F8:
    ctx->downcount -= 8;
    // 8041A2F8: rlwinm r0, r29, 2, 22, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[29], 2u) & 0x000003FCu;
    }

label_8041A2FC:
    ctx->pc = 0x8041A2FCu;
    // 8041A2FC: lwz     r3, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A300:
    // 8041A300: add   r26, r28, r0
    {
        u32 a = ctx->gpr[28];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[26] = res;
    }

label_8041A304:
    // 8041A304: or   r6, r27, r27
    {
        ctx->gpr[6] = ctx->gpr[27] | ctx->gpr[27];
    }

label_8041A308:
    ctx->pc = 0x8041A308u;
    // 8041A308: lwz     r5, 152(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(152);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A30C:
    // 8041A30C: rlwinm r4, r29, 0, 24, 31
    {
        ctx->gpr[4] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_8041A310:
    // 8041A310: addi    r5, r5, 112
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(112);

label_8041A314:
    // 8041A314: bl      0x802ECE88
    {
            ctx->lr = 0x8041A318u;
            ctx->pc = 0x802ECE88u;
            return;
    }

label_8041A318:
    ctx->pc = 0x8041A318u;
    ctx->downcount -= 4;
    // 8041A318: lwz     r3, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A31C:
    // 8041A31C: rlwinm r5, r29, 0, 24, 31
    {
        ctx->gpr[5] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_8041A320:
    ctx->pc = 0x8041A320u;
    // 8041A320: lwz     r4, 168(r26)
    {
        u32 ea = ctx->gpr[26] + (u32)(s32)(168);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A324:
    // 8041A324: bl      0x802ECE78
    {
            ctx->lr = 0x8041A328u;
            ctx->pc = 0x802ECE78u;
            return;
    }

label_8041A328:
    ctx->downcount -= 1;
    // 8041A328: addi    r29, r29, 1
    ctx->gpr[29] = ctx->gpr[29] + (u32)(s32)(1);

label_8041A32C:
    ctx->pc = 0x8041A32Cu;
    ctx->downcount -= 4;
    // 8041A32C: lwz     r0, 148(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(148);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A330:
    // 8041A330: rlwinm r3, r29, 0, 24, 31
    {
        ctx->gpr[3] = dolrecomp_rotl32(ctx->gpr[29], 0u) & 0x000000FFu;
    }

label_8041A334:
    // 8041A334: cmpw    r3, r0
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

label_8041A338:
    // 8041A338: bc    12, 0, 0x8041A2A4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x80000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041A2A4u;
                return;
            }
            goto label_8041A2A4;
        }
    }

label_8041A33C:
    ctx->pc = 0x8041A33Cu;
    ctx->downcount -= 17;
    // 8041A33C: lwz     r3, 204(r28)
    {
        u32 ea = ctx->gpr[28] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A340:
    ctx->pc = 0x8041A340u;
    // 8041A340: lmw     r26, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 26; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041A344:
    ctx->pc = 0x8041A344u;
    // 8041A344: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A348:
    ctx->pc = 0x8041A348u;
    // 8041A348: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A34C:
    // 8041A34C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041A350:
    ctx->pc = 0x8041A350u;
    // 8041A350: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A354:
    ctx->pc = 0x8041A354u;
    ctx->downcount -= 10;
    // 8041A354: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A358:
    ctx->pc = 0x8041A358u;
    // 8041A358: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A35C:
    ctx->pc = 0x8041A35Cu;
    // 8041A35C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A360:
    ctx->pc = 0x8041A360u;
    // 8041A360: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A364:
    // 8041A364: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A368:
    ctx->pc = 0x8041A368u;
    // 8041A368: lwz     r5, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A36C:
    ctx->pc = 0x8041A36Cu;
    // 8041A36C: lwz     r3, 240(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(240);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A370:
    ctx->pc = 0x8041A370u;
    // 8041A370: lwz     r4, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A374:
    ctx->pc = 0x8041A374u;
    // 8041A374: lwz     r5, 104(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A378:
    // 8041A378: bl      0x8041D9CC
    {
            ctx->lr = 0x8041A37Cu;
            ctx->pc = 0x8041D9CCu;
            return;
    }

label_8041A37C:
    ctx->pc = 0x8041A37Cu;
    ctx->downcount -= 7;
    // 8041A37C: lwz     r3, 240(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(240);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A380:
    ctx->pc = 0x8041A380u;
    // 8041A380: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A384:
    ctx->pc = 0x8041A384u;
    // 8041A384: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A388:
    ctx->pc = 0x8041A388u;
    // 8041A388: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A38C:
    // 8041A38C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A390:
    ctx->pc = 0x8041A390u;
    // 8041A390: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A394:
    ctx->downcount -= 5;
    // 8041A394: rlwinm r0, r4, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[4], 2u) & 0xFFFFFFFCu;
    }

label_8041A398:
    // 8041A398: add   r3, r3, r0
    {
        u32 a = ctx->gpr[3];
        u32 b = ctx->gpr[0];
        u32 res = a + b;
        ctx->gpr[3] = res;
    }

label_8041A39C:
    ctx->pc = 0x8041A39Cu;
    // 8041A39C: stw     r5, 152(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(152);
        mem_write32(ctx, ea, (u32)ctx->gpr[5]);
    }

label_8041A3A0:
    ctx->pc = 0x8041A3A0u;
    // 8041A3A0: stw     r6, 168(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(168);
        mem_write32(ctx, ea, (u32)ctx->gpr[6]);
    }

label_8041A3A4:
    ctx->pc = 0x8041A3A4u;
    // 8041A3A4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A3A8:
    ctx->pc = 0x8041A3A8u;
    ctx->downcount -= 6;
    // 8041A3A8: lwz     r3, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A3AC:
    ctx->pc = 0x8041A3ACu;
    // 8041A3AC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A3B0:
    ctx->pc = 0x8041A3B0u;
    // 8041A3B0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A3B4:
    ctx->pc = 0x8041A3B4u;
    // 8041A3B4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A3B8:
    ctx->pc = 0x8041A3B8u;
    // 8041A3B8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A3BC:
    ctx->downcount -= 2;
    // 8041A3BC: cmpwi   r4, 0
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

label_8041A3C0:
    // 8041A3C0: bc    12, 2, 0x8041A3DC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A3DC;
        }
    }

label_8041A3C4:
    ctx->pc = 0x8041A3C4u;
    ctx->downcount -= 6;
    // 8041A3C4: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A3C8:
    // 8041A3C8: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041A3CC:
    ctx->pc = 0x8041A3CCu;
    // 8041A3CC: lwz     r3, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A3D0:
    // 8041A3D0: li      r6, 1
    ctx->gpr[6] = (u32)(s32)(1);

label_8041A3D4:
    ctx->pc = 0x8041A3D4u;
    // 8041A3D4: lwz     r4, 120(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(120);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A3D8:
    // 8041A3D8: b       0x8041D2D0
    {
            ctx->pc = 0x8041D2D0u;
            return;
    }

label_8041A3DC:
    ctx->pc = 0x8041A3DCu;
    ctx->downcount -= 4;
    // 8041A3DC: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A3E0:
    ctx->pc = 0x8041A3E0u;
    // 8041A3E0: lwz     r4, 96(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(96);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A3E4:
    // 8041A3E4: cmpwi   r4, 1001
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1001);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A3E8:
    // 8041A3E8: bc    12, 2, 0x8041A420
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A420;
        }
    }

label_8041A3EC:
    ctx->downcount -= 2;
    // 8041A3EC: cmpwi   r4, 1002
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1002);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A3F0:
    // 8041A3F0: bc    12, 2, 0x8041A428
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A428;
        }
    }

label_8041A3F4:
    ctx->downcount -= 2;
    // 8041A3F4: cmpwi   r4, 1003
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1003);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A3F8:
    // 8041A3F8: bc    12, 2, 0x8041A430
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A430;
        }
    }

label_8041A3FC:
    ctx->downcount -= 2;
    // 8041A3FC: cmpwi   r4, 1004
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1004);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A400:
    // 8041A400: bc    12, 2, 0x8041A438
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A438;
        }
    }

label_8041A404:
    ctx->downcount -= 2;
    // 8041A404: cmpwi   r4, 1005
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1005);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A408:
    // 8041A408: bc    12, 2, 0x8041A440
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A440;
        }
    }

label_8041A40C:
    ctx->downcount -= 2;
    // 8041A40C: cmpwi   r4, 1006
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1006);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A410:
    // 8041A410: bc    12, 2, 0x8041A448
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A448;
        }
    }

label_8041A414:
    ctx->downcount -= 2;
    // 8041A414: cmpwi   r4, 1007
    {
        s32 val_a = (s32)(ctx->gpr[4]);
        s32 val_b = (s32)(1007);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A418:
    // 8041A418: bc    12, 2, 0x8041A450
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A450;
        }
    }

label_8041A41C:
    ctx->downcount -= 1;
    // 8041A41C: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A420:
    ctx->downcount -= 2;
    // 8041A420: li      r4, -3
    ctx->gpr[4] = (u32)(s32)(-3);

label_8041A424:
    // 8041A424: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A428:
    ctx->downcount -= 2;
    // 8041A428: li      r4, -2
    ctx->gpr[4] = (u32)(s32)(-2);

label_8041A42C:
    // 8041A42C: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A430:
    ctx->downcount -= 2;
    // 8041A430: li      r4, -1
    ctx->gpr[4] = (u32)(s32)(-1);

label_8041A434:
    // 8041A434: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A438:
    ctx->downcount -= 2;
    // 8041A438: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A43C:
    // 8041A43C: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A440:
    ctx->downcount -= 2;
    // 8041A440: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041A444:
    // 8041A444: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A448:
    ctx->downcount -= 2;
    // 8041A448: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8041A44C:
    // 8041A44C: b       0x8041A454
    {
            goto label_8041A454;
    }

label_8041A450:
    ctx->downcount -= 1;
    // 8041A450: li      r4, 3
    ctx->gpr[4] = (u32)(s32)(3);

label_8041A454:
    ctx->pc = 0x8041A454u;
    ctx->downcount -= 4;
    // 8041A454: lwz     r3, 236(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A458:
    // 8041A458: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041A45C:
    // 8041A45C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041A460:
    // 8041A460: b       0x8041D2D0
    {
            ctx->pc = 0x8041D2D0u;
            return;
    }

label_8041A464:
    ctx->pc = 0x8041A464u;
    ctx->downcount -= 6;
    // 8041A464: lwz     r3, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A468:
    ctx->pc = 0x8041A468u;
    // 8041A468: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A46C:
    ctx->pc = 0x8041A46Cu;
    // 8041A46C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A470:
    ctx->pc = 0x8041A470u;
    // 8041A470: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A474:
    ctx->pc = 0x8041A474u;
    // 8041A474: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A478:
    ctx->pc = 0x8041A478u;
    ctx->downcount -= 6;
    // 8041A478: lwz     r3, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A47C:
    ctx->pc = 0x8041A47Cu;
    // 8041A47C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A480:
    ctx->pc = 0x8041A480u;
    // 8041A480: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A484:
    ctx->pc = 0x8041A484u;
    // 8041A484: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A488:
    ctx->pc = 0x8041A488u;
    // 8041A488: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A48C:
    ctx->pc = 0x8041A48Cu;
    ctx->downcount -= 3;
    // 8041A48C: lwz     r3, 232(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A490:
    ctx->pc = 0x8041A490u;
    // 8041A490: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A494:
    ctx->pc = 0x8041A494u;
    // 8041A494: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A498:
    ctx->pc = 0x8041A498u;
    ctx->downcount -= 20;
    // 8041A498: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A49C:
    ctx->pc = 0x8041A49Cu;
    // 8041A49C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A4A0:
    ctx->pc = 0x8041A4A0u;
    // 8041A4A0: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A4A4:
    ctx->pc = 0x8041A4A4u;
    // 8041A4A4: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041A4A8:
    // 8041A4A8: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A4AC:
    // 8041A4AC: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8041A4B0:
    ctx->pc = 0x8041A4B0u;
    // 8041A4B0: lwz     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A4B4:
    ctx->pc = 0x8041A4B4u;
    // 8041A4B4: lwz     r0, 128(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(128);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A4B8:
    // 8041A4B8: cmplwi  r0, 0x0007
    {
        u32 val_a = (u32)(ctx->gpr[0]);
        u32 val_b = (u32)(0x0007u);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A4BC:
    // 8041A4BC: bc    12, 1, 0x8041A514
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A514;
        }
    }

label_8041A4C0:
    ctx->downcount -= 7;
    // 8041A4C0: lis     r3, -32659
    ctx->gpr[3] = ((u32)(s32)(-32659) << 16);

label_8041A4C4:
    // 8041A4C4: rlwinm r0, r0, 2, 0, 29
    {
        ctx->gpr[0] = dolrecomp_rotl32(ctx->gpr[0], 2u) & 0xFFFFFFFCu;
    }

label_8041A4C8:
    // 8041A4C8: addi    r3, r3, 23612
    ctx->gpr[3] = ctx->gpr[3] + (u32)(s32)(23612);

label_8041A4CC:
    ctx->pc = 0x8041A4CCu;
    // 8041A4CC: lwzx    r3, r3, r0
    {
        u32 ea = ctx->gpr[3] + ctx->gpr[0];
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A4D0:
    ctx->pc = 0x8041A4D0u;
    // 8041A4D0: mtctr    r3
    ctx->ctr = ctx->gpr[3];

label_8041A4D4:
    ctx->pc = 0x8041A4D4u;
    // 8041A4D4: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A4D8:
    ctx->downcount -= 2;
    // 8041A4D8: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8041A4DC:
    // 8041A4DC: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A4E0:
    ctx->downcount -= 2;
    // 8041A4E0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8041A4E4:
    // 8041A4E4: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A4E8:
    ctx->downcount -= 2;
    // 8041A4E8: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_8041A4EC:
    // 8041A4EC: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A4F0:
    ctx->downcount -= 2;
    // 8041A4F0: li      r31, 3
    ctx->gpr[31] = (u32)(s32)(3);

label_8041A4F4:
    // 8041A4F4: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A4F8:
    ctx->downcount -= 2;
    // 8041A4F8: li      r31, 4
    ctx->gpr[31] = (u32)(s32)(4);

label_8041A4FC:
    // 8041A4FC: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A500:
    ctx->downcount -= 2;
    // 8041A500: li      r31, 5
    ctx->gpr[31] = (u32)(s32)(5);

label_8041A504:
    // 8041A504: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A508:
    ctx->downcount -= 2;
    // 8041A508: li      r31, 6
    ctx->gpr[31] = (u32)(s32)(6);

label_8041A50C:
    // 8041A50C: b       0x8041A514
    {
            goto label_8041A514;
    }

label_8041A510:
    ctx->downcount -= 1;
    // 8041A510: li      r31, 7
    ctx->gpr[31] = (u32)(s32)(7);

label_8041A514:
    ctx->pc = 0x8041A514u;
    ctx->downcount -= 3;
    // 8041A514: lbz     r4, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[4] = mem_read8(ctx, ea);
    }

label_8041A518:
    // 8041A518: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041A51C:
    // 8041A51C: bl      0x8041A154
    {
            ctx->lr = 0x8041A520u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041A154u;
                return;
            }
            goto label_8041A154;
    }

label_8041A520:
    ctx->downcount -= 4;
    // 8041A520: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A524:
    ctx->pc = 0x8041A524u;
    // 8041A524: lwz     r3, 232(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A528:
    // 8041A528: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A52C:
    // 8041A52C: bl      0x8041CC98
    {
            ctx->lr = 0x8041A530u;
            ctx->pc = 0x8041CC98u;
            return;
    }

label_8041A530:
    ctx->pc = 0x8041A530u;
    ctx->downcount -= 16;
    // 8041A530: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041A534:
    ctx->pc = 0x8041A534u;
    // 8041A534: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A538:
    ctx->pc = 0x8041A538u;
    // 8041A538: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A53C:
    // 8041A53C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A540:
    ctx->pc = 0x8041A540u;
    // 8041A540: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A544:
    ctx->pc = 0x8041A544u;
    ctx->downcount -= 6;
    // 8041A544: lwz     r3, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A548:
    ctx->pc = 0x8041A548u;
    // 8041A548: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A54C:
    ctx->pc = 0x8041A54Cu;
    // 8041A54C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A550:
    ctx->pc = 0x8041A550u;
    // 8041A550: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A554:
    ctx->pc = 0x8041A554u;
    // 8041A554: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A558:
    ctx->pc = 0x8041A558u;
    ctx->downcount -= 6;
    // 8041A558: lwz     r3, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A55C:
    ctx->pc = 0x8041A55Cu;
    // 8041A55C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A560:
    ctx->pc = 0x8041A560u;
    // 8041A560: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A564:
    ctx->pc = 0x8041A564u;
    // 8041A564: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A568:
    ctx->pc = 0x8041A568u;
    // 8041A568: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A56C:
    ctx->pc = 0x8041A56Cu;
    ctx->downcount -= 3;
    // 8041A56C: lwz     r3, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A570:
    ctx->pc = 0x8041A570u;
    // 8041A570: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A574:
    ctx->pc = 0x8041A574u;
    // 8041A574: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A578:
    ctx->pc = 0x8041A578u;
    ctx->downcount -= 7;
    // 8041A578: lwz     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A57C:
    // 8041A57C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A580:
    ctx->pc = 0x8041A580u;
    // 8041A580: lwz     r5, 104(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A584:
    ctx->pc = 0x8041A584u;
    // 8041A584: lwz     r6, 112(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(112);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A588:
    // 8041A588: addi    r0, r5, -2
    ctx->gpr[0] = ctx->gpr[5] + (u32)(s32)(-2);

label_8041A58C:
    // 8041A58C: cmpw    r6, r0
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

label_8041A590:
    // 8041A590: bc    4, 2, 0x8041A598
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A598;
        }
    }

label_8041A594:
    ctx->downcount -= 1;
    // 8041A594: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041A598:
    ctx->pc = 0x8041A598u;
    ctx->downcount -= 2;
    // 8041A598: lwz     r3, 228(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A59C:
    // 8041A59C: b       0x80424E2C
    {
            ctx->pc = 0x80424E2Cu;
            return;
    }

label_8041A5A0:
    ctx->pc = 0x8041A5A0u;
    ctx->downcount -= 2;
    // 8041A5A0: lwz     r4, 212(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A5A4:
    // 8041A5A4: b       0x8041C138
    {
            ctx->pc = 0x8041C138u;
            return;
    }

label_8041A5A8:
    ctx->pc = 0x8041A5A8u;
    ctx->downcount -= 2;
    // 8041A5A8: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A5AC:
    // 8041A5AC: b       0x8041C1FC
    {
            ctx->pc = 0x8041C1FCu;
            return;
    }

label_8041A5B0:
    ctx->pc = 0x8041A5B0u;
    ctx->downcount -= 5;
    // 8041A5B0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A5B4:
    ctx->pc = 0x8041A5B4u;
    // 8041A5B4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A5B8:
    ctx->pc = 0x8041A5B8u;
    // 8041A5B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A5BC:
    ctx->pc = 0x8041A5BCu;
    // 8041A5BC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A5C0:
    ctx->pc = 0x8041A5C0u;
    ctx->downcount -= 11;
    // 8041A5C0: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A5C4:
    ctx->pc = 0x8041A5C4u;
    // 8041A5C4: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A5C8:
    ctx->pc = 0x8041A5C8u;
    // 8041A5C8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A5CC:
    ctx->pc = 0x8041A5CCu;
    // 8041A5CC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A5D0:
    // 8041A5D0: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A5D4:
    ctx->pc = 0x8041A5D4u;
    // 8041A5D4: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A5D8:
    ctx->pc = 0x8041A5D8u;
    // 8041A5D8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A5DC:
    ctx->pc = 0x8041A5DCu;
    // 8041A5DC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A5E0:
    ctx->pc = 0x8041A5E0u;
    // 8041A5E0: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A5E4:
    ctx->pc = 0x8041A5E4u;
    // 8041A5E4: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041A5E8u;
            ctx->pc = target;
            return;
        }
    }

label_8041A5E8:
    ctx->pc = 0x8041A5E8u;
    ctx->downcount -= 3;
    // 8041A5E8: lbz     r0, 256(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A5EC:
    // 8041A5EC: cmpwi   r0, 0
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

label_8041A5F0:
    // 8041A5F0: bc    4, 2, 0x8041A61C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A61C;
        }
    }

label_8041A5F4:
    ctx->pc = 0x8041A5F4u;
    ctx->downcount -= 6;
    // 8041A5F4: lwz     r3, 220(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A5F8:
    ctx->pc = 0x8041A5F8u;
    // 8041A5F8: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A5FC:
    ctx->pc = 0x8041A5FCu;
    // 8041A5FC: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A600:
    ctx->pc = 0x8041A600u;
    // 8041A600: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A604:
    ctx->pc = 0x8041A604u;
    // 8041A604: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041A608u;
            ctx->pc = target;
            return;
        }
    }

label_8041A608:
    ctx->pc = 0x8041A608u;
    ctx->downcount -= 6;
    // 8041A608: lwz     r3, 216(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A60C:
    ctx->pc = 0x8041A60Cu;
    // 8041A60C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A610:
    ctx->pc = 0x8041A610u;
    // 8041A610: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A614:
    ctx->pc = 0x8041A614u;
    // 8041A614: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A618:
    ctx->pc = 0x8041A618u;
    // 8041A618: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041A61Cu;
            ctx->pc = target;
            return;
        }
    }

label_8041A61C:
    ctx->pc = 0x8041A61Cu;
    ctx->downcount -= 6;
    // 8041A61C: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A620:
    ctx->pc = 0x8041A620u;
    // 8041A620: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A624:
    ctx->pc = 0x8041A624u;
    // 8041A624: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A628:
    // 8041A628: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A62C:
    ctx->pc = 0x8041A62Cu;
    // 8041A62C: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A630:
    ctx->pc = 0x8041A630u;
    ctx->downcount -= 3;
    // 8041A630: lbz     r0, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A634:
    // 8041A634: cmpwi   r0, 0
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

label_8041A638:
    // 8041A638: bc    12, 2, 0x8041A648
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A648;
        }
    }

label_8041A63C:
    ctx->pc = 0x8041A63Cu;
    ctx->downcount -= 3;
    // 8041A63C: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A640:
    ctx->pc = 0x8041A640u;
    // 8041A640: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A644:
    ctx->pc = 0x8041A644u;
    // 8041A644: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A648:
    ctx->pc = 0x8041A648u;
    ctx->downcount -= 5;
    // 8041A648: lwz     r4, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A64C:
    // 8041A64C: li      r5, 0
    ctx->gpr[5] = (u32)(s32)(0);

label_8041A650:
    ctx->pc = 0x8041A650u;
    // 8041A650: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A654:
    // 8041A654: cmpwi   r0, 0
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

label_8041A658:
    // 8041A658: bc    12, 2, 0x8041A680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A680;
        }
    }

label_8041A65C:
    ctx->pc = 0x8041A65Cu;
    ctx->downcount -= 4;
    // 8041A65C: lwz     r4, 220(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(220);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A660:
    ctx->pc = 0x8041A660u;
    // 8041A660: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A664:
    // 8041A664: cmpwi   r0, 0
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

label_8041A668:
    // 8041A668: bc    12, 2, 0x8041A680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A680;
        }
    }

label_8041A66C:
    ctx->pc = 0x8041A66Cu;
    ctx->downcount -= 4;
    // 8041A66C: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A670:
    ctx->pc = 0x8041A670u;
    // 8041A670: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A674:
    // 8041A674: cmpwi   r0, 0
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

label_8041A678:
    // 8041A678: bc    12, 2, 0x8041A680
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A680;
        }
    }

label_8041A67C:
    ctx->downcount -= 1;
    // 8041A67C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8041A680:
    ctx->downcount -= 2;
    // 8041A680: or   r3, r5, r5
    {
        ctx->gpr[3] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8041A684:
    ctx->pc = 0x8041A684u;
    // 8041A684: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A688:
    ctx->pc = 0x8041A688u;
    ctx->downcount -= 21;
    // 8041A688: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A68C:
    ctx->pc = 0x8041A68Cu;
    // 8041A68C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A690:
    // 8041A690: cmpwi   r4, 0
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

label_8041A694:
    ctx->pc = 0x8041A694u;
    // 8041A694: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A698:
    ctx->pc = 0x8041A698u;
    // 8041A698: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041A69C:
    // 8041A69C: or   r30, r4, r4
    {
        ctx->gpr[30] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041A6A0:
    // 8041A6A0: or   r29, r3, r3
    {
        ctx->gpr[29] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A6A4:
    ctx->pc = 0x8041A6A4u;
    // 8041A6A4: lwz     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A6A8:
    ctx->pc = 0x8041A6A8u;
    // 8041A6A8: lwz     r4, 0(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(0);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A6AC:
    ctx->pc = 0x8041A6ACu;
    // 8041A6AC: stb     r5, 256(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(256);
        mem_write8(ctx, ea, (u8)ctx->gpr[5]);
    }

label_8041A6B0:
    // 8041A6B0: bc    12, 2, 0x8041A760
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A760;
        }
    }

label_8041A6B4:
    ctx->pc = 0x8041A6B4u;
    ctx->downcount -= 2;
    // 8041A6B4: lwz     r3, 216(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A6B8:
    // 8041A6B8: bl      0x8041BA00
    {
            ctx->lr = 0x8041A6BCu;
            ctx->pc = 0x8041BA00u;
            return;
    }

label_8041A6BC:
    ctx->pc = 0x8041A6BCu;
    ctx->downcount -= 5;
    // 8041A6BC: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A6C0:
    // 8041A6C0: li      r31, 2
    ctx->gpr[31] = (u32)(s32)(2);

label_8041A6C4:
    ctx->pc = 0x8041A6C4u;
    // 8041A6C4: lbz     r0, 84(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A6C8:
    // 8041A6C8: cmpwi   r0, 0
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

label_8041A6CC:
    // 8041A6CC: bc    12, 2, 0x8041A6D4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A6D4;
        }
    }

label_8041A6D0:
    ctx->downcount -= 1;
    // 8041A6D0: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8041A6D4:
    ctx->pc = 0x8041A6D4u;
    ctx->downcount -= 3;
    // 8041A6D4: lwz     r3, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A6D8:
    // 8041A6D8: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A6DC:
    // 8041A6DC: bl      0x8041C6F8
    {
            ctx->lr = 0x8041A6E0u;
            ctx->pc = 0x8041C6F8u;
            return;
    }

label_8041A6E0:
    ctx->pc = 0x8041A6E0u;
    ctx->downcount -= 3;
    // 8041A6E0: lwz     r3, 216(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A6E4:
    // 8041A6E4: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A6E8:
    // 8041A6E8: bl      0x8041BAB4
    {
            ctx->lr = 0x8041A6ECu;
            ctx->pc = 0x8041BAB4u;
            return;
    }

label_8041A6EC:
    ctx->pc = 0x8041A6ECu;
    ctx->downcount -= 5;
    // 8041A6EC: lwz     r5, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A6F0:
    ctx->pc = 0x8041A6F0u;
    // 8041A6F0: lwz     r3, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A6F4:
    ctx->pc = 0x8041A6F4u;
    // 8041A6F4: lwz     r4, 100(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(100);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A6F8:
    ctx->pc = 0x8041A6F8u;
    // 8041A6F8: lwz     r5, 104(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(104);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A6FC:
    // 8041A6FC: bl      0x8041C670
    {
            ctx->lr = 0x8041A700u;
            ctx->pc = 0x8041C670u;
            return;
    }

label_8041A700:
    ctx->pc = 0x8041A700u;
    ctx->downcount -= 5;
    // 8041A700: lwz     r4, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041A704:
    // 8041A704: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041A708:
    ctx->pc = 0x8041A708u;
    // 8041A708: lbz     r31, 108(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(108);
        ctx->gpr[31] = mem_read8(ctx, ea);
    }

label_8041A70C:
    // 8041A70C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A710:
    // 8041A710: bl      0x8041A154
    {
            ctx->lr = 0x8041A714u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041A154u;
                return;
            }
            goto label_8041A154;
    }

label_8041A714:
    ctx->downcount -= 4;
    // 8041A714: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A718:
    ctx->pc = 0x8041A718u;
    // 8041A718: lwz     r3, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A71C:
    // 8041A71C: or   r5, r31, r31
    {
        ctx->gpr[5] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A720:
    // 8041A720: bl      0x8041C62C
    {
            ctx->lr = 0x8041A724u;
            ctx->pc = 0x8041C62Cu;
            return;
    }

label_8041A724:
    ctx->pc = 0x8041A724u;
    ctx->downcount -= 2;
    // 8041A724: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A728:
    // 8041A728: bl      0x8041E1D8
    {
            ctx->lr = 0x8041A72Cu;
            ctx->pc = 0x8041E1D8u;
            return;
    }

label_8041A72C:
    ctx->pc = 0x8041A72Cu;
    ctx->downcount -= 5;
    // 8041A72C: fctiwz    f0, f1
    if (!ppc_fp_available_inline(ctx, 0x8041A72Cu)) return;
    { u64 result; if (ppc_fctiw(ctx, ctx->fpr[1], true, &result)) ctx->fpr[0] = dolrecomp_f64_from_bits(result); }

label_8041A730:
    ctx->pc = 0x8041A730u;
    // 8041A730: lwz     r3, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A734:
    ctx->pc = 0x8041A734u;
    // 8041A734: stfd     f0, 8(r1)
    if (!ppc_fp_available_inline(ctx, 0x8041A734u)) return;
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        mem_write64(ctx, ea, dolrecomp_f64_to_bits(ctx->fpr[0]));
    }

label_8041A738:
    ctx->pc = 0x8041A738u;
    // 8041A738: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A73C:
    // 8041A73C: bl      0x8041E0E8
    {
            ctx->lr = 0x8041A740u;
            ctx->pc = 0x8041E0E8u;
            return;
    }

label_8041A740:
    ctx->pc = 0x8041A740u;
    ctx->downcount -= 6;
    // 8041A740: lwz     r6, 184(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A744:
    // 8041A744: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A748:
    ctx->pc = 0x8041A748u;
    // 8041A748: lwz     r3, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A74C:
    // 8041A74C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A750:
    ctx->pc = 0x8041A750u;
    // 8041A750: lbz     r6, 252(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(252);
        ctx->gpr[6] = mem_read8(ctx, ea);
    }

label_8041A754:
    // 8041A754: bl      0x8041C55C
    {
            ctx->lr = 0x8041A758u;
            ctx->pc = 0x8041C55Cu;
            return;
    }

label_8041A758:
    ctx->downcount -= 2;
    // 8041A758: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041A75C:
    // 8041A75C: bl      0x8041A018
    {
            ctx->lr = 0x8041A760u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041A018u;
                return;
            }
            goto label_8041A018;
    }

label_8041A760:
    ctx->pc = 0x8041A760u;
    ctx->downcount -= 3;
    // 8041A760: lwz     r3, 212(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A764:
    // 8041A764: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041A768:
    // 8041A768: bl      0x8041C750
    {
            ctx->lr = 0x8041A76Cu;
            ctx->pc = 0x8041C750u;
            return;
    }

label_8041A76C:
    ctx->pc = 0x8041A76Cu;
    ctx->downcount -= 3;
    // 8041A76C: lbz     r0, 256(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(256);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A770:
    // 8041A770: cmpwi   r0, 0
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

label_8041A774:
    // 8041A774: bc    4, 2, 0x8041A790
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A790;
        }
    }

label_8041A778:
    ctx->pc = 0x8041A778u;
    ctx->downcount -= 3;
    // 8041A778: lwz     r3, 220(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A77C:
    // 8041A77C: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041A780:
    // 8041A780: bl      0x80424B38
    {
            ctx->lr = 0x8041A784u;
            ctx->pc = 0x80424B38u;
            return;
    }

label_8041A784:
    ctx->pc = 0x8041A784u;
    ctx->downcount -= 3;
    // 8041A784: lwz     r3, 216(r29)
    {
        u32 ea = ctx->gpr[29] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A788:
    // 8041A788: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041A78C:
    // 8041A78C: bl      0x8041BB30
    {
            ctx->lr = 0x8041A790u;
            ctx->pc = 0x8041BB30u;
            return;
    }

label_8041A790:
    ctx->downcount -= 2;
    // 8041A790: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041A794:
    // 8041A794: bl      0x8041A0E0
    {
            ctx->lr = 0x8041A798u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x8041A0E0u;
                return;
            }
            goto label_8041A0E0;
    }

label_8041A798:
    ctx->downcount -= 3;
    // 8041A798: addi    r3, r29, 100
    ctx->gpr[3] = ctx->gpr[29] + (u32)(s32)(100);

label_8041A79C:
    // 8041A79C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A7A0:
    // 8041A7A0: bl      0x803457B8
    {
            ctx->lr = 0x8041A7A4u;
            ctx->pc = 0x803457B8u;
            return;
    }

label_8041A7A4:
    ctx->pc = 0x8041A7A4u;
    ctx->downcount -= 16;
    // 8041A7A4: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041A7A8:
    ctx->pc = 0x8041A7A8u;
    // 8041A7A8: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A7AC:
    ctx->pc = 0x8041A7ACu;
    // 8041A7AC: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A7B0:
    // 8041A7B0: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041A7B4:
    ctx->pc = 0x8041A7B4u;
    // 8041A7B4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A7B8:
    ctx->pc = 0x8041A7B8u;
    ctx->downcount -= 6;
    // 8041A7B8: lwz     r3, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A7BC:
    ctx->pc = 0x8041A7BCu;
    // 8041A7BC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A7C0:
    ctx->pc = 0x8041A7C0u;
    // 8041A7C0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A7C4:
    ctx->pc = 0x8041A7C4u;
    // 8041A7C4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A7C8:
    ctx->pc = 0x8041A7C8u;
    // 8041A7C8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A7CC:
    ctx->pc = 0x8041A7CCu;
    ctx->downcount -= 6;
    // 8041A7CC: lwz     r3, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A7D0:
    ctx->pc = 0x8041A7D0u;
    // 8041A7D0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A7D4:
    ctx->pc = 0x8041A7D4u;
    // 8041A7D4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A7D8:
    ctx->pc = 0x8041A7D8u;
    // 8041A7D8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A7DC:
    ctx->pc = 0x8041A7DCu;
    // 8041A7DC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A7E0:
    ctx->pc = 0x8041A7E0u;
    ctx->downcount -= 3;
    // 8041A7E0: lwz     r3, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A7E4:
    ctx->pc = 0x8041A7E4u;
    // 8041A7E4: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A7E8:
    ctx->pc = 0x8041A7E8u;
    // 8041A7E8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A7EC:
    ctx->pc = 0x8041A7ECu;
    ctx->downcount -= 10;
    // 8041A7EC: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A7F0:
    ctx->pc = 0x8041A7F0u;
    // 8041A7F0: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A7F4:
    // 8041A7F4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041A7F8:
    ctx->pc = 0x8041A7F8u;
    // 8041A7F8: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A7FC:
    ctx->pc = 0x8041A7FCu;
    // 8041A7FC: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A800:
    // 8041A800: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A804:
    ctx->pc = 0x8041A804u;
    // 8041A804: lwz     r5, 184(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(184);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A808:
    ctx->pc = 0x8041A808u;
    // 8041A808: lwz     r3, 244(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A80C:
    ctx->pc = 0x8041A80Cu;
    // 8041A80C: lwz     r5, 112(r5)
    {
        u32 ea = ctx->gpr[5] + (u32)(s32)(112);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041A810:
    // 8041A810: bl      0x8041DB98
    {
            ctx->lr = 0x8041A814u;
            ctx->pc = 0x8041DB98u;
            return;
    }

label_8041A814:
    ctx->pc = 0x8041A814u;
    ctx->downcount -= 6;
    // 8041A814: lwz     r3, 244(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A818:
    ctx->pc = 0x8041A818u;
    // 8041A818: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A81C:
    ctx->pc = 0x8041A81Cu;
    // 8041A81C: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A820:
    ctx->pc = 0x8041A820u;
    // 8041A820: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A824:
    ctx->pc = 0x8041A824u;
    // 8041A824: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041A828u;
            ctx->pc = target;
            return;
        }
    }

label_8041A828:
    ctx->pc = 0x8041A828u;
    ctx->downcount -= 6;
    // 8041A828: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A82C:
    ctx->pc = 0x8041A82Cu;
    // 8041A82C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A830:
    ctx->pc = 0x8041A830u;
    // 8041A830: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A834:
    // 8041A834: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A838:
    ctx->pc = 0x8041A838u;
    // 8041A838: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A83C:
    ctx->pc = 0x8041A83Cu;
    ctx->downcount -= 14;
    // 8041A83C: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A840:
    ctx->pc = 0x8041A840u;
    // 8041A840: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A844:
    // 8041A844: lis     r4, 1
    ctx->gpr[4] = ((u32)(s32)(1) << 16);

label_8041A848:
    // 8041A848: li      r5, 99
    ctx->gpr[5] = (u32)(s32)(99);

label_8041A84C:
    ctx->pc = 0x8041A84Cu;
    // 8041A84C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A850:
    // 8041A850: addi    r4, r4, -19736
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(-19736);

label_8041A854:
    // 8041A854: li      r6, 3
    ctx->gpr[6] = (u32)(s32)(3);

label_8041A858:
    // 8041A858: li      r7, 1
    ctx->gpr[7] = (u32)(s32)(1);

label_8041A85C:
    ctx->pc = 0x8041A85Cu;
    // 8041A85C: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A860:
    // 8041A860: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A864:
    // 8041A864: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8041A868:
    ctx->pc = 0x8041A868u;
    // 8041A868: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A86C:
    // 8041A86C: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041A870:
    // 8041A870: bl      0x8035168C
    {
            ctx->lr = 0x8041A874u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_8041A874:
    ctx->downcount -= 2;
    // 8041A874: li      r3, 123
    ctx->gpr[3] = (u32)(s32)(123);

label_8041A878:
    // 8041A878: bl      0x802B73BC
    {
            ctx->lr = 0x8041A87Cu;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8041A87C:
    ctx->downcount -= 8;
    // 8041A87C: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8041A880:
    ctx->pc = 0x8041A880u;
    // 8041A880: stb     r0, 257(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(257);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041A884:
    ctx->pc = 0x8041A884u;
    // 8041A884: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A888:
    ctx->pc = 0x8041A888u;
    // 8041A888: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A88C:
    ctx->pc = 0x8041A88Cu;
    // 8041A88C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A890:
    // 8041A890: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A894:
    ctx->pc = 0x8041A894u;
    // 8041A894: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A898:
    ctx->pc = 0x8041A898u;
    ctx->downcount -= 6;
    // 8041A898: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A89C:
    ctx->pc = 0x8041A89Cu;
    // 8041A89C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A8A0:
    ctx->pc = 0x8041A8A0u;
    // 8041A8A0: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A8A4:
    ctx->pc = 0x8041A8A4u;
    // 8041A8A4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A8A8:
    ctx->pc = 0x8041A8A8u;
    // 8041A8A8: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A8AC:
    ctx->pc = 0x8041A8ACu;
    ctx->downcount -= 6;
    // 8041A8AC: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A8B0:
    ctx->pc = 0x8041A8B0u;
    // 8041A8B0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A8B4:
    ctx->pc = 0x8041A8B4u;
    // 8041A8B4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A8B8:
    ctx->pc = 0x8041A8B8u;
    // 8041A8B8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A8BC:
    ctx->pc = 0x8041A8BCu;
    // 8041A8BC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A8C0:
    ctx->pc = 0x8041A8C0u;
    ctx->downcount -= 3;
    // 8041A8C0: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A8C4:
    ctx->pc = 0x8041A8C4u;
    // 8041A8C4: lbz     r3, 286(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(286);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A8C8:
    ctx->pc = 0x8041A8C8u;
    // 8041A8C8: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A8CC:
    ctx->pc = 0x8041A8CCu;
    ctx->downcount -= 3;
    // 8041A8CC: lwz     r3, 200(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A8D0:
    ctx->pc = 0x8041A8D0u;
    // 8041A8D0: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A8D4:
    ctx->pc = 0x8041A8D4u;
    // 8041A8D4: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A8D8:
    ctx->pc = 0x8041A8D8u;
    ctx->downcount -= 22;
    // 8041A8D8: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A8DC:
    ctx->pc = 0x8041A8DCu;
    // 8041A8DC: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A8E0:
    // 8041A8E0: lis     r5, -32661
    ctx->gpr[5] = ((u32)(s32)(-32661) << 16);

label_8041A8E4:
    ctx->pc = 0x8041A8E4u;
    // 8041A8E4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A8E8:
    ctx->pc = 0x8041A8E8u;
    // 8041A8E8: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041A8EC:
    // 8041A8EC: or   r31, r4, r4
    {
        ctx->gpr[31] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041A8F0:
    // 8041A8F0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A8F4:
    // 8041A8F4: addi    r4, r5, 21472
    ctx->gpr[4] = ctx->gpr[5] + (u32)(s32)(21472);

label_8041A8F8:
    ctx->pc = 0x8041A8F8u;
    // 8041A8F8: lwz     r6, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041A8FC:
    // 8041A8FC: addic   r0, r6, -1
    {
        u64 a = ctx->gpr[6];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041A900:
    // 8041A900: subfe   r3, r0, r6
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[6];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041A904:
    // 8041A904: bl      0x80370BD4
    {
            ctx->lr = 0x8041A908u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041A908:
    ctx->pc = 0x8041A908u;
    ctx->downcount -= 3;
    // 8041A908: lwz     r3, -12864(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12864);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A90C:
    // 8041A90C: or   r4, r31, r31
    {
        ctx->gpr[4] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A910:
    // 8041A910: bl      0x802779A0
    {
            ctx->lr = 0x8041A914u;
            ctx->pc = 0x802779A0u;
            return;
    }

label_8041A914:
    ctx->downcount -= 4;
    // 8041A914: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A918:
    ctx->pc = 0x8041A918u;
    // 8041A918: lwz     r3, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A91C:
    // 8041A91C: li      r5, 1
    ctx->gpr[5] = (u32)(s32)(1);

label_8041A920:
    // 8041A920: bl      0x80374C04
    {
            ctx->lr = 0x8041A924u;
            ctx->pc = 0x80374C04u;
            return;
    }

label_8041A924:
    ctx->pc = 0x8041A924u;
    ctx->downcount -= 16;
    // 8041A924: lmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041A928:
    ctx->pc = 0x8041A928u;
    // 8041A928: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A92C:
    ctx->pc = 0x8041A92Cu;
    // 8041A92C: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A930:
    // 8041A930: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A934:
    ctx->pc = 0x8041A934u;
    // 8041A934: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A938:
    ctx->pc = 0x8041A938u;
    ctx->downcount -= 3;
    // 8041A938: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A93C:
    ctx->pc = 0x8041A93Cu;
    // 8041A93C: lbz     r3, 2589(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(2589);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041A940:
    ctx->pc = 0x8041A940u;
    // 8041A940: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A944:
    ctx->pc = 0x8041A944u;
    ctx->downcount -= 2;
    // 8041A944: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A948:
    // 8041A948: b       0x8035144C
    {
            ctx->pc = 0x8035144Cu;
            return;
    }

label_8041A94C:
    ctx->pc = 0x8041A94Cu;
    ctx->downcount -= 2;
    // 8041A94C: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A950:
    // 8041A950: b       0x80351528
    {
            ctx->pc = 0x80351528u;
            return;
    }

label_8041A954:
    ctx->pc = 0x8041A954u;
    ctx->downcount -= 6;
    // 8041A954: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A958:
    ctx->pc = 0x8041A958u;
    // 8041A958: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A95C:
    ctx->pc = 0x8041A95Cu;
    // 8041A95C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041A960:
    ctx->pc = 0x8041A960u;
    // 8041A960: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041A964:
    ctx->pc = 0x8041A964u;
    // 8041A964: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041A968:
    ctx->pc = 0x8041A968u;
    ctx->downcount -= 9;
    // 8041A968: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A96C:
    ctx->pc = 0x8041A96Cu;
    // 8041A96C: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A970:
    ctx->pc = 0x8041A970u;
    // 8041A970: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A974:
    ctx->pc = 0x8041A974u;
    // 8041A974: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A978:
    // 8041A978: li      r31, 0
    ctx->gpr[31] = (u32)(s32)(0);

label_8041A97C:
    ctx->pc = 0x8041A97Cu;
    // 8041A97C: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A980:
    ctx->pc = 0x8041A980u;
    // 8041A980: lbz     r0, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041A984:
    // 8041A984: cmpwi   r0, 0
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

label_8041A988:
    // 8041A988: bc    12, 2, 0x8041A99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041A99C;
        }
    }

label_8041A98C:
    ctx->downcount -= 1;
    // 8041A98C: bl      0x80351440
    {
            ctx->lr = 0x8041A990u;
            ctx->pc = 0x80351440u;
            return;
    }

label_8041A990:
    ctx->downcount -= 2;
    // 8041A990: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041A994:
    // 8041A994: bc    4, 2, 0x8041A99C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A99C;
        }
    }

label_8041A998:
    ctx->downcount -= 1;
    // 8041A998: li      r31, 1
    ctx->gpr[31] = (u32)(s32)(1);

label_8041A99C:
    ctx->downcount -= 7;
    // 8041A99C: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041A9A0:
    ctx->pc = 0x8041A9A0u;
    // 8041A9A0: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041A9A4:
    ctx->pc = 0x8041A9A4u;
    // 8041A9A4: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041A9A8:
    ctx->pc = 0x8041A9A8u;
    // 8041A9A8: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041A9AC:
    // 8041A9AC: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041A9B0:
    ctx->pc = 0x8041A9B0u;
    // 8041A9B0: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041A9B4:
    ctx->pc = 0x8041A9B4u;
    ctx->downcount -= 8;
    // 8041A9B4: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041A9B8:
    ctx->pc = 0x8041A9B8u;
    // 8041A9B8: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041A9BC:
    // 8041A9BC: cmpwi   r5, 0
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

label_8041A9C0:
    // 8041A9C0: or   r6, r5, r5
    {
        ctx->gpr[6] = ctx->gpr[5] | ctx->gpr[5];
    }

label_8041A9C4:
    ctx->pc = 0x8041A9C4u;
    // 8041A9C4: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041A9C8:
    ctx->pc = 0x8041A9C8u;
    // 8041A9C8: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041A9CC:
    // 8041A9CC: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041A9D0:
    // 8041A9D0: bc    4, 1, 0x8041A9FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x40000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041A9FC;
        }
    }

label_8041A9D4:
    ctx->downcount -= 9;
    // 8041A9D4: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_8041A9D8:
    ctx->pc = 0x8041A9D8u;
    // 8041A9D8: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041A9DC:
    // 8041A9DC: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041A9E0:
    // 8041A9E0: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8041A9E4:
    // 8041A9E4: addi    r4, r7, -19736
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(-19736);

label_8041A9E8:
    // 8041A9E8: li      r7, 4
    ctx->gpr[7] = (u32)(s32)(4);

label_8041A9EC:
    // 8041A9EC: li      r9, 0
    ctx->gpr[9] = (u32)(s32)(0);

label_8041A9F0:
    // 8041A9F0: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041A9F4:
    // 8041A9F4: bl      0x80351590
    {
            ctx->lr = 0x8041A9F8u;
            ctx->pc = 0x80351590u;
            return;
    }

label_8041A9F8:
    ctx->downcount -= 1;
    // 8041A9F8: b       0x8041AA20
    {
            goto label_8041AA20;
    }

label_8041A9FC:
    ctx->downcount -= 9;
    // 8041A9FC: lis     r7, 1
    ctx->gpr[7] = ((u32)(s32)(1) << 16);

label_8041AA00:
    ctx->pc = 0x8041AA00u;
    // 8041AA00: lwz     r3, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AA04:
    // 8041AA04: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041AA08:
    // 8041AA08: li      r6, 4
    ctx->gpr[6] = (u32)(s32)(4);

label_8041AA0C:
    // 8041AA0C: addi    r4, r7, -19736
    ctx->gpr[4] = ctx->gpr[7] + (u32)(s32)(-19736);

label_8041AA10:
    // 8041AA10: li      r7, 0
    ctx->gpr[7] = (u32)(s32)(0);

label_8041AA14:
    // 8041AA14: li      r8, 0
    ctx->gpr[8] = (u32)(s32)(0);

label_8041AA18:
    // 8041AA18: crxor   6, 6, 6
    {
        u32 a = (ctx->cr >> (31u - 6u)) & 1u;
        u32 b = (ctx->cr >> (31u - 6u)) & 1u;
        u32 mask = 0x80000000u >> 6;
        u32 value = (a ^ b) & 1u;
        ctx->cr = (ctx->cr & ~mask) | (value ? mask : 0u);
    }

label_8041AA1C:
    // 8041AA1C: bl      0x8035168C
    {
            ctx->lr = 0x8041AA20u;
            ctx->pc = 0x8035168Cu;
            return;
    }

label_8041AA20:
    ctx->downcount -= 2;
    // 8041AA20: li      r3, 123
    ctx->gpr[3] = (u32)(s32)(123);

label_8041AA24:
    // 8041AA24: bl      0x802B73BC
    {
            ctx->lr = 0x8041AA28u;
            ctx->pc = 0x802B73BCu;
            return;
    }

label_8041AA28:
    ctx->downcount -= 8;
    // 8041AA28: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8041AA2C:
    ctx->pc = 0x8041AA2Cu;
    // 8041AA2C: stb     r0, 257(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(257);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041AA30:
    ctx->pc = 0x8041AA30u;
    // 8041AA30: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041AA34:
    ctx->pc = 0x8041AA34u;
    // 8041AA34: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041AA38:
    ctx->pc = 0x8041AA38u;
    // 8041AA38: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041AA3C:
    // 8041AA3C: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041AA40:
    ctx->pc = 0x8041AA40u;
    // 8041AA40: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AA44:
    ctx->pc = 0x8041AA44u;
    ctx->downcount -= 6;
    // 8041AA44: lwz     r3, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AA48:
    ctx->pc = 0x8041AA48u;
    // 8041AA48: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AA4C:
    ctx->pc = 0x8041AA4Cu;
    // 8041AA4C: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AA50:
    ctx->pc = 0x8041AA50u;
    // 8041AA50: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AA54:
    ctx->pc = 0x8041AA54u;
    // 8041AA54: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AA58:
    ctx->pc = 0x8041AA58u;
    ctx->downcount -= 6;
    // 8041AA58: lwz     r3, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AA5C:
    ctx->pc = 0x8041AA5Cu;
    // 8041AA5C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AA60:
    ctx->pc = 0x8041AA60u;
    // 8041AA60: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AA64:
    ctx->pc = 0x8041AA64u;
    // 8041AA64: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AA68:
    ctx->pc = 0x8041AA68u;
    // 8041AA68: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AA6C:
    ctx->pc = 0x8041AA6Cu;
    ctx->downcount -= 3;
    // 8041AA6C: lwz     r3, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AA70:
    ctx->pc = 0x8041AA70u;
    // 8041AA70: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041AA74:
    ctx->pc = 0x8041AA74u;
    // 8041AA74: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AA78:
    ctx->pc = 0x8041AA78u;
    ctx->downcount -= 6;
    // 8041AA78: lwz     r6, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        ctx->gpr[6] = mem_read32(ctx, ea);
    }

label_8041AA7C:
    // 8041AA7C: or   r5, r4, r4
    {
        ctx->gpr[5] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041AA80:
    // 8041AA80: li      r4, 1
    ctx->gpr[4] = (u32)(s32)(1);

label_8041AA84:
    ctx->pc = 0x8041AA84u;
    // 8041AA84: lbz     r0, 84(r6)
    {
        u32 ea = ctx->gpr[6] + (u32)(s32)(84);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041AA88:
    // 8041AA88: cmpwi   r0, 0
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

label_8041AA8C:
    // 8041AA8C: bc    4, 2, 0x8041AA94
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == false);
        if (ctr_ok && cr_ok) {
            goto label_8041AA94;
        }
    }

label_8041AA90:
    ctx->downcount -= 1;
    // 8041AA90: li      r4, 2
    ctx->gpr[4] = (u32)(s32)(2);

label_8041AA94:
    ctx->pc = 0x8041AA94u;
    ctx->downcount -= 2;
    // 8041AA94: lwz     r3, 248(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AA98:
    // 8041AA98: b       0x8041DF3C
    {
            ctx->pc = 0x8041DF3Cu;
            return;
    }

label_8041AA9C:
    ctx->pc = 0x8041AA9Cu;
    ctx->downcount -= 6;
    // 8041AA9C: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAA0:
    ctx->pc = 0x8041AAA0u;
    // 8041AAA0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAA4:
    ctx->pc = 0x8041AAA4u;
    // 8041AAA4: lwz     r12, 72(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(72);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAA8:
    ctx->pc = 0x8041AAA8u;
    // 8041AAA8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AAAC:
    ctx->pc = 0x8041AAACu;
    // 8041AAAC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AAB0:
    ctx->pc = 0x8041AAB0u;
    ctx->downcount -= 6;
    // 8041AAB0: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAB4:
    ctx->pc = 0x8041AAB4u;
    // 8041AAB4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAB8:
    ctx->pc = 0x8041AAB8u;
    // 8041AAB8: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AABC:
    ctx->pc = 0x8041AABCu;
    // 8041AABC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AAC0:
    ctx->pc = 0x8041AAC0u;
    // 8041AAC0: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AAC4:
    ctx->pc = 0x8041AAC4u;
    ctx->downcount -= 3;
    // 8041AAC4: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAC8:
    ctx->pc = 0x8041AAC8u;
    // 8041AAC8: lbz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read8(ctx, ea);
    }

label_8041AACC:
    ctx->pc = 0x8041AACCu;
    // 8041AACC: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AAD0:
    ctx->pc = 0x8041AAD0u;
    ctx->downcount -= 3;
    // 8041AAD0: lwz     r3, 192(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAD4:
    // 8041AAD4: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041AAD8:
    // 8041AAD8: b       0x8037386C
    {
            ctx->pc = 0x8037386Cu;
            return;
    }

label_8041AADC:
    ctx->pc = 0x8041AADCu;
    ctx->downcount -= 6;
    // 8041AADC: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAE0:
    ctx->pc = 0x8041AAE0u;
    // 8041AAE0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAE4:
    ctx->pc = 0x8041AAE4u;
    // 8041AAE4: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAE8:
    ctx->pc = 0x8041AAE8u;
    // 8041AAE8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AAEC:
    ctx->pc = 0x8041AAECu;
    // 8041AAEC: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AAF0:
    ctx->pc = 0x8041AAF0u;
    ctx->downcount -= 6;
    // 8041AAF0: lwz     r3, 188(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AAF4:
    ctx->pc = 0x8041AAF4u;
    // 8041AAF4: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAF8:
    ctx->pc = 0x8041AAF8u;
    // 8041AAF8: lwz     r12, 244(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(244);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AAFC:
    ctx->pc = 0x8041AAFCu;
    // 8041AAFC: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AB00:
    ctx->pc = 0x8041AB00u;
    // 8041AB00: bctr
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            return;
        }
    }

label_8041AB04:
    ctx->pc = 0x8041AB04u;
    ctx->downcount -= 4;
    // 8041AB04: stw     r4, 184(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(184);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8041AB08:
    ctx->pc = 0x8041AB08u;
    // 8041AB08: lwz     r0, 8(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(8);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041AB0C:
    ctx->pc = 0x8041AB0Cu;
    // 8041AB0C: stw     r0, 148(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(148);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041AB10:
    ctx->pc = 0x8041AB10u;
    // 8041AB10: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AB14:
    ctx->pc = 0x8041AB14u;
    ctx->downcount -= 2;
    // 8041AB14: lwz     r3, 208(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AB18:
    // 8041AB18: b       0x80417E14
    {
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80417E14u;
                return;
            }
            goto label_80417E14;
    }

label_8041AB1C:
    ctx->pc = 0x8041AB1Cu;
    ctx->downcount -= 2;
    // 8041AB1C: lwz     r3, 212(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AB20:
    ctx->pc = 0x8041AB20u;
    // 8041AB20: b       0x8041BDBC
    {
            ctx->pc = 0x8041BDBCu;
            return;
    }

label_8041AB24:
    ctx->pc = 0x8041AB24u;
    ctx->downcount -= 9;
    // 8041AB24: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041AB28:
    ctx->pc = 0x8041AB28u;
    // 8041AB28: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041AB2C:
    ctx->pc = 0x8041AB2Cu;
    // 8041AB2C: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041AB30:
    ctx->pc = 0x8041AB30u;
    // 8041AB30: stw     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        mem_write32(ctx, ea, (u32)ctx->gpr[31]);
    }

label_8041AB34:
    ctx->pc = 0x8041AB34u;
    // 8041AB34: or   r31, r3, r3
    {
        ctx->gpr[31] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AB38:
    ctx->pc = 0x8041AB38u;
    // 8041AB38: lwz     r4, 196(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(196);
        ctx->gpr[4] = mem_read32(ctx, ea);
    }

label_8041AB3C:
    ctx->pc = 0x8041AB3Cu;
    // 8041AB3C: lbz     r0, 208(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(208);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041AB40:
    ctx->pc = 0x8041AB40u;
    // 8041AB40: cmpwi   r0, 0
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

label_8041AB44:
    ctx->pc = 0x8041AB44u;
    // 8041AB44: bc    12, 2, 0x8041AB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041AB70;
        }
    }

label_8041AB48:
    ctx->pc = 0x8041AB48u;
    ctx->downcount -= 3;
    // 8041AB48: lbz     r0, 257(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(257);
        ctx->gpr[0] = mem_read8(ctx, ea);
    }

label_8041AB4C:
    ctx->pc = 0x8041AB4Cu;
    // 8041AB4C: cmpwi   r0, 0
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

label_8041AB50:
    ctx->pc = 0x8041AB50u;
    // 8041AB50: bc    12, 2, 0x8041AB70
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041AB70;
        }
    }

label_8041AB54:
    ctx->pc = 0x8041AB54u;
    ctx->downcount -= 6;
    // 8041AB54: lwz     r12, 48(r4)
    {
        u32 ea = ctx->gpr[4] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AB58:
    ctx->pc = 0x8041AB58u;
    // 8041AB58: or   r3, r4, r4
    {
        ctx->gpr[3] = ctx->gpr[4] | ctx->gpr[4];
    }

label_8041AB5C:
    ctx->pc = 0x8041AB5Cu;
    // 8041AB5C: lwz     r12, 248(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(248);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AB60:
    ctx->pc = 0x8041AB60u;
    // 8041AB60: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AB64:
    ctx->pc = 0x8041AB64u;
    // 8041AB64: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AB68u;
            ctx->pc = target;
            return;
        }
    }

label_8041AB68:
    ctx->pc = 0x8041AB68u;
    ctx->downcount -= 2;
    // 8041AB68: li      r0, 0
    ctx->gpr[0] = (u32)(s32)(0);

label_8041AB6C:
    ctx->pc = 0x8041AB6Cu;
    // 8041AB6C: stb     r0, 257(r31)
    {
        u32 ea = ctx->gpr[31] + (u32)(s32)(257);
        mem_write8(ctx, ea, (u8)ctx->gpr[0]);
    }

label_8041AB70:
    ctx->pc = 0x8041AB70u;
    ctx->downcount -= 2;
    // 8041AB70: or   r3, r31, r31
    {
        ctx->gpr[3] = ctx->gpr[31] | ctx->gpr[31];
    }

label_8041AB74:
    ctx->pc = 0x8041AB74u;
    // 8041AB74: bl      0x80419F3C
    {
            ctx->lr = 0x8041AB78u;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x80419F3Cu;
                return;
            }
            goto label_80419F3C;
    }

label_8041AB78:
    ctx->pc = 0x8041AB78u;
    ctx->downcount -= 6;
    // 8041AB78: lwz     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041AB7C:
    ctx->pc = 0x8041AB7Cu;
    // 8041AB7C: lwz     r31, 12(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(12);
        ctx->gpr[31] = mem_read32(ctx, ea);
    }

label_8041AB80:
    ctx->pc = 0x8041AB80u;
    // 8041AB80: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041AB84:
    ctx->pc = 0x8041AB84u;
    // 8041AB84: addi    r1, r1, 16
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(16);

label_8041AB88:
    ctx->pc = 0x8041AB88u;
    // 8041AB88: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AB8C:
    ctx->pc = 0x8041AB8Cu;
    ctx->downcount -= 21;
    // 8041AB8C: stwu     r1, -32(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-32);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041AB90:
    ctx->pc = 0x8041AB90u;
    // 8041AB90: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041AB94:
    ctx->pc = 0x8041AB94u;
    // 8041AB94: stw     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041AB98:
    ctx->pc = 0x8041AB98u;
    // 8041AB98: stmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041AB9C:
    ctx->pc = 0x8041AB9Cu;
    // 8041AB9C: lis     r31, -32661
    ctx->gpr[31] = ((u32)(s32)(-32661) << 16);

label_8041ABA0:
    ctx->pc = 0x8041ABA0u;
    // 8041ABA0: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041ABA4:
    ctx->pc = 0x8041ABA4u;
    // 8041ABA4: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ABA8:
    ctx->pc = 0x8041ABA8u;
    // 8041ABA8: lwz     r5, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[5] = mem_read32(ctx, ea);
    }

label_8041ABAC:
    ctx->pc = 0x8041ABACu;
    // 8041ABAC: addic   r0, r5, -1
    {
        u64 a = ctx->gpr[5];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ABB0:
    ctx->pc = 0x8041ABB0u;
    // 8041ABB0: subfe   r3, r0, r5
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[5];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ABB4:
    ctx->pc = 0x8041ABB4u;
    // 8041ABB4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ABB8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ABB8:
    ctx->pc = 0x8041ABB8u;
    ctx->downcount -= 7;
    // 8041ABB8: lwz     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ABBC:
    ctx->pc = 0x8041ABBCu;
    // 8041ABBC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041ABC0:
    ctx->pc = 0x8041ABC0u;
    // 8041ABC0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ABC4:
    ctx->pc = 0x8041ABC4u;
    // 8041ABC4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ABC8:
    ctx->pc = 0x8041ABC8u;
    // 8041ABC8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041ABCC:
    ctx->pc = 0x8041ABCCu;
    // 8041ABCC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041ABD0u;
            ctx->pc = target;
            return;
        }
    }

label_8041ABD0:
    ctx->pc = 0x8041ABD0u;
    ctx->downcount -= 5;
    // 8041ABD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041ABD4:
    ctx->pc = 0x8041ABD4u;
    // 8041ABD4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041ABD8:
    ctx->pc = 0x8041ABD8u;
    // 8041ABD8: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041ABDC:
    ctx->pc = 0x8041ABDCu;
    // 8041ABDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041ABE0:
    ctx->pc = 0x8041ABE0u;
    // 8041ABE0: bl      0x8027714C
    {
            ctx->lr = 0x8041ABE4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041ABE4:
    ctx->pc = 0x8041ABE4u;
    ctx->downcount -= 5;
    // 8041ABE4: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ABE8:
    ctx->pc = 0x8041ABE8u;
    // 8041ABE8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ABEC:
    ctx->pc = 0x8041ABECu;
    // 8041ABEC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ABF0:
    ctx->pc = 0x8041ABF0u;
    // 8041ABF0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ABF4:
    ctx->pc = 0x8041ABF4u;
    // 8041ABF4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ABF8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ABF8:
    ctx->pc = 0x8041ABF8u;
    ctx->downcount -= 7;
    // 8041ABF8: lwz     r3, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ABFC:
    ctx->pc = 0x8041ABFCu;
    // 8041ABFC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AC00:
    ctx->pc = 0x8041AC00u;
    // 8041AC00: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC04:
    ctx->pc = 0x8041AC04u;
    // 8041AC04: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC08:
    ctx->pc = 0x8041AC08u;
    // 8041AC08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AC0C:
    ctx->pc = 0x8041AC0Cu;
    // 8041AC0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AC10u;
            ctx->pc = target;
            return;
        }
    }

label_8041AC10:
    ctx->pc = 0x8041AC10u;
    ctx->downcount -= 5;
    // 8041AC10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AC14:
    ctx->pc = 0x8041AC14u;
    // 8041AC14: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AC18:
    ctx->pc = 0x8041AC18u;
    // 8041AC18: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041AC1C:
    ctx->pc = 0x8041AC1Cu;
    // 8041AC1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AC20:
    ctx->pc = 0x8041AC20u;
    // 8041AC20: bl      0x8027714C
    {
            ctx->lr = 0x8041AC24u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AC24:
    ctx->pc = 0x8041AC24u;
    ctx->downcount -= 5;
    // 8041AC24: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AC28:
    ctx->pc = 0x8041AC28u;
    // 8041AC28: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AC2C:
    ctx->pc = 0x8041AC2Cu;
    // 8041AC2C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AC30:
    ctx->pc = 0x8041AC30u;
    // 8041AC30: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AC34:
    ctx->pc = 0x8041AC34u;
    // 8041AC34: bl      0x80370BD4
    {
            ctx->lr = 0x8041AC38u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AC38:
    ctx->pc = 0x8041AC38u;
    ctx->downcount -= 7;
    // 8041AC38: lwz     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AC3C:
    ctx->pc = 0x8041AC3Cu;
    // 8041AC3C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AC40:
    ctx->pc = 0x8041AC40u;
    // 8041AC40: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC44:
    ctx->pc = 0x8041AC44u;
    // 8041AC44: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC48:
    ctx->pc = 0x8041AC48u;
    // 8041AC48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AC4C:
    ctx->pc = 0x8041AC4Cu;
    // 8041AC4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AC50u;
            ctx->pc = target;
            return;
        }
    }

label_8041AC50:
    ctx->pc = 0x8041AC50u;
    ctx->downcount -= 5;
    // 8041AC50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AC54:
    ctx->pc = 0x8041AC54u;
    // 8041AC54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AC58:
    ctx->pc = 0x8041AC58u;
    // 8041AC58: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041AC5C:
    ctx->pc = 0x8041AC5Cu;
    // 8041AC5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AC60:
    ctx->pc = 0x8041AC60u;
    // 8041AC60: bl      0x8027714C
    {
            ctx->lr = 0x8041AC64u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AC64:
    ctx->pc = 0x8041AC64u;
    ctx->downcount -= 5;
    // 8041AC64: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AC68:
    ctx->pc = 0x8041AC68u;
    // 8041AC68: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AC6C:
    ctx->pc = 0x8041AC6Cu;
    // 8041AC6C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AC70:
    ctx->pc = 0x8041AC70u;
    // 8041AC70: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AC74:
    ctx->pc = 0x8041AC74u;
    // 8041AC74: bl      0x80370BD4
    {
            ctx->lr = 0x8041AC78u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AC78:
    ctx->pc = 0x8041AC78u;
    ctx->downcount -= 7;
    // 8041AC78: lwz     r3, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AC7C:
    ctx->pc = 0x8041AC7Cu;
    // 8041AC7C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AC80:
    ctx->pc = 0x8041AC80u;
    // 8041AC80: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC84:
    ctx->pc = 0x8041AC84u;
    // 8041AC84: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AC88:
    ctx->pc = 0x8041AC88u;
    // 8041AC88: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AC8C:
    ctx->pc = 0x8041AC8Cu;
    // 8041AC8C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AC90u;
            ctx->pc = target;
            return;
        }
    }

label_8041AC90:
    ctx->pc = 0x8041AC90u;
    ctx->downcount -= 5;
    // 8041AC90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AC94:
    ctx->pc = 0x8041AC94u;
    // 8041AC94: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AC98:
    ctx->pc = 0x8041AC98u;
    // 8041AC98: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041AC9C:
    ctx->pc = 0x8041AC9Cu;
    // 8041AC9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041ACA0:
    ctx->pc = 0x8041ACA0u;
    // 8041ACA0: bl      0x8027714C
    {
            ctx->lr = 0x8041ACA4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041ACA4:
    ctx->pc = 0x8041ACA4u;
    ctx->downcount -= 5;
    // 8041ACA4: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ACA8:
    ctx->pc = 0x8041ACA8u;
    // 8041ACA8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ACAC:
    ctx->pc = 0x8041ACACu;
    // 8041ACAC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ACB0:
    ctx->pc = 0x8041ACB0u;
    // 8041ACB0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ACB4:
    ctx->pc = 0x8041ACB4u;
    // 8041ACB4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ACB8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ACB8:
    ctx->pc = 0x8041ACB8u;
    ctx->downcount -= 7;
    // 8041ACB8: lwz     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ACBC:
    ctx->pc = 0x8041ACBCu;
    // 8041ACBC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041ACC0:
    ctx->pc = 0x8041ACC0u;
    // 8041ACC0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ACC4:
    ctx->pc = 0x8041ACC4u;
    // 8041ACC4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ACC8:
    ctx->pc = 0x8041ACC8u;
    // 8041ACC8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041ACCC:
    ctx->pc = 0x8041ACCCu;
    // 8041ACCC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041ACD0u;
            ctx->pc = target;
            return;
        }
    }

label_8041ACD0:
    ctx->pc = 0x8041ACD0u;
    ctx->downcount -= 5;
    // 8041ACD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041ACD4:
    ctx->pc = 0x8041ACD4u;
    // 8041ACD4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041ACD8:
    ctx->pc = 0x8041ACD8u;
    // 8041ACD8: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041ACDC:
    ctx->pc = 0x8041ACDCu;
    // 8041ACDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041ACE0:
    ctx->pc = 0x8041ACE0u;
    // 8041ACE0: bl      0x8027714C
    {
            ctx->lr = 0x8041ACE4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041ACE4:
    ctx->pc = 0x8041ACE4u;
    ctx->downcount -= 5;
    // 8041ACE4: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ACE8:
    ctx->pc = 0x8041ACE8u;
    // 8041ACE8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ACEC:
    ctx->pc = 0x8041ACECu;
    // 8041ACEC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ACF0:
    ctx->pc = 0x8041ACF0u;
    // 8041ACF0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ACF4:
    ctx->pc = 0x8041ACF4u;
    // 8041ACF4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ACF8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ACF8:
    ctx->pc = 0x8041ACF8u;
    ctx->downcount -= 7;
    // 8041ACF8: lwz     r3, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ACFC:
    ctx->pc = 0x8041ACFCu;
    // 8041ACFC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AD00:
    ctx->pc = 0x8041AD00u;
    // 8041AD00: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD04:
    ctx->pc = 0x8041AD04u;
    // 8041AD04: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD08:
    ctx->pc = 0x8041AD08u;
    // 8041AD08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AD0C:
    ctx->pc = 0x8041AD0Cu;
    // 8041AD0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AD10u;
            ctx->pc = target;
            return;
        }
    }

label_8041AD10:
    ctx->pc = 0x8041AD10u;
    ctx->downcount -= 5;
    // 8041AD10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AD14:
    ctx->pc = 0x8041AD14u;
    // 8041AD14: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AD18:
    ctx->pc = 0x8041AD18u;
    // 8041AD18: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041AD1C:
    ctx->pc = 0x8041AD1Cu;
    // 8041AD1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AD20:
    ctx->pc = 0x8041AD20u;
    // 8041AD20: bl      0x8027714C
    {
            ctx->lr = 0x8041AD24u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AD24:
    ctx->pc = 0x8041AD24u;
    ctx->downcount -= 5;
    // 8041AD24: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AD28:
    ctx->pc = 0x8041AD28u;
    // 8041AD28: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AD2C:
    ctx->pc = 0x8041AD2Cu;
    // 8041AD2C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AD30:
    ctx->pc = 0x8041AD30u;
    // 8041AD30: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AD34:
    ctx->pc = 0x8041AD34u;
    // 8041AD34: bl      0x80370BD4
    {
            ctx->lr = 0x8041AD38u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AD38:
    ctx->pc = 0x8041AD38u;
    ctx->downcount -= 7;
    // 8041AD38: lwz     r3, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AD3C:
    ctx->pc = 0x8041AD3Cu;
    // 8041AD3C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AD40:
    ctx->pc = 0x8041AD40u;
    // 8041AD40: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD44:
    ctx->pc = 0x8041AD44u;
    // 8041AD44: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD48:
    ctx->pc = 0x8041AD48u;
    // 8041AD48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AD4C:
    ctx->pc = 0x8041AD4Cu;
    // 8041AD4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AD50u;
            ctx->pc = target;
            return;
        }
    }

label_8041AD50:
    ctx->pc = 0x8041AD50u;
    ctx->downcount -= 5;
    // 8041AD50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AD54:
    ctx->pc = 0x8041AD54u;
    // 8041AD54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AD58:
    ctx->pc = 0x8041AD58u;
    // 8041AD58: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AD5C:
    ctx->pc = 0x8041AD5Cu;
    // 8041AD5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AD60:
    ctx->pc = 0x8041AD60u;
    // 8041AD60: bl      0x8027714C
    {
            ctx->lr = 0x8041AD64u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AD64:
    ctx->pc = 0x8041AD64u;
    ctx->downcount -= 5;
    // 8041AD64: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AD68:
    ctx->pc = 0x8041AD68u;
    // 8041AD68: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AD6C:
    ctx->pc = 0x8041AD6Cu;
    // 8041AD6C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AD70:
    ctx->pc = 0x8041AD70u;
    // 8041AD70: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AD74:
    ctx->pc = 0x8041AD74u;
    // 8041AD74: bl      0x80370BD4
    {
            ctx->lr = 0x8041AD78u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AD78:
    ctx->pc = 0x8041AD78u;
    ctx->downcount -= 7;
    // 8041AD78: lwz     r3, 220(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AD7C:
    ctx->pc = 0x8041AD7Cu;
    // 8041AD7C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AD80:
    ctx->pc = 0x8041AD80u;
    // 8041AD80: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD84:
    ctx->pc = 0x8041AD84u;
    // 8041AD84: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AD88:
    ctx->pc = 0x8041AD88u;
    // 8041AD88: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AD8C:
    ctx->pc = 0x8041AD8Cu;
    // 8041AD8C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AD90u;
            ctx->pc = target;
            return;
        }
    }

label_8041AD90:
    ctx->pc = 0x8041AD90u;
    ctx->downcount -= 5;
    // 8041AD90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AD94:
    ctx->pc = 0x8041AD94u;
    // 8041AD94: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AD98:
    ctx->pc = 0x8041AD98u;
    // 8041AD98: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AD9C:
    ctx->pc = 0x8041AD9Cu;
    // 8041AD9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041ADA0:
    ctx->pc = 0x8041ADA0u;
    // 8041ADA0: bl      0x8027714C
    {
            ctx->lr = 0x8041ADA4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041ADA4:
    ctx->pc = 0x8041ADA4u;
    ctx->downcount -= 5;
    // 8041ADA4: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ADA8:
    ctx->pc = 0x8041ADA8u;
    // 8041ADA8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ADAC:
    ctx->pc = 0x8041ADACu;
    // 8041ADAC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ADB0:
    ctx->pc = 0x8041ADB0u;
    // 8041ADB0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ADB4:
    ctx->pc = 0x8041ADB4u;
    // 8041ADB4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ADB8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ADB8:
    ctx->pc = 0x8041ADB8u;
    ctx->downcount -= 7;
    // 8041ADB8: lwz     r3, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ADBC:
    ctx->pc = 0x8041ADBCu;
    // 8041ADBC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041ADC0:
    ctx->pc = 0x8041ADC0u;
    // 8041ADC0: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ADC4:
    ctx->pc = 0x8041ADC4u;
    // 8041ADC4: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041ADC8:
    ctx->pc = 0x8041ADC8u;
    // 8041ADC8: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041ADCC:
    ctx->pc = 0x8041ADCCu;
    // 8041ADCC: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041ADD0u;
            ctx->pc = target;
            return;
        }
    }

label_8041ADD0:
    ctx->pc = 0x8041ADD0u;
    ctx->downcount -= 5;
    // 8041ADD0: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041ADD4:
    ctx->pc = 0x8041ADD4u;
    // 8041ADD4: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041ADD8:
    ctx->pc = 0x8041ADD8u;
    // 8041ADD8: li      r5, 28
    ctx->gpr[5] = (u32)(s32)(28);

label_8041ADDC:
    ctx->pc = 0x8041ADDCu;
    // 8041ADDC: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041ADE0:
    ctx->pc = 0x8041ADE0u;
    // 8041ADE0: bl      0x8027714C
    {
            ctx->lr = 0x8041ADE4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041ADE4:
    ctx->pc = 0x8041ADE4u;
    ctx->downcount -= 5;
    // 8041ADE4: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ADE8:
    ctx->pc = 0x8041ADE8u;
    // 8041ADE8: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041ADEC:
    ctx->pc = 0x8041ADECu;
    // 8041ADEC: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041ADF0:
    ctx->pc = 0x8041ADF0u;
    // 8041ADF0: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041ADF4:
    ctx->pc = 0x8041ADF4u;
    // 8041ADF4: bl      0x80370BD4
    {
            ctx->lr = 0x8041ADF8u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041ADF8:
    ctx->pc = 0x8041ADF8u;
    ctx->downcount -= 7;
    // 8041ADF8: lwz     r3, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041ADFC:
    ctx->pc = 0x8041ADFCu;
    // 8041ADFC: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AE00:
    ctx->pc = 0x8041AE00u;
    // 8041AE00: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE04:
    ctx->pc = 0x8041AE04u;
    // 8041AE04: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE08:
    ctx->pc = 0x8041AE08u;
    // 8041AE08: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AE0C:
    ctx->pc = 0x8041AE0Cu;
    // 8041AE0C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AE10u;
            ctx->pc = target;
            return;
        }
    }

label_8041AE10:
    ctx->pc = 0x8041AE10u;
    ctx->downcount -= 5;
    // 8041AE10: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AE14:
    ctx->pc = 0x8041AE14u;
    // 8041AE14: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AE18:
    ctx->pc = 0x8041AE18u;
    // 8041AE18: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AE1C:
    ctx->pc = 0x8041AE1Cu;
    // 8041AE1C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AE20:
    ctx->pc = 0x8041AE20u;
    // 8041AE20: bl      0x8027714C
    {
            ctx->lr = 0x8041AE24u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AE24:
    ctx->pc = 0x8041AE24u;
    ctx->downcount -= 5;
    // 8041AE24: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AE28:
    ctx->pc = 0x8041AE28u;
    // 8041AE28: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AE2C:
    ctx->pc = 0x8041AE2Cu;
    // 8041AE2C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AE30:
    ctx->pc = 0x8041AE30u;
    // 8041AE30: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AE34:
    ctx->pc = 0x8041AE34u;
    // 8041AE34: bl      0x80370BD4
    {
            ctx->lr = 0x8041AE38u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AE38:
    ctx->pc = 0x8041AE38u;
    ctx->downcount -= 7;
    // 8041AE38: lwz     r3, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AE3C:
    ctx->pc = 0x8041AE3Cu;
    // 8041AE3C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AE40:
    ctx->pc = 0x8041AE40u;
    // 8041AE40: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE44:
    ctx->pc = 0x8041AE44u;
    // 8041AE44: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE48:
    ctx->pc = 0x8041AE48u;
    // 8041AE48: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AE4C:
    ctx->pc = 0x8041AE4Cu;
    // 8041AE4C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AE50u;
            ctx->pc = target;
            return;
        }
    }

label_8041AE50:
    ctx->pc = 0x8041AE50u;
    ctx->downcount -= 5;
    // 8041AE50: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AE54:
    ctx->pc = 0x8041AE54u;
    // 8041AE54: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AE58:
    ctx->pc = 0x8041AE58u;
    // 8041AE58: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AE5C:
    ctx->pc = 0x8041AE5Cu;
    // 8041AE5C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AE60:
    ctx->pc = 0x8041AE60u;
    // 8041AE60: bl      0x8027714C
    {
            ctx->lr = 0x8041AE64u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AE64:
    ctx->pc = 0x8041AE64u;
    ctx->downcount -= 5;
    // 8041AE64: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AE68:
    ctx->pc = 0x8041AE68u;
    // 8041AE68: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AE6C:
    ctx->pc = 0x8041AE6Cu;
    // 8041AE6C: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AE70:
    ctx->pc = 0x8041AE70u;
    // 8041AE70: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AE74:
    ctx->pc = 0x8041AE74u;
    // 8041AE74: bl      0x80370BD4
    {
            ctx->lr = 0x8041AE78u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AE78:
    ctx->pc = 0x8041AE78u;
    ctx->downcount -= 7;
    // 8041AE78: lwz     r3, 232(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AE7C:
    ctx->pc = 0x8041AE7Cu;
    // 8041AE7C: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AE80:
    ctx->pc = 0x8041AE80u;
    // 8041AE80: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE84:
    ctx->pc = 0x8041AE84u;
    // 8041AE84: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AE88:
    ctx->pc = 0x8041AE88u;
    // 8041AE88: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AE8C:
    ctx->pc = 0x8041AE8Cu;
    // 8041AE8C: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AE90u;
            ctx->pc = target;
            return;
        }
    }

label_8041AE90:
    ctx->pc = 0x8041AE90u;
    ctx->downcount -= 5;
    // 8041AE90: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AE94:
    ctx->pc = 0x8041AE94u;
    // 8041AE94: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AE98:
    ctx->pc = 0x8041AE98u;
    // 8041AE98: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AE9C:
    ctx->pc = 0x8041AE9Cu;
    // 8041AE9C: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AEA0:
    ctx->pc = 0x8041AEA0u;
    // 8041AEA0: bl      0x8027714C
    {
            ctx->lr = 0x8041AEA4u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AEA4:
    ctx->pc = 0x8041AEA4u;
    ctx->downcount -= 3;
    // 8041AEA4: lwz     r3, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AEA8:
    ctx->pc = 0x8041AEA8u;
    // 8041AEA8: li      r4, 28
    ctx->gpr[4] = (u32)(s32)(28);

label_8041AEAC:
    ctx->pc = 0x8041AEACu;
    // 8041AEAC: bl      0x8041D244
    {
            ctx->lr = 0x8041AEB0u;
            ctx->pc = 0x8041D244u;
            return;
    }

label_8041AEB0:
    ctx->pc = 0x8041AEB0u;
    ctx->downcount -= 5;
    // 8041AEB0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AEB4:
    ctx->pc = 0x8041AEB4u;
    // 8041AEB4: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AEB8:
    ctx->pc = 0x8041AEB8u;
    // 8041AEB8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AEBC:
    ctx->pc = 0x8041AEBCu;
    // 8041AEBC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AEC0:
    ctx->pc = 0x8041AEC0u;
    // 8041AEC0: bl      0x80370BD4
    {
            ctx->lr = 0x8041AEC4u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AEC4:
    ctx->pc = 0x8041AEC4u;
    ctx->downcount -= 7;
    // 8041AEC4: lwz     r3, 240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(240);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AEC8:
    ctx->pc = 0x8041AEC8u;
    // 8041AEC8: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AECC:
    ctx->pc = 0x8041AECCu;
    // 8041AECC: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AED0:
    ctx->pc = 0x8041AED0u;
    // 8041AED0: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AED4:
    ctx->pc = 0x8041AED4u;
    // 8041AED4: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AED8:
    ctx->pc = 0x8041AED8u;
    // 8041AED8: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AEDCu;
            ctx->pc = target;
            return;
        }
    }

label_8041AEDC:
    ctx->pc = 0x8041AEDCu;
    ctx->downcount -= 5;
    // 8041AEDC: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AEE0:
    ctx->pc = 0x8041AEE0u;
    // 8041AEE0: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AEE4:
    ctx->pc = 0x8041AEE4u;
    // 8041AEE4: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AEE8:
    ctx->pc = 0x8041AEE8u;
    // 8041AEE8: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AEEC:
    ctx->pc = 0x8041AEECu;
    // 8041AEEC: bl      0x8027714C
    {
            ctx->lr = 0x8041AEF0u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AEF0:
    ctx->pc = 0x8041AEF0u;
    ctx->downcount -= 5;
    // 8041AEF0: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AEF4:
    ctx->pc = 0x8041AEF4u;
    // 8041AEF4: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AEF8:
    ctx->pc = 0x8041AEF8u;
    // 8041AEF8: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AEFC:
    ctx->pc = 0x8041AEFCu;
    // 8041AEFC: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AF00:
    ctx->pc = 0x8041AF00u;
    // 8041AF00: bl      0x80370BD4
    {
            ctx->lr = 0x8041AF04u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AF04:
    ctx->pc = 0x8041AF04u;
    ctx->downcount -= 7;
    // 8041AF04: lwz     r3, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AF08:
    ctx->pc = 0x8041AF08u;
    // 8041AF08: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AF0C:
    ctx->pc = 0x8041AF0Cu;
    // 8041AF0C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AF10:
    ctx->pc = 0x8041AF10u;
    // 8041AF10: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AF14:
    ctx->pc = 0x8041AF14u;
    // 8041AF14: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AF18:
    ctx->pc = 0x8041AF18u;
    // 8041AF18: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AF1Cu;
            ctx->pc = target;
            return;
        }
    }

label_8041AF1C:
    ctx->pc = 0x8041AF1Cu;
    ctx->downcount -= 5;
    // 8041AF1C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AF20:
    ctx->pc = 0x8041AF20u;
    // 8041AF20: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AF24:
    ctx->pc = 0x8041AF24u;
    // 8041AF24: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AF28:
    ctx->pc = 0x8041AF28u;
    // 8041AF28: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AF2C:
    ctx->pc = 0x8041AF2Cu;
    // 8041AF2C: bl      0x8027714C
    {
            ctx->lr = 0x8041AF30u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AF30:
    ctx->pc = 0x8041AF30u;
    ctx->downcount -= 5;
    // 8041AF30: lwz     r3, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AF34:
    ctx->pc = 0x8041AF34u;
    // 8041AF34: addi    r4, r31, 22792
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(22792);

label_8041AF38:
    ctx->pc = 0x8041AF38u;
    // 8041AF38: addic   r0, r3, -1
    {
        u64 a = ctx->gpr[3];
        u64 b = (u32)(s32)(-1);
        u64 res = a + b;
        ctx->gpr[0] = (u32)res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(res >> 32) & 1u) << 29);
    }

label_8041AF3C:
    ctx->pc = 0x8041AF3Cu;
    // 8041AF3C: subfe   r3, r0, r3
    {
        u32 a = ~ctx->gpr[0];
        u32 b = ctx->gpr[3];
        u32 carry = (ctx->xer >> 29) & 1u;
        u64 wide = (u64)a + (u64)b + carry;
        u32 res = (u32)wide;
        ctx->gpr[3] = res;
        ctx->xer = (ctx->xer & ~0x20000000u) | (((u32)(wide >> 32) & 1u) << 29);
    }

label_8041AF40:
    ctx->pc = 0x8041AF40u;
    // 8041AF40: bl      0x80370BD4
    {
            ctx->lr = 0x8041AF44u;
            ctx->pc = 0x80370BD4u;
            return;
    }

label_8041AF44:
    ctx->pc = 0x8041AF44u;
    ctx->downcount -= 7;
    // 8041AF44: lwz     r3, 248(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(248);
        ctx->gpr[3] = mem_read32(ctx, ea);
    }

label_8041AF48:
    ctx->pc = 0x8041AF48u;
    // 8041AF48: lwz     r29, -12872(r13)
    {
        u32 ea = ctx->gpr[13] + (u32)(s32)(-12872);
        ctx->gpr[29] = mem_read32(ctx, ea);
    }

label_8041AF4C:
    ctx->pc = 0x8041AF4Cu;
    // 8041AF4C: lwz     r12, 48(r3)
    {
        u32 ea = ctx->gpr[3] + (u32)(s32)(48);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AF50:
    ctx->pc = 0x8041AF50u;
    // 8041AF50: lwz     r12, 92(r12)
    {
        u32 ea = ctx->gpr[12] + (u32)(s32)(92);
        ctx->gpr[12] = mem_read32(ctx, ea);
    }

label_8041AF54:
    ctx->pc = 0x8041AF54u;
    // 8041AF54: mtctr    r12
    ctx->ctr = ctx->gpr[12];

label_8041AF58:
    ctx->pc = 0x8041AF58u;
    // 8041AF58: bctrl
    {
        u32 target = ctx->ctr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->lr = 0x8041AF5Cu;
            ctx->pc = target;
            return;
        }
    }

label_8041AF5C:
    ctx->pc = 0x8041AF5Cu;
    ctx->downcount -= 5;
    // 8041AF5C: or   r4, r3, r3
    {
        ctx->gpr[4] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AF60:
    ctx->pc = 0x8041AF60u;
    // 8041AF60: or   r3, r29, r29
    {
        ctx->gpr[3] = ctx->gpr[29] | ctx->gpr[29];
    }

label_8041AF64:
    ctx->pc = 0x8041AF64u;
    // 8041AF64: li      r5, 3
    ctx->gpr[5] = (u32)(s32)(3);

label_8041AF68:
    ctx->pc = 0x8041AF68u;
    // 8041AF68: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AF6C:
    ctx->pc = 0x8041AF6Cu;
    // 8041AF6C: bl      0x8027714C
    {
            ctx->lr = 0x8041AF70u;
            ctx->pc = 0x8027714Cu;
            return;
    }

label_8041AF70:
    ctx->pc = 0x8041AF70u;
    ctx->downcount -= 16;
    // 8041AF70: lmw     r29, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        for (u32 r = 29; r < 32; r++, ea += 4) ctx->gpr[r] = mem_read32(ctx, ea);
    }

label_8041AF74:
    ctx->pc = 0x8041AF74u;
    // 8041AF74: lwz     r0, 36(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(36);
        ctx->gpr[0] = mem_read32(ctx, ea);
    }

label_8041AF78:
    ctx->pc = 0x8041AF78u;
    // 8041AF78: mtlr    r0
    ctx->lr = ctx->gpr[0];

label_8041AF7C:
    ctx->pc = 0x8041AF7Cu;
    // 8041AF7C: addi    r1, r1, 32
    ctx->gpr[1] = ctx->gpr[1] + (u32)(s32)(32);

label_8041AF80:
    ctx->pc = 0x8041AF80u;
    // 8041AF80: blr
    {
        u32 target = ctx->lr & ~3u;
        bool ctr_ok = true;
        bool cr_ok = true;
        if (ctr_ok && cr_ok) {
            ctx->pc = target;
            goto return_dispatch_804171C0;
        }
    }

label_8041AF84:
    ctx->pc = 0x8041AF84u;
    ctx->downcount -= 19;
    // 8041AF84: stwu     r1, -16(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(-16);
        mem_write32(ctx, ea, (u32)ctx->gpr[1]);
        ctx->gpr[1] = ea;
    }

label_8041AF88:
    ctx->pc = 0x8041AF88u;
    // 8041AF88: mflr    r0
    ctx->gpr[0] = ctx->lr;

label_8041AF8C:
    ctx->pc = 0x8041AF8Cu;
    // 8041AF8C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041AF90:
    ctx->pc = 0x8041AF90u;
    // 8041AF90: stw     r0, 20(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(20);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041AF94:
    ctx->pc = 0x8041AF94u;
    // 8041AF94: stmw     r30, 8(r1)
    {
        u32 ea = ctx->gpr[1] + (u32)(s32)(8);
        for (u32 r = 30; r < 32; r++, ea += 4) mem_write32(ctx, ea, ctx->gpr[r]);
    }

label_8041AF98:
    ctx->pc = 0x8041AF98u;
    // 8041AF98: lis     r31, -32659
    ctx->gpr[31] = ((u32)(s32)(-32659) << 16);

label_8041AF9C:
    ctx->pc = 0x8041AF9Cu;
    // 8041AF9C: or   r30, r3, r3
    {
        ctx->gpr[30] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AFA0:
    ctx->pc = 0x8041AFA0u;
    // 8041AFA0: addi    r31, r31, 23520
    ctx->gpr[31] = ctx->gpr[31] + (u32)(s32)(23520);

label_8041AFA4:
    ctx->pc = 0x8041AFA4u;
    // 8041AFA4: bl      0x802A6748
    {
            ctx->lr = 0x8041AFA8u;
            ctx->pc = 0x802A6748u;
            return;
    }

label_8041AFA8:
    ctx->pc = 0x8041AFA8u;
    ctx->downcount -= 7;
    // 8041AFA8: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8041AFAC:
    ctx->pc = 0x8041AFACu;
    // 8041AFAC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041AFB0:
    ctx->pc = 0x8041AFB0u;
    // 8041AFB0: addi    r4, r4, 23768
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23768);

label_8041AFB4:
    ctx->pc = 0x8041AFB4u;
    // 8041AFB4: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8041AFB8:
    ctx->pc = 0x8041AFB8u;
    // 8041AFB8: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8041AFBC:
    ctx->pc = 0x8041AFBCu;
    // 8041AFBC: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041AFC0:
    ctx->pc = 0x8041AFC0u;
    // 8041AFC0: bl      0x801ED17C
    {
            ctx->lr = 0x8041AFC4u;
            ctx->pc = 0x801ED17Cu;
            return;
    }

label_8041AFC4:
    ctx->pc = 0x8041AFC4u;
    ctx->downcount -= 6;
    // 8041AFC4: or   r5, r3, r3
    {
        ctx->gpr[5] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AFC8:
    ctx->pc = 0x8041AFC8u;
    // 8041AFC8: or   r4, r30, r30
    {
        ctx->gpr[4] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041AFCC:
    ctx->pc = 0x8041AFCCu;
    // 8041AFCC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_8041AFD0:
    ctx->pc = 0x8041AFD0u;
    // 8041AFD0: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041AFD4:
    ctx->pc = 0x8041AFD4u;
    // 8041AFD4: addi    r5, r5, 1
    ctx->gpr[5] = ctx->gpr[5] + (u32)(s32)(1);

label_8041AFD8:
    ctx->pc = 0x8041AFD8u;
    // 8041AFD8: bl      0x8041B3FC
    {
            ctx->lr = 0x8041AFDCu;
            ctx->pc = 0x8041B3FCu;
            return;
    }

label_8041AFDC:
    ctx->pc = 0x8041AFDCu;
    ctx->downcount -= 3;
    // 8041AFDC: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041AFE0:
    ctx->pc = 0x8041AFE0u;
    // 8041AFE0: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041AFE4:
    ctx->pc = 0x8041AFE4u;
    // 8041AFE4: bl      0x802A5D48
    {
            ctx->lr = 0x8041AFE8u;
            ctx->pc = 0x802A5D48u;
            return;
    }

label_8041AFE8:
    ctx->pc = 0x8041AFE8u;
    ctx->downcount -= 6;
    // 8041AFE8: or   r7, r3, r3
    {
        ctx->gpr[7] = ctx->gpr[3] | ctx->gpr[3];
    }

label_8041AFEC:
    ctx->pc = 0x8041AFECu;
    // 8041AFEC: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_8041AFF0:
    ctx->pc = 0x8041AFF0u;
    // 8041AFF0: addi    r4, r31, 24
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(24);

label_8041AFF4:
    ctx->pc = 0x8041AFF4u;
    // 8041AFF4: addi    r5, r31, 36
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(36);

label_8041AFF8:
    ctx->pc = 0x8041AFF8u;
    // 8041AFF8: addi    r6, r31, 48
    ctx->gpr[6] = ctx->gpr[31] + (u32)(s32)(48);

label_8041AFFC:
    ctx->pc = 0x8041AFFCu;
    // 8041AFFC: bl      0x8041B598
    {
            ctx->lr = 0x8041B000u;
            ctx->pc = 0x8041B598u;
            return;
    }

label_8041B000:
    ctx->pc = 0x8041B000u;
    ctx->downcount -= 2;
    // 8041B000: or   r3, r30, r30
    {
        ctx->gpr[3] = ctx->gpr[30] | ctx->gpr[30];
    }

label_8041B004:
    ctx->pc = 0x8041B004u;
    // 8041B004: bl      0x802A609C
    {
            ctx->lr = 0x8041B008u;
            ctx->pc = 0x802A609Cu;
            return;
    }

label_8041B008:
    ctx->pc = 0x8041B008u;
    ctx->downcount -= 10;
    // 8041B008: lis     r4, -32659
    ctx->gpr[4] = ((u32)(s32)(-32659) << 16);

label_8041B00C:
    ctx->pc = 0x8041B00Cu;
    // 8041B00C: addi    r3, r30, 100
    ctx->gpr[3] = ctx->gpr[30] + (u32)(s32)(100);

label_8041B010:
    ctx->pc = 0x8041B010u;
    // 8041B010: addi    r4, r4, 23648
    ctx->gpr[4] = ctx->gpr[4] + (u32)(s32)(23648);

label_8041B014:
    ctx->pc = 0x8041B014u;
    // 8041B014: stw     r4, 48(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(48);
        mem_write32(ctx, ea, (u32)ctx->gpr[4]);
    }

label_8041B018:
    ctx->pc = 0x8041B018u;
    // 8041B018: addi    r0, r4, 8
    ctx->gpr[0] = ctx->gpr[4] + (u32)(s32)(8);

label_8041B01C:
    ctx->pc = 0x8041B01Cu;
    // 8041B01C: addi    r5, r31, 12
    ctx->gpr[5] = ctx->gpr[31] + (u32)(s32)(12);

label_8041B020:
    ctx->pc = 0x8041B020u;
    // 8041B020: stw     r0, 24(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(24);
        mem_write32(ctx, ea, (u32)ctx->gpr[0]);
    }

label_8041B024:
    ctx->pc = 0x8041B024u;
    // 8041B024: addi    r4, r31, 0
    ctx->gpr[4] = ctx->gpr[31] + (u32)(s32)(0);

label_8041B028:
    ctx->pc = 0x8041B028u;
    // 8041B028: li      r6, 0
    ctx->gpr[6] = (u32)(s32)(0);

label_8041B02C:
    ctx->pc = 0x8041B02Cu;
    // 8041B02C: bl      0x8041B51C
    {
            ctx->lr = 0x8041B030u;
            ctx->pc = 0x8041B51Cu;
            return;
    }

label_8041B030:
    ctx->pc = 0x8041B030u;
    ctx->downcount -= 2;
    // 8041B030: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8041B034:
    ctx->pc = 0x8041B034u;
    // 8041B034: bl      0x801C1C48
    {
            ctx->lr = 0x8041B038u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B038:
    ctx->pc = 0x8041B038u;
    ctx->downcount -= 2;
    // 8041B038: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B03C:
    ctx->pc = 0x8041B03Cu;
    // 8041B03C: bc    12, 2, 0x8041B048
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B048;
        }
    }

label_8041B040:
    ctx->pc = 0x8041B040u;
    ctx->downcount -= 2;
    // 8041B040: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041B044:
    ctx->pc = 0x8041B044u;
    // 8041B044: bl      0x80368DE4
    {
            ctx->lr = 0x8041B048u;
            ctx->pc = 0x80368DE4u;
            return;
    }

label_8041B048:
    ctx->pc = 0x8041B048u;
    ctx->downcount -= 3;
    // 8041B048: stw     r3, 188(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(188);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B04C:
    ctx->pc = 0x8041B04Cu;
    // 8041B04C: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8041B050:
    ctx->pc = 0x8041B050u;
    // 8041B050: bl      0x801C1C48
    {
            ctx->lr = 0x8041B054u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B054:
    ctx->pc = 0x8041B054u;
    ctx->downcount -= 2;
    // 8041B054: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B058:
    ctx->pc = 0x8041B058u;
    // 8041B058: bc    12, 2, 0x8041B064
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B064;
        }
    }

label_8041B05C:
    ctx->pc = 0x8041B05Cu;
    ctx->downcount -= 2;
    // 8041B05C: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041B060:
    ctx->pc = 0x8041B060u;
    // 8041B060: bl      0x803738CC
    {
            ctx->lr = 0x8041B064u;
            ctx->pc = 0x803738CCu;
            return;
    }

label_8041B064:
    ctx->pc = 0x8041B064u;
    ctx->downcount -= 3;
    // 8041B064: stw     r3, 192(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(192);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B068:
    ctx->pc = 0x8041B068u;
    // 8041B068: li      r3, 2596
    ctx->gpr[3] = (u32)(s32)(2596);

label_8041B06C:
    ctx->pc = 0x8041B06Cu;
    // 8041B06C: bl      0x801C1C48
    {
            ctx->lr = 0x8041B070u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B070:
    ctx->pc = 0x8041B070u;
    ctx->downcount -= 2;
    // 8041B070: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B074:
    ctx->pc = 0x8041B074u;
    // 8041B074: bc    12, 2, 0x8041B080
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B080;
        }
    }

label_8041B078:
    ctx->pc = 0x8041B078u;
    ctx->downcount -= 2;
    // 8041B078: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041B07C:
    ctx->pc = 0x8041B07Cu;
    // 8041B07C: bl      0x80351780
    {
            ctx->lr = 0x8041B080u;
            ctx->pc = 0x80351780u;
            return;
    }

label_8041B080:
    ctx->pc = 0x8041B080u;
    ctx->downcount -= 3;
    // 8041B080: stw     r3, 196(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(196);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B084:
    ctx->pc = 0x8041B084u;
    // 8041B084: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_8041B088:
    ctx->pc = 0x8041B088u;
    // 8041B088: bl      0x801C1C48
    {
            ctx->lr = 0x8041B08Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B08C:
    ctx->pc = 0x8041B08Cu;
    ctx->downcount -= 2;
    // 8041B08C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B090:
    ctx->pc = 0x8041B090u;
    // 8041B090: bc    12, 2, 0x8041B09C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B09C;
        }
    }

label_8041B094:
    ctx->pc = 0x8041B094u;
    ctx->downcount -= 2;
    // 8041B094: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041B098:
    ctx->pc = 0x8041B098u;
    // 8041B098: bl      0x80374CC8
    {
            ctx->lr = 0x8041B09Cu;
            ctx->pc = 0x80374CC8u;
            return;
    }

label_8041B09C:
    ctx->pc = 0x8041B09Cu;
    ctx->downcount -= 3;
    // 8041B09C: stw     r3, 200(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(200);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B0A0:
    ctx->pc = 0x8041B0A0u;
    // 8041B0A0: li      r3, 388
    ctx->gpr[3] = (u32)(s32)(388);

label_8041B0A4:
    ctx->pc = 0x8041B0A4u;
    // 8041B0A4: bl      0x801C1C48
    {
            ctx->lr = 0x8041B0A8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B0A8:
    ctx->pc = 0x8041B0A8u;
    ctx->downcount -= 2;
    // 8041B0A8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B0AC:
    ctx->pc = 0x8041B0ACu;
    // 8041B0AC: bc    12, 2, 0x8041B0B4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B0B4;
        }
    }

label_8041B0B0:
    ctx->pc = 0x8041B0B0u;
    ctx->downcount -= 1;
    // 8041B0B0: bl      0x802ED9BC
    {
            ctx->lr = 0x8041B0B4u;
            ctx->pc = 0x802ED9BCu;
            return;
    }

label_8041B0B4:
    ctx->pc = 0x8041B0B4u;
    ctx->downcount -= 3;
    // 8041B0B4: stw     r3, 204(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(204);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B0B8:
    ctx->pc = 0x8041B0B8u;
    // 8041B0B8: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_8041B0BC:
    ctx->pc = 0x8041B0BCu;
    // 8041B0BC: bl      0x801C1C48
    {
            ctx->lr = 0x8041B0C0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B0C0:
    ctx->pc = 0x8041B0C0u;
    ctx->downcount -= 2;
    // 8041B0C0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B0C4:
    ctx->pc = 0x8041B0C4u;
    // 8041B0C4: bc    12, 2, 0x8041B0CC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B0CC;
        }
    }

label_8041B0C8:
    ctx->pc = 0x8041B0C8u;
    ctx->downcount -= 1;
    // 8041B0C8: bl      0x804180C8
    {
            ctx->lr = 0x8041B0CCu;
            if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) {
                ctx->pc = 0x804180C8u;
                return;
            }
            goto label_804180C8;
    }

label_8041B0CC:
    ctx->pc = 0x8041B0CCu;
    ctx->downcount -= 3;
    // 8041B0CC: stw     r3, 208(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(208);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B0D0:
    ctx->pc = 0x8041B0D0u;
    // 8041B0D0: li      r3, 372
    ctx->gpr[3] = (u32)(s32)(372);

label_8041B0D4:
    ctx->pc = 0x8041B0D4u;
    // 8041B0D4: bl      0x801C1C48
    {
            ctx->lr = 0x8041B0D8u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B0D8:
    ctx->pc = 0x8041B0D8u;
    ctx->downcount -= 2;
    // 8041B0D8: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B0DC:
    ctx->pc = 0x8041B0DCu;
    // 8041B0DC: bc    12, 2, 0x8041B0E4
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B0E4;
        }
    }

label_8041B0E0:
    ctx->pc = 0x8041B0E0u;
    ctx->downcount -= 1;
    // 8041B0E0: bl      0x8041C92C
    {
            ctx->lr = 0x8041B0E4u;
            ctx->pc = 0x8041C92Cu;
            return;
    }

label_8041B0E4:
    ctx->pc = 0x8041B0E4u;
    ctx->downcount -= 3;
    // 8041B0E4: stw     r3, 212(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(212);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B0E8:
    ctx->pc = 0x8041B0E8u;
    // 8041B0E8: li      r3, 288
    ctx->gpr[3] = (u32)(s32)(288);

label_8041B0EC:
    ctx->pc = 0x8041B0ECu;
    // 8041B0EC: bl      0x801C1C48
    {
            ctx->lr = 0x8041B0F0u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B0F0:
    ctx->pc = 0x8041B0F0u;
    ctx->downcount -= 2;
    // 8041B0F0: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B0F4:
    ctx->pc = 0x8041B0F4u;
    // 8041B0F4: bc    12, 2, 0x8041B0FC
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B0FC;
        }
    }

label_8041B0F8:
    ctx->pc = 0x8041B0F8u;
    ctx->downcount -= 1;
    // 8041B0F8: bl      0x8041BC0C
    {
            ctx->lr = 0x8041B0FCu;
            ctx->pc = 0x8041BC0Cu;
            return;
    }

label_8041B0FC:
    ctx->pc = 0x8041B0FCu;
    ctx->downcount -= 3;
    // 8041B0FC: stw     r3, 216(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(216);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B100:
    ctx->pc = 0x8041B100u;
    // 8041B100: li      r3, 284
    ctx->gpr[3] = (u32)(s32)(284);

label_8041B104:
    ctx->pc = 0x8041B104u;
    // 8041B104: bl      0x801C1C48
    {
            ctx->lr = 0x8041B108u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B108:
    ctx->pc = 0x8041B108u;
    ctx->downcount -= 2;
    // 8041B108: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B10C:
    ctx->pc = 0x8041B10Cu;
    // 8041B10C: bc    12, 2, 0x8041B114
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B114;
        }
    }

label_8041B110:
    ctx->pc = 0x8041B110u;
    ctx->downcount -= 1;
    // 8041B110: bl      0x80424C84
    {
            ctx->lr = 0x8041B114u;
            ctx->pc = 0x80424C84u;
            return;
    }

label_8041B114:
    ctx->pc = 0x8041B114u;
    ctx->downcount -= 3;
    // 8041B114: stw     r3, 220(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(220);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B118:
    ctx->pc = 0x8041B118u;
    // 8041B118: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8041B11C:
    ctx->pc = 0x8041B11Cu;
    // 8041B11C: bl      0x801C1C48
    {
            ctx->lr = 0x8041B120u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B120:
    ctx->pc = 0x8041B120u;
    ctx->downcount -= 2;
    // 8041B120: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B124:
    ctx->pc = 0x8041B124u;
    // 8041B124: bc    12, 2, 0x8041B12C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B12C;
        }
    }

label_8041B128:
    ctx->pc = 0x8041B128u;
    ctx->downcount -= 1;
    // 8041B128: bl      0x804247E0
    {
            ctx->lr = 0x8041B12Cu;
            ctx->pc = 0x804247E0u;
            return;
    }

label_8041B12C:
    ctx->pc = 0x8041B12Cu;
    ctx->downcount -= 3;
    // 8041B12C: stw     r3, 224(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(224);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B130:
    ctx->pc = 0x8041B130u;
    // 8041B130: li      r3, 276
    ctx->gpr[3] = (u32)(s32)(276);

label_8041B134:
    ctx->pc = 0x8041B134u;
    // 8041B134: bl      0x801C1C48
    {
            ctx->lr = 0x8041B138u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B138:
    ctx->pc = 0x8041B138u;
    ctx->downcount -= 2;
    // 8041B138: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B13C:
    ctx->pc = 0x8041B13Cu;
    // 8041B13C: bc    12, 2, 0x8041B144
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B144;
        }
    }

label_8041B140:
    ctx->pc = 0x8041B140u;
    ctx->downcount -= 1;
    // 8041B140: bl      0x80424E6C
    {
            ctx->lr = 0x8041B144u;
            ctx->pc = 0x80424E6Cu;
            return;
    }

label_8041B144:
    ctx->pc = 0x8041B144u;
    ctx->downcount -= 3;
    // 8041B144: stw     r3, 228(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(228);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B148:
    ctx->pc = 0x8041B148u;
    // 8041B148: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8041B14C:
    ctx->pc = 0x8041B14Cu;
    // 8041B14C: bl      0x801C1C48
    {
            ctx->lr = 0x8041B150u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B150:
    ctx->pc = 0x8041B150u;
    ctx->downcount -= 2;
    // 8041B150: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B154:
    ctx->pc = 0x8041B154u;
    // 8041B154: bc    12, 2, 0x8041B15C
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B15C;
        }
    }

label_8041B158:
    ctx->pc = 0x8041B158u;
    ctx->downcount -= 1;
    // 8041B158: bl      0x8041CCDC
    {
            ctx->lr = 0x8041B15Cu;
            ctx->pc = 0x8041CCDCu;
            return;
    }

label_8041B15C:
    ctx->pc = 0x8041B15Cu;
    ctx->downcount -= 3;
    // 8041B15C: stw     r3, 232(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(232);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B160:
    ctx->pc = 0x8041B160u;
    // 8041B160: li      r3, 172
    ctx->gpr[3] = (u32)(s32)(172);

label_8041B164:
    ctx->pc = 0x8041B164u;
    // 8041B164: bl      0x801C1C48
    {
            ctx->lr = 0x8041B168u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B168:
    ctx->pc = 0x8041B168u;
    ctx->downcount -= 2;
    // 8041B168: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B16C:
    ctx->pc = 0x8041B16Cu;
    // 8041B16C: bc    12, 2, 0x8041B178
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B178;
        }
    }

label_8041B170:
    ctx->pc = 0x8041B170u;
    ctx->downcount -= 2;
    // 8041B170: li      r4, 0
    ctx->gpr[4] = (u32)(s32)(0);

label_8041B174:
    ctx->pc = 0x8041B174u;
    // 8041B174: bl      0x8041D384
    {
            ctx->lr = 0x8041B178u;
            ctx->pc = 0x8041D384u;
            return;
    }

label_8041B178:
    ctx->pc = 0x8041B178u;
    ctx->downcount -= 3;
    // 8041B178: stw     r3, 236(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(236);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B17C:
    ctx->pc = 0x8041B17Cu;
    // 8041B17C: li      r3, 292
    ctx->gpr[3] = (u32)(s32)(292);

label_8041B180:
    ctx->pc = 0x8041B180u;
    // 8041B180: bl      0x801C1C48
    {
            ctx->lr = 0x8041B184u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B184:
    ctx->pc = 0x8041B184u;
    ctx->downcount -= 2;
    // 8041B184: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B188:
    ctx->pc = 0x8041B188u;
    // 8041B188: bc    12, 2, 0x8041B190
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B190;
        }
    }

label_8041B18C:
    ctx->pc = 0x8041B18Cu;
    ctx->downcount -= 1;
    // 8041B18C: bl      0x8041DA3C
    {
            ctx->lr = 0x8041B190u;
            ctx->pc = 0x8041DA3Cu;
            return;
    }

label_8041B190:
    ctx->pc = 0x8041B190u;
    ctx->downcount -= 3;
    // 8041B190: stw     r3, 240(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(240);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B194:
    ctx->pc = 0x8041B194u;
    // 8041B194: li      r3, 272
    ctx->gpr[3] = (u32)(s32)(272);

label_8041B198:
    ctx->pc = 0x8041B198u;
    // 8041B198: bl      0x801C1C48
    {
            ctx->lr = 0x8041B19Cu;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B19C:
    ctx->pc = 0x8041B19Cu;
    ctx->downcount -= 2;
    // 8041B19C: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B1A0:
    ctx->pc = 0x8041B1A0u;
    // 8041B1A0: bc    12, 2, 0x8041B1A8
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            goto label_8041B1A8;
        }
    }

label_8041B1A4:
    ctx->pc = 0x8041B1A4u;
    ctx->downcount -= 1;
    // 8041B1A4: bl      0x8041DC3C
    {
            ctx->lr = 0x8041B1A8u;
            ctx->pc = 0x8041DC3Cu;
            return;
    }

label_8041B1A8:
    ctx->pc = 0x8041B1A8u;
    ctx->downcount -= 3;
    // 8041B1A8: stw     r3, 244(r30)
    {
        u32 ea = ctx->gpr[30] + (u32)(s32)(244);
        mem_write32(ctx, ea, (u32)ctx->gpr[3]);
    }

label_8041B1AC:
    ctx->pc = 0x8041B1ACu;
    // 8041B1AC: li      r3, 300
    ctx->gpr[3] = (u32)(s32)(300);

label_8041B1B0:
    ctx->pc = 0x8041B1B0u;
    // 8041B1B0: bl      0x801C1C48
    {
            ctx->lr = 0x8041B1B4u;
            ctx->pc = 0x801C1C48u;
            return;
    }

label_8041B1B4:
    ctx->pc = 0x8041B1B4u;
    ctx->downcount -= 2;
    // 8041B1B4: cmpwi   r3, 0
    {
        s32 val_a = (s32)(ctx->gpr[3]);
        s32 val_b = (s32)(0);
        u32 cr_bits = 0;
        if (val_a < val_b)  cr_bits |= 0x8u;
        if (val_a > val_b)  cr_bits |= 0x4u;
        if (val_a == val_b) cr_bits |= 0x2u;
        cr_bits |= (ctx->xer >> 31) & 1u;
        ctx->cr = (ctx->cr & ~(0xFu << 28)) | (cr_bits << 28);
    }

label_8041B1B8:
    ctx->pc = 0x8041B1B8u;
    // 8041B1B8: bc    12, 2, 0x8041B1C0
    {
        bool ctr_ok = true;
        bool cr_ok = (((ctx->cr & 0x20000000u) != 0) == true);
        if (ctr_ok && cr_ok) {
            ctx->pc = 0x8041B1C0u;
            return;
        }
    }

label_8041B1BC:
    ctx->pc = 0x8041B1BCu;
    ctx->downcount -= 1;
    // 8041B1BC: bl      0x8041DFCC
    {
            ctx->lr = 0x8041B1C0u;
            ctx->pc = 0x8041DFCCu;
            return;
    }

    ctx->pc = 0x8041B1C0u;
    return;
return_dispatch_804171C0:
    if (ctx->downcount <= -(s64)DOLRECOMP_C_LOOP_CYCLE_BUDGET) return;
    switch (ctx->pc) {
    case 0x804171C8u: goto label_804171C8;
    case 0x804171D4u: goto label_804171D4;
    case 0x804171E0u: goto label_804171E0;
    case 0x804171ECu: goto label_804171EC;
    case 0x804171F8u: goto label_804171F8;
    case 0x80417204u: goto label_80417204;
    case 0x80417210u: goto label_80417210;
    case 0x80417220u: goto label_80417220;
    case 0x80417244u: goto label_80417244;
    case 0x80417250u: goto label_80417250;
    case 0x8041725Cu: goto label_8041725C;
    case 0x80417268u: goto label_80417268;
    case 0x804172ACu: goto label_804172AC;
    case 0x8041733Cu: goto label_8041733C;
    case 0x80417344u: goto label_80417344;
    case 0x8041734Cu: goto label_8041734C;
    case 0x80417354u: goto label_80417354;
    case 0x80417380u: goto label_80417380;
    case 0x80417388u: goto label_80417388;
    case 0x804173ACu: goto label_804173AC;
    case 0x804173C0u: goto label_804173C0;
    case 0x804173C8u: goto label_804173C8;
    case 0x804173D0u: goto label_804173D0;
    case 0x804173D8u: goto label_804173D8;
    case 0x80417400u: goto label_80417400;
    case 0x80417410u: goto label_80417410;
    case 0x80417418u: goto label_80417418;
    case 0x80417434u: goto label_80417434;
    case 0x80417460u: goto label_80417460;
    case 0x80417468u: goto label_80417468;
    case 0x80417470u: goto label_80417470;
    case 0x80417478u: goto label_80417478;
    case 0x80417480u: goto label_80417480;
    case 0x80417488u: goto label_80417488;
    case 0x80417490u: goto label_80417490;
    case 0x80417498u: goto label_80417498;
    case 0x804174A0u: goto label_804174A0;
    case 0x804174B4u: goto label_804174B4;
    case 0x804174C8u: goto label_804174C8;
    case 0x804174D0u: goto label_804174D0;
    case 0x80417504u: goto label_80417504;
    case 0x80417508u: goto label_80417508;
    case 0x8041750Cu: goto label_8041750C;
    case 0x80417510u: goto label_80417510;
    case 0x80417514u: goto label_80417514;
    case 0x80417518u: goto label_80417518;
    case 0x8041751Cu: goto label_8041751C;
    case 0x80417520u: goto label_80417520;
    case 0x80417524u: goto label_80417524;
    case 0x80417528u: goto label_80417528;
    case 0x8041752Cu: goto label_8041752C;
    case 0x80417530u: goto label_80417530;
    case 0x80417544u: goto label_80417544;
    case 0x80417558u: goto label_80417558;
    case 0x8041755Cu: goto label_8041755C;
    case 0x80417598u: goto label_80417598;
    case 0x804175A0u: goto label_804175A0;
    case 0x804175B4u: goto label_804175B4;
    case 0x804175CCu: goto label_804175CC;
    case 0x804175E0u: goto label_804175E0;
    case 0x804175ECu: goto label_804175EC;
    case 0x804175F4u: goto label_804175F4;
    case 0x80417608u: goto label_80417608;
    case 0x80417610u: goto label_80417610;
    case 0x80417660u: goto label_80417660;
    case 0x80417688u: goto label_80417688;
    case 0x804176B4u: goto label_804176B4;
    case 0x804176C0u: goto label_804176C0;
    case 0x804176C8u: goto label_804176C8;
    case 0x804176D4u: goto label_804176D4;
    case 0x804176E0u: goto label_804176E0;
    case 0x804176ECu: goto label_804176EC;
    case 0x804176F4u: goto label_804176F4;
    case 0x8041771Cu: goto label_8041771C;
    case 0x80417768u: goto label_80417768;
    case 0x80417770u: goto label_80417770;
    case 0x80417778u: goto label_80417778;
    case 0x80417780u: goto label_80417780;
    case 0x80417788u: goto label_80417788;
    case 0x80417790u: goto label_80417790;
    case 0x80417798u: goto label_80417798;
    case 0x804177A0u: goto label_804177A0;
    case 0x804177D8u: goto label_804177D8;
    case 0x804177E0u: goto label_804177E0;
    case 0x80417808u: goto label_80417808;
    case 0x8041780Cu: goto label_8041780C;
    case 0x80417810u: goto label_80417810;
    case 0x80417820u: goto label_80417820;
    case 0x80417824u: goto label_80417824;
    case 0x8041782Cu: goto label_8041782C;
    case 0x8041783Cu: goto label_8041783C;
    case 0x80417854u: goto label_80417854;
    case 0x80417864u: goto label_80417864;
    case 0x80417870u: goto label_80417870;
    case 0x8041788Cu: goto label_8041788C;
    case 0x80417894u: goto label_80417894;
    case 0x804178A0u: goto label_804178A0;
    case 0x804178ACu: goto label_804178AC;
    case 0x804178B8u: goto label_804178B8;
    case 0x804178C4u: goto label_804178C4;
    case 0x804178D0u: goto label_804178D0;
    case 0x80417910u: goto label_80417910;
    case 0x8041791Cu: goto label_8041791C;
    case 0x80417928u: goto label_80417928;
    case 0x80417940u: goto label_80417940;
    case 0x80417954u: goto label_80417954;
    case 0x80417958u: goto label_80417958;
    case 0x8041795Cu: goto label_8041795C;
    case 0x80417960u: goto label_80417960;
    case 0x80417970u: goto label_80417970;
    case 0x80417978u: goto label_80417978;
    case 0x80417988u: goto label_80417988;
    case 0x804179A0u: goto label_804179A0;
    case 0x804179B0u: goto label_804179B0;
    case 0x804179BCu: goto label_804179BC;
    case 0x804179C0u: goto label_804179C0;
    case 0x804179C4u: goto label_804179C4;
    case 0x804179D4u: goto label_804179D4;
    case 0x804179D8u: goto label_804179D8;
    case 0x804179E0u: goto label_804179E0;
    case 0x804179F0u: goto label_804179F0;
    case 0x80417A08u: goto label_80417A08;
    case 0x80417A18u: goto label_80417A18;
    case 0x80417A24u: goto label_80417A24;
    case 0x80417A28u: goto label_80417A28;
    case 0x80417A2Cu: goto label_80417A2C;
    case 0x80417A48u: goto label_80417A48;
    case 0x80417A90u: goto label_80417A90;
    case 0x80417A94u: goto label_80417A94;
    case 0x80417A98u: goto label_80417A98;
    case 0x80417A9Cu: goto label_80417A9C;
    case 0x80417AA0u: goto label_80417AA0;
    case 0x80417AA4u: goto label_80417AA4;
    case 0x80417AACu: goto label_80417AAC;
    case 0x80417ABCu: goto label_80417ABC;
    case 0x80417AD4u: goto label_80417AD4;
    case 0x80417AE4u: goto label_80417AE4;
    case 0x80417AF0u: goto label_80417AF0;
    case 0x80417AF4u: goto label_80417AF4;
    case 0x80417AF8u: goto label_80417AF8;
    case 0x80417B08u: goto label_80417B08;
    case 0x80417B10u: goto label_80417B10;
    case 0x80417B20u: goto label_80417B20;
    case 0x80417B38u: goto label_80417B38;
    case 0x80417B48u: goto label_80417B48;
    case 0x80417B54u: goto label_80417B54;
    case 0x80417B58u: goto label_80417B58;
    case 0x80417B5Cu: goto label_80417B5C;
    case 0x80417B70u: goto label_80417B70;
    case 0x80417B80u: goto label_80417B80;
    case 0x80417B98u: goto label_80417B98;
    case 0x80417BA8u: goto label_80417BA8;
    case 0x80417BC0u: goto label_80417BC0;
    case 0x80417BC4u: goto label_80417BC4;
    case 0x80417BC8u: goto label_80417BC8;
    case 0x80417BCCu: goto label_80417BCC;
    case 0x80417BE0u: goto label_80417BE0;
    case 0x80417BECu: goto label_80417BEC;
    case 0x80417BF4u: goto label_80417BF4;
    case 0x80417C08u: goto label_80417C08;
    case 0x80417C14u: goto label_80417C14;
    case 0x80417C20u: goto label_80417C20;
    case 0x80417C2Cu: goto label_80417C2C;
    case 0x80417C38u: goto label_80417C38;
    case 0x80417C40u: goto label_80417C40;
    case 0x80417C50u: goto label_80417C50;
    case 0x80417C68u: goto label_80417C68;
    case 0x80417C78u: goto label_80417C78;
    case 0x80417C88u: goto label_80417C88;
    case 0x80417CA0u: goto label_80417CA0;
    case 0x80417CB4u: goto label_80417CB4;
    case 0x80417CCCu: goto label_80417CCC;
    case 0x80417CD8u: goto label_80417CD8;
    case 0x80417CECu: goto label_80417CEC;
    case 0x80417CFCu: goto label_80417CFC;
    case 0x80417D34u: goto label_80417D34;
    case 0x80417D64u: goto label_80417D64;
    case 0x80417DB4u: goto label_80417DB4;
    case 0x80417DE0u: goto label_80417DE0;
    case 0x80417DECu: goto label_80417DEC;
    case 0x80417E38u: goto label_80417E38;
    case 0x80417E4Cu: goto label_80417E4C;
    case 0x80417E8Cu: goto label_80417E8C;
    case 0x80417E9Cu: goto label_80417E9C;
    case 0x80417EA8u: goto label_80417EA8;
    case 0x80417F18u: goto label_80417F18;
    case 0x80417F30u: goto label_80417F30;
    case 0x80417F48u: goto label_80417F48;
    case 0x80417F60u: goto label_80417F60;
    case 0x80417F78u: goto label_80417F78;
    case 0x80417F90u: goto label_80417F90;
    case 0x80417FA8u: goto label_80417FA8;
    case 0x80417FC0u: goto label_80417FC0;
    case 0x80417FD8u: goto label_80417FD8;
    case 0x80417FE8u: goto label_80417FE8;
    case 0x80417FF0u: goto label_80417FF0;
    case 0x80418028u: goto label_80418028;
    case 0x80418050u: goto label_80418050;
    case 0x80418064u: goto label_80418064;
    case 0x8041807Cu: goto label_8041807C;
    case 0x804180ACu: goto label_804180AC;
    case 0x804180B4u: goto label_804180B4;
    case 0x804180E4u: goto label_804180E4;
    case 0x80418120u: goto label_80418120;
    case 0x80418140u: goto label_80418140;
    case 0x8041814Cu: goto label_8041814C;
    case 0x80418164u: goto label_80418164;
    case 0x80418178u: goto label_80418178;
    case 0x80418188u: goto label_80418188;
    case 0x804181D4u: goto label_804181D4;
    case 0x804181E4u: goto label_804181E4;
    case 0x80418250u: goto label_80418250;
    case 0x80418278u: goto label_80418278;
    case 0x80418280u: goto label_80418280;
    case 0x80418298u: goto label_80418298;
    case 0x804182B8u: goto label_804182B8;
    case 0x804182D4u: goto label_804182D4;
    case 0x8041830Cu: goto label_8041830C;
    case 0x80418324u: goto label_80418324;
    case 0x80418380u: goto label_80418380;
    case 0x804183A4u: goto label_804183A4;
    case 0x804183BCu: goto label_804183BC;
    case 0x804183F4u: goto label_804183F4;
    case 0x80418400u: goto label_80418400;
    case 0x80418440u: goto label_80418440;
    case 0x80418470u: goto label_80418470;
    case 0x80418490u: goto label_80418490;
    case 0x804184A8u: goto label_804184A8;
    case 0x804184B4u: goto label_804184B4;
    case 0x804184DCu: goto label_804184DC;
    case 0x804184F0u: goto label_804184F0;
    case 0x8041850Cu: goto label_8041850C;
    case 0x80418518u: goto label_80418518;
    case 0x8041853Cu: goto label_8041853C;
    case 0x80418548u: goto label_80418548;
    case 0x80418550u: goto label_80418550;
    case 0x8041855Cu: goto label_8041855C;
    case 0x80418564u: goto label_80418564;
    case 0x80418588u: goto label_80418588;
    case 0x80418594u: goto label_80418594;
    case 0x804185A4u: goto label_804185A4;
    case 0x804185C0u: goto label_804185C0;
    case 0x804185D0u: goto label_804185D0;
    case 0x8041860Cu: goto label_8041860C;
    case 0x804186A0u: goto label_804186A0;
    case 0x804186DCu: goto label_804186DC;
    case 0x8041872Cu: goto label_8041872C;
    case 0x80418738u: goto label_80418738;
    case 0x80418748u: goto label_80418748;
    case 0x8041878Cu: goto label_8041878C;
    case 0x8041879Cu: goto label_8041879C;
    case 0x804187B8u: goto label_804187B8;
    case 0x804187C4u: goto label_804187C4;
    case 0x80418808u: goto label_80418808;
    case 0x80418814u: goto label_80418814;
    case 0x80418824u: goto label_80418824;
    case 0x80418830u: goto label_80418830;
    case 0x80418888u: goto label_80418888;
    case 0x80418894u: goto label_80418894;
    case 0x804188A4u: goto label_804188A4;
    case 0x804188B0u: goto label_804188B0;
    case 0x804188E0u: goto label_804188E0;
    case 0x804188F0u: goto label_804188F0;
    case 0x80418914u: goto label_80418914;
    case 0x80418954u: goto label_80418954;
    case 0x804189A4u: goto label_804189A4;
    case 0x804189C8u: goto label_804189C8;
    case 0x804189D8u: goto label_804189D8;
    case 0x80418A04u: goto label_80418A04;
    case 0x80418A14u: goto label_80418A14;
    case 0x80418A28u: goto label_80418A28;
    case 0x80418A3Cu: goto label_80418A3C;
    case 0x80418A64u: goto label_80418A64;
    case 0x80418A78u: goto label_80418A78;
    case 0x80418A9Cu: goto label_80418A9C;
    case 0x80418AB4u: goto label_80418AB4;
    case 0x80418ADCu: goto label_80418ADC;
    case 0x80418B20u: goto label_80418B20;
    case 0x80418B38u: goto label_80418B38;
    case 0x80418B60u: goto label_80418B60;
    case 0x80418BB0u: goto label_80418BB0;
    case 0x80418BBCu: goto label_80418BBC;
    case 0x80418BDCu: goto label_80418BDC;
    case 0x80418BE8u: goto label_80418BE8;
    case 0x80418C18u: goto label_80418C18;
    case 0x80418C24u: goto label_80418C24;
    case 0x80418D54u: goto label_80418D54;
    case 0x80418D68u: goto label_80418D68;
    case 0x80418D9Cu: goto label_80418D9C;
    case 0x80418DCCu: goto label_80418DCC;
    case 0x80418DD8u: goto label_80418DD8;
    case 0x80418DE0u: goto label_80418DE0;
    case 0x80418DF8u: goto label_80418DF8;
    case 0x80418E00u: goto label_80418E00;
    case 0x80418E0Cu: goto label_80418E0C;
    case 0x80418E5Cu: goto label_80418E5C;
    case 0x80418E68u: goto label_80418E68;
    case 0x80418E78u: goto label_80418E78;
    case 0x80418EBCu: goto label_80418EBC;
    case 0x80418EE4u: goto label_80418EE4;
    case 0x80418EFCu: goto label_80418EFC;
    case 0x80418F30u: goto label_80418F30;
    case 0x80418F50u: goto label_80418F50;
    case 0x80418F5Cu: goto label_80418F5C;
    case 0x80418F70u: goto label_80418F70;
    case 0x80418F88u: goto label_80418F88;
    case 0x80418FA4u: goto label_80418FA4;
    case 0x80418FB0u: goto label_80418FB0;
    case 0x80418FE4u: goto label_80418FE4;
    case 0x80418FF0u: goto label_80418FF0;
    case 0x80418FF8u: goto label_80418FF8;
    case 0x80419004u: goto label_80419004;
    case 0x8041900Cu: goto label_8041900C;
    case 0x80419030u: goto label_80419030;
    case 0x80419040u: goto label_80419040;
    case 0x80419050u: goto label_80419050;
    case 0x8041906Cu: goto label_8041906C;
    case 0x8041907Cu: goto label_8041907C;
    case 0x804190B0u: goto label_804190B0;
    case 0x804190D0u: goto label_804190D0;
    case 0x804190ECu: goto label_804190EC;
    case 0x80419110u: goto label_80419110;
    case 0x80419138u: goto label_80419138;
    case 0x80419144u: goto label_80419144;
    case 0x80419150u: goto label_80419150;
    case 0x8041915Cu: goto label_8041915C;
    case 0x80419170u: goto label_80419170;
    case 0x8041917Cu: goto label_8041917C;
    case 0x80419188u: goto label_80419188;
    case 0x80419194u: goto label_80419194;
    case 0x804191A4u: goto label_804191A4;
    case 0x804191B0u: goto label_804191B0;
    case 0x804191BCu: goto label_804191BC;
    case 0x804191C8u: goto label_804191C8;
    case 0x804191F8u: goto label_804191F8;
    case 0x80419210u: goto label_80419210;
    case 0x8041922Cu: goto label_8041922C;
    case 0x80419238u: goto label_80419238;
    case 0x80419244u: goto label_80419244;
    case 0x8041925Cu: goto label_8041925C;
    case 0x80419274u: goto label_80419274;
    case 0x804192C4u: goto label_804192C4;
    case 0x804192DCu: goto label_804192DC;
    case 0x804192F4u: goto label_804192F4;
    case 0x80419320u: goto label_80419320;
    case 0x8041932Cu: goto label_8041932C;
    case 0x80419358u: goto label_80419358;
    case 0x80419364u: goto label_80419364;
    case 0x8041937Cu: goto label_8041937C;
    case 0x80419394u: goto label_80419394;
    case 0x804193ACu: goto label_804193AC;
    case 0x804193D4u: goto label_804193D4;
    case 0x804193ECu: goto label_804193EC;
    case 0x80419418u: goto label_80419418;
    case 0x80419424u: goto label_80419424;
    case 0x80419450u: goto label_80419450;
    case 0x80419460u: goto label_80419460;
    case 0x80419470u: goto label_80419470;
    case 0x8041949Cu: goto label_8041949C;
    case 0x804194A8u: goto label_804194A8;
    case 0x804194D4u: goto label_804194D4;
    case 0x804194E0u: goto label_804194E0;
    case 0x804194F8u: goto label_804194F8;
    case 0x80419510u: goto label_80419510;
    case 0x80419528u: goto label_80419528;
    case 0x80419544u: goto label_80419544;
    case 0x80419550u: goto label_80419550;
    case 0x8041956Cu: goto label_8041956C;
    case 0x80419594u: goto label_80419594;
    case 0x804195D4u: goto label_804195D4;
    case 0x804195FCu: goto label_804195FC;
    case 0x80419624u: goto label_80419624;
    case 0x8041962Cu: goto label_8041962C;
    case 0x80419644u: goto label_80419644;
    case 0x80419664u: goto label_80419664;
    case 0x80419680u: goto label_80419680;
    case 0x804196A4u: goto label_804196A4;
    case 0x804196B4u: goto label_804196B4;
    case 0x804196F0u: goto label_804196F0;
    case 0x8041970Cu: goto label_8041970C;
    case 0x80419720u: goto label_80419720;
    case 0x80419730u: goto label_80419730;
    case 0x80419770u: goto label_80419770;
    case 0x80419784u: goto label_80419784;
    case 0x8041979Cu: goto label_8041979C;
    case 0x804197B0u: goto label_804197B0;
    case 0x804197C0u: goto label_804197C0;
    case 0x804197D4u: goto label_804197D4;
    case 0x80419808u: goto label_80419808;
    case 0x8041980Cu: goto label_8041980C;
    case 0x80419818u: goto label_80419818;
    case 0x804198B0u: goto label_804198B0;
    case 0x804198ECu: goto label_804198EC;
    case 0x804198FCu: goto label_804198FC;
    case 0x80419968u: goto label_80419968;
    case 0x80419974u: goto label_80419974;
    case 0x80419984u: goto label_80419984;
    case 0x80419C20u: goto label_80419C20;
    case 0x80419C60u: goto label_80419C60;
    case 0x80419C7Cu: goto label_80419C7C;
    case 0x80419C98u: goto label_80419C98;
    case 0x80419CB4u: goto label_80419CB4;
    case 0x80419CC0u: goto label_80419CC0;
    case 0x80419CD4u: goto label_80419CD4;
    case 0x80419CE0u: goto label_80419CE0;
    case 0x80419CF4u: goto label_80419CF4;
    case 0x80419D04u: goto label_80419D04;
    case 0x80419D0Cu: goto label_80419D0C;
    case 0x80419D20u: goto label_80419D20;
    case 0x80419D38u: goto label_80419D38;
    case 0x80419D40u: goto label_80419D40;
    case 0x80419D50u: goto label_80419D50;
    case 0x80419D64u: goto label_80419D64;
    case 0x80419D90u: goto label_80419D90;
    case 0x80419DA4u: goto label_80419DA4;
    case 0x80419DE8u: goto label_80419DE8;
    case 0x80419E24u: goto label_80419E24;
    case 0x80419E3Cu: goto label_80419E3C;
    case 0x80419E6Cu: goto label_80419E6C;
    case 0x80419EC8u: goto label_80419EC8;
    case 0x80419F08u: goto label_80419F08;
    case 0x80419F78u: goto label_80419F78;
    case 0x80419FA8u: goto label_80419FA8;
    case 0x80419FC4u: goto label_80419FC4;
    case 0x80419FD8u: goto label_80419FD8;
    case 0x8041A004u: goto label_8041A004;
    case 0x8041A034u: goto label_8041A034;
    case 0x8041A0BCu: goto label_8041A0BC;
    case 0x8041A0CCu: goto label_8041A0CC;
    case 0x8041A170u: goto label_8041A170;
    case 0x8041A1D4u: goto label_8041A1D4;
    case 0x8041A1E0u: goto label_8041A1E0;
    case 0x8041A220u: goto label_8041A220;
    case 0x8041A264u: goto label_8041A264;
    case 0x8041A2CCu: goto label_8041A2CC;
    case 0x8041A318u: goto label_8041A318;
    case 0x8041A328u: goto label_8041A328;
    case 0x8041A37Cu: goto label_8041A37C;
    case 0x8041A520u: goto label_8041A520;
    case 0x8041A530u: goto label_8041A530;
    case 0x8041A5E8u: goto label_8041A5E8;
    case 0x8041A608u: goto label_8041A608;
    case 0x8041A61Cu: goto label_8041A61C;
    case 0x8041A6BCu: goto label_8041A6BC;
    case 0x8041A6E0u: goto label_8041A6E0;
    case 0x8041A6ECu: goto label_8041A6EC;
    case 0x8041A700u: goto label_8041A700;
    case 0x8041A714u: goto label_8041A714;
    case 0x8041A724u: goto label_8041A724;
    case 0x8041A72Cu: goto label_8041A72C;
    case 0x8041A740u: goto label_8041A740;
    case 0x8041A758u: goto label_8041A758;
    case 0x8041A760u: goto label_8041A760;
    case 0x8041A76Cu: goto label_8041A76C;
    case 0x8041A784u: goto label_8041A784;
    case 0x8041A790u: goto label_8041A790;
    case 0x8041A798u: goto label_8041A798;
    case 0x8041A7A4u: goto label_8041A7A4;
    case 0x8041A814u: goto label_8041A814;
    case 0x8041A828u: goto label_8041A828;
    case 0x8041A874u: goto label_8041A874;
    case 0x8041A87Cu: goto label_8041A87C;
    case 0x8041A908u: goto label_8041A908;
    case 0x8041A914u: goto label_8041A914;
    case 0x8041A924u: goto label_8041A924;
    case 0x8041A990u: goto label_8041A990;
    case 0x8041A9F8u: goto label_8041A9F8;
    case 0x8041AA20u: goto label_8041AA20;
    case 0x8041AA28u: goto label_8041AA28;
    case 0x8041AB68u: goto label_8041AB68;
    case 0x8041AB78u: goto label_8041AB78;
    case 0x8041ABB8u: goto label_8041ABB8;
    case 0x8041ABD0u: goto label_8041ABD0;
    case 0x8041ABE4u: goto label_8041ABE4;
    case 0x8041ABF8u: goto label_8041ABF8;
    case 0x8041AC10u: goto label_8041AC10;
    case 0x8041AC24u: goto label_8041AC24;
    case 0x8041AC38u: goto label_8041AC38;
    case 0x8041AC50u: goto label_8041AC50;
    case 0x8041AC64u: goto label_8041AC64;
    case 0x8041AC78u: goto label_8041AC78;
    case 0x8041AC90u: goto label_8041AC90;
    case 0x8041ACA4u: goto label_8041ACA4;
    case 0x8041ACB8u: goto label_8041ACB8;
    case 0x8041ACD0u: goto label_8041ACD0;
    case 0x8041ACE4u: goto label_8041ACE4;
    case 0x8041ACF8u: goto label_8041ACF8;
    case 0x8041AD10u: goto label_8041AD10;
    case 0x8041AD24u: goto label_8041AD24;
    case 0x8041AD38u: goto label_8041AD38;
    case 0x8041AD50u: goto label_8041AD50;
    case 0x8041AD64u: goto label_8041AD64;
    case 0x8041AD78u: goto label_8041AD78;
    case 0x8041AD90u: goto label_8041AD90;
    case 0x8041ADA4u: goto label_8041ADA4;
    case 0x8041ADB8u: goto label_8041ADB8;
    case 0x8041ADD0u: goto label_8041ADD0;
    case 0x8041ADE4u: goto label_8041ADE4;
    case 0x8041ADF8u: goto label_8041ADF8;
    case 0x8041AE10u: goto label_8041AE10;
    case 0x8041AE24u: goto label_8041AE24;
    case 0x8041AE38u: goto label_8041AE38;
    case 0x8041AE50u: goto label_8041AE50;
    case 0x8041AE64u: goto label_8041AE64;
    case 0x8041AE78u: goto label_8041AE78;
    case 0x8041AE90u: goto label_8041AE90;
    case 0x8041AEA4u: goto label_8041AEA4;
    case 0x8041AEB0u: goto label_8041AEB0;
    case 0x8041AEC4u: goto label_8041AEC4;
    case 0x8041AEDCu: goto label_8041AEDC;
    case 0x8041AEF0u: goto label_8041AEF0;
    case 0x8041AF04u: goto label_8041AF04;
    case 0x8041AF1Cu: goto label_8041AF1C;
    case 0x8041AF30u: goto label_8041AF30;
    case 0x8041AF44u: goto label_8041AF44;
    case 0x8041AF5Cu: goto label_8041AF5C;
    case 0x8041AF70u: goto label_8041AF70;
    case 0x8041AFA8u: goto label_8041AFA8;
    case 0x8041AFC4u: goto label_8041AFC4;
    case 0x8041AFDCu: goto label_8041AFDC;
    case 0x8041AFE8u: goto label_8041AFE8;
    case 0x8041B000u: goto label_8041B000;
    case 0x8041B008u: goto label_8041B008;
    case 0x8041B030u: goto label_8041B030;
    case 0x8041B038u: goto label_8041B038;
    case 0x8041B048u: goto label_8041B048;
    case 0x8041B054u: goto label_8041B054;
    case 0x8041B064u: goto label_8041B064;
    case 0x8041B070u: goto label_8041B070;
    case 0x8041B080u: goto label_8041B080;
    case 0x8041B08Cu: goto label_8041B08C;
    case 0x8041B09Cu: goto label_8041B09C;
    case 0x8041B0A8u: goto label_8041B0A8;
    case 0x8041B0B4u: goto label_8041B0B4;
    case 0x8041B0C0u: goto label_8041B0C0;
    case 0x8041B0CCu: goto label_8041B0CC;
    case 0x8041B0D8u: goto label_8041B0D8;
    case 0x8041B0E4u: goto label_8041B0E4;
    case 0x8041B0F0u: goto label_8041B0F0;
    case 0x8041B0FCu: goto label_8041B0FC;
    case 0x8041B108u: goto label_8041B108;
    case 0x8041B114u: goto label_8041B114;
    case 0x8041B120u: goto label_8041B120;
    case 0x8041B12Cu: goto label_8041B12C;
    case 0x8041B138u: goto label_8041B138;
    case 0x8041B144u: goto label_8041B144;
    case 0x8041B150u: goto label_8041B150;
    case 0x8041B15Cu: goto label_8041B15C;
    case 0x8041B168u: goto label_8041B168;
    case 0x8041B178u: goto label_8041B178;
    case 0x8041B184u: goto label_8041B184;
    case 0x8041B190u: goto label_8041B190;
    case 0x8041B19Cu: goto label_8041B19C;
    case 0x8041B1A8u: goto label_8041B1A8;
    case 0x8041B1B4u: goto label_8041B1B4;
    default: return;
    }
}

